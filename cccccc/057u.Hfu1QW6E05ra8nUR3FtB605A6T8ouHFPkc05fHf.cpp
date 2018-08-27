
        
        // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel AVX intrinsics to access the SIMD instruction set.
double DotProductAVX(const double* u, const double* v, int n) {
  int max_offset = n - 4;
  int offset = 0;
  // Accumulate a set of 4 sums in sum, by loading pairs of 4 values from u and
  // v, and multiplying them together in parallel.
  __m256d sum = _mm256_setzero_pd();
  if (offset <= max_offset) {
    offset = 4;
    // Aligned load is reputedly faster but requires 32 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 31) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 31) == 0) {
      // Use aligned load.
      __m256d floats1 = _mm256_load_pd(u);
      __m256d floats2 = _mm256_load_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_load_pd(u + offset);
        floats2 = _mm256_load_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    } else {
      // Use unaligned load.
      __m256d floats1 = _mm256_loadu_pd(u);
      __m256d floats2 = _mm256_loadu_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_loadu_pd(u + offset);
        floats2 = _mm256_loadu_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    }
  }
  // Add the 4 product sums together horizontally. Not so easy as with sse, as
  // there is no add across the upper/lower 128 bit boundary, so permute to
  // move the upper 128 bits to lower in another register.
  __m256d sum2 = _mm256_permute2f128_pd(sum, sum, 1);
  sum = _mm256_hadd_pd(sum, sum2);
  sum = _mm256_hadd_pd(sum, sum);
  double result;
  // _mm256_extract_f64 doesn't exist, but resist the temptation to use an sse
  // instruction, as that introduces a 70 cycle delay. All this casting is to
  // fool the intrinsics into thinking we are extracting the bottom int64.
  auto cast_sum = _mm256_castpd_si256(sum);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored '-Wstrict-aliasing'
  *(reinterpret_cast<int64_t*>(&result)) =
#if defined(_WIN32) || defined(__i386__)
      // This is a very simple workaround that is activated
      // for all platforms that do not have _mm256_extract_epi64.
      // _mm256_extract_epi64(X, Y) == ((uint64_t*)&X)[Y]
      ((uint64_t*)&cast_sum)[0]
#else
      _mm256_extract_epi64(cast_sum, 0)
#endif
      ;
#pragma GCC diagnostic pop
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n) {
  int max_offset = n - 2;
  int offset = 0;
  // Accumulate a set of 2 sums in sum, by loading pairs of 2 values from u and
  // v, and multiplying them together in parallel.
  __m128d sum = _mm_setzero_pd();
  if (offset <= max_offset) {
    offset = 2;
    // Aligned load is reputedly faster but requires 16 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 15) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 15) == 0) {
      // Use aligned load.
      sum = _mm_load_pd(u);
      __m128d floats2 = _mm_load_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_load_pd(u + offset);
        floats2 = _mm_load_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    } else {
      // Use unaligned load.
      sum = _mm_loadu_pd(u);
      __m128d floats2 = _mm_loadu_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_loadu_pd(u + offset);
        floats2 = _mm_loadu_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    }
  }
  // Add the 2 sums in sum horizontally.
  sum = _mm_hadd_pd(sum, sum);
  // Extract the low result.
  double result = _mm_cvtsd_f64(sum);
  // Add on any left-over products.
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    // Computes part of matrix.vector v = Wu. Computes N=32 results.
// For details see PartialMatrixDotVector64 with N=32.
static void PartialMatrixDotVector32(const int8_t* wi, const double* scales,
                                     const int8_t* u, int num_in, int num_out,
                                     double* v) {
  // Register containing 16-bit ones for horizontal add with 16->32 bit
  // conversion.
  __m256i ones =
      _mm256_set_epi16(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
  __m256i shift_id = _mm256_set_epi32(0, 7, 6, 5, 4, 3, 2, 1);
  // Initialize all the results to 0.
  __m256i result0 = _mm256_setzero_si256();
  __m256i result1 = _mm256_setzero_si256();
  __m256i result2 = _mm256_setzero_si256();
  __m256i result3 = _mm256_setzero_si256();
  // Iterate over the input (u), one registerful at a time.
  for (int j = 0; j < num_in;) {
    __m256i inputs =
        _mm256_loadu_si256(reinterpret_cast<const __m256i*>(u + j));
    // Inputs are processed in groups of kNumInputsPerGroup, replicated
    // kNumInputGroups times.
    for (int ig = 0; ig < kNumInputGroups && j < num_in;
         ++ig, j += kNumInputsPerGroup) {
      // Replicate the low 32 bits (4 inputs) 8 times.
      __m256i rep_input =
          _mm256_broadcastd_epi32(_mm256_castsi256_si128(inputs));
      // Rotate the inputs in groups of 4, so the next 4 inputs are ready.
      inputs = _mm256_permutevar8x32_epi32(inputs, shift_id);
      __m256i weights, reps;
      // Mul-add, with horizontal add of the 4 inputs to each of the results.
      MultiplyGroup(rep_input, ones, wi, weights, reps, result0);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result1);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result2);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result3);
    }
  }
  ExtractResults(result0, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result1, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result2, shift_id, wi, scales, kNumOutputsPerRegister, v);
  num_out -= kNumOutputsPerRegister * 3;
  ExtractResults(result3, shift_id, wi, scales,
                 std::min(kNumOutputsPerRegister, num_out), v);
}
    
    namespace tesseract {
    }
    
    void Tesseract::tilde_delete(PAGE_RES_IT &page_res_it) {
  WERD_RES *word;
  PAGE_RES_IT copy_it;
  bool deleting_from_bol = false;
  bool marked_delete_point = false;
  int16_t debug_delete_mode;
  CRUNCH_MODE delete_mode;
  int16_t x_debug_delete_mode;
  CRUNCH_MODE x_delete_mode;
    }
    
    #include <cstdint>  // for int16_t
    
      // ============= Accessing data ==============.
    
      // Constructors for the various ParamTypes.
  ParamContent() = default;
  explicit ParamContent(tesseract::StringParam* it);
  explicit ParamContent(tesseract::IntParam* it);
  explicit ParamContent(tesseract::BoolParam* it);
  explicit ParamContent(tesseract::DoubleParam* it);
    
        for (int fd: to_add)
      register_fd(fd);
    to_add.clear();
    
      bool RunOnDevice() override {
    auto& old_tensor = Input(0);
    auto& indices = Input(1);
    auto* new_tensor = Output(0);
    CAFFE_ENFORCE(indices.ndim() >= 1);
    CAFFE_ENFORCE(
        &old_tensor == new_tensor, 'First argument must be in-place.');
    CAFFE_ENFORCE(new_tensor->ndim() == indices.ndim());
    CAFFE_ENFORCE(indices.ndim() == new_tensor->ndim());
    }
    
    OpSchema::Cost CostInferenceForFC(
    const OperatorDef& def,
    const vector<TensorShape>& in) {
  CAFFE_ENFORCE_EQ(in.size(), 3, 'FC requires three inputs');
  struct OpSchema::Cost c;
  ArgumentHelper helper(def);
    }
    
        const auto* data_ptr = data.template data<T>();
    std::unordered_map<T, int64_t> dict;
    std::vector<int64_t> dupIndices;
    // i is the index of unique elements, j is the index of all elements
    for (int64_t i = 0, j = 0; j < data.dims()[0]; ++i, ++j) {
      bool retVal = dict.insert({data_ptr[j], i}).second;
      if (!retVal) {
        --i;
        dupIndices.push_back(j);
      }
    }
    
    **Code**
    
    
    {
    {    const float* Xdata = X.template data<float>();
    float* Ydata = Y->template mutable_data<float>();
    for (int i = 0; i < X.size(); ++i) {
      Ydata[i] = std::floor(Xdata[i]);
    }
    return true;
  }
};
    
      void SetStart() {
    start_ = true;
  }
    
      ASSERT_TRUE(db_->GetIntProperty('rocksdb.base-level', &int_prop));
  ASSERT_EQ(3U, int_prop);
  ASSERT_TRUE(db_->GetProperty('rocksdb.num-files-at-level1', &str_prop));
  ASSERT_EQ('0', str_prop);
  ASSERT_TRUE(db_->GetProperty('rocksdb.num-files-at-level2', &str_prop));
  ASSERT_EQ('0', str_prop);
    
    TEST_F(DBEncryptionTest, CheckEncrypted) {
  ASSERT_OK(Put('foo567', 'v1.fetdq'));
  ASSERT_OK(Put('bar123', 'v2.dfgkjdfghsd'));
  Close();
    }
    
    class CompactionPressureToken : public WriteControllerToken {
 public:
  explicit CompactionPressureToken(WriteController* controller)
      : WriteControllerToken(controller) {}
  virtual ~CompactionPressureToken();
};
    
    TEST_F(WriteControllerTest, ChangeDelayRateTest) {
  TimeSetEnv env;
  WriteController controller(40000000u);  // also set max delayed rate
  controller.set_delayed_write_rate(10000000u);
  auto delay_token_0 =
      controller.GetDelayToken(controller.delayed_write_rate());
  ASSERT_EQ(static_cast<uint64_t>(2000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_1 = controller.GetDelayToken(2000000u);
  ASSERT_EQ(static_cast<uint64_t>(10000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_2 = controller.GetDelayToken(1000000u);
  ASSERT_EQ(static_cast<uint64_t>(20000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_3 = controller.GetDelayToken(20000000u);
  ASSERT_EQ(static_cast<uint64_t>(1000000),
            controller.GetDelay(&env, 20000000u));
  // This is more than max rate. Max delayed rate will be used.
  auto delay_token_4 =
      controller.GetDelayToken(controller.delayed_write_rate() * 3);
  ASSERT_EQ(static_cast<uint64_t>(500000),
            controller.GetDelay(&env, 20000000u));
}
    
    #if !defined(ROCKSDB_LITE) && !defined(OS_WIN)
    
    void PosixWritableFile::SetWriteLifeTimeHint(Env::WriteLifeTimeHint hint) {
#ifdef OS_LINUX
// Suppress Valgrind 'Unimplemented functionality' error.
#ifndef ROCKSDB_VALGRIND_RUN
  if (hint == write_hint_) {
    return;
  }
  if (fcntl(fd_, F_SET_RW_HINT, &hint) == 0) {
    write_hint_ = hint;
  }
#else
  (void)hint;
#endif // ROCKSDB_VALGRIND_RUN
#else
  (void)hint;
#endif // OS_LINUX
}
    
      Status Write(uint64_t offset, const Slice& data) {
    MutexLock lock(&mutex_);
    size_t offset_ = static_cast<size_t>(offset);
    if (offset + data.size() > data_.size()) {
      data_.resize(offset_ + data.size());
    }
    data_.replace(offset_, data.size(), data.data(), data.size());
    size_ = data_.size();
    modified_time_ = Now();
    return Status::OK();
  }
    
      virtual Status DeleteDir(const std::string& dirname) override;
    
    using namespace rocksdb;
    
    /**
 * @class CanClientFactory
 * @brief CanClientFactory inherites apollo::common::util::Facotory.
 */
class CanClientFactory
    : public apollo::common::util::Factory<CANCardParameter::CANCardBrand,
                                           CanClient> {
 public:
  /**
   * @brief Register the CAN clients of all brands. This function call the
   *        Function apollo::common::util::Factory::Register() for all of the
   *        CAN clients.
   */
  void RegisterCanClients();
    }
    
    class HermesCanClient : public CanClient {
 public:
  /**
   * @brief Initialize the BCAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   */
  // explicit HermesCanClient(const CANCardParameter &parameter);
    }
    
    TEST(HermesCanClient, receiver) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::HERMES_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
  HermesCanClient hermes_can;
  EXPECT_TRUE(hermes_can.Init(param));
    }
    
    
    { private:
  const int32_t data_length_ = CANBUS_MESSAGE_LENGTH;
};
    
    TEST(ByteTest, GetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  EXPECT_EQ(0x05, value.get_byte(1, 3));
  EXPECT_EQ(0x01, value.get_byte(1, 1));
  EXPECT_EQ(0x00, value.get_byte(8, 1));
  EXPECT_EQ(0x00, value.get_byte(-1, 1));
  EXPECT_EQ(0x1A, value.get_byte(0, 10));
}

        
        #include 'tensorflow/core/framework/op.h'
    
      for (const auto& node : item_.MainOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
  for (const auto& node : item_.EnqueueOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_

    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL.
void DelayedNumpyDecref(void* data, size_t len, void* obj) {
  mutex_lock ml(*DelayedDecrefLock());
  DecrefCache()->push_back(obj);
}
    
    namespace tensorflow {
    }
    
    namespace tensorflow {
    }
    
    namespace tensorflow {
    }
    
    #include 'tensorflow/stream_executor/blas.h'
    
    ScopedActivateExecutorContext::~ScopedActivateExecutorContext() {
  delete static_cast<ScopedActivateContext *>(driver_scoped_activate_context_);
}
    
    // Activates a CUDA context within an enclosing scope.
class ScopedActivateExecutorContext {
 public:
  // Form that takes a CUDA executor implementation.
  explicit ScopedActivateExecutorContext(CUDAExecutor* cuda_exec);
    }
    
    private:
    NetworkStyle(const QString &appName, const int iconColorHueShift, const int iconColorSaturationReduction, const char *titleAddText);
    
    
    {    Lock& lock;
    Lock templock;
};
    
    #endif

    
    #ifndef SECP256K1_MODULE_ECDH_MAIN_H
#define SECP256K1_MODULE_ECDH_MAIN_H
    
    
    {    secp256k1_ecdsa_recoverable_signature_load(ctx, &r, &s, &recid, sigin);
    secp256k1_ecdsa_signature_save(sig, &r, &s);
    return 1;
}
    
    void run_recovery_tests(void) {
    int i;
    for (i = 0; i < count; i++) {
        test_ecdsa_recovery_api();
    }
    for (i = 0; i < 64*count; i++) {
        test_ecdsa_recovery_end_to_end();
    }
    test_ecdsa_recovery_edge_cases();
}
    
      inline Dtype diff_at(const int n, const int c, const int h,
      const int w) const {
    return cpu_diff()[offset(n, c, h, w)];
  }
    
    /// @brief Fills a Blob with Gaussian-distributed values @f$ x = a @f$.
template <typename Dtype>
class GaussianFiller : public Filler<Dtype> {
 public:
  explicit GaussianFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    CHECK(blob->count());
    caffe_rng_gaussian<Dtype>(blob->count(), Dtype(this->filler_param_.mean()),
        Dtype(this->filler_param_.std()), blob->mutable_cpu_data());
    int sparse = this->filler_param_.sparse();
    CHECK_GE(sparse, -1);
    if (sparse >= 0) {
      // Sparse initialization is implemented for 'weight' blobs; i.e. matrices.
      // These have num == channels == 1; width is number of inputs; height is
      // number of outputs.  The 'sparse' variable specifies the mean number
      // of non-zero input weights for a given output.
      CHECK_GE(blob->num_axes(), 1);
      const int num_outputs = blob->shape(0);
      Dtype non_zero_probability = Dtype(sparse) / Dtype(num_outputs);
      rand_vec_.reset(new SyncedMemory(blob->count() * sizeof(int)));
      int* mask = reinterpret_cast<int*>(rand_vec_->mutable_cpu_data());
      caffe_rng_bernoulli(blob->count(), non_zero_probability, mask);
      for (int i = 0; i < blob->count(); ++i) {
        data[i] *= mask[i];
      }
    }
  }
    }
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    namespace caffe {
    }
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CONTRASTIVE_LOSS_LAYER_HPP_

    
    
    {}
    
    namespace parallel {
    }
    
    namespace php {
struct Program;
}
struct Index;
    
    #endif

    
    extern __thread int tl_exit_code;
    
        // skipping .  .. hidden files
    if (ename[0] == '.' || !*ename) {
      continue;
    }
    auto fe = fullPath + ename;
    struct stat se;
    if (stat(fe.c_str(), &se)) {
      Logger::Error('FileUtil::find(): unable to stat %s', fe.c_str());
      continue;
    }
    
      // No copying allowed
  DBImpl(const DBImpl&);
  void operator=(const DBImpl&);
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    // Make the CURRENT file point to the descriptor file with the
// specified number.
Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number);
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
    
    {  // No copying allowed
  MemTableIterator(const MemTableIterator&);
  void operator=(const MemTableIterator&);
};
    
      // Add an entry into memtable that maps key to value at the
  // specified sequence number and with the specified type.
  // Typically value will be empty if type==kTypeDeletion.
  void Add(SequenceNumber seq, ValueType type,
           const Slice& key,
           const Slice& value);
    
    class ButteraugliComparator : public Comparator {
 public:
  ButteraugliComparator(const int width, const int height,
                        const std::vector<uint8_t>* rgb,
                        const float target_distance, ProcessStats* stats);
    }
    
    #define GUETZLI_LOG(stats, ...)                                    \
  do {                                                             \
    char debug_string[1024];                                       \
    int res = snprintf(debug_string, sizeof(debug_string),         \
                       __VA_ARGS__);                               \
    assert(res > 0 && 'expected successful printing');             \
    (void)res;                                                     \
    debug_string[sizeof(debug_string) - 1] = '\0';                 \
    ::guetzli::PrintDebug(                      \
         stats, std::string(debug_string));        \
  } while (0)
#define GUETZLI_LOG_QUANT(stats, q)                    \
  for (int y = 0; y < 8; ++y) {                        \
    for (int c = 0; c < 3; ++c) {                      \
      for (int x = 0; x < 8; ++x)                      \
        GUETZLI_LOG(stats, ' %2d', (q)[c][8 * y + x]); \
      GUETZLI_LOG(stats, '   ');                       \
    }                                                  \
    GUETZLI_LOG(stats, '\n');                          \
  }
    
    #include 'guetzli/jpeg_data.h'
    
      tmp0 = in[2 * stride];
  tmp1 = kIDCTMatrix[ 2] * tmp0;
  tmp2 = kIDCTMatrix[10] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] -= tmp2;
  out[3] -= tmp1;
  out[4] -= tmp1;
  out[5] -= tmp2;
  out[6] += tmp2;
  out[7] += tmp1;
    
    
    {}  // namespace guetzli
    
    void InitJPEGDataForYUV444(int w, int h, JPEGData* jpg) {
  jpg->width = w;
  jpg->height = h;
  jpg->max_h_samp_factor = 1;
  jpg->max_v_samp_factor = 1;
  jpg->MCU_rows = (h + 7) >> 3;
  jpg->MCU_cols = (w + 7) >> 3;
  jpg->quant.resize(3);
  jpg->components.resize(3);
  for (int i = 0; i < 3; ++i) {
    JPEGComponent* c = &jpg->components[i];
    c->id = i;
    c->h_samp_factor = 1;
    c->v_samp_factor = 1;
    c->quant_idx = i;
    c->width_in_blocks = jpg->MCU_cols;
    c->height_in_blocks = jpg->MCU_rows;
    c->num_blocks = c->width_in_blocks * c->height_in_blocks;
    c->coeffs.resize(c->num_blocks * kDCTBlockSize);
  }
}
    
      // Compute YUV444 DCT coefficients.
  int block_ix = 0;
  for (int block_y = 0; block_y < jpg->MCU_rows; ++block_y) {
    for (int block_x = 0; block_x < jpg->MCU_cols; ++block_x) {
      coeff_t block[3 * kDCTBlockSize];
      // RGB->YUV transform.
      for (int iy = 0; iy < 8; ++iy) {
        for (int ix = 0; ix < 8; ++ix) {
          int y = std::min(h - 1, 8 * block_y + iy);
          int x = std::min(w - 1, 8 * block_x + ix);
          int p = y * w + x;
          RGBToYUV16(&rgb[3 * p], &block[8 * iy + ix]);
        }
      }
      // DCT
      for (int i = 0; i < 3; ++i) {
        ComputeBlockDCT(&block[i * kDCTBlockSize]);
      }
      // Quantization
      for (int i = 0; i < 3 * 64; ++i) {
        Quantize(&block[i], iquant[i]);
      }
      // Copy the resulting coefficients to *jpg.
      for (int i = 0; i < 3; ++i) {
        memcpy(&jpg->components[i].coeffs[block_ix * kDCTBlockSize],
               &block[i * kDCTBlockSize], kDCTBlockSize * sizeof(block[0]));
      }
      ++block_ix;
    }
  }
    
    BENCHMARK_RELATIVE(format_long_string_safe, iters) {
  BenchmarkSuspender suspender;
  auto const& longString = getLongString();
  while (iters--) {
    fbstring out;
    suspender.dismissing([&] { format(&out, '{}', longString); });
  }
}
    
        // variant 2 (const-overload of v1)
    int operator()(int x) const {
      return 100 + 2 * x;
    }
    
    #define FOLLY_SDT_DECLARE_SEMAPHORE(provider, name)                            \
  extern 'C' volatile unsigned short FOLLY_SDT_SEMAPHORE(provider, name)
    
    #include <boost/regex/pending/unicode_iterator.hpp>
    
    /**
 * Reads sizeof(T) bytes, and returns false if not enough bytes are available.
 * Returns true if the first n bytes are equal to prefix when interpreted as
 * a little endian T.
 */
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, bool>::type
dataStartsWithLE(const IOBuf* data, T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  T value;
  Cursor cursor{data};
  if (!cursor.tryReadLE(value)) {
    return false;
  }
  const T mask = n == sizeof(T) ? T(-1) : (T(1) << (8 * n)) - 1;
  return prefix == (value & mask);
}
    
    CacheLocality CacheLocality::readFromSysfs() {
  return readFromSysfsTree([](std::string name) {
    std::ifstream xi(name.c_str());
    std::string rv;
    std::getline(xi, rv);
    return rv;
  });
}
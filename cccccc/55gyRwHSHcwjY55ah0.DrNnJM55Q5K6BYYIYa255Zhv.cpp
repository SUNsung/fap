
        
        namespace atom {
    }
    
    
    {}  // namespace api
    
    AtomQuotaPermissionContext::AtomQuotaPermissionContext() {
}
    
    namespace atom {
    }
    
    namespace base {
class TaskRunner;
}
    
    #include 'base/command_line.h'
    
    
    {  DISALLOW_COPY_AND_ASSIGN(RenderProcessPreferences);
};
    
      std::unique_ptr<views::StatusIconLinux> icon_;
    
    int main(int /*argc*/, char** /*argv*/)
{
    InitDevice();
    return 0;
}

    
    int lapack_LU32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, int* info);
int lapack_LU64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, int* info);
int lapack_Cholesky32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, bool* info);
int lapack_Cholesky64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, bool* info);
int lapack_SVD32f(float* a, size_t a_step, float* w, float* u, size_t u_step, float* vt, size_t v_step, int m, int n, int flags);
int lapack_SVD64f(double* a, size_t a_step, double* w, double* u, size_t u_step, double* vt, size_t v_step, int m, int n, int flags);
int lapack_QR32f(float* src1, size_t src1_step, int m, int n, int k, float* src2, size_t src2_step, float* dst, int* info);
int lapack_QR64f(double* src1, size_t src1_step, int m, int n, int k, double* src2, size_t src2_step, double* dst, int* info);
int lapack_gemm32f(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64f(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm32fc(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64fc(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
    
    //
// BEGIN OF CUSTOM FUNCTIONS
//
    
    struct TimerName { const char* str; Timer::Name name; };
const TimerName s_names[] = {
# define TIMER_NAME(name) {#name, Timer::name},
  JIT_TIMERS
# undef TIMER_NAME
};
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  auto const off = ThreadLocalNoCheck<T>::node_ptr_offset();
  v << load{emitTLSAddr(v, datum) + safe_cast<int32_t>(off), d};
}
    
    #include <algorithm>
    
      /*
   * Make various Vunit-managed vasm structures.
   */
  Vreg makeReg() { return Vreg{next_vr++}; }
  Vtuple makeTuple(VregList&& regs);
  Vtuple makeTuple(const VregList& regs);
  VcallArgsId makeVcallArgs(VcallArgs&& args);
    
    
static Variant HHVM_FUNCTION(gmp_root,
                             const Variant& data,
                             int64_t root) {
  if (root < 1) {
    raise_warning(cs_GMP_INVALID_ROOT_MUST_BE_POSITIVE, 'gmp_root');
    return false;
  }
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
      bool endsRegion:1;
  bool preppedByRef:1;
  bool ignoreInnerType:1;
    
    
    {  TransLoc loc() const;
};
    
    
void Instruction::SetImmLLiteral(Instruction* source) {
  assert(((source - this) & 3) == 0);
  int offset = (source - this) >> kLiteralEntrySizeLog2;
  Instr imm = Assembler::ImmLLiteral(offset);
  Instr mask = ImmLLiteral_mask;
    }
    
    void THDTensor_(_resize3d)(THDTensor *tensor, int64_t size0, int64_t size1, int64_t size2) {
  int64_t sizes[] = {size0, size1, size2};
  THDTensor_(_resize)(tensor, 2, sizes, nullptr);
}
    
      assert(peekType(msg) == thpp::Type::LONG_STORAGE);
  THLongStorage *storage2 = unpackTHLongStorage(msg);
  assert(storage2->size == STORAGE_SIZE);
  for (int64_t i = 0; i < STORAGE_SIZE; i++)
    assert(storage2->data[i] == i);
  
  int vec_size = unpackInteger(msg);
  assert(vec_size == VEC_SIZE);
  for (int i = 0; i < VEC_SIZE; i++)
    assert(unpackInteger(msg) == 7);
    
    static PyObject* recursive_to_list(
    char* data, IntList sizes, IntList strides, int64_t dim,
    ScalarType scalarType, int64_t elementSize)
{
  int64_t ndim = sizes.size();
  if (dim == ndim) {
    return torch::utils::load_scalar(data, scalarType);
  }
  auto n = sizes[dim];
  auto list = THPObjectPtr(PyList_New(n));
  if (!list) throw python_error();
  for (int64_t i = 0; i < n; i++) {
    PyObject* obj = recursive_to_list(data, sizes, strides, dim + 1, scalarType, elementSize);
    if (!obj) throw python_error();
    PyList_SET_ITEM(list.get(), i, obj);
    data += strides[dim] * elementSize;
  }
  return list.release();
}
    
      auto ilen = input_size[0];
  auto batchSize = input_size[1];
  auto inputPlanes = input_size[2];
  auto outputPlanes = weight_size[2];
  auto kw = weight_size[0];
  auto olen = input_size[0] - kw + 1 + pad * 2;
  auto real_pad = (olen - ilen + kw - 1) / 2;
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHLongTensor(THLongTensor *tensor) {
  return at::getType(at::Backend::CPU, at::ScalarType::Long).unsafeTensorFromTH((void*)tensor, true);
}
    
    class BaseLogger {
 public:
  BaseLogger() {
#if XGBOOST_LOG_WITH_TIME
    log_stream_ << '[' << dmlc::DateLogger().HumanDate() << '] ';
#endif
  }
  std::ostream& stream() { return log_stream_; }
    }
    
    /*! \brief namespace of base64 decoding and encoding table */
namespace base64 {
const char DecodeTable[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  62,  // '+'
  0, 0, 0,
  63,  // '/'
  52, 53, 54, 55, 56, 57, 58, 59, 60, 61,  // '0'-'9'
  0, 0, 0, 0, 0, 0, 0,
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
  13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,  // 'A'-'Z'
  0, 0, 0, 0, 0, 0,
  26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
  39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,  // 'a'-'z'
};
static const char EncodeTable[] =
    'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/';
}  // namespace base64
/*! \brief the stream that reads from base64, note we take from file pointers */
class Base64InStream: public dmlc::Stream {
 public:
  explicit Base64InStream(dmlc::Stream *fs) : reader_(256) {
    reader_.set_stream(fs);
    num_prev = 0; tmp_ch = 0;
  }
  /*!
   * \brief initialize the stream position to beginning of next base64 stream
   * call this function before actually start read
   */
  inline void InitPosition(void) {
    // get a character
    do {
      tmp_ch = reader_.GetChar();
    } while (isspace(tmp_ch));
  }
  /*! \brief whether current position is end of a base64 stream */
  inline bool IsEOF(void) const {
    return num_prev == 0 && (tmp_ch == EOF || isspace(tmp_ch));
  }
  virtual size_t Read(void *ptr, size_t size) {
    using base64::DecodeTable;
    if (size == 0) return 0;
    // use tlen to record left size
    size_t tlen = size;
    unsigned char *cptr = static_cast<unsigned char*>(ptr);
    // if anything left, load from previous buffered result
    if (num_prev != 0) {
      if (num_prev == 2) {
        if (tlen >= 2) {
          *cptr++ = buf_prev[0];
          *cptr++ = buf_prev[1];
          tlen -= 2;
          num_prev = 0;
        } else {
          // assert tlen == 1
          *cptr++ = buf_prev[0]; --tlen;
          buf_prev[0] = buf_prev[1];
          num_prev = 1;
        }
      } else {
        // assert num_prev == 1
        *cptr++ = buf_prev[0]; --tlen; num_prev = 0;
      }
    }
    if (tlen == 0) return size;
    int nvalue;
    // note: everything goes with 4 bytes in Base64
    // so we process 4 bytes a unit
    while (tlen && tmp_ch != EOF && !isspace(tmp_ch)) {
      // first byte
      nvalue = DecodeTable[tmp_ch] << 18;
      {
        // second byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        nvalue |= DecodeTable[tmp_ch] << 12;
        *cptr++ = (nvalue >> 16) & 0xFF; --tlen;
        }
      {
        // third byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        // handle termination
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == '=') << 'invalid base64 format';
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch] << 6;
        if (tlen) {
          *cptr++ = (nvalue >> 8) & 0xFF; --tlen;
        } else {
          buf_prev[num_prev++] = (nvalue >> 8) & 0xFF;
        }
      }
      {
        // fourth byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch))
            << 'invalid base64 format';
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch];
        if (tlen) {
          *cptr++ = nvalue & 0xFF; --tlen;
        } else {
          buf_prev[num_prev ++] = nvalue & 0xFF;
        }
      }
      // get next char
      tmp_ch = reader_.GetChar();
    }
    if (kStrictCheck) {
      CHECK_EQ(tlen, 0) << 'Base64InStream: read incomplete';
    }
    return size - tlen;
  }
  virtual void Write(const void *ptr, size_t size) {
    LOG(FATAL) << 'Base64InStream do not support write';
  }
    }
    
    /*!
 * \brief global random engine
 */
typedef CustomGlobalRandomEngine GlobalRandomEngine;
    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }
    
    SparsePage::Writer::Writer(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePage::Format> fmt(
              SparsePage::Format::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page.get() == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
    struct EvalTweedieNLogLik: public EvalEWiseBase<EvalTweedieNLogLik> {
  explicit EvalTweedieNLogLik(const char* param) {
    CHECK(param != nullptr)
        << 'tweedie-nloglik must be in format tweedie-nloglik@rho';
    rho_ = atof(param);
    CHECK(rho_ < 2 && rho_ >= 1)
        << 'tweedie variance power must be in interval [1, 2)';
    std::ostringstream os;
    os << 'tweedie-nloglik@' << rho_;
    name_ = os.str();
  }
  const char *Name() const override {
    return name_.c_str();
  }
  inline bst_float EvalRow(bst_float y, bst_float p) const {
    bst_float a = y * std::exp((1 - rho_) * std::log(p)) / (1 - rho_);
    bst_float b = std::exp((2 - rho_) * std::log(p)) / (2 - rho_);
    return -a + b;
  }
 protected:
  std::string name_;
  bst_float rho_;
};
    
    int MinimizeCrashInputInternalStep(Fuzzer *F, InputCorpus *Corpus) {
  assert(Inputs->size() == 1);
  std::string InputFilePath = Inputs->at(0);
  Unit U = FileToVector(InputFilePath);
  assert(U.size() > 2);
  Printf('INFO: Starting MinimizeCrashInputInternalStep: %zd\n', U.size());
  Corpus->AddToCorpus(U, 0);
  F->SetMaxInputLen(U.size());
  F->SetMaxMutationLen(U.size() - 1);
  F->MinimizeCrashLoop(U);
  Printf('INFO: Done MinimizeCrashInputInternalStep, no crashes found\n');
  exit(0);
  return 0;
}
    
    struct ExternalFunctions {
  // Initialize function pointers. Functions that are not available will be set
  // to nullptr.  Do not call this constructor  before ``main()`` has been
  // entered.
  ExternalFunctions();
    }
    
    ExternalFunctions::ExternalFunctions() {
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  this->NAME = GetFnPtr<decltype(ExternalFunctions::NAME)>(#NAME, WARN)
    }
    
    void Printf(const char *Fmt, ...) {
  va_list ap;
  va_start(ap, Fmt);
  vfprintf(OutputFile, Fmt, ap);
  va_end(ap);
  fflush(OutputFile);
}
    
      if (DirLen) {
    --DirLen; // Remove trailing separator.
    if (!FileLen) { // Path ended in separator.
      assert(DirLen);
      // Remove file name from Dir.
      while (DirLen && !IsSeparator(FileName[LocationLen + DirLen - 1]))
        --DirLen;
      if (DirLen) // Remove trailing separator.
        --DirLen;
    }
  }
    
      static const size_t kNumCounters = 1 << 14;
  alignas(8) uint8_t Counters[kNumCounters];
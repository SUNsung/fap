
        
         private:
  ~UvTaskRunner() override;
  static void OnTimeout(uv_timer_t* timer);
  static void OnClose(uv_handle_t* handle);
    
    void AutoUpdater::OnUpdateDownloaded(const std::string& release_notes,
                                     const std::string& release_name,
                                     const base::Time& release_date,
                                     const std::string& url) {
  Emit('update-downloaded', release_notes, release_name, release_date, url,
       // Keep compatibility with old APIs.
       base::Bind(&AutoUpdater::QuitAndInstall, base::Unretained(this)));
}
    
    // static
v8::Local<v8::Value> Net::Create(v8::Isolate* isolate) {
  return mate::CreateHandle(isolate, new Net(isolate)).ToV8();
}
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(Net);
};
    
    bool PowerMonitor::ShouldShutdown() {
  return !Emit('shutdown');
}
    
    
    {}  // namespace
    
    template <typename T>
int32_t TrackableObject<T>::next_id_ = 0;
    
      int signal;
  size_t bytes_read = 0;
  do {
    ssize_t ret = HANDLE_EINTR(
        read(shutdown_fd_, reinterpret_cast<char*>(&signal) + bytes_read,
             sizeof(signal) - bytes_read));
    if (ret < 0) {
      NOTREACHED() << 'Unexpected error: ' << strerror(errno);
      ShutdownFDReadError();
      break;
    } else if (ret == 0) {
      NOTREACHED() << 'Unexpected closure of shutdown pipe.';
      ShutdownFDClosedError();
      break;
    }
    bytes_read += ret;
  } while (bytes_read < sizeof(signal));
  VLOG(1) << 'Handling shutdown for signal ' << signal << '.';
  base::Closure task =
      base::Bind(&Browser::Quit, base::Unretained(Browser::Get()));
    
            const s32* ln0 = idx_rm1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm1) : tmp;
        const s32* ln1 = internal::getRowPtr(srcBase, srcStride, i);
        const s32* ln2 = internal::getRowPtr(srcBase, srcStride, i + 1);
        const s32* ln3 = idx_rp2 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp2) : tmp;
    
    inline void vnst(u8* dst, uint8x16_t v1, uint8x16_t v2) { vst1q_u8(dst, v1); vst1q_u8(dst+16, v2); }
inline void vnst(u8* dst, uint16x8_t v1, uint16x8_t v2) { vst1q_u8(dst, vcombine_u8(vmovn_u16(v1), vmovn_u16(v2))); }
inline void vnst(u8* dst, uint32x4_t v1, uint32x4_t v2) { vst1_u8(dst, vmovn_u16(vcombine_u16(vmovn_u32(v1), vmovn_u32(v2)))); }
    
    #include <cstddef>
#include <cstdlib>
#include <algorithm>
    
    #ifdef CAROTENE_NEON
    if (shift >= 16u)
    {
        for (size_t i = 0; i < size.height; ++i)
        {
            s16 * dst = internal::getRowPtr(dstBase, dstStride, i);
            std::memset(dst, 0, sizeof(s16) * size.width);
        }
        return;
    }
    
                uint16x8_t v_maxmask = vceqq_s16(v_src, v_maxval8);
            uint16x8_t v_minmask = vceqq_s16(v_src, v_minval8);
            uint16x8_t v_mask = vorrq_u16(v_maxmask, v_minmask);
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n) {
  int max_offset = n - 8;
  int offset = 0;
  // Accumulate a set of 4 32-bit sums in sum, by loading 8 pairs of 8-bit
  // values, extending to 16 bit, multiplying to make 32 bit results.
  __m128i sum = _mm_setzero_si128();
  if (offset <= max_offset) {
    offset = 8;
    __m128i packed1 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(u));
    __m128i packed2 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(v));
    sum = _mm_cvtepi8_epi16(packed1);
    packed2 = _mm_cvtepi8_epi16(packed2);
    // The magic _mm_add_epi16 is perfect here. It multiplies 8 pairs of 16 bit
    // ints to make 32 bit results, which are then horizontally added in pairs
    // to make 4 32 bit results that still fit in a 128 bit register.
    sum = _mm_madd_epi16(sum, packed2);
    while (offset <= max_offset) {
      packed1 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(u + offset));
      packed2 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(v + offset));
      offset += 8;
      packed1 = _mm_cvtepi8_epi16(packed1);
      packed2 = _mm_cvtepi8_epi16(packed2);
      packed1 = _mm_madd_epi16(packed1, packed2);
      sum = _mm_add_epi32(sum, packed1);
    }
  }
  // Sum the 4 packed 32 bit sums and extract the low result.
  sum = _mm_hadd_epi32(sum, sum);
  sum = _mm_hadd_epi32(sum, sum);
  int32_t result = _mm_cvtsi128_si32(sum);
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    #undef X86_BUILD
#if defined(__x86_64__) || defined(__i386__) || defined(_WIN32)
#if !defined(ANDROID_BUILD)
#define X86_BUILD 1
#endif  // !ANDROID_BUILD
#endif  // x86 target
    
      /**
   * Returns whether the iterator is positioned at the last element in a
   * given level. (e.g. the last word in a line, the last line in a block)
   *
   *     Here's some two-paragraph example
   *   text.  It starts off innocuously
   *   enough but quickly turns bizarre.
   *     The author inserts a cornucopia
   *   of words to guard against confused
   *   references.
   *
   * Now take an iterator it pointed to the start of 'bizarre.'
   *  it.IsAtFinalElement(RIL_PARA, RIL_SYMBOL) = false
   *  it.IsAtFinalElement(RIL_PARA, RIL_WORD) = true
   *  it.IsAtFinalElement(RIL_BLOCK, RIL_WORD) = false
   */
  virtual bool IsAtFinalElement(PageIteratorLevel level,
                                PageIteratorLevel element) const;
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
      // How many alt choices from each should we try to get?
  const int kAltsPerPiece = 2;
  // When do we start throwing away extra alt choices?
  const int kTooManyAltChoices = 100;
    
    /// Base class for all tesseract image thresholding classes.
/// Specific classes can add new thresholding methods by
/// overriding ThresholdToPix.
/// Each instance deals with a single image, but the design is intended to
/// be useful for multiple calls to SetRectangle and ThresholdTo* if
/// desired.
class TESS_API ImageThresholder {
 public:
  ImageThresholder();
  virtual ~ImageThresholder();
    }
    
      bool operator!=(SrcLoc o) const { return !(*this == o); }
    
    void Config::ReplaceIncludesWithIni(const std::string& original_ini_filename,
                                    const std::string& iniStr,
                                    std::string& with_includes) {
  std::istringstream iss(iniStr);
  std::string line;
  while (std::getline(iss, line)) {
    // Handle cases like
    //   #include           ''
    //   ##includefoo barbaz'myconfig.ini' how weird is that
    // Anything that is not a syntactically correct #include 'file' after
    // this pre-processing, will be treated as an ini comment and processed
    // as such in the ini parser
    auto pos = line.find_first_not_of(' ');
    if (pos == std::string::npos ||
        line.compare(pos, strlen('#include'), '#include') != 0) {
      // treat as normal ini line, including comment that doesn't start with
      // #include
      with_includes += line + '\n';
      continue;
    }
    pos += strlen('#include');
    auto start = line.find_first_not_of(' ', pos);
    auto end = line.find_last_not_of(' ');
    if ((start == std::string::npos || line[start] != ''') ||
        (end == start || line[end] != ''')) {
      with_includes += line + '\n'; // treat as normal comment
      continue;
    }
    std::string file = line.substr(start + 1, end - start - 1);
    const std::string logger_file = file;
    boost::filesystem::path p(file);
    if (!p.is_absolute()) {
      boost::filesystem::path opath(original_ini_filename);
      p = opath.parent_path()/p;
    }
    if (boost::filesystem::exists(p)) {
      std::ifstream ifs(p.string());
      const std::string contents((std::istreambuf_iterator<char>(ifs)),
                                 std::istreambuf_iterator<char>());
      Config::ReplaceIncludesWithIni(p.string(), contents, with_includes);
    } else {
      Logger::Warning('ini include file %s not found', logger_file.c_str());
    }
  }
}
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
    
    void PlainDirectory::close() {
  if (m_dir) {
    ::closedir(m_dir);
    m_dir = nullptr;
  }
}
    
    //////////////////////////////////////////////////////////////////////
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    #if DMLC_USE_CXX11
// OperatorProperty allows C++11, while Operator do not rely on it.
/*!
 * \brief OperatorProperty is a object that stores all information about Operator.
 * It also contains method to generate context(device) specific operators.
 *
 * It also contains various functions that can be optimally overriden to
 * provide optimization chance for computation engine.
 */
class OperatorProperty {
 public:
  /*!
   * \brief virtual destructor
   */
  virtual ~OperatorProperty() {}
  /*!
   *  \brief Initialize the Operator by setting the parameters
   *  This function need to be called before all other functions.
   *  \param kwargs the keyword arguments parameters
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*!
   * \brief Get a map representation of internal parameters.
   *  This can be used by Init to recover the state of OperatorProperty.
   */
  virtual std::map<std::string, std::string> GetParams() const = 0;
  /*!
   * \brief Get input arguments of the Operator.
   * \return vector of arguments.
   */
  virtual std::vector<std::string> ListArguments() const {
    return {'data'};
  }
  /*!
   * \brief Get name of output values of Operator
   * \return name of output values.
   */
  virtual std::vector<std::string> ListOutputs() const {
    return {'output'};
  }
  /*!
   * \brief Get name of auxiliary states of Operator
   * \return name of return values.
   */
  virtual std::vector<std::string> ListAuxiliaryStates() const {
    return {};
  }
  /*! \return number of real return values of the Operator */
  virtual int NumOutputs() const {
    return this->ListOutputs().size();
  }
  /*!
   * \brief get number of visible return values during Symbol creation.
   *  If NumVisibleOutputs() = k, and NumOutputs() = n.
   *  The first k returns will be presented in the resulting symbol.
   *
   *  The rest of the returns can be used for auxiliary states for Backward.
   *  For example, Dropout will return [data, mask], with NumVisibleOutputs() == 1.
   *  So when user call sym = Dropout(input), only data is presented in sym.
   *  But all the returns will be presented in out_data parameter of Backward if requested.
   *
   * \return number of default return values
   */
  virtual int NumVisibleOutputs() const {
    return NumOutputs();
  }
  /*!
   * \brief infer the shapes of outputs and unknown input arguments
   * \param in_shape the shape of input arguments of the operator
   *     this should be of same length as the vector returned by DescribeArgs
   *     in_shape allows unknown elements, which are checked by shape.ndim() == 0.
   *     For unknown shapes, InferShape will try to fill in the correct Shape in in_shape
   *     For known shapes, InferShape will check shape consistency
   *
   *     common practice: set the shape of data input, and usually weight's shape can be inferred
   *
   * \param out_shape the shape of outputs of the operator
   *     InferShape will modify the vector to fill output TShape
   * \param aux_shape the shape of auxiliary states of the operator
   *     InferShape will modify the vector to fill output TShape
   * \return true if the shape inference is successful, false if there is not enough information.
   * \throws dmlc::Error if the known arg_shapes are inconsistent.
   */
  virtual bool InferShape(std::vector<TShape> *in_shape,
                          std::vector<TShape> *out_shape,
                          std::vector<TShape> *aux_shape) const = 0;
  /*!
   * \brief infer the data types of outputs and unknown input arguments
   * \param in_type the type of input arguments of the operator
   *     this should be of same length as the vector returned by DescribeArgs
   *     in_type allows unknown elements, which are checked by type.ndim() == 0.
   *     For unknown types, Infertype will try to fill in the correct type in in_type
   *     For known types, Infertype will check type consistency
   *
   *     common practice: set the type of data input, and usually weight's type can be inferred
   *
   * \param out_type the type of outputs of the operator
   *     Infertype will modify the vector to fill output Ttype
   * \param aux_type the type of auxiliary states of the operator
   *     Infertype will modify the vector to fill output Ttype
   * \return true if the type inference is successful, false if there is not enough information.
   * \throws dmlc::Error if the known arg_types are inconsistent.
   */
  virtual bool InferType(std::vector<int> *in_type,
                          std::vector<int> *out_type,
                          std::vector<int> *aux_type) const {
    CHECK_LE(in_type->size(), this->ListArguments().size());
    int n_in = this->ListArguments().size();
    for (unsigned i = 0; i < in_type->size(); ++i) {
      CHECK(in_type->at(i) == mshadow::default_type_flag ||
            in_type->at(i) == -1) << 'Unsupported data type ' << in_type->at(i);
    }
    in_type->clear();
    for (int i = 0; i < n_in; ++i ) in_type->push_back(mshadow::default_type_flag);
    }
    }
    
    #include <caffe/proto/caffe.pb.h>
#include <dmlc/parameter.h>
#include <dmlc/base.h>
#include <dmlc/json.h>
#include <dmlc/logging.h>
#include <dmlc/type_traits.h>
#include <google/protobuf/message.h>
#include <google/protobuf/text_format.h>
    
      ~CacheBench() {}
    
      // Getters
  const Slice& key() const { return key_; }
  const Slice& value() const { return value_; }
  const Status& status() const { return status_; }
  const ParsedInternalKey& ikey() const { return ikey_; }
  bool Valid() const { return valid_; }
  const Slice& user_key() const { return current_user_key_; }
  const CompactionIterationStats& iter_stats() const { return iter_stats_; }
    
    Status WriteBatchBase::DeleteRange(const SliceParts& begin_key,
                                   const SliceParts& end_key) {
  std::string begin_key_buf, end_key_buf;
  Slice begin_key_slice(begin_key, &begin_key_buf);
  Slice end_key_slice(end_key, &end_key_buf);
  return DeleteRange(begin_key_slice, end_key_slice);
}
    
    class CompactionPressureToken : public WriteControllerToken {
 public:
  explicit CompactionPressureToken(WriteController* controller)
      : WriteControllerToken(controller) {}
  virtual ~CompactionPressureToken();
};
    
    class TimeSetEnv : public EnvWrapper {
 public:
  explicit TimeSetEnv() : EnvWrapper(nullptr) {}
  uint64_t now_micros_ = 6666;
  virtual uint64_t NowNanos() override { return now_micros_ * std::milli::den; }
};
    
    
    {  mutable int count_ = 0;
  mutable int merge_count_ = 0;
};
    
    std::string kDBPath = '/tmp/rocksdb_options_file_example';
    
    struct UndumpOptions {
  // Database that we will load the dumped file into
  std::string db_path;
  // File location of the dumped file that will be loaded
  std::string dump_location;
  // Compact the db after loading the dumped file
  bool compact_db = false;
};
    
    #pragma once
    
    
    {  static FlushBlockPolicy* NewFlushBlockPolicy(
      const uint64_t size, const int deviation,
      const BlockBuilder& data_block_builder);
};
    
    #include <string>
#include <vector>
    
    
    {void SleepForSeconds(double seconds) {
  SleepForMicroseconds(static_cast<int>(seconds * kNumMicrosPerSecond));
}
#endif  // BENCHMARK_OS_WINDOWS
}  // end namespace benchmark

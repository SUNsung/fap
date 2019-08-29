
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/compiler/xla/service/buffer_assignment.h'
#include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
#include 'tensorflow/core/platform/types.h'
    
    #include <memory>
#include <string>
#include <vector>
    
    
    {
    {}  // namespace gpu
}  // namespace xla

    
    #include 'tensorflow/compiler/xla/service/gpu/while_thunk.h'
    
    class IndexDataConsumer {
  virtual void anchor();
    }
    
    #endif // SWIFT_RUNTIME_THREADLOCALSTORAGE_H

    
    
    {    // If the low bit is set, then this is an indirect address. Otherwise,
    // it's direct.
    if (offsetPlusIndirect & 1) {
      return *reinterpret_cast<const ValueTy * const *>(address);
    } else {
      return reinterpret_cast<const ValueTy *>(address);
    }
  }
    
    /// Header layout for a key path's data buffer header.
class KeyPathBufferHeader {
  uint32_t Data;
  
  constexpr KeyPathBufferHeader(unsigned Data) : Data(Data) {}
  
  static constexpr uint32_t validateSize(uint32_t size) {
    return assert(size <= _SwiftKeyPathBufferHeader_SizeMask
                  && 'size too big!'),
           size;
  }
public:
  constexpr KeyPathBufferHeader(unsigned size,
                                bool trivialOrInstantiableInPlace,
                                bool hasReferencePrefix)
    : Data((validateSize(size) & _SwiftKeyPathBufferHeader_SizeMask)
           | (trivialOrInstantiableInPlace ? _SwiftKeyPathBufferHeader_TrivialFlag : 0)
           | (hasReferencePrefix ? _SwiftKeyPathBufferHeader_HasReferencePrefixFlag : 0)) 
  {
  }
  
  constexpr KeyPathBufferHeader withSize(unsigned size) const {
    return (Data & ~_SwiftKeyPathBufferHeader_SizeMask) | validateSize(size);
  }
  
  constexpr KeyPathBufferHeader withIsTrivial(bool isTrivial) const {
    return (Data & ~_SwiftKeyPathBufferHeader_TrivialFlag)
      | (isTrivial ? _SwiftKeyPathBufferHeader_TrivialFlag : 0);
  }
  constexpr KeyPathBufferHeader withIsInstantiableInPlace(bool isTrivial) const {
    return (Data & ~_SwiftKeyPathBufferHeader_TrivialFlag)
      | (isTrivial ? _SwiftKeyPathBufferHeader_TrivialFlag : 0);
  }
    }
    
    namespace swift {
    }
    
      /// 'Mark' this node only.
  bool markIntransitive(const driver::Job *);
    
    
    {}  // namespace tesseract.

    
    // Given a MutableIterator to the start of a block, run DetectParagraphs on
// that block and commit the results to the underlying ROW and BLOCK structs,
// saving the ParagraphModels in models.  Caller owns the models.
// We use unicharset during the function to answer questions such as 'is the
// first letter of this word upper case?'
void DetectParagraphs(int debug_level,
                      bool after_text_recognition,
                      const MutableIterator *block_start,
                      GenericVector<ParagraphModel *> *models);
    
      // Transforms the given coords one step forward to normalized space, without
  // using any block rotation or predecessor.
  void LocalNormTransform(const TPOINT& pt, TPOINT* transformed) const;
  void LocalNormTransform(const FCOORD& pt, FCOORD* transformed) const;
  // Transforms the given coords forward to normalized space using the
  // full transformation sequence defined by the block rotation, the
  // predecessors, deepest first, and finally this. If first_norm is not nullptr,
  // then the first and deepest transformation used is first_norm, ending
  // with this, and the block rotation will not be applied.
  void NormTransform(const DENORM* first_norm, const TPOINT& pt,
                     TPOINT* transformed) const;
  void NormTransform(const DENORM* first_norm, const FCOORD& pt,
                     FCOORD* transformed) const;
  // Transforms the given coords one step back to source space, without
  // using to any block rotation or predecessor.
  void LocalDenormTransform(const TPOINT& pt, TPOINT* original) const;
  void LocalDenormTransform(const FCOORD& pt, FCOORD* original) const;
  // Transforms the given coords all the way back to source image space using
  // the full transformation sequence defined by this and its predecessors
  // recursively, shallowest first, and finally any block re_rotation.
  // If last_denorm is not nullptr, then the last transformation used will
  // be last_denorm, and the block re_rotation will never be executed.
  void DenormTransform(const DENORM* last_denorm, const TPOINT& pt,
                       TPOINT* original) const;
  void DenormTransform(const DENORM* last_denorm, const FCOORD& pt,
                       FCOORD* original) const;
    
    #ifndef TESSERACT_CCUTIL_DOUBLEPTR_H_
#define TESSERACT_CCUTIL_DOUBLEPTR_H_
    
    namespace tesseract {
    }
    
      // Create an empty UNICHARMAP
  UNICHARMAP();
    
    // helper functions
// set handle
void setHandle(JNIEnv *jenv, jlongArray jhandle, void* handle) {
#ifdef __APPLE__
  jlong out = (long) handle;
#else
  int64_t out = (int64_t) handle;
#endif
  jenv->SetLongArrayRegion(jhandle, 0, 1, &out);
}
    
    template<typename DType>
inline void CompressArray<DType>::Compress(int chunk_id, bool use_hc) {
  CHECK_LT(static_cast<size_t>(chunk_id + 1), raw_chunks_.size());
  std::string& buf = out_buffer_[chunk_id];
  size_t raw_chunk_size = (raw_chunks_[chunk_id + 1] - raw_chunks_[chunk_id]) * sizeof(DType);
  int bound = LZ4_compressBound(raw_chunk_size);
  CHECK_NE(bound, 0);
  buf.resize(bound);
  int encoded_size;
  if (use_hc) {
    encoded_size = LZ4_compress_HC(
        reinterpret_cast<char*>(dmlc::BeginPtr(data) + raw_chunks_[chunk_id]),
        dmlc::BeginPtr(buf), raw_chunk_size, buf.length(), 9);
  } else {
    encoded_size = LZ4_compress_default(
        reinterpret_cast<char*>(dmlc::BeginPtr(data) + raw_chunks_[chunk_id]),
        dmlc::BeginPtr(buf), raw_chunk_size, buf.length());
  }
  CHECK_NE(encoded_size, 0);
  CHECK_LE(static_cast<size_t>(encoded_size), buf.length());
  buf.resize(encoded_size);
}
    
    
    { private:
  /*! \brief external memory column offset */
  std::vector<size_t> disk_offset_;
};
    
      /*! \brief get node statistics given nid */
  RTreeNodeStat& Stat(int nid) {
    return stats_[nid];
  }
  /*! \brief get node statistics given nid */
  const RTreeNodeStat& Stat(int nid) const {
    return stats_[nid];
  }
  /*!
   * \brief load model from stream
   * \param fi input stream
   */
  void Load(dmlc::Stream* fi) {
    CHECK_EQ(fi->Read(&param, sizeof(TreeParam)), sizeof(TreeParam));
    nodes_.resize(param.num_nodes);
    stats_.resize(param.num_nodes);
    CHECK_NE(param.num_nodes, 0);
    CHECK_EQ(fi->Read(dmlc::BeginPtr(nodes_), sizeof(Node) * nodes_.size()),
             sizeof(Node) * nodes_.size());
    CHECK_EQ(fi->Read(dmlc::BeginPtr(stats_), sizeof(RTreeNodeStat) * stats_.size()),
             sizeof(RTreeNodeStat) * stats_.size());
    // chg deleted nodes
    deleted_nodes_.resize(0);
    for (int i = param.num_roots; i < param.num_nodes; ++i) {
      if (nodes_[i].IsDeleted()) deleted_nodes_.push_back(i);
    }
    CHECK_EQ(static_cast<int>(deleted_nodes_.size()), param.num_deleted);
  }
  /*!
   * \brief save model to stream
   * \param fo output stream
   */
  void Save(dmlc::Stream* fo) const {
    CHECK_EQ(param.num_nodes, static_cast<int>(nodes_.size()));
    CHECK_EQ(param.num_nodes, static_cast<int>(stats_.size()));
    fo->Write(&param, sizeof(TreeParam));
    CHECK_NE(param.num_nodes, 0);
    fo->Write(dmlc::BeginPtr(nodes_), sizeof(Node) * nodes_.size());
    fo->Write(dmlc::BeginPtr(stats_), sizeof(RTreeNodeStat) * nodes_.size());
  }
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
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
    
    SEXP XGDMatrixSetInfo_R(SEXP handle, SEXP field, SEXP array) {
  R_API_BEGIN();
  int len = length(array);
  const char *name = CHAR(asChar(field));
  if (!strcmp('group', name)) {
    std::vector<unsigned> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = static_cast<unsigned>(INTEGER(array)[i]);
    }
    CHECK_CALL(XGDMatrixSetGroup(R_ExternalPtrAddr(handle), BeginPtr(vec), len));
  } else {
    std::vector<float> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = REAL(array)[i];
    }
    CHECK_CALL(XGDMatrixSetFloatInfo(R_ExternalPtrAddr(handle),
                                   CHAR(asChar(field)),
                                   BeginPtr(vec), len));
  }
  R_API_END();
  return R_NilValue;
}
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-array type
        json str = 'I am a string';
        str.at(0) = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create values of different integer types
    short n_short = 42;
    int n_int = -23;
    long n_long = 1024;
    int_least32_t n_int_least32_t = -17;
    uint8_t n_uint8_t = 8;
    
    
    {    std::cout << null << '\n';
    std::cout << *res2.first << ' ' << std::boolalpha << res2.second << '\n';
}


        
        extern JSClass  *jsb_cocosbuilder_CCBReader_class;
extern JSObject *jsb_cocosbuilder_CCBReader_prototype;
    
    
    
    
    
    
    
    
    {		m_debugDraw.DrawString(5, m_textLine, '****PAUSED****');
		m_textLine += DRAW_STRING_NEW_LINE;
	}
    
    #ifndef TEST_H
#define TEST_H
    
    	static Test* Create()
	{
		return new BulletTest;
	}
    
      // Choose sharpened, blurred or original per pixel
  std::vector<float> sharpened = Sharpen(yuv[channel], w, h, sigma, amount);
  std::vector<float> blurred = Blur(yuv[channel], w, h);
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      size_t index = y * w + x;
    }
    }
    
    void DCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * x + u] * in[u * stride];
    }
  }
}
    
    #endif  // GUETZLI_ENTROPY_ENCODE_H_

    
    
    {}  // namespace guetzli

    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    #include 'guetzli/fdct.h'
    
    enum JPEGReadError {
  JPEG_OK = 0,
  JPEG_SOI_NOT_FOUND,
  JPEG_SOF_NOT_FOUND,
  JPEG_UNEXPECTED_EOF,
  JPEG_MARKER_BYTE_NOT_FOUND,
  JPEG_UNSUPPORTED_MARKER,
  JPEG_WRONG_MARKER_SIZE,
  JPEG_INVALID_PRECISION,
  JPEG_INVALID_WIDTH,
  JPEG_INVALID_HEIGHT,
  JPEG_INVALID_NUMCOMP,
  JPEG_INVALID_SAMP_FACTOR,
  JPEG_INVALID_START_OF_SCAN,
  JPEG_INVALID_END_OF_SCAN,
  JPEG_INVALID_SCAN_BIT_POSITION,
  JPEG_INVALID_COMPS_IN_SCAN,
  JPEG_INVALID_HUFFMAN_INDEX,
  JPEG_INVALID_QUANT_TBL_INDEX,
  JPEG_INVALID_QUANT_VAL,
  JPEG_INVALID_MARKER_LEN,
  JPEG_INVALID_SAMPLING_FACTORS,
  JPEG_INVALID_HUFFMAN_CODE,
  JPEG_INVALID_SYMBOL,
  JPEG_NON_REPRESENTABLE_DC_COEFF,
  JPEG_NON_REPRESENTABLE_AC_COEFF,
  JPEG_INVALID_SCAN,
  JPEG_OVERLAPPING_SCANS,
  JPEG_INVALID_SCAN_ORDER,
  JPEG_EXTRA_ZERO_RUN,
  JPEG_DUPLICATE_DRI,
  JPEG_DUPLICATE_SOF,
  JPEG_WRONG_RESTART_MARKER,
  JPEG_DUPLICATE_COMPONENT_ID,
  JPEG_COMPONENT_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_ERROR,
  JPEG_QUANT_TABLE_NOT_FOUND,
  JPEG_EMPTY_DHT,
  JPEG_EMPTY_DQT,
  JPEG_OUT_OF_BAND_COEFF,
  JPEG_EOB_RUN_TOO_LONG,
  JPEG_IMAGE_TOO_LARGE,
};
    
      // Fill in root table.
  key = 0;
  idx = 0;
  for (len = 1; len <= kJpegHuffmanRootTableBits; ++len) {
    for (; count[len] > 0; --count[len]) {
      code.bits = len;
      code.value = symbols[idx++];
      reps = 1 << (kJpegHuffmanRootTableBits - len);
      while (reps--) {
        table[key++] = code;
      }
    }
  }
    
    #include 'guetzli/quality.h'
    
      size_t queued() const {
    return queue_.size();
  }
    
    #include <cctype>
#include <cstring>
    
    
    {} // namespace folly

    
    
    {} // namespace folly

    
    namespace folly {
    }
    
    /**
 * LogConfig contains configuration for the LoggerDB.
 *
 * This includes information about the log levels for log categories,
 * as well as what log handlers are configured and which categories they are
 * attached to.
 */
class LogConfig {
 public:
  using CategoryConfigMap = std::unordered_map<std::string, LogCategoryConfig>;
  using HandlerConfigMap = std::unordered_map<std::string, LogHandlerConfig>;
    }
    
      slists.Append('k1', 'v1');
  slists.Append('k1', 'v2');
  slists.Append('k1', 'v3');
    
    #include <memory>
#include <set>
#include <string>
#include 'rocksdb/statistics.h'
#include 'monitoring/statistics.h'
    
    /**
 * @brief convert error code to status
 * @details Convert internal linux error code to Status
 *
 * @param r [description]
 * @return [description]
 */
Status err_to_status(int r)
{
  switch (r) {
  case 0:
    return Status::OK();
  case -ENOENT:
    return Status::IOError();
  case -ENODATA:
  case -ENOTDIR:
    return Status::NotFound(Status::kNone);
  case -EINVAL:
    return Status::InvalidArgument(Status::kNone);
  case -EIO:
    return Status::IOError(Status::kNone);
  default:
    // FIXME :(
    assert(0 == 'unrecognized error code');
    return Status::NotSupported(Status::kNone);
  }
}
    
    // This class contains APIs to stack rocksdb wrappers.Eg. Stack TTL over base d
class StackableDB : public DB {
 public:
  // StackableDB take sole ownership of the underlying db.
  explicit StackableDB(DB* db) : db_(db) {}
    }
    
    
    {  m_jcreate_compaction_filter_methodid =
      AbstractCompactionFilterFactoryJni::getCreateCompactionFilterMethodId(env);
  if(m_jcreate_compaction_filter_methodid == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
}
    
    
    {  server->Wait();
}
    
    struct EnumValBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(EnumVal::VT_NAME, name);
  }
  void add_value(int64_t value) {
    fbb_.AddElement<int64_t>(EnumVal::VT_VALUE, value, 0);
  }
  void add_object(flatbuffers::Offset<Object> object) {
    fbb_.AddOffset(EnumVal::VT_OBJECT, object);
  }
  void add_union_type(flatbuffers::Offset<Type> union_type) {
    fbb_.AddOffset(EnumVal::VT_UNION_TYPE, union_type);
  }
  EnumValBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  EnumValBuilder &operator=(const EnumValBuilder &);
  flatbuffers::Offset<EnumVal> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<EnumVal>(end);
    fbb_.Required(o, EnumVal::VT_NAME);
    return o;
  }
};
    
    // A common interface for objects having comments in the source.
// Return formatted comments to be inserted in generated code.
struct CommentHolder {
  virtual ~CommentHolder() {}
  virtual grpc::string GetLeadingComments(const grpc::string prefix) const = 0;
  virtual grpc::string GetTrailingComments(const grpc::string prefix) const = 0;
  virtual std::vector<grpc::string> GetAllComments() const = 0;
};
    
    static std::string GenTypePointer(const Type &type) {
  switch (type.base_type) {
    case BASE_TYPE_STRING: return '[]byte';
    case BASE_TYPE_VECTOR: return GenTypeGet(type.VectorType());
    case BASE_TYPE_STRUCT: return type.struct_def->name;
    case BASE_TYPE_UNION:
      // fall through
    default: return '*flatbuffers.Table';
  }
}
    
    template<class T> std::string GenFullName(const T *enum_def) {
  std::string full_name;
  const auto &name_spaces = enum_def->defined_namespace->components;
  for (auto ns = name_spaces.cbegin(); ns != name_spaces.cend(); ++ns) {
    full_name.append(*ns + '_');
  }
  full_name.append(enum_def->name);
  return full_name;
}
    
    namespace flatbuffers {
    }
    
        // Fill with random data
    int allocLength = (byteSize + 14) * framesPerSend;
    framePackBuffer = new unsigned char[allocLength];
    for (int i = 0; i < allocLength; i++) {
        framePackBuffer[i] = rand() % 255;
    }
    
    
    {    perMessageDeflate = (token == TOK_PERMESSAGE_DEFLATE);
    while ((token = getToken(data, stop))) {
        switch (token) {
        case TOK_PERMESSAGE_DEFLATE:
            return;
        case TOK_SERVER_NO_CONTEXT_TAKEOVER:
            serverNoContextTakeover = true;
            break;
        case TOK_CLIENT_NO_CONTEXT_TAKEOVER:
            clientNoContextTakeover = true;
            break;
        case TOK_SERVER_MAX_WINDOW_BITS:
            serverMaxWindowBits = 1;
            lastInteger = &serverMaxWindowBits;
            break;
        case TOK_CLIENT_MAX_WINDOW_BITS:
            clientMaxWindowBits = 1;
            lastInteger = &clientMaxWindowBits;
            break;
        default:
            if (token < 0 && lastInteger) {
                *lastInteger = -token;
            }
            break;
        }
    }
}
    
    struct Init {
    Init() {SSL_library_init();}
    ~Init() {/*EVP_cleanup();*/}
} init;
    
    void Loop::doEpoll(int epollTimeout) {
    for (std::pair<Poll *, void (*)(Poll *)> c : closing) {
        numPolls--;
    }
    }
    
        void listen(ListenOptions listenOptions) {
        if (listenOptions == TRANSFERS && !async) {
            addAsync();
        }
    }
    
                // todo: this should get TransformData!
            static size_t estimate(const char *data, size_t length) {
                return length + 128;
            }
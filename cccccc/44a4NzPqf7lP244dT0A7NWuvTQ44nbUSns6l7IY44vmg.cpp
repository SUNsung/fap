
        
            cv::Mat sols = cv::Mat::zeros(3, 27, CV_64F);
    std::vector<double> cost;
    int count = 0;
    for (int k = 0; k < 27; ++k)
    {
        //  V(:,k) = V(:,k)/V(1,k);
        cv::Mat V_kA = eigenvec_r.col(k); // 27x1
        cv::Mat V_kB = cv::Mat(1, 1, z.depth(), V_kA.at<double>(0)); // 1x1
        cv::Mat V_k; cv::solve(V_kB.t(), V_kA.t(), V_k); // A/B = B'\A'
        cv::Mat( V_k.t()).copyTo( eigenvec_r.col(k) );
    }
    
    namespace cv {
    }
    
    namespace cv { namespace cuda { namespace device
{
    template <class T>
    __device__ __forceinline__ T warp_reduce(volatile T *ptr , const unsigned int tid = threadIdx.x)
    {
        const unsigned int lane = tid & 31; // index of thread in warp (0..31)
    }
    }
    }
    }
    
    struct DynamicFnEntry
{
    const char* fnName; // 'clCreateContext'
    void** ppFn; // &clCreateContext_pfn
};
    
    
    {  switch (t) {
    case SystemCPU: return to_usec(ru.ru_stime);
    case UserCPU:   return to_usec(ru.ru_utime);
    case TotalCPU:  return to_usec(ru.ru_stime) + to_usec(ru.ru_utime);
    default: always_assert(false);
  }
}
    
      /**
   * Implementing Transport...
   */
  const char *getUrl() override;
  const char *getRemoteHost() override;
  uint16_t getRemotePort() override;
  const void *getPostData(size_t &size) override;
  Method getMethod() override;
  std::string getHeader(const char *name) override;
  void getHeaders(HeaderMap &headers) override;
  void addHeaderImpl(const char *name, const char *value) override;
  void removeHeaderImpl(const char *name) override;
  void sendImpl(const void *data, int size, int code, bool chunked, bool eom)
       override;
  void onSendEndImpl() override;
  bool isUploadedFile(const String& filename) override;
  bool getFiles(std::string &files) override;
    
    #include <cstdint>
#include <vector>
#include <numa.h>
    
    ///////////////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////
    
    PC NormalizedInstruction::pc() const {
  return unit()->at(source.offset());
}
    
    ssize_t hphp_read_embedded_data(const char* section, char* buf, size_t len) {
  embedded_data data;
  if (get_embedded_data(section, &data)) {
    auto str = read_embedded_data(data);
    auto data_len = str.length();
    auto real_len = data_len < len ? data_len : len;
    memcpy(buf, str.data(), real_len * sizeof(char));
    return real_len;
  } else {
    return -1;
  }
}
    
    
    {  /// Configurations may set 'custom_' flags.
  std::map<std::string, std::string> custom_;
};
    
      /// Allow a registry type to react to configuration updates.
  virtual void configure();
    
    static int update_user_kernel_buffer(int options,
                                     size_t read_offset,
                                     size_t *max_read_offset,
                                     int *drops) {
  if (osquery_cqueue_advance_read(
          &osquery.cqueue, read_offset, max_read_offset)) {
    return -EINVAL;
  }
  if (!(options & OSQUERY_OPTIONS_NO_BLOCK)) {
    ssize_t offset = 0;
    if ((offset = osquery_cqueue_wait_for_data(&osquery.cqueue)) < 0) {
      return -EINVAL;
    }
    }
    }
    
    /// Define a map of decoration points to their expected configuration key.
extern const std::map<DecorationPoint, std::string> kDecorationPointKeys;
    
    
    {  // Support a signed 64, a double, and treat everything else as a signed int.
  if (type == kCFNumberSInt64Type) {
    long long int value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  } else if (type == kCFNumberDoubleType) {
    double value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  } else {
    unsigned int value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  }
  // Cast as a string.
  return '0';
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
    
      std::string tmp_file = TempFileName();
  dmlc::Stream * fs = dmlc::Stream::Create(tmp_file.c_str(), 'w');
  info.SaveBinary(fs);
  delete fs;
    
    XGBOOST_REGISTER_METRIC(GammaNLogLik, 'gamma-nloglik')
.describe('Negative log-likelihood for gamma regression.')
.set_body([](const char* param) { return new EvalGammaNLogLik(); });
    
    enum NDK_CRASH_PARSER_STATE {
    EXPECTS_CRASH_DUMP,
    EXPECTS_CRASH_DUMP_HEADER,
    EXPECTS_CRASH_DUMP_CONTENT,
    EXPECTS_CRASH_DUMP_END,
};
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {    __DelOlderTouchTime(now);
    touch_times_.push_back(now);
    return true;
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    jvalue JNU_CallMethodByMethodInfo(JNIEnv* _env, jobject _obj, JniMethodInfo _method_info, ...);
    
    #include <folly/Exception.h>
#include <folly/Format.h>
#include <folly/Likely.h>
#include <folly/String.h>
#include <folly/portability/Unistd.h>
    
    path remove_prefix(const path& pth, const path& prefix) {
  path::const_iterator it;
  if (!skipPrefix(pth, prefix, it)) {
    throw filesystem_error(
        'Path does not start with prefix',
        pth,
        prefix,
        bsys::errc::make_error_code(bsys::errc::invalid_argument));
  }
    }
    
    
    {  size_t size = 0;
  fs::path mountPoint;
  dev_t device = 0;
};
    
      // Make sure the inherit flag is always off for the root logger.
  if (!parent_) {
    inherit = false;
  }
  auto newValue = static_cast<uint32_t>(level);
  if (inherit) {
    newValue |= FLAG_INHERIT;
  }
    
      /**
   * handleMessage() is called when a log message is processed by a LogCategory
   * that this handler is attached to.
   *
   * This must be implemented by LogHandler subclasses.
   *
   * handleMessage() will always be invoked from the thread that logged the
   * message.  LogMessage::getThreadID() contains the thread ID, but the
   * LogHandler can also include any other thread-local state they desire, and
   * this will always be data for the thread that originated the log message.
   *
   * @param message The LogMessage objet.
   * @param handlerCategory  The LogCategory that invoked handleMessage().
   *     This is the category that this LogHandler is attached to.  Note that
   *     this may be different than the category that this message was
   *     originally logged at.  message->getCategory() returns the category of
   *     the log message.
   */
  virtual void handleMessage(
      const LogMessage& message,
      const LogCategory* handlerCategory) = 0;
    
      /**
   * Update this LogHandlerConfig object by merging in settings from another
   * LogConfig.
   *
   * The other LogHandlerConfig must not have a type set.
   */
  void update(const LogHandlerConfig& other);

        
        // Gets the path to the content shell's pak file.
bool GetResourcesPakFilePath(base::FilePath& output);
    
    #endif  // CONTENT_NW_SRC_API_DISPATCHER_H_
    
    
    {} // namespace nwapi

    
    public:
  EventListener(int id,
                const base::WeakPtr<DispatcherHost>& dispatcher_host,
                const base::DictionaryValue& option);
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return !item->icon_.IsEmpty();
}
    
    #include 'content/nw/src/api/menu/menu.h'
    
    
    {
    {    // build keyboard code
    ui::DomCode domCode = ui::KeycodeConverter::CodeStringToDomCode(keyName.c_str());
    retval = ui::DomCodeToUsLayoutKeyboardCode(domCode);
  }
  return retval;
}
    
    int main(int argc, char** argv) {
  if (argc != 4) {
    printf('This script converts the MNIST dataset to the leveldb format used\n'
           'by caffe to train a siamese network.\n'
           'Usage:\n'
           '    convert_mnist_data input_image_file input_label_file '
           'output_db_file\n'
           'The MNIST dataset could be downloaded at\n'
           '    http://yann.lecun.com/exdb/mnist/\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3]);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB; compile with USE_LEVELDB.';
}
#endif  // USE_LEVELDB

    
      /// @brief The spatial dimensions of the input.
  inline int input_shape(int i) {
    return (*bottom_shape_)[channel_axis_ + i];
  }
  // reverse_dimensions should return true iff we are implementing deconv, so
  // that conv helpers know which dimensions are which.
  virtual bool reverse_dimensions() = 0;
  // Compute height_out_ and width_out_ from other parameters.
  virtual void compute_output_shape() = 0;
    
    #endif  // CAFFE_CUDNN_LCN_LAYER_HPP_

    
    namespace caffe {
    }
    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
      EltwiseParameter_EltwiseOp op_;
  vector<Dtype> coeffs_;
  Blob<int> max_idx_;
    
    /**
 * @brief A layer for learning 'embeddings' of one-hot vector input.
 *        Equivalent to an InnerProductLayer with one-hot vectors as input, but
 *        for efficiency the input is the 'hot' index of each column itself.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class EmbedLayer : public Layer<Dtype> {
 public:
  explicit EmbedLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    /**
 * @brief Computes @f$ y = \gamma ^ {\alpha x + \beta} @f$,
 *        as specified by the scale @f$ \alpha @f$, shift @f$ \beta @f$,
 *        and base @f$ \gamma @f$.
 */
template <typename Dtype>
class ExpLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides ExpParameter exp_param,
   *     with ExpLayer options:
   *   - scale (\b optional, default 1) the scale @f$ \alpha @f$
   *   - shift (\b optional, default 0) the shift @f$ \beta @f$
   *   - base (\b optional, default -1 for a value of @f$ e \approx 2.718 @f$)
   *         the base @f$ \gamma @f$
   */
  explicit ExpLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
     private:
  std::vector<TestPartResult> array_;
    
    // Type-parameterized tests are abstract test patterns parameterized
// by a type.  Compared with typed tests, type-parameterized tests
// allow you to define the test pattern without knowing what the type
// parameters are.  The defined pattern can be instantiated with
// different types any number of times, in any number of translation
// units.
//
// If you are designing an interface or concept, you can define a
// suite of type-parameterized tests to verify properties that any
// valid implementation of the interface/concept should have.  Then,
// each implementation can easily instantiate the test suite to verify
// that it conforms to the requirements, without having to write
// similar tests repeatedly.  Here's an example:
    
    template <typename T>
bool TypeIdHelper<T>::dummy_ = false;
    
      // Compares two wide C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike wcscasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL wide C string,
  // including the empty string.
  // NB: The implementations on different platforms slightly differ.
  // On windows, this method uses _wcsicmp which compares according to LC_CTYPE
  // environment variable. On GNU platform this method uses wcscasecmp
  // which compares according to LC_CTYPE category of the current locale.
  // On MacOS X, it uses towlower, which also uses LC_CTYPE category of the
  // current locale.
  static bool CaseInsensitiveWideCStringEquals(const wchar_t* lhs,
                                               const wchar_t* rhs);
    
     private:
  void CalculatePrimesUpTo(int max) {
    ::std::fill(is_prime_, is_prime_ + is_prime_size_, true);
    is_prime_[0] = is_prime_[1] = false;
    }
    
    
    {    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
    namespace irgen {
    }
    
      /* Since popen() doesn't indicate if the internal fork() doesn't work
   * (e.g. the shell can't be executed) we explicitly set it to 0 to be
   * sure we don't catch any older errno value. */
  errno = 0;
  FILE *sendmail = popen(sendmail_cmd.data(), 'w');
  if (sendmail == nullptr) {
    raise_warning('Could not execute mail delivery program '%s'',
                    sendmail_path);
    return 0;
  }
    
      Variant ret = mpzToGMPObject(gmpReturn);
    
    /*
 * Vtuple is an index to a tuple in Vunit::tuples.
 */
DECLARE_VNUM(Vtuple, true, 'T');
    
    void ThriftBuffer::read(Variant &data) {
  String sdata;
  read(sdata);
  data = unserialize_with_no_notice(sdata);
}
    
    #include 'hphp/util/assertions.h'
#include 'magic.h' // @nolint
    
        // dense for comparison
    mC.Resize(dim1, dim1);
    mC.SetValue(0.0f);
    Matrix<float>::MultiplyAndAdd(mAdense, transposeA, mAdense, transposeB, mC);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mAdense, transposeA, mA2dense, transposeB, beta, mC);
    
    #include 'stdafx.h'
#include 'Actions.h'
#include 'SimpleNetworkBuilder.h'
#include 'NDLNetworkBuilder.h'
#include 'ScriptableObjects.h'
#include 'BrainScriptEvaluator.h'
#include 'BrainScriptParser.h'
    
    
    {
    {
    {}}}

    
    
    {
    {
    {}}}

    
    // Subclass of TestServiceImpl that increments a request counter for
// every call to the Echo RPC.
class MyTestServiceImpl : public TestServiceImpl {
 public:
  MyTestServiceImpl() : request_count_(0) {}
    }
    
    #endif  // GRPC_TEST_CPP_UTIL_CREATE_TEST_CHANNEL_H

    
    static const int WARMUP = 5;
static const int BENCHMARK = 5;
    
    
    {  GetReporter()->ReportQPS(*result);
  GetReporter()->ReportLatency(*result);
}
    
        // What we get from the client.
    HelloRequest request_;
    // What we send back to the client.
    HelloReply reply_;
    
    using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using helloworld::HelloRequest;
using helloworld::HelloReply;
using helloworld::Greeter;
    
    
    {
}  // namespace routeguide
    
    bool SecureAuthContext::SetPeerIdentityPropertyName(const grpc::string& name) {
  if (!ctx_) return false;
  return grpc_auth_context_set_peer_identity_property_name(ctx_,
                                                           name.c_str()) != 0;
}
    
      Copyright 2003 by
  Francesco Zappa Nardelli
    
      // Success/failure error codes.
  enum jpgd_status
  {
    JPGD_SUCCESS = 0, JPGD_FAILED = -1, JPGD_DONE = 1,
    JPGD_BAD_DHT_COUNTS = -256, JPGD_BAD_DHT_INDEX, JPGD_BAD_DHT_MARKER, JPGD_BAD_DQT_MARKER, JPGD_BAD_DQT_TABLE, 
    JPGD_BAD_PRECISION, JPGD_BAD_HEIGHT, JPGD_BAD_WIDTH, JPGD_TOO_MANY_COMPONENTS, 
    JPGD_BAD_SOF_LENGTH, JPGD_BAD_VARIABLE_MARKER, JPGD_BAD_DRI_LENGTH, JPGD_BAD_SOS_LENGTH,
    JPGD_BAD_SOS_COMP_ID, JPGD_W_EXTRA_BYTES_BEFORE_MARKER, JPGD_NO_ARITHMITIC_SUPPORT, JPGD_UNEXPECTED_MARKER,
    JPGD_NOT_JPEG, JPGD_UNSUPPORTED_MARKER, JPGD_BAD_DQT_LENGTH, JPGD_TOO_MANY_BLOCKS,
    JPGD_UNDEFINED_QUANT_TABLE, JPGD_UNDEFINED_HUFF_TABLE, JPGD_NOT_SINGLE_SCAN, JPGD_UNSUPPORTED_COLORSPACE,
    JPGD_UNSUPPORTED_SAMP_FACTORS, JPGD_DECODE_ERROR, JPGD_BAD_RESTART_MARKER, JPGD_ASSERTION_ERROR,
    JPGD_BAD_SOS_SPECTRAL, JPGD_BAD_SOS_SUCCESSIVE, JPGD_STREAM_READ, JPGD_NOTENOUGHMEM
  };
    
  // Input stream interface.
  // Derive from this class to read input data from sources other than files or memory. Set m_eof_flag to true when no more data is available.
  // The decoder is rather greedy: it will keep on calling this method until its internal input buffer is full, or until the EOF flag is set.
  // It the input stream contains data after the JPEG stream's EOI (end of image) marker it will probably be pulled into the internal buffer.
  // Call the get_total_bytes_read() method to determine the actual size of the JPEG stream after successful decoding.
  class jpeg_decoder_stream
  {
  public:
    jpeg_decoder_stream() { }
    virtual ~jpeg_decoder_stream() { }
    }
    
    static const vorbis_residue_template _res_16s_0[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__16c0_s_single,&_huff_book__16c0_s_single,
   &_resbook_16s_0,&_resbook_16s_0},
};
static const vorbis_residue_template _res_16s_1[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__16c1_s_short,&_huff_book__16c1_s_short,
   &_resbook_16s_1,&_resbook_16s_1},
    }
    
    /* We don't have special code for this compiler/arch, so do it the slow way */
#  define vorbis_fpu_setround(vorbis_fpu_control) {}
#  define vorbis_fpu_restore(vorbis_fpu_control) {}
    
    #define todB_nn(x) todB(x)
    
    #define opus_ifft(_st, _fin, _fout, arch) \
   ((void)(arch), opus_ifft_neon(_st, _fin, _fout))
    
    
/** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q15
static OPUS_INLINE opus_val32 MULT16_32_Q15_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q15\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b), 'r'(a<<16)
  );
  /*We intentionally don't OR in the high bit of rd_lo for speed.*/
  return rd_hi<<1;
}
#define MULT16_32_Q15(a, b) (MULT16_32_Q15_armv4(a, b))
    
    #undef    silk_min_16
static OPUS_INLINE opus_int16 silk_min_16(opus_int16 a, opus_int16 b)
{
    ops_count += 1;
    return (((a) < (b)) ? (a) : (b));
}
#undef    silk_min_32
static OPUS_INLINE opus_int32 silk_min_32(opus_int32 a, opus_int32 b)
{
    ops_count += 1;
    return (((a) < (b)) ? (a) : (b));
}
#undef    silk_min_64
static OPUS_INLINE opus_int64 silk_min_64(opus_int64 a, opus_int64 b)
{
    ops_count += 1;
    return (((a) < (b)) ? (a) : (b));
}
    
    bool js_cocos2dx_studio_Frame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_Frame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_Frame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_Frame_clone(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_setTweenType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_setNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_setTimeline(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_isEnterWhenPassed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_getTweenType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_getFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_apply(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_isTween(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_setFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_setTween(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_getTimeline(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Frame_getNode(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    
    
    
    
    
    class BodyTypes : public Test
{
public:
	BodyTypes()
	{
		b2Body* ground = NULL;
		{
			b2BodyDef bd;
			ground = m_world->CreateBody(&bd);
    }
    }
    }
    
    			m_bullet = m_world->CreateBody(&bd);
			m_bullet->CreateFixture(&box, 100.0f);
    
    
    {				prevBody = body;
			}
    
    // Define a callback to handle incoming messages
void on_message(server* s, websocketpp::connection_hdl hdl, message_ptr msg) {
    try {
        s->send(hdl, msg->get_payload(), msg->get_opcode());
    } catch (const websocketpp::lib::error_code& e) {
    }
    }
    
        // this is a shared upgrade, no need to make it unique
    const char *buf = 'GET / HTTP/1.1\r\n'
                      'Host: server.example.com\r\n'
                      'Upgrade: websocket\r\n'
                      'Connection: Upgrade\r\n'
                      'Sec-WebSocket-Key: x3JJHMbDL1EzLkh9GBhXDw==\r\n'
                      'Sec-WebSocket-Protocol: default\r\n'
                      'Sec-WebSocket-Version: 13\r\n'
                      'Origin: http://example.com\r\n\r\n';
    
    
    {
    {                    // Perform first batch of echo sending
                    if (sockets.size() == connections) {
                        startPoint = high_resolution_clock::now();
                        echo();
                    } else {
                        newConnection();
                    }
                }
                delete [] buf->base;
            });
    
    
    {    if (addr.ss_family == AF_INET) {
        sockaddr_in *ipv4 = (sockaddr_in *) &addr;
        inet_ntop(AF_INET, &ipv4->sin_addr, buf, sizeof(buf));
        return {ntohs(ipv4->sin_port), buf, 'IPv4'};
    } else {
        sockaddr_in6 *ipv6 = (sockaddr_in6 *) &addr;
        inet_ntop(AF_INET6, &ipv6->sin6_addr, buf, sizeof(buf));
        return {ntohs(ipv6->sin6_port), buf, 'IPv6'};
    }
}
    
    #include 'WebSocketProtocol.h'
#include 'Socket.h'
    
        Poll(Loop *loop, uv_os_sock_t fd) {
        uv_poll = new uv_poll_t;
        uv_poll_init_socket(loop, uv_poll, fd);
    }
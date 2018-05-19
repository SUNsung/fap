
        
        // Tell browser we have an uncaughtException from node.
IPC_MESSAGE_ROUTED1(ShellViewHostMsg_UncaughtException,
                    std::string /* err */)
    
    namespace nw {
    }
    
    v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id) {
  RenderThread::Get()->Send(new ShellViewHostMsg_Deallocate_Object(
      routing_id, object_id));
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  return v8::Undefined(isolate);
}
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    
    {protected:
  BaseEvent(){}
  virtual ~BaseEvent(){}
};
    
    void Menu::Destroy() {
  gtk_widget_destroy(menu_);
  g_object_unref(G_OBJECT(menu_));
}
    
     protected:
  ~NwClipboardSetListSyncFunction() override;
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Expands to the name of the variable used to remember the names of
// the defined tests in the given test case.
# define GTEST_TYPED_TEST_CASE_P_STATE_(TestCaseName) \
  gtest_typed_test_case_p_state_##TestCaseName##_
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15>
class ValueArray15 {
 public:
  ValueArray15(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15) : v1_(v1), v2_(v2),
      v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
      v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15) {}
    }
    
    #ifdef __BORLANDC__
// string.h is not guaranteed to provide strcpy on C++ Builder.
# include <mem.h>
#endif
    
    // This provides interface PrimeTable that determines whether a number is a
// prime and determines a next prime number. This interface is used
// in Google Test samples demonstrating use of parameterized tests.
    
    
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
    
    #pragma warning(disable : 4100) // unused p_optional
    OperatorSchemaSetter&
        OperatorSchemaSetter::Input(const std::string& p_inputName,
            const std::string& p_description,
            const std::string& p_type,
            bool p_optional) /* TODO: add logic for this */
    {
        m_inputs.push_back(std::make_tuple(p_inputName, p_description, p_type));
        return *this;
    }
    
            // Attribute representation, including name, type, and allowed values.
        // The first element of allowed values (if specified) is the default
        // value.
        class Attribute
        {
        public:
    }
    
            int Status::Code() const
        {
            return Ok() ? static_cast<int>(StatusCode::OK) : m_state->m_code;
        }
    
                static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/std::string* p_data, int64_t p_expected_size);
            static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/bool* p_data, int64_t p_expected_size);
    
            size_t StringRange::Find(const char p_ch) const
        {
            size_t idx = 0;
            while (idx < m_size)
            {
                if (m_data[idx] == p_ch)
                {
                    return idx;
                }
                idx++;
            }
            return std::string::npos;
        }
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(Affine)
        .Description('Affine takes one input data (Tensor<T>) and produces one output '
            'data (Tensor<T>) where the affine function, f(x)= alpha * x + beta is '
            'applied to the tensor elementwise.')
        .Input('X', 'Input tensor of any shape', 'T')
        .Output('Y', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('alpha', 'Scalar multiplication factor', AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('beta', 'Scalar offset', AttrType::AttributeProto_AttributeType_FLOAT);
    
        // Taken from Caffe2
    REGISTER_OPERATOR_SCHEMA(SpaceToDepth)
        .Description('SpaceToDepth for 4-D tensors of type T. '
            'Zero-pads and then rearranges (permutes) blocks of spatial data into '
            'channel. More specifically, this op outputs a copy of the input tensor '
            'where values from the height and width dimensions are moved to the '
            'channel dimension. After the zero-padding, both height and width of the '
            'input must be divisible by the block size.')
        .Input('input', 'Input tensor of [N,C,H,W]', 'T')
        .Output('output', 'Output tensor of [N, C * blocksize * blocksize, H/blocksize, '
            'W/blocksize]', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('blocksize', 'Blocks of [blocksize,blocksize] are moved.', AttrType::AttributeProto_AttributeType_INT);
    
    
    {    for (ChunkIdType i = 0; i < m_chunks.size(); ++i)
    {
        ChunkInfo cd;
        cd.m_id = i;
        cd.m_numberOfSamples = m_chunks[i].GetTotalFrames();
        // In frame mode, each frame is represented as sequence.
        // The augmentation is still done for frames in the same sequence only, please see GetSequenceById method.
        cd.m_numberOfSequences = m_frameMode ? m_chunks[i].GetTotalFrames() : m_chunks[i].GetNumberOfUtterances();
        chunks.push_back(cd);
    }
    return chunks;
}
    
    // SectionString - section to hold variable length zero terminated UTF8 strings
// supports mapping tables
// for faster access, a section with offsets to the beginning of the strings can be saved as well
class SectionString : public Section
{
public:
    typedef std::string LabelType; // TODO: are these supposed to be the same as the DataReader's?
    typedef unsigned LabelIdType;
    }
    
    // allows to write cudaFunction() || 'error'   (CUDA runtime)
static
#ifdef WIN32
    __declspec(noinline)
#endif
        void
        operator||(cudaError_t rc, const char* msg)
{
    if (rc != cudaSuccess)
    {
        char buf[1000];
        sprintf_s(buf, 1000, '%s: %s (cuda error %d)', msg, cudaGetErrorString(rc), rc);
        cudafail(buf);
    }
}
    
    
    {
    {    // We failed to update the flags.  Some other thread probably updated them
    // and cleared some of the other bits.  Continue around the loop to see if
    // we are the last user now, or if we need to try updating the flags again.
  }
}
    
    int getdtablesize() {
  return _getmaxstdio();
}
    
      // Sugar for the most common case
  template <class Collection, class F>
  auto map(Collection&& c, F&& func)
      -> decltype(map(c.begin(), c.end(), func)) {
    return map(c.begin(), c.end(), std::forward<F>(func));
  }
    
    AsyncSocket::WriteResult AsyncSocket::performWrite(
    const iovec* vec,
    uint32_t count,
    WriteFlags flags,
    uint32_t* countWritten,
    uint32_t* partialWritten) {
  // We use sendmsg() instead of writev() so that we can pass in MSG_NOSIGNAL
  // We correctly handle EPIPE errors, so we never want to receive SIGPIPE
  // (since it may terminate the program if the main program doesn't explicitly
  // ignore it).
  struct msghdr msg;
  msg.msg_name = nullptr;
  msg.msg_namelen = 0;
  msg.msg_iov = const_cast<iovec *>(vec);
  msg.msg_iovlen = std::min<size_t>(count, kIovMax);
  msg.msg_flags = 0;
  msg.msg_controllen = sendMsgParamCallback_->getAncillaryDataSize(flags);
  CHECK_GE(AsyncSocket::SendMsgParamsCallback::maxAncillaryDataSize,
           msg.msg_controllen);
    }
    
    #ifndef OPENSSL_NO_TLSEXT
/**
 * 1. Client sends TLSEXT_HOSTNAME in client hello.
 * 2. Server found a match SSL_CTX and use this SSL_CTX to
 *    continue the SSL handshake.
 * 3. Server sends back TLSEXT_HOSTNAME in server hello.
 */
TEST(AsyncSSLSocketTest, SNITestMatch) {
  EventBase eventBase;
  std::shared_ptr<SSLContext> clientCtx(new SSLContext);
  std::shared_ptr<SSLContext> dfServerCtx(new SSLContext);
  // Use the same SSLContext to continue the handshake after
  // tlsext_hostname match.
  std::shared_ptr<SSLContext> hskServerCtx(dfServerCtx);
  const std::string serverName('xyz.newdev.facebook.com');
  int fds[2];
  getfds(fds);
  getctx(clientCtx, dfServerCtx);
    }
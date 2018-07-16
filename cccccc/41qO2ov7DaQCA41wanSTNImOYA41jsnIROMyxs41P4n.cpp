// Access an object value by name, create a null member if it does not exist.
// @pre Type of '*this' is object or null.
// @param key is null-terminated.
Value& Value::resolveReference(const char* key) {
  JSON_ASSERT_MESSAGE(
      type_ == nullValue || type_ == objectValue,
      'in Json::Value::resolveReference(): requires objectValue');
  if (type_ == nullValue)
    *this = Value(objectValue);
  CZString actualKey(
      key, static_cast<unsigned>(strlen(key)), CZString::noDuplication); // NOTE!
  ObjectValues::iterator it = value_.map_->lower_bound(actualKey);
  if (it != value_.map_->end() && (*it).first == actualKey)
    return (*it).second;
    }
    
    // Find the file that declares the given fully-qualified symbol name.
bool PyDescriptorDatabase::FindFileContainingSymbol(
    const string& symbol_name, FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallMethod(py_database_, 'FindFileContainingSymbol', 's#',
                          symbol_name.c_str(), symbol_name.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    TEST(AnyTest, TestPackAndUnpack) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(submessage);
    }
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_ENUM_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_ENUM_H__
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
    // TODO(jonskeet): Refactor repeated field support; all the implementations are *really* similar. We
// should probably have a RepeatedFieldGeneratorBase.
class RepeatedEnumFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedEnumFieldGenerator(const FieldDescriptor* descriptor,
                             int fieldOrdinal,
                             const Options *options);
  ~RepeatedEnumFieldGenerator();
    }
    
    RepeatedPrimitiveFieldGenerator::~RepeatedPrimitiveFieldGenerator() {
    }
    
    SourceGeneratorBase::~SourceGeneratorBase() {
}
    
      std::string class_access_level();
  const Options* options();
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
        for (UINT driverTypeIndex = 0; driverTypeIndex < numDriverTypes; driverTypeIndex++)
    {
        g_driverType = driverTypes[driverTypeIndex];
        hr = D3D11CreateDeviceAndSwapChain(NULL, g_driverType, NULL, createDeviceFlags, featureLevels, numFeatureLevels,
                D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &g_featureLevel, &g_pImmediateContext);
        if (SUCCEEDED(hr))
            break;
    }
    if (FAILED(hr))
        return hr;
    
    #endif

    
    #ifndef OPENCV_CUDA_EMULATION_HPP_
#define OPENCV_CUDA_EMULATION_HPP_
    
    //! @endcond
    
    #undef cv_hal_Cholesky32f
#define cv_hal_Cholesky32f lapack_Cholesky32f
#undef cv_hal_Cholesky64f
#define cv_hal_Cholesky64f lapack_Cholesky64f
    
      /// @brief The spatial dimensions of the input.
  inline int input_shape(int i) {
    return (*bottom_shape_)[channel_axis_ + i];
  }
  // reverse_dimensions should return true iff we are implementing deconv, so
  // that conv helpers know which dimensions are which.
  virtual bool reverse_dimensions() = 0;
  // Compute height_out_ and width_out_ from other parameters.
  virtual void compute_output_shape() = 0;
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_2 @f$
   *   -# ...
   *   - K @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_K @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      the concatenated output @f$
   *        y = [\begin{array}{cccc} x_1 & x_2 & ... & x_K \end{array}]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    {  size_t tempDataSize;
  void *tempData1, *tempData2;
};
#endif
    
    #include <vector>
    
    
    {}  // namespace caffe
    
    #include <vector>
    
    /**
 * @brief Convolve the input with a bank of learned filters, and (optionally)
 *        add biases, treating filters and convolution parameters in the
 *        opposite sense as ConvolutionLayer.
 *
 *   ConvolutionLayer computes each output value by dotting an input window with
 *   a filter; DeconvolutionLayer multiplies each input value by a filter
 *   elementwise, and sums over the resulting output windows. In other words,
 *   DeconvolutionLayer is ConvolutionLayer with the forward and backward passes
 *   reversed. DeconvolutionLayer reuses ConvolutionParameter for its
 *   parameters, but they take the opposite sense as in ConvolutionLayer (so
 *   padding is removed from the output rather than added to the input, and
 *   stride results in upsampling rather than downsampling).
 */
template <typename Dtype>
class DeconvolutionLayer : public BaseConvolutionLayer<Dtype> {
 public:
  explicit DeconvolutionLayer(const LayerParameter& param)
      : BaseConvolutionLayer<Dtype>(param) {}
    }
    
    /* Location of code at error codes Reserve 0..2 (status codes 0..23 for UNLV)*/
#define LOC_UNUSED0        0
#define LOC_UNUSED1        1
#define LOC_UNUSED2        2
#define LOC_INIT      3
#define LOC_EDGE_PROG   4
#define LOC_TEXT_ORD_ROWS 5
#define LOC_TEXT_ORD_WORDS  6
#define LOC_PASS1     7
#define LOC_PASS2     8
/* Reserve up to 8..13 for adding subloc 0/3 plus subsubloc 0/1/2 */
#define LOC_FUZZY_SPACE   14
/* Reserve up to 14..20 for adding subloc 0/3 plus subsubloc 0/1/2 */
#define LOC_MM_ADAPT    21
#define LOC_DOC_BLK_REJ   22
#define LOC_WRITE_RESULTS 23
#define LOC_ADAPTIVE    24
/* DON'T DEFINE ANY LOCATION > 31 !!! */
    
      // Computes vectors of min and max label index for each timestep, based on
  // whether skippability of nulls makes it possible to complete a valid path.
  bool ComputeLabelLimits();
  // Computes targets based purely on the labels by spreading the labels evenly
  // over the available timesteps.
  void ComputeSimpleTargets(GENERIC_2D_ARRAY<float>* targets) const;
  // Computes mean positions and half widths of the simple targets by spreading
  // the labels even over the available timesteps.
  void ComputeWidthsAndMeans(GenericVector<float>* half_widths,
                             GenericVector<int>* means) const;
  // Calculates and returns a suitable fraction of the simple targets to add
  // to the network outputs.
  float CalculateBiasFraction();
  // Runs the forward CTC pass, filling in log_probs.
  void Forward(GENERIC_2D_ARRAY<double>* log_probs) const;
  // Runs the backward CTC pass, filling in log_probs.
  void Backward(GENERIC_2D_ARRAY<double>* log_probs) const;
  // Normalizes and brings probs out of log space with a softmax over time.
  void NormalizeSequence(GENERIC_2D_ARRAY<double>* probs) const;
  // For each timestep computes the max prob for each class over all
  // instances of the class in the labels_, and sets the targets to
  // the max observed prob.
  void LabelsToClasses(const GENERIC_2D_ARRAY<double>& probs,
                       NetworkIO* targets) const;
  // Normalizes the probabilities such that no target has a prob below min_prob,
  // and, provided that the initial total is at least min_total_prob, then all
  // probs will sum to 1, otherwise to sum/min_total_prob. The maximum output
  // probability is thus 1 - (num_classes-1)*min_prob.
  static void NormalizeProbs(GENERIC_2D_ARRAY<float>* probs);
  // Returns true if the label at index is a needed null.
  bool NeededNull(int index) const;
  // Returns exp(clipped(x)), clipping x to a reasonable range to prevent over/
  // underflow.
  static double ClippedExp(double x) {
    if (x < -kMaxExpArg_) return exp(-kMaxExpArg_);
    if (x > kMaxExpArg_) return exp(kMaxExpArg_);
    return exp(x);
  }
    
    #endif  // TESSERACT_TRAINING_DEGRADEIMAGE_H_

    
     protected:
  // Consumes the next Grapheme in codes_[codes_used_++...] and copies it to
  // parts_ and output_. Returns true if a valid Grapheme was consumed,
  // otherwise does not increment codes_used_.
  bool ConsumeGraphemeIfValid() override;
  // Returns the CharClass corresponding to the given Unicode ch.
  CharClass UnicodeToCharClass(char32 ch) const override;
    
        for (auto &pfd: pollfds) {
      if (pfd.revents & (POLLERR | POLLHUP)) {
        // some process died
        DEBUG('detaching process');
        auto &session = client_sessions.at(pfd.fd);
        DEBUG('%d has died', session.pid);
        to_remove.push_back(pfd.fd);
      } else if (pfd.revents & POLLIN) {
        if (pfd.fd == srv_socket->socket_fd) {
          // someone is joining
          DEBUG('registered new client');
          auto client = srv_socket->accept();
          int fd = client.socket_fd;
          to_add.push_back(fd);
          client_sessions.emplace(fd, std::move(client));
        } else {
          // someone wants to register a segment
          DEBUG('got alloc info');
          auto &session = client_sessions.at(pfd.fd);
          AllocInfo info = session.socket.receive();
          session.pid = info.pid;
          DEBUG('got alloc info: %d %d %s', (int)info.free, info.pid, info.filename);
          if (info.free) {
            free_used_object(info.filename);
          } else {
            used_objects.insert(info.filename);
            DEBUG('registered object %s', info.filename);
            session.socket.confirm();
          }
        }
      }
    }
    
    #include 'master_worker/master/THDTensor.h'
#include 'master_worker/master/THDStorage.h'
    
          struct pollfd pfd;
      pfd.fd = socket;
      pfd.events = POLLOUT;
    
    int gettime(clockid_t clock, timespec* ts) {
  if (clock != CLOCK_THREAD_CPUTIME_ID) {
    return folly::chrono::clock_gettime(clock, ts);
  }
    }
    
    struct PageletTransport final : Transport, Synchronizable {
  PageletTransport(
    const String& url, const Array& headers, const String& postData,
    const String& remoteHost,
    const std::set<std::string> &rfc1867UploadedFiles,
    const Array& files, int timeoutSeconds);
    }
    
    //////////////////////////////////////////////////////////////////////
    
      // Non-simple types (ones that are represented by pointers) can always
  // possibly be null.
  if (t.subtypeOfAny(TStr, TArr, TVec, TDict,
                     TKeyset, TObj, TRes)) {
    t |= TInitNull;
  } else {
    // Otherwise it should be a simple type or possibly everything.
    assert(t == TInitCell || t.subtypeOfAny(TBool, TInt, TDbl, TNull));
  }
    
    template <class CellOp>
Type typeSubMulImplO(Type t1, Type t2, CellOp op) {
  if (auto t = eval_const(t1, t2, op))          return *t;
  if (t1.subtypeOf(BInt) && t2.subtypeOf(BInt)) return TNum;
  if (auto t = usual_arith_conversions(t1, t2)) return *t;
  return TInitPrim;
}
    
      /**
   * This method may return ContinueAutoloading, StopAutoloading, or
   * RetryAutoloading.
   */
  Result invokeFailureCallback(const_variant_ref func, const String& kind,
                               const String& name, const Variant& err);
    
    namespace HPHP {
    }
    
      /**
   * Read one record a time. Returns a false on failure or eof.
   */
  Variant readRecord(const String& delimiter, int64_t maxlen = 0);
    
    #endif // incl_HPHP_HTTP_CLIENT_H_

    
      /// Start an asynchronous accept.
  /**
   * This function is used to asynchronously accept a new connection into a
   * socket, and additionally obtain the endpoint of the remote peer. The
   * function call always returns immediately.
   *
   * @param peer The socket into which the new connection will be accepted.
   * Ownership of the peer object is retained by the caller, which must
   * guarantee that it is valid until the handler is called.
   *
   * @param peer_endpoint An endpoint object into which the endpoint of the
   * remote peer will be written. Ownership of the peer_endpoint object is
   * retained by the caller, which must guarantee that it is valid until the
   * handler is called.
   *
   * @param handler The handler to be called when the accept operation
   * completes. Copies will be made of the handler as required. The function
   * signature of the handler must be:
   * @code void handler(
   *   const boost::system::error_code& error // Result of operation.
   * ); @endcode
   * Regardless of whether the asynchronous operation completes immediately or
   * not, the handler will not be invoked from within this function. Invocation
   * of the handler will be performed in a manner equivalent to using
   * boost::asio::io_service::post().
   */
  template <typename SocketService, typename AcceptHandler>
  BOOST_ASIO_INITFN_RESULT_TYPE(AcceptHandler,
      void (boost::system::error_code))
  async_accept(basic_socket<protocol_type, SocketService>& peer,
      endpoint_type& peer_endpoint, BOOST_ASIO_MOVE_ARG(AcceptHandler) handler)
  {
    // If you get an error on the following line it means that your handler does
    // not meet the documented type requirements for a AcceptHandler.
    BOOST_ASIO_ACCEPT_HANDLER_CHECK(AcceptHandler, handler) type_check;
    }
    
      /// Start an asynchronous wait on the timer.
  /**
   * This function may be used to initiate an asynchronous wait against the
   * timer. It always returns immediately.
   *
   * For each call to async_wait(), the supplied handler will be called exactly
   * once. The handler will be called when:
   *
   * @li The timer has expired.
   *
   * @li The timer was cancelled, in which case the handler is passed the error
   * code boost::asio::error::operation_aborted.
   *
   * @param handler The handler to be called when the timer expires. Copies
   * will be made of the handler as required. The function signature of the
   * handler must be:
   * @code void handler(
   *   const boost::system::error_code& error // Result of operation.
   * ); @endcode
   * Regardless of whether the asynchronous operation completes immediately or
   * not, the handler will not be invoked from within this function. Invocation
   * of the handler will be performed in a manner equivalent to using
   * boost::asio::io_service::post().
   */
  template <typename WaitHandler>
  BOOST_ASIO_INITFN_RESULT_TYPE(WaitHandler,
      void (boost::system::error_code))
  async_wait(BOOST_ASIO_MOVE_ARG(WaitHandler) handler)
  {
    // If you get an error on the following line it means that your handler does
    // not meet the documented type requirements for a WaitHandler.
    BOOST_ASIO_WAIT_HANDLER_CHECK(WaitHandler, handler) type_check;
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    // Standard library components can't be forward declared, so we'll have to
// include the array header. Fortunately, it's fairly lightweight and doesn't
// add significantly to the compile time.
#if defined(BOOST_ASIO_HAS_STD_ARRAY)
# include <array>
#endif // defined(BOOST_ASIO_HAS_STD_ARRAY)
    
    #include <boost/asio/detail/push_options.hpp>
    
    #if !defined(BOOST_ASIO_WINDOWS) && !defined(__CYGWIN__)
    
        if (result != 0
        && (ec == boost::asio::error::would_block
          || ec == boost::asio::error::try_again))
    {
      // According to UNIX Network Programming Vol. 1, it is possible for
      // close() to fail with EWOULDBLOCK under certain circumstances. What
      // isn't clear is the state of the descriptor after this error. The one
      // current OS where this behaviour is seen, Windows, says that the socket
      // remains open. Therefore we'll put the descriptor back into blocking
      // mode and have another attempt at closing it.
#if defined(__SYMBIAN32__)
      int flags = ::fcntl(d, F_GETFL, 0);
      if (flags >= 0)
        ::fcntl(d, F_SETFL, flags & ~O_NONBLOCK);
#else // defined(__SYMBIAN32__)
      ioctl_arg_type arg = 0;
      ::ioctl(d, FIONBIO, &arg);
#endif // defined(__SYMBIAN32__)
      state &= ~non_blocking;
    }
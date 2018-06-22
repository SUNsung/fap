
        
        #include 'atom/browser/net/asar/url_request_asar_job.h'
#include 'atom/browser/net/js_asker.h'
    
    #endif  // ATOM_BROWSER_WINDOW_LIST_OBSERVER_H_

    
    
    {  DISALLOW_COPY_AND_ASSIGN(RemoteCallbackFreer);
};
    
    #ifndef ATOM_COMMON_DRAGGABLE_REGION_H_
#define ATOM_COMMON_DRAGGABLE_REGION_H_
    
    namespace base {
class FilePath;
}
    
    class DesktopMediaListObserver;
    
     private:
  // Non-owning pointer.
  content::BrowserPpapiHost* host_;
    
      // ResourceHost override.
  int32_t OnResourceMessageReceived(
      const IPC::Message& msg,
      ppapi::host::HostMessageContext* context) override;
    
    
    {  DISALLOW_COPY_AND_ASSIGN(PepperIsolatedFileSystemMessageFilter);
};
    
    #include 'chrome/browser/speech/tts_platform.h'
    
    template<> inline
dnnError_t dnnConvolutionCreateForwardBias<double>(
    dnnPrimitive_t* pConvolution,
    dnnPrimitiveAttributes_t attributes,
    dnnAlgorithm_t algorithm,
    size_t dimension,
    const size_t srcSize[],
    const size_t dstSize[],
    const size_t filterSize[],
    const size_t convolutionStrides[],
    const int inputOffset[],
    const dnnBorder_t border_type)
{
    return dnnConvolutionCreateForwardBias_F64(
        pConvolution,
        attributes,
        algorithm,
        dimension,
        srcSize,
        dstSize,
        filterSize,
        convolutionStrides,
        inputOffset,
        border_type);
}
    
        void PackedValue::Unpack() const
    {
        if (m_packedDataLayout && (m_packedDataLayout->GetNumTimeSteps() != 1) && (m_packedDataLayout->GetNumSequences() != 1) && Internal::IsAutomaticUnpackingOfPackedValuesDisabled())
            LogicError('PackedValue::Unpack: Automatic unpacking of PackedValue objects is disabled');
    }
    
    void GPUDataTransferer::CopyGPUToCPUAsync(void* gpuBuffer, size_t totalSize, void* cpuBuffer)
{
    m_inner->CopyGPUToCPUAsync(gpuBuffer, 1, totalSize, cpuBuffer);
    m_inner->RecordGPUToCPUCopy();
}
    
    // ---------------------------------------------------------------------------
// TextLocation -- holds a pointer into a source file
// ---------------------------------------------------------------------------
    
      /// Gets the non-blocking mode of the native acceptor implementation.
  /**
   * This function is used to retrieve the non-blocking mode of the underlying
   * native acceptor. This mode has no effect on the behaviour of the acceptor
   * object's synchronous operations.
   *
   * @returns @c true if the underlying acceptor is in non-blocking mode and
   * direct system calls may fail with boost::asio::error::would_block (or the
   * equivalent system error).
   *
   * @note The current non-blocking mode is cached by the acceptor object.
   * Consequently, the return value may be incorrect if the non-blocking mode
   * was set directly on the native acceptor.
   */
  bool native_non_blocking() const
  {
    return this->get_service().native_non_blocking(this->get_implementation());
  }
    
    #include <boost/asio/detail/push_options.hpp>
    
    #define BOOST_ASIO_RESOLVE_HANDLER_CHECK( \
    handler_type, handler, iter_type) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code, iter_type)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::two_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0), \
          static_cast<const iter_type*>(0))) == 1, \
      'ResolveHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>(), \
            boost::asio::detail::lvref<const iter_type>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
      // Dispatch the waiting events.
  for (int i = 0; i < num_events; ++i)
  {
    int descriptor = events[i].fd;
    if (descriptor == interrupter_.read_descriptor())
    {
      interrupter_.reset();
    }
    else
    {
      bool more_reads = false;
      bool more_writes = false;
      bool more_except = false;
    }
    }
    
    
    {  if (handle) {
    ::CloseHandle(handle);
  }
}
#else
TEST_F(ProcessTests, test_constructorPosix) {
  auto p = PlatformProcess(getpid());
  EXPECT_TRUE(p.isValid());
  EXPECT_EQ(p.nativeHandle(), getpid());
}
#endif
    
    
    {
    {  return Status(0, 'OK');
}
}

    
    struct OpenBSMEventContext : public EventContext {
  // The event_id of the OpenBSM log
  int event_id;
  // The tokens for the event to pass to the subscriber
  std::vector<tokenstr_t> tokens;
  // A smart pointer to the memory returned by OpenBSM
  std::shared_ptr<unsigned char> buffer;
};
    
     public:
  void configure() override;
    
    namespace detail {
    }
    
    // Some queue implementations (for example, LifoSemMPMCQueue or
// PriorityLifoSemMPMCQueue) support both blocking (BLOCK) and
// non-blocking (THROW) behaviors.
enum class QueueBehaviorIfFull { THROW, BLOCK };
    
      // Free the control block if we're the last reader at max value.
  prev = block->valueAndReaderCount.fetch_sub(kReader,
                                              std::memory_order_acq_rel);
  if (prev == (kReader | uint64_t(size_))) {
    freeControlBlock(block);
  }
    
    int main(int argc, char* argv[]) {
  // Using log macros before calling folly::initLogging() will use the default
  // log settings defined by folly::initializeLoggerDB().  The default behavior
  // is to log WARNING+ messages to stderr.
  XLOG(INFO) << 'log messages less than WARNING will be ignored';
  XLOG(ERR) << 'error messages before initLogging() will be logged to stderr';
    }
    
    
    {  return res;
}
    
    
    {  // Errors attempting to format the message should not throw
  FB_LOGC(footest1234, ERR, 'width overflow: %999999999999999999999d', 5);
  ASSERT_EQ(1, messages.size());
  EXPECT_EQ(
      'error formatting printf-style log message: '
      'width overflow: %999999999999999999999d',
      messages[0].first.getMessage());
  messages.clear();
}

    
    void YGNode::setDirty(bool isDirty) {
  if (isDirty == isDirty_) {
    return;
  }
  isDirty_ = isDirty;
  if (isDirty && dirtied_) {
    dirtied_(this);
  }
}
    
     public:
  YGNode();
  ~YGNode();
  explicit YGNode(const YGConfigRef newConfig);
  YGNode(const YGNode& node);
  YGNode& operator=(const YGNode& node);
  YGNode(
      void* context,
      YGPrintFunc print,
      bool hasNewLayout,
      YGNodeType nodeType,
      YGMeasureFunc measure,
      YGBaselineFunc baseline,
      YGDirtiedFunc dirtied,
      YGStyle style,
      const YGLayout& layout,
      uint32_t lineIndex,
      YGNodeRef owner,
      const YGVector& children,
      YGNodeRef nextChild,
      YGConfigRef config,
      bool isDirty,
      std::array<YGValue, 2> resolvedDimensions);
    
        Value(int unit, double value)
    : unit(unit)
    , value(value)
    {
    }
    
    class Config {
    }
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(left, right, top, bottom, width, height);
    }
};

    
    #include './Layout.hh'
#include './Size.hh'
#include './Value.hh'
#include './Config.hh'
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
      ProgramLocation(const char* functionName, const char* fileName, int line) :
      m_functionName(functionName),
      m_fileName(fileName),
      m_lineNumber(line)
    {}
    
    
    {}

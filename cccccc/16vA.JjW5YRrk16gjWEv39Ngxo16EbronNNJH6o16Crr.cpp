
        
        // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    // Request Shell's id for current render_view_host.
IPC_SYNC_MESSAGE_ROUTED0_1(ShellViewHostMsg_GetShellId,
                           int /* result */)
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/api_messages.h'
#include 'content/public/renderer/render_view.h'
#include 'content/public/renderer/render_thread.h'
#include 'content/public/renderer/v8_value_converter.h'
#include 'third_party/WebKit/public/web/WebView.h'
#include 'third_party/WebKit/public/web/WebLocalFrame.h'
#include 'ui/base/resource/resource_bundle.h'
    
    namespace remote {
    }
    
    // static
void DispatcherBindings::CrashRenderer(
    const v8::FunctionCallbackInfo<v8::Value>& args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  RenderView* render_view = GetCurrentRenderView();
  if (!render_view) {
    args.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
                                     'Unable to get render view in CallObjectMethod'))));
    return;
  }
  int* ptr = NULL;
  *ptr = 1;
}
    
    void DispatcherHost::OnUncaughtException(const std::string& err) {
  content::Shell* shell =
      content::Shell::FromRenderViewHost(render_view_host());
  shell->PrintCriticalError('Uncaught node.js Error', err);
}
    
    Menu::~Menu() {
  Destroy();
}
    
    #include 'base/logging.h'
#include 'base/strings/string16.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
    
                // subminibatches are cutted at the parallel sequence level;
            // if #requested subminibatch is larger than #parallel sequence,
            // we cannot split further; instead, each subsequence become a subminibatch
            size_t actualnumSubminibatches = requestedSubminibatches > nParallelSequences ? nParallelSequences : requestedSubminibatches;
    
            if (0 == m_modelProto->opset_import_size())
        {
            // Operator sets are not specified in this model.
            // Will use global operator store instead.
            AddImportOpSets(false);
        }
        else
        {
            for (auto& opSet : m_modelProto->opset_import())
            {
                m_domainToVersion[opSet.domain()] = static_cast<int>(opSet.version());
            }
        }
    
    #include 'constants.h'
#include 'op.h'
#include 'opsignature.h'
#include 'utils.h'
#include <cstring>
    
            // Get operator description.
        const std::string& GetDescription() const;
    
        virtual void ForwardPropNonLooping() override
    {
        // TODO: We should avoid this copy but that requires carefully managing the 
        // lifetimes of the Value objects since to be able to directly use the 
        // input Value as its output, we have to make sure that the input's Value
        // is not reused until all dependents of this node are finished.
        auto inputNode = Input(0)->template As<MultiOutputNode<ElemType>>();
        Value().AssignValuesOf(*inputNode->m_outputsValue[m_outputIndex]);
    }
    
        m_endOfEpoch = result.m_isEndOfEpoch;
    m_endOfSweep = result.m_isEndOfSweep;
    if (m_endOfEpoch && !result.m_isDataAvailable)
    {
        // No data and end of epoch, simply return.
        return false;
    }
    
    #include 'proto/onnx/core/model.h'
    
    #include 'Basics.h'
#include 'ComputationNode.h'
#include 'ComputationNetwork.h'
#include 'InputAndParamNodes.h'
#include 'TrainingNodes.h'
#include <string>
#include <vector>
#include <list>
    
      /// Close the acceptor.
  /**
   * This function is used to close the acceptor. Any asynchronous accept
   * operations will be cancelled immediately.
   *
   * A subsequent call to open() is required before the acceptor can again be
   * used to again perform socket accept operations.
   *
   * @throws boost::system::system_error Thrown on failure.
   */
  void close()
  {
    boost::system::error_code ec;
    this->get_service().close(this->get_implementation(), ec);
    boost::asio::detail::throw_error(ec, 'close');
  }
    
      /// Start an asynchronous read. The buffer into which the data will be read
  /// must be valid for the lifetime of the asynchronous operation.
  template <typename MutableBufferSequence, typename ReadHandler>
  BOOST_ASIO_INITFN_RESULT_TYPE(ReadHandler,
      void (boost::system::error_code, std::size_t))
  async_read_some(const MutableBufferSequence& buffers,
      BOOST_ASIO_MOVE_ARG(ReadHandler) handler);
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
      // Consume multiple bytes from the beginning of the buffer.
  void consume(size_type count)
  {
    BOOST_ASIO_ASSERT(begin_offset_ + count <= end_offset_);
    begin_offset_ += count;
    if (empty())
      clear();
  }
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
# include <boost/asio/detail/null_fenced_block.hpp>
#elif defined(__MACH__) && defined(__APPLE__)
# include <boost/asio/detail/macos_fenced_block.hpp>
#elif defined(__sun)
# include <boost/asio/detail/solaris_fenced_block.hpp>
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
# include <boost/asio/detail/gcc_arm_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
# include <boost/asio/detail/gcc_hppa_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
# include <boost/asio/detail/gcc_x86_fenced_block.hpp>
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
# include <boost/asio/detail/gcc_sync_fenced_block.hpp>
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
# include <boost/asio/detail/win_fenced_block.hpp>
#else
# include <boost/asio/detail/null_fenced_block.hpp>
#endif
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    #include <vector>
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #endif

    
    class ScopeJEnv {
  public:
    ScopeJEnv(JavaVM* jvm, jint _capacity = 16);
    ~ScopeJEnv();
    }
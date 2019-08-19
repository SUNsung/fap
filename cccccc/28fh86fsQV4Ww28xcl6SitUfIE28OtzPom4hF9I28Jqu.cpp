
        
        namespace nwapi {
    }
    
    #include 'base/basictypes.h'
#include '../dispatcher_host.h'
    
    namespace content {
class RenderView;
}
    
    
    {  // Convert from content coordinates to window coordinates.
  // This code copied from chrome_web_contents_view_delegate_views.cc
  aura::Window* target_window = GetActiveNativeView(rfh);
  aura::Window* root_window = target_window->GetRootWindow();
  views::Widget* top_level_widget =
    views::Widget::GetTopLevelWidgetForNativeView(target_window);
  aura::client::ScreenPositionClient* screen_position_client =
        aura::client::GetScreenPositionClient(root_window);
  if (screen_position_client) {
    screen_position_client->ConvertPointToScreen(target_window,
             &screen_point);
  }
  set_delay_destruction(true);
  menu_runner_.reset(new views::MenuRunner(menu_model_.get(), views::MenuRunner::CONTEXT_MENU,
                                           base::Bind(&Menu::OnMenuClosed, base::Unretained(this))));
  menu_runner_->RunMenuAt(top_level_widget,
                       nullptr,
                       gfx::Rect(screen_point, gfx::Size()),
                          views::MenuAnchorPosition::kTopRight,
                       ui::MENU_SOURCE_NONE);
  // It is possible for the same MenuMessageLoopAura to start a nested
  // message-loop while it is already running a nested loop. So make
  // sure the quit-closure gets reset to the outer loop's quit-closure
  // once the innermost loop terminates.
  {
    base::AutoReset<base::Closure> reset_quit_closure(&message_loop_quit_,
                                                      base::Closure());
  
    //base::MessageLoop* loop = base::MessageLoop::current();
    base::MessageLoopCurrent::ScopedNestableTaskAllower allow;
    base::RunLoop run_loop;
    message_loop_quit_ = run_loop.QuitClosure();
  
    run_loop.Run();
  }
  set_delay_destruction(false);
  if (pending_destruction())
    object_manager_->OnDeallocateObject(id_);
}
    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
    ExtensionFunction::ResponseAction
NwAppCloseAllWindowsFunction::Run() {
  AppWindowRegistry* registry = AppWindowRegistry::Get(browser_context());
  if (!registry)
    return RespondNow(Error(''));
  base::MessageLoopCurrent::Get()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&NwAppCloseAllWindowsFunction::DoJob, registry, extension()->id()));
    }
    
    
    {  // ExtensionFunction:
  ResponseAction Run() override;
  DECLARE_EXTENSION_FUNCTION('nw.App.closeAllWindows', UNKNOWN)
};
    
      void Shutdown() { shutdown_ = true; }
    
      // shutdown should trigger cancellation causing everything to shutdown
  auto deadline =
      std::chrono::system_clock::now() + std::chrono::microseconds(100);
  server_->Shutdown(deadline);
  EXPECT_GE(std::chrono::system_clock::now(), deadline);
    
      ac = (async_connect*)gpr_malloc(sizeof(async_connect));
  ac->on_done = on_done;
  ac->socket = socket;
  gpr_mu_init(&ac->mu);
  ac->refs = 2;
  ac->addr_name = grpc_sockaddr_to_uri(addr);
  ac->endpoint = endpoint;
  ac->channel_args = grpc_channel_args_copy(channel_args);
  GRPC_CLOSURE_INIT(&ac->on_connect, on_connect, ac, grpc_schedule_on_exec_ctx);
    
      LOG_TEST_NAME('test_unsetenv');
    
    
    {
    {    /* The buffer should resemble '000001\0'. */
    for (j = 0; j < i - 2; j++) {
      GPR_ASSERT(buf[j] == '0');
    }
    GPR_ASSERT(buf[i - 1] == '1');
    GPR_ASSERT(buf[i] == '\0');
    gpr_free(buf);
  }
}
    
    #include <grpc/support/port_platform.h>
    
    namespace experimental {
    }
    
    static grpc::internal::GrpcLibraryInitializer g_gli_initializer;
ChannelCredentials::ChannelCredentials() { g_gli_initializer.summon(); }
    
    namespace grpc {
    }
    
        for (auto n : input) {
      if (n != ' ') {
        buff += n;
        continue;
      }
      if (buff == '') continue;
      result.push_back(buff);
      buff = '';
    }
    if (buff != '') result.push_back(buff);
    
    void NcclComm::AllReduceImpl(void* inputbuffer, void *outputbuffer, size_t count, DataType dtype, MPI_Op op)
{
    ncclResult_t res;
    class NcclTypeLookup
    {
        ncclDataType_t ncclTypes[(int)DataType::COUNT];
    public:
        NcclTypeLookup()
        {
            ncclTypes[(int)DataType::FLOAT]  = ncclFloat;
            ncclTypes[(int)DataType::DOUBLE] = ncclDouble;
            ncclTypes[(int)DataType::HALF] = ncclHalf;
            ncclTypes[(int)DataType::INT]    = ncclInt;
        }
        ncclDataType_t Lookup(DataType dtype)
        {
            return ncclTypes[(int)dtype];
        }
    };
    }
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::TransposeTimes(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<TransposeTimesNode<ElemType>>(net.GetDeviceId(), nodeName), { a, b });
}
    
    // -----------------------------------------------------------------------
// ConfigurableRuntimeTypeRegister -- static table of all configurable runtime types
// -----------------------------------------------------------------------
    
            // look for default macros and load them (they load into a global area)
        if (config.Exists('ndlMacros'))
        {
            ConfigValue ndlMacrosPaths = config('ndlMacros');
            NDLScript<ElemType> ndlScript;
            if (!ndlMacrosPaths.empty())
            {
                // load the macro files 1 at a time, so that the sections specified by each file's
                // 'load' parameter are in fact loaded (if they were all processed at once, the last file's 'load'
                // parameter would override all the earlier ones, and those sections wouldn't get loaded).
                std::vector<std::string> filePathVec = msra::strfun::split(ndlMacrosPaths, '+');
                for (const auto& filePath : filePathVec)
                {
                    ndlScript.LoadConfigFileAndResolveVariables(Microsoft::MSR::CNTK::ToFixedWStringFromMultiByte(filePath), config);
                }
            }
        }
    
    static void PrintBanner(int argc, wchar_t* argv[], const string& timestamp)
{
#ifndef CNTK_VERSION_BANNER
#error CNTK_VERSION_BANNER must be set
#endif
#define MACRO_TO_STRING(s) #s
    fprintf(stderr, 'CNTK %s (', MACRO_TO_STRING(CNTK_VERSION_BANNER));
#ifdef _GIT_EXIST
    fprintf(stderr, '%s %.6s, ', _BUILDBRANCH_, _BUILDSHA1_);
#endif
    fprintf(stderr, '%s %s', __DATE__, __TIME__); // build time
    fprintf(stderr, ') at %s\n\n', timestamp.c_str());
    for (int i = 0; i < argc; i++)
        fprintf(stderr, '%*s%ls', i > 0 ? 2 : 0, '', argv[i]); // use 2 spaces for better visual separability
    fprintf(stderr, '\n');
}
    
                    threadTimer.Restart();
                // copy parameters from CPU buffer to GPU buffer
                for (int widx = 0; widx < m_tableCount; widx++)
                {
                    ElemType * py2 = m_cpuAsyncBuffer[m_bufferIndexInUse] + m_tableOffsets[widx];
    }
    
                if (rv == 0)
                rv = numCols;
            else if (rv != numCols)
                LogicError('DecimateMinibatch: Inconsistent number of columns among inputs (found %d and %d).', (int) rv, (int) numCols);
    
        // Attempts to compute the error signal for the whole utterance, which will
    // be fed to the neural network as features. Currently it is a workaround
    // for the two-forward-pass sequence and ctc training, which allows
    // processing more utterances at the same time. Only used in Kaldi2Reader.
    // TODO: move the two-forward-pass support out of the reader.
    void AttemptUtteranceDerivativeFeatures(ComputationNetworkPtr net,
                                            IDataReader* trainSetDataReader,
                                            const std::vector<ComputationNodeBasePtr>& featureNodes,
                                            StreamMinibatchInputs* inputMatrices);
    
    #if __linux__
#include <sys/mman.h>
#endif
    
    #include 'coroutine_system.h'
    
    enum
{
    EVENT_onStart = 1u << 1,
    EVENT_onShutdown = 1u << 2,
    EVENT_onWorkerStart = 1u << 3,
    EVENT_onWorkerStop = 1u << 4,
    EVENT_onConnect = 1u << 5,
    EVENT_onReceive = 1u << 6,
    EVENT_onPacket = 1u << 7,
    EVENT_onClose = 1u << 8,
    EVENT_onTask = 1u << 9,
    EVENT_onFinish = 1u << 10,
    EVENT_onPipeMessage = 1u << 11,
};
    
        fd2 = socket(AF_UNIX,SOCK_DGRAM,0);
    strncpy(un2.sun_path, sock2_path, sizeof(un2.sun_path) - 1); 
    bind(fd2,(struct sockaddr *)&un2,sizeof(un2));
    
    
    {
    {        int status = -1;
        pid_t pid2 = swoole_coroutine_waitpid(pid, &status, 0);
        ASSERT_EQ(status, 0);
        ASSERT_EQ(pid, pid2);
    });
}
    
            ~RedisQtAdapter() {
            if (m_ctx != 0) {
                m_ctx->ev.data = NULL;
            }
        }
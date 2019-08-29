
        
        void MyComputedHashes::ComputeHashesForContent(const std::string& contents,
                                             size_t block_size,
                                             std::vector<std::string>* hashes) {
  size_t offset = 0;
  // Even when the contents is empty, we want to output at least one hash
  // block (the hash of the empty string).
  do {
    const char* block_start = contents.data() + offset;
    DCHECK(offset <= contents.size());
    size_t bytes_to_read = std::min(contents.size() - offset, block_size);
    std::unique_ptr<crypto::SecureHash> hash(
        crypto::SecureHash::Create(crypto::SecureHash::SHA256));
    hash->Update(block_start, bytes_to_read);
    }
    }
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Allocate_Object(
      routing_id,
      object_id,
      type,
      *static_cast<base::DictionaryValue*>(value_option.get())));
  return v8::Undefined(isolate);
}
    
    #include 'base/compiler_specific.h'
#include 'content/nw/src/api/base/base.h'
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return;
  item->OnClick();
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
    
    namespace nw {
    }
    
    void MenuItem::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    if (enable_shortcut_){
      focus_manager->RegisterAccelerator(
        accelerator_,
        ui::AcceleratorManager::kHighPriority,
        this);
    }
    if (submenu_ != NULL){
      submenu_->UpdateKeys(focus_manager);
    }
  }
}
    
    #include <vector>
    
        bool ReadRTF(ClipboardData& data) {
      DCHECK(data.type == TYPE_RTF);
      std::string text;
      clipboard_->ReadRTF(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
      data.data.reset(new std::string(text));
      return true;
    }
    
    #include 'extensions/browser/extension_function.h'
    
      void ModifySendMessage(const void* message) override {
    GPR_CODEGEN_ASSERT(
        false &&
        'It is illegal to call ModifySendMessage on a method which '
        'has a Cancel notification');
  }
    
    static bool iomgr_platform_add_closure_to_background_poller(
    grpc_closure* closure, grpc_error* error) {
  return false;
}
    
    #include 'src/core/lib/iomgr/sockaddr_windows.h'
    
    static inline std::shared_ptr<::grpc::Channel> CreateCustomChannel(
    const grpc::string& target,
    const std::shared_ptr<ChannelCredentials>& creds,
    const ChannelArguments& args) {
  return ::grpc_impl::CreateCustomChannelImpl(target, creds, args);
}
    
    static grpc::internal::GrpcLibraryInitializer g_gli_initializer;
ChannelCredentials::ChannelCredentials() { g_gli_initializer.summon(); }
    
      KillServer();
    
    // Add a second service with one async method.
TEST_F(HybridEnd2endTest, AsyncRequestStreamResponseStream_AsyncDupService) {
  typedef EchoTestService::WithAsyncMethod_RequestStream<
      EchoTestService::WithAsyncMethod_ResponseStream<TestServiceImpl>>
      SType;
  SType service;
  duplicate::EchoTestService::AsyncService dup_service;
  SetUpServer(&service, &dup_service, nullptr, nullptr);
  ResetStub();
  std::thread response_stream_handler_thread(HandleServerStreaming<SType>,
                                             &service, cqs_[0].get());
  std::thread request_stream_handler_thread(HandleClientStreaming<SType>,
                                            &service, cqs_[1].get());
  std::thread echo_handler_thread(
      HandleEcho<duplicate::EchoTestService::AsyncService>, &dup_service,
      cqs_[2].get(), true);
  TestAllMethods();
  SendEchoToDupService();
  response_stream_handler_thread.join();
  request_stream_handler_thread.join();
  echo_handler_thread.join();
}
    
      send_response_.set_message(recv_request_.message());
  SerializeToByteBufferInPlace(&send_response_, &send_response_buffer_);
  srv_stream.Write(send_response_buffer_, tag(3));
  cli_stream->Read(&recv_response_, tag(4));
  Verifier().Expect(3, true).Expect(4, true).Verify(cq_.get());
  EXPECT_EQ(send_response_.message(), recv_response_.message());
    
    #define DEFINE_JSON_OUTPUT_TYPE(type) \
  struct type { \
    typedef _OutputStream<type>  OutputStream; \
    typedef _MapStream<type>     MapStream; \
    typedef _ListStream<type>    ListStream; \
    typedef _ISerializable<type> ISerializable; \
  }
    
    #endif

    
    /**
 * API methods to call at property resolution (from `object-data`).
 * Example: Native::getProp(this, propName);
 */
Variant getProp(const Object& obj, const String& name);
Variant setProp(const Object& obj, const String& name, const Variant& value);
Variant issetProp(const Object& obj, const String& name);
Variant unsetProp(const Object& obj, const String& name);
    
      RangeState& getRangeState() {
    return m_state;
  }
    
    // Try to create a temporary directory and mount a hugetlbfs with 1G page size
// there.  Return whether the operation succeeded.
bool auto_mount_hugetlbfs();
    
      Type getType() const { return m_type; }
  const Class::Prop* getProp() const {
    assertx(m_type == Instance);
    return m_prop;
  }
  const Class::SProp* getSProp() const {
    assertx(m_type == Static);
    return m_sprop;
  }
    
    
    {  auto const data = packedData(ad);
  auto const stop = data + ad->m_size;
  for (auto ptr = data; ptr != stop; ++ptr) {
    RegisterUncountedTvAllocations(*ptr, rootAPCHandle);
  }
  assertx(RuntimeOption::EvalGCForAPC);
  APCGCManager::getInstance().registerAllocation(ad,
                                        (char*)ad + PackedArray::heapSize(ad),
                                        rootAPCHandle);
}
    
      static ArrayData* ToShape(ArrayData*, bool);
    
    /**
 * @brief Docker UNIX domain socket path.
 *
 * By default docker creates UNIX domain socket at /var/run/docker.sock. If
 * docker domain is configured to use a different path specify that path.
 */
FLAG(string,
     docker_socket,
     '/var/run/docker.sock',
     'Docker UNIX domain socket path');
    
    bool validate_value_using_flags(const std::string& value,
                                                      int flags) {
  if ((flags & NonEmpty) > 0) {
    if (value.length() == 0) {
      return false;
    }
  }
    }
    
      auto formatMemPerms = [](unsigned long perm) {
    std::vector<std::string> perms;
    for (const auto& kv : kMemoryConstants) {
      if (kv.first & perm) {
        perms.push_back(kv.second);
      }
    }
    return osquery::join(perms, ' | ');
  };
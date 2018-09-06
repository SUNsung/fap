
    { private:
  DISALLOW_COPY_AND_ASSIGN(AtomContentClient);
};
    
    namespace {
    }
    
    
    {  std::move(self->tasks_[timer]).Run();
  self->tasks_.erase(timer);
  uv_timer_stop(timer);
  uv_close(reinterpret_cast<uv_handle_t*>(timer), UvTaskRunner::OnClose);
}
    
      uv_loop_t* loop_;
    
    #include <memory>
#include <string>
    
    
    {}  // namespace
    
    #include 'atom/common/node_includes.h'
    
    
    {
    {    return dict.GetHandle();
  }
};
    
    #include 'atom/browser/api/event_emitter.h'
#include 'atom/browser/mac/in_app_purchase.h'
#include 'atom/browser/mac/in_app_purchase_observer.h'
#include 'atom/browser/mac/in_app_purchase_product.h'
#include 'native_mate/handle.h'
    
    namespace atom {
    }
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    
    {  DISALLOW_COPY_AND_ASSIGN(LayoutManager);
};
    
    StringRef swift::platformString(PlatformKind platform) {
  switch (platform) {
  case PlatformKind::none:
    return '*';
#define AVAILABILITY_PLATFORM(X, PrettyName)                                   \
  case PlatformKind::X:                                                        \
    return #X;
#include 'swift/AST/PlatformKinds.def'
  }
  llvm_unreachable('bad PlatformKind');
}
    
    
    {    return GenericTypeParamType::get(genericParam->getDepth(),
                                     genericParam->getIndex(), ctx);
  };
  auto conformanceToSyntheticConformanceFn =
      MakeAbstractConformanceForGenericType();
    
    TaskQueue::~TaskQueue() = default;
    
    
    {  bool isTypedef() const {
    assert(isValid());
    return !Decl.isNull() && Decl.is<const clang::TypedefNameDecl *>();
  }
  const clang::TypedefNameDecl *getTypedef() const {
    assert(isTypedef());
    return Decl.get<const clang::TypedefNameDecl *>();
  }
};
    
        // Main loop
    bool running = true;
    while (running)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        ALLEGRO_EVENT ev;
        while (al_get_next_event(queue, &ev))
        {
            ImGui_ImplAllegro5_ProcessEvent(&ev);
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) 
                running = false;
            if (ev.type == ALLEGRO_EVENT_DISPLAY_RESIZE)
            {
                ImGui_ImplAllegro5_InvalidateDeviceObjects();
                al_acknowledge_resize(display);
                ImGui_ImplAllegro5_CreateDeviceObjects();
            }
        }
    }
    
    void my_display_code()
{
    // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
    if (show_demo_window)
        ImGui::ShowDemoWindow(&show_demo_window);
    }
    
    
    {        // Rendering
        ImGui::Render();
        glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
    #define IM_VEC4_CLASS_EXTRA                                                 \
        ImVec4(const MyVec4& f) { x = f.x; y = f.y; z = f.z; w = f.w; }     \
        operator MyVec4() const { return MyVec4(x,y,z,w); }
*/
    
        // Setup viewport
    D3DVIEWPORT9 vp;
    vp.X = vp.Y = 0;
    vp.Width = (DWORD)draw_data->DisplaySize.x;
    vp.Height = (DWORD)draw_data->DisplaySize.y;
    vp.MinZ = 0.0f;
    vp.MaxZ = 1.0f;
    g_pd3dDevice->SetViewport(&vp);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
      // create names of the live files. The names are not absolute
  // paths, instead they are relative to dbname_;
  for (auto live_file : live) {
    ret.push_back(MakeTableFileName('', live_file.GetNumber()));
  }
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
      // Always pick a compaction which includes all files whenever possible.
  CompactionTask* PickCompaction(
      DB* db, const std::string& cf_name) override {
    ColumnFamilyMetaData cf_meta;
    db->GetColumnFamilyMetaData(&cf_meta);
    }
    
    class MyFilter : public rocksdb::CompactionFilter {
 public:
  bool Filter(int level, const rocksdb::Slice& key,
              const rocksdb::Slice& existing_value, std::string* new_value,
              bool* value_changed) const override {
    fprintf(stderr, 'Filter(%s)\n', key.ToString().c_str());
    ++count_;
    assert(*value_changed == false);
    return false;
  }
    }
    
      /**
   * @brief Destructor
   */
  virtual ~EsdCanClient();
    
    
    { private:
  bool _is_init;
  bcan_hdl_t _dev_handler;
  CANCardParameter::CANChannelId _card_port;
  bcan_msg_t _send_frames[MAX_CAN_SEND_FRAME_LEN];
  bcan_msg_t _recv_frames[MAX_CAN_RECV_FRAME_LEN];
};
    
    #include 'modules/drivers/canbus/can_client/hermes_can/hermes_can_client.h'
#include 'gtest/gtest.h'
    
      // init config and state
  // 1. set receive message_id filter, ie white list
  struct can_filter filter[2048];
  for (int i = 0; i < 2048; ++i) {
    filter[i].can_id = 0x000 + i;
    filter[i].can_mask = CAN_SFF_MASK;
  }
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                 int32_t *const frame_num) override;
    
    std::string Byte::byte_to_binary(const uint8_t value) {
  return std::bitset<8 * sizeof(uint8_t)>(value).to_string();
}
    
      /**
   * @brief Desctructor.
   */
  ~Byte() = default;
    
    const int32_t CANBUS_MESSAGE_LENGTH = 8;  // according to ISO-11891-1
const int32_t MAX_CAN_PORT = 3;
    
      // 3. set timer to trigger publish info periodically
  // if sensor_freq == 0, then it is event-triggered publishment.
  // no need for timer.
  if (FLAGS_sensor_freq > 0) {
    const double duration = 1.0 / FLAGS_sensor_freq;
    timer_ = AdapterManager::CreateTimer(
        ros::Duration(duration), &SensorCanbus<SensorType>::OnTimer, this);
  } else {
    data_trigger_running_ = true;
    thread_.reset(new std::thread([this] { DataTrigger(); }));
    if (thread_ == nullptr) {
      AERROR << 'Unable to create data trigger thread.';
      return OnError('Failed to start data trigger thread.');
    }
  }
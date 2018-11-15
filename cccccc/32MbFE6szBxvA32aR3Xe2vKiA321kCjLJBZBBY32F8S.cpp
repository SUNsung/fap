
        
        #ifndef ATOM_BROWSER_API_ATOM_API_AUTO_UPDATER_H_
#define ATOM_BROWSER_API_ATOM_API_AUTO_UPDATER_H_
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  auto controller = base::Unretained(TracingController::GetInstance());
  mate::Dictionary dict(context->GetIsolate(), exports);
  dict.SetMethod('getCategories',
                 base::Bind(&TracingController::GetCategories, controller));
  dict.SetMethod('startRecording',
                 base::Bind(&TracingController::StartTracing, controller));
  dict.SetMethod('stopRecording', &StopRecording);
  dict.SetMethod(
      'getTraceBufferUsage',
      base::Bind(&TracingController::GetTraceBufferUsage, controller));
}
    
    void InAppPurchase::PurchaseProduct(const std::string& product_id,
                                    mate::Arguments* args) {
  int quantity = 1;
  in_app_purchase::InAppPurchaseCallback callback;
  args->GetNext(&quantity);
  args->GetNext(&callback);
  in_app_purchase::PurchaseProduct(product_id, quantity, callback);
}
    
    using atom::api::Net;
using atom::api::URLRequest;
    
    namespace mate {
template <>
struct Converter<ui::IdleState> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const ui::IdleState& in) {
    switch (in) {
      case ui::IDLE_STATE_ACTIVE:
        return mate::StringToV8(isolate, 'active');
      case ui::IDLE_STATE_IDLE:
        return mate::StringToV8(isolate, 'idle');
      case ui::IDLE_STATE_LOCKED:
        return mate::StringToV8(isolate, 'locked');
      case ui::IDLE_STATE_UNKNOWN:
      default:
        return mate::StringToV8(isolate, 'unknown');
    }
  }
};
}  // namespace mate
    
    
    {}  // namespace atom
    
    #include 'atom/browser/api/trackable_object.h'
#include 'atom/browser/ui/tray_icon.h'
#include 'atom/browser/ui/tray_icon_observer.h'
#include 'native_mate/handle.h'
    
    class AtomBrowserContext;
    
    void Event::PreventDefault(v8::Isolate* isolate) {
  GetWrapper()->Set(StringToV8(isolate, 'defaultPrevented'), v8::True(isolate));
}
    
      // Pass the sender and message to be replied.
  void SetSenderAndMessage(content::RenderFrameHost* sender,
                           IPC::Message* message);
    
    // All instances of TrackableObject will be kept in a weak map and can be got
// from its ID.
template <typename T>
class TrackableObject : public TrackableObjectBase,
                        public mate::EventEmitter<T> {
 public:
  // Mark the JS object as destroyed.
  void MarkDestroyed() {
    v8::Local<v8::Object> wrapper = Wrappable<T>::GetWrapper();
    if (!wrapper.IsEmpty()) {
      wrapper->SetAlignedPointerInInternalField(0, nullptr);
    }
  }
    }
    
      // content::QuotaPermissionContext:
  void RequestQuotaPermission(const content::StorageQuotaParams& params,
                              int render_process_id,
                              const PermissionCallback& callback) override;
    
        free(chash);
    
    void ImGui_Marmalade_NewFrame()
{
    if (!g_FontTexture)
        ImGui_Marmalade_CreateDeviceObjects();
    }
    
        void FreeTypeFont::SetPixelHeight(int pixel_height) 
    {
        // I'm not sure how to deal with font sizes properly.
        // As far as I understand, currently ImGui assumes that the 'pixel_height' is a maximum height of an any given glyph,
        // i.e. it's the sum of font's ascender and descender. Seems strange to me.
        FT_Size_RequestRec req;
        req.type = FT_SIZE_REQUEST_TYPE_REAL_DIM;
        req.width = 0;
        req.height = (uint32_t)pixel_height * 64;
        req.horiResolution = 0;
        req.vertResolution = 0;
        FT_Request_Size(FreetypeFace, &req);
    }
    
    static void ImGui_ImplAllegro5_UpdateMouseCursor()
{
    ImGuiIO& io = ImGui::GetIO();
    if (io.ConfigFlags & ImGuiConfigFlags_NoMouseCursorChange)
        return;
    }
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-06-29: Inputs: Added support for the ImGuiMouseCursor_Hand cursor.
//  2018-06-10: Inputs: Fixed handling of mouse wheel messages to support fine position messages (typically sent by track-pads).
//  2018-06-08: Misc: Extracted imgui_impl_win32.cpp/.h away from the old combined DX9/DX10/DX11/DX12 examples.
//  2018-03-20: Misc: Setup io.BackendFlags ImGuiBackendFlags_HasMouseCursors and ImGuiBackendFlags_HasSetMousePos flags + honor ImGuiConfigFlags_NoMouseCursorChange flag.
//  2018-02-20: Inputs: Added support for mouse cursors (ImGui::GetMouseCursor() value and WM_SETCURSOR message handling).
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
//  2018-02-06: Inputs: Honoring the io.WantSetMousePos by repositioning the mouse (when using navigation and ImGuiConfigFlags_NavMoveMouse is set).
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-01-20: Inputs: Added Horizontal Mouse Wheel support.
//  2018-01-08: Inputs: Added mapping for ImGuiKey_Insert.
//  2018-01-05: Inputs: Added WM_LBUTTONDBLCLK double-click handlers for window classes with the CS_DBLCLKS flag.
//  2017-10-23: Inputs: Added WM_SYSKEYDOWN / WM_SYSKEYUP handlers so e.g. the VK_MENU key can be read.
//  2017-10-23: Inputs: Using Win32 ::SetCapture/::GetCapture() to retrieve mouse positions outside the client area when dragging. 
//  2016-11-12: Inputs: Only call Win32 ::SetCursor(NULL) when io.MouseDrawCursor is set.
    
    // Compatibility:
// - std::string support is only guaranteed to work from C++11. 
//   If you try to use it pre-C++11, please share your findings (w/ info about compiler/architecture)
    
    //---- Tip: You can add extra functions within the ImGui:: namespace, here or in your own headers files.
/*
namespace ImGui
{
    void MyFunction(const char* name, const MyMatrix44& v);
}
*/

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Init
    IMGUI_API void          Initialize(ImGuiContext* context);
    IMGUI_API void          Shutdown(ImGuiContext* context);    // Since 1.60 this is a _private_ function. You can call DestroyContext() to destroy the context created by CreateContext().
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
    namespace aria2 {
    }
    
    class DHTRoutingTableSerializer {
private:
  int family_;
    }
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
    namespace aria2 {
    }
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createNodeLookupTask(const unsigned char* targetID)
{
  auto task = std::make_shared<DHTNodeLookupTask>(targetID);
  setCommonProperty(task);
  return task;
}
    
    
    {  virtual void addImmediateTask(const std::shared_ptr<DHTTask>& task) = 0;
};
    
    
    {  virtual void
  addImmediateTask(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
};
    
    namespace aria2 {
    }
    
        std::vector<AddrEntry>::iterator find(const std::string& addr);
    
    template <class RNG, class /* EnableIf */>
auto Random::create() -> RNG {
  detail::SeedData<RNG> sd;
  std::seed_seq s(std::begin(sd.seedData), std::end(sd.seedData));
  return RNG(s);
}
    
    
    {} // namespace folly

    
    
    {} // namespace folly
    
    
    {     private:
      Executor::KeepAlive<VirtualExecutor> keepAlive_;
      Func f_;
    };
    
      // All of our boundary conditions below assume time_t is int64_t.
  // This is true on most modern platforms.
  if (!std::is_same<decltype(ts.tv_sec), int64_t>::value) {
    LOG(INFO) << 'skipping most overflow tests: time_t is not int64_t';
  } else {
    // Test the upper boundary of conversion to uint64_t nanoseconds
    using nsec_u64 = std::chrono::duration<uint64_t, std::nano>;
    ts.tv_sec = 18446744073;
    ts.tv_nsec = 709551615;
    EXPECT_EQ(std::numeric_limits<uint64_t>::max(), to<nsec_u64>(ts).count());
    }
    
     private:
  void performLazyInit() {
    if (!initialized_) {
      initialized_ = true;
      increment_ = initialize_();
      initialize_ = {};
    }
  }
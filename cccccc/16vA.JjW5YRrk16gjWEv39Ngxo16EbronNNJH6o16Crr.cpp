
        
        #endif

    
      size_t capacity() const {
    return codeBlock.capacity();
  }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    
    {  /**
   * Execute a debugger action.
   */
  virtual String debuggerVerb(const std::string& /*verb*/,
                              const std::vector<std::string>& /*args*/) {
    return String();
  }
};
    
      DIR *dir = opendir(fullPath.c_str());
  if (dir == nullptr) {
    Logger::Error('FileUtil::find(): unable to open directory %s',
                  fullPath.c_str());
    return;
  }
    
    template<typename F>
void logPerfWarningImpl(folly::StringPiece event, int64_t priority,
                        int64_t rate, F fillCols) {
  auto const effectiveRate = rate * RuntimeOption::EvalPerfWarningSampleRate;
  if (effectiveRate > std::numeric_limits<uint32_t>::max()) return;
  if (!StructuredLog::coinflip(effectiveRate)) return;
    }
    
    
    {        ImGui::Render();
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        double mouse_x, mouse_y;
    mouse_x = s3ePointerGetX();
    mouse_y = s3ePointerGetY();
    io.MousePos = ImVec2((float)mouse_x/g_scale.x, (float)mouse_y/g_scale.y);   // Mouse position (set to -FLT_MAX,-FLT_MAX if no mouse / on another screen, etc.)
    
            ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
        ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
        ImGui::Checkbox('Another Window', &show_another_window);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
            g_pd3dCommandList->Reset(frameCtxt->CommandAllocator, NULL);
        g_pd3dCommandList->ResourceBarrier(1, &barrier);
        g_pd3dCommandList->ClearRenderTargetView(g_mainRenderTargetDescriptor[backBufferIdx], (float*)&clear_color, 0, NULL);
        g_pd3dCommandList->OMSetRenderTargets(1, &g_mainRenderTargetDescriptor[backBufferIdx], FALSE, NULL);
        g_pd3dCommandList->SetDescriptorHeaps(1, &g_pd3dSrvDescHeap);
        ImGui::Render();
        ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), g_pd3dCommandList);
        barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
        barrier.Transition.StateAfter  = D3D12_RESOURCE_STATE_PRESENT;
        g_pd3dCommandList->ResourceBarrier(1, &barrier);
        g_pd3dCommandList->Close();
    
    
    {    // Store our identifier
    static_assert(sizeof(ImTextureID) >= sizeof(g_hFontSrvGpuDescHandle.ptr), 'Can't pack descriptor handle into TexID, 32-bit not supported yet.');
    io.Fonts->TexID = (ImTextureID)g_hFontSrvGpuDescHandle.ptr;
}
    
      char zero[18];
  memset(zero, 0, sizeof(zero));
    
        DHTRoutingTableDeserializer deserializer(family);
    const std::string& dhtFile = e->getOption()->get(
        family == AF_INET ? PREF_DHT_FILE_PATH : PREF_DHT_FILE_PATH6);
    try {
      deserializer.deserialize(dhtFile);
      localNode = deserializer.getLocalNode();
    }
    catch (RecoverableException& e) {
      A2_LOG_ERROR_EX(
          fmt('Exception caught while loading DHT routing table from %s',
              dhtFile.c_str()),
          e);
    }
    if (!localNode) {
      localNode = std::make_shared<DHTNode>();
    }
    
      ~DHTSetup();
    
    
    {  virtual bool finished() = 0;
};
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createReplaceNodeTask(
    const std::shared_ptr<DHTBucket>& bucket,
    const std::shared_ptr<DHTNode>& newNode)
{
  auto task = std::make_shared<DHTReplaceNodeTask>(bucket, newNode);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
    namespace aria2 {
    }
    
    #include <folly/Benchmark.h>
    
    template <std::size_t SIZE>
static void checkTracepointArguments(
    const std::string& arguments,
    std::array<int, SIZE>& expectedSize) {
  std::vector<std::string> args;
  folly::split(' ', arguments, args);
  EXPECT_EQ(expectedSize.size(), args.size());
  for (size_t i = 0; i < args.size(); i++) {
    EXPECT_FALSE(args[i].empty());
    auto pos = args[i].find('@');
    EXPECT_NE(pos, std::string::npos);
    EXPECT_LT(pos, args[i].size() - 1);
    std::string argSize = args[i].substr(0, pos);
    EXPECT_EQ(expectedSize[i], abs(folly::to<int>(argSize)));
  }
}
    
    template <>
struct equal_to<folly::Uri> {
  bool operator()(const folly::Uri& a, const folly::Uri& b) const {
    return folly::uri_detail::as_tuple(a) == folly::uri_detail::as_tuple(b);
  }
};
    
      SharedPtr load(std::memory_order order = std::memory_order_seq_cst) const
      noexcept {
    auto local = takeOwnedBase(order);
    return get_shared_ptr(local, false);
  }
    
      static void prepare() noexcept {
    instance().tasksLock.lock();
    while (true) {
      auto& tasks = instance().tasks;
      auto task = tasks.rbegin();
      for (; task != tasks.rend(); ++task) {
        if (!task->prepare()) {
          break;
        }
      }
      if (task == tasks.rend()) {
        return;
      }
      for (auto untask = tasks.rbegin(); untask != task; ++untask) {
        untask->parent();
      }
    }
  }
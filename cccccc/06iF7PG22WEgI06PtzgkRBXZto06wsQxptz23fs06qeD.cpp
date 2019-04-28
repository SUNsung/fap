
        
            void operator() (const typename VecTraits<T>::vec128 & v_src0,
                     const typename VecTraits<T>::vec128 & v_src1,
                     typename VecTraits<T>::vec128 & v_dst) const
    {
        typename VecTraits<wtype>::vec128 vrl, vrh;
        wideAdd(vmovl( vget_low(v_src0)), vmovl( vget_low(v_src1)), vrl);
        wideAdd(vmovl(vget_high(v_src0)), vmovl(vget_high(v_src1)), vrh);
    }
    
        func(size,
         srcBase, srcStride,
         dstBase, dstStride,
         flipMode);
    
    TEST(StructurallyValidTest, InvalidUTF8String) {
  const string invalid_str('abcd\xA0\xB0\xA0\xB0\xA0\xB0 - xyz789');
  EXPECT_FALSE(IsStructurallyValidUTF8(invalid_str.data(),
                                       invalid_str.size()));
  // Additional check for pointer alignment
  for (int i = 1; i < 8; ++i) {
    EXPECT_FALSE(IsStructurallyValidUTF8(invalid_str.data() + i,
                                         invalid_str.size() - i));
  }
}
    
    
    {  typedef if_<false, true_type, false_type>::type if_false;
  EXPECT_FALSE(if_false::value);
}
    
      // Returns the x,y means as an FCOORD.
  FCOORD mean_point() const;
    
    #ifndef TESSERACT_CCMAIN_OTSUTHR_H_
#define TESSERACT_CCMAIN_OTSUTHR_H_
    
    // A collection of utility functions for arrays of UNICHAR_IDs that are
// terminated by INVALID_UNICHAR_ID.
class UnicharIdArrayUtils {
 public:
  // Compares two arrays of unichar ids. Returns -1 if the length of array1 is
  // less than length of array2, if any array1[i] is less than array2[i].
  // Returns 0 if the arrays are equal, 1 otherwise.
  // The function assumes that the arrays are terminated by INVALID_UNICHAR_ID.
  static inline int compare(const UNICHAR_ID *ptr1, const UNICHAR_ID *ptr2) {
    for (;;) {
      const UNICHAR_ID val1 = *ptr1++;
      const UNICHAR_ID val2 = *ptr2++;
      if (val1 != val2) {
        if (val1 == INVALID_UNICHAR_ID) return -1;
        if (val2 == INVALID_UNICHAR_ID) return 1;
        if (val1 < val2) return -1;
        return 1;
      }
      if (val1 == INVALID_UNICHAR_ID) return 0;
    }
  }
    }
    
     private:
  struct ReferenceCount {
    STRING id;  // A unique ID to identify the object (think path on disk)
    T *object;  // A copy of the object in memory.  Can be delete'd.
    int count;  // A count of the number of active users of this object.
  };
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size/5 - 1048576);
}
    
    // Return the name of the old info log file for 'dbname'.
std::string OldInfoLogFileName(const std::string& dbname);
    
        // Open the log file
    std::string logname = LogFileName(dbname_, log);
    SequentialFile* lfile;
    Status status = env_->NewSequentialFile(logname, &lfile);
    if (!status.ok()) {
      return status;
    }
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
            // If you are using this code with non-legacy OpenGL header/contexts (which you should not, prefer using imgui_impl_opengl3.cpp!!), 
        // you may need to backup/reset/restore current shader using the commented lines below.
        //GLint last_program; 
        //glGetIntegerv(GL_CURRENT_PROGRAM, &last_program);
        //glUseProgram(0);
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
        //glUseProgram(last_program);
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
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
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // Poll and handle messages (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            ::TranslateMessage(&msg);
            ::DispatchMessage(&msg);
            continue;
        }
    }
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputText(label, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}
    
    
    {} // namespace aria2
    
      ~DHTRoutingTableDeserializer();
    
    
    {} // namespace aria2
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createReplaceNodeTask(
    const std::shared_ptr<DHTBucket>& bucket,
    const std::shared_ptr<DHTNode>& newNode)
{
  auto task = std::make_shared<DHTReplaceNodeTask>(bucket, newNode);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
    
    {} // namespace aria2
    
    void DHTTokenUpdateCommand::preProcess()
{
  if (getDownloadEngine()->getRequestGroupMan()->downloadFinished() ||
      getDownloadEngine()->isHaltRequested()) {
    enableExit();
  }
}
    
    #include 'TimeBasedCommand.h'
    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);
    
    DNSCache::CacheEntry& DNSCache::CacheEntry::operator=(const CacheEntry& c)
{
  if (this != &c) {
    hostname_ = c.hostname_;
    port_ = c.port_;
    addrEntries_ = c.addrEntries_;
  }
  return *this;
}
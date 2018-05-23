
        
                // Create the input layout
        D3D10_INPUT_ELEMENT_DESC local_layout[] = 
        {
            { 'POSITION', 0, DXGI_FORMAT_R32G32_FLOAT,   0, (size_t)(&((ImDrawVert*)0)->pos), D3D10_INPUT_PER_VERTEX_DATA, 0 },
            { 'TEXCOORD', 0, DXGI_FORMAT_R32G32_FLOAT,   0, (size_t)(&((ImDrawVert*)0)->uv),  D3D10_INPUT_PER_VERTEX_DATA, 0 },
            { 'COLOR',    0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, (size_t)(&((ImDrawVert*)0)->col), D3D10_INPUT_PER_VERTEX_DATA, 0 },
        };
        if (g_pd3dDevice->CreateInputLayout(local_layout, 3, g_pVertexShaderBlob->GetBufferPointer(), g_pVertexShaderBlob->GetBufferSize(), &g_pInputLayout) != S_OK)
            return false;
    
        // Create and grow vertex/index buffers if needed
    if (!g_pVB || g_VertexBufferSize < draw_data->TotalVtxCount)
    {
        if (g_pVB) { g_pVB->Release(); g_pVB = NULL; }
        g_VertexBufferSize = draw_data->TotalVtxCount + 5000;
        D3D11_BUFFER_DESC desc;
        memset(&desc, 0, sizeof(D3D11_BUFFER_DESC));
        desc.Usage = D3D11_USAGE_DYNAMIC;
        desc.ByteWidth = g_VertexBufferSize * sizeof(ImDrawVert);
        desc.BindFlags = D3D11_BIND_VERTEX_BUFFER;
        desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        desc.MiscFlags = 0;
        if (g_pd3dDevice->CreateBuffer(&desc, NULL, &g_pVB) < 0)
            return;
    }
    if (!g_pIB || g_IndexBufferSize < draw_data->TotalIdxCount)
    {
        if (g_pIB) { g_pIB->Release(); g_pIB = NULL; }
        g_IndexBufferSize = draw_data->TotalIdxCount + 10000;
        D3D11_BUFFER_DESC desc;
        memset(&desc, 0, sizeof(D3D11_BUFFER_DESC));
        desc.Usage = D3D11_USAGE_DYNAMIC;
        desc.ByteWidth = g_IndexBufferSize * sizeof(ImDrawIdx);
        desc.BindFlags = D3D11_BIND_INDEX_BUFFER;
        desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        if (g_pd3dDevice->CreateBuffer(&desc, NULL, &g_pIB) < 0)
            return;
    }
    
        // Show the window
    ShowWindow(hwnd, SW_SHOWDEFAULT);
    UpdateWindow(hwnd);
    
        UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext) != S_OK)
        return E_FAIL;
    
        for (int n = 0; n < 50; n++)
    {
        printf('NewFrame() %d\n', n);
        io.DisplaySize = ImVec2(1920, 1080);
        io.DeltaTime = 1.0f / 60.0f;
        ImGui::NewFrame();
    }
    
    static void glfw_error_callback(int error, const char* description)
{
    fprintf(stderr, 'Error %d: %s\n', error, description);
}
    
        // Update OS/hardware mouse cursor if imgui isn't drawing a software cursor
    if ((io.ConfigFlags & ImGuiConfigFlags_NoMouseCursorChange) == 0)
    {
        ImGuiMouseCursor cursor = ImGui::GetMouseCursor();
        if (io.MouseDrawCursor || cursor == ImGuiMouseCursor_None)
        {
            SDL_ShowCursor(0);
        }
        else
        {
            SDL_SetCursor(g_MouseCursors[cursor] ? g_MouseCursors[cursor] : g_MouseCursors[ImGuiMouseCursor_Arrow]);
            SDL_ShowCursor(1);
        }
    }
    
    
    {#ifndef FOLLY_TLD_USE_FOLLY_TLS
  delete threadEntryList;
#endif
}
    
    enum class ordering : int { lt = -1, eq = 0, gt = 1 };
    
    template <class T, class... Us>
auto doEmplaceAssign(long, T& t, Us&&... us)
    -> decltype(void(T((Us &&)us...))) {
  t.~T();
  ::new ((void*)std::addressof(t)) T((Us &&)us...);
}
    
      template <bool isTry, typename R>
  typename std::enable_if<!isTry, R>::type get() {
    return std::forward<R>(value());
  }
    
    TEST_F(ConstexprMathTest, constexpr_log2_1) {
  constexpr auto v = 1ull;
  constexpr auto a = folly::constexpr_log2(v);
  EXPECT_EQ(0ull, a);
  EXPECT_TRUE((std::is_same<decltype(v), decltype(a)>::value));
}
    
    #ifdef ANDROID
#include 'comm/android/callstack.h'
#endif
    
    #include <stdint.h>
#include <cstddef>
#include <list>
    
    #include 'comm/debugger/test_spy_sample.h'
#include 'comm/xlogger/xlogger.h'
    
    template <bool TYPE>
struct bool_type {
};
    
    bool DBWrapper::AddToBatch(rocksdb::WriteBatch& batch, bool del,
                           Handle<Array> array) {
  Handle<Array> put_pair;
  for (uint i = 0; i < array->Length(); i++) {
    if (del) {
      if (!array->Get(i)->IsString()) {
        return false;
      }
    }
    }
    }
    
    
    {  // Removes . and .. from directory listing
  virtual Status GetChildrenFileAttributes(
      const std::string& dir, std::vector<FileAttributes>* result) override {
    Status status = EnvWrapper::GetChildrenFileAttributes(dir, result);
    if (status.ok()) {
      result->erase(std::remove_if(result->begin(), result->end(),
                                   [](const FileAttributes& fa) {
                                     return fa.name == '.' || fa.name == '..';
                                   }),
                    result->end());
    }
    return status;
  }
};
    
    Name            Speed       Q.Score   Author
xxHash          5.4 GB/s     10
CrapWow         3.2 GB/s      2       Andrew
MumurHash 3a    2.7 GB/s     10       Austin Appleby
SpookyHash      2.0 GB/s     10       Bob Jenkins
SBox            1.4 GB/s      9       Bret Mulvey
Lookup3         1.2 GB/s      9       Bob Jenkins
SuperFastHash   1.2 GB/s      1       Paul Hsieh
CityHash64      1.05 GB/s    10       Pike & Alakuijala
FNV             0.55 GB/s     5       Fowler, Noll, Vo
CRC32           0.43 GB/s     9
MD5-32          0.33 GB/s    10       Ronald L. Rivest
SHA1-32         0.28 GB/s    10
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
    
    {
    {    return true;
  }
// @lint-ignore TXT4 T25377293 Grandfathered in
};
    
    #ifndef JAVA_ROCKSJNI_STATISTICSJNI_H_
#define JAVA_ROCKSJNI_STATISTICSJNI_H_
    
    /****************************************************
  private functions to handle fid operation.
  Dir also have fid, but the value is DIR_ID_VALUE
****************************************************/
    
    
    {
    {  void ClearCallBack(const std::string& point);
  void ClearAllCallBacks();
  void EnableProcessing() {
    std::lock_guard<std::mutex> lock(mutex_);
    enabled_ = true;
  }
  void DisableProcessing() {
    std::lock_guard<std::mutex> lock(mutex_);
    enabled_ = false;
  }
  void ClearTrace() {
    std::lock_guard<std::mutex> lock(mutex_);
    cleared_points_.clear();
  }
  bool DisabledByMarker(const std::string& point,
                        std::thread::id thread_id) {
    auto marked_point_iter = marked_thread_id_.find(point);
    return marked_point_iter != marked_thread_id_.end() &&
           thread_id != marked_point_iter->second;
  }
  void Process(const std::string& point, void* cb_arg);
};
}
#endif // NDEBUG

    
      // Assuming that *rep() contains a user key, this method makes internal key
  // out of it in-place. This saves a memcpy compared to Set()/SetFrom().
  void ConvertFromUserKey(SequenceNumber s, ValueType t) {
    AppendInternalKeyFooter(&rep_, s, t);
  }
    
    inline
void BlockFetcher::CheckBlockChecksum() {
  // Check the crc of the type and the block contents
  if (read_options_.verify_checksums) {
    const char* data = slice_.data();  // Pointer to where Read put the data
    PERF_TIMER_GUARD(block_checksum_time);
    uint32_t value = DecodeFixed32(data + block_size_ + 1);
    uint32_t actual = 0;
    switch (footer_.checksum()) {
      case kNoChecksum:
        break;
      case kCRC32c:
        value = crc32c::Unmask(value);
        actual = crc32c::Value(data, block_size_ + 1);
        break;
      case kxxHash:
        actual = XXH32(data, static_cast<int>(block_size_) + 1, 0);
        break;
      default:
        status_ = Status::Corruption(
            'unknown checksum type ' + ToString(footer_.checksum()) + ' in ' +
            file_->file_name() + ' offset ' + ToString(handle_.offset()) +
            ' size ' + ToString(block_size_));
    }
    if (status_.ok() && actual != value) {
      status_ = Status::Corruption(
          'block checksum mismatch: expected ' + ToString(actual) + ', got ' +
          ToString(value) + '  in ' + file_->file_name() + ' offset ' +
          ToString(handle_.offset()) + ' size ' + ToString(block_size_));
    }
  }
}
    
      // Return the result merging iterator.
  InternalIterator* Finish();
    
      if(env->ExceptionCheck()) {
    // exception thrown from CallLongMethod
    env->ExceptionDescribe();  // print out exception to stderr
    releaseJniEnv(attached_thread);
    return nullptr;
  }
    
    void AbstractOptionHandler::updateFlags(int flag, bool val)
{
  if (val) {
    flags_ |= flag;
  }
  else {
    flags_ &= ~flag;
  }
}
    
      void setBtRuntime(const std::shared_ptr<BtRuntime>& btRuntime);
    
    void AnnounceList::shuffle()
{
  for (const auto& tier : tiers_) {
    auto& urls = tier->urls;
    std::shuffle(std::begin(urls), std::end(urls),
                 *SimpleRandomizer::getInstance());
  }
}
    
    void configureAsyncNameResolverMan(AsyncNameResolverMan* asyncNameResolverMan,
                                   Option* option);
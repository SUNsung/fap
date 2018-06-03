
        
        leveldb_env_t* leveldb_create_default_env() {
  leveldb_env_t* result = new leveldb_env_t;
  result->rep = Env::Default();
  result->is_default = true;
  return result;
}
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
      // Return a key suitable for lookup in a MemTable.
  Slice memtable_key() const { return Slice(start_, end_ - start_); }
    
    
    {  // Errors
  static const char* errors[] = {
    '',
    'foo',
    'foo-dx-100.log',
    '.log',
    '',
    'manifest',
    'CURREN',
    'CURRENTX',
    'MANIFES',
    'MANIFEST',
    'MANIFEST-',
    'XMANIFEST-3',
    'MANIFEST-3x',
    'LOC',
    'LOCKx',
    'LO',
    'LOGx',
    '18446744073709551616.log',
    '184467440737095516150.log',
    '100',
    '100.',
    '100.lop'
  };
  for (int i = 0; i < sizeof(errors) / sizeof(errors[0]); i++) {
    std::string f = errors[i];
    ASSERT_TRUE(!ParseFileName(f, &number, &type)) << f;
  }
}
    
          case kPrevLogNumber:
        if (GetVarint64(&input, &prev_log_number_)) {
          has_prev_log_number_ = true;
        } else {
          msg = 'previous log number';
        }
        break;
    
     private:
  friend class VersionSet;
    
      void Add(const char* smallest, const char* largest,
           SequenceNumber smallest_seq = 100,
           SequenceNumber largest_seq = 100) {
    FileMetaData* f = new FileMetaData;
    f->number = files_.size() + 1;
    f->smallest = InternalKey(smallest, smallest_seq, kTypeValue);
    f->largest = InternalKey(largest, largest_seq, kTypeValue);
    files_.push_back(f);
  }
    
      ~Benchmark() {
    if (!db_->close()) {
      fprintf(stderr, 'close error: %s\n', db_->error().name());
    }
  }
    
    // A Comparator object provides a total order across slices that are
// used as keys in an sstable or a database.  A Comparator implementation
// must be thread-safe since leveldb may invoke its methods concurrently
// from multiple threads.
class Comparator {
 public:
  virtual ~Comparator();
    }
    
      // Return the name of this policy.  Note that if the filter encoding
  // changes in an incompatible way, the name returned by this method
  // must be changed.  Otherwise, old incompatible filters may be
  // passed to methods of this type.
  virtual const char* Name() const = 0;
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_MESSAGE_H_

    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40>
internal::ValueArray40<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40> Values(T1 v1,
    T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11,
    T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19,
    T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27,
    T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35,
    T36 v36, T37 v37, T38 v38, T39 v39, T40 v40) {
  return internal::ValueArray40<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39,
      T40>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15,
      v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29,
      v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40);
}
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
#define GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED2.  Don't use
// this in your code.
#define GTEST_PRED2_(pred, v1, v2, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred2Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             pred, \
                                             v1, \
                                             v2), on_failure)
    
      // If input name has a trailing separator character, removes it and returns
  // the name, otherwise return the name string unmodified.
  // On Windows platform, uses \ as the separator, other platforms use /.
  FilePath RemoveTrailingPathSeparator() const;
    
    
template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9>
class CartesianProductGenerator9
    : public ParamGeneratorInterface< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6,
        T7, T8, T9> > {
 public:
  typedef ::std::tr1::tuple<T1, T2, T3, T4, T5, T6, T7, T8, T9> ParamType;
    }
    
    
    {        static_cast<ParamGenerator<T$j> >(g$(j)_)
]]));
  }
    
      // Creates an ANSI string from the given wide string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the ANSI string, or NULL if the
  // input is NULL.
  //
  // The returned string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static const char* Utf16ToAnsi(LPCWSTR utf16_str);
#endif
    
    template <GTEST_9_TYPENAMES_(T)>
struct tuple_size<GTEST_9_TUPLE_(T) > {
  static const int value = 9;
};
    
    // 6.1.4 Pairs.
// Unimplemented.
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29>
struct Types29 {
  typedef T1 Head;
  typedef Types28<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29> Tail;
};
    
    #define THPDoubleStorage_CData(obj)  (obj)->cdata
#define THPFloatStorage_CData(obj)   (obj)->cdata
#define THPHalfStorage_CData(obj)    (obj)->cdata
#define THPLongStorage_CData(obj)    (obj)->cdata
#define THPIntStorage_CData(obj)     (obj)->cdata
#define THPShortStorage_CData(obj)   (obj)->cdata
#define THPCharStorage_CData(obj)    (obj)->cdata
#define THPByteStorage_CData(obj)    (obj)->cdata
    
      std::unique_ptr<ManagerServerSocket> srv_socket;
  try {
    char tmpfile[L_tmpnam];
    if (std::tmpnam(tmpfile) == NULL)
      throw std::runtime_error('could not generate a random filename for manager socket');
    // TODO: better strategy for generating tmp names
    // TODO: retry on collisions - this can easily fail
    srv_socket.reset(new ManagerServerSocket(std::string(tmpfile)));
    register_fd(srv_socket->socket_fd);
    print_init_message(tmpfile);
    DEBUG('opened socket %s', tmpfile);
  } catch(...) {
    print_init_message('ERROR');
    throw;
  }
    
    void THDTensor_(gesvd)(THDTensor *ru, THDTensor *rs, THDTensor *rv, THDTensor *a,
                       const char *jobu) {
  THDTensor *ra = THDTensor_(new)();
  THDTensor_(gesvd2)(ru, rs, rv,  ra, a, jobu);
  THDTensor_(free)(ra);
}
    
    // Data pertaining to configuration of the generator with respect to anything
// that may be used internally at Google.
struct GeneratorConfiguration {
  GeneratorConfiguration();
  grpc::string grpc_package_root;
  // TODO(https://github.com/grpc/grpc/issues/8622): Drop this.
  grpc::string beta_package_root;
  // TODO(https://github.com/google/protobuf/issues/888): Drop this.
  grpc::string import_prefix;
};
    
    std::vector<grpc::string_ref> SecureAuthContext::FindPropertyValues(
    const grpc::string& name) const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter =
      grpc_auth_context_find_properties_by_name(ctx_, name.c_str());
  const grpc_auth_property* property = nullptr;
  std::vector<grpc::string_ref> values;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    values.push_back(grpc::string_ref(property->value, property->value_length));
  }
  return values;
}
    
    #include <gtest/gtest.h>
    
    gpr_atm grpc::testing::interop::g_got_sigint;
    
    
    {  return r;
}

    
    #include 'test/cpp/util/service_describer.h'
    
    IMGUI_API bool        ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_API void        ImGui_Marmalade_Shutdown();
IMGUI_API void        ImGui_Marmalade_NewFrame();
IMGUI_API void        ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
    
        VkVertexInputAttributeDescription attribute_desc[3] = {};
    attribute_desc[0].location = 0;
    attribute_desc[0].binding = binding_desc[0].binding;
    attribute_desc[0].format = VK_FORMAT_R32G32_SFLOAT;
    attribute_desc[0].offset = (size_t)(&((ImDrawVert*)0)->pos);
    attribute_desc[1].location = 1;
    attribute_desc[1].binding = binding_desc[0].binding;
    attribute_desc[1].format = VK_FORMAT_R32G32_SFLOAT;
    attribute_desc[1].offset = (size_t)(&((ImDrawVert*)0)->uv);
    attribute_desc[2].location = 2;
    attribute_desc[2].binding = binding_desc[0].binding;
    attribute_desc[2].format = VK_FORMAT_R8G8B8A8_UNORM;
    attribute_desc[2].offset = (size_t)(&((ImDrawVert*)0)->col);
    
            // Create the input layout
        D3D11_INPUT_ELEMENT_DESC local_layout[] = {
            { 'POSITION', 0, DXGI_FORMAT_R32G32_FLOAT,   0, (size_t)(&((ImDrawVert*)0)->pos), D3D11_INPUT_PER_VERTEX_DATA, 0 },
            { 'TEXCOORD', 0, DXGI_FORMAT_R32G32_FLOAT,   0, (size_t)(&((ImDrawVert*)0)->uv),  D3D11_INPUT_PER_VERTEX_DATA, 0 },
            { 'COLOR',    0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, (size_t)(&((ImDrawVert*)0)->col), D3D11_INPUT_PER_VERTEX_DATA, 0 },
        };
        if (g_pd3dDevice->CreateInputLayout(local_layout, 3, g_pVertexShaderBlob->GetBufferPointer(), g_pVertexShaderBlob->GetBufferSize(), &g_pInputLayout) != S_OK)
            return false;
    
            ID3D12Resource* uploadBuffer = NULL;
        HRESULT hr = g_pd3dDevice->CreateCommittedResource(&props, D3D12_HEAP_FLAG_NONE, &desc,
            D3D12_RESOURCE_STATE_GENERIC_READ, NULL, IID_PPV_ARGS(&uploadBuffer));
        IM_ASSERT(SUCCEEDED(hr));
    
    void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_hSwapChainWaitableObject != NULL) { CloseHandle(g_hSwapChainWaitableObject); }
    for (UINT i = 0; i < NUM_FRAMES_IN_FLIGHT; i++)
        if (g_frameContext[i].CommandAllocator) { g_frameContext[i].CommandAllocator->Release(); g_frameContext[i].CommandAllocator = NULL; }
    if (g_pd3dCommandQueue) { g_pd3dCommandQueue->Release(); g_pd3dCommandQueue = NULL; }
    if (g_pd3dCommandList) { g_pd3dCommandList->Release(); g_pd3dCommandList = NULL; }
    if (g_pd3dRtvDescHeap) { g_pd3dRtvDescHeap->Release(); g_pd3dRtvDescHeap = NULL; }
    if (g_pd3dSrvDescHeap) { g_pd3dSrvDescHeap->Release(); g_pd3dSrvDescHeap = NULL; }
    if (g_fence) { g_fence->Release(); g_fence = NULL; }
    if (g_fenceEvent) { CloseHandle(g_fenceEvent); g_fenceEvent = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSdlGL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
        }
        ImGui_ImplSdlGL2_NewFrame(window);
    }
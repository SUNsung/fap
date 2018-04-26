
        
        // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX10_CreateDeviceObjects();
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
// Missing features:
//  [ ] SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.
    
    
    {    // Restore modified GL state
    glUseProgram(last_program);
    glBindTexture(GL_TEXTURE_2D, last_texture);
    glBindSampler(0, last_sampler);
    glActiveTexture(last_active_texture);
    glBindVertexArray(last_vertex_array);
    glBindBuffer(GL_ARRAY_BUFFER, last_array_buffer);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, last_element_array_buffer);
    glBlendEquationSeparate(last_blend_equation_rgb, last_blend_equation_alpha);
    glBlendFuncSeparate(last_blend_src_rgb, last_blend_dst_rgb, last_blend_src_alpha, last_blend_dst_alpha);
    if (last_enable_blend) glEnable(GL_BLEND); else glDisable(GL_BLEND);
    if (last_enable_cull_face) glEnable(GL_CULL_FACE); else glDisable(GL_CULL_FACE);
    if (last_enable_depth_test) glEnable(GL_DEPTH_TEST); else glDisable(GL_DEPTH_TEST);
    if (last_enable_scissor_test) glEnable(GL_SCISSOR_TEST); else glDisable(GL_SCISSOR_TEST);
    glPolygonMode(GL_FRONT_AND_BACK, (GLenum)last_polygon_mode[0]);
    glViewport(last_viewport[0], last_viewport[1], (GLsizei)last_viewport[2], (GLsizei)last_viewport[3]);
    glScissor(last_scissor_box[0], last_scissor_box[1], (GLsizei)last_scissor_box[2], (GLsizei)last_scissor_box[3]);
}
    
        {
        D3D12_COMMAND_QUEUE_DESC desc = {};
        desc.Type     = D3D12_COMMAND_LIST_TYPE_DIRECT;
        desc.Flags    = D3D12_COMMAND_QUEUE_FLAG_NONE;
        desc.NodeMask = 1;
        if (g_pd3dDevice->CreateCommandQueue(&desc, IID_PPV_ARGS(&g_pd3dCommandQueue)) != S_OK)
            return E_FAIL;
    }
    
    #include <s3eKeyboard.h>
#include <s3ePointer.h>
#include <IwGx.h>
    
    
    {  auto iov = buf->getIov();
  transport.writev(nullptr, iov.data(), iov.size());
}
    
      // create a read buffer for the buffer chain
  Cursor rcursor(iobuf1.get());
  EXPECT_EQ(1, rcursor.readBE<uint64_t>());
  EXPECT_EQ(10, rcursor.readBE<uint64_t>());
  EXPECT_EQ(20, rcursor.readBE<uint32_t>());
  EXPECT_EQ(0, rcursor.totalLength());
  rcursor.reset(iobuf1.get());
  EXPECT_EQ(20, rcursor.totalLength());
    
    
    {   private:
    Deleter deleter_;
  };
    
      uint32_t size3 = 4321;
  unique_ptr<uint8_t[]> buf3(new uint8_t[size3]);
  IOBuf iobuf3(IOBuf::WRAP_BUFFER, buf3.get(), size3);
  EXPECT_EQ(buf3.get(), iobuf3.data());
  EXPECT_EQ(size3, iobuf3.length());
  EXPECT_EQ(buf3.get(), iobuf3.buffer());
  EXPECT_EQ(size3, iobuf3.capacity());
    
      template <typename T>
  static std::shared_ptr<T> get_shared_ptr_from_counted_base(
      counted_base* base,
      bool inc = true) {
    if (!base) {
      return nullptr;
    }
    std::shared_ptr<const void> newp;
    if (inc) {
      inc_shared_count(base, 1);
    }
    newp.*fieldPtr(access_shared_ptr_ptr{}) =
        get_shared_ptr<const void>(base); // _M_ptr
    (newp.*fieldPtr(access_refcount{})).*fieldPtr(access_base{}) = base;
    // reinterpret_pointer_cast<T>
    auto res = reinterpret_cast<std::shared_ptr<T>*>(&newp);
    return std::move(*res);
  }
    
    #pragma once
    
    
    {
    {    idx = ProbeFcn()(idx, numProbes, capacity_);
  }
}
    
    
    {
}; // AtomicHashArray
    
    void DupAndCloseStderr();
    
      // Aggregates all available coverage measurements.
  struct Coverage {
    Coverage() { Reset(); }
    }
    
    template<class T>
size_t ChangeBinaryInteger(uint8_t *Data, size_t Size, Random &Rand) {
  if (Size < sizeof(T)) return 0;
  size_t Off = Rand(Size - sizeof(T) + 1);
  assert(Off + sizeof(T) <= Size);
  T Val;
  if (Off < 64 && !Rand(4)) {
    Val = Size;
    if (Rand.RandBool())
      Val = Bswap(Val);
  } else {
    memcpy(&Val, Data + Off, sizeof(Val));
    T Add = Rand(21);
    Add -= 10;
    if (Rand.RandBool())
      Val = Bswap(T(Bswap(Val) + Add)); // Add assuming different endiannes.
    else
      Val = Val + Add;               // Add assuming current endiannes.
    if (Add == 0 || Rand.RandBool()) // Maybe negate.
      Val = -Val;
  }
  memcpy(Data + Off, &Val, sizeof(Val));
  return Size;
}
    
    void TracePC::HandleInit(uint32_t *Start, uint32_t *Stop) {
  if (Start == Stop || *Start) return;
  assert(NumModules < sizeof(Modules) / sizeof(Modules[0]));
  for (uint32_t *P = Start; P < Stop; P++)
    *P = ++NumGuards;
  Modules[NumModules].Start = Start;
  Modules[NumModules].Stop = Stop;
  NumModules++;
}
    
      void HandleTrace(uint32_t *guard, uintptr_t PC);
  void HandleInit(uint32_t *start, uint32_t *stop);
  void HandleCallerCallee(uintptr_t Caller, uintptr_t Callee);
  void HandleValueProfile(size_t Value) { ValueProfileMap.AddValue(Value); }
  template <class T> void HandleCmp(void *PC, T Arg1, T Arg2);
  size_t GetTotalPCCoverage();
  void SetUseCounters(bool UC) { UseCounters = UC; }
  void SetUseValueProfile(bool VP) { UseValueProfile = VP; }
  void SetPrintNewPCs(bool P) { DoPrintNewPCs = P; }
  template <class Callback> size_t CollectFeatures(Callback CB);
  bool UpdateValueProfileMap(ValueBitMap *MaxValueProfileMap) {
    return UseValueProfile && MaxValueProfileMap->MergeFrom(ValueProfileMap);
  }
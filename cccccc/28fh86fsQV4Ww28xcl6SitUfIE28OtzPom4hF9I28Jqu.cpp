
        
            // This uses a dummy interruptor because this is the only thing using the store at
    //  the moment (since we are still in the constructor), so things should complete
    //  rather quickly.
    cond_t dummy_interruptor;
    write_token_t token;
    new_write_token(&token);
    
    
// Value-parameterized tests allow you to test your code with different
// parameters without writing multiple copies of the same test.
//
// Here is how you use value-parameterized tests:
    
    
    {  // The name of the source file where the test part took place, or
  // '' if the source file is unknown.
  std::string file_name_;
  // The line in the source file where the test part took place, or -1
  // if the line number is unknown.
  int line_number_;
  std::string summary_;  // The test failure summary.
  std::string message_;  // The test failure message.
};
    
    #include 'gtest/internal/gtest-port.h'
    
    template <GTEST_9_TYPENAMES_(T)>
inline GTEST_9_TUPLE_(T) make_tuple(const T0& f0, const T1& f1, const T2& f2,
    const T3& f3, const T4& f4, const T5& f5, const T6& f6, const T7& f7,
    const T8& f8) {
  return GTEST_9_TUPLE_(T)(f0, f1, f2, f3, f4, f5, f6, f7, f8);
}
    
      // draw annotations
  annotList = new Annots(xref, catalog, getAnnots(&obj));
  obj.free();
  
  if (annotList->getNumAnnots() > 0) {
    if (globalParams->getPrintCommands()) {
      printf('***** Annotations\n');
    }
    for (i = 0; i < annotList->getNumAnnots(); ++i) {
        Annot *annot = annotList->getAnnot(i);
        if ((annotDisplayDecideCbk &&
             (*annotDisplayDecideCbk)(annot, annotDisplayDecideCbkData)) || 
            !annotDisplayDecideCbk) {
             annotList->getAnnot(i)->draw(gfx, printing);
	}
    }
    out->dump();
  }
  delete annotList;
    
      prev_digit_value = INT_MAX;
  value = 0;
  for (i = 0; buffer[i] != '\0'; i++) {
    switch (buffer[i]) {
    case 'm':
    case 'M':
      digit_value = 1000;
      break;
    case 'd':
    case 'D':
      digit_value = 500;
      break;
    case 'c':
    case 'C':
      digit_value = 100;
      break;
    case 'l':
    case 'L':
      digit_value = 50;
      break;
    case 'x':
    case 'X':
      digit_value = 10;
      break;
    case 'v':
    case 'V':
      digit_value = 5;
      break;
    case 'i':
    case 'I':
      digit_value = 1;
      break;
    default:
      return -1;
    }
    }
    
      // get stream start position
  lexer->skipToNextLine();
  pos = lexer->getPos();
    
      //----- path clipping
  virtual void clip(GfxState *state);
  virtual void eoClip(GfxState *state);
    
    class ProfileData {
public:
    }
    
    private:
    
    enum SoundEncoding {
  soundRaw,			// raw encoding
  soundSigned,			// twos-complement values
  soundMuLaw,			// mu-law-encoded samples
  soundALaw			// A-law-encoded samples
};
    
      // Does this device use upside-down coordinates?
  // (Upside-down means (0,0) is the top left corner of the page.)
  virtual GBool upsideDown() { return gTrue; }
    
            // Rendering
        ImGui::Render();
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    
            // Start the Dear ImGui frame
        ImGui_ImplOpenGL2_NewFrame();
        ImGui_ImplSDL2_NewFrame(window);
        ImGui::NewFrame();
    
    
    {        // Rendering
        ImGui::Render();
        glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver.
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
    static bool
extent_purge(extent_hooks_t* /*extent_hooks*/, void* addr, size_t size,
             size_t offset, size_t length, unsigned /*arena_ind*/) {
  // This function should return false upon success, which is the case when
  // madvise returns 0.
  return madvise((char*)addr + offset, length, MADV_DONTNEED);
}
    
        if (global && system) {
      client.print('$%s = %s', name.data(), value.data());
    } else {
      client.output('$%s = %s', name.data(), value.data());
    }
    
    
    {      return true;
    });
    
    #include 'hphp/util/assertions.h'
#include 'hphp/util/trace.h'
    
    template<class T, class V, bool case_sensitive, class E>
inline
void FixedStringMapBuilder<T,V,case_sensitive,E>::create(FSMap& map) {
  map.extra() = size();
  map.init(size(), 0);
  if (!size()) {
    return;
  }
  for (const_iterator it = begin(); it != end(); ++it) {
    map.add(it->first, it->second);
  }
}
    
    HeapObject* SparseHeap::allocSlab(MemoryUsageStats& stats) {
  auto finish = [&](void* p) {
    // expand m_slab_range to include this new slab
    if (!m_slab_range.size) {
      m_slab_range = {p, kSlabSize};
    } else {
      auto min = std::min(m_slab_range.ptr, p);
      auto max = std::max((char*)p + kSlabSize,
                          (char*)m_slab_range.ptr + m_slab_range.size);
      m_slab_range = {min, size_t((char*)max - (char*)min)};
    }
    return static_cast<HeapObject*>(p);
  };
    }
    
    namespace HPHP { namespace thrift {
    }
    }
    
    template <typename Or>
bool implOrSimplify(
  Env& env, const Or& inst, Vlabel b, size_t i, size_t immed
) {
 if (env.use_counts[inst.sf] != 0) return false;
 if (immed == 0) return simplify_impl(env, b, i, copy{inst.s1, inst.d});
    }
    
    uintptr_t handleDynamicCall(const Class* cls,
                            const StringData* name,
                            const Class* ctx);
    
    void Vgen::emit(const trap& i) {
  env.meta.trapReasons.emplace_back(a->frontier(), i.reason);
  a->Brk(1);
}
    
    // Simplify MemoryRef vasm types by their direct variant as ppc64 can't
// change data directly in memory. Grab and save the data.
#define X(vasm_src, vasm_dst, vasm_load, vasm_store, operands)          \
void lowerForPPC64(const VLS& e, Vout& v, vasm_src& inst) {             \
  Vreg tmp = e.allow_vreg() ? v.makeReg() : Vreg(PhysReg(rAsm));        \
  Vreg tmp2 = e.allow_vreg() ? v.makeReg() : Vreg(PhysReg(rAsm));       \
  Vptr p = inst.m;                                                      \
  v << vasm_load{p, tmp};                                               \
  v << vasm_dst{operands tmp, tmp2, inst.sf};                           \
  v << vasm_store{tmp2, p};                                             \
}
    
    bool APCLocalArray::IsVectorData(const ArrayData* ad) {
  auto a = asApcArray(ad);
  const auto n = a->size();
  for (ssize_t i = 0; i < n; i++) {
    if (a->getIndex(i) != i) return false;
  }
  return true;
}
    
    ALWAYS_INLINE
void HashTableCommon::InitHash(int32_t* hash, uint32_t scale) {
#if defined(__x86_64__)
  static_assert(Empty == -1, 'The following fills with all 1's.');
  assertx(HashSize(scale) == scale * 4);
    }
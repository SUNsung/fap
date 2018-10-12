
        
        struct DefaultCache {
  llvm::sys::Mutex Mux;
  CacheImpl::CallBacks CBs;
  llvm::DenseMap<DefaultCacheKey, void *> Entries;
    }
    
    
    {  cache_t *cache_out = nullptr;
  cache_create(NameBuf.c_str(), &Attrs, &cache_out);
  assert(cache_out);
  return cache_out;
}
    
      assert(capacity % 16 == 0 && 'not allocating multiple of alignment');
    
    bool LangOptions::isCustomConditionalCompilationFlagSet(StringRef Name) const {
  return std::find(CustomConditionalCompilationFlags.begin(),
                   CustomConditionalCompilationFlags.end(), Name)
      != CustomConditionalCompilationFlags.end();
}
    
      while (!RawText.empty()) {
    size_t Pos = RawText.find_first_of('\n\r');
    if (Pos == StringRef::npos)
      Pos = RawText.size();
    }
    
    // Include the correct TaskQueue implementation.
#if LLVM_ON_UNIX && !defined(__CYGWIN__) && !defined(__HAIKU__)
#include 'Unix/TaskQueue.inc'
#else
#include 'Default/TaskQueue.inc'
#endif
    
      using SourceManagerRef = llvm::IntrusiveRefCntPtr<const clang::SourceManager>;
  auto iter = std::lower_bound(sourceManagersWithDiagnostics.begin(),
                               sourceManagersWithDiagnostics.end(),
                               &clangSrcMgr,
                               [](const SourceManagerRef &inArray,
                                  const clang::SourceManager *toInsert) {
    return std::less<const clang::SourceManager *>()(inArray.get(), toInsert);
  });
  if (iter == sourceManagersWithDiagnostics.end() ||
      iter->get() != &clangSrcMgr) {
    sourceManagersWithDiagnostics.insert(iter, &clangSrcMgr);
  }
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #include <vector>
    
    
    { protected:
  TransformationParameter transform_param_;
  shared_ptr<DataTransformer<Dtype> > data_transformer_;
  bool output_labels_;
};
    
      Blob<Dtype> mean_, variance_, temp_, x_norm_;
  bool use_global_stats_;
  Dtype moving_average_fraction_;
  int channels_;
  Dtype eps_;
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/sigmoid_layer.hpp'
    
    
    {}  // namespace tesseract.
    
    // Constructor.
// Tests the architecture in a system-dependent way to detect AVX, SSE and
// any other available SIMD equipment.
// __GNUC__ is also defined by compilers that include GNU extensions such as
// clang.
SIMDDetect::SIMDDetect() {
#if defined(X86_BUILD)
#if defined(__GNUC__)
  unsigned int eax, ebx, ecx, edx;
  if (__get_cpuid(1, &eax, &ebx, &ecx, &edx) != 0) {
    // Note that these tests all use hex because the older compilers don't have
    // the newer flags.
    sse_available_ = (ecx & 0x00080000) != 0;
    avx_available_ = (ecx & 0x10000000) != 0;
    if (avx_available_) {
      // There is supposed to be a __get_cpuid_count function, but this is all
      // there is in my cpuid.h. It is a macro for an asm statement and cannot
      // be used inside an if.
      __cpuid_count(7, 0, eax, ebx, ecx, edx);
      avx2_available_ = (ebx & 0x00000020) != 0;
      avx512F_available_ = (ebx & 0x00010000) != 0;
      avx512BW_available_ = (ebx & 0x40000000) != 0;
    }
  }
#elif defined(_WIN32)
  int cpuInfo[4];
  __cpuid(cpuInfo, 0);
  if (cpuInfo[0] >= 1) {
    __cpuid(cpuInfo, 1);
    sse_available_ = (cpuInfo[2] & 0x00080000) != 0;
    avx_available_ = (cpuInfo[2] & 0x10000000) != 0;
  }
#else
#error 'I don't know how to test for SIMD with this compiler'
#endif
#endif  // X86_BUILD
}

    
      enum IndentType {
    NO_INDENT,
    LEFT_INDENT,
    RIGHT_INDENT,
    BOTH_INDENT,
    INDENT_TYPE_COUNT
  };
    
    namespace tesseract {
    }
    
    namespace tesseract {
void Tesseract::tess_segment_pass_n(int pass_n, WERD_RES *word) {
  int saved_enable_assoc = 0;
  int saved_chop_enable = 0;
    }
    }
    
    
    {   }
   //
   // now recursively add more states, this will terminate when we get to a
   // matching ')' :
   //
   parse_all();
   //
   // Unwind alternatives:
   //
   if(0 == unwind_alts(last_paren_start))
   {
      // Rewind to start of (? sequence:
      --m_position;
      while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
      fail(regex_constants::error_perl_extension, m_position - m_base, 'Invalid alternation operators within (?...) block.');
      return false;
   }
   //
   // we either have a ')' or we have run out of characters prematurely:
   //
   if(m_position == m_end)
   {
      // Rewind to start of (? sequence:
      --m_position;
      while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
      this->fail(regex_constants::error_paren, ::boost::BOOST_REGEX_DETAIL_NS::distance(m_base, m_end));
      return false;
   }
   BOOST_ASSERT(this->m_traits.syntax_type(*m_position) == regex_constants::syntax_close_mark);
   ++m_position;
   //
   // restore the flags:
   //
   if(restore_flags)
   {
      // append a case change state if we need it:
      if(m_has_case_change)
      {
         static_cast<re_case*>(
            this->append_state(syntax_element_toggle_case, sizeof(re_case))
            )->icase = old_flags & regbase::icase;
      }
      this->flags(old_flags);
   }
   //
   // set up the jump pointer if we have one:
   //
   if(jump_offset)
   {
      this->m_pdata->m_data.align();
      re_jump* jmp = static_cast<re_jump*>(this->getaddress(jump_offset));
      jmp->alt.i = this->m_pdata->m_data.size() - this->getoffset(jmp);
      if((this->m_last_state == jmp) && (markid != -2))
      {
         // Oops... we didn't have anything inside the assertion.
         // Note we don't get here for negated forward lookahead as (?!)
         // does have some uses.
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base, 'Invalid or empty zero width assertion.');
         return false;
      }
   }
   //
   // verify that if this is conditional expression, that we do have
   // an alternative, if not add one:
   //
   if(markid == -4)
   {
      re_syntax_base* b = this->getaddress(expected_alt_point);
      // Make sure we have exactly one alternative following this state:
      if(b->type != syntax_element_alt)
      {
         re_alt* alt = static_cast<re_alt*>(this->insert_state(expected_alt_point, syntax_element_alt, sizeof(re_alt)));
         alt->alt.i = this->m_pdata->m_data.size() - this->getoffset(alt);
      }
      else if(this->getaddress(static_cast<re_alt*>(b)->alt.i, b)->type == syntax_element_alt)
      {
         // Can't have seen more than one alternative:
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_bad_pattern, m_position - m_base, 'More than one alternation operator | was encountered inside a conditional expression.');
         return false;
      }
      else
      {
         // We must *not* have seen an alternative inside a (DEFINE) block:
         b = this->getaddress(b->next.i, b);
         if((b->type == syntax_element_assert_backref) && (static_cast<re_brace*>(b)->index == 9999))
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_bad_pattern, m_position - m_base, 'Alternation operators are not allowed inside a DEFINE block.');
            return false;
         }
      }
      // check for invalid repetition of next state:
      b = this->getaddress(expected_alt_point);
      b = this->getaddress(static_cast<re_alt*>(b)->next.i, b);
      if((b->type != syntax_element_assert_backref)
         && (b->type != syntax_element_startmark))
      {
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_badrepeat, m_position - m_base, 'A repetition operator cannot be applied to a zero-width assertion.');
         return false;
      }
   }
   //
   // append closing parenthesis state:
   //
   pb = static_cast<re_brace*>(this->append_state(syntax_element_endmark, sizeof(re_brace)));
   pb->index = markid;
   pb->icase = this->flags() & regbase::icase;
   this->m_paren_start = last_paren_start;
   //
   // restore the alternate insertion point:
   //
   this->m_alt_insert_point = last_alt_point;
   //
   // and the case change data:
   //
   m_has_case_change = old_case_change;
   //
   // And the mark_reset data:
   //
   if(m_max_mark > m_mark_count)
   {
      m_mark_count = m_max_mark;
   }
   m_mark_reset = mark_reset;
   m_max_mark = max_mark;
    
    namespace deprecated{
//
// class char_regex_traits_i
// provides case insensitive traits classes (deprecated):
template <class charT>
class char_regex_traits_i : public regex_traits<charT> {};
    }
    
       allocator_type get_allocator() const
   {
#ifndef BOOST_NO_STD_ALLOCATOR
      return m_subs.get_allocator();
#else
     return allocator_type();
#endif
   }
   void swap(match_results& that)
   {
      std::swap(m_subs, that.m_subs);
      std::swap(m_named_subs, that.m_named_subs);
      std::swap(m_last_closed_paren, that.m_last_closed_paren);
      if(m_is_singular)
      {
         if(!that.m_is_singular)
         {
            m_base = that.m_base;
            m_null = that.m_null;
         }
      }
      else if(that.m_is_singular)
      {
         that.m_base = m_base;
         that.m_null = m_null;
      }
      else
      {
         std::swap(m_base, that.m_base);
         std::swap(m_null, that.m_null);
      }
      std::swap(m_is_singular, that.m_is_singular);
   }
   bool operator==(const match_results& that)const
   {
      if(m_is_singular)
      {
         return that.m_is_singular;
      }
      else if(that.m_is_singular)
      {
         return false;
      }
      return (m_subs == that.m_subs) && (m_base == that.m_base) && (m_last_closed_paren == that.m_last_closed_paren);
   }
   bool operator!=(const match_results& that)const
   { return !(*this == that); }
    
    
    {
    {#if defined(BOOST_REGEX_NON_RECURSIVE) && !defined(BOOST_NO_EXCEPTIONS)
   }
   catch(...)
   {
      // unwind all pushed states, apart from anything else this
      // ensures that all the states are correctly destructed
      // not just the memory freed.
      while(unwind(true)){}
      throw;
   }
#endif
}
    
    template <class BidiIterator>
struct saved_matched_paren : public saved_state
{
   int index;
   sub_match<BidiIterator> sub;
   saved_matched_paren(int i, const sub_match<BidiIterator>& s) : saved_state(1), index(i), sub(s){};
};
    
    class BOOST_REGEX_DECL abstract_protected_call
{
public:
   bool BOOST_REGEX_CALL execute()const;
   // this stops gcc-4 from complaining:
   virtual ~abstract_protected_call(){}
private:
   virtual bool call()const = 0;
};
    
    
    {} // namespace boost
    
    
    
    
    {} // namespace boost
    
    template <class BaseT>
struct regex_traits_wrapper 
   : public ::boost::BOOST_REGEX_DETAIL_NS::compute_wrapper_base<
               BaseT, 
               ::boost::BOOST_REGEX_DETAIL_NS::has_boost_extensions_tag<BaseT>::value
            >::type
{
   regex_traits_wrapper(){}
private:
   regex_traits_wrapper(const regex_traits_wrapper&);
   regex_traits_wrapper& operator=(const regex_traits_wrapper&);
};
    
    //---- Define assertion handler. Defaults to calling assert().
//#define IM_ASSERT(_EXPR)  MyAssert(_EXPR)
//#define IM_ASSERT(_EXPR)  ((void)(_EXPR))     // Disable asserts
    
            if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
        // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        glfwPollEvents();
    }
    
    
    {        SIZE_T rtvDescriptorSize = g_pd3dDevice->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
        D3D12_CPU_DESCRIPTOR_HANDLE rtvHandle = g_pd3dRtvDescHeap->GetCPUDescriptorHandleForHeapStart();
        for (UINT i = 0; i < NUM_BACK_BUFFERS; i++) 
        {
            g_mainRenderTargetDescriptor[i] = rtvHandle;
            rtvHandle.ptr += rtvDescriptorSize;
        }
    }
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('Dear ImGui DirectX9 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
        // Copy and convert all vertices into a single contiguous buffer
    void* vtx_resource, *idx_resource;
    D3D12_RANGE range;
    memset(&range, 0, sizeof(D3D12_RANGE));
    if (g_pVB->Map(0, &range, &vtx_resource) != S_OK)
        return;
    if (g_pIB->Map(0, &range, &idx_resource) != S_OK)
        return;
    ImDrawVert* vtx_dst = (ImDrawVert*)vtx_resource;
    ImDrawIdx* idx_dst = (ImDrawIdx*)idx_resource;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        memcpy(vtx_dst, cmd_list->VtxBuffer.Data, cmd_list->VtxBuffer.Size * sizeof(ImDrawVert));
        memcpy(idx_dst, cmd_list->IdxBuffer.Data, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
        vtx_dst += cmd_list->VtxBuffer.Size;
        idx_dst += cmd_list->IdxBuffer.Size;
    }
    g_pVB->Unmap(0, &range);
    g_pIB->Unmap(0, &range);
    
    // Set default OpenGL loader to be gl3w
#if !defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_CUSTOM)
#define IMGUI_IMPL_OPENGL_LOADER_GL3W
#endif
    
    int ImGui_ImplVulkanH_GetMinImageCountFromPresentMode(VkPresentModeKHR present_mode)
{
    if (present_mode == VK_PRESENT_MODE_MAILBOX_KHR)
        return 3;
    if (present_mode == VK_PRESENT_MODE_FIFO_KHR || present_mode == VK_PRESENT_MODE_FIFO_RELAXED_KHR)
        return 2;
    if (present_mode == VK_PRESENT_MODE_IMMEDIATE_KHR)
        return 1;
    IM_ASSERT(0);
    return 1;
}
    
    void ImGui_ImplFreeGLUT_ReshapeFunc(int w, int h)
{
    ImGuiIO& io = ImGui::GetIO();
    io.DisplaySize = ImVec2((float)w, (float)h);
}
    
    namespace aria2 {
    }
    
    void DHTUnknownMessage::doReceivedAction() {}
    
    void DNSCache::put(const std::string& hostname, const std::string& ipaddr,
                   uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.lower_bound(target);
  if (i != entries_.end() && *(*i) == *target) {
    (*i)->add(ipaddr);
  }
  else {
    target->add(ipaddr);
    entries_.insert(i, target);
  }
}
    
      const std::string& find(const std::string& hostname, uint16_t port) const;
    
     protected:
  explicit Benchmark(const char* name);
  Benchmark(Benchmark const&);
  void SetName(const char* name);
    
    DEFINE_bool(benchmark_report_aggregates_only, false,
            'Report the result of each benchmark repetitions. When 'true' is '
            'specified only the mean, standard deviation, and other statistics '
            'are reported for repeated benchmarks.');
    
    bool FindBenchmarksInternal(const std::string& re,
                            std::vector<Benchmark::Instance>* benchmarks,
                            std::ostream* Err);
    
    namespace benchmark {
    }
    
    inline AbortHandlerT*& GetAbortHandler() {
  static AbortHandlerT* handler = &std::abort;
  return handler;
}
    
    #include <cstdarg>
#include <iostream>
#include <string>
    
    // Reads and returns a 32-bit integer stored in the environment
// variable corresponding to the given flag; if it isn't set or
// doesn't represent a valid 32-bit integer, returns default_value.
int32_t Int32FromEnv(const char* flag, int32_t default_value) {
  const std::string env_var = FlagToEnvVar(flag);
  const char* const string_value = getenv(env_var.c_str());
  if (string_value == nullptr) {
    // The environment variable is not set.
    return default_value;
  }
    }
    
    namespace benchmark {
// Parses 'str' for a 32-bit signed integer.  If successful, writes the result
// to *value and returns true; otherwise leaves *value unchanged and returns
// false.
bool ParseInt32(const std::string& src_text, const char* str, int32_t* value);
    }
    
    // Function to return an string for the calculated complexity
std::string GetBigOString(BigO complexity) {
  switch (complexity) {
    case oN:
      return 'N';
    case oNSquared:
      return 'N^2';
    case oNCubed:
      return 'N^3';
    case oLogN:
      return 'lgN';
    case oNLogN:
      return 'NlgN';
    case o1:
      return '(1)';
    default:
      return 'f(N)';
  }
}
    
      // Called by each thread
  bool wait() EXCLUDES(lock_) {
    bool last_thread = false;
    {
      MutexLock ml(lock_);
      last_thread = createBarrier(ml);
    }
    if (last_thread) phase_condition_.notify_all();
    return last_thread;
  }
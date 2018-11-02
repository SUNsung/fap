
        
        string DataTypeToPython(DataType dtype, const string& dtype_module);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // We define the PY_ARRAY_UNIQUE_SYMBOL in this .cc file and provide an
// ImportNumpy function to populate it.
#define TF_IMPORT_NUMPY
    
      // Returns the Python exception type corresponding to `code`. Init() must be
  // called before using this function. `code` should not be TF_OK.
  static PyObject* Lookup(TF_Code code);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #include 'tensorflow/python/lib/core/safe_ptr.h'
    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/core/lib/core/stringpiece.h'
#include 'tensorflow/core/platform/macros.h'
#include 'tensorflow/core/platform/types.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/stream_executor/cuda/cuda_gpu_executor.h'
#include 'tensorflow/stream_executor/cuda/cuda_stream.h'
#include 'tensorflow/stream_executor/lib/statusor.h'
    
    
    {        // these are measured in elements
        size_t left, right, top, bottom;
    };
    
    
    {
    {        vst1q_s32(_norm + j + 0, norml);
        vst1q_s32(_norm + j + 4, normh);
    }
    for (; j < colscn; j++)
        _norm[j] = s32(_dx[j])*_dx[j] + s32(_dy[j])*_dy[j];
}
    
    #define COMBINE64(sgn,n) void combine##n(const Size2D &_size                                                \
                                               FILL_LINES##n(FARG, sgn##64),                                \
                                               sgn##64 * dstBase, ptrdiff_t dstStride)                      \
{                                                                                                           \
    internal::assertSupportedConfiguration();                                                               \
    Size2D size(_size);                                                                                     \
    if (CONTSRC##n                                                                                          \
        dstStride == (ptrdiff_t)(size.width))                                                               \
    {                                                                                                       \
        size.width *= size.height;                                                                          \
        size.height = 1;                                                                                    \
    }                                                                                                       \
    typedef internal::VecTraits<sgn##64, n>::vec64 vec64;                                                   \
                                                                                                            \
    for (size_t i = 0u; i < size.height; ++i)                                                               \
    {                                                                                                       \
        FILL_LINES##n(VROW, sgn##64)                                                                        \
        sgn##64 * dst = internal::getRowPtr(dstBase, dstStride, i);                                         \
        size_t sj = 0u, dj = 0u;                                                                            \
                                                                                                            \
        for (; sj < size.width; ++sj, dj += n)                                                              \
        {                                                                                                   \
            vec64 v_dst;                                                                                    \
            FILL_LINES##n(VLD1, sgn##64)                                                                    \
            vst##n##_##sgn##64(dst + dj, v_dst);                                                            \
            /*FILL_LINES##n(SLD, sgn##64)*/                                                                 \
        }                                                                                                   \
    }                                                                                                       \
}
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0, const typename internal::VecTraits<T>::vec64 & v_src1,
              typename internal::VecTraits<T>::unsign::vec64 & v_dst) const
    {
        v_dst = internal::vcgt(v_src0, v_src1);
    }
    
    
    {
    {         vst1_s16(_dst + i + 4, vline_s16);
     }
})
#endif
    
    
    {} //namespace
#endif
    
        ptrdiff_t idx_l1 = internal::borderInterpolate(-1, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    ptrdiff_t idx_l2 = internal::borderInterpolate(-2, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    ptrdiff_t idx_r1 = internal::borderInterpolate(size.width + 0, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    ptrdiff_t idx_r2 = internal::borderInterpolate(size.width + 1, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    
    
    {
    {  uint64_t nElemX = nElemFromDim(X);
  uint64_t nElemW = nElemFromDim(W);
  uint64_t nElemB = nElemFromDim(b);
  c.flops = 2 * K * M * N + M * N;
  c.bytes_read = (nElemX + nElemW + nElemB) * sizeof(X.data_type());
  c.bytes_written = M * N * sizeof(X.data_type());
  c.params_bytes = (K * N + N) * sizeof(X.data_type());
  return c;
}
} // namespace caffe2

    
    REGISTER_CPU_OPERATOR(
    MergeSingleListFeatureTensorsGradient,
    MergeSingleListOrMapFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleListFeatureTensorsGradient)
    .SetDoc(
        'Explode multi-feature tensors with list features into '
        'single-feature tensors.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 2 == 1; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_presence', '.presence')
    .Input(2, 'out_values_values', '.values.values_grad')
    .Output(0, 'out1_values', '.values_grad');
REGISTER_GRADIENT(
    MergeSingleListFeatureTensors,
    GetMergeSingleListFeatureTensorsGradient);
    
    namespace caffe2 {
    }
    
    Github Links:
- https://github.com/caffe2/caffe2/blob/master/caffe2/operators/given_tensor_fill_op.h
- https://github.com/caffe2/caffe2/blob/master/caffe2/operators/given_tensor_fill_op.cc
    
    
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
    
    #if defined(__SGI_STL_PORT) && defined(__STL_DEBUG)
template<>
struct regex_iterator_traits<std::string::iterator> : pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<std::string::const_iterator> : const_pointer_iterator_traits<char>{};
#ifndef BOOST_NO_STD_WSTRING
template<>
struct regex_iterator_traits<std::wstring::iterator> : pointer_iterator_traits<wchar_t>{};
template<>
struct regex_iterator_traits<std::wstring::const_iterator> : const_pointer_iterator_traits<wchar_t>{};
#endif // BOOST_NO_WSTRING
#endif // stport
    
    namespace BOOST_REGEX_DETAIL_NS{
    }
    
    template <class T>
class concrete_protected_call
   : public abstract_protected_call
{
public:
   typedef bool (T::*proc_type)();
   concrete_protected_call(T* o, proc_type p)
      : obj(o), proc(p) {}
private:
   virtual bool call()const;
   T* obj;
   proc_type proc;
};
    
          //
      // options specific to basic group:
      //
      no_char_classes = 1 << 8,                   // [[:CLASS:]] not allowed
      no_intervals = 1 << 9,                      // {x,y} not allowed
      bk_plus_qm = 1 << 10,                       // uses \+ and \?
      bk_vbar = 1 << 11,                          // use \| for alternatives
      emacs_ex = 1 << 12,                         // enables emacs extensions
    
    #if !defined(BOOST_NO_WREGEX) && defined(BOOST_REGEX_HAS_OTHER_WCHAR_T)
#define BOOST_REGEX_CHAR_T unsigned short
#ifdef BOOST_REGEX_US_INSTANTIATE
#  define BOOST_REGEX_INSTANTIATE
#endif
#include <boost/regex/v4/instances.hpp>
#undef BOOST_REGEX_CHAR_T
#ifdef BOOST_REGEX_INSTANTIATE
#  undef BOOST_REGEX_INSTANTIATE
#endif
#endif
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    #endif
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_grep.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides regex_grep implementation.
  */
    
    //---- Use 32-bit vertex indices (default is 16-bit) to allow meshes with more than 64K vertices. Render function needs to support it.
//#define ImDrawIdx unsigned int
    
    
    {        ImGui::Render();
    }
    
        // Setup window
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_Window* window = SDL_CreateWindow('Dear ImGui SDL2+OpenGL example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_SetSwapInterval(1); // Enable vsync
    
    
    {
    {
    {                // Bind texture, Draw
                ID3D10ShaderResourceView* texture_srv = (ID3D10ShaderResourceView*)pcmd->TextureId;
                ctx->PSSetShaderResources(0, 1, &texture_srv);
                ctx->DrawIndexed(pcmd->ElemCount, idx_offset, vtx_offset);
            }
            idx_offset += pcmd->ElemCount;
        }
        vtx_offset += cmd_list->VtxBuffer.Size;
    }
    
        // Upload texture to graphics system
    {
        D3D11_TEXTURE2D_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.Width = width;
        desc.Height = height;
        desc.MipLevels = 1;
        desc.ArraySize = 1;
        desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        desc.SampleDesc.Count = 1;
        desc.Usage = D3D11_USAGE_DEFAULT;
        desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        desc.CPUAccessFlags = 0;
    }
    
        virtual ~CompactionProxy() = default;
    virtual int level(size_t /*compaction_input_level*/ = 0) const {
      return compaction_->level();
    }
    virtual bool KeyNotExistsBeyondOutputLevel(
        const Slice& user_key, std::vector<size_t>* level_ptrs) const {
      return compaction_->KeyNotExistsBeyondOutputLevel(user_key, level_ptrs);
    }
    virtual bool bottommost_level() const {
      return compaction_->bottommost_level();
    }
    virtual int number_levels() const { return compaction_->number_levels(); }
    virtual Slice GetLargestUserKey() const {
      return compaction_->GetLargestUserKey();
    }
    virtual bool allow_ingest_behind() const {
      return compaction_->immutable_cf_options()->allow_ingest_behind;
    }
    virtual bool preserve_deletes() const {
      return compaction_->immutable_cf_options()->preserve_deletes;
    }
    
    
    {}  // namespace rocksdb
    
    // Finally, the hdfs environment
    
      struct stat buf;
  int result = fstat(fd, &buf);
  assert(result != -1);
  if (result == -1) {
    return 0;
  }
    
      virtual uint64_t NowMicros() override { return 0; }
    
    
    {    static BOOST_FORCEINLINE bool is_lock_free(storage_type const volatile&) BOOST_NOEXCEPT
    {
        return true;
    }
};
    
        static BOOST_FORCEINLINE void store(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        base_type::fence_before_store(order);
        BOOST_ATOMIC_DETAIL_ARM_STORE32(&storage, v);
        base_type::fence_after_store(order);
    }
    
    #ifdef BOOST_HAS_PRAGMA_ONCE
#pragma once
#endif
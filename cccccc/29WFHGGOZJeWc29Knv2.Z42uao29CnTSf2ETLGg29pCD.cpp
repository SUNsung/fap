
        
            void mul(const Size2D &size,
             const u8 * src0Base, ptrdiff_t src0Stride,
             const s16 * src1Base, ptrdiff_t src1Stride,
             s16 * dstBase, ptrdiff_t dstStride,
             f32 scale,
             CONVERT_POLICY cpolicy);
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vabd(v_src0, v_src1);
    }
    
        void operator() (const typename VecTraits<T>::vec64 & v_src0,
                     const typename VecTraits<T>::vec64 & v_src1,
                     typename VecTraits<T>::vec64 & v_dst) const
    {
        typename VecTraits<wtype>::vec128 vr;
        wideAdd(vmovl(v_src0), vmovl(v_src1), vr);
    }
    
    void bitwiseAnd(const Size2D &size,
                const u8 *src0Base, ptrdiff_t src0Stride,
                const u8 *src1Base, ptrdiff_t src1Stride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseAnd());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    
    {
    {                if (y < tg22x)
                {
                    if (m > _mag[j-1] && m >= _mag[j+1]) goto __push;
                }
                else
                {
                    s32 tg67x = tg22x + (x << (CANNY_SHIFT+1));
                    if (y > tg67x)
                    {
                        if (m > _mag[j+magstep2] && m >= _mag[j+magstep1]) goto __push;
                    }
                    else
                    {
                        s32 s = (xs ^ ys) < 0 ? -1 : 1;
                        if(m > _mag[j+magstep2-s] && m > _mag[j+magstep1+s]) goto __push;
                    }
                }
            }
            prev_flag = 0;
            _map[j] = u8(1);
            continue;
            __push:
            if (!prev_flag && m > high && _map[j-mapstep] != 2)
            {
                CANNY_PUSH(_map + j);
                prev_flag = 1;
            }
            else
                _map[j] = 0;
        }
    
                uint16x8_t el8 = vaddq_u16(el8shr12, el8shr03);
            uint16x4_t el4h = vadd_u16(vget_low_u16(el8), vget_high_u16(el8));
    
    
    {}  // namespace tesseract.
    
    #undef X86_BUILD
#if defined(__x86_64__) || defined(__i386__) || defined(_WIN32)
#if !defined(ANDROID_BUILD)
#define X86_BUILD 1
#endif  // !ANDROID_BUILD
#endif  // x86 target
    
    // Helper method to convert an orientation index to its value in degrees.
// The value represents the amount of clockwise rotation in degrees that must be
// applied for the text to be upright (readable).
TESS_API int OrientationIdToValue(const int& id);
    
    /** Return that there is no such object at a given level. */
bool PageIterator::Empty(PageIteratorLevel level) const {
  if (it_->block() == nullptr) return true;  // Already at the end!
  if (it_->word() == nullptr && level != RIL_BLOCK) return true;  // image block
  if (level == RIL_SYMBOL && blob_index_ >= word_length_)
    return true;  // Zero length word, or already at the end of it.
  return false;
}
    
    #ifndef TESSERACT_CCMAIN_PARAGRAPHS_H_
#define TESSERACT_CCMAIN_PARAGRAPHS_H_
    
    template <typename T>
struct EnableIf<false, T> {
};
    
    bool GodotCollisionDispatcher::needsResponse(const btCollisionObject *body0, const btCollisionObject *body1) {
	if (body0->getUserIndex() == CASTED_TYPE_AREA || body1->getUserIndex() == CASTED_TYPE_AREA) {
		// Avoide area narrow phase
		return false;
	}
	return btCollisionDispatcher::needsResponse(body0, body1);
}

    
    	virtual void processCollision(const btCollisionObjectWrapper *body0Wrap, const btCollisionObjectWrapper *body1Wrap, const btDispatcherInfo &dispatchInfo, btManifoldResult *resultOut);
	virtual btScalar calculateTimeOfImpact(btCollisionObject *body0, btCollisionObject *body1, const btDispatcherInfo &dispatchInfo, btManifoldResult *resultOut);
    
    #include 'joint_bullet.h'
    
    #ifndef PCK_PACKER_H
#define PCK_PACKER_H
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         basic_regex_parser.cpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Declares template class basic_regex_parser.
  */
    
    namespace BOOST_REGEX_DETAIL_NS{
template BOOST_REGEX_DECL void perl_matcher<std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator, match_results< std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator >::allocator_type, boost::regex_traits<BOOST_REGEX_CHAR_T > >::construct_init(
      const basic_regex<BOOST_REGEX_CHAR_T>& e, match_flag_type f);
template BOOST_REGEX_DECL bool perl_matcher<std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator, match_results< std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator >::allocator_type, boost::regex_traits<BOOST_REGEX_CHAR_T > >::match();
template BOOST_REGEX_DECL bool perl_matcher<std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator, match_results< std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator >::allocator_type, boost::regex_traits<BOOST_REGEX_CHAR_T > >::find();
} // namespace
#endif
    
          typedef typename BOOST_REGEX_DETAIL_NS::compute_functor_type<Functor, match_results<BidiIterator, Allocator>, BOOST_REGEX_DETAIL_NS::string_out_iterator<std::basic_string<char_type> > >::type F;
      F func(fmt);
    
    extern mem_block_cache block_cache;
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::unwind_long_set_repeat(bool r)
{
   typedef typename traits::char_class_type m_type;
   saved_single_repeat<BidiIterator>* pmp = static_cast<saved_single_repeat<BidiIterator>*>(m_backup_state);
    }
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    template <class BidiIterator, class Allocator, class charT, class traits>
bool regex_search(BidiIterator first, BidiIterator last, 
                  match_results<BidiIterator, Allocator>& m, 
                  const basic_regex<charT, traits>& e, 
                  match_flag_type flags,
                  BidiIterator base)
{
   if(e.flags() & regex_constants::failbit)
      return false;
    }
    
    static stb_uchar *stb__out;
static FILE      *stb__outfile;
static stb_uint   stb__outbytes;
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextMultiline(label, (char*)str->c_str(), str->capacity() + 1, size, flags, InputTextCallback, &cb_user_data);
}

    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
        if (g_pd3dDevice->CreateGraphicsPipelineState(&psoDesc, IID_PPV_ARGS(&g_pPipelineState)) != S_OK)
        return false;
    
    namespace guetzli {
    }
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    #endif  // GUETZLI_FDCT_H_

    
    // Library to decode jpeg coefficients into an RGB image.
    
    BENCHMARK_RELATIVE(format_short_string_safe, iters) {
  BenchmarkSuspender suspender;
  auto const& shortString = getShortString();
  while (iters--) {
    fbstring out;
    suspender.dismissing([&] { format(&out, '{}', shortString); });
  }
}
    
    #include <folly/Benchmark.h>
    
    
    {  std::string arguments;
  ASSERT_TRUE(getTracepointArguments(
      'folly', 'test_static_tracepoint_many_arg_types', 0, arguments));
  std::array<int, 8> expected{{
      sizeof(uint32_t),
      sizeof(uint32_t),
      sizeof(bool),
      sizeof(char),
      sizeof(short),
      sizeof(long),
      sizeof(float),
      sizeof(double),
  }};
  checkTracepointArguments(arguments, expected);
}
    
    // Check a Linux kernel-style return code (>= 0 on success, negative error
// number on error), throw on error.
template <class... Args>
void checkKernelError(ssize_t ret, Args&&... args) {
  if (UNLIKELY(ret < 0)) {
    throwSystemErrorExplicit(int(-ret), std::forward<Args>(args)...);
  }
}
    
    
    {} // namespace folly

    
    /**
 * Reads sizeof(T) bytes, and returns false if not enough bytes are available.
 * Returns true if the first n bytes are equal to prefix when interpreted as
 * a little endian T.
 */
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, bool>::type
dataStartsWithLE(const IOBuf* data, T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  T value;
  Cursor cursor{data};
  if (!cursor.tryReadLE(value)) {
    return false;
  }
  const T mask = n == sizeof(T) ? T(-1) : (T(1) << (8 * n)) - 1;
  return prefix == (value & mask);
}
    
      explicit Options(
      Format format_ = Format::ZLIB,
      int windowSize_ = 15,
      int memLevel_ = 8,
      int strategy_ = Z_DEFAULT_STRATEGY)
      : format(format_),
        windowSize(windowSize_),
        memLevel(memLevel_),
        strategy(strategy_) {}

        
        
    {}  // namespace atom

    
      uv_loop_t* loop_;
    
    
    {  // Otherwise do the restart after all windows have been closed.
  WindowList::AddObserver(this);
  WindowList::CloseAllWindows();
}
    
    template <>
struct Converter<file_dialog::Filter> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     file_dialog::Filter* out) {
    mate::Dictionary dict;
    if (!ConvertFromV8(isolate, val, &dict))
      return false;
    if (!dict.Get('name', &(out->first)))
      return false;
    if (!dict.Get('extensions', &(out->second)))
      return false;
    return true;
  }
};
    
    #include 'atom/common/native_mate_converters/accelerator_converter.h'
#include 'atom/common/native_mate_converters/callback.h'
#include 'base/stl_util.h'
#include 'native_mate/dictionary.h'
    
    class InAppPurchase : public mate::EventEmitter<InAppPurchase>,
                      public in_app_purchase::TransactionObserver {
 public:
  static mate::Handle<InAppPurchase> Create(v8::Isolate* isolate);
    }
    
    void Menu::OnMenuWillShow() {
  Emit('menu-will-show');
}
    
    class Net : public mate::EventEmitter<Net> {
 public:
  static v8::Local<v8::Value> Create(v8::Isolate* isolate);
    }
    
    #include 'atom/browser/browser.h'
#include 'atom/common/native_mate_converters/callback.h'
#include 'base/power_monitor/power_monitor.h'
#include 'base/power_monitor/power_monitor_device_source.h'
#include 'native_mate/dictionary.h'
    
      int AddEntry(const base::DictionaryValue& entry);
  void RemoveEntry(int id);
    
      /// Retrieve the array of replacement types, which line up with the
  /// generic parameters.
  ///
  /// Note that the types may be null, for cases where the generic parameter
  /// is concrete but hasn't been queried yet.
  ArrayRef<Type> getReplacementTypes() const {
    return llvm::makeArrayRef(getTrailingObjects<Type>(),
                              getNumReplacementTypes());
  }
    
    llvm::APInt ClusteredBitVector::asAPInt() const {
  if (isInlineAndAllClear()) {
    return llvm::APInt(size(), 0);
  } else {
    // This assumes that the chunk size is the same as APInt's.
    // TODO: it'd be nice to be able to do this without copying.
    return llvm::APInt(size(), getChunks());
  }
}
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
    
    {    scratchStr.push_back(clang::toLowercase(string[i]));
  }
    
    ClangDiagnosticConsumer::ClangDiagnosticConsumer(
    ClangImporter::Implementation &impl,
    clang::DiagnosticOptions &clangDiagOptions,
    bool dumpToStderr)
  : TextDiagnosticPrinter(llvm::errs(), &clangDiagOptions),
    ImporterImpl(impl), DumpToStderr(dumpToStderr) {}
    
      // Static members
  IAMResult(DeclName declName, EffectiveClangContext dc)
      : name(declName), effectiveDC(dc) {}
    
    void absDiff(const Size2D &size,
             const u8 *src0Base, ptrdiff_t src0Stride,
             const u8 *src1Base, ptrdiff_t src1Stride,
             u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<u8>());
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
    
        void operator() (const uint8x16_t & v_src0, const uint8x16_t & v_src1,
                     uint8x16_t & v_dst) const
    {
        v_dst = vorrq_u8(v_src0, v_src1);
    }
    
    bool isBlurU8Supported(const Size2D &size, s32 cn, BORDER_MODE border)
{
    return isSupportedConfiguration() &&
           cn > 0 && cn <= 4 &&
           size.width*cn >= 8 && size.height >= 2 &&
           (border == BORDER_MODE_CONSTANT ||
            border == BORDER_MODE_REFLECT101 ||
            border == BORDER_MODE_REFLECT ||
            border == BORDER_MODE_REPLICATE);
}
    
    template <bool L2gradient>
inline void NormCanny(const ptrdiff_t colscn, s16* _dx, s16* _dy, s32* _norm)
{
    ptrdiff_t j = 0;
    if (colscn >= 8)
    {
        int16x8_t vx = vld1q_s16(_dx);
        int16x8_t vy = vld1q_s16(_dy);
        for (; j <= colscn - 16; j+=8)
        {
            internal::prefetch(_dx);
            internal::prefetch(_dy);
    }
    }
    }
    
    
    {} // namespace CAROTENE_NS

    
    void lshift(const Size2D &size,
            const u8 * srcBase, ptrdiff_t srcStride,
            s16 * dstBase, ptrdiff_t dstStride,
            u32 shift)
{
    internal::assertSupportedConfiguration();
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && defined(__arm__)
CVTS_FUNC(u8, s16, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.u8 q3, d4                                       \n\t'
            'vmovl.u8 q4, d5                                       \n\t'
            'vmovl.u16 q5, d6                                      \n\t'
            'vmovl.u16 q6, d7                                      \n\t'
            'vmovl.u16 q7, d8                                      \n\t'
            'vmovl.u16 q8, d9                                      \n\t'
            'vcvt.f32.u32 q9, q5                                   \n\t'
            'vcvt.f32.u32 q10, q6                                  \n\t'
            'vcvt.f32.u32 q11, q7                                  \n\t'
            'vcvt.f32.u32 q12, q8                                  \n\t'
            'vmul.f32 q13, q9, q0                                  \n\t'
            'vmul.f32 q14, q10, q0                                 \n\t'
            'vmul.f32 q15, q11, q0                                 \n\t'
            'vmul.f32 q2, q12, q0                                  \n\t'
            'vadd.f32 q3, q13, q1                                  \n\t'
            'vadd.f32 q4, q14, q1                                  \n\t'
            'vadd.f32 q5, q15, q1                                  \n\t'
            'vadd.f32 q6, q2, q1                                   \n\t'
            'vcvt.s32.f32 q7, q3                                   \n\t'
            'vcvt.s32.f32 q8, q4                                   \n\t'
            'vcvt.s32.f32 q9, q5                                   \n\t'
            'vcvt.s32.f32 q10, q6                                  \n\t'
            'vqmovn.s32 d22, q7                                    \n\t'
            'vqmovn.s32 d23, q8                                    \n\t'
            'vqmovn.s32 d24, q9                                    \n\t'
            'vqmovn.s32 d25, q10                                   \n\t'
            'vst1.16 {d22-d23}, [%[dst1]]                          \n\t'
            'vst1.16 {d24-d25}, [%[dst2]]                          \n\t'
            : //no output
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 8),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28','d29','d30','d31'
        );
    }
})
#else
CVTS_FUNC(u8, s16, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        uint8x16_t vline = vld1q_u8(_src + i);
        uint16x8_t vline1_u16 = vmovl_u8(vget_low_u8 (vline));
        uint16x8_t vline2_u16 = vmovl_u8(vget_high_u8(vline));
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline1_u16));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline1_u16));
        uint32x4_t vline3_u32 = vmovl_u16(vget_low_u16 (vline2_u16));
        uint32x4_t vline4_u32 = vmovl_u16(vget_high_u16(vline2_u16));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        float32x4_t vline3_f32 = vcvtq_f32_u32(vline3_u32);
        float32x4_t vline4_f32 = vcvtq_f32_u32(vline4_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline3_f32 = vmulq_f32(vline3_f32, vscale);
        vline4_f32 = vmulq_f32(vline4_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline3_f32 = vaddq_f32(vline3_f32, vshift);
        vline4_f32 = vaddq_f32(vline4_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int32x4_t vline3_s32 = vcvtq_s32_f32(vline3_f32);
        int32x4_t vline4_s32 = vcvtq_s32_f32(vline4_f32);
        vst1q_s16(_dst + i + 0, vcombine_s16(vqmovn_s32(vline1_s32), vqmovn_s32(vline2_s32)));
        vst1q_s16(_dst + i + 8, vcombine_s16(vqmovn_s32(vline3_s32), vqmovn_s32(vline4_s32)));
    }
})
#endif
    
    
    {            vs1 = vqadd_s32(vs1, vnz1);
            vs2 = vqadd_s32(vs2, vnz2);
            vs3 = vqadd_s32(vs3, vnz3);
            vs4 = vqadd_s32(vs4, vnz4);
        }
    
    
    {            ws = vpadalq_u32(ws, vpaddlq_u16(vmull_u8(vs1, vs2)));
            i += 8;
        }
    
    
    {
    {
    {                    for( k = 0; k < N; k++ )
                    {
                        s32 x = ptr[pixel[k]];
                        if(x > vt)
                        {
                            if( ++count > K )
                            {
                                cornerpos[ncorners++] = j;
                                if(nonmax_suppression)
                                    curr[j] = cornerScore(ptr, pixel);
                                break;
                            }
                        }
                        else
                            count = 0;
                    }
                }
            }
        }
    
    // Computes one set of 4x8 products of inputs and weights, adding to result.
// Horizontally adds 4 adjacent results, making 8x32-bit results.
// rep_input is assumed to be an 8x replicated set of 4x8-bit signed integers.
// Note that wi must previously have been re-organized with blocks of 4x8
// weights in contiguous memory.
// ones is a register of 16x16-bit values all equal to 1.
// Note: wi is incremented by the amount of data read.
// weights and reps are scratch registers.
// This function must be inlined with references in order for the compiler to
// correctly use the registers declared in the caller.
inline void MultiplyGroup(const __m256i& rep_input, const __m256i& ones,
                          const int8_t*& wi, __m256i& weights, __m256i& reps,
                          __m256i& result) {
  // Load a 4x8 block of weights.
  weights = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(wi));
  wi += kNumInputsPerRegister;
  // Normalize the signs on rep_input, weights, so weights is always +ve.
  reps = _mm256_sign_epi8(rep_input, weights);
  weights = _mm256_sign_epi8(weights, weights);
  // Multiply 32x8-bit reps by 32x8-bit weights to make 16x16-bit results,
  // with adjacent pairs added.
  weights = _mm256_maddubs_epi16(weights, reps);
  // Multiply 16x16-bit result by 16x16-bit ones to make 8x32-bit results,
  // with  adjacent pairs added. What we really want is a horizontal add of
  // 16+16=32 bit result, but there is no such instruction, so multiply by
  // 16-bit ones instead. It is probably faster than all the sign-extending,
  // permuting and adding that would otherwise be required.
  weights = _mm256_madd_epi16(weights, ones);
  result = _mm256_add_epi32(result, weights);
}
    
    #include <cstdint>
#include <vector>
#include 'dotproductsse.h'
    
    #ifndef DOCQUAL_H
#define DOCQUAL_H
    
    
// Write all (changed_) parameters to a config file.
void ParamsEditor::WriteParams(char *filename,
                               bool changes_only) {
  FILE *fp;                      // input file
  char msg_str[255];
                                 // if file exists
  if ((fp = fopen (filename, 'rb')) != nullptr) {
    fclose(fp);
    sprintf (msg_str, 'Overwrite file ' '%s' '? (Y/N)', filename);
    int a = sv_window_->ShowYesNoDialog(msg_str);
    if (a == 'n') {
      return;
    }  // don't write
  }
    }
    
    template <class BidiIterator, class Allocator, class traits>
void perl_matcher<BidiIterator, Allocator, traits>::construct_init(const basic_regex<char_type, traits>& e, match_flag_type f)
{ 
   typedef typename regex_iterator_traits<BidiIterator>::iterator_category category;
   typedef typename basic_regex<char_type, traits>::flag_type expression_flag_type;
   
   if(e.empty())
   {
      // precondition failure: e is not a valid regex.
      std::invalid_argument ex('Invalid regular expression object');
      boost::throw_exception(ex);
   }
   pstate = 0;
   m_match_flags = f;
   estimate_max_state_count(static_cast<category*>(0));
   expression_flag_type re_f = re.flags();
   icase = re_f & regex_constants::icase;
   if(!(m_match_flags & (match_perl|match_posix)))
   {
      if((re_f & (regbase::main_option_type|regbase::no_perl_ex)) == 0)
         m_match_flags |= match_perl;
      else if((re_f & (regbase::main_option_type|regbase::emacs_ex)) == (regbase::basic_syntax_group|regbase::emacs_ex))
         m_match_flags |= match_perl;
      else if((re_f & (regbase::main_option_type|regbase::literal)) == (regbase::literal))
         m_match_flags |= match_perl;
      else
         m_match_flags |= match_posix;
   }
   if(m_match_flags & match_posix)
   {
      m_temp_match.reset(new match_results<BidiIterator, Allocator>());
      m_presult = m_temp_match.get();
   }
   else
      m_presult = &m_result;
#ifdef BOOST_REGEX_NON_RECURSIVE
   m_stack_base = 0;
   m_backup_state = 0;
#elif defined(BOOST_REGEX_RECURSIVE)
   m_can_backtrack = true;
   m_have_accept = false;
#endif
   // find the value to use for matching word boundaries:
   m_word_mask = re.get_data().m_word_mask; 
   // find bitmask to use for matching '.':
   match_any_mask = static_cast<unsigned char>((f & match_not_dot_newline) ? BOOST_REGEX_DETAIL_NS::test_not_newline : BOOST_REGEX_DETAIL_NS::test_newline);
   // Disable match_any if requested in the state machine:
   if(e.get_data().m_disable_match_any)
      m_match_flags &= ~regex_constants::match_any;
}
    
       char_type a[2] = {'a', '\0', };
   string_type sa(pt->transform(a, a+1));
   if(sa == a)
   {
      *delim = 0;
      return sort_C;
   }
   char_type A[2] = { 'A', '\0', };
   string_type sA(pt->transform(A, A+1));
   char_type c[2] = { ';', '\0', };
   string_type sc(pt->transform(c, c+1));
    
    
namespace boost{
    }
    
    namespace aria2 {
    }
    
    void DHTRoutingTable::setTaskQueue(DHTTaskQueue* taskQueue)
{
  taskQueue_ = taskQueue;
}
    
      Time serializedTime_;
    
    DHTTaskExecutor::~DHTTaskExecutor() = default;
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createReplaceNodeTask(
    const std::shared_ptr<DHTBucket>& bucket,
    const std::shared_ptr<DHTNode>& newNode)
{
  auto task = std::make_shared<DHTReplaceNodeTask>(bucket, newNode);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
      virtual void process() CXX11_OVERRIDE;
    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);
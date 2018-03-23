
        
          /// Emit a partial application of an Objective-C method to its 'self'
  /// argument.
  void emitObjCPartialApplication(IRGenFunction &IGF,
                                  ObjCMethod method,
                                  CanSILFunctionType origType,
                                  CanSILFunctionType partialAppliedType,
                                  llvm::Value *self,
                                  SILType selfType,
                                  Explosion &out);
    
    
    {  auto *result = new (sink.allocator)
      Completion(std::move(base), copyString(sink.allocator, name),
                 copyString(sink.allocator, description));
  result->moduleImportDepth = moduleImportDepth;
  result->popularityFactor = popularityFactor;
  result->opaqueCustomKind = customKind;
  return result;
}
    
    
    {} // namespace swift
    
    uint64_t swift::unicode::getUTF16Length(StringRef Str) {
  uint64_t Length;
  // Transcode the string to UTF-16 to get its length.
  SmallVector<llvm::UTF16, 128> buffer(Str.size() + 1); // +1 for ending nulls.
  const llvm::UTF8 *fromPtr = (const llvm::UTF8 *) Str.data();
  llvm::UTF16 *toPtr = &buffer[0];
  llvm::ConversionResult Result =
    ConvertUTF8toUTF16(&fromPtr, fromPtr + Str.size(),
                       &toPtr, toPtr + Str.size(),
                       llvm::strictConversion);
  assert(Result == llvm::conversionOK &&
         'UTF-8 encoded string cannot be converted into UTF-16 encoding');
  (void)Result;
    }
    
    public:
  void setInputBufferIDs(ArrayRef<unsigned> BufferIDs) {
    InputBufIDs.append(BufferIDs.begin(), BufferIDs.end());
    std::sort(InputBufIDs.begin(), InputBufIDs.end());
  }
    
    #include 'swift/Basic/LLVM.h'
#include 'clang/Index/IndexSymbol.h'
#include 'llvm/ADT/SmallString.h'
    
    
    {  if (flags & XhpTrace) {
    s_profiler_factory->start(ProfilerKind::Trace, flags);
  } else if (flags & Memo) {
    flags = 0;  /* flags are not used by MemoProfiler::MemoProfiler */
    s_profiler_factory->start(ProfilerKind::Memo, flags);
  } else if (flags & External) {
    for (ArrayIter iter(args); iter; ++iter) {
      if (iter.first().toInt32() == 0) {
         flags = iter.second().toInt32();
      }
    }
    s_profiler_factory->start(ProfilerKind::External, flags);
  } else {
    s_profiler_factory->start(ProfilerKind::Hierarchical, flags);
  }
}
    
    int64_t getCPUTimeNanos() {
  return RuntimeOption::EvalJitTimer ? HPHP::Timer::GetThreadCPUTimeNanos() :
         -1;
}
    
    int64_t Timer::getMicroSeconds() const {
  return measure() - m_start;
}
    
    //////////////////////////////////////////////////////////////////////
    
      int8_t negativePad;
  std::string negativeSign;
  if (strNum[0] == '-') {
    negativePad = 1;
    negativeSign = '-';
  } else if (strNum[0] == '+') {
      // We don't allow leading pluses to match PHP
      return false;
  } else {
    negativePad = 0;
    negativeSign = '';
  }
    
    
    {  /* Don't put MAGIC constant - it likely points to a file within MSys
  tree */
  default_magic = hmagicpath;
  return default_magic;
#endif
}
    
    #include 'hphp/runtime/vm/resumable.h'
    
    #include 'hphp/runtime/vm/hhbc.h'
    
    /*
 *   Helpers for recovering context of this instruction.
 */
Op NormalizedInstruction::op() const {
  return peek_op(pc());
}
    
    
    {  std::string toString() const;
};
    
    namespace HPHP { namespace jit {
    }
    }
    
    // The number of pages to reserve for the functions with highest
// density (samples / size).  The functions put in these pages are not
// considered for clustering.
constexpr uint32_t kFrozenPages = 0;
    
    
static uint64_t RotateRight(uint64_t value,
                            unsigned int rotate,
                            unsigned int width) {
  assert(width <= 64);
  rotate &= 63;
  return ((value & ((1UL << rotate) - 1UL)) << (width - rotate)) |
         (value >> rotate);
}
    
    FT_END_HEADER
    
    /*Some specific platforms may have optimized intrinsic or inline assembly
   versions of these functions which can substantially improve performance.
  We define macros for them to allow easy incorporation of these non-ANSI
   features.*/
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    #if !defined(_mfrngcode_H)
# define _mfrngcode_H (1)
# include 'entcode.h'
    
    #undef MULT16_16_Q15_SUB
static inline int MULT16_16_Q15_SUB(int a, int b, int c, int d) {
    int m;
    asm volatile('MULT $ac1, %0, %1' : : 'r' ((int)a), 'r' ((int)b));
    asm volatile('msub $ac1, %0, %1' : : 'r' ((int)c), 'r' ((int)d));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (m): 'i' (15));
    return m;
}
    
    # if defined(__clang__) || !defined(__OPTIMIZE__)
#  define OP_CVTEPI8_EPI32_M32(x) \
 (_mm_cvtepi8_epi32(_mm_cvtsi32_si128(*(int *)(x))))
# else
#  define OP_CVTEPI8_EPI32_M32(x) \
 (_mm_cvtepi8_epi32(*(__m128i *)(x)))
#endif
    
    #include <yoga/Yoga.h>
    
      InstructionPointer absoluteProgramCounter() const noexcept {
    return absoluteProgramCounter_;
  }
    
    using namespace ::testing;
    
    /* static */ void Config::destroy(Config * node)
{
    delete node;
}
    
        layout.left = YGNodeLayoutGetLeft(m_node);
    layout.right = YGNodeLayoutGetRight(m_node);
    
    
    {  template <typename T> friend class RefPtr;
  std::atomic<int> m_refcount;
};
    
      std::string asFormattedString() const {
    std::stringstream str;
    str << 'Function ' << m_functionName << ' in file ' << m_fileName << ':' << m_lineNumber;
    return str.str();
  }
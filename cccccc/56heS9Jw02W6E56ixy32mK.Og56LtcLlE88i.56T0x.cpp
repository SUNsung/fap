
        
        class SILDebuggerClient;
    
    #include 'swift/AST/SyntaxASTMap.h'
#include 'swift/AST/Expr.h'
#include 'swift/AST/Decl.h'
#include 'swift/AST/Stmt.h'
#include 'swift/Syntax/Syntax.h'
    
    
    {  bool checkValue(SILValue Value);
};
    
    //===----------------------------------------------------------------------===//
// Index data collection and record writing
//===----------------------------------------------------------------------===//
    
    #endif

    
      /// Indicates whether the diagnostics produced during compilation should be
  /// checked against expected diagnostics, indicated by markers in the
  /// input source file.
  enum {
    NoVerify,
    Verify,
    VerifyAndApplyFixes
  } VerifyMode = NoVerify;
    
    using clang::index::printSymbolProperties;
    
      SourceLoc getLocForLineCol(unsigned BufferId, unsigned Line, unsigned Col) const {
    auto Offset = resolveFromLineCol(BufferId, Line, Col);
    return Offset.hasValue() ? getLocForOffset(BufferId, Offset.getValue()) :
                               SourceLoc();
  }
    
    Substitution::Substitution(Type Replacement,
                           ArrayRef<ProtocolConformanceRef> Conformance)
  : Replacement(Replacement), Conformance(Conformance)
{
  // The replacement type must be materializable.
  assert(Replacement->isMaterializable()
         && 'cannot substitute with a non-materializable type');
}
    
    #include 'hphp/runtime/base/array-init.h'
#include 'hphp/runtime/base/datetime.h'
#include 'hphp/runtime/base/resource-data.h'
#include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/base/type-string.h'
#include 'hphp/util/timer.h'
    
    Vlabel Vunit::makeBlock(AreaIndex area, uint64_t weight) {
  auto i = blocks.size();
  blocks.emplace_back(area, weight);
  return Vlabel{i};
}
    
    
    {  unsigned next_vr{Vreg::V0};
  Vlabel entry;
  jit::vector<Vframe> frames;
  jit::vector<Vblock> blocks;
  jit::hash_map<Vconst,Vreg,Vconst::Hash> constToReg;
  jit::hash_map<size_t,Vconst> regToConst;
  jit::vector<VregList> tuples;
  jit::vector<VcallArgs> vcallArgs;
  jit::vector<VdataBlock> dataBlocks;
  uint16_t cur_voff{0};  // current instruction index managed by Vout
  bool padding{false};
  bool profiling{false};
  folly::Optional<TransContext> context;
  StructuredLogEntry* log_entry{nullptr};
};
    
      /**
   * Write an entry to the handler's access log.
   */
  virtual void logToAccessLog(Transport* /*transport*/) {}
    
    
    {  if (m_p + len > m_pEnd) {
    flush();
  }
  if (len > m_size) {
    flushImpl(data);
  } else {
    memcpy(m_p, data.data(), len);
    if ((m_p += len) > m_pSafe) flush();
  }
}
    
    #ifndef PIPE_BUF
/* Get the PIPE_BUF from pathconf */
#ifdef _PC_PIPE_BUF
#define PIPE_BUF pathconf('.', _PC_PIPE_BUF)
#else
#define PIPE_BUF 512
#endif
#endif
    
    #endif // !defined(BOOST_ASIO_WINDOWS) && !defined(__CYGWIN__)
    
    #if !defined(BOOST_ASIO_WINDOWS) && !defined(__CYGWIN__)
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
# include <boost/asio/detail/null_fenced_block.hpp>
#elif defined(__MACH__) && defined(__APPLE__)
# include <boost/asio/detail/macos_fenced_block.hpp>
#elif defined(__sun)
# include <boost/asio/detail/solaris_fenced_block.hpp>
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
# include <boost/asio/detail/gcc_arm_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
# include <boost/asio/detail/gcc_hppa_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
# include <boost/asio/detail/gcc_x86_fenced_block.hpp>
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
# include <boost/asio/detail/gcc_sync_fenced_block.hpp>
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
# include <boost/asio/detail/win_fenced_block.hpp>
#else
# include <boost/asio/detail/null_fenced_block.hpp>
#endif
    
    #include <boost/asio/detail/config.hpp>
#include <boost/asio/detail/addressof.hpp>
#include <boost/asio/detail/noncopyable.hpp>
#include <boost/asio/handler_alloc_hook.hpp>
    
      STDMETHODIMP get_Capacity(UINT32* value)
  {
    *value = capacity_;
    return S_OK;
  }
    
    
    {  bool earliest = queue.enqueue_timer(time, timer, op);
  io_service_.work_started();
  if (earliest)
    interrupter_.interrupt();
}
    
    void*         XXH32_init   (unsigned int seed);
XXH_errorcode XXH32_update (void* state, const void* input, int len);
unsigned int  XXH32_digest (void* state);
    
      virtual bool PartialMergeMulti(const Slice& key,
                                 const std::deque<Slice>& operand_list,
                                 std::string* new_value, Logger* logger) const
      override;
    
    
    {  /// The backend rocksdb database.
  /// Map : key --> list
  ///       where a list is a sequence of elements
  ///       and an element is a 4-byte integer (n), followed by n bytes of data
  std::unique_ptr<DB> db_;
};
    
      static bool isAligned(size_t n, size_t alignment) {
    return n % alignment == 0;
  }
    
      if(env->ExceptionCheck()) {
    // exception thrown from CallLongMethod
    env->ExceptionDescribe();  // print out exception to stderr
    releaseJniEnv(attached_thread);
    return nullptr;
  }
    
    #include 'rocksdb/compaction_filter.h'
#include 'rocksjni/jnicallback.h'
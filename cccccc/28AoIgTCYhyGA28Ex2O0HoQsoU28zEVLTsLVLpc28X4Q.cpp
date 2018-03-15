
        
        #include <Python.h>
    
    #ifndef GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_CONTAINERS_H__
#define GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_CONTAINERS_H__
    
    class PyDescriptorDatabase : public DescriptorDatabase {
 public:
  explicit PyDescriptorDatabase(PyObject* py_database);
  ~PyDescriptorDatabase();
    }
    
    namespace python {
    }
    
    #include <google/protobuf/any_test.pb.h>
#include <gtest/gtest.h>
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
#include <google/protobuf/testing/file.h>
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_repeated_primitive_field.h>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
        cv::Mat sols = cv::Mat::zeros(3, 27, CV_64F);
    std::vector<double> cost;
    int count = 0;
    for (int k = 0; k < 27; ++k)
    {
        //  V(:,k) = V(:,k)/V(1,k);
        cv::Mat V_kA = eigenvec_r.col(k); // 27x1
        cv::Mat V_kB = cv::Mat(1, 1, z.depth(), V_kA.at<double>(0)); // 1x1
        cv::Mat V_k; cv::solve(V_kB.t(), V_kA.t(), V_k); // A/B = B'\A'
        cv::Mat( V_k.t()).copyTo( eigenvec_r.col(k) );
    }
    
            static __device__ __forceinline__ int syncthreadsOr(int pred)
        {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 200)
                // just campilation stab
                return 0;
#else
                return __syncthreads_or(pred);
#endif
        }
    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
        static void CODEGEN_FUNCPTR Switch_VertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *ptr)
    {
        VertexPointer = (PFNVERTEXPOINTERPROC)IntGetProcAddress('glVertexPointer');
        VertexPointer(size, type, stride, ptr);
    }
    
      // Fits a line to the points, returning the fitted line as a pair of
  // points, and the upper quartile error.
  double Fit(ICOORD* pt1, ICOORD* pt2) {
    return Fit(0, 0, pt1, pt2);
  }
  // Fits a line to the points, ignoring the skip_first initial points and the
  // skip_last final points, returning the fitted line as a pair of points,
  // and the upper quartile error.
  double Fit(int skip_first, int skip_last, ICOORD* pt1, ICOORD* pt2);
    
    double LLSQ::pearson() const {  // get correlation
  double r = 0.0;                  // Correlation is 0 if insufficent data.
    }
    
    // Free allocated memory and clear pointers.
void DENORM::Clear() {
  if (x_map_ != NULL) {
    delete x_map_;
    x_map_ = NULL;
  }
  if (y_map_ != NULL) {
    delete y_map_;
    y_map_ = NULL;
  }
  if (rotation_ != NULL) {
    delete rotation_;
    rotation_ = NULL;
  }
}
    
    
    { private:
  // Pointer to the other end of the link. It is always true that either
  // other_end_ == NULL or other_end_->other_end_ == this.
  DoublePtr* other_end_;
};
    
    
    { private:
  // Data members are private to keep deletion of data_ encapsulated.
  Data* data_;
  Key key_;
};
// Specialization of KDPtrPair to provide operator< for sorting in increasing
// order.
template <typename Key, typename Data>
struct KDPtrPairInc : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairInc() : KDPtrPair<Key, Data>() {}
  KDPtrPairInc(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairInc(KDPtrPairInc& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairInc& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPtrPairInc<Key, Data>& other) const {
    return this->key() < other.key();
  }
};
// Specialization of KDPtrPair to provide operator< for sorting in decreasing
// order.
template <typename Key, typename Data>
struct KDPtrPairDec : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairDec() : KDPtrPair<Key, Data>() {}
  KDPtrPairDec(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairDec(KDPtrPairDec& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairDec& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPtrPairDec<Key, Data>& other) const {
    return this->key() > other.key();
  }
};
    
    
    {  // Size of the indexed feature space.
  int size_;
  // Total weight of features currently stored in the maps.
  double total_feature_weight_;
  // Pointer to IntFeatureMap given at Init to find offset features.
  const IntFeatureMap* feature_map_;
  // Array of bools indicating presence of a feature.
  bool* features_;
  // Array indicating the presence of a feature offset by one unit.
  bool* features_delta_one_;
  // Array indicating the presence of a feature offset by two units.
  bool* features_delta_two_;
};
    
    // Iterator functions designed for use with a simple for loop:
// for (it.Begin(); !it.AtEnd(); it.Next()) {
//   const TrainingSample& sample = it.GetSample();
// }
void SampleIterator::Begin() {
  shape_index_ = -1;
  shape_char_index_ = 0;
  num_shape_chars_ = 0;
  shape_font_index_ = 0;
  num_shape_fonts_ = 0;
  sample_index_ = 0;
  num_samples_ = 0;
  // Find the first indexable sample.
  Next();
}
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    Array TimeStamp::CurrentTime() {
  struct timeval tp;
  gettimeofday(&tp, nullptr);
    }
    
    int64_t gettime_ns(clockid_t clock) {
  if (clock != CLOCK_THREAD_CPUTIME_ID) {
    return folly::chrono::clock_gettime_ns(clock);
  }
    }
    
      static void GetRealtimeTime(timespec &sp);
  static void GetMonotonicTime(timespec &sp);
  static int64_t GetCurrentTimeMicros();
  static int64_t GetRusageMicros(Type t, Who who);
  static int64_t GetThreadCPUTimeNanos();
  const char *getName() const;
  int64_t getMicroSeconds() const;
  void report() const;
    
    /*
 * Assert invariants on a Vunit.
 */
bool check(Vunit& unit);
    
    uint32_t numa_node_set;
uint32_t numa_num_nodes;
uint32_t numa_node_mask;
std::vector<bitmask*> node_to_cpu_mask;
bool use_numa = false;
bool threads_bind_local = false;
    
    
    {
    {      if (val.caseIdx == iv.size() - 1) {
        // Default case.
        checkBounds();
      } else {
        auto ok = gen(env, EqInt, cns(env, val.caseIdx + (bounded ? base : 0)),
                      index);
        gen(env, JmpNZero, getBlock(env, targetOff), ok);
      }
    }
  } else if (profile.profiling()) {
    gen(env, ProfileSwitchDest,
        ProfileSwitchData{profile.handle(), iv.size(), bounded ? base : 0},
        index);
  }
    
    #include 'hphp/runtime/vm/jit/mcgen-prologue.h'
    
    /*
 * Get UsageInfo data for all the TC code sections, including global data, and
 * also for RDS.
 */
std::vector<UsageInfo> getUsageInfo();
    
    
float Instruction::ImmFP32() {
  //  ImmFP: abcdefgh (8 bits)
  // Single: aBbb.bbbc.defg.h000.0000.0000.0000.0000 (32 bits)
  // where B is b ^ 1
  uint32_t bits = ImmFP();
  uint32_t bit7 = (bits >> 7) & 0x1;
  uint32_t bit6 = (bits >> 6) & 0x1;
  uint32_t bit5_to_0 = bits & 0x3f;
  uint32_t result = (bit7 << 31) | ((32 - bit6) << 25) | (bit5_to_0 << 19);
    }
    
    /**
 * oc_ilog32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_32() or OC_ILOGNZ_32() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog32(ogg_uint32_t _v);
/**
 * oc_ilog64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_64() or OC_ILOGNZ_64() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog64(ogg_int64_t _v);
    
        60,30,500,   1.,18.,  256
  },
  /* 7: 1024 x 27 */
  {
    8,{0,1,2,2,3,3,4,4},{3,4,3,4,3},{0,1,1,2,2},{-1,0,1,2,3},
    {{4},{5,6},{7,8},{-1,9,10,11},{-1,12,13,14}},
    2,{0,1024,   93,23,372, 6,46,186,750,  14,33,65, 130,260,556,
       3,10,18,28,  39,55,79,111,  158,220,312,  464,650,850},
    
    static const static_bookblock _resbook_44s_1={
  {
    {0},{0,0,&_44c1_s_p1_0},{0,0,&_44c1_s_p2_0},
    {0,0,&_44c1_s_p3_0},{0,0,&_44c1_s_p4_0},{0,0,&_44c1_s_p5_0},
    {&_44c1_s_p6_0,&_44c1_s_p6_1},{&_44c1_s_p7_0,&_44c1_s_p7_1},
    {&_44c1_s_p8_0,&_44c1_s_p8_1,&_44c1_s_p8_2}
   }
};
static const static_bookblock _resbook_44sm_1={
  {
    {0},{0,0,&_44c1_sm_p1_0},{0,0,&_44c1_sm_p2_0},
    {0,0,&_44c1_sm_p3_0},{0,0,&_44c1_sm_p4_0},{0,0,&_44c1_sm_p5_0},
    {&_44c1_sm_p6_0,&_44c1_sm_p6_1},{&_44c1_sm_p7_0,&_44c1_sm_p7_1},
    {&_44c1_sm_p8_0,&_44c1_sm_p8_1,&_44c1_sm_p8_2}
   }
};
    
      {1,2,6,  &_residue_44p_lfe,
   &_huff_book__44p2_lfe,&_huff_book__44p2_lfe,
   &_resbook_44p_l2,&_resbook_44p_l2}
};
static const vorbis_residue_template _res_44p51_3[]={
  {2,0,15,  &_residue_44p,
   &_huff_book__44p3_short,&_huff_book__44p3_short,
   &_resbook_44p_3,&_resbook_44p_3},
    
    #undef MULT16_16_Q15_ADD
static inline int MULT16_16_Q15_ADD(int a, int b, int c, int d) {
    int m;
    asm volatile('MULT $ac1, %0, %1' : : 'r' ((int)a), 'r' ((int)b));
    asm volatile('madd $ac1, %0, %1' : : 'r' ((int)c), 'r' ((int)d));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (m): 'i' (15));
    return m;
}
    
    #undef silk_SMLABT
static OPUS_INLINE opus_int32 silk_SMLABT(opus_int32 a32, opus_int32 b32, opus_int32 c32){
    opus_int32 ret;
    ops_count += 1;
    ret = a32 + ((opus_int32)((opus_int16)b32)) * (c32 >> 16);
    return ret;
}
    
      /// Start an asynchronous fill.
  template <typename ReadHandler>
  BOOST_ASIO_INITFN_RESULT_TYPE(ReadHandler,
      void (boost::system::error_code, std::size_t))
  async_fill(BOOST_ASIO_MOVE_ARG(ReadHandler) handler);
    
    namespace boost {
namespace asio {
    }
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {    // Make the upcall if required.
    if (owner)
    {
      fenced_block b(fenced_block::half);
      BOOST_ASIO_HANDLER_INVOCATION_BEGIN((handler.arg1_, handler.arg2_));
      boost_asio_handler_invoke_helpers::invoke(handler, handler.handler_);
      BOOST_ASIO_HANDLER_INVOCATION_END;
    }
  }
    
    #endif // !defined(BOOST_ASIO_WINDOWS_RUNTIME)
    
    #ifndef BOOST_ASIO_DETAIL_GCC_ARM_FENCED_BLOCK_HPP
#define BOOST_ASIO_DETAIL_GCC_ARM_FENCED_BLOCK_HPP
    
    template <typename Function, typename Context>
inline void invoke(const Function& function, Context& context)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  Function tmp(function);
  tmp();
#else
  using boost::asio::asio_handler_invoke;
  asio_handler_invoke(function, boost::asio::detail::addressof(context));
#endif
}
    
      errno = 0;
#if defined(__SYMBIAN32__)
  int result = error_wrapper(::fcntl(d, F_GETFL, 0), ec);
  if (result >= 0)
  {
    errno = 0;
    int flag = (value ? (result | O_NONBLOCK) : (result & ~O_NONBLOCK));
    result = error_wrapper(::fcntl(d, F_SETFL, flag), ec);
  }
#else // defined(__SYMBIAN32__)
  ioctl_arg_type arg = (value ? 1 : 0);
  int result = error_wrapper(::ioctl(d, FIONBIO, &arg), ec);
#endif // defined(__SYMBIAN32__)
    
    #endif // defined(BOOST_ASIO_HAS_DEV_POLL)
    
      bool try_lock() {
    DeterministicSchedule::beforeSharedAccess();
    bool rv = m.try_lock();
    FOLLY_TEST_DSCHED_VLOG(this << '.try_lock() -> ' << rv);
    DeterministicSchedule::afterSharedAccess();
    return rv;
  }
    
      const uint64_t A = duration_cast<nanoseconds>(steady_clock::now()
                                                .time_since_epoch()).count();
    
      template <typename T>
  static T* get_shared_ptr(counted_base* base) {
    // See if this was a make_shared allocation
    auto inplace = base->_M_get_deleter(typeid(std::_Sp_make_shared_tag));
    if (inplace) {
      return (T*)inplace;
    }
    // Could also be a _Sp_counted_deleter, but the layout is the same
    using derived_type = std::_Sp_counted_ptr<const void*, std::_S_atomic>;
    auto ptr = reinterpret_cast<derived_type*>(base);
    return (T*)(ptr->*fieldPtr(access_counted_ptr_ptr{}));
  }
    
    
/// MockClock is a bit tricky because we are mocking a static function
/// (now()), so we need to find the corresponding mock instance without
/// extending its scope beyond that of the test.  I generally avoid
/// shared_ptr, but a weak_ptr is just the ticket here
struct MockClock {
  using duration = std::chrono::steady_clock::duration;
  using time_point = std::chrono::time_point<MockClock, duration>;
    }
    
    void DynamicParser::ParserStack::Pop::operator()() noexcept {
  stackPtr_->key_ = key_;
  stackPtr_->value_ = value_;
  if (stackPtr_->unmaterializedSubErrorKeys_.empty()) {
    // There should be the current error, and the root.
    CHECK_GE(stackPtr_->subErrors_.size(), 2u)
      << 'Internal bug: out of suberrors';
    stackPtr_->subErrors_.pop_back();
  } else {
    // Errors were never materialized for this subtree, so errors_ only has
    // ancestors of the item being processed.
    stackPtr_->unmaterializedSubErrorKeys_.pop_back();
    CHECK(!stackPtr_->subErrors_.empty()) << 'Internal bug: out of suberrors';
  }
}
    
      // Key and value errors have different code paths, so exercise both.
  p.required(missing_k, [&]() {});
  p.required(good_k, [&]() { throw std::runtime_error('failsauce'); });
  auto errors = p.releaseErrors();
    
    #include <boost/noncopyable.hpp>
    
      explicit aha_iterator(ContT* array, size_t offset)
      : aha_(array)
      , offset_(offset)
  {}
    
      bool isEnd() const { return ahm_ == nullptr; }
    
    template <typename T> struct jni_sig_from_cxx_t;
template <typename R, typename... Args>
struct jni_sig_from_cxx_t<R(Args...)> {
  using JniRet = typename Convert<typename std::decay<R>::type>::jniType;
  using JniSig = JniRet(typename Convert<typename std::decay<Args>::type>::jniType...);
};
    
    double Node::getComputedHeight(void) const
{
    return YGNodeLayoutGetHeight(m_node);
}
    
      bool operator==(const ProgramLocation& other) const {
    // Assumes that the strings are static
    return (m_functionName == other.m_functionName) && (m_fileName == other.m_fileName) && m_lineNumber == other.m_lineNumber;
  }
    
    namespace facebook {
    }
    
    private:
  void initialize() {
    int ret = pthread_key_create(&m_key, m_cleanup);
    if (ret != 0) {
      const char *msg = '(unknown error)';
      switch (ret) {
      case EAGAIN:
        msg = 'PTHREAD_KEYS_MAX (1024) is exceeded';
        break;
      case ENOMEM:
        msg = 'Out-of-memory';
        break;
      }
      (void) msg;
      FBASSERTMSGF(0, 'pthread_key_create failed: %d %s', ret, msg);
    }
  }
    
    #if ENABLE_FBASSERT
#define FBASSERTMSGF(expr, msg, ...) !(expr) ? facebook::assertInternal('Assert (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__) : (void) 0
#else
#define FBASSERTMSGF(expr, msg, ...)
#endif // ENABLE_FBASSERT

        
        IPC_MESSAGE_ROUTED4(ShellViewHostMsg_Call_Object_Method,
                    int /* object id */,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    class ObjectManager;
    
    class NwAppClearAppCacheFunction : public NWSyncExtensionFunction {
 public:
  NwAppClearAppCacheFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    #define TEGRA_MERGE(src, dst, len, cn) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
        cn == 2 ? \
        CAROTENE_NS::combine2(CAROTENE_NS::Size2D(len, 1), \
                              src[0], len, \
                              src[1], len, \
                              dst, len), \
        CV_HAL_ERROR_OK : \
        cn == 3 ? \
        CAROTENE_NS::combine3(CAROTENE_NS::Size2D(len, 1), \
                              src[0], len, \
                              src[1], len, \
                              src[2], len, \
                              dst, len), \
        CV_HAL_ERROR_OK : \
        cn == 4 ? \
        CAROTENE_NS::combine4(CAROTENE_NS::Size2D(len, 1), \
                              src[0], len, \
                              src[1], len, \
                              src[2], len, \
                              src[3], len, \
                              dst, len), \
        CV_HAL_ERROR_OK : \
        CV_HAL_ERROR_NOT_IMPLEMENTED \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
    #define  VROW_LINE(type, n) const type * src##n = internal::getRowPtr(src##n##Base, src##n##Stride, i);
#define  PREF_LINE(type, n) internal::prefetch(src##n + sj);
#define VLD1Q_LINE(type, n) v_dst.val[n] = vld1q_##type(src##n + sj);
#define  PRLD_LINE(type, n) internal::prefetch(src##n + sj); v_dst.val[n] = vld1q_##type(src##n + sj);
#define  VLD1_LINE(type, n) v_dst.val[n] = vld1_##type(src##n + sj);
#define   SLD_LINE(type, n) dst[dj + n] = src##n[sj];
    
            uint32x4_t vl1_masked = vbicq_u32(vmask, vline1_u32);
        uint32x4_t vl2_masked = vbicq_u32(vmask, vline2_u32);
        uint32x4_t vl1_masked2 = vshrq_n_u32(vl1_masked, 16);
        uint32x4_t vl2_masked2 = vshrq_n_u32(vl2_masked, 16);
        uint32x4_t vline1r_u32 = vqsubq_u32(vline1_u32, vl1_masked2);
        uint32x4_t vline2r_u32 = vqsubq_u32(vline2_u32, vl2_masked2);
    
        // this ugly contruction is needed to avoid:
    // /usr/lib/gcc/arm-linux-gnueabihf/4.8/include/arm_neon.h:3581:59: error: argument must be a constant
    // return (int16x8_t)__builtin_neon_vshr_nv8hi (__a, __b, 1);
    
                    int16x8_t t0_16s = vreinterpretq_s16_u16(vmovl_u8(t0));
                int16x8_t t1_16s = vreinterpretq_s16_u16(vmovl_u8(t1));
                int16x8_t t2_16s = vreinterpretq_s16_u16(vmovl_u8(t2));
    
    f64 dotProduct(const Size2D &_size,
               const u8 * src0Base, ptrdiff_t src0Stride,
               const u8 * src1Base, ptrdiff_t src1Stride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (src0Stride == src1Stride &&
        src0Stride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    }
    
                    if( d & 1 )
                {
                    s32 vt = v - threshold, count = 0;
    }
    
    
    {            if (mask)
                process(src, j, j + 8, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
        }
    
        for ( ; j + 7 < size.width; j += 8)
    {
        internal::prefetch(sum + j);
        internal::prefetch(src + j);
    }
    
     public:
  // Constructs an empty Message.
  Message();
    
    // This helper class can be used to mock out Google Test failure reporting
// so that we can test Google Test or code that builds on Google Test.
//
// An object of this class appends a TestPartResult object to the
// TestPartResultArray object given in the constructor whenever a Google Test
// failure is reported. It can either intercept only failures that are
// generated in the same thread that created this object or it can intercept
// all generated failures. The scope of this mock object can be controlled with
// the second argument to the two arguments constructor.
class GTEST_API_ ScopedFakeTestPartResultReporter
    : public TestPartResultReporterInterface {
 public:
  // The two possible mocking modes of this object.
  enum InterceptMode {
    INTERCEPT_ONLY_CURRENT_THREAD,  // Intercepts only thread local failures.
    INTERCEPT_ALL_THREADS           // Intercepts all failures.
  };
    }
    
      // Returns true iff the test part failed.
  bool failed() const { return type_ != kSuccess; }
    
    // Two overloaded helpers for checking at compile time whether an
// expression is a null pointer literal (i.e. NULL or any 0-valued
// compile-time integral constant).  Their return values have
// different sizes, so we can use sizeof() to test which version is
// picked by the compiler.  These helpers have no implementations, as
// we only need their signatures.
//
// Given IsNullLiteralHelper(x), the compiler will pick the first
// version if x can be implicitly converted to Secret*, and pick the
// second version otherwise.  Since Secret is a secret and incomplete
// type, the only expression a user can write that has type Secret* is
// a null pointer literal.  Therefore, we know that x is a null
// pointer literal if and only if the first version is picked by the
// compiler.
char IsNullLiteralHelper(Secret* p);
char (&IsNullLiteralHelper(...))[2];  // NOLINT
    
      const int is_prime_size_;
  bool* const is_prime_;
    
    // Returns true iff n is a prime number.
bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;
    }
    
    
    { private:
  static int allocated_;
};
    
      ////////////////////////////////////////////////////////////
  //
  // D'tor.  MyString is intended to be a final class, so the d'tor
  // doesn't need to be virtual.
  ~MyString() { delete[] c_string_; }
    
    template <typename E>  // E is the element type.
class Queue {
 public:
  // Creates an empty queue.
  Queue() : head_(NULL), last_(NULL), size_(0) {}
    }
    
    //Constructor automatically fixes orientation to ccw
b2Triangle::b2Triangle(float32 x1, float32 y1, float32 x2, float32 y2, float32 x3, float32 y3){
	x = new float32[3];
	y = new float32[3];
	float32 dx1 = x2-x1;
	float32 dx2 = x3-x1;
	float32 dy1 = y2-y1;
	float32 dy2 = y3-y1;
	float32 cross = dx1*dy2-dx2*dy1;
	bool ccw = (cross>0);
	if (ccw){
		x[0] = x1; x[1] = x2; x[2] = x3;
		y[0] = y1; y[1] = y2; y[2] = y3;
	} else{
		x[0] = x1; x[1] = x3; x[2] = x2;
		y[0] = y1; y[1] = y3; y[2] = y2;
	}
}
    
b2Triangle::b2Triangle(){
	x = new float32[3];
	y = new float32[3];
}
    
                lo0 = _mm_movelh_ps( v0, v1);    // x0y0x1y1
            hi0 = _mm_movehl_ps( v1, v0);    // z0?0z1?1
            lo1 = _mm_movelh_ps( v2, v3);    // x2y2x3y3
            hi1 = _mm_movehl_ps( v3, v2);    // z2?2z3?3
    
        // set right hand side for the linear dofs
	b3Scalar k = info->fps * info->erp;
	b3Vector3 linearError = k*(a2+worldPosB-a1-worldPosA);
    int j;
	for (j=0; j<3; j++)
    {
        info->m_constraintError[j*info->rowskip] = linearError[j];
		//printf('info->m_constraintError[%d]=%f\n',j,info->m_constraintError[j]);
    }
    
    
    {};
    
    	b3SolverConstraint&	addFrictionConstraint(b3RigidBodyData* bodies,b3InertiaData* inertias,const b3Vector3& normalAxis,int solverBodyIdA,int solverBodyIdB,int frictionIndex,b3ContactPoint& cp,const b3Vector3& rel_pos1,const b3Vector3& rel_pos2,b3RigidBodyData* colObj0,b3RigidBodyData* colObj1, b3Scalar relaxation, b3Scalar desiredVelocity=0., b3Scalar cfmSlip=0.);
	b3SolverConstraint&	addRollingFrictionConstraint(b3RigidBodyData* bodies,b3InertiaData* inertias,const b3Vector3& normalAxis,int solverBodyIdA,int solverBodyIdB,int frictionIndex,b3ContactPoint& cp,const b3Vector3& rel_pos1,const b3Vector3& rel_pos2,b3RigidBodyData* colObj0,b3RigidBodyData* colObj1, b3Scalar relaxation, b3Scalar desiredVelocity=0, b3Scalar cfmSlip=0.f);
    
    	// Set path to Cmder user ConEmu config file
	PathCombine(userCfgPath, userConfigDirPath, L'user-ConEmu.xml');
    
    /*! \brief typedef the factory function of operator property */
typedef std::function<OperatorProperty *()> OperatorPropertyFactory;
/*!
 * \brief Registry entry for OperatorProperty factory functions.
 */
struct OperatorPropertyReg
    : public dmlc::FunctionRegEntryBase<OperatorPropertyReg,
                                        OperatorPropertyFactory> {
  /*!
   * \brief Set key_var_num_args
   *  When this is set, the API caller is required to pass in a
   *  argument with key=key_num_args.c_str(), and value=num_args.
   *  num_args is number of positional argument when calling the function.
   *
   *  This is used to pass in length of positional arguments
   *  for operators that can take variable length of input.
   *  Most operators do not need to set this property.
   *
   * \param key the key name to be set
   */
  inline OperatorPropertyReg& set_key_var_num_args(const std::string &key) {  // NOLINT(*)
    this->key_var_num_args = key;
    return *this;
  }
  /*!
   * \brief Check if TypeString of the type matches the registered name
   */
  inline OperatorPropertyReg& check_name() {
    OperatorProperty *p = this->body();
    std::string type = p->TypeString();
    delete p;
    CHECK_EQ(this->name, type)
        << 'Register Name and TypeString mismatch, name=\'' << this->name << '\','
        << ' but TypeString=\'' << type <<'\'';
    return *this;
  }
    }
    
    /*!
 * \brief assign the expression to out according to request
 * \param out the data to be assigned
 * \param req the assignment request
 * \param exp the expression
 * \tparam OType output type
 * \tparam Exp expression type
 */
#define ASSIGN_DISPATCH(out, req, exp)  \
  {                                     \
    switch (req) {                      \
      case kNullOp:                     \
        break;                          \
      case kWriteTo:                    \
      case kWriteInplace:               \
        (out) = (exp);                  \
        break;                          \
      case kAddTo:                      \
        (out) += (exp);                 \
        break;                          \
      default:                          \
        LOG(FATAL) << 'not reached';    \
    }                                   \
  }
    
    #ifdef CHECK_NEXT_TIMING
#define IF_CHECK_TIMING(__t$) __t$
#else
#define IF_CHECK_TIMING(__t$)
#endif
    
            if (parameter.GetDataType() == DataType::Float16)
        {
            // convert fp32 parameter to fp16 after update
            auto sg = smoothedGradientValue->GetWritableMatrix<float>();
            auto pv16 = parameterValue->GetWritableMatrix<half>();
            size_t factor = sg->GetNumCols() / pv16->GetNumCols();
            auto pv = sg->ColumnSlice(pv16->GetNumCols() * (factor - 1), pv16->GetNumCols());
            pv16->CastAssignValuesOf(pv);
        }
    
        NDArrayView::~NDArrayView()
    {}
    
            for (const auto& key : requiredKeys)
        {
            if (!dict.Contains(key))
            {
                 LogicError('Required key '%ls' is not found in the dictionary (%s).',
                            key.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
            }
        }
    
            static const size_t s_serializationVersion = 0;
    
            static NDShape GetUnpackedShape(const NDShape& sampleShape, const std::vector<Axis>& sampleDynamicAxes, const std::shared_ptr<Microsoft::MSR::CNTK::MBLayout>& packedDataLayout)
        {
            // Determine unpacked shape
            auto unpackedShape = sampleShape;
            if (packedDataLayout)
            {
                if (sampleDynamicAxes.empty())
                    LogicError('A PackedValue object that has a layout must have at least one dynamic axis.');
    }
    }
    
        static void noOpAlarmHandler(int /*signum*/)
    {
        // this handler is intentionally NO-OP
        // the side effect of execution this handler
        // will be a termination of fcntl call below with EINTR
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
        virtual void /*ComputationNodeNonLooping::*/ ForwardPropNonLooping() override
    {
        ElemType val = ReadOutVariable();
        Value().VerifySize(1, 1);
        Value().SetValue(val);
    }
    
    #include <memory>
    
    void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
      virtual void accept(DHTMessageCallback* callback) = 0;
    
    class DHTTask {
public:
  virtual ~DHTTask() = default;
    }
    
    DHTTaskExecutor::~DHTTaskExecutor() = default;
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createPeerLookupTask(
    const std::shared_ptr<DownloadContext>& ctx, uint16_t tcpPort,
    const std::shared_ptr<PeerStorage>& peerStorage)
{
  auto task = std::make_shared<DHTPeerLookupTask>(ctx, tcpPort);
  // TODO this may be not freed by RequestGroup::releaseRuntimeResource()
  task->setPeerStorage(peerStorage);
  setCommonProperty(task);
  return task;
}
    
    DHTTaskQueueImpl::DHTTaskQueueImpl()
    : periodicTaskQueue1_(NUM_CONCURRENT_TASK),
      periodicTaskQueue2_(NUM_CONCURRENT_TASK),
      immediateTaskQueue_(NUM_CONCURRENT_TASK)
{
}
    
    bool DHTTokenTracker::validateToken(const std::string& token,
                                    const unsigned char* infoHash,
                                    const std::string& ipaddr,
                                    uint16_t port) const
{
  for (auto& elem : secret_) {
    if (generateToken(infoHash, ipaddr, port, elem) == token) {
      return true;
    }
  }
  return false;
}
    
    DNSCache::CacheEntry::CacheEntry(const std::string& hostname, uint16_t port)
    : hostname_(hostname), port_(port)
{
}
    
    
    {    state.SetBytesProcessed(state.iterations() * str.size());
}
BENCHMARK_CAPTURE(ParseString, jeopardy,      'data/jeopardy/jeopardy.json');
BENCHMARK_CAPTURE(ParseString, canada,        'data/nativejson-benchmark/canada.json');
BENCHMARK_CAPTURE(ParseString, citm_catalog,  'data/nativejson-benchmark/citm_catalog.json');
BENCHMARK_CAPTURE(ParseString, twitter,       'data/nativejson-benchmark/twitter.json');
BENCHMARK_CAPTURE(ParseString, floats,        'data/numbers/floats.json');
BENCHMARK_CAPTURE(ParseString, signed_ints,   'data/numbers/signed_ints.json');
BENCHMARK_CAPTURE(ParseString, unsigned_ints, 'data/numbers/unsigned_ints.json');
    
     private:
  template <class Lam>
  friend Benchmark* ::benchmark::RegisterBenchmark(const char*, Lam&&);
    
    // Information kept per benchmark we may want to run
struct Benchmark::Instance {
  std::string name;
  Benchmark* benchmark;
  ReportMode report_mode;
  std::vector<int> arg;
  TimeUnit time_unit;
  int range_multiplier;
  bool use_real_time;
  bool use_manual_time;
  BigO complexity;
  BigOFunc* complexity_lambda;
  UserCounters counters;
  const std::vector<Statistics>* statistics;
  bool last_benchmark_instance;
  int repetitions;
  double min_time;
  size_t iterations;
  int threads;  // Number of concurrent threads to us
};
    
    #include <algorithm>
#include <atomic>
#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <thread>
    
    #ifndef COMPLEXITY_H_
#define COMPLEXITY_H_
    
      out << '{\n';
  std::string inner_indent(2, ' ');
    }
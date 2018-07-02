
        
        namespace grpc {
namespace testing {
    }
    }
    
    static void sigint_handler(int x) {
  gpr_atm_no_barrier_store(&grpc::testing::interop::g_got_sigint, true);
}
    
    UsageTimer::Result UsageTimer::Mark() const {
  Result s = Sample();
  Result r;
  r.wall = s.wall - start_.wall;
  r.user = s.user - start_.user;
  r.system = s.system - start_.system;
  r.total_cpu_time = s.total_cpu_time - start_.total_cpu_time;
  r.idle_cpu_time = s.idle_cpu_time - start_.idle_cpu_time;
    }
    
    #include 'test/cpp/util/service_describer.h'
    
    
    {        memcpy(colStarts.data(), rawColStarts, numOfColsInMatrix * sizeof(SparseIndexType));
        memcpy(nonZeroValues.data(), rawNonZeroValues, numNonZeroValues * sizeof(ElementType));
        memcpy(rowIndices.data(), rawRowIndices, numNonZeroValues * sizeof(SparseIndexType));
    }
    
        // ProcessNDLScript - Process the NDL script
    // netNdl - netNDL structure
    // ndlPassUntil - complete processing through this pass, all passes if ndlPassAll
    // fullValidate - validate as a complete network? (false if this might be a snippet of a full network)
    void ProcessNDLScript(NetNdl<ElemType>* netNdl, NDLPass ndlPassUntil = ndlPassAll, bool fullValidate = false)
    {
        ProcessNDLScript(netNdl->ndl, ndlPassUntil, netNdl->lastNode, fullValidate);
    }
    
    // ---------------------------------------------------------------------------
// TextLocation -- holds a pointer into a source file
// ---------------------------------------------------------------------------
    
        template<unsigned int N>
    static const char* Timestamp(char(&buf)[N])
    {
        std::time_t tt = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        if (!std::strftime(buf, _countof(buf), '%m/%d/%Y %H:%M:%S', std::localtime(&tt)))
            LogicError('Timestamp: Buffer too small.');
        return buf;
    }
    
    // Compares two ASCII strings ignoring the case.
// TODO: Should switch to boost, boost::iequal should be used instead.
// TODO: we already have EqualCI() in Basics.h which does the same thing.
template<class TElement>
inline bool AreEqualIgnoreCase(
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement>>& s1,
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement> >& s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    }
    
        bool empty() const
    {
#ifndef NONUMLATTICEMMI // TODO:set NUM lattice to null so as to save memory
        if (numlattices.empty() ^ denlattices.empty())
            RuntimeError('latticesource: numerator and denominator lattices must be either both empty or both not empty');
#endif
        return denlattices.empty();
    }
    
    Slice BlockBuilder::Finish() {
  // Append restart array
  for (size_t i = 0; i < restarts_.size(); i++) {
    PutFixed32(&buffer_, restarts_[i]);
  }
  PutFixed32(&buffer_, restarts_.size());
  finished_ = true;
  return Slice(buffer_);
}
    
      // Check the crc of the type and the block contents
  const char* data = contents.data();    // Pointer to where Read put the data
  if (options.verify_checksums) {
    const uint32_t crc = crc32c::Unmask(DecodeFixed32(data + n + 1));
    const uint32_t actual = crc32c::Value(data, n + 1);
    if (actual != crc) {
      delete[] buf;
      s = Status::Corruption('block checksum mismatch');
      return s;
    }
  }
    
      Slice in(encoded);
  ParsedInternalKey decoded('', 0, kTypeValue);
    
    namespace osquery {
    }
    
    
    {  EXPECT_EQ(flag_info.type, 'string');
  EXPECT_EQ(flag_info.description, 'TEST DESCRIPTION');
  EXPECT_EQ(flag_info.default_value, 'TEST STRING');
  EXPECT_EQ(flag_info.value, 'NEW TEST STRING');
  EXPECT_EQ(flag_info.detail.shell, false);
  EXPECT_EQ(flag_info.detail.external, false);
}
    
    
    {  EXPECT_EQ(process->pid(), pid);
}
    
    TEST_F(TimeTests, test_asciitime) {
  const size_t epoch = 1491518994;
  const std::string expected = 'Thu Apr  6 22:49:54 2017 UTC';
    }
    
      if (enum_ != nullptr) {
    enum_->Release();
    enum_ = nullptr;
  }
    
    
    {  auto results = generateHeader(lengths, order);
  auto expected = '| name       | age  | food                    | number |\n';
  EXPECT_EQ(results, expected);
}
    
    
    {}  // namespace xgboost
    
    /*!
 * \brief macro to check the call.
 */
#define CHECK_CALL(x)                           \
  if ((x) != 0) {                               \
    error(XGBGetLastError());                   \
  }
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
    bool js_cocos2dx_physics3d_Physics3DSliderConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DSliderConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DSliderConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setPoweredAngMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getLinearPos(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getFrameOffsetA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getFrameOffsetB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setPoweredLinMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getAngularPos(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setUpperLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUpperAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getPoweredAngMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setLowerAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setUpperAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setTargetLinMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUseFrameOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setUseFrameOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setLowerLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getTargetLinMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getLowerLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getPoweredLinMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setFrames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getMaxAngMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUpperLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setMaxLinMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setTargetAngMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getLowerAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getTargetAngMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getMaxLinMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setMaxAngMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUseLinearReferenceFrameA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_Physics3DSliderConstraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    {			b2Vec2 anchor(-15.0f + 1.0f * e_count, 5.0f);
			jd.Initialize(prevBody, ground, anchor);
			m_world->CreateJoint(&jd);
		}
    
    		m_x = RandomFloat(-1.0f, 1.0f);
		m_bullet->SetTransform(b2Vec2(m_x, 10.0f), 0.0f);
		m_bullet->SetLinearVelocity(b2Vec2(0.0f, -50.0f));
		m_bullet->SetAngularVelocity(0.0f);
    
    
    {} // namespace folly

    
     public:
  HazptrLockFreeLIFO() : head_(nullptr) {}
    
      struct Node : public hazptr_obj_base<Node, Atom, Reclaimer<Node>> {
    T elem_;
    Atom<Node*> next_;
    }
    
      void reset(const std::shared_ptr<T>& p = nullptr) {
    auto newslots = folly::make_unique<Slots>();
    // Allocate each Holder in a different CoreRawAllocator stripe to
    // prevent false sharing. Their control blocks will be adjacent
    // thanks to allocate_shared().
    for (auto slot : folly::enumerate(newslots->slots_)) {
      auto alloc = getCoreAllocator<Holder, kNumSlots>(slot.index);
      auto holder = std::allocate_shared<Holder>(alloc, p);
      *slot = std::shared_ptr<T>(holder, p.get());
    }
    }
    
    
    {} // namespace
    
      if (UNLIKELY(!tk)) {
    return makeFuture<Unit>(FutureNoTimekeeper());
  }
    
    /**
 * Declare *allocx() and mallctl*() as weak symbols. These will be provided by
 * jemalloc if we are using jemalloc, or will be nullptr if we are using another
 * malloc implementation.
 */
extern 'C' void* mallocx(size_t, int)
__attribute__((__weak__));
extern 'C' void* rallocx(void*, size_t, int)
__attribute__((__weak__));
extern 'C' size_t xallocx(void*, size_t, size_t, int)
__attribute__((__weak__));
extern 'C' size_t sallocx(const void*, int)
__attribute__((__weak__));
extern 'C' void dallocx(void*, int)
__attribute__((__weak__));
extern 'C' void sdallocx(void*, size_t, int)
__attribute__((__weak__));
extern 'C' size_t nallocx(size_t, int)
__attribute__((__weak__));
extern 'C' int mallctl(const char*, void*, size_t*, void*, size_t)
__attribute__((__weak__));
extern 'C' int mallctlnametomib(const char*, size_t*, size_t*)
__attribute__((__weak__));
extern 'C' int mallctlbymib(const size_t*, size_t, void*, size_t*, void*,
                            size_t)
__attribute__((__weak__));
    
    bool IsColorTerminal() {
#if BENCHMARK_OS_WINDOWS
  // On Windows the TERM variable is usually not set, but the
  // console there does support colors.
  return 0 != _isatty(_fileno(stdout));
#else
  // On non-Windows platforms, we rely on the TERM variable. This list of
  // supported TERM values is copied from Google Test:
  // <https://github.com/google/googletest/blob/master/googletest/src/gtest.cc#L2925>.
  const char* const SUPPORTED_TERM_VALUES[] = {
      'xterm',         'xterm-color',     'xterm-256color',
      'screen',        'screen-256color', 'tmux',
      'tmux-256color', 'rxvt-unicode',    'rxvt-unicode-256color',
      'linux',         'cygwin',
  };
    }
    
    // Returns true if stdout appears to be a terminal that supports colored
// output, false otherwise.
bool IsColorTerminal();
    
    // Find the coefficient for the high-order term in the running time, by
// minimizing the sum of squares of relative error, for the fitting curve
// given by the lambda expresion.
//   - n             : Vector containing the size of the benchmark tests.
//   - time          : Vector containing the times for the benchmark tests.
//   - fitting_curve : lambda expresion (e.g. [](int n) {return n; };).
    
      if (!result.report_big_o && !result.report_rms) {
    printer(Out, COLOR_CYAN, '%10lld', result.iterations);
  }
    
    std::string FormatKV(std::string const& key, double value) {
  std::stringstream ss;
  ss << ''' << key << '\': ';
    }
    
    inline LogType& GetLogInstanceForLevel(int level) {
  if (level <= LogLevel()) {
    return GetErrorLogInstance();
  }
  return GetNullLogInstance();
}
    
    void SleepForMilliseconds(int milliseconds) {
  SleepForMicroseconds(milliseconds * kNumMicrosPerMilli);
}
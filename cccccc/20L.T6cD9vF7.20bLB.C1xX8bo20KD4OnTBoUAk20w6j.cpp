
        
          Optional<const swift::markup::Paragraph *> getBrief() const {
    return Parts.Brief;
  }
    
      /// Keep emitting subsequent diagnostics after a fatal error.
  bool ShowDiagnosticsAfterFatalError = false;
    
    #ifndef SWIFT_INDEX_INDEXSYMBOL_H
#define SWIFT_INDEX_INDEXSYMBOL_H
    
      virtual void failed(StringRef error) = 0;
  virtual void warning(StringRef warning) {}
    
    
    {private:
  ResultPlanPtr buildTopLevelResult(Initialization *init, SILLocation loc);
};
    
      /// Materialize the SILValue that this LSValue represents.
  ///
  /// In the case where we have a single value this can be materialized by
  /// applying Path to the Base.
  SILValue materialize(SILInstruction *Inst) {
    if (CoveringValue)
      return SILValue();
    return Path.getValue().createExtract(Base, Inst, true);
  }
    
    class FixitApplyDiagnosticConsumer final
  : public DiagnosticConsumer, public FixitFilter {
  clang::RewriteBuffer RewriteBuf;
    }
    
    public:
  Context(StringRef RuntimeLibPath,
          llvm::function_ref<
              std::unique_ptr<LangSupport>(Context &)> LangSupportFactoryFn,
          bool shouldDispatchNotificationsOnMain = true);
  ~Context();
    
        DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory( &sd, sizeof( sd ) );
    sd.BufferCount = 1;
    sd.BufferDesc.Width = width;
    sd.BufferDesc.Height = height;
#ifdef CHECK_NV12
    sd.BufferDesc.Format = DXGI_FORMAT_NV12;
#else
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
#endif
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = NULL; //g_hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    
            const std::vector<Point>* quads[4] = {&black_contours[black_order[0].first], &black_contours[black_order[1].first],
                                         &white_contours[white_order[0].first], &white_contours[white_order[1].first]};
        std::vector<Point2f> quads_approx[4];
        Point2f quad_corners[4];
        for(int k = 0; k < 4; k++)
        {
            std::vector<Point2f> temp;
            for(size_t j = 0; j < quads[k]->size(); j++) temp.push_back((*quads[k])[j]);
            approxPolyDP(Mat(temp), quads_approx[k], 0.5, true);
    }
    
    /** @file
 * @deprecated Use @ref cudev instead.
 */
    
    // This macro is used for implementing macros such as
// EXPECT_DEATH_IF_SUPPORTED and ASSERT_DEATH_IF_SUPPORTED on systems where
// death tests are not supported. Those macros must compile on such systems
// iff EXPECT_DEATH and ASSERT_DEATH compile with the same parameters on
// systems that support death tests. This allows one to write such a macro
// on a system that does not support death tests and be sure that it will
// compile on a death-test supporting system.
//
// Parameters:
//   statement -  A statement that a macro such as EXPECT_DEATH would test
//                for program termination. This macro has to make sure this
//                statement is compiled but not executed, to ensure that
//                EXPECT_DEATH_IF_SUPPORTED compiles with a certain
//                parameter iff EXPECT_DEATH compiles with it.
//   regex     -  A regex that a macro such as EXPECT_DEATH would use to test
//                the output of statement.  This parameter has to be
//                compiled but not evaluated by this macro, to ensure that
//                this macro only accepts expressions that a macro such as
//                EXPECT_DEATH would accept.
//   terminator - Must be an empty statement for EXPECT_DEATH_IF_SUPPORTED
//                and a return statement for ASSERT_DEATH_IF_SUPPORTED.
//                This ensures that ASSERT_DEATH_IF_SUPPORTED will not
//                compile inside functions where ASSERT_DEATH doesn't
//                compile.
//
//  The branch that has an always false condition is used to ensure that
//  statement and regex are compiled (and thus syntactically correct) but
//  never executed. The unreachable code macro protects the terminator
//  statement from generating an 'unreachable code' warning in case
//  statement unconditionally returns or throws. The Message constructor at
//  the end allows the syntax of streaming additional messages into the
//  macro, for compilational compatibility with EXPECT_DEATH/ASSERT_DEATH.
# define GTEST_UNSUPPORTED_DEATH_TEST_(statement, regex, terminator) \
    GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
    if (::testing::internal::AlwaysTrue()) { \
      GTEST_LOG_(WARNING) \
          << 'Death tests are not supported on this platform.\n' \
          << 'Statement '' #statement '' cannot be verified.'; \
    } else if (::testing::internal::AlwaysFalse()) { \
      ::testing::internal::RE::PartialMatch('.*', (regex)); \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
      terminator; \
    } else \
      ::testing::Message()
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Stores a parameter value and later creates tests parameterized with that
// value.
template <class TestClass>
class ParameterizedTestFactory : public TestFactoryBase {
 public:
  typedef typename TestClass::ParamType ParamType;
  explicit ParameterizedTestFactory(ParamType parameter) :
      parameter_(parameter) {}
  virtual Test* CreateTest() {
    TestClass::SetParam(&parameter_);
    return new TestClass();
  }
    }
    
      // Formats a byte as '%02X'.
  static std::string FormatByte(unsigned char value);
    
      explicit tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2, GTEST_BY_REF_(T3) f3, GTEST_BY_REF_(T4) f4,
      GTEST_BY_REF_(T5) f5, GTEST_BY_REF_(T6) f6, GTEST_BY_REF_(T7) f7,
      GTEST_BY_REF_(T8) f8) : f0_(f0), f1_(f1), f2_(f2), f3_(f3), f4_(f4),
      f5_(f5), f6_(f6), f7_(f7), f8_(f8) {}
    
    // A unique type used as the default value for the arguments of class
// template Types.  This allows us to simulate variadic templates
// (e.g. Types<int>, Type<int, double>, and etc), which C++ doesn't
// support directly.
struct None {};
    
    
    {  return result;
}
    
      if (options->Has(String::NewSymbol('target_level')) &&
      options->Get(String::NewSymbol('target_level'))->IsInt32()) {
    target_level = (int)(options->Get(
        String::NewSymbol('target_level'))->ToInt32()->Value());
    }
    
    #if defined (__cplusplus)
namespace rocksdb {
#endif
    }
    
    class CompactionFilterFactoryJniCallback : public JniCallback, public CompactionFilterFactory {
 public:
    CompactionFilterFactoryJniCallback(
        JNIEnv* env, jobject jcompaction_filter_factory);
    virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context);
    virtual const char* Name() const;
    }
    
    
    {  assert(odds > 0);
  if (odds % 7 == 0) {
    // class Random uses multiplier 16807, which is 7^5. If odds are
    // multiplier of 7, there might be limited values generated.
    odds++;
  }
  auto* r = Random::GetTLSInstance();
  bool crash = r->OneIn(odds);
  if (crash) {
    port::Crash(srcfile, srcline);
  }
}
    
    #include 'port/port.h'
#include 'util/random.h'
    
    
    {} // namespace aria2

    
    AbstractBtMessage::~AbstractBtMessage() = default;
    
      bool shouldProcess() const;
    
    
    {  virtual bool execute() CXX11_OVERRIDE;
};
    
    bool AbstractOptionHandler::isHidden() const { return flags_ & FLAG_HIDDEN; }
    
    public:
  AbstractProxyRequestCommand(cuid_t cuid, const std::shared_ptr<Request>& req,
                              const std::shared_ptr<FileEntry>& fileEntry,
                              RequestGroup* requestGroup, DownloadEngine* e,
                              const std::shared_ptr<Request>& proxyRequest,
                              const std::shared_ptr<SocketCore>& s);
    
    
    {  void setBtAnnounce(const std::shared_ptr<BtAnnounce>& btAnnounce);
};
    
      /**
   * The internal announce URL pointer points to next URL.
   * If the current URL is the last element of its group, then the first
   * element of the next group is pointed.
   */
  void announceFailure();
    
    #include 'Notifier.h'
    
    #include 'common.h'
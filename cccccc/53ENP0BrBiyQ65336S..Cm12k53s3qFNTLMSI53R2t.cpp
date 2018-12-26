
        
        class GenPythonOp {
 public:
  GenPythonOp(const OpDef& op_def, const ApiDef& api_def,
              const string& function_name);
  virtual ~GenPythonOp();
    }
    
      Safe_PyObjectPtr numpy_str = make_safe(MakePyString('numpy'));
  if (!numpy_str) {
    return false;
  }
  Safe_PyObjectPtr numpy = make_safe(PyImport_Import(numpy_str.get()));
  if (!numpy) {
    return false;
  }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Caches pointers to numpy arrays which need to be dereferenced.
static std::vector<void*>* DecrefCache() {
  static std::vector<void*>* decref_cache = new std::vector<void*>;
  return decref_cache;
}
    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL. Data and len are ignored.
void DelayedNumpyDecref(void* data, size_t len, void* obj);
    
    Safe_TF_StatusPtr make_safe(TF_Status* status) {
  return Safe_TF_StatusPtr(status);
}
    
    #include <memory>
    
    namespace stream_executor {
    }
    
    #include 'tensorflow/stream_executor/cuda/cuda_driver.h'
#include 'tensorflow/stream_executor/cuda/cuda_stream.h'
#include 'tensorflow/stream_executor/event.h'
#include 'tensorflow/stream_executor/lib/status.h'
    
    #ifndef ATOM_APP_COMMAND_LINE_ARGS_H_
#define ATOM_APP_COMMAND_LINE_ARGS_H_
    
    #ifndef ATOM_APP_UV_TASK_RUNNER_H_
#define ATOM_APP_UV_TASK_RUNNER_H_
    
    template <>
struct Converter<base::Time> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const base::Time& val) {
    v8::MaybeLocal<v8::Value> date =
        v8::Date::New(isolate->GetCurrentContext(), val.ToJsTime());
    if (date.IsEmpty())
      return v8::Null(isolate);
    else
      return date.ToLocalChecked();
  }
};
    
      // WindowListObserver:
  void OnWindowAllClosed() override;
    
      v8::Local<v8::Value> URLRequest(v8::Isolate* isolate);
    
    // static
v8::Local<v8::Value> PowerMonitor::Create(v8::Isolate* isolate) {
  if (!Browser::Get()->is_ready()) {
    isolate->ThrowException(v8::Exception::Error(mate::StringToV8(
        isolate,
        'Cannot require \'powerMonitor\' module before app is ready')));
    return v8::Null(isolate);
  }
    }
    
      // base::PowerObserver implementations:
  void OnPowerStateChange(bool on_battery_power) override;
  void OnSuspend() override;
  void OnResume() override;
    
    
    {}  // namespace atom
    
    namespace gfx {
class Image;
}
    
      // download::DownloadItem::Observer:
  void OnDownloadUpdated(download::DownloadItem* item) override;
    
    void AtomQuotaPermissionContext::RequestQuotaPermission(
    const content::StorageQuotaParams& params,
    int render_process_id,
    const PermissionCallback& callback) {
  callback.Run(response::QUOTA_PERMISSION_RESPONSE_ALLOW);
}
    
    #include 'atom/browser/auto_updater.h'
    
    bool swift::parseASTSection(SerializedModuleLoader *SML, StringRef buf,
                            SmallVectorImpl<std::string> &foundModules) {
  if (!serialization::isSerializedAST(buf))
    return false;
    }
    
    void CacheImpl::releaseValue(void *Value) {
  cache_release_value(static_cast<cache_t*>(Impl), Value);
}
    
      char *oldBegin = Begin;
  char *oldEnd = End;
  std::size_t oldSize = (std::size_t) (oldEnd - oldBegin);
    
    #include 'swift/Basic/PrefixMap.h'
#include 'swift/Basic/QuotedString.h'
#include 'llvm/ADT/SmallString.h'
#include 'llvm/Support/Compiler.h'
    
        const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    #include <QIcon>
#include <QPixmap>
#include <QString>
    
    #endif // BITCOIN_QT_QVALUECOMBOBOX_H

    
    /**
 * Changelog:
 * - March 2013, Diederik Huys:    original version
 * - November 2014, Pieter Wuille: updated to use Peter Dettman's parallel multiplication algorithm
 * - December 2014, Pieter Wuille: converted from YASM to GCC inline assembly
 */
    
    
    {    secp256k1_ecdsa_recoverable_signature_load(ctx, &r, &s, &recid, signature);
    VERIFY_CHECK(recid >= 0 && recid < 4);  /* should have been caught in parse_compact */
    secp256k1_scalar_set_b32(&m, msg32, NULL);
    if (secp256k1_ecdsa_sig_recover(&ctx->ecmult_ctx, &r, &s, &q, &m, recid)) {
        secp256k1_pubkey_save(pubkey, &q);
        return 1;
    } else {
        memset(pubkey, 0, sizeof(*pubkey));
        return 0;
    }
}
    
    #include <bech32.h>
#include <test/test_bitcoin.h>
    
    // Range() returns generators providing sequences of values in a range.
//
// Synopsis:
// Range(start, end)
//   - returns a generator producing a sequence of values {start, start+1,
//     start+2, ..., }.
// Range(start, end, step)
//   - returns a generator producing a sequence of values {start, start+step,
//     start+step+step, ..., }.
// Notes:
//   * The generated sequences never include end. For example, Range(1, 5)
//     returns a generator producing a sequence {1, 2, 3, 4}. Range(1, 9, 2)
//     returns a generator producing {1, 3, 5, 7}.
//   * start and end must have the same type. That type may be any integral or
//     floating-point type or a user defined type satisfying these conditions:
//     * It must be assignable (have operator=() defined).
//     * It must have operator+() (operator+(int-compatible type) for
//       two-operand version).
//     * It must have operator<() defined.
//     Elements in the resulting sequences will also have that type.
//   * Condition start < end must be satisfied in order for resulting sequences
//     to contain any elements.
//
template <typename T, typename IncrementT>
internal::ParamGenerator<T> Range(T start, T end, IncrementT step) {
  return internal::ParamGenerator<T>(
      new internal::RangeGenerator<T, IncrementT>(start, end, step));
}
    
    # define TYPED_TEST_P(CaseName, TestName) \
  namespace GTEST_CASE_NAMESPACE_(CaseName) { \
  template <typename gtest_TypeParam_> \
  class TestName : public CaseName<gtest_TypeParam_> { \
   private: \
    typedef CaseName<gtest_TypeParam_> TestFixture; \
    typedef gtest_TypeParam_ TypeParam; \
    virtual void TestBody(); \
  }; \
  static bool gtest_##TestName##_defined_ GTEST_ATTRIBUTE_UNUSED_ = \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName).AddTestName(\
          __FILE__, __LINE__, #CaseName, #TestName); \
  } \
  template <typename gtest_TypeParam_> \
  void GTEST_CASE_NAMESPACE_(CaseName)::TestName<gtest_TypeParam_>::TestBody()
    
    # else
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement)
    
    
    {
    {    // Next, recurses (at compile time) with the tail of the test list.
    return TypeParameterizedTestCase<Fixture, typename Tests::Tail, Types>
        ::Register(prefix, case_name, SkipComma(test_names));
  }
};
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    void Config::ParseHdfString(const std::string &hdfStr, Hdf &hdf) {
  hdf.fromString(hdfStr.c_str());
}
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    #include 'hphp/runtime/base/file.h'
    
    #include 'hphp/util/stack-trace.h'
    
    #include <dmlc/registry.h>
#include <functional>
#include <vector>
#include <utility>
#include <string>
#include './base.h'
#include './data.h'
#include './tree_model.h'
#include '../../src/common/host_device_vector.h'
    
    /*!
 * \brief Macro to register tree split evaluator.
 *
 * \code
 * // example of registering a split evaluator
 * XGBOOST_REGISTER_SPLIT_EVALUATOR(SplitEval, 'splitEval')
 * .describe('Some split evaluator')
 * .set_body([]() {
 *     return new SplitEval();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_SPLIT_EVALUATOR(UniqueID, Name) \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::tree::SplitEvaluatorReg& \
  __make_ ## SplitEvaluatorReg ## _ ## UniqueID ## __ = \
      ::dmlc::Registry< ::xgboost::tree::SplitEvaluatorReg>::Get()->__REGISTER__(Name)  //NOLINT
    
    // implementing configure.
template<typename PairIter>
inline void GradientBooster::Configure(PairIter begin, PairIter end) {
  std::vector<std::pair<std::string, std::string> > vec(begin, end);
  this->Configure(vec);
}
    
        /**
    @brief Get the center position of twirl action.
    @return The center position of twirl action.
    */
    const Vec2& getPosition() const { return _position; }
    /**
    @brief Set the center position of twirl action.
    @param position The center position of twirl action will be set.
    */
    void setPosition(const Vec2& position);
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(Show);
};
    
    NS_CC_BEGIN
//
// singleton stuff
//
typedef struct _hashElement
{
    struct _ccArray     *actions;
    Node                *target;
    int                 actionIndex;
    Action              *currentAction;
    bool                currentActionSalvaged;
    bool                paused;
    UT_hash_handle      hh;
} tHashElement;
    
    
    /** Returns the numbers of actions that are running in a
     *  certain target with a specific tag.
     * Like getNumberOfRunningActionsInTarget Composable actions
     * are counted as 1 action. Example:
     * - If you are running 1 Sequence of 7 actions, it will return 1.
     * - If you are running 7 Sequences of 2 actions, it will return 7.
     *
     * @param target    A certain target.
     * @param tag       Tag that will be searched.
     * @return  The numbers of actions that are running in a certain target
     *          with a specific tag.
     * @see getNumberOfRunningActionsInTarget
     * @js NA
     */
    virtual size_t getNumberOfRunningActionsInTargetByTag(const Node *target, int tag);
    
        std::unique_ptr<DHTTaskQueue> taskQueue;
    
    #include <cstring>
#include <cassert>
#include <cstdio>
#include <utility>
    
    #include <vector>
#include <memory>
    
    namespace aria2 {
    }
    
    void DHTTokenUpdateCommand::process()
{
  try {
    tokenTracker_->updateTokenSecret();
  }
  catch (RecoverableException& e) {
    A2_LOG_ERROR_EX(EX_EXCEPTION_CAUGHT, e);
  }
}
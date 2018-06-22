
        
        
    {  TRand random_;
  IntSimdMatrix base_;
};
    
    
class WERD;
class UNICHARSET;
    
      // Return the id associated with the given unichar representation,
  // this representation MUST exist within the UNICHARMAP. The first
  // length characters (maximum) from unichar_repr are used. The length
  // MUST be non-zero.
  UNICHAR_ID unichar_to_id(const char* const unichar_repr, int length) const;
    
    #endif  // TESSERACT_CCUTIL_UNICODES_H_

    
    Dawg *DawgLoader::Load() {
  TFile fp;
  if (!data_file_->GetComponent(tessdata_dawg_type_, &fp)) return nullptr;
  DawgType dawg_type;
  PermuterType perm_type;
  switch (tessdata_dawg_type_) {
    case TESSDATA_PUNC_DAWG:
    case TESSDATA_LSTM_PUNC_DAWG:
      dawg_type = DAWG_TYPE_PUNCTUATION;
      perm_type = PUNC_PERM;
      break;
    case TESSDATA_SYSTEM_DAWG:
    case TESSDATA_LSTM_SYSTEM_DAWG:
      dawg_type = DAWG_TYPE_WORD;
      perm_type = SYSTEM_DAWG_PERM;
      break;
    case TESSDATA_NUMBER_DAWG:
    case TESSDATA_LSTM_NUMBER_DAWG:
      dawg_type = DAWG_TYPE_NUMBER;
      perm_type = NUMBER_PERM;
      break;
    case TESSDATA_BIGRAM_DAWG:
      dawg_type = DAWG_TYPE_WORD;  // doesn't actually matter
      perm_type = COMPOUND_PERM;   // doesn't actually matter
      break;
    case TESSDATA_UNAMBIG_DAWG:
      dawg_type = DAWG_TYPE_WORD;
      perm_type = SYSTEM_DAWG_PERM;
      break;
    case TESSDATA_FREQ_DAWG:
      dawg_type = DAWG_TYPE_WORD;
      perm_type = FREQ_DAWG_PERM;
      break;
    default:
      return nullptr;
  }
  SquishedDawg *retval =
      new SquishedDawg(dawg_type, lang_, perm_type, dawg_debug_level_);
  if (retval->Load(&fp)) return retval;
  delete retval;
  return nullptr;
}
    
      // If we manage the given dawg, decrement its count,
  // and possibly delete it if the count reaches zero.
  // If dawg is unknown to us, return false.
  bool FreeDawg(Dawg *dawg) {
    return dawgs_.Free(dawg);
  }
    
     private:
  // Constructor is private as the instance only holds information specific to
  // the current labels, outputs etc, and is built by the static function.
  CTC(const GenericVector<int>& labels, int null_char,
      const GENERIC_2D_ARRAY<float>& outputs);
    
    // Non-linearity (sigmoid) functions and their derivatives.
struct FFunc {
  inline double operator()(double x) const { return Logistic(x); }
};
struct FPrime {
  inline double operator()(double y) const { return y * (1.0 - y); }
};
struct ClipFFunc {
  inline double operator()(double x) const {
    if (x <= 0.0) return 0.0;
    if (x >= 1.0) return 1.0;
    return x;
  }
};
struct ClipFPrime {
  inline double operator()(double y) const {
    return 0.0 < y && y < 1.0 ? 1.0 : 0.0;
  }
};
struct Relu {
  inline double operator()(double x) const {
    if (x <= 0.0) return 0.0;
    return x;
  }
};
struct ReluPrime {
  inline double operator()(double y) const { return 0.0 < y ? 1.0 : 0.0; }
};
struct GFunc {
  inline double operator()(double x) const { return Tanh(x); }
};
struct GPrime {
  inline double operator()(double y) const { return 1.0 - y * y; }
};
struct ClipGFunc {
  inline double operator()(double x) const {
    if (x <= -1.0) return -1.0;
    if (x >= 1.0) return 1.0;
    return x;
  }
};
struct ClipGPrime {
  inline double operator()(double y) const {
    return -1.0 < y && y < 1.0 ? 1.0 : 0.0;
  }
};
struct HFunc {
  inline double operator()(double x) const { return Tanh(x); }
};
struct HPrime {
  inline double operator()(double y) const {
    double u = Tanh(y);
    return 1.0 - u * u;
  }
};
struct UnityFunc {
  inline double operator()(double x) const { return 1.0; }
};
struct IdentityFunc {
  inline double operator()(double x) const { return x; }
};
    
    
using namespace dmlc;
    
    
    {  delete metric;
  metric = xgboost::Metric::Create('ndcg@2-');
  ASSERT_STREQ(metric->Name(), 'ndcg@2-');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.3868f, 0.001f);
}
    
    #include <dmlc/registry.h>
#include <xgboost/base.h>
#include <xgboost/data.h>
#include <functional>
#include <string>
#include <utility>
#include <vector>
#include '../../src/gbm/gblinear_model.h'
#include '../../src/common/host_device_vector.h'
    
      XGBOOST_DEVICE explicit GradientPairInternal(int value) {
    *this = GradientPairInternal<T>(static_cast<float>(value),
                                  static_cast<float>(value));
  }
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct TreeUpdaterReg
    : public dmlc::FunctionRegEntryBase<TreeUpdaterReg,
                                        std::function<TreeUpdater* ()> > {
};
    
    #include <cstdint>
#include <iosfwd>
#include <typeinfo>
#include <vector>
    
    
    {  bool cas(T& u, T& v) {
    Node* n = new Node(v);
    hazptr_holder<Atom> hptr;
    Node* p;
    while (true) {
      p = hptr.get_protected(node_);
      if (p->val_ != u) {
        delete n;
        return false;
      }
      if (node_.compare_exchange_weak(
              p, n, std::memory_order_relaxed, std::memory_order_release)) {
        break;
      }
    }
    hptr.reset();
    p->retire();
    return true;
  }
};
    
    
    {  // Test that inheriting from MoveOnly doesn't prevent the move
  // constructor from being noexcept.
  static_assert(
      std::is_nothrow_move_constructible<FooBar>::value,
      'Should have noexcept move constructor');
}
    
    #include <thread>
    
      folly::EventBase* getEventBase() override;
    
      auto barrier = std::make_shared<boost::barrier>(nThreads + 1);
    
    DEFINE_FIND_STATIC_METHOD(KXlog_appenderOpenWithMultipathWithLevel, KXlog, 'appenderOpen', '(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_appenderOpen
	(JNIEnv *env, jclass, jint level, jint mode, jstring _cache_dir, jstring _log_dir, jstring _nameprefix, jstring _pubkey) {
	if (NULL == _log_dir || NULL == _nameprefix) {
		return;
	}
    }
    
    #endif

    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {        return NULL;
    }
    
        const jchar* GetStringCritical(jstring string, jboolean* isCopy)
    { return functions->GetStringCritical(this, string, isCopy); }
    
    void YGNode::setStyleFlexDirection(YGFlexDirection direction) {
  style_.flexDirection = direction;
}
    
    YG_NODE_STYLE_PROPERTY(YGDirection, Direction, direction);
YG_NODE_STYLE_PROPERTY(YGFlexDirection, FlexDirection, flexDirection);
YG_NODE_STYLE_PROPERTY(YGJustify, JustifyContent, justifyContent);
YG_NODE_STYLE_PROPERTY(YGAlign, AlignContent, alignContent);
YG_NODE_STYLE_PROPERTY(YGAlign, AlignItems, alignItems);
YG_NODE_STYLE_PROPERTY(YGAlign, AlignSelf, alignSelf);
YG_NODE_STYLE_PROPERTY(YGPositionType, PositionType, positionType);
YG_NODE_STYLE_PROPERTY(YGWrap, FlexWrap, flexWrap);
YG_NODE_STYLE_PROPERTY(YGOverflow, Overflow, overflow);
YG_NODE_STYLE_PROPERTY(YGDisplay, Display, display);
YG_NODE_STYLE_PROPERTY(float, Flex, flex);
YG_NODE_STYLE_PROPERTY(float, FlexGrow, flexGrow);
YG_NODE_STYLE_PROPERTY(float, FlexShrink, flexShrink);
YG_NODE_STYLE_PROPERTY_UNIT_AUTO(YGValue, FlexBasis, flexBasis);
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    void Node::setAlignItems(int alignItems)
{
    YGNodeStyleSetAlignItems(m_node, static_cast<YGAlign>(alignItems));
}
    
        double getBorder(int edge) const;
    
    #pragma once
#include <atomic>
#include <fb/assert.h>
#include <fb/noncopyable.h>
#include <fb/nonmovable.h>
#include <fb/RefPtr.h>
    
    // Keeps a thread-local reference to the current thread's JNIEnv.
struct Environment {
  // May be null if this thread isn't attached to the JVM
  FBEXPORT static JNIEnv* current();
  static void initialize(JavaVM* vm);
    }
    
      bool operator==(const ProgramLocation& other) const {
    // Assumes that the strings are static
    return (m_functionName == other.m_functionName) && (m_fileName == other.m_fileName) && m_lineNumber == other.m_lineNumber;
  }
    
    // This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];
    
    #include <cstdlib>
#include <ostream>
#include <cmath>
    
      // All the time results are reported after being multiplied by the
  // time unit multiplier. But since RMS is a relative quantity it
  // should not be multiplied at all. So, here, we _divide_ it by the
  // multiplier so that when it is multiplied later the result is the
  // correct one.
  double multiplier = GetTimeUnitMultiplier(reports[0].time_unit);
    
      // Format items per second
  std::string items;
  if (result.items_per_second > 0) {
    items =
        StrCat(' ', HumanReadableNumber(result.items_per_second), ' items/s');
  }
    
      // Compile a regular expression matcher from spec.  Returns true on success.
  //
  // On failure (and if error is not nullptr), error is populated with a human
  // readable error message if an error occurs.
  bool Init(const std::string& spec, std::string* error);
    
    #include 'benchmark/benchmark.h'
#include 'timers.h'
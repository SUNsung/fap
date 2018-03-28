
        
        // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    #include 'content/nw/src/api/base/base.h'
    
    namespace content {
class RenderView;
}
    
    
    {}  // namespace nwapi
    
       bool HasIcon(int command_id) override;
    
     protected:
  ~NwAppSetProxyConfigFunction() override;
    
    class NwClipboardClearSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardClearSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
    static void TestKey(const std::string& key,
                    uint64_t seq,
                    ValueType vt) {
  std::string encoded = IKey(key, seq, vt);
    }
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    void TableCache::Evict(uint64_t file_number) {
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  cache_->Erase(Slice(buf, sizeof(buf)));
}
    
    TEST(FindFileTest, MultipleNullBoundaries) {
  Add('150', '200');
  Add('200', '250');
  Add('300', '350');
  Add('400', '450');
  ASSERT_TRUE(! Overlaps(NULL, '149'));
  ASSERT_TRUE(! Overlaps('451', NULL));
  ASSERT_TRUE(Overlaps(NULL, NULL));
  ASSERT_TRUE(Overlaps(NULL, '150'));
  ASSERT_TRUE(Overlaps(NULL, '199'));
  ASSERT_TRUE(Overlaps(NULL, '200'));
  ASSERT_TRUE(Overlaps(NULL, '201'));
  ASSERT_TRUE(Overlaps(NULL, '400'));
  ASSERT_TRUE(Overlaps(NULL, '800'));
  ASSERT_TRUE(Overlaps('100', NULL));
  ASSERT_TRUE(Overlaps('200', NULL));
  ASSERT_TRUE(Overlaps('449', NULL));
  ASSERT_TRUE(Overlaps('450', NULL));
}
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
    struct CV_EXPORTS IntrinsicParams
{
    Vec2d f;
    Vec2d c;
    Vec4d k;
    double alpha;
    std::vector<uchar> isEstimate;
    }
    
    namespace {
    }
    
                // Extension: 3.1
            DrawArraysInstanced = Switch_DrawArraysInstanced;
            DrawElementsInstanced = Switch_DrawElementsInstanced;
            TexBuffer = Switch_TexBuffer;
            PrimitiveRestartIndex = Switch_PrimitiveRestartIndex;
    
      // Streams a pointer value to this object.
  //
  // This function is an overload of the previous one.  When you
  // stream a pointer to a Message, this definition will be used as it
  // is more specialized.  (The C++ Standard, section
  // [temp.func.order].)  If you stream a non-pointer, then the
  // previous definition will be used.
  //
  // The reason for this overload is that streaming a NULL pointer to
  // ostream is undefined behavior.  Depending on the compiler, you
  // may get '0', '(nil)', '(null)', or an access violation.  To
  // ensure consistent result across compilers, we always treat NULL
  // as '(null)'.
  template <typename T>
  inline Message& operator <<(T* const& pointer) {  // NOLINT
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
    return *this;
  }
#endif  // GTEST_OS_SYMBIAN
    
    // Functions producing parameter generators.
//
// Google Test uses these generators to produce parameters for value-
// parameterized tests. When a parameterized test case is instantiated
// with a particular generator, Google Test creates and runs tests
// for each element in the sequence produced by the generator.
//
// In the following sample, tests from test case FooTest are instantiated
// each three times with parameter values 3, 5, and 8:
//
// class FooTest : public TestWithParam<int> { ... };
//
// TEST_P(FooTest, TestThis) {
// }
// TEST_P(FooTest, TestThat) {
// }
// INSTANTIATE_TEST_CASE_P(TestSequence, FooTest, Values(3, 5, 8));
//
    
    ]]
    
    namespace testing {
    }
    
      // Returns a pointer to the last occurence of a valid path separator in
  // the FilePath. On Windows, for example, both '/' and '\' are valid path
  // separators. Returns NULL if no path separator was found.
  const char* FindLastPathSeparator() const;
    
    // scripts/fuse_gtest.py depends on gtest's own header being #included
// *unconditionally*.  Therefore these #includes cannot be moved
// inside #if GTEST_HAS_PARAM_TEST.
#include 'gtest/internal/gtest-param-util.h'
#include 'gtest/internal/gtest-port.h'
    
    
    {  const T begin_;
  const T end_;
  const IncrementT step_;
  // The index for the end() iterator. All the elements in the generated
  // sequence are indexed (0-based) to aid iterator comparison.
  const int end_index_;
};  // class RangeGenerator
    
    #include <string.h>
#include <string>
    
    $range i 1..n
template <$for i, [[GTEST_TEMPLATE_ T$i = NoneT]]>
struct Templates {
  typedef Templates$n<$for i, [[T$i]]> type;
};
    
    using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestCase;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(LogSoftmax)
        .Description('Log Softmax takes one input data (Tensor<T>) and produces one output '
            'data (Tensor<T>) where the function, y = log(1 / sum(exp(X)) * exp(x)), is applied '
            'to the tensor elementwise.')
        .Input('input', 'The input tensor that's coerced into a 2D matrix of size (NxD) as '
            'described above.', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('axis', '(int) default to 1; describes the axis of the inputs when coerced '
            'to 2D; defaults to one because the 0th axis most likely describes '
            'the batch_size', AttrType::AttributeProto_AttributeType_INT);
    
    #define REGISTER_BINARY_LOGIC_OPERATOR_SCHEMA(OpName)                                                           \
    REGISTER_OPERATOR_SCHEMA(OpName)                                                                            \
        .Description('Returns the tensor resulted from performing the ''#OpName'' logical operation'            \
            'elementwise on the input tensors A and B. If broadcasting is enabled, the right-hand-side'         \
            'argument will be broadcasted to match the shape of left-hand-side argument. Refer to Add'          \
            ' for a detailed description of the broadcasting rules.')                                           \
        .Input('A', 'First operand.', 'T')                                                                      \
        .Input('B', 'Second operand. With broadcasting can be of smaller size than A. If broadcasting'          \
            'is disabled, it should be of the same size.', 'T')                                                 \
        .Output('C', 'Result, has same dimensions and A and type bool.', 'T')                                   \
        .TypeConstraint('T', { 'tensor(bool)' }, 'Constrain input and output types to bool tensor.')            \
        .Attr('axis', 'If set, defines the broadcast dimensions.',                                              \
            AttrType::AttributeProto_AttributeType_INT)                                                         \
        .Attr('broadcast', 'Pass 1 to enable broadcasting.',                                                    \
            AttrType::AttributeProto_AttributeType_INT);
    
    
    REGISTER_OPERATOR_SCHEMA(LabelEncoder)
        .SetDomain(c_mlDomain)
        .Input('X', 'Data to be encoded', 'T1')
        .Output('Y', 'Encoded output data', 'T2')
        .Description(R'DOC(
            Convert class label to their integral type and vice versa.
            In both cases the operator is instantiated with the list of class strings.
            The integral value of the string is the index position in the list.
            )DOC')
        .TypeConstraint('T1', { 'tensor(string)', 'tensor(int64)' }, ' allowed types.')
        .TypeConstraint('T2', { 'tensor(string)', 'tensor(int64)' }, ' allowed types.')
        .Attr('classes_strings', 'List of class label strings to be encoded as INTS', AttrType::AttributeProto_AttributeType_STRINGS)
        .Attr('default_int64', 'Default value if not in class list as int64', AttrType::AttributeProto_AttributeType_INT)
        .Attr('default_string', 'Default value if not in class list as string', AttrType::AttributeProto_AttributeType_STRING);
    
        // Adds an utterance to the chunk.
    void Add(UtteranceDescription&& utterance)
    {
        if (IsInRam())
        {
            LogicError('Frames already paged into RAM -- too late to add data.');
        }
    }
    
    // This class stores sequence data for HTK for floats.
struct HTKFloatSequenceData : DenseSequenceData
{
    HTKFloatSequenceData(FeatureMatrix&& data, const NDShape& frameShape) : m_buffer(data), m_frameShape(frameShape)
    {
        m_numberOfSamples = (uint32_t)data.GetNumberOfColumns();
        if (m_numberOfSamples != data.GetNumberOfColumns())
        {
            RuntimeError('Maximum number of samples per sequence exceeded.');
        }
    }
    }
    
    using namespace std;
    
    FunctionPtr CreateRNN(const ONNXIR::Node *node, const std::vector<Variable> &inputs, const std::string &direction,
    const std::vector<string> &activations, const std::vector<float> &activation_alpha, const std::vector<float> &activation_beta);
    
    // ===========================================================================
// ssematrix -- main matrix type with allocation
// ===========================================================================
    
        InvalidateCompiledNetwork();
    
    void UnregisterShellMenu(std::wstring opt, wchar_t* keyBaseName)
{
	HKEY root = GetRootKey(opt);
	HKEY cmderKey;
	FAIL_ON_ERROR(RegCreateKeyEx(root, keyBaseName, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &cmderKey, NULL));
	FAIL_ON_ERROR(RegDeleteTree(cmderKey, NULL));
	RegCloseKey(cmderKey);
	RegCloseKey(root);
}
    
    bool js_cocos2dx_studio_SkeletonNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_SkeletonNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_SkeletonNode(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_SkeletonNode_getBoneNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkeletonNode_changeSkins(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkeletonNode_addSkinGroup(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkeletonNode_getAllSubBonesMap(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkeletonNode_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkeletonNode_SkeletonNode(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
        virtual void DrawTransform(const b2Transform& xf);
    
    			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.angularDamping = 2.0f;
			bd.linearDamping = 0.5f;
    
    			b2FixtureDef fd;
			fd.shape = &circle;
			fd.density = 1.0f;
			fd.friction = 0.9f;
    
    
/*
 * WakeUpLock.cpp
 *
 *  Created on: 2012-9-28
 *      Author: yerungui
 */
    
    #include 'comm/debugger/test_spy_sample.h'
#include 'comm/xlogger/xlogger.h'
    
    //
//  testspy_spy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-13.
//
    
      bool ContainsWord(const Word &W) const {
    return std::any_of(begin(), end(), [&](const DictionaryEntry &DE) {
      return DE.GetW() == W;
    });
  }
  const DictionaryEntry *begin() const { return &DE[0]; }
  const DictionaryEntry *end() const { return begin() + Size; }
  DictionaryEntry & operator[] (size_t Idx) {
    assert(Idx < Size);
    return DE[Idx];
  }
  void push_back(DictionaryEntry DE) {
    if (Size < kMaxDictSize)
      this->DE[Size++] = DE;
  }
  void clear() { Size = 0; }
  bool empty() const { return Size == 0; }
  size_t size() const { return Size; }
    
    #endif

    
      FindClose(FindHandle);
    
      // Public for tests.
  void ResetCoverage();
    
    #include 'FuzzerDefs.h'
    
      /// Creates a cross-over of two pieces of Data, returns its size.
  size_t CrossOver(const uint8_t *Data1, size_t Size1, const uint8_t *Data2,
                   size_t Size2, uint8_t *Out, size_t MaxOutSize);
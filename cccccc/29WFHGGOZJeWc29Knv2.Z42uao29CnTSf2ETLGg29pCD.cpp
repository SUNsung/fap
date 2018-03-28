
        
        #endif

    
      /// Represents an ObjC method reference that will be invoked by a form of
  /// objc_msgSend.
  class ObjCMethod {
    /// The SILDeclRef declaring the method.
    SILDeclRef method;
    /// For a bounded call, the static type that provides the lower bound for
    /// the search. Null for unbounded calls that will look for the method in
    /// the dynamic type of the object.
    llvm::PointerIntPair<SILType, 1, bool> searchTypeAndSuper;
    }
    
    
    {  auto *result = new (sink.allocator)
      Completion(std::move(base), copyString(sink.allocator, name),
                 copyString(sink.allocator, description));
  result->moduleImportDepth = moduleImportDepth;
  result->popularityFactor = popularityFactor;
  result->opaqueCustomKind = customKind;
  return result;
}
    
      /// The list of regular users from the last run of the checker.
  llvm::SmallVector<SILInstruction *, 16> LifetimeEndingUsers;
    
    @interface NumberBridgingTester : NSObject
- (BOOL)verifyKeysInRange:(NSRange)range existInDictionary:(NSDictionary *)dictionary;
@end
    
    #ifndef SWIFT_INDEX_INDEXRECORD_H
#define SWIFT_INDEX_INDEXRECORD_H
    
    enum class ASTNodeKind : uint8_t {
#define MARKUP_AST_NODE(Id, Parent) Id,
#define ABSTRACT_MARKUP_AST_NODE(Id, Parent)
#define MARKUP_AST_NODE_RANGE(Id, FirstId, LastId) \
  First_##Id = FirstId, Last_##Id = LastId,
#include 'swift/Markup/ASTNodes.def'
};
    
    #include 'swift/SIL/SILDebugScope.h'
#include 'swift/SIL/SILFunction.h'
    
    #include 'swift/AST/Substitution.h'
#include 'llvm/ADT/ArrayRef.h'
#include 'llvm/ADT/FoldingSet.h'
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(NULL) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != NULL) {
      other_end_->other_end_ = this;
      src.other_end_ = NULL;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != NULL) {
      other_end_->other_end_ = this;
      src.other_end_ = NULL;
    }
  }
    }
    
    // Returns the size of the sparse charset space.
int SampleIterator::SparseCharsetSize() const {
  return charset_map_ != NULL
      ? charset_map_->SparseSize()
      : (shape_table_ != NULL ? shape_table_->NumShapes()
                              : sample_set_->charsetsize());
}
    
        std::wstring Value::AsString() const
    {
        wstringstream wss;
        if (IsValid())
            wss << L'Value(' << Shape().AsString() << ', ' << DeviceKindName(Device().Type()) << L')';
        else
            wss << L'Value(###)';
        return wss.str();
    }
    
    template <class ElemType>
class BinaryReader : public DataReaderBase
{
    size_t m_mbSize;           // size of minibatch requested
    size_t m_mbStartSample;    // starting sample # of the next minibatch
    size_t m_epochSize;        // size of an epoch
    size_t m_epoch;            // which epoch are we on
    size_t m_epochStartSample; // the starting sample for the epoch
    size_t m_totalSamples;     // number of samples in the dataset
    bool m_partialMinibatch;   // a partial minibatch is allowed
    MBLayoutPtr m_pMBLayout;
    }
    
    BOOST_FIXTURE_TEST_CASE(MatrixSparseElementWisePower, RandomSeedFixture)
{
    Matrix<float> mAdense(c_deviceIdZero);
    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -3.0f, 0.1f, IncrementCounter()), 0);
    Matrix<float> mAsparse(mAdense.DeepClone());
    mAsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    }
    
    // access the parser through one of these functions
ExpressionPtr ParseConfigDictFromString(wstring text, wstring location, vector<wstring>&& includePaths);          // parses a list of dictionary members, returns a dictionary expression
// TODO: These rvalue references are no longer adding value, change to const<>&
//ExpressionPtr ParseConfigDictFromFile(wstring path, vector<wstring> includePaths);              // likewise, but from a file path
ExpressionPtr ParseConfigExpression(const wstring& sourceText, vector<wstring>&& includePaths); // parses a single expression from sourceText, which is meant to contain an include statement, hence includePaths
    
        // EvaluateNDLSnippet - evaluate the passed snippet of NDL into a computational network
    // script - [in] text of the NDL snippet
    // network - [in/out] computation network to insert NDL into
    void EvaluateNDLSnippet(const ConfigValue& script, ComputationNetworkPtr network)
    {
        NDLUtil<ElemType> ndlUtil(network);
        ndlUtil.ProcessNDLConfig(script);
    }
    
    // The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DATAWRITER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DATAWRITER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef _WIN32
#if defined(DATAWRITER_EXPORTS)
#define DATAWRITER_API __declspec(dllexport)
#elif defined(DATAWRITER_LOCAL)
#define DATAWRITER_API
#else
#define DATAWRITER_API __declspec(dllimport)
#endif
#else
#define DATAWRITER_API
#endif
    
    #endif // __cocos2dx_builder_h__

    
    bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DPointToPointConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DPointToPointConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_getPivotPointInA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_getPivotPointInB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_setPivotPointInA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_setPivotPointInB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DPointToPointConstraint_Physics3DPointToPointConstraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    	static Test* Create()
	{
		return new Breakable;
	}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        bool Check();  // true pass, false limit
    
    void Test_Spy_Sample::TestFun0()
{
    SPY_HOOK_THIS_API(TestFun0);
    int i = 0;
    SPY_ATTACH_VARIABLE('TestFun0 i', i);
    i++;
    xinfo2(TSF'Test');
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #ifndef SCOP_JENV_H_
#define SCOP_JENV_H_
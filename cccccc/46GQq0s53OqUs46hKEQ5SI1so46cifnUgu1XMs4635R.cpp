
        
            if (info.bytes > buf.size()) {
      llvm::dbgs() << 'AST section too small.\n';
      return false;
    }
    
    
    {  DefaultCacheKey CKey(const_cast<void*>(Key), &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
    return true;
  }
  return false;
}
    
      std::size_t capacity = EndOfAllocation - Begin;
  std::size_t requiredCapacity = capacity + needed;
  do {
    capacity = 2 * capacity + 16;
  } while (capacity < requiredCapacity);
    
    unsigned swift::measureNewline(const char *BufferPtr, const char *BufferEnd) {
  if (BufferPtr == BufferEnd)
    return 0;
    }
    
      InvocationInfo constructInvocation(const LinkJobAction &job,
                                     const JobContext &context) const override;
    
    static const char* kImplVersionName = 'api_version';
    
    // Checks if the file contains any enum definitions (at the root or
// nested under a message).
bool FileContainsEnums(const FileDescriptor* file) {
  if (file->enum_type_count() > 0) {
    return true;
  }
  for (int i = 0; i < file->message_type_count(); i++) {
    if (MessageContainsEnums(file->message_type(i))) {
      return true;
    }
  }
  return false;
}
    
    TEST(TemplateUtilTest, TestIdentity) {
  EXPECT_TRUE(
      (type_equals_<GOOGLE_NAMESPACE::identity_<int>::type, int>::value));
  EXPECT_TRUE(
      (type_equals_<GOOGLE_NAMESPACE::identity_<void>::type, void>::value));
}
    
    #include <caffe/layer.hpp>
#include <caffe/blob.hpp>
#include <caffe/layer_factory.hpp>
    
    
    {}  // namespace mxnet

    
    
template<typename xpu, typename DType>
inline void KhatriRaoCompute_(const nnvm::NodeAttrs &attrs,
                              const OpContext &ctx,
                              const std::vector<TBlob> &in_data,
                              const std::vector<OpReqType> &req,
                              const std::vector<TBlob> &out_data) {
  using namespace mxnet_op;
  if (req[0] == kNullOp) return;
    }
    
    
    {    typename DataType<DType>::ScaleType alpha = (req[bs::kData] == kNullOp) ? 0.0f : 1.0f;
    typename DataType<DType>::ScaleType beta = (req[bs::kData] == kAddTo) ? 1.0f : 0.0f;
    typename DataType<DType>::ScaleType alpha_dgrid = 1.0f;
    typename DataType<DType>::ScaleType beta_dgrid = 0.0f;
    CUDNN_CALL(cudnnSpatialTfSamplerBackward(s->dnn_handle_,
                                             st_desc_,
                                             &alpha,
                                             in_desc_,
                                             data.dptr_,
                                             &beta,
                                             in_desc_/*reuse in_desc_*/,
                                             gdata.dptr_/*output*/,
                                             &alpha_dgrid,
                                             out_desc_/*reuse out_desc_*/,
                                             grad.dptr_,
                                             grid_tmp.dptr_,
                                             &beta_dgrid,
                                             grid_tmp.dptr_));
    Assign(ggrid, req[bs::kGrid], transpose(grid_tmp, Shape4(0, 3, 1, 2)));
  }
    
        // Make sure that the dictionary contains all required keys, and if it does, return version value
    // from the dictionary.
    template <typename T>
    inline size_t ValidateDictionary(const Dictionary& dict, const std::vector<std::wstring>& requiredKeys, const std::wstring& typeValue, size_t currentVersion)
    { 
        const auto& version = GetVersion(dict);
    }
    
    
    {            sequenceLengths[i] = currentSequenceDataShape.SubShape(fullyDefinedSampleShape.Rank()).TotalSize();
            maxSequenceLength = std::max(maxSequenceLength, sequenceLengths[i]);
        }
    
    
    {
    {    private:
        // Disallow copy and move construction and assignment
        VariableFields(const VariableFields&) = delete; VariableFields& operator=(const VariableFields& other) = delete; VariableFields(VariableFields&&) = delete; VariableFields& operator=(VariableFields&&) = delete;
    };
}

    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
            // all cloned nodes' inputs must be redirected if they reference a node that has been cloned as well
        size_t numRelinks = 0; // (statistics: how many inputs have we relinked?)
        for (let& clonedNodesKV : clonedNodes)
        {
            let& node = clonedNodesKV.second;
            let& inputs2 = node->GetInputs();
            for (size_t i = 0; i < inputs2.size(); i++)
            {
                fprintf(stderr, '%ls.inputs[%d] = %ls (%d)', node->NodeName().c_str(), (int)i, inputs2[i]->NodeName().c_str(), (int)inputs2[i]->m_uniqueNumericId);
                let iter = clonedNodes.find(inputs2[i]);
                if (iter == clonedNodes.end())
                    continue;
                // input is also a cloned node: relink
                node->SetInput(i, iter->second);
                fprintf(stderr, ' ==>  %ls (%d)\n', inputs2[i]->NodeName().c_str(), (int)inputs2[i]->m_uniqueNumericId);
                numRelinks++;
            }
        }
    
        virtual void BackpropToNonLooping(size_t inputIndex) override
    {
        LogicError('The node \'%ls\' can be used in training, but it does not participate in gradient propagation.', OperationName().c_str());
    }
    
            // For windowed LSTM, CNTK is providing data with the second dimension being time-like and the third dimension
        // being minibatch index. CuDnn expects the second dimension to be minibatch index, and the third dimension
        // to be time-like. This sequence of operations creates a transposed copy of the data in m_transposedInput
        // and shapeXT
    
        const int nums[] = {0,4,3,0};
    vector<int> nums_vec( nums, nums + sizeof(nums)/sizeof(int) );
    int target = 0;
    printVec(Solution().twoSum(nums_vec, target));
    
    
    {        return res;
    }
    
    
    {
    {                if(prev->right == NULL){
                    prev->right = cur;
                    cur = cur->left;
                }
                else{
                    prev->right = NULL;
                    res.push_back(cur->val);
                    cur = cur->right;
                }
            }
        }
    
    int main() {
    }
    
    /// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
            stack.push(root);
        while(!stack.empty()){
    }
    
    void
RuleBasedCollator::setAttribute(UColAttribute attr, UColAttributeValue value,
                                UErrorCode &errorCode) {
    UColAttributeValue oldValue = getAttribute(attr, errorCode);
    if(U_FAILURE(errorCode)) { return; }
    if(value == oldValue) {
        setAttributeExplicitly(attr);
        return;
    }
    const CollationSettings &defaultSettings = getDefaultSettings();
    if(settings == &defaultSettings) {
        if(value == UCOL_DEFAULT) {
            setAttributeDefault(attr);
            return;
        }
    }
    CollationSettings *ownedSettings = SharedObject::copyOnWrite(settings);
    if(ownedSettings == NULL) {
        errorCode = U_MEMORY_ALLOCATION_ERROR;
        return;
    }
    }
    
    ScriptSet &ScriptSet::parseScripts(const UnicodeString &scriptString, UErrorCode &status) {
    resetAll();
    if (U_FAILURE(status)) {
        return *this;
    }
    UnicodeString oneScriptName;
    for (int32_t i=0; i<scriptString.length();) {
        UChar32 c = scriptString.char32At(i);
        i = scriptString.moveIndex32(i, 1);
        if (!u_isUWhiteSpace(c)) {
            oneScriptName.append(c);
            if (i < scriptString.length()) {
                continue;
            }
        }
        if (oneScriptName.length() > 0) {
            char buf[40];
            oneScriptName.extract(0, oneScriptName.length(), buf, sizeof(buf)-1, US_INV);
            buf[sizeof(buf)-1] = 0;
            int32_t sc = u_getPropertyValueEnum(UCHAR_SCRIPT, buf);
            if (sc == UCHAR_INVALID_CODE) {
                status = U_ILLEGAL_ARGUMENT_ERROR;
            } else {
                this->set((UScriptCode)sc, status);
            }
            if (U_FAILURE(status)) {
                return *this;
            }
            oneScriptName.remove();
        }
    }
    return *this;
}
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};
    
    class U_I18N_API SharedNumberFormat : public SharedObject {
public:
    SharedNumberFormat(NumberFormat *nfToAdopt) : ptr(nfToAdopt) { }
    virtual ~SharedNumberFormat();
    const NumberFormat *get() const { return ptr; }
    const NumberFormat *operator->() const { return ptr; }
    const NumberFormat &operator*() const { return *ptr; }
private:
    NumberFormat *ptr;
    SharedNumberFormat(const SharedNumberFormat &);
    SharedNumberFormat &operator=(const SharedNumberFormat &);
};
    
    #endif

    
    // -------------------------------------
    
    static const int32_t gMaxFastInt = 4096;
    
    #include 'unicode/udat.h'
    
    #if !UCONFIG_NO_FORMATTING
    
    /**
 * Construct a StringReplacer that sets the emits the given output
 * text and sets the cursor to the given position.
 * @param theOutput text that will replace input text when the
 * replace() method is called.  May contain stand-in characters
 * that represent nested replacers.
 * @param theCursorPos cursor position that will be returned by
 * the replace() method
 * @param theData transliterator context object that translates
 * stand-in characters to UnicodeReplacer objects
 */
StringReplacer::StringReplacer(const UnicodeString& theOutput,
                               int32_t theCursorPos,
                               const TransliterationRuleData* theData) {
    output = theOutput;
    cursorPos = theCursorPos;
    hasCursor = TRUE;
    data = theData;
    isComplex = TRUE;
}
    
        // out_of_range.401
    try
    {
        // try to use a an invalid array index
        json::reference ref = j.at('/array/4'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // the following call will not add an object, because there is already
    // a value stored at key 'B'
    auto res2 = null.emplace('B', 'c');
    
    
    {  int ret = x;
  return ret;
}
    
      x <<= 4;
  x |= t;
    
    void Spline1dSeg::SetSplineFunc(const PolynomialXd& spline_func) {
  spline_func_ = spline_func;
  derivative_ = PolynomialXd::DerivedFrom(spline_func_);
  second_order_derivative_ = PolynomialXd::DerivedFrom(derivative_);
  third_order_derivative_ = PolynomialXd::DerivedFrom(second_order_derivative_);
}
    
    TEST_F(GemVehicleFactoryTest, InitVehicleController) {
  EXPECT_TRUE(gem_factory_.CreateVehicleController() != nullptr);
}
    
      Byte t1(bytes + 5);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
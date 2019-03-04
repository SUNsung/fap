
        
        
    {
    {   private:
    friend class CudaModule;
    /*!
     * \brief constructor
     * \param mod module of this kernel
     * \param mangled_name mangled kernel name
     * \param signature kernel argument signature
     */
    Kernel(const std::shared_ptr<Chunk>& mod,
           const std::string& mangled_name,
           const std::vector<ArgType>& signature);
    /*! \brief mangled kernel name */
    std::string mangled_name_;
    /*! \brief kernel argument signature */
    std::vector<ArgType> signature_;
    /*! \brief module of this kernel */
    std::shared_ptr<Chunk> mod_;
    /*! \brief cached kernel function on each device */
    std::unordered_map<int, CUfunction> func_;
  };
  /*!
   * \brief CudaModule constructor
   * \param source cuda source code.
   * \param exports export symbols before mangling.
   */
  CudaModule(const char* source,
             const std::vector<std::string>& options,
             const std::vector<std::string>& exports)
      : ptr_(std::make_shared<Chunk>(source, options, exports)) {}
  /*!
   * \brief Get cuda kernal from module by name
   * \param name kernel name
   * \param signature kernel signature
   * \return shared pointer to cuda kernel
   */
  std::shared_ptr<Kernel> GetKernel(const std::string& name,
                                    const std::vector<ArgType>& signature);
};
    
    
    {
    {      if (top_size > DATA) {
        if (param_.flat) {
          batch_data_ = TBlob(nullptr, mshadow::Shape2(batch_size_,
                                                       channels_ * width_ * height_),
                              cpu::kDevCPU, type_flag_);
        } else {
          batch_data_ = TBlob(nullptr, mxnet::TShape(top_[DATA]->shape().begin(),
                                                     top_[DATA]->shape().end()),
                              cpu::kDevCPU, type_flag_);
        }
      }
      out_.data.clear();
      if (top_size > LABEL) {
          batch_label_ = TBlob(nullptr, mxnet::TShape(top_[LABEL]->shape().begin(),
                                                      top_[LABEL]->shape().end()),
                               cpu::kDevCPU, type_flag_);
      }
      out_.batch_size = batch_size_;
    }
  }
    
    
    {  g.attrs['storage_id'] = std::make_shared<nnvm::any>(std::move(storage_id));
  g.attrs['storage_inplace_index'] = std::make_shared<nnvm::any>(
      std::move(storage_inplace_index));
  g.attrs['addto_entry'] = std::make_shared<nnvm::any>(std::move(addto_entry));
  g.attrs['skip_plus_node'] = std::make_shared<nnvm::any>(std::move(skip_plus_node));
  return g;
}
    
    namespace mxnet {
    }
    
    
    {
    {// for reverse seq
DECL_SCALAR(DEVICE, Plus, EvalScalar_, false)
DECL_SCALAR(DEVICE, Minus, EvalScalar_, false)
DECL_SCALAR(DEVICE, Mul, EvalScalar_, false)
DECL_SCALAR(DEVICE, Div, EvalScalar_, false)
}  // namespace ndarray
}  // namespace mxnet
    
    #include <algorithm>
#include <vector>
#include './bilinear_sampler-inl.h'
namespace mxnet {
namespace op {
#if defined(__CUDACC__) && MXNET_USE_CUDNN == 1 && CUDNN_MAJOR >= 5
template<typename DType>
class CuDNNBilinearSamplerOp : public Operator {
 public:
  explicit CuDNNBilinearSamplerOp(BilinearSamplerParam param) {
    this->param_ = param;
    init_cudnn_ = false;
    dtype_ = mshadow::DataType<DType>::kCudnnFlag;
    sampler_ = CUDNN_SAMPLER_BILINEAR;
  }
    }
    }
    }
    
    /**
 * Factory method
 */
static Transliterator* RemoveTransliterator_create(const UnicodeString& /*ID*/,
                                                   Transliterator::Token /*context*/) {
    /* We don't need the ID or context. We just remove data */
    return new RemoveTransliterator();
}
    
    void
SelectFormat::parseObject(const UnicodeString& /*source*/,
                        Formattable& /*result*/,
                        ParsePosition& pos) const
{
    // Parsing not supported.
    pos.setErrorIndex(pos.getIndex());
}
    
    #if !UCONFIG_NO_FORMATTING
    
    U_NAMESPACE_END
    
    uint8_t *CollationKey::reallocate(int32_t newCapacity, int32_t length) {
    uint8_t *newBytes = static_cast<uint8_t *>(uprv_malloc(newCapacity));
    if(newBytes == NULL) { return NULL; }
    if(length > 0) {
        uprv_memcpy(newBytes, getBytes(), length);
    }
    if(fFlagAndLength < 0) { uprv_free(fUnion.fFields.fBytes); }
    fUnion.fFields.fBytes = newBytes;
    fUnion.fFields.fCapacity = newCapacity;
    fFlagAndLength |= 0x80000000;
    return newBytes;
}
    
        /**
     * Implement UnicodeFunctor
     */
    virtual void setData(const TransliterationRuleData*);
    
    
void printBool(bool res){
    cout << (res ? 'True' : 'False') << endl;
}
    
    
    {    return;
}
    
    
    {private:
    int nextDifferentCharacterIndex(const vector<int> &nums, int p){
        for( ; p < nums.size() ; p ++ )
            if( nums[p] != nums[p - 1] )
                break;
        return p;
    }
};
    
    
    {    return 0;
}

    
    // Recursive
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
    }
    }
    
    // Recursive
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
    }
    }
    
    using namespace std;
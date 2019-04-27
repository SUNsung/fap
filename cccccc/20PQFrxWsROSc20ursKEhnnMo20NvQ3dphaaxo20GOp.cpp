
        
            int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    
            ListNode* pre = dummyHead;
        for(int i = 0; i < m - 1; i ++){
            pre = pre->next
        }
    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    using namespace std;
    
            vector<int> res;
        if( root == NULL )
            return res;
    
    /// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    
    {
    {        if( node ){
            __postorderTraversal(node->left, res);
            __postorderTraversal(node->right, res);
            res.push_back(node->val);
        }
    }
};
    
    
    {
    {        return res;
    }
};
    
    template<typename Dtype>
class CaffeDataIter : public IIterator<TBlobBatch> {
 public:
  explicit CaffeDataIter(int type_flag) : batch_size_(0), channels_(1), width_(1), height_(1)
                               , type_flag_(type_flag), loc_(0)
  {}
  virtual ~CaffeDataIter(void) {}
    }
    
      /**
   * /brief Customize set method for LayerParameter
   * /tparam value string of caffe's layer configuration
   * */
  virtual void Set(void *head, const std::string &value) const {
    caffe::NetParameter net_param;
    if (!ReadProtoFromTextContent(value, &net_param))
      CHECK(false)<< 'Caffe Net Prototxt: ' << value << 'Initialized Failed';
    }
    
    namespace mxnet {
namespace io {
// iterator on image recordio
class PrefetcherIter : public IIterator<DataBatch> {
 public:
  explicit PrefetcherIter(IIterator<TBlobBatch>* base)
      : loader_(base), out_(nullptr) {}
    }
    }
    }
    
    
    {
    {inline void Dequantize2BitImpl(mshadow::Stream<mshadow::cpu> *s,
                               const std::vector<mxnet::TBlob> &inputs,
                               const float threshold) {
  Dequantize2BitKernelLaunch(s, inputs, threshold);
}
}  // namespace kvstore
}  // namespace mxnet
    
        // Compute the current row-wise Kronecker product
    *result = 0;
    for (int i = 0; i < nrows; ++i) {
      // BLAS signature
      //
      // dger(
      //   m : ts.size(1), length of each row of current matrix
      //   n : ncols, length of each row of previous result
      //   alpha : 1, scaling to the outer product of x and y
      //   x : ts[i].dptr_, current row of current matrix
      //   incx : 1, as each element in the row is contiguous
      //   y : (*given)[i].dptr_, current row of the given variable
      //   incy : 1, as each element in the row is contiguous
      //   a : (*result)[i].dptr_, current row of the result variable
      //   lda : ts.size(1), as the outer product is stored as one row
      //         which occupies contiguous memory, and as BLASEngine::ger()
      //         assumes column-major matrix, lda has to be precisely
      //         the length of x, i.e. ts[i].size(1)
      // )
      expr::BLASEngine<cpu, DType>::ger
        (result->stream_,
        ts.size(1), ncols, 1,
        ts[i].dptr_, 1,
        (*given)[i].dptr_, 1,
        (*result)[i].dptr_, ts.size(1));
    }
    ncols *= ts.size(1);
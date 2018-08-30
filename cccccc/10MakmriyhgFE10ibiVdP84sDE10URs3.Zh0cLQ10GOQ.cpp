
        
          /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const Datum& datum);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const vector<Datum> & datum_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   */
#ifdef USE_OPENCV
  vector<int> InferBlobShape(const vector<cv::Mat> & mat_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   */
  vector<int> InferBlobShape(const cv::Mat& cv_img);
#endif  // USE_OPENCV
    
    template <typename Dtype>
class LayerRegistry {
 public:
  typedef shared_ptr<Layer<Dtype> > (*Creator)(const LayerParameter&);
  typedef std::map<string, Creator> CreatorRegistry;
    }
    
     protected:
  /**
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the predictions @f$ x @f$, a Blob with values in
   *      @f$ [-\infty, +\infty] @f$ indicating the predicted score for each of
   *      the @f$ K = CHW @f$ classes. Each @f$ x_n @f$ is mapped to a predicted
   *      label @f$ \hat{l}_n @f$ given by its maximal index:
   *      @f$ \hat{l}_n = \arg\max\limits_k x_{nk} @f$
   *   -# @f$ (N \times 1 \times 1 \times 1) @f$
   *      the labels @f$ l @f$, an integer-valued Blob with values
   *      @f$ l_n \in [0, 1, 2, ..., K - 1] @f$
   *      indicating the correct class label among the @f$ K @f$ classes
   * @param top output Blob vector (length 1)
   *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
   *      the computed accuracy: @f$
   *        \frac{1}{N} \sum\limits_{n=1}^N \delta\{ \hat{l}_n = l_n \}
   *      @f$, where @f$
   *      \delta\{\mathrm{condition}\} = \left\{
   *         \begin{array}{lr}
   *            1 & \mbox{if condition} \\
   *            0 & \mbox{otherwise}
   *         \end{array} \right.
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    /**
 * @brief Compute the index of the @f$ K @f$ max values for each datum across
 *        all dimensions @f$ (C \times H \times W) @f$.
 *
 * Intended for use after a classification layer to produce a prediction.
 * If parameter out_max_val is set to true, output is a vector of pairs
 * (max_ind, max_val) for each image. The axis parameter specifies an axis
 * along which to maximise.
 *
 * NOTE: does not implement Backwards operation.
 */
template <typename Dtype>
class ArgMaxLayer : public Layer<Dtype> {
 public:
  /**
   * @param param provides ArgMaxParameter argmax_param,
   *     with ArgMaxLayer options:
   *   - top_k (\b optional uint, default 1).
   *     the number @f$ K @f$ of maximal items to output.
   *   - out_max_val (\b optional bool, default false).
   *     if set, output a vector of pairs (max_ind, max_val) unless axis is set then
   *     output max_val along the specified axis.
   *   - axis (\b optional int).
   *     if set, maximise along the specified axis else maximise the flattened
   *     trailing dimensions for each index of the first / num dimension.
   */
  explicit ArgMaxLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      Blob<Dtype> mean_, variance_, temp_, x_norm_;
  bool use_global_stats_;
  Dtype moving_average_fraction_;
  int channels_;
  Dtype eps_;
    
    namespace caffe {
    }
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
      // To visit static members of the fixture, add the TestFixture::
  // prefix.
  n += TestFixture::shared_;
    
      // Returns a pathname for a file that does not currently exist. The pathname
  // will be directory/base_name.extension or
  // directory/base_name_<number>.extension if directory/base_name.extension
  // already exists. The number will be incremented until a pathname is found
  // that does not already exist.
  // Examples: 'dir/foo_test.xml' or 'dir/foo_test_1.xml'.
  // There could be a race condition if two or more processes are calling this
  // function at the same time -- they could both pick the same filename.
  static FilePath GenerateUniqueFileName(const FilePath& directory,
                                         const FilePath& base_name,
                                         const char* extension);
    
    #include <stdlib.h>
#include <assert.h>
    
    #ifdef __BORLANDC__
// string.h is not guaranteed to provide strcpy on C++ Builder.
# include <mem.h>
#endif
    
    // Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
    }
    
    // Tests factorial of negative numbers.
TEST(FactorialTest, Negative) {
  // This test is named 'Negative', and belongs to the 'FactorialTest'
  // test case.
  EXPECT_EQ(1, Factorial(-5));
  EXPECT_EQ(1, Factorial(-1));
  EXPECT_GT(Factorial(-10), 0);
    }
    
    
    {
    {		sync_sems[i].sem = Semaphore::create();
		sync_sems[i].in_use = false;
	}
	if (p_sync)
		sync = Semaphore::create();
	else
		sync = NULL;
}
    
    	StringName translate(const StringName &p_message) const;
    
    	void _dump_function_deps(ShaderLanguage::ShaderNode *p_node, const StringName &p_for_func, const Map<StringName, String> &p_func_code, StringBuilder &r_to_add, Set<StringName> &r_added);
	String _dump_node_code(ShaderLanguage::Node *p_node, int p_level, GeneratedCode &r_gen_code, IdentifierActions &p_actions, const DefaultIdentifierActions &p_default_actions, bool p_assigning);
    
    	static void make_default();
    
    #ifndef DIR_ACCESS_WINDOWS_H
#define DIR_ACCESS_WINDOWS_H
    
    #ifndef MUTEX_WINDOWS_H
#define MUTEX_WINDOWS_H
    
    #endif

    
    #ifdef WINDOWS_ENABLED
    
    /*
 * Perform a block-local optimization that folds sequences of Concat opcodes
 * into ConcatN opcodes.
 */
struct ConcatPeephole {
  explicit ConcatPeephole(BasicPeephole next)
    : m_next(next)
  {}
  ConcatPeephole(ConcatPeephole&&) = default;
  ConcatPeephole& operator=(const ConcatPeephole&) = delete;
    }
    
    namespace php {
    }
    
    #endif

    
    APCHandle::Pair APCCollection::Make(const ObjectData* obj,
                                    APCHandleLevel level,
                                    bool unserializeObj) {
  auto bail = [&] {
    return APCString::MakeSerializedObject(
      apc_serialize(Variant(const_cast<ObjectData*>(obj)))
    );
  };
    }
    
    private:
  APCCollection();
  ~APCCollection();
  static APCHandle::Pair WrapArray(APCHandle::Pair, CollectionType);
    
    inline TypedValue* APCLocalArray::localCache() const {
  return const_cast<TypedValue*>(
    reinterpret_cast<const TypedValue*>(this + 1)
  );
}
    
      // @todo: check allow_url_include?
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    
    {    // updates
    if ((sb1.st_mode & S_IFMT) == S_IFDIR) {
      syncdir(fdest, fsrc);
    } else if (sb1.st_size != sb2.st_size ||
               !same(fsrc.c_str(), fdest.c_str())) {
      todelete.insert(fdest);
    }
  }
    
      static bool isInitialized6() { return data6_.initialized; }
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
      const std::shared_ptr<DHTNode>& getLocalNode() const { return localNode_; }
    
      virtual ~DHTUnknownMessage();
    
    void DNSCache::put(const std::string& hostname, const std::string& ipaddr,
                   uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.lower_bound(target);
  if (i != entries_.end() && *(*i) == *target) {
    (*i)->add(ipaddr);
  }
  else {
    target->add(ipaddr);
    entries_.insert(i, target);
  }
}
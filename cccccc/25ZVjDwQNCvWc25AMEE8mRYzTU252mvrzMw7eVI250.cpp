
        
        const int kMaxBlobAxes = 32;
    
     private:
  // The private constructor to avoid duplicate instantiation.
  Caffe();
    
    /// @brief Fills a Blob with Gaussian-distributed values @f$ x = a @f$.
template <typename Dtype>
class GaussianFiller : public Filler<Dtype> {
 public:
  explicit GaussianFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    CHECK(blob->count());
    caffe_rng_gaussian<Dtype>(blob->count(), Dtype(this->filler_param_.mean()),
        Dtype(this->filler_param_.std()), blob->mutable_cpu_data());
    int sparse = this->filler_param_.sparse();
    CHECK_GE(sparse, -1);
    if (sparse >= 0) {
      // Sparse initialization is implemented for 'weight' blobs; i.e. matrices.
      // These have num == channels == 1; width is number of inputs; height is
      // number of outputs.  The 'sparse' variable specifies the mean number
      // of non-zero input weights for a given output.
      CHECK_GE(blob->num_axes(), 1);
      const int num_outputs = blob->shape(0);
      Dtype non_zero_probability = Dtype(sparse) / Dtype(num_outputs);
      rand_vec_.reset(new SyncedMemory(blob->count() * sizeof(int)));
      int* mask = reinterpret_cast<int*>(rand_vec_->mutable_cpu_data());
      caffe_rng_bernoulli(blob->count(), non_zero_probability, mask);
      for (int i = 0; i < blob->count(); ++i) {
        data[i] *= mask[i];
      }
    }
  }
    }
    
    #include 'caffe/common.hpp'
    
      /**
   * @brief Given the top blob error gradients, compute the bottom blob error
   *        gradients.
   *
   * @param top
   *     the output blobs, whose diff fields store the gradient of the error
   *     with respect to themselves
   * @param propagate_down
   *     a vector with equal length to bottom, with each index indicating
   *     whether to propagate the error gradients down to the bottom blob at
   *     the corresponding index
   * @param bottom
   *     the input blobs, whose diff fields will store the gradient of the error
   *     with respect to themselves after Backward is run
   *
   * The Backward wrapper calls the relevant device wrapper function
   * (Backward_cpu or Backward_gpu) to compute the bottom blob diffs given the
   * top blob diffs.
   *
   * Your layer should implement Backward_cpu and (optionally) Backward_gpu.
   */
  inline void Backward(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down,
      const vector<Blob<Dtype>*>& bottom);
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the absolute value inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} =
   *            \mathrm{sign}(x) \frac{\partial E}{\partial y}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {}
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {}
    
    #endif  // CAFFE_CUDNN_CONV_LAYER_HPP_

    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
                           const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
                            const vector<bool>& propagate_down,
                            const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
    
    {}  // namespace caffe
    
    # if !GTEST_OS_WINDOWS
// Tests that an exit code describes an exit due to termination by a
// given signal.
class GTEST_API_ KilledBySignal {
 public:
  explicit KilledBySignal(int signum);
  bool operator()(int exit_status) const;
 private:
  const int signum_;
};
# endif  // !GTEST_OS_WINDOWS
    
    // Implements printing a reference type T&.
template <typename T>
class UniversalPrinter<T&> {
 public:
  // MSVC warns about adding const to a function type, so we want to
  // disable the warning.
#ifdef _MSC_VER
# pragma warning(push)          // Saves the current warning state.
# pragma warning(disable:4180)  // Temporarily disables warning 4180.
#endif  // _MSC_VER
    }
    
    // Initializes Google Test.  This must be called before calling
// RUN_ALL_TESTS().  In particular, it parses a command line for the
// flags that Google Test recognizes.  Whenever a Google Test flag is
// seen, it is removed from argv, and *argc is decremented.
//
// No value is returned.  Instead, the Google Test flag variables are
// updated.
//
// Calling the function for the second time has no user-visible effect.
GTEST_API_ void InitGoogleTest(int* argc, char** argv);
    
      explicit FilePath(const std::string& pathname) : pathname_(pathname) {
    Normalize();
  }
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
  const T18 v18_;
  const T19 v19_;
  const T20 v20_;
  const T21 v21_;
  const T22 v22_;
  const T23 v23_;
  const T24 v24_;
  const T25 v25_;
  const T26 v26_;
  const T27 v27_;
  const T28 v28_;
  const T29 v29_;
  const T30 v30_;
  const T31 v31_;
  const T32 v32_;
  const T33 v33_;
  const T34 v34_;
  const T35 v35_;
  const T36 v36_;
  const T37 v37_;
  const T38 v38_;
  const T39 v39_;
  const T40 v40_;
  const T41 v41_;
  const T42 v42_;
  const T43 v43_;
};
    
      template <GTEST_8_TYPENAMES_(U)>
  tuple(const GTEST_8_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_), f4_(t.f4_), f5_(t.f5_), f6_(t.f6_), f7_(t.f7_) {}
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31>
struct Templates31 {
  typedef TemplateSel<T1> Head;
  typedef Templates30<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31> Tail;
};
    
      // operator new and operator delete help us control water allocation.
  void* operator new(size_t allocation_size) {
    allocated_++;
    return malloc(allocation_size);
  }
    
      // Gets the first element of the queue, or NULL if the queue is empty.
  QueueNode<E>* Head() { return head_; }
  const QueueNode<E>* Head() const { return head_; }
    
    #endif // CAFFE2_OPERATORS_FLEXIBLE_TOP_K_H_

    
    OPERATOR_SCHEMA(Im2Col)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc('The Im2Col operator from Matlab.')
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          ArgumentHelper helper(def);
          auto pad = helper.GetSingleArgument<int>('pad', 0);
          auto kernel_h = helper.GetSingleArgument<int>(
              'kernel_h', helper.GetSingleArgument<int>('kernel', 0));
          auto kernel_w = helper.GetSingleArgument<int>(
              'kernel_w', helper.GetSingleArgument<int>('kernel', 0));
          auto dilation_h = helper.GetSingleArgument<int>(
              'dilation_h', helper.GetSingleArgument<int>('dilation', 1));
          auto dilation_w = helper.GetSingleArgument<int>(
              'dilation_w', helper.GetSingleArgument<int>('dilation', 1));
          auto stride_h = helper.GetSingleArgument<int>(
              'stride_h', helper.GetSingleArgument<int>('stride', 1));
          auto stride_w = helper.GetSingleArgument<int>(
              'stride_w', helper.GetSingleArgument<int>('stride', 1));
          auto order = StringToStorageOrder(
              helper.GetSingleArgument<string>('order', 'NCHW'));
    }
    
    
    {	_FORCE_INLINE_ void _set_physics_server(BulletPhysicsServer *p_physicsServer) { physicsServer = p_physicsServer; }
	_FORCE_INLINE_ BulletPhysicsServer *get_physics_server() const { return physicsServer; }
};
#endif

    
    	real_t getSoftnessDirLin() const;
	real_t getRestitutionDirLin() const;
	real_t getDampingDirLin() const;
	real_t getSoftnessDirAng() const;
	real_t getRestitutionDirAng() const;
	real_t getDampingDirAng() const;
	real_t getSoftnessLimLin() const;
	real_t getRestitutionLimLin() const;
	real_t getDampingLimLin() const;
	real_t getSoftnessLimAng() const;
	real_t getRestitutionLimAng() const;
	real_t getDampingLimAng() const;
	real_t getSoftnessOrthoLin() const;
	real_t getRestitutionOrthoLin() const;
	real_t getDampingOrthoLin() const;
	real_t getSoftnessOrthoAng() const;
	real_t getRestitutionOrthoAng() const;
	real_t getDampingOrthoAng() const;
	void setSoftnessDirLin(real_t softnessDirLin);
	void setRestitutionDirLin(real_t restitutionDirLin);
	void setDampingDirLin(real_t dampingDirLin);
	void setSoftnessDirAng(real_t softnessDirAng);
	void setRestitutionDirAng(real_t restitutionDirAng);
	void setDampingDirAng(real_t dampingDirAng);
	void setSoftnessLimLin(real_t softnessLimLin);
	void setRestitutionLimLin(real_t restitutionLimLin);
	void setDampingLimLin(real_t dampingLimLin);
	void setSoftnessLimAng(real_t softnessLimAng);
	void setRestitutionLimAng(real_t restitutionLimAng);
	void setDampingLimAng(real_t dampingLimAng);
	void setSoftnessOrthoLin(real_t softnessOrthoLin);
	void setRestitutionOrthoLin(real_t restitutionOrthoLin);
	void setDampingOrthoLin(real_t dampingOrthoLin);
	void setSoftnessOrthoAng(real_t softnessOrthoAng);
	void setRestitutionOrthoAng(real_t restitutionOrthoAng);
	void setDampingOrthoAng(real_t dampingOrthoAng);
	void setPoweredLinMotor(bool onOff);
	bool getPoweredLinMotor();
	void setTargetLinMotorVelocity(real_t targetLinMotorVelocity);
	real_t getTargetLinMotorVelocity();
	void setMaxLinMotorForce(real_t maxLinMotorForce);
	real_t getMaxLinMotorForce();
	void setPoweredAngMotor(bool onOff);
	bool getPoweredAngMotor();
	void setTargetAngMotorVelocity(real_t targetAngMotorVelocity);
	real_t getTargetAngMotorVelocity();
	void setMaxAngMotorForce(real_t maxAngMotorForce);
	real_t getMaxAngMotorForce();
	real_t getLinearPos();
    
    #include 'csg_gizmos.h'
#include 'csg_shape.h'
    
    
    {	return env->NewGlobalRef(context);
#else
	return NULL;
#endif
}
    
    MemoryPool::Alloc *MemoryPool::allocs = NULL;
MemoryPool::Alloc *MemoryPool::free_list = NULL;
uint32_t MemoryPool::alloc_count = 0;
uint32_t MemoryPool::allocs_used = 0;
Mutex *MemoryPool::alloc_mutex = NULL;
    
    		CharType c = p_string[i];
		if (c == ':') {
    }
    
    	ClassDB::bind_method(D_METHOD('set_transfer_mode', 'mode'), &NetworkedMultiplayerPeer::set_transfer_mode);
	ClassDB::bind_method(D_METHOD('get_transfer_mode'), &NetworkedMultiplayerPeer::get_transfer_mode);
	ClassDB::bind_method(D_METHOD('set_target_peer', 'id'), &NetworkedMultiplayerPeer::set_target_peer);
    
    	wchar_t exePath[MAX_PATH] = { 0 };
	wchar_t icoPath[MAX_PATH] = { 0 };
    
    NS_CC_END
    
    EaseBezierAction* EaseBezierAction::clone() const
{
    // no copy constructor
    if (_inner)
    {
        auto ret = EaseBezierAction::create(_inner->clone());
        if (ret)
        {
            ret->setBezierParamer(_p0,_p1,_p2,_p3);
        }
        return ret;
    }
    }
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(Twirl);
};
    
        /** Sets the Animation object to be animated 
     * 
     * @param animation certain animation.
     */
    void setAnimation( Animation* animation );
    /** returns the Animation object that is being animated 
     *
     * @return Gets the animation object that is being animated.
     */
    Animation* getAnimation() { return _animation; }
    const Animation* getAnimation() const { return _animation; }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
        /** Removes all actions from a certain target.
     All the actions that belongs to the target will be removed.
     *
     * @param target    A certain target.
     */
    virtual void removeAllActionsFromTarget(Node *target);
    
        //
    // Overrides
    //
    virtual ProgressFromTo* clone() const override;
    virtual ProgressFromTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ProgressFromTo() {}
    virtual ~ProgressFromTo() {}
    
    /**
@brief FadeOutUpTiles action.
@details Fades out the target node with many tiles from bottom to top.
 */
class CC_DLL FadeOutUpTiles : public FadeOutTRTiles
{
public:
    /** 
    * @brief Create the action with the grid size and the duration.
    * @param duration Specify the duration of the FadeOutUpTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @return If the creation success, return a pointer of FadeOutUpTiles action; otherwise, return nil.
    */
    static FadeOutUpTiles* create(float duration, const Size& gridSize);
    }
    
    
    {// end of sprite_nodes group
/// @}
    
        /** Initializes an AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render*/
    bool initWithTileFile(const std::string& tile, int tileWidth, int tileHeight, int itemsToRender);
    
    /** Initializes an AtlasNode  with a texture the width and height of each item measured in points and the quantity of items to render*/
    bool initWithTexture(Texture2D* texture, int tileWidth, int tileHeight, int itemsToRender);
    
    namespace benchmark {
namespace internal {
    }
    }
    
    
    {  for (auto i = min_threads; i < max_threads; i += stride) {
    thread_counts_.push_back(i);
  }
  thread_counts_.push_back(max_threads);
  return this;
}
    
    #define CHECK_EQ(a, b) CHECK((a) == (b))
#define CHECK_NE(a, b) CHECK((a) != (b))
#define CHECK_GE(a, b) CHECK((a) >= (b))
#define CHECK_LE(a, b) CHECK((a) <= (b))
#define CHECK_GT(a, b) CHECK((a) > (b))
#define CHECK_LT(a, b) CHECK((a) < (b))
    
      if (result.error_occurred) {
    printer(Out, COLOR_RED, 'ERROR OCCURRED: \'%s\'',
            result.error_message.c_str());
    printer(Out, COLOR_DEFAULT, '\n');
    return;
  }
  // Format bytes per second
  std::string rate;
  if (result.bytes_per_second > 0) {
    rate = StrCat(' ', HumanReadableNumber(result.bytes_per_second), 'B/s');
  }
    
    inline Regex::~Regex() {}
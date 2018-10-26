
        
        // Names that corresponds to a single input parameter.
class ParamNames {
 public:
  // Create param based on Arg.
  ParamNames(const string& name, const string& rename_to) : name_(name) {
    rename_to_ = AvoidPythonReserved(rename_to);
  }
    }
    
    namespace tensorflow {
    }
    
    // A wrapper around io::RecordReader that is more easily SWIG wrapped for
// Python.  An instance of this class is not safe for concurrent access
// by multiple threads.
class PyRecordReader {
 public:
  // TODO(vrv): make this take a shared proto to configure
  // the compression options.
  static PyRecordReader* New(const string& filename, uint64 start_offset,
                             const string& compression_type_string,
                             TF_Status* out_status);
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/stream_executor/cuda/cuda_driver.h'
#include 'tensorflow/stream_executor/stream_executor.h'
#include 'tensorflow/stream_executor/stream_executor_internal.h'
    
    // Activates a CUDA context within an enclosing scope.
class ScopedActivateExecutorContext {
 public:
  // Form that takes a CUDA executor implementation.
  explicit ScopedActivateExecutorContext(CUDAExecutor* cuda_exec);
    }
    
      // Helper function for implementing DoBlasGemvWithProfiling.
  template <typename T>
  bool DoBlasGemvWithProfilingImpl(Stream *stream, blas::Transpose trans,
                                   uint64 m, uint64 n, const T &alpha,
                                   const DeviceMemory<T> &a, int lda,
                                   const DeviceMemory<T> &x, int incx,
                                   const T &beta, DeviceMemory<T> *y, int incy,
                                   blas::ProfileResult *output_profile_result);
    
      // If the conforming type is a class, add a class-constrained 'Self'
  // parameter.
  if (covariantSelf) {
    auto paramTy = GenericTypeParamType::get(/*depth=*/0, /*index=*/0, ctx);
    builder.addGenericParameter(paramTy);
  }
    
    
    {  return true;
}

    
    
    {
    {    auto newChunk = *nextChunk++;
    auto result = (prevChunk | (newChunk << bitsRemaining)) & resultMask;
    prevChunk = newChunk >> (numBitsWanted - bitsRemaining);
    bitsRemaining = ChunkSizeInBits + bitsRemaining - numBitsWanted;
    return result;
  });
}
    
    
    {  return Begin + oldSize;
}  

    
    static const StringRef SupportedConditionalCompilationArches[] = {
  'arm',
  'arm64',
  'i386',
  'x86_64',
  'powerpc64',
  'powerpc64le',
  's390x'
};
    
    // We'd like the dump routine to be present in all builds, but it's
// a pretty large amount of code, most of which is not sensitive to the
// actual key and value data.  If we try to have a common implementation,
// we're left with the problem of describing the layout of a node when
// that's technically instantiation-specific.  Redefining the struct here
// is technically an aliasing violation, but we can just tell the compilers
// that actually use TBAA that this is okay.
typedef struct _Node Node LLVM_MAY_ALIAS;
struct _Node {
  // If you change the layout in the header, you'll need to change it here.
  // (This comment is repeated there.)
  Node *Left, *Right, *Further;
};
    
      while (!RawText.empty()) {
    size_t Pos = RawText.find_first_of('\n\r');
    if (Pos == StringRef::npos)
      Pos = RawText.size();
    }
    
    StringRef camel_case::getLastWord(StringRef string) {
  if (string.empty())
    return '';
    }
    
    namespace swift {
namespace sys {
void TaskProcessInformation::ResourceUsage::provideMapping(json::Output &out) {
  out.mapRequired('utime', Utime);
  out.mapRequired('stime', Stime);
  out.mapRequired('maxrss', Maxrss);
}
    }
    }
    
    
    {  // The length of the transcoded string in UTF-16 code points.
  Length = toPtr - &buffer[0];
  return Length;
}

    
    class CFPointeeInfo {
  bool IsValid;
  bool IsConst;
  llvm::PointerUnion<const clang::RecordDecl *, const clang::TypedefNameDecl *>
      Decl;
  CFPointeeInfo() = default;
    }
    
    // Import As Member -- attempt to import C global functions and variables as
// members on types or instances.
    
    /**
 * @brief Fills a Blob with values @f$ x \sim N(0, \sigma^2) @f$ where
 *        @f$ \sigma^2 @f$ is set inversely proportional to number of incoming
 *        nodes, outgoing nodes, or their average.
 *
 * A Filler based on the paper [He, Zhang, Ren and Sun 2015]: Specifically
 * accounts for ReLU nonlinearities.
 *
 * Aside: for another perspective on the scaling factor, see the derivation of
 * [Saxe, McClelland, and Ganguli 2013 (v3)].
 *
 * It fills the incoming matrix by randomly sampling Gaussian data with std =
 * sqrt(2 / n) where n is the fan_in, fan_out, or their average, depending on
 * the variance_norm option. You should make sure the input blob has shape (num,
 * a, b, c) where a * b * c = fan_in and num * b * c = fan_out. Note that this
 * is currently not the case for inner product layers.
 */
template <typename Dtype>
class MSRAFiller : public Filler<Dtype> {
 public:
  explicit MSRAFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    int fan_in = blob->count() / blob->shape(0);
    // Compatibility with ND blobs
    int fan_out = blob->num_axes() > 1 ?
                  blob->count() / blob->shape(1) :
                  blob->count();
    Dtype n = fan_in;  // default to fan_in
    if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_AVERAGE) {
      n = (fan_in + fan_out) / Dtype(2);
    } else if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_FAN_OUT) {
      n = fan_out;
    }
    Dtype std = sqrt(Dtype(2) / n);
    caffe_rng_gaussian<Dtype>(blob->count(), Dtype(0), std,
        blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    
    {}  // namespace caffe
    
    #include <vector>
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      virtual inline const char* type() const { return 'Convolution'; }
    
      // algorithms for forward and backwards convolutions
  cudnnConvolutionFwdAlgo_t *fwd_algo_;
  cudnnConvolutionBwdFilterAlgo_t *bwd_filter_algo_;
  cudnnConvolutionBwdDataAlgo_t *bwd_data_algo_;
    
    
    {}  // namespace caffe
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    gpr_timespec CoreCodegen::gpr_inf_future(gpr_clock_type type) {
  return ::gpr_inf_future(type);
}
    
      static void OnDoneRecvTrailingMetadataCb(void* user_data, grpc_error* error);
    
    MeasureInt64 RpcServerReceivedMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcServerReceivedMessagesPerRpcMeasureName,
                             'Number of messages received per RPC', kCount);
  return measure;
}
    
    const ViewDescriptor& ClientSentMessagesPerRpcMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/client/sent_messages_per_rpc/minute')
          .set_measure(kRpcClientSentMessagesPerRpcMeasureName)
          .set_aggregation(CountDistributionAggregation())
          .add_column(ClientMethodTagKey());
  return descriptor;
}
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    
    
    #ifdef BOOST_MSVC
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    
    {  return Status();
}
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    TEST_F(PacksTests, test_check_version) {
  Pack zpack('fake_version_pack', getPackWithFakeVersion().doc());
  EXPECT_FALSE(zpack.checkVersion());
    }
    
      /**
   * @brief Compute the final hash and return it's result
   *
   * @return The final hash value
   */
  std::string digest();
    
      /// Inspect into the memory and CPU of the watcher process.
  virtual Status isWatcherHealthy(const PlatformProcess& watcher,
                                  PerformanceState& watcher_state) const;
    
    
    {void alarm(int /* noop */) {
  /* This function is a noop. */
}
} // namespace osquery

    
    Status INotifyEventPublisher::addSubscription(
    const SubscriptionRef& subscription) {
  WriteLock lock(subscription_lock_);
  auto received_inotify_sc = getSubscriptionContext(subscription->context);
  for (auto& sub : subscriptions_) {
    auto inotify_sc = getSubscriptionContext(sub->context);
    if (*received_inotify_sc == *inotify_sc) {
      if (inotify_sc->mark_for_deletion) {
        inotify_sc->mark_for_deletion = false;
        return Status(0);
      }
      // Returning non zero signals EventSubscriber::subscribe
      // do not bump up subscription_count_.
      return Status(1);
    }
  }
    }
    
        // Overrides
    virtual void startWithTarget(Node *target) override;
    virtual ActionCamera * reverse() const override;
    virtual ActionCamera *clone() const override;
    
    // CatmullRom Spline formula:
Vec2 ccCardinalSplineAt(const Vec2 &p0, const Vec2 &p1, const Vec2 &p2, const Vec2 &p3, float tension, float t)
{
    float t2 = t * t;
    float t3 = t2 * t;
    
    /*
     * Formula: s(-ttt + 2tt - t)P1 + s(-ttt + tt)P2 + (2ttt - 3tt + 1)P2 + s(ttt - 2tt + t)P3 + (-2ttt + 3tt)P3 + s(ttt - tt)P4
     */
    float s = (1 - tension) / 2;
    }
    
    Shaky3D* Shaky3D::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) Shaky3D();
    a->initWithDuration(_duration, _gridSize, _randrange, _shakeZ);
    a->autorelease();
    return a;
}
    
        /** Returns the numbers of actions that are running in a certain target. 
     * Composable actions are counted as 1 action. Example:
     * - If you are running 1 Sequence of 7 actions, it will return 1.
     * - If you are running 7 Sequences of 2 actions, it will return 7.
     *
     * @param target    A certain target.
     * @return  The numbers of actions that are running in a certain target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActionsInTarget(const Node *target) const;
    
    /** Returns the numbers of actions that are running in all targets.
     * @return  The numbers of actions that are running in all target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActions() const;
    
                p.y = ( R + ay - ( r * (1 - cosBeta) * sinTheta));
    
        /**
    @brief Get the amplitude of the effect.
    @return Return the amplitude of the effect.
    */
    float getAmplitude() const { return _amplitude; }
    /**
    @brief Set the amplitude to the effect.
    @param amplitude The value of amplitude will be set.
    */
    void setAmplitude(float amplitude) { _amplitude = amplitude; }
    
    
    {    frame->autorelease();
    return frame;
}
    
    /** @class AnimationFrame
 *
 * A frame of the animation. It contains information like:
 * - sprite frame name.
 * - # of delay units.
 * - offset
 
 @since v2.0
 */
class CC_DLL AnimationFrame : public Ref, public Clonable
{
public:
    /** @struct DisplayedEventInfo
     * When the animation display,Dispatches the event of UserData.
     */
    struct DisplayedEventInfo
    {
        Node* target;
        const ValueMap* userInfo;
    };
    
    /**
     * Creates the animation frame with a spriteframe, number of delay units and a notification user info.
     *
     * @param spriteFrame The animation frame with a spriteframe.
     * @param delayUnits Number of delay units.
     * @param userInfo A notification user info.
     * @since 3.0
     */
    static AnimationFrame* create(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo);
    /** Return a SpriteFrameName to be used.
     *
     * @return a SpriteFrameName to be used.
     */
    SpriteFrame* getSpriteFrame() const { return _spriteFrame; };
    /** Set the SpriteFrame.
     *
     * @param frame A SpriteFrame will be used.
     */
    void setSpriteFrame(SpriteFrame* frame)
    {
        CC_SAFE_RETAIN(frame);
        CC_SAFE_RELEASE(_spriteFrame);
        _spriteFrame = frame;
    }
    }
    
            if ( frameNames.empty() )
        {
            CCLOG('cocos2d: AnimationCache: Animation '%s' found in dictionary without any frames - cannot add to animation cache.', anim.first.c_str());
            continue;
        }
    
    BENCHMARK(skip_overhead, iter) {
  auto prev = FLAGS_minloglevel;
  FLAGS_minloglevel = 2;
    }
    
    namespace folly {
    }
    
    template <class... Args>
void checkUnixErrorExplicit(ssize_t ret, int savedErrno, Args&&... args) {
  if (UNLIKELY(ret == -1)) {
    throwSystemErrorExplicit(savedErrno, std::forward<Args>(args)...);
  }
}
    
    [[noreturn]] void exception_wrapper::onNoExceptionError(
    char const* const name) {
  std::ios_base::Init ioinit_; // ensure std::cerr is alive
  std::cerr << 'Cannot use `' << name
            << '` with an empty folly::exception_wrapper' << std::endl;
  std::terminate();
}
    
     protected:
  /**
   * Returns true if the KeepAlive is constructed from an executor that does
   * not support the keep alive ref-counting functionality
   */
  template <typename ExecutorT>
  static bool isKeepAliveDummy(const KeepAlive<ExecutorT>& keepAlive) {
    return reinterpret_cast<intptr_t>(keepAlive.executorAndDummyFlag_) &
        KeepAlive<ExecutorT>::kDummyFlag;
  }
    
    namespace folly {
    }
    
        static constexpr result_type min() {
      return std::numeric_limits<result_type>::min();
    }
    
      tv.tv_sec = 0;
  tv.tv_usec = 10;
  EXPECT_EQ(10000ns, to<nanoseconds>(tv));
  EXPECT_EQ(10us, to<microseconds>(tv));
  EXPECT_EQ(0ms, to<milliseconds>(tv));
  EXPECT_EQ(0s, to<seconds>(tv));
    
    #include <folly/io/Cursor.h>
#include <folly/io/IOBuf.h>
#include <folly/lang/Bits.h>
    
     public:
  atomic_shared_ptr() noexcept {
    init();
  }
  explicit atomic_shared_ptr(SharedPtr foo) /* noexcept */
      : atomic_shared_ptr() {
    store(std::move(foo));
  }
  atomic_shared_ptr(const atomic_shared_ptr<T>&) = delete;
    
    CacheLocality CacheLocality::uniform(size_t numCpus) {
  CacheLocality rv;
    }
    
      void reset(const std::shared_ptr<T>& p = nullptr) {
    auto newslots = folly::make_unique<Slots>();
    // Allocate each Holder in a different CoreRawAllocator stripe to
    // prevent false sharing. Their control blocks will be adjacent
    // thanks to allocate_shared().
    for (auto slot : folly::enumerate(newslots->slots_)) {
      auto alloc = getCoreAllocator<Holder, kNumSlots>(slot.index);
      auto holder = std::allocate_shared<Holder>(alloc, p);
      *slot = std::shared_ptr<T>(holder, p.get());
    }
    }
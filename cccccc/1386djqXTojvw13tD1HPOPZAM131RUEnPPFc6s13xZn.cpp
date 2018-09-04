
        
        #include <set>
#include <string>
#include <vector>
    
        bool more;
    do {
      more = uv_run(env->event_loop(), UV_RUN_ONCE);
      gin_env.platform()->DrainBackgroundTasks(env->isolate());
      if (more == false) {
        node::EmitBeforeExit(env);
    }
    }
    
    bool UvTaskRunner::PostDelayedTask(const base::Location& from_here,
                                   base::OnceClosure task,
                                   base::TimeDelta delay) {
  auto* timer = new uv_timer_t;
  timer->data = this;
  uv_timer_init(loop_, timer);
  uv_timer_start(timer, UvTaskRunner::OnTimeout, delay.InMilliseconds(), 0);
  tasks_[timer] = std::move(task);
  return true;
}
    
    // static
mate::WrappableBase* BrowserView::New(mate::Arguments* args) {
  if (!Browser::Get()->is_ready()) {
    args->ThrowError('Cannot create BrowserView before app is ready');
    return nullptr;
  }
    }
    
      void SetAutoResize(AutoResizeFlags flags);
  void SetBounds(const gfx::Rect& bounds);
  void SetBackgroundColor(const std::string& color_name);
    
     private:
  using PendingRequestMap = std::map<int, SendCommandCallback>;
    
      bool Register(const ui::Accelerator& accelerator,
                const base::Closure& callback);
  bool IsRegistered(const ui::Accelerator& accelerator);
  void Unregister(const ui::Accelerator& accelerator);
  void UnregisterAll();
    
    LayoutManager::LayoutManager(views::LayoutManager* layout_manager)
    : layout_manager_(layout_manager) {
  DCHECK(layout_manager_);
}
    
    #include <grpcpp/support/config.h>
    
    #include <grpc/grpc_cronet.h>
#include <grpcpp/channel.h>
#include <grpcpp/support/channel_arguments.h>
#include 'src/cpp/client/create_channel_internal.h'
    
    void CoreCodegen::grpc_completion_queue_destroy(grpc_completion_queue* cq) {
  ::grpc_completion_queue_destroy(cq);
}
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    void CensusClientCallData::OnDoneRecvTrailingMetadataCb(void* user_data,
                                                        grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  GPR_ASSERT(calld != nullptr);
  if (error == GRPC_ERROR_NONE) {
    GPR_ASSERT(calld->recv_trailing_metadata_ != nullptr);
    FilterTrailingMetadata(calld->recv_trailing_metadata_,
                           &calld->elapsed_time_);
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_trailing_metadata_,
                   GRPC_ERROR_REF(error));
}
    
    MeasureDouble RpcClientReceivedBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientReceivedBytesPerRpcMeasureName,
      'Total bytes received across all response messages per RPC', kUnitBytes);
  return measure;
}
    
    
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
    
    #define MXCAFFEBLOB(__object$, __type$) \
  (static_cast<mxnet::op::caffe::CaffeBlobFriend<__type$> *>(__object$))
    
        // Handle OpReqType of weights
    for (int i = param_.num_data; i < expected_num_data; ++i)
      HandleOpReq(s, req[i], in_grad[i]);
    
    template <std::size_t kNumGpus, std::size_t kStreams>
StreamManager<kNumGpus, kStreams>::StreamManager() {
#if MXNET_USE_CUDA
  for (std::size_t i = 0; i < kNumGpus; ++i) {
    gpu_cnt_.at(i) = -1;
  }
  for (auto&& i : gpu_io_streams_) {
    i = nullptr;
  }
#endif  // MXNET_USE_CUDA
}
    
    template <class charT, class traits>
class basic_regex_parser : public basic_regex_creator<charT, traits>
{
public:
   basic_regex_parser(regex_data<charT, traits>* data);
   void parse(const charT* p1, const charT* p2, unsigned flags);
   void fail(regex_constants::error_type error_code, std::ptrdiff_t position);
   void fail(regex_constants::error_type error_code, std::ptrdiff_t position, std::string message, std::ptrdiff_t start_pos);
   void fail(regex_constants::error_type error_code, std::ptrdiff_t position, const std::string& message)
   {
      fail(error_code, position, message, position);
   }
    }
    
    // _fi_sep determines the directory separator, either '\\' or '/'
BOOST_REGEX_DECL extern const char* _fi_sep;
    
       format_perl = 0,                                  /* perl style replacement */
   format_default = 0,                               /* ditto. */
   format_sed = match_max << 1,                      /* sed style replacement. */
   format_all = format_sed << 1,                     /* enable all extentions to sytax. */
   format_no_copy = format_all << 1,                 /* don't copy non-matching segments. */
   format_first_only = format_no_copy << 1,          /* Only replace first occurance. */
   format_is_if = format_first_only << 1,            /* internal use only. */
   format_literal = format_is_if << 1                /* treat string as a literal */
    
    #ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
    
       verify_options(re.flags(), m_match_flags);
   // find out what kind of expression we have:
   unsigned type = (m_match_flags & match_continuous) ? 
      static_cast<unsigned int>(regbase::restart_continue) 
         : static_cast<unsigned int>(re.get_restart_type());
    
       const re_repeat* rep = static_cast<const re_repeat*>(pstate);
   bool greedy = (rep->greedy) && (!(m_match_flags & regex_constants::match_any) || m_independent);   
   unsigned count = static_cast<unsigned>((std::min)(static_cast<unsigned>(::boost::BOOST_REGEX_DETAIL_NS::distance(position, last)), static_cast<unsigned>(greedy ? rep->max : rep->min)));
   if(rep->min > count)
   {
      position = last;
      return false;  // not enough text left to match
   }
   std::advance(position, count);
    
    no_type check_is_formatter(unary_type, binary_type, ternary_type);
template<typename T>
unary_type check_is_formatter(T const &, binary_type, ternary_type);
template<typename T>
binary_type check_is_formatter(unary_type, T const &, ternary_type);
template<typename T, typename U>
binary_type check_is_formatter(T const &, U const &, ternary_type);
template<typename T>
ternary_type check_is_formatter(unary_type, binary_type, T const &);
template<typename T, typename U>
ternary_type check_is_formatter(T const &, binary_type, U const &);
template<typename T, typename U>
ternary_type check_is_formatter(unary_type, T const &, U const &);
template<typename T, typename U, typename V>
ternary_type check_is_formatter(T const &, U const &, V const &);
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_match.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Regular expression matching algorithms.
  *                Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    #ifndef BOOST_REGEX_V4_REGEX_REPLACE_HPP
#define BOOST_REGEX_V4_REGEX_REPLACE_HPP
    
    #endif // include
    
    /*!
 * \brief perform numerically safe logsum
 * \param begin The begining iterator.
 * \param end The end iterator.
 * \return the iterator point to the maximum value.
 * \tparam Iterator The type of the iterator.
 */
template<typename Iterator>
inline float LogSum(Iterator begin, Iterator end) {
  float mx = *begin;
  for (Iterator it = begin; it != end; ++it) {
    mx = std::max(mx, *it);
  }
  float sum = 0.0f;
  for (Iterator it = begin; it != end; ++it) {
    sum += std::exp(*it - mx);
  }
  return mx + std::log(sum);
}
    
      bool SingleColBlock() const override {
    return false;
  }
    
    namespace xgboost {
namespace data {
/*!
 * \brief Format specification of SparsePage.
 */
class SparsePageFormat {
 public:
  /*! \brief virtual destructor */
  virtual ~SparsePageFormat() = default;
  /*!
   * \brief Load all the segments into page, advance fi to end of the block.
   * \param page The data to read page into.
   * \param fi the input stream of the file
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page, dmlc::SeekStream* fi) = 0;
  /*!
   * \brief read only the segments we are interested in, advance fi to end of the block.
   * \param page The page to load the data into.
   * \param fi the input stream of the file
   * \param sorted_index_set sorted index of segments we are interested in
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page,
                    dmlc::SeekStream* fi,
                    const std::vector<bst_uint>& sorted_index_set) = 0;
  /*!
   * \brief save the data to fo, when a page was written.
   * \param fo output stream
   */
  virtual void Write(const SparsePage& page, dmlc::Stream* fo) = 0;
  /*!
   * \brief Create sparse page of format.
   * \return The created format functors.
   */
  static SparsePageFormat* Create(const std::string& name);
  /*!
   * \brief decide the format from cache prefix.
   * \return pair of row format, column format type of the cache prefix.
   */
  static std::pair<std::string, std::string> DecideFormat(const std::string& cache_prefix);
};
    }
    }
    
    // logistic loss for probability regression task
struct LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return common::Sigmoid(x); }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return x >= 0.0f && x <= 1.0f; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
  static T PredTransform(T x) { return common::Sigmoid(x); }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static bst_float ProbToMargin(bst_float base_score) {
    CHECK(base_score > 0.0f && base_score < 1.0f)
      << 'base_score must be in (0,1) for logistic loss';
    return -logf(1.0f / base_score - 1.0f);
  }
  static const char* LabelErrorMsg() {
    return 'label must be in [0,1] for logistic regression';
  }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
      auto cv = config.find(kLoggerKey);
  if (cv != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(cv->second.doc(), obj);
    data_.add(kLoggerKey, obj);
  }
    
      // This looks funky, because the parser is named 'options' and it claims
  // ownership of a single top-level-key called 'options'.
  const auto& doc = c.getParser('options')->getData().doc()['options'];
    
      // If we restore, the splay should always be equal.
  for (size_t i = 0; i < 10; i++) {
    auto splay2 = restoreSplayedValue('pack_test_query_name', 3600);
    EXPECT_EQ(splay, splay2);
  }
    
    #include <gtest/gtest.h>
    
      void StopEventLoop() {
    while (!event_pub_->hasStarted()) {
      ::usleep(20);
    }
    }
    
    class AnotherFakeEventPublisher
    : public EventPublisher<FakeSubscriptionContext, FakeEventContext> {
  DECLARE_PUBLISHER('AnotherFakePublisher');
};
    
    /**
@brief Waves action.
@details This action is used for take effect on the target node as waves.
        You can control the effect by these parameters:
        duration, grid size, waves count, amplitude,
        whether waves on horizontal and whether waves on vertical.
*/
class CC_DLL Waves : public Grid3DAction
{
public:
    /**
    @brief Create the action with amplitude, horizontal sin, vertical sin, grid size, waves count and duration.
    @param duration Specify the duration of the Waves action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param waves Specify the waves count of the Waves action.
    @param amplitude Specify the amplitude of the Waves action.
    @param horizontal Specify whether waves on horizontal.
    @param vertical Specify whether waves on vertical.
    @return If the creation success, return a pointer of Waves action; otherwise, return nil.
    */
    static Waves* create(float duration, const Size& gridSize, unsigned int waves, float amplitude, bool horizontal, bool vertical);
    }
    
        if (ret && ret->initWithTarget(selectorTarget, selector))
    {
        ret->autorelease();
        return ret;
    }
    
    void ActionManager::removeActionAtIndex(ssize_t index, tHashElement *element)
{
    Action *action = static_cast<Action*>(element->actions->arr[index]);
    }
    
        /** Resumes the target. All queued actions will be resumed.
     *
     * @param target    A certain target.
     */
    virtual void resumeTarget(Node *target);
    
    /** Pauses all running actions, returning a list of targets whose actions were paused.
     *
     * @return  A list of targets whose actions were paused.
     */
    virtual Vector<Node*> pauseAllRunningActions();
    
    /** Resume a set of targets (convenience function to reverse a pauseAllRunningActions call).
     *
     * @param targetsToResume   A set of targets need to be resumed.
     */
    virtual void resumeTargets(const Vector<Node*>& targetsToResume);
    
    /** Main loop of ActionManager.
     * @param dt    In seconds.
     */
    virtual void update(float dt);
    
protected:
    // declared in ActionManager.m
    
        /** 
     * @brief Initializes with a duration and destination percentage. 
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, float percent);
    
                // Y
            coords.bl.y += ( rand() % (_randrange*2) ) - _randrange;
            coords.br.y += ( rand() % (_randrange*2) ) - _randrange;
            coords.tl.y += ( rand() % (_randrange*2) ) - _randrange;
            coords.tr.y += ( rand() % (_randrange*2) ) - _randrange;
    
    /**
@brief ShakyTiles3D action.
@details This action is make the target node shake with many tiles.
        You can create the action by these parameters:
        duration, grid size, range, whether shake on the z axis.
 */
class CC_DLL ShakyTiles3D : public TiledGrid3DAction
{
public:
    /** 
    @brief Create the action with a range, shake Z vertices, a grid and duration.
    @param duration Specify the duration of the ShakyTiles3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param range Specify the range of the shaky effect.
    @param shakeZ Specify whether shake on the z axis.
    @return If the creation success, return a pointer of ShakyTiles3D action; otherwise, return nil.
    */
    static ShakyTiles3D* create(float duration, const Size& gridSize, int range, bool shakeZ);
    }
    
    AnimationCache* AnimationCache::getInstance()
{
    if (! s_sharedAnimationCache)
    {
        s_sharedAnimationCache = new (std::nothrow) AnimationCache();
        s_sharedAnimationCache->init();
    }
    }
    
        static BOOST_FORCEINLINE bool compare_exchange_weak(
        storage_type volatile& storage, storage_type& expected, storage_type desired, memory_order success_order, memory_order failure_order) BOOST_NOEXCEPT
    {
        return compare_exchange_strong(storage, expected, desired, success_order, failure_order);
    }
    
    template< >
struct make_storage_type< 2u, false >
{
    typedef mars_boost::uint16_t type;
    }
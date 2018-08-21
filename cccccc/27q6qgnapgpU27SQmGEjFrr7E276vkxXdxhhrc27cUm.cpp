
        
        /// used internally
void throwRuntimeError(std::string const& msg);
/// used internally
void throwLogicError(std::string const& msg);
    
    bool Value::getString(char const** str, char const** cend) const {
  if (type_ != stringValue) return false;
  if (value_.string_ == 0) return false;
  unsigned length;
  decodePrefixedString(this->allocated_, this->value_.string_, &length, str);
  *cend = *str + length;
  return true;
}
    
    #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedEnumFieldGenerator);
};
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_repeated_primitive_field.h>
    
    TEST(ByteSourceTest, LimitByteSource) {
  StringPiece data('Hello world!');
  MockByteSource source(data, 3);
  LimitByteSource limit_source(&source, 6);
  EXPECT_EQ(6, limit_source.Available());
  limit_source.Skip(1);
  EXPECT_EQ(5, limit_source.Available());
    }
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
    
    {  int64_t measure() const;
};
    
    void initNuma();
    
    #endif

    
    Array createBacktrace(const BacktraceArgs& backtraceArgs);
void addBacktraceToStructLog(const Array& bt, StructuredLogEntry& cols);
int64_t createBacktraceHash();
req::ptr<CompactTrace> createCompactBacktrace();
    
    /*
 * Shorthands to create std::unique_ptr or std::shared_ptr to a
 * heap-allocated object. Memory will be request-scoped; the pointer
 * wrapper remembers how to properly delete the object with req::Allocator.
 *
 * Usage:
 *   auto ptr = req::make_unique<Foo>(...);
 *   auto ptr = req::make_shared<Foo>(...);
 */
    
      /// Copy data from the internal buffer to the specified target buffer, without
  /// removing the data from the internal buffer. Returns the number of bytes
  /// copied.
  template <typename MutableBufferSequence>
  std::size_t peek_copy(const MutableBufferSequence& buffers)
  {
    return boost::asio::buffer_copy(buffers, storage_.data(), storage_.size());
  }
    
    
    {
    {} // namespace asio
} // namespace boost
    
    namespace boost {
    }
    
        // Find the next context with the same key.
    Value* next_by_key() const
    {
      context* elem = next_;
      while (elem)
      {
        if (elem->key_ == key_)
          return elem->value_;
        elem = elem->next_;
      }
      return 0;
    }
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    #ifndef BOOST_ASIO_DETAIL_FD_SET_ADAPTER_HPP
#define BOOST_ASIO_DETAIL_FD_SET_ADAPTER_HPP
    
    // Calls to asio_handler_invoke must be made from a namespace that does not
// contain overloads of this function. The boost_asio_handler_invoke_helpers
// namespace is defined here for that purpose.
namespace boost_asio_handler_invoke_helpers {
    }
    
    #define BOOST_ASIO_SIGNAL_HANDLER_CHECK( \
    handler_type, handler) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code, int)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::two_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0), \
          static_cast<const int*>(0))) == 1, \
      'SignalHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>(), \
            boost::asio::detail::lvref<const int>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
    bool set_user_non_blocking(int d, state_type& state,
    bool value, boost::system::error_code& ec)
{
  if (d == -1)
  {
    ec = boost::asio::error::bad_descriptor;
    return false;
  }
    }
    
      // Remove the descriptor from /dev/poll. Since this function is only called
  // during a fork, we can apply the change immediately.
  ::pollfd ev = { 0, 0, 0 };
  ev.fd = descriptor;
  ev.events = POLLREMOVE;
  ev.revents = 0;
  ::write(dev_poll_fd_, &ev, sizeof(ev));
    
    #include <boost/asio/detail/pop_options.hpp>
    
    const SparsePage& SparsePageSource::Value() const {
  return *page_;
}
    
    
/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromMat
 * Signature: ([FIIF)J
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromMat
  (JNIEnv *jenv, jclass jcls, jfloatArray jdata, jint jnrow, jint jncol, jfloat jmiss, jlongArray jout) {
  DMatrixHandle result;
  jfloat* data = jenv->GetFloatArrayElements(jdata, 0);
  bst_ulong nrow = (bst_ulong)jnrow;
  bst_ulong ncol = (bst_ulong)jncol;
  jint ret = (jint) XGDMatrixCreateFromMat((float const *)data, nrow, ncol, jmiss, &result);
  setHandle(jenv, jout, result);
  //release
  jenv->ReleaseFloatArrayElements(jdata, data, 0);
  return ret;
}
    
    
    {/*!
 * \brief define compatible keywords in g++
 *  Used to support g++-4.6 and g++4.7
 */
#if DMLC_USE_CXX11 && defined(__GNUC__) && !defined(__clang_version__)
#if __GNUC__ == 4 && __GNUC_MINOR__ < 8
#define override
#define final
#endif
#endif
}  // namespace xgboost
#endif  // XGBOOST_BASE_H_

    
    /*! \brief training parameters for regression tree */
struct TrainParam : public dmlc::Parameter<TrainParam> {
  // learning step size for a time
  float learning_rate;
  // minimum loss change required for a split
  float min_split_loss;
  // maximum depth of a tree
  int max_depth;
  // maximum number of leaves
  int max_leaves;
  // if using histogram based algorithm, maximum number of bins per feature
  int max_bin;
  // growing policy
  enum TreeGrowPolicy { kDepthWise = 0, kLossGuide = 1 };
  int grow_policy;
  // flag to print out detailed breakdown of runtime
  int debug_verbose;
  //----- the rest parameters are less important ----
  // minimum amount of hessian(weight) allowed in a child
  float min_child_weight;
  // L2 regularization factor
  float reg_lambda;
  // L1 regularization factor
  float reg_alpha;
  // default direction choice
  int default_direction;
  // maximum delta update we can add in weight estimation
  // this parameter can be used to stabilize update
  // default=0 means no constraint on weight delta
  float max_delta_step;
  // whether we want to do subsample
  float subsample;
  // whether to subsample columns each split, in each level
  float colsample_bylevel;
  // whether to subsample columns during tree construction
  float colsample_bytree;
  // speed optimization for dense column
  float opt_dense_col;
  // accuracy of sketch
  float sketch_eps;
  // accuracy of sketch
  float sketch_ratio;
  // leaf vector size
  int size_leaf_vector;
  // option for parallelization
  int parallel_option;
  // option to open cacheline optimization
  bool cache_opt;
  // whether to not print info during training.
  bool silent;
  // whether refresh updater needs to update the leaf values
  bool refresh_leaf;
  // auxiliary data structure
  std::vector<int> monotone_constraints;
  // gpu to use for single gpu algorithms
  int gpu_id;
  // number of GPUs to use
  int n_gpus;
  // number of rows in a single GPU batch
  int gpu_batch_nrows;
  // the criteria to use for ranking splits
  std::string split_evaluator;
  // declare the parameters
  DMLC_DECLARE_PARAMETER(TrainParam) {
    DMLC_DECLARE_FIELD(learning_rate)
        .set_lower_bound(0.0f)
        .set_default(0.3f)
        .describe('Learning rate(step size) of update.');
    DMLC_DECLARE_FIELD(min_split_loss)
        .set_lower_bound(0.0f)
        .set_default(0.0f)
        .describe(
            'Minimum loss reduction required to make a further partition.');
    DMLC_DECLARE_FIELD(debug_verbose)
        .set_lower_bound(0)
        .set_default(0)
        .describe('flag to print out detailed breakdown of runtime');
    DMLC_DECLARE_FIELD(max_depth)
        .set_lower_bound(0)
        .set_default(6)
        .describe(
            'Maximum depth of the tree; 0 indicates no limit; a limit is required '
            'for depthwise policy');
    DMLC_DECLARE_FIELD(max_leaves).set_lower_bound(0).set_default(0).describe(
        'Maximum number of leaves; 0 indicates no limit.');
    DMLC_DECLARE_FIELD(max_bin).set_lower_bound(2).set_default(256).describe(
        'if using histogram-based algorithm, maximum number of bins per feature');
    DMLC_DECLARE_FIELD(grow_policy)
        .set_default(kDepthWise)
        .add_enum('depthwise', kDepthWise)
        .add_enum('lossguide', kLossGuide)
        .describe(
            'Tree growing policy. 0: favor splitting at nodes closest to the node, '
            'i.e. grow depth-wise. 1: favor splitting at nodes with highest loss '
            'change. (cf. LightGBM)');
    DMLC_DECLARE_FIELD(min_child_weight)
        .set_lower_bound(0.0f)
        .set_default(1.0f)
        .describe('Minimum sum of instance weight(hessian) needed in a child.');
    DMLC_DECLARE_FIELD(reg_lambda)
        .set_lower_bound(0.0f)
        .set_default(1.0f)
        .describe('L2 regularization on leaf weight');
    DMLC_DECLARE_FIELD(reg_alpha)
        .set_lower_bound(0.0f)
        .set_default(0.0f)
        .describe('L1 regularization on leaf weight');
    DMLC_DECLARE_FIELD(default_direction)
        .set_default(0)
        .add_enum('learn', 0)
        .add_enum('left', 1)
        .add_enum('right', 2)
        .describe('Default direction choice when encountering a missing value');
    DMLC_DECLARE_FIELD(max_delta_step)
        .set_lower_bound(0.0f)
        .set_default(0.0f)
        .describe('Maximum delta step we allow each tree's weight estimate to be. '\
                  'If the value is set to 0, it means there is no constraint');
    DMLC_DECLARE_FIELD(subsample)
        .set_range(0.0f, 1.0f)
        .set_default(1.0f)
        .describe('Row subsample ratio of training instance.');
    DMLC_DECLARE_FIELD(colsample_bylevel)
        .set_range(0.0f, 1.0f)
        .set_default(1.0f)
        .describe('Subsample ratio of columns, resample on each level.');
    DMLC_DECLARE_FIELD(colsample_bytree)
        .set_range(0.0f, 1.0f)
        .set_default(1.0f)
        .describe('Subsample ratio of columns, resample on each tree construction.');
    DMLC_DECLARE_FIELD(opt_dense_col)
        .set_range(0.0f, 1.0f)
        .set_default(1.0f)
        .describe('EXP Param: speed optimization for dense column.');
    DMLC_DECLARE_FIELD(sketch_eps)
        .set_range(0.0f, 1.0f)
        .set_default(0.03f)
        .describe('EXP Param: Sketch accuracy of approximate algorithm.');
    DMLC_DECLARE_FIELD(sketch_ratio)
        .set_lower_bound(0.0f)
        .set_default(2.0f)
        .describe('EXP Param: Sketch accuracy related parameter of approximate algorithm.');
    DMLC_DECLARE_FIELD(size_leaf_vector)
        .set_lower_bound(0)
        .set_default(0)
        .describe('Size of leaf vectors, reserved for vector trees');
    DMLC_DECLARE_FIELD(parallel_option)
        .set_default(0)
        .describe('Different types of parallelization algorithm.');
    DMLC_DECLARE_FIELD(cache_opt)
        .set_default(true)
        .describe('EXP Param: Cache aware optimization.');
    DMLC_DECLARE_FIELD(silent)
        .set_default(false)
        .describe('Do not print information during trainig.');
    DMLC_DECLARE_FIELD(refresh_leaf)
        .set_default(true)
        .describe('Whether the refresh updater needs to update leaf values.');
    DMLC_DECLARE_FIELD(monotone_constraints)
        .set_default(std::vector<int>())
        .describe('Constraint of variable monotonicity');
    DMLC_DECLARE_FIELD(gpu_id)
        .set_lower_bound(0)
        .set_default(0)
        .describe('gpu to use for single gpu algorithms');
    DMLC_DECLARE_FIELD(n_gpus)
        .set_lower_bound(-1)
        .set_default(1)
        .describe('Number of GPUs to use for multi-gpu algorithms: -1=use all GPUs');
    DMLC_DECLARE_FIELD(gpu_batch_nrows)
        .set_lower_bound(-1)
        .set_default(0)
        .describe('Number of rows in a GPU batch, used for finding quantiles on GPU; '
                  '-1 to use all rows assignted to a GPU, and 0 to auto-deduce');
    DMLC_DECLARE_FIELD(split_evaluator)
        .set_default('elastic_net,monotonic')
        .describe('The criteria to use for ranking splits');
    // add alias of parameters
    DMLC_DECLARE_ALIAS(reg_lambda, lambda);
    DMLC_DECLARE_ALIAS(reg_alpha, alpha);
    DMLC_DECLARE_ALIAS(min_split_loss, gamma);
    DMLC_DECLARE_ALIAS(learning_rate, eta);
  }
  /*! \brief whether need forward small to big search: default right */
  inline bool NeedForwardSearch(float col_density, bool indicator) const {
    return this->default_direction == 2 ||
           (default_direction == 0 && (col_density < opt_dense_col) &&
            !indicator);
  }
  /*! \brief whether need backward big to small search: default left */
  inline bool NeedBackwardSearch(float col_density, bool indicator) const {
    return this->default_direction != 2;
  }
  /*! \brief given the loss change, whether we need to invoke pruning */
  inline bool NeedPrune(double loss_chg, int depth) const {
    return loss_chg < this->min_split_loss;
  }
  /*! \brief whether we can split with current hessian */
  inline bool CannotSplit(double sum_hess, int depth) const {
    return sum_hess < this->min_child_weight * 2.0;
  }
  /*! \brief maximum sketch size */
  inline unsigned MaxSketchSize() const {
    auto ret = static_cast<unsigned>(sketch_ratio / sketch_eps);
    CHECK_GT(ret, 0U);
    return ret;
  }
};
    
      MetaInfo& Info() override {
    return source_->info;
  }
    
        // Create an invisible mouse cursor
    // Because al_hide_mouse_cursor() seems to mess up with the actual inputs..
    ALLEGRO_BITMAP* mouse_cursor = al_create_bitmap(8,8);
    g_MouseCursorInvisible = al_create_mouse_cursor(mouse_cursor, 0, 0);
    al_destroy_bitmap(mouse_cursor);
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    #define IM_VEC4_CLASS_EXTRA                                                 \
        ImVec4(const MyVec4& f) { x = f.x; y = f.y; z = f.z; w = f.w; }     \
        operator MyVec4() const { return MyVec4(x,y,z,w); }
*/
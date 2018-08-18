
        
        #include 'tensorflow/core/distributed_runtime/worker_cache.h'
#include 'tensorflow/core/platform/mutex.h'
#include 'tensorflow/core/platform/thread_annotations.h'
#include 'tensorflow/core/platform/types.h'
#include 'tensorflow/core/protobuf/worker.pb.h'
    
      auto extend_fn = [this, handle, def_1, initial_version, &extend_done,
                    &extend_can_start]() {
    extend_can_start.WaitForNotification();
    int64 version_1;
    TF_ASSERT_OK(ExtendSession(handle, def_1, initial_version, &version_1));
    extend_done.Notify();
  };
    
      // Start tracing, including the ID attached to the RPC.
  tracing::ScopedActivity* TraceRpc(
      StringPiece name,
      const std::multimap<::grpc::string_ref, ::grpc::string_ref>& metadata) {
    StringPiece id;
    auto it = metadata.find(GrpcIdKey());
    if (it != metadata.end()) {
      id = StringPiece(it->second.data(), it->second.size());
    }
    return new tracing::ScopedActivity(name, id);
  }
    
    class DebugGraphDecorator : public DebugGraphDecoratorInterface {
 public:
  DebugGraphDecorator(const DebugOptions& debug_options)
      : debug_options_(debug_options) {}
  virtual ~DebugGraphDecorator() {}
    }
    
    void PartialRunMgr::PartialRunDone(int step_id, StatusCallback done,
                                   const Status& status) {
  Status callback_status;
  {
    mutex_lock l(mu_);
    auto run_it = step_id_to_partial_run_.find(step_id);
    if (run_it == step_id_to_partial_run_.end()) {
      return;
    }
    run_it->second->final_status.Update(status);
    if (!run_it->second->executor_done) {
      // If we found the partial_run, we set the final callback to call only
      // when the executor is completely done.
      run_it->second->final_callback = std::move(done);
      return;
    }
    callback_status = run_it->second->final_status;
  }
  // Otherwise we call the callback immediately.
  done(callback_status);
  mutex_lock l(mu_);
  step_id_to_partial_run_.erase(step_id);
}
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
      // Writes all output to the file. Does *not* close the WritableFile.
  //
  // After calling Close(), any further calls to `WriteRecord()` or `Flush()`
  // are invalid.
  Status Close();
    
    
    {}  // namespace tensorflow
#endif  // TENSORFLOW_USE_SYCL

    
      void Compute(OpKernelContext* context) override {
    OP_REQUIRES(
        context, context->num_inputs() == 4,
        errors::InvalidArgument('EncodeAudio requires exactly four inputs.'));
    }
    
        NodeDef* const_node2 = graph_def.add_node();
    const_node2->set_name('const_node2');
    const_node2->set_op('Const');
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    
    {
    {
    {
    {}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    void MetaInfo::LoadBinary(dmlc::Stream *fi) {
  int version;
  CHECK(fi->Read(&version, sizeof(version)) == sizeof(version)) << 'MetaInfo: invalid version';
  CHECK(version >= 1 && version <= kVersion) << 'MetaInfo: unsupported file version';
  CHECK(fi->Read(&num_row_, sizeof(num_row_)) == sizeof(num_row_)) << 'MetaInfo: invalid format';
  CHECK(fi->Read(&num_col_, sizeof(num_col_)) == sizeof(num_col_)) << 'MetaInfo: invalid format';
  CHECK(fi->Read(&num_nonzero_, sizeof(num_nonzero_)) == sizeof(num_nonzero_))
      << 'MetaInfo: invalid format';
  CHECK(fi->Read(&labels_)) <<  'MetaInfo: invalid format';
  CHECK(fi->Read(&group_ptr_)) << 'MetaInfo: invalid format';
  if (version >= kVersionQidAdded) {
    CHECK(fi->Read(&qids_)) << 'MetaInfo: invalid format';
  } else {  // old format doesn't contain qid field
    qids_.clear();
  }
  CHECK(fi->Read(&weights_)) << 'MetaInfo: invalid format';
  CHECK(fi->Read(&root_index_)) << 'MetaInfo: invalid format';
  CHECK(fi->Read(&base_margin_)) << 'MetaInfo: invalid format';
}
    
    /*!
 * \brief Whether always log console message with time.
 *  It will display like, with timestamp appended to head of the message.
 *  '[21:47:50] 6513x126 matrix with 143286 entries loaded from
 * ../data/agaricus.txt.train'
 */
#ifndef XGBOOST_LOG_WITH_TIME
#define XGBOOST_LOG_WITH_TIME 1
#endif
    
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
    
    // implementation of inline functions.
inline void Learner::Predict(const SparsePage::Inst& inst,
                             bool output_margin,
                             HostDeviceVector<bst_float>* out_preds,
                             unsigned ntree_limit) const {
  gbm_->PredictInstance(inst, &out_preds->HostVector(), ntree_limit);
  if (!output_margin) {
    obj_->PredTransform(out_preds);
  }
}
    
    class SparsePageDMatrix : public DMatrix {
 public:
  explicit SparsePageDMatrix(std::unique_ptr<DataSource>&& source,
                             std::string  cache_info)
      : source_(std::move(source)), cache_info_(std::move(cache_info)) {
  }
    }
    
    class SparsePageRawFormat : public SparsePageFormat {
 public:
  bool Read(SparsePage* page, dmlc::SeekStream* fi) override {
    if (!fi->Read(&(page->offset))) return false;
    CHECK_NE(page->offset.size(), 0U) << 'Invalid SparsePage file';
    page->data.resize(page->offset.back());
    if (page->data.size() != 0) {
      CHECK_EQ(fi->Read(dmlc::BeginPtr(page->data),
                        (page->data).size() * sizeof(Entry)),
               (page->data).size() * sizeof(Entry))
          << 'Invalid SparsePage file';
    }
    return true;
  }
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
    
    bool js_cocos2dx_studio_ZOrderFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ZOrderFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ZOrderFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ZOrderFrame_getZOrder(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ZOrderFrame_setZOrder(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ZOrderFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ZOrderFrame_ZOrderFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
        return 0;
}
int lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect(lua_State* tolua_S)
{
    int argc = 0;
    CocosDenshion::SimpleAudioEngine* cobj = nullptr;
    bool ok  = true;
    
    
    
    
    
    
    
    
    
        virtual void DrawPoint(const b2Vec2& p, float32 size, const b2Color& color);
    
    		b2Profile aveProfile;
		memset(&aveProfile, 0, sizeof(b2Profile));
		if (m_stepCount > 0)
		{
			float32 scale = 1.0f / m_stepCount;
			aveProfile.step = scale * m_totalProfile.step;
			aveProfile.collide = scale * m_totalProfile.collide;
			aveProfile.solve = scale * m_totalProfile.solve;
			aveProfile.solveInit = scale * m_totalProfile.solveInit;
			aveProfile.solveVelocity = scale * m_totalProfile.solveVelocity;
			aveProfile.solvePosition = scale * m_totalProfile.solvePosition;
			aveProfile.solveTOI = scale * m_totalProfile.solveTOI;
			aveProfile.broadphase = scale * m_totalProfile.broadphase;
		}
    
    	AddPair()
	{
		m_world->SetGravity(b2Vec2(0.0f,0.0f));
		{
			b2CircleShape shape;
			shape.m_p.SetZero();
			shape.m_radius = 0.1f;
    }
    }
    
    		// Compute consistent velocities for new bodies based on
		// cached velocity.
		b2Vec2 center1 = body1->GetWorldCenter();
		b2Vec2 center2 = body2->GetWorldCenter();
		
		b2Vec2 velocity1 = m_velocity + b2Cross(m_angularVelocity, center1 - center);
		b2Vec2 velocity2 = m_velocity + b2Cross(m_angularVelocity, center2 - center);
    
    			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0.0f, 1.0f);
			m_car = m_world->CreateBody(&bd);
			m_car->CreateFixture(&chassis, 1.0f);
    
    bool Polygon2d::HasOverlap(const LineSegment2d &line_segment) const {
  CHECK_GE(points_.size(), 3);
  if ((line_segment.start().x() < min_x_ && line_segment.end().x() < min_x_) ||
      (line_segment.start().x() > max_x_ && line_segment.end().x() > max_x_) ||
      (line_segment.start().y() < min_y_ && line_segment.end().y() < min_y_) ||
      (line_segment.start().y() > max_y_ && line_segment.end().y() > max_y_)) {
    return false;
  }
  Vec2d first;
  Vec2d last;
  return GetOverlap(line_segment, &first, &last);
}
    
      /**
   * @brief Compute the distance from a point to the polygon. If the point is
   *        within the polygon, return 0. Otherwise, this distance is
   *        the minimal distance from the point to the edges of the polygon.
   * @param point The point to compute whose distance to the polygon.
   * @return The distance from the point to the polygon.
   */
  double DistanceTo(const Vec2d &point) const;
    
    
    {
    {
    {}  // namespace traffic_light
}  // namespace perception
}  // namespace apollo
    
      ObjectDecisionType decision_overtake;
  decision_overtake.mutable_overtake();
  EXPECT_TRUE(PathObstacle::IsLongitudinalDecision(decision_overtake));

        
        class PlatformStyle;
class WalletModel;
    
    /** A hasher class for RIPEMD-160. */
class CRIPEMD160
{
private:
    uint32_t s[5];
    unsigned char buf[64];
    uint64_t bytes;
    }
    
    std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
      Slice in(encoded);
  ParsedInternalKey decoded('', 0, kTypeValue);
    
      char* scratch = new char[length];
  leveldb::Slice result;
  s = orig_file->Read(length, &result, scratch);
  delete orig_file;
  if (s.ok()) {
    std::string tmp_name = GetDirName(filename) + '/truncate.tmp';
    WritableFile* tmp_file;
    s = env->NewWritableFile(tmp_name, &tmp_file);
    if (s.ok()) {
      s = tmp_file->Append(result);
      delete tmp_file;
      if (s.ok()) {
        s = env->RenameFile(tmp_name, filename);
      } else {
        env->DeleteFile(tmp_name);
      }
    }
  }
    
    std::string LogFileName(const std::string& name, uint64_t number) {
  assert(number > 0);
  return MakeFileName(name, number, 'log');
}
    
    template <typename Dtype>
bool HDF5DataLayer<Dtype>::Skip() {
  int size = Caffe::solver_count();
  int rank = Caffe::solver_rank();
  bool keep = (offset_ % size) == rank ||
              // In test mode, only rank 0 runs, so avoid skipping
              this->layer_param_.phase() == TEST;
  return !keep;
}
    
    template <>
void hdf5_load_nd_dataset<double>(hid_t file_id, const char* dataset_name_,
        int min_dim, int max_dim, Blob<double>* blob, bool reshape) {
  hdf5_load_nd_dataset_helper(file_id, dataset_name_, min_dim, max_dim, blob,
                              reshape);
  herr_t status = H5LTread_dataset_double(
    file_id, dataset_name_, blob->mutable_cpu_data());
  CHECK_GE(status, 0) << 'Failed to read double dataset ' << dataset_name_;
}
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \max(min, \min(max, x))
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      /**
   * @brief Zeroes out the diffs of all net parameters.
   *        Should be run before Backward.
   */
  void ClearParamDiffs();
    
     protected:
  string SnapshotFilename(const string& extension);
  string SnapshotToBinaryProto();
  string SnapshotToHDF5();
  // The test routine
  void TestAll();
  void Test(const int test_net_id = 0);
  virtual void SnapshotSolverState(const string& model_filename) = 0;
  virtual void RestoreSolverStateFromHDF5(const string& state_file) = 0;
  virtual void RestoreSolverStateFromBinaryProto(const string& state_file) = 0;
  void DisplayOutputBlobs(const int net_id);
  void UpdateSmoothedLoss(Dtype loss, int start_iter, int average_loss);
    
    template <typename Dtype>
void Net<Dtype>::Backward() {
  BackwardFromTo(layers_.size() - 1, 0);
  if (debug_info_) {
    Dtype asum_data = 0, asum_diff = 0, sumsq_data = 0, sumsq_diff = 0;
    for (int i = 0; i < learnable_params_.size(); ++i) {
      asum_data += learnable_params_[i]->asum_data();
      asum_diff += learnable_params_[i]->asum_diff();
      sumsq_data += learnable_params_[i]->sumsq_data();
      sumsq_diff += learnable_params_[i]->sumsq_diff();
    }
    const Dtype l2norm_data = std::sqrt(sumsq_data);
    const Dtype l2norm_diff = std::sqrt(sumsq_diff);
    LOG(ERROR) << '    [Backward] All net params (data, diff): '
               << 'L1 norm = (' << asum_data << ', ' << asum_diff << '); '
               << 'L2 norm = (' << l2norm_data << ', ' << l2norm_diff << ')';
  }
}
    
    #include 'caffe/util/signal_handler.h'
    
    #include 'boost/scoped_ptr.hpp'
#include 'glog/logging.h'
#include 'google/protobuf/text_format.h'
#include 'stdint.h'
    
    /* Return the indices of the top N values of vector v. */
static std::vector<int> Argmax(const std::vector<float>& v, int N) {
  std::vector<std::pair<float, int> > pairs;
  for (size_t i = 0; i < v.size(); ++i)
    pairs.push_back(std::make_pair(v[i], i));
  std::partial_sort(pairs.begin(), pairs.begin() + N, pairs.end(), PairCompare);
    }
    
    	ERR_FAIL_COND(!tasks.has(p_task));
	Task &t = tasks[p_task];
    
    
    {	return ret;
}
    
    
    {	audio_track = p_track;
}
    
    	void set_agent_radius(float p_value);
	float get_agent_radius();
    
    	_Data *_data = _table[idx];
    
    #endif // MIDI_DRIVER_ALSAMIDI_H
#endif // ALSAMIDI_ENABLED

    
    #include 'core/os/midi_driver.h'
#include 'core/vector.h'
    
    	// second clamping: keep abs(time_deficit) < jitter_fix * frame_slise
	float max_clock_deviation = get_physics_jitter_fix() * p_frame_slice;
	ret.clamp_idle(p_idle_step - max_clock_deviation, p_idle_step + max_clock_deviation);
    
    class MainTimerSync {
	// wall clock time measured on the main thread
	uint64_t last_cpu_ticks_usec;
	uint64_t current_cpu_ticks_usec;
    }
    
    godot_pool_string_array_write_access GDAPI *godot_pool_string_array_write_access_copy(const godot_pool_string_array_write_access *p_other) {
	PoolVector<String>::Write *other = (PoolVector<String>::Write *)p_other;
	return (godot_pool_string_array_write_access *)memnew(PoolVector<String>::Write(*other));
}
godot_string GDAPI *godot_pool_string_array_write_access_ptr(const godot_pool_string_array_write_access *p_write) {
	PoolVector<String>::Write *write = (PoolVector<String>::Write *)p_write;
	return (godot_string *)write->ptr();
}
void GDAPI godot_pool_string_array_write_access_operator_assign(godot_pool_string_array_write_access *p_write, godot_pool_string_array_write_access *p_other) {
	PoolVector<String>::Write *write = (PoolVector<String>::Write *)p_write;
	PoolVector<String>::Write *other = (PoolVector<String>::Write *)p_other;
	write->operator=(*other);
}
void GDAPI godot_pool_string_array_write_access_destroy(godot_pool_string_array_write_access *p_write) {
	memdelete((PoolVector<String>::Write *)p_write);
}
    
    /*!
 * \brief create matrix content from dense matrix
 * \param data pointer to the data space
 * \param nrow number of rows
 * \param ncol number columns
 * \param missing which value to represent missing value
 * \param out created dmatrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromMat(const float *data,
                                   bst_ulong nrow,
                                   bst_ulong ncol,
                                   float missing,
                                   DMatrixHandle *out);
/*!
 * \brief create matrix content from dense matrix
 * \param data pointer to the data space
 * \param nrow number of rows
 * \param ncol number columns
 * \param missing which value to represent missing value
 * \param out created dmatrix
 * \param nthread number of threads (up to maximum cores available, if <=0 use all cores)
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromMat_omp(const float *data,  // NOLINT
                                       bst_ulong nrow, bst_ulong ncol,
                                       float missing, DMatrixHandle *out,
                                       int nthread);
/*!
 * \brief create matrix content from python data table
 * \param data pointer to pointer to column data
 * \param feature_stypes pointer to strings
 * \param nrow number of rows
 * \param ncol number columns
 * \param out created dmatrix
 * \param nthread number of threads (up to maximum cores available, if <=0 use all cores)
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromDT(void** data,
                                  const char ** feature_stypes,
                                  bst_ulong nrow,
                                  bst_ulong ncol,
                                  DMatrixHandle* out,
                                  int nthread);
/*!
 * \brief create a new dmatrix from sliced content of existing matrix
 * \param handle instance of data matrix to be sliced
 * \param idxset index set
 * \param len length of index set
 * \param out a sliced new matrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSliceDMatrix(DMatrixHandle handle,
                                  const int *idxset,
                                  bst_ulong len,
                                  DMatrixHandle *out);
/*!
 * \brief create a new dmatrix from sliced content of existing matrix
 * \param handle instance of data matrix to be sliced
 * \param idxset index set
 * \param len length of index set
 * \param out a sliced new matrix
 * \param allow_groups allow slicing of an array with groups
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSliceDMatrixEx(DMatrixHandle handle,
                                    const int *idxset,
                                    bst_ulong len,
                                    DMatrixHandle *out,
                                    int allow_groups);
/*!
 * \brief free space in data matrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixFree(DMatrixHandle handle);
/*!
 * \brief load a data matrix into binary file
 * \param handle a instance of data matrix
 * \param fname file name
 * \param silent print statistics when saving
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSaveBinary(DMatrixHandle handle,
                                const char *fname, int silent);
/*!
 * \brief set float vector to a content in info
 * \param handle a instance of data matrix
 * \param field field name, can be label, weight
 * \param array pointer to float vector
 * \param len length of array
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSetFloatInfo(DMatrixHandle handle,
                                  const char *field,
                                  const float *array,
                                  bst_ulong len);
/*!
 * \brief set uint32 vector to a content in info
 * \param handle a instance of data matrix
 * \param field field name
 * \param array pointer to unsigned int vector
 * \param len length of array
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSetUIntInfo(DMatrixHandle handle,
                                 const char *field,
                                 const unsigned *array,
                                 bst_ulong len);
/*!
 * \brief set label of the training matrix
 * \param handle a instance of data matrix
 * \param group pointer to group size
 * \param len length of array
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSetGroup(DMatrixHandle handle,
                              const unsigned *group,
                              bst_ulong len);
/*!
 * \brief get float info vector from matrix
 * \param handle a instance of data matrix
 * \param field field name
 * \param out_len used to set result length
 * \param out_dptr pointer to the result
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixGetFloatInfo(const DMatrixHandle handle,
                                  const char *field,
                                  bst_ulong* out_len,
                                  const float **out_dptr);
/*!
 * \brief get uint32 info vector from matrix
 * \param handle a instance of data matrix
 * \param field field name
 * \param out_len The length of the field.
 * \param out_dptr pointer to the result
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixGetUIntInfo(const DMatrixHandle handle,
                                 const char *field,
                                 bst_ulong* out_len,
                                 const unsigned **out_dptr);
/*!
 * \brief get number of rows.
 * \param handle the handle to the DMatrix
 * \param out The address to hold number of rows.
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixNumRow(DMatrixHandle handle,
                            bst_ulong *out);
/*!
 * \brief get number of columns
 * \param handle the handle to the DMatrix
 * \param out The output of number of columns
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixNumCol(DMatrixHandle handle,
                            bst_ulong *out);
// --- start XGBoost class
/*!
 * \brief create xgboost learner
 * \param dmats matrices that are set to be cached
 * \param len length of dmats
 * \param out handle to the result booster
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGBoosterCreate(const DMatrixHandle dmats[],
                            bst_ulong len,
                            BoosterHandle *out);
/*!
 * \brief free obj in handle
 * \param handle handle to be freed
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGBoosterFree(BoosterHandle handle);
    
      delete metric;
    
    void GBTree::InitUpdater() {
  if (updaters_.size() != 0) return;
  std::string tval = tparam_.updater_seq;
  std::vector<std::string> ups = common::Split(tval, ',');
  for (const std::string& pstr : ups) {
    std::unique_ptr<TreeUpdater> up(TreeUpdater::Create(pstr.c_str(), learner_param_));
    up->Init(this->cfg_);
    updaters_.push_back(std::move(up));
  }
}
    
     protected:
  // helper to collect and query feature meta information
  struct FMetaHelper {
   public:
    /*! \brief find type of each feature, use column format */
    inline void InitByCol(DMatrix* p_fmat,
                          const RegTree& tree) {
      fminmax_.resize(tree.param.num_feature * 2);
      std::fill(fminmax_.begin(), fminmax_.end(),
                -std::numeric_limits<bst_float>::max());
      // start accumulating statistics
      for (const auto &batch : p_fmat->GetSortedColumnBatches()) {
        for (bst_uint fid = 0; fid < batch.Size(); ++fid) {
          auto c = batch[fid];
          if (c.size() != 0) {
            CHECK_LT(fid * 2, fminmax_.size());
            fminmax_[fid * 2 + 0] =
                std::max(-c[0].fvalue, fminmax_[fid * 2 + 0]);
            fminmax_[fid * 2 + 1] =
                std::max(c[c.size() - 1].fvalue, fminmax_[fid * 2 + 1]);
          }
        }
      }
    }
    /*! \brief synchronize the information */
    inline void SyncInfo() {
      rabit::Allreduce<rabit::op::Max>(dmlc::BeginPtr(fminmax_), fminmax_.size());
    }
    // get feature type, 0:empty 1:binary 2:real
    inline int Type(bst_uint fid) const {
      CHECK_LT(fid * 2 + 1, fminmax_.size())
          << 'FeatHelper fid exceed query bound ';
      bst_float a = fminmax_[fid * 2];
      bst_float b = fminmax_[fid * 2 + 1];
      if (a == -std::numeric_limits<bst_float>::max()) return 0;
      if (-a == b) {
        return 1;
      } else {
        return 2;
      }
    }
    inline bst_float MaxValue(bst_uint fid) const {
      return fminmax_[fid *2 + 1];
    }
    inline void SampleCol(float p, std::vector<bst_uint> *p_findex) const {
      std::vector<bst_uint> &findex = *p_findex;
      findex.clear();
      for (size_t i = 0; i < fminmax_.size(); i += 2) {
        const auto fid = static_cast<bst_uint>(i / 2);
        if (this->Type(fid) != 0) findex.push_back(fid);
      }
      auto n = static_cast<unsigned>(p * findex.size());
      std::shuffle(findex.begin(), findex.end(), common::GlobalRandom());
      findex.resize(n);
      // sync the findex if it is subsample
      std::string s_cache;
      common::MemoryBufferStream fc(&s_cache);
      dmlc::Stream& fs = fc;
      if (rabit::GetRank() == 0) {
        fs.Write(findex);
      }
      rabit::Broadcast(&s_cache, 0);
      fs.Read(&findex);
    }
    }
    
    
    {  // thread temp data
  // used to hold temporal sketch
  std::vector<std::vector<SketchEntry> > thread_sketch_;
  // used to hold statistics
  std::vector<std::vector<SKStats> > thread_stats_;
  // node statistics
  std::vector<SKStats> node_stats_;
  // summary array
  std::vector<WXQSketch::SummaryContainer> summary_array_;
  // reducer for summary
  rabit::Reducer<SKStats, SKStats::Reduce> stats_reducer_;
  // reducer for summary
  rabit::SerializeReducer<WXQSketch::SummaryContainer> sketch_reducer_;
  // per node, per feature sketch
  std::vector<common::WXQuantileSketch<bst_float, bst_float> > sketchs_;
};
    
    
    { private:
  inline static void AddStats(const RegTree &tree,
                              const RegTree::FVec &feat,
                              const std::vector<GradientPair> &gpair,
                              const MetaInfo &info,
                              const bst_uint ridx,
                              GradStats *gstats) {
    // start from groups that belongs to current data
    auto pid = static_cast<int>(info.GetRoot(ridx));
    gstats[pid].Add(gpair[ridx]);
    // tranverse tree
    while (!tree[pid].IsLeaf()) {
      unsigned split_index = tree[pid].SplitIndex();
      pid = tree.GetNext(pid, feat.Fvalue(split_index), feat.IsMissing(split_index));
      gstats[pid].Add(gpair[ridx]);
    }
  }
  inline void Refresh(const GradStats *gstats,
                      int nid, RegTree *p_tree) {
    RegTree &tree = *p_tree;
    tree.Stat(nid).base_weight =
        static_cast<bst_float>(CalcWeight(param_, gstats[nid]));
    tree.Stat(nid).sum_hess = static_cast<bst_float>(gstats[nid].sum_hess);
    if (tree[nid].IsLeaf()) {
      if (param_.refresh_leaf) {
        tree[nid].SetLeaf(tree.Stat(nid).base_weight * param_.learning_rate);
      }
    } else {
      tree.Stat(nid).loss_chg = static_cast<bst_float>(
          xgboost::tree::CalcGain(param_, gstats[tree[nid].LeftChild()]) +
          xgboost::tree::CalcGain(param_, gstats[tree[nid].RightChild()]) -
          xgboost::tree::CalcGain(param_, gstats[nid]));
      this->Refresh(gstats, tree[nid].LeftChild(), p_tree);
      this->Refresh(gstats, tree[nid].RightChild(), p_tree);
    }
  }
  // training parameter
  TrainParam param_;
  // reducer
  rabit::Reducer<GradStats, GradStats::Reduce> reducer_;
};
    
    // tress
#include '../src/tree/split_evaluator.cc'
#include '../src/tree/tree_model.cc'
#include '../src/tree/tree_updater.cc'
#include '../src/tree/updater_colmaker.cc'
#include '../src/tree/updater_quantile_hist.cc'
#include '../src/tree/updater_prune.cc'
#include '../src/tree/updater_refresh.cc'
#include '../src/tree/updater_sync.cc'
#include '../src/tree/updater_histmaker.cc'
#include '../src/tree/updater_skmaker.cc'
    
    
    {  /*!
   * \brief transform prediction values, this is only called when Eval is called,
   *  usually it redirect to PredTransform
   * \param io_preds prediction values, saves to this vector as well
   */
  virtual void EvalTransform(HostDeviceVector<bst_float> *io_preds) {
    this->PredTransform(io_preds);
  }
  /*!
   * \brief transform probability value back to margin
   * this is used to transform user-set base_score back to margin
   * used by gradient boosting
   * \return transformed value
   */
  virtual bst_float ProbToMargin(bst_float base_score) const {
    return base_score;
  }
  /*!
   * \brief Create an objective function according to name.
   * \param tparam Generic parameters.
   * \param name Name of the objective.
   */
  static ObjFunction* Create(const std::string& name, LearnerTrainParam const* tparam);
};
    
            // X::iterator must return iterator whose value_type is T
        CHECK((std::is_same<json::iterator::value_type, json>::value));
        // X::iterator must meet the forward iterator requirements
        CHECK((std::is_base_of<std::forward_iterator_tag, typename std::iterator_traits<json::iterator>::iterator_category>::value));
        // X::iterator must be convertible to X::const_iterator
        CHECK((std::is_convertible<json::iterator, json::const_iterator>::value));
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write at a nonexisting key
        object.at('the fast') = 'il rapido';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    
    {    // exception out_of_range.401
    try
    {
        // try to write beyond the array limit
        array.at(5) = 'sixth';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
      PollCtrlParam ctrl_param;
  ctrl_param.operation = EPOLL_CTL_ADD;
  ctrl_param.fd = pipe_fd_[0];
  ctrl_param.event.data.fd = pipe_fd_[0];
  ctrl_param.event.events = EPOLLIN;
  ctrl_params_[ctrl_param.fd] = ctrl_param;
    
      apollo::cyber::WaitForShutdown();
  delete pr;
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
      NaviSpeedTsConstraints constraints;
  constraints.v_max = 20.0;
  constraints.v_preffered = 10.0;
  constraints.a_max = 4.0;
  constraints.a_preffered = 2.0;
  constraints.b_max = 5.0;
  constraints.b_preffered = 2.0;
  graph.UpdateConstraints(constraints);
    
     private:
  void MakeDecisions(Frame* const frame,
                     ReferenceLineInfo* const reference_line_info);
  bool FindCrosswalks(ReferenceLineInfo* const reference_line_info);
  bool CheckStopForObstacle(ReferenceLineInfo* const reference_line_info,
                            const hdmap::CrosswalkInfoConstPtr crosswalk_ptr,
                            const Obstacle& obstacle,
                            const double stop_deceleration);
    
      bool traffic_light_all_done = true;
  for (const auto& traffic_light_overlap_id :
       GetContext()->current_traffic_light_overlap_ids) {
    // get overlap along reference line
    PathOverlap* current_traffic_light_overlap =
        scenario::util::GetOverlapOnReferenceLine(reference_line_info,
                                                  traffic_light_overlap_id,
                                                  ReferenceLineInfo::SIGNAL);
    if (!current_traffic_light_overlap) {
      continue;
    }
    }
    
    namespace apollo {
namespace planning {
    }
    }
    
    /**
 * @brief Cross product between two 2-D vectors from the common start point,
 *        and end at two other points.
 * @param start_point The common start point of two vectors in 2-D.
 * @param end_point_1 The end point of the first vector.
 * @param end_point_2 The end point of the second vector.
 *
 * @return The cross product result.
 */
double CrossProd(const Vec2d &start_point, const Vec2d &end_point_1,
                 const Vec2d &end_point_2);
    
    Status ControllerAgent::InitializeConf(const ControlConf *control_conf) {
  if (!control_conf) {
    AERROR << 'control_conf is null';
    return Status(ErrorCode::CONTROL_INIT_ERROR, 'Failed to load config');
  }
  control_conf_ = control_conf;
  for (auto controller_type : control_conf_->active_controllers()) {
    auto controller = controller_factory_.CreateObject(
        static_cast<ControlConf::ControllerType>(controller_type));
    if (controller) {
      controller_list_.emplace_back(std::move(controller));
    } else {
      AERROR << 'Controller: ' << controller_type << 'is not supported';
      return Status(ErrorCode::CONTROL_INIT_ERROR,
                    'Invalid controller type:' + controller_type);
    }
  }
  return Status::OK();
}
    
      std::string image_name;
  while (fin >> image_name) {
    AINFO << 'image: ' << image_name;
    std::string image_path =
        FLAGS_image_root + '/' + image_name + FLAGS_image_ext;
    std::string result_path = FLAGS_dest_dir + '/' + image_name + '.txt';
    }
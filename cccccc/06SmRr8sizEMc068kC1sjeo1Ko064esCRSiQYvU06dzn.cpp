
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    #include 'content/nw/src/api/base/base.h'
    
    #include <string>
    
    v8::Handle<v8::Value> AllocateId(int routing_id) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::EscapableHandleScope scope(isolate);
    }
    
    #endif  // CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_

    
    
    {} // namespace nwapi

    
    
#include 'base/basictypes.h'
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  return item->is_checked_;
}
    
    void Menu::Create(const base::DictionaryValue& option) {
  is_menu_modified_ = true;
  menu_delegate_.reset(new MenuDelegate(object_manager()));
  menu_model_.reset(new ui::NwMenuModel(menu_delegate_.get()));
    }
    
    ExtensionFunction::ResponseAction
NwAppQuitFunction::Run() {
  ExtensionService* service =
    ExtensionSystem::Get(browser_context())->extension_service();
  base::MessageLoopCurrent::Get()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&NwAppQuitFunction::DoJob,
                   service,
                   extension_id()));
  return RespondNow(NoArguments());
}
    
    bool NwObjCallObjectMethodFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    #include 'extensions/browser/extension_function.h'
    
    int hdf5_load_int(hid_t loc_id, const string& dataset_name);
void hdf5_save_int(hid_t loc_id, const string& dataset_name, int i);
string hdf5_load_string(hid_t loc_id, const string& dataset_name);
void hdf5_save_string(hid_t loc_id, const string& dataset_name,
                      const string& s);
    
    #include 'hdf5.h'
#include 'hdf5_hl.h'
    
      /**
   * @brief Run Forward and return the result.
   *
   */
  const vector<Blob<Dtype>*>& Forward(Dtype* loss = NULL);
  /// @brief DEPRECATED; use Forward() instead.
  const vector<Blob<Dtype>*>& ForwardPrefilled(Dtype* loss = NULL) {
    LOG_EVERY_N(WARNING, 1000) << 'DEPRECATED: ForwardPrefilled() '
        << 'will be removed in a future version. Use Forward().';
    return Forward(loss);
  }
    
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
    
    void InitLog() {
  ::google::InitGoogleLogging('');
  ::google::InstallFailureSignalHandler();
}
void InitLogLevel(int level) {
  FLAGS_minloglevel = level;
  InitLog();
}
void InitLogLevelPipe(int level, bool stderr) {
  FLAGS_minloglevel = level;
  FLAGS_logtostderr = stderr;
  InitLog();
}
void Log(const string& s) {
  LOG(INFO) << s;
}
    
    template <typename Dtype>
void Solver<Dtype>::Step(int iters) {
  const int start_iter = iter_;
  const int stop_iter = iter_ + iters;
  int average_loss = this->param_.average_loss();
  losses_.clear();
  smoothed_loss_ = 0;
  iteration_timer_.Start();
    }
    
      std::vector<Prediction> Classify(const cv::Mat& img, int N = 5);
    
    /**
 * @brief Pools the input image by taking the max, average, etc. within regions.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class PoolingLayer : public Layer<Dtype> {
 public:
  explicit PoolingLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      /// @brief Compute the sum of absolute values (L1 norm) of the data.
  Dtype asum_data() const;
  /// @brief Compute the sum of absolute values (L1 norm) of the diff.
  Dtype asum_diff() const;
  /// @brief Compute the sum of squares (L2 norm squared) of the data.
  Dtype sumsq_data() const;
  /// @brief Compute the sum of squares (L2 norm squared) of the diff.
  Dtype sumsq_diff() const;
    
      // This random number generator facade hides boost and CUDA rng
  // implementation from one another (for cross-platform compatibility).
  class RNG {
   public:
    RNG();
    explicit RNG(unsigned int seed);
    explicit RNG(const RNG&);
    RNG& operator=(const RNG&);
    void* generator();
   private:
    class Generator;
    shared_ptr<Generator> generator_;
  };
    
    SEXP XGDMatrixNumCol_R(SEXP handle) {
  bst_ulong ncol;
  R_API_BEGIN();
  CHECK_CALL(XGDMatrixNumCol(R_ExternalPtrAddr(handle), &ncol));
  R_API_END();
  return ScalarInteger(static_cast<int>(ncol));
}
    
    /*!
 * \brief dump model, return array of strings representing model dump
 * \param handle handle
 * \param fnum number of features
 * \param fname names of features
 * \param ftype types of features
 * \param with_stats whether to dump with statistics
 * \param format the format to dump the model in
 * \param out_len length of output array
 * \param out_models pointer to hold representing dump of each model
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGBoosterDumpModelExWithFeatures(BoosterHandle handle,
                                             int fnum,
                                             const char **fname,
                                             const char **ftype,
                                             int with_stats,
                                             const char *format,
                                             bst_ulong *out_len,
                                             const char ***out_models);
    
    #if defined(XGBOOST_USE_NCCL) && defined(__CUDACC__)
TEST(Metric, MGPU_RMSE) {
  {
    auto lparam = xgboost::CreateEmptyGenericParam(0, -1);
    xgboost::Metric * metric = xgboost::Metric::Create('rmse', &lparam);
    metric->Configure({});
    ASSERT_STREQ(metric->Name(), 'rmse');
    EXPECT_NEAR(GetMetricEval(metric, {0}, {0}), 0, 1e-10);
    EXPECT_NEAR(GetMetricEval(metric,
                              {0.1f, 0.9f, 0.1f, 0.9f},
                              {  0,   0,   1,   1}),
                0.6403f, 0.001f);
    delete metric;
  }
    }
    
      GpuIdType const n_devices_visible = AllVisible().Size();
  CHECK_LE(n_gpus, n_devices_visible);
  if (n_devices_visible == 0 || n_gpus == 0 || n_rows == 0) {
    LOG(DEBUG) << 'Runing on CPU.';
    return Empty();
  }
    
    // linear
#include '../src/linear/linear_updater.cc'
#include '../src/linear/updater_coordinate.cc'
#include '../src/linear/updater_shotgun.cc'
    
      EXPECT_FALSE(devices.Contains(1));
    
    // Get an example generate config with one static source name to JSON content.
std::map<std::string, std::string> getTestConfigMap(const std::string& file);
    
    
    {} // namespace osquery

    
    
    {  for (auto& action : temp_doc.doc().GetObject()) {
    for (auto& row : action.value.GetArray()) {
      auto obj = doc.getObject();
      serializeEvent(item, row, doc, obj);
      doc.addCopy('action', action.name.GetString(), obj);
      doc.push(obj);
    }
  }
  return Status::success();
}
    
    bool VelodyneParser::is_scan_valid(int rotation, float range) {
  // check range first
  if (range < config_.min_range() || range > config_.max_range()) {
    return false;
  }
  // condition added to avoid calculating points which are not
  // in the interesting defined area (min_angle < area < max_angle)
  // not used now
  // if ((config_.min_angle > config_.max_angle && (rotation <=
  // config_.max_angle || rotation >= config_.min_angle))
  //     || (config_.min_angle < config_.max_angle && rotation >=
  //     config_.min_angle
  //         && rotation <= config_.max_angle)) {
  //     return true;
  // }
  return true;
}
    
      double LongitudinalAccelerationCost(const double acceleration);
    
        apollo::drivers::gnss::GnssType gnss_type;
    
      graph.UpdateObstacleConstraints(10.0, get_safe_distance(5.0), 0.5, 5.0, 10.0);
    
    
    {
    {    if (emergency_mode && mode != Chassis::EMERGENCY_MODE) {
      set_driving_mode(Chassis::EMERGENCY_MODE);
      message_manager_->ResetSendMessages();
    }
    end = ::apollo::common::time::AsInt64<::apollo::common::time::micros>(
        ::apollo::common::time::Clock::Now());
    std::chrono::duration<double, std::micro> elapsed{end - start};
    if (elapsed < default_period) {
      std::this_thread::sleep_for(default_period - elapsed);
    } else {
      AERROR << 'Too much time consumption in GemController looping process:'
             << elapsed.count();
    }
  }
}
    
    DEFINE_bool(only_one_send, false, 'only send test.');
DEFINE_string(can_client_conf_file_a,
              'modules/canbus/conf/can_client_conf_a.pb.txt',
              'can client conf for client a');
DEFINE_string(can_client_conf_file_b,
              'modules/canbus/conf/can_client_conf_b.pb.txt',
              'can client conf for client b');
DEFINE_int64(agent_mutual_send_frames, 1000, 'Every agent send frame num');
    
      AINFO << 'Init Transformer ...';
  ObstacleTransformerInitOptions transformer_init_options;
  transformer_init_options.root_dir = FLAGS_transformer_root;
  transformer_init_options.conf_file = FLAGS_transformer_conf;
    
    
    {  bool IsSidePassableObstacle(const ReferenceLineInfo& reference_line_info);
};
    
    /*
 * read scenario specific configs and set in context_ for stages to read
 */
bool StopSignUnprotectedScenario::GetScenarioConfig() {
  if (!config_.has_stop_sign_unprotected_config()) {
    AERROR << 'miss scenario specific config';
    return false;
  }
  context_.scenario_config.CopyFrom(config_.stop_sign_unprotected_config());
  return true;
}
    
    
    {  init_ = true;
}
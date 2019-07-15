
        
        int hdf5_load_int(hid_t loc_id, const string& dataset_name);
void hdf5_save_int(hid_t loc_id, const string& dataset_name, int i);
string hdf5_load_string(hid_t loc_id, const string& dataset_name);
void hdf5_save_string(hid_t loc_id, const string& dataset_name,
                      const string& s);
    
        // Every two iterations we are reading the second file,
    // which has the same labels, but data is offset by total data size,
    // which is 2400 (see generate_sample_data).
    int file_offset = (iter % 4 < 2) ? 0 : 2400;
    
    
    {  // Since boost 1.53 boost.python will convert str and bytes
  // to std::string but will convert std::string to str. Here we
  // force a bytes object to be returned. When this object
  // is passed back to the NCCL constructor boost.python will
  // correctly convert the bytes to std::string automatically
  PyObject* py_uid = PyBytes_FromString(uid.c_str());
  return bp::object(bp::handle<>(py_uid));
#else
  // automatic conversion is correct for python 2.
  return bp::object(uid);
#endif
}
#endif
    
    SolverAction::Enum SignalHandler::CheckForSignals() const {
  if (GotSIGHUP()) {
    return SIGHUP_action_;
  }
  if (GotSIGINT()) {
    return SIGINT_action_;
  }
  return SolverAction::NONE;
}
    
      N = std::min<int>(labels_.size(), N);
  std::vector<int> maxN = Argmax(output, N);
  std::vector<Prediction> predictions;
  for (int i = 0; i < N; ++i) {
    int idx = maxN[i];
    predictions.push_back(std::make_pair(labels_[idx], output[idx]));
  }
    
      Datum datum;
  datum.set_channels(1);
  datum.set_height(rows);
  datum.set_width(cols);
  LOG(INFO) << 'A total of ' << num_items << ' items.';
  LOG(INFO) << 'Rows: ' << rows << ' Cols: ' << cols;
  for (int item_id = 0; item_id < num_items; ++item_id) {
    image_file.read(pixels, rows * cols);
    label_file.read(&label, 1);
    datum.set_data(pixels, rows*cols);
    datum.set_label(label);
    string key_str = caffe::format_int(item_id, 8);
    datum.SerializeToString(&value);
    }
    
    /**
 * @brief A wrapper around SyncedMemory holders serving as the basic
 *        computational unit through which Layer%s, Net%s, and Solver%s
 *        interact.
 *
 * TODO(dox): more thorough description.
 */
template <typename Dtype>
class Blob {
 public:
  Blob()
       : data_(), diff_(), count_(0), capacity_(0) {}
    }
    
    
    {  inline bst_int GetConstraint(bst_uint featureid) const {
    if (featureid < params_.monotone_constraints.size()) {
      return params_.monotone_constraints[featureid];
    } else {
      return 0;
    }
  }
};
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    TEST(SparsePageDMatrix, ColAccess) {
  dmlc::TemporaryDirectory tempdir;
  const std::string tmp_file = tempdir.path + '/simple.libsvm';
  CreateSimpleTestData(tmp_file);
  xgboost::DMatrix * dmat = xgboost::DMatrix::Load(
    tmp_file + '#' + tmp_file + '.cache', true, false);
    }
    
    
    {
    {
    {
    {    LOG(CONSOLE) << '======== Monitor: ' << label << ' ========';
    for (auto &kv : statistics_map) {
      if (kv.second.count == 0) {
        LOG(WARNING) <<
            'Timer for ' << kv.first << ' did not get stopped properly.';
        continue;
      }
      LOG(CONSOLE) << kv.first << ': ' << kv.second.timer.ElapsedSeconds()
                   << 's, ' << kv.second.count << ' calls @ '
                   << std::chrono::duration_cast<std::chrono::microseconds>(
                          kv.second.timer.elapsed / kv.second.count)
                          .count()
                   << 'us';
    }
    self_timer.Stop();
  }
  void Init(std::string label) { this->label = label; }
  void Start(const std::string &name) {
    if (ConsoleLogger::ShouldLog(ConsoleLogger::LV::kDebug)) {
      statistics_map[name].timer.Start();
    }
  }
  void Stop(const std::string &name) {
    if (ConsoleLogger::ShouldLog(ConsoleLogger::LV::kDebug)) {
      auto &stats = statistics_map[name];
      stats.timer.Stop();
      stats.count++;
    }
  }
  void StartCuda(const std::string &name) {
    if (ConsoleLogger::ShouldLog(ConsoleLogger::LV::kDebug)) {
      auto &stats = statistics_map[name];
      stats.timer.Start();
#if defined(XGBOOST_USE_NVTX) && defined(__CUDACC__)
      stats.nvtx_id = nvtxRangeStartA(name.c_str());
#endif  // defined(XGBOOST_USE_NVTX) && defined(__CUDACC__)
    }
  }
  void StopCuda(const std::string &name) {
    if (ConsoleLogger::ShouldLog(ConsoleLogger::LV::kDebug)) {
      auto &stats = statistics_map[name];
      stats.timer.Stop();
      stats.count++;
#if defined(XGBOOST_USE_NVTX) && defined(__CUDACC__)
      nvtxRangeEnd(stats.nvtx_id);
#endif  // defined(XGBOOST_USE_NVTX) && defined(__CUDACC__)
    }
  }
};
}  // namespace common
}  // namespace xgboost

    
    /*! \brief training parameter for regression */
struct LearnerModelParam : public dmlc::Parameter<LearnerModelParam> {
  /* \brief global bias */
  bst_float base_score;
  /* \brief number of features  */
  unsigned num_feature;
  /* \brief number of classes, if it is multi-class classification  */
  int num_class;
  /*! \brief Model contain additional properties */
  int contain_extra_attrs;
  /*! \brief Model contain eval metrics */
  int contain_eval_metrics;
  /*! \brief reserved field */
  int reserved[29];
  /*! \brief constructor */
  LearnerModelParam() {
    std::memset(this, 0, sizeof(LearnerModelParam));
    base_score = 0.5f;
  }
  // declare parameters
  DMLC_DECLARE_PARAMETER(LearnerModelParam) {
    DMLC_DECLARE_FIELD(base_score)
        .set_default(0.5f)
        .describe('Global bias of the model.');
    DMLC_DECLARE_FIELD(num_feature)
        .set_default(0)
        .describe(
            'Number of features in training data,'
            ' this parameter will be automatically detected by learner.');
    DMLC_DECLARE_FIELD(num_class).set_default(0).set_lower_bound(0).describe(
        'Number of class option for multi-class classifier. '
        ' By default equals 0 and corresponds to binary classifier.');
  }
};
    
    class CallbackManager
{
public:
    inline void append(swCallback cb, void *private_data)
    {
        list_.push_back(new Callback(cb, private_data));
    }
    inline void prepend(swCallback cb, void *private_data)
    {
        list_.push_front(new Callback(cb, private_data));
    }
    inline void execute()
    {
        while (!list_.empty())
        {
            Callback *task = list_.front();
            list_.pop_front();
            task->callback(task->private_data);
            delete task;
        }
    }
protected:
    std::list<Callback *> list_;
};
    
    static inline void coro_test(std::initializer_list<std::pair<coroutine_func_t, void*>> args)
{
    int complete_num = 0;
    }
    
            for (int i = 0; i < 5; ++i)
        {
            std::string addr2 = System::gethostbyname('www.baidu.com', AF_INET);
            ASSERT_NE(addr2, '');
        }
    
        //udp ipv4
    if (req->info.type == SW_EVENT_UDP)
    {
        inet_ntop(AF_INET6, &packet->info.addr.inet_v4.sin_addr, address, sizeof(address));
        data = packet->data;
        length = packet->length;
        port = ntohs(packet->info.addr.inet_v4.sin_port);
    }
    //udp ipv6
    else if (req->info.type == SW_EVENT_UDP6)
    {
        inet_ntop(AF_INET6, &packet->info.addr.inet_v6.sin6_addr, address, sizeof(address));
        data = packet->data;
        length = packet->length;
        port = ntohs(packet->info.addr.inet_v6.sin6_port);
    }
    //unix dgram
    else if (req->info.type == SW_EVENT_UNIX_DGRAM)
    {
        strcpy(address, packet->info.addr.un.sun_path);
        data = packet->data;
        length = packet->length;
    }

        
        	if (hFile != INVALID_HANDLE_VALUE)
	{
		CloseHandle(hFile);
		return true;
	}
    
    #include 'leveldb/status.h'
    
    
    {    // Compare against model iterator
    std::set<Key>::iterator model_iter = keys.lower_bound(i);
    for (int j = 0; j < 3; j++) {
      if (model_iter == keys.end()) {
        ASSERT_TRUE(!iter.Valid());
        break;
      } else {
        ASSERT_TRUE(iter.Valid());
        ASSERT_EQ(*model_iter, iter.key());
        ++model_iter;
        iter.Next();
      }
    }
  }
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    static std::string PrintContents(WriteBatch* b) {
  InternalKeyComparator cmp(BytewiseComparator());
  MemTable* mem = new MemTable(cmp);
  mem->Ref();
  std::string state;
  Status s = WriteBatchInternal::InsertInto(b, mem);
  int count = 0;
  Iterator* iter = mem->NewIterator();
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey ikey;
    ASSERT_TRUE(ParseInternalKey(iter->key(), &ikey));
    switch (ikey.type) {
      case kTypeValue:
        state.append('Put(');
        state.append(ikey.user_key.ToString());
        state.append(', ');
        state.append(iter->value().ToString());
        state.append(')');
        count++;
        break;
      case kTypeDeletion:
        state.append('Delete(');
        state.append(ikey.user_key.ToString());
        state.append(')');
        count++;
        break;
    }
    state.append('@');
    state.append(NumberToString(ikey.sequence));
  }
  delete iter;
  if (!s.ok()) {
    state.append('ParseError()');
  } else if (count != WriteBatchInternal::Count(b)) {
    state.append('CountMismatch()');
  }
  mem->Unref();
  return state;
}
    
    #endif  // STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_

    
    const int kNumKeys = 1100000;
    
    namespace leveldb {
    }
    
    /* TessError */
#define GLU_TESS_ERROR1                    100151
#define GLU_TESS_ERROR2                    100152
#define GLU_TESS_ERROR3                    100153
#define GLU_TESS_ERROR4                    100154
#define GLU_TESS_ERROR5                    100155
#define GLU_TESS_ERROR6                    100156
#define GLU_TESS_ERROR7                    100157
#define GLU_TESS_ERROR8                    100158
#define GLU_TESS_MISSING_BEGIN_POLYGON     100151
#define GLU_TESS_MISSING_BEGIN_CONTOUR     100152
#define GLU_TESS_MISSING_END_POLYGON       100153
#define GLU_TESS_MISSING_END_CONTOUR       100154
#define GLU_TESS_COORD_TOO_LARGE           100155
#define GLU_TESS_NEED_COMBINE_CALLBACK     100156
    
    GBool PSTokenizer::getToken(char *buf, int size, int *length) {
  GBool comment, backslash;
  int c;
  int i;
    }
    
      // Is rectangular?
  GBool isRectangular() { return rectangular; }
    
      // in badly damaged PDF files, we can run off the end of the input
  // stream immediately after the 'stream' token
  if (!lexer->getStream()) {
    return NULL;
  }
  baseStr = lexer->getStream()->getBaseStream();
    
    
    {
    {
    {      for (int j = i; j > 0; j--) {
        keys[j] = keys[j - 1];
        items[j] = items[j - 1];
      }
      
      keys[0] = keyHit;
      items[0] = itemHit;
      return itemHit;
    }
  }
  return 0;
}
    
    #endif

    
    void
ProfileData::addElement (double elapsed) {
	if (count == 0) {
		min = elapsed;
		max = elapsed;
	} else {
		if (elapsed < min)
			min = elapsed;
		if (elapsed > max)
			max = elapsed;
	}
	total += elapsed;
	count ++;
}
    
    class MediaRendition {
 public:
  MediaRendition(Object *obj);
  ~MediaRendition();
    }
    
      Object *getObject() { return streamObj; }
  Stream *getStream();
    
    
    {      // Need to copy from GPU -> CPU, becuase cuDNN API requires this array on CPU memory.
      // TODO(stephenrawls): In future, allow users to pass this array on the CPU so we don't have
      //   to do this copy For now however it is required as several places in backend assume that
      //   all data arrays share the same context.
      CUDA_CALL(cudaMemcpy(sequence_length_cpu_itype,  sequence_length_ptr_gpu,
                           sizeof(IType) * param_.batch_size_, cudaMemcpyDeviceToHost));
#else
      LOG(FATAL) << 'RNN use_sequence_length option is only available for cuDNN version >= 7.2';
#endif
    }
    DType* cx_ptr = NULL;
    DType* cy_ptr = NULL;
    if (param_.mode == rnn_enum::kLstm) {
      cx_ptr = (in_data[rnn_enum::kStateCell].get<xpu, 3, DType>(s)).dptr_;
    }
    if (param_.mode == rnn_enum::kLstm && param_.state_outputs) {
      cy_ptr = (out_data[rnn_enum::kStateCellOut].get<xpu, 3, DType>(s)).dptr_;
    }
    CHECK_EQ(x.CheckContiguous(), true);
    CHECK_EQ(w.CheckContiguous(), true);
    CHECK_EQ(hx.CheckContiguous(), true);
    CHECK_EQ(y.CheckContiguous(), true);
    
    template<typename xpu, typename DType>
void FCBackward(const OpContext &ctx, const FullyConnectedParam &param,
                const std::vector<TBlob> &out_grad, const std::vector<TBlob> &in_data,
                const std::vector<OpReqType> &req, const std::vector<TBlob> &in_grad) {
  using namespace mshadow;
  using namespace mshadow::expr;
  // TODO(bing): check the BLAS Handle, be careful
  //  maybe need blas handle from context
  Stream<xpu> *s = ctx.get_stream<xpu>();
  const mxnet::TShape& ishape = in_data[fullc::kData].shape_;
  const mxnet::TShape& oshape = out_grad[fullc::kOut].shape_;
    }
    
    int MXProfileSetMarker(ProfileHandle domain,
                       const char *instant_marker_name,
                       const char *scope) {
  mxnet::IgnoreProfileCallScope ignore;
  API_BEGIN();
    ProfileMarkerScopeParam param;
    std::vector<std::pair<std::string, std::string>> kwargs = {{ 'scope', scope }};
    param.Init(kwargs);
    profiler::ProfileMarker marker(instant_marker_name,
                                         static_cast<profiler::ProfileDomain *>(domain),
                                         static_cast<profiler::ProfileMarker::MarkerScope>(
                                           param.scope));
    marker.mark();
  API_END();
}

    
    std::shared_ptr<Storage> Storage::_GetSharedRef() {
#ifdef __MXNET_JS__
  // dummy code needed for emscripten code to pass
  // do not know why, the new will be NULLPTR
  static int *q = new int();
#endif
  static std::shared_ptr<Storage> inst(new StorageImpl());
  return inst;
}
    
    #ifndef MXNET_STORAGE_STORAGE_MANAGER_H_
#define MXNET_STORAGE_STORAGE_MANAGER_H_
    
          if (top_count[index] <= 0) {
        continue;
      }
      DType diff_val = top_diff[index] / top_count[index];
      const DType* offset_bottom_data = bottom_data + roi_batch_ind * channels * height * width;
      DType* offset_bottom_data_diff = bottom_data_diff + roi_batch_ind * channels * height * width;
      index_t gw = floor(static_cast<DType>(pw)* group_size / pooled_width);
      index_t gh = floor(static_cast<DType>(ph)* group_size / pooled_height);
      gw = min(max(gw, static_cast<index_t>(0)), group_size - 1);
      gh = min(max(gh, static_cast<index_t>(0)), group_size - 1);
    
    inline void IndexArrayBuildSelectedAxesWorkspace(const mxnet::Tuple<int> &axes,
                                                 const std::vector<int64_t> &index_products,
                                                 int64_t* workspace,
                                                 const int ndim) {
  for (int i = 0; i < axes.ndim(); i++) {
    // Make sure that the axis is between 0 and ndim.
    const int axis = ((axes[i] % ndim) + ndim) % ndim;
    }
    }
    
        x = mx.nd.ones((3, 2, 2))
    
    
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
    
    TEST(Tree, AllocateNode) {
  RegTree tree;
  tree.ExpandNode(
      0, 0, 0.0f, false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  tree.CollapseToLeaf(0, 0);
  ASSERT_EQ(tree.NumExtraNodes(), 0);
    }
    
      devices = GPUSet::Range(2, -1);
  EXPECT_EQ(devices, GPUSet::Empty());
  EXPECT_EQ(devices.Size(), 0);
  EXPECT_TRUE(devices.IsEmpty());
    
    TEST(Metric, DeclareUnifiedTest(MAE)) {
  auto lparam = xgboost::CreateEmptyGenericParam(0, NGPUS);
  xgboost::Metric * metric = xgboost::Metric::Create('mae', &lparam);
  metric->Configure({});
  ASSERT_STREQ(metric->Name(), 'mae');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
  delete metric;
}
    
    DMLC_REGISTRY_FILE_TAG(sparse_page_raw_format);
    
        for (size_t i = 0; i < symbol_bits_; i++) {
      size_t byte_idx = ((offset + 1) * symbol_bits_ - (i + 1)) / bits_per_byte;
      byte_idx += detail::kPadding;
      size_t bit_idx =
          ((bits_per_byte + i) - ((offset + 1) * symbol_bits_)) % bits_per_byte;
    }
    
    template <typename T>
void HostDeviceVector<T>::Fill(T v) {
  std::fill(HostVector().begin(), HostVector().end(), v);
}
    
    namespace rabit {
namespace utils {
extern 'C' {
  void (*Printf)(const char *fmt, ...) = Rprintf;
  void (*Assert)(int exp, const char *fmt, ...) = XGBoostAssert_R;
  void (*Check)(int exp, const char *fmt, ...) = XGBoostCheck_R;
  void (*Error)(const char *fmt, ...) = error;
}
}
}
    
    public:
  static void Record(const std::string &verb, int xactionCount = 0,
                     const std::string &table = '');
  static std::string ReportStats();
    
      const Mutex& getMutex() const { return m_mutex; }
  Mutex& getMutex() { return m_mutex; }
    
      /* Pre-compute the slot */
  auto const slot = func->cls()->lsbMemoSlot(func, forValue);
    
    
    {  // the API contract is that you can call getPostData repeatedly until
  // you call getMorePostData
  if (m_firstBody) {
    CHECK(m_currentBodyBuf);
    size = m_currentBodyBuf->length();
    return m_currentBodyBuf->data();
  }
  return getMorePostData(size);
}
    
    Opcode toIntCmpOpcode(Op op) {
  switch (op) {
    case Op::Gt:    return GtInt;
    case Op::Gte:   return GteInt;
    case Op::Lt:    return LtInt;
    case Op::Lte:   return LteInt;
    case Op::Eq:
    case Op::Same:  return EqInt;
    case Op::Neq:
    case Op::NSame: return NeqInt;
    case Op::Cmp:   return CmpInt;
    default: always_assert(false);
  }
}
    
    void cgMod(IRLS& env, const IRInstruction* inst) {
  auto const d = dstLoc(env, inst, 0).reg();
  auto const dividend = srcLoc(env, inst, 0).reg();
  auto const divisor  = srcLoc(env, inst, 1).reg();
  auto& v = vmain(env);
    }
    
    
    {}

    
      VSRES('<?hh header(\'Test-Header: x\ry\'); echo 'done';',
        'done');
    
    
    {}
    
      void GetTwoEllipsePoints(const double position_x, const double position_y,
                           const double direction_x, const double direction_y,
                           const double ellipse_len_x,
                           const double ellipse_len_y,
                           apollo::common::TrajectoryPoint* ellipse_point_1,
                           apollo::common::TrajectoryPoint* ellipse_point_2);
    
    // convert gps time (base on Jan 6 1980) to system time (base on Jan 1 1970)
// notice: Jan 6 1980
//
// linux shell:
// time1 = date +%s -d'Jan 6, 1980 00:00:01'
// time2 = date +%s -d'Jan 1, 1970 00:00:01'
// dif_tick = time1-time2
// 315964800 = 315993601 - 28801
    
    void DstManager::ComputeCardinalities(DstCommonData *dst_data) {
  auto count_set_bits = [](uint64_t fod_subset) {
    size_t count = 0;
    while (fod_subset) {
      fod_subset &= (fod_subset - 1);
      ++count;
    }
    return count;
  };
  dst_data->fod_subset_cardinalities_.reserve(dst_data->fod_subsets_.size());
  for (auto fod_subset : dst_data->fod_subsets_) {
    dst_data->fod_subset_cardinalities_.push_back(count_set_bits(fod_subset));
  }
}
    
    void DstExistanceFusion::UpdateToicWithoutCameraMeasurement(
    const std::string &sensor_id, double measurement_timestamp,
    double min_match_dist) {
  double dist_score = min_match_dist;
  double in_view_ratio = 0.0;
  // 1.get camera intrinsic and pose
  SensorDataManager *sensor_manager = SensorDataManager::Instance();
  CHECK(sensor_manager != nullptr) << 'Failed to get sensor manager';
    }
    
    Status MockEnv::GetFileModificationTime(const std::string& fname,
                                        uint64_t* time) {
  auto fn = NormalizePath(fname);
  MutexLock lock(&mutex_);
  auto iter = file_map_.find(fn);
  if (iter == file_map_.end()) {
    return Status::IOError(fn, 'File not found');
  }
  *time = iter->second->ModifiedTime();
  return Status::OK();
}
    
    /*
 * Class:     org_rocksdb_CompactionJobStats
 * Method:    numOutputFiles
 * Signature: (J)J
 */
jlong Java_org_rocksdb_CompactionJobStats_numOutputFiles(
    JNIEnv*, jclass, jlong jhandle) {
  auto* compact_job_stats =
      reinterpret_cast<rocksdb::CompactionJobStats*>(jhandle);
  return static_cast<jlong>(
      compact_job_stats->num_output_files);
}
    
    #include <jni.h>
    
    void Config::scheduledQueries(
    std::function<void(std::string name, const ScheduledQuery& query)>
        predicate,
    bool blacklisted) const {
  RecursiveLock lock(config_schedule_mutex_);
  for (PackRef& pack : *schedule_) {
    for (auto& it : pack->getSchedule()) {
      std::string name = it.first;
      // The query name may be synthetic.
      if (pack->getName() != 'main') {
        name = 'pack' + FLAGS_pack_delimiter + pack->getName() +
               FLAGS_pack_delimiter + it.first;
      }
    }
    }
    }
    
      /**
   * @brief Record a query 'initialization', meaning the query will run.
   *
   * Recording initializations if queries helps to identify when queries do not
   * complete. The Config::recordQueryPerformance method will clear a dirty
   * status set by this method. This status is saved in the backing database
   * store. On process start, or worker state, if any dirty bit is set then
   * it is assumed that the current start is a result of a previous abort.
   *
   * @param name THe unique name of the scheduled item
   */
  void recordQueryStart(const std::string& name);
    
    enum class DatabaseError {
  // Unknown error, currently unused
  Unknown = 1,
  DbIsNotOpen = 2,
  InvalidPath = 3,
  FailToDestroyDB = 4,
  FailToOpenDatabase = 5,
  FailToReadData = 6,
  FailToWriteData = 7,
  KeyNotFound = 8,
  DomainNotFound = 9,
  // Corruption or other unrecoverable error after DB can't be longer used
  // Database should be closed, destroyed and opened again
  // If this error was received during data access, then application
  // is likely to die soon
  // See message and/or underlying error for details
  Panic = 10,
};
    
      rj::Document doc;
  if (doc.Parse(request.at('log').c_str()).HasParseError()) {
    return;
  }
    
    /**
 * @brief Logger plugin feature bits for complicated loggers.
 *
 * Logger plugins may opt-in to additional features like explicitly handling
 * Glog status events or requesting event subscribers to forward each event
 * directly to the logger. This enumeration tracks, and corresponds to, each
 * of the feature methods defined in a logger plugin.
 *
 * A specific registry call action can be used to retrieve an overloaded Status
 * object containing all of the opt-in features.
 */
enum LoggerFeatures {
  LOGGER_FEATURE_BLANK = 0,
  LOGGER_FEATURE_LOGSTATUS = 1,
  LOGGER_FEATURE_LOGEVENT = 2,
};
    
    
    { public:
  Status call(const PluginRequest& request, PluginResponse& response) override;
};
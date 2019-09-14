
        
        template <typename Dtype>
void HDF5OutputLayer<Dtype>::SaveBlobs() {
  // TODO: no limit on the number of blobs
  LOG(INFO) << 'Saving HDF5 file ' << file_name_;
  CHECK_EQ(data_blob_.num(), label_blob_.num()) <<
      'data blob and label blob must have the same batch size';
  hdf5_save_nd_dataset(file_id_, HDF5_DATA_DATASET_NAME, data_blob_);
  hdf5_save_nd_dataset(file_id_, HDF5_DATA_LABEL_NAME, label_blob_);
  LOG(INFO) << 'Successfully saved ' << data_blob_.num() << ' rows';
}
    
      /// @brief returns the network name.
  inline const string& name() const { return name_; }
  /// @brief returns the layer names
  inline const vector<string>& layer_names() const { return layer_names_; }
  /// @brief returns the blob names
  inline const vector<string>& blob_names() const { return blob_names_; }
  /// @brief returns the blobs
  inline const vector<shared_ptr<Blob<Dtype> > >& blobs() const {
    return blobs_;
  }
  /// @brief returns the layers
  inline const vector<shared_ptr<Layer<Dtype> > >& layers() const {
    return layers_;
  }
  /// @brief returns the phase: TRAIN or TEST
  inline Phase phase() const { return phase_; }
  /**
   * @brief returns the bottom vecs for each layer -- usually you won't
   *        need this unless you do per-layer checks such as gradients.
   */
  inline const vector<vector<Blob<Dtype>*> >& bottom_vecs() const {
    return bottom_vecs_;
  }
  /**
   * @brief returns the top vecs for each layer -- usually you won't
   *        need this unless you do per-layer checks such as gradients.
   */
  inline const vector<vector<Blob<Dtype>*> >& top_vecs() const {
    return top_vecs_;
  }
  /// @brief returns the ids of the top blobs of layer i
  inline const vector<int> & top_ids(int i) const {
    CHECK_GE(i, 0) << 'Invalid layer id';
    CHECK_LT(i, top_id_vecs_.size()) << 'Invalid layer id';
    return top_id_vecs_[i];
  }
  /// @brief returns the ids of the bottom blobs of layer i
  inline const vector<int> & bottom_ids(int i) const {
    CHECK_GE(i, 0) << 'Invalid layer id';
    CHECK_LT(i, bottom_id_vecs_.size()) << 'Invalid layer id';
    return bottom_id_vecs_[i];
  }
  inline const vector<vector<bool> >& bottom_need_backward() const {
    return bottom_need_backward_;
  }
  inline const vector<Dtype>& blob_loss_weights() const {
    return blob_loss_weights_;
  }
  inline const vector<bool>& layer_need_backward() const {
    return layer_need_backward_;
  }
  /// @brief returns the parameters
  inline const vector<shared_ptr<Blob<Dtype> > >& params() const {
    return params_;
  }
  inline const vector<Blob<Dtype>*>& learnable_params() const {
    return learnable_params_;
  }
  /// @brief returns the learnable parameter learning rate multipliers
  inline const vector<float>& params_lr() const { return params_lr_; }
  inline const vector<bool>& has_params_lr() const { return has_params_lr_; }
  /// @brief returns the learnable parameter decay multipliers
  inline const vector<float>& params_weight_decay() const {
    return params_weight_decay_;
  }
  inline const vector<bool>& has_params_decay() const {
    return has_params_decay_;
  }
  const map<string, int>& param_names_index() const {
    return param_names_index_;
  }
  inline const vector<int>& param_owners() const { return param_owners_; }
  inline const vector<string>& param_display_names() const {
    return param_display_names_;
  }
  /// @brief Input and output blob numbers
  inline int num_inputs() const { return net_input_blobs_.size(); }
  inline int num_outputs() const { return net_output_blobs_.size(); }
  inline const vector<Blob<Dtype>*>& input_blobs() const {
    return net_input_blobs_;
  }
  inline const vector<Blob<Dtype>*>& output_blobs() const {
    return net_output_blobs_;
  }
  inline const vector<int>& input_blob_indices() const {
    return net_input_blob_indices_;
  }
  inline const vector<int>& output_blob_indices() const {
    return net_output_blob_indices_;
  }
  bool has_blob(const string& blob_name) const;
  const shared_ptr<Blob<Dtype> > blob_by_name(const string& blob_name) const;
  bool has_layer(const string& layer_name) const;
  const shared_ptr<Layer<Dtype> > layer_by_name(const string& layer_name) const;
    
      void CheckSnapshotWritePermissions();
  /**
   * @brief Returns the solver type.
   */
  virtual inline const char* type() const { return ''; }
    
        SolverAction::Enum request = GetRequestedAction();
    
    // Return the function that the solver can use to find out if a snapshot or
// early exit is being requested.
ActionCallback SignalHandler::GetActionFunction() {
  return boost::bind(&SignalHandler::CheckForSignals, this);
}
    
      dict->lookup('CropRect', &obj1);
  if (obj1.isArray() && obj1.arrayGetLength() == 4) {
    obj1.arrayGet(0, &obj2);
    left = obj2.getInt();
    obj2.free();
    obj1.arrayGet(1, &obj2);
    top = obj2.getInt();
    obj2.free();
    obj1.arrayGet(2, &obj2);
    right = obj2.getInt();
    obj2.free();
    obj1.arrayGet(3, &obj2);
    bottom = obj2.getInt();
    obj2.free();
    writePSFmt('%ALDImageCropRect: {0:d} {1:d} {2:d} {3:d}\n',
	       left, top, right, bottom);
  }
  obj1.free();
    
    
    {
    {    if (i + 1 < intervals.getLength()) {
      next = (Interval *) intervals.get(i + 1);
      interval->length = next->base - interval->base;
    } else {
      interval->length = numPages - interval->base;
    }
    if (interval->length < 0) interval->length = 0;
  }
}
    
    #ifdef USE_GCC_PRAGMAS
#pragma implementation
#endif
    
    #ifdef USE_GCC_PRAGMAS
#pragma interface
#endif
    
    MediaWindowParameters::~MediaWindowParameters() {
}
    
      // Return the various authorization parameters.  These are only
  // valid after authorize has returned true.
  virtual int getPermissionFlags() = 0;
  virtual GBool getOwnerPasswordOk() = 0;
  virtual Guchar *getFileKey() = 0;
  virtual int getFileKeyLength() = 0;
  virtual int getEncVersion() = 0;
  virtual int getEncRevision() = 0;
  virtual CryptAlgorithm getEncAlgorithm() = 0;
    
    #endif

    
      virtual GBool getColor(int x, int y, SplashColorPtr c);
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitTrackerPrint
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitTrackerPrint
  (JNIEnv *jenv, jclass jcls, jstring jmsg) {
  std::string str(jenv->GetStringUTFChars(jmsg, 0),
                  jenv->GetStringLength(jmsg));
  RabitTrackerPrint(str.c_str());
  return 0;
}
    
    namespace xgboost {
// Manually construct tree in binary format
// Do not use structs in case they change
// We want to preserve backwards compatibility
TEST(Tree, Load) {
  dmlc::TemporaryDirectory tempdir;
  const std::string tmp_file = tempdir.path + '/tree.model';
  std::unique_ptr<dmlc::Stream> fo(dmlc::Stream::Create(tmp_file.c_str(), 'w'));
    }
    }
    
    /*!
 * \brief register callback function for LOG(INFO) messages -- helpful messages
 *        that are not errors.
 * Note: this function can be called by multiple threads. The callback function
 *       will run on the thread that registered it
 * \return 0 for success, -1 for failure
 */
XGB_DLL int XGBRegisterLogCallback(void (*callback)(const char*));
    
      xgboost::tree::SplitEntry se3;
  se3.Update(2, 101, 0, false, xgboost::tree::GradStats(),
             xgboost::tree::GradStats());
  xgboost::tree::SplitEntry::Reduce(se2, se3);
  EXPECT_EQ(se2.SplitIndex(), 101);
  EXPECT_FALSE(se2.DefaultLeft());
    
    // redirect the nath functions.
bool CheckNAN(double v) {
  return ISNAN(v);
}
#if !defined(XGBOOST_USE_CUDA)
double LogGamma(double v) {
  return lgammafn(v);
}
#endif  // !defined(XGBOOST_USE_CUDA)
// customize random engine.
void CustomGlobalRandomEngine::seed(CustomGlobalRandomEngine::result_type val) {
  // ignore the seed
}
    
    
    {DMLC_REGISTER_DATA_PARSER(uint32_t, real_t, dense_libsvm,
  data::CreateDenseLibSVMParser<uint32_t __DMLC_COMMA real_t>);
}  // namespace dmlc

    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::Cosh(const ComputationNodePtr a, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<CoshNode<ElemType>>(net.GetDeviceId(), nodeName), { a });
}
    
    #include 'stdafx.h'
#include 'Actions.h'
#include 'SimpleNetworkBuilder.h'
#include 'NDLNetworkBuilder.h'
#include 'ScriptableObjects.h'
#include 'BrainScriptEvaluator.h'
#include 'BrainScriptParser.h'
    
            for (const auto& name : group.first)
        {
            if (m_nameToNodeMap.find(name) == m_nameToNodeMap.end())
            {
                // could be deleted in the previous groups
                continue;
            }
    }
    
    // =======================================================================
// ComputationNodeBase -- abstract base class for all computation nodes
// =======================================================================
    
    
    {            return retval;
        }
        // borrow DownCast function from ComputationNetwork
        ComputationNodePtr DownCast(ComputationNodeBasePtr inode)
        {
            ComputationNodePtr node = dynamic_pointer_cast<ComputationNode<ElemType>>(inode);
            if (!node)
                InvalidArgument('an ComputationNodeBasePtr of mismatching precision was passed');
            return node;
        }
    
    Context::~Context()
{
    if (stack_)
    {
        swTraceLog(SW_TRACE_COROUTINE, 'free stack: ptr=%p', stack_);
#ifdef SW_CONTEXT_PROTECT_STACK_PAGE
        if (protect_page_)
        {
            unprotect_stack(stack_, protect_page_);
        }
#endif
    }
    }
    
        ret = p.write(&p, (void*) SW_STRS('hello world1'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world2'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world3'));
    ASSERT_GT(ret, 0);
    
    #include 'swoole.h'
#include 'coroutine.h'
    
    TEST(os_wait, wait_before_child_exit)
{
    coro_test([](void *arg)
    {
        swoole_coroutine_signal_init();
    }
    }
    
            void cleanup() {
            delRead();
            delWrite();
        }
    
    
    {    ~lru_cache_test_class()
    {
        ++dtor_num;
    }
};
    
    
    {	return res == 0 ? SUCCESS : FAILURE;
}

    
    ZEND_BEGIN_ARG_INFO_EX(arginfo_swoole_atomic_wait, 0, 0, 0)
    ZEND_ARG_INFO(0, timeout)
ZEND_END_ARG_INFO()
    
            /**
         * Add your information about what your class does and their inputs/outputs.
         * @param output is the modified cv::Mat.
         * @param input is the input cv::Mat.
         * @return If it is not void, add returning information here.
         */
        void doSomething(cv::Mat& output, const cv::Mat& input);
    
        /*! \brief Constructor from cl_command_queue - takes ownership.
    *
    * \param retainObject will cause the constructor to retain its cl object.
    *                     Defaults to false to maintain compatibility with
    *                     earlier versions.
    */
    explicit DeviceCommandQueue(const cl_command_queue& commandQueue, bool retainObject = false) :
        detail::Wrapper<cl_type>(commandQueue, retainObject) { }
    
            virtual void initializationOnThread();
    
            void trackLockThread(Array<float>& poseKeypoints, Array<long long>& poseIds, const cv::Mat& cvMatInput,
                             const long long frameId);
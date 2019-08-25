
        
        
    {	delay_compensation = ProjectSettings::get_singleton()->get('audio/video_delay_compensation_ms');
	delay_compensation /= 1000.0;
}
    
    
    {	return enabled;
}
    
    class NavigationMesh : public Resource {
    }
    
    	virtual bool is_open() const;
    
    static int get_message_size(uint8_t message) {
	switch (message & 0xF0) {
		case 0x80: // note off
		case 0x90: // note on
		case 0xA0: // aftertouch
		case 0xB0: // continuous controller
			return 3;
    }
    }
    
    	if (port_in != 0) {
		MIDIPortDispose(port_in);
		port_in = 0;
	}
    
    void register_upnp_types() {
    }
    
    
    {	read(cgsem->pipefd[0], &buf, 1);
}
    
    	if (blob != NULL) {
		CFArrayRef list = IOPSCopyPowerSourcesList(blob);
		if (list != NULL) {
			/* don't CFRelease() the list items, or dictionaries! */
			bool have_ac = false;
			bool have_battery = false;
			bool charging = false;
			const CFIndex total = CFArrayGetCount(list);
			CFIndex i;
			for (i = 0; i < total; i++) {
				CFTypeRef ps = (CFTypeRef)CFArrayGetValueAtIndex(list, i);
				CFDictionaryRef dict = IOPSGetPowerSourceDescription(blob, ps);
				if (dict != NULL) {
					checkps(dict, &have_ac, &have_battery, &charging);
				}
			}
    }
    }
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::NotEqual(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<EqualNode<ElemType>>(net.GetDeviceId(), nodeName), { a, b });
}
    
        static void Register(const wchar_t *typeId, ConfigurableRuntimeType &&rtInfo)
    {
        auto &reg = GetTheRegister();
        auto res = reg.insert(std::make_pair((std::wstring) typeId, std::move(rtInfo)));
        if (!res.second)
            LogicError('RegisterConfigurableRuntimeType: Attempted to register type '%ls' twice.', typeId);
    }
    
                    fstream.GetMarker(FileMarker::fileMarkerBeginSection, L'BMomentumAsTimeConstant');
                fstream >> m_blockMomentumAsTimeConstantPerWorker;
                fstream.GetMarker(FileMarker::fileMarkerEndSection, L'EMomentumAsTimeConstant');
    
                fstream.PutMarker(FileMarker::fileMarkerBeginSection, L'BMomentumAsTimeConstant');
            fstream << m_blockMomentumAsTimeConstantPerWorker;
            fstream.PutMarker(FileMarker::fileMarkerEndSection, L'EMomentumAsTimeConstant');
    
                // for backward compatibility we check 'timeStep' first
            size_t timeStep = node->GetOptionalParameter('timeStep', '1');
            if (timeStep == 1)
                timeStep = node->GetOptionalParameter('delayTime', '1');
    
        NDLBuilderImpl(ComputationNetworkPtr computationNetwork)
    {
        m_computationNetwork = computationNetwork;
        m_nodeEvaluator = new NDLNodeEvaluatorImpl<ElemType>(m_computationNetwork);
    }
    
        // construct NDLScript from a ConfigValue, propogate the config Name
    // configValue - the body of the macro
    // oneLineDefinition - this macro definition is all on one line, names optional
    // macroName - if the macro has a name, the name - this is used to get parameter info
    NDLScript(const ConfigValue& configValue, std::string macroName, bool oneLineDefinition)
        : ConfigParser(';', configValue.Name())
    {
        m_noDefinitions = oneLineDefinition;
        m_definingMacro = true;
        m_macroNode = NULL;
        m_scriptString = configValue;
        NDLNode<ElemType>* ndlNode = s_global.CheckName(macroName, true);
        if (ndlNode == NULL)
            RuntimeError('Invalid macro definition, %s not found', macroName.c_str());
    }
    
    
    {        // determine the node group by its group tag string
        auto& nodeGroup = GetNodeGroup(groupTag);
        // if node is already in the list then we are done
        if (node->HasTag(groupTag))
        {
            for (const auto& groupNode : nodeGroup) // TODO: is there an STL algorithm?
                if (groupNode == node)
                    return;
            // we get here if the node has the tag but is not in the node group yet
        }
        // verify and update the node's tag
        node->SetTag(groupTag);
        // add to the node group
        nodeGroup.push_back(node);
    }
    
        virtual void /*IComputationNode::*/ BeginForwardProp() override // called before first iteration step of ForwardProp()
    {
#ifdef TRACK_GAP_NANS
        fprintf(stderr, 'BeginForwardProp: %ls %ls operation [%s]\n', NodeName().c_str(), OperationName().c_str(), std::string(GetTensorShape(DetermineElementwiseTensorRank())).c_str());
#endif
    }
    virtual void /*IComputationNode::*/ EndForwardProp() override // called after last iteration step of ForwardProp()
    {
#ifdef TRACK_GAP_NANS
        fprintf(stderr, 'EndForwardProp: %ls %ls operation\n', NodeName().c_str(), OperationName().c_str());
#endif
    }
    virtual void /*IComputationNode::*/ BeginBackprop() override // called before first iteration step of ComputeGradient()
    {
#ifdef TRACK_GAP_NANS
        fprintf(stderr, 'BeginBackprop: %ls %ls operation\n', NodeName().c_str(), OperationName().c_str());
#endif
    }
    virtual void /*IComputationNode::*/ EndBackprop() override // called after last iteration step of ComputeGradient()
    {
#ifdef TRACK_GAP_NANS
        fprintf(stderr, 'EndBackprop: %ls %ls operation\n', NodeName().c_str(), OperationName().c_str());
#endif
    }
    
                // second, get data from reader, stored it in cache
            // 1. for each key, allocate the specific matrix on device
            for (auto& pa : inputMatrices)
            {
                const wstring& name = pa.first;
                const auto& input = pa.second;
                auto& M = input.GetMatrix<ElemType>();
                if (m_inputMatricesCache.find(name) == m_inputMatricesCache.end())
                    m_inputMatricesCache.AddInput(name, make_shared<Matrix<ElemType>>(M, M.GetDeviceId()), input.pMBLayout, input.sampleLayout); // deep copy from M
                else
                    m_inputMatricesCache.GetInputMatrix<ElemType>(name).SetValue(M);
            }
            // 2. MBlayout
            m_MBLayoutCache->CopyFrom(net.GetMBLayoutPtrOfNetwork());
            size_t nParallelSequences = m_MBLayoutCache->GetNumParallelSequences();
    
    
    {  virtual int PollStandard(std::shared_ptr<VelodyneScan> scan);
  bool SetBaseTime();
  void SetBaseTimeFromNmeaTime(NMEATimePtr nmea_time, uint64_t *basetime);
  void UpdateGpsTopHour(uint32_t current_time);
};
    
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
    
    ConfigManager::~ConfigManager() {
  for (auto iter = model_config_map_.begin(); iter != model_config_map_.end();
       ++iter) {
    delete iter->second;
  }
}
    
    #include 'cyber/binary.h'
#include 'glog/logging.h'
#include 'glog/raw_logging.h'
    
    /*
 * Class:     org_rocksdb_CompactionJobInfo
 * Method:    inputFiles
 * Signature: (J)[Ljava/lang/String;
 */
jobjectArray Java_org_rocksdb_CompactionJobInfo_inputFiles(
    JNIEnv* env, jclass, jlong jhandle) {
  auto* compact_job_info =
      reinterpret_cast<rocksdb::CompactionJobInfo*>(jhandle);
  return rocksdb::JniUtil::toJavaStrings(
      env, &compact_job_info->input_files);
}
    
    /*
 * Class:     org_rocksdb_SstFileManager
 * Method:    getMaxTrashDBRatio
 * Signature: (J)D
 */
jdouble Java_org_rocksdb_SstFileManager_getMaxTrashDBRatio(JNIEnv* /*env*/,
                                                           jobject /*jobj*/,
                                                           jlong jhandle) {
  auto* sptr_sst_file_manager =
      reinterpret_cast<std::shared_ptr<rocksdb::SstFileManager>*>(jhandle);
  return sptr_sst_file_manager->get()->GetMaxTrashDBRatio();
}
    
      if(env->ExceptionCheck()) {
    // exception thrown from CallShortMethod
    env->ExceptionDescribe();  // print out exception to stderr
    releaseJniEnv(attached_thread);
    return Status::IOError('Unable to call AbstractTraceWriter#writeProxy(long)');
  }
    
      auto* opt = reinterpret_cast<rocksdb::DBOptions*>(jopt_handle);
  std::vector<rocksdb::ColumnFamilyHandle*> handles;
  rocksdb::DBWithTTL* db = nullptr;
  rocksdb::Status s = rocksdb::DBWithTTL::Open(
      *opt, db_path, column_families, &handles, &db, ttl_values, jread_only);
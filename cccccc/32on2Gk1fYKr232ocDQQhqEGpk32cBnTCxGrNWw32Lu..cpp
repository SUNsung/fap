
        
         function: toplevel residue templates 16/22kHz
    
    static INLINE uint16_t highbd_clip_pixel_add(uint16_t dest, tran_high_t trans,
                                             int bd) {
  trans = HIGHBD_WRAPLOW(trans, bd);
  return clip_pixel_highbd(dest + (int)trans, bd);
}
#endif
    
    std::string DHTResponseMessage::toString() const
{
  return fmt('dht response %s TransactionID=%s Remote:%s(%u), id=%s, v=%s, %s',
             getMessageType().c_str(), util::toHex(getTransactionID()).c_str(),
             getRemoteNode()->getIPAddress().c_str(),
             getRemoteNode()->getPort(),
             util::toHex(getRemoteNode()->getID(), DHT_ID_LENGTH).c_str(),
             util::torrentPercentEncode(getVersion()).c_str(),
             toStringOptional().c_str());
}
    
      const std::vector<std::shared_ptr<DHTNode>>& getNodes() const
  {
    return nodes_;
  }
    
    #include 'common.h'
    
    
    {  virtual bool finished() = 0;
};
    
    DHTTaskQueueImpl::DHTTaskQueueImpl()
    : periodicTaskQueue1_(NUM_CONCURRENT_TASK),
      periodicTaskQueue2_(NUM_CONCURRENT_TASK),
      immediateTaskQueue_(NUM_CONCURRENT_TASK)
{
}
    
      DHTTaskExecutor immediateTaskQueue_;
    
    #include 'util.h'
#include 'bittorrent_helper.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'MessageDigest.h'
#include 'message_digest_helper.h'
#include 'fmt.h'
    
    namespace aria2 {
    }
    
        CacheEntry(const std::string& hostname, uint16_t port);
    CacheEntry(const CacheEntry& c);
    ~CacheEntry();
    
        NDLBuilderImpl(ComputationNetworkPtr computationNetwork)
    {
        m_computationNetwork = computationNetwork;
        m_nodeEvaluator = new NDLNodeEvaluatorImpl<ElemType>(m_computationNetwork);
    }
    
        // FindSymbol - Find a symbol to the symbol table
    // symbol - symbol to find
    // searchForDotNames - search for NDL symbols traversing call heirarchy
    // returns - node this symbol references
    NDLNode<ElemType>* FindSymbol(const std::string& symbol, bool searchForDotNames = true)
    {
        auto found = m_symbols.find(symbol); // search symbol directly first
        if (found != m_symbols.end())
            return found->second;
    }
    
    //set sequence training parameters, e.g. smoothing weight, frame drop threshhold
template <class ElemType>
void ComputationNetwork::SetSeqParam(ComputationNetworkPtr net,
                                     const ComputationNodeBasePtr criterionNode,
                                     const double& hsmoothingWeight,
                                     const double& frameDropThresh,
                                     const bool& doreferencealign,
                                     const double& amf /*= 14.0f*/,
                                     const double& lmf /*= 14.0f*/,
                                     const double& wp /*= 0.0f*/,
                                     const double& bMMIfactor /*= 0.0f*/,
                                     const bool& sMBR /*= false*/
                                     )
{
    fprintf(stderr, 'Setting Hsmoothing weight to %.8g and frame-dropping threshhold to %.8g\n', hsmoothingWeight, frameDropThresh);
    fprintf(stderr, 'Setting SeqGammar-related parameters: amf=%.2f, lmf=%.2f, wp=%.2f, bMMIFactor=%.2f, usesMBR=%s\n',
            amf, lmf, wp, bMMIfactor, sMBR ? 'true' : 'false');
    list<ComputationNodeBasePtr> seqNodes = net->GetNodesWithType(OperationNameOf(SequenceWithSoftmaxNode), criterionNode);
    if (seqNodes.size() == 0)
    {
        fprintf(stderr, 'WARNING: there is no sequence node.\n');
    }
    else
    {
        for (auto nodeIter = seqNodes.begin(); nodeIter != seqNodes.end(); nodeIter++)
        {
            auto node = dynamic_pointer_cast<SequenceWithSoftmaxNode<ElemType>>(*nodeIter);
            node->SetSmoothWeight(hsmoothingWeight);
            node->SetFrameDropThresh(frameDropThresh);
            node->SetReferenceAlign(doreferencealign);
            node->SetGammarCalculationParam(amf, lmf, wp, bMMIfactor, sMBR);
        }
    }
}
    
        void TrainOrAdaptModel(int startEpoch, ComputationNetworkPtr net,
                           bool networkLoadedFromCheckpoint,
                           ComputationNetworkPtr refNet,
                           ComputationNodeBasePtr refNode,
                           IDataReader* trainSetDataReader,
                           IDataReader* validationSetDataReader);
    
    #include 'Basics.h'
#include 'MPIWrapper.h'
#include 'Matrix.h'
#include 'SimpleDistGradAggregatorHelper.h'
#include 'DistGradHeader.h'
#include 'IDistGradAggregator.h'
#include 'SimpleDistGradAggregator.h'
#include 'V2SimpleDistGradAggregator.h'
    
    const float INNER_TIME_64E_S3[12][32] = {
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {172.8f, 171.5f, 170.3f, 169.1f, 165.6f, 164.3f, 163.1f, 161.9f,
     158.4f, 157.1f, 155.9f, 154.7f, 151.2f, 149.9f, 148.7f, 147.5f,
     144.0f, 142.7f, 141.5f, 140.3f, 136.8f, 135.5f, 134.3f, 133.1f,
     129.6f, 128.3f, 127.1f, 125.9f, 122.4f, 121.1f, 119.9f, 118.7f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {115.2f, 113.9f, 112.7f, 111.5f, 108.0f, 106.7f, 105.5f, 104.3f,
     100.8f, 99.5f,  98.3f,  97.1f,  93.6f,  92.3f,  91.1f,  89.9f,
     86.4f,  85.1f,  83.9f,  82.7f,  79.2f,  77.9f,  76.7f,  75.5f,
     72.0f,  70.7f,  69.5f,  68.3f,  64.8f,  63.5f,  62.3f,  61.1f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f},
    {57.6f, 56.3f, 55.1f, 53.9f, 50.4f, 49.1f, 47.9f, 46.7f,
     43.2f, 41.9f, 40.7f, 39.5f, 36.0f, 34.7f, 33.5f, 32.3f,
     28.8f, 27.5f, 26.3f, 25.1f, 21.6f, 20.3f, 19.1f, 17.9f,
     14.4f, 13.1f, 11.9f, 10.7f, 7.2f,  5.9f,  4.7f,  3.5f}};
    
    void Velodyne32Parser::Unpack(const VelodynePacket& pkt,
                              std::shared_ptr<PointCloud> pc) {
  // const RawPacket* raw = (const RawPacket*)&pkt.data[0];
  const RawPacket* raw = (const RawPacket*)pkt.data().c_str();
  double basetime = raw->gps_timestamp;  // usec
    }
    
    VelodyneParser *VelodyneParserFactory::CreateParser(Config source_config) {
  Config config = source_config;
  if (config.model() == VLP16) {
    config.set_calibration_online(false);
    return new Velodyne16Parser(config);
  } else if (config.model() == HDL32E || config.model() == VLP32C) {
    config.set_calibration_online(false);
    return new Velodyne32Parser(config);
  } else if (config.model() == HDL64E_S3S || config.model() == HDL64E_S3D ||
             config.model() == HDL64E_S2) {
    return new Velodyne64Parser(config);
  } else if (config.model() == VLS128) {
    return new Velodyne128Parser(config);
  } else {
    AERROR << 'invalid model, must be 64E_S2|64E_S3S'
           << '|64E_S3D_STRONGEST|64E_S3D_LAST|64E_S3D_DUAL|HDL32E|VLP16';
    return nullptr;
  }
}
    
    
    { private:
  static constexpr char const* const CROSSWALK_VO_ID_PREFIX = 'CW_';
  std::vector<const hdmap::PathOverlap*> crosswalk_overlaps_;
};
    
    
    {  can_sender_->Update();
  const int32_t flag =
      CHECK_RESPONSE_STEER_UNIT_FLAG | CHECK_RESPONSE_SPEED_UNIT_FLAG;
  if (!CheckResponse(flag, true)) {
    AERROR << 'Failed to switch to COMPLETE_AUTO_DRIVE mode.';
    Emergency();
    set_chassis_error_code(Chassis::CHASSIS_ERROR);
    return ErrorCode::CANBUS_ERROR;
  }
  set_driving_mode(Chassis::COMPLETE_AUTO_DRIVE);
  AINFO << 'Switch to COMPLETE_AUTO_DRIVE mode ok.';
  return ErrorCode::OK;
}
    
      CANCardParameter can_client_conf_b;
  std::unique_ptr<CanClient> client_b;
  if (!FLAGS_only_one_send) {
    if (!apollo::cyber::common::GetProtoFromFile(FLAGS_can_client_conf_file_b,
                                                 &can_client_conf_b)) {
      AERROR << 'Unable to load canbus conf file: '
             << FLAGS_can_client_conf_file_b;
      return -1;
    }
    AINFO << 'Conf file is loaded: ' << FLAGS_can_client_conf_file_b;
    AINFO << can_client_conf_b.ShortDebugString();
    client_b = can_client_factory->CreateObject(can_client_conf_b.brand());
    if (!client_b || !client_b->Init(can_client_conf_b) ||
        client_b->Start() != ErrorCode::OK) {
      AERROR << 'Create can client b failed.';
      return -1;
    }
    param_ptr_b->can_client = client_b.get();
    param_ptr_b->conf = can_client_conf_b;
  }
    
        int ret = 0;
    ret = fscanf(fp, '%254s %f %f %lf %f %f %f %f %f %f %f %lf %lf %lf %f %f',
                 type, &trash, &trash, &obj->camera_supplement.alpha, &x1, &y1,
                 &x2, &y2, &obj->size[2], &obj->size[1], &obj->size[0],
                 &obj->center[0], &obj->center[1], &obj->center[2], &obj->theta,
                 &score);
    AINFO << 'fscanf return: ' << ret;
    if (FLAGS_dist_type == 'H-from-h') {
      obj->size[0] = static_cast<float>(obj->center[2]);
    } else if (FLAGS_dist_type == 'H-on-h') {
      obj->size[0] = static_cast<float>(obj->center[2]) * (y2 - y1);
    }
    obj->camera_supplement.box.xmin = std::max<float>(x1, 0);
    obj->camera_supplement.box.ymin = std::max<float>(y1, 0);
    obj->camera_supplement.box.xmax =
        std::min<float>(x2, static_cast<float>(FLAGS_width));
    obj->camera_supplement.box.ymax =
        std::min<float>(y2, static_cast<float>(FLAGS_height));
    obj->camera_supplement.area_id = 5;
    
      memcpy(obj_mapper_options->bbox, bbox2d, sizeof(float) * 4);
  memcpy(obj_mapper_options->hwl, dimension_hwl, sizeof(float) * 3);
  obj_mapper_options->ry = rotation_y;
  obj_mapper_options->is_veh = (obj->type == base::ObjectType::VEHICLE);
  obj_mapper_options->check_dimension = multicue_param_.check_dimension();
  obj_mapper_options->type_min_vol_index =
      MatchTemplates(sub_type, dimension_hwl);
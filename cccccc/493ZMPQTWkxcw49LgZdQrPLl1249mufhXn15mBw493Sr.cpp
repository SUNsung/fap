
        
          auto conformance = conformanceRef.getConcrete();
    
    const char *swift::_swift_stdlib_strtod_clocale(
    const char * nptr, double *outResult) {
  return _swift_stdlib_strtoX_clocale_impl(
    nptr, outResult, HUGE_VAL, strtod_l);
}
    
      /// Find the conformance of the given Swift type to the
  /// _BridgedStoredNSError protocol.
  Optional<ProtocolConformanceRef>
  getConformanceToBridgedStoredNSError(SILLocation loc, Type type);
    
      // On failure, fill out the cache with everything we know about.
  std::vector<std::pair<std::string, const TypeRef *>> Fields;
  for (auto &Info : ReflectionInfos) {
    uint64_t TypeRefOffset = Info.Field.SectionOffset
                           - Info.TypeReference.SectionOffset;
    for (auto &FD : Info.Field.Metadata) {
      if (!FD.hasMangledTypeName())
        continue;
      auto CandidateMangledName = FD.getMangledTypeName(TypeRefOffset);
      auto NormalizedName = normalizeReflectionName(Dem, CandidateMangledName);
      FieldTypeInfoCache[NormalizedName] = {&FD, &Info};
      Dem.clear();
    }
  }
    
      /// Append any retroactive conformances.
  void appendRetroactiveConformances(Type type);
  void appendRetroactiveConformances(SubstitutionMap subMap,
                                     ModuleDecl *fromModule);
  void appendImplFunctionType(SILFunctionType *fn);
    
    
    {  /// Produces a contextual type involving archetypes within the context of
  /// the type.
  Contextual,
};
    
    /**
 * Provides the minimal api for a simple out of line executor that can run non-cancellable
 * callbacks.
 *
 * The contract for scheduling work on an executor is that it never blocks the caller.  It doesn't
 * necessarily need to offer forward progress guarantees, but actual calls to schedule() should not
 * deadlock.
 *
 * If you manage the lifetime of your executor using a shared_ptr, you can begin a chain of
 * execution like this:
 *      ExecutorFuture(myExec)
 *          .then([] { return doThing1(); })
 *          .then([] { return doThing2(); })
 *          ...
 */
class OutOfLineExecutor {
public:
    using Task = unique_function<void(Status)>;
    }
    
    
    {class ValidId : public Base {
public:
    void run() {
        ASSERT(fixDocumentForInsert(_opCtx.getServiceContext(), BSON('_id' << 5)).isOK());
        ASSERT(
            fixDocumentForInsert(_opCtx.getServiceContext(), BSON('_id' << BSON('x' << 5))).isOK());
        ASSERT(!fixDocumentForInsert(_opCtx.getServiceContext(), BSON('_id' << BSON('$x' << 5)))
                    .isOK());
        ASSERT(!fixDocumentForInsert(_opCtx.getServiceContext(), BSON('_id' << BSON('$oid' << 5)))
                    .isOK());
    }
};
}  // namespace Insert
    
    //
// Check that cursor relocates its end location properly if end location
// changes during a yield
//
class QueryStageCountScanInsertNewDocsDuringYield : public CountBase {
public:
    void run() {
        dbtests::WriteContextForTests ctx(&_opCtx, ns());
    }
    }
    
    public:
    
    //--------------------------------------------------------------------------
//
//    RegexPattern    Default Constructor
//
//--------------------------------------------------------------------------
RegexPattern::RegexPattern() {
    // Init all of this instances data.
    init();
}
    
    
    {    // Compare identical level.
    const Normalizer2Impl &nfcImpl = data->nfcImpl;
    left += equalPrefixLength;
    right += equalPrefixLength;
    if(settings->dontCheckFCD()) {
        UTF16NFDIterator leftIter(left, leftLimit);
        UTF16NFDIterator rightIter(right, rightLimit);
        return compareNFDIter(nfcImpl, leftIter, rightIter);
    } else {
        FCDUTF16NFDIterator leftIter(nfcImpl, left, leftLimit);
        FCDUTF16NFDIterator rightIter(nfcImpl, right, rightLimit);
        return compareNFDIter(nfcImpl, leftIter, rightIter);
    }
}
    
    U_NAMESPACE_END
    
    namespace apollo {
namespace drivers {
namespace velodyne {
    }
    }
    }
    
    namespace apollo {
namespace planning {
    }
    }
    
    
    {    // wait for other agent receiving is ok.
    while (!other_agent()->is_receiving()) {
      std::this_thread::yield();
    }
    int64_t start = AsInt64<micros>(Clock::Now());
    while (true) {
      // param->print();
      if (count >= FLAGS_agent_mutual_send_frames) {
        break;
      }
      for (int32_t i = 0; i < MAX_CAN_SEND_FRAME_LEN; ++i) {
        // frames[i].id = id_count & 0x3FF;
        send_id = id;
        frames[i].id = id;
        frames[i].len = 8;
        frames[i].data[7] = static_cast<uint8_t>(count % 256);
        for (uint8_t j = 0; j < 7; ++j) {
          frames[i].data[j] = j;
        }
        ++count;
        ++id;
        if (id > end_id) {
          id = start_id;
        }
      }
      int32_t frame_num = MAX_CAN_SEND_FRAME_LEN;
      if (client->Send(frames, &frame_num) != ErrorCode::OK) {
        param->send_err_cnt += MAX_CAN_SEND_FRAME_LEN;
        AERROR << 'send_thread send msg failed!, id:' << send_id
               << ', conf:' << param->conf.ShortDebugString();
      } else {
        param->send_cnt += frame_num;
        param->send_lost_cnt += MAX_CAN_SEND_FRAME_LEN - frame_num;
        AINFO << 'send_frames: ' << frame_num << 'send_frame#'
              << frames[0].CanFrameString()
              << ' send lost:' << MAX_CAN_SEND_FRAME_LEN - frame_num
              << ', conf:' << param->conf.ShortDebugString();
      }
    }
    int64_t end = AsInt64<micros>(Clock::Now());
    param->send_time = static_cast<int32_t>(end - start);
    // In case for finish too quick to receiver miss some msg
    sleep(2);
    AINFO << 'Send thread stopping...' << param->conf.ShortDebugString();
    is_sending_finish(true);
    return;
  }
    
    Status ControllerAgent::Init(const ControlConf *control_conf) {
  RegisterControllers(control_conf);
  CHECK(InitializeConf(control_conf).ok()) << 'Failed to initialize config.';
  for (auto &controller : controller_list_) {
    if (controller == nullptr) {
      return Status(ErrorCode::CONTROL_INIT_ERROR, 'Controller is null.');
    }
    if (!controller->Init(control_conf_).ok()) {
      AERROR << 'Controller <' << controller->Name() << '> init failed!';
      return Status(ErrorCode::CONTROL_INIT_ERROR,
                    'Failed to init Controller:' + controller->Name());
    }
    AINFO << 'Controller <' << controller->Name() << '> init done!';
  }
  return Status::OK();
}
    
    namespace apollo {
namespace planning {
namespace scenario {
namespace traffic_light {
    }
    }
    }
    }
    
    
    {  switch (sub_type) {
    case base::ObjectSubType::TRAFFICCONE: {
      const float *min_tmplt_cur_type = kMinTemplateHWL.at(sub_type).data();
      const float *max_tmplt_cur_type = kMaxTemplateHWL.at(sub_type).data();
      dimension_hwl[0] = std::min(dimension_hwl[0], max_tmplt_cur_type[0]);
      dimension_hwl[0] = std::max(dimension_hwl[0], min_tmplt_cur_type[0]);
      break;
    }
    case base::ObjectSubType::PEDESTRIAN:
    case base::ObjectSubType::CYCLIST:
    case base::ObjectSubType::MOTORCYCLIST: {
      const float *min_tmplt_cur_type = kMinTemplateHWL.at(sub_type).data();
      const float *mid_tmplt_cur_type = kMidTemplateHWL.at(sub_type).data();
      const float *max_tmplt_cur_type = kMaxTemplateHWL.at(sub_type).data();
      float dh_min = fabsf(dimension_hwl[0] - min_tmplt_cur_type[0]);
      float dh_mid = fabsf(dimension_hwl[0] - mid_tmplt_cur_type[0]);
      float dh_max = fabsf(dimension_hwl[0] - max_tmplt_cur_type[0]);
      std::vector<std::pair<float, float>> diff_hs;
      diff_hs.push_back(std::make_pair(dh_min, min_tmplt_cur_type[0]));
      diff_hs.push_back(std::make_pair(dh_mid, mid_tmplt_cur_type[0]));
      diff_hs.push_back(std::make_pair(dh_max, max_tmplt_cur_type[0]));
      sort(diff_hs.begin(), diff_hs.end(),
           [](const std::pair<float, float> &a,
              const std::pair<float, float> &b) -> bool {
             return a.first < b.first;
           });
      dimension_hwl[0] = diff_hs[0].second;
      break;
    }
    case base::ObjectSubType::CAR:
      type_min_vol_index =
          kLookUpTableMinVolumeIndex.at(TemplateIndex::CAR_MIN_VOLUME_INDEX);
      break;
    case base::ObjectSubType::VAN:
      type_min_vol_index =
          kLookUpTableMinVolumeIndex.at(TemplateIndex::VAN_MIN_VOLUME_INDEX);
      break;
    case base::ObjectSubType::TRUCK:
      type_min_vol_index =
          kLookUpTableMinVolumeIndex.at(TemplateIndex::TRUCK_MIN_VOLUME_INDEX);
      break;
    case base::ObjectSubType::BUS:
      type_min_vol_index =
          kLookUpTableMinVolumeIndex.at(TemplateIndex::BUS_MIN_VOLUME_INDEX);
      break;
    default:
      if (min_dimension_val < multicue_param_.min_dimension_val()) {
        common::IScale3(dimension_hwl, multicue_param_.min_dimension_val() *
                                           common::IRec(min_dimension_val));
      }
      break;
  }
  return type_min_vol_index;
}
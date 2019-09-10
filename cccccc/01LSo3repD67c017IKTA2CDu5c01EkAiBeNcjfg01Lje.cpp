
        
        #include 'db/builder.h'
    
      fname = TableFileName('bar', 200);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(200, number);
  ASSERT_EQ(kTableFile, type);
    
     private:
  friend class SnapshotList;
    
    #include <string>
    
    
    {      // Ok
      break;
    case kSnappyCompression: {
      size_t ulength = 0;
      if (!port::Snappy_GetUncompressedLength(data, n, &ulength)) {
        delete[] buf;
        return Status::Corruption('corrupted compressed block contents');
      }
      char* ubuf = new char[ulength];
      if (!port::Snappy_Uncompress(data, n, ubuf)) {
        delete[] buf;
        delete[] ubuf;
        return Status::Corruption('corrupted compressed block contents');
      }
      delete[] buf;
      result->data = Slice(ubuf, ulength);
      result->heap_allocated = true;
      result->cachable = true;
      break;
    }
    default:
      delete[] buf;
      return Status::Corruption('bad block type');
  }
    
    void Table::ReadMeta(const Footer& footer) {
  if (rep_->options.filter_policy == nullptr) {
    return;  // Do not need any metadata
  }
    }
    
    #include <vector>
    
    
    {  i = 0;
  for (auto it = viewer.begin(); it != viewer.end(); ++it) {
    EXPECT_EQ(CHANNEL_NAME_1, it->channel_name);
    EXPECT_EQ(begin_time + step_time * i, it->time);
    EXPECT_EQ(std::to_string(i), it->content);
    i++;
  }
  EXPECT_EQ(msg_num, i);
}
    
    TEST_F(GraphSegmentorTest, test_edge_comparison) {
  EXPECT_LT(edges_[1], edges_[0]);
  EXPECT_FALSE(edges_[3] < edges_[4]);
  EXPECT_FALSE(edges_[6] < edges_[7]);
}
    
      if (ready_num > 0) {
    for (int i = 0; i < ready_num; ++i) {
      int fd = evt[i].data.fd;
      uint32_t events = evt[i].events;
      responses[fd] = PollResponse(events);
    }
  }
    
    #include 'modules/planning/math/curve_math.h'
    
    #include 'modules/planning/navi/decider/navi_speed_ts_graph.h'
    
    // drive with old acceleration
// gas:0.00~99.99 unit:
void GemController::Throttle(double pedal) {
  if (driving_mode() != Chassis::COMPLETE_AUTO_DRIVE &&
      driving_mode() != Chassis::AUTO_SPEED_ONLY) {
    AINFO << 'The current drive mode does not need to set acceleration.';
    return;
  }
    }
    
    
    {  for (const auto& stage_config : config_.stage_config()) {
    stage_config_map_[stage_config.stage_type()] = &stage_config;
  }
  for (int i = 0; i < config_.stage_type_size(); ++i) {
    auto stage_type = config_.stage_type(i);
    CHECK(common::util::ContainsKey(stage_config_map_, stage_type))
        << 'stage type : ' << ScenarioConfig::StageType_Name(stage_type)
        << ' has no config';
  }
  ADEBUG << 'init stage '
         << ScenarioConfig::StageType_Name(config_.stage_type(0));
  current_stage_ = CreateStage(*stage_config_map_[config_.stage_type(0)]);
}
    
      // load image list
  std::ifstream fin;
  fin.open(FLAGS_test_list, std::ifstream::in);
  if (!fin.is_open()) {
    AERROR << 'Cannot open test list: ' << FLAGS_test_list;
    return -1;
  }
    
    
    {
    {
    {}  // namespace video
}  // namespace drivers
}  // namespace apollo

    
      ValetParkingContext* GetContext() {
    return GetContextAs<ValetParkingContext>();
  }
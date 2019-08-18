
        
        void Top::_appendStatsEntry(BSONObjBuilder& b, const char* statsName, const UsageData& map) const {
    BSONObjBuilder bb(b.subobjStart(statsName));
    bb.appendNumber('time', map.time);
    bb.appendNumber('count', map.count);
    bb.done();
}
    
            BSONElement a = fixed['a'];
        ASSERT(o['a'].type() == bsonTimestamp);
        ASSERT(o['a'].timestampValue() == 0);
        ASSERT(a.type() == bsonTimestamp);
        ASSERT(a.timestampValue() > 0);
    
        /*
     * Given a CountScan PlanStage object count, call work() on
     * count until we reach IS_EOF.  Tally up how many objects
     * we've counted and return the count.
     */
    int runCount(CountScan* count) {
        int countWorks = 0;
        WorkingSetID wsid;
    }
    
    void RemoveTransliterator::handleTransliterate(Replaceable& text, UTransPosition& index,
                                               UBool /*isIncremental*/) const {
    // Our caller (filteredTransliterate) has already narrowed us
    // to an unfiltered run.  Delete it.
    UnicodeString empty;
    text.handleReplaceBetween(index.start, index.limit, empty);
    int32_t len = index.limit - index.start;
    index.contextLimit -= len;
    index.limit -= len;
}
U_NAMESPACE_END
    
    #include 'scriptset.h'
#include 'uassert.h'
#include 'cmemory.h'
    
    USearchAttributeValue SearchIterator::getAttribute(
                                          USearchAttribute  attribute) const
{
    switch (attribute) {
    case USEARCH_OVERLAP :
        return (m_search_->isOverlap == TRUE ? USEARCH_ON : USEARCH_OFF);
    case USEARCH_CANONICAL_MATCH :
        return (m_search_->isCanonicalMatch == TRUE ? USEARCH_ON : 
                                                                USEARCH_OFF);
    case USEARCH_ELEMENT_COMPARISON :
        {
            int16_t value = m_search_->elementComparisonType;
            if (value == USEARCH_PATTERN_BASE_WEIGHT_IS_WILDCARD || value == USEARCH_ANY_BASE_WEIGHT_IS_WILDCARD) {
                return (USearchAttributeValue)value;
            } else {
                return USEARCH_STANDARD_ELEMENT_COMPARISON;
            }
        }
    default :
        return USEARCH_DEFAULT;
    }
}
    
int32_t SearchIterator::getMatchedStart() const
{
    return m_search_->matchedIndex;
}
    
    // micro second
const float INNER_TIME_HDL32E[12][32] = {
    {543.0f, 541.0f, 540.0f, 539.0f, 538.0f, 537.0f, 536.0f, 535.0f,
     533.0f, 532.0f, 531.0f, 530.0f, 529.0f, 528.0f, 526.0f, 525.0f,
     524.0f, 523.0f, 522.0f, 521.0f, 520.0f, 518.0f, 517.0f, 516.0f,
     515.0f, 514.0f, 513.0f, 511.0f, 510.0f, 509.0f, 508.0f, 507.0f},
    {497.0f, 495.0f, 494.0f, 493.0f, 492.0f, 491.0f, 490.0f, 488.0f,
     487.0f, 486.0f, 485.0f, 484.0f, 483.0f, 482.0f, 480.0f, 479.0f,
     478.0f, 477.0f, 476.0f, 475.0f, 473.0f, 472.0f, 471.0f, 470.0f,
     469.0f, 468.0f, 467.0f, 465.0f, 464.0f, 463.0f, 462.0f, 461.0f},
    {450.0f, 449.0f, 448.0f, 447.0f, 446.0f, 445.0f, 444.0f, 442.0f,
     441.0f, 440.0f, 439.0f, 438.0f, 437.0f, 435.0f, 434.0f, 433.0f,
     432.0f, 431.0f, 430.0f, 429.0f, 427.0f, 426.0f, 425.0f, 424.0f,
     423.0f, 422.0f, 420.0f, 419.0f, 418.0f, 417.0f, 416.0f, 415.0f},
    {404.0f, 403.0f, 402.0f, 401.0f, 400.0f, 399.0f, 397.0f, 396.0f,
     395.0f, 394.0f, 393.0f, 392.0f, 391.0f, 389.0f, 388.0f, 387.0f,
     386.0f, 385.0f, 384.0f, 382.0f, 381.0f, 380.0f, 379.0f, 378.0f,
     377.0f, 376.0f, 374.0f, 373.0f, 372.0f, 371.0f, 370.0f, 369.0f},
    {358.0f, 357.0f, 356.0f, 355.0f, 354.0f, 353.0f, 351.0f, 350.0f,
     349.0f, 348.0f, 347.0f, 346.0f, 344.0f, 343.0f, 342.0f, 341.0f,
     340.0f, 339.0f, 338.0f, 336.0f, 335.0f, 334.0f, 333.0f, 332.0f,
     331.0f, 329.0f, 328.0f, 327.0f, 326.0f, 325.0f, 324.0f, 323.0f},
    {312.0f, 311.0f, 310.0f, 309.0f, 308.0f, 306.0f, 305.0f, 304.0f,
     303.0f, 302.0f, 301.0f, 300.0f, 298.0f, 297.0f, 296.0f, 295.0f,
     294.0f, 293.0f, 291.0f, 290.0f, 289.0f, 288.0f, 287.0f, 286.0f,
     285.0f, 283.0f, 282.0f, 281.0f, 280.0f, 279.0f, 278.0f, 276.0f},
    {266.0f, 265.0f, 264.0f, 263.0f, 262.0f, 260.0f, 259.0f, 258.0f,
     257.0f, 256.0f, 255.0f, 253.0f, 252.0f, 251.0f, 250.0f, 249.0f,
     248.0f, 247.0f, 245.0f, 244.0f, 243.0f, 242.0f, 241.0f, 240.0f,
     238.0f, 237.0f, 236.0f, 235.0f, 234.0f, 233.0f, 232.0f, 230.0f},
    {220.0f, 219.0f, 218.0f, 217.0f, 215.0f, 214.0f, 213.0f, 212.0f,
     211.0f, 210.0f, 209.0f, 207.0f, 206.0f, 205.0f, 204.0f, 203.0f,
     202.0f, 200.0f, 199.0f, 198.0f, 197.0f, 196.0f, 195.0f, 194.0f,
     192.0f, 191.0f, 190.0f, 189.0f, 188.0f, 187.0f, 185.0f, 184.0f},
    {174.0f, 173.0f, 172.0f, 170.0f, 169.0f, 168.0f, 167.0f, 166.0f,
     165.0f, 164.0f, 162.0f, 161.0f, 160.0f, 159.0f, 158.0f, 157.0f,
     156.0f, 154.0f, 153.0f, 152.0f, 151.0f, 150.0f, 149.0f, 147.0f,
     146.0f, 145.0f, 144.0f, 143.0f, 142.0f, 141.0f, 139.0f, 138.0f},
    {128.0f, 127.0f, 126.0f, 124.0f, 123.0f, 122.0f, 121.0f, 120.0f,
     119.0f, 118.0f, 116.0f, 115.0f, 114.0f, 113.0f, 112.0f, 111.0f,
     109.0f, 108.0f, 107.0f, 106.0f, 105.0f, 104.0f, 103.0f, 101.0f,
     100.0f, 99.0f,  98.0f,  97.0f,  96.0f,  94.0f,  93.0f,  92.0f},
    {82.0f, 81.0f, 79.0f, 78.0f, 77.0f, 76.0f, 75.0f, 74.0f,
     73.0f, 71.0f, 70.0f, 69.0f, 68.0f, 67.0f, 66.0f, 65.0f,
     63.0f, 62.0f, 61.0f, 60.0f, 59.0f, 58.0f, 56.0f, 55.0f,
     54.0f, 53.0f, 52.0f, 51.0f, 50.0f, 48.0f, 47.0f, 46.0f},
    {36.0f, 35.0f, 33.0f, 32.0f, 31.0f, 30.0f, 29.0f, 28.0f,
     26.0f, 25.0f, 24.0f, 23.0f, 22.0f, 21.0f, 20.0f, 18.0f,
     17.0f, 16.0f, 15.0f, 14.0f, 13.0f, 12.0f, 10.0f, 9.0f,
     8.0f,  7.0f,  6.0f,  5.0f,  3.0f,  2.0f,  1.0f,  0.0f}};
    
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
    
    const char CHANNEL_NAME_1[] = '/test/channel1';
const char CHANNEL_NAME_2[] = '/test/channel2';
const char MESSAGE_TYPE_1[] = 'apollo.cyber.proto.Test';
const char MESSAGE_TYPE_2[] = 'apollo.cyber.proto.Channel';
const char PROTO_DESC[] = '1234567890';
const char TEST_FILE[] = 'viewer_test.record';
    
    
    {
    {
    {}  // namespace common
}  // namespace perception
}  // namespace apollo

    
          for (const ModelConfigProto &model_config_proto :
           multi_model_config_proto.model_configs()) {
        ModelConfig *model_config = new ModelConfig();
        if (!model_config->Reset(model_config_proto)) {
          return false;
        }
    }
    
    TEST(CyberNodeTest, create_reader) {
  EXPECT_TRUE(apollo::cyber::OK());
  apollo::cyber::proto::Chatter chat;
  apollo::cyber::PyNode node('listener');
  pr = node.create_reader('channel/chatter', chat.GetTypeName());
  EXPECT_EQ('apollo.cyber.proto.Chatter', chat.GetTypeName());
  EXPECT_NE(pr, nullptr);
  pr->register_func(cbfun);
  delete pr;
  pr = nullptr;
}
    
      // Give engage_advice based on error_code and canbus feedback
  if (!chassis_error_mask_ && !chassis_.parking_brake() &&
      chassis_.throttle_percentage() == 0.0 &&
      chassis_.brake_percentage() != 0.0) {
    chassis_.mutable_engage_advice()->set_advice(
        apollo::common::EngageAdvice::READY_TO_ENGAGE);
  } else {
    chassis_.mutable_engage_advice()->set_advice(
        apollo::common::EngageAdvice::DISALLOW_ENGAGE);
    chassis_.mutable_engage_advice()->set_reason(
        'CANBUS not ready, firmware error or emergency button pressed!');
  }
    
    #include 'cyber/common/file.h'
#include 'modules/planning/common/planning_context.h'
    
      TestCanParam *param_ptr() { return param_ptr_; }
    
      Stage::StageStatus FinishScenario() override;
  Stage::StageStatus FinishStage(const bool protected_mode);
    
    class SchedulerChoreography : public Scheduler {
 public:
  bool RemoveCRoutine(uint64_t crid) override;
  bool RemoveTask(const std::string& name) override;
  bool DispatchTask(const std::shared_ptr<CRoutine>&) override;
    }
    
    #pragma once
    
    
    {
    {    // Insert a new entry to a new log file
    Put('key1025', DummyString(10));
    dbfull()->FlushWAL(false);
    // Try to read from the beginning. Should stop before the gap and read less
    // than 1025 entries
    auto iter = OpenTransactionLogIter(0);
    int count;
    SequenceNumber last_sequence_read = ReadRecords(iter, count);
    ASSERT_LT(last_sequence_read, 1025U);
    // Try to read past the gap, should be able to seek to key1025
    auto iter2 = OpenTransactionLogIter(last_sequence_read + 1);
    ExpectRecords(1, iter2);
  } while (ChangeCompactOptions());
}
    
    // CompactionFilter to delete expired blob index from base DB.
class BlobIndexCompactionFilter : public CompactionFilter {
 public:
  BlobIndexCompactionFilter(BlobCompactionContext context,
                            uint64_t current_time, Statistics* statistics)
      : context_(context),
        current_time_(current_time),
        statistics_(statistics) {}
    }
    
      Status GetChildrenFileAttributes(
      const std::string& dir, std::vector<FileAttributes>* result) override {
    PERF_TIMER_GUARD(env_get_children_file_attributes_nanos);
    return EnvWrapper::GetChildrenFileAttributes(dir, result);
  }
    
      bool PartialMerge(const Slice& /*key*/, const Slice& left_operand,
                    const Slice& right_operand, std::string* new_value,
                    Logger* /*logger*/) const override {
    if (left_operand.compare(right_operand) >= 0) {
      new_value->assign(left_operand.data(), left_operand.size());
    } else {
      new_value->assign(right_operand.data(), right_operand.size());
    }
    return true;
  }
    
    std::string kDBPath = '/tmp/rocksdb_column_families_example';
    
      // Commit transaction
  s = txn->Commit();
  assert(s.ok());
  delete txn;
    
    namespace rocksdb {
namespace experimental {
    }
    }
    
      // Lookup page cache by page identifier
  //
  // page_key   Page identifier
  // buf        Buffer where the data should be copied
  // size       Size of the page
  virtual Status Lookup(const Slice& key, std::unique_ptr<char[]>* data,
                        size_t* size) = 0;
    
      // If true, the implementation will do aggressive checking of the
  // data it is processing and will stop early if it detects any
  // errors.  This may have unforeseen ramifications: for example, a
  // corruption of one DB entry may cause a large number of entries to
  // become unreadable or for the entire DB to become unopenable.
  // Default: false
  bool paranoid_checks;
    
     private:
  void Init(
      const std::string& lua_script,
      const std::vector<std::shared_ptr<RocksLuaCustomLibrary>>& libraries) {
    if (lua_state_) {
      luaL_openlibs(lua_state_);
      for (const auto& library : libraries) {
        luaL_openlib(lua_state_, library->Name(), library->Lib(), 0);
        library->CustomSetup(lua_state_);
      }
      luaL_dostring(lua_state_, lua_script.c_str());
    }
  }
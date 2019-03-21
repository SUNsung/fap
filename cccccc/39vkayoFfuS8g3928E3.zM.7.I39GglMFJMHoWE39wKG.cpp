// Like ASSERT_EXIT, but continues on to successive tests in the
// test case, if any:
# define EXPECT_EXIT(statement, predicate, regex) \
    GTEST_DEATH_TEST_(statement, predicate, regex, GTEST_NONFATAL_FAILURE_)
    
    // This helper class is used by {ASSERT|EXPECT}_NO_FATAL_FAILURE to check if a
// statement generates new fatal failures. To do so it registers itself as the
// current test part result reporter. Besides checking if fatal failures were
// reported, it only delegates the reporting to the former result reporter.
// The original result reporter is restored in the destructor.
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
class GTEST_API_ HasNewFatalFailureHelper
    : public TestPartResultReporterInterface {
 public:
  HasNewFatalFailureHelper();
  virtual ~HasNewFatalFailureHelper();
  virtual void ReportTestPartResult(const TestPartResult& result);
  bool has_new_fatal_failure() const { return has_new_fatal_failure_; }
 private:
  bool has_new_fatal_failure_;
  TestPartResultReporterInterface* original_reporter_;
    }
    
    // FilePath - a class for file and directory pathname manipulation which
// handles platform-specific conventions (like the pathname separator).
// Used for helper functions for naming files in a directory for xml output.
// Except for Set methods, all methods are const or static, which provides an
// 'immutable value object' -- useful for peace of mind.
// A FilePath with a value ending in a path separator ('like/this/') represents
// a directory, otherwise it is assumed to represent a file. In either case,
// it may or may not represent an actual file or directory in the file system.
// Names are NOT checked for syntax correctness -- no checking for illegal
// characters, malformed paths, etc.
    
    template <>
class Get<3> {
 public:
  template <class Tuple>
  static GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(3, Tuple))
  Field(Tuple& t) { return t.f3_; }  // NOLINT
    }
    
    // Tests factorial of 0.
TEST(FactorialTest, Zero) {
  EXPECT_EQ(1, Factorial(0));
}
    
    //////////////////////////////////////////////////////////////////////
    
    
    {  auto const makeShared = [&] () {
    if (isVectorCollection(obj->collectionType())) {
      return APCArray::MakeSharedVec(const_cast<ArrayData*>(array),
                                     level,
                                     unserializeObj);
    }
    return APCArray::MakeSharedDict(const_cast<ArrayData*>(array),
                                    level,
                                    unserializeObj);
  };
  return WrapArray(makeShared(), obj->collectionType());
}
    
    
    {  static void
  StringInsert(std::vector<std::string>& values, const std::string& /*key*/,
               const std::string& value) {
    values.push_back(value);
  }
  static void
  StringInsert(boost::container::flat_set<std::string>& values,
               const std::string& /*key*/, const std::string& value) {
    values.insert(value);
  }
  static void
  StringInsert(std::set<std::string, stdltistr>& values,
               const std::string& /*key*/, const std::string& value) {
    values.insert(value);
  }
  static void
  StringInsert(std::set<std::string>& values, const std::string& /*key*/,
               const std::string& value) {
    values.insert(value);
  }
  static void StringInsert(std::map<std::string, std::string> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void StringInsert(std::map<std::string, std::string,
                           stdltistr> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void StringInsert(hphp_string_imap<std::string> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void ReplaceIncludesWithIni(const std::string& original_ini_filename,
                                     const std::string& iniStr,
                                     std::string& with_includes);
};
    
    #include <sys/types.h>
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    
    {
    {      // Record end time
      uint64_t end_time = env->NowMicros();
      double elapsed = static_cast<double>(end_time - start_time) * 1e-6;
      uint32_t qps = static_cast<uint32_t>(
          static_cast<double>(FLAGS_threads * FLAGS_ops_per_thread) / elapsed);
      fprintf(stdout, 'Complete in %.3f s; QPS = %u\n', elapsed, qps);
    }
    return true;
  }
    
    Status WriteBatchBase::DeleteRange(ColumnFamilyHandle* column_family,
                                   const SliceParts& begin_key,
                                   const SliceParts& end_key) {
  std::string begin_key_buf, end_key_buf;
  Slice begin_key_slice(begin_key, &begin_key_buf);
  Slice end_key_slice(end_key, &end_key_buf);
  return DeleteRange(column_family, begin_key_slice, end_key_slice);
}
    
    bool WriteController::IsStopped() const {
  return total_stopped_.load(std::memory_order_relaxed) > 0;
}
// This is inside DB mutex, so we can't sleep and need to minimize
// frequency to get time.
// If it turns out to be a performance issue, we can redesign the thread
// synchronization model here.
// The function trust caller will sleep micros returned.
uint64_t WriteController::GetDelay(Env* env, uint64_t num_bytes) {
  if (total_stopped_.load(std::memory_order_relaxed) > 0) {
    return 0;
  }
  if (total_delayed_.load(std::memory_order_relaxed) == 0) {
    return 0;
  }
    }
    
    // Example structure that describes a compaction task.
struct CompactionTask {
  CompactionTask(
      DB* _db, Compactor* _compactor,
      const std::string& _column_family_name,
      const std::vector<std::string>& _input_file_names,
      const int _output_level,
      const CompactionOptions& _compact_options,
      bool _retry_on_fail)
          : db(_db),
            compactor(_compactor),
            column_family_name(_column_family_name),
            input_file_names(_input_file_names),
            output_level(_output_level),
            compact_options(_compact_options),
            retry_on_fail(_retry_on_fail) {}
  DB* db;
  Compactor* compactor;
  const std::string& column_family_name;
  std::vector<std::string> input_file_names;
  int output_level;
  CompactionOptions compact_options;
  bool retry_on_fail;
};
    
      MyFilter filter;
    
    #include 'rocksdb/db.h'
    
    // Supported only for Leveled compaction
Status SuggestCompactRange(DB* db, ColumnFamilyHandle* column_family,
                           const Slice* begin, const Slice* end);
Status SuggestCompactRange(DB* db, const Slice* begin, const Slice* end);
    
    
    {  virtual ~FlushBlockPolicyFactory() { }
};
    
      // Lookup page cache by page identifier
  //
  // page_key   Page identifier
  // buf        Buffer where the data should be copied
  // size       Size of the page
  virtual Status Lookup(const Slice& key, std::unique_ptr<char[]>* data,
                        size_t* size) = 0;
    
    // A structure that describes the current status of a thread.
// The status of active threads can be fetched using
// rocksdb::GetThreadList().
struct ThreadStatus {
  // The type of a thread.
  enum ThreadType : int {
    HIGH_PRIORITY = 0,  // RocksDB BG thread in high-pri thread pool
    LOW_PRIORITY,  // RocksDB BG thread in low-pri thread pool
    USER,  // User thread (Non-RocksDB BG thread)
    BOTTOM_PRIORITY,  // RocksDB BG thread in bottom-pri thread pool
    NUM_THREAD_TYPES
  };
    }
    
      // Approximate size of user data packed per block.  Note that the
  // block size specified here corresponds to uncompressed data.  The
  // actual size of the unit read from disk may be smaller if
  // compression is enabled.  This parameter can be changed dynamically.
  //
  // Default: 4K
  size_t block_size;
    
    
    {  EsdCanClient esd_can_client;
  EXPECT_TRUE(esd_can_client.Init(param));
  EXPECT_EQ(esd_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(esd_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(esd_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(esd_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  esd_can_client.Stop();
}
    
    using apollo::common::ErrorCode;
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
    
    // data file
DEFINE_string(sensor_conf_file, '', 'Sensor conf file');
    
    
    {  x <<= 2;
  x |= t;
  double ret = x * OBJECT_VREL_RES + OBJECT_VREL_LONG_MIN;
  return ret;
}
    
    int ObjectQualityInfo60C::longitude_vel_rms(const std::uint8_t* bytes,
                                            int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(1, 5);
    }
    
    unsigned int BaseMapMatrix::CreateBinary(unsigned char* buf,
                                         unsigned int buf_size) const {
  return 0;
}
    
        auto it_lower = std::lower_bound(
        speed_limit_.speed_limit_points().begin(),
        speed_limit_.speed_limit_points().end(), s,
        [](const std::pair<double, double>& point, const double curr_s) {
          return point.first < curr_s;
        });
    
      std::vector<double> x_pow(2 * num_params + 1, 1.0);
  for (uint32_t i = 1; i < 2 * num_params + 1; ++i) {
    x_pow[i] = x_pow[i - 1] * x;
  }
    
    #include 'modules/canbus/vehicle/gem/protocol/brake_motor_rpt_1_70.h'
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
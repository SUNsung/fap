
        
        #include <univalue.h>
    
    BOOST_AUTO_TEST_CASE(bip173_testvectors_valid)
{
    static const std::string CASES[] = {
        'A12UEL5L',
        'a12uel5l',
        'an83characterlonghumanreadablepartthatcontainsthenumber1andtheexcludedcharactersbio1tt5tgs',
        'abcdef1qpzry9x8gf2tvdw0s3jn54khce6mua7lmqqqxw',
        '11qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqc8247j',
        'split1checkupstagehandshakeupstreamerranterredcaperred2y9e3w',
        '?1ezyfcl',
    };
    for (const std::string& str : CASES) {
        auto ret = bech32::Decode(str);
        BOOST_CHECK(!ret.first.empty());
        std::string recode = bech32::Encode(ret.first, ret.second);
        BOOST_CHECK(!recode.empty());
        BOOST_CHECK(CaseInsensitiveEqual(str, recode));
    }
}
    
    BOOST_FIXTURE_TEST_SUITE(blockchain_tests, BasicTestingSetup)
    
    // Error handling; calls assert() by default.
#define TINYFORMAT_ERROR(reasonString) throw tinyformat::format_error(reasonString)
    
    
    {bool ParseDouble(const std::string& str, double *out)
{
    if (!ParsePrechecks(str))
        return false;
    if (str.size() >= 2 && str[0] == '0' && str[1] == 'x') // No hexadecimal floats allowed
        return false;
    std::istringstream text(str);
    text.imbue(std::locale::classic());
    double result;
    text >> result;
    if(out) *out = result;
    return text.eof() && !text.fail();
}
}
    
    
    {    void operator() (const T * src0, const T * src1, T * dst) const
    {
        dst[0] = internal::saturate_cast<T>(src0[0] >= src1[0] ? (s64)src0[0] - src1[0] : (s64)src1[0] - src0[0]);
    }
};
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8* src = internal::getRowPtr(srcBase, srcStride, i);
        s16* dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
    struct BitwiseOr
{
    typedef u8 type;
    }
    
        if (borderType == BORDER_MODE_CONSTANT)
        for (s32 k = 0; k < cn; ++k)
        {
            lanea[-cn+k] = borderValue;
            lanea[colsn+k] = borderValue;
            laneA[-cn+k] = borderValue;
            laneA[colsn+k] = borderValue;
            laneb[-cn+k] = borderValue;
            laneb[colsn+k] = borderValue;
            laneB[-cn+k] = borderValue;
            laneB[colsn+k] = borderValue;
        }
    
    #ifdef CAROTENE_NEON
    if (shift >= 16)
    {
        if (cpolicy == CONVERT_POLICY_WRAP)
        {
            size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
            size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
            int16x8_t v_zero = vdupq_n_s16(0);
    }
    }
    
                    uint8x16_t v0 = vld1q_u8(ptr);
                int8x16_t v1 = vreinterpretq_s8_u8(veorq_u8(vqsubq_u8(v0, t), delta));
                int8x16_t v2 = vreinterpretq_s8_u8(veorq_u8(vqaddq_u8(v0, t), delta));
    
    #define INRANGEFUNC(T)                                       \
void inRange(const Size2D &_size,                            \
             const T * srcBase, ptrdiff_t srcStride,         \
             const T * rng1Base, ptrdiff_t rng1Stride,       \
             const T * rng2Base, ptrdiff_t rng2Stride,       \
             u8 * dstBase, ptrdiff_t dstStride)              \
{                                                            \
    internal::assertSupportedConfiguration();                \
    inRangeCheck(_size, srcBase, srcStride,                  \
                 rng1Base, rng1Stride, rng2Base, rng2Stride, \
                 dstBase, dstStride);                        \
}
#else
#define INRANGEFUNC(T)                                       \
void inRange(const Size2D &,                                 \
             const T *, ptrdiff_t,                           \
             const T *, ptrdiff_t,                           \
             const T *, ptrdiff_t,                           \
             u8 *, ptrdiff_t)                                \
{                                                            \
    internal::assertSupportedConfiguration();                \
}
#endif
    
    template <typename T, size_t N>
internal::ParamGenerator<T> ValuesIn(const T (&array)[N]) {
  return ValuesIn(array, array + N);
}
    
      // This field is mutable and needs to be reset before running the
  // test for the second time.
  TestResult result_;
    
    // Traps C++ exceptions escaping statement and reports them as test
// failures. Note that trapping SEH exceptions is not implemented here.
# if GTEST_HAS_EXCEPTIONS
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  try { \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } catch (const ::std::exception& gtest_exception) { \
    fprintf(\
        stderr, \
        '\n%s: Caught std::exception-derived exception escaping the ' \
        'death test statement. Exception message: %s\n', \
        ::testing::internal::FormatFileLocation(__FILE__, __LINE__).c_str(), \
        gtest_exception.what()); \
    fflush(stderr); \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  } catch (...) { \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  }
    
      // Join an existing circle.
  void join(linked_ptr_internal const* ptr)
      GTEST_LOCK_EXCLUDED_(g_linked_ptr_mutex) {
    MutexLock lock(&g_linked_ptr_mutex);
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15>
class ValueArray15 {
 public:
  ValueArray15(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15) : v1_(v1), v2_(v2),
      v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
      v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15) {}
    }
    
    //-------------------------------------------------------------------------------
//
//  ScriptSet - A bit set representing a set of scripts.
//
//              This class was originally used exclusively with script sets appearing
//              as part of the spoof check whole script confusable binary data. Its
//              use has since become more general, but the continued use to wrap
//              prebuilt binary data does constrain the design.
//
//-------------------------------------------------------------------------------
class U_I18N_API ScriptSet: public UMemory {
  public:
    ScriptSet();
    ScriptSet(const ScriptSet &other);
    ~ScriptSet();
    }
    
    #define LOW_A             ((UChar)0x0061)
#define LOW_B             ((UChar)0x0062)
#define LOW_C             ((UChar)0x0063)
#define LOW_D             ((UChar)0x0064)
#define LOW_E             ((UChar)0x0065)
#define LOW_F             ((UChar)0x0066)
#define LOW_G             ((UChar)0x0067)
#define LOW_H             ((UChar)0x0068)
#define LOW_I             ((UChar)0x0069)
#define LOW_J             ((UChar)0x006a)
#define LOW_K             ((UChar)0x006B)
#define LOW_L             ((UChar)0x006C)
#define LOW_M             ((UChar)0x006D)
#define LOW_N             ((UChar)0x006E)
#define LOW_O             ((UChar)0x006F)
#define LOW_P             ((UChar)0x0070)
#define LOW_Q             ((UChar)0x0071)
#define LOW_R             ((UChar)0x0072)
#define LOW_S             ((UChar)0x0073)
#define LOW_T             ((UChar)0x0074)
#define LOW_U             ((UChar)0x0075)
#define LOW_V             ((UChar)0x0076)
#define LOW_W             ((UChar)0x0077)
#define LOW_X             ((UChar)0x0078)
#define LOW_Y             ((UChar)0x0079)
#define LOW_Z             ((UChar)0x007A)
    
    U_NAMESPACE_END
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    U_NAMESPACE_END
    
    class PluralRules;
    
    int32_t StandardPlural::indexOrNegativeFromString(const char *keyword) {
    switch (*keyword++) {
    case 'f':
        if (uprv_strcmp(keyword, 'ew') == 0) {
            return FEW;
        }
        break;
    case 'm':
        if (uprv_strcmp(keyword, 'any') == 0) {
            return MANY;
        }
        break;
    case 'o':
        if (uprv_strcmp(keyword, 'ther') == 0) {
            return OTHER;
        } else if (uprv_strcmp(keyword, 'ne') == 0) {
            return ONE;
        }
        break;
    case 't':
        if (uprv_strcmp(keyword, 'wo') == 0) {
            return TWO;
        }
        break;
    case 'z':
        if (uprv_strcmp(keyword, 'ero') == 0) {
            return ZERO;
        }
        break;
    default:
        break;
    }
    return -1;
}
    
        /**
     * Sets U_ILLEGAL_ARGUMENT_ERROR if the keyword is not a plural form.
     *
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword
     */
    static int32_t indexFromString(const char *keyword, UErrorCode &errorCode);
    
    #include 'strmatch.h'
#include 'rbt_data.h'
#include 'util.h'
#include 'unicode/uniset.h'
#include 'unicode/utf16.h'
    
    /**
 * Construct a StringReplacer that sets the emits the given output
 * text and does not modify the cursor.
 * @param theOutput text that will replace input text when the
 * replace() method is called.  May contain stand-in characters
 * that represent nested replacers.
 * @param theData transliterator context object that translates
 * stand-in characters to UnicodeReplacer objects
 */
StringReplacer::StringReplacer(const UnicodeString& theOutput,
                               const TransliterationRuleData* theData) {
    output = theOutput;
    cursorPos = 0;
    hasCursor = FALSE;
    data = theData;
    isComplex = TRUE;
}
    
    #endif // D_DHT_RESPONSE_MESSAGE_H

    
      void moveBucketTail(const std::shared_ptr<DHTNode>& node);
    
      uint32_t temp32;
  uint64_t temp64;
  // time
  if (version == 2) {
    READ_CHECK(fp, &temp32, sizeof(temp32));
    serializedTime_.setTimeFromEpoch(ntohl(temp32));
    // 4bytes reserved
    readBytes(fp, buf, buf.size(), 4);
  }
  else {
    READ_CHECK(fp, &temp64, sizeof(temp64));
    serializedTime_.setTimeFromEpoch(ntoh64(temp64));
  }
    
    class DHTTaskQueueImpl : public DHTTaskQueue {
private:
  DHTTaskExecutor periodicTaskQueue1_;
    }
    
      virtual void preProcess() CXX11_OVERRIDE;
    
    #pragma once
    
    #include 'rocksdb/status.h'
    
    
    {}  // namespace rocksdb
    
      Status MapNewRegion();
  Status UnmapCurrentRegion();
  Status Msync();
    
      delete txn;
  // Clear snapshot from read options since it is no longer valid
  read_options.snapshot = nullptr;
  snapshot = nullptr;
    
    // Take a default ColumnFamilyOptions 'base_options' in addition to a
// map 'opts_map' of option name to option value to construct the new
// ColumnFamilyOptions 'new_options'.
//
// Below are the instructions of how to config some non-primitive-typed
// options in ColumnFOptions:
//
// * table_factory:
//   table_factory can be configured using our custom nested-option syntax.
//
//   {option_a=value_a; option_b=value_b; option_c=value_c; ... }
//
//   A nested option is enclosed by two curly braces, within which there are
//   multiple option assignments.  Each assignment is of the form
//   'variable_name=value;'.
//
//   Currently we support the following types of TableFactory:
//   - BlockBasedTableFactory:
//     Use name 'block_based_table_factory' to initialize table_factory with
//     BlockBasedTableFactory.  Its BlockBasedTableFactoryOptions can be
//     configured using the nested-option syntax.
//     [Example]:
//     * {'block_based_table_factory', '{block_cache=1M;block_size=4k;}'}
//       is equivalent to assigning table_factory with a BlockBasedTableFactory
//       that has 1M LRU block-cache with block size equals to 4k:
//         ColumnFamilyOptions cf_opt;
//         BlockBasedTableOptions blk_opt;
//         blk_opt.block_cache = NewLRUCache(1 * 1024 * 1024);
//         blk_opt.block_size = 4 * 1024;
//         cf_opt.table_factory.reset(NewBlockBasedTableFactory(blk_opt));
//   - PlainTableFactory:
//     Use name 'plain_table_factory' to initialize table_factory with
//     PlainTableFactory.  Its PlainTableFactoryOptions can be configured using
//     the nested-option syntax.
//     [Example]:
//     * {'plain_table_factory', '{user_key_len=66;bloom_bits_per_key=20;}'}
//
// * memtable_factory:
//   Use 'memtable' to config memtable_factory.  Here are the supported
//   memtable factories:
//   - SkipList:
//     Pass 'skip_list:<lookahead>' to config memtable to use SkipList,
//     or simply 'skip_list' to use the default SkipList.
//     [Example]:
//     * {'memtable', 'skip_list:5'} is equivalent to setting
//       memtable to SkipListFactory(5).
//   - PrefixHash:
//     Pass 'prfix_hash:<hash_bucket_count>' to config memtable
//     to use PrefixHash, or simply 'prefix_hash' to use the default
//     PrefixHash.
//     [Example]:
//     * {'memtable', 'prefix_hash:1000'} is equivalent to setting
//       memtable to NewHashSkipListRepFactory(hash_bucket_count).
//   - HashLinkedList:
//     Pass 'hash_linkedlist:<hash_bucket_count>' to config memtable
//     to use HashLinkedList, or simply 'hash_linkedlist' to use the default
//     HashLinkedList.
//     [Example]:
//     * {'memtable', 'hash_linkedlist:1000'} is equivalent to
//       setting memtable to NewHashLinkListRepFactory(1000).
//   - VectorRepFactory:
//     Pass 'vector:<count>' to config memtable to use VectorRepFactory,
//     or simply 'vector' to use the default Vector memtable.
//     [Example]:
//     * {'memtable', 'vector:1024'} is equivalent to setting memtable
//       to VectorRepFactory(1024).
//   - HashCuckooRepFactory:
//     Pass 'cuckoo:<write_buffer_size>' to use HashCuckooRepFactory with the
//     specified write buffer size, or simply 'cuckoo' to use the default
//     HashCuckooRepFactory.
//     [Example]:
//     * {'memtable', 'cuckoo:1024'} is equivalent to setting memtable
//       to NewHashCuckooRepFactory(1024).
//
//  * compression_opts:
//    Use 'compression_opts' to config compression_opts.  The value format
//    is of the form '<window_bits>:<level>:<strategy>:<max_dict_bytes>'.
//    [Example]:
//    * {'compression_opts', '4:5:6:7'} is equivalent to setting:
//        ColumnFamilyOptions cf_opt;
//        cf_opt.compression_opts.window_bits = 4;
//        cf_opt.compression_opts.level = 5;
//        cf_opt.compression_opts.strategy = 6;
//        cf_opt.compression_opts.max_dict_bytes = 7;
//
// @param base_options the default options of the output 'new_options'.
// @param opts_map an option name to value map for specifying how 'new_options'
//     should be set.
// @param new_options the resulting options based on 'base_options' with the
//     change specified in 'opts_map'.
// @param input_strings_escaped when set to true, each escaped characters
//     prefixed by '\' in the values of the opts_map will be further converted
//     back to the raw string before assigning to the associated options.
// @param ignore_unknown_options when set to true, unknown options are ignored
//     instead of resulting in an unknown-option error.
// @return Status::OK() on success.  Otherwise, a non-ok status indicating
//     error will be returned, and 'new_options' will be set to 'base_options'.
Status GetColumnFamilyOptionsFromMap(
    const ColumnFamilyOptions& base_options,
    const std::unordered_map<std::string, std::string>& opts_map,
    ColumnFamilyOptions* new_options, bool input_strings_escaped = false,
    bool ignore_unknown_options = false);
    
    struct UndumpOptions {
  // Database that we will load the dumped file into
  std::string db_path;
  // File location of the dumped file that will be loaded
  std::string dump_location;
  // Compact the db after loading the dumped file
  bool compact_db = false;
};
    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
    
      std::string ToString(bool exclude_zero_counters = false) const;
    
      /**
   * @brief Initialize the CAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   * @return If the initialization is successful.
   */
  virtual bool Init(const CANCardParameter &parameter) = 0;
    
    
    {  return 0;
}

    
      for (int32_t i = 0; i < *frame_num && i < MAX_CAN_RECV_FRAME_LEN; ++i) {
    CanFrame cf;
    cf.id = recv_frames_[i].id;
    cf.len = recv_frames_[i].len;
    std::memcpy(cf.data, recv_frames_[i].data, recv_frames_[i].len);
    frames->push_back(cf);
  }
    
      /**
   * @brief Stop the fake CAN client.
   */
  void Stop() override;
    
    
    {  int64_t send_time_ = 0;
  int64_t recv_time_ = 0;
  int32_t send_succ_count_ = 0;
  int32_t recv_succ_count_ = 0;
  int32_t send_err_count_ = 0;
  int32_t recv_err_count_ = 0;
  std::stringstream recv_ss_;
  CANCardParameter param_;
};
    
    
    {  frames.push_back(frame);
  num = 1;
  EXPECT_EQ(hermes_can.Start(), ErrorCode::OK);
  EXPECT_EQ(hermes_can.Send(frames, &num), ErrorCode::OK);
  frames.clear();
}
    
    
    {
    {    if (ret < 0) {
      AERROR << 'receive message failed, error code: ' << ret;
      return ErrorCode::CAN_CLIENT_ERROR_BASE;
    }
    if (recv_frames_[i].can_dlc != CANBUS_MESSAGE_LENGTH) {
      AERROR << 'recv_frames_[' << i
             << '].can_dlc = ' << recv_frames_[i].can_dlc
             << ', which is not equal to can message data length ('
             << CANBUS_MESSAGE_LENGTH << ').';
      return ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
    }
    cf.id = recv_frames_[i].can_id;
    cf.len = recv_frames_[i].can_dlc;
    std::memcpy(cf.data, recv_frames_[i].data, recv_frames_[i].can_dlc);
    frames->push_back(cf);
  }
  return ErrorCode::OK;
}
    
    /**
 * @class SocketCanClientRaw
 * @brief The class which defines a ESD CAN client which inherites CanClient.
 */
class SocketCanClientRaw : public CanClient {
 public:
  /**
   * @brief Initialize the ESD CAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   * @return If the initialization is successful.
   */
  bool Init(const CANCardParameter &parameter) override;
    }
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
      sender.AddMessage(1, &mpd);
  EXPECT_EQ(sender.Start(), common::ErrorCode::OK);
  EXPECT_TRUE(sender.IsRunning());
  EXPECT_TRUE(sender.enable_log());
    
    /**
 * @file message_manager.h
 * @brief The class of MessageManager
 */
#ifndef MODULES_DRIVERS_CANBUS_CAN_COMM_MESSAGE_MANAGER_H_
#define MODULES_DRIVERS_CANBUS_CAN_COMM_MESSAGE_MANAGER_H_
    
    void Byte::set_value(const uint8_t value, const int32_t start_pos,
                     const int32_t length) {
  if (start_pos > BYTE_LENGTH - 1 || start_pos < 0 || length < 1) {
    return;
  }
  int32_t end_pos = std::min(start_pos + length - 1, BYTE_LENGTH - 1);
  int32_t real_len = end_pos + 1 - start_pos;
  uint8_t current_value_low = 0x00;
  if (start_pos > 0) {
    current_value_low = *value_ & RANG_MASK_1_L[start_pos - 1];
  }
  uint8_t current_value_high = *value_ & RANG_MASK_0_L[end_pos];
  uint8_t middle_value = value & RANG_MASK_1_L[real_len - 1];
  middle_value = middle_value << start_pos;
  *value_ = current_value_high + middle_value + current_value_low;
}
    
    using apollo::common::adapter::AdapterConfig;
using apollo::common::adapter::AdapterManager;
using apollo::common::monitor::MonitorMessageItem;
using apollo::common::Status;
using apollo::common::ErrorCode;
using apollo::common::time::Clock;
using apollo::drivers::canbus::CanClientFactory;
using apollo::drivers::canbus::CanClient;
using apollo::drivers::canbus::CanReceiver;
using apollo::drivers::canbus::SensorCanbusConf;
    
    // DCT vertical pass
    
      bool Is420() const;
  bool Is444() const;
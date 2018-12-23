CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  llvm::SmallString<32> NameBuf(Name);
  cache_attributes_t Attrs = {
    CACHE_ATTRIBUTES_VERSION_2,
    CBs.keyHashCB,
    CBs.keyIsEqualCB,
    nullptr,
    CBs.keyDestroyCB,
    CBs.valueReleaseCB,
    nullptr,
    nullptr,
    CBs.UserData,
    CBs.valueRetainCB,
  };
    }
    
    #include 'swift/Basic/PrimitiveParsing.h'
#include 'llvm/ADT/SmallVector.h'
    
      if (n < 4)
    return string;
    
    
    {    // Must be 'const' or nothing.
    clang::Qualifiers quals = pointee.getQualifiers();
    bool isConst = quals.hasConst();
    quals.removeConst();
    if (quals.empty()) {
      if (auto record = pointee->getAs<clang::RecordType>()) {
        auto recordDecl = record->getDecl();
        if (recordDecl->hasAttr<clang::ObjCBridgeAttr>() ||
            recordDecl->hasAttr<clang::ObjCBridgeMutableAttr>() ||
            recordDecl->hasAttr<clang::ObjCBridgeRelatedAttr>() ||
            isKnownCFTypeName(typedefDecl->getName())) {
          return forRecord(isConst, record->getDecl());
        }
      } else if (pointee->isVoidType()) {
        if (typedefDecl->hasAttr<clang::ObjCBridgeAttr>() ||
            isKnownCFTypeName(typedefDecl->getName())) {
          return isConst ? forConstVoid() : forVoid();
        }
      }
    }
  }
    
      bool isConst() const { return IsConst; }
    
    
    {
    {  default:
    // FIXME: Handle local contexts.
    return node;
  }
}

    
    #ifndef BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
#define BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
    
    #include <univalue.h>
    
    const int CURVE_B = 4;
#  elif EXHAUSTIVE_TEST_ORDER == 13
const secp256k1_ge secp256k1_ge_const_g = SECP256K1_GE_CONST(
    0xedc60018, 0xa51a786b, 0x2ea91f4d, 0x4c9416c0,
    0x9de54c3b, 0xa1316554, 0x6cf4345c, 0x7277ef15,
    0x54cb1b6b, 0xdc8c1273, 0x087844ea, 0x43f4603e,
    0x0eaf9a43, 0xf6effe55, 0x939f806d, 0x37adf8ac
);
const int CURVE_B = 2;
#  else
#    error No known generator for the specified exhaustive test group order.
#  endif
#else
/** Generator for secp256k1, value 'g' defined in
 *  'Standards for Efficient Cryptography' (SEC2) 2.7.1.
 */
static const secp256k1_ge secp256k1_ge_const_g = SECP256K1_GE_CONST(
    0x79BE667EUL, 0xF9DCBBACUL, 0x55A06295UL, 0xCE870B07UL,
    0x029BFCDBUL, 0x2DCE28D9UL, 0x59F2815BUL, 0x16F81798UL,
    0x483ADA77UL, 0x26A3C465UL, 0x5DA4FBFCUL, 0x0E1108A8UL,
    0xFD17B448UL, 0xA6855419UL, 0x9C47D08FUL, 0xFB10D4B8UL
);
    
    int secp256k1_ecdh(const secp256k1_context* ctx, unsigned char *result, const secp256k1_pubkey *point, const unsigned char *scalar) {
    int ret = 0;
    int overflow = 0;
    secp256k1_gej res;
    secp256k1_ge pt;
    secp256k1_scalar s;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(result != NULL);
    ARG_CHECK(point != NULL);
    ARG_CHECK(scalar != NULL);
    }
    
        s_one[31] = 1;
    /* Check against pubkey creation when the basepoint is the generator */
    for (i = 0; i < 100; ++i) {
        secp256k1_sha256_t sha;
        unsigned char s_b32[32];
        unsigned char output_ecdh[32];
        unsigned char output_ser[32];
        unsigned char point_ser[33];
        size_t point_ser_len = sizeof(point_ser);
        secp256k1_scalar s;
    }
    
    /* Given a BlockIndex with the provided nbits,
 * verify that the expected difficulty results.
 */
static void TestDifficulty(uint32_t nbits, double expected_difficulty)
{
    CBlockIndex* block_index = CreateBlockIndexWithNbits(nbits);
    double difficulty = GetDifficulty(block_index);
    delete block_index;
    }
    
    
    {}  // namespace grpc

    
      // Fixed size offsets for field ID start positions during encoding.  Field
  // data immediately follows.
  enum FieldIdOffset {
    kTraceIdOffset = kVersionIdSize,
    kSpanIdOffset = kTraceIdOffset + kFieldIdSize + kTraceIdSize,
    kTraceOptionsOffset = kSpanIdOffset + kFieldIdSize + kSpanIdSize,
  };
    
      CensusServerCallData()
      : gc_(nullptr),
        auth_context_(nullptr),
        recv_initial_metadata_(nullptr),
        initial_on_done_recv_initial_metadata_(nullptr),
        initial_on_done_recv_message_(nullptr),
        recv_message_(nullptr),
        recv_message_count_(0),
        sent_message_count_(0) {
    memset(&census_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&path_, 0, sizeof(grpc_slice));
    memset(&on_done_recv_initial_metadata_, 0, sizeof(grpc_closure));
    memset(&on_done_recv_message_, 0, sizeof(grpc_closure));
  }
    
    struct Options;
struct FileMetaData;
    
    // If true, do not destroy the existing database.  If you set this
// flag and also specify a benchmark that wants a fresh database, that
// benchmark will fail.
static bool FLAGS_use_existing_db = false;
    
      iter->SeekToFirst();
  ASSERT_EQ(IterStatus(iter), 'a->va');
  iter->Next();
  ASSERT_EQ(IterStatus(iter), '(invalid)');
  iter->SeekToFirst();
  ASSERT_EQ(IterStatus(iter), 'a->va');
  iter->Prev();
  ASSERT_EQ(IterStatus(iter), '(invalid)');
    
    namespace leveldb {
    }
    
      // Read the next record into *record.  Returns true if read
  // successfully, false if we hit end of the input.  May use
  // '*scratch' as temporary storage.  The contents filled in *record
  // will only be valid until the next mutating operation on this
  // reader or the next mutation to *scratch.
  bool ReadRecord(Slice* record, std::string* scratch);
    
      // Record metadata for testing initial offset functionality
  static size_t initial_offset_record_sizes_[];
  static uint64_t initial_offset_last_record_offsets_[];
  static int num_initial_offset_records_;
    
      // Fragment the record if necessary and emit it.  Note that if slice
  // is empty, we still want to iterate once to emit a single
  // zero-length record
  Status s;
  bool begin = true;
  do {
    const int leftover = kBlockSize - block_offset_;
    assert(leftover >= 0);
    if (leftover < kHeaderSize) {
      // Switch to a new block
      if (leftover > 0) {
        // Fill the trailer (literal below relies on kHeaderSize being 7)
        assert(kHeaderSize == 7);
        dest_->Append(Slice('\x00\x00\x00\x00\x00\x00', leftover));
      }
      block_offset_ = 0;
    }
    }
    
    
    {  // Force creation of multiple memtables by reducing the write buffer size.
  Options opt;
  opt.reuse_logs = true;
  opt.write_buffer_size = (kNum*100) / 2;
  Open(&opt);
  ASSERT_LE(2, NumTables());
  ASSERT_EQ(1, NumLogs());
  ASSERT_NE(old_log_file, FirstLogFile()) << 'must not reuse log';
  for (int i = 0; i < kNum; i++) {
    char buf[100];
    snprintf(buf, sizeof(buf), '%050d', i);
    ASSERT_EQ(buf, Get(buf));
  }
}
    
      std::string const dbname_;
  Env* const env_;
  InternalKeyComparator const icmp_;
  InternalFilterPolicy const ipolicy_;
  Options const options_;
  bool owns_info_log_;
  bool owns_cache_;
  TableCache* table_cache_;
  VersionEdit edit_;
    
    
    {  SkipList<Key, Comparator>::Iterator iter(&list);
  ASSERT_TRUE(!iter.Valid());
  iter.SeekToFirst();
  ASSERT_TRUE(!iter.Valid());
  iter.Seek(100);
  ASSERT_TRUE(!iter.Valid());
  iter.SeekToLast();
  ASSERT_TRUE(!iter.Valid());
}
    
      for (auto& t : workers) t.join();
  if (failed) throw std::runtime_error('parallel::map failed');
    
    
    {
    {}}
    
    #undef HEADER_ARG
#undef HEADER_NONE
    
      {}
    
    #include 'hphp/runtime/base/config.h'
    
    #include <folly/ScopeGuard.h>
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    #include 'hphp/runtime/base/array-init.h'
    
      CLASSNAME_IS('OutputFile');
  // overriding ResourceData
  const String& o_getClassNameHook() const override { return classnameof(); }
    
      schedule_ = std::make_unique<Schedule>();
  std::map<std::string, QueryPerformance>().swap(performance_);
  std::map<std::string, FileCategories>().swap(files_);
  std::map<std::string, std::string>().swap(hash_);
  valid_ = false;
  loaded_ = false;
  is_first_time_refresh = true;
    
    
    {  for (const auto& table : tables) {
    set_tables.insert(table.substr(kDatabaseKeyPrefix.size()));
  }
  return set_tables;
}
    
    #include <osquery/config/config.h>
#include <osquery/config/parsers/kafka_topics.h>
#include <osquery/registry_factory.h>
    
    #pragma once
    
    namespace rj = rapidjson;
    
    
    {} // namespace osquery

    
        bool is_custom = name.find('custom_') == 0;
    if (!is_custom && Flag::getType(name).empty()) {
      LOG(WARNING) << 'Cannot set unknown or invalid flag: ' << name;
      continue;
    }
    
    void ClusterListStatus600::Parse(const std::uint8_t* bytes, int32_t length,
                                 ContiRadar* conti_radar) const {
  auto status = conti_radar->mutable_cluster_list_status();
  status->set_near(near(bytes, length));
  status->set_far(far(bytes, length));
  status->set_meas_counter(meas_counter(bytes, length));
  status->set_interface_version(interface_version(bytes, length));
  auto counter = status->near() + status->far();
  conti_radar->mutable_contiobs()->Reserve(counter);
}
    
    #include 'modules/common/time/time.h'
#include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/radar/conti_radar/protocol/const_vars.h'
    
    namespace apollo {
namespace localization {
namespace msf {
    }
    }
    }
    
    namespace apollo {
namespace planning {
    }
    }
    
    namespace apollo {
namespace planning {
    }
    }
    
    TEST_F(SpeedLimitTest, SimpleSpeedLimitCreation) {
  SpeedLimit simple_speed_limit;
  EXPECT_TRUE(simple_speed_limit.speed_limit_points().empty());
  EXPECT_EQ(speed_limit_.speed_limit_points().size(), 100);
}
    
    const PolynomialXd& Spline1dSeg::Derivative() const { return derivative_; }

        
        TEST(AutoCompactTest, ReadHalf) {
  DoReads(kCount/2);
}
    
    #include 'leveldb/status.h'
    
    namespace leveldb {
    }
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
    namespace leveldb {
namespace log {
    }
    }
    
          case kBadRecord:
        if (in_fragmented_record) {
          ReportCorruption(scratch->size(), 'error in middle of record');
          in_fragmented_record = false;
          scratch->clear();
        }
        break;
    
    namespace leveldb {
namespace log {
    }
    }
    
    int MemTable::KeyComparator::operator()(const char* aptr, const char* bptr)
    const {
  // Internal keys are encoded as length-prefixed strings.
  Slice a = GetLengthPrefixedSlice(aptr);
  Slice b = GetLengthPrefixedSlice(bptr);
  return comparator.Compare(a, b);
}
    
      // Add an entry into memtable that maps key to value at the
  // specified sequence number and with the specified type.
  // Typically value will be empty if type==kTypeDeletion.
  void Add(SequenceNumber seq, ValueType type,
           const Slice& key,
           const Slice& value);
    
    TEST(RecoveryTest, LargeManifestCompacted) {
  if (!CanAppend()) {
    fprintf(stderr, 'skipping test because env does not support appending\n');
    return;
  }
  ASSERT_OK(Put('foo', 'bar'));
  Close();
  std::string old_manifest = ManifestFileName();
    }
    
    extern const std::string kFeatureVectorsRootKey;
    
    #pragma once
    
      ASSERT_TRUE(data.doc().HasMember('events'));
  ASSERT_TRUE(data.doc()['events'].HasMember('environment_variables'));
  ASSERT_TRUE(data.doc()['events']['environment_variables'].IsArray());
  for (const auto& var :
       data.doc()['events']['environment_variables'].GetArray()) {
    std::string value = var.GetString();
    EXPECT_TRUE(value == 'foo' || value == 'bar');
  }
    
      update['awesome'] = R'raw({
    'options': {
      'custom_nested_json': 
        {'foo':1,'bar':'baz'}
    }
  })raw';
  auto s = c.update(update);
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    bool PlatformProcess::operator==(const PlatformProcess& process) const {
  return (nativeHandle() == process.nativeHandle());
}
    
    TEST_F(QueryTests, test_get_query_results) {
  // Grab an expected set of query data and add it as the previous result.
  auto encoded_qd = getSerializedQueryDataJSON();
  auto query = getOsqueryScheduledQuery();
  auto status = setDatabaseValue(kQueries, 'foobar', encoded_qd.first);
  EXPECT_TRUE(status.ok());
    }
    
    #include 'osquery/events/linux/auditdnetlink.h'
#include 'osquery/tests/test_util.h'
    
    #define GUETZLI_LOG(stats, ...)                                    \
  do {                                                             \
    char debug_string[1024];                                       \
    int res = snprintf(debug_string, sizeof(debug_string),         \
                       __VA_ARGS__);                               \
    assert(res > 0 && 'expected successful printing');             \
    (void)res;                                                     \
    debug_string[sizeof(debug_string) - 1] = '\0';                 \
    ::guetzli::PrintDebug(                      \
         stats, std::string(debug_string));        \
  } while (0)
#define GUETZLI_LOG_QUANT(stats, q)                    \
  for (int y = 0; y < 8; ++y) {                        \
    for (int c = 0; c < 3; ++c) {                      \
      for (int x = 0; x < 8; ++x)                      \
        GUETZLI_LOG(stats, ' %2d', (q)[c][8 * y + x]); \
      GUETZLI_LOG(stats, '   ');                       \
    }                                                  \
    GUETZLI_LOG(stats, '\n');                          \
  }
    
      void JumpToByteBoundary() {
    while (put_bits <= 56) {
      int c = (put_buffer >> 56) & 0xff;
      EmitByte(c);
      put_buffer <<= 8;
      put_bits += 8;
    }
    if (put_bits < 64) {
      int padmask = 0xff >> (64 - put_bits);
      int c = ((put_buffer >> 56) & ~padmask) | padmask;
      EmitByte(c);
    }
    put_buffer = 0;
    put_bits = 64;
  }
    
    bool JPEGData::Is420() const {
  return (components.size() == 3 &&
          max_h_samp_factor == 2 &&
          max_v_samp_factor == 2 &&
          components[0].h_samp_factor == 2 &&
          components[0].v_samp_factor == 2 &&
          components[1].h_samp_factor == 1 &&
          components[1].v_samp_factor == 1 &&
          components[2].h_samp_factor == 1 &&
          components[2].v_samp_factor == 1);
}
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
    #include 'guetzli/jpeg_data.h'
    
      /**
   * @brief Start the CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  virtual apollo::common::ErrorCode Start() = 0;
    
    
    {  SocketCanClientRaw socket_can_client;
  EXPECT_TRUE(socket_can_client.Init(param));
  EXPECT_EQ(socket_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(socket_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(socket_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(socket_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  socket_can_client.Stop();
}
    
    /**
 * @struct CheckIdArg
 *
 * @brief this struct include data for check ids.
 */
struct CheckIdArg {
  int64_t period = 0;
  int64_t real_period = 0;
  int64_t last_time = 0;
  int32_t error_count = 0;
};
    
    #ifndef MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
#define MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
    
    #include 'modules/drivers/canbus/sensor_gflags.h'
    
            return old_value;
#else // defined(BOOST_ATOMIC_DETAIL_NO_ASM_RAX_RDX_PAIRS)
        uint64_t const* p_value = (uint64_t const*)&v;
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %[dest], %%rax\n\t'
            'movq 8+%[dest], %%rdx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg16b %[dest]\n\t'
            'jne 1b\n\t'
            : '=&A' (v), [dest] '+o' (storage)
            : 'b' (p_value[0]), 'c' (p_value[1])
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq 0(%[dest]), %%rax\n\t'
            'movq 8(%[dest]), %%rdx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg16b 0(%[dest])\n\t'
            'jne 1b\n\t'
            : '=&A' (v)
            : 'b' (p_value[0]), 'c' (p_value[1]), [dest] 'r' (&storage)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
#endif // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
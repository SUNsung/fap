
        
        
    {REGISTER_INTERNAL(FeatureVectorsConfigParserPlugin,
                  'config_parser',
                  'feature_vectors');
} // namespace osquery

    
    
    { private:
  static const std::string kLoggerKey;
};
    
    TEST_F(DecoratorsConfigParserPluginTests, test_decorators_list) {
  // Assume the decorators are disabled.
  Config::get().update(config_data_);
  auto parser = Config::getParser('decorators');
  EXPECT_NE(parser, nullptr);
    }
    
    
    {    // Construct a config map, the typical output from `Config::genConfig`.
    config_data_['awesome'] = content_;
    Config::get().reset();
  }
    
    
    {
    {  c.reset();
}
}

    
    class TLSConfigPlugin;
    
    void InMemoryDatabase::close() {
  VLOG(1) << 'Closing db... ';
  debug_only::verifyTrue(is_open_, 'database is not open');
  is_open_ = false;
  auto status = destroyDB();
  debug_only::verifyTrue(status.isValue(),
                         'InMemoryDatabase::destroyDB couldn't fail');
}
    
    
    {  EXPECT_TRUE(db->putString(kPersistentSettings, 'test_key_string', 'string'));
  auto string_value = db->getString(kPersistentSettings, 'test_key_string');
  EXPECT_TRUE(string_value);
  EXPECT_EQ(string_value.take(), 'string');
}
    
    TEST_F(RocksdbDatabaseTest, test_unknown_key) {
  auto db = std::make_unique<RocksdbDatabase>('test', path_);
  ASSERT_TRUE(db->open());
  EXPECT_TRUE(db->putInt32(kPersistentSettings, 'key', 12));
  auto result = db->getInt32(kPersistentSettings, 'key_');
  EXPECT_FALSE(result);
  EXPECT_EQ(result.takeError(), DatabaseError::KeyNotFound);
}
    
    BENCHMARK_PARAM(BENCHFUN(pushBack), 16)
BENCHMARK_PARAM(BENCHFUN(pushBack), 128)
BENCHMARK_PARAM(BENCHFUN(pushBack), 1024)
BENCHMARK_PARAM(BENCHFUN(pushBack), 10240)
BENCHMARK_PARAM(BENCHFUN(pushBack), 102400)
BENCHMARK_PARAM(BENCHFUN(pushBack), 1024000)

    
    BENCHMARK_RELATIVE(sformat_long_string_unsafe, iters) {
  BenchmarkSuspender suspender;
  auto const& longString = getLongString();
  while (iters--) {
    std::string out;
    suspender.dismissing([&] { out = sformat(longString); });
  }
}
    
      for (unsigned i = 0; i < iter; ++i) {
    FB_LOG_EVERY_MS(INFO, -1) << 'every -1ms';
  }
    
    template <class UIntType, UIntType a, UIntType c, UIntType m>
struct StateSize<std::linear_congruential_engine<UIntType, a, c, m>> {
  // From the standard [rand.eng.lcong], this is ceil(log2(m) / 32) + 3,
  // which is the same as ceil(ceil(log2(m) / 32) + 3, and
  // ceil(log2(m)) <= std::numeric_limits<UIntType>::digits
  using type = std::integral_constant<
      size_t,
      (std::numeric_limits<UIntType>::digits + 31) / 32 + 3>;
};
    
    /*
 * Decode a single unicode code point from UTF-8 byte sequence.
 */
char32_t utf8ToCodePoint(
    const unsigned char*& p,
    const unsigned char* const e,
    bool skipOnError);
    
      // Try converting fractional hours
  tv = to<struct timeval>(duration<double, std::ratio<3600>>{3.456789});
  EXPECT_EQ(12444, tv.tv_sec);
  // The usec field is generally off-by-one due to
  // floating point rounding error
  EXPECT_NEAR(440400, tv.tv_usec, 1);
  tv = to<struct timeval>(duration<double, std::ratio<3600>>{-3.456789});
  EXPECT_EQ(-12445, tv.tv_sec);
  EXPECT_NEAR(559600, tv.tv_usec, 1);
    
    
    {
    {
    {
    {} // namespace detail
} // namespace compression
} // namespace io
} // namespace folly

    
    template <class T, size_t kNumSlots = 64>
class CoreCachedWeakPtr {
 public:
  explicit CoreCachedWeakPtr(const CoreCachedSharedPtr<T, kNumSlots>& p) {
    for (auto slot : folly::enumerate(slots_)) {
      *slot = p.slots_[slot.index];
    }
  }
    }
    
    #include <cstdint>
#include <limits>
#include <random>
#include <set>
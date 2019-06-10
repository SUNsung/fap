
        
        void CacheImpl::setAndRetain(void *Key, void *Value, size_t Cost) {
  DefaultCache &DCache = *static_cast<DefaultCache*>(Impl);
  llvm::sys::ScopedLock L(DCache.Mux);
    }
    
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
    
    
    {}%
    
    public:
  static CFPointeeInfo classifyTypedef(const clang::TypedefNameDecl *decl);
    
    static int digit_index(char value) {
  if (value >= 'a' && value <= 'z')
    return value - 'a';
  if (value >= 'A' && value <= 'J')
    return value - 'A' + 26;
  return -1;
}
    
      if (!Files.empty() && !hasAnyPrimaryFiles) {
    Optional<std::vector<std::string>> userSuppliedNamesOrErr =
        OutputFilesComputer::getOutputFilenamesFromCommandLineOrFilelist(Args,
                                                                         Diags);
    if (userSuppliedNamesOrErr && userSuppliedNamesOrErr->size() == 1)
      result.setIsSingleThreadedWMO(true);
  }
    
    int main(int argc, char** argv) { return leveldb::test::RunAllTests(); }

    
    
    {    fprintf(stderr,
            'expected=%d..%d; got=%d; bad_keys=%d; bad_values=%d; missed=%d\n',
            min_expected, max_expected, correct, bad_keys, bad_values, missed);
    ASSERT_LE(min_expected, correct);
    ASSERT_GE(max_expected, correct);
  }
    
      // Offset at which to start looking for the first record to return
  uint64_t const initial_offset_;
    
      // Given a key, return an approximate byte offset in the file where
  // the data for that key begins (or would begin if the key were
  // present in the file).  The returned value is in terms of file
  // bytes, and so includes effects like compression of the underlying data.
  // E.g., the approximate offset of the last key in the table will
  // be close to the file length.
  uint64_t ApproximateOffsetOf(const Slice& key) const;
    
      double FalsePositiveRate() {
    char buffer[sizeof(int)];
    int result = 0;
    for (int i = 0; i < 10000; i++) {
      if (Matches(Key(i + 1000000000, buffer))) {
        result++;
      }
    }
    return result / 10000.0;
  }
    
    TEST(CacheTest, EntriesArePinned) {
  Insert(100, 101);
  Cache::Handle* h1 = cache_->Lookup(EncodeKey(100));
  ASSERT_EQ(101, DecodeValue(cache_->Value(h1)));
    }
    
    SEXP XGBoosterBoostOneIter_R(SEXP handle, SEXP dtrain, SEXP grad, SEXP hess) {
  R_API_BEGIN();
  CHECK_EQ(length(grad), length(hess))
      << 'gradient and hess must have same length';
  int len = length(grad);
  std::vector<float> tgrad(len), thess(len);
  #pragma omp parallel for schedule(static)
  for (int j = 0; j < len; ++j) {
    tgrad[j] = REAL(grad)[j];
    thess[j] = REAL(hess)[j];
  }
  CHECK_CALL(XGBoosterBoostOneIter(R_ExternalPtrAddr(handle),
                                 R_ExternalPtrAddr(dtrain),
                                 BeginPtr(tgrad), BeginPtr(thess),
                                 len));
  R_API_END();
  return R_NilValue;
}
    
    template<typename DType>
inline void CompressArray<DType>::Write(dmlc::Stream* fo) {
  encoded_chunks_.clear();
  encoded_chunks_.push_back(0);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    encoded_chunks_.push_back(encoded_chunks_.back() + out_buffer_[i].length());
  }
  fo->Write(raw_chunks_);
  fo->Write(encoded_chunks_);
  for (const std::string& buf : out_buffer_) {
    fo->Write(dmlc::BeginPtr(buf), buf.length());
  }
}
    
        // Remove the assertion on batch.index, which can be null in the case that the data in this
    // batch is entirely sparse. Although it's true that this indicates a likely issue with the
    // user's data workflows, passing XGBoost entirely sparse data should not cause it to fail.
    // See https://github.com/dmlc/xgboost/issues/1827 for complete detail.
    // CHECK(batch.index != nullptr);
    
      double double2[2] = {1.0, 2.0};
  EXPECT_EQ(info.GetRoot(1), 0)
    << 'When no root_index is given, was expecting default value 0';
  info.SetInfo('root_index', double2, xgboost::kDouble, 2);
  EXPECT_EQ(info.GetRoot(1), 2.0f);
    
    #include '../helpers.h'
    
      common::ConfigParser cp(argv[1]);
  auto cfg = cp.Parse();
  cfg.emplace_back('seed', '0');
    
    
    {  // 7. Ill-formed data should throw exception
  for (const char* str : {'data = C:\\My Documents\\cat.csv', 'cow=',
                          'C# = 100%', '= woof ',
                          'interaction_constraints = [[0, 2], [1]]',
                          'data = \'train.txt#cache',
                          'data = \'train.txt#cache', 'foo = \'bar\''}) {
    ASSERT_THROW(parser.ParseKeyValuePair(str, &key, &value), dmlc::Error);
  }
}
    
    #include <dmlc/io.h>
#include <rabit/rabit.h>
#include <string>
#include <cstring>
    
    #endif
    
    U_NAMESPACE_END
    
    int32_t 
SmallIntFormatter::estimateDigitCount(
        int32_t positiveValue, const IntDigitCountRange &range) {
    if (positiveValue >= gMaxFastInt) {
        return range.getMax();
    }
    return range.pin(gDigitCount[positiveValue]);
}
    
    #endif   // #if !UCONFIG_NO_FORMATTING
#endif   // SMPDTFST_H

    
    const char *StandardPlural::getKeyword(Form p) {
    U_ASSERT(ZERO <= p && p < COUNT);
    return gKeywords[p];
}
    
        /**
     * Union the set of all characters that may output by this object
     * into the given set.
     * @param toUnionTo the set into which to union the output characters
     */
    virtual void addReplacementSetTo(UnicodeSet& toUnionTo) const;
    
    namespace {
const int MAX_RETRY = 2;
} // namespace
    
      virtual ~DHTResponseMessage();
    
      DHTTaskQueue* taskQueue_;
    
    
    {  const int clen = bittorrent::getCompactLength(family_);
  // nodes
  for (std::vector<std::shared_ptr<DHTNode>>::const_iterator i = nodes_.begin(),
                                                             eoi = nodes_.end();
       i != eoi; ++i) {
    const std::shared_ptr<DHTNode>& node = *i;
    // Write IP address + port in Compact IP-address/port info form.
    unsigned char compactPeer[COMPACT_LEN_IPV6];
    int compactlen = bittorrent::packcompact(compactPeer, node->getIPAddress(),
                                             node->getPort());
    if (compactlen != clen) {
      memset(compactPeer, 0, clen);
    }
    uint8_t clen1 = clen;
    // 1byte compact peer format length
    WRITE_CHECK(fp, &clen1, sizeof(clen1));
    // 7bytes reserved
    WRITE_CHECK(fp, zero, 7);
    // clen bytes compact peer
    WRITE_CHECK(fp, compactPeer, static_cast<size_t>(clen));
    // 24-clen bytes reserved
    WRITE_CHECK(fp, zero, static_cast<size_t>(24 - clen));
    // 20bytes: node ID
    WRITE_CHECK(fp, node->getID(), DHT_ID_LENGTH);
    // 4bytes reserved
    WRITE_CHECK(fp, zero, 4);
  }
  if (fp.close() == EOF) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  if (!File(filenameTemp).renameTo(filename)) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  A2_LOG_INFO('DHT routing table was saved successfully');
}
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    class DHTTask {
public:
  virtual ~DHTTask() = default;
    }
    
    public:
  DHTTaskExecutor(int numConcurrent);
    
    class DHTTask;
    
    bool DHTTokenTracker::validateToken(const std::string& token,
                                    const unsigned char* infoHash,
                                    const std::string& ipaddr,
                                    uint16_t port) const
{
  for (auto& elem : secret_) {
    if (generateToken(infoHash, ipaddr, port, elem) == token) {
      return true;
    }
  }
  return false;
}
    
    class DHTTokenUpdateCommand : public TimeBasedCommand {
private:
  DHTTokenTracker* tokenTracker_;
    }
    
    std::string DHTUnknownMessage::toString() const
{
  size_t sampleLength = 8;
  if (length_ < sampleLength) {
    sampleLength = length_;
  }
  return fmt('dht unknown Remote:%s(%u) length=%lu, first 8 bytes(hex)=%s',
             ipaddr_.c_str(), port_, static_cast<unsigned long>(length_),
             util::toHex(data_, sampleLength).c_str());
}
    
    #include <vector>
    
      Byte t1(bytes + 3);
  int32_t t = t1.get_byte(4, 4);
    
    TEST_F(SpeedLimitTest, GetSpeedLimitByS) {
  EXPECT_EQ(speed_limit_.speed_limit_points().size(), 100);
  double s = 0.0;
  const double ds = 0.01;
  while (s < 99.0) {
    double v_limit = speed_limit_.GetSpeedLimitByS(s);
    }
    }
    
    // config detail: {'name': 'manual_input', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 7,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Brakerpt6c::manual_input(const std::uint8_t* bytes,
                                int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 8);
    }
    
    
    {
    {
    {
    {  Headlight_rpt_77::Commanded_valueType ret =
      static_cast<Headlight_rpt_77::Commanded_valueType>(x);
  return ret;
}
}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
    // config detail: {'name': 'latitude_seconds', 'offset': 0.0, 'precision': 1.0,
// 'len': 8, 'is_signed_var': True, 'physical_range': '[-128|127]', 'bit': 23,
// 'type': 'int', 'order': 'motorola', 'physical_unit': 'sec'}
int Latlonheadingrpt82::latitude_seconds(const std::uint8_t* bytes,
                                         int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);
    }
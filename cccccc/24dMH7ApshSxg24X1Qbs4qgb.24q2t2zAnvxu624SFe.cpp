
        
            guarantee(start <= finish);
    for (int i = start; i < finish; ++i) {
        cond_t dummy_interruptor;
        scoped_ptr_t<txn_t> txn;
        {
            scoped_ptr_t<real_superblock_t> superblock;
            write_token_t token;
            store->new_write_token(&token);
            store->acquire_superblock_for_write(
                1, write_durability_t::SOFT,
                &token, &txn, &superblock, &dummy_interruptor);
            buf_lock_t sindex_block(
                superblock->expose_buf(),
                superblock->get_sindex_block_id(),
                access_t::write);
    }
    }
    
    #define EXPECT_FATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ALL_THREADS, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    // The 'Types' template argument below must have spaces around it
// since some compilers may choke on '>>' when passing a template
// instance (e.g. Types<int>)
# define TYPED_TEST_CASE(CaseName, Types) \
  typedef ::testing::internal::TypeList< Types >::type \
      GTEST_TYPE_PARAMS_(CaseName)
    
    template <int k>
struct SameSizeTuplePrefixComparator<k, k> {
  template <class Tuple1, class Tuple2>
  static bool Eq(const Tuple1& t1, const Tuple2& t2) {
    return SameSizeTuplePrefixComparator<k - 1, k - 1>::Eq(t1, t2) &&
        ::std::tr1::get<k - 1>(t1) == ::std::tr1::get<k - 1>(t2);
  }
};
    
        void Shutdown() {
      gpr_log(GPR_INFO, '%s about to shutdown', type_.c_str());
      server_->Shutdown(grpc_timeout_milliseconds_to_deadline(0));
      thread_->join();
      gpr_log(GPR_INFO, '%s shutdown completed', type_.c_str());
    }
    
    
    {  thr.join();
}
    
    /* Tries to issue one async connection, then schedules both an IOCP
   notification request for the connection, and one timeout alert. */
static void tcp_connect(grpc_closure* on_done, grpc_endpoint** endpoint,
                        grpc_pollset_set* interested_parties,
                        const grpc_channel_args* channel_args,
                        const grpc_resolved_address* addr,
                        grpc_millis deadline) {
  SOCKET sock = INVALID_SOCKET;
  BOOL success;
  int status;
  grpc_resolved_address addr6_v4mapped;
  grpc_resolved_address local_address;
  async_connect* ac;
  grpc_winsocket* socket = NULL;
  LPFN_CONNECTEX ConnectEx;
  GUID guid = WSAID_CONNECTEX;
  DWORD ioctl_num_bytes;
  grpc_winsocket_callback_info* info;
  grpc_error* error = GRPC_ERROR_NONE;
    }
    
    static inline std::shared_ptr<::grpc::Channel> CreateChannel(
    const grpc::string& target,
    const std::shared_ptr<ChannelCredentials>& creds) {
  return ::grpc_impl::CreateChannelImpl(target, creds);
}
    
    #endif  // GRPCPP_SUPPORT_CHANNEL_ARGUMENTS_H

    
      request.set_message('Hello');
  EXPECT_TRUE(stream->Write(request));
  EXPECT_TRUE(stream->Read(&response));
  EXPECT_EQ(response.message(), request.message());
    
    
    { protected:
  std::unique_ptr<Server> server_;
  std::unique_ptr<grpc::testing::EchoTestService::Stub> stub_;
  std::unique_ptr<ProtoReflectionDescriptorDatabase> desc_db_;
  std::unique_ptr<protobuf::DescriptorPool> desc_pool_;
  std::unordered_set<string> known_files_;
  std::unordered_set<string> known_types_;
  const protobuf::DescriptorPool* ref_desc_pool_;
  int port_;
  reflection::ProtoServerReflectionPlugin plugin_;
};
    
    
    { private:
  std::string dbname_;
  Cache* tiny_cache_;
  Options options_;
  DB* db_;
};
    
      // Return the ith key
  Slice Key(int i, std::string* storage) {
    char buf[100];
    snprintf(buf, sizeof(buf), '%016d', i);
    storage->assign(buf, strlen(buf));
    return Slice(*storage);
  }
    
      void GetRange2(const std::vector<FileMetaData*>& inputs1,
                 const std::vector<FileMetaData*>& inputs2,
                 InternalKey* smallest, InternalKey* largest);
    
      // Given a key, return an approximate byte offset in the file where
  // the data for that key begins (or would begin if the key were
  // present in the file).  The returned value is in terms of file
  // bytes, and so includes effects like compression of the underlying data.
  // E.g., the approximate offset of the last key in the table will
  // be close to the file length.
  uint64_t ApproximateOffsetOf(const Slice& key) const;
    
    class FilterBlockReader {
 public:
  // REQUIRES: 'contents' and *policy must stay live while *this is live.
  FilterBlockReader(const FilterPolicy* policy, const Slice& contents);
  bool KeyMayMatch(uint64_t block_offset, const Slice& key);
    }
    
    Arena::Arena()
    : alloc_ptr_(nullptr), alloc_bytes_remaining_(0), memory_usage_(0) {}
    
    
    {    static void Run(void* arg) {
      Callback* callback = reinterpret_cast<Callback*>(arg);
      int current_id = callback->last_id_ptr_->load(std::memory_order_relaxed);
      ASSERT_EQ(callback->id_ - 1, current_id);
      callback->last_id_ptr_->store(callback->id_, std::memory_order_relaxed);
    }
  };
    
    class BSONObj;
class CappedInsertNotifier;
struct CappedInsertNotifierData;
class Collection;
class PlanExecutor;
class PlanStage;
class PlanYieldPolicy;
class RecordId;
struct PlanStageStats;
class WorkingSet;
    
            // Begin running the count
        while (numCounted < 2) {
            countState = count.work(&wsid);
            if (PlanStage::ADVANCED == countState)
                numCounted++;
        }
    
        pat     = RegexPattern::compile(regex, 0, pe, status);
    matcher = pat->matcher(status);
    if (U_SUCCESS(status)) {
        matcher->reset(input);
        retVal  = matcher->matches(status);
    }
    
    void
RuleBasedCollator::setReorderCodes(const int32_t *reorderCodes, int32_t length,
                                   UErrorCode &errorCode) {
    if(U_FAILURE(errorCode)) { return; }
    if(length < 0 || (reorderCodes == NULL && length > 0)) {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return;
    }
    if(length == 1 && reorderCodes[0] == UCOL_REORDER_CODE_NONE) {
        length = 0;
    }
    if(length == settings->reorderCodesLength &&
            uprv_memcmp(reorderCodes, settings->reorderCodes, length * 4) == 0) {
        return;
    }
    const CollationSettings &defaultSettings = getDefaultSettings();
    if(length == 1 && reorderCodes[0] == UCOL_REORDER_CODE_DEFAULT) {
        if(settings != &defaultSettings) {
            CollationSettings *ownedSettings = SharedObject::copyOnWrite(settings);
            if(ownedSettings == NULL) {
                errorCode = U_MEMORY_ALLOCATION_ERROR;
                return;
            }
            ownedSettings->copyReorderingFrom(defaultSettings, errorCode);
            setFastLatinOptions(*ownedSettings);
        }
        return;
    }
    CollationSettings *ownedSettings = SharedObject::copyOnWrite(settings);
    if(ownedSettings == NULL) {
        errorCode = U_MEMORY_ALLOCATION_ERROR;
        return;
    }
    ownedSettings->setReordering(*data, reorderCodes, length, errorCode);
    setFastLatinOptions(*ownedSettings);
}
    
    SelectFormat::SelectFormat(const UnicodeString& pat,
                           UErrorCode& status) : msgPattern(status) {
   applyPattern(pat, status);
}
    
    #endif /* #if !UCONFIG_NO_BREAK_ITERATION */

    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
      bool needs_reconfigure = false;
  for (const auto& source : config) {
    auto status = updateSource(source.first, source.second);
    if (status.getCode() == 2) {
      // The source content did not change.
      continue;
    }
    }
    
    class PlaceboConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {};
  }
  Status update(const std::string&, const ParserConfig&) override {
    return Status::success();
  }
    }
    
    
    {} // namespace osquery

    
    #include <osquery/utils/json/json.h>
    
      Expected<int32_t, DatabaseError> getInt32(const std::string& domain,
                                            const std::string& key) override;
  Expected<std::string, DatabaseError> getString(
      const std::string& domain, const std::string& key) override;
    
    GTEST_TEST(InMemoryDatabaseTest, test_put) {
  auto db = std::make_unique<InMemoryDatabase>('test');
#ifdef NDEBUG
  auto result = db->putInt32('test', 'test', 23);
  EXPECT_FALSE(result);
  EXPECT_EQ(result.getError(), DatabaseError::DbIsNotOpen);
#endif
  EXPECT_TRUE(db->open());
  EXPECT_TRUE(db->putInt32(kPersistentSettings, 'test_key_int', 12));
  auto int_value = db->getInt32(kPersistentSettings, 'test_key_int');
  EXPECT_TRUE(int_value);
  EXPECT_EQ(int_value.take(), 12);
    }
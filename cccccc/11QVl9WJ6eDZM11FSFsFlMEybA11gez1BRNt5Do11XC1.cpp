
        
        #ifndef BITCOIN_REVERSELOCK_H
#define BITCOIN_REVERSELOCK_H
    
    
    {    secp256k1_ecdsa_recoverable_signature_load(ctx, &r, &s, &recid, signature);
    VERIFY_CHECK(recid >= 0 && recid < 4);  /* should have been caught in parse_compact */
    secp256k1_scalar_set_b32(&m, msg32, NULL);
    if (secp256k1_ecdsa_sig_recover(&ctx->ecmult_ctx, &r, &s, &q, &m, recid)) {
        secp256k1_pubkey_save(pubkey, &q);
        return 1;
    } else {
        memset(pubkey, 0, sizeof(*pubkey));
        return 0;
    }
}
    
        std::string vStr('zippy');
    BOOST_CHECK(arr.push_back(vStr));
    
    static void TestKey(const std::string& key,
                    uint64_t seq,
                    ValueType vt) {
  std::string encoded = IKey(key, seq, vt);
    }
    
      void WritableFileClosed(const FileState& state);
  Status DropUnsyncedFileData();
  Status DeleteFilesCreatedAfterLastDirSync();
  void DirWasSynced();
  bool IsFileCreatedSinceLastDirSync(const std::string& filename);
  void ResetState();
  void UntrackFile(const std::string& f);
  // Setting the filesystem to inactive is the test equivalent to simulating a
  // system reset. Setting to inactive will freeze our saved filesystem state so
  // that it will stop being recorded. It can then be reset back to the state at
  // the time of the reset.
  bool IsFilesystemActive() const { return filesystem_active_; }
  void SetFilesystemActive(bool active) { filesystem_active_ = active; }
    
                for (int i=0; i<nr_gain_filtering_iterations_; ++i)
                sepFilter2D(gain_map, gain_map, CV_32F, ker, ker);
    
                for (size_t i = 0; i < dsize.height; ++i)
            {
                const u8 * src0_row = internal::getRowPtr(srcBase, srcStride, i << 2);
                const u8 * src1_row = internal::getRowPtr(srcBase, srcStride, (i << 2) + 1);
                const u8 * src2_row = internal::getRowPtr(srcBase, srcStride, (i << 2) + 2);
                const u8 * src3_row = internal::getRowPtr(srcBase, srcStride, (i << 2) + 3);
                u8 * dst_row = internal::getRowPtr(dstBase, dstStride, i);
                size_t sj = 0, dj = 0;
    }
    
        cv::GMatP in;
    auto out = GResize3p3p::on(in, out_sz, interp);
    cv::GComputation c(cv::GIn(in), cv::GOut(out));
    
    TEST(ByteSinkTest, Flush) {
  string str;
  FlushingByteSink f_sink(&str);
  WriteAndFlush(&f_sink);
  EXPECT_STREQ('abcz', str.c_str());
}
    
    namespace google {
namespace protobuf {
namespace internal {
namespace {
    }
    }
    }
    }
    
    #endif  // PROTOBUF_BENCHMARKS_UTIL_DATA_PROTO2_TO_PROTO3_UTIL_H_

    
        if (dataset.message_name() == 'benchmarks.proto3.GoogleMessage1') {
      message = new benchmarks::proto3::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage1') {
      message = new benchmarks::proto2::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage2') {
      message = new benchmarks::proto2::GoogleMessage2;
    } else if (dataset.message_name() ==
        'benchmarks.google_message3.GoogleMessage3') {
      message = new benchmarks::google_message3::GoogleMessage3;
    } else if (dataset.message_name() ==
        'benchmarks.google_message4.GoogleMessage4') {
      message = new benchmarks::google_message4::GoogleMessage4;
    } else {
      std::cerr << 'Unknown message type: ' << dataset.message_name();
      exit(1);
    }
    
    
    {
    {
    {}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
      // Optional:  Delete all global objects allocated by libprotobuf.
  google::protobuf::ShutdownProtobufLibrary();
    
      if (!InitDescriptorMappingTypes())
    return false;
    
    std::string TempFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'dbtmp');
}
    
    
    {}  // namespace leveldb
    
    TEST(VersionEditTest, EncodeDecode) {
  static const uint64_t kBig = 1ull << 50;
    }
    
    TEST(WriteBatchTest, Corruption) {
  WriteBatch batch;
  batch.Put(Slice('foo'), Slice('bar'));
  batch.Delete(Slice('box'));
  WriteBatchInternal::SetSequence(&batch, 200);
  Slice contents = WriteBatchInternal::Contents(&batch);
  WriteBatchInternal::SetContents(&batch,
                                  Slice(contents.data(), contents.size() - 1));
  ASSERT_EQ(
      'Put(foo, bar)@200'
      'ParseError()',
      PrintContents(&batch));
}
    
    // See doc/table_format.md for an explanation of the filter block format.
    
    
    {}  // namespace leveldb

    
    struct ReadOptions;
    
        /**
     * Targets one or more of the next write ops in this batch op using a NSTargeter.  The
     * resulting TargetedWrites are aggregated together in the returned TargetedWriteBatches.
     *
     * If 'recordTargetErrors' is false, any targeting error will abort all current batches and
     * the method will return the targeting error.  No targetedBatches will be returned on
     * error.
     *
     * Otherwise, if 'recordTargetErrors' is true, targeting errors will be recorded for each
     * write op that fails to target, and the method will return OK.
     *
     * (The idea here is that if we are sure our NSTargeter is up-to-date we should record
     * targeting errors, but if not we should refresh once first.)
     *
     * Returned TargetedWriteBatches are owned by the caller.
     */
    Status targetBatch(const NSTargeter& targeter,
                       bool recordTargetErrors,
                       std::map<ShardId, TargetedWriteBatch*>* targetedBatches);
    
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
    
        if (auto skip = cmd.getSkip()) {
        BSONObjBuilder skipBuilder(pipelineBuilder.subobjStart());
        skipBuilder.append('$skip', skip.get());
        skipBuilder.doneFast();
    }
    
    void PopNode::validateUpdate(mutablebson::ConstElement updatedElement,
                             mutablebson::ConstElement leftSibling,
                             mutablebson::ConstElement rightSibling,
                             std::uint32_t recursionLevel,
                             ModifyResult modifyResult) const {
    invariant(modifyResult == ModifyResult::kNormalUpdate);
    }
    
    void PushNode::setValueForNewElement(mutablebson::Element* element) const {
    BSONObj emptyArray;
    invariant(element->setValueArray(emptyArray));
    (void)performPush(element, nullptr);
}
    
    namespace mongo {
    }
    
        void _incrementHistogram(OperationContext* opCtx,
                             long long latency,
                             OperationLatencyHistogram* histogram,
                             Command::ReadWriteType readWriteType);
    
        BSONObj keyPattern = BSON('a' << 1 << 'b' << 1);
    createIndex(collection,
                BSON('name'
                     << 'a_1_b_1'
                     << 'ns'
                     << _nss.ns()
                     << 'key'
                     << keyPattern
                     << 'v'
                     << static_cast<int>(kIndexVersion)))
        .transitional_ignore();
    
    
int32_t RegexMatcher::start(int32_t group, UErrorCode &status) const {
    return (int32_t)start64(group, status);
}
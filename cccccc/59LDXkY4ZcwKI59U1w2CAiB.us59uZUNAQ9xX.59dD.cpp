
        
        TEST(PartialRunMgrFindOrCreate, NewCreate) {
  // Test that PartialRunMgr creates a new CancellationManager for new steps.
  PartialRunMgr partial_run_mgr;
  int step_id = 1;
  CancellationManager* cancellation_manager;
  partial_run_mgr.FindOrCreate(step_id, &cancellation_manager);
  // FindOrCreate on a new step should return a new cancellation_manager.
  int new_step_id = 2;
  CancellationManager* new_cancellation_manager;
  partial_run_mgr.FindOrCreate(new_step_id, &new_cancellation_manager);
  EXPECT_NE(cancellation_manager, new_cancellation_manager);
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      bool operator==(const PluginConfig& rhs) const;
    
      // Redundant attr
  ExpectSuccess(Builder().Attr('T', DT_FLOAT).Attr('T', DT_FLOAT), {},
                {DT_FLOAT}, R'proto(
      op: 'PolymorphicOut'
      attr { key: 'T' value { type: DT_FLOAT } } )proto');
    
    TEST_F(SubgraphTest, FedOutputs2_FunctionConvention) {
  ExpectOK(
      'node { name: 'W1' op: 'TestParams' }'
      'node { name: 'W2' op: 'TestParams' }'
      'node { name: 'input' op: 'TestInput' }'
      'node { name: 't1' op: 'TestMul' input: [ 'W1', 'input:1' ] }'
      'node { name: 't2' op: 'TestMul' input: [ 'W2', 't1' ] }'
      'node { name: 't3_a' op: 'TestRelu' input: 't2' }'
      'node { name: 't3_b' op: 'TestRelu' input: 't2' }');
  // We feed input:1, but nothing connects to it, so the _recv(input:1)
  // node also disappears.
  EXPECT_EQ('OK', Subgraph('input:1,t1,W2', '', 't2',
                           true /* use_function_convention */));
  ExpectNodes('_arg_t1_0_1,_arg_W2_0_2,t2');
}
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #include <string>
    
      AtomQuotaPermissionContext();
  virtual ~AtomQuotaPermissionContext();
    
    
    {}  // namespace atom
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(URLRequestAsyncAsarJob);
};
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    #include 'db/dbformat.h'
#include 'port/port.h'
#include 'util/logging.h'
#include 'util/testharness.h'
    
          case kCompactPointer:
        if (GetLevel(&input, &level) &&
            GetInternalKey(&input, &key)) {
          compact_pointers_.push_back(std::make_pair(level, key));
        } else {
          msg = 'compaction pointer';
        }
        break;
    
    void WriteBatchInternal::Append(WriteBatch* dst, const WriteBatch* src) {
  SetCount(dst, Count(dst) + Count(src));
  assert(src->rep_.size() >= kHeader);
  dst->rep_.append(src->rep_.data() + kHeader, src->rep_.size() - kHeader);
}
    
      // keys[0,n-1] contains a list of keys (potentially with duplicates)
  // that are ordered according to the user supplied comparator.
  // Append a filter that summarizes keys[0,n-1] to *dst.
  //
  // Warning: do not change the initial contents of *dst.  Instead,
  // append the newly constructed filter to *dst.
  virtual void CreateFilter(const Slice* keys, int n, std::string* dst)
      const = 0;
    
    
static Variant HHVM_FUNCTION(gmp_add,
                             const Variant& dataA,
                             const Variant& dataB) {
  mpz_t gmpDataA, gmpDataB, gmpReturn;
    }
    
    
    {std::string AsyncFileWriter::getNumDiscardedMsg(size_t numDiscarded) {
  // We may want to make this customizable in the future (e.g., to allow it to
  // conform to the LogFormatter style being used).
  // For now just return a simple fixed message.
  return folly::to<std::string>(
      numDiscarded,
      ' log messages discarded: logging faster than we can write\n');
}
} // namespace folly

    
    std::shared_ptr<LogHandler> FileHandlerFactory::createHandler(
    const Options& options) {
  WriterFactory writerFactory;
  return StandardLogHandlerFactory::createHandler(
      getType(), &writerFactory, options);
}
    
    
    { private:
  bool async_{true};
  Optional<size_t> maxBufferSize_;
};
    
    
    {StringPiece getGlogLevelName(LogLevel level) {
  if (level < LogLevel::INFO) {
    return 'VERBOSE';
  } else if (level < LogLevel::WARN) {
    return 'INFO';
  } else if (level < LogLevel::ERR) {
    return 'WARNING';
  } else if (level < LogLevel::CRITICAL) {
    return 'ERROR';
  }
  return 'CRITICAL';
}
} // namespace
    
      using LogWriter::writeMessage;
  void writeMessage(folly::StringPiece buffer, uint32_t flags = 0) override;
  void flush() override;
    
    void LogCategory::clearHandlers() {
  std::vector<std::shared_ptr<LogHandler>> emptyHandlersList;
  // Swap out the handlers list with the handlers_ lock held.
  {
    auto handlers = handlers_.wlock();
    handlers->swap(emptyHandlersList);
  }
  // Destroy emptyHandlersList now that the handlers_ lock is released.
  // This way we don't hold the handlers_ lock while invoking any of the
  // LogHandler destructors.
}
    
    
    {  // Update categoryConfigs_ with all of the entries from the other LogConfig.
  //
  // Any entries already present in our categoryConfigs_ are merged: if the new
  // configuration does not include handler settings our entry's settings are
  // maintained.
  for (const auto& entry : other.categoryConfigs_) {
    auto result = categoryConfigs_.insert(entry);
    if (!result.second) {
      auto* existingEntry = &result.first->second;
      auto oldHandlers = std::move(existingEntry->handlers);
      *existingEntry = entry.second;
      if (!existingEntry->handlers.hasValue()) {
        existingEntry->handlers = std::move(oldHandlers);
      }
    }
  }
}
    
    /**
 * Parse a folly::dynamic object.
 *
 * The input should be an object data type, and is parsed the same as a JSON
 * object accpted by parseLogConfigJson().
 */
LogConfig parseLogConfigDynamic(const dynamic& value);
    
      /// Push / Insert value at beginning/end of the list. Return the length.
  /// May throw RedisListException
  int PushLeft(const std::string& key, const std::string& value);
  int PushRight(const std::string& key, const std::string& value);
    
     private:
  const Comparator* comparator_;
  const char* data_;       // underlying block contents
  uint32_t restarts_;      // Offset of restart array (list of fixed32)
  uint32_t num_restarts_;  // Number of uint32_t entries in restart array
    
      // Same as bytes_per_sync, but applies to WAL files
  // Default: 0, turned off
  uint64_t wal_bytes_per_sync = 0;
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    snapshotConsistency
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_IngestExternalFileOptions_snapshotConsistency(
    JNIEnv* env, jobject jobj, jlong jhandle) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  return static_cast<jboolean>(options->snapshot_consistency);
}
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats)
      : StatisticsImpl(stats, false), m_ignore_histograms() {
  }
    
      grpc::ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  std::cerr << 'Server listening on ' << server_address << std::endl;
    
    
    { public:
  StructInNestedNS() {
    memset(this, 0, sizeof(StructInNestedNS));
  }
  StructInNestedNS(int32_t _a, int32_t _b)
      : a_(flatbuffers::EndianScalar(_a)),
        b_(flatbuffers::EndianScalar(_b)) {
  }
  int32_t a() const {
    return flatbuffers::EndianScalar(a_);
  }
  void mutate_a(int32_t _a) {
    flatbuffers::WriteScalar(&a_, _a);
  }
  int32_t b() const {
    return flatbuffers::EndianScalar(b_);
  }
  void mutate_b(int32_t _b) {
    flatbuffers::WriteScalar(&b_, _b);
  }
};
STRUCT_END(StructInNestedNS, 8);
    
    typedef uintmax_t largest_scalar_t;
    
    // Parses one dictionary entry.
// If successfull, write the enty to Unit and returns true,
// otherwise returns false.
bool ParseOneDictionaryEntry(const std::string &Str, Unit *U);
// Parses the dictionary file, fills Units, returns true iff all lines
// were parsed succesfully.
bool ParseDictionaryFile(const std::string &Text, std::vector<Unit> *Units);
    
    #endif

    
    Unit FileToVector(const std::string &Path, size_t MaxSize, bool ExitOnError) {
  std::ifstream T(Path);
  if (ExitOnError && !T) {
    Printf('No such directory: %s; exiting\n', Path.c_str());
    exit(1);
  }
    }
    
    void ListFilesInDirRecursive(const std::string &Dir, long *Epoch,
                             std::vector<std::string> *V, bool TopDir);
    
    std::string Sha1ToString(const uint8_t Sha1[kSHA1NumBytes]);
    
    int ExecuteCommand(const std::string &Command);
    
    
    {
    {      (void)sigemptyset(&BlockedSignalsSet);
      (void)sigaddset(&BlockedSignalsSet, SIGCHLD);
      if (sigprocmask(SIG_BLOCK, &BlockedSignalsSet, &OldBlockedSignalsSet) ==
          -1) {
        Printf('Failed to block SIGCHLD\n');
        // Try our best to restore the signal handlers.
        (void)sigaction(SIGQUIT, &OldSigQuitAction, NULL);
        (void)sigaction(SIGINT, &OldSigIntAction, NULL);
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }
    }
    ++ActiveThreadCount;
  }
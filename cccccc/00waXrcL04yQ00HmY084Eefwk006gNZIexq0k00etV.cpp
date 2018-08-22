
        
        #include 'db/builder.h'
    
    inline bool DBIter::ParseKey(ParsedInternalKey* ikey) {
  Slice k = iter_->key();
  ssize_t n = k.size() + iter_->value().size();
  bytes_counter_ -= n;
  while (bytes_counter_ < 0) {
    bytes_counter_ += RandomPeriod();
    db_->RecordReadSample(k);
  }
  if (!ParseInternalKey(k, ikey)) {
    status_ = Status::Corruption('corrupted internal key in DBIter');
    return false;
  } else {
    return true;
  }
}
    
    #endif  // STORAGE_LEVELDB_DB_DB_ITER_H_

    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
    // Called on every log record (each one of which is a WriteBatch)
// found in a kDescriptorFile.
static void VersionEditPrinter(uint64_t pos, Slice record, WritableFile* dst) {
  std::string r = '--- offset ';
  AppendNumberTo(&r, pos);
  r += '; ';
  VersionEdit edit;
  Status s = edit.DecodeFrom(record);
  if (!s.ok()) {
    r += s.ToString();
    r.push_back('\n');
  } else {
    r += edit.DebugString();
  }
  dst->Append(r);
}
    
    // Tag numbers for serialized VersionEdit.  These numbers are written to
// disk and should not be changed.
enum Tag {
  kComparator           = 1,
  kLogNumber            = 2,
  kNextFileNumber       = 3,
  kLastSequence         = 4,
  kCompactPointer       = 5,
  kDeletedFile          = 6,
  kNewFile              = 7,
  // 8 was used for large value refs
  kPrevLogNumber        = 9
};
    
    
TEST(FindFileTest, Multiple) {
  Add('150', '200');
  Add('200', '250');
  Add('300', '350');
  Add('400', '450');
  ASSERT_EQ(0, Find('100'));
  ASSERT_EQ(0, Find('150'));
  ASSERT_EQ(0, Find('151'));
  ASSERT_EQ(0, Find('199'));
  ASSERT_EQ(0, Find('200'));
  ASSERT_EQ(1, Find('201'));
  ASSERT_EQ(1, Find('249'));
  ASSERT_EQ(1, Find('250'));
  ASSERT_EQ(2, Find('251'));
  ASSERT_EQ(2, Find('299'));
  ASSERT_EQ(2, Find('300'));
  ASSERT_EQ(2, Find('349'));
  ASSERT_EQ(2, Find('350'));
  ASSERT_EQ(3, Find('351'));
  ASSERT_EQ(3, Find('400'));
  ASSERT_EQ(3, Find('450'));
  ASSERT_EQ(4, Find('451'));
    }
    
    void WriteBatchInternal::SetContents(WriteBatch* b, const Slice& contents) {
  assert(contents.size() >= kHeader);
  b->rep_.assign(contents.data(), contents.size());
}
    
    inline
static void WalCheckpoint(sqlite3* db_) {
  // Flush all writes to disk
  if (FLAGS_WAL_enabled) {
    sqlite3_wal_checkpoint_v2(db_, NULL, SQLITE_CHECKPOINT_FULL, NULL, NULL);
  }
}
    
    
    {}
    
    #endif  // GRPC_TEST_CPP_UTIL_BENCHMARK_CONFIG_H

    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, false);
    
    #include <gflags/gflags.h>
#include <grpc/grpc.h>
#include <grpc/support/time.h>
    
    /* A GrpcPolledFdFactory is 1-to-1 with and owned by the
 * ares event driver. It knows how to create GrpcPolledFd's
 * for the current platform, and the ares driver uses it for all of
 * its fd's. */
class GrpcPolledFdFactory {
 public:
  virtual ~GrpcPolledFdFactory() {}
  /* Creates a new wrapped fd for the current platform */
  virtual GrpcPolledFd* NewGrpcPolledFdLocked(
      ares_socket_t as, grpc_pollset_set* driver_pollset_set,
      grpc_combiner* combiner) GRPC_ABSTRACT;
  /* Optionally configures the ares channel after creation */
  virtual void ConfigureAresChannelLocked(ares_channel channel) GRPC_ABSTRACT;
    }
    
    void CheckResolvedWithoutErrorLocked(void* argsp, grpc_error* err) {
  EXPECT_EQ(err, GRPC_ERROR_NONE);
  ArgsStruct* args = (ArgsStruct*)argsp;
  gpr_atm_rel_store(&args->done_atm, 1);
  gpr_mu_lock(args->mu);
  GRPC_LOG_IF_ERROR('pollset_kick', grpc_pollset_kick(args->pollset, nullptr));
  gpr_mu_unlock(args->mu);
}
    
    /// Indicates that the call has been cancelled.
void grpc_call_combiner_cancel(grpc_call_combiner* call_combiner,
                               grpc_error* error);
    
    #include <grpc/slice_buffer.h>
#include 'src/core/lib/security/security_connector/load_system_roots.h'
    
    grpc_slice CreateRootCertsBundle(const char* certs_directory) {
  grpc_slice bundle_slice = grpc_empty_slice();
  if (certs_directory == nullptr) {
    return bundle_slice;
  }
  DIR* ca_directory = opendir(certs_directory);
  if (ca_directory == nullptr) {
    return bundle_slice;
  }
  struct FileData {
    char path[MAXPATHLEN];
    off_t size;
  };
  InlinedVector<FileData, 2> roots_filenames;
  size_t total_bundle_size = 0;
  struct dirent* directory_entry;
  while ((directory_entry = readdir(ca_directory)) != nullptr) {
    struct stat dir_entry_stat;
    const char* file_entry_name = directory_entry->d_name;
    FileData file_data;
    GetAbsoluteFilePath(certs_directory, file_entry_name, file_data.path);
    int stat_return = stat(file_data.path, &dir_entry_stat);
    if (stat_return == -1 || !S_ISREG(dir_entry_stat.st_mode)) {
      // no subdirectories.
      if (stat_return == -1) {
        gpr_log(GPR_ERROR, 'failed to get status for file: %s', file_data.path);
      }
      continue;
    }
    file_data.size = dir_entry_stat.st_size;
    total_bundle_size += file_data.size;
    roots_filenames.push_back(file_data);
  }
  closedir(ca_directory);
  char* bundle_string = static_cast<char*>(gpr_zalloc(total_bundle_size + 1));
  size_t bytes_read = 0;
  for (size_t i = 0; i < roots_filenames.size(); i++) {
    int file_descriptor = open(roots_filenames[i].path, O_RDONLY);
    if (file_descriptor != -1) {
      // Read file into bundle.
      size_t cert_file_size = roots_filenames[i].size;
      int read_ret =
          read(file_descriptor, bundle_string + bytes_read, cert_file_size);
      if (read_ret != -1) {
        bytes_read += read_ret;
      } else {
        gpr_log(GPR_ERROR, 'failed to read file: %s', roots_filenames[i].path);
      }
    }
  }
  bundle_slice = grpc_slice_new(bundle_string, bytes_read, gpr_free);
  return bundle_slice;
}
    
    namespace grpc {
namespace {
    }
    }
    
    #include 'hphp/runtime/vm/jit/timer.h'
    
    #endif
#endif

    
      // DataBlock can track an alternate pseudo-frontier to support clients that
  // wish to emit code to one location while keeping memory references relative
  // to a separate location. The actual writes will be to m_dest.
  Address m_destBase{nullptr};
    
      /*
   * root is the address of the top-level APCHandle which contains this string
   * register {allocation, root} with APCGCManager
   */
  void registerUncountedAllocation(APCHandle* rootAPCHandle);
    
      // Add usable mappings (possibly backed by huge pages) to the usable range of
  // memory.  Return false if it failed.
  bool addMapping(BumpAllocState& state, size_t newSize) {
    if (trivial(state, newSize)) return true;
    if (infeasible(state, newSize)) return false;
    if (!m_failed && addMappingImpl(state, newSize)) return true;
    return m_fallback && m_fallback->addMapping(state, newSize);
  }
    
    // redirect the messages to R's console.
namespace dmlc {
void CustomLogMessage::Log(const std::string& msg) {
  Rprintf('%s\n', msg.c_str());
}
}  // namespace dmlc
    
    
    {  std::unique_ptr<dmlc::Parser<uint32_t> > parser(
      dmlc::Parser<uint32_t>::Create(fname.c_str(), partid, npart, file_format.c_str()));
  DMatrix* dmat = DMatrix::Create(parser.get(), cache_file);
  if (!silent) {
    LOG(CONSOLE) << dmat->Info().num_row_ << 'x' << dmat->Info().num_col_ << ' matrix with '
                 << dmat->Info().num_nonzero_ << ' entries loaded from ' << uri;
  }
  /* sync up number of features after matrix loaded.
   * partitioned data will fail the train/val validation check 
   * since partitioned data not knowing the real number of features. */
  rabit::Allreduce<rabit::op::Max>(&dmat->Info().num_col_, 1);
  // backward compatiblity code.
  if (!load_row_split) {
    MetaInfo& info = dmat->Info();
    if (MetaTryLoadGroup(fname + '.group', &info.group_ptr_) && !silent) {
      LOG(CONSOLE) << info.group_ptr_.size() - 1
                   << ' groups are loaded from ' << fname << '.group';
    }
    if (MetaTryLoadFloatInfo(fname + '.base_margin', &info.base_margin_) && !silent) {
      LOG(CONSOLE) << info.base_margin_.size()
                   << ' base_margin are loaded from ' << fname << '.base_margin';
    }
    if (MetaTryLoadFloatInfo(fname + '.weight', &info.weights_) && !silent) {
      LOG(CONSOLE) << info.weights_.size()
                   << ' weights are loaded from ' << fname << '.weight';
    }
  }
  return dmat;
}
    
    // metrics
#include '../src/metric/metric.cc'
#include '../src/metric/elementwise_metric.cc'
#include '../src/metric/multiclass_metric.cc'
#include '../src/metric/rank_metric.cc'
    
    TreeUpdater* TreeUpdater::Create(const std::string& name) {
  auto *e = ::dmlc::Registry< ::xgboost::TreeUpdaterReg>::Get()->Find(name);
  if (e == nullptr) {
    LOG(FATAL) << 'Unknown tree updater ' << name;
  }
  return (e->body)();
}
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
      /*! \return the default evaluation metric for the objective */
  virtual const char* DefaultEvalMetric() const = 0;
  // the following functions are optional, most of time default implementation is good enough
  /*!
   * \brief transform prediction values, this is only called when Prediction is called
   * \param io_preds prediction values, saves to this vector as well
   */
  virtual void PredTransform(HostDeviceVector<bst_float> *io_preds) {}

        
          auto op_profiler = profiler.MakeScopedInstructionProfiler(hlo_instruction());
  // Copy the predicate value from device.
  int32 branch_index = -1;
  bool pred = false;
  se::DeviceMemoryBase branch_index_address =
      params.buffer_allocations->GetDeviceAddress(branch_index_buffer_index_);
  if (branch_index_is_bool_) {
    stream.ThenMemcpy(&pred, branch_index_address, sizeof(bool));
  } else {
    stream.ThenMemcpy(&branch_index, branch_index_address, sizeof(int32));
  }
    
    
    {
    {Status DeviceToDeviceCopyThunk::ExecuteOnStream(const ExecuteParams& params) {
  se::DeviceMemoryBase destination_data =
      params.buffer_allocations->GetDeviceAddress(destination_buffer_);
  se::DeviceMemoryBase source_data =
      params.buffer_allocations->GetDeviceAddress(source_buffer_);
  auto op_profiler =
      params.profiler->MakeScopedInstructionProfiler(hlo_instruction());
  params.stream->ThenMemcpy(&destination_data, source_data, mem_size_);
  return Status::OK();
}
}  // namespace gpu
}  // namespace xla

    
    #include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/sequential_thunk.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    // A thunk that infeeds data. Data must be already resident on the
// device. This thunk performs an intra-device copy from that location
// to the buffer allocated for the infeed op.
class InfeedThunk : public Thunk {
 public:
  // Constructs a InfeedThunk that copies data from the on-device
  // infeed queue into the buffers in the given shape tree.
  InfeedThunk(const ShapeTree<BufferAllocation::Slice>& infeed_slices,
              const HloInstruction* hlo_instruction);
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
     private:
  const se::blas::UpperLower uplo_;
  const se::blas::Side side_;
  const se::blas::Diagonal unit_diagonal_;
  se::blas::Transpose transpose_a_;
    
      HloDCE dce;
  EXPECT_TRUE(dce.Run(module.get()).ValueOrDie());
    
        xla::XlaBuilder* builder = ctx->builder();
    xla::XlaOp labels;
    OP_REQUIRES_OK(ctx,
                   XlaHelpers::OneHot(
                       builder, depth, /*axis=*/1, input_type(1), labels_shape,
                       indices, XlaHelpers::One(builder, logits_type),
                       XlaHelpers::Zero(builder, logits_type), &labels));
    
    #include 'KeyChord.g.cpp'
    
    int64_t UniValue::get_int64() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int64_t retval;
    if (!ParseInt64(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    TEST(DBTest, IterSmallAndLargeMix) {
  ASSERT_OK(Put('a', 'va'));
  ASSERT_OK(Put('b', std::string(100000, 'b')));
  ASSERT_OK(Put('c', 'vc'));
  ASSERT_OK(Put('d', std::string(100000, 'd')));
  ASSERT_OK(Put('e', std::string(100000, 'e')));
    }
    
    static std::string ShortSuccessor(const std::string& s) {
  std::string result = s;
  InternalKeyComparator(BytewiseComparator()).FindShortSuccessor(&result);
  return result;
}
    
        const unsigned char *currByte = src + 2 * sizeof (Int64);
    
    #endif

    
    
    {    return fps;
}
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    #include 'ImfVersion.h'
#include 'ImfIO.h'
#include 'ImfXdr.h'
#include 'ImfHeader.h'
#include 'ImfNamespace.h'
#include 'ImfExport.h'
    
    bool 
Header::hasChunkCount() const
{
   return findTypedAttribute<IntAttribute>('chunkCount') != 0;
}
    
    
    {    *pcode = p;
}
    
        IMF_EXPORT
    InputFile (OPENEXR_IMF_INTERNAL_NAMESPACE::IStream &is, int numThreads = globalThreadCount());
    
    
    {};
    
    
    
    
    {} // namespace caffe2

    
    ```
    
    namespace caffe2 {
    }
    
      gpr_mu_lock(&winsocket->state_mu);
  if (winsocket->shutdown_called) {
    gpr_mu_unlock(&winsocket->state_mu);
    return;
  }
  winsocket->shutdown_called = true;
  gpr_mu_unlock(&winsocket->state_mu);
    
    static_assert(std::is_trivially_destructible<GlobalConfigEnvInt32>::value,
              'GlobalConfigEnvInt32 needs to be trivially destructible.');
    
    typedef void (*GlobalConfigEnvErrorFunctionType)(const char* error_message);
    
    TEST_F(HealthServiceEnd2endTest, DefaultHealthService) {
  EnableDefaultHealthCheckService(true);
  EXPECT_TRUE(DefaultHealthCheckServiceEnabled());
  SetUpServer(true, false, false, nullptr);
  VerifyHealthCheckService();
  VerifyHealthCheckServiceStreaming();
    }
    
      void ResetStub() {
    std::shared_ptr<Channel> channel = grpc::CreateChannel(
        server_address_.str(), grpc::InsecureChannelCredentials());
    stub_ = grpc::testing::EchoTestService::NewStub(channel);
  }
    
    
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
    
      void ResetStub() {
    ChannelArguments args;
    std::shared_ptr<Channel> channel = grpc::CreateChannel(
        server_address_.str(), grpc::InsecureChannelCredentials());
    stub_ = grpc::testing::EchoTestService::NewStub(channel);
  }
    
    #include <gmock/gmock.h>
#include <gtest/gtest.h>
    
    store_t::sindex_access_t::sindex_access_t(btree_slice_t *_btree,
                                          sindex_name_t _name,
                                          secondary_index_t _sindex,
                                          scoped_ptr_t<sindex_superblock_t> _superblock)
    : btree(_btree),
      name(std::move(_name)),
      sindex(std::move(_sindex)),
      superblock(std::move(_superblock))
{ }
    
                {
                std::vector<char> opaque_definition;
                bool sindex_exists = store.acquire_sindex_superblock_for_read(
                        name,
                        '',
                        main_sb.get(),
                        release_superblock_t::RELEASE,
                        &sindex_super_block,
                        &opaque_definition,
                        &sindex_uuid);
                ASSERT_TRUE(sindex_exists);
            }
    
      // Gets the message associated with the test part.
  const char* message() const { return message_.c_str(); }
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE DIRECTLY.
//
// Expands to the name of the variable used to remember the names of
// the registered tests in the given test case.
# define GTEST_REGISTERED_TEST_NAMES_(TestCaseName) \
  gtest_registered_test_names_##TestCaseName##_
    
      tuple& operator=(const tuple& t) { return CopyFrom(t); }
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
Status BuildTable(const std::string& dbname, Env* env, const Options& options,
                  TableCache* table_cache, Iterator* iter, FileMetaData* meta);
    
    #ifndef STORAGE_LEVELDB_DB_DB_ITER_H_
#define STORAGE_LEVELDB_DB_DB_ITER_H_
    
    std::string DescriptorFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  char buf[100];
  snprintf(buf, sizeof(buf), '/MANIFEST-%06llu',
           static_cast<unsigned long long>(number));
  return dbname + buf;
}
    
    // Return the name of the info log file for 'dbname'.
std::string InfoLogFileName(const std::string& dbname);
    
    
    {  Table* table = reinterpret_cast<TableAndFile*>(cache_->Value(handle))->table;
  Iterator* result = table->NewIterator(options);
  result->RegisterCleanup(&UnrefEntry, cache_, handle);
  if (tableptr != nullptr) {
    *tableptr = table;
  }
  return result;
}
    
    
    {  static void Append(WriteBatch* dst, const WriteBatch* src);
};
    
      // If the cache has no mapping for 'key', returns nullptr.
  //
  // Else return a handle that corresponds to the mapping.  The caller
  // must call this->Release(handle) when the returned mapping is no
  // longer needed.
  virtual Handle* Lookup(const Slice& key) = 0;
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
LEVELDB_EXPORT Status DumpFile(Env* env, const std::string& fname,
                               WritableFile* dst);
    
    #include <string>
#include <vector>
    
    class Slice;
    
      // Return a pointer to the beginning of the referenced data
  const char* data() const { return data_; }
    
    #include 'leveldb/db.h'
#include 'leveldb/write_batch.h'
#include 'util/testharness.h'
    
    // Return an iterator that provided the union of the data in
// children[0,n-1].  Takes ownership of the child iterators and
// will delete them when the result iterator is deleted.
//
// The result does no duplicate suppression.  I.e., if a particular
// key is present in K child iterators, it will be yielded K times.
//
// REQUIRES: n >= 0
Iterator* NewMergingIterator(const Comparator* comparator, Iterator** children,
                             int n);
    
      if (s.ok()) {
    BlockContents contents;
    if (block_cache != nullptr) {
      char cache_key_buffer[16];
      EncodeFixed64(cache_key_buffer, table->rep_->cache_id);
      EncodeFixed64(cache_key_buffer + 8, handle.offset());
      Slice key(cache_key_buffer, sizeof(cache_key_buffer));
      cache_handle = block_cache->Lookup(key);
      if (cache_handle != nullptr) {
        block = reinterpret_cast<Block*>(block_cache->Value(cache_handle));
      } else {
        s = ReadBlock(table->rep_->file, options, handle, &contents);
        if (s.ok()) {
          block = new Block(contents);
          if (contents.cachable && options.fill_cache) {
            cache_handle = block_cache->Insert(key, block, block->size(),
                                               &DeleteCachedBlock);
          }
        }
      }
    } else {
      s = ReadBlock(table->rep_->file, options, handle, &contents);
      if (s.ok()) {
        block = new Block(contents);
      }
    }
  }
    
      std::string s;
  for (size_t i = 0; i < values.size(); i++) {
    PutVarint64(&s, values[i]);
  }
    
      static Variant getProp(const Object& this_, const String& name) {
    auto get = Derived::map.get(name);
    CHECK_ACCESSOR(get, 'get', this_->getVMClass()->name(), name)
    return get(this_);
  }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    struct ProxygenTransportTest : ProxygenTransportBasicTest {
    }
    
    void APCGCManager::registerPendingDeletion(APCHandle* root, const size_t size) {
  assertx(RuntimeOption::EvalGCForAPC);
  if (RuntimeOption::ServerExecutionMode()) {
    return; // Doesn't support server mode yet
  }
  if (RuntimeOption::ServerExecutionMode()) {
    // Root should be visible by default to implement asynchronous mark-sweep
    // But we don't need to do this in script mode
    WriteLock l3(visibleFromHeapLock);
    visibleFromHeap.insert(root);
  }
  // Recursively register all allocations belong to this root handle
  APCTypedValue::fromHandle(root)->registerUncountedAllocations();
  // Add root APCHandle into to-free list
  {
    WriteLock l1(candidateListLock);
    pendingSize.fetch_add(size, std::memory_order_relaxed);
    assertx(candidateList.count(root) == 0);
    candidateList.emplace(root, size);
  }
  FTRACE(1, 'APCGCManager: increase used memory:{} by size:{}\n',
                                                pendingSize.load(), size);
  /* TODO Task #20074509: API for global GC invoke */
  if (pendingSize.load() > someBar()) {
    // Bar is -vEval.GCForAPCBar, 10^9 by default
    invokeGlobalGC();
    FTRACE(2, 'APCGCManager: GC flag set up!\n');
  }
}
    
    /*
 * This contains shared stubs used for multiple purposes in the
 * ArrayData vtable.  Most of the functions used by more than one
 * kind, or for more than one purpose should be collected here.
 *
 * Note: if you have entry points on an array kind that should never
 * be called, it's generaelly preferable to give them their own unique
 * functions so it will be obvious which kind was involved in core
 * files.  We only try to consolidate the common array functions that
 * should actually be called.
 */
struct ArrayCommon {
  static ssize_t ReturnInvalidIndex(const ArrayData*);
    }
    
    namespace HPHP {
    }
    
    /*
 * Replace %{schema} with the repo schema in path.
 */
std::string insertSchema(const char* path);
    
    #include <vector>
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-array type
        json str = 'I am a string';
        str.at(0) = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create (floating point) JSON numbers
    json j_ok(v_ok);
    json j_nan(v_nan);
    json j_infinity(v_infinity);
    json j_float(n_float);
    json j_float_nan(n_float_nan);
    json j_double(n_double);
    
    PluginResponse tableRowsToPluginResponse(const TableRows& rows) {
  PluginResponse result;
  for (const auto& row : rows) {
    result.push_back(static_cast<Row>(*row));
  }
  return result;
}
    
    GTEST_TEST(InMemoryDatabaseTest, test_domain_error) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  ASSERT_FALSE(db->open().isError());
  auto result = db->putInt32('bad_domain', 'key', 12);
  EXPECT_FALSE(result);
  EXPECT_EQ(result.takeError(), DatabaseError::DomainNotFound);
}
    
      virtual void SetUp() {
    boost::uuids::uuid uuid = boost::uuids::random_generator()();
    auto random_name = boost::uuids::to_string(uuid);
    auto path = boost::filesystem::temp_directory_path().append(random_name);
    boost::filesystem::create_directory(path);
    path_ = path.string();
  }
    
    Status serializeQueryLogItem(const QueryLogItem& item, JSON& doc) {
  if (item.results.added.size() > 0 || item.results.removed.size() > 0) {
    auto obj = doc.getObject();
    auto status = serializeDiffResults(
        item.results, doc, obj, FLAGS_log_numerics_as_numbers);
    if (!status.ok()) {
      return status;
    }
    }
    }
    
    int main() {
  // open DB
  Options options;
  options.create_if_missing = true;
  DB* db;
  Status s = DB::Open(options, kDBPath, &db);
  assert(s.ok());
    }
    
      // Comparator used to define the order of keys in the table.
  // Default: a comparator that uses lexicographic byte-wise ordering
  //
  // REQUIRES: The client must ensure that the comparator supplied
  // here has the same name and orders keys *exactly* the same as the
  // comparator provided to previous open calls on the same DB.
  const Comparator* comparator;
    
    #pragma once
#ifndef ROCKSDB_LITE
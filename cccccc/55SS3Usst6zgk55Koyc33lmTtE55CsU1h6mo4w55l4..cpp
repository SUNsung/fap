
        
        #include <unordered_map>
    
    Status CostAnalyzer::GenerateReport(std::ostream& os, bool per_node_report,
                                    bool verbose) {
  GatherCosts();
  PreprocessCosts();
  AnalyzeCosts();
  PrintAnalysis(os, per_node_report, verbose);
  return Status::OK();
}
    
    namespace tensorflow {
    }
    
    
    {  PyObject* np_array =
      PyArray_SimpleNewFromData(dim_size, dims, type_num, data);
  if (PyType_Ready(&TensorReleaserType) == -1) {
    return errors::Unknown('Python type initialization failed.');
  }
  TensorReleaser* releaser = reinterpret_cast<TensorReleaser*>(
      TensorReleaserType.tp_alloc(&TensorReleaserType, 0));
  releaser->destructor = new std::function<void()>(std::move(destructor));
  if (PyArray_SetBaseObject(reinterpret_cast<PyArrayObject*>(np_array),
                            reinterpret_cast<PyObject*>(releaser)) == -1) {
    Py_DECREF(releaser);
    return errors::Unknown('Python array refused to use memory.');
  }
  *result = PyArray_Return(reinterpret_cast<PyArrayObject*>(np_array));
  return Status::OK();
}
    
    
    {
    {}  // namespace cuda
}  // namespace stream_executor

    
    class StreamExecutor;
    
    void AutoUpdater::OnError(const std::string& message,
                          const int code,
                          const std::string& domain) {
  v8::Locker locker(isolate());
  v8::HandleScope handle_scope(isolate());
  auto error = v8::Exception::Error(mate::StringToV8(isolate(), message));
  auto errorObject =
      error->ToObject(isolate()->GetCurrentContext()).ToLocalChecked();
    }
    
    
    {}  // namespace api
    
      void PurchaseProduct(const std::string& product_id, mate::Arguments* args);
    
    #include 'atom/browser/atom_quota_permission_context.h'
    
    void CensusClientCallData::Destroy(grpc_call_element* elem,
                                   const grpc_call_final_info* final_info,
                                   grpc_closure* then_call_closure) {
  const uint64_t request_size = GetOutgoingDataSize(final_info);
  const uint64_t response_size = GetIncomingDataSize(final_info);
  double latency_ms = absl::ToDoubleMilliseconds(absl::Now() - start_time_);
  ::opencensus::stats::Record(
      {{RpcClientSentBytesPerRpc(), static_cast<double>(request_size)},
       {RpcClientReceivedBytesPerRpc(), static_cast<double>(response_size)},
       {RpcClientRoundtripLatency(), latency_ms},
       {RpcClientServerLatency(),
        ToDoubleMilliseconds(absl::Nanoseconds(elapsed_time_))},
       {RpcClientSentMessagesPerRpc(), sent_message_count_},
       {RpcClientReceivedMessagesPerRpc(), recv_message_count_}},
      {{ClientMethodTagKey(), method_},
       {ClientStatusTagKey(), StatusCodeToString(final_info->final_status)}});
  grpc_slice_unref_internal(path_);
  context_.EndSpan();
}
    
    
    {}  // namespace grpc

    
    
    {}  // namespace grpc
    
    // Force InitProtoReflectionServerBuilderPlugin() to be called at static
// initialization time.
struct StaticProtoReflectionPluginInitializer {
  StaticProtoReflectionPluginInitializer() {
    InitProtoReflectionServerBuilderPlugin();
  }
} static_proto_reflection_plugin_initializer;
    
    class DynamicThreadPool final : public ThreadPoolInterface {
 public:
  explicit DynamicThreadPool(int reserve_threads);
  ~DynamicThreadPool();
    }
    
    // Read through the first n keys repeatedly and check that they get
// compacted (verified by checking the size of the key space).
void AutoCompactTest::DoReads(int n) {
  std::string value(kValueSize, 'x');
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
    }
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta);
    
      // Make multiple inputs so we need to compact.
  for (int i = 0; i < 2; i++) {
    Build(10);
    dbi->TEST_CompactMemTable();
    Corrupt(kTableFile, 100, 1);
    env_.SleepForMicroseconds(100000);
  }
  dbi->CompactRange(nullptr, nullptr);
    
    #include <algorithm>
#include <set>
#include <string>
#include <vector>
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
Iterator* NewDBIterator(DBImpl* db,
                        const Comparator* user_key_comparator,
                        Iterator* internal_iter,
                        SequenceNumber sequence,
                        uint32_t seed);
    
      // Return the user key
  Slice user_key() const { return Slice(kstart_, end_ - kstart_ - 8); }
    
    static std::string MakeFileName(const std::string& dbname, uint64_t number,
                                const char* suffix) {
  char buf[100];
  snprintf(buf, sizeof(buf), '/%06llu.%s',
           static_cast<unsigned long long>(number),
           suffix);
  return dbname + buf;
}
    
    
    {
    {
    {      default: {
        char buf[40];
        snprintf(buf, sizeof(buf), 'unknown record type %u', record_type);
        ReportCorruption(
            (fragment.size() + (in_fragmented_record ? scratch->size() : 0)),
            buf);
        in_fragmented_record = false;
        scratch->clear();
        break;
      }
    }
  }
  return false;
}
    
    size_t MemTable::ApproximateMemoryUsage() { return arena_.MemoryUsage(); }
    
    #include <string>
#include 'leveldb/db.h'
#include 'db/dbformat.h'
#include 'db/skiplist.h'
#include 'util/arena.h'
    
      std::string Get(const std::string& k, const Snapshot* snapshot = nullptr) {
    std::string result;
    Status s = db_->Get(ReadOptions(), k, &result);
    if (s.IsNotFound()) {
      result = 'NOT_FOUND';
    } else if (!s.ok()) {
      result = s.ToString();
    }
    return result;
  }
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
      /**
   * @brief Map a function across the set of configured files
   *
   * @param predicate is a function which accepts two parameters, the name of
   * the file category and a vector of files in that category. predicate will be
   * called on each pair in files_
   *
   * @code{.cpp}
   *   std::map<std::string, std::vector<std::string>> file_map;
   *   Config::get().files(
   *      ([&file_map](const std::string& category,
   *                   const std::vector<std::string>& files) {
   *        file_map[category] = files;
   *      }));
   * @endcode
   */
  void files(std::function<void(const std::string& category,
                                const std::vector<std::string>& files)>
                 predicate) const;
    
    #include <osquery/config/config.h>
#include <osquery/config/parsers/prometheus_targets.h>
#include <osquery/logger.h>
#include <osquery/registry_factory.h>
    
    
    {
    {      // View has been updated
      osquery::query('DROP VIEW ' + name, r);
      auto s = osquery::query('CREATE VIEW ' + name + ' AS ' + query, r);
      if (s.ok()) {
        setDatabaseValue(kQueries, kConfigViews + name, query);
      } else {
        LOG(INFO) << 'Error creating view (' << name << '): ' << s.getMessage();
      }
    }
  }
    
    Follow* Follow::createWithOffset(Node* followedNode,float xOffset,float yOffset,const Rect& rect/*= Rect::ZERO*/){
    
    
    Follow *follow = new (std::nothrow) Follow();
    
    bool valid;
    
    if(follow)
        valid = follow->initWithTargetAndOffset(followedNode, xOffset, yOffset,rect);
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    CatmullRomTo* CatmullRomTo::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) CatmullRomTo();
    a->initWithDuration(this->_duration, this->_points->clone());
    a->autorelease();
    return a;
}
    
    void ActionEase::startWithTarget(Node *target)
{
    if (target && _inner)
    {
        ActionInterval::startWithTarget(target);
        _inner->startWithTarget(_target);
    }
    else
    {
        log('ActionEase::startWithTarget error: target or _inner is nullptr!');
    }
}
    
    
// implementation of Lens3D
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(Lens3D);
};
    
        // actions
    
    /** Adds an action with a target. 
     If the target is already present, then the action will be added to the existing target.
     If the target is not present, a new instance of this target will be created either paused or not, and the action will be added to the newly created target.
     When the target is paused, the queued actions won't be 'ticked'.
     *
     * @param action    A certain action.
     * @param target    The target which need to be added an action.
     * @param paused    Is the target paused or not.
     */
    virtual void addAction(Action *action, Node *target, bool paused);
    
    /**
@brief ShakyTiles3D action.
@details This action is make the target node shake with many tiles.
        You can create the action by these parameters:
        duration, grid size, range, whether shake on the z axis.
 */
class CC_DLL ShakyTiles3D : public TiledGrid3DAction
{
public:
    /** 
    @brief Create the action with a range, shake Z vertices, a grid and duration.
    @param duration Specify the duration of the ShakyTiles3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param range Specify the range of the shaky effect.
    @param shakeZ Specify whether shake on the z axis.
    @return If the creation success, return a pointer of ShakyTiles3D action; otherwise, return nil.
    */
    static ShakyTiles3D* create(float duration, const Size& gridSize, int range, bool shakeZ);
    }
    
    #include 'platform/CCPlatformConfig.h'
#include 'base/CCRef.h'
#include 'base/CCValue.h'
#include 'base/CCVector.h'
#include '2d/CCSpriteFrame.h'
    
        /** Chars per row. */
    int    _itemsPerRow;
    /** Chars per column. */
    int    _itemsPerColumn;
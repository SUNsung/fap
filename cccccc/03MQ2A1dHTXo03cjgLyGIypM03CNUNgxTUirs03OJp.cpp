
        
        // Get string from resource_id.
base::StringPiece GetStringResource(int resource_id);
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    
    {  template<typename T> bool RemoveListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i!=listerners_.end()) {
      delete i->second;
      listerners_.erase(i);
      return true;
    }
    return false;
  }
private:
  DISALLOW_COPY_AND_ASSIGN(EventListener);
};
    
    class ObjectManager;
    
    void Menu::Remove(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.erase(begin+pos);
  gtk_container_remove(GTK_CONTAINER(menu_), menu_item->menu_item_);
}
    
      std::string icon;
  if (option.GetString('icon', &icon) && !icon.empty())
    SetIcon(icon);
    
     protected:
  ~NwAppClearCacheFunction() override;
    
    NwObjCallObjectMethodFunction::~NwObjCallObjectMethodFunction() {
}
    
    #ifndef TEST_QPS_DRIVER_H
#define TEST_QPS_DRIVER_H
    
    #ifndef GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
#define GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    inline grpc::string GetJSServiceFilename(const grpc::string& filename) {
  return grpc_generator::StripProto(filename) + '_grpc_pb.js';
}
    
    
    {}  // namespace grpc_python_generator
    
    AuthPropertyIterator SecureAuthContext::begin() const {
  if (ctx_) {
    grpc_auth_property_iterator iter =
        grpc_auth_context_property_iterator(ctx_);
    const grpc_auth_property* property =
        grpc_auth_property_iterator_next(&iter);
    return AuthPropertyIterator(property, &iter);
  } else {
    return end();
  }
}
    
    namespace grpc {
namespace {
    }
    }
    
    #include 'test/cpp/interop/server_helper.h'
#include 'test/cpp/util/test_config.h'
    
    grpc::string DescribeServiceList(std::vector<grpc::string> service_list,
                                 grpc::protobuf::DescriptorPool& desc_pool) {
  std::stringstream result;
  for (auto it = service_list.begin(); it != service_list.end(); it++) {
    auto const& service = *it;
    const grpc::protobuf::ServiceDescriptor* service_desc =
        desc_pool.FindServiceByName(service);
    if (service_desc != nullptr) {
      result << DescribeService(service_desc);
    }
  }
  return result.str();
}
    
    
    {  FileMetaData() : refs(0), allowed_seeks(1 << 30), file_size(0) { }
};
    
    #include 'helpers/memenv/memenv.h'
    
      // count the keys
  leveldb::Iterator* iter = db->NewIterator(leveldb::ReadOptions());
  size_t num_keys = 0;
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    num_keys++;
  }
  delete iter;
  ASSERT_EQ(kNumKeys, num_keys) << 'Bad number of keys';
    
    class CRC { };
    
    void Histogram::Merge(const Histogram& other) {
  if (other.min_ < min_) min_ = other.min_;
  if (other.max_ > max_) max_ = other.max_;
  num_ += other.num_;
  sum_ += other.sum_;
  sum_squares_ += other.sum_squares_;
  for (int b = 0; b < kNumBuckets; b++) {
    buckets_[b] += other.buckets_[b];
  }
}
    
      enum { kNumBuckets = 154 };
  static const double kBucketLimit[kNumBuckets];
  double buckets_[kNumBuckets];
    
    TEST(AutoCompactTest, ReadHalf) {
  DoReads(kCount/2);
}
    
    void DBIter::SeekToFirst() {
  direction_ = kForward;
  ClearSavedValue();
  iter_->SeekToFirst();
  if (iter_->Valid()) {
    FindNextUserEntry(false, &saved_key_ /* temporary storage */);
  } else {
    valid_ = false;
  }
}
    
    const char* InternalKeyComparator::Name() const {
  return 'leveldb.InternalKeyComparator';
}
    
    extern JSClass  *jsb_cocostudio_timeline_SkeletonNode_class;
extern JSObject *jsb_cocostudio_timeline_SkeletonNode_prototype;
    
    
    
        void initShader( void );
public:
    GLESDebugDraw();
    
    			b2Vec2 vertices[3];
			vertices[0] = b2Mul(xf1, b2Vec2(-1.0f, 0.0f));
			vertices[1] = b2Mul(xf1, b2Vec2(1.0f, 0.0f));
			vertices[2] = b2Mul(xf1, b2Vec2(0.0f, 0.5f));
			
			b2PolygonShape poly1;
			poly1.Set(vertices, 3);
    
    
    {		Test::Step(settings);
	}
    
    class TestWriteChainAsyncTransportWrapper :
  public WriteChainAsyncTransportWrapper<folly::AsyncTransportWrapper> {
 public:
  TestWriteChainAsyncTransportWrapper() :
    WriteChainAsyncTransportWrapper<folly::AsyncTransportWrapper>(nullptr) {}
    }
    
        // The fifth element has '3'
    buf = IOBuf::create(40);
    app = Appender{buf.get(), 0};
    app.push(StringPiece('3'));
    chain->prependChain(std::move(buf));
    
    FOLLY_ALWAYS_INLINE int __builtin_ctz(unsigned int x) {
  unsigned long index;
  return int(_BitScanForward(&index, (unsigned long)x) ? index : 32);
}
    
    #ifndef HAZPTR_TC
    
    /**
  Make a completed void Future.
    
    TEST(Collect, collectAllVariadicReferences) {
  Promise<bool> pb;
  Promise<int> pi;
  Future<bool> fb = pb.getFuture();
  Future<int> fi = pi.getFuture();
  bool flag = false;
  collectAll(fb, fi)
    .then([&](std::tuple<Try<bool>, Try<int>> tup) {
      flag = true;
      EXPECT_TRUE(std::get<0>(tup).hasValue());
      EXPECT_EQ(std::get<0>(tup).value(), true);
      EXPECT_TRUE(std::get<1>(tup).hasValue());
      EXPECT_EQ(std::get<1>(tup).value(), 42);
    });
  pb.setValue(true);
  EXPECT_FALSE(flag);
  pi.setValue(42);
  EXPECT_TRUE(flag);
}
    
    
    {  cerr << 'SSLClientTest test completed' << endl;
}
    
    
Handle<Value> DBWrapper::New(const Arguments& args) {
  HandleScope scope;
  Handle<Value> to_return;
    }
    
    
    {}  // namespace rocksdb
    
    // Used to encapsulate a particular instance of an opened database.
//
// This object should not be used directly in C++; it exists solely to provide
// a mapping from a JavaScript object to a C++ code that can use the RocksDB
// API.
class DBWrapper : public node::ObjectWrap {
  public:
    static void Init(Handle<Object> exports);
    }
    
    SyncPoint* SyncPoint::GetInstance() {
  static SyncPoint sync_point;
  return &sync_point;
}
    
      void LoadDependency(const std::vector<SyncPointPair>& dependencies);
  void LoadDependencyAndMarkers(const std::vector<SyncPointPair>& dependencies,
    const std::vector<SyncPointPair>& markers);
  bool PredecessorsAllCleared(const std::string& point);
  void SetCallBack(const std::string& point,
    const std::function<void(void*)>& callback) {
  std::lock_guard<std::mutex> lock(mutex_);
  callbacks_[point] = callback;
}
    
    inline
bool BlockFetcher::TryGetCompressedBlockFromPersistentCache() {
  if (cache_options_.persistent_cache &&
      cache_options_.persistent_cache->IsCompressed()) {
    // lookup uncompressed cache mode p-cache
    status_ = PersistentCacheHelper::LookupRawPage(
        cache_options_, handle_, &heap_buf_, block_size_ + kBlockTrailerSize);
    if (status_.ok()) {
      used_buf_ = heap_buf_.get();
      slice_ = Slice(heap_buf_.get(), block_size_);
      return true;
    } else if (!status_.IsNotFound() && ioptions_.info_log) {
      assert(!status_.ok());
      ROCKS_LOG_INFO(ioptions_.info_log,
                     'Error reading from persistent cache. %s',
                     status_.ToString().c_str());
    }
  }
  return false;
}
    
    // Open the db inside DateTieredDBImpl because options needs pointer to its ttl
DateTieredDBImpl::DateTieredDBImpl(
    DB* db, Options options,
    const std::vector<ColumnFamilyDescriptor>& descriptors,
    const std::vector<ColumnFamilyHandle*>& handles, int64_t ttl,
    int64_t column_family_interval)
    : db_(db),
      cf_options_(ColumnFamilyOptions(options)),
      ioptions_(ImmutableCFOptions(options)),
      icomp_(cf_options_.comparator),
      ttl_(ttl),
      column_family_interval_(column_family_interval),
      mutex_(options.statistics.get(), db->GetEnv(), DB_MUTEX_WAIT_MICROS,
             options.use_adaptive_mutex) {
  latest_timebound_ = std::numeric_limits<int64_t>::min();
  for (size_t i = 0; i < handles.size(); ++i) {
    const auto& name = descriptors[i].name;
    int64_t timestamp = 0;
    try {
      timestamp = ParseUint64(name);
    } catch (const std::invalid_argument&) {
      // Bypass unrelated column family, e.g. default
      db_->DestroyColumnFamilyHandle(handles[i]);
      continue;
    }
    if (timestamp > latest_timebound_) {
      latest_timebound_ = timestamp;
    }
    handle_map_.insert(std::make_pair(timestamp, handles[i]));
  }
}
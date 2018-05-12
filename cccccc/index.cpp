
        
            // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    
    {  ASSERT_TRUE(message.ParseFromString(data));
  EXPECT_TRUE(message.has_any_value());
  ASSERT_TRUE(message.any_value().UnpackTo(&any));
  ASSERT_TRUE(any.UnpackTo(&submessage));
  EXPECT_EQ(12345, submessage.int32_value());
}
    
    
    {
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__

    
    void RepeatedEnumFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.ForEnum($tag$, x => (int) x, x => ($type_name$) x);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_MESSAGE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_MESSAGE_FIELD_H__
    
    // ===================================================================
    
      virtual ServiceGenerator* NewServiceGenerator(
      const ServiceDescriptor* descriptor) const = 0;
    
      printer->Print(variables_,
    // If this builder is non-null, it is used and the other fields are
    // ignored.
    'private com.google.protobuf.SingleFieldBuilder$ver$<\n'
    '    $type$, $type$.Builder, $type$OrBuilder> $name$Builder_;'
    '\n');
    
      uint16_t fid = unpackFunctionId(msg);
  assert(fid == 1);
    
    using namespace std;
    
    namespace at {
    }
    
      template<typename T>
  void allGatherT(std::vector<at::Tensor>& output,
                  at::Tensor& input, THDGroup group_id);
    
    using key_type = std::tuple<
  CollectiveType, // operation
  THDGroup,       // group
  DeviceType,     // tensors device type
  int,            // CUDA stream id used in the algorithm
  std::size_t,    // input buffer bytes
  std::size_t,    // output buffer bytes
  THDReduceOp,    // reduce op
  rank_type       // src/dest rank
>;
    
    #undef THPStorage_
#undef THPStorage
#undef THPStorageBaseStr
#undef THPStorageStr
#undef THPStorageClass
#undef THPStorageType
    
    namespace leveldb {
    }
    
    BlockBuilder::BlockBuilder(const Options* options)
    : options_(options),
      restarts_(),
      counter_(0),
      finished_(false) {
  assert(options->block_restart_interval >= 1);
  restarts_.push_back(0);       // First restart point is at offset 0
}
    
      // Read the block contents as well as the type/crc footer.
  // See table_builder.cc for the code that built this structure.
  size_t n = static_cast<size_t>(handle.size());
  char* buf = new char[n + kBlockTrailerSize];
  Slice contents;
  Status s = file->Read(handle.offset(), n + kBlockTrailerSize, &contents, buf);
  if (!s.ok()) {
    delete[] buf;
    return s;
  }
  if (contents.size() != n + kBlockTrailerSize) {
    delete[] buf;
    return Status::Corruption('truncated block read');
  }
    
    
    {
}  // namespace leveldb

    
    class HASH { };
    
    #ifndef STORAGE_LEVELDB_UTIL_HISTOGRAM_H_
#define STORAGE_LEVELDB_UTIL_HISTOGRAM_H_
    
    
    {  // Skewed: pick 'base' uniformly from range [0,max_log] and then
  // return 'base' random bits.  The effect is to pick a number in the
  // range [0,2^max_log-1] with exponential bias towards smaller numbers.
  uint32_t Skewed(int max_log) {
    return Uniform(1 << Uniform(max_log + 1));
  }
};
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
    namespace log {
    }
    
    extern JSClass  *jsb_cocosbuilder_CCBAnimationManager_class;
extern JSObject *jsb_cocosbuilder_CCBAnimationManager_prototype;
    
    #if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_setGravity'', nullptr);
        return 0;
    }
#endif
    
    
    
    	void Step(Settings* settings)
	{
		// Drive the kinematic body.
		if (m_platform->GetType() == b2_kinematicBody)
		{
			b2Vec2 p = m_platform->GetTransform().p;
			b2Vec2 v = m_platform->GetLinearVelocity();
    }
    }
    
    Range<AsyncIO::Op**> AsyncIO::cancel() {
  CHECK(ctx_);
  auto p = pending_.load(std::memory_order_acquire);
  return doWait(WaitType::CANCEL, p, p, canceled_);
}
    
    namespace {
    }
    
    // Get raw huge page sizes (without mount points, they'll be filled later)
HugePageSizeVec readRawHugePageSizes() {
  // We need to parse file names from /sys/kernel/mm/hugepages
  static const boost::regex regex(R'!(hugepages-(\d+)kB)!');
  boost::smatch match;
  HugePageSizeVec vec;
  fs::path path('/sys/kernel/mm/hugepages');
  for (fs::directory_iterator it(path); it != fs::directory_iterator(); ++it) {
    std::string filename(it->path().filename().string());
    if (boost::regex_match(filename, match, regex)) {
      StringPiece numStr(
          filename.data() + match.position(1), size_t(match.length(1)));
      vec.emplace_back(to<size_t>(numStr) * 1024);
    }
  }
  return vec;
}
    
     private:
  class Context;
    
    
    {
    {template <typename T>
Observer<T> SimpleObservable<T>::getObserver() {
  std::call_once(observerInit_, [&]() {
    SimpleObservable<T>::Wrapper wrapper;
    wrapper.context = context_;
    ObserverCreator<SimpleObservable<T>::Wrapper> creator(std::move(wrapper));
    observer_ = std::move(creator).getObserver();
  });
  return *observer_;
}
} // namespace observer
} // namespace folly

    
     private:
  struct Context {
    folly::Synchronized<std::shared_ptr<const T>> value_;
    folly::Synchronized<folly::Function<void()>> callback_;
  };
  struct Wrapper;
  std::shared_ptr<Context> context_;
    
    namespace folly {
namespace observer_detail {
    }
    }
    
    template <typename NodeId>
class GraphCycleDetector {
  using NodeSet = std::unordered_set<NodeId>;
    }
    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
    namespace aria2 {
    }
    
    // DiskwriterFactory class template to create DiskWriter derived
// object, ignoring filename.
template <class DiskWriterType>
class AnonDiskWriterFactory : public DiskWriterFactory {
public:
  AnonDiskWriterFactory() = default;
  virtual ~AnonDiskWriterFactory() = default;
    }
    
    #include 'Notifier.h'
    
      bool tryAsFingerprint(const std::string& fingerprint);
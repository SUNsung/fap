
        
        
    {
    {      options |= TypeResolutionFlags::AllowUnavailableProtocol;
    } else {
      dc = typeDecl->getDeclContext();
    }
  } else {
    auto ext = decl.get<ExtensionDecl *>();
    dc = ext;
    options |= TypeResolutionFlags::AllowUnavailableProtocol;
  }
    
      virtual void failed(StringRef error) = 0;
  virtual void warning(StringRef warning) {}
    
        bool failed = false;
    StdlibGroupsIndexRecordingConsumer groupIndexConsumer([&](StringRef groupName, SymbolTracker &tracker) -> bool {
      SmallString<128> moduleName;
      makeSubmoduleNameFromGroupName(groupName, moduleName);
      SmallString<256> fileNameWithGroup = filename;
      appendGroupNameForFilename(groupName, fileNameWithGroup);
    }
    
    
    {  return new (Context) AvailableAttr(
      SourceLoc(), SourceRange(), Platform,
      /*Message=*/StringRef(),
      /*Rename=*/StringRef(),
        Introduced, /*IntroducedRange=*/SourceRange(),
        Deprecated, /*DeprecatedRange=*/SourceRange(),
        Obsoleted, /*ObsoletedRange=*/SourceRange(),
      Inferred.PlatformAgnostic, /*Implicit=*/true);
}
    
      /// Retrieve the _BridgedStoredNSError._nsError requirement.
  VarDecl *getNSErrorRequirement(SILLocation loc);
    
    				if (found) {
    }
    
    	Ref<AudioStreamOGGVorbis> ogg_stream;
	ogg_stream.instance();
    
    void DampedSpringJoint2D::set_rest_length(real_t p_rest_length) {
    }
    
    
    {	CPUParticlesEditorPlugin(EditorNode *p_node);
	~CPUParticlesEditorPlugin();
};
    
    	EditorFileDialog *file;
	EditorNode *editor;
    
    	Variant arr = get_array();
	arr.set(p_idx, p_value);
	Object *o = ObjectDB::get_instance(obj);
	if (!o)
		return;
    
    EditorDirDialog::EditorDirDialog() {
    }
    
    ResourceImporterTexture::~ResourceImporterTexture() {
    }
    
    String ResourceImporterTextureAtlas::get_save_extension() const {
	return 'res';
}
    
    #define fail_due_to_user_error(msg, ...) do {  \
        report_user_error(msg, ##__VA_ARGS__); \
        BREAKPOINT;                            \
        exit(EXIT_FAILURE);                    \
    } while (0)
    
    bool store_t::mark_index_up_to_date(uuid_u id,
                                    buf_lock_t *sindex_block,
                                    const key_range_t &except_for_remaining_range)
    THROWS_NOTHING {
    secondary_index_t sindex;
    bool found = ::get_secondary_index(sindex_block, id, &sindex);
    }
    
                scoped_ptr_t<txn_t> txn;
            {
                scoped_ptr_t<real_superblock_t> super_block;
    }
    
    #if !GTEST_OS_SYMBIAN
# include <utility>
#endif
    
      const InterceptMode intercept_mode_;
  TestPartResultReporterInterface* old_reporter_;
  TestPartResultArray* const result_;
    
    // The 'Types' template argument below must have spaces around it
// since some compilers may choke on '>>' when passing a template
// instance (e.g. Types<int>)
# define TYPED_TEST_CASE(CaseName, Types) \
  typedef ::testing::internal::TypeList< Types >::type \
      GTEST_TYPE_PARAMS_(CaseName)
    
      // Returns true if any test in this test case should run.
  bool should_run() const { return should_run_; }
    
    
    {  static const bool value =
      sizeof(Helper(ImplicitlyConvertible::MakeFrom())) == 1;
# pragma warning(pop)           // Restores the warning state.
#elif defined(__BORLANDC__)
  // C++Builder cannot use member overload resolution during template
  // instantiation.  The simplest workaround is to use its C++0x type traits
  // functions (C++Builder 2009 and above only).
  static const bool value = __is_convertible(From, To);
#else
  static const bool value =
      sizeof(Helper(ImplicitlyConvertible::MakeFrom())) == 1;
#endif  // _MSV_VER
};
template <typename From, typename To>
const bool ImplicitlyConvertible<From, To>::value;
    
      void onReceived(const DHTPingReplyMessage* message);
    
    const std::string& DHTResponseMessage::getType() const { return R; }
    
    bool DHTRoutingTable::addNode(const std::shared_ptr<DHTNode>& node, bool good)
{
  A2_LOG_DEBUG(fmt('Trying to add node:%s', node->toString().c_str()));
  if (*localNode_ == *node) {
    A2_LOG_DEBUG('Adding node with the same ID with localnode is not allowed.');
    return false;
  }
  auto treeNode = dht::findTreeNodeFor(root_.get(), node->getID());
  while (1) {
    const std::shared_ptr<DHTBucket>& bucket = treeNode->getBucket();
    if (bucket->addNode(node)) {
      A2_LOG_DEBUG('Added DHTNode.');
      return true;
    }
    else if (bucket->splitAllowed()) {
      A2_LOG_DEBUG(fmt('Splitting bucket. Range:%s-%s',
                       util::toHex(bucket->getMinID(), DHT_ID_LENGTH).c_str(),
                       util::toHex(bucket->getMaxID(), DHT_ID_LENGTH).c_str()));
      treeNode->split();
      ++numBucket_;
      if (treeNode->getLeft()->isInRange(node->getID())) {
        treeNode = treeNode->getLeft();
      }
      else {
        treeNode = treeNode->getRight();
      }
    }
    else {
      if (good) {
        bucket->cacheNode(node);
        A2_LOG_DEBUG(fmt('Cached node=%s', node->toString().c_str()));
      }
      return false;
    }
  }
  return false;
}
    
    #define READ_CHECK(fp, ptr, count)                                             \
  if (fp.read((ptr), (count)) != (count)) {                                    \
    throw DL_ABORT_EX('Failed to load DHT routing table.');                    \
  }
    
    
    {  virtual void addImmediateTask(const std::shared_ptr<DHTTask>& task) = 0;
};
    
      virtual ~DHTTaskQueueImpl();
    
    class DHTTokenTracker {
private:
  static const size_t SECRET_SIZE = 4;
    }
    
    /*
 * An extent allocator that initially allocates from a fixed range (probably
 * backed by special mappings such as huge pages), and falls back to normal
 * mappings when the initial range runs out. Pages in the range are never
 * returned to the system, so be careful if memory is tight.
 */
struct RangeFallbackExtentAllocator : RangeState {
 public:
  // Only one range allowed, must initialize at the beginning.  Add mappers
  // later.
  template<typename... Args>
  explicit RangeFallbackExtentAllocator(Args&&... args)
    : RangeState(std::forward<Args>(args)...) {}
    }
    
    inline TypedValue ExecutionContext::invokeMethod(
  ObjectData* obj,
  const Func* meth,
  InvokeArgs args,
  bool dynamic
) {
  return invokeFuncFew(
    meth,
    ActRec::encodeThis(obj),
    nullptr /* invName */,
    args.size(),
    args.start(),
    dynamic
  );
}
    
      // Completion suggestion types, from protocol.
  static constexpr char* CompletionTypeFn = 'function';
  static constexpr char* CompletionTypeVar = 'variable';
  static constexpr char* CompletionTypeClass = 'class';
  static constexpr char* CompletionTypeProp = 'property';
  static constexpr char* CompletionTypeKeyword = 'keyword';
  static constexpr char* CompletionTypeValue = 'value';
    
    #include 'hphp/runtime/debugger/cmd/cmd_info.h'
#include 'hphp/runtime/ext/reflection/ext_reflection.h'
#include 'hphp/runtime/ext/vsdebug/debugger.h'
#include 'hphp/runtime/ext/vsdebug/command.h'
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    
    {
    {    loadGenFrame<async>(v, r_svcreq_arg(0));
    v << copy{rvmfp(), r_svcreq_arg(1)};
    v << fallthru{r_svcreq_arg(0) | r_svcreq_arg(1)};
  });
  svcreq::emit_persistent(cb, data, folly::none, REQ_POST_INTERP_RET);
  return start;
}
    
      // Write 100K keys, these are written to a few files in L0.
  const std::string value(10, 'x');
  for (int i = 0; i < 100000; i++) {
    char key[100];
    snprintf(key, sizeof(key), 'B%010d', i);
    Put(1, key, value);
  }
  ASSERT_OK(Flush(1));
    
    int main(int argc, char** argv) {
#if !defined(ROCKSDB_LITE)
  rocksdb::port::InstallStackTraceHandler();
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
#else
  (void) argc;
  (void) argv;
  return 0;
#endif
}

    
    
    {  Status NewLogger(const std::string& fname,
                   std::shared_ptr<Logger>* result) override {
    PERF_TIMER_GUARD(env_new_logger_nanos);
    return EnvWrapper::NewLogger(fname, result);
  }
};
    
    
    {}  // namespace rocksdb

    
    bool WriteController::IsStopped() const {
  return total_stopped_.load(std::memory_order_relaxed) > 0;
}
// This is inside DB mutex, so we can't sleep and need to minimize
// frequency to get time.
// If it turns out to be a performance issue, we can redesign the thread
// synchronization model here.
// The function trust caller will sleep micros returned.
uint64_t WriteController::GetDelay(Env* env, uint64_t num_bytes) {
  if (total_stopped_.load(std::memory_order_relaxed) > 0) {
    return 0;
  }
  if (total_delayed_.load(std::memory_order_relaxed) == 0) {
    return 0;
  }
    }
    
    // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
    using namespace rocksdb;
    
    struct UndumpOptions {
  // Database that we will load the dumped file into
  std::string db_path;
  // File location of the dumped file that will be loaded
  std::string dump_location;
  // Compact the db after loading the dumped file
  bool compact_db = false;
};
    
    #include <stdint.h>
#include <memory>
#include <string>
    
    #ifdef LUA
#include <string>
#include <vector>

        
        #include <set>
    
    // static
void CallbackHolderBase::FirstWeakCallback(
    const v8::WeakCallbackInfo<CallbackHolderBase>& data) {
  data.GetParameter()->v8_ref_.Reset();
  data.SetSecondPassCallback(SecondWeakCallback);
}
    
    // static
void CertificateManagerModel::DidGetCertDBOnIOThread(
    const CreationCallback& callback,
    net::NSSCertDatabase* cert_db) {
  DCHECK_CURRENTLY_ON(BrowserThread::IO);
    }
    
    #include 'base/bind.h'
#include 'native_mate/function_template.h'
    
    bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv) {
  const base::CommandLine::StringType dashdash(2, '-');
  bool block_args = false;
  for (int i = 0; i < argc; ++i) {
    if (argv[i] == dashdash)
      break;
    if (block_args) {
      return false;
    } else if (IsUrlArg(argv[i])) {
      block_args = true;
    }
  }
  return true;
}
    
    
    {}  // namespace
    
    
    {  // Any fields
  RunValidTextFormatTest('AnyField', REQUIRED,
                         R'(
      optional_any: {
        [type.googleapis.com/protobuf_test_messages.proto3.TestAllTypesProto3] {
          optional_int32: 12345
        }
      }
      )');
  RunValidTextFormatTest('AnyFieldWithRawBytes', REQUIRED,
                         R'(
      optional_any: {
        type_url: 'type.googleapis.com/protobuf_test_messages.proto3.TestAllTypesProto3'
        value: '\b\271`'
      }
      )');
  ExpectParseFailure('AnyFieldWithInvalidType', REQUIRED,
                     R'(
      optional_any: {
        [type.googleapis.com/unknown] {
          optional_int32: 12345
        }
      }
      )');
}
    
    
    {  // Strong, owned reference to the parent message. Never NULL.
  CMessage* parent;
} ExtensionDict;
    
    static PyObject* GetFieldNumber(PyUnknownFieldRef* self, void *closure) {
  const UnknownField* unknown_field = GetUnknownField(self);
  if (unknown_field == NULL) {
    return NULL;
  }
  return PyInt_FromLong(unknown_field->number());
}
    
    PROTOBUF_NOINLINE
void* ArenaImpl::AllocateAlignedAndAddCleanupFallback(size_t n,
                                                      void (*cleanup)(void*)) {
  return GetSerialArena()->AllocateAlignedAndAddCleanup(n, cleanup);
}
    
    
    { private:
  class NewDeleteCapture {
   public:
    // TOOD(xiaofeng): Implement this for opensource protobuf.
    void Hook() {}
    void Unhook() {}
    int alloc_count() { return 0; }
    int free_count() { return 0; }
  } capture_alloc;
};
    
    // Several code generators treat the parameter argument as holding a
// list of options separated by commas.  This helper function parses
// a set of comma-delimited name/value pairs: e.g.,
//   'foo=bar,baz,qux=corge'
// parses to the pairs:
//   ('foo', 'bar'), ('baz', ''), ('qux', 'corge')
PROTOC_EXPORT void ParseGeneratorParameter(
    const std::string&, std::vector<std::pair<std::string, std::string> >*);
    
    struct FieldGeneratorInfo;
struct OneofGeneratorInfo;
// A context object holds the information that is shared among all code
// generators.
class Context {
 public:
  Context(const FileDescriptor* file, const Options& options);
  ~Context();
    }
    
      const std::string& java_package() { return java_package_; }
  const std::string& classname() { return classname_; }
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_enum_field.h>
#include <google/protobuf/compiler/java/java_extension.h>
#include <google/protobuf/compiler/java/java_extension_lite.h>
#include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_message.h>
#include <google/protobuf/compiler/java/java_message_lite.h>
#include <google/protobuf/compiler/java/java_service.h>
    
    // TODO(ctiller): leaked objects in this test
TEST_P(ShutdownTest, ShutdownTest) {
  ResetStub();
    }
    
      /* Use dualstack sockets where available. */
  if (grpc_sockaddr_to_v4mapped(addr, &addr6_v4mapped)) {
    addr = &addr6_v4mapped;
  }
    
        SendHealthCheckRpc('', Status::OK, HealthCheckResponse::NOT_SERVING);
    SendHealthCheckRpc(kHealthyService, Status::OK,
                       HealthCheckResponse::NOT_SERVING);
    SendHealthCheckRpc(kUnhealthyService, Status::OK,
                       HealthCheckResponse::NOT_SERVING);
    SendHealthCheckRpc(kNotRegisteredService,
                       Status(StatusCode::NOT_FOUND, ''));
    
      std::vector<grpc::string> services;
  desc_db_->GetServices(&services);
  // The service list has at least one service (reflection servcie).
  EXPECT_TRUE(services.size() > 0);
    
      /* Get stream dict */
  thumb.fetch(xref, &fetched_thumb);
  if (!fetched_thumb.isStream()) {
    fetched_thumb.free();
    return gFalse;
  }
    
      base = 0;
  interval = NULL;
  for (i = 0; i < intervals.getLength(); i++) {
    interval = (Interval *) intervals.get(i);
    if (base <= index && index < base + interval->length)
      break;
    base += interval->length;
  }
    
      // refill buffer after inline image data
  if (inlineImg == 2) {
    buf1.free();
    buf2.free();
    lexer->getObj(&buf1);
    lexer->getObj(&buf2);
    inlineImg = 0;
  }
    
      // repeat count, can be real values, 0 means forever
  double repeatCount;                      // 1.0
    
    class StandardSecurityHandler: public SecurityHandler {
public:
    }
    
        // non-transactional
    N_INSERT,
    N_UPDATE,
    N_INCDEC,
    N_DELETE,
    N_REPLACE,
    N_SELECT,
    
      /* Get <Header> element */
  head = nullptr;
  trav = env->children;
  while (trav != nullptr && trav->type != XML_ELEMENT_NODE) {
    trav = trav->next;
  }
  if (trav != nullptr && node_is_equal_ex(trav,'Header',envelope_ns)) {
    head = trav;
    trav = trav->next;
  }
    
      bool operator==(const std::string &v) const { return compare(v) == 0;}
  bool operator!=(const std::string &v) const { return compare(v) != 0;}
  bool operator>=(const std::string &v) const { return compare(v) >= 0;}
  bool operator<=(const std::string &v) const { return compare(v) <= 0;}
  bool operator> (const std::string &v) const { return compare(v) >  0;}
  bool operator< (const std::string &v) const { return compare(v) <  0;}
    
    #endif
    
    namespace HPHP {
    }
    
    /**
 * Java-like base class for synchronization between object methods within the
 * same class. Check pool.h for a typical example.
 */
struct Synchronizable {
  Synchronizable();
  virtual ~Synchronizable();
  Synchronizable(const Synchronizable&) = delete;
  Synchronizable& operator=(const Synchronizable&) = delete;
    }
    
    void APCGCManager::insert(Allocation r, APCHandle* root) {
  WriteLock l2(rootMapLock);
  FTRACE(4, 'Insert {} {} with root {}\n',
                            (void*)r.first, (void*)r.second, (void*)root);
  rootMap.emplace(r, root);
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
    
    #include <folly/Conv.h>
#include <folly/portability/Sockets.h>
    
    /*
 * Search path for the hhjs babel transform executable. Paths are formatted as
 * 'path1:path2:path3' etc. A path may be absolute like '/usr/bin/exe' or
 * relative, like '{}/my/relative/path/exe'. Paths with {} are relative to HHVM.
 */
folly::StringPiece hhjsBabelTransform();
    
    bool HHVM_FUNCTION(is_bool, const Variant& v);
bool HHVM_FUNCTION(is_int, const Variant& v);
bool HHVM_FUNCTION(is_float, const Variant& v);
bool HHVM_FUNCTION(is_numeric, const Variant& v);
bool HHVM_FUNCTION(is_string, const Variant& v);
bool HHVM_FUNCTION(is_scalar, const Variant& v);
bool HHVM_FUNCTION(is_array, const Variant& v);
// HH\\is_vec
bool HHVM_FUNCTION(HH_is_vec, const Variant& v);
bool HHVM_FUNCTION(is_object, const Variant& v);
bool HHVM_FUNCTION(is_resource, const Variant& v);
bool HHVM_FUNCTION(HH_is_meth_caller, TypedValue v);
    
      // No instructions in the middle of a block should have taken edges,
  // or be an unconditional Jmp.
  for (auto it = begin(b.hhbcs); it != end(b.hhbcs); ++it) {
    assert(it->op != Op::Jmp && 'unconditional Jmp mid-block');
    if (std::next(it) == end(b.hhbcs)) break;
    forEachTakenEdge(*it, [&](BlockId /*blk*/) {
      assert(!'Instruction in middle of block had a jump target');
    });
  }
    
        files_to_carve_dir_ = working_dir_ / 'files_to_carve';
    fs::create_directories(files_to_carve_dir_);
    
        // Parse the timestamp and compare.
    size_t last_executed = 0;
    try {
      last_executed = boost::lexical_cast<size_t>(content);
    } catch (const boost::bad_lexical_cast& /* e */) {
      // Erase the timestamp as is it potentially corrupt.
      deleteDatabaseValue(kPersistentSettings, 'timestamp.' + saved_query);
      continue;
    }
    
    TEST_F(PacksTests, test_sharding) {
  auto shard1 = getMachineShard('localhost.localdomain');
  auto shard2 = getMachineShard('not.localhost.localdomain');
  // Expect some static caching.
  EXPECT_EQ(shard1, shard2);
    }
    
    #include <boost/filesystem/path.hpp>
    
      // Open and close are not thread safe commands,
  // Before closing db you need to ensure that no other theads are currently
  // using db connection.
  // Please see comment above about reopening db.
  void close() override;
    
    
    {} // namespace osquery

    
    #include <osquery/core/sql/column.h>
#include <osquery/core/sql/query_data.h>
#include <osquery/plugins/plugin.h>
#include <osquery/utils/status/status.h>
    
      Status LockFile(const std::string& fname, FileLock** lock) override {
    auto status_and_enc_path = EncodePathWithNewBasename(fname);
    if (!status_and_enc_path.first.ok()) {
      return status_and_enc_path.first;
    }
    // FileLock subclasses may store path (e.g., PosixFileLock stores it). We
    // can skip stripping the chroot directory from this path because callers
    // shouldn't use it.
    return EnvWrapper::LockFile(status_and_enc_path.second, lock);
  }
    
    /*
 * Class:     org_rocksdb_CompactionJobStats
 * Method:    totalInputRawKeyBytes
 * Signature: (J)J
 */
jlong Java_org_rocksdb_CompactionJobStats_totalInputRawKeyBytes(
    JNIEnv*, jclass, jlong jhandle) {
  auto* compact_job_stats =
      reinterpret_cast<rocksdb::CompactionJobStats*>(jhandle);
  return static_cast<jlong>(
      compact_job_stats->total_input_raw_key_bytes);
}
    
    /*
 * Class:     org_rocksdb_Env
 * Method:    incBackgroundThreadsIfNeeded
 * Signature: (JIB)V
 */
void Java_org_rocksdb_Env_incBackgroundThreadsIfNeeded(
    JNIEnv*, jobject, jlong jhandle, jint jnum, jbyte jpriority_value) {
  auto* rocks_env = reinterpret_cast<rocksdb::Env*>(jhandle);
  rocks_env->IncBackgroundThreadsIfNeeded(static_cast<int>(jnum),
      rocksdb::PriorityJni::toCppPriority(jpriority_value));
}
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    setWriteGlobalSeqno
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_IngestExternalFileOptions_setWriteGlobalSeqno(
    JNIEnv*, jobject, jlong jhandle, jboolean jwrite_global_seqno) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  options->write_global_seqno = jwrite_global_seqno == JNI_TRUE;
}
    
        jobject jtable_properties = rocksdb::TablePropertiesJni::fromCppTableProperties(env, *(kv.second.get()));
    if (jtable_properties == nullptr) {
      // an error occurred
      env->DeleteLocalRef(jkey);
      return std::unique_ptr<std::pair<jobject, jobject>>(nullptr);
    }
    
    /*
 * Class:     org_rocksdb_SstFileManager
 * Method:    getTrackedFiles
 * Signature: (J)Ljava/util/Map;
 */
jobject Java_org_rocksdb_SstFileManager_getTrackedFiles(JNIEnv* env,
                                                        jobject /*jobj*/,
                                                        jlong jhandle) {
  auto* sptr_sst_file_manager =
      reinterpret_cast<std::shared_ptr<rocksdb::SstFileManager>*>(jhandle);
  auto tracked_files = sptr_sst_file_manager->get()->GetTrackedFiles();
    }
    
      //convert joperation_properties
  const jsize len = env->GetArrayLength(joperation_properties);
  const std::unique_ptr<uint64_t[]> op_properties(new uint64_t[len]);
  jlong* jop = env->GetLongArrayElements(joperation_properties, nullptr);
  if (jop == nullptr) {
    // exception thrown: OutOfMemoryError
    return nullptr;
  }
  for (jsize i = 0; i < len; i++) {
    op_properties[i] = static_cast<uint64_t>(jop[i]);
  }
  env->ReleaseLongArrayElements(joperation_properties, jop, JNI_ABORT);

        
        #include 'atom/browser/net/asar/asar_protocol_handler.h'
    
      // URLRequestSimpleJob:
  int GetRefCountedData(std::string* mime_type,
                        std::string* charset,
                        scoped_refptr<base::RefCountedMemory>* data,
                        const net::CompletionCallback& callback) const override;
    
    #include 'atom/browser/net/js_asker.h'
#include 'net/url_request/url_request_simple_job.h'
    
    namespace atom {
    }
    
    #include 'base/callback.h'
#include 'base/values.h'
#include 'content/public/browser/notification_observer.h'
#include 'content/public/browser/notification_registrar.h'
    
    // Trigger command from the accelerators table.
bool TriggerAcceleratorTableCommand(AcceleratorTable* table,
                                    const ui::Accelerator& accelerator);
    
    namespace atom {
    }
    
     private:
  // views::StatusIconLinux::Delegate:
  void OnClick() override;
  bool HasClickAction() override;
    
      DbusmenuServer* server_;
    
    #include 'ui/views/window/native_frame_view.h'
    
    
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
    class DBImpl;
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
      Slice in(encoded);
  ParsedInternalKey decoded('', 0, kTypeValue);
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string TableFileName(const std::string& dbname, uint64_t number);
    
    Status TableCache::Get(const ReadOptions& options,
                       uint64_t file_number,
                       uint64_t file_size,
                       const Slice& k,
                       void* arg,
                       void (*saver)(void*, const Slice&, const Slice&)) {
  Cache::Handle* handle = NULL;
  Status s = FindTable(file_number, file_size, &handle);
  if (s.ok()) {
    Table* t = reinterpret_cast<TableAndFile*>(cache_->Value(handle))->table;
    s = t->InternalGet(options, k, arg, saver);
    cache_->Release(handle);
  }
  return s;
}
    
    class VersionSet;
    
    
    
    // Convert a Python object to a FileDescriptorProto pointer.
// Handles all kinds of Python errors, which are simply logged.
static bool GetFileDescriptorProto(PyObject* py_descriptor,
                                   FileDescriptorProto* output) {
  if (py_descriptor == NULL) {
    if (PyErr_ExceptionMatches(PyExc_KeyError)) {
      // Expected error: item was simply not found.
      PyErr_Clear();
    } else {
      GOOGLE_LOG(ERROR) << 'DescriptorDatabase method raised an error';
      PyErr_Print();
    }
    return false;
  }
  if (py_descriptor == Py_None) {
    return false;
  }
  const Descriptor* filedescriptor_descriptor =
      FileDescriptorProto::default_instance().GetDescriptor();
  CMessage* message = reinterpret_cast<CMessage*>(py_descriptor);
  if (PyObject_TypeCheck(py_descriptor, &CMessage_Type) &&
      message->message->GetDescriptor() == filedescriptor_descriptor) {
    // Fast path: Just use the pointer.
    FileDescriptorProto* file_proto =
        static_cast<FileDescriptorProto*>(message->message);
    *output = *file_proto;
    return true;
  } else {
    // Slow path: serialize the message. This allows to use databases which
    // use a different implementation of FileDescriptorProto.
    ScopedPyObjectPtr serialized_pb(
        PyObject_CallMethod(py_descriptor, 'SerializeToString', NULL));
    if (serialized_pb == NULL) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    char* str;
    Py_ssize_t len;
    if (PyBytes_AsStringAndSize(serialized_pb.get(), &str, &len) < 0) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    FileDescriptorProto file_proto;
    if (!file_proto.ParseFromArray(str, len)) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      return false;
    }
    *output = file_proto;
    return true;
  }
}
    
    namespace google {
namespace protobuf {
namespace python {
    }
    }
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    
    
    
    
        // Extension: 2.0
    typedef void (CODEGEN_FUNCPTR *PFNBLENDEQUATIONSEPARATEPROC)(GLenum , GLenum );
    typedef void (CODEGEN_FUNCPTR *PFNDRAWBUFFERSPROC)(GLsizei , const GLenum *);
    typedef void (CODEGEN_FUNCPTR *PFNSTENCILOPSEPARATEPROC)(GLenum , GLenum , GLenum , GLenum );
    typedef void (CODEGEN_FUNCPTR *PFNSTENCILFUNCSEPARATEPROC)(GLenum , GLenum , GLint , GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNSTENCILMASKSEPARATEPROC)(GLenum , GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNATTACHSHADERPROC)(GLuint , GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNBINDATTRIBLOCATIONPROC)(GLuint , GLuint , const GLchar *);
    typedef void (CODEGEN_FUNCPTR *PFNCOMPILESHADERPROC)(GLuint );
    typedef GLuint (CODEGEN_FUNCPTR *PFNCREATEPROGRAMPROC)();
    typedef GLuint (CODEGEN_FUNCPTR *PFNCREATESHADERPROC)(GLenum );
    typedef void (CODEGEN_FUNCPTR *PFNDELETEPROGRAMPROC)(GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNDELETESHADERPROC)(GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNDETACHSHADERPROC)(GLuint , GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNDISABLEVERTEXATTRIBARRAYPROC)(GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNENABLEVERTEXATTRIBARRAYPROC)(GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNGETACTIVEATTRIBPROC)(GLuint , GLuint , GLsizei , GLsizei *, GLint *, GLenum *, GLchar *);
    typedef void (CODEGEN_FUNCPTR *PFNGETACTIVEUNIFORMPROC)(GLuint , GLuint , GLsizei , GLsizei *, GLint *, GLenum *, GLchar *);
    typedef void (CODEGEN_FUNCPTR *PFNGETATTACHEDSHADERSPROC)(GLuint , GLsizei , GLsizei *, GLuint *);
    typedef GLint (CODEGEN_FUNCPTR *PFNGETATTRIBLOCATIONPROC)(GLuint , const GLchar *);
    typedef void (CODEGEN_FUNCPTR *PFNGETPROGRAMIVPROC)(GLuint , GLenum , GLint *);
    typedef void (CODEGEN_FUNCPTR *PFNGETPROGRAMINFOLOGPROC)(GLuint , GLsizei , GLsizei *, GLchar *);
    typedef void (CODEGEN_FUNCPTR *PFNGETSHADERIVPROC)(GLuint , GLenum , GLint *);
    typedef void (CODEGEN_FUNCPTR *PFNGETSHADERINFOLOGPROC)(GLuint , GLsizei , GLsizei *, GLchar *);
    typedef void (CODEGEN_FUNCPTR *PFNGETSHADERSOURCEPROC)(GLuint , GLsizei , GLsizei *, GLchar *);
    typedef GLint (CODEGEN_FUNCPTR *PFNGETUNIFORMLOCATIONPROC)(GLuint , const GLchar *);
    typedef void (CODEGEN_FUNCPTR *PFNGETUNIFORMFVPROC)(GLuint , GLint , GLfloat *);
    typedef void (CODEGEN_FUNCPTR *PFNGETUNIFORMIVPROC)(GLuint , GLint , GLint *);
    typedef void (CODEGEN_FUNCPTR *PFNGETVERTEXATTRIBDVPROC)(GLuint , GLenum , GLdouble *);
    typedef void (CODEGEN_FUNCPTR *PFNGETVERTEXATTRIBFVPROC)(GLuint , GLenum , GLfloat *);
    typedef void (CODEGEN_FUNCPTR *PFNGETVERTEXATTRIBIVPROC)(GLuint , GLenum , GLint *);
    typedef void (CODEGEN_FUNCPTR *PFNGETVERTEXATTRIBPOINTERVPROC)(GLuint , GLenum , GLvoid* *);
    typedef GLboolean (CODEGEN_FUNCPTR *PFNISPROGRAMPROC)(GLuint );
    typedef GLboolean (CODEGEN_FUNCPTR *PFNISSHADERPROC)(GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNLINKPROGRAMPROC)(GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNSHADERSOURCEPROC)(GLuint , GLsizei , const GLchar* const *, const GLint *);
    typedef void (CODEGEN_FUNCPTR *PFNUSEPROGRAMPROC)(GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM1FPROC)(GLint , GLfloat );
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM2FPROC)(GLint , GLfloat , GLfloat );
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM3FPROC)(GLint , GLfloat , GLfloat , GLfloat );
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM4FPROC)(GLint , GLfloat , GLfloat , GLfloat , GLfloat );
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM1IPROC)(GLint , GLint );
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM2IPROC)(GLint , GLint , GLint );
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM3IPROC)(GLint , GLint , GLint , GLint );
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM4IPROC)(GLint , GLint , GLint , GLint , GLint );
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM1FVPROC)(GLint , GLsizei , const GLfloat *);
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM2FVPROC)(GLint , GLsizei , const GLfloat *);
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM3FVPROC)(GLint , GLsizei , const GLfloat *);
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM4FVPROC)(GLint , GLsizei , const GLfloat *);
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM1IVPROC)(GLint , GLsizei , const GLint *);
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM2IVPROC)(GLint , GLsizei , const GLint *);
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM3IVPROC)(GLint , GLsizei , const GLint *);
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORM4IVPROC)(GLint , GLsizei , const GLint *);
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORMMATRIX2FVPROC)(GLint , GLsizei , GLboolean , const GLfloat *);
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORMMATRIX3FVPROC)(GLint , GLsizei , GLboolean , const GLfloat *);
    typedef void (CODEGEN_FUNCPTR *PFNUNIFORMMATRIX4FVPROC)(GLint , GLsizei , GLboolean , const GLfloat *);
    typedef void (CODEGEN_FUNCPTR *PFNVALIDATEPROGRAMPROC)(GLuint );
    typedef void (CODEGEN_FUNCPTR *PFNVERTEXATTRIBPOINTERPROC)(GLuint , GLint , GLenum , GLboolean , GLsizei , const GLvoid *);
    
    #ifndef STORAGE_LEVELDB_DB_SNAPSHOT_H_
#define STORAGE_LEVELDB_DB_SNAPSHOT_H_
    
    TEST(FindFileTest, OverlappingFiles) {
  Add('150', '600');
  Add('400', '500');
  disjoint_sorted_files_ = false;
  ASSERT_TRUE(! Overlaps('100', '149'));
  ASSERT_TRUE(! Overlaps('601', '700'));
  ASSERT_TRUE(Overlaps('100', '150'));
  ASSERT_TRUE(Overlaps('100', '200'));
  ASSERT_TRUE(Overlaps('100', '300'));
  ASSERT_TRUE(Overlaps('100', '400'));
  ASSERT_TRUE(Overlaps('100', '500'));
  ASSERT_TRUE(Overlaps('375', '400'));
  ASSERT_TRUE(Overlaps('450', '450'));
  ASSERT_TRUE(Overlaps('450', '500'));
  ASSERT_TRUE(Overlaps('450', '700'));
  ASSERT_TRUE(Overlaps('600', '700'));
}
    
    
    {    status = sqlite3_finalize(read_stmt);
    ErrorCheck(status);
    status = sqlite3_finalize(begin_trans_stmt);
    ErrorCheck(status);
    status = sqlite3_finalize(end_trans_stmt);
    ErrorCheck(status);
  }
    
    // Helper for quickly generating random data.
namespace {
class RandomGenerator {
 private:
  std::string data_;
  int pos_;
    }
    }
    
    void BlockBuilder::Add(const Slice& key, const Slice& value) {
  Slice last_key_piece(last_key_);
  assert(!finished_);
  assert(counter_ <= options_->block_restart_interval);
  assert(buffer_.empty() // No values yet?
         || options_->comparator->Compare(key, last_key_piece) > 0);
  size_t shared = 0;
  if (counter_ < options_->block_restart_interval) {
    // See how much sharing to do with previous string
    const size_t min_length = std::min(last_key_piece.size(), key.size());
    while ((shared < min_length) && (last_key_piece[shared] == key[shared])) {
      shared++;
    }
  } else {
    // Restart compression
    restarts_.push_back(buffer_.size());
    counter_ = 0;
  }
  const size_t non_shared = key.size() - shared;
    }
    
      // Last filter
  builder.StartBlock(9000);
  builder.AddKey('box');
  builder.AddKey('hello');
    
    
    {}  // namespace leveldb

    
      virtual void Next() {
    assert(Valid());
    }
    
    This pointer must be provided as 'void* state' parameter for XXH32_update().
XXH32_update() can be called as many times as necessary.
The user must provide a valid (allocated) input.
The function returns an error code, with 0 meaning OK, and any other value meaning there is an error.
Note that 'len' is type 'int', which means it is limited to 2^31-1.
If your data is larger, it is recommended to chunk your data into blocks
of size for example 2^30 (1GB) to avoid any 'int' overflow issue.
    
    
    {  // No copying allowed
  Reader(const Reader&);
  void operator=(const Reader&);
};
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    setAllowGlobalSeqNo
 * Signature: (JZ)V
 */
void Java_org_rocksdb_IngestExternalFileOptions_setAllowGlobalSeqNo(
    JNIEnv* env, jobject jobj, jlong jhandle, jboolean jallow_global_seqno) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  options->allow_global_seqno = static_cast<bool>(jallow_global_seqno);
}
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
    
    {  ROCKS_LOG_INFO(options_.info_log, 'Restoring done -- %s\n',
                 s.ToString().c_str());
  return s;
}
    
      ReadOptions read_options;
  std::string value;
  TransactionOptions txn_options;
  Transaction* txn = txdb->BeginTransaction(write_options, txn_options);
  s = txn->SetName('xid');
  ASSERT_OK(s);
  ASSERT_EQ(txdb->GetTransactionByName('xid'), txn);
    
    typedef GRPC_CUSTOM_STRING string;
    
    
    {}
    
    std::unique_ptr< MonsterStorage::Stub> MonsterStorage::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< MonsterStorage::Stub> stub(new MonsterStorage::Stub(channel));
  return stub;
}
    
      struct {
    grpc::string prefix;
    grpc::string method_params;  // extra arguments to method
    int extra_method_param_count;
  } async_prefixes[] = {{'Async', ', void* tag', 1}, {'PrepareAsync', '', 0}};
    
    class FlatCompiler {
 public:
  // Output generator for the various programming languages and formats we
  // support.
  struct Generator {
    typedef bool (*GenerateFn)(const flatbuffers::Parser &parser,
                               const std::string &path,
                               const std::string &file_name);
    typedef std::string (*MakeRuleFn)(const flatbuffers::Parser &parser,
                                      const std::string &path,
                                      const std::string &file_name);
    }
    }
    
    // Set any struct field as a double, regardless of type what it is.
inline void SetAnyFieldF(Struct *st, const reflection::Field &field,
                         double val) {
  SetAnyValueF(field.type()->base_type(), st->GetAddressOf(field.offset()),
               val);
}
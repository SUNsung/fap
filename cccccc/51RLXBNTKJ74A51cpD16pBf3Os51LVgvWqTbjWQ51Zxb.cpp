
        
        #endif  // ATOM_COMMON_DRAGGABLE_REGION_H_

    
    namespace chrome {
    }
    
    namespace chrome {
    }
    
      // Sets time interval between updates. By default list of sources and their
  // thumbnail are updated once per second. If called after StartUpdating() then
  // it will take effect only after the next update.
  virtual void SetUpdatePeriod(base::TimeDelta period) = 0;
    
    // An interface the PrintViewManager uses to notify an observer when the print
// dialog is shown. Register the observer via PrintViewManager::set_observer.
class PrintViewManagerObserver {
 public:
  // Notifies the observer that the print dialog was shown.
  virtual void OnPrintDialogShown() = 0;
    }
    
    #include 'content/public/browser/web_contents_observer.h'
#include 'ui/gfx/native_widget_types.h'
    
     private:
  // IPC message handler.
  int32_t OnHostMsgGetDeviceID(ppapi::host::HostMessageContext* context);
  int32_t OnHostMsgGetHmonitor(ppapi::host::HostMessageContext* context);
  int32_t OnHostMsgMonitorIsExternal(ppapi::host::HostMessageContext* context);
    
      virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const {
    std::vector<const char*> key_pointers(n);
    std::vector<size_t> key_sizes(n);
    for (int i = 0; i < n; i++) {
      key_pointers[i] = keys[i].data();
      key_sizes[i] = keys[i].size();
    }
    size_t len;
    char* filter = (*create_)(state_, &key_pointers[0], &key_sizes[0], n, &len);
    dst->append(filter, len);
    free(filter);
  }
    
    void DBIter::Seek(const Slice& target) {
  direction_ = kForward;
  ClearSavedValue();
  saved_key_.clear();
  AppendInternalKey(
      &saved_key_, ParsedInternalKey(target, sequence_, kValueTypeForSeek));
  iter_->Seek(saved_key_);
  if (iter_->Valid()) {
    FindNextUserEntry(false, &saved_key_ /* temporary storage */);
  } else {
    valid_ = false;
  }
}
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
    
    {  ParsedInternalKey() { }  // Intentionally left uninitialized (for speed)
  ParsedInternalKey(const Slice& u, const SequenceNumber& seq, ValueType t)
      : user_key(u), sequence(seq), type(t) { }
  std::string DebugString() const;
};
    
    // Print contents of a log file. (*func)() is called on every record.
Status PrintLogContents(Env* env, const std::string& fname,
                        void (*func)(uint64_t, Slice, WritableFile*),
                        WritableFile* dst) {
  SequentialFile* file;
  Status s = env->NewSequentialFile(fname, &file);
  if (!s.ok()) {
    return s;
  }
  CorruptionReporter reporter;
  reporter.dst_ = dst;
  log::Reader reader(file, &reporter, true, 0);
  Slice record;
  std::string scratch;
  while (reader.ReadRecord(&record, &scratch)) {
    (*func)(reader.LastRecordOffset(), record, dst);
  }
  delete file;
  return Status::OK();
}
    
    enum FileType {
  kLogFile,
  kDBLockFile,
  kTableFile,
  kDescriptorFile,
  kCurrentFile,
  kTempFile,
  kInfoLogFile  // Either the current one, or an old one
};
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    // Comma-separated list of operations to run in the specified order
//   Actual benchmarks:
//
//   fillseq       -- write N values in sequential key order in async mode
//   fillseqsync   -- write N/100 values in sequential key order in sync mode
//   fillseqbatch  -- batch write N values in sequential key order in async mode
//   fillrandom    -- write N values in random key order in async mode
//   fillrandsync  -- write N/100 values in random key order in sync mode
//   fillrandbatch -- batch write N values in sequential key order in async mode
//   overwrite     -- overwrite N values in random key order in async mode
//   fillrand100K  -- write N/1000 100K values in random order in async mode
//   fillseq100K   -- write N/1000 100K values in sequential order in async mode
//   readseq       -- read N times sequentially
//   readrandom    -- read N times in random order
//   readrand100K  -- read N/1000 100K values in sequential order in async mode
static const char* FLAGS_benchmarks =
    'fillseq,'
    'fillseqsync,'
    'fillseqbatch,'
    'fillrandom,'
    'fillrandsync,'
    'fillrandbatch,'
    'overwrite,'
    'overwritebatch,'
    'readrandom,'
    'readseq,'
    'fillrand100K,'
    'fillseq100K,'
    'readseq,'
    'readrand100K,'
    ;
    
      // keys[0,n-1] contains a list of keys (potentially with duplicates)
  // that are ordered according to the user supplied comparator.
  // Append a filter that summarizes keys[0,n-1] to *dst.
  //
  // Warning: do not change the initial contents of *dst.  Instead,
  // append the newly constructed filter to *dst.
  virtual void CreateFilter(const Slice* keys, int n, std::string* dst)
      const = 0;
    
     private:
  const char* data_;
  size_t size_;
    
    #define EXPECT_FATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ALL_THREADS, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      // Take over ownership of a raw pointer.  This should happen as soon as
  // possible after the object is created.
  explicit linked_ptr(T* ptr = NULL) { capture(ptr); }
  ~linked_ptr() { depart(); }
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_

    
    template <int k, GTEST_$(n)_TYPENAMES_(T)>
GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(k, GTEST_$(n)_TUPLE_(T)))
get(GTEST_$(n)_TUPLE_(T)& t) {
  return gtest_internal::Get<k>::Field(t);
}
    
    // The template 'selector' struct TemplateSel<Tmpl> is used to
// represent Tmpl, which must be a class template with one type
// parameter, as a type.  TemplateSel<Tmpl>::Bind<T>::type is defined
// as the type Tmpl<T>.  This allows us to actually instantiate the
// template 'selected' by TemplateSel<Tmpl>.
//
// This trick is necessary for simulating typedef for class templates,
// which C++ doesn't support directly.
template <GTEST_TEMPLATE_ Tmpl>
struct TemplateSel {
  template <typename T>
  struct Bind {
    typedef Tmpl<T> type;
  };
};
    
    #endif  // GTEST_SAMPLES_PRIME_TABLES_H_

    
    
// Step 2. Use the TEST macro to define your tests.
//
// TEST has two parameters: the test case name and the test name.
// After using the macro, you should define your test logic between a
// pair of braces.  You can use a bunch of macros to indicate the
// success or failure of a test.  EXPECT_TRUE and EXPECT_EQ are
// examples of such macros.  For a complete list, see gtest.h.
//
// <TechnicalDetails>
//
// In Google Test, tests are grouped into test cases.  This is how we
// keep test code organized.  You should put logically related tests
// into the same test case.
//
// The test case name and the test name should both be valid C++
// identifiers.  And you should not use underscore (_) in the names.
//
// Google Test guarantees that each test you define is run exactly
// once, but it makes no guarantee on the order the tests are
// executed.  Therefore, you should write your tests in such a way
// that their results don't depend on their order.
//
// </TechnicalDetails>
    
    #include <THPP/tensors/THTensor.hpp>
    
      if (b->nDimension == 1) {
    b = THDTensor_(newWithStorage2d)(b->storage, b->storageOffset, b->size[0],
            b->stride[0], 1, 0);
    free_b = true;
  }
    
    
    {  copyList.push_back({ srcType, wrapper, false });
}
    
    
    {} // namespace aria2
    
      virtual PrefPtr getPref() const CXX11_OVERRIDE { return pref_; }
    
    public:
  AbstractProxyRequestCommand(cuid_t cuid, const std::shared_ptr<Request>& req,
                              const std::shared_ptr<FileEntry>& fileEntry,
                              RequestGroup* requestGroup, DownloadEngine* e,
                              const std::shared_ptr<Request>& proxyRequest,
                              const std::shared_ptr<SocketCore>& s);
    
    class AnnounceTier {
public:
  enum AnnounceEvent {
    STARTED,
    STARTED_AFTER_COMPLETION,
    DOWNLOADING,
    STOPPED,
    COMPLETED,
    SEEDING,
    HALTED
  };
    }
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
    
    {  virtual std::unique_ptr<AuthConfig>
  resolveAuthConfig(const std::string& hostname) = 0;
};
    
    size_t hash_value(FieldAccess const& access) {
  // On purpose we don't include the write barrier kind here, as this method is
  // really only relevant for eliminating loads and they don't care about the
  // write barrier mode.
  return base::hash_combine(access.base_is_tagged, access.offset,
                            access.machine_type);
}
    
      int position = 0;
  for (int i = 0; i < properties()->length(); i++) {
    ObjectLiteral::Property* property = properties()->at(i);
    if (property->IsPrototype()) continue;
    }
    
    Handle<Smi> StoreHandler::StoreField(Isolate* isolate, int descriptor,
                                     FieldIndex field_index,
                                     PropertyConstness constness,
                                     Representation representation) {
  DCHECK_IMPLIES(!FLAG_track_constant_fields,
                 constness == PropertyConstness::kMutable);
  Kind kind = constness == PropertyConstness::kMutable ? kField : kConstField;
  return StoreField(isolate, kind, descriptor, field_index, representation);
}
    
      // Build object literal constant properties
  for (std::pair<ObjectLiteral*, size_t> literal : object_literals_) {
    ObjectLiteral* object_literal = literal.first;
    if (object_literal->properties_count() > 0) {
      // If constant properties is an empty fixed array, we've already added it
      // to the constant pool when visiting the object literal.
      Handle<BoilerplateDescription> constant_properties =
          object_literal->GetOrBuildConstantProperties(isolate);
    }
    }
    
     public:
  typedef PreParserIdentifier Identifier;
  typedef PreParserExpression Expression;
  typedef PreParserStatement Statement;
    
    #endif  // V8_PROPERTY_DETAILS_H_

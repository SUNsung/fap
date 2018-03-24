
        
        #include 'db/builder.h'
    
    leveldb_filterpolicy_t* leveldb_filterpolicy_create(
    void* state,
    void (*destructor)(void*),
    char* (*create_filter)(
        void*,
        const char* const* key_array, const size_t* key_length_array,
        int num_keys,
        size_t* filter_length),
    unsigned char (*key_may_match)(
        void*,
        const char* key, size_t length,
        const char* filter, size_t filter_length),
    const char* (*name)(void*)) {
  leveldb_filterpolicy_t* result = new leveldb_filterpolicy_t;
  result->state_ = state;
  result->destructor_ = destructor;
  result->create_ = create_filter;
  result->key_match_ = key_may_match;
  result->name_ = name;
  return result;
}
    
    #endif  // STORAGE_LEVELDB_DB_DB_ITER_H_

    
    
    {  // Errors
  static const char* errors[] = {
    '',
    'foo',
    'foo-dx-100.log',
    '.log',
    '',
    'manifest',
    'CURREN',
    'CURRENTX',
    'MANIFES',
    'MANIFEST',
    'MANIFEST-',
    'XMANIFEST-3',
    'MANIFEST-3x',
    'LOC',
    'LOCKx',
    'LO',
    'LOGx',
    '18446744073709551616.log',
    '184467440737095516150.log',
    '100',
    '100.',
    '100.lop'
  };
  for (int i = 0; i < sizeof(errors) / sizeof(errors[0]); i++) {
    std::string f = errors[i];
    ASSERT_TRUE(!ParseFileName(f, &number, &type)) << f;
  }
}
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
      ASSERT_TRUE(! Overlaps('a', 'b'));
  ASSERT_TRUE(! Overlaps('z1', 'z2'));
  ASSERT_TRUE(Overlaps('a', 'p'));
  ASSERT_TRUE(Overlaps('a', 'q'));
  ASSERT_TRUE(Overlaps('a', 'z'));
  ASSERT_TRUE(Overlaps('p', 'p1'));
  ASSERT_TRUE(Overlaps('p', 'q'));
  ASSERT_TRUE(Overlaps('p', 'z'));
  ASSERT_TRUE(Overlaps('p1', 'p2'));
  ASSERT_TRUE(Overlaps('p1', 'z'));
  ASSERT_TRUE(Overlaps('q', 'q'));
  ASSERT_TRUE(Overlaps('q', 'q1'));
    
    namespace {
class MemTableInserter : public WriteBatch::Handler {
 public:
  SequenceNumber sequence_;
  MemTable* mem_;
    }
    }
    
     public:
  enum Order {
    SEQUENTIAL,
    RANDOM
  };
  enum DBState {
    FRESH,
    EXISTING
  };
    
      // Change this slice to refer to an empty array
  void clear() { data_ = ''; size_ = 0; }
    
    TEST(AnyTest, TestPackAndUnpackAny) {
  // We can pack a Any message inside another Any message.
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(any);
    }
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <string>
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__

    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* context,
                string* error) const;
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    
    {  auto& counter = s_counters[m_name];
  counter.total += elapsed;
  ++counter.count;
  counter.max = std::max(counter.max, elapsed);
  counter.wall_time_elapsed += elapsed_wall_clock;
  m_finished = true;
  return elapsed;
}
    
    struct PageletTransport final : Transport, Synchronizable {
  PageletTransport(
    const String& url, const Array& headers, const String& postData,
    const String& remoteHost,
    const std::set<std::string> &rfc1867UploadedFiles,
    const Array& files, int timeoutSeconds);
    }
    
    #include <algorithm>
    
      struct Hash {
    size_t operator()(Vconst c) const {
      return
        std::hash<uint64_t>()(c.val) ^ std::hash<int>()(c.kind) ^ c.isUndef;
    }
  };
    
    
    {  const Vunit&                     m_unit;
  const jit::vector<Vlabel>        m_blocks;
  const PredVector                 m_preds;
  jit::hash_map<uint64_t, int64_t> m_arcWgts; // keyed using arcId()
};
    
    void initNuma() {
  if (getenv('HHVM_DISABLE_NUMA')) {
    return;
  }
  // When linked dynamically numa_init() is called before JEMallocInitializer()
  // numa_init is not exported by libnuma.so so it will be NULL
  // however when linked statically numa_init() is not guaranteed to be called
  // before JEMallocInitializer(), so call it here.
  if (&numa_init) {
    numa_init();
  }
  if (numa_available() < 0) return;
    }
    
    #else // HAVE_NUMA undefined
namespace HPHP {
    }
    
      auto const dataSize = iv.size() * sizeof(SwitchProfile::cases[0]);
  TargetProfile<SwitchProfile> profile(
    env.unit.context(), env.irb->curMarker(), s_switchProfile.get(),
    dataSize
  );
    
      // We rebuild a variant type here because using boosts fails on opensource
  // builds because it at some point requires a copy construction.
  // This vector has one entry per prologue/translation stored in the two
  // vectors above, and it encodes the order in which they should be published.
  std::vector<Kind> order;
    
      loadedResource = LoadResource(moduleHandle, resourceInfo);
  if (!loadedResource) {
    return false;
  }
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    #include 'db/version_set.h'
#include 'util/logging.h'
#include 'util/testharness.h'
#include 'util/testutil.h'
    
    
    {}  // namespace leveldb
    
      // Check that renaming works.
  ASSERT_TRUE(!env_->RenameFile('/dir/non_existent', '/dir/g').ok());
  ASSERT_OK(env_->RenameFile('/dir/f', '/dir/g'));
  ASSERT_TRUE(!env_->FileExists('/dir/f'));
  ASSERT_TRUE(env_->FileExists('/dir/g'));
  ASSERT_OK(env_->GetFileSize('/dir/g', &file_size));
  ASSERT_EQ(8, file_size);
    
    Block::Block(const BlockContents& contents)
    : data_(contents.data.data()),
      size_(contents.data.size()),
      owned_(contents.heap_allocated) {
  if (size_ < sizeof(uint32_t)) {
    size_ = 0;  // Error marker
  } else {
    size_t max_restarts_allowed = (size_-sizeof(uint32_t)) / sizeof(uint32_t);
    if (NumRestarts() > max_restarts_allowed) {
      // The size is too small for NumRestarts()
      size_ = 0;
    } else {
      restart_offset_ = size_ - (1 + NumRestarts()) * sizeof(uint32_t);
    }
  }
}
    
    
    { private:
  const FilterPolicy* policy_;
  const char* data_;    // Pointer to filter data (at block-start)
  const char* offset_;  // Pointer to beginning of offset array (at block-end)
  size_t num_;          // Number of entries in offset array
  size_t base_lg_;      // Encoding parameter (see kFilterBaseLg in .cc file)
};
    
    Iterator::~Iterator() {
  if (cleanup_.function != NULL) {
    (*cleanup_.function)(cleanup_.arg1, cleanup_.arg2);
    for (Cleanup* c = cleanup_.next; c != NULL; ) {
      (*c->function)(c->arg1, c->arg2);
      Cleanup* next = c->next;
      delete c;
      c = next;
    }
  }
}
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    
    {}  // namespace leveldb

    
    int DeterministicSchedule::getcpu(unsigned* cpu,
                                  unsigned* node,
                                  void* /* unused */) {
  if (!tls_threadId && tls_sched) {
    beforeSharedAccess();
    tls_threadId = tls_sched->nextThreadId_++;
    afterSharedAccess();
  }
  if (cpu) {
    *cpu = tls_threadId;
  }
  if (node) {
    *node = tls_threadId;
  }
  return 0;
}
    
    template <
    class T,
    FOLLY_AUTO User,
    class I,
    class = ArgTypes<User, I>,
    class = Bool<true>>
struct ThunkFn {
  template <class R, class D, class... As>
  constexpr /* implicit */ operator FnPtr<R, D&, As...>() const noexcept {
    return nullptr;
  }
};
    
      __m128i arr1;
  if (HAYSTACK_ALIGNED) {
    arr1 = _mm_load_si128(
        reinterpret_cast<const __m128i*>(haystack.data() + blockStartIdx));
  } else {
    arr1 = _mm_loadu_si128(
        reinterpret_cast<const __m128i*>(haystack.data() + blockStartIdx));
  }
    
    void DynamicParser::reportError(
    const folly::dynamic* lookup_k,
    const std::exception& ex) {
  // If descendants of this item, or other keys on it, already reported an
  // error, the error object would already exist.
  auto& e = stack_.errors(allowNonStringKeyErrors_);
    }
    
    
    {  return status;
}
    
      /**
   * Set bit idx to the given value, using the given memory order. Returns
   * the previous value of the bit.
   *
   * Note that the operation is a read-modify-write operation due to the use
   * of fetch_and or fetch_or.
   *
   * Yes, this is an overload of set(), to keep as close to std::bitset's
   * interface as possible.
   */
  bool set(size_t idx,
           bool value,
           std::memory_order order = std::memory_order_seq_cst);
    
      /**
   * Repeatedly pops element from head,
   * and calls func() on the removed elements in the order from tail to head.
   * Stops when the list is empty.
   */
  template <typename F>
  void sweep(F&& func) {
    list_.sweep([&](Wrapper* wrapperPtr) mutable {
      std::unique_ptr<Wrapper> wrapper(wrapperPtr);
    }
    }
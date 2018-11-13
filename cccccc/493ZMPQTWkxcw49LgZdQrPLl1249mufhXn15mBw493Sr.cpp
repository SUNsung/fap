
        
          // Fill database
  for (int i = 0; i < kCount; i++) {
    ASSERT_OK(db_->Put(WriteOptions(), Key(i), value));
  }
  ASSERT_OK(dbi->TEST_CompactMemTable());
    
    #endif  // STORAGE_LEVELDB_DB_BUILDER_H_

    
        if (offset < 0) {
      // Relative to end of file; make it absolute
      if (-offset > sbuf.st_size) {
        offset = 0;
      } else {
        offset = sbuf.st_size + offset;
      }
    }
    if (offset > sbuf.st_size) {
      offset = sbuf.st_size;
    }
    if (offset + bytes_to_corrupt > sbuf.st_size) {
      bytes_to_corrupt = sbuf.st_size - offset;
    }
    
    #include 'db/db_impl.h'
    
      ReadOptions ro;
  ro.fill_cache = false;
  Iterator* iter = table->NewIterator(ro);
  std::string r;
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    r.clear();
    ParsedInternalKey key;
    if (!ParseInternalKey(iter->key(), &key)) {
      r = 'badkey '';
      AppendEscapedStringTo(&r, iter->key());
      r += '' => '';
      AppendEscapedStringTo(&r, iter->value());
      r += ''\n';
      dst->Append(r);
    } else {
      r = ''';
      AppendEscapedStringTo(&r, key.user_key);
      r += '' @ ';
      AppendNumberTo(&r, key.sequence);
      r += ' : ';
      if (key.type == kTypeDeletion) {
        r += 'del';
      } else if (key.type == kTypeValue) {
        r += 'val';
      } else {
        AppendNumberTo(&r, key.type);
      }
      r += ' => '';
      AppendEscapedStringTo(&r, iter->value());
      r += ''\n';
      dst->Append(r);
    }
  }
  s = iter->status();
  if (!s.ok()) {
    dst->Append('iterator error: ' + s.ToString() + '\n');
  }
    
    // Return the name of the lock file for the db named by
// 'dbname'.  The result will be prefixed with 'dbname'.
std::string LockFileName(const std::string& dbname);
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
      virtual bool Valid() const { return iter_.Valid(); }
  virtual void Seek(const Slice& k) { iter_.Seek(EncodeKey(&tmp_, k)); }
  virtual void SeekToFirst() { iter_.SeekToFirst(); }
  virtual void SeekToLast() { iter_.SeekToLast(); }
  virtual void Next() { iter_.Next(); }
  virtual void Prev() { iter_.Prev(); }
  virtual Slice key() const { return GetLengthPrefixedSlice(iter_.key()); }
  virtual Slice value() const {
    Slice key_slice = GetLengthPrefixedSlice(iter_.key());
    return GetLengthPrefixedSlice(key_slice.data() + key_slice.size());
  }
    
    
    {   private:
    const SkipList* list_;
    Node* node_;
    // Intentionally copyable
  };
    
      // Per-key generation
  struct State {
    port::AtomicPointer generation[K];
    void Set(int k, intptr_t v) {
      generation[k].Release_Store(reinterpret_cast<void*>(v));
    }
    intptr_t Get(int k) {
      return reinterpret_cast<intptr_t>(generation[k].Acquire_Load());
    }
    }
    
        SnapshotImpl* snapshot = new SnapshotImpl(sequence_number);
    
    
    {        Clear();
    }
    
            dict[dynamicAxisKey] = dictionaryValueVector;
        dict[isSparseKey] = IsSparse();
        if (!Name().empty())
            dict[nameKey] = Name();
        dict[needsGradientKey] = NeedsGradient();
        dict[shapeKey] = Shape();
        if (IsParameter() || IsConstant())
        {
            NDArrayView* value = Value().get();
            if (value == nullptr)
                LogicError('Uninitialized Parameter variable '%S' cannot be saved.', AsString().c_str());
    }
    
    template DataReader::DataReader(const ConfigParameters&);
template DataReader::DataReader(const ScriptableObjects::IConfigRecord&);
    
    // base class that we can catch, independent of the type parameter
struct /*interface*/ IExceptionWithCallStackBase
{
    virtual const char * CallStack() const = 0;
    virtual ~IExceptionWithCallStackBase() noexcept = default;
};
    
    public:
    ScopeTimer(size_t verbosity, const std::string& message)
        : m_verbosity(verbosity), m_message(message)
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Start();
        }
    }
    
                BackpropToLeft(sliceInput1Value, InputRef(0).GradientAsMatrix(), sliceOutputGrad);
        }
        else if (inputIndex == 1) // right derivative (input)
        {
            Matrix<ElemType> sliceInput1Grad = InputRef(1).GradientFor(t);
            Matrix<ElemType> sliceOutputGrad = GradientFor(t);
    
    #ifndef GRPC_CUSTOM_STRING
#include <string>
#define GRPC_CUSTOM_STRING std::string
#endif
    
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
    
      // Get and test the `weapons` FlatBuffers's `vector`.
  std::string expected_weapon_names[] = { 'Sword', 'Axe' };
  short expected_weapon_damages[] = { 3, 5 };
  auto weps = monster->weapons();
  for (unsigned int i = 0; i < weps->size(); i++) {
    assert(weps->Get(i)->name()->str() == expected_weapon_names[i]);
    assert(weps->Get(i)->damage() == expected_weapon_damages[i]);
  }
  (void)expected_weapon_names;
  (void)expected_weapon_damages;
    
    std::string GenNativeType(BaseType type) {
  switch (type) {
    case BASE_TYPE_BOOL: return 'boolean';
    case BASE_TYPE_CHAR:
    case BASE_TYPE_UCHAR:
    case BASE_TYPE_SHORT:
    case BASE_TYPE_USHORT:
    case BASE_TYPE_INT:
    case BASE_TYPE_UINT:
    case BASE_TYPE_LONG:
    case BASE_TYPE_ULONG:
    case BASE_TYPE_FLOAT:
    case BASE_TYPE_DOUBLE: return 'number';
    case BASE_TYPE_STRING: return 'string';
    default: return '';
  }
}
    
    static void Error(const flatbuffers::FlatCompiler *flatc,
                  const std::string &err, bool usage, bool show_exe_name) {
  if (show_exe_name) { printf('%s: ', g_program_name); }
  printf('error: %s\n', err.c_str());
  if (usage) { printf('%s', flatc->GetUsageString(g_program_name).c_str()); }
  exit(1);
}
    
    // This function ensure a directory exists, by recursively
// creating dirs for any parts of the path that don't exist yet.
inline void EnsureDirExists(const std::string &filepath) {
  auto parent = StripFileName(filepath);
  if (parent.length()) EnsureDirExists(parent);
    // clang-format off
  #ifdef _WIN32
    (void)_mkdir(filepath.c_str());
  #else
    mkdir(filepath.c_str(), S_IRWXU|S_IRGRP|S_IXGRP);
  #endif
  // clang-format on
}
    
        // Json literals
    Json obj = Json::object({
        { 'k1', 'v1' },
        { 'k2', 42.0 },
        { 'k3', Json::array({ 'a', 123.0, true, false, nullptr }) },
    });
    
    bool
CmdlineOption::hasOption (const string& option) const
{
    return(options_and_arguments_list_.cend() != options_and_arguments_list_.find(option));
}
    
    using std::string;
using std::vector;
    
    
    {
    return(b_ok);
}
    
    
    {
    return(b_ok);
}
    
    
using namespace std;
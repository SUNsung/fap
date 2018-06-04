
        
        #ifndef STORAGE_LEVELDB_DB_BUILDER_H_
#define STORAGE_LEVELDB_DB_BUILDER_H_
    
    namespace leveldb {
    }
    
    TEST(VersionEditTest, EncodeDecode) {
  static const uint64_t kBig = 1ull << 50;
    }
    
        // Open database
    std::string tmp_dir;
    Env::Default()->GetTestDirectory(&tmp_dir);
    snprintf(file_name, sizeof(file_name),
             '%s/dbbench_sqlite3-%d.db',
             tmp_dir.c_str(),
             db_num_);
    status = sqlite3_open(file_name, &db_);
    if (status) {
      fprintf(stderr, 'open error: %s\n', sqlite3_errmsg(db_));
      exit(1);
    }
    
    
    {}  // namespace leveldb
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
      // Return a pointer to the beginning of the referenced data
  const char* data() const { return data_; }
    
    namespace oneof_descriptor {
PyObject* NewOneofFieldsSeq(const OneofDescriptor* descriptor);
}  // namespace oneof_descriptor
    
    #include <string>
#include <google/protobuf/compiler/code_generator.h>
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    
    
    
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
    
        jint        (*Throw)(JNIEnv*, jthrowable);
    jint        (*ThrowNew)(JNIEnv *, jclass, const char *);
    jthrowable  (*ExceptionOccurred)(JNIEnv*);
    void        (*ExceptionDescribe)(JNIEnv*);
    void        (*ExceptionClear)(JNIEnv*);
    void        (*FatalError)(JNIEnv*, const char*);
    
    /* static */ Config * Config::create(void)
{
    return new Config();
}
    
    class Config {
    }
    
        Size(double width, double height)
    : width(width)
    , height(height)
    {
    }
    
        method(getOverflow);
    method(getDisplay);
    
      const char* functionName() const { return m_functionName; }
  const char* fileName() const { return m_fileName; }
  int lineNumber() const { return m_lineNumber; }
    
    struct ExternalFunctions {
  // Initialize function pointers. Functions that are not available will be set
  // to nullptr.  Do not call this constructor  before ``main()`` has been
  // entered.
  ExternalFunctions();
    }
    
      // Remove all features that we already know from all other inputs.
  for (size_t i = NumFilesInFirstCorpus; i < Files.size(); i++) {
    auto &Cur = Files[i].Features;
    std::vector<uint32_t> Tmp;
    std::set_difference(Cur.begin(), Cur.end(), AllFeatures.begin(),
                        AllFeatures.end(), std::inserter(Tmp, Tmp.begin()));
    Cur.swap(Tmp);
  }
    
    size_t MutationDispatcher::Mutate_ChangeASCIIInteger(uint8_t *Data, size_t Size,
                                                     size_t MaxSize) {
  if (Size > MaxSize) return 0;
  size_t B = Rand(Size);
  while (B < Size && !isdigit(Data[B])) B++;
  if (B == Size) return 0;
  size_t E = B;
  while (E < Size && isdigit(Data[E])) E++;
  assert(B < E);
  // now we have digits in [B, E).
  // strtol and friends don't accept non-zero-teminated data, parse it manually.
  uint64_t Val = Data[B] - '0';
  for (size_t i = B + 1; i < E; i++)
    Val = Val * 10 + Data[i] - '0';
    }
    
    #endif  // LLVM_FUZZER_MUTATE_H

    
    #ifndef SHA_BIG_ENDIAN
	// Swap byte order back
	int i;
	for (i=0; i<5; i++) {
		s->state[i]=
			  (((s->state[i])<<24)& 0xff000000)
			| (((s->state[i])<<8) & 0x00ff0000)
			| (((s->state[i])>>8) & 0x0000ff00)
			| (((s->state[i])>>24)& 0x000000ff);
	}
#endif
    
    void __sanitizer_weak_hook_strcmp(void *caller_pc, const char *s1,
                                   const char *s2, int result) {
  fuzzer::TPC.AddValueForStrcmp(caller_pc, s1, s2, 64);
  if (!RecordingMemcmp) return;
  if (result == 0) return;  // No reason to mutate.
  size_t Len1 = strlen(s1);
  size_t Len2 = strlen(s2);
  size_t N = std::min(Len1, Len2);
  if (N <= 1) return;  // Not interesting.
  TS->TraceMemcmpCallback(N, reinterpret_cast<const uint8_t *>(s1),
                          reinterpret_cast<const uint8_t *>(s2));
}
    
    
    {} // namespace fuzzer
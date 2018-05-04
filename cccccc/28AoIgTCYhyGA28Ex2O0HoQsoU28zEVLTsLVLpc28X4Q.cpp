
        
        
    {
    {}  // namespace log
}  // namespace leveldb
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    uint32_t Hash(const char* data, size_t n, uint32_t seed) {
  // Similar to murmur hash
  const uint32_t m = 0xc6a4a793;
  const uint32_t r = 24;
  const char* limit = data + n;
  uint32_t h = seed ^ (n * m);
    }
    
    TEST(HASH, SignedUnsignedIssue) {
  const unsigned char data1[1] = {0x62};
  const unsigned char data2[2] = {0xc3, 0x97};
  const unsigned char data3[3] = {0xe2, 0x99, 0xa5};
  const unsigned char data4[4] = {0xe1, 0x80, 0xb9, 0x32};
  const unsigned char data5[48] = {
    0x01, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x14,
    0x00, 0x00, 0x00, 0x18,
    0x28, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
  };
    }
    
    class SCOPED_LOCKABLE MutexLock {
 public:
  explicit MutexLock(port::Mutex *mu) EXCLUSIVE_LOCK_FUNCTION(mu)
      : mu_(mu)  {
    this->mu_->Lock();
  }
  ~MutexLock() UNLOCK_FUNCTION() { this->mu_->Unlock(); }
    }
    
      // Read until size drops significantly.
  std::string limit_key = Key(n);
  for (int read = 0; true; read++) {
    ASSERT_LT(read, 100) << 'Taking too long to compact';
    Iterator* iter = db_->NewIterator(ReadOptions());
    for (iter->SeekToFirst();
         iter->Valid() && iter->key().ToString() < limit_key;
         iter->Next()) {
      // Drop data
    }
    delete iter;
    // Wait a little bit to allow any triggered compactions to complete.
    Env::Default()->SleepForMicroseconds(1000000);
    uint64_t size = Size(Key(0), Key(n));
    fprintf(stderr, 'iter %3d => %7.3f MB [other %7.3f MB]\n',
            read+1, size/1048576.0, Size(Key(n), Key(kCount))/1048576.0);
    if (size <= initial_size/10) {
      break;
    }
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
    
      // Create a writer that will append data to '*dest'.
  // '*dest' must have initial length 'dest_length'.
  // '*dest' must remain live while this Writer is in use.
  Writer(WritableFile* dest, uint64_t dest_length);
    
    bool SetDepth(int p0, HuffmanTree *pool, uint8_t *depth, int max_depth) {
  int stack[17];
  int level = 0;
  int p = p0;
  assert(max_depth <= 16);
  stack[0] = -1;
  while (true) {
    if (pool[p].index_left_ >= 0) {
      level++;
      if (level > max_depth) return false;
      stack[level] = pool[p].index_right_or_value_;
      p = pool[p].index_left_;
      continue;
    } else {
      depth[pool[p].index_right_or_value_] = static_cast<uint8_t>(level);
    }
    while (level >= 0 && stack[level] == -1) level--;
    if (level < 0) return true;
    p = stack[level];
    stack[level] = -1;
  }
}
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    #ifndef GUETZLI_JPEG_DATA_READER_H_
#define GUETZLI_JPEG_DATA_READER_H_
    
    
    {}  // namespace guetzli
    
    
    {
    {
    {
    {
    {
    {            /*
             * Writing another thread's ThreadEntry from here is fine;
             * the only other potential reader is the owning thread --
             * from onThreadExit (which grabs the lock, so is properly
             * synchronized with us) or from get(), which also grabs
             * the lock if it needs to resize the elements vector.
             *
             * We can't conflict with reads for a get(id), because
             * it's illegal to call get on a thread local that's
             * destructing.
             */
            e->elements[id].ptr = nullptr;
            e->elements[id].deleter1 = nullptr;
            e->elements[id].ownsDeleter = false;
          }
        }
        meta.freeIds_.push_back(id);
      }
    }
    // Delete elements outside the locks.
    for (ElementWrapper& elem : elements) {
      elem.dispose(TLPDestructionMode::ALL_THREADS);
    }
  } catch (...) { // Just in case we get a lock error or something anyway...
    LOG(WARNING) << 'Destructor discarding an exception that was thrown.';
  }
}
    
    struct ExceptionInfo {
  const std::type_info* type{nullptr};
  // The values in frames are IP (instruction pointer) addresses.
  // They are only filled if the low-level exception tracer library is
  // linked in or LD_PRELOADed.
  std::vector<uintptr_t> frames; // front() is top of stack
};
    
    
    {    iobuf1->prependChain(IOBuf::create(10));
    iobuf1->prependChain(IOBuf::create(10));
    EXPECT_TRUE(c.isAtEnd());
    iobuf1->prev()->append(5);
    EXPECT_FALSE(c.isAtEnd());
    c.skip(5);
    EXPECT_TRUE(c.isAtEnd());
  }
    
    enum class ordering : int { lt = -1, eq = 0, gt = 1 };
    
    // Specifically, this adds support for two things:
// 1) incrementing/decrementing the shared count by more than 1 at a time
// 2) Getting the thing the shared_ptr points to, which may be different from
//    the aliased pointer.
    
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
    
     private:
  friend class AtomicHashMap;
  explicit ahm_iterator(ContT* ahm,
                        uint32_t subMap,
                        const SubIt& subIt)
      : ahm_(ahm)
      , subMap_(subMap)
      , subIt_(subIt)
  {}
    
    #ifdef __cplusplus
extern 'C' {
#endif
/*
 * VM initialization functions.
 *
 * Note these are the only symbols exported for JNI by the VM.
 */
jint JNI_GetDefaultJavaVMInitArgs(void*);
jint JNI_CreateJavaVM(JavaVM**, JNIEnv**, void*);
jint JNI_GetCreatedJavaVMs(JavaVM**, jsize, jsize*);
    }
    
    #include <fb/visibility.h>
    
    #pragma once
    
        method(setExperimentalFeatureEnabled);
    method(setPointScaleFactor);
    
    template<typename... ARGS>
inline void logv(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_VERBOSE, tag, msg, args...);
}
    
      ProgramLocation(const char* functionName, const char* fileName, int line) :
      m_functionName(functionName),
      m_fileName(fileName),
      m_lineNumber(line)
    {}
    
    #include <fb/visibility.h>
    
    
    {} // namespace detail
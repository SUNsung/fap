
        
          void AcquireLoad(ThreadState* thread) {
    int dummy;
    port::AtomicPointer ap(&dummy);
    int count = 0;
    void *ptr = nullptr;
    thread->stats.AddMessage('(each op is 1000 loads)');
    while (count < 100000) {
      for (int i = 0; i < 1000; i++) {
        ptr = ap.Acquire_Load();
      }
      count++;
      thread->stats.FinishedSingleOp();
    }
    if (ptr == nullptr) exit(1); // Disable unused variable warning.
  }
    
    
    {
    {    if (rnd.OneIn(2)) {
      // Write values of the form <key, my id, counter>.
      // We add some padding for force compactions.
      snprintf(valbuf, sizeof(valbuf), '%d.%d.%-1000d',
               key, id, static_cast<int>(counter));
      ASSERT_OK(db->Put(WriteOptions(), Slice(keybuf), Slice(valbuf)));
    } else {
      // Read a value and verify that it matches the pattern written above.
      Status s = db->Get(ReadOptions(), Slice(keybuf), &value);
      if (s.IsNotFound()) {
        // Key has not yet been written
      } else {
        // Check that the writer thread counter is >= the counter in the value
        ASSERT_OK(s);
        int k, w, c;
        ASSERT_EQ(3, sscanf(value.c_str(), '%d.%d.%d', &k, &w, &c)) << value;
        ASSERT_EQ(k, key);
        ASSERT_GE(w, 0);
        ASSERT_LT(w, kNumThreads);
        ASSERT_LE(static_cast<uintptr_t>(c), reinterpret_cast<uintptr_t>(
            t->state->counter[w].Acquire_Load()));
      }
    }
    counter++;
  }
  t->state->thread_done[id].Release_Store(t);
  fprintf(stderr, '... stopping thread %d after %d ops\n', id, int(counter));
}
    
    // A helper class useful for DBImpl::Get()
class LookupKey {
 public:
  // Initialize *this for looking up user_key at a snapshot with
  // the specified sequence number.
  LookupKey(const Slice& user_key, SequenceNumber sequence);
    }
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    
    {}  // namespace leveldb
    
      // Create a reader that will return log records from '*file'.
  // '*file' must remain live while this Reader is in use.
  //
  // If 'reporter' is non-null, it is notified whenever some data is
  // dropped due to a detected corruption.  '*reporter' must remain
  // live while this Reader is in use.
  //
  // If 'checksum' is true, verify checksums if available.
  //
  // The Reader will start reading at the first record located at physical
  // position >= initial_offset within the file.
  Reader(SequentialFile* file, Reporter* reporter, bool checksum,
         uint64_t initial_offset);
    
    namespace aria2 {
    }
    
    void DHTRoutingTable::getBuckets(
    std::vector<std::shared_ptr<DHTBucket>>& buckets) const
{
  dht::enumerateBucket(buckets, root_.get());
}
    
    #include 'common.h'
    
    class DHTTaskFactory {
public:
  virtual ~DHTTaskFactory() = default;
    }
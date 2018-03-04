
        
        struct Builder::Impl {
  std::mutex mutex;
  std::unordered_set<
    const RepoAuthType::Array*,
    repo_auth_array_hash,
    repo_auth_array_eq
  > types;
  uint32_t nextId{0};
};
    
    void HHVM_FUNCTION(xhprof_sample_enable) {
  if (RuntimeOption::EnableHotProfiler) {
    s_profiler_factory->start(ProfilerKind::Sample, 0);
  } else {
    raise_warning('The runtime option Stats.EnableHotProfiler must be on to '
                  'use xhprof.');
  }
}
    
    #include 'hphp/runtime/vm/jit/abi.h'
#include 'hphp/runtime/vm/jit/arg-group.h'
#include 'hphp/runtime/vm/jit/fixup.h'
#include 'hphp/runtime/vm/jit/phys-reg-saver.h'
#include 'hphp/runtime/vm/jit/vasm-gen.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-reg.h'
    
      mbfl_string mbs_needle;
  mbfl_string_init(&mbs_needle);
  mbs_needle.no_language = MBSTRG(current_language);
  mbs_needle.no_encoding = MBSTRG(current_internal_encoding)->no_encoding;
  mbs_needle.val = (unsigned char *)needle.data();
  mbs_needle.len = needle.size();
    
    ALWAYS_INLINE
ptrdiff_t PackedArray::entriesOffset() {
  return reinterpret_cast<ptrdiff_t>(
    packedData(reinterpret_cast<ArrayData*>(0x0)));
}
    
    void PageletTransport::setAsioEvent(PageletServerTaskEvent *event) {
  m_event = event;
}
    
    
    {  return env.irb->makeBlock(sk, curProfCount(env));
}
    
    FilterBlockBuilder::FilterBlockBuilder(const FilterPolicy* policy)
    : policy_(policy) {
}
    
    
    {  Status result;
  if (msg != NULL) {
    result = Status::Corruption('VersionEdit', msg);
  }
  return result;
}
    
    
    {    done_++;
    if (done_ >= next_report_) {
      if      (next_report_ < 1000)   next_report_ += 100;
      else if (next_report_ < 5000)   next_report_ += 500;
      else if (next_report_ < 10000)  next_report_ += 1000;
      else if (next_report_ < 50000)  next_report_ += 5000;
      else if (next_report_ < 100000) next_report_ += 10000;
      else if (next_report_ < 500000) next_report_ += 50000;
      else                            next_report_ += 100000;
      fprintf(stderr, '... finished %d ops%30s\r', done_, '');
      fflush(stderr);
    }
  }
    
    
    {    // Create tuning options and open the database
    int open_options = kyotocabinet::PolyDB::OWRITER |
                       kyotocabinet::PolyDB::OCREATE;
    int tune_options = kyotocabinet::TreeDB::TSMALL |
        kyotocabinet::TreeDB::TLINEAR;
    if (FLAGS_compression) {
      tune_options |= kyotocabinet::TreeDB::TCOMPRESS;
      db_->tune_compressor(&comp_);
    }
    db_->tune_options(tune_options);
    db_->tune_page_cache(FLAGS_cache_size);
    db_->tune_page(FLAGS_page_size);
    db_->tune_map(256LL<<20);
    if (sync) {
      open_options |= kyotocabinet::PolyDB::OAUTOSYNC;
    }
    if (!db_->open(file_name, open_options)) {
      fprintf(stderr, 'open error: %s\n', db_->error().name());
    }
  }
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
      // compact database
  std::string start_key = Key1(0);
  std::string end_key = Key1(kNumKeys - 1);
  leveldb::Slice least(start_key.data(), start_key.size());
  leveldb::Slice greatest(end_key.data(), end_key.size());
    
      // Check the crc of the type and the block contents
  const char* data = contents.data();    // Pointer to where Read put the data
  if (options.verify_checksums) {
    const uint32_t crc = crc32c::Unmask(DecodeFixed32(data + n + 1));
    const uint32_t actual = crc32c::Value(data, n + 1);
    if (actual != crc) {
      delete[] buf;
      s = Status::Corruption('block checksum mismatch');
      return s;
    }
  }
    
    
    {};

    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(left, right, top, bottom, width, height);
    }
};

    
      bool operator==(const ProgramLocation& other) const {
    // Assumes that the strings are static
    return (m_functionName == other.m_functionName) && (m_fileName == other.m_fileName) && m_lineNumber == other.m_lineNumber;
  }
    
    
    {  T* operator->() const {
    return m_instance;
  }
private:
  T* m_instance;
};
    
      static void OnThreadExit(void *obj) {
    if (NULL != obj) {
      delete (T*)obj;
    }
  }
    
      bool isDirect() const;
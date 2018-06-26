
        
        void Timer::GetRealtimeTime(timespec &ts) {
  gettime(CLOCK_REALTIME, &ts);
}
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  // We don't know for sure what's live.
  PhysRegSaver(v, abi().gpUnreserved - abi().calleeSaved);
    }
    
    Vlabel Vunit::makeScratchBlock() {
  return makeBlock(AreaIndex::Main, 1);
}
    
    void initNuma();
    
      void setFrontier(Address addr) {
    assertx(m_base <= addr && addr <= (m_base + m_size));
    m_frontier = addr;
  }
    
    
void Instruction::SetImmPCOffsetTarget(Instruction* target,
                                       Instruction* from) {
  auto adjusted_target = !from ? target : target + (int64_t)(this - from);
  if (IsPCRelAddressing()) {
    SetPCRelImmTarget(adjusted_target);
  } else if (IsLoadOrStore()) {
    SetPCRelLoadStoreTarget(adjusted_target);
  } else {
    SetBranchImmTarget(adjusted_target);
  }
}
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct GradientBoosterReg
    : public dmlc::FunctionRegEntryBase<
  GradientBoosterReg,
  std::function<GradientBooster* (const std::vector<std::shared_ptr<DMatrix> > &cached_mats,
                                  bst_float base_margin)> > {
};
    
    // implementing configure.
template<typename PairIter>
inline void Learner::Configure(PairIter begin, PairIter end) {
  std::vector<std::pair<std::string, std::string> > vec(begin, end);
  this->Configure(vec);
}
    
      // extend the unique path
  PathElement *unique_path = parent_unique_path + unique_depth + 1;
  std::copy(parent_unique_path, parent_unique_path + unique_depth + 1, unique_path);
    
    // try to load group information from file, if exists
inline bool MetaTryLoadGroup(const std::string& fname,
                             std::vector<unsigned>* group) {
  std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(fname.c_str(), 'r', true));
  if (fi == nullptr) return false;
  dmlc::istream is(fi.get());
  group->clear();
  group->push_back(0);
  unsigned nline = 0;
  while (is >> nline) {
    group->push_back(group->back() + nline);
  }
  return true;
}
    
    class SparsePageDMatrix : public DMatrix {
 public:
  explicit SparsePageDMatrix(std::unique_ptr<DataSource>&& source,
                             std::string  cache_info)
      : source_(std::move(source)), cache_info_(std::move(cache_info)) {
  }
    }
    
        while (iter->Next()) {
      page->Push(iter->Value());
      if (page->MemCostBytes() >= kPageSize) {
        bytes_write += page->MemCostBytes();
        writer.PushWrite(std::move(page));
        writer.Alloc(&page);
        page->Clear();
        double tdiff = dmlc::GetTime() - tstart;
        LOG(CONSOLE) << 'Writing to ' << cache_info << ' in '
                     << ((bytes_write >> 20UL) / tdiff) << ' MB/s, '
                     << (bytes_write >> 20UL) << ' written';
      }
    }
    if (page->data.size() != 0) {
      writer.PushWrite(std::move(page));
    }
    
      virtual const char* Name() const override;
    
    int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  // Run with regular database
  int result;
  {
    fprintf(stderr, 'Running tests with regular db and operator.\n');
    StringAppendOperatorTest::SetOpenDbFunction(&OpenNormalDb);
    result = RUN_ALL_TESTS();
  }
    }
    
      // Create a reader that will return log records from '*file'.
  // '*file' must remain live while this Reader is in use.
  //
  // If 'reporter' is non-nullptr, it is notified whenever some data is
  // dropped due to a detected corruption.  '*reporter' must remain
  // live while this Reader is in use.
  //
  // If 'checksum' is true, verify checksums if available.
  //
  // The Reader will start reading at the first record located at physical
  // position >= initial_offset within the file.
  Reader(std::shared_ptr<Logger> info_log,
  // @lint-ignore TXT2 T25377293 Grandfathered in
	 unique_ptr<SequentialFileReader>&& file,
         Reporter* reporter, bool checksum, uint64_t initial_offset,
         uint64_t log_num);
    
    void JniCallback::releaseJniEnv(jboolean& attached) const {
  JniUtil::releaseJniEnv(m_jvm, attached);
}
    
      bool IsKeyPinned() const { return (key_ != buf_); }
    
      virtual uint64_t ApproximateNumEntries(const Slice& /*start_ikey*/,
                                         const Slice& /*end_key*/) {
    return 0;
  }
    
      jstring jname =
      (jstring)env->CallObjectMethod(m_jcallback_obj, jname_method_id);
  if(env->ExceptionCheck()) {
    // exception thrown
    return;
  }
  jboolean has_exception = JNI_FALSE;
  m_name = JniUtil::copyString(env, jname, &has_exception);  // also releases jname
  if (has_exception == JNI_TRUE) {
    // exception thrown
    return;
  }
    
    #include 'rocksdb/compaction_filter.h'
#include 'rocksjni/jnicallback.h'
    
    #endif  // JAVA_ROCKSJNI_LOGGERJNICALLBACK_H_

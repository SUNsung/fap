
        
        #include 'content/nw/src/api/base/base.h'
    
      int id() const { return id_; }
  std::string extension_id_;
  ObjectManager* object_manager() const { return object_manager_.get(); }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Clipboard);
};
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
       bool HasIcon(int command_id) override;
    
    
    {  gtk_widget_show(menu_);
  g_object_ref_sink(G_OBJECT(menu_));
}
    
        bool WriteRTF(ClipboardData& data) {
      DCHECK(data.type == TYPE_RTF);
      scw_->WriteRTF(*(data.data));
      return true;
    }
    
    class NwClipboardReadAvailableTypesFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardReadAvailableTypesFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
        // Check reverse iteration results are the reverse of forward results
    size_t matched = 0;
    for (iter->SeekToLast(); iter->Valid(); iter->Prev()) {
      ASSERT_LT(matched, forward.size());
      ASSERT_EQ(IterStatus(iter), forward[forward.size() - matched - 1]);
      matched++;
    }
    ASSERT_EQ(matched, forward.size());
    
    // Soft limit on number of level-0 files.  We slow down writes at this point.
static const int kL0_SlowdownWritesTrigger = 8;
    
    bool GuessType(const std::string& fname, FileType* type) {
  size_t pos = fname.rfind('/');
  std::string basename;
  if (pos == std::string::npos) {
    basename = fname;
  } else {
    basename = std::string(fname.data() + pos + 1, fname.size() - pos - 1);
  }
  uint64_t ignored;
  return ParseFileName(basename, &ignored, type);
}
    
    
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
    
      // Read the next record into *record.  Returns true if read
  // successfully, false if we hit end of the input.  May use
  // '*scratch' as temporary storage.  The contents filled in *record
  // will only be valid until the next mutating operation on this
  // reader or the next mutation to *scratch.
  bool ReadRecord(Slice* record, std::string* scratch);
    
    TEST(LogTest, ReadFourthFirstBlockTrailer) {
  CheckInitialOffsetRecord(log::kBlockSize - 4, 3);
}
    
    #ifndef BOOST_NO_TEMPLATED_ITERATOR_CONSTRUCTORS
   //
   // Augment error message with the regular expression text:
   //
   if(start_pos == position)
      start_pos = (std::max)(static_cast<std::ptrdiff_t>(0), position - static_cast<std::ptrdiff_t>(10));
   std::ptrdiff_t end_pos = (std::min)(position + static_cast<std::ptrdiff_t>(10), static_cast<std::ptrdiff_t>(m_end - m_base));
   if(error_code != regex_constants::error_empty)
   {
      if((start_pos != 0) || (end_pos != (m_end - m_base)))
         message += '  The error occurred while parsing the regular expression fragment: '';
      else
         message += '  The error occurred while parsing the regular expression: '';
      if(start_pos != end_pos)
      {
         message += std::string(m_base + start_pos, m_base + position);
         message += '>>>HERE>>>';
         message += std::string(m_base + position, m_base + end_pos);
      }
      message += ''.';
   }
#endif
    
    #if defined(__SUNPRO_CC)
using std::list;
#endif
    
    #endif
    
    #ifndef BOOST_REGEX_MATCHER_HPP
#define BOOST_REGEX_MATCHER_HPP
    
    template <class T>
class concrete_protected_call
   : public abstract_protected_call
{
public:
   typedef bool (T::*proc_type)();
   concrete_protected_call(T* o, proc_type p)
      : obj(o), proc(p) {}
private:
   virtual bool call()const;
   T* obj;
   proc_type proc;
};
    
    #ifndef BOOST_REGEX_V4_REGEX_SEARCH_HPP
#define BOOST_REGEX_V4_REGEX_SEARCH_HPP
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    
    {
    {      // Record end time
      uint64_t end_time = env->NowMicros();
      double elapsed = static_cast<double>(end_time - start_time) * 1e-6;
      uint32_t qps = static_cast<uint32_t>(
          static_cast<double>(FLAGS_threads * FLAGS_ops_per_thread) / elapsed);
      fprintf(stdout, 'Complete in %.3f s; QPS = %u\n', elapsed, qps);
    }
    return true;
  }
    
    // REQUIRES: DB mutex held
Env::WriteLifeTimeHint ColumnFamilyData::CalculateSSTWriteHint(int level) {
  if (initial_cf_options_.compaction_style != kCompactionStyleLevel) {
    return Env::WLTH_NOT_SET;
  }
  if (level == 0) {
    return Env::WLTH_MEDIUM;
  }
  int base_level = current_->storage_info()->base_level();
    }
    
      enum class WriteStallCause {
    kNone,
    kMemtableLimit,
    kL0FileCountLimit,
    kPendingCompactionBytes,
  };
  static std::pair<WriteStallCondition, WriteStallCause>
  GetWriteStallConditionAndCause(int num_unflushed_memtables, int num_l0_files,
                                 uint64_t num_compaction_needed_bytes,
                                 const MutableCFOptions& mutable_cf_options);
    
    #include 'db/compaction.h'
#include 'db/compaction_iteration_stats.h'
#include 'db/merge_helper.h'
#include 'db/pinned_iterators_manager.h'
#include 'db/range_del_aggregator.h'
#include 'db/snapshot_checker.h'
#include 'options/cf_options.h'
#include 'rocksdb/compaction_filter.h'
    
        uint64_t fileSize;
    status = defaultEnv->GetFileSize(filePath, &fileSize);
    ASSERT_OK(status);
    
      env.now_micros_ += 1999900u;  // sleep debt 1000
    
      // Skip 'n' bytes from the file. This is guaranteed to be no
  // slower that reading the same data, but may be faster.
  //
  // If end of file is reached, skipping will stop at the end of the
  // file, and Skip will return OK.
  //
  // REQUIRES: External synchronization
  virtual Status Skip(uint64_t n) override {
    auto status = file_->Skip(n);
    if (!status.ok()) {
      return status;
    }
    offset_ += n;
    return status;
  }
    
          // Truncate to available space if necessary
      if (p >= limit) {
        if (iter == 0) {
          continue;       // Try again with larger buffer
        } else {
          p = limit - 1;
        }
      }
    
     public:
  PosixLogger(FILE* f, uint64_t (*gettid)(), Env* env,
              const InfoLogLevel log_level = InfoLogLevel::ERROR_LEVEL)
      : Logger(log_level),
        file_(f),
        gettid_(gettid),
        log_size_(0),
        fd_(fileno(f)),
        last_flush_micros_(0),
        env_(env),
        flush_pending_(false) {}
  virtual ~PosixLogger() {
    if (!closed_) {
      closed_ = true;
      PosixCloseHelper();
    }
  }
  virtual void Flush() override {
    TEST_SYNC_POINT('PosixLogger::Flush:Begin1');
    TEST_SYNC_POINT('PosixLogger::Flush:Begin2');
    if (flush_pending_) {
      flush_pending_ = false;
      fflush(file_);
    }
    last_flush_micros_ = env_->NowMicros();
  }
    
    
    {  mutable int count_ = 0;
  mutable int merge_count_ = 0;
};

        
        #endif  // ATOM_BROWSER_API_ATOM_API_RENDER_PROCESS_PREFERENCES_H_

    
    net::URLRequestJob* AsarProtocolHandler::MaybeCreateJob(
    net::URLRequest* request,
    net::NetworkDelegate* network_delegate) const {
  base::FilePath full_path;
  net::FileURLToFilePath(request->url(), &full_path);
  auto* job = new URLRequestAsarJob(request, network_delegate);
  job->Initialize(file_task_runner_, full_path);
  return job;
}
    
    #endif  // ATOM_BROWSER_NET_URL_REQUEST_BUFFER_JOB_H_

    
    #endif  // ATOM_BROWSER_NET_URL_REQUEST_STRING_JOB_H_

    
    // The argument separating arguments intended for the relauncher process from
// those intended for the relaunched process. '---' is chosen instead of '--'
// because CommandLine interprets '--' as meaning 'end of switches', but
// for many purposes, the relauncher process' CommandLine ought to interpret
// arguments intended for the relaunched process, to get the correct settings
// for such things as logging and the user-data-dir in case it affects crash
// reporting.
extern const CharType* kRelauncherArgSeparator;
    
    int64_t TimeStamp::Get(bool &error, int hou, int min, int sec, int mon, int day,
                   int yea, bool gmt) {
  auto dt = req::make<DateTime>(Current());
  if (gmt) {
    dt->setTimezone(req::make<TimeZone>('UTC'));
  }
  dt->set(hou, min, sec, mon, day, yea);
  return dt->toTimeStamp(error);
}
    
    namespace HPHP {
/////////////////////////////////////////////////////////////////////////////
    }
    
      const timespec& getStartTimer() const;
  int getTimeoutSeconds() const;
    
      if (!encoding.empty()) {
    mbs_haystack.no_encoding = mbs_needle.no_encoding =
      mbfl_name2no_encoding(encoding.data());
    if (mbs_haystack.no_encoding == mbfl_no_encoding_invalid) {
      raise_warning('Unknown encoding \'%s\'', encoding.data());
      return false;
    }
  }
    
    #include 'hphp/runtime/base/array-data.h'
#include 'hphp/runtime/base/hash-table.h'
#include 'hphp/runtime/base/typed-value.h'
    
    
    {
    {
    {      // Rule 2: a block's weight can't exceed the sum of its successors, except
      // for exit blocks.
      if (succs(block).size() > 0) {
        uint64_t succsTotal = 0;
        for (auto s : succs(block)) {
          succsTotal += unit.blocks[s].weight;
        }
        if (block.weight > succsTotal) {
          block.weight = succsTotal;
          changed = true;
        }
      }
    }
  } while (changed);
}
    
    bool PageletTransport::isUploadedFile(const String& filename) {
  return m_rfc1867UploadedFiles.find(filename.c_str()) !=
         m_rfc1867UploadedFiles.end();
}
    
    
    {  numa_node_mask = folly::nextPowTwo(numa_num_nodes) - 1;
}
    
    ///////////////////////////////////////////////////////////////////////////////
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
    TEST(LogTest, ShortTrailer) {
  const int n = kBlockSize - 2*kHeaderSize + 4;
  Write(BigString('foo', n));
  ASSERT_EQ(kBlockSize - kHeaderSize + 4, WrittenBytes());
  Write('');
  Write('bar');
  ASSERT_EQ(BigString('foo', n), Read());
  ASSERT_EQ('', Read());
  ASSERT_EQ('bar', Read());
  ASSERT_EQ('EOF', Read());
}
    
    class VersionEdit {
 public:
  VersionEdit() { Clear(); }
  ~VersionEdit() { }
    }
    
    
    {      if (filename.size() >= dir.size() + 1 && filename[dir.size()] == '/' &&
          Slice(filename).starts_with(Slice(dir))) {
        result->push_back(filename.substr(dir.size() + 1));
      }
    }
    
      virtual void Seek(const Slice& target) {
    // Binary search in restart array to find the last restart point
    // with a key < target
    uint32_t left = 0;
    uint32_t right = num_restarts_ - 1;
    while (left < right) {
      uint32_t mid = (left + right + 1) / 2;
      uint32_t region_offset = GetRestartPoint(mid);
      uint32_t shared, non_shared, value_length;
      const char* key_ptr = DecodeEntry(data_ + region_offset,
                                        data_ + restarts_,
                                        &shared, &non_shared, &value_length);
      if (key_ptr == NULL || (shared != 0)) {
        CorruptionError();
        return;
      }
      Slice mid_key(key_ptr, non_shared);
      if (Compare(mid_key, target) < 0) {
        // Key at 'mid' is smaller than 'target'.  Therefore all
        // blocks before 'mid' are uninteresting.
        left = mid;
      } else {
        // Key at 'mid' is >= 'target'.  Therefore all blocks at or
        // after 'mid' are uninteresting.
        right = mid - 1;
      }
    }
    }
    
    
    {  // Check last filter
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'box'));
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'hello'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'bar'));
}
    
    Iterator* NewMergingIterator(const Comparator* cmp, Iterator** list, int n) {
  assert(n >= 0);
  if (n == 0) {
    return NewEmptyIterator();
  } else if (n == 1) {
    return list[0];
  } else {
    return new MergingIterator(cmp, list, n);
  }
}
    
     protected:
  /// Require the runnable thread define an entrypoint.
  virtual void start() = 0;
    
     protected:
  /**
   * @brief Store parsed event data from an EventCallback in a backing store.
   *
   * Within a EventCallback the EventSubscriber has an opportunity to create
   * an osquery Row element, add the relevant table data for the EventSubscriber
   * and store that element in the osquery backing store. At query-time
   * the added data will apply selection criteria and return these elements.
   * The backing store data retrieval is optimized by time-based indexes. It
   * is important to added EventTime as it relates to 'when the event occurred'.
   *
   * @param r An osquery Row element.
   *
   * @return Was the element added to the backing store.
   */
  Status add(Row& r) {
    return add(r, 0);
  }
    
    /**
 * @brief Request the extensions API to autoload any appropriate modules.
 *
 * Extension modules are shared libraries that add Plugins to the osquery
 * core's registry at runtime.
 */
void loadModules();
    
      /*
   * @brief Check if flag value has been overridden.
   *
   * @param name the flag name.
   * @return is the flag set to its default value.
   */
  static bool isDefault(const std::string& name);
    
      /// The size of the original groups to backup when restoring privileges.
  size_t group_size_{0};
    
      // Enables use of gtest (ASSERT|EXPECT)_NE
  bool operator!=(const Status& rhs) const { return !operator==(rhs); }
    
        // We should have a property tree of pack content mimicking embedded
    // configuration packs, ready to parse as a string.
    std::ostringstream output;
    pt::write_json(output, multi_pack, false);
    pack = output.str();
    if (pack.empty()) {
      return Status(1, 'Multi-pack content empty');
    }
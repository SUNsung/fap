
        
        
    {}  // namespace tesseract.
    
    
    {}  // namespace tesseract.

    
      // Array holding scores for each orientation id [0,3].
  // Orientation ids [0..3] map to [0, 270, 180, 90] degree orientations of the
  // page respectively, where the values refer to the amount of clockwise
  // rotation to be applied to the page for the text to be upright and readable.
  float orientations[4];
  // Script confidence scores for each of 4 possible orientations.
  float scripts_na[4][kMaxNumberOfScripts];
    
    #include 'db/builder.h'
    
      void MaybeScheduleCompaction() EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  static void BGWork(void* db);
  void BackgroundCall();
  void BackgroundCompaction() EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  void CleanupCompaction(CompactionState* compact)
      EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  Status DoCompactionWork(CompactionState* compact)
      EXCLUSIVE_LOCKS_REQUIRED(mutex_);
    
      iter->SeekToFirst();
  ASSERT_EQ(IterStatus(iter), 'a->va');
  iter->Next();
  ASSERT_EQ(IterStatus(iter), 'b->vb');
  iter->Next();
  ASSERT_EQ(IterStatus(iter), 'c->vc');
  iter->Next();
  ASSERT_EQ(IterStatus(iter), '(invalid)');
  iter->SeekToFirst();
  ASSERT_EQ(IterStatus(iter), 'a->va');
  iter->Prev();
  ASSERT_EQ(IterStatus(iter), '(invalid)');
    
    static std::string ShortSuccessor(const std::string& s) {
  std::string result = s;
  InternalKeyComparator(BytewiseComparator()).FindShortSuccessor(&result);
  return result;
}
    
      fname = LockFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kDBLockFile, type);
    
    template<typename Key, class Comparator>
bool SkipList<Key,Comparator>::Contains(const Key& key) const {
  Node* x = FindGreaterOrEqual(key, nullptr);
  if (x != nullptr && Equal(key, x->key)) {
    return true;
  } else {
    return false;
  }
}
    
      // Removes a SnapshotImpl from this list.
  //
  // The snapshot must have been created by calling New() on this list.
  //
  // The snapshot pointer should not be const, because its memory is
  // deallocated. However, that would force us to change DB::ReleaseSnapshot(),
  // which is in the API, and currently takes a const Snapshot.
  void Delete(const SnapshotImpl* snapshot) {
#if !defined(NDEBUG)
    assert(snapshot->list_ == this);
#endif  // !defined(NDEBUG)
    snapshot->prev_->next_ = snapshot->next_;
    snapshot->next_->prev_ = snapshot->prev_;
    delete snapshot;
  }
    
    Status CheckCFPathsSupported(const DBOptions& db_options,
                             const ColumnFamilyOptions& cf_options) {
  // More than one cf_paths are supported only in universal
  // and level compaction styles. This function also checks the case
  // in which cf_paths is not specified, which results in db_paths
  // being used.
  if ((cf_options.compaction_style != kCompactionStyleUniversal) &&
      (cf_options.compaction_style != kCompactionStyleLevel)) {
    if (cf_options.cf_paths.size() > 1) {
      return Status::NotSupported(
          'More than one CF paths are only supported in '
          'universal and level compaction styles. ');
    } else if (cf_options.cf_paths.empty() &&
               db_options.db_paths.size() > 1) {
      return Status::NotSupported(
          'More than one DB paths are only supported in '
          'universal and level compaction styles. ');
    }
  }
  return Status::OK();
}
    
      Options options = CurrentOptions();
  options.create_if_missing = true;
  options.merge_operator = MergeOperators::CreateUInt64AddOperator();
  options.num_levels = 3;
  // Filter out keys with value is 2.
  options.compaction_filter_factory =
      std::make_shared<ConditionalFilterFactory>(two);
  DestroyAndReopen(options);
    
      virtual Status EnableFileDeletions(bool /*force*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  virtual Status GetLiveFiles(std::vector<std::string>&,
                              uint64_t* /*manifest_file_size*/,
                              bool /*flush_memtable*/ = true) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
    
          // Print the message
      if (p < limit) {
        va_list backup_ap;
        va_copy(backup_ap, ap);
        p += vsnprintf(p, limit - p, format, backup_ap);
        va_end(backup_ap);
      }
    
    /*
 * PosixMmapFile
 *
 * We preallocate up to an extra megabyte and use memcpy to append new
 * data to the file.  This is safe since we either properly close the
 * file before reading from it, or for log files, the reading code
 * knows enough to skip zero suffixes.
 */
Status PosixMmapFile::UnmapCurrentRegion() {
  TEST_KILL_RANDOM('PosixMmapFile::UnmapCurrentRegion:0', rocksdb_kill_odds);
  if (base_ != nullptr) {
    int munmap_status = munmap(base_, limit_ - base_);
    if (munmap_status != 0) {
      return IOError('While munmap', filename_, munmap_status);
    }
    file_offset_ += limit_ - base_;
    base_ = nullptr;
    limit_ = nullptr;
    last_sync_ = nullptr;
    dst_ = nullptr;
    }
    }
    
    namespace rocksdb {
    }
    
      // Transaction could not commit since the write outside of the txn conflicted
  // with the read!
  assert(s.IsBusy());
    
    static const int kCbToGreenTable[256] = {
  2919680,  2897126,  2874572,  2852018,  2829464,  2806910,  2784356,  2761802,
  2739248,  2716694,  2694140,  2671586,  2649032,  2626478,  2603924,  2581370,
  2558816,  2536262,  2513708,  2491154,  2468600,  2446046,  2423492,  2400938,
  2378384,  2355830,  2333276,  2310722,  2288168,  2265614,  2243060,  2220506,
  2197952,  2175398,  2152844,  2130290,  2107736,  2085182,  2062628,  2040074,
  2017520,  1994966,  1972412,  1949858,  1927304,  1904750,  1882196,  1859642,
  1837088,  1814534,  1791980,  1769426,  1746872,  1724318,  1701764,  1679210,
  1656656,  1634102,  1611548,  1588994,  1566440,  1543886,  1521332,  1498778,
  1476224,  1453670,  1431116,  1408562,  1386008,  1363454,  1340900,  1318346,
  1295792,  1273238,  1250684,  1228130,  1205576,  1183022,  1160468,  1137914,
  1115360,  1092806,  1070252,  1047698,  1025144,  1002590,   980036,   957482,
   934928,   912374,   889820,   867266,   844712,   822158,   799604,   777050,
   754496,   731942,   709388,   686834,   664280,   641726,   619172,   596618,
   574064,   551510,   528956,   506402,   483848,   461294,   438740,   416186,
   393632,   371078,   348524,   325970,   303416,   280862,   258308,   235754,
   213200,   190646,   168092,   145538,   122984,   100430,    77876,    55322,
    32768,    10214,   -12340,   -34894,   -57448,   -80002,  -102556,  -125110,
  -147664,  -170218,  -192772,  -215326,  -237880,  -260434,  -282988,  -305542,
  -328096,  -350650,  -373204,  -395758,  -418312,  -440866,  -463420,  -485974,
  -508528,  -531082,  -553636,  -576190,  -598744,  -621298,  -643852,  -666406,
  -688960,  -711514,  -734068,  -756622,  -779176,  -801730,  -824284,  -846838,
  -869392,  -891946,  -914500,  -937054,  -959608,  -982162, -1004716, -1027270,
 -1049824, -1072378, -1094932, -1117486, -1140040, -1162594, -1185148, -1207702,
 -1230256, -1252810, -1275364, -1297918, -1320472, -1343026, -1365580, -1388134,
 -1410688, -1433242, -1455796, -1478350, -1500904, -1523458, -1546012, -1568566,
 -1591120, -1613674, -1636228, -1658782, -1681336, -1703890, -1726444, -1748998,
 -1771552, -1794106, -1816660, -1839214, -1861768, -1884322, -1906876, -1929430,
 -1951984, -1974538, -1997092, -2019646, -2042200, -2064754, -2087308, -2109862,
 -2132416, -2154970, -2177524, -2200078, -2222632, -2245186, -2267740, -2290294,
 -2312848, -2335402, -2357956, -2380510, -2403064, -2425618, -2448172, -2470726,
 -2493280, -2515834, -2538388, -2560942, -2583496, -2606050, -2628604, -2651158,
 -2673712, -2696266, -2718820, -2741374, -2763928, -2786482, -2809036, -2831590,
};
    
      int opt_idx = 1;
  for(;opt_idx < argc;opt_idx++) {
    if (strnlen(argv[opt_idx], 2) < 2 || argv[opt_idx][0] != '-' || argv[opt_idx][1] != '-')
      break;
    if (!strcmp(argv[opt_idx], '--verbose')) {
      verbose = 1;
    } else if (!strcmp(argv[opt_idx], '--quality')) {
      opt_idx++;
      if (opt_idx >= argc)
        Usage();
      quality = atoi(argv[opt_idx]);
    } else if (!strcmp(argv[opt_idx], '--memlimit')) {
      opt_idx++;
      if (opt_idx >= argc)
        Usage();
      memlimit_mb = atoi(argv[opt_idx]);
    } else if (!strcmp(argv[opt_idx], '--nomemlimit')) {
      memlimit_mb = -1;
    } else if (!strcmp(argv[opt_idx], '--')) {
      opt_idx++;
      break;
    } else {
      fprintf(stderr, 'Unknown commandline flag: %s\n', argv[opt_idx]);
      Usage();
    }
  }
    
    #include 'guetzli/jpeg_data.h'
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    
    {  return true;
}
    
    
    {  std::string arguments;
  ASSERT_TRUE(getTracepointArguments(
      'folly', 'test_static_tracepoint_array', 0, arguments));
  std::array<int, 3> expected{{sizeof(void*), sizeof(int), sizeof(int64_t)}};
  checkTracepointArguments(arguments, expected);
}
    
    #pragma once
    
        template <
        typename OtherExecutor,
        typename = typename std::enable_if<
            std::is_convertible<OtherExecutor*, ExecutorT*>::value>::type>
    /* implicit */ KeepAlive(KeepAlive<OtherExecutor>&& other) noexcept
        : KeepAlive(other.get(), other.executorAndDummyFlag_ & kDummyFlag) {
      other.executorAndDummyFlag_ = 0;
    }
    
    
    {} // namespace detail
    
        // Test the boundaries of conversion to int32_t seconds
    using sec_i32 = std::chrono::duration<int32_t>;
    ts.tv_sec = 2147483647;
    ts.tv_nsec = 0;
    EXPECT_EQ(std::numeric_limits<int32_t>::max(), to<sec_i32>(ts).count());
    ts.tv_nsec = 1000000000;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    ts.tv_sec = -2147483648;
    ts.tv_nsec = 0;
    EXPECT_EQ(std::numeric_limits<int32_t>::min(), to<sec_i32>(ts).count());
    ts.tv_sec = -2147483649;
    ts.tv_nsec = 999999999;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    ts.tv_sec = -2147483649;
    ts.tv_nsec = 0;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    ts.tv_sec = -2147483650;
    ts.tv_nsec = 0;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    
    #endif // D_DHT_ROUTING_TABLE_SERIALIZER_H

    
    DNSCache::DNSCache(const DNSCache& c) = default;
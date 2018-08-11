  if (t_size == 0) return s_size;
  if (s == t) return 0;
    
    #include 'tensorflow/core/distributed_runtime/partial_run_mgr.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    /*
 * Encoding implementation, shared across V1 and V2 ops. Creates a new
 * output in the context.
 */
void Encode(OpKernelContext* context, const Tensor& contents,
            const string& file_format, const int32 bits_per_second,
            const int32 samples_per_second) {
  std::vector<float> samples;
  samples.reserve(contents.NumElements());
  for (int32 i = 0; i < contents.NumElements(); ++i) {
    samples.push_back(contents.flat<float>()(i));
  }
  const int32 channel_count = contents.dim_size(1);
  string encoded_audio;
  OP_REQUIRES_OK(
      context, CreateAudioFile(file_format, bits_per_second, samples_per_second,
                               channel_count, samples, &encoded_audio));
    }
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
    
    Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta) {
  Status s;
  meta->file_size = 0;
  iter->SeekToFirst();
    }
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
      const Comparator* user_comparator() const { return user_comparator_; }
    
    static std::string ShortSuccessor(const std::string& s) {
  std::string result = s;
  InternalKeyComparator(BytewiseComparator()).FindShortSuccessor(&result);
  return result;
}
    
    
    {  bool Overlaps(const char* smallest, const char* largest) {
    InternalKeyComparator cmp(BytewiseComparator());
    Slice s(smallest != NULL ? smallest : '');
    Slice l(largest != NULL ? largest : '');
    return SomeFileOverlapsRange(cmp, disjoint_sorted_files_, files_,
                                 (smallest != NULL ? &s : NULL),
                                 (largest != NULL ? &l : NULL));
  }
};
    
    #include 'db/memtable.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'util/logging.h'
#include 'util/testharness.h'
    
    
    {    FILE* cpuinfo = fopen('/proc/cpuinfo', 'r');
    if (cpuinfo != NULL) {
      char line[1000];
      int num_cpus = 0;
      std::string cpu_type;
      std::string cache_size;
      while (fgets(line, sizeof(line), cpuinfo) != NULL) {
        const char* sep = strchr(line, ':');
        if (sep == NULL) {
          continue;
        }
        Slice key = TrimSpace(Slice(line, sep - 1 - line));
        Slice val = TrimSpace(Slice(sep + 1));
        if (key == 'model name') {
          ++num_cpus;
          cpu_type = val.ToString();
        } else if (key == 'cache size') {
          cache_size = val.ToString();
        }
      }
      fclose(cpuinfo);
      fprintf(stderr, 'CPU:        %d * %s\n', num_cpus, cpu_type.c_str());
      fprintf(stderr, 'CPUCache:   %s\n', cache_size.c_str());
    }
#endif
  }
    
      // Streams a pointer value to this object.
  //
  // This function is an overload of the previous one.  When you
  // stream a pointer to a Message, this definition will be used as it
  // is more specialized.  (The C++ Standard, section
  // [temp.func.order].)  If you stream a non-pointer, then the
  // previous definition will be used.
  //
  // The reason for this overload is that streaming a NULL pointer to
  // ostream is undefined behavior.  Depending on the compiler, you
  // may get '0', '(nil)', '(null)', or an access violation.  To
  // ensure consistent result across compilers, we always treat NULL
  // as '(null)'.
  template <typename T>
  inline Message& operator <<(T* const& pointer) {  // NOLINT
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
    return *this;
  }
#endif  // GTEST_OS_SYMBIAN
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11>
internal::ValueArray11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10,
    T11> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11) {
  return internal::ValueArray11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10,
      T11>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11);
}
    
    // Then, use TYPED_TEST_P() to define as many type-parameterized tests
// for this type-parameterized test case as you want.
TYPED_TEST_P(FooTest, DoesBlah) {
  // Inside a test, refer to TypeParam to get the type parameter.
  TypeParam n = 0;
  ...
}
    
    # else
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement)
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_PARAM_UTIL_GENERATED_H_

    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20>
struct Types20 {
  typedef T1 Head;
  typedef Types19<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20> Tail;
};
    
    struct hphp_string_hash {
  size_t operator()(const String& s) const {
    return s.get()->hash();
  }
};
    
    
    {}

    
    bool Bump2MMapper::addMappingImpl(BumpAllocState& state, size_t newSize) {
  // Check quota and alignment before trying to map.  Note that m_maxNumPages
  // may be initialized later for this mapper, so don't fail permanently before
  // it is initialized.
  if (m_currNumPages >= m_maxNumPages) {
    if (m_maxNumPages) {
      m_failed = true;
    }
    return false;
  }
  auto newPageBase = state.frontier();
  // Add some 4K pages before madvise()
  if (!Bump4KMapper::addMappingImpl(state, newSize)) {
    return false;
  }
  auto const nHugePages =
    std::min(static_cast<unsigned>(kChunkSize / size2m),
             m_maxNumPages - m_currNumPages);
  hintHuge(reinterpret_cast<void*>(newPageBase), nHugePages * size2m);
  m_currNumPages += nHugePages;
  return true;
}
    
    namespace HPHP { namespace alloc {
    }
    }
    
    namespace HPHP { namespace alloc {
    }
    }
    
    void* mmap_1g(void* addr, int node, bool map_fixed) {
#ifdef __linux__
  if (s_num1GPages >= kMaxNum1GPages) return nullptr;
  if (get_huge1g_info(node).free_hugepages <= 0) return nullptr;
  if (node >= 0 && !numa_node_allowed(node)) return nullptr;
#ifdef HAVE_NUMA
  SavedNumaPolicy numaPolicy;
  if (node >= 0 && numa_num_nodes > 1) {
    numaPolicy.save();
    unsigned long singleNodeMask = 1ul << node;
    set_mempolicy(MPOL_BIND, &singleNodeMask, sizeof(singleNodeMask));
  }
#endif
  void* ret = mmap_1g_impl(addr, map_fixed);
  if (ret != nullptr) {
    s_1GPages[s_num1GPages++] = ret;
  }
  return ret;
#else
  return nullptr;
#endif
}
    
    void cgLdArrFuncCtx(IRLS& env, const IRInstruction* inst) {
  auto const args = argGroup(env, inst)
    .ssa(0)
    .addr(srcLoc(env, inst, 1).reg(),
          cellsToBytes(inst->extra<LdArrFuncCtx>()->offset.offset))
    .ssa(2);
    }
    
    #endif // incl_HPHP_ARRAY_UTIL_H_

    
    TEST_F(ViewsConfigParserPluginTests, test_add_view) {
  Config c;
  auto s = c.update(getTestConfigMap());
  EXPECT_TRUE(s.ok());
    }
    
    #include <osquery/config.h>
#include <osquery/dispatcher.h>
    
    
    {TEST_F(SyslogTests, test_csv_separator) {
  ASSERT_EQ(std::vector<std::string>({'', '', '', '', ''}), splitCsv(',,,,'));
  ASSERT_EQ(std::vector<std::string>({' ', ' ', ' ', ' ', ' '}),
            splitCsv(' , , , , '));
  ASSERT_EQ(std::vector<std::string>({'foo', 'bar', 'baz'}),
            splitCsv('foo,bar,baz'));
  ASSERT_EQ(std::vector<std::string>({'foo', 'bar', 'baz'}),
            splitCsv('\'foo\',\'bar\',\'baz\''));
  ASSERT_EQ(std::vector<std::string>({',foo,', ',bar', 'baz,'}),
            splitCsv('\',foo,\',\',bar\',\'baz,\''));
  ASSERT_EQ(std::vector<std::string>({',f\\oo,', ',ba\\'r', 'baz\\,'}),
            splitCsv('\',f\\oo,\',\',ba\\'r\',\'baz\\,\''));
  ASSERT_EQ(std::vector<std::string>({'\',f\\o\'o,', '\',ba\\'r', 'baz\\,\''}),
            splitCsv('\'\'\',f\\o\'\'o,\',\'\'\',ba\\'r\',\'baz\\,\'\'\''));
  ASSERT_EQ(std::vector<std::string>({'\',f\\ø\'o,', '\',bá\\'r', 'baz\\,\''}),
            splitCsv('\'\'\',f\\ø\'\'o,\',\'\'\',bá\\'r\',\'baz\\,\'\'\''));
}
}

    
      /**
   * @brief Return a string representation of a udev property.
   *
   * @param device the udev device pointer.
   * @param property the udev property identifier string.
   * @return string representation of the property or empty if null.
   */
  static std::string getValue(struct udev_device* device,
                              const std::string& property);
    
    FLAG(uint64,
     aws_firehose_period,
     10,
     'Seconds between flushing logs to Firehose (default 10)');
    
    FLAG(string, aws_kinesis_stream, '', 'Name of Kinesis stream for logging')
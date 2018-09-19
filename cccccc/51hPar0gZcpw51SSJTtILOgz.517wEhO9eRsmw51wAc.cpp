
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    void CostAnalyzer::GatherCosts() {
  CostGraphDef cost_graph_measured;
  PredictCosts(&measure_estimator_, &cost_graph_measured,
               &total_time_measured_);
  VLOG(1) << 'Graph size: ' << item_->graph.node_size();
  VLOG(1) << 'cost_graph_measured size: ' << cost_graph_measured.node_size();
    }
    
    Status ModelAnalyzer::GenerateReport(bool debug, bool assume_valid_feeds,
                                     std::ostream& os) {
  GraphProperties properties(item_);
  TF_RETURN_IF_ERROR(properties.InferStatically(assume_valid_feeds));
    }
    
    // Returns the id number of the bfloat16 numpy type.
int Bfloat16NumpyType();
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_SAFE_PTR_H_

    
      const tensorflow::OpRegistrationData* op_reg_data;
  auto status =
      tensorflow::OpRegistry::Global()->LookUp(node_def.op(), &op_reg_data);
  if (!status.ok()) {
    LOG(WARNING) << 'Op ' << node_def.op() << ' not found: ' << status;
    return '';
  }
  AddDefaultsToNodeDef(op_reg_data->op_def, &node_def);
    
    // Functions for getting information about kernels registered in the binary.
#ifndef TENSORFLOW_PYTHON_UTIL_KERNEL_REGISTRY_H_
#define TENSORFLOW_PYTHON_UTIL_KERNEL_REGISTRY_H_
    
    ScopedActivateExecutorContext::ScopedActivateExecutorContext(
    ScopedActivateExecutorContext &&other)
    : driver_scoped_activate_context_(other.driver_scoped_activate_context_) {
  other.driver_scoped_activate_context_ = nullptr;
}
    
      // Check for input iterator errors
  if (!iter->status().ok()) {
    s = iter->status();
  }
    
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
    
        const size_t avail = kBlockSize - block_offset_ - kHeaderSize;
    const size_t fragment_length = (left < avail) ? left : avail;
    
    // State shared by all concurrent executions of the same benchmark.
class SharedState {
 public:
  explicit SharedState(CacheBench* cache_bench)
      : cv_(&mu_),
        num_threads_(FLAGS_threads),
        num_initialized_(0),
        start_(false),
        num_done_(0),
        cache_bench_(cache_bench) {
  }
    }
    
    
    {  int level = vstorage->num_non_empty_levels() - 1;
  if (vstorage->LevelFilesBrief(level).num_files > 0) {
    files_ = vstorage->LevelFilesBrief(level);
    return Status::OK();
  }
  return Status::NotSupported('no file exists');
}
    
      // Doesn't include records skipped because of
  // CompactionFilter::Decision::kRemoveAndSkipUntil.
  int64_t num_record_drop_user = 0;
    
      // Given a sequence number, return the sequence number of the
  // earliest snapshot that this sequence number is visible in.
  // The snapshots themselves are arranged in ascending order of
  // sequence numbers.
  // Employ a sequential search because the total number of
  // snapshots are typically small.
  inline SequenceNumber findEarliestVisibleSnapshot(
      SequenceNumber in, SequenceNumber* prev_snapshot);
    
        uint64_t fileSize;
    status = defaultEnv->GetFileSize(filePath, &fileSize);
    ASSERT_OK(status);
    
    
    {
    {  // Get wal file in wal_dir
  if (dbname.compare(options.wal_dir) != 0) {
    if (!env->GetChildren(options.wal_dir, &files).ok()) {
      Error(options.info_log,
          'Error when reading %s dir\n',
          options.wal_dir.c_str());
      return;
    }
    wal_info.clear();
    for (std::string file : files) {
      if (ParseFileName(file, &number, &type)) {
        if (type == kLogFile) {
          env->GetFileSize(options.wal_dir + '/' + file, &file_size);
          char str[16];
          snprintf(str, sizeof(str), '%' PRIu64, file_size);
          wal_info.append(file).append(' size: ').
              append(str).append(' ; ');
        }
      }
    }
  }
  Header(options.info_log, 'Write Ahead Log file in %s: %s\n',
         options.wal_dir.c_str(), wal_info.c_str());
}
}  // namespace rocksdb

    
    class ChrootEnv : public EnvWrapper {
 public:
  ChrootEnv(Env* base_env, const std::string& chroot_dir)
      : EnvWrapper(base_env) {
#if defined(OS_AIX)
    char resolvedName[PATH_MAX];
    char* real_chroot_dir = realpath(chroot_dir.c_str(), resolvedName);
#else
    char* real_chroot_dir = realpath(chroot_dir.c_str(), nullptr);
#endif
    // chroot_dir must exist so realpath() returns non-nullptr.
    assert(real_chroot_dir != nullptr);
    chroot_dir_ = real_chroot_dir;
#if !defined(OS_AIX)
    free(real_chroot_dir);
#endif
  }
    }
    
    Status PosixMmapFile::Close() {
  Status s;
  size_t unused = limit_ - dst_;
    }
    
        static BOOST_FORCEINLINE storage_type exchange(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
#if defined(__clang__)
        // Clang cannot allocate eax:edx register pairs but it has sync intrinsics
        storage_type old_val = storage;
        while (true)
        {
            storage_type val = __sync_val_compare_and_swap(&storage, old_val, v);
            if (val == old_val)
                return val;
            old_val = val;
        }
#elif !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
#if defined(__PIC__)
        uint32_t scratch;
        __asm__ __volatile__
        (
            'movl %%ebx, %[scratch]\n\t'
            'movl %%eax, %%ebx\n\t'
            'movl %%edx, %%ecx\n\t'
            'movl %[dest], %%eax\n\t'
            'movl 4+%[dest], %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b %[dest]\n\t'
            'jne 1b\n\t'
            'movl %[scratch], %%ebx\n\t'
            : '+A' (v), [scratch] '=m' (scratch), [dest] '+o' (storage)
            :
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'ecx', 'memory'
        );
        return v;
#else // defined(__PIC__)
        __asm__ __volatile__
        (
            'movl %[dest], %%eax\n\t'
            'movl 4+%[dest], %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b %[dest]\n\t'
            'jne 1b\n\t'
            : '=A' (v), [dest] '+o' (storage)
            : 'b' ((uint32_t)v), 'c' ((uint32_t)(v >> 32))
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
        return v;
#endif // defined(__PIC__)
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
#if defined(__PIC__)
        uint32_t scratch;
        __asm__ __volatile__
        (
            'movl %%ebx, %[scratch]\n\t'
            'movl %%eax, %%ebx\n\t'
            'movl %%edx, %%ecx\n\t'
            'movl 0(%[dest]), %%eax\n\t'
            'movl 4(%[dest]), %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b 0(%[dest])\n\t'
            'jne 1b\n\t'
            'movl %[scratch], %%ebx\n\t'
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
            : '+A,A' (v), [scratch] '=m,m' (scratch)
            : [dest] 'D,S' (&storage)
#else
            : '+A' (v), [scratch] '=m' (scratch)
            : [dest] 'D' (&storage)
#endif
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'ecx', 'memory'
        );
        return v;
#else // defined(__PIC__)
        __asm__ __volatile__
        (
            'movl 0(%[dest]), %%eax\n\t'
            'movl 4(%[dest]), %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b 0(%[dest])\n\t'
            'jne 1b\n\t'
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
            : '=A,A' (v)
            : 'b,b' ((uint32_t)v), 'c,c' ((uint32_t)(v >> 32)), [dest] 'D,S' (&storage)
#else
            : '=A' (v)
            : 'b' ((uint32_t)v), 'c' ((uint32_t)(v >> 32)), [dest] 'D' (&storage)
#endif
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
        return v;
#endif // defined(__PIC__)
#endif
    }
    
    template< bool Signed >
struct operations< 4u, Signed > :
    public msvc_arm_operations< typename make_storage_type< 4u, Signed >::type, operations< 4u, Signed > >
{
    typedef msvc_arm_operations< typename make_storage_type< 4u, Signed >::type, operations< 4u, Signed > > base_type;
    typedef typename base_type::storage_type storage_type;
    typedef typename make_storage_type< 4u, Signed >::aligned aligned_storage_type;
    }

        
            void operator() (const typename internal::VecTraits<T>::vec128 & v_src0,
                     const typename internal::VecTraits<T>::vec128 & v_src1,
                     typename internal::VecTraits<T>::vec128 & v_dst) const
    {
        typename internal::VecTraits<T>::vec128 v_min = internal::vminq(v_src0, v_src1);
        typename internal::VecTraits<T>::vec128 v_max = internal::vmaxq(v_src0, v_src1);
        v_dst = internal::vqsubq(v_max, v_min);
    }
    
                uint8x16x2_t v_y = vld2q_u8(srcy + syj);
            uint8x16x4_t v_dst;
            v_dst.val[0] = v_y.val[0];
            v_dst.val[1] = vld1q_u8(srcu + sj);
            v_dst.val[2] = v_y.val[1];
            v_dst.val[3] = vld1q_u8(srcv + sj);
            vst4q_u8(dst + dj, v_dst);
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0, const typename internal::VecTraits<T>::vec64 & v_src1,
              typename internal::VecTraits<T>::unsign::vec64 & v_dst) const
    {
        v_dst = internal::vcgt(v_src0, v_src1);
    }
    
    typedef void (* rshiftConstFunc)(const Size2D &size,
                                const s16 * srcBase, ptrdiff_t srcStride,
                                u8 * dstBase, ptrdiff_t dstStride,
                                CONVERT_POLICY cpolicy);
    
                    if (border == BORDER_MODE_CONSTANT && x4 < 0)
                    prevx[0] = prevx[1] = prevx[2] = borderValue;
                else
                {
                    prevx[0] = srow0 ? srow0[x4] : borderValue;
                    prevx[1] =         srow1[x4]              ;
                    prevx[2] = srow2 ? srow2[x4] : borderValue;
                }
    
    #include <vector>
#include <cstring>
    
    #ifdef CAROTENE_NEON
    
                v_dst.val[0] = vcombine(vget_high(v_src.val[0]), vget_low(v_src.val[0]));
            v_dst.val[1] = vcombine(vget_high(v_src.val[1]), vget_low(v_src.val[1]));
            v_dst.val[2] = vcombine(vget_high(v_src.val[2]), vget_low(v_src.val[2]));
    
        for(size_t j = 0; j < size.height; ++j)
    {
        const T *  src = internal::getRowPtr( srcBase,  srcStride, j);
        const T * rng1 = internal::getRowPtr(rng1Base, rng1Stride, j);
        const T * rng2 = internal::getRowPtr(rng2Base, rng2Stride, j);
             u8 *  dst = internal::getRowPtr( dstBase,  dstStride, j);
        size_t i = 0;
        for( ; i < width; i += 32/sizeof(T) )
        {
            internal::prefetch(src + i);
            internal::prefetch(rng1 + i);
            internal::prefetch(rng2 + i);
    }
    }
    
    //////////////////////////////////////////////////////////////////////
    
    
    {  if (base64) {
    decoded = string_base64_decode(data, data_len, true);
    if (decoded.isNull()) {
      raise_warning('unable to decode base64 data');
      return nullptr;
    }
  } else {
    decoded = url_decode(data, data_len);
  }
  return req::make<MemFile>(decoded.data(), decoded.size());
}
    
    struct ExecutionProfiler {
  ExecutionProfiler(ThreadInfo *info, bool builtin) : m_info(info) {
    m_executing = m_info->m_executing;
    m_info->m_executing =
      builtin ? ThreadInfo::ExtensionFunctions : ThreadInfo::UserFunctions;
  }
  explicit ExecutionProfiler(ThreadInfo::Executing executing) {
    m_info = ThreadInfo::s_threadInfo.getNoCheck();
    m_executing = m_info->m_executing;
    m_info->m_executing = executing;
  }
  ~ExecutionProfiler() {
    m_info->m_executing = m_executing;
  }
private:
  ThreadInfo *m_info;
  ThreadInfo::Executing m_executing;
};
    
    #endif // HPHP_FILE_STREAM_WRAPPER_H

    
      // Given a sequence number, return the sequence number of the
  // earliest snapshot that this sequence number is visible in.
  // The snapshots themselves are arranged in ascending order of
  // sequence numbers.
  // Employ a sequential search because the total number of
  // snapshots are typically small.
  inline SequenceNumber findEarliestVisibleSnapshot(
      SequenceNumber in, SequenceNumber* prev_snapshot);
    
    TEST_F(DBTestDynamicLevel, DynamicLevelMaxBytesBaseInc) {
  Options options = CurrentOptions();
  options.create_if_missing = true;
  options.write_buffer_size = 2048;
  options.max_write_buffer_number = 2;
  options.level0_file_num_compaction_trigger = 2;
  options.level0_slowdown_writes_trigger = 2;
  options.level0_stop_writes_trigger = 2;
  options.target_file_size_base = 2048;
  options.level_compaction_dynamic_level_bytes = true;
  options.max_bytes_for_level_base = 10240;
  options.max_bytes_for_level_multiplier = 4;
  options.soft_rate_limit = 1.1;
  options.max_background_compactions = 2;
  options.num_levels = 5;
  options.max_compaction_bytes = 100000000;
    }
    
    #pragma once
    
      env.now_micros_ += 1999900u;  // sleep debt 1000
    
    // EncryptedEnv implements an Env wrapper that adds encryption to files stored on disk.
class EncryptedEnv : public EnvWrapper {
 public:
  EncryptedEnv(Env* base_env, EncryptionProvider *provider)
      : EnvWrapper(base_env) {
    provider_ = provider;
  }
    }
    
      // Results of these can be affected by FakeSleepForMicroseconds()
  virtual Status GetCurrentTime(int64_t* unix_time) override;
  virtual uint64_t NowMicros() override;
  virtual uint64_t NowNanos() override;
    
    #include 'env/mock_env.h'
    
      DB* db = nullptr;
  DestroyDB(kDBPath, options);
  Status s = DB::Open(options, kDBPath, &db);
  assert(s.ok());
  assert(db);
    
      int ret = system('rm -rf /tmp/rocksmergetest');
  if (ret != 0) {
    fprintf(stderr, 'Error deleting /tmp/rocksmergetest, code: %d\n', ret);
    return ret;
  }
  rocksdb::Options options;
  options.create_if_missing = true;
  options.merge_operator.reset(new MyMerge);
  options.compaction_filter = &filter;
  status = rocksdb::DB::Open(options, '/tmp/rocksmergetest', &raw_db);
  assert(status.ok());
  std::unique_ptr<rocksdb::DB> db(raw_db);
    
      ////////////////////////////////////////////////////////
  //
  // 'Repeatable Read' (Snapshot Isolation) Example
  //   -- Using a single Snapshot
  //
  ////////////////////////////////////////////////////////
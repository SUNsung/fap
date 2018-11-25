
        
        
    {} // namespace
    
        inline void operator()(const u8* src, s16* dstx, s16* dsty, ptrdiff_t width)
    {
        uint8x8_t l = vtbl1_u8(vld1_u8(src - lookLeft), vfmask);
        ptrdiff_t i = 0;
        for (; i < width - 8 + lookRight; i += 8)
        {
            internal::prefetch(src + i);
            uint8x8_t l18u = vld1_u8(src + i + 1);
    }
    }
    
                uint8x16x3_t v_src = vld3q_u8(src + sj);
            vst1q_u8(dst + dj, v_src.val[coi]);
    
    IMPL_CMPOP(GE, u8)
IMPL_CMPOP(GE, s8)
IMPL_CMPOP(GE, u16)
IMPL_CMPOP(GE, s16)
IMPL_CMPOP(GE, u32)
IMPL_CMPOP(GE, s32)
IMPL_CMPOP(GE, f32)
    
    void assertSupportedConfiguration(bool parametersSupported)
{
    if (!isSupportedConfiguration()) {
        std::cerr << 'internal error: attempted to use an unavailable function' << std::endl;
        std::abort();
    }
    }
    
             int32x4_t vline1_s32 = vmovl_s16(vget_low_s16(vline1_s16));
         int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline1_s16));
         int32x4_t vline3_s32 = vmovl_s16(vget_low_s16(vline2_s16));
         int32x4_t vline4_s32 = vmovl_s16(vget_high_s16(vline2_s16));
    
                for (; i <= lim; i+= 16)
            {
                internal::prefetch(src + i);
                uint8x16_t vln = vld1q_u8(src + i);
                uint8x16_t vnz = vminq_u8(vln, vc1);
                vs = vaddq_u8(vs, vnz);
            }
    
      // Input statistics
  // TODO(noetzli): The stats are incomplete. They are lacking everything
  // consumed by MergeHelper.
  uint64_t num_input_records = 0;
  uint64_t num_input_deletion_records = 0;
  uint64_t num_input_corrupt_records = 0;
  uint64_t total_input_raw_key_bytes = 0;
  uint64_t total_input_raw_value_bytes = 0;
    
      // True if the iterator has already returned a record for the current key.
  bool has_outputted_key_ = false;
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
      // When an actor (column family) requests a stop token, all writes will be
  // stopped until the stop token is released (deleted)
  std::unique_ptr<WriteControllerToken> GetStopToken();
  // When an actor (column family) requests a delay token, total delay for all
  // writes to the DB will be controlled under the delayed write rate. Every
  // write needs to call GetDelay() with number of bytes writing to the DB,
  // which returns number of microseconds to sleep.
  std::unique_ptr<WriteControllerToken> GetDelayToken(
      uint64_t delayed_write_rate);
  // When an actor (column family) requests a moderate token, compaction
  // threads will be increased
  std::unique_ptr<WriteControllerToken> GetCompactionPressureToken();
    
    Status PosixWritableFile::Append(const Slice& data) {
  if (use_direct_io()) {
    assert(IsSectorAligned(data.size(), GetRequiredBufferAlignment()));
    assert(IsSectorAligned(data.data(), GetRequiredBufferAlignment()));
  }
  const char* src = data.data();
  size_t left = data.size();
  while (left != 0) {
    ssize_t done = write(fd_, src, left);
    if (done < 0) {
      if (errno == EINTR) {
        continue;
      }
      return IOError('While appending to file', filename_, errno);
    }
    left -= done;
    src += done;
  }
  filesize_ += data.size();
  return Status::OK();
}
    
      // open DB with two column families
  std::vector<ColumnFamilyDescriptor> column_families;
  // have to open default column family
  column_families.push_back(ColumnFamilyDescriptor(
      kDefaultColumnFamilyName, ColumnFamilyOptions()));
  // open the new one, too
  column_families.push_back(ColumnFamilyDescriptor(
      'new_cf', ColumnFamilyOptions()));
  std::vector<ColumnFamilyHandle*> handles;
  s = DB::Open(DBOptions(), kDBPath, column_families, &handles, &db);
  assert(s.ok());
    
      // Set a new snapshot in the transaction
  txn->SetSnapshot();
  read_options.snapshot = db->GetSnapshot();
    
    using namespace rocksdb;
    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
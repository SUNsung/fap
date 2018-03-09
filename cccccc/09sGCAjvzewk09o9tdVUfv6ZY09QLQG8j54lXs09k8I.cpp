#ifndef incl_HPHP_WORKLOAD_STATS_H_
#define incl_HPHP_WORKLOAD_STATS_H_
    
    // 7 bytes: 10<54 bits>
const uint64_t kInt54Mask           = (1ULL << 54) - 1;
const uint64_t kInt54PrefixMsbMask  = 0xc0;
const uint64_t kInt54PrefixMsb      = 0x80;
const uint64_t kInt54Prefix         = kInt54PrefixMsb << (6 * 8);
    
    namespace HPHP { namespace jit {
    }
    }
    
    int gettime(clockid_t clock, timespec* ts) {
  if (clock != CLOCK_THREAD_CPUTIME_ID) {
    return folly::chrono::clock_gettime(clock, ts);
  }
    }
    
    
    {
    {}}

    
      for (auto& block : blocks) {
    for (auto& inst : block.code) {
      if (inst.op == Vinstr::copyargs) return true;
    }
  }
    
    ALWAYS_INLINE
size_t PackedArray::capacityToSizeIndex(size_t cap) {
  if (cap <= PackedArray::SmallSize) {
    return PackedArray::SmallSizeIndex;
  }
  auto const sizeIndex = MemoryManager::size2Index(
    sizeof(ArrayData) + cap * sizeof(TypedValue)
  );
  assert(sizeIndex <= PackedArray::MaxSizeIndex);
  return sizeIndex;
}
    
    This pointer must be provided as 'void* state' parameter for XXH32_update().
XXH32_update() can be called as many times as necessary.
The user must provide a valid (allocated) input.
The function returns an error code, with 0 meaning OK, and any other value meaning there is an error.
Note that 'len' is type 'int', which means it is limited to 2^31-1.
If your data is larger, it is recommended to chunk your data into blocks
of size for example 2^30 (1GB) to avoid any 'int' overflow issue.
    
      virtual bool Merge(const Slice& key,
                     const Slice* existing_value,
                     const Slice& value,
                     std::string* new_value,
                     Logger* logger) const override;
    
      /// If list is empty, return false and leave *result unchanged.
  /// Else, remove the first/last elem, store it in *result, and return true
  bool PopLeft(const std::string& key, std::string* result);  // First
  bool PopRight(const std::string& key, std::string* result); // Last
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    newIngestExternalFileOptions
 * Signature: (ZZZZ)J
 */
jlong Java_org_rocksdb_IngestExternalFileOptions_newIngestExternalFileOptions__ZZZZ(
    JNIEnv* env, jclass jcls, jboolean jmove_files,
    jboolean jsnapshot_consistency, jboolean jallow_global_seqno,
    jboolean jallow_blocking_flush) {
  auto* options = new rocksdb::IngestExternalFileOptions();
  options->move_files = static_cast<bool>(jmove_files);
  options->snapshot_consistency = static_cast<bool>(jsnapshot_consistency);
  options->allow_global_seqno = static_cast<bool>(jallow_global_seqno);
  options->allow_blocking_flush = static_cast<bool>(jallow_blocking_flush);
  return reinterpret_cast<jlong>(options);
}
    
      bool StatisticsJni::HistEnabledForType(uint32_t type) const {
    if (type >= HISTOGRAM_ENUM_MAX) {
      return false;
    }
    
    if (m_ignore_histograms.count(type) > 0) {
        return false;
    }
    }
    
    
// A file abstraction for sequential writing.  The implementation
// must provide buffering since callers may append small fragments
// at a time to the file.
class LibradosWritableFile : public WritableFile {
  librados::IoCtx * _io_ctx;
  std::string _fid;
  std::string _hint;
  const EnvLibrados * const _env;
    }
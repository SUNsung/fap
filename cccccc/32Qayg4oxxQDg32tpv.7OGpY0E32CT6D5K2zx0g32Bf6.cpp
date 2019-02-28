
        
        std::unique_ptr<WriteControllerToken>
WriteController::GetCompactionPressureToken() {
  ++total_compaction_pressure_;
  return std::unique_ptr<WriteControllerToken>(
      new CompactionPressureToken(this));
}
    
    namespace rocksdb {
static std::string IOErrorMsg(const std::string& context,
                              const std::string& file_name) {
  if (file_name.empty()) {
    return context;
  }
  return context + ': ' + file_name;
}
    }
    
    
    {    std::vector<std::string> input_file_names;
    for (auto level : cf_meta.levels) {
      for (auto file : level.files) {
        if (file.being_compacted) {
          return nullptr;
        }
        input_file_names.push_back(file.name);
      }
    }
    return new CompactionTask(
        db, this, cf_name, input_file_names,
        options_.num_levels - 1, compact_options_, false);
  }
    
    #ifndef ROCKSDB_LITE
// The following set of functions provide a way to construct RocksDB Options
// from a string or a string-to-string map.  Here're the general rule of
// setting option values from strings by type.  Some RocksDB types are also
// supported in these APIs.  Please refer to the comment of the function itself
// to find more information about how to config those RocksDB types.
//
// * Strings:
//   Strings will be used as values directly without any truncating or
//   trimming.
//
// * Booleans:
//   - 'true' or '1' => true
//   - 'false' or '0' => false.
//   [Example]:
//   - {'optimize_filters_for_hits', '1'} in GetColumnFamilyOptionsFromMap, or
//   - 'optimize_filters_for_hits=true' in GetColumnFamilyOptionsFromString.
//
// * Integers:
//   Integers are converted directly from string, in addition to the following
//   units that we support:
//   - 'k' or 'K' => 2^10
//   - 'm' or 'M' => 2^20
//   - 'g' or 'G' => 2^30
//   - 't' or 'T' => 2^40  // only for unsigned int with sufficient bits.
//   [Example]:
//   - {'arena_block_size', '19G'} in GetColumnFamilyOptionsFromMap, or
//   - 'arena_block_size=19G' in GetColumnFamilyOptionsFromString.
//
// * Doubles / Floating Points:
//   Doubles / Floating Points are converted directly from string.  Note that
//   currently we do not support units.
//   [Example]:
//   - {'hard_rate_limit', '2.1'} in GetColumnFamilyOptionsFromMap, or
//   - 'hard_rate_limit=2.1' in GetColumnFamilyOptionsFromString.
// * Array / Vectors:
//   An array is specified by a list of values, where ':' is used as
//   the delimiter to separate each value.
//   [Example]:
//   - {'compression_per_level', 'kNoCompression:kSnappyCompression'}
//     in GetColumnFamilyOptionsFromMap, or
//   - 'compression_per_level=kNoCompression:kSnappyCompression' in
//     GetColumnFamilyOptionsFromMapString
// * Enums:
//   The valid values of each enum are identical to the names of its constants.
//   [Example]:
//   - CompressionType: valid values are 'kNoCompression',
//     'kSnappyCompression', 'kZlibCompression', 'kBZip2Compression', ...
//   - CompactionStyle: valid values are 'kCompactionStyleLevel',
//     'kCompactionStyleUniversal', 'kCompactionStyleFIFO', and
//     'kCompactionStyleNone'.
//
    
    
    {class DbUndumpTool {
 public:
  bool Run(const UndumpOptions& undump_options,
           rocksdb::Options options = rocksdb::Options());
};
}  // namespace rocksdb
#endif  // ROCKSDB_LITE

    
        // read-only access
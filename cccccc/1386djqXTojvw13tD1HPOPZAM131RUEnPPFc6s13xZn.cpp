
        
        
// Called on every log record (each one of which is a WriteBatch)
// found in a kLogFile.
static void WriteBatchPrinter(uint64_t pos, Slice record, WritableFile* dst) {
  std::string r = '--- offset ';
  AppendNumberTo(&r, pos);
  r += '; ';
  if (record.size() < 12) {
    r += 'log record length ';
    AppendNumberTo(&r, record.size());
    r += ' is too small\n';
    dst->Append(r);
    return;
  }
  WriteBatch batch;
  WriteBatchInternal::SetContents(&batch, record);
  r += 'sequence ';
  AppendNumberTo(&r, WriteBatchInternal::Sequence(&batch));
  r.push_back('\n');
  dst->Append(r);
  WriteBatchItemPrinter batch_item_printer;
  batch_item_printer.dst_ = dst;
  Status s = batch.Iterate(&batch_item_printer);
  if (!s.ok()) {
    dst->Append('  error: ' + s.ToString() + '\n');
  }
}
    
    namespace leveldb {
    }
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
      // crc32c values for all supported record types.  These are
  // pre-computed to reduce the overhead of computing the crc of the
  // record type stored in the header.
  uint32_t type_crc_[kMaxRecordType + 1];
    
    
    {
    {  void ArchiveFile(const std::string& fname) {
    // Move into another directory.  E.g., for
    //    dir/foo
    // rename to
    //    dir/lost/foo
    const char* slash = strrchr(fname.c_str(), '/');
    std::string new_dir;
    if (slash != nullptr) {
      new_dir.assign(fname.data(), slash - fname.data());
    }
    new_dir.append('/lost');
    env_->CreateDir(new_dir);  // Ignore error
    std::string new_file = new_dir;
    new_file.append('/');
    new_file.append((slash == nullptr) ? fname.c_str() : slash + 1);
    Status s = env_->RenameFile(fname, new_file);
    Log(options_.info_log, 'Archiving %s: %s\n',
        fname.c_str(), s.ToString().c_str());
  }
};
}  // namespace
    
      int level_;
  uint64_t max_output_file_size_;
  Version* input_version_;
  VersionEdit edit_;
    
    namespace leveldb {
    }
    
    
    {
    {}}
    
    void Assembler::bl(int32_t offset) {
  EmitIForm(18, uint32_t(offset), 0, 1);
}
    
    void fillMap(BaseMap* map, const APCArray* ar) {
  for (auto i = uint32_t{0}; i < ar->size(); ++i) {
    map->set(*ar->getKey(i).asTypedValue(),
             *ar->getValue(i)->toLocal().asTypedValue());
  }
}
    
    #include <folly/ScopeGuard.h>
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/mem-file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include <folly/String.h>
#include <folly/portability/SysStat.h>
#include <folly/portability/Unistd.h>
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
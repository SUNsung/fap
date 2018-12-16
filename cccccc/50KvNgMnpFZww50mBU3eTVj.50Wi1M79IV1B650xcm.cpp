
        
        
    {  return TracingController::CreateFileEndpoint(
      result_file_path, base::Bind(callback, result_file_path));
}
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    display::Display Screen::GetDisplayMatching(const gfx::Rect& match_rect) {
  return screen_->GetDisplayMatching(match_rect);
}
    
    void SavePageHandler::Destroy(download::DownloadItem* item) {
  item->RemoveObserver(this);
  delete this;
}
    
      Status status;
  if (c == nullptr) {
    // Nothing to do
  } else if (!is_manual && c->IsTrivialMove()) {
    // Move file to next level
    assert(c->num_input_files(0) == 1);
    FileMetaData* f = c->input(0, 0);
    c->edit()->DeleteFile(c->level(), f->number);
    c->edit()->AddFile(c->level() + 1, f->number, f->file_size,
                       f->smallest, f->largest);
    status = versions_->LogAndApply(c->edit(), &mutex_);
    if (!status.ok()) {
      RecordBackgroundError(status);
    }
    VersionSet::LevelSummaryStorage tmp;
    Log(options_.info_log, 'Moved #%lld to level-%d %lld bytes %s: %s\n',
        static_cast<unsigned long long>(f->number),
        c->level() + 1,
        static_cast<unsigned long long>(f->file_size),
        status.ToString().c_str(),
        versions_->LevelSummary(&tmp));
  } else {
    CompactionState* compact = new CompactionState(c);
    status = DoCompactionWork(compact);
    if (!status.ok()) {
      RecordBackgroundError(status);
    }
    CleanupCompaction(compact);
    c->ReleaseInputs();
    DeleteObsoleteFiles();
  }
  delete c;
    
        CompactionStats() : micros(0), bytes_read(0), bytes_written(0) { }
    
    // Called on every item found in a WriteBatch.
class WriteBatchItemPrinter : public WriteBatch::Handler {
 public:
  WritableFile* dst_;
  virtual void Put(const Slice& key, const Slice& value) {
    std::string r = '  put '';
    AppendEscapedStringTo(&r, key);
    r += '' '';
    AppendEscapedStringTo(&r, value);
    r += ''\n';
    dst_->Append(r);
  }
  virtual void Delete(const Slice& key) {
    std::string r = '  del '';
    AppendEscapedStringTo(&r, key);
    r += ''\n';
    dst_->Append(r);
  }
};
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
      // Read the next record into *record.  Returns true if read
  // successfully, false if we hit end of the input.  May use
  // '*scratch' as temporary storage.  The contents filled in *record
  // will only be valid until the next mutating operation on this
  // reader or the next mutation to *scratch.
  bool ReadRecord(Slice* record, std::string* scratch);
    
    
    {    virtual Status Close() { return Status::OK(); }
    virtual Status Flush() { return Status::OK(); }
    virtual Status Sync() { return Status::OK(); }
    virtual Status Append(const Slice& slice) {
      contents_.append(slice.data(), slice.size());
      return Status::OK();
    }
  };
    
        // Open the log file
    std::string logname = LogFileName(dbname_, log);
    SequentialFile* lfile;
    Status status = env_->NewSequentialFile(logname, &lfile);
    if (!status.ok()) {
      return status;
    }
    
    namespace leveldb {
    }
    
    //////////////////////////////////////////////////////////////////////
    
    using LineNumber = uint32_t;
using ColNumber  = uint32_t;
using LineRange  = std::tuple<LineNumber,LineNumber>;
    
    //////////////////////////////////////////////////////////////////////
    
    #include <string>
#include <utility>
#include <vector>
    
    inline void ExecutionContext::setVirtualHost(const VirtualHost* vhost) {
  m_vhost = vhost;
}
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/mem-file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include <folly/String.h>
#include <folly/portability/SysStat.h>
#include <folly/portability/Unistd.h>
    
      bool valid() const { return !isClosed(); }
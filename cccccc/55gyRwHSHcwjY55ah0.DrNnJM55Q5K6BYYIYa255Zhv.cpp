
        
          void Delete(const SnapshotImpl* s) {
    assert(s->list_ == this);
    s->prev_->next_ = s->next_;
    s->next_->prev_ = s->prev_;
    delete s;
  }
    
    #ifndef STORAGE_LEVELDB_DB_TABLE_CACHE_H_
#define STORAGE_LEVELDB_DB_TABLE_CACHE_H_
    
    std::string VersionEdit::DebugString() const {
  std::string r;
  r.append('VersionEdit {');
  if (has_comparator_) {
    r.append('\n  Comparator: ');
    r.append(comparator_);
  }
  if (has_log_number_) {
    r.append('\n  LogNumber: ');
    AppendNumberTo(&r, log_number_);
  }
  if (has_prev_log_number_) {
    r.append('\n  PrevLogNumber: ');
    AppendNumberTo(&r, prev_log_number_);
  }
  if (has_next_file_number_) {
    r.append('\n  NextFile: ');
    AppendNumberTo(&r, next_file_number_);
  }
  if (has_last_sequence_) {
    r.append('\n  LastSeq: ');
    AppendNumberTo(&r, last_sequence_);
  }
  for (size_t i = 0; i < compact_pointers_.size(); i++) {
    r.append('\n  CompactPointer: ');
    AppendNumberTo(&r, compact_pointers_[i].first);
    r.append(' ');
    r.append(compact_pointers_[i].second.DebugString());
  }
  for (DeletedFileSet::const_iterator iter = deleted_files_.begin();
       iter != deleted_files_.end();
       ++iter) {
    r.append('\n  DeleteFile: ');
    AppendNumberTo(&r, iter->first);
    r.append(' ');
    AppendNumberTo(&r, iter->second);
  }
  for (size_t i = 0; i < new_files_.size(); i++) {
    const FileMetaData& f = new_files_[i].second;
    r.append('\n  AddFile: ');
    AppendNumberTo(&r, new_files_[i].first);
    r.append(' ');
    AppendNumberTo(&r, f.number);
    r.append(' ');
    AppendNumberTo(&r, f.file_size);
    r.append(' ');
    r.append(f.smallest.DebugString());
    r.append(' .. ');
    r.append(f.largest.DebugString());
  }
  r.append('\n}\n');
  return r;
}
    
    TEST(FindFileTest, Empty) {
  ASSERT_EQ(0, Find('foo'));
  ASSERT_TRUE(! Overlaps('a', 'z'));
  ASSERT_TRUE(! Overlaps(NULL, 'z'));
  ASSERT_TRUE(! Overlaps('a', NULL));
  ASSERT_TRUE(! Overlaps(NULL, NULL));
}
    
    namespace leveldb {
    }
    
    // Number of read operations to do.  If negative, do FLAGS_num reads.
static int FLAGS_reads = -1;
    
      virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
    
    namespace leveldb {
    }
    
      const Slice keys[] = {Slice('aaa'), Slice('bbb'), Slice('ccc')};
  const Slice vals[] = {Slice('foo'), Slice('bar'), Slice('baz')};
    
    #include 'table/format.h'
    
      /// Allow shutdown before exit.
  static void shutdown();
    
     private:
  /**
   * @brief Default constructor.
   *
   * Since instances of Dispatcher should only be created via instance(),
   * Dispatcher's constructor is private.
   */
  Dispatcher() = default;
  virtual ~Dispatcher() = default;
    
    /**
 * @brief Helper accessor/assignment alias class to support deprecated flags.
 *
 * This templated class wraps Flag::updateValue and Flag::getValue to 'alias'
 * a deprecated flag name as the updated name. The helper macro FLAG_ALIAS
 * will create a global variable instances of this wrapper using the same
 * Gflags naming scheme to prevent collisions and support existing callsites.
 */
template <typename T>
class FlagAlias {
 public:
  FlagAlias& operator=(T const& v) {
    Flag::updateValue(name_, boost::lexical_cast<std::string>(v));
    return *this;
  }
    }
    
      /// The size of the original groups to backup when restoring privileges.
  size_t group_size_{0};
    
      /// Calling startExtension should declare the registry external.
  /// This will cause extension-internal events to forward to osquery core.
  bool external_{false};
    
    #include <osquery/config.h>
#include <osquery/core.h>
#include <osquery/database.h>
#include <osquery/events.h>
#include <osquery/extensions.h>
#include <osquery/filesystem.h>
#include <osquery/flags.h>
#include <osquery/logger.h>
#include <osquery/registry.h>
#include <osquery/sql.h>
#include <osquery/status.h>
#include <osquery/tables.h>
    
      /**
   * @brief Check is a process is an osquery watcher.
   *
   * Is watcher is different from the opposite of isWorker. An osquery process
   * may have disabled the watchdog so the parent could be doing the work or
   * the worker child.
   */
  static bool isWatcher();
    
     protected:
  /// Calculate the URL once and cache the result.
  std::string uri_;
    
    std::string stringFromCFNumber(const CFDataRef& cf_number, CFNumberType type) {
  // Make sure the type is a number.
  if (CFGetTypeID(cf_number) != CFNumberGetTypeID()) {
    return '0';
  }
    }
    
    #include <string.h>
#include <time.h>
    
      // Compares the 8x8 block with offsets (off_x, off_y) within the current
  // macro-block of the baseline image with the same block of img and returns
  // the resulting per-block distance. The interpretation of the returned
  // distance depends on the comparator used.
  virtual double CompareBlock(const OutputImage& img,
                              int off_x, int off_y) const = 0;
    
    #include <stddef.h>
#include <stdint.h>
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    #include <cmath>
    
    struct HuffmanTableEntry {
  // Initialize the value to an invalid symbol so that we can recognize it
  // when reading the bit stream using a Huffman code with space > 0.
  HuffmanTableEntry() : bits(0), value(0xffff) {}
    }
    
    // Preprocesses U and V channel for better results after downsampling.
    
    namespace guetzli {
    }
    
        // Helper methods
    static bool HasFamilyNamed(std::string& name, DBWrapper* db);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array, DBWrapper* db_wrapper, std::string cf);
    static Handle<Value> CompactRangeDefault(const v8::Arguments& args);
    static Handle<Value> CompactColumnFamily(const Arguments& args);
    static Handle<Value> CompactOptions(const Arguments& args);
    static Handle<Value> CompactAll(const Arguments& args);
    
      // After a partial flush move the tail to the beginning of the buffer
  void RefitTail(size_t tail_offset, size_t tail_size) {
    if (tail_size > 0) {
      memmove(bufstart_, bufstart_ + tail_offset, tail_size);
    }
    cursize_ = tail_size;
  }
    
    #pragma once
    
            struct NoopTransformer {
            static size_t estimate(const char *data, size_t length) {
                return length;
            }
    }
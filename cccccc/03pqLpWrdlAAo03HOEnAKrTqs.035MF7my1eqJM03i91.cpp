
        
        /// Consume all source blobs that strongly overlap the given box,
/// putting them into a new word, with the correct_text label.
/// Fights over which box owns which blobs are settled by
/// applying the blobs to box or next_box with the least non-overlap.
/// @return false if the box was in error, which can only be caused by
/// failing to find an overlapping blob for a box.
bool Tesseract::ResegmentWordBox(BLOCK_LIST *block_list,
                                 const TBOX& box, const TBOX& next_box,
                                 const char* correct_text) {
  if (applybox_debug > 1) {
    tprintf('\nAPPLY_BOX: in ResegmentWordBox() for %s\n', correct_text);
  }
  WERD* new_word = NULL;
  BLOCK_IT b_it(block_list);
  for (b_it.mark_cycle_pt(); !b_it.cycled_list(); b_it.forward()) {
    BLOCK* block = b_it.data();
    if (!box.major_overlap(block->bounding_box()))
      continue;
    ROW_IT r_it(block->row_list());
    for (r_it.mark_cycle_pt(); !r_it.cycled_list(); r_it.forward()) {
      ROW* row = r_it.data();
      if (!box.major_overlap(row->bounding_box()))
        continue;
      WERD_IT w_it(row->word_list());
      for (w_it.mark_cycle_pt(); !w_it.cycled_list(); w_it.forward()) {
        WERD* word = w_it.data();
        if (applybox_debug > 2) {
          tprintf('Checking word:');
          word->bounding_box().print();
        }
        if (word->text() != NULL && word->text()[0] != '\0')
          continue;  // Ignore words that are already done.
        if (!box.major_overlap(word->bounding_box()))
          continue;
        C_BLOB_IT blob_it(word->cblob_list());
        for (blob_it.mark_cycle_pt(); !blob_it.cycled_list();
             blob_it.forward()) {
          C_BLOB* blob = blob_it.data();
          TBOX blob_box = blob->bounding_box();
          if (!blob_box.major_overlap(box))
            continue;
          double current_box_miss_metric = BoxMissMetric(blob_box, box);
          double next_box_miss_metric = BoxMissMetric(blob_box, next_box);
          if (applybox_debug > 2) {
            tprintf('Checking blob:');
            blob_box.print();
            tprintf('Current miss metric = %g, next = %g\n',
                    current_box_miss_metric, next_box_miss_metric);
          }
          if (current_box_miss_metric > next_box_miss_metric)
            continue;  // Blob is a better match for next box.
          if (applybox_debug > 2) {
            tprintf('Blob match: blob:');
            blob_box.print();
            tprintf('Matches box:');
            box.print();
            tprintf('With next box:');
            next_box.print();
          }
          if (new_word == NULL) {
            // Make a new word with a single blob.
            new_word = word->shallow_copy();
            new_word->set_text(correct_text);
            w_it.add_to_end(new_word);
          }
          C_BLOB_IT new_blob_it(new_word->cblob_list());
          new_blob_it.add_to_end(blob_it.extract());
        }
      }
    }
  }
  if (new_word == NULL && applybox_debug > 0) tprintf('FAIL!\n');
  return new_word != NULL;
}
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    
    {}  // namespace tesseract.

    
    
/**********************************************************************
 * operator-
 *
 * Subtract 2 FCOORDS.
 **********************************************************************/
    
      // Make list of keys from flattened key structure
  start_.push_back(keys_.size());  // Simplify length computation
  tmp_keys_.resize(num_keys);
  for (size_t i = 0; i < num_keys; i++) {
    const char* base = keys_.data() + start_[i];
    size_t length = start_[i+1] - start_[i];
    tmp_keys_[i] = Slice(base, length);
  }
    
    // A type that holds a pointer that can be read or written atomically
// (i.e., without word-tearing.)
class AtomicPointer {
 private:
  intptr_t rep_;
 public:
  // Initialize to arbitrary value
  AtomicPointer();
    }
    
    
    {  // Open test file some number above the sum of the two limits to force
  // open-on-read behavior of POSIX Env leveldb::RandomAccessFile.
  const int kNumFiles = kReadOnlyFileLimit + kMMapLimit + 5;
  leveldb::RandomAccessFile* files[kNumFiles] = {0};
  for (int i = 0; i < kNumFiles; i++) {
    ASSERT_OK(env_->NewRandomAccessFile(test_file, &files[i]));
  }
  char scratch;
  Slice read_result;
  for (int i = 0; i < kNumFiles; i++) {
    ASSERT_OK(files[i]->Read(i, 1, &read_result, &scratch));
    ASSERT_EQ(kFileData[i], read_result[0]);
  }
  for (int i = 0; i < kNumFiles; i++) {
    delete files[i];
  }
  ASSERT_OK(env_->DeleteFile(test_file));
}
    
    namespace leveldb {
    }
    
    void TableCache::Evict(uint64_t file_number) {
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  cache_->Erase(Slice(buf, sizeof(buf)));
}
    
    static bool GetLevel(Slice* input, int* level) {
  uint32_t v;
  if (GetVarint32(input, &v) &&
      v < config::kNumLevels) {
    *level = v;
    return true;
  } else {
    return false;
  }
}
    
    
    {        // Reset SQLite statement for another use
        status = sqlite3_clear_bindings(read_stmt);
        ErrorCheck(status);
        status = sqlite3_reset(read_stmt);
        ErrorCheck(status);
        FinishedSingleOp();
      }
    
      // count the keys
  leveldb::Iterator* iter = db->NewIterator(leveldb::ReadOptions());
  size_t num_keys = 0;
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    num_keys++;
  }
  delete iter;
  ASSERT_EQ(kNumKeys, num_keys) << 'Bad number of keys';
    
    void CondVar::SignalAll() {
  PthreadCall('broadcast', pthread_cond_broadcast(&cv_));
}
    
      // Check the crc of the type and the block contents
  const char* data = contents.data();    // Pointer to where Read put the data
  if (options.verify_checksums) {
    const uint32_t crc = crc32c::Unmask(DecodeFixed32(data + n + 1));
    const uint32_t actual = crc32c::Value(data, n + 1);
    if (actual != crc) {
      delete[] buf;
      s = Status::Corruption('block checksum mismatch');
      return s;
    }
  }
    
      // Takes ownership of 'iter' and will delete it when destroyed, or
  // when Set() is invoked again.
  void Set(Iterator* iter) {
    delete iter_;
    iter_ = iter;
    if (iter_ == NULL) {
      valid_ = false;
    } else {
      Update();
    }
  }
    
      r['sycall_addr_modified'] = syscall_addr_modified;
  r['text_segment_hash'] = text_segment_hash;
  results.push_back(r);
    
      /// Deregister an EventPublisher by publisher name.
  static Status deregisterEventPublisher(const std::string& type_id);
    
    
    {  Status getQueryColumns(const std::string& query,
                         TableColumns& columns) const override {
    return getQueryColumnsExternal(query, columns);
  }
};
    
      /**
   * @brief Bind this plugin to an external plugin reference.
   *
   * Allow a specialized plugin type to act when an external plugin is
   * registered (e.g., a TablePlugin will attach the table name).
   *
   * @param name The broadcasted name of the plugin.
   * @param info The routing info for the owning extension.
   */
  static Status addExternal(const std::string& name,
                            const PluginResponse& info) {
    (void)name;
    (void)info;
    return Status(0, 'Not used');
  }
    
    #pragma once
    
      /**
   * @brief Cleanly wait for all services and components to shutdown.
   *
   * Enter a join of all services followed by a sync wait for event loops.
   * If the main thread is out of actions it can call #waitForShutdown.
   */
  static void waitForShutdown();
    
        pt::ptree multi_pack;
    for (const auto& path : paths) {
      std::string content;
      if (!readFile(path, content)) {
        LOG(WARNING) << 'Cannot read multi-pack file: ' << path;
        continue;
      }
    }
    
    #include <vector>
#include <string>
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        while (-1 != __ParseStack(stream, state, strcache, strstack)) {
        if (!_processname.empty() && std::string::npos == strstack.find(processname, 0)) {
            strstack.clear();
            continue;
        }
    }
    
    #include <vector>
#include <string>
    
        if (((st.head_length + st.url_length + st.total_length) & 0xFF) != st.magic) return __LINE__;
    
    #include 'comm/comm_frequency_limit.h'
#include 'comm/xlogger/xlogger.h'
#include 'comm/time_utils.h'
    
        Spy* GetSpy(const void* _this) const
    { return m_thismap.find(_this)->second; }
    
    
    
    
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    XXH32_sizeofState() is used to know how much space must be allocated for the xxHash 32-bits state.
Note that the state must be aligned to access 'long long' fields. Memory must be allocated and referenced by a pointer.
This pointer must then be provided as 'state' into XXH32_resetState(), which initializes the state.
    
    namespace rocksdb {
    }
    
      std::vector<CompactionInputFiles> inputs(vstorage->num_levels());
  for (size_t i = 0; i < inputs.size(); ++i) {
    inputs[i].level = start_level + static_cast<int>(i);
  }
  // We always compact all the files, so always compress.
  for (size_t loop = start_index; loop < sorted_runs.size(); loop++) {
    auto& picking_sr = sorted_runs[loop];
    if (picking_sr.level == 0) {
      FileMetaData* f = picking_sr.file;
      inputs[0].files.push_back(f);
    } else {
      auto& files = inputs[picking_sr.level - start_level].files;
      for (auto* f : vstorage->LevelFiles(picking_sr.level)) {
        files.push_back(f);
      }
    }
    char file_num_buf[256];
    picking_sr.DumpSizeInfo(file_num_buf, sizeof(file_num_buf), loop);
    ROCKS_LOG_BUFFER(log_buffer, '[%s] Universal: size amp picking %s',
                     cf_name.c_str(), file_num_buf);
  }
    
      std::vector<std::string> cf_names = {
      'pikachu', 'ilya', 'muromec', 'dobrynia',
      'nikitich', 'alyosha', 'popovich'};
    
    
    {    int cmp = CompareBlockKey(block_ids[mid], target);
    if (!status_.ok()) {
      return false;
    }
    if (cmp < 0) {
      // Key at 'target' is larger than 'mid'. Therefore all
      // blocks before or at 'mid' are uninteresting.
      left = mid + 1;
    } else {
      // Key at 'target' is <= 'mid'. Therefore all blocks
      // after 'mid' are uninteresting.
      // If there is only one block left, we found it.
      if (left == right) break;
      right = mid;
    }
  }
    
      // copy/hard link live_files
  std::string manifest_fname, current_fname;
  for (size_t i = 0; s.ok() && i < live_files.size(); ++i) {
    uint64_t number;
    FileType type;
    bool ok = ParseFileName(live_files[i], &number, &type);
    if (!ok) {
      s = Status::Corruption('Can't parse file name. This is very bad');
      break;
    }
    // we should only get sst, options, manifest and current files here
    assert(type == kTableFile || type == kDescriptorFile ||
           type == kCurrentFile || type == kOptionsFile);
    assert(live_files[i].size() > 0 && live_files[i][0] == '/');
    if (type == kCurrentFile) {
      // We will craft the current file manually to ensure it's consistent with
      // the manifest number. This is necessary because current's file contents
      // can change during checkpoint creation.
      current_fname = live_files[i];
      continue;
    } else if (type == kDescriptorFile) {
      manifest_fname = live_files[i];
    }
    std::string src_fname = live_files[i];
    }
    
      // Offset of the last record returned by ReadRecord.
  uint64_t last_record_offset_;
  // Offset of the first location past the end of buffer_.
  uint64_t end_of_buffer_offset_;
    
      unique_ptr<WritableFile> writable_file;
  fname = test::TmpDir() + '/WithCollisionPathFullKey';
  ASSERT_OK(env_->NewWritableFile(fname, &writable_file, env_options_));
  unique_ptr<WritableFileWriter> file_writer(
      new WritableFileWriter(std::move(writable_file), EnvOptions()));
  CuckooTableBuilder builder(file_writer.get(), kHashTableRatio, num_hash_fun,
                             100, BytewiseComparator(), 1, false, false,
                             GetSliceHash, 0 /* column_family_id */,
                             kDefaultColumnFamilyName);
  ASSERT_OK(builder.status());
  for (uint32_t i = 0; i < user_keys.size(); i++) {
    builder.Add(Slice(keys[i]), Slice(values[i]));
    ASSERT_EQ(builder.NumEntries(), i + 1);
    ASSERT_OK(builder.status());
  }
  size_t bucket_size = keys[0].size() + values[0].size();
  ASSERT_EQ(expected_table_size * bucket_size - 1, builder.FileSize());
  ASSERT_OK(builder.Finish());
  ASSERT_OK(file_writer->Close());
  ASSERT_LE(expected_table_size * bucket_size, builder.FileSize());
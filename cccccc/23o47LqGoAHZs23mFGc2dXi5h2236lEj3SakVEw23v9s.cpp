
        
            TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    // Modules in this directory should keep internal keys wrapped inside
// the following class instead of plain strings so that we do not
// incorrectly use string comparisons instead of an InternalKeyComparator.
class InternalKey {
 private:
  std::string rep_;
 public:
  InternalKey() { }   // Leave rep_ as empty to indicate it is invalid
  InternalKey(const Slice& user_key, SequenceNumber s, ValueType t) {
    AppendInternalKey(&rep_, ParsedInternalKey(user_key, s, t));
  }
    }
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string LogFileName(const std::string& dbname, uint64_t number);
    
    #include 'db/table_cache.h'
    
    class VersionSet;
    
    int WriteBatchInternal::Count(const WriteBatch* b) {
  return DecodeFixed32(b->rep_.data() + 8);
}
    
    static std::string PrintContents(WriteBatch* b) {
  InternalKeyComparator cmp(BytewiseComparator());
  MemTable* mem = new MemTable(cmp);
  mem->Ref();
  std::string state;
  Status s = WriteBatchInternal::InsertInto(b, mem);
  int count = 0;
  Iterator* iter = mem->NewIterator();
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey ikey;
    ASSERT_TRUE(ParseInternalKey(iter->key(), &ikey));
    switch (ikey.type) {
      case kTypeValue:
        state.append('Put(');
        state.append(ikey.user_key.ToString());
        state.append(', ');
        state.append(iter->value().ToString());
        state.append(')');
        count++;
        break;
      case kTypeDeletion:
        state.append('Delete(');
        state.append(ikey.user_key.ToString());
        state.append(')');
        count++;
        break;
    }
    state.append('@');
    state.append(NumberToString(ikey.sequence));
  }
  delete iter;
  if (!s.ok()) {
    state.append('ParseError()');
  } else if (count != WriteBatchInternal::Count(b)) {
    state.append('CountMismatch()');
  }
  mem->Unref();
  return state;
}
    
    
    {    // Create tuning options and open the database
    int open_options = kyotocabinet::PolyDB::OWRITER |
                       kyotocabinet::PolyDB::OCREATE;
    int tune_options = kyotocabinet::TreeDB::TSMALL |
        kyotocabinet::TreeDB::TLINEAR;
    if (FLAGS_compression) {
      tune_options |= kyotocabinet::TreeDB::TCOMPRESS;
      db_->tune_compressor(&comp_);
    }
    db_->tune_options(tune_options);
    db_->tune_page_cache(FLAGS_cache_size);
    db_->tune_page(FLAGS_page_size);
    db_->tune_map(256LL<<20);
    if (sync) {
      open_options |= kyotocabinet::PolyDB::OAUTOSYNC;
    }
    if (!db_->open(file_name, open_options)) {
      fprintf(stderr, 'open error: %s\n', db_->error().name());
    }
  }
    
    #include <string>
#include 'leveldb/env.h'
#include 'leveldb/status.h'
    
    
    {	LRESULT lr = SendMessageTimeout(HWND_BROADCAST, WM_SETTINGCHANGE, 0, (LPARAM)'Environment', SMTO_ABORTIFHUNG | SMTO_NOTIMEOUTIFNOTHUNG, 5000, NULL);
	lr = SendMessageTimeout(HWND_BROADCAST, WM_SETTINGCHANGE, 0, (LPARAM)L'Environment', SMTO_ABORTIFHUNG | SMTO_NOTIMEOUTIFNOTHUNG, 5000, NULL); // For Windows >= 8
}
    
      // Random reads.
  ASSERT_OK(env_->NewRandomAccessFile('/dir/f', &rand_file));
  ASSERT_OK(rand_file->Read(6, 5, &result, scratch)); // Read 'world'.
  ASSERT_EQ(0, result.compare('world'));
  ASSERT_OK(rand_file->Read(0, 5, &result, scratch)); // Read 'hello'.
  ASSERT_EQ(0, result.compare('hello'));
  ASSERT_OK(rand_file->Read(10, 100, &result, scratch)); // Read 'd'.
  ASSERT_EQ(0, result.compare('d'));
    
      // create first key range
  leveldb::WriteBatch batch;
  for (size_t i = 0; i < kNumKeys; i++) {
    batch.Put(Key1(i), 'value for range 1 key');
  }
  ASSERT_OK(db->Write(leveldb::WriteOptions(), &batch));
    
    
    {      // Ok
      break;
    case kSnappyCompression: {
      size_t ulength = 0;
      if (!port::Snappy_GetUncompressedLength(data, n, &ulength)) {
        delete[] buf;
        return Status::Corruption('corrupted compressed block contents');
      }
      char* ubuf = new char[ulength];
      if (!port::Snappy_Uncompress(data, n, ubuf)) {
        delete[] buf;
        delete[] ubuf;
        return Status::Corruption('corrupted compressed block contents');
      }
      delete[] buf;
      result->data = Slice(ubuf, ulength);
      result->heap_allocated = true;
      result->cachable = true;
      break;
    }
    default:
      delete[] buf;
      return Status::Corruption('bad block type');
  }
    
        // All added keys must match
    for (int i = 0; i < length; i++) {
      ASSERT_TRUE(Matches(Key(i, buffer)))
          << 'Length ' << length << '; key ' << i;
    }
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    // The FALLTHROUGH_INTENDED macro can be used to annotate implicit fall-through
// between switch labels. The real definition should be provided externally.
// This one is a fallback version for unsupported compilers.
#ifndef FALLTHROUGH_INTENDED
#define FALLTHROUGH_INTENDED do { } while (0)
#endif
    
    TEST(HASH, SignedUnsignedIssue) {
  const unsigned char data1[1] = {0x62};
  const unsigned char data2[2] = {0xc3, 0x97};
  const unsigned char data3[3] = {0xe2, 0x99, 0xa5};
  const unsigned char data4[4] = {0xe1, 0x80, 0xb9, 0x32};
  const unsigned char data5[48] = {
    0x01, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x14,
    0x00, 0x00, 0x00, 0x18,
    0x28, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
  };
    }
    
     private:
  double min_;
  double max_;
  double num_;
  double sum_;
  double sum_squares_;
    
    #include <stddef.h>
#include <stdint.h>
#include 'leveldb/iterator.h'
    
    bool WakeUpLock::IsLocking() {
    return ::wakeupLock_IsLocking(object_);
}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
      protected:
    ServiceBase(const char* _servicename) : m_servicename(_servicename) {}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #ifndef _COMM_FUNCTION_H_
#define _COMM_FUNCTION_H_
    
      bool CountingFeatures = false;
  uint32_t InputSizesPerFeature[kFeatureSetSize];
  uint32_t SmallestElementPerFeature[kFeatureSetSize];
    
    void CopyFileToErr(const std::string &Path) {
  Printf('%s', FileToString(Path).c_str());
}
    
    
    {}  // namespace fuzzer
    
    
    {  DIR *D = opendir(Dir.c_str());
  if (!D) {
    Printf('No such directory: %s; exiting\n', Dir.c_str());
    exit(1);
  }
  while (auto E = readdir(D)) {
    std::string Path = DirPlusFile(Dir, E->d_name);
    if (E->d_type == DT_REG || E->d_type == DT_LNK)
      V->push_back(Path);
    else if (E->d_type == DT_DIR && *E->d_name != '.')
      ListFilesInDirRecursive(Path, Epoch, V, false);
  }
  closedir(D);
  if (Epoch && TopDir)
    *Epoch = E;
}
    
    struct Merger {
  std::vector<MergeFileInfo> Files;
  size_t NumFilesInFirstCorpus = 0;
  size_t FirstNotProcessedFile = 0;
  std::string LastFailure;
    }
    
    size_t MutationDispatcher::Mutate_Custom(uint8_t *Data, size_t Size,
                                         size_t MaxSize) {
  return EF->LLVMFuzzerCustomMutator(Data, Size, MaxSize, Rand.Rand());
}
    
    std::string Hash(const Unit &U);
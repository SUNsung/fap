
        
        #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
    void FilterBlockBuilder::AddKey(const Slice& key) {
  Slice k = key;
  start_.push_back(keys_.size());
  keys_.append(k.data(), k.size());
}
    
    
    {}  // namespace leveldb
    
    
    {}  // namespace leveldb
    
          case kPrevLogNumber:
        if (GetVarint64(&input, &prev_log_number_)) {
          has_prev_log_number_ = true;
        } else {
          msg = 'previous log number';
        }
        break;
    
    
TEST(FindFileTest, Multiple) {
  Add('150', '200');
  Add('200', '250');
  Add('300', '350');
  Add('400', '450');
  ASSERT_EQ(0, Find('100'));
  ASSERT_EQ(0, Find('150'));
  ASSERT_EQ(0, Find('151'));
  ASSERT_EQ(0, Find('199'));
  ASSERT_EQ(0, Find('200'));
  ASSERT_EQ(1, Find('201'));
  ASSERT_EQ(1, Find('249'));
  ASSERT_EQ(1, Find('250'));
  ASSERT_EQ(2, Find('251'));
  ASSERT_EQ(2, Find('299'));
  ASSERT_EQ(2, Find('300'));
  ASSERT_EQ(2, Find('349'));
  ASSERT_EQ(2, Find('350'));
  ASSERT_EQ(3, Find('351'));
  ASSERT_EQ(3, Find('400'));
  ASSERT_EQ(3, Find('450'));
  ASSERT_EQ(4, Find('451'));
    }
    
      // Store the specified number as the sequence number for the start of
  // this batch.
  static void SetSequence(WriteBatch* batch, SequenceNumber seq);
    
      // Check that opening non-existent file fails.
  SequentialFile* seq_file;
  RandomAccessFile* rand_file;
  ASSERT_TRUE(!env_->NewSequentialFile('/dir/non_existent', &seq_file).ok());
  ASSERT_TRUE(!seq_file);
  ASSERT_TRUE(!env_->NewRandomAccessFile('/dir/non_existent', &rand_file).ok());
  ASSERT_TRUE(!rand_file);
    
    Slice BlockBuilder::Finish() {
  // Append restart array
  for (size_t i = 0; i < restarts_.size(); i++) {
    PutFixed32(&buffer_, restarts_[i]);
  }
  PutFixed32(&buffer_, restarts_.size());
  finished_ = true;
  return Slice(buffer_);
}
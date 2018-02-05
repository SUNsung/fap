
        
        /*
 * Record translation for gdb debugging of the tc.
 */
void recordGdbTranslation(SrcKey sk, const Func* srcFunc, const CodeBlock& cb,
                          const TCA start, const TCA end, bool exit,
                          bool inPrologue);
    
    #ifndef incl_HPHP_SWEEPABLE_H_
#define incl_HPHP_SWEEPABLE_H_
    
    struct InvalidMethodException : ServerException {
  explicit InvalidMethodException(const char *msg)
    : ServerException('Invalid method: %s', msg) {
  }
};
    
    template <class K>
ArrayData* MixedArray::updateWithRef(K k, TypedValue data) {
  assert(!isFull());
  auto p = insert(k);
  if (p.found) {
    // TODO(#3888164): We should restructure things so we don't have to check
    // KindOfUninit here.
    setElemWithRef(p.tv, data);
    return this;
  }
  // TODO(#3888164): We should restructure things so we don't have to check
  // KindOfUninit here.
  tvDupWithRef(data, p.tv);
  if (p.tv.m_type == KindOfUninit) p.tv.m_type = KindOfNull;
  return this;
}
    
      // SnapshotImpl is kept in a doubly-linked circular list
  SnapshotImpl* prev_;
  SnapshotImpl* next_;
    
    class Env;
    
    
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
    
      Status Read(uint64_t offset, size_t n, Slice* result, char* scratch) const {
    if (offset > size_) {
      return Status::IOError('Offset greater than file size.');
    }
    const uint64_t available = size_ - offset;
    if (n > available) {
      n = static_cast<size_t>(available);
    }
    if (n == 0) {
      *result = Slice();
      return Status::OK();
    }
    }
    
      // count the keys
  leveldb::Iterator* iter = db->NewIterator(leveldb::ReadOptions());
  size_t num_keys = 0;
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    num_keys++;
  }
  delete iter;
  ASSERT_EQ(kNumKeys, num_keys) << 'Bad number of keys';
    
      WriteOptions write_options;
  ASSERT_OK(db->Put(write_options, '1', 'b'));
  ASSERT_OK(db->Put(write_options, '2', 'c'));
  ASSERT_OK(db->Put(write_options, '3', 'd'));
  ASSERT_OK(db->Put(write_options, '4', 'e'));
  ASSERT_OK(db->Put(write_options, '5', 'f'));
    
    void BlockBuilder::Add(const Slice& key, const Slice& value) {
  Slice last_key_piece(last_key_);
  assert(!finished_);
  assert(counter_ <= options_->block_restart_interval);
  assert(buffer_.empty() // No values yet?
         || options_->comparator->Compare(key, last_key_piece) > 0);
  size_t shared = 0;
  if (counter_ < options_->block_restart_interval) {
    // See how much sharing to do with previous string
    const size_t min_length = std::min(last_key_piece.size(), key.size());
    while ((shared < min_length) && (last_key_piece[shared] == key[shared])) {
      shared++;
    }
  } else {
    // Restart compression
    restarts_.push_back(buffer_.size());
    counter_ = 0;
  }
  const size_t non_shared = key.size() - shared;
    }
    
    Iterator* NewErrorIterator(const Status& status) {
  return new EmptyIterator(status);
}
    
    #define VERIFY_MARKER_END()                                             \
  if (start_pos + marker_len != *pos) {                                 \
    fprintf(stderr, 'Invalid marker length: declared=%d actual=%d\n',   \
            static_cast<int>(marker_len),                               \
            static_cast<int>(*pos - start_pos));                        \
    jpg->error = JPEG_WRONG_MARKER_SIZE;                                \
    return false;                                                       \
  }
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    
    {
    {
    {      // Add back the last sentinel node.
      tree[j_end + 1] = sentinel;
    }
    if (SetDepth(static_cast<int>(2 * n - 1), &tree[0], depth, tree_limit)) {
      /* We need to pack the Huffman tree in tree_limit bits. If this was not
         successful, add fake entities to the lowest values and retry. */
      break;
    }
  }
}
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    // Library to decode jpeg coefficients into an RGB image.
    
    
    {}  // namespace guetzli
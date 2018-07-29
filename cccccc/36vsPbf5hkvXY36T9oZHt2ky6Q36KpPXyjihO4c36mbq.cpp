
        
        // Tests that a unicharset that contains double-letter ligatures (eg ff) has
// no null char in the encoding at all.
TEST_F(UnicharcompressTest, DoesLigaturesWithDoubles) {
  LOG(INFO) << 'Testing por with ligatures';
  LoadUnicharset('por.unicharset');
  ExpectCorrect('por');
  // Check that any unichar-id that is encoded with multiple codes has the
  // correct encoded_nulll_char_ in between.
  for (int u = 0; u <= unicharset_.size(); ++u) {
    RecodedCharID code;
    int len = compressed_.EncodeUnichar(u, &code);
    if (len > 1) {
      // The should not be any null char in the code.
      for (int i = 0; i < len; ++i) {
        EXPECT_NE(encoded_null_char_, code(i));
      }
    }
  }
}
    
      // Runs backward propagation of errors on the deltas line.
  // See Network for a detailed discussion of the arguments.
  bool Backward(bool debug, const NetworkIO& fwd_deltas,
                NetworkScratch* scratch, NetworkIO* back_deltas) override;
  // Updates the weights using the given learning rate, momentum and adam_beta.
  // num_samples is used in the adam computation iff use_adam_ is true.
  void Update(float learning_rate, float momentum, float adam_beta,
              int num_samples) override;
  // Sums the products of weight updates in *this and other, splitting into
  // positive (same direction) in *same and negative (different direction) in
  // *changed.
  void CountAlternators(const Network& other, double* same,
                        double* changed) const override;
  // Prints the weights for debug purposes.
  void PrintW();
  // Prints the weight deltas for debug purposes.
  void PrintDW();
    
      // Return whether a given text line could be a first paragraph line according
  // to this paragraph model.
  bool ValidBodyLine(int lmargin, int lindent, int rindent, int rmargin) const;
    
    // Copies the given feature_space and uses it as the index feature map
// from INT_FEATURE_STRUCT.
void IntFeatureMap::Init(const IntFeatureSpace& feature_space) {
  feature_space_ = feature_space;
  mapping_changed_ = false;
  int sparse_size = feature_space_.Size();
  feature_map_.Init(sparse_size, true);
  feature_map_.Setup();
  compact_size_ = feature_map_.CompactSize();
  // Initialize look-up tables if needed.
  FCOORD dir = FeatureDirection(0);
  if (dir.x() == 0.0f && dir.y() == 0.0f)
    InitIntegerFX();
  // Compute look-up tables to generate offset features.
  for (int dir = 0; dir < kNumOffsetMaps; ++dir) {
    delete [] offset_plus_[dir];
    delete [] offset_minus_[dir];
    offset_plus_[dir] = new int[sparse_size];
    offset_minus_[dir] = new int[sparse_size];
  }
  for (int dir = 1; dir <= kNumOffsetMaps; ++dir) {
    for (int i = 0; i < sparse_size; ++i) {
      int offset_index = ComputeOffsetFeature(i, dir);
      offset_plus_[dir - 1][i] = offset_index;
      offset_index = ComputeOffsetFeature(i, -dir);
      offset_minus_[dir - 1][i] = offset_index;
    }
  }
}
    
    
    {  // Non-serialized data initialized by other means or used temporarily
  // during loading of training samples.
  // Number of different class labels in unicharset_.
  int charsetsize_;
  // Flag to indicate that we are running shape analysis and need fragments
  // fixing.
  bool enable_shape_anaylsis_;
  // Flag to indicate that sample replication is required.
  bool enable_replication_;
  // Array of classids of fragments that replace the correctly segmented chars.
  int* fragments_;
  // Classid of previous correctly segmented sample that was added.
  int prev_unichar_id_;
  // Debug output control.
  int debug_level_;
  // Feature map used to construct reduced feature spaces for compact
  // classifiers.
  IntFeatureMap feature_map_;
  // Vector of Pix pointers used for classifiers that need the image.
  // Indexed by page_num_ in the samples.
  // These images are owned by the trainer and need to be pixDestroyed.
  GenericVector<Pix*> page_images_;
  // Vector of filenames of loaded tr files.
  GenericVector<STRING> tr_filenames_;
};
    
      // Tests each blob in the list to see if it is certain non-text using 2
  // conditions:
  // 1. blob overlaps a cell with high value in noise_density_ (previously set
  // by ComputeNoiseDensity).
  // OR 2. The blob overlaps more than max_blob_overlaps in *this grid. This
  // condition is disabled with max_blob_overlaps == -1.
  // If it does, the blob is declared non-text, and is used to mark up the
  // nontext_mask. Such blobs are fully deleted, and non-noise blobs have their
  // neighbours reset, as they may now point to deleted data.
  // WARNING: The blobs list blobs may be in the *this grid, but they are
  // not removed. If any deleted blobs might be in *this, then this must be
  // Clear()ed immediately after MarkAndDeleteNonTextBlobs is called.
  // If the win is not nullptr, deleted blobs are drawn on it in red, and kept
  void MarkAndDeleteNonTextBlobs(BLOBNBOX_LIST* blobs,
                                 int max_blob_overlaps,
                                 ScrollView* win, ScrollView::Color ok_color,
                                 Pix* nontext_mask);
  // Returns true if the given blob overlaps more than max_overlaps blobs
  // in the current grid.
  bool BlobOverlapsTooMuch(BLOBNBOX* blob, int max_overlaps);
    
      // Helper functions for TransformToBlocks.
  // Add the part to the temp list in the correct order.
  void AddToTempPartList(ColPartition* part, ColPartition_CLIST* temp_list);
  // Add everything from the temp list to the work_set assuming correct order.
  void EmptyTempPartList(ColPartition_CLIST* temp_list,
                         WorkingPartSet_LIST* work_set);
    
      // Refreshes the words in the segmentation block list by using blobs in the
  // input blob list.
  // The segmentation block list must be set.
  void RefreshSegmentationWithNewBlobs(C_BLOB_LIST* new_blobs);
    
    /**********************************************************************
 * complete_edge
 *
 * Complete the edge by cleaning it up.
 **********************************************************************/
    
    
    {
    {  resetDatabase();
  EXPECT_FALSE(pathExists(path_ + '.backup'));
}
}

    
      // Regardless of the status of the kernel extension, if the device node does
  // not exist then the kernel publisher will silently shutdown.
  // This is not considered an error, and does not emit an error log.
  if (!isWritable(kKernelDevice)) {
    return Status(2, 'Cannot access ' + kKernelDevice);
  }
    
    
    {  // Too many fields
  bad_line = R'('2016-03-22T21:17:01.701882+00:00','','6','','','','')';
  ec = pub.createEventContext();
  status = pub.populateEventContext(bad_line, ec);
  ASSERT_FALSE(status.ok());
  ASSERT_NE(std::string::npos, status.getMessage().find('more'));
}
    
        Node* next() {
      return next_;
    }
    
      bool remove(const T& v) {
    auto prev = &head_;
    locate_lower_bound(v, prev);
    auto curr = prev->load(std::memory_order_relaxed);
    if (!curr || curr->elem_ != v) {
      return false;
    }
    Node* curr_next = curr->next_.load();
    // Patch up the actual list...
    prev->store(curr_next, std::memory_order_release);
    // ...and only then null out the removed node.
    curr->next_.store(nullptr, std::memory_order_release);
    curr->retire();
    return true;
  }
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (true) {
      if (nonBlockingTake(item)) {
        return std::move(item);
      }
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
  }
    
        static const void* volatile ptr = malloc(1);
    if (!ptr) {
      // wtf, failing to allocate 1 byte
      return false;
    }
    
      // Move from the registration phase to the 'you can actually instantiate
  // things now' phase.
  folly::SingletonVault::singleton()->registrationComplete();
    
    FOLLY_ALWAYS_INLINE int __builtin_ctzll(unsigned long long x) {
  unsigned long index;
  return int(_BitScanForward64(&index, x) ? index : 64);
}
    
    inline void hazptr_domain::tryBulkReclaim() {
  HAZPTR_DEBUG_PRINT(this);
  do {
    auto hcount = hcount_.load(std::memory_order_acquire);
    auto rcount = rcount_.load(std::memory_order_acquire);
    if (rcount < HAZPTR_SCAN_THRESHOLD || rcount < HAZPTR_SCAN_MULT * hcount) {
      return;
    }
    if (rcount_.compare_exchange_weak(
            rcount, 0, std::memory_order_release, std::memory_order_relaxed)) {
      break;
    }
  } while (true);
  bulkReclaim();
}
    
    
    {  EXPECT_EQ(1, estimates.quantiles[0].second);
  EXPECT_EQ(2.0 - 0.5, estimates.quantiles[1].second);
  EXPECT_EQ(50.375, estimates.quantiles[2].second);
  EXPECT_EQ(100.0 - 0.5, estimates.quantiles[3].second);
  EXPECT_EQ(100, estimates.quantiles[4].second);
}
    
      /**
   * String representation of the default value.
   * (note: string literal default values will be stringified with quotes)
   */
  folly::StringPiece defaultStr;
    
    #endif /* DUMPCRASHSTACK_H_ */

    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    ScopeJEnv::~ScopeJEnv() {
    if (NULL != env_) {
        env_->PopLocalFrame(NULL);
    }
}
    
    void AbstractOptionHandler::setEraseAfterParse(bool f)
{
  updateFlags(FLAG_ERASE_AFTER_PARSE, f);
}
    
      virtual void allocateChunk() CXX11_OVERRIDE;
    
    bool AnnounceList::currentTierAcceptsStoppedEvent() const
{
  if (currentTrackerInitialized_) {
    return FindStoppedAllowedTier()(*currentTier_);
  }
    }
    
    void AnnounceTier::nextEvent()
{
  switch (event) {
  case STARTED:
    event = DOWNLOADING;
    break;
  case STARTED_AFTER_COMPLETION:
    event = SEEDING;
    break;
  case STOPPED:
    event = HALTED;
    break;
  case COMPLETED:
    event = SEEDING;
    break;
  default:
    break;
  }
}
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
    
    {} // namespace aria2

        
        // Splits *this into two pieces in bundle1 and bundle2 (preallocated, empty
// bundles) where the right edge/ of the left-hand word is word1_right,
// and the left edge of the right-hand word is word2_left.
void BlamerBundle::SplitBundle(int word1_right, int word2_left, bool debug,
                               BlamerBundle* bundle1,
                               BlamerBundle* bundle2) const {
  STRING debug_str;
  // Find truth boxes that correspond to the split in the blobs.
  int b;
  int begin2_truth_index = -1;
  if (incorrect_result_reason_ != IRR_NO_TRUTH &&
      truth_has_char_boxes_) {
    debug_str = 'Looking for truth split at';
    debug_str.add_str_int(' end1_x ', word1_right);
    debug_str.add_str_int(' begin2_x ', word2_left);
    debug_str += '\nnorm_truth_word boxes:\n';
    if (norm_truth_word_.length() > 1) {
      norm_truth_word_.BlobBox(0).print_to_str(&debug_str);
      for (b = 1; b < norm_truth_word_.length(); ++b) {
        norm_truth_word_.BlobBox(b).print_to_str(&debug_str);
        if ((abs(word1_right - norm_truth_word_.BlobBox(b - 1).right()) <
            norm_box_tolerance_) &&
            (abs(word2_left - norm_truth_word_.BlobBox(b).left()) <
            norm_box_tolerance_)) {
          begin2_truth_index = b;
          debug_str += 'Split found';
          break;
        }
      }
      debug_str += '\n';
    }
  }
  // Populate truth information in word and word2 with the first and second
  // part of the original truth.
  if (begin2_truth_index > 0) {
    bundle1->truth_has_char_boxes_ = true;
    bundle1->norm_box_tolerance_ = norm_box_tolerance_;
    bundle2->truth_has_char_boxes_ = true;
    bundle2->norm_box_tolerance_ = norm_box_tolerance_;
    BlamerBundle *curr_bb = bundle1;
    for (b = 0; b < norm_truth_word_.length(); ++b) {
      if (b == begin2_truth_index) curr_bb = bundle2;
      curr_bb->norm_truth_word_.InsertBox(b, norm_truth_word_.BlobBox(b));
      curr_bb->truth_word_.InsertBox(b, truth_word_.BlobBox(b));
      curr_bb->truth_text_.push_back(truth_text_[b]);
    }
  } else if (incorrect_result_reason_ == IRR_NO_TRUTH) {
    bundle1->incorrect_result_reason_ = IRR_NO_TRUTH;
    bundle2->incorrect_result_reason_ = IRR_NO_TRUTH;
  } else {
    debug_str += 'Truth split not found';
    debug_str += truth_has_char_boxes_ ?
        '\n' : ' (no truth char boxes)\n';
    bundle1->SetBlame(IRR_NO_TRUTH_SPLIT, debug_str, nullptr, debug);
    bundle2->SetBlame(IRR_NO_TRUTH_SPLIT, debug_str, nullptr, debug);
  }
}
    
    namespace tesseract {
    }
    
    #ifndef TESSERACT_CSTRUCT_BOXWORD_H_
#define TESSERACT_CSTRUCT_BOXWORD_H_
    
      // Returns the covariance.
  double covariance() const {
    if (total_weight > 0.0)
      return (sigxy - sigx * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
  double x_variance() const {
    if (total_weight > 0.0)
      return (sigxx - sigx * sigx / total_weight) / total_weight;
    else
      return 0.0;
  }
  double y_variance() const {
    if (total_weight > 0.0)
      return (sigyy - sigy * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
    
     private:
  // Free allocated memory and clear pointers.
  void Clear();
  // Setup default values.
  void Init();
    
      REJMAP &operator=(const REJMAP &source);
    
    #ifndef TESSERACT_CCUTIL_GENERICHEAP_H_
#define TESSERACT_CCUTIL_GENERICHEAP_H_
    
    template <typename Key, class Comparator>
typename SkipList<Key, Comparator>::Node* SkipList<Key, Comparator>::NewNode(
    const Key& key, int height) {
  char* const node_memory = arena_->AllocateAligned(
      sizeof(Node) + sizeof(std::atomic<Node*>) * (height - 1));
  return new (node_memory) Node(key);
}
    
     private:
  bool ok() const { return status().ok(); }
  void WriteBlock(BlockBuilder* block, BlockHandle* handle);
  void WriteRawBlock(const Slice& data, CompressionType, BlockHandle* handle);
    
    class Histogram {
 public:
  Histogram() {}
  ~Histogram() {}
    }
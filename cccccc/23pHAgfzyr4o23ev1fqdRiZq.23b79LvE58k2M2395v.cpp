
        
        // Returns a new x-height maximally compatible with the result in word_res.
// See comment above for overall algorithm.
float Tesseract::ComputeCompatibleXheight(WERD_RES *word_res,
                                          float* baseline_shift) {
  STATS top_stats(0, UINT8_MAX);
  STATS shift_stats(-UINT8_MAX, UINT8_MAX);
  int bottom_shift = 0;
  int num_blobs = word_res->rebuild_word->NumBlobs();
  do {
    top_stats.clear();
    shift_stats.clear();
    for (int blob_id = 0; blob_id < num_blobs; ++blob_id) {
      TBLOB* blob = word_res->rebuild_word->blobs[blob_id];
      UNICHAR_ID class_id = word_res->best_choice->unichar_id(blob_id);
      if (unicharset.get_isalpha(class_id) ||
          unicharset.get_isdigit(class_id)) {
        int top = blob->bounding_box().top() + bottom_shift;
        // Clip the top to the limit of normalized feature space.
        if (top >= INT_FEAT_RANGE)
          top = INT_FEAT_RANGE - 1;
        int bottom = blob->bounding_box().bottom() + bottom_shift;
        int min_bottom, max_bottom, min_top, max_top;
        unicharset.get_top_bottom(class_id, &min_bottom, &max_bottom,
                                  &min_top, &max_top);
        // Chars with a wild top range would mess up the result so ignore them.
        if (max_top - min_top > kMaxCharTopRange)
          continue;
        int misfit_dist = std::max((min_top - x_ht_acceptance_tolerance) - top,
                            top - (max_top + x_ht_acceptance_tolerance));
        int height = top - kBlnBaselineOffset;
        if (debug_x_ht_level >= 2) {
          tprintf('Class %s: height=%d, bottom=%d,%d top=%d,%d, actual=%d,%d: ',
                  unicharset.id_to_unichar(class_id),
                  height, min_bottom, max_bottom, min_top, max_top,
                  bottom, top);
        }
        // Use only chars that fit in the expected bottom range, and where
        // the range of tops is sensibly near the xheight.
        if (min_bottom <= bottom + x_ht_acceptance_tolerance &&
            bottom - x_ht_acceptance_tolerance <= max_bottom &&
            min_top > kBlnBaselineOffset &&
            max_top - kBlnBaselineOffset >= kBlnXHeight &&
            misfit_dist > 0) {
          // Compute the x-height position using proportionality between the
          // actual height and expected height.
          int min_xht = DivRounded(height * kBlnXHeight,
                                   max_top - kBlnBaselineOffset);
          int max_xht = DivRounded(height * kBlnXHeight,
                                   min_top - kBlnBaselineOffset);
          if (debug_x_ht_level >= 2) {
            tprintf(' xht range min=%d, max=%d\n', min_xht, max_xht);
          }
          // The range of expected heights gets a vote equal to the distance
          // of the actual top from the expected top.
          for (int y = min_xht; y <= max_xht; ++y)
            top_stats.add(y, misfit_dist);
        } else if ((min_bottom > bottom + x_ht_acceptance_tolerance ||
                    bottom - x_ht_acceptance_tolerance > max_bottom) &&
                   bottom_shift == 0) {
          // Get the range of required bottom shift.
          int min_shift = min_bottom - bottom;
          int max_shift = max_bottom - bottom;
          if (debug_x_ht_level >= 2) {
            tprintf(' bottom shift min=%d, max=%d\n', min_shift, max_shift);
          }
          // The range of expected shifts gets a vote equal to the min distance
          // of the actual bottom from the expected bottom, spread over the
          // range of its acceptance.
          int misfit_weight = abs(min_shift);
          if (max_shift > min_shift)
            misfit_weight /= max_shift - min_shift;
          for (int y = min_shift; y <= max_shift; ++y)
            shift_stats.add(y, misfit_weight);
        } else {
          if (bottom_shift == 0) {
            // Things with bottoms that are already ok need to say so, on the
            // 1st iteration only.
            shift_stats.add(0, kBlnBaselineOffset);
          }
          if (debug_x_ht_level >= 2) {
            tprintf(' already OK\n');
          }
        }
      }
    }
    if (shift_stats.get_total() > top_stats.get_total()) {
      bottom_shift = IntCastRounded(shift_stats.median());
      if (debug_x_ht_level >= 2) {
        tprintf('Applying bottom shift=%d\n', bottom_shift);
      }
    }
  } while (bottom_shift != 0 &&
           top_stats.get_total() < shift_stats.get_total());
  // Baseline shift is opposite sign to the bottom shift.
  *baseline_shift = -bottom_shift / word_res->denorm.y_scale();
  if (debug_x_ht_level >= 2) {
    tprintf('baseline shift=%g\n', *baseline_shift);
  }
  if (top_stats.get_total() == 0)
    return bottom_shift != 0 ? word_res->x_height : 0.0f;
  // The new xheight is just the median vote, which is then scaled out
  // of BLN space back to pixel space to get the x-height in pixel space.
  float new_xht = top_stats.median();
  if (debug_x_ht_level >= 2) {
    tprintf('Median xht=%f\n', new_xht);
    tprintf('Mode20:A: New x-height = %f (norm), %f (orig)\n',
            new_xht, new_xht / word_res->denorm.y_scale());
  }
  // The xheight must change by at least x_ht_min_change to be used.
  if (fabs(new_xht - kBlnXHeight) >= x_ht_min_change)
    return new_xht / word_res->denorm.y_scale();
  else
    return bottom_shift != 0 ? word_res->x_height : 0.0f;
}
    
    bool ParagraphModel::Comparable(const ParagraphModel &other) const {
  if (justification_ != other.justification_)
    return false;
  if (justification_ == JUSTIFICATION_CENTER ||
      justification_ == JUSTIFICATION_UNKNOWN)
    return true;
  int tolerance = (tolerance_ + other.tolerance_) / 4;
  return NearlyEqual(margin_ + first_indent_,
                     other.margin_ + other.first_indent_, tolerance) &&
         NearlyEqual(margin_ + body_indent_,
                     other.margin_ + other.body_indent_, tolerance);
}
    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return nullptr for both.
  void Disconnect() {
    if (other_end_ != nullptr) {
      other_end_->other_end_ = nullptr;
      other_end_ = nullptr;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
    #endif  // STORAGE_LEVELDB_UTIL_HASH_H_

    
    
    {    // Linear search (within restart block) for first key >= target
    SeekToRestartPoint(left);
    while (true) {
      if (!ParseNextKey()) {
        return;
      }
      if (Compare(key_, target) >= 0) {
        return;
      }
    }
  }
    
    int main(int argc, char** argv) { return leveldb::test::RunAllTests(); }

    
    
    {  ASSERT_EQ(Hash(0, 0, 0xbc9f1d34), 0xbc9f1d34);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data1), sizeof(data1), 0xbc9f1d34),
      0xef1345c4);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data2), sizeof(data2), 0xbc9f1d34),
      0x5b663814);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data3), sizeof(data3), 0xbc9f1d34),
      0x323c078f);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data4), sizeof(data4), 0xbc9f1d34),
      0xed21633a);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data5), sizeof(data5), 0x12345678),
      0xf333dabb);
}
    
    
    {
    {  void FindShortSuccessor(std::string* key) const override {
    // Find first character that can be incremented
    size_t n = key->size();
    for (size_t i = 0; i < n; i++) {
      const uint8_t byte = (*key)[i];
      if (byte != static_cast<uint8_t>(0xff)) {
        (*key)[i] = byte + 1;
        key->resize(i + 1);
        return;
      }
    }
    // *key is a run of 0xffs.  Leave it alone.
  }
};
}  // namespace
    
    FileLock::~FileLock() = default;
    
      WritableFile* dest_;
  int block_offset_;  // Current offset in block
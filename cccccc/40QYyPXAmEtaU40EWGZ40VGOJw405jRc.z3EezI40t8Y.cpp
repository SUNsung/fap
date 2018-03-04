
        
        // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
extern Status BuildTable(const std::string& dbname,
                         Env* env,
                         const Options& options,
                         TableCache* table_cache,
                         Iterator* iter,
                         FileMetaData* meta);
    
    void leveldb_options_set_paranoid_checks(
    leveldb_options_t* opt, unsigned char v) {
  opt->rep.paranoid_checks = v;
}
    
    
// Owned filenames have the form:
//    dbname/CURRENT
//    dbname/LOCK
//    dbname/LOG
//    dbname/LOG.old
//    dbname/MANIFEST-[0-9]+
//    dbname/[0-9]+.(log|sst|ldb)
bool ParseFileName(const std::string& fname,
                   uint64_t* number,
                   FileType* type) {
  Slice rest(fname);
  if (rest == 'CURRENT') {
    *number = 0;
    *type = kCurrentFile;
  } else if (rest == 'LOCK') {
    *number = 0;
    *type = kDBLockFile;
  } else if (rest == 'LOG' || rest == 'LOG.old') {
    *number = 0;
    *type = kInfoLogFile;
  } else if (rest.starts_with('MANIFEST-')) {
    rest.remove_prefix(strlen('MANIFEST-'));
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    if (!rest.empty()) {
      return false;
    }
    *type = kDescriptorFile;
    *number = num;
  } else {
    // Avoid strtoull() to keep filename format independent of the
    // current locale
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    Slice suffix = rest;
    if (suffix == Slice('.log')) {
      *type = kLogFile;
    } else if (suffix == Slice('.sst') || suffix == Slice('.ldb')) {
      *type = kTableFile;
    } else if (suffix == Slice('.dbtmp')) {
      *type = kTempFile;
    } else {
      return false;
    }
    *number = num;
  }
  return true;
}
    
      fname = LogFileName('foo', 192);
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(192, number);
  ASSERT_EQ(kLogFile, type);
    
      Cache::Handle* handle = NULL;
  Status s = FindTable(file_number, file_size, &handle);
  if (!s.ok()) {
    return NewErrorIterator(s);
  }
    
      std::string comparator_;
  uint64_t log_number_;
  uint64_t prev_log_number_;
  uint64_t next_file_number_;
  SequenceNumber last_sequence_;
  bool has_comparator_;
  bool has_log_number_;
  bool has_prev_log_number_;
  bool has_next_file_number_;
  bool has_last_sequence_;
    
      void Write(bool sync, Order order, DBState state,
             int num_entries, int value_size, int entries_per_batch) {
    // Create new database if state == FRESH
    if (state == FRESH) {
      if (FLAGS_use_existing_db) {
        message_ = 'skipping (--use_existing_db is true)';
        return;
      }
      delete db_;
      db_ = NULL;
      Open(sync);
      Start();  // Do not count time taken to destroy/open
    }
    }
    
    // This function takes tif/box pair of files and runs recognition on the image,
// while making sure that the word bounds that tesseract identified roughly
// match to those specified by the input box file. For each word (ngram in a
// single bounding box from the input box file) it outputs the ocred result,
// the correct label, rating and certainty.
void Tesseract::recog_training_segmented(const STRING &fname,
                                         PAGE_RES *page_res,
                                         volatile ETEXT_DESC *monitor,
                                         FILE *output_file) {
  STRING box_fname = fname;
  const char *lastdot = strrchr(box_fname.string(), '.');
  if (lastdot != NULL) box_fname[lastdot - box_fname.string()] = '\0';
  box_fname += '.box';
  // ReadNextBox() will close box_file
  FILE *box_file = open_file(box_fname.string(), 'r');
    }
    
    #include 'mfoutline.h'
#include 'tessbox.h'
#include 'tesseractclass.h'
    
    // Returns true if there were enough points at the last call to Fit or
// ConstrainedFit for the fitted points to be used on a badly fitted line.
bool DetLineFit::SufficientPointsForIndependentFit() const {
  return distances_.size() >= kMinPointsForErrorCount;
}
    
      // Constrained fit with a supplied direction vector. Finds the best line_pt,
  // that is one of the supplied points having the median cross product with
  // direction, ignoring points that have a cross product outside of the range
  // [min_dist, max_dist]. Returns the resulting error metric using the same
  // reduced set of points.
  // *Makes use of floating point arithmetic*
  double ConstrainedFit(const FCOORD& direction,
                        double min_dist, double max_dist,
                        bool debug, ICOORD* line_pt);
    
    
    {  if (total_weight > 0) {
    error = sigyy + m * (m * sigxx + 2 * (c * sigx - sigxy)) + c *
            (total_weight * c - 2 * sigy);
    if (error >= 0)
      error = sqrt(error / total_weight);  // sqrt of mean
    else
      error = 0;
  } else {
    error = 0;                   // too little
  }
  return error;
}
    
      // Transforms the given coords one step forward to normalized space, without
  // using any block rotation or predecessor.
  void LocalNormTransform(const TPOINT& pt, TPOINT* transformed) const;
  void LocalNormTransform(const FCOORD& pt, FCOORD* transformed) const;
  // Transforms the given coords forward to normalized space using the
  // full transformation sequence defined by the block rotation, the
  // predecessors, deepest first, and finally this. If first_norm is not NULL,
  // then the first and deepest transformation used is first_norm, ending
  // with this, and the block rotation will not be applied.
  void NormTransform(const DENORM* first_norm, const TPOINT& pt,
                     TPOINT* transformed) const;
  void NormTransform(const DENORM* first_norm, const FCOORD& pt,
                     FCOORD* transformed) const;
  // Transforms the given coords one step back to source space, without
  // using to any block rotation or predecessor.
  void LocalDenormTransform(const TPOINT& pt, TPOINT* original) const;
  void LocalDenormTransform(const FCOORD& pt, FCOORD* original) const;
  // Transforms the given coords all the way back to source image space using
  // the full transformation sequence defined by this and its predecessors
  // recursively, shallowest first, and finally any block re_rotation.
  // If last_denorm is not NULL, then the last transformation used will
  // be last_denorm, and the block re_rotation will never be executed.
  void DenormTransform(const DENORM* last_denorm, const TPOINT& pt,
                       TPOINT* original) const;
  void DenormTransform(const DENORM* last_denorm, const FCOORD& pt,
                       FCOORD* original) const;
    
    
    { private:
  BOOL8 proportional;          //< proportional
  bool right_to_left_;         //< major script is right to left.
  inT8 kerning;                //< inter blob gap
  inT16 spacing;               //< inter word gap
  inT16 pitch;                 //< pitch of non-props
  inT16 font_class;            //< correct font class
  inT32 xheight;               //< height of chars
  float cell_over_xheight_;    //< Ratio of cell height to xheight.
  STRING filename;             //< name of block
  ROW_LIST rows;               //< rows in block
  PARA_LIST paras_;            //< paragraphs of block
  C_BLOB_LIST c_blobs;         //< before textord
  C_BLOB_LIST rej_blobs;       //< duff stuff
  FCOORD re_rotation_;         //< How to transform coords back to image.
  FCOORD classify_rotation_;   //< Apply this before classifying.
  FCOORD skew_;                //< Direction of true horizontal.
  ICOORD median_size_;         //< Median size of blobs.
};
    
    
    {
    {#undef EXT_FUNC
};
} // namespace fuzzer
    
    namespace fuzzer {
    }
    
    namespace fuzzer {
    }
    
    // Decides which files need to be merged (add thost to NewFiles).
// Returns the number of new features added.
size_t Merger::Merge(std::vector<std::string> *NewFiles) {
  NewFiles->clear();
  assert(NumFilesInFirstCorpus <= Files.size());
  std::set<uint32_t> AllFeatures;
    }
    
    // Overwrites part of To[0,ToSize) with a part of From[0,FromSize).
// Returns ToSize.
size_t MutationDispatcher::CopyPartOf(const uint8_t *From, size_t FromSize,
                                      uint8_t *To, size_t ToSize) {
  // Copy From[FromBeg, FromBeg + CopySize) into To[ToBeg, ToBeg + CopySize).
  size_t ToBeg = Rand(ToSize);
  size_t CopySize = Rand(ToSize - ToBeg) + 1;
  assert(ToBeg + CopySize <= ToSize);
  CopySize = std::min(CopySize, FromSize);
  size_t FromBeg = Rand(FromSize - CopySize + 1);
  assert(FromBeg + CopySize <= FromSize);
  memmove(To + ToBeg, From + FromBeg, CopySize);
  return ToSize;
}
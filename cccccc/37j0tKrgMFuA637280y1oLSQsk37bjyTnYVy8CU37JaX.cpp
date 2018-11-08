
        
        // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n);
// Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n);
    
     protected:
  // Function to compute part of a matrix.vector multiplication. The weights
  // are in a very specific order (see above) in w, which is multiplied by
  // u of length num_in, to produce output v after scaling the integer results
  // by the corresponding member of scales.
  // The amount of w and scales consumed is fixed and not available to the
  // caller. The number of outputs written to v will be at most num_out.
  typedef void (*PartialFunc)(const int8_t* w, const double* scales,
                              const int8_t* u, int num_in, int num_out,
                              double* v);
    
    #ifndef DOCQUAL_H
#define DOCQUAL_H
    
      // Search the nearest neighbor of part in one vertical direction as defined in
  // search_bottom. It returns the neighbor found that major x overlap with it,
  // or nullptr when not found.
  ColPartition* SearchNNVertical(const bool search_bottom,
                                 const ColPartition* part);
    
    /**
 * Returns an image of the current object at the given level in greyscale
 * if available in the input. To guarantee a binary image use BinaryImage.
 * NOTE that in order to give the best possible image, the bounds are
 * expanded slightly over the binary connected component, by the supplied
 * padding, so the top-left position of the returned image is returned
 * in (left,top). These will most likely not match the coordinates
 * returned by BoundingBox.
 * If you do not supply an original image, you will get a binary one.
 * Use pixDestroy to delete the image after use.
 */
Pix* PageIterator::GetImage(PageIteratorLevel level, int padding,
                            Pix* original_img,
                            int* left, int* top) const {
  int right, bottom;
  if (!BoundingBox(level, left, top, &right, &bottom))
    return nullptr;
  if (original_img == nullptr)
    return GetBinaryImage(level);
    }
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
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
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == nullptr) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (int16_t) x, (int16_t) (ysize - y - height),
                         (int16_t) (x + width), (int16_t) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
    REGISTER_CPU_OPERATOR(
    MergeSingleMapFeatureTensorsGradient,
    MergeSingleListOrMapFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleMapFeatureTensorsGradient)
    .SetDoc(
        'Explode given multi-feature tensors with map features into '
        'multiple single-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 2 == 1; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_presence', '.presence')
    .Input(2, 'out_values_values_grad', '.values.values_grad')
    .Output(0, 'in1_values_grad', '.values_grad');
REGISTER_GRADIENT(
    MergeSingleMapFeatureTensors,
    GetMergeSingleMapFeatureTensorsGradient);
    
    
    {  bool RunOnDevice() override {
    for (Blob* output : OperatorBase::Outputs()) {
      output->Reset();
    }
    return true;
  }
};
    
    Example 1:
  DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
  RANGES = [
    [
      [2, 4],
      [0, 2],
    ],
    [
      [0, 0],
      [6, 2],
    ]
  ]
  lengths = [4, 2]
  OUTPUT[0] = [[3, 4, 5, 6], [0, 0, 0, 0]]
  OUTPUT[1] = [[1, 2], [7, 8]]
    
    namespace {
float sigmoid(const float x) {
  if (x >= 0) {
    return 1. / (1. + exp(-x));
  } else {
    const float exp_x = exp(x);
    return exp_x / (1 + exp_x);
  }
}
} // namespace
    
    
    {          return out;
        });
OPERATOR_SCHEMA(Float16ConstantFill)
    .NumInputs(0)
    .NumOutputs(1)
    .TensorInferenceFunction(Float16FillerTensorInference)
    .Arg('value', 'The value for the elements of the output tensor.')
    .Arg('shape', 'The shape of the output tensor.')
    .Output(
        0,
        'output',
        'Output tensor of constant values specified by 'value'');
    
      virtual void PredictInstance(const SparsePage::Inst& inst,
                               std::vector<bst_float>* out_preds,
                               const gbm::GBTreeModel& model,
                               unsigned ntree_limit = 0,
                               unsigned root_index = 0) = 0;
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct TreeUpdaterReg
    : public dmlc::FunctionRegEntryBase<TreeUpdaterReg,
                                        std::function<TreeUpdater* ()> > {
};
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    void SparsePageWriter::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
    namespace xgboost {
namespace data {
/*!
 * \brief Format specification of SparsePage.
 */
class SparsePageFormat {
 public:
  /*! \brief virtual destructor */
  virtual ~SparsePageFormat() = default;
  /*!
   * \brief Load all the segments into page, advance fi to end of the block.
   * \param page The data to read page into.
   * \param fi the input stream of the file
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page, dmlc::SeekStream* fi) = 0;
  /*!
   * \brief read only the segments we are interested in, advance fi to end of the block.
   * \param page The page to load the data into.
   * \param fi the input stream of the file
   * \param sorted_index_set sorted index of segments we are interested in
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page,
                    dmlc::SeekStream* fi,
                    const std::vector<bst_uint>& sorted_index_set) = 0;
  /*!
   * \brief save the data to fo, when a page was written.
   * \param fo output stream
   */
  virtual void Write(const SparsePage& page, dmlc::Stream* fo) = 0;
  /*!
   * \brief Create sparse page of format.
   * \return The created format functors.
   */
  static SparsePageFormat* Create(const std::string& name);
  /*!
   * \brief decide the format from cache prefix.
   * \return pair of row format, column format type of the cache prefix.
   */
  static std::pair<std::string, std::string> DecideFormat(const std::string& cache_prefix);
};
    }
    }
    
    // logistic loss for binary classification task
struct LogisticClassification : public LogisticRegression {
  static const char* DefaultEvalMetric() { return 'error'; }
};
    
          CompressedIterator<int> ci(buffer.data(), alphabet_size);
      std::vector<int> output(input.size());
      for (int i = 0; i < input.size(); i++) {
        output[i] = ci[i];
      }
    
    SEXP XGBoosterGetAttr_R(SEXP handle, SEXP name) {
  SEXP out;
  R_API_BEGIN();
  int success;
  const char *val;
  CHECK_CALL(XGBoosterGetAttr(R_ExternalPtrAddr(handle),
                              CHAR(asChar(name)),
                              &val,
                              &success));
  if (success) {
    out = PROTECT(allocVector(STRSXP, 1));
    SET_STRING_ELT(out, 0, mkChar(val));
  } else {
    out = PROTECT(R_NilValue);
  }
  R_API_END();
  UNPROTECT(1);
  return out;
}
    
    struct SplitEvaluatorReg
    : public dmlc::FunctionRegEntryBase<SplitEvaluatorReg,
        std::function<SplitEvaluator* (std::unique_ptr<SplitEvaluator>)> > {};
    
      // truncated the value of the next key and output it without applying any
  // compaction rules.  This is used for outputting a put after a single delete.
  bool clear_and_output_next_key_ = false;
    
    class KeepFilterFactory : public CompactionFilterFactory {
 public:
  explicit KeepFilterFactory(bool check_context = false,
                             bool check_context_cf_id = false)
      : check_context_(check_context),
        check_context_cf_id_(check_context_cf_id),
        compaction_filter_created_(false) {}
    }
    
      // Open all files and look for the values we've put in there.
  // They should not be found if encrypted, otherwise
  // they should be found.
  std::vector<std::string> fileNames;
  auto status = env_->GetChildren(dbname_, &fileNames);
  ASSERT_OK(status);
    
    Status WriteBatchBase::DeleteRange(ColumnFamilyHandle* column_family,
                                   const SliceParts& begin_key,
                                   const SliceParts& end_key) {
  std::string begin_key_buf, end_key_buf;
  Slice begin_key_slice(begin_key, &begin_key_buf);
  Slice end_key_slice(end_key, &end_key_buf);
  return DeleteRange(column_family, begin_key_slice, end_key_slice);
}
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
    // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
    
    {  char* rid = id;
  rid = EncodeVarint64(rid, buf.st_dev);
  rid = EncodeVarint64(rid, buf.st_ino);
  rid = EncodeVarint64(rid, buf.st_gen);
  assert(rid >= id);
  return static_cast<size_t>(rid - id);
}
#endif
/*
 * PosixRandomAccessFile
 *
 * pread() based random-access
 */
PosixRandomAccessFile::PosixRandomAccessFile(const std::string& fname, int fd,
                                             const EnvOptions& options)
    : filename_(fname),
      fd_(fd),
      use_direct_io_(options.use_direct_reads),
      logical_sector_size_(GetLogicalBufferSize(fd_)) {
  assert(!options.use_direct_reads || !options.use_mmap_reads);
  assert(!options.use_mmap_reads || sizeof(void*) < 8);
}
    
    TEST_F(MockEnvTest, Corrupt) {
  const std::string kGood = 'this is a good string, synced to disk';
  const std::string kCorrupted = 'this part may be corrupted';
  const std::string kFileName = '/dir/f';
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(kFileName, &writable_file, soptions_));
  ASSERT_OK(writable_file->Append(kGood));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size());
    }
    
      // Put key-value
  s = db->Put(WriteOptions(), 'key1', 'value');
  assert(s.ok());
  std::string value;
  // get value
  s = db->Get(ReadOptions(), 'key1', &value);
  assert(s.ok());
  assert(value == 'value');
    
      virtual Status NewRandomAccessFile(const std::string& /*fname*/,
                                     unique_ptr<RandomAccessFile>* /*result*/,
                                     const EnvOptions& /*options*/) override {
    return notsup;
  }
    
      double CompareBlock(const OutputImage& img,
                      int off_x, int off_y) const override;
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    // Entropy encoding (Huffman) utilities.
    
      tmp0 = in[2 * stride];
  tmp1 = kIDCTMatrix[ 2] * tmp0;
  tmp2 = kIDCTMatrix[10] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] -= tmp2;
  out[3] -= tmp1;
  out[4] -= tmp1;
  out[5] -= tmp2;
  out[6] += tmp2;
  out[7] += tmp1;
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
    #include 'guetzli/jpeg_data.h'
    
    #define VERIFY_MARKER_END()                                             \
  if (start_pos + marker_len != *pos) {                                 \
    fprintf(stderr, 'Invalid marker length: declared=%d actual=%d\n',   \
            static_cast<int>(marker_len),                               \
            static_cast<int>(*pos - start_pos));                        \
    jpg->error = JPEG_WRONG_MARKER_SIZE;                                \
    return false;                                                       \
  }
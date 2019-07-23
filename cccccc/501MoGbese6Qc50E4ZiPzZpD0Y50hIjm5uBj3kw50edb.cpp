
        
          uint8_t* result = allocator.AllocateMemory(768, 1);
  TF_LITE_MICRO_EXPECT_NE(nullptr, result);
    
    TfLiteRegistration* Register_RFFT2D();
    
    bool TfLiteDriver::Expectation::TypedCheckString(bool verbose,
                                                 const TfLiteTensor& tensor) {
  if (tensor.data.raw == nullptr) {
    if (verbose) {
      std::cerr << '  got empty string' << std::endl;
    }
    return false;
  }
  int expected_num_strings = GetStringCount(data_.raw);
  int returned_num_strings = GetStringCount(tensor.data.raw);
  if (expected_num_strings != returned_num_strings) {
    if (verbose) {
      std::cerr << '  string count differ: got ' << returned_num_strings
                << ', but expected ' << expected_num_strings << std::endl;
    }
    return false;
  }
  for (int i = 0; i < returned_num_strings; ++i) {
    auto expected_ref = GetString(data_.raw, i);
    auto returned_ref = GetString(tensor.data.raw, i);
    if (expected_ref.len != returned_ref.len) {
      if (verbose) {
        std::cerr << '  index ' << i << ': got string of size '
                  << returned_ref.len << ', but expected size '
                  << expected_ref.len << std::endl;
      }
      return false;
    }
    if (strncmp(expected_ref.str, returned_ref.str, returned_ref.len) != 0) {
      if (verbose) {
        std::cerr << '  index ' << i << ': strings are different' << std::endl;
      }
      return false;
    }
  }
    }
    
    template <typename Scalar>
__global__ void MatrixBandPartKernel(const int num_threads,
                                     const int batch_size, const int m,
                                     const int n, const int num_lower_diags,
                                     const int num_upper_diags,
                                     const Scalar* input_ptr,
                                     Scalar* output_ptr) {
  GPU_1D_KERNEL_LOOP(index, num_threads) {
    const int col = index % n;
    const int row = (index / n) % m;
    const int band_start = (num_lower_diags < 0 ? 0 : row - num_lower_diags);
    const int band_end = (num_upper_diags < 0 ? n : row + num_upper_diags + 1);
    if (col < band_start || col >= band_end) {
      output_ptr[index] = Scalar(0);
    } else {
      output_ptr[index] = input_ptr[index];
    }
  }
}
    
    template struct EyeFunctor<GPUDevice, float>;
template struct EyeFunctor<GPUDevice, double>;
template struct EyeFunctor<GPUDevice, complex64>;
template struct EyeFunctor<GPUDevice, complex128>;
    
    TEST(TfliteInferenceStage, CustomDelegate) {
  // Create stage.
  EvaluationStageConfig config = GetTfliteInferenceStageConfig();
  TfliteInferenceStage stage(config);
    }
    
    
    {    error_stats_.emplace_back();
  }
    
    #undef DECLARE_GPU_SPECS
#undef DECLARE_GPU_SPECS_INDEX
    
    // Gets a DebugOptions proto that reflects the defaults as if no flags were set.
DebugOptions DefaultDebugOptionsIgnoringFlags();
    
          const T plusFactor = (normMin < T(0)) ? T(0) : T(normMin * normMin);
    
    
    {    void KeyChord::Vkey(int32_t value)
    {
        _vkey = value;
    }
}

    
      //   The text of a paragraph typically starts with the start of an idea and
  // ends with the end of an idea.  Here we define paragraph as something that
  // may have a first line indent and a body indent which may be different.
  // Typical words that start an idea are:
  //   1. Words in western scripts that start with
  //      a capital letter, for example 'The'
  //   2. Bulleted or numbered list items, for
  //      example '2.'
  // Typical words which end an idea are words ending in punctuation marks. In
  // this vocabulary, each list item is represented as a paragraph.
  bool lword_indicates_list_item;
  bool lword_likely_starts_idea;
  bool lword_likely_ends_idea;
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
    
#endif  // TESSERACT_CCSTRUCT_LINLSQ_H_

    
    class UnicharAmbigs {
 public:
  UnicharAmbigs() = default;
  ~UnicharAmbigs() {
    replace_ambigs_.delete_data_pointers();
    dang_ambigs_.delete_data_pointers();
    one_to_one_definite_ambigs_.delete_data_pointers();
  }
    }
    
      // Get the value of the top (smallest, defined by operator< ) element.
  const Pair& PeekTop() const {
    return heap_[0];
  }
  // Get the value of the worst (largest, defined by operator< ) element.
  const Pair& PeekWorst() const { return heap_[IndexOfWorst()]; }
    
      // Accumulates the errors from the classifier results on a single sample.
  // Returns true if debug is true and a CT_UNICHAR_TOPN_ERR error occurred.
  // boosting_mode selects the type of error to be used for boosting and the
  // is_error_ member of sample is set according to whether the required type
  // of error occurred. The font_table provides access to font properties
  // for error counting and shape_table is used to understand the relationship
  // between unichar_ids and shape_ids in the results
  bool AccumulateErrors(bool debug, CountTypes boosting_mode,
                        const FontInfoTable& font_table,
                        const GenericVector<UnicharRating>& results,
                        TrainingSample* sample);
    
    // Compute the distance between the given feature vector and the last
// Set feature vector.
double IntFeatureDist::FeatureDistance(
    const GenericVector<int>& features) const {
  const int num_test_features = features.size();
  const double denominator = total_feature_weight_ + num_test_features;
  double misses = denominator;
  for (int i = 0; i < num_test_features; ++i) {
    const int index = features[i];
    const double weight = 1.0;
    if (features_[index]) {
      // A perfect match.
      misses -= 2.0 * weight;
    } else if (features_delta_one_[index]) {
      misses -= 1.5 * weight;
    } else if (features_delta_two_[index]) {
      // A near miss.
      misses -= 1.0 * weight;
    }
  }
  return misses / denominator;
}
    
    DEFINE_ALIGN_TABLE(AlignImpl::s_table);
    
      ALWAYS_INLINE
  void xedInstrRR(xed_iclass_enum_t instr, const RegXMM& r1, const RegXMM& r2) {
    xedEmit(instr, toXedOperand(r1), toXedOperand(r2));
  }
    
      constexpr bool operator==(Reg64 o) const { return rn == o.rn; }
  constexpr bool operator!=(Reg64 o) const { return rn != o.rn; }
    
    int64_t MemFile::tell() {
  assertx(m_len != -1);
  return getPosition();
}
    
    
    {  return m_innerFile->open(filename, mode) &&
    (m_bzFile = BZ2_bzdopen(dup(m_innerFile->fd()), mode.data()));
}
    
    
    {  m_innerFile = File::Open(filename, mode);
  if (isa<MemFile>(m_innerFile)) {
    // We need an FD for the correct zlib APIs; MemFiles don't have an FD
    if (strchr(mode.c_str(), 'w')) {
      raise_warning('Cannot write to this stream type');
      return false;
    }
    auto file = req::make<TempFile>();
    while (!m_innerFile->eof()) {
      file->write(m_innerFile->read(file->getChunkSize()));
    }
    file->rewind();
    m_tempFile = file;
    return (m_gzFile = gzdopen(dup(file->fd()), mode.data()));
  }
  if(m_innerFile) {
    m_tempFile.reset();
    return (m_gzFile = gzdopen(dup(m_innerFile->fd()), mode.data()));
  }
  return false;
}
    
    
    {  EXPECT_FALSE(sval(s_test.get()).couldBe(sval(s_A.get())));
  EXPECT_TRUE(sval(s_test.get()).couldBe(sval(s_test.get())));
  EXPECT_FALSE(
    sval_nonstatic(s_test.get()).couldBe(sval_nonstatic(s_A.get()))
  );
  EXPECT_TRUE(
    sval_nonstatic(s_test.get()).couldBe(sval_nonstatic(s_test.get()))
  );
  EXPECT_TRUE(sval(s_test.get()).couldBe(sval_nonstatic(s_test.get())));
  EXPECT_TRUE(sval_nonstatic(s_test.get()).couldBe(sval(s_test.get())));
  EXPECT_FALSE(sval(s_test.get()).couldBe(sval_nonstatic(s_A.get())));
  EXPECT_FALSE(sval_nonstatic(s_test.get()).couldBe(sval(s_A.get())));
}
    
    bool Scanner::tryParseTypeList(TokenStore::iterator& pos) {
  for (int parsed = 0;; parsed++) {
    if (pos->t == '+' || pos->t == '-') {
      nextLookahead(pos);
    }
    auto cpPos = pos;
    if (!tryParseNSType(cpPos)) {
      if (parsed > 0) {
        pos = cpPos;
        return true;
      } else {
        return false;
      }
    }
    pos = cpPos;
    }
    }
    
    #include 'DHTNode.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'DlAbortEx.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'fmt.h'
#include 'util.h'
#include 'array_fun.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
    
    {  void serialize(const std::string& filename);
};
    
    #endif // D_DHT_TASK_FACTORY_IMPL_H

    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    class DHTTaskQueueImpl : public DHTTaskQueue {
private:
  DHTTaskExecutor periodicTaskQueue1_;
    }
    
    namespace aria2 {
    }
    
    #endif // D_DHT_TOKEN_UPDATE_COMMAND_H

    
    JSON getExamplePacksConfig() {
  std::string content;
  auto const filepath = getTestConfigDirectory() / 'test_inline_pack.conf';
  auto status = readFile(filepath, content);
  EXPECT_TRUE(status.ok())
      << 'Could not read file: ' << boost::io::quoted(filepath.string())
      << ', because: ' << status.what();
  JSON doc = JSON::newObject();
  doc.fromString(content);
  return doc;
}
    
    
    { private:
  std::unordered_map<std::string, StorageType> storage_;
  std::mutex mutex_;
};
    
      // This function should be used only as optimization
  // This write operation will not use neither sync or WAL, so date lose
  // may happen in case of failure, but opertaion itself is still atomic
  ExpectedSuccess<DatabaseError> putStringsUnsafe(
      const std::string& domain,
      const std::vector<std::pair<std::string, std::string>>& data) override;
    
    namespace {
    }
    
    GTEST_TEST(InMemoryDatabaseTest, test_keys_search) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  ASSERT_FALSE(db->open().isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_1', 1).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_2', 2).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_3', 3).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'kEy_1', 4).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'kEy_2', 5).isError());
  auto result_all = db->getKeys(kPersistentSettings);
  EXPECT_TRUE(result_all);
  EXPECT_EQ((*result_all).size(), 5);
  auto result_some = db->getKeys(kPersistentSettings, 'key');
  EXPECT_TRUE(result_some);
  EXPECT_EQ((*result_some).size(), 3);
}
    
    
    {  virtual void TearDown() {
    boost::filesystem::remove_all(path_);
  }
};
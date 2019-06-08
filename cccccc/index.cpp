
        
        template <typename Generator1, typename Generator2, typename Generator3,
    typename Generator4, typename Generator5, typename Generator6,
    typename Generator7>
internal::CartesianProductHolder7<Generator1, Generator2, Generator3,
    Generator4, Generator5, Generator6, Generator7> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3,
        const Generator4& g4, const Generator5& g5, const Generator6& g6,
        const Generator7& g7) {
  return internal::CartesianProductHolder7<Generator1, Generator2, Generator3,
      Generator4, Generator5, Generator6, Generator7>(
      g1, g2, g3, g4, g5, g6, g7);
}
    
    // This helper class can be used to mock out Google Test failure reporting
// so that we can test Google Test or code that builds on Google Test.
//
// An object of this class appends a TestPartResult object to the
// TestPartResultArray object given in the constructor whenever a Google Test
// failure is reported. It can either intercept only failures that are
// generated in the same thread that created this object or it can intercept
// all generated failures. The scope of this mock object can be controlled with
// the second argument to the two arguments constructor.
class GTEST_API_ ScopedFakeTestPartResultReporter
    : public TestPartResultReporterInterface {
 public:
  // The two possible mocking modes of this object.
  enum InterceptMode {
    INTERCEPT_ONLY_CURRENT_THREAD,  // Intercepts only thread local failures.
    INTERCEPT_ALL_THREADS           // Intercepts all failures.
  };
    }
    
      FilePath& operator=(const FilePath& rhs) {
    Set(rhs);
    return *this;
  }
    
      // Compares two C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike strcasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CaseInsensitiveCStringEquals(const char* lhs,
                                           const char* rhs);
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
    // Tests the default c'tor.
TEST(MyString, DefaultConstructor) {
  const MyString s;
    }
    
    
    {  E element_;
  QueueNode* next_;
};
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    // xgboost implementation
XGB_DLL int XGBoosterCreate(const DMatrixHandle dmats[],
                    xgboost::bst_ulong len,
                    BoosterHandle *out) {
  API_BEGIN();
  std::vector<std::shared_ptr<DMatrix> > mats;
  for (xgboost::bst_ulong i = 0; i < len; ++i) {
    mats.push_back(*static_cast<std::shared_ptr<DMatrix>*>(dmats[i]));
  }
  *out = new Booster(mats);
  API_END();
}
    
      bool Read(SparsePage* page,
            dmlc::SeekStream* fi,
            const std::vector<bst_uint>& sorted_index_set) override {
    if (!fi->Read(&disk_offset_)) return false;
    this->LoadIndexValue(fi);
    auto& offset_vec = page->offset.HostVector();
    auto& data_vec = page->data.HostVector();
    offset_vec.clear();
    offset_vec.push_back(0);
    for (bst_uint cid : sorted_index_set) {
      offset_vec.push_back(
          offset_vec.back() + disk_offset_[cid + 1] - disk_offset_[cid]);
    }
    data_vec.resize(offset_vec.back());
    CHECK_EQ(index_.data.size(), value_.data.size());
    CHECK_EQ(index_.data.size(), disk_offset_.back());
    }
    
      bool Read(SparsePage* page,
            dmlc::SeekStream* fi,
            const std::vector<bst_uint>& sorted_index_set) override {
    if (!fi->Read(&disk_offset_)) return false;
    auto& offset_vec = page->offset.HostVector();
    auto& data_vec = page->data.HostVector();
    // setup the offset
    offset_vec.clear();
    offset_vec.push_back(0);
    for (unsigned int fid : sorted_index_set) {
      CHECK_LT(fid + 1, disk_offset_.size());
      size_t size = disk_offset_[fid + 1] - disk_offset_[fid];
      offset_vec.push_back(offset_vec.back() + size);
    }
    data_vec.resize(offset_vec.back());
    // read in the data
    size_t begin = fi->Tell();
    size_t curr_offset = 0;
    for (size_t i = 0; i < sorted_index_set.size();) {
      bst_uint fid = sorted_index_set[i];
      if (disk_offset_[fid] != curr_offset) {
        CHECK_GT(disk_offset_[fid], curr_offset);
        fi->Seek(begin + disk_offset_[fid] * sizeof(Entry));
        curr_offset = disk_offset_[fid];
      }
      size_t j, size_to_read = 0;
      for (j = i; j < sorted_index_set.size(); ++j) {
        if (disk_offset_[sorted_index_set[j]] == disk_offset_[fid] + size_to_read) {
          size_to_read += offset_vec[j + 1] - offset_vec[j];
        } else {
          break;
        }
      }
    }
    }
    
    void SimpleCSRSource::BeforeFirst() {
  at_first_ = true;
}
    
        std::shared_ptr<xgboost::DMatrix> *dmat =
        static_cast<std::shared_ptr<xgboost::DMatrix> *>(handle);
    xgboost::MetaInfo &info = (*dmat)->Info();
    ASSERT_EQ(info.num_col_, num_cols);
    ASSERT_EQ(info.num_row_, row);
    ASSERT_EQ(info.num_nonzero_, num_cols * row - num_missing);
    
    struct TestBeginEnd {
  int* status_;
    }
    
    
    {  auto row_iter = dmat->GetRowBatches().begin();
  auto row_iter_read = dmat_read->GetRowBatches().begin();
  // Test the data read into the first row
  auto first_row = (*row_iter)[0];
  auto first_row_read = (*row_iter_read)[0];
  EXPECT_EQ(first_row.size(), first_row_read.size());
  EXPECT_EQ(first_row[2].index, first_row_read[2].index);
  EXPECT_EQ(first_row[2].fvalue, first_row_read[2].fvalue);
  delete dmat;
  delete dmat_read;
}

    
      /*!
   * \brief Normalize end-of-line in a file so that it uses LF for all
   *        line endings.
   *
   * This is needed because some OSes use CR or CR LF instead.  So we
   * replace all CR with LF.
   *
   * \param p_config_str pointer to configuration
   */
  std::string NormalizeConfigEOL(std::string const& config_str) {
    std::string result;
    std::stringstream ss(config_str);
    for (size_t i = 0; i < config_str.size(); ++i) {
      if (config_str[i] == '\r') {
        result.push_back('\n');
        continue;
      }
      result.push_back(config_str[i]);
    }
    return result;
  }
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
    #endif

    
    #ifndef HPHP_DATA_STREAM_WRAPPER_H
#define HPHP_DATA_STREAM_WRAPPER_H
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    void logAHMSubMapWarning(folly::StringPiece mapName) {
  StackTrace st;
  logPerfWarning(
    'AtomicHashMap overflow',
    [&](StructuredLogEntry& cols) {
      cols.setStr('map_name', mapName);
      cols.setStackTrace('stack', st);
    }
  );
}
    
    namespace HPHP {
    }

        
        /**********************************************************************
 * DIR128::DIR128
 *
 * Quantize the direction of an FCOORD to make a DIR128.
 **********************************************************************/
    
    
    { private:
  tesseract::ParagraphJustification justification_;
  int margin_;
  int first_indent_;
  int body_indent_;
  int tolerance_;
};
    
    const ERRCODE NO_PATH =
'Warning:explicit path for executable will not be used for configs';
static const ERRCODE USAGE = 'Usage';
    
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
    
      // See class comment for arguments.
  void Init(const IndexMapBiDi* charset_map,
            const ShapeTable* shape_table,
            bool randomize,
            TrainingSampleSet* sample_set);
    
      // Sets up column_sets_ (the determined column layout at each horizontal
  // slice). Returns false if the page is empty.
  bool MakeColumns(bool single_column);
  // Attempt to improve the column_candidates by expanding the columns
  // and adding new partitions from the partition sets in src_sets.
  // Src_sets may be equal to column_candidates, in which case it will
  // use them as a source to improve themselves.
  void ImproveColumnCandidates(PartSetVector* src_sets,
                               PartSetVector* column_sets);
  // Prints debug information on the column candidates.
  void PrintColumnCandidates(const char* title);
  // Finds the optimal set of columns that cover the entire image with as
  // few changes in column partition as possible.
  // Returns true if any part of the page is multi-column.
  bool AssignColumns(const PartSetVector& part_sets);
  // Finds the biggest range in part_sets_ that has no assigned column, but
  // column assignment is possible.
  bool BiggestUnassignedRange(int set_count, const bool* any_columns_possible,
                              int* start, int* end);
  // Finds the modal compatible column_set_ index within the given range.
  int RangeModalColumnSet(int** column_set_costs, const int* assigned_costs,
                          int start, int end);
  // Given that there are many column_set_id compatible columns in the range,
  // shrinks the range to the longest contiguous run of compatibility, allowing
  // gaps where no columns are possible, but not where competing columns are
  // possible.
  void ShrinkRangeToLongestRun(int** column_set_costs,
                               const int* assigned_costs,
                               const bool* any_columns_possible,
                               int column_set_id,
                               int* best_start, int* best_end);
  // Moves start in the direction of step, up to, but not including end while
  // the only incompatible regions are no more than kMaxIncompatibleColumnCount
  // in size, and the compatible regions beyond are bigger.
  void ExtendRangePastSmallGaps(int** column_set_costs,
                                const int* assigned_costs,
                                const bool* any_columns_possible,
                                int column_set_id,
                                int step, int end, int* start);
  // Assigns the given column_set_id to the part_sets_ in the given range.
  void AssignColumnToRange(int column_set_id, int start, int end,
                           int** column_set_costs, int* assigned_costs);
    
    
    {
    {
    {
    {        // In addition to the same type, the next box must not be above the
        // current box, nor (if image) too far below.
        PolyBlockType type = part->type(), next_type = next_block_part->type();
        if (ColPartition::TypesSimilar(type, next_type) &&
            !part->IsLineType() && !next_block_part->IsLineType() &&
            next_box.bottom() <= part_box.top() &&
            (text_block || part_box.bottom() <= next_box.top()))
          next_part = next_block_part;
      }
    } while (!part_it_.empty() && next_part != nullptr);
    if (!text_block) {
      TO_BLOCK* to_block = ColPartition::MakeBlock(bleft, tright,
                                                   &block_parts, used_parts);
      if (to_block != nullptr) {
        TO_BLOCK_IT to_block_it(&to_blocks_);
        to_block_it.add_to_end(to_block);
        BLOCK_IT block_it(&completed_blocks_);
        block_it.add_to_end(to_block->block);
      }
    } else {
      // Further sub-divide text blocks where linespacing changes.
      ColPartition::LineSpacingBlocks(bleft, tright, resolution, &block_parts,
                                      used_parts,
                                      &completed_blocks_, &to_blocks_);
    }
  }
  part_it_.set_to_list(&part_set_);
  latest_part_ = nullptr;
  ASSERT_HOST(completed_blocks_.length() == to_blocks_.length());
}
    
    #endif  // TESSERACT_TEXTORD_WORKINGPARSET_H_

    
    namespace boost {
namespace asio {
    }
    }
    
    #endif // BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP

    
    #include <boost/asio/detail/pop_options.hpp>
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #ifndef BOOST_ASIO_DETAIL_IMPL_DEV_POLL_REACTOR_HPP
#define BOOST_ASIO_DETAIL_IMPL_DEV_POLL_REACTOR_HPP
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    void SimpleCSRSource::CopyFrom(DMatrix* src) {
  this->Clear();
  this->info = src->Info();
  auto iter = src->RowIterator();
  iter->BeforeFirst();
  while (iter->Next()) {
    const auto &batch = iter->Value();
    page_.Push(batch);
  }
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterPredict
 * Signature: (JJIJ)[F
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterPredict
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jlong jdmat, jint joption_mask, jint jntree_limit, jobjectArray jout) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  DMatrixHandle dmat = (DMatrixHandle) jdmat;
  bst_ulong len;
  float *result;
  int ret = XGBoosterPredict(handle, dmat, joption_mask, (unsigned int) jntree_limit, &len, (const float **) &result);
  if (len) {
    jsize jlen = (jsize) len;
    jfloatArray jarray = jenv->NewFloatArray(jlen);
    jenv->SetFloatArrayRegion(jarray, 0, jlen, (jfloat *) result);
    jenv->SetObjectArrayElement(jout, 0, jarray);
  }
  return ret;
}
    
    SplitEvaluator* SplitEvaluator::Create(const std::string& name) {
  std::stringstream ss(name);
  std::string item;
  SplitEvaluator* eval = nullptr;
  // Construct a chain of SplitEvaluators. This allows one to specify multiple constraints.
  while (std::getline(ss, item, ',')) {
    auto* e = ::dmlc::Registry< ::xgboost::tree::SplitEvaluatorReg>
        ::Get()->Find(item);
    if (e == nullptr) {
      LOG(FATAL) << 'Unknown SplitEvaluator ' << name;
    }
    eval = (e->body)(std::unique_ptr<SplitEvaluator>(eval));
  }
  return eval;
}
    
    /*! \brief core statistics used for tree construction */
struct XGBOOST_ALIGNAS(16) GradStats {
  /*! \brief sum gradient statistics */
  double sum_grad;
  /*! \brief sum hessian statistics */
  double sum_hess;
  /*!
   * \brief whether this is simply statistics and we only need to call
   *   Add(gpair), instead of Add(gpair, info, ridx)
   */
  static const int kSimpleStats = 1;
  /*! \brief constructor, the object must be cleared during construction */
  explicit GradStats(const TrainParam& param) { this->Clear(); }
    }
    
      static Predictor* Create(std::string name);
    
    
    {  std::string defaultUser_;
  std::string defaultPassword_;
};
    
      std::shared_ptr<Peer> peer_;
    
      const char* description_;
    
    AbstractProxyRequestCommand::~AbstractProxyRequestCommand() = default;
    
    class AsyncNameResolverMan {
public:
  AsyncNameResolverMan();
  // Destructor does not call disableNameResolverCheck(). Application
  // must call it before the destruction of this object.
  ~AsyncNameResolverMan();
  // Enable IPv4 address lookup. default: true
  void setIPv4(bool ipv4) { ipv4_ = ipv4; }
  // Enable IPv6 address lookup. default: true
  void setIPv6(bool ipv6) { ipv6_ = ipv6; }
  // Returns true if asynchronous name resolution has been started.
  bool started() const;
  // Starts asynchronous name resolution.
  void startAsync(const std::string& hostname, DownloadEngine* e,
                  Command* command);
  // Appends resolved addresses to |res|.
  void getResolvedAddress(std::vector<std::string>& res) const;
  // Adds resolvers to DownloadEngine to check event notification.
  void setNameResolverCheck(DownloadEngine* e, Command* command);
  // Removes resolvers from DownloadEngine.
  void disableNameResolverCheck(DownloadEngine* e, Command* command);
  // Returns true if any of resolvers are added in DownloadEngine.
  bool resolverChecked() const { return resolverCheck_; }
  // Returns status value: 0 for inprogress, 1 for success and -1 for
  // failure.
  int getStatus() const;
  // Returns last error string
  const std::string& getLastError() const;
  // Resets state. Also removes resolvers from DownloadEngine.
  void reset(DownloadEngine* e, Command* command);
    }
    
    class AuthResolver {
public:
  virtual ~AuthResolver() = default;
    }
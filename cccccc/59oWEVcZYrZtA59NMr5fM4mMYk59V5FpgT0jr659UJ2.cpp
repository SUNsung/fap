
        
        #endif  // ATOM_BROWSER_NET_URL_REQUEST_ASYNC_ASAR_JOB_H_

    
    #endif  // ATOM_BROWSER_RELAUNCHER_H_

    
    void DragFileItems(const std::vector<base::FilePath>& files,
                   const gfx::Image& icon,
                   gfx::NativeView view);
    
    #include 'atom/browser/ui/views/frameless_view.h'
    
    
    { protected:
  virtual ~WindowListObserver() {}
};
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Locker);
};
    
    
    {  DISALLOW_COPY_AND_ASSIGN(RemoteCallbackFreer);
};
    
      virtual ~GlobalShortcutListener();
    
    #endif  // STORAGE_LEVELDB_DB_BUILDER_H_

    
    
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
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
extern std::string CurrentFileName(const std::string& dbname);
    
    void TableCache::Evict(uint64_t file_number) {
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  cache_->Erase(Slice(buf, sizeof(buf)));
}
    
    
    {}  // namespace leveldb
    
    
    {  ASSERT_TRUE(! Overlaps(NULL, 'j'));
  ASSERT_TRUE(! Overlaps('r', NULL));
  ASSERT_TRUE(Overlaps(NULL, 'p'));
  ASSERT_TRUE(Overlaps(NULL, 'p1'));
  ASSERT_TRUE(Overlaps('q', NULL));
  ASSERT_TRUE(Overlaps(NULL, NULL));
}
    
    // Return a builtin comparator that uses lexicographic byte-wise
// ordering.  The result remains the property of this module and
// must not be deleted.
extern const Comparator* BytewiseComparator();
    
    
    {}
    
    // Like ASSERT_EXIT, but continues on to successive tests in the
// test case, if any:
# define EXPECT_EXIT(statement, predicate, regex) \
    GTEST_DEATH_TEST_(statement, predicate, regex, GTEST_NONFATAL_FAILURE_)
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7>
internal::ValueArray7<T1, T2, T3, T4, T5, T6, T7> Values(T1 v1, T2 v2, T3 v3,
    T4 v4, T5 v5, T6 v6, T7 v7) {
  return internal::ValueArray7<T1, T2, T3, T4, T5, T6, T7>(v1, v2, v3, v4, v5,
      v6, v7);
}
    
    #define GTEST_ASSERT_(expression, on_failure) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (const ::testing::AssertionResult gtest_ar = (expression)) \
    ; \
  else \
    on_failure(gtest_ar.failure_message())
    
    template <GTEST_$(n)_TYPENAMES_(T), GTEST_$(n)_TYPENAMES_(U)>
inline bool operator==(const GTEST_$(n)_TUPLE_(T)& t,
                       const GTEST_$(n)_TUPLE_(U)& u) {
  return gtest_internal::SameSizeTuplePrefixComparator<
      tuple_size<GTEST_$(n)_TUPLE_(T) >::value,
      tuple_size<GTEST_$(n)_TUPLE_(U) >::value>::Eq(t, u);
}
    
    // redirect the messages to R's console.
namespace dmlc {
void CustomLogMessage::Log(const std::string& msg) {
  Rprintf('%s\n', msg.c_str());
}
}  // namespace dmlc
    
      /*!
   * \brief Push row block into the page.
   * \param batch the row batch.
   */
  inline void Push(const dmlc::RowBlock<uint32_t>& batch) {
    data.reserve(data.size() + batch.offset[batch.size] - batch.offset[0]);
    offset.reserve(offset.size() + batch.size);
    CHECK(batch.index != nullptr);
    for (size_t i = 0; i < batch.size; ++i) {
      offset.push_back(offset.back() + batch.offset[i + 1] - batch.offset[i]);
    }
    for (size_t i = batch.offset[0]; i < batch.offset[batch.size]; ++i) {
      uint32_t index = batch.index[i];
      bst_float fvalue = batch.value == nullptr ? 1.0f : batch.value[i];
      data.emplace_back(index, fvalue);
    }
    CHECK_EQ(offset.back(), data.size());
  }
  /*!
   * \brief Push a sparse page
   * \param batch the row page
   */
  inline void Push(const SparsePage &batch) {
    size_t top = offset.back();
    data.resize(top + batch.data.size());
    std::memcpy(dmlc::BeginPtr(data) + top,
                dmlc::BeginPtr(batch.data),
                sizeof(Entry) * batch.data.size());
    size_t begin = offset.size();
    offset.resize(begin + batch.Size());
    for (size_t i = 0; i < batch.Size(); ++i) {
      offset[i + begin] = top + batch.offset[i + 1];
    }
  }
  /*!
   * \brief Push one instance into page
   *  \param inst an instance row
   */
  inline void Push(const Inst &inst) {
    offset.push_back(offset.back() + inst.length);
    size_t begin = data.size();
    data.resize(begin + inst.length);
    if (inst.length != 0) {
      std::memcpy(dmlc::BeginPtr(data) + begin, inst.data,
                  sizeof(Entry) * inst.length);
    }
  }
    
      /**
   * \fn  virtual void Predictor::PredictContribution( DMatrix* dmat,
   * std::vector<bst_float>* out_contribs, const gbm::GBTreeModel& model,
   * unsigned ntree_limit = 0) = 0;
   *
   * \brief feature contributions to individual predictions; the output will be
   * a vector of length (nfeats + 1) * num_output_group * nsample, arranged in
   * that order.
   *
   * \param [in,out]  dmat               The input feature matrix.
   * \param [in,out]  out_contribs       The output feature contribs.
   * \param           model              Model to make predictions from.
   * \param           ntree_limit        (Optional) The ntree limit.
   * \param           approximate        Use fast approximate algorithm.
   * \param           condition          Condition on the condition_feature (0=no, -1=cond off, 1=cond on).
   * \param           condition_feature  Feature to condition on (i.e. fix) during calculations.
   */
    
    /*! \brief node statistics used in regression tree */
struct RTreeNodeStat {
  /*! \brief loss change caused by current split */
  bst_float loss_chg;
  /*! \brief sum of hessian values, used to measure coverage of data */
  bst_float sum_hess;
  /*! \brief weight of current node */
  bst_float base_weight;
  /*! \brief number of child that is leaf node known up to now */
  int leaf_child_cnt;
};
    
    /*!
 * \brief Macro to register sparse page format.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
 * .describe('Raw binary data format.')
 * .set_body([]() {
 *     return new RawFormat();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(Name)                       \
  DMLC_REGISTRY_REGISTER(::xgboost::data::SparsePageFormatReg, SparsePageFormat, Name)
    
      void DoBoost(DMatrix *p_fmat,
               HostDeviceVector<GradientPair> *in_gpair,
               ObjFunction* obj) override {
    monitor_.Start('DoBoost');
    }
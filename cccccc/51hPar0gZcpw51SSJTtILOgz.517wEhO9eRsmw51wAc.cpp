
        
          caffe::Datum datum;
  datum.set_channels(2);  // one channel for each image in the pair
  datum.set_height(rows);
  datum.set_width(cols);
  LOG(INFO) << 'A total of ' << num_items << ' items.';
  LOG(INFO) << 'Rows: ' << rows << ' Cols: ' << cols;
  for (int itemid = 0; itemid < num_items; ++itemid) {
    int i = caffe::caffe_rng_rand() % num_items;  // pick a random  pair
    int j = caffe::caffe_rng_rand() % num_items;
    read_image(&image_file, &label_file, i, rows, cols,
        pixels, &label_i);
    read_image(&image_file, &label_file, j, rows, cols,
        pixels + (rows * cols), &label_j);
    datum.set_data(pixels, 2*rows*cols);
    if (label_i  == label_j) {
      datum.set_label(1);
    } else {
      datum.set_label(0);
    }
    datum.SerializeToString(&value);
    std::string key_str = caffe::format_int(itemid, 8);
    db->Put(leveldb::WriteOptions(), key_str, value);
  }
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    namespace caffe {
    }
    
    /**
 * @brief Index into the input blob along its first axis.
 *
 * This layer can be used to select, reorder, and even replicate examples in a
 * batch.  The second blob is cast to int and treated as an index into the
 * first axis of the first blob.
 */
template <typename Dtype>
class BatchReindexLayer : public Layer<Dtype> {
 public:
  explicit BatchReindexLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      virtual inline int ExactNumBottomBlobs() const { return 3; }
  virtual inline const char* type() const { return 'ContrastiveLoss'; }
  /**
   * Unlike most loss layers, in the ContrastiveLossLayer we can backpropagate
   * to the first two inputs.
   */
  virtual inline bool AllowForceBackward(const int bottom_index) const {
    return bottom_index != 2;
  }
    
    namespace caffe {
    }
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
    
    {}  // namespace caffe
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
    namespace caffe {
    }
    
    
    {}  // namespace caffe
    
    #  define EXPECT_DEBUG_DEATH(statement, regex) \
  GTEST_EXECUTE_STATEMENT_(statement, regex)
    
    // This helper class is used by {ASSERT|EXPECT}_NO_FATAL_FAILURE to check if a
// statement generates new fatal failures. To do so it registers itself as the
// current test part result reporter. Besides checking if fatal failures were
// reported, it only delegates the reporting to the former result reporter.
// The original result reporter is restored in the destructor.
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
class GTEST_API_ HasNewFatalFailureHelper
    : public TestPartResultReporterInterface {
 public:
  HasNewFatalFailureHelper();
  virtual ~HasNewFatalFailureHelper();
  virtual void ReportTestPartResult(const TestPartResult& result);
  bool has_new_fatal_failure() const { return has_new_fatal_failure_; }
 private:
  bool has_new_fatal_failure_;
  TestPartResultReporterInterface* original_reporter_;
    }
    
    // Next, associate a list of types with the test case, which will be
// repeated for each type in the list.  The typedef is necessary for
// the macro to parse correctly.
typedef testing::Types<char, int, unsigned int> MyTypes;
TYPED_TEST_CASE(FooTest, MyTypes);
    
    // This header implements a family of generic predicate assertion
// macros:
//
//   ASSERT_PRED_FORMAT1(pred_format, v1)
//   ASSERT_PRED_FORMAT2(pred_format, v1, v2)
//   ...
//
// where pred_format is a function or functor that takes n (in the
// case of ASSERT_PRED_FORMATn) values and their source expression
// text, and returns a testing::AssertionResult.  See the definition
// of ASSERT_EQ in gtest.h for an example.
//
// If you don't care about formatting, you can use the more
// restrictive version:
//
//   ASSERT_PRED1(pred, v1)
//   ASSERT_PRED2(pred, v1, v2)
//   ...
//
// where pred is an n-ary function or functor that returns bool,
// and the values v1, v2, ..., must support the << operator for
// streaming to std::ostream.
//
// We also define the EXPECT_* variations.
//
// For now we only support predicates whose arity is at most 5.
// Please email googletestframework@googlegroups.com if you need
// support for higher arities.
    
    // Factory interface for death tests.  May be mocked out for testing.
class DeathTestFactory {
 public:
  virtual ~DeathTestFactory() { }
  virtual bool Create(const char* statement, const RE* regex,
                      const char* file, int line, DeathTest** test) = 0;
};
    
      // ParamIterator assumes ownership of the impl_ pointer.
  ParamIterator(const ParamIterator& other) : impl_(other.impl_->Clone()) {}
  ParamIterator& operator=(const ParamIterator& other) {
    if (this != &other)
      impl_.reset(other.impl_->Clone());
    return *this;
  }
    
      // Compares two C strings.  Returns true iff they have the same content.
  //
  // Unlike strcmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CStringEquals(const char* lhs, const char* rhs);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45>
struct Types45 {
  typedef T1 Head;
  typedef Types44<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
      T44, T45> Tail;
};
    
    $for i [[
$range j 1..i
$range k 2..i
template <$for j, [[GTEST_TEMPLATE_ T$j]]>
struct Templates$i {
  typedef TemplateSel<T1> Head;
  typedef Templates$(i-1)<$for k, [[T$k]]> Tail;
};
    
      // Returns true iff n is a prime number.
  virtual bool IsPrime(int n) const = 0;
    
    // Tests factorial of 0.
TEST(FactorialTest, Zero) {
  EXPECT_EQ(1, Factorial(0));
}
    
    bool Vunit::needsRegAlloc() const {
  if (next_vr > Vreg::V0) return true;
    }
    
    
    {  CurlShareResource();
  ~CurlShareResource() { close(); }
  void close();
  bool setOption(int option, const Variant& value);
  static bool isLongOption(long option);
  bool setLongOption(long option, long value);
  CURLcode attachToCurlHandle(CURL *cp);
 private:
  CURLSH* m_share;
  // CURLSH is a typedef to void
  TYPE_SCAN_IGNORE_FIELD(m_share);
};
    
    
    {    CondVarNode() {
      pthread_cond_init(&m_cond, nullptr);
    }
    ~CondVarNode() {
      pthread_cond_destroy(&m_cond);
    }
    /* implicit */ operator pthread_cond_t*() {
      return &m_cond;
    }
    void unlink() {
      if (m_listHook.is_linked()) m_listHook.unlink();
    }
  };
    
      if (args[1]->IsUndefined()) {
    db_wrapper->status_ = db_wrapper->db_->Delete(
        rocksdb::WriteOptions(), arg0);
  } else {
    if (!db_wrapper->HasFamilyNamed(arg1, db_wrapper)) {
      return scope.Close(Boolean::New(false));
    }
    db_wrapper->status_ = db_wrapper->db_->Delete(
        rocksdb::WriteOptions(), db_wrapper->columnFamilies_[arg1], arg0);
  }
    
      // Generate a list of random keys and values
  const int kWordCount = 15;
  std::string words[] = {'sdasd', 'triejf', 'fnjsdfn', 'dfjisdfsf', '342839',
                         'dsuha', 'mabuais', 'sadajsid', 'jf9834hf', '2d9j89',
                         'dj9823jd', 'a', 'dk02ed2dh', '$(jd4h984$(*', 'mabz'};
  const int kKeyCount = 6;
  std::string keys[] = {'dhaiusdhu', 'denidw', 'daisda', 'keykey', 'muki',
                        'shzassdianmd'};
    
    namespace rocksdb {
    }
    
    SyncPoint::SyncPoint() : 
  impl_(new Data) {
}
    
      // Same as ::InsertConcurrently
  // Returns false if MemTableRepFactory::CanHandleDuplicatedKey() is true and
  // the <key, seq> already exists.
  virtual bool InsertKeyConcurrently(KeyHandle handle) {
    InsertConcurrently(handle);
    return true;
  }
    
    // Drop column family when all data in that column family is expired
// TODO(jhli): Can be made a background job
Status DateTieredDBImpl::DropObsoleteColumnFamilies() {
  int64_t curtime;
  Status s;
  s = db_->GetEnv()->GetCurrentTime(&curtime);
  if (!s.ok()) {
    return s;
  }
  {
    InstrumentedMutexLock l(&mutex_);
    auto iter = handle_map_.begin();
    while (iter != handle_map_.end()) {
      if (iter->first <= curtime - ttl_) {
        s = db_->DropColumnFamily(iter->second);
        if (!s.ok()) {
          return s;
        }
        delete iter->second;
        iter = handle_map_.erase(iter);
      } else {
        break;
      }
    }
  }
  return Status::OK();
}
    
    // Return an iterator that provided the union of the data in
// children[0,n-1].  Takes ownership of the child iterators and
// will delete them when the result iterator is deleted.
//
// The result does no duplicate suppression.  I.e., if a particular
// key is present in K child iterators, it will be yielded K times.
//
// REQUIRES: n >= 0
extern InternalIterator* NewMergingIterator(
    const InternalKeyComparator* comparator, InternalIterator** children, int n,
    Arena* arena = nullptr, bool prefix_seek_mode = false);
    
    
    {}  // namespace rocksdb

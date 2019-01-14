
        
        namespace leveldb {
    }
    
    // Print contents of a log file. (*func)() is called on every record.
Status PrintLogContents(Env* env, const std::string& fname,
                        void (*func)(uint64_t, Slice, WritableFile*),
                        WritableFile* dst) {
  SequentialFile* file;
  Status s = env->NewSequentialFile(fname, &file);
  if (!s.ok()) {
    return s;
  }
  CorruptionReporter reporter;
  reporter.dst_ = dst;
  log::Reader reader(file, &reporter, true, 0);
  Slice record;
  std::string scratch;
  while (reader.ReadRecord(&record, &scratch)) {
    (*func)(reader.LastRecordOffset(), record, dst);
  }
  delete file;
  return Status::OK();
}
    
    #include <ctype.h>
#include <stdio.h>
#include 'db/filename.h'
#include 'db/dbformat.h'
#include 'leveldb/env.h'
#include 'util/logging.h'
    
    // Return the name of a temporary file owned by the db named 'dbname'.
// The result will be prefixed with 'dbname'.
std::string TempFileName(const std::string& dbname, uint64_t number);
    
    static const int kBlockSize = 32768;
    
    TEST(LogTest, PartialLastIsIgnored) {
  Write(BigString('bar', kBlockSize));
  // Cause a bad record length in the LAST block.
  ShrinkSize(1);
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ('', ReportMessage());
  ASSERT_EQ(0, DroppedBytes());
}
    
      // Return true if key is greater than the data stored in 'n'
  bool KeyIsAfterNode(const Key& key, Node* n) const;
    
      static uint64_t HashNumbers(uint64_t k, uint64_t g) {
    uint64_t data[2] = { k, g };
    return Hash(reinterpret_cast<char*>(data), sizeof(data), 0);
  }
    
    
    {#if !defined(NDEBUG)
    snapshot->list_ = this;
#endif  // !defined(NDEBUG)
    snapshot->next_ = &head_;
    snapshot->prev_ = head_.prev_;
    snapshot->prev_->next_ = snapshot;
    snapshot->next_->prev_ = snapshot;
    return snapshot;
  }
    
    /**
 * \class Predictor
 *
 * \brief Performs prediction on individual training instances or batches of
 * instances for GBTree. The predictor also manages a prediction cache
 * associated with input matrices. If possible, it will use previously
 * calculated predictions instead of calculating new predictions.
 *        Prediction functions all take a GBTreeModel and a DMatrix as input and
 * output a vector of predictions. The predictor does not modify any state of
 * the model itself.
 */
    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }
    
        size_t* it = begin;
    for (bst_omp_uint tid = 0; tid < nthread; ++tid) {
      std::copy(row_split_tloc[tid].left.begin(), row_split_tloc[tid].left.end(), it);
      it += row_split_tloc[tid].left.size();
    }
    size_t* split_pt = it;
    for (bst_omp_uint tid = 0; tid < nthread; ++tid) {
      std::copy(row_split_tloc[tid].right.begin(), row_split_tloc[tid].right.end(), it);
      it += row_split_tloc[tid].right.size();
    }
    
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
    
      void Load(dmlc::Stream* fi) {
    CHECK_EQ(fi->Read(&param, sizeof(param)), sizeof(param))
        << 'GBTree: invalid model file';
    trees.clear();
    trees_to_update.clear();
    for (int i = 0; i < param.num_trees; ++i) {
      std::unique_ptr<RegTree> ptr(new RegTree());
      ptr->Load(fi);
      trees.push_back(std::move(ptr));
    }
    tree_info.resize(param.num_trees);
    if (param.num_trees != 0) {
      CHECK_EQ(
          fi->Read(dmlc::BeginPtr(tree_info), sizeof(int) * param.num_trees),
          sizeof(int) * param.num_trees);
    }
  }
    
    
using namespace dmlc;
    
    TEST(Span, RBeginREnd) {
  int status = 1;
  TestRBeginREnd{&status}();
  ASSERT_EQ(status, 1);
}
    
    CardinalSplineTo::~CardinalSplineTo()
{
    CC_SAFE_RELEASE_NULL(_points);
}
    
    void ActionEase::startWithTarget(Node *target)
{
    if (target && _inner)
    {
        ActionInterval::startWithTarget(target);
        _inner->startWithTarget(_target);
    }
    else
    {
        log('ActionEase::startWithTarget error: target or _inner is nullptr!');
    }
}
    
        /** Set the selector target.
     *
     * @param sel The selector target.
     */
    void setTargetCallback(Ref* sel)
    {
        if (sel != _selectorTarget)
        {
            CC_SAFE_RETAIN(sel);
            CC_SAFE_RELEASE(_selectorTarget);
            _selectorTarget = sel;
        }
    }
    //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual CallFunc* reverse() const override;
    virtual CallFunc* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    CallFunc()
    : _selectorTarget(nullptr)
    , _callFunc(nullptr)
    , _function(nullptr)
    {
    }
    virtual ~CallFunc();
    
    void ActionManager::removeActionsByFlags(unsigned int flags, Node *target)
{
    if (flags == 0)
    {
        return;
    }
    CCASSERT(target != nullptr, 'target can't be nullptr!');
    if (target == nullptr)
    {
        return;
    }
    }
    
        void removeActionAtIndex(ssize_t index, struct _hashElement *element);
    void deleteHashElement(struct _hashElement *element);
    void actionAllocWithHashElement(struct _hashElement *element);
    
    /** @brief AtlasNode is a subclass of Node that implements the RGBAProtocol and TextureProtocol protocol.
 * It knows how to render a TextureAtlas object.
 * If you are going to render a TextureAtlas consider subclassing AtlasNode (or a subclass of AtlasNode).
 * All features from Node are valid, plus the following features:
 * - opacity and RGB colors.
 */
class CC_DLL AtlasNode : public Node, public TextureProtocol
{    
public:
	/** creates a AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render.
     *
     * @param filename The path of Atlas file.
     * @param tileWidth The width of the item.
     * @param tileHeight The height of the item.
     * @param itemsToRender The quantity of items to render.
     */
	static AtlasNode * create(const std::string& filename, int tileWidth, int tileHeight, int itemsToRender);
    }
    
        /**
     * get vertex count
     * @return number of vertices
     */
    unsigned int getVertCount() const;
    
    /**
     * get triangles count
     * @return number of triangles
     */
    unsigned int getTrianglesCount() const;
    
      {
    auto ka = getKeepAliveToken(exec);
    EXPECT_TRUE(ka);
    EXPECT_EQ(&exec, ka.get());
    EXPECT_EQ(1, exec.refCount);
    }
    
    BENCHMARK_RELATIVE(sformat_short_string_unsafe, iters) {
  BenchmarkSuspender suspender;
  auto const& shortString = getShortString();
  while (iters--) {
    std::string out;
    suspender.dismissing([&] { out = sformat(shortString); });
  }
}
    
    
    {  /**
   * Returns a double in [min, max), if min == max, returns 0.
   */
  template <class RNG = ThreadLocalPRNG, class /* EnableIf */ = ValidRNG<RNG>>
  static double randDouble(double min, double max, RNG&& rng) {
    if (std::fabs(max - min) < std::numeric_limits<double>::epsilon()) {
      return 0;
    }
    return std::uniform_real_distribution<double>(min, max)(rng);
  }
};
    
    template <
    class Iterator = const char*,
    class Base = folly::Range<boost::u8_to_u32_iterator<Iterator>>>
class UTF8Range : public Base {
 public:
  /* implicit */ UTF8Range(const folly::Range<Iterator> baseRange)
      : Base(
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.begin(),
                baseRange.begin(),
                baseRange.end()),
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.end(),
                baseRange.begin(),
                baseRange.end())) {}
  /* implicit */ UTF8Range(const std::string& baseString)
      : Base(folly::Range<Iterator>(baseString)) {}
};
    
      explicit VirtualExecutor(Executor* executor)
      : VirtualExecutor(getKeepAliveToken(executor)) {}
    
      tv = to<struct timeval>(milliseconds(987654321012LL));
  EXPECT_EQ(987654321, tv.tv_sec);
  EXPECT_EQ(12000, tv.tv_usec);
    
    
    {
    {
    {} // namespace zlib
} // namespace io
} // namespace folly
    
      std::shared_ptr<T> get() const {
    folly::hazptr_local<1> hazptr;
    auto slots = hazptr[0].get_protected(slots_);
    if (!slots) {
      return nullptr;
    }
    return (slots->slots_)[AccessSpreader<>::current(kNumSlots)];
  }
    
    
    {} // namespace
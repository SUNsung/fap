
        
        OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    //-----------------------------------------------------------------------------
//
//	class FloatAttribute
//
//-----------------------------------------------------------------------------
    
    
    {    for (int i = 0; i < n; ++i)
       Xdr::read <StreamIO> (is, _value[i]);
}
    
    class InputPart;
class TiledInputPart;
class DeepScanLineInputPart;
class DeepTiledInputPart;
    
    
    
    
void
Header::setVersion(const int version)
{
    if (version != 1)
    {
        throw IEX_NAMESPACE::ArgExc ('We can only process version 1');
    }
    }
    
    //
// Used to wrap OPENEXR_IMF_INTERNAL_NAMESPACE::IStream as a Mutex.
//
struct InputStreamMutex : public Mutex
{
    OPENEXR_IMF_INTERNAL_NAMESPACE::IStream* is;
    Int64 currentPosition;
    }
    
    TEST_F(JsonObjectWriterTest, PrettyPrintList) {
  ow_ = new JsonObjectWriter(' ', out_stream_);
  ow_->StartObject('')
      ->StartList('items')
      ->RenderString('', 'item1')
      ->RenderString('', 'item2')
      ->RenderString('', 'item3')
      ->EndList()
      ->StartList('empty')
      ->EndList()
      ->EndObject();
  EXPECT_EQ(
      '{\n'
      ' \'items\': [\n'
      '  \'item1\',\n'
      '  \'item2\',\n'
      '  \'item3\'\n'
      ' ],\n'
      ' \'empty\': []\n'
      '}\n',
      CloseStreamAndGetString());
}
    
    
    {  string str_with_null_char('ab\0c', 4);
  EXPECT_EXIT(
      TextFormatDecodeData::DecodeDataForString(str_with_null_char, 'def'),
      ::testing::KilledBySignal(SIGABRT),
      'error: got a null char in a string for making TextFormat data, input:');
  EXPECT_EXIT(
      TextFormatDecodeData::DecodeDataForString('def', str_with_null_char),
      ::testing::KilledBySignal(SIGABRT),
      'error: got a null char in a string for making TextFormat data, input:');
}
#endif  // PROTOBUF_HAS_DEATH_TEST
    
        for (size_t i = 0; i < set_fields.size(); i++) {
      const FieldDescriptor* field = set_fields[i];
      if (ShouldBeClear(field)) {
        reflection->ClearField(message, field);
        continue;
      }
      if (field->type() == FieldDescriptor::TYPE_MESSAGE) {
        if (field->is_repeated()) {
          for (int j = 0; j < reflection->FieldSize(*message, field); j++) {
            StripMessage(reflection->MutableRepeatedMessage(message, field, j));
          }
        } else {
          StripMessage(reflection->MutableMessage(message, field));
        }
      }
    }
    
        std::cerr << 'Generating ' << input_file
        << ' to ' << output_file << std::endl;
    benchmarks::BenchmarkDataset dataset;
    Message* message;
    std::string dataset_payload = ReadFile(input_file);
    GOOGLE_CHECK(dataset.ParseFromString(dataset_payload))
      << 'Can' t parse data file ' << input_file;
    
    
    {  ASSERT_THROWS_WITH(
      bn(torch::ones({2, 5})),
      'Calling BatchNorm::forward is only permitted '
      'when the 'stateful' option is true (was false). '
      'Use BatchNorm::pure_forward instead.');
}
    
    namespace caffe2 {
    }
    
    
    {} // namespace caffe2
    
    void set_superblock_metainfo(real_superblock_t *superblock,
                             const std::vector<std::vector<char> > &keys,
                             const std::vector<binary_blob_t> &values,
                             cluster_version_t version) {
    buf_write_t write(superblock->get());
    reql_btree_superblock_t *data
        = static_cast<reql_btree_superblock_t *>(
            write.get_data_write(REQL_BTREE_SUPERBLOCK_SIZE));
    }
    
        ~btree_slice_t();
    
    
    {}  // namespace testing
    
    // Finally, you are free to instantiate the pattern with the types you
// want.  If you put the above code in a header file, you can #include
// it in multiple C++ source files and instantiate it multiple times.
//
// To distinguish different instances of the pattern, the first
// argument to the INSTANTIATE_* macro is a prefix that will be added
// to the actual test case name.  Remember to pick unique prefixes for
// different instances.
typedef testing::Types<char, int, unsigned int> MyTypes;
INSTANTIATE_TYPED_TEST_CASE_P(My, FooTest, MyTypes);
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ', '
                            << e3 << ', '
                            << e4 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2
                            << '\n' << e3 << ' evaluates to ' << v3
                            << '\n' << e4 << ' evaluates to ' << v4;
}
    
      // Returns true if pathname describes an absolute path.
  bool IsAbsolutePath() const;
    
    // When the compiler sees expression IsContainerTest<C>(0), if C is an
// STL-style container class, the first overload of IsContainerTest
// will be viable (since both C::iterator* and C::const_iterator* are
// valid types and NULL can be implicitly converted to them).  It will
// be picked over the second overload as 'int' is a perfect match for
// the type of argument 0.  If C::iterator or C::const_iterator is not
// a valid type, the first overload is not viable, and the second
// overload will be picked.  Therefore, we can determine whether C is
// a container class by checking the type of IsContainerTest<C>(0).
// The value of the expression is insignificant.
//
// Note that we look for both C::iterator and C::const_iterator.  The
// reason is that C++ injects the name of a class as a member of the
// class itself (e.g. you can refer to class iterator as either
// 'iterator' or 'iterator::iterator').  If we look for C::iterator
// only, for example, we would mistakenly think that a class named
// iterator is an STL container.
//
// Also note that the simpler approach of overloading
// IsContainerTest(typename C::const_iterator*) and
// IsContainerTest(...) doesn't work with Visual Age C++ and Sun C++.
typedef int IsContainer;
template <class C>
IsContainer IsContainerTest(int /* dummy */,
                            typename C::iterator* /* it */ = NULL,
                            typename C::const_iterator* /* const_it */ = NULL) {
  return 0;
}
    
      // Smart pointer members.
  void reset(T* ptr = NULL) {
    depart();
    capture(ptr);
  }
  T* get() const { return value_; }
  T* operator->() const { return value_; }
  T& operator*() const { return *value_; }
    
      // This device now supports text in pattern colorspace!
  virtual GBool supportTextCSPattern(GfxState *state)
  	{ return state->getFillColorSpace()->getMode() == csPattern; }
    
    #ifdef USE_GCC_PRAGMAS
#pragma interface
#endif
    
      // get attributes
  attrs = attrsA;
    
    private:
  struct Interval {
    Interval(Object *dict, int baseA);
    ~Interval();
    GooString *prefix;
    enum NumberStyle {
      None,
      Arabic,
      LowercaseRoman,
      UppercaseRoman,
      UppercaseLatin,
      LowercaseLatin
    } style;
    int first, base, length;
  };
    
    
    
      // dictionary or stream
  } else if (buf1.isCmd('<<')) {
    shift(objNum);
    obj->initDict(xref);
    while (!buf1.isCmd('>>') && !buf1.isEOF()) {
      if (!buf1.isName()) {
	error(getPos(), 'Dictionary key must be a name object');
	shift();
      } else {
	// buf1 might go away in shift(), so construct the key
	key = copyString(buf1.getName());
	shift();
	if (buf1.isEOF() || buf1.isError()) {
	  gfree(key);
	  break;
	}
	obj->dictAdd(key, getObj(&obj2, fileKey, encAlgorithm, keyLength, objNum, objGen, fetchOriginatorNums));
      }
    }
    if (buf1.isEOF())
      error(getPos(), 'End of file inside dictionary');
    // stream objects are not allowed inside content streams or
    // object streams
    if (allowStreams && buf2.isCmd('stream')) {
      if ((str = makeStream(obj, fileKey, encAlgorithm, keyLength,
			    objNum, objGen, fetchOriginatorNums))) {
	obj->initStream(str);
      } else {
	obj->free();
	obj->initError();
      }
    } else {
      shift();
    }
    
    PopplerCache::PopplerCache(int cacheSizeA)
{
  cacheSize = cacheSizeA;
  keys = new PopplerCacheKey*[cacheSize];
  items = new PopplerCacheItem*[cacheSize];
  lastValidCacheIndex = -1;
}
    
    
    {  GBool mono;
  GBool gray;
  GBool transparency;
  GBool gdi;
  PSLevel level;		// PostScript level (1, 2, separation)
  GBool level1PSBug;		// gTrue if it uses a feature not supported in PSOutputDev
};
    
      Sound *copy();
    
    
    {  int ret = XGBoosterLoadModel(handle, fname);
  if (fname) jenv->ReleaseStringUTFChars(jfname,fname);
  return ret;
}
    
      size_t Size(unsigned node_id) {
    return elem_of_each_node_[node_id].Size();
  }
    
    SEXP XGDMatrixSetInfo_R(SEXP handle, SEXP field, SEXP array) {
  R_API_BEGIN();
  int len = length(array);
  const char *name = CHAR(asChar(field));
  if (!strcmp('group', name)) {
    std::vector<unsigned> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = static_cast<unsigned>(INTEGER(array)[i]);
    }
    CHECK_CALL(XGDMatrixSetGroup(R_ExternalPtrAddr(handle), BeginPtr(vec), len));
  } else {
    std::vector<float> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = REAL(array)[i];
    }
    CHECK_CALL(XGDMatrixSetFloatInfo(R_ExternalPtrAddr(handle),
                                   CHAR(asChar(field)),
                                   BeginPtr(vec), len));
  }
  R_API_END();
  return R_NilValue;
}
    
    #include <utility>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
    
      /*!
   * \brief dense feature vector that can be taken by RegTree
   * and can be construct from sparse feature vector.
   */
  struct FVec {
    /*!
     * \brief initialize the vector with size vector
     * \param size The size of the feature vector.
     */
    void Init(size_t size);
    /*!
     * \brief fill the vector with sparse vector
     * \param inst The sparse instance to fill.
     */
    void Fill(const SparsePage::Inst& inst);
    /*!
     * \brief drop the trace after fill, must be called after fill.
     * \param inst The sparse instance to drop.
     */
    void Drop(const SparsePage::Inst& inst);
    /*!
     * \brief returns the size of the feature vector
     * \return the size of the feature vector
     */
    size_t Size() const;
    /*!
     * \brief get ith value
     * \param i feature index.
     * \return the i-th feature value
     */
    bst_float Fvalue(size_t i) const;
    /*!
     * \brief check whether i-th entry is missing
     * \param i feature index.
     * \return whether i-th value is missing.
     */
    bool IsMissing(size_t i) const;
    }
    
    // redirect the nath functions.
bool CheckNAN(double v) {
  return ISNAN(v);
}
#if !defined(XGBOOST_USE_CUDA)
double LogGamma(double v) {
  return lgammafn(v);
}
#endif  // !defined(XGBOOST_USE_CUDA)
// customize random engine.
void CustomGlobalRandomEngine::seed(CustomGlobalRandomEngine::result_type val) {
  // ignore the seed
}
    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
    /*! \brief try to do efficient pruning */
template<typename DType, typename RType>
struct WXQSummary : public WQSummary<DType, RType> {
  // redefine entry type
  using Entry = typename WQSummary<DType, RType>::Entry;
  // constructor
  WXQSummary(Entry *data, size_t size)
      : WQSummary<DType, RType>(data, size) {}
  // check if the block is large chunk
  inline static bool CheckLarge(const Entry &e, RType chunk) {
    return  e.RMinNext() > e.RMaxPrev() + chunk;
  }
  // set prune
  inline void SetPrune(const WQSummary<DType, RType> &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    RType begin = src.data[0].rmax;
    // n is number of points exclude the min/max points
    size_t n = maxsize - 2, nbig = 0;
    // these is the range of data exclude the min/max point
    RType range = src.data[src.size - 1].rmin - begin;
    // prune off zero weights
    if (range == 0.0f || maxsize <= 2) {
      // special case, contain only two effective data pts
      this->data[0] = src.data[0];
      this->data[1] = src.data[src.size - 1];
      this->size = 2;
      return;
    } else {
      range = std::max(range, static_cast<RType>(1e-3f));
    }
    // Get a big enough chunk size, bigger than range / n
    // (multiply by 2 is a safe factor)
    const RType chunk = 2 * range / n;
    // minimized range
    RType mrange = 0;
    {
      // first scan, grab all the big chunk
      // moving block index, exclude the two ends.
      size_t bid = 0;
      for (size_t i = 1; i < src.size - 1; ++i) {
        // detect big chunk data point in the middle
        // always save these data points.
        if (CheckLarge(src.data[i], chunk)) {
          if (bid != i - 1) {
            // accumulate the range of the rest points
            mrange += src.data[i].RMaxPrev() - src.data[bid].RMinNext();
          }
          bid = i; ++nbig;
        }
      }
      if (bid != src.size - 2) {
        mrange += src.data[src.size-1].RMaxPrev() - src.data[bid].RMinNext();
      }
    }
    // assert: there cannot be more than n big data points
    if (nbig >= n) {
      // see what was the case
      LOG(INFO) << ' check quantile stats, nbig=' << nbig << ', n=' << n;
      LOG(INFO) << ' srcsize=' << src.size << ', maxsize=' << maxsize
                << ', range=' << range << ', chunk=' << chunk;
      src.Print();
      CHECK(nbig < n) << 'quantile: too many large chunk';
    }
    this->data[0] = src.data[0];
    this->size = 1;
    // The counter on the rest of points, to be selected equally from small chunks.
    n = n - nbig;
    // find the rest of point
    size_t bid = 0, k = 1, lastidx = 0;
    for (size_t end = 1; end < src.size; ++end) {
      if (end == src.size - 1 || CheckLarge(src.data[end], chunk)) {
        if (bid != end - 1) {
          size_t i = bid;
          RType maxdx2 = src.data[end].RMaxPrev() * 2;
          for (; k < n; ++k) {
            RType dx2 =  2 * ((k * mrange) / n + begin);
            if (dx2 >= maxdx2) break;
            while (i < end &&
                   dx2 >= src.data[i + 1].rmax + src.data[i + 1].rmin) ++i;
            if (i == end) break;
            if (dx2 < src.data[i].RMinNext() + src.data[i + 1].RMaxPrev()) {
              if (i != lastidx) {
                this->data[this->size++] = src.data[i]; lastidx = i;
              }
            } else {
              if (i + 1 != lastidx) {
                this->data[this->size++] = src.data[i + 1]; lastidx = i + 1;
              }
            }
          }
        }
        if (lastidx != end) {
          this->data[this->size++] = src.data[end];
          lastidx = end;
        }
        bid = end;
        // shift base by the gap
        begin += src.data[bid].RMinNext() - src.data[bid].RMaxPrev();
      }
    }
  }
};
/*!
 * \brief traditional GK summary
 */
template<typename DType, typename RType>
struct GKSummary {
  /*! \brief an entry in the sketch summary */
  struct Entry {
    /*! \brief minimum rank */
    RType rmin;
    /*! \brief maximum rank */
    RType rmax;
    /*! \brief the value of data */
    DType value;
    // constructor
    Entry() = default;
    // constructor
    Entry(RType rmin, RType rmax, DType value)
        : rmin(rmin), rmax(rmax), value(value) {}
  };
  /*! \brief input data queue before entering the summary */
  struct Queue {
    // the input queue
    std::vector<DType> queue;
    // end of the queue
    size_t qtail;
    // push data to the queue
    inline void Push(DType x, RType w) {
      queue[qtail++] = x;
    }
    inline void MakeSummary(GKSummary *out) {
      std::sort(queue.begin(), queue.begin() + qtail);
      out->size = qtail;
      for (size_t i = 0; i < qtail; ++i) {
        out->data[i] = Entry(i + 1, i + 1, queue[i]);
      }
    }
  };
  /*! \brief data field */
  Entry *data;
  /*! \brief number of elements in the summary */
  size_t size;
  GKSummary(Entry *data, size_t size)
      : data(data), size(size) {}
  /*! \brief the maximum error of the summary */
  inline RType MaxError() const {
    RType res = 0;
    for (size_t i = 1; i < size; ++i) {
      res = std::max(data[i].rmax - data[i-1].rmin, res);
    }
    return res;
  }
  /*! \return maximum rank in the summary */
  inline RType MaxRank() const {
    return data[size - 1].rmax;
  }
  /*!
   * \brief copy content from src
   * \param src source sketch
   */
  inline void CopyFrom(const GKSummary &src) {
    size = src.size;
    std::memcpy(data, src.data, sizeof(Entry) * size);
  }
  inline void CheckValid(RType eps) const {
    // assume always valid
  }
  /*! \brief used for debug purpose, print the summary */
  inline void Print() const {
    for (size_t i = 0; i < size; ++i) {
      LOG(CONSOLE) << 'x=' << data[i].value << '\t'
                   << '[' << data[i].rmin << ',' << data[i].rmax << ']';
    }
  }
  /*!
   * \brief set current summary to be pruned summary of src
   *        assume data field is already allocated to be at least maxsize
   * \param src source summary
   * \param maxsize size we can afford in the pruned sketch
   */
  inline void SetPrune(const GKSummary &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    const RType max_rank = src.MaxRank();
    this->size = maxsize;
    data[0] = src.data[0];
    size_t n = maxsize - 1;
    RType top = 1;
    for (size_t i = 1; i < n; ++i) {
      RType k = (i * max_rank) / n;
      while (k > src.data[top + 1].rmax) ++top;
      // assert src.data[top].rmin <= k
      // because k > src.data[top].rmax >= src.data[top].rmin
      if ((k - src.data[top].rmin) < (src.data[top+1].rmax - k)) {
        data[i] = src.data[top];
      } else {
        data[i] = src.data[top + 1];
      }
    }
    data[n] = src.data[src.size - 1];
  }
  inline void SetCombine(const GKSummary &sa,
                         const GKSummary &sb) {
    if (sa.size == 0) {
      this->CopyFrom(sb); return;
    }
    if (sb.size == 0) {
      this->CopyFrom(sa); return;
    }
    CHECK(sa.size > 0 && sb.size > 0) << 'invalid input for merge';
    const Entry *a = sa.data, *a_end = sa.data + sa.size;
    const Entry *b = sb.data, *b_end = sb.data + sb.size;
    this->size = sa.size + sb.size;
    RType aprev_rmin = 0, bprev_rmin = 0;
    Entry *dst = this->data;
    while (a != a_end && b != b_end) {
      if (a->value < b->value) {
        *dst = Entry(bprev_rmin + a->rmin,
                     a->rmax + b->rmax - 1, a->value);
        aprev_rmin = a->rmin;
        ++dst; ++a;
      } else {
        *dst = Entry(aprev_rmin + b->rmin,
                     b->rmax + a->rmax - 1, b->value);
        bprev_rmin = b->rmin;
        ++dst; ++b;
      }
    }
    if (a != a_end) {
      RType bprev_rmax = (b_end - 1)->rmax;
      do {
        *dst = Entry(bprev_rmin + a->rmin, bprev_rmax + a->rmax, a->value);
        ++dst; ++a;
      } while (a != a_end);
    }
    if (b != b_end) {
      RType aprev_rmax = (a_end - 1)->rmax;
      do {
        *dst = Entry(aprev_rmin + b->rmin, aprev_rmax + b->rmax, b->value);
        ++dst; ++b;
      } while (b != b_end);
    }
    CHECK(dst == data + size) << 'bug in combine';
  }
};
    
    #include <osquery/flags.h>
#include <osquery/logger.h>
#include <osquery/tables.h>
#include <osquery/utils/conversions/join.h>
#include <osquery/utils/info/platform_type.h>
#include <osquery/utils/json/json.h>
    
    void Initializer::initShell() const {
  // Get the caller's home dir for temporary storage/state management.
  auto homedir = osqueryHomeDirectory();
  if (osquery::pathExists(homedir).ok()) {
    // Only apply user/shell-specific paths if not overridden by CLI flag.
    if (Flag::isDefault('database_path')) {
      osquery::FLAGS_database_path =
          (fs::path(homedir) / 'shell.db').make_preferred().string();
    }
    initShellSocket(homedir);
  } else {
    fprintf(
        stderr, 'Cannot access or create osquery home: %s', homedir.c_str());
    FLAGS_disable_extensions = true;
    FLAGS_disable_database = true;
  }
    }
    
    #include <dlfcn.h>
#include <stdlib.h>
    
    template <typename T>
Expected<T, DatabaseError> InMemoryDatabase::getValue(const std::string& domain,
                                                      const std::string& key) {
  debug_only::verifyTrue(is_open_, 'database is not open');
  if (!is_open_) {
    return createError(DatabaseError::DbIsNotOpen) << 'Database is closed';
  }
  auto storage_iter = storage_.find(domain);
  if (storage_iter == storage_.end()) {
    return domainNotFoundError(domain);
  }
  std::lock_guard<std::mutex> lock(storage_iter->second->getMutex());
  auto result = storage_iter->second->get(key);
  if (result) {
    DataType value = result.take();
    if (value.type() == typeid(T)) {
      return boost::get<T>(value);
    } else {
      auto error = createError(DatabaseError::KeyNotFound)
                   << 'Requested wrong type for: ' << domain << ':' << key
                   << ' stored type: ' << value.type().name()
                   << ' requested type '
                   << boost::core::demangle(typeid(T).name());
      LOG(ERROR) << error.getMessage();
      debug_only::fail(error.getMessage().c_str());
      return std::move(error);
    }
  }
  return result.takeError();
}
    
      // Open and close are not thread safe commands,
  // Before closing db you need to ensure that no other theads are currently
  // using db connection.
  // Please see comment above about reopening db.
  void close() override;
    
    
    {    ASSERT_EQ(swThreadPool_free(&pool), SW_OK);
    ASSERT_EQ(result, N);
}
#endif
    
            pid_t pid = fork();
        ASSERT_NE(pid, -1);
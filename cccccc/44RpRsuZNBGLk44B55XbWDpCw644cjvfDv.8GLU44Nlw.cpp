
        
        
llvm::Optional<ASTNode>
SyntaxASTMap::getNodeForSyntax(syntax::Syntax SyntaxNode) const {
  auto Found = SyntaxMap.find(SyntaxNode.Root);
  if (Found == SyntaxMap.end()) {
    return None;
  }
  return Found->getSecond();
}
    
    CodeCompletionView::~CodeCompletionView() { delete rootGroup; }
    
    namespace llvm {
class FoldingSetNodeID;
} // end namespace llvm
    
    #include 'llvm/ADT/IntrusiveRefCntPtr.h'
    
    TEST(AutoCompactTest, ReadAll) {
  DoReads(kCount);
}
    
      DBIter(DBImpl* db, const Comparator* cmp, Iterator* iter, SequenceNumber s,
         uint32_t seed)
      : db_(db),
        user_comparator_(cmp),
        iter_(iter),
        sequence_(s),
        direction_(kForward),
        valid_(false),
        rnd_(seed),
        bytes_counter_(RandomPeriod()) {
  }
  virtual ~DBIter() {
    delete iter_;
  }
  virtual bool Valid() const { return valid_; }
  virtual Slice key() const {
    assert(valid_);
    return (direction_ == kForward) ? ExtractUserKey(iter_->key()) : saved_key_;
  }
  virtual Slice value() const {
    assert(valid_);
    return (direction_ == kForward) ? iter_->value() : saved_value_;
  }
  virtual Status status() const {
    if (status_.ok()) {
      return iter_->status();
    } else {
      return status_;
    }
  }
    
    // Approximate gap in bytes between samples of data read during iteration.
static const int kReadBytesPeriod = 1048576;
    
    Status TableCache::FindTable(uint64_t file_number, uint64_t file_size,
                             Cache::Handle** handle) {
  Status s;
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  Slice key(buf, sizeof(buf));
  *handle = cache_->Lookup(key);
  if (*handle == NULL) {
    std::string fname = TableFileName(dbname_, file_number);
    RandomAccessFile* file = NULL;
    Table* table = NULL;
    s = env_->NewRandomAccessFile(fname, &file);
    if (!s.ok()) {
      std::string old_fname = SSTTableFileName(dbname_, file_number);
      if (env_->NewRandomAccessFile(old_fname, &file).ok()) {
        s = Status::OK();
      }
    }
    if (s.ok()) {
      s = Table::Open(*options_, file, file_size, &table);
    }
    }
    }
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    # define TEST_P(test_case_name, test_name) \
  class GTEST_TEST_CLASS_NAME_(test_case_name, test_name) \
      : public test_case_name { \
   public: \
    GTEST_TEST_CLASS_NAME_(test_case_name, test_name)() {} \
    virtual void TestBody(); \
   private: \
    static int AddToRegistry() { \
      ::testing::UnitTest::GetInstance()->parameterized_test_registry(). \
          GetTestCasePatternHolder<test_case_name>(\
              #test_case_name, __FILE__, __LINE__)->AddTestPattern(\
                  #test_case_name, \
                  #test_name, \
                  new ::testing::internal::TestMetaFactory< \
                      GTEST_TEST_CLASS_NAME_(test_case_name, test_name)>()); \
      return 0; \
    } \
    static int gtest_registering_dummy_; \
    GTEST_DISALLOW_COPY_AND_ASSIGN_(\
        GTEST_TEST_CLASS_NAME_(test_case_name, test_name)); \
  }; \
  int GTEST_TEST_CLASS_NAME_(test_case_name, \
                             test_name)::gtest_registering_dummy_ = \
      GTEST_TEST_CLASS_NAME_(test_case_name, test_name)::AddToRegistry(); \
  void GTEST_TEST_CLASS_NAME_(test_case_name, test_name)::TestBody()
    
    // The 'Types' template argument below must have spaces around it
// since some compilers may choke on '>>' when passing a template
// instance (e.g. Types<int>)
# define INSTANTIATE_TYPED_TEST_CASE_P(Prefix, CaseName, Types) \
  bool gtest_##Prefix##_##CaseName GTEST_ATTRIBUTE_UNUSED_ = \
      ::testing::internal::TypeParameterizedTestCase<CaseName, \
          GTEST_CASE_NAMESPACE_(CaseName)::gtest_AllTests_, \
          ::testing::internal::TypeList< Types >::type>::Register(\
              #Prefix, #CaseName, GTEST_REGISTERED_TEST_NAMES_(CaseName))
    
     private:
  // Replaces multiple consecutive separators with a single separator.
  // For example, 'bar///foo' becomes 'bar/foo'. Does not eliminate other
  // redundancies that might be in a pathname involving '.' or '..'.
  //
  // A pathname with multiple consecutive separators may occur either through
  // user error or as a result of some scripts or APIs that generate a pathname
  // with a trailing separator. On other platforms the same API or script
  // may NOT generate a pathname with a trailing '/'. Then elsewhere that
  // pathname may have another '/' and pathname components added to it,
  // without checking for the separator already being there.
  // The script language and operating system may allow paths like 'foo//bar'
  // but some of the functions in FilePath will not handle that correctly. In
  // particular, RemoveTrailingPathSeparator() only removes one separator, and
  // it is called in CreateDirectoriesRecursively() assuming that it will change
  // a pathname from directory syntax (trailing separator) to filename syntax.
  //
  // On Windows this method also replaces the alternate path separator '/' with
  // the primary path separator '\\', so that for example 'bar\\/\\foo' becomes
  // 'bar\\foo'.
    
    // The relation between an NativeArray object (see below) and the
// native array it represents.
enum RelationToSource {
  kReference,  // The NativeArray references the native array.
  kCopy        // The NativeArray makes a copy of the native array and
               // owns the copy.
};
    
    // Class iterating over elements provided by an implementation of
// ParamGeneratorInterface<T>. It wraps ParamIteratorInterface<T>
// and implements the const forward iterator concept.
template <typename T>
class ParamIterator {
 public:
  typedef T value_type;
  typedef const T& reference;
  typedef ptrdiff_t difference_type;
    }
    
    #  ifdef __RTTI_ALL__
#   define GTEST_HAS_RTTI 1
#  else
#   define GTEST_HAS_RTTI 0
#  endif
    
    #endif  // GTEST_HAS_TYPED_TEST || GTEST_HAS_TYPED_TEST_P
    
    // Returns true iff n is a prime number.
bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;
    }
    
    #endif  // STORAGE_LEVELDB_DB_SNAPSHOT_H_

    
    
    {  delete iter;
  delete db;
  DestroyDB(dbpath, options);
}
    
    
    {      // Ok
      break;
    case kSnappyCompression: {
      size_t ulength = 0;
      if (!port::Snappy_GetUncompressedLength(data, n, &ulength)) {
        delete[] buf;
        return Status::Corruption('corrupted compressed block contents');
      }
      char* ubuf = new char[ulength];
      if (!port::Snappy_Uncompress(data, n, ubuf)) {
        delete[] buf;
        delete[] ubuf;
        return Status::Corruption('corrupted compressed block contents');
      }
      delete[] buf;
      result->data = Slice(ubuf, ulength);
      result->heap_allocated = true;
      result->cachable = true;
      break;
    }
    default:
      delete[] buf;
      return Status::Corruption('bad block type');
  }
    
    double Histogram::Percentile(double p) const {
  double threshold = num_ * (p / 100.0);
  double sum = 0;
  for (int b = 0; b < kNumBuckets; b++) {
    sum += buckets_[b];
    if (sum >= threshold) {
      // Scale linearly within this bucket
      double left_point = (b == 0) ? 0 : kBucketLimit[b-1];
      double right_point = kBucketLimit[b];
      double left_sum = sum - buckets_[b];
      double right_sum = sum;
      double pos = (threshold - left_sum) / (right_sum - left_sum);
      double r = left_point + (right_point - left_point) * pos;
      if (r < min_) r = min_;
      if (r > max_) r = max_;
      return r;
    }
  }
  return max_;
}
    
    
    {  // Skewed: pick 'base' uniformly from range [0,max_log] and then
  // return 'base' random bits.  The effect is to pick a number in the
  // range [0,2^max_log-1] with exponential bias towards smaller numbers.
  uint32_t Skewed(int max_log) {
    return Uniform(1 << Uniform(max_log + 1));
  }
};
    
    
    
    
    
    			b2Vec2 vertices[3];
			vertices[0] = b2Mul(xf1, b2Vec2(-1.0f, 0.0f));
			vertices[1] = b2Mul(xf1, b2Vec2(1.0f, 0.0f));
			vertices[2] = b2Mul(xf1, b2Vec2(0.0f, 0.5f));
			
			b2PolygonShape poly1;
			poly1.Set(vertices, 3);
    
    			b2WeldJointDef jd;
			jd.frequencyHz = 8.0f;
			jd.dampingRatio = 0.7f;
    
    			x += 20.0f;
			shape.Set(b2Vec2(x, 0.0f), b2Vec2(x + 40.0f, 0.0f));
			ground->CreateFixture(&fd);
    
    
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

    
    
    {
    {
    { private:
  /*! \brief input stream */
  dmlc::Stream *strm_;
  /*! \brief current buffer pointer */
  size_t buffer_ptr_;
  /*! \brief internal buffer */
  std::string buffer_;
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_IO_H_

    
      fs = dmlc::Stream::Create(tmp_file.c_str(), 'r');
  xgboost::MetaInfo inforead;
  inforead.LoadBinary(fs);
  EXPECT_EQ(inforead.labels, info.labels);
  EXPECT_EQ(inforead.num_col, info.num_col);
  EXPECT_EQ(inforead.num_row, info.num_row);
    
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
    
    /*! \brief High precision gradient statistics pair with integer backed
 * storage. Operators are associative where floating point versions are not
 * associative. */
typedef detail::bst_gpair_internal<int64_t> bst_gpair_integer;
    
    
    {
    {    int last_dc = 0;
    const coeff_t* src_coeffs = components_[c].coeffs();
    coeff_t* dest_coeffs = &comp->coeffs[0];
    for (int block_y = 0; block_y < comp->height_in_blocks; ++block_y) {
      for (int block_x = 0; block_x < comp->width_in_blocks; ++block_x) {
        if (block_y >= components_[c].height_in_blocks() ||
            block_x >= components_[c].width_in_blocks()) {
          dest_coeffs[0] = last_dc;
          for (int k = 1; k < kDCTBlockSize; ++k) {
            dest_coeffs[k] = 0;
          }
        } else {
          for (int k = 0; k < kDCTBlockSize; ++k) {
            const int quant = q[c][k];
            int coeff = src_coeffs[k];
            assert(coeff % quant == 0);
            dest_coeffs[k] = coeff / quant;
          }
          src_coeffs += kDCTBlockSize;
        }
        last_dc = dest_coeffs[0];
        dest_coeffs += kDCTBlockSize;
      }
    }
  }
  SaveQuantTables(q, jpg);
}
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
    namespace guetzli {
    }
    
      tmp0 = in[5 * stride];
  tmp1 = kIDCTMatrix[ 5] * tmp0;
  tmp2 = kIDCTMatrix[13] * tmp0;
  tmp3 = kIDCTMatrix[21] * tmp0;
  tmp4 = kIDCTMatrix[29] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    #include <algorithm>
#include <string.h>
    
    DEFINE_FIND_STATIC_METHOD(KXlog_setConsoleLogOpen, KXlog, 'setConsoleLogOpen', '(Z)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_setConsoleLogOpen
  (JNIEnv *env, jclass, jboolean _is_open) {
	appender_set_console_log((bool)_is_open);
}
    
    	extern void addLoadModule(std::string _module_name);
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        if (touch_times_.size() <= count_) {
        touch_times_.push_back(now);
        return true;
    }
    
    
    {  private:
    TServicesMap m_services;
    TServicesMap m_publicservices;
    std::vector<ServiceBase*> m_releasevec;
};
    
    
#endif /* defined(__PublicComponent__testspy__) */

    
    
    {  private:
    virtual void __OnAttach(const char* _key) {}
    virtual void __OnDetach(const char* _key) {}
};

    
      BlockIter(const Comparator* comparator, const char* data, uint32_t restarts,
            uint32_t num_restarts, BlockPrefixIndex* prefix_index,
            SequenceNumber global_seqno, BlockReadAmpBitmap* read_amp_bitmap)
      : BlockIter() {
    Initialize(comparator, data, restarts, num_restarts, prefix_index,
               global_seqno, read_amp_bitmap);
  }
    
     private:
  std::shared_ptr<Logger> info_log_;
  const unique_ptr<SequentialFileReader> file_;
  Reporter* const reporter_;
  bool const checksum_;
  char* const backing_store_;
  Slice buffer_;
  bool eof_;   // Last Read() indicated EOF by returning < kBlockSize
  bool read_error_;   // Error occurred while reading from file
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats)
      : StatisticsImpl(stats, false), m_ignore_histograms() {
  }
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
          if (!s.ok()) {
        bg_errors_[path_in_trash] = s;
      }
    
    // Append the serialization of 'key' to *result.
extern void AppendInternalKey(std::string* result,
                              const ParsedInternalKey& key);
// Serialized internal key consists of user key followed by footer.
// This function appends the footer to *result, assuming that *result already
// contains the user key at the end.
extern void AppendInternalKeyFooter(std::string* result, SequenceNumber s,
                                    ValueType t);
    
    
    {}  // namespace rocksdb
#endif  // NDEBUG

    
    
    {
    {
    {  return out;
}
}
}

    
    class Countable : public noncopyable, public nonmovable {
public:
  // RefPtr expects refcount to start at 0
  Countable() : m_refcount(0) {}
  virtual ~Countable()
  {
    FBASSERT(m_refcount == 0);
  }
    }
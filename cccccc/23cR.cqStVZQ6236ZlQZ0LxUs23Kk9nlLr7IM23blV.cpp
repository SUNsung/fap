
        
        /* Map whose keys are pointers, but are compared by their dereferenced values.
 *
 * Differs from a plain std::map<const K*, T, DereferencingComparator<K*> > in
 * that methods that take a key for comparison take a K rather than taking a K*
 * (taking a K* would be confusing, since it's the value rather than the address
 * of the object for comparison that matters due to the dereferencing comparator).
 *
 * Objects pointed to by keys must not be modified in any way that changes the
 * result of DereferencingComparator.
 */
template <class K, class T>
class indirectmap {
private:
    typedef std::map<const K*, T, DereferencingComparator<const K*> > base;
    base m;
public:
    typedef typename base::iterator iterator;
    typedef typename base::const_iterator const_iterator;
    typedef typename base::size_type size_type;
    typedef typename base::value_type value_type;
    }
    
    
    {  // No-ops since the C binding does not support key shortening methods.
  virtual void FindShortestSeparator(std::string*, const Slice&) const { }
  virtual void FindShortSuccessor(std::string* key) const { }
};
    
      fname = TableFileName('bar', 200);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(200, number);
  ASSERT_EQ(kTableFile, type);
    
    class TableCache {
 public:
  TableCache(const std::string& dbname, const Options* options, int entries);
  ~TableCache();
    }
    
    void VersionEdit::Clear() {
  comparator_.clear();
  log_number_ = 0;
  prev_log_number_ = 0;
  last_sequence_ = 0;
  next_file_number_ = 0;
  has_comparator_ = false;
  has_log_number_ = false;
  has_prev_log_number_ = false;
  has_next_file_number_ = false;
  has_last_sequence_ = false;
  deleted_files_.clear();
  new_files_.clear();
}
    
    namespace leveldb {
    }
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
    
    {
    {}  // namespace
}  // namespace tesseract

    
    #ifndef SWIG
template <class T1, class T2, class R, class P1, class P2, class P3, class P4, class A1>
inline typename _ConstTessMemberResultCallback_4_1<true,R,T1,P1,P2,P3,P4,A1>::base*
NewTessCallback(const T1* obj, R (T2::*member)(P1,P2,P3,P4,A1) const, typename Identity<P1>::type p1, typename Identity<P2>::type p2, typename Identity<P3>::type p3, typename Identity<P4>::type p4) {
  return new _ConstTessMemberResultCallback_4_1<true,R,T1,P1,P2,P3,P4,A1>(obj, member, p1, p2, p3, p4);
}
#endif
    
        while (iter->Next()) {
      page->Push(iter->Value());
      if (page->MemCostBytes() >= kPageSize) {
        bytes_write += page->MemCostBytes();
        writer.PushWrite(std::move(page));
        writer.Alloc(&page);
        page->Clear();
        double tdiff = dmlc::GetTime() - tstart;
        LOG(CONSOLE) << 'Writing to ' << cache_info << ' in '
                     << ((bytes_write >> 20UL) / tdiff) << ' MB/s, '
                     << (bytes_write >> 20UL) << ' written';
      }
    }
    if (page->data.size() != 0) {
      writer.PushWrite(std::move(page));
    }
    
    // gbms
#include '../src/gbm/gbm.cc'
#include '../src/gbm/gbtree.cc'
#include '../src/gbm/gblinear.cc'
    
    
    {/*!
 * \brief define compatible keywords in g++
 *  Used to support g++-4.6 and g++4.7
 */
#if DMLC_USE_CXX11 && defined(__GNUC__) && !defined(__clang_version__)
#if __GNUC__ == 4 && __GNUC_MINOR__ < 8
#define override
#define final
#endif
#endif
}  // namespace xgboost
#endif  // XGBOOST_BASE_H_

    
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
    
    template<typename DType>
inline void CompressArray<DType>::Decompress(int chunk_id) {
  int chunk_size = static_cast<int>(
      raw_chunks_[chunk_id + 1] - raw_chunks_[chunk_id]) * sizeof(DType);
  int encoded_size = static_cast<int>(
      encoded_chunks_[chunk_id + 1] - encoded_chunks_[chunk_id]);
  // decompress data
  int src_size = LZ4_decompress_fast(
      dmlc::BeginPtr(in_buffer_) + encoded_chunks_[chunk_id],
      reinterpret_cast<char*>(dmlc::BeginPtr(data) + raw_chunks_[chunk_id]),
      chunk_size);
  CHECK_EQ(encoded_size, src_size);
}
    
     private:
  char delim_;         // The delimiter is inserted between elements
    
    #include 'rocksdb/compaction_filter.h'
#include 'rocksjni/jnicallback.h'
    
    	ScopedJstring log_dir_jstr(env, _log_dir);
	ScopedJstring nameprefix_jstr(env, _nameprefix);
	appender_open_with_cache((TAppenderMode)mode, cache_dir.c_str(), log_dir_jstr.GetChar(), nameprefix_jstr.GetChar(), pubkey);
	xlogger_SetLevel((TLogLevel)level);
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #include 'boost/any.hpp'
    
    Test_Spy_Sample::~Test_Spy_Sample()
{
    SPY_DETACH_CLASS();
}
    
    int TSpy::__TestFun1(int i)
{
    return reinterpret_cast<Test_Spy_Sample*>(This())->__TestFun1(i);
}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
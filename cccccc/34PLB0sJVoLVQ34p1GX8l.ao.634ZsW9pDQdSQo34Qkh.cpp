
        
          batch.Put(Slice('foo'), Slice('bar'));
  size_t one_key_size = batch.ApproximateSize();
  ASSERT_LT(empty_size, one_key_size);
    
    
    {}  // namespace leveldb
    
    
    {  delete iter;
  delete db;
  DestroyDB(dbpath, options);
}
    
    namespace leveldb {
    }
    
    // Return an iterator that provided the union of the data in
// children[0,n-1].  Takes ownership of the child iterators and
// will delete them when the result iterator is deleted.
//
// The result does no duplicate suppression.  I.e., if a particular
// key is present in K child iterators, it will be yielded K times.
//
// REQUIRES: n >= 0
Iterator* NewMergingIterator(const Comparator* comparator, Iterator** children,
                             int n);
    
    
    {  // We might want to unify with ReadBlock() if we start
  // requiring checksum verification in Table::Open.
  ReadOptions opt;
  if (rep_->options.paranoid_checks) {
    opt.verify_checksums = true;
  }
  BlockContents block;
  if (!ReadBlock(rep_->file, opt, filter_handle, &block).ok()) {
    return;
  }
  if (block.heap_allocated) {
    rep_->filter_data = block.data.data();  // Will need to delete later
  }
  rep_->filter = new FilterBlockReader(rep_->options.filter_policy, block.data);
}
    
    // Return a new two level iterator.  A two-level iterator contains an
// index iterator whose values point to a sequence of blocks where
// each block is itself a sequence of key,value pairs.  The returned
// two-level iterator yields the concatenation of all key/value pairs
// in the sequence of blocks.  Takes ownership of 'index_iter' and
// will delete it when no longer needed.
//
// Uses a supplied function to convert an index_iter value into
// an iterator over the contents of the corresponding block.
Iterator* NewTwoLevelIterator(
    Iterator* index_iter,
    Iterator* (*block_function)(void* arg, const ReadOptions& options,
                                const Slice& index_value),
    void* arg, const ReadOptions& options);
    
            friend Rational operator+(Rational lhs, Rational const& rhs);
        friend Rational operator-(Rational lhs, Rational const& rhs);
        friend Rational operator*(Rational lhs, Rational const& rhs);
        friend Rational operator/(Rational lhs, Rational const& rhs);
        friend Rational operator%(Rational lhs, Rational const& rhs);
    
                    // Get the system calendar type
                // Note: This function returns 0 on failure.
                // We'll ignore the failure in that case and the CalendarIdentifier would get set to GregorianCalendar.
                CALID calId;
                ::GetLocaleInfoEx(m_resolvedName.c_str(), LOCALE_ICALENDARTYPE | LOCALE_RETURN_NUMBER, reinterpret_cast<PWSTR>(&calId), sizeof(calId));
    
    void CCalcEngine::InitChopNumbers()
{
    // these rat numbers are set only once and then never change regardless of
    // base or precision changes
    assert(m_chopNumbers.size() >= 4);
    m_chopNumbers[0] = Rational{ rat_qword };
    m_chopNumbers[1] = Rational{ rat_dword };
    m_chopNumbers[2] = Rational{ rat_word };
    m_chopNumbers[3] = Rational{ rat_byte };
    }
    
    using namespace std;
using namespace CalculationManager;
    
    #pragma once
#include 'ExpressionCommandInterface.h'
#include 'Header Files/IHistoryDisplay.h'
    
      // Get the next PostScript token.  Returns false at end-of-stream.
  GBool getToken(char *buf, int size, int *length);
    
      // Get form.
  FormPageWidgets *getPageWidgets() { return pageWidgets; }
    
    
    {  void addElement (double elapsed);
  int getCount () { return count; }
  double getTotal () { return total; }
  double getMin () { return max; }
  double getMax () { return max; }
private:
  int count;			// size of <elems> array
  double total;			// number of elements in array
  double min;			// reference count
  double max;			// reference count
};
    
      // if it's embedded
  Stream* embeddedStream;
    
    #include 'GooString.h'
#include 'Object.h'
#include 'Sound.h'
#include 'Stream.h'
#include 'FileSpec.h'
    
    
    {  Object *streamObj;
  SoundKind kind;
  GooString *fileName;
  double samplingRate;
  int channels;
  int bitsPerSample;
  SoundEncoding encoding;
};
    
      // Get the bitmap and its size.
  SplashBitmap *getBitmap() { return bitmap; }
  int getBitmapWidth();
  int getBitmapHeight();
    
    /*!
 * \brief create a matrix content from CSR format
 * \param indptr pointer to row headers
 * \param indices findex
 * \param data fvalue
 * \param nindptr number of rows in the matrix + 1
 * \param nelem number of nonzero elements in the matrix
 * \param num_col number of columns; when it's set to 0, then guess from data
 * \param out created dmatrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromCSREx(const size_t* indptr,
                                     const unsigned* indices,
                                     const float* data,
                                     size_t nindptr,
                                     size_t nelem,
                                     size_t num_col,
                                     DMatrixHandle* out);
/*!
 * \brief create a matrix content from CSC format
 * \param col_ptr pointer to col headers
 * \param indices findex
 * \param data fvalue
 * \param nindptr number of rows in the matrix + 1
 * \param nelem number of nonzero elements in the matrix
 * \param num_row number of rows; when it's set to 0, then guess from data
 * \param out created dmatrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromCSCEx(const size_t* col_ptr,
                                     const unsigned* indices,
                                     const float* data,
                                     size_t nindptr,
                                     size_t nelem,
                                     size_t num_row,
                                     DMatrixHandle* out);
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    const auto& offset_vec = page.offset.HostVector();
    const auto& data_vec = page.data.HostVector();
    CHECK(page.offset.Size() != 0 && offset_vec[0] == 0);
    CHECK_EQ(offset_vec.back(), page.data.Size());
    fo->Write(offset_vec);
    if (page.data.Size() != 0) {
      fo->Write(dmlc::BeginPtr(data_vec), page.data.Size() * sizeof(Entry));
    }
  }
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '(3L,2L,1L)';
  ss >> vals_in;
  EXPECT_EQ(vals_in, vals);
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    std::unique_ptr<CompactionFilter>
BlobIndexCompactionFilterFactory::CreateCompactionFilter(
    const CompactionFilter::Context& /*context*/) {
  int64_t current_time = 0;
  Status s = env_->GetCurrentTime(&current_time);
  if (!s.ok()) {
    return nullptr;
  }
  assert(current_time >= 0);
    }
    
      bool PartialMerge(const Slice& /*key*/, const Slice& /*left_operand*/,
                    const Slice& right_operand, std::string* new_value,
                    Logger* /*logger*/) const override {
    new_value->assign(right_operand.data(), right_operand.size());
    return true;
  }
    
    Status WriteBatchBase::DeleteRange(ColumnFamilyHandle* column_family,
                                   const SliceParts& begin_key,
                                   const SliceParts& end_key) {
  std::string begin_key_buf, end_key_buf;
  Slice begin_key_slice(begin_key, &begin_key_buf);
  Slice end_key_slice(end_key, &end_key_buf);
  return DeleteRange(column_family, begin_key_slice, end_key_slice);
}
    
    class WriteCallback {
 public:
  virtual ~WriteCallback() {}
    }
    
    // A simple compaction algorithm that always compacts everything
// to the highest level whenever possible.
class FullCompactor : public Compactor {
 public:
  explicit FullCompactor(const Options options) : options_(options) {
    compact_options_.compression = options_.compression;
    compact_options_.output_file_size_limit =
        options_.target_file_size_base;
  }
    }
    
      // Lookup page cache by page identifier
  //
  // page_key   Page identifier
  // buf        Buffer where the data should be copied
  // size       Size of the page
  virtual Status Lookup(const Slice& key, std::unique_ptr<char[]>* data,
                        size_t* size) = 0;
    
    // Simple RAII wrapper class for Snapshot.
// Constructing this object will create a snapshot.  Destructing will
// release the snapshot.
class ManagedSnapshot {
 public:
  explicit ManagedSnapshot(DB* db);
    }
    
    // Options to control the behavior of a database (passed to
// DB::Open). A LevelDBOptions object can be initialized as though
// it were a LevelDB Options object, and then it can be converted into
// a RocksDB Options object.
struct LevelDBOptions {
  // -------------------
  // Parameters that affect behavior
    }
    
    #ifndef ROCKSDB_LITE
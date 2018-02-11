
        
        
llvm::Optional<ASTNode>
SyntaxASTMap::getNodeForSyntax(syntax::Syntax SyntaxNode) const {
  auto Found = SyntaxMap.find(SyntaxNode.Root);
  if (Found == SyntaxMap.end()) {
    return None;
  }
  return Found->getSecond();
}
    
        // Quickly see if copy has only one use and that use is a destroy_value. In
    // such a case, we can always eliminate both the copy and the destroy.
    if (auto *Op = CVI->getSingleUse()) {
      if (auto *DVI = dyn_cast<DestroyValueInst>(Op->getUser())) {
        DVI->eraseFromParent();
        CVI->eraseFromParent();
        NumEliminatedInsts += 2;
        continue;
      }
    }
    
    #endif  // STORAGE_LEVELDB_DB_BUILDER_H_

    
    void leveldb_writebatch_iterate(
    leveldb_writebatch_t* b,
    void* state,
    void (*put)(void*, const char* k, size_t klen, const char* v, size_t vlen),
    void (*deleted)(void*, const char* k, size_t klen)) {
  class H : public WriteBatch::Handler {
   public:
    void* state_;
    void (*put_)(void*, const char* k, size_t klen, const char* v, size_t vlen);
    void (*deleted_)(void*, const char* k, size_t klen);
    virtual void Put(const Slice& key, const Slice& value) {
      (*put_)(state_, key.data(), key.size(), value.data(), value.size());
    }
    virtual void Delete(const Slice& key) {
      (*deleted_)(state_, key.data(), key.size());
    }
  };
  H handler;
  handler.state_ = state;
  handler.put_ = put;
  handler.deleted_ = deleted;
  b->rep.Iterate(&handler);
}
    
    const char* InternalKeyComparator::Name() const {
  return 'leveldb.InternalKeyComparator';
}
    
    // Make the CURRENT file point to the descriptor file with the
// specified number.
extern Status SetCurrentFile(Env* env, const std::string& dbname,
                             uint64_t descriptor_number);
    
    
    {  fname = TempFileName('tmp', 999);
  ASSERT_EQ('tmp/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(999, number);
  ASSERT_EQ(kTempFile, type);
}
    
    Status TableCache::Get(const ReadOptions& options,
                       uint64_t file_number,
                       uint64_t file_size,
                       const Slice& k,
                       void* arg,
                       void (*saver)(void*, const Slice&, const Slice&)) {
  Cache::Handle* handle = NULL;
  Status s = FindTable(file_number, file_size, &handle);
  if (s.ok()) {
    Table* t = reinterpret_cast<TableAndFile*>(cache_->Value(handle))->table;
    s = t->InternalGet(options, k, arg, saver);
    cache_->Release(handle);
  }
  return s;
}
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-NULL, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or NULL if no Table object underlies
  // the returned iterator.  The returned '*tableptr' object is owned by
  // the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options,
                        uint64_t file_number,
                        uint64_t file_size,
                        Table** tableptr = NULL);
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    class Env;
    
    // Return a builtin comparator that uses lexicographic byte-wise
// ordering.  The result remains the property of this module and
// must not be deleted.
extern const Comparator* BytewiseComparator();
    
    namespace leveldb {
    }
    
    class Slice;
    
    // Returns the number of misfit blob tops in this word.
int Tesseract::CountMisfitTops(WERD_RES *word_res) {
  int bad_blobs = 0;
  int num_blobs = word_res->rebuild_word->NumBlobs();
  for (int blob_id = 0; blob_id < num_blobs; ++blob_id) {
    TBLOB* blob = word_res->rebuild_word->blobs[blob_id];
    UNICHAR_ID class_id = word_res->best_choice->unichar_id(blob_id);
    if (unicharset.get_isalpha(class_id) || unicharset.get_isdigit(class_id)) {
      int top = blob->bounding_box().top();
      if (top >= INT_FEAT_RANGE)
        top = INT_FEAT_RANGE - 1;
      int min_bottom, max_bottom, min_top, max_top;
      unicharset.get_top_bottom(class_id, &min_bottom, &max_bottom,
                                &min_top, &max_top);
      if (max_top - min_top > kMaxCharTopRange)
        continue;
      bool bad =  top < min_top - x_ht_acceptance_tolerance ||
                  top > max_top + x_ht_acceptance_tolerance;
      if (bad)
        ++bad_blobs;
      if (debug_x_ht_level >= 1) {
        tprintf('Class %s is %s with top %d vs limits of %d->%d, +/-%d\n',
                unicharset.id_to_unichar(class_id),
                bad ? 'Misfit' : 'OK', top, min_top, max_top,
                static_cast<int>(x_ht_acceptance_tolerance));
      }
    }
  }
  return bad_blobs;
}
    
    
    {}  // namespace
    
      // Evaluate whether we think the results are believably better
  // than what we already had.
  bool good_prefix = !prefix || BelievableSuperscript(
      superscript_debug >= 1, *prefix,
      superscript_bettered_certainty * leading_certainty,
      retry_rebuild_leading, NULL);
  bool good_suffix = !suffix || BelievableSuperscript(
      superscript_debug >= 1, *suffix,
      superscript_bettered_certainty * trailing_certainty,
      NULL, retry_rebuild_trailing);
    
    
    {  // Stores all the source points in the order they were given and their
  // halfwidths, if any.
  GenericVector<PointWidth> pts_;
  // Stores the computed perpendicular distances of (some of) the pts_ from a
  // given vector (assuming it goes through the origin, making it a line).
  // Since the distances may be a subset of the input points, and get
  // re-ordered by the nth_item function, the original point is stored
  // along side the distance.
  GenericVector<DistPointPair> distances_;  // Distances of points.
  // The squared length of the vector used to compute distances_.
  double square_length_;
};
    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return NULL;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : NULL;
      inT64 new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != NULL && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
    // Returns the sqrt of the mean squared error measured perpendicular from the
// line through mean_point() in the direction dir.
//
// Derivation:
//   Lemma:  Let v and x_i (i=1..N) be a k-dimensional vectors (1xk matrices).
//     Let % be dot product and ' be transpose.  Note that:
//      Sum[i=1..N] (v % x_i)^2
//         = v * [x_1' x_2' ... x_N'] * [x_1' x_2' .. x_N']' * v'
//     If x_i have average 0 we have:
//       = v * (N * COVARIANCE_MATRIX(X)) * v'
//     Expanded for the case that k = 2, where we treat the dimensions
//     as x_i and y_i, this is:
//       = v * (N * [VAR(X), COV(X,Y); COV(X,Y) VAR(Y)]) * v'
//  Now, we are trying to calculate the mean squared error, where v is
//  perpendicular to our line of interest:
//    Mean squared error
//      = E [ (v % (x_i - x_avg))) ^2 ]
//      = Sum (v % (x_i - x_avg))^2 / N
//      = v * N * [VAR(X) COV(X,Y); COV(X,Y) VAR(Y)] / N * v'
//      = v * [VAR(X) COV(X,Y); COV(X,Y) VAR(Y)] * v'
//      = code below
double LLSQ::rms_orth(const FCOORD &dir) const {
  FCOORD v = !dir;
  v.normalise();
  return sqrt(v.x() * v.x() * x_variance() +
              2 * v.x() * v.y() * covariance() +
              v.y() * v.y() * y_variance());
}
    
    
    {  // Best available image.
  Pix* pix_;
  // True if the source image is white-on-black.
  bool inverse_;
  // Block the word came from. If not null, block->re_rotation() takes the
  // 'untransformed' coordinates even further back to the original image.
  // Used only on the first DENORM in a chain.
  const BLOCK* block_;
  // Rotation to apply between translation to the origin and scaling.
  const FCOORD* rotation_;
  // Previous transformation in a chain.
  const DENORM* predecessor_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding x-coord. Owned by the DENORM.
  GenericVector<float>* x_map_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding y-coord. Owned by the DENORM.
  GenericVector<float>* y_map_;
  // x-coordinate to be mapped to final_xshift_ in the result.
  float x_origin_;
  // y-coordinate to be mapped to final_yshift_ in the result.
  float y_origin_;
  // Scale factors for x and y coords. Applied to pre-rotation system.
  float x_scale_;
  float y_scale_;
  // Destination coords of the x_origin_ and y_origin_.
  float final_xshift_;
  float final_yshift_;
};
#endif

    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
        // swap data of i-th column and j-th column
    void swapcolumn(size_t i, size_t j)
    {
        assert(i < rows() && j < cols());
        for (size_t n = 0; n < rows(); n++)
        {
            std::swap(p[locate(n, i)], p[locate(n, j)]);
        }
    }
    
    
    {public:
    SectionFile(std::wstring fileName, FileOptions options = fileOptionsRead, size_t size = 0);
    virtual ~SectionFile();
    Section* FileSection()
    {
        return m_fileSection;
    }
    SectionHeader* GetSection(size_t filePosition, size_t& size);
    void ReleaseSection(SectionHeader* section);
};
    
        bool useParallelTrain = (m_mpi != nullptr);
    bool useDistributedMBReading = useParallelTrain && m_enableDistributedMBReading && dataReader->SupportsDistributedMBRead();
    size_t totalEpochSize = bnNodes.size() * mbSize * iters;
    
    using namespace std;
using namespace Microsoft::MSR;
using namespace Microsoft::MSR::CNTK;
    
        void getlattices(const std::wstring& key, std::shared_ptr<const latticepair>& L, size_t expectedframes) const
    {
        std::shared_ptr<latticepair> LP(new latticepair);
        denlattices.getlattice(key, LP->second, expectedframes); // this loads the lattice from disk, using the existing L.second object
        L = LP;
    }
    
     private:
  friend class SnapshotList;
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-NULL, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or NULL if no Table object underlies
  // the returned iterator.  The returned '*tableptr' object is owned by
  // the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options,
                        uint64_t file_number,
                        uint64_t file_size,
                        Table** tableptr = NULL);
    
    #ifndef STORAGE_LEVELDB_DB_WRITE_BATCH_INTERNAL_H_
#define STORAGE_LEVELDB_DB_WRITE_BATCH_INTERNAL_H_
    
    namespace leveldb {
    }
    
    
    {}  // anonymous namespace
    
    // Test for issue 200: when iterator switches direction from backward
// to forward, the current key can be yielded unexpectedly if a new
// mutation has been added just before the current key.
    
    
    {}  // namespace leveldb

    
    // A FilterBlockBuilder is used to construct all of the filters for a
// particular Table.  It generates a single string which is stored as
// a special block in the Table.
//
// The sequence of calls to FilterBlockBuilder must match the regexp:
//      (StartBlock AddKey*)* Finish
class FilterBlockBuilder {
 public:
  explicit FilterBlockBuilder(const FilterPolicy*);
    }
    
      // Check the crc of the type and the block contents
  const char* data = contents.data();    // Pointer to where Read put the data
  if (options.verify_checksums) {
    const uint32_t crc = crc32c::Unmask(DecodeFixed32(data + n + 1));
    const uint32_t actual = crc32c::Value(data, n + 1);
    if (actual != crc) {
      delete[] buf;
      s = Status::Corruption('block checksum mismatch');
      return s;
    }
  }
    
    
  // Iterator interface methods
  bool Valid() const        { return valid_; }
  Slice key() const         { assert(Valid()); return key_; }
  Slice value() const       { assert(Valid()); return iter_->value(); }
  // Methods below require iter() != NULL
  Status status() const     { assert(iter_); return iter_->status(); }
  void Next()               { assert(iter_); iter_->Next();        Update(); }
  void Prev()               { assert(iter_); iter_->Prev();        Update(); }
  void Seek(const Slice& k) { assert(iter_); iter_->Seek(k);       Update(); }
  void SeekToFirst()        { assert(iter_); iter_->SeekToFirst(); Update(); }
  void SeekToLast()         { assert(iter_); iter_->SeekToLast();  Update(); }
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    TEST(Param, VectorStreamRead) {
  std::vector<int> vals = {3, 2, 1};
  std::stringstream ss;
  std::vector<int> vals_in;
    }
    
        Size(double width, double height)
    : width(width)
    , height(height)
    {
    }
    
    template<typename... ARGS>
inline void log(int level, const char* tag, const char* msg, ARGS... args) noexcept {
  __android_log_print(level, tag, msg, args...);
}
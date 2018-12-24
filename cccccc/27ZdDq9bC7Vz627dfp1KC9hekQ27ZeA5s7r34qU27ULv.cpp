
        
        namespace tesseract {
double DotProductAVX(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductAVX can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
    
    {}  // namespace tesseract.
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    #ifndef TESSERACT_CCUTIL_BOXREAD_H_
#define TESSERACT_CCUTIL_BOXREAD_H_
    
    
    {  TBOX bbox_;
  int length_;
  GenericVector<TBOX> boxes_;
};
    
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
    
      inline std::vector<Elem>::const_iterator end() const {  // NOLINT
    return elem_of_each_node_.end();
  }
    
      void InitTreesToUpdate() {
    if (trees_to_update.size() == 0u) {
      for (auto & tree : trees) {
        trees_to_update.push_back(std::move(tree));
      }
      trees.clear();
      param.num_trees = 0;
      tree_info.clear();
    }
  }
    
      /*!
   * \brief add an element to a sketch
   * \param x The element added to the sketch
   * \param w The weight of the element.
   */
  inline void Push(DType x, RType w = 1) {
    if (w == static_cast<RType>(0)) return;
    if (inqueue.qtail == inqueue.queue.size()) {
      // jump from lazy one value to limit_size * 2
      if (inqueue.queue.size() == 1) {
        inqueue.queue.resize(limit_size * 2);
      } else {
        temp.Reserve(limit_size * 2);
        inqueue.MakeSummary(&temp);
        // cleanup queue
        inqueue.qtail = 0;
        this->PushTemp();
      }
    }
    inqueue.Push(x, w);
  }
    
    
// The DoNotOptimize(...) function can be used to prevent a value or
// expression from being optimized away by the compiler. This function is
// intended to add little to no overhead.
// See: https://youtu.be/nXaxk27zwlk?t=2441
#ifndef BENCHMARK_HAS_NO_INLINE_ASSEMBLY
template <class Tp>
inline BENCHMARK_ALWAYS_INLINE void DoNotOptimize(Tp const& value) {
  // Clang doesn't like the 'X' constraint on `value` and certain GCC versions
  // don't like the 'g' constraint. Attempt to placate them both.
#if defined(__clang__)
  asm volatile('' : : 'g'(value) : 'memory');
#else
  asm volatile('' : : 'i,r,m'(value) : 'memory');
#endif
}
// Force the compiler to flush pending writes to global memory. Acts as an
// effective read/write barrier
inline BENCHMARK_ALWAYS_INLINE void ClobberMemory() {
  asm volatile('' : : : 'memory');
}
#elif defined(_MSC_VER)
template <class Tp>
inline BENCHMARK_ALWAYS_INLINE void DoNotOptimize(Tp const& value) {
  internal::UseCharPointer(&reinterpret_cast<char const volatile&>(value));
  _ReadWriteBarrier();
}
    
      // The flag must start with '--'.
  const std::string flag_str = std::string('--') + std::string(flag);
  const size_t flag_len = flag_str.length();
  if (strncmp(str, flag_str.c_str(), flag_len) != 0) return nullptr;
    
    #include 'string_util.h'
#include 'timers.h'
#include 'check.h'
    
      // Compile a regular expression matcher from spec.  Returns true on success.
  //
  // On failure (and if error is not nullptr), error is populated with a human
  // readable error message if an error occurs.
  bool Init(const std::string& spec, std::string* error);
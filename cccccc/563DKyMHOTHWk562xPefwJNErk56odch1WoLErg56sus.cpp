
        
        
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    
    {};
    
      void OnEvent(int object_id,
               std::string event,
               const base::ListValue& arguments);
    
    
    {}
    
    
    {}  // namespace nw

    
    
    {  *y = CalculateMenuYPosition(&screen_rect, &menu_req, NULL, *y);
}
    
    // Add a new point. Takes a copy - the pt doesn't need to stay in scope.
void DetLineFit::Add(const ICOORD& pt) {
  pts_.push_back(PointWidth(pt, 0));
}
// Associates a half-width with the given point if a point overlaps the
// previous point by more than half the width, and its distance is further
// than the previous point, then the more distant point is ignored in the
// distance calculation. Useful for ignoring i dots and other diacritics.
void DetLineFit::Add(const ICOORD& pt, int halfwidth) {
  pts_.push_back(PointWidth(pt, halfwidth));
}
    
    // This class fits a line to a set of ICOORD points.
// There is no restriction on the direction of the line, as it
// uses a vector method, ie no concern over infinite gradients.
// The fitted line has the least upper quartile of squares of perpendicular
// distances of all source points from the line, subject to the constraint
// that the line is made from one of the pairs of [{p1,p2,p3},{pn-2, pn-1, pn}]
// i.e. the 9 combinations of one of the first 3 and last 3 points.
// A fundamental assumption of this algorithm is that one of the first 3 and
// one of the last 3 points are near the best line fit.
// The points must be Added in line order for the algorithm to work properly.
// No floating point calculations are needed* to make an accurate fit,
// and no random numbers are needed** so the algorithm is deterministic,
// architecture-stable, and compiler-stable as well as stable to minor
// changes in the input.
// *A single floating point division is used to compute each line's distance.
// This is unlikely to result in choice of a different line, but if it does,
// it would be easy to replace with a 64 bit integer calculation.
// **Random numbers are used in the nth_item function, but the worst
// non-determinism that can result is picking a different result among equals,
// and that wouldn't make any difference to the end-result distance, so the
// randomness does not affect the determinism of the algorithm. The random
// numbers are only there to guarantee average linear time.
// Fitting time is linear, but with a high constant, as it tries 9 different
// lines and computes the distance of all points each time.
// This class is aimed at replacing the LLSQ (linear least squares) and
// LMS (least median of squares) classes that are currently used for most
// of the line fitting in Tesseract.
class DetLineFit {
 public:
  DetLineFit();
  ~DetLineFit();
    }
    
      // Calculate y-shift
  int bln_yshift = 0, bottom_shift = 0, top_shift = 0;
  if (bottom < min_bottom - tolerance) {
    bottom_shift = bottom - min_bottom;
  } else if (bottom > max_bottom + tolerance) {
    bottom_shift = bottom - max_bottom;
  }
  if (top < min_top - tolerance) {
    top_shift = top - min_top;
  } else if (top > max_top + tolerance) {
    top_shift = top - max_top;
  }
  if ((top_shift >= 0 && bottom_shift > 0) ||
      (top_shift < 0 && bottom_shift < 0)) {
    bln_yshift = (top_shift + bottom_shift) / 2;
  }
  *yshift = bln_yshift * yscale;
    
      // Prints the content of the DENORM for debug purposes.
  void Print() const;
    
    FLOAT32 DistanceBetween(FPOINT A, FPOINT B);
    
      // Setup the map for the given indexed_features that have been indexed by
  // feature_map. After use, use Set(..., false) to reset to the initial state
  // as this is faster than calling Init for sparse spaces.
  void Set(const GenericVector<int>& indexed_features,
           int canonical_count, bool value);
    
    #endif

    
    static void RunSynchronousUnaryPingPong() {
  gpr_log(GPR_INFO, 'Running Synchronous Unary Ping Pong');
    }
    
    
    {
    {}  // namespace testing
}  // namespace grpc

    
      size_t PeekRead(void* dptr, size_t size) {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer < size) {
      buffer_ = buffer_.substr(buffer_ptr_, buffer_.length());
      buffer_ptr_ = 0;
      buffer_.resize(size);
      size_t nadd = strm_->Read(dmlc::BeginPtr(buffer_) + nbuffer, size - nbuffer);
      buffer_.resize(nbuffer + nadd);
      std::memcpy(dptr, dmlc::BeginPtr(buffer_), buffer_.length());
      return buffer_.length();
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      return size;
    }
  }
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
    namespace xgboost {
namespace data {
    }
    }
    
    
    {
    {void SparsePage::Writer::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(out_page->get() == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
        const jchar* GetStringCritical(jstring string, jboolean* isCopy)
    { return functions->GetStringCritical(this, string, isCopy); }
    
    #define FROM_HERE facebook::ProgramLocation(__FUNCTION__, __FILE__, __LINE__)
    
    
    {  T* operator->() const {
    return m_instance;
  }
private:
  T* m_instance;
};
    
    namespace detail {
template <typename T, typename jprim>
struct JPrimitive : JavaClass<T> {
  using typename JavaClass<T>::javaobject;
  using JavaClass<T>::javaClassStatic;
  static local_ref<javaobject> valueOf(jprim val) {
    static auto cls = javaClassStatic();
    static auto method =
      cls->template getStaticMethod<javaobject(jprim)>('valueOf');
    return method(cls, val);
  }
  jprim value() const {
    static auto method =
      javaClassStatic()->template getMethod<jprim()>(T::kValueMethod);
    return method(this->self());
  }
};
    }
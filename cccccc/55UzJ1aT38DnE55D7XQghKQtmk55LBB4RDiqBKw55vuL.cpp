
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  return Status::OK();
}
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    
    {    nullptr,            // nb_floor_divide
    PyBfloat16_Divide,  // nb_true_divide
    nullptr,            // nb_inplace_floor_divide
    nullptr,            // nb_inplace_true_divide
    nullptr,            // nb_index
};
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_PY_FUNC_H_

    
    #include 'tensorflow/stream_executor/lib/statusor.h'
#include 'tensorflow/stream_executor/platform/port.h'
    
    #include 'tensorflow/stream_executor/cuda/cuda_event.h'
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n) {
  int max_offset = n - 2;
  int offset = 0;
  // Accumulate a set of 2 sums in sum, by loading pairs of 2 values from u and
  // v, and multiplying them together in parallel.
  __m128d sum = _mm_setzero_pd();
  if (offset <= max_offset) {
    offset = 2;
    // Aligned load is reputedly faster but requires 16 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 15) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 15) == 0) {
      // Use aligned load.
      sum = _mm_load_pd(u);
      __m128d floats2 = _mm_load_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_load_pd(u + offset);
        floats2 = _mm_load_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    } else {
      // Use unaligned load.
      sum = _mm_loadu_pd(u);
      __m128d floats2 = _mm_loadu_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_loadu_pd(u + offset);
        floats2 = _mm_loadu_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    }
  }
  // Add the 2 sums in sum horizontally.
  sum = _mm_hadd_pd(sum, sum);
  // Extract the low result.
  double result = _mm_cvtsd_f64(sum);
  // Add on any left-over products.
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    namespace tesseract {
    }
    
      // For a given seed partition, we search the part_grid_ and see if there is
  // any partition can be merged with it. It returns true if the seed has been
  // expanded.
  bool ExpandSeed(ColPartition* seed);
    
    class OrientationDetector {
 public:
  OrientationDetector(const GenericVector<int>* allowed_scripts,
                      OSResults* results);
  bool detect_blob(BLOB_CHOICE_LIST* scores);
  int get_orientation();
 private:
  OSResults* osr_;
  const GenericVector<int>* allowed_scripts_;
};
    
    
    {  switch (level) {
    case RIL_BLOCK:
      it_->forward_block();
      break;
    case RIL_PARA:
      it_->forward_paragraph();
      break;
    case RIL_TEXTLINE:
      for (it_->forward_with_empties(); it_->row() == it_->prev_row();
           it_->forward_with_empties());
      break;
    case RIL_WORD:
      it_->forward_with_empties();
      break;
    case RIL_SYMBOL:
      if (cblob_it_ != nullptr)
        cblob_it_->forward();
      ++blob_index_;
      if (blob_index_ >= word_length_)
        it_->forward_with_empties();
      else
        return true;
      break;
  }
  BeginWord(0);
  return it_->block() != nullptr;
}
    
      // Event listener. Waits for SVET_POPUP events and processes them.
  void Notify(const SVEvent* sve);
    
      /// SetImage makes a copy of all the image data, so it may be deleted
  /// immediately after this call.
  /// Greyscale of 8 and color of 24 or 32 bits per pixel may be given.
  /// Palette color images will not work properly and must be converted to
  /// 24 bit.
  /// Binary images of 1 bit per pixel may also be given but they must be
  /// byte packed with the MSB of the first byte being the first pixel, and a
  /// one pixel is WHITE. For binary images set bytes_per_pixel=0.
  void SetImage(const unsigned char* imagedata, int width, int height,
                int bytes_per_pixel, int bytes_per_line);
    
    // This and other putatively are the same, so call the (permanent) callback
// for each blob index where the bounding boxes match.
// The callback is deleted on completion.
void BoxWord::ProcessMatchedBlobs(const TWERD& other,
                                  TessCallback1<int>* cb) const {
  for (int i = 0; i < length_ && i < other.NumBlobs(); ++i) {
    TBOX blob_box = other.blobs[i]->bounding_box();
    if (blob_box == boxes_[i])
      cb->Run(i);
  }
  delete cb;
}
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    VMTOC& VMTOC::getInstance() {
  static VMTOC instance;
  return instance;
}
    
    #endif

    
    PlainDirectory::PlainDirectory(int fd) {
  m_dir = ::fdopendir(fd);
}
    
    #ifndef HPHP_FILE_STREAM_WRAPPER_H
#define HPHP_FILE_STREAM_WRAPPER_H
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    #include 'modules/drivers/radar/conti_radar/protocol/radar_state_201.h'
    
      header->set_version(version);
  header->set_date(date);
  header->mutable_projection()->set_proj(to_coordinate);
  header->set_district(database_name);
  header->set_rev_major(rev_major);
  header->set_rev_minor(rev_minor);
  header->set_left(west);
  header->set_right(east);
  header->set_top(north);
  header->set_bottom(south);
  header->set_vendor(vendor);
    
    #include 'modules/common/util/file.h'
#include 'modules/common/util/string_util.h'
#include 'modules/map/hdmap/hdmap.h'
#include 'modules/map/hdmap/hdmap_util.h'
#include 'modules/routing/proto/routing.pb.h'
    
    std::string STPoint::DebugString() const {
  return StringPrintf('{ \'s\' : %.6f, \'t\' : %.6f }', s(), t());
}
    
    TEST(TestPiecewiseLinearConstraint, add_derivative_boundary) {
  PiecewiseLinearConstraint constraint(10, 0.1);
  std::vector<uint32_t> index_list;
  std::vector<double> lower_bound;
  std::vector<double> upper_bound;
  for (uint32_t i = 0; i < 10; ++i) {
    index_list.push_back(i);
    lower_bound.push_back(1.0);
    upper_bound.push_back(100.0);
  }
    }

        
          void compute();
    
      const llvm::UTF8 *SourceStart =
    reinterpret_cast<const llvm::UTF8 *>(S.data());
    
      ArrayRef<const MarkupASTNode *> getChildren() const {
    return {getTrailingObjects<MarkupASTNode *>(), NumChildren};
  }
    
    // On OS X and iOS, swift_once_t matches dispatch_once_t.
typedef long swift_once_t;
    
    #include 'Private.h'
#include 'swift/Runtime/Once.h'
#include 'swift/Runtime/Debug.h'
#include <type_traits>
    
     protected:
  ~NwCurrentWindowInternalShowDevToolsInternalFunction() override {};
    
    bool NwCurrentWindowInternalReloadIgnoringCacheFunction::RunAsync() {
  content::WebContents* web_contents = GetSenderWebContents();
  web_contents->GetController().Reload(content::ReloadType::BYPASSING_CACHE, false);
  SendResponse(true);
  return true;
}
    
      static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    bool NwObjCallObjectMethodAsyncFunction::RunAsync() {
  EXTENSION_FUNCTION_VALIDATE(args_);
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    
    {    return S_OK;
}
    
    #include 'precomp.hpp'
#include 'opencv2/calib3d/calib3d_c.h'
    
            std::vector<std::vector<Point> > white_contours, black_contours;
        std::vector<Vec4i> white_hierarchy, black_hierarchy;
        findContours(black_comp, black_contours, black_hierarchy, RETR_LIST, CHAIN_APPROX_SIMPLE);
        findContours(white_comp, white_contours, white_hierarchy, RETR_LIST, CHAIN_APPROX_SIMPLE);
    
        int pointsCount = cvtest::randInt(rng) % maxPointsCount;
    usedPointsCount = pointsCount == 0 ? 0 : cvtest::randInt(rng) % pointsCount;
    
    #endif /* OPENCV_CUDA_EMULATION_HPP_ */

    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
    #undef cv_hal_gemm32f
#define cv_hal_gemm32f lapack_gemm32f
#undef cv_hal_gemm64f
#define cv_hal_gemm64f lapack_gemm64f
#undef cv_hal_gemm32fc
#define cv_hal_gemm32fc lapack_gemm32fc
#undef cv_hal_gemm64fc
#define cv_hal_gemm64fc lapack_gemm64fc
    
      // Returns true iff the test passed (i.e. no test part failed).
  bool Passed() const { return !Failed(); }
    
    // This overload is used when k >= 1.
template <typename T, typename U, size_t N>
inline void CopyArray(const T(&from)[N], U(*to)[N]) {
  internal::CopyArray(from, N, *to);
}
    
    class IntSimdMatrixTest : public ::testing::Test {
 protected:
  // Makes a random weights matrix of the given size.
  GENERIC_2D_ARRAY<int8_t> InitRandom(int no, int ni) {
    GENERIC_2D_ARRAY<int8_t> a(no, ni, 0);
    for (int i = 0; i < no; ++i) {
      for (int j = 0; j < ni; ++j) {
        a(i, j) = static_cast<int8_t>(random_.SignedRand(INT8_MAX));
      }
    }
    return a;
  }
  // Makes a random input vector of the given size, with rounding up.
  std::vector<int8_t> RandomVector(int size, const IntSimdMatrix& matrix) {
    int rounded_size = matrix.RoundInputs(size);
    std::vector<int8_t> v(rounded_size, 0);
    for (int i = 0; i < size; ++i) {
      v[i] = static_cast<int8_t>(random_.SignedRand(INT8_MAX));
    }
    return v;
  }
  // Makes a random scales vector of the given size.
  GenericVector<double> RandomScales(int size) {
    GenericVector<double> v(size, 0.0);
    for (int i = 0; i < size; ++i) {
      v[i] = 1.0 + random_.SignedRand(1.0);
    }
    return v;
  }
  // Tests a range of sizes and compares the results against the base_ version.
  void ExpectEqualResults(IntSimdMatrix* matrix) {
    for (int num_out = 1; num_out < 130; ++num_out) {
      for (int num_in = 1; num_in < 130; ++num_in) {
        GENERIC_2D_ARRAY<int8_t> w = InitRandom(num_out, num_in + 1);
        matrix->Init(w);
        std::vector<int8_t> u = RandomVector(num_in, *matrix);
        GenericVector<double> scales = RandomScales(num_out);
        std::vector<double> base_result(num_out);
        base_.MatrixDotVector(w, scales, u.data(), base_result.data());
        std::vector<double> test_result(num_out);
        matrix->MatrixDotVector(w, scales, u.data(), test_result.data());
        for (int i = 0; i < num_out; ++i)
          EXPECT_FLOAT_EQ(base_result[i], test_result[i]) << 'i=' << i;
      }
    }
  }
    }
    
    // Computes matrix.vector v = Wu.
// u is of size W.dim2() - 1 and the output v is of size W.dim1().
// u is imagined to have an extra element at the end with value 1, to
// implement the bias, but it doesn't actually have it.
void IntSimdMatrix::MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                                    const GenericVector<double>& scales,
                                    const int8_t* u, double* v) const {
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  if (partial_funcs_.empty()) {
    // Base implementation.
    for (int i = 0; i < num_out; ++i) {
      const int8_t* wi = w[i];
      int total = 0;
      for (int j = 0; j < num_in; ++j) total += wi[j] * u[j];
      // Add in the bias and correct for integer values.
      v[i] = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * scales[i];
    }
  } else {
    const int8_t* w_data = shaped_w_.data();
    const double* scales_data = &scales[0];
    // Each call to a partial_func_ produces group_size outputs, except the
    // last one, which can produce less.
    int group_size = num_outputs_per_register_ * max_output_registers_;
    int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
    int rounded_num_out = RoundOutputs(num_out);
    int output = 0;
    for (auto fn : partial_funcs_) {
      // The amount of w_data consumed by each call to fn.
      int w_step = (rounded_num_in + 1) * group_size;
      // Run with this group size, until it would produce too much output, then
      // switch to a smaller size.
      for (; output + group_size <= rounded_num_out; output += group_size) {
        (*fn)(w_data, scales_data, u, rounded_num_in, num_out - output, v);
        w_data += w_step;
        scales_data += group_size;
        v += group_size;
      }
      group_size /= 2;
    }
  }
}
    
      /**
   * Returns the polygon outline of the current block. The returned Pta must
   * be ptaDestroy-ed after use. Note that the returned Pta lists the vertices
   * of the polygon, and the last edge is the line segment between the last
   * point and the first point. nullptr will be returned if the iterator is
   * at the end of the document or layout analysis was not used.
   */
  Pta* BlockPolygon() const;
    
    bool ResultIterator::Next(PageIteratorLevel level) {
  if (it_->block() == nullptr) return false; // already at end!
  switch (level) {
    case RIL_BLOCK:  // explicit fall-through
    case RIL_PARA:   // explicit fall-through
    case RIL_TEXTLINE:
      if (!PageIterator::Next(level)) return false;
      if (IsWithinFirstTextlineOfParagraph()) {
        // if we've advanced to a new paragraph,
        // recalculate current_paragraph_is_ltr_
        current_paragraph_is_ltr_ = CurrentParagraphIsLtr();
      }
      in_minor_direction_ = false;
      MoveToLogicalStartOfTextline();
      return it_->block() != nullptr;
    case RIL_SYMBOL:
    {
      GenericVector<int> blob_order;
      CalculateBlobOrder(&blob_order);
      int next_blob = 0;
      while (next_blob < blob_order.size() &&
             blob_index_ != blob_order[next_blob])
        next_blob++;
      next_blob++;
      if (next_blob < blob_order.size()) {
        // we're in the same word; simply advance one blob.
        BeginWord(blob_order[next_blob]);
        at_beginning_of_minor_run_ = false;
        return true;
      }
      level = RIL_WORD;  // we've fallen through to the next word.
    }
    case RIL_WORD:  // explicit fall-through.
    {
      if (it_->word() == nullptr) return Next(RIL_BLOCK);
      GenericVectorEqEq<int> word_indices;
      int this_word_index = LTRWordIndex();
      CalculateTextlineOrder(current_paragraph_is_ltr_,
                             *this,
                             &word_indices);
      int final_real_index = word_indices.size() - 1;
      while (final_real_index > 0 && word_indices[final_real_index] < 0)
        final_real_index--;
      for (int i = 0; i < final_real_index; i++) {
        if (word_indices[i] == this_word_index) {
          int j = i + 1;
          for (; j < final_real_index && word_indices[j] < 0; j++) {
            if (word_indices[j] == kMinorRunStart) in_minor_direction_ = true;
            if (word_indices[j] == kMinorRunEnd) in_minor_direction_ = false;
          }
          at_beginning_of_minor_run_ = (word_indices[j - 1] == kMinorRunStart);
          // awesome, we move to word_indices[j]
          if (BidiDebug(3)) {
            tprintf('Next(RIL_WORD): %d -> %d\n',
                    this_word_index, word_indices[j]);
          }
          PageIterator::RestartRow();
          for (int k = 0; k < word_indices[j]; k++) {
            PageIterator::Next(RIL_WORD);
          }
          MoveToLogicalStartOfWord();
          return true;
        }
      }
      if (BidiDebug(3)) {
        tprintf('Next(RIL_WORD): %d -> EOL\n', this_word_index);
      }
      // we're going off the end of the text line.
      return Next(RIL_TEXTLINE);
    }
  }
  ASSERT_HOST(false);  // shouldn't happen.
  return false;
}
    
      //// ambigsrecog.cpp /////////////////////////////////////////////////////////
  FILE *init_recog_training(const STRING &fname);
  void recog_training_segmented(const STRING &fname,
                                PAGE_RES *page_res,
                                volatile ETEXT_DESC *monitor,
                                FILE *output_file);
  void ambigs_classify_and_output(const char *label,
                                  PAGE_RES_IT* pr_it,
                                  FILE *output_file);
    
        // Adds sub-pixel resolution EdgeOffsets for the outline if the supplied
    // pix is 8-bit. Does nothing otherwise.
    void ComputeEdgeOffsets(int threshold, Pix* pix);
    // Adds sub-pixel resolution EdgeOffsets for the outline using only
    // a binary image source.
    void ComputeBinaryOffsets();
    
      /* Invoked when initial response headers are received.
   * Consumer must call bidirectional_stream_read() to start reading.
   * Consumer may call bidirectional_stream_write() to start writing or
   * close the stream. Contents of |headers| is valid for duration of the call.
   */
  void (*on_response_headers_received)(
      bidirectional_stream* stream,
      const bidirectional_stream_header_array* headers,
      const char* negotiated_protocol);
    
    int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);
    }
    
      bool Match(const std::string& prefix) {
    bool eq = db_.substr(current_, prefix.size()) == prefix;
    current_ += prefix.size();
    return eq;
  }
    
    
    {}  // namespace routeguide
    
    #endif

    
    
    {  return r;
}

    
    /*
 * This implements a Metrics server defined in
 * src/proto/grpc/testing/metrics.proto. Any
 * test service can use this to export Metrics (TODO (sreek): Only Gauges for
 * now).
 *
 * Example:
 *    MetricsServiceImpl metricsImpl;
 *    ..
 *    // Create QpsGauge(s). Note: QpsGauges can be created even after calling
 *    // 'StartServer'.
 *    QpsGauge qps_gauge1 = metricsImpl.CreateQpsGauge('foo', is_present);
 *    // qps_gauge1 can now be used anywhere in the program by first making a
 *    // one-time call qps_gauge1.Reset() and then calling qps_gauge1.Incr()
 *    // every time to increment a query counter
 *
 *    ...
 *    // Create the metrics server
 *    std::unique_ptr<grpc::Server> server = metricsImpl.StartServer(port);
 *    server->Wait(); // Note: This is blocking.
 */
namespace grpc {
namespace testing {
    }
    }
    
    void Erode(int w, int h, std::vector<bool>* image) {
  std::vector<bool> temp = *image;
  for (int y = 1; y + 1 < h; y++) {
    for (int x = 1; x + 1 < w; x++) {
      size_t index = y * w + x;
      if (!(temp[index] && temp[index - 1] && temp[index + 1]
          && temp[index - w] && temp[index + w])) {
        (*image)[index] = 0;
      }
    }
  }
}
    
    // kDCTMatrix[8*u+x] = 0.5*alpha(u)*cos((2*x+1)*u*M_PI/16),
// where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
static const double kDCTMatrix[64] = {
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.4903926402,  0.4157348062,  0.2777851165,  0.0975451610,
 -0.0975451610, -0.2777851165, -0.4157348062, -0.4903926402,
  0.4619397663,  0.1913417162, -0.1913417162, -0.4619397663,
 -0.4619397663, -0.1913417162,  0.1913417162,  0.4619397663,
  0.4157348062, -0.0975451610, -0.4903926402, -0.2777851165,
  0.2777851165,  0.4903926402,  0.0975451610, -0.4157348062,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.2777851165, -0.4903926402,  0.0975451610,  0.4157348062,
 -0.4157348062, -0.0975451610,  0.4903926402, -0.2777851165,
  0.1913417162, -0.4619397663,  0.4619397663, -0.1913417162,
 -0.1913417162,  0.4619397663, -0.4619397663,  0.1913417162,
  0.0975451610, -0.2777851165,  0.4157348062, -0.4903926402,
  0.4903926402, -0.4157348062,  0.2777851165, -0.0975451610,
};
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    
    {
    {
    {      // Add back the last sentinel node.
      tree[j_end + 1] = sentinel;
    }
    if (SetDepth(static_cast<int>(2 * n - 1), &tree[0], depth, tree_limit)) {
      /* We need to pack the Huffman tree in tree_limit bits. If this was not
         successful, add fake entities to the lowest values and retry. */
      break;
    }
  }
}
    
    
    {}  // namespace guetzli
    
    namespace guetzli {
    }
    
    #include 'guetzli/output_image.h'
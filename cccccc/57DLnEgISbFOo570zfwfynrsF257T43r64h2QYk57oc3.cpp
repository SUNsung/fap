
        
        void read_image(std::ifstream* image_file, std::ifstream* label_file,
        uint32_t index, uint32_t rows, uint32_t cols,
        char* pixels, char* label) {
  image_file->seekg(index * rows * cols + 16);
  image_file->read(pixels, rows * cols);
  label_file->seekg(index + 8);
  label_file->read(label, 1);
}
    
      /**
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
    /// @brief Fills a Blob with Gaussian-distributed values @f$ x = a @f$.
template <typename Dtype>
class GaussianFiller : public Filler<Dtype> {
 public:
  explicit GaussianFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    CHECK(blob->count());
    caffe_rng_gaussian<Dtype>(blob->count(), Dtype(this->filler_param_.mean()),
        Dtype(this->filler_param_.std()), blob->mutable_cpu_data());
    int sparse = this->filler_param_.sparse();
    CHECK_GE(sparse, -1);
    if (sparse >= 0) {
      // Sparse initialization is implemented for 'weight' blobs; i.e. matrices.
      // These have num == channels == 1; width is number of inputs; height is
      // number of outputs.  The 'sparse' variable specifies the mean number
      // of non-zero input weights for a given output.
      CHECK_GE(blob->num_axes(), 1);
      const int num_outputs = blob->shape(0);
      Dtype non_zero_probability = Dtype(sparse) / Dtype(num_outputs);
      rand_vec_.reset(new SyncedMemory(blob->count() * sizeof(int)));
      int* mask = reinterpret_cast<int*>(rand_vec_->mutable_cpu_data());
      caffe_rng_bernoulli(blob->count(), non_zero_probability, mask);
      for (int i = 0; i < blob->count(); ++i) {
        data[i] *= mask[i];
      }
    }
  }
    }
    
      /** Will not return until the internal thread has exited. */
  void StopInternalThread();
    
    /**
 * @brief Computes the classification accuracy for a one-of-many
 *        classification task.
 */
template <typename Dtype>
class AccuracyLayer : public Layer<Dtype> {
 public:
  /**
   * @param param provides AccuracyParameter accuracy_param,
   *     with AccuracyLayer options:
   *   - top_k (\b optional, default 1).
   *     Sets the maximum rank @f$ k @f$ at which a prediction is considered
   *     correct.  For example, if @f$ k = 5 @f$, a prediction is counted
   *     correct if the correct label is among the top 5 predicted labels.
   */
  explicit AccuracyLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {}  // namespace caffe
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/sigmoid_layer.hpp'
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
    int orientation_and_script_detection(STRING& filename,
                                     OSResults*,
                                     tesseract::Tesseract*);
    
    
    {}  // namespace tesseract.

    
    #include 'rect.h'    // for TBOX
#include 'strngs.h'  // for STRING
    
      // Try to adjust the blamer bundle.
  if (orig_bb != nullptr) {
    // TODO(rays) Looks like a leak to me.
    // orig_bb should take, rather than copy.
    word->blamer_bundle = new BlamerBundle();
    word2->blamer_bundle = new BlamerBundle();
    orig_bb->SplitBundle(chopped->blobs.back()->bounding_box().right(),
                         word2->chopped_word->blobs[0]->bounding_box().left(),
                         wordrec_debug_blamer,
                         word->blamer_bundle, word2->blamer_bundle);
  }
    
    
    { private:
  // The collection of images to put in the PDF.
  Pixa* pixa_;
  // The fonts used to draw text captions.
  L_Bmf* fonts_;
};
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
    
    { private:
  double total_weight;         // no of elements or sum of weights.
  double sigx;                 // sum of x
  double sigy;                 // sum of y
  double sigxx;                // sum x squared
  double sigxy;                // sum of xy
  double sigyy;                // sum y squared
};
    
    
    {}  // namespace testing
    
    template <typename T>
internal::ParamGenerator<T> Range(T start, T end) {
  return Range(start, end, 1);
}
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_SPI_H_
#define GTEST_INCLUDE_GTEST_GTEST_SPI_H_
    
    // ADD_FAILURE unconditionally adds a failure to the current test.
// SUCCEED generates a success - it doesn't automatically make the
// current test successful, as a test is only successful when it has
// no failure.
//
// EXPECT_* verifies that a certain condition is satisfied.  If not,
// it behaves like ADD_FAILURE.  In particular:
//
//   EXPECT_TRUE  verifies that a Boolean condition is true.
//   EXPECT_FALSE verifies that a Boolean condition is false.
//
// FAIL and ASSERT_* are similar to ADD_FAILURE and EXPECT_*, except
// that they will also abort the current function on failure.  People
// usually want the fail-fast behavior of FAIL and ASSERT_*, but those
// writing data-driven tests often find themselves using ADD_FAILURE
// and EXPECT_* more.
    
    // In describing the results of death tests, these terms are used with
// the corresponding definitions:
//
// exit status:  The integer exit information in the format specified
//               by wait(2)
// exit code:    The integer code passed to exit(3), _exit(2), or
//               returned from main()
class GTEST_API_ DeathTest {
 public:
  // Create returns false if there was an error determining the
  // appropriate action to take for the current death test; for example,
  // if the gtest_death_test_style flag is set to an invalid value.
  // The LastMessage method will return a more detailed message in that
  // case.  Otherwise, the DeathTest pointer pointed to by the 'test'
  // argument is set.  If the death test should be skipped, the pointer
  // is set to NULL; otherwise, it is set to the address of a new concrete
  // DeathTest object that controls the execution of the current test.
  static bool Create(const char* statement, const RE* regex,
                     const char* file, int line, DeathTest** test);
  DeathTest();
  virtual ~DeathTest() { }
    }
    
    template <GTEST_5_TYPENAMES_(T)>
inline GTEST_5_TUPLE_(T) make_tuple(const T0& f0, const T1& f1, const T2& f2,
    const T3& f3, const T4& f4) {
  return GTEST_5_TUPLE_(T)(f0, f1, f2, f3, f4);
}
    
    // The template 'selector' struct TemplateSel<Tmpl> is used to
// represent Tmpl, which must be a class template with one type
// parameter, as a type.  TemplateSel<Tmpl>::Bind<T>::type is defined
// as the type Tmpl<T>.  This allows us to actually instantiate the
// template 'selected' by TemplateSel<Tmpl>.
//
// This trick is necessary for simulating typedef for class templates,
// which C++ doesn't support directly.
template <GTEST_TEMPLATE_ Tmpl>
struct TemplateSel {
  template <typename T>
  struct Bind {
    typedef Tmpl<T> type;
  };
};
    
    // Type lists of length 1, 2, 3, and so on.
    
    // Tests positive input.
TEST(IsPrimeTest, Positive) {
  EXPECT_FALSE(IsPrime(4));
  EXPECT_TRUE(IsPrime(5));
  EXPECT_FALSE(IsPrime(6));
  EXPECT_TRUE(IsPrime(23));
}
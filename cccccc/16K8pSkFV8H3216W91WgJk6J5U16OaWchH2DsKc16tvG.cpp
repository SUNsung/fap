
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    
    {}  // namespace nw

    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    using extensions::ContextMenuMatcher;
using extensions::ExtensionsAPIClient;
using extensions::MenuItem;
using guest_view::GuestViewManager;
using guest_view::TestGuestViewManager;
using guest_view::TestGuestViewManagerFactory;
using prerender::PrerenderLinkManager;
using prerender::PrerenderLinkManagerFactory;
using task_manager::browsertest_util::MatchAboutBlankTab;
using task_manager::browsertest_util::MatchAnyApp;
using task_manager::browsertest_util::MatchAnyBackground;
using task_manager::browsertest_util::MatchAnyTab;
using task_manager::browsertest_util::MatchAnyWebView;
using task_manager::browsertest_util::MatchApp;
using task_manager::browsertest_util::MatchBackground;
using task_manager::browsertest_util::MatchWebView;
using task_manager::browsertest_util::WaitForTaskManagerRows;
using ui::MenuModel;
using content::BrowserThread;
using content::WebContents;
    
    namespace nwapi {
    }
    
    
    {  // __nwObjectsRegistry.handleEvent(object_id, event, arguments);
  v8::Handle<v8::Value> val =
    context->Global()->Get(v8_str('__nwObjectsRegistry'));
  if (val->IsNull() || val->IsUndefined())
    return; // need to find out why it's undefined here in debugger
  v8::Handle<v8::Object> objects_registry = val->ToObject();
  DVLOG(1) << 'handleEvent(object_id=' << object_id << ', event=\'' << event << '\')';
  node::MakeCallback(isolate, objects_registry, 'handleEvent', 3, argv);
}
    
    
    {}  // namespace nwapi
    
      if (type == 'App') {
    content::Shell* shell =
        content::Shell::FromRenderViewHost(render_view_host());
    nwapi::App::Call(shell, method, arguments, result, this);
    return;
  } else if (type == 'Screen') {
    nwapi::Screen::Call(this, method, arguments, result);
    return;
  }
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
       bool IsItemForCommandIdDynamic(int command_id) const override;
   base::string16 GetLabelForCommandId(int command_id) const override;
   bool GetIconForCommandId(int command_id,
                                   gfx::Image* icon) const override;
    
    
    {}
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
    #endif  // CAFFE_DATA_TRANSFORMER_HPP_

    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include <vector>
    
    namespace caffe {
    }
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_1 @f$
   *   -# ...
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_K @f$
   *   -# @f$ (N \times 1 \times 1 \times 1) @f$
   *      the selector blob
   * @param top output Blob vector (length 1+)
   *   -# @f$ (S \times C \times H \times W) @f$ ()
   *        the filtered output @f$ x_1 @f$
   *        where S is the number of items
   *        that haven't been filtered
   *      @f$ (S \times C \times H \times W) @f$
   *        the filtered output @f$ x_K @f$
   *        where S is the number of items
   *        that haven't been filtered
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
    const vector<Blob<Dtype>*>& top);
    
    /**
 * @name tess_acceptable_word
 *
 * @return true if the word is regarded as 'good enough'.
 * @param word_choice after context
 * @param raw_choice before context
 */
bool Tesseract::tess_acceptable_word(WERD_RES* word) {
  return getDict().AcceptableResult(word);
}
    
    // Backwards compatible constrained fit with a supplied gradient.
// Deprecated. Use ConstrainedFit(const FCOORD& direction) where possible
// to avoid potential difficulties with infinite gradients.
double DetLineFit::ConstrainedFit(double m, float* c) {
  // Do something sensible with no points.
  if (pts_.empty()) {
    *c = 0.0f;
    return 0.0;
  }
  double cos = 1.0 / sqrt(1.0 + m * m);
  FCOORD direction(cos, m * cos);
  ICOORD line_pt;
  double error = ConstrainedFit(direction, -MAX_FLOAT32, MAX_FLOAT32, false,
                                &line_pt);
  *c = line_pt.y() - line_pt.x() * m;
  return error;
}
    
      // Backwards compatible constrained fit with a supplied gradient.
  // Deprecated. Use ConstrainedFit(const FCOORD& direction) where possible
  // to avoid potential difficulties with infinite gradients.
  double ConstrainedFit(double m, float* c);
    
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
    
    // Transforms the given coords forward to normalized space using the
// full transformation sequence defined by the block rotation, the
// predecessors, deepest first, and finally this. If first_norm is not NULL,
// then the first and deepest transformation used is first_norm, ending
// with this, and the block rotation will not be applied.
void DENORM::NormTransform(const DENORM* first_norm, const TPOINT& pt,
                           TPOINT* transformed) const {
  FCOORD src_pt(pt.x, pt.y);
  FCOORD float_result;
  NormTransform(first_norm, src_pt, &float_result);
  transformed->x = IntCastRounded(float_result.x());
  transformed->y = IntCastRounded(float_result.y());
}
void DENORM::NormTransform(const DENORM* first_norm, const FCOORD& pt,
                           FCOORD* transformed) const {
  FCOORD src_pt(pt);
  if (first_norm != this) {
    if (predecessor_ != NULL) {
      predecessor_->NormTransform(first_norm, pt, &src_pt);
    } else if (block_ != NULL) {
      FCOORD fwd_rotation(block_->re_rotation().x(),
                          -block_->re_rotation().y());
      src_pt.rotate(fwd_rotation);
    }
  }
  LocalNormTransform(src_pt, transformed);
}
    
      // Return whether this model is likely to agree with the other model on most
  // paragraphs they are marked.
  bool Comparable(const ParagraphModel &other) const;
    
    
    {
    {    bottom96 = cubevar * cubevar;
    bottom96 -= x_variance *
        (sigxxxx * n - static_cast<long double>(sigxx) * sigxx);
  }
  if (bottom96 >= kMinVariance * n * n * n * n) {
    // Denominators looking good
    a = top96 / bottom96;
    top96 = covariance - cubevar * a;
    b = top96 / x_variance;
  } else {
    // Forget a, and concentrate on b.
    a = 0.0;
    b = covariance / x_variance;
  }
  c = (sigy - a * sigxx - b * sigx) / n;
}

    
    // Vector of IntKDPair.
class KDVector : public GenericVector<IntKDPair> {
  // TODO(rays) Add some code to manipulate a KDVector. For now there
  // is nothing and this class is effectively a specialization typedef.
};
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'strngs.h'
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'host.h'
#include <stdio.h>
#include <math.h>
    
    #include <folly/portability/SysTime.h>
    
      mpz_clear(gmpReturn);
  mpz_clear(gmpData);
    
      // We rebuild a variant type here because using boosts fails on opensource
  // builds because it at some point requires a copy construction.
  // This vector has one entry per prologue/translation stored in the two
  // vectors above, and it encodes the order in which they should be published.
  std::vector<Kind> order;
    
      void zero() {
    memset(m_destBase, 0, m_frontier - m_base);
    clear();
  }
    
    using std::vector;
    
    
static uint64_t RotateRight(uint64_t value,
                            unsigned int rotate,
                            unsigned int width) {
  assert(width <= 64);
  rotate &= 63;
  return ((value & ((1UL << rotate) - 1UL)) << (width - rotate)) |
         (value >> rotate);
}
    
    
    {}
    
    using namespace std;
using namespace thd;
using namespace thd::rpc;
    
      // return a new scalar that is guarenteed to be not backed by a tensor.
  Scalar local() const {
    if (Tag::HAS_t != tag) {
      return *this;
    }
    return t.pImpl->localScalar();
  }
    
    int64_t size(const Tensor& self, int64_t dim) {
  // false is passed to maybe_wrap_dim so behavior is identical to array access (but with wrapping)
  dim = maybe_wrap_dim(dim, self.dim(), false);
  return self.sizes()[dim];
}
    
    #if AT_CUDA_ENABLED()
    
    static uint64_t createSeed(std::random_device& rd)
{
  // limit to 53 bits to ensure unique representation in double
  uint64_t seed = (((uint64_t)rd()) << 32) + rd();
  return seed & 0x1FFFFFFFFFFFFF;
}
    
    #include 'python_numbers.h'
#include 'torch/csrc/Exceptions.h'
    
    using namespace at;
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHCudaCharTensor(THCudaCharTensor *tensor) {
  return at::getType(at::Backend::CUDA, at::ScalarType::Char).unsafeTensorFromTH((void*)tensor, true);
}
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    #if XGBOOST_CUSTOMIZE_GLOBAL_PRNG
/*!
 * \brief An customized random engine, used to be plugged in PRNG from other systems.
 *  The implementation of this library is not provided by xgboost core library.
 *  Instead the other library can implement this class, which will be used as GlobalRandomEngine
 *  If XGBOOST_RANDOM_CUSTOMIZE = 1, by default this is switched off.
 */
class CustomGlobalRandomEngine {
 public:
  /*! \brief The result type */
  typedef size_t result_type;
  /*! \brief The minimum of random numbers generated */
  inline static constexpr result_type min() {
    return 0;
  }
  /*! \brief The maximum random numbers generated */
  inline static constexpr result_type max() {
    return std::numeric_limits<size_t>::max();
  }
  /*!
   * \brief seed function, to be implemented
   * \param val The value of the seed.
   */
  void seed(result_type val);
  /*!
   * \return next random number.
   */
  result_type operator()();
};
    
    
    {  vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '(3,2,1';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
}
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    CHECK(page.offset.size() != 0 && page.offset[0] == 0);
    CHECK_EQ(page.offset.back(), page.data.size());
    fo->Write(page.offset);
    if (page.data.size() != 0) {
      fo->Write(dmlc::BeginPtr(page.data), page.data.size() * sizeof(SparseBatch::Entry));
    }
  }
    
    class StringAppendOperator : public AssociativeMergeOperator {
 public:
  // Constructor: specify delimiter
  explicit StringAppendOperator(char delim_char);
    }
    
     private:
  // A version of PartialMerge that actually performs 'partial merging'.
  // Use this to simulate the exact behaviour of the StringAppendOperator.
  bool _AssocPartialMergeMulti(const Slice& key,
                               const std::deque<Slice>& operand_list,
                               std::string* new_value, Logger* logger) const;
    
        cache_activity_logger_.ReportLookup(key);
    
      // Verify that the 1st snapshot is cleaned up after the release
  wp_db->ReleaseSnapshotInternal(snap_seq1);
  {
    ASSERT_FALSE(wp_db->old_commit_map_empty_.load());
    ReadLock rl(&wp_db->old_commit_map_mutex_);
    ASSERT_EQ(1, wp_db->old_commit_map_.size());
    ASSERT_EQ(1, wp_db->old_commit_map_[snap_seq3].size());
  }
    
      if (s.ok() &&
      (shutting_down_->load(std::memory_order_acquire) || cfd_->IsDropped())) {
    s = Status::ShutdownInProgress(
        'Database shutdown or Column family drop during flush');
  }
    
    // 1- Create a DeleteScheduler with very slow rate limit (1 Byte / sec)
// 2- Delete 100 files using DeleteScheduler
// 3- Delete the DeleteScheduler (call the destructor while queue is not empty)
// 4- Make sure that not all files were deleted from trash and that
//    DeleteScheduler background thread did not delete all files
TEST_F(DeleteSchedulerTest, DestructorWithNonEmptyQueue) {
  int bg_delete_file = 0;
  rocksdb::SyncPoint::GetInstance()->SetCallBack(
      'DeleteScheduler::DeleteTrashFile:DeleteFile',
      [&](void* arg) { bg_delete_file++; });
  rocksdb::SyncPoint::GetInstance()->EnableProcessing();
    }
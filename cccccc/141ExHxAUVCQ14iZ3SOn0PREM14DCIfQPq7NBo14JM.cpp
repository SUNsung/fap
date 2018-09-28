
        
        TegraCvtColor_Invoker(rgb2bgr565, rgb2bgr565, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                              dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(rgb2rgb565, rgb2rgb565, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                              dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(rgbx2bgr565, rgbx2bgr565, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(rgbx2rgb565, rgbx2rgb565, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
#define TEGRA_CVTBGRTOBGR565(src_data, src_step, dst_data, dst_step, width, height, scn, swapBlue, greenBits) \
( \
    greenBits == 6 && CAROTENE_NS::isSupportedConfiguration() ? \
        scn == 3 ? \
            (swapBlue ? \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgb2bgr565_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) : \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgb2rgb565_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) ), \
            CV_HAL_ERROR_OK : \
        scn == 4 ? \
            (swapBlue ? \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgbx2bgr565_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) : \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgbx2rgb565_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) ), \
            CV_HAL_ERROR_OK : \
        CV_HAL_ERROR_NOT_IMPLEMENTED \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
    template <> struct wAdd<f32>
{
    typedef f32 type;
    }
    
    template <bool L2gradient, bool externalSobel>
inline void Canny3x3(const Size2D &size, s32 cn,
                     const u8 * srcBase, ptrdiff_t srcStride,
                     u8 * dstBase, ptrdiff_t dstStride,
                     s16 * dxBase, ptrdiff_t dxStride,
                     s16 * dyBase, ptrdiff_t dyStride,
                     f64 low_thresh, f64 high_thresh,
                     Margin borderMargin)
{
    s32 low, high;
    prepareThresh<L2gradient>(low_thresh, high_thresh, low, high);
    }
    
        s32 result = 0;
    for(size_t k = 0; k < size.height; ++k)
    {
        const f64* src = internal::getRowPtr( srcBase,  srcStride, k);
        size_t i = 0;
    }
    
            if (cpolicy == CONVERT_POLICY_SATURATE)
        {
            for (; j < roiw128; j += step128)
            {
                internal::prefetch(src1 + j);
    }
    }
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const T * src = getRowPtr((const T *)srcBase, srcStride, i);
        T * dst = getRowPtr((T *)dstBase, dstStride, (flipMode & FLIP_VERTICAL_MODE) != 0 ? size.height - i - 1 : i);
        size_t j = 0, js = 0, jd = size.width * 3;
    }
    
    #include 'err.h'
#include 'socket.h'
    
    OPERATOR_SCHEMA(GatherRangesToDense)
    .NumInputs(2, 3)
    .NumOutputs(1, INT_MAX)
    .SetDoc(R'DOC(
Given DATA tensor of rank 1, and RANGES tensor of rank 3, gather values
corresponding to each range into a separate output tensor. If the optional input
KEY tensor is also given, the output will be sorted by KEY for each example.
    
    ChannelCredentials::~ChannelCredentials() {}
    
    void CoreCodegen::grpc_slice_buffer_pop(grpc_slice_buffer* sb) {
  ::grpc_slice_buffer_pop(sb);
}
    
      bool IsPeerAuthenticated() const override;
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusClientCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusClientCallData : public CallData {
 public:
  // Maximum size of trace context is sent on the wire.
  static constexpr uint32_t kMaxTraceContextLen = 64;
  // Maximum size of tags that are sent on the wire.
  static constexpr uint32_t kMaxTagsLen = 2048;
    }
    
      CensusServerCallData()
      : gc_(nullptr),
        auth_context_(nullptr),
        recv_initial_metadata_(nullptr),
        initial_on_done_recv_initial_metadata_(nullptr),
        initial_on_done_recv_message_(nullptr),
        recv_message_(nullptr),
        recv_message_count_(0),
        sent_message_count_(0) {
    memset(&census_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&path_, 0, sizeof(grpc_slice));
    memset(&on_done_recv_initial_metadata_, 0, sizeof(grpc_closure));
    memset(&on_done_recv_message_, 0, sizeof(grpc_closure));
  }
    
    Status ProtoServerReflection::ListService(ServerContext* context,
                                          ListServiceResponse* response) {
  if (services_ == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'Services not found.');
  }
  for (auto it = services_->begin(); it != services_->end(); ++it) {
    ServiceResponse* service_response = response->add_service();
    service_response->set_name(*it);
  }
  return Status::OK;
}
    
       static char_class_type BOOST_REGEX_CALL lookup_classname(const wchar_t* p1, const wchar_t* p2);
   static string_type BOOST_REGEX_CALL lookup_collatename(const wchar_t* p1, const wchar_t* p2);
    
    template <class I>
struct is_random_imp
{
#ifndef BOOST_NO_STD_ITERATOR_TRAITS
private:
   typedef typename std::iterator_traits<I>::iterator_category cat;
public:
   BOOST_STATIC_CONSTANT(bool, value = (::boost::is_convertible<cat*, std::random_access_iterator_tag*>::value));
#else
   BOOST_STATIC_CONSTANT(bool, value = false);
#endif
};
    
             if(*p == static_cast<charT>(0)) // if null we've matched
            return set_->isnot ? next : (ptr == next) ? ++next : ptr;
    
    #include <boost/type_traits/is_pointer.hpp>
#include <boost/type_traits/is_function.hpp>
#include <boost/type_traits/is_class.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/is_convertible.hpp>
#include <boost/type_traits/remove_pointer.hpp>
#include <boost/type_traits/remove_cv.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/and.hpp>
#include <boost/mpl/not.hpp>
#ifndef BOOST_NO_SFINAE
#include <boost/mpl/has_xxx.hpp>
#endif
#include <boost/ref.hpp>
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
       void BOOST_REGEX_CALL resize(size_type n);
   
   void* BOOST_REGEX_CALL extend(size_type n)
   {
      if(size_type(last - end) < n)
         resize(n + (end - start));
      pointer result = end;
      end += n;
      return result;
   }
    
      XGBOOST_DEVICE GradientPairInternal<T> &operator-=(
      const GradientPairInternal<T> &rhs) {
    grad_ -= rhs.grad_;
    hess_ -= rhs.hess_;
    return *this;
  }
    
    namespace xgboost {
/*!
 * \brief interface of linear updater
 */
class LinearUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~LinearUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(
      const std::vector<std::pair<std::string, std::string> >& args) = 0;
    }
    }
    
    /*!
 * \brief Macro to register tree updater.
 *
 * \code
 * // example of registering a objective ndcg@k
 * XGBOOST_REGISTER_TREE_UPDATER(ColMaker, 'colmaker')
 * .describe('Column based tree maker.')
 * .set_body([]() {
 *     return new ColMaker<TStats>();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_TREE_UPDATER(UniqueId, Name)                   \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::TreeUpdaterReg&               \
  __make_ ## TreeUpdaterReg ## _ ## UniqueId ## __ =                    \
      ::dmlc::Registry< ::xgboost::TreeUpdaterReg>::Get()->__REGISTER__(Name)
    
    /*!
 * \brief Find the maximum iterator within the iterators
 * \param begin The begining iterator.
 * \param end The end iterator.
 * \return the iterator point to the maximum value.
 * \tparam Iterator The type of the iterator.
 */
template<typename Iterator>
inline Iterator FindMaxIndex(Iterator begin, Iterator end) {
  Iterator maxit = begin;
  for (Iterator it = begin; it != end; ++it) {
    if (*it > *maxit) maxit = it;
  }
  return maxit;
}
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
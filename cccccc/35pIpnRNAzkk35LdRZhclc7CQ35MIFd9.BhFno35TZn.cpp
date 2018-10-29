
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    IPC_SYNC_MESSAGE_ROUTED4_1(ShellViewHostMsg_Call_Object_Method_Sync,
                           int /* object id */,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
      // Post 'reopen' event.
  // (This event is received when the user clicked the icon in the Dock).
  static void EmitReopenEvent();
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethod')));
    
    
#include 'content/nw/src/api/event/event.h'
#include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/gfx/screen.h'
    
    
    {}  // namespace nw

    
    
    {  DISALLOW_COPY_AND_ASSIGN(MenuDelegate);
};
    
    
    {}  // namespace
    
    
    {} // namespace extensions

    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a cv::Mat
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See image_data_layer.cpp for an example.
   */
  void Transform(const cv::Mat& cv_img, Blob<Dtype>* transformed_blob);
#endif  // USE_OPENCV
    
    
template <typename Dtype>
class LayerRegisterer {
 public:
  LayerRegisterer(const string& type,
                  shared_ptr<Layer<Dtype> > (*creator)(const LayerParameter&)) {
    // LOG(INFO) << 'Registering layer type: ' << type;
    LayerRegistry<Dtype>::AddCreator(type, creator);
  }
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/im2col.hpp'
    
      /**
   * @brief Computes the Contrastive error gradient w.r.t. the inputs.
   *
   * Computes the gradients with respect to the two input vectors (bottom[0] and
   * bottom[1]), but not the similarity label (bottom[2]).
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
   *      This Blob's diff will simply contain the loss_weight* @f$ \lambda @f$,
   *      as @f$ \lambda @f$ is the coefficient of this layer's output
   *      @f$\ell_i@f$ in the overall Net loss
   *      @f$ E = \lambda_i \ell_i + \mbox{other loss terms}@f$; hence
   *      @f$ \frac{\partial E}{\partial \ell_i} = \lambda_i @f$.
   *      (*Assuming that this top Blob is not used as a bottom (input) by any
   *      other layer of the Net.)
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$a@f$; Backward fills their diff with
   *      gradients if propagate_down[0]
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$b@f$; Backward fills their diff with gradients if
   *      propagate_down[1]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    namespace tesseract {
double DotProductAVX(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductAVX can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
    // Extracts and converts 8x32-bit results from result, adding the bias from wi
// and scaling by scales, before storing in *v. Note that wi, scales and v are
// expected to contain 8 consecutive elements or num_out if less.
inline void ExtractResults(__m256i& result, __m256i& shift_id,
                           const int8_t*& wi, const double*& scales,
                           int num_out, double*& v) {
  for (int out = 0; out < num_out; ++out) {
    int32_t res =
#ifndef _MSC_VER
        _mm256_extract_epi32(result, 0)
#else
        // Workaround MSVC's ICE
        // _mm256_extract_epi32(X, Y) == ((int32_t*)&X)[Y]
        ((int32_t*)&result)[0]
#endif
        ;
    *v++ = (static_cast<double>(res) / INT8_MAX + *wi++) * *scales++;
    // Rotate the results in int32_t units, so the next result is ready.
    result = _mm256_permutevar8x32_epi32(result, shift_id);
  }
}
    
    int16_t word_blob_quality(WERD_RES *word, ROW *row);
void reject_whole_page(PAGE_RES_IT &page_res_it);
    
      // Insert part back into part_grid_, after it absorbs some other parts.
  void InsertPartAfterAbsorb(ColPartition* part);
    
    // ============= Accessing data ==============.
// Coordinate system:
// Integer coordinates are at the cracks between the pixels.
// The top-left corner of the top-left pixel in the image is at (0,0).
// The bottom-right corner of the bottom-right pixel in the image is at
// (width, height).
// Every bounding box goes from the top-left of the top-left contained
// pixel to the bottom-right of the bottom-right contained pixel, so
// the bounding box of the single top-left pixel in the image is:
// (0,0)->(1,1).
// If an image rectangle has been set in the API, then returned coordinates
// relate to the original (full) image, rather than the rectangle.
    
      //   The text of a paragraph typically starts with the start of an idea and
  // ends with the end of an idea.  Here we define paragraph as something that
  // may have a first line indent and a body indent which may be different.
  // Typical words that start an idea are:
  //   1. Words in western scripts that start with
  //      a capital letter, for example 'The'
  //   2. Bulleted or numbered list items, for
  //      example '2.'
  // Typical words which end an idea are words ending in punctuation marks. In
  // this vocabulary, each list item is represented as a paragraph.
  bool lword_indicates_list_item;
  bool lword_likely_starts_idea;
  bool lword_likely_ends_idea;
    
     private:
  // The unique ID of this VC object.
  int my_id_;
  // Whether the parameter was changed_ and thus needs to be rewritten.
  bool changed_;
  // The actual ParamType of this VC object.
  ParamType param_type_;
    
    
/**********************************************************************
 * split_and_recog_word
 *
 * Split the word into 2 smaller pieces at the largest gap.
 * Recognize the pieces and stick the results back together.
 **********************************************************************/
void Tesseract::split_and_recog_word(WERD_RES *word) {
  // Find the biggest blob gap in the chopped_word.
  int bestgap = -INT32_MAX;
  int split_index = 0;
  for (int b = 1; b < word->chopped_word->NumBlobs(); ++b) {
    TBOX prev_box = word->chopped_word->blobs[b - 1]->bounding_box();
    TBOX blob_box = word->chopped_word->blobs[b]->bounding_box();
    int gap = blob_box.left() - prev_box.right();
    if (gap > bestgap) {
      bestgap = gap;
      split_index = b;
    }
  }
  ASSERT_HOST(split_index > 0);
    }
    
      /// Return true if the source image is color.
  bool IsColor() const {
    return pix_channels_ >= 3;
  }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45>
internal::ValueArray45<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
    T44, T45> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8,
    T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16,
    T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24,
    T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32,
    T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40,
    T41 v41, T42 v42, T43 v43, T44 v44, T45 v45) {
  return internal::ValueArray45<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39,
      T40, T41, T42, T43, T44, T45>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10,
      v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24,
      v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38,
      v39, v40, v41, v42, v43, v44, v45);
}
    
    // A macro for testing Google Test assertions or code that's expected to
// generate Google Test non-fatal failures.  It asserts that the given
// statement will cause exactly one non-fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_NONFATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// 'statement' is allowed to reference local variables and members of
// the current object.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  If we do that, the code won't compile when the user gives
// EXPECT_NONFATAL_FAILURE() a statement that contains a macro that
// expands to code containing an unprotected comma.  The
// AcceptsMacroThatExpandsToUnprotectedComma test in gtest_unittest.cc
// catches that.
//
// For the same reason, we have to write
//   if (::testing::internal::AlwaysTrue()) { statement; }
// instead of
//   GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement)
// to avoid an MSVC warning on unreachable code.
#define EXPECT_NONFATAL_FAILURE(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      tuple() : f0_(), f1_(), f2_() {}
    
      // Applies a function/functor on each element of the queue, and
  // returns the result in a new queue.  The original queue is not
  // affected.
  template <typename F>
  Queue* Map(F function) const {
    Queue* new_queue = new Queue();
    for (const QueueNode<E>* node = head_; node != NULL; node = node->next_) {
      new_queue->Enqueue(function(node->element()));
    }
    }
    
       locale_type imbue(locale_type l)
   { return l; }
   locale_type getloc()const
   { return locale_type(); }
    
    #if defined(__SGI_STL_PORT) && defined(__STL_DEBUG)
template<>
struct regex_iterator_traits<std::string::iterator> : pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<std::string::const_iterator> : const_pointer_iterator_traits<char>{};
#ifndef BOOST_NO_STD_WSTRING
template<>
struct regex_iterator_traits<std::wstring::iterator> : pointer_iterator_traits<wchar_t>{};
template<>
struct regex_iterator_traits<std::wstring::const_iterator> : const_pointer_iterator_traits<wchar_t>{};
#endif // BOOST_NO_WSTRING
#endif // stport
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_word_end()
{
   if((position == backstop) && ((m_match_flags & match_prev_avail) == 0))
      return false;  // start of buffer can't be end of word
   BidiIterator t(position);
   --t;
   if(traits_inst.isctype(*t, m_word_mask) == false)
      return false;  // previous character wasn't a word character
    }
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         basic_regex_creator.cpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Declares template class basic_regex_creator which fills in
  *                the data members of a regex_data object.
  */
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    template <class OutputIterator, class charT, class Traits1, class Alloc1, class Traits2>
std::size_t regex_split(OutputIterator out,
                   std::basic_string<charT, Traits1, Alloc1>& s, 
                   const basic_regex<charT, Traits2>& e,
                   match_flag_type flags,
                   std::size_t max_split)
{
   typedef typename std::basic_string<charT, Traits1, Alloc1>::const_iterator  ci_t;
   //typedef typename match_results<ci_t>::allocator_type                        match_allocator;
   ci_t last = s.begin();
   std::size_t init_size = max_split;
   BOOST_REGEX_DETAIL_NS::split_pred<OutputIterator, charT, Traits1, Alloc1> pred(&last, &out, &max_split);
   ci_t i, j;
   i = s.begin();
   j = s.end();
   regex_grep(pred, i, j, e, flags);
   //
   // if there is still input left, do a final push as long as max_split
   // is not exhausted, and we're not splitting sub-expressions rather 
   // than whitespace:
   if(max_split && (last != s.end()) && (e.mark_count() == 0))
   {
      *out = std::basic_string<charT, Traits1, Alloc1>((ci_t)last, (ci_t)s.end());
      ++out;
      last = s.end();
      --max_split;
   }
   //
   // delete from the string everything that has been processed so far:
   s.erase(0, last - s.begin());
   //
   // return the number of new records pushed:
   return init_size - max_split;
}
    
    #include <boost/shared_ptr.hpp>
#include <boost/detail/workaround.hpp>
#if (BOOST_WORKAROUND(__BORLANDC__, >= 0x560) && BOOST_WORKAROUND(__BORLANDC__, BOOST_TESTED_AT(0x570)))\
      || BOOST_WORKAROUND(__MWERKS__, BOOST_TESTED_AT(0x3003))
//
// Borland C++ Builder 6, and Visual C++ 6,
// can't cope with the array template constructor
// so we have a template member that will accept any type as 
// argument, and then assert that is really is an array:
//
#include <boost/static_assert.hpp>
#include <boost/type_traits/is_array.hpp>
#endif
    
        template <
        typename OtherExecutor,
        typename = typename std::enable_if<
            std::is_convertible<OtherExecutor*, ExecutorT*>::value>::type>
    KeepAlive& operator=(KeepAlive<OtherExecutor>&& other) {
      return *this = KeepAlive(std::move(other));
    }
    
    template <class RNG>
struct StateSize<RNG, void_t<decltype(RNG::state_size)>> {
  using type = std::integral_constant<size_t, RNG::state_size>;
};
    
      /**
   * Shortcut to get a secure random value of integral type.
   */
  template <class T>
  static typename std::enable_if<
      std::is_integral<T>::value && !std::is_same<T, bool>::value,
      T>::type
  secureRandom() {
    T val;
    secureRandom(&val, sizeof(val));
    return val;
  }
    
    #pragma once
    
    enum class CompressionCounterKey {
  BYTES_BEFORE_COMPRESSION = 0,
  BYTES_AFTER_COMPRESSION = 1,
  BYTES_BEFORE_DECOMPRESSION = 2,
  BYTES_AFTER_DECOMPRESSION = 3,
  COMPRESSIONS = 4,
  DECOMPRESSIONS = 5,
  COMPRESSION_MILLISECONDS = 6,
  DECOMPRESSION_MILLISECONDS = 7,
};
    
    /**
 * Helper functions for compression codecs.
 */
namespace folly {
namespace io {
namespace compression {
namespace detail {
    }
    }
    }
    }
    
      explicit Options(
      Format format_ = Format::ZLIB,
      int windowSize_ = 15,
      int memLevel_ = 8,
      int strategy_ = Z_DEFAULT_STRATEGY)
      : format(format_),
        windowSize(windowSize_),
        memLevel(memLevel_),
        strategy(strategy_) {}
    
      agent_a.WaitForFinish();
  if (!FLAGS_only_one_send) {
    agent_b.WaitForFinish();
  }
  param_ptr_a->print();
  if (!FLAGS_only_one_send) {
    param_ptr_b->print();
  }
    
      /**
   * @brief Initialize the fake CAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   * @return If the initialization is successful.
   */
  bool Init(const CANCardParameter &param) override;
    
      if (!_is_init) {
    AERROR << 'Hermes can client is not init! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
  }
  //    if (*frame_num > MAX_CAN_SEND_FRAME_LEN || *frame_num < 0) {
  //       AERROR << 'send can frame num not in range[0, '
  //         << MAX_CAN_SEND_FRAME_LEN << '], frame_num:' << *frame_num;
  //       return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
  //    }
  for (int i = 0; i < *frame_num; ++i) {
    _send_frames[i].bcan_msg_id = frames[i].id;
    _send_frames[i].bcan_msg_datalen = frames[i].len;
    memcpy(_send_frames[i].bcan_msg_data, frames[i].data, frames[i].len);
  }
    
    #include 'gflags/gflags.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
      /**
   * @brief Receive messages
   * @param frames The messages to receive.
   * @param frame_num The amount of messages to receive.
   * @return The status of the receiving action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Receive(std::vector<CanFrame> *const frames,
                                    int32_t *const frame_num) override;
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    /**
 * @namespace apollo::drivers::canbus
 * @brief apollo::drivers::canbus
 */
namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    #endif  // MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_


        
          bool thrown = false;
  try {
    thpp::IntTensor &a = dynamic_cast<thpp::IntTensor&>(*tensor);
  } catch(std::bad_cast &e) {
    thrown = true;
  }
  assert(thrown);
    
    // skip isnan and isinf check for integral types
template<typename To, typename From>
typename std::enable_if<std::is_integral<From>::value, bool>::type overflows(From f) {
  using limit = std::numeric_limits<To>;
  return f < limit::lowest() || f > limit::max();
}
    
      //also support scalar.to<int64_t>();
  template<typename T>
  T to();
    
    #include 'ATen/CUDAGenerator.h'
#include 'ATen/Context.h'
#include 'THCTensorRandom.h'
#include <stdexcept>
    
    /* Get the generator for the current device, but does not initialize the state */
static THCGenerator* THCRandom_rawGenerator(THCState* state)
{
  THCRNGState* rng_state = THCState_getRngState(state);
  int device;
  THCudaCheck(cudaGetDevice(&device));
  if (device >= rng_state->num_devices) THError('Invalid device index.');
  return &rng_state->gen[device];
}
    
    inline void store_scalar(void* data, at::ScalarType scalarType, PyObject* obj) {
  switch (scalarType) {
    case at::kByte: *(uint8_t*)data = (uint8_t)THPUtils_unpackLong(obj); break;
    case at::kChar: *(char*)data = (char)THPUtils_unpackLong(obj); break;
    case at::kShort: *(int16_t*)data = (int16_t)THPUtils_unpackLong(obj); break;
    case at::kInt: *(int32_t*)data = (int32_t)THPUtils_unpackLong(obj); break;
    case at::kLong: *(int64_t*)data = THPUtils_unpackLong(obj); break;
    case at::kHalf:
      *(at::Half*)data = at::convert<at::Half, double>(THPUtils_unpackDouble(obj));
      break;
    case at::kFloat: *(float*)data = (float)THPUtils_unpackDouble(obj); break;
    case at::kDouble: *(double*)data = THPUtils_unpackDouble(obj); break;
    default: throw std::runtime_error('invalid type');
  }
}
    
      auto input_size = self.sizes();
  auto weight_size = weight.sizes();
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHLongTensor(THLongTensor *tensor) {
  return at::getType(at::Backend::CPU, at::ScalarType::Long).unsafeTensorFromTH((void*)tensor, true);
}
    
      /// Construct, passing the specified argument to initialise the next layer.
  template <typename Arg>
  buffered_read_stream(Arg& a, std::size_t buffer_size)
    : next_layer_(a),
      storage_(buffer_size)
  {
  }
    
    template <typename Stream>
class buffered_stream;
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
      std::size_t check_for_completion(
      const boost::system::error_code& ec,
      std::size_t total_transferred)
  {
    return detail::adapt_completion_condition_result(
        completion_condition_(ec, total_transferred));
  }
    
        buffer_sequence_adapter<boost::asio::mutable_buffer,
        MutableBufferSequence> bufs(o->buffers_);
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef null_event event;
#elif defined(BOOST_ASIO_WINDOWS)
typedef win_event event;
#elif defined(BOOST_ASIO_HAS_PTHREADS)
typedef posix_event event;
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
typedef std_event event;
#endif
    
    #if defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
typedef win_fd_set_adapter fd_set_adapter;
#else
typedef posix_fd_set_adapter fd_set_adapter;
#endif
    
    #define BOOST_ASIO_HANDSHAKE_HANDLER_CHECK( \
    handler_type, handler) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::one_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0))) == 1, \
      'HandshakeHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
    ::pollfd& dev_poll_reactor::add_pending_event_change(int descriptor)
{
  hash_map<int, std::size_t>::iterator iter
    = pending_event_change_index_.find(descriptor);
  if (iter == pending_event_change_index_.end())
  {
    std::size_t index = pending_event_changes_.size();
    pending_event_changes_.reserve(pending_event_changes_.size() + 1);
    pending_event_change_index_.insert(std::make_pair(descriptor, index));
    pending_event_changes_.push_back(::pollfd());
    pending_event_changes_[index].fd = descriptor;
    pending_event_changes_[index].revents = 0;
    return pending_event_changes_[index];
  }
  else
  {
    return pending_event_changes_[iter->second];
  }
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    #define DEFINE_HAS_MEMBER(member_name) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <int> struct tester;\
        template <typename U> static yes_type test(tester<sizeof(&U::member_name)>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };
    
    
#endif /* SCOP_JENV_H_ */

    
      YGNodeStyleSetFlexShrink(child1, 1);
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    
#ifdef LOG_TAG
# define ALOGV(...) ::facebook::alog::logv(LOG_TAG, __VA_ARGS__)
# define ALOGD(...) ::facebook::alog::logd(LOG_TAG, __VA_ARGS__)
# define ALOGI(...) ::facebook::alog::logi(LOG_TAG, __VA_ARGS__)
# define ALOGW(...) ::facebook::alog::logw(LOG_TAG, __VA_ARGS__)
# define ALOGE(...) ::facebook::alog::loge(LOG_TAG, __VA_ARGS__)
# define ALOGF(...) ::facebook::alog::logf(LOG_TAG, __VA_ARGS__)
#endif
    
    #pragma once
#include <utility>
#include <fb/assert.h>
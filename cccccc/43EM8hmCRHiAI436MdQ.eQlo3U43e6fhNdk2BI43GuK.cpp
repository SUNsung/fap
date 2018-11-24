
        
        
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
    #endif  // CAFFE_BATCHNORM_LAYER_HPP_

    
    #include 'caffe/layers/base_conv_layer.hpp'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    
    #ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_all_states()
{
   static matcher_proc_type const s_match_vtable[34] = 
   {
      (&perl_matcher<BidiIterator, Allocator, traits>::match_startmark),
      &perl_matcher<BidiIterator, Allocator, traits>::match_endmark,
      &perl_matcher<BidiIterator, Allocator, traits>::match_literal,
      &perl_matcher<BidiIterator, Allocator, traits>::match_start_line,
      &perl_matcher<BidiIterator, Allocator, traits>::match_end_line,
      &perl_matcher<BidiIterator, Allocator, traits>::match_wild,
      &perl_matcher<BidiIterator, Allocator, traits>::match_match,
      &perl_matcher<BidiIterator, Allocator, traits>::match_word_boundary,
      &perl_matcher<BidiIterator, Allocator, traits>::match_within_word,
      &perl_matcher<BidiIterator, Allocator, traits>::match_word_start,
      &perl_matcher<BidiIterator, Allocator, traits>::match_word_end,
      &perl_matcher<BidiIterator, Allocator, traits>::match_buffer_start,
      &perl_matcher<BidiIterator, Allocator, traits>::match_buffer_end,
      &perl_matcher<BidiIterator, Allocator, traits>::match_backref,
      &perl_matcher<BidiIterator, Allocator, traits>::match_long_set,
      &perl_matcher<BidiIterator, Allocator, traits>::match_set,
      &perl_matcher<BidiIterator, Allocator, traits>::match_jump,
      &perl_matcher<BidiIterator, Allocator, traits>::match_alt,
      &perl_matcher<BidiIterator, Allocator, traits>::match_rep,
      &perl_matcher<BidiIterator, Allocator, traits>::match_combining,
      &perl_matcher<BidiIterator, Allocator, traits>::match_soft_buffer_end,
      &perl_matcher<BidiIterator, Allocator, traits>::match_restart_continue,
      // Although this next line *should* be evaluated at compile time, in practice
      // some compilers (VC++) emit run-time initialisation which breaks thread
      // safety, so use a dispatch function instead:
      //(::boost::is_random_access_iterator<BidiIterator>::value ? &perl_matcher<BidiIterator, Allocator, traits>::match_dot_repeat_fast : &perl_matcher<BidiIterator, Allocator, traits>::match_dot_repeat_slow),
      &perl_matcher<BidiIterator, Allocator, traits>::match_dot_repeat_dispatch,
      &perl_matcher<BidiIterator, Allocator, traits>::match_char_repeat,
      &perl_matcher<BidiIterator, Allocator, traits>::match_set_repeat,
      &perl_matcher<BidiIterator, Allocator, traits>::match_long_set_repeat,
      &perl_matcher<BidiIterator, Allocator, traits>::match_backstep,
      &perl_matcher<BidiIterator, Allocator, traits>::match_assert_backref,
      &perl_matcher<BidiIterator, Allocator, traits>::match_toggle_case,
      &perl_matcher<BidiIterator, Allocator, traits>::match_recursion,
      &perl_matcher<BidiIterator, Allocator, traits>::match_fail,
      &perl_matcher<BidiIterator, Allocator, traits>::match_accept,
      &perl_matcher<BidiIterator, Allocator, traits>::match_commit,
      &perl_matcher<BidiIterator, Allocator, traits>::match_then,
   };
    }
    
    #ifndef BOOST_REGEX_PRIMARY_TRANSFORM
#define BOOST_REGEX_PRIMARY_TRANSFORM
    
    template <class OutputIterator, class Results, class traits, class ForwardIter>
class basic_regex_formatter
{
public:
   typedef typename traits::char_type char_type;
   basic_regex_formatter(OutputIterator o, const Results& r, const traits& t)
      : m_traits(t), m_results(r), m_out(o), m_position(), m_end(), m_flags(), m_state(output_copy), m_restore_state(output_copy), m_have_conditional(false) {}
   OutputIterator format(ForwardIter p1, ForwardIter p2, match_flag_type f);
   OutputIterator format(ForwardIter p1, match_flag_type f)
   {
      return format(p1, p1 + m_traits.length(p1), f);
   }
private:
   typedef typename Results::value_type sub_match_type;
   enum output_state
   {
      output_copy,
      output_next_lower,
      output_next_upper,
      output_lower,
      output_upper,
      output_none
   };
    }
    
    

    
    #ifndef BOOST_NO_WREGEX
inline bool regex_search(const wchar_t* str, 
                        wcmatch& m, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_search(str, str + wregex::traits_type::length(str), m, e, flags);
}
inline bool regex_search(const wchar_t* first, const wchar_t* last, 
                  const wregex& e, 
                  match_flag_type flags = match_default)
{
   wcmatch m;
   return regex_search(first, last, m, e, flags | regex_constants::match_any);
}
#endif
inline bool regex_search(const std::string& s, 
                        smatch& m,
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   return regex_search(s.begin(), s.end(), m, e, flags);
}
#if !defined(BOOST_NO_WREGEX)
inline bool regex_search(const std::basic_string<wchar_t>& s, 
                        wsmatch& m,
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_search(s.begin(), s.end(), m, e, flags);
}
#endif
    
    template <class OutputIterator, class charT, class Traits1, class Alloc1>
class split_pred
{
   typedef std::basic_string<charT, Traits1, Alloc1> string_type;
   typedef typename string_type::const_iterator iterator_type;
   iterator_type* p_last;
   OutputIterator* p_out;
   std::size_t* p_max;
   std::size_t initial_max;
public:
   split_pred(iterator_type* a, OutputIterator* b, std::size_t* c)
      : p_last(a), p_out(b), p_max(c), initial_max(*c) {}
    }
    
    #include <cstdint>
#include <cstring>
#include <sstream>
#include <string>
#include <vector>
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
      /**
   * @brief Stop the fake CAN client.
   */
  void Stop() override;
    
    TEST(HermesCanClient, receiver) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::HERMES_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
  HermesCanClient hermes_can;
  EXPECT_TRUE(hermes_can.Init(param));
    }
    
    TEST(CanReceiverTest, ReceiveOne) {
  can::FakeCanClient can_client;
  MessageManager<::apollo::canbus::ChassisDetail> pm;
  CanReceiver<::apollo::canbus::ChassisDetail> receiver;
    }
    
    template <typename SensorType>
template <class T, bool need_check>
void MessageManager<SensorType>::AddRecvProtocolData() {
  recv_protocol_data_.emplace_back(new T());
  auto *dt = recv_protocol_data_.back().get();
  if (dt == nullptr) {
    return;
  }
  protocol_data_map_[T::ID] = dt;
  if (need_check) {
    check_ids_[T::ID].period = dt->GetPeriod();
    check_ids_[T::ID].real_period = 0;
    check_ids_[T::ID].last_time = 0;
    check_ids_[T::ID].error_count = 0;
  }
}
    
    // System gflags
DEFINE_string(sensor_node_name, '', 'Sensor node name.');

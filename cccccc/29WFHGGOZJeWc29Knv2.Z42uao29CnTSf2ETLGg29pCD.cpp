
        
           format_perl = 0,                                  /* perl style replacement */
   format_default = 0,                               /* ditto. */
   format_sed = match_max << 1,                      /* sed style replacement. */
   format_all = format_sed << 1,                     /* enable all extentions to sytax. */
   format_no_copy = format_all << 1,                 /* don't copy non-matching segments. */
   format_first_only = format_no_copy << 1,          /* Only replace first occurance. */
   format_is_if = format_first_only << 1,            /* internal use only. */
   format_literal = format_is_if << 1                /* treat string as a literal */
    
    template <class Results>
struct recursion_info
{
   typedef typename Results::value_type value_type;
   typedef typename value_type::iterator iterator;
   int idx;
   const re_syntax_base* preturn_address;
   Results results;
   repeater_count<iterator>* repeater_stack;
};
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_rep()
{
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable:4127 4244)
#endif
   const re_repeat* rep = static_cast<const re_repeat*>(pstate);
   //
   // Always copy the repeat count, so that the state is restored
   // when we exit this scope:
   //
   repeater_count<BidiIterator> r(rep->state_id, &next_count, position, this->recursion_stack.size() ? this->recursion_stack.back().idx : INT_MIN + 3);
   //
   // If we've had at least one repeat already, and the last one 
   // matched the NULL string then set the repeat count to
   // maximum:
   //
   next_count->check_null_repeat(position, rep->max);
    }
    
    template <class T>
class concrete_protected_call
   : public abstract_protected_call
{
public:
   typedef bool (T::*proc_type)();
   concrete_protected_call(T* o, proc_type p)
      : obj(o), proc(p) {}
private:
   virtual bool call()const;
   T* obj;
   proc_type proc;
};
    
    
    {
      basic = basic_syntax_group | collate | no_escape_in_lists,
      extended = no_bk_refs | collate | no_perl_ex | no_escape_in_lists,
      normal = 0,
      emacs = basic_syntax_group | collate | emacs_ex | bk_vbar,
      awk = no_bk_refs | collate | no_perl_ex,
      grep = basic | newline_alt,
      egrep = extended | newline_alt,
      sed = basic,
      perl = normal,
      ECMAScript = normal,
      JavaScript = normal,
      JScript = normal
   };
   typedef unsigned int flag_type;
    
    template <class OutputIterator, class Results, class traits, class ForwardIter>
void basic_regex_formatter<OutputIterator, Results, traits, ForwardIter>::put(const sub_match_type& sub)
{
   typedef typename sub_match_type::iterator iterator_type;
   iterator_type i = sub.first;
   while(i != sub.second)
   {
      put(*i);
      ++i;
   }
}
    
    template <class traits, class charT>
inline std::basic_string<charT> regex_merge(const std::basic_string<charT>& s,
                         const basic_regex<charT, traits>& e, 
                         const charT* fmt,
                         match_flag_type flags = match_default)
{
   return regex_replace(s, e, fmt, flags);
}
    
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
    
    TEST_F(FakeCanClientTest, SendMessage) {
  std::vector<CanFrame> frames;
  frames.resize(FRAME_LEN);
  for (int32_t i = 0; i < FRAME_LEN; ++i) {
    frames[i].id = 1 & 0x3FF;
    frames[i].len = 8;
    frames[i].data[7] = 1 % 256;
    for (int32_t j = 0; j < 7; ++j) {
      frames[i].data[j] = j;
    }
  }
    }
    
    // Synchronous transmission of CAN messages
apollo::common::ErrorCode HermesCanClient::Send(
    const std::vector<CanFrame> &frames, int32_t *const frame_num) {
  /*
  typedef struct bcan_msg {
      uint32_t bcan_msg_id;        // source CAN node id
      uint8_t  bcan_msg_datalen;   // message data length
      uint8_t  bcan_msg_rsv[3];    // reserved
      uint8_t  bcan_msg_data[8];   // message data
      uint64_t bcan_msg_timestamp; // TBD
  } bcan_msg_t;
  */
  CHECK_NOTNULL(frame_num);
  CHECK_EQ(frames.size(), static_cast<size_t>(*frame_num));
    }
    
    #include 'gflags/gflags.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    TEST(HermesCanClient, receiver) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::HERMES_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
  HermesCanClient hermes_can;
  EXPECT_TRUE(hermes_can.Init(param));
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
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }

        
        void AutoUpdater::OnError(const std::string& message) {
  v8::Locker locker(isolate());
  v8::HandleScope handle_scope(isolate());
  auto error = v8::Exception::Error(mate::StringToV8(isolate(), message));
  mate::EmitEvent(
      isolate(), GetWrapper(), 'error',
      error->ToObject(isolate()->GetCurrentContext()).ToLocalChecked(),
      // Message is also emitted to keep compatibility with old code.
      message);
}
    
    namespace api {
    }
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(InAppPurchase);
};
    
    class RenderProcessPreferences
    : public mate::Wrappable<RenderProcessPreferences> {
 public:
  static mate::Handle<RenderProcessPreferences> ForAllWebContents(
      v8::Isolate* isolate);
    }
    
    #ifndef ATOM_BROWSER_API_ATOM_API_SCREEN_H_
#define ATOM_BROWSER_API_ATOM_API_SCREEN_H_
    
    class AtomQuotaPermissionContext : public content::QuotaPermissionContext {
 public:
  typedef content::QuotaPermissionContext::QuotaPermissionResponse response;
    }
    
    
    {	static bool const value = false;
};
    
    
    {	if (space) {
		space->remove_constraint(this);
		space->add_constraint(this, disabled_collisions_between_bodies);
	}
}

    
    		const btDiscreteDynamicsWorld *m_world;
		CreateFunc(const btDiscreteDynamicsWorld *world);
    
    public:
	JointBullet();
	virtual ~JointBullet();
    
    #include 'register_types.h'
    
    template <class charT, class traits>
class basic_regex_parser : public basic_regex_creator<charT, traits>
{
public:
   basic_regex_parser(regex_data<charT, traits>* data);
   void parse(const charT* p1, const charT* p2, unsigned flags);
   void fail(regex_constants::error_type error_code, std::ptrdiff_t position);
   void fail(regex_constants::error_type error_code, std::ptrdiff_t position, std::string message, std::ptrdiff_t start_pos);
   void fail(regex_constants::error_type error_code, std::ptrdiff_t position, const std::string& message)
   {
      fail(error_code, position, message, position);
   }
    }
    
    
    
       const_reference get_last_closed_paren()const
   {
      if(m_is_singular)
         raise_logic_error();
      return m_last_closed_paren == 0 ? m_null : (*this)[m_last_closed_paren];
   }
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_imp()
{
   // initialise our stack if we are non-recursive:
#ifdef BOOST_REGEX_NON_RECURSIVE
   save_state_init init(&m_stack_base, &m_backup_state);
   used_block_count = BOOST_REGEX_MAX_BLOCKS;
#if !defined(BOOST_NO_EXCEPTIONS)
   try{
#endif
#endif
    }
    }
    
    
    {   if(greedy)
   {
      if((rep->leading) && (count < rep->max))
         restart = position;
      // push backtrack info if available:
      if(count - rep->min)
         push_single_repeat(count, rep, position, saved_state_greedy_single_repeat);
      // jump to next state:
      pstate = rep->alt.p;
      return true;
   }
   else
   {
      // non-greedy, push state and return true if we can skip:
      if(count < rep->max)
         push_single_repeat(count, rep, position, saved_state_rep_fast_dot);
      pstate = rep->alt.p;
      return (position == last) ? (rep->can_be_null & mask_skip) : can_start(*position, rep->_map, mask_skip);
   }
}
    
    //
// regex_grep:
// find all non-overlapping matches within the sequence first last:
//
template <class Predicate, class BidiIterator, class charT, class traits>
inline unsigned int regex_grep(Predicate foo, 
                               BidiIterator first, 
                               BidiIterator last, 
                               const basic_regex<charT, traits>& e, 
                               match_flag_type flags = match_default)
{
   if(e.flags() & regex_constants::failbit)
      return false;
    }
    
    // make_regex_iterator:
template <class charT, class traits>
inline regex_iterator<const charT*, charT, traits> make_regex_iterator(const charT* p, const basic_regex<charT, traits>& e, regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_iterator<const charT*, charT, traits>(p, p+traits::length(p), e, m);
}
template <class charT, class traits, class ST, class SA>
inline regex_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits> make_regex_iterator(const std::basic_string<charT, ST, SA>& p, const basic_regex<charT, traits>& e, regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits>(p.begin(), p.end(), e, m);
}
    
    template <class traits, class charT>
inline std::basic_string<charT> regex_merge(const std::basic_string<charT>& s,
                         const basic_regex<charT, traits>& e, 
                         const charT* fmt,
                         match_flag_type flags = match_default)
{
   return regex_replace(s, e, fmt, flags);
}
    
       size_type BOOST_REGEX_CALL size()
   {
      return end - start;
   }
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_token_iterator.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides regex_token_iterator implementation.
  */
    
    template <class BaseT>
struct default_wrapper : public BaseT
{
   typedef typename BaseT::char_type char_type;
   std::string error_string(::boost::regex_constants::error_type e)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::get_default_error_string(e);
   }
   ::boost::regex_constants::syntax_type syntax_type(char_type c)const
   {
      return ((c & 0x7f) == c) ? get_default_syntax_type(static_cast<char>(c)) : ::boost::regex_constants::syntax_char;
   }
   ::boost::regex_constants::escape_syntax_type escape_syntax_type(char_type c)const
   {
      return ((c & 0x7f) == c) ? get_default_escape_syntax_type(static_cast<char>(c)) : ::boost::regex_constants::escape_type_identity;
   }
   int toi(const char_type*& p1, const char_type* p2, int radix)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_toi(p1, p2, radix, *this);
   }
   char_type translate(char_type c, bool icase)const
   {
      return (icase ? this->translate_nocase(c) : this->translate(c));
   }
   char_type translate(char_type c)const
   {
      return BaseT::translate(c);
   }
   char_type tolower(char_type c)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_lower(c);
   }
   char_type toupper(char_type c)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_upper(c);
   }
};
    
    DHTReplaceNodeTask::DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                                       const std::shared_ptr<DHTNode>& newNode)
    : bucket_(bucket),
      newNode_(newNode),
      numRetry_(0),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
      void onReceived(const DHTPingReplyMessage* message);
    
      // localnode
  // 8bytes reserved
  readBytes(fp, buf, buf.size(), 8);
  // localnode ID
  readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
  auto localNode = std::make_shared<DHTNode>(buf);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
    
    {  void deserialize(const std::string& filename);
};
    
    #include 'common.h'
    
      void addTask(const std::shared_ptr<DHTTask>& task) { queue_.push_back(task); }
    
    
    {} // namespace aria2

    
    namespace aria2 {
    }
    
    
    {  // Synchronous transmission of CAN messages
  int32_t ret = canWrite(dev_handler_, send_frames_, frame_num, nullptr);
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'send message failed, error code: ' << ret << ', '
           << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
  return ErrorCode::OK;
}
    
    
    {  EsdCanClient esd_can_client;
  EXPECT_TRUE(esd_can_client.Init(param));
  EXPECT_EQ(esd_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(esd_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(esd_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(esd_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  esd_can_client.Stop();
}
    
      /**
   * @brief Start the ESD CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  bool Init(const CANCardParameter &parameter) override;
    
     private:
  std::unique_ptr<std::thread> thread_;
  bool is_running_ = false;
  // CanClient, MessageManager pointer life is managed by outer program
  CanClient *can_client_ = nullptr;
  MessageManager<SensorType> *pt_manager_ = nullptr;
  bool enable_log_ = false;
  bool is_init_ = false;
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    // Send the error to monitor and return it
template <typename SensorType>
Status SensorCanbus<SensorType>::OnError(const std::string &error_msg) {
  common::monitor::MonitorLogBuffer buffer(&monitor_logger_);
  buffer.ERROR(error_msg);
  return Status(ErrorCode::CANBUS_ERROR, error_msg);
}
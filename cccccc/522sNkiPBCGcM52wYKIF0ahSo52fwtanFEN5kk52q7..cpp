
        
        		void Init(Block4x4 *a_pblockParent,
					ColorFloatRGBA *a_pafrgbaSource,
    
    		static const unsigned int BYTES_PER_BLOCK = 8;
    
    #ifndef C_ADD
#define  C_ADD( res, a,b)\
    do { \
            CHECK_OVERFLOW_OP((a).r,+,(b).r)\
            CHECK_OVERFLOW_OP((a).i,+,(b).i)\
            (res).r=(a).r+(b).r;  (res).i=(a).i+(b).i; \
    }while(0)
#define  C_SUB( res, a,b)\
    do { \
            CHECK_OVERFLOW_OP((a).r,-,(b).r)\
            CHECK_OVERFLOW_OP((a).i,-,(b).i)\
            (res).r=(a).r-(b).r;  (res).i=(a).i-(b).i; \
    }while(0)
#define C_ADDTO( res , a)\
    do { \
            CHECK_OVERFLOW_OP((res).r,+,(a).r)\
            CHECK_OVERFLOW_OP((res).i,+,(a).i)\
            (res).r += (a).r;  (res).i += (a).i;\
    }while(0)
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    #undef SIG2WORD16
static OPUS_INLINE opus_val16 SIG2WORD16_armv6(opus_val32 x)
{
   celt_sig res;
   __asm__(
       '#SIG2WORD16\n\t'
       'ssat %0, #16, %1, ASR #12\n\t'
       : '=r'(res)
       : 'r'(x+2048)
   );
   return EXTRACT16(res);
}
#define SIG2WORD16(x) (SIG2WORD16_armv6(x))
    
    /** Add two 16-bit values */
#define ADD16(a,b) ((opus_val16)((opus_val16)(a)+(opus_val16)(b)))
/** Subtract two 16-bit values */
#define SUB16(a,b) ((opus_val16)(a)-(opus_val16)(b))
/** Add two 32-bit values */
#define ADD32(a,b) ((opus_val32)(a)+(opus_val32)(b))
/** Subtract two 32-bit values */
#define SUB32(a,b) ((opus_val32)(a)-(opus_val32)(b))
    
    void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
    public:
  DHTRoutingTable(const std::shared_ptr<DHTNode>& localNode);
    
    void DHTTaskFactoryImpl::setRoutingTable(DHTRoutingTable* routingTable)
{
  routingTable_ = routingTable;
}
    
      virtual void process() CXX11_OVERRIDE;
    
    #include 'DHTMessage.h'
    
    #include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    void ObjectExtendedInfo60D::Parse(const std::uint8_t* bytes, int32_t length,
                                  ContiRadar* conti_radar) const {
  int obj_id = object_id(bytes, length);
  for (int i = 0; i < conti_radar->contiobs_size(); ++i) {
    if (conti_radar->contiobs(i).obstacle_id() == obj_id) {
      auto obs = conti_radar->mutable_contiobs(i);
      obs->set_longitude_accel(longitude_accel(bytes, length));
      obs->set_lateral_accel(lateral_accel(bytes, length));
      obs->set_oritation_angle(oritation_angle(bytes, length));
      obs->set_length(object_length(bytes, length));
      obs->set_width(object_width(bytes, length));
      obs->set_obstacle_class(obstacle_class(bytes, length));
      break;
    }
  }
  // auto conti_obs = conti_radar->mutable_contiobs(object_id(bytes, length));
}
    
    #include 'glog/logging.h'
    
    void Hornrpt79::Parse(const std::uint8_t* bytes, int32_t length,
                      ChassisDetail* chassis) const {
  chassis->mutable_gem()->mutable_horn_rpt_79()->set_output_value(
      output_value(bytes, length));
  chassis->mutable_gem()->mutable_horn_rpt_79()->set_commanded_value(
      commanded_value(bytes, length));
  chassis->mutable_gem()->mutable_horn_rpt_79()->set_manual_input(
      manual_input(bytes, length));
}
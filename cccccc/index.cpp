
        
          if (b->nDimension == 1) {
    b = THDTensor_(newWithStorage2d)(b->storage, b->storageOffset, b->size[0],
            b->stride[0], 1, 0);
    free_b = true;
  }
    
    void THDTensor_(bernoulli_DoubleTensor)(THDTensor *self, THDGenerator *_generator,
                                        THDDoubleTensor *p) {
  masterCommandChannel->sendMessage(
    packMessage(Functions::tensorBernoulli_DoubleTensor, self, _generator, p),
    THDState::s_current_worker
  );
}
    
    #endif

    
    
    {  return socket;
}
    
    #endif // __cocos2dx_cocosdenshion_h__

    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    	m_pointCount = 0;
    
    const int32 k_maxContactPoints = 2048;
    
    			b2FixtureDef sd2;
			sd2.shape = &poly2;
			sd2.density = 2.0f;
    
    			b2Body* prevBody = ground;
			for (int32 i = 0; i < e_count; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position.Set(-14.5f + 1.0f * i, 5.0f);
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&fd);
    }
    
    			bd.position.Set(1.0f, 0.4f);
			m_wheel2 = m_world->CreateBody(&bd);
			m_wheel2->CreateFixture(&fd);
    
    void AbstractAuthResolver::setUserDefinedCred(std::string user,
                                              std::string password)
{
  userDefinedUser_ = std::move(user);
  userDefinedPassword_ = std::move(password);
}
    
    namespace aria2 {
    }
    
    public:
  AbstractBtMessage(uint8_t id, const char* name);
    
    
    {  virtual void dropCache(int64_t len, int64_t offset) CXX11_OVERRIDE;
};
    
      virtual const std::string& getDefaultValue() const CXX11_OVERRIDE
  {
    return defaultValue_;
  }
    
    
    {} // namespace aria2

    
    #include 'AbstractCommand.h'
    
    class RequestGroup;
class DownloadEngine;
class Peer;
class BtRuntime;
class PieceStorage;
class PeerStorage;
class BtAnnounce;
    
    AnnounceList::AnnounceList(
    const std::deque<std::shared_ptr<AnnounceTier>>& announceTiers)
    : tiers_(announceTiers), currentTrackerInitialized_(false)
{
  resetIterator();
}
    
    private:
  TLSSessionSide side_;
  TLSVersion minTLSVer_;
  bool verifyPeer_;
  SecIdentityRef credentials_;
    
      std::string getAuthText() const;
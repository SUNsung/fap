
        
        extern JSClass  *jsb_cocosbuilder_CCBAnimationManager_class;
extern JSObject *jsb_cocosbuilder_CCBAnimationManager_prototype;
    
    #endif // __cocos2dx_csloader_h__

    
    
    
    
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,'cc.PhysicsWorld',0,&tolua_err)) goto tolua_lerror;
#endif
    
    GLESDebugDraw::GLESDebugDraw()
    : mRatio( 1.0f )
{
    this->initShader();
}
    
    
    {			ground->CreateFixture(&fd);
		}
    
    
    {	b2Body* m_body;
	b2Body* m_bullet;
	float32 m_x;
};
    
    			b2Body* prevBody = ground;
			for (int32 i = 0; i < e_count; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position.Set(-4.5f + 1.0f * i, 5.0f);
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&fd);
    }
    
    
    {} // namespace aria2

    
    AbstractHttpServerResponseCommand::AbstractHttpServerResponseCommand(
    cuid_t cuid, const std::shared_ptr<HttpServer>& httpServer,
    DownloadEngine* e, const std::shared_ptr<SocketCore>& socket)
    : Command(cuid),
      e_(e),
      socket_(socket),
      httpServer_(httpServer),
      readCheck_(false),
      writeCheck_(true)
{
  setStatus(Command::STATUS_ONESHOT_REALTIME);
  e_->addSocketForWriteCheck(socket_, this);
}
    
    namespace aria2 {
    }
    
    
    {  virtual std::unique_ptr<Command> getNextCommand() = 0;
};
    
    AnnounceTier::~AnnounceTier() = default;
    
    #include <string>
#include <memory>
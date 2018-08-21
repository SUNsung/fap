
        
        /// Sets up a ScrollView window, depending on the constructor variables.
void ScrollView::Initialize(const char* name, int x_pos, int y_pos, int x_size,
                            int y_size, int x_canvas_size, int y_canvas_size,
                            bool y_axis_reversed, const char* server_name) {
  // If this is the first ScrollView Window which gets created, there is no
  // network connection yet and we have to set it up in a different thread.
  if (stream_ == nullptr) {
    nr_created_windows_ = 0;
    stream_ = new SVNetwork(server_name, kSvPort);
    waiting_for_events_mu = new SVMutex();
    svmap_mu = new SVMutex();
    SendRawMessage(
        'svmain = luajava.bindClass('com.google.scrollview.ScrollView')\n');
    SVSync::StartThread(MessageReceiver, nullptr);
  }
    }
    
      // We do not own the model, we just reference it.
  // model may be nullptr if there is not a good model for this paragraph.
  const ParagraphModel *model;
    
      // datadir may still be empty:
  if (datadir.length() == 0) {
    datadir = './';
  }
    
    // Pseudo-accessors.
int IntFeatureMap::IndexFeature(const INT_FEATURE_STRUCT& f) const {
  return feature_space_.Index(f);
}
int IntFeatureMap::MapFeature(const INT_FEATURE_STRUCT& f) const {
  return feature_map_.SparseToCompact(feature_space_.Index(f));
}
int IntFeatureMap::MapIndexFeature(int index_feature) const {
  return feature_map_.SparseToCompact(index_feature);
}
INT_FEATURE_STRUCT IntFeatureMap::InverseIndexFeature(int index_feature) const {
  return feature_space_.PositionFromIndex(index_feature);
}
INT_FEATURE_STRUCT IntFeatureMap::InverseMapFeature(int map_feature) const {
  int index = feature_map_.CompactToSparse(map_feature);
  return feature_space_.PositionFromIndex(index);
}
void IntFeatureMap::DeleteMapFeature(int map_feature) {
  feature_map_.Merge(-1, map_feature);
  mapping_changed_ = true;
}
bool IntFeatureMap::IsMapFeatureDeleted(int map_feature) const {
  return feature_map_.IsCompactDeleted(map_feature);
}
    
    #ifndef incl_HPHP_WORKLOAD_STATS_H_
#define incl_HPHP_WORKLOAD_STATS_H_
    
    
    {}
    
    String getWrapperProtocol(const char* url, int* pathIndex = nullptr);
Wrapper* getWrapper(const String& scheme, bool warn = true);
Wrapper* getWrapperFromURI(const String& uri,
                           int* pathIndex = nullptr, bool warn = true);
    
    #include 'hphp/runtime/base/req-memory.h'
#include 'hphp/runtime/base/typed-value.h'
    
    bool js_cocos2dx_studio_ActionTimeline_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ActionTimeline_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ActionTimeline(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ActionTimeline_setFrameEventCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_clearFrameEndCallFuncs(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_setAnimationEndCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_addTimeline(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_getCurrentFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_getStartFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_pause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_start(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_removeTimeline(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_setLastFrameCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_IsAnimationInfoExists(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_getTimelines(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_play(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_getAnimationInfo(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_resume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_addFrameEndCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_removeAnimationInfo(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_getTimeSpeed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_addAnimationInfo(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_getDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_gotoFrameAndPause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_isPlaying(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_removeFrameEndCallFuncs(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_gotoFrameAndPlay(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_clearFrameEventCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_getEndFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_setTimeSpeed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_clearLastFrameCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_setDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_setCurrentFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_removeFrameEndCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionTimeline_ActionTimeline(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    #endif // __cocos2dx_csloader_h__

    
    #if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,'#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_getBodyA'.',&tolua_err);
#endif
    
    void GLESDebugDraw::DrawAABB(b2AABB* aabb, const b2Color& color)
{
    mShaderProgram->use();
    mShaderProgram->setUniformsForBuiltins();
    }
    
    
    {	const float multiplier = 30.0f;
	b2Vec2 vel = m_bombSpawnPoint - p;
	vel *= multiplier;
	LaunchBomb(m_bombSpawnPoint,vel);
	m_bombSpawning = false;
}
    
    	void Keyboard(unsigned char key)
	{
		switch (key)
		{
		case 'd':
			m_platform->SetType(b2_dynamicBody);
			break;
    }
    }
    
    		b2BodyDef bd;
		bd.type = b2_dynamicBody;
		bd.position = body1->GetPosition();
		bd.angle = body1->GetAngle();
    
    
    {
    {			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-6.0f + 6.0f * i, 10.0f);
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&fd);
		}
	}
    
    #include 'util/sync_point.h'
#include 'util/sync_point_impl.h'
    
    
    { private:
  const size_t lookahead_;
};
    
         using Logger::SetInfoLogLevel;
     using Logger::GetInfoLogLevel;
     // Write an entry to the log file with the specified format.
     virtual void Logv(const char* format, va_list ap);
     // Write an entry to the log file with the specified log level
     // and format.  Any log with level under the internal log level
     // of *this (see @SetInfoLogLevel and @GetInfoLogLevel) will not be
     // printed.
     virtual void Logv(const InfoLogLevel log_level,
         const char* format, va_list ap);
    
    #include 'modules/common/log.h'
#include 'modules/perception/obstacle/camera/common/camera.h'
#include 'modules/perception/obstacle/camera/common/visual_object.h'
#include 'modules/perception/obstacle/camera/interface/base_camera_transformer.h'
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
      /**
   * @brief Getter of the heading
   * @return The counter-clockwise angle between the x-axis and the heading-axis
   */
  double heading() const { return heading_; }
    
    namespace apollo {
namespace perception {
namespace traffic_light {
// @brief 2 Camera Projection project the Light into the image.
class MultiCamerasProjection {
 public:
  MultiCamerasProjection() = default;
    }
    }
    }
    }
    
    class TLProcSubnode : public Subnode {
 public:
  TLProcSubnode() = default;
  ~TLProcSubnode();
  apollo::common::Status ProcEvents() override;
    }
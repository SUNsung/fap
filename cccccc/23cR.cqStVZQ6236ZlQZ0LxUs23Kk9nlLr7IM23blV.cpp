
        
        namespace tesseract {
BOOL8 Tesseract::word_adaptable(  //should we adapt?
                                WERD_RES *word,
                                uinT16 mode) {
  if (tessedit_adaption_debug) {
    tprintf('Running word_adaptable() for %s rating %.4f certainty %.4f\n',
          word->best_choice == NULL ? '' :
          word->best_choice->unichar_string().string(),
          word->best_choice->rating(), word->best_choice->certainty());
  }
    }
    }
    
    double LLSQ::m() const {  // get gradient
  double covar = covariance();
  double x_var = x_variance();
  if (x_var != 0.0)
    return covar / x_var;
  else
    return 0.0;                    // too little
}
    
        // Writes to the given file. Returns false in case of error.
    bool Serialize(FILE* fp) const;
    // Reads from the given file. Returns false in case of error.
    // If swap is true, assumes a big/little-endian swap is needed.
    bool DeSerialize(bool swap, FILE* fp);
    
    static const int kBlockSize = 32768;
    
    
    {  Status FindTable(uint64_t file_number, uint64_t file_size, Cache::Handle**);
};
    
      // Encoded length of a Footer.  Note that the serialization of a
  // Footer will always occupy exactly this many bytes.  It consists
  // of two block handles and a magic number.
  enum {
    kEncodedLength = 2*BlockHandle::kMaxEncodedLength + 8
  };
    
    #endif // __cocos2dx_navmesh_h__
#endif //#if CC_USE_NAVMESH

    
    bool js_cocos2dx_physics3d_Physics3DRigidBody_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DRigidBody_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DRigidBody(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getFriction(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setAngularFactor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_addConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getRigidBody(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getTotalForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getConstraintCount(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_applyCentralForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setMassProps(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setFriction(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setKinematic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_applyImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_isKinematic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_applyTorque(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setCcdMotionThreshold(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setRollingFriction(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getCcdMotionThreshold(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getLinearFactor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_applyDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getAngularVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_applyTorqueImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setActive(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setLinearFactor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setLinearVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getLinearVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setCcdSweptSphereRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_applyForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setAngularVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_applyCentralImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getRollingFriction(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setCenterOfMassTransform(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setInvInertiaDiagLocal(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_removeConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getTotalTorque(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getInvMass(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getRestitution(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getCcdSweptSphereRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getHitFraction(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getAngularDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getInvInertiaDiagLocal(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getCenterOfMassTransform(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getAngularFactor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setRestitution(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_setHitFraction(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_getLinearDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DRigidBody_Physics3DRigidBody(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    {        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, 'cc.SimpleAudioEngine:preloadEffect'); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_preloadEffect'', nullptr);
            return 0;
        }
        cobj->preloadEffect(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:preloadEffect',argc, 1);
    return 0;
    
    
    
    #if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    
    
        GLfloat                glVertices[] = {
        p.x * mRatio, p.y * mRatio
    };
    
    				float32 gravity = 10.0f;
				float32 I = body->GetInertia();
				float32 mass = body->GetMass();
    
    	void PostSolve(b2Contact* contact, const b2ContactImpulse* impulse)
	{
		if (m_broke)
		{
			// The body already broke.
			return;
		}
    }
    
    	XLoggerInfo xlog_info;
	gettimeofday(&xlog_info.timeval, NULL);
	xlog_info.level = (TLogLevel)level;
	xlog_info.line = line;
	xlog_info.pid = (int)pid;
	xlog_info.tid = LONGTHREADID2INT(tid);
	xlog_info.maintid = LONGTHREADID2INT(maintid);;
    
            __FirstGetCreater(T::ServiceName());
    
    
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    ////////////////////////////////////////////////////////////////////////////////
/// Disclaimer: This is intended only as a partial stand-in for
/// std::pmr::memory_resource (C++17) as needed for developing a
/// hazptr prototype.
////////////////////////////////////////////////////////////////////////////////
    
    #pragma once
    
    [[noreturn]] void usage(const char* name) {
  std::cerr << folly::format(
      'Usage: {0}\n'
      '         list all huge page sizes and their mount points\n'
      '       {0} -cp <src_file> <dest_nameprefix>\n'
      '         copy src_file to a huge page file\n',
      name);
  exit(1);
}
    
      size_t remaining = specs.size();
  while (remaining != 0) {
    if (remaining >= readerCapacity) {
      EXPECT_EQ(readerCapacity, aioReader.pending());
      EXPECT_EQ(remaining - readerCapacity, aioQueue.queued());
    } else {
      EXPECT_EQ(remaining, aioReader.pending());
      EXPECT_EQ(0, aioQueue.queued());
    }
    auto completed = readerWait(&aioReader);
    size_t nrRead = completed.size();
    EXPECT_NE(nrRead, 0);
    remaining -= nrRead;
    }
    
      /**
   * Get the output file.
   */
  const folly::File& getFile() const {
    return file_;
  }
    
    #include <folly/experimental/logging/LogHandlerFactory.h>
    
    void LogCategory::processMessage(const LogMessage& message) const {
  // Make a copy of any attached LogHandlers, so we can release the handlers_
  // lock before holding them.
  //
  // In the common case there will only be a small number of handlers.  Use a
  // std::array in this case to avoid a heap allocation for the vector.
  const std::shared_ptr<LogHandler>* handlers = nullptr;
  size_t numHandlers = 0;
  constexpr uint32_t kSmallOptimizationSize = 5;
  std::array<std::shared_ptr<LogHandler>, kSmallOptimizationSize> handlersArray;
  std::vector<std::shared_ptr<LogHandler>> handlersVector;
  {
    auto lockedHandlers = handlers_.rlock();
    numHandlers = lockedHandlers->size();
    if (numHandlers <= kSmallOptimizationSize) {
      for (size_t n = 0; n < numHandlers; ++n) {
        handlersArray[n] = (*lockedHandlers)[n];
      }
      handlers = handlersArray.data();
    } else {
      handlersVector = *lockedHandlers;
      handlers = handlersVector.data();
    }
  }
    }
    
    namespace folly {
    }
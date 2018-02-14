
        
        void PartialRunMgr::ExecutorDone(int step_id, const Status& executor_status) {
  StatusCallback done;
  Status callback_status;
  {
    mutex_lock l(mu_);
    auto run_it = step_id_to_partial_run_.find(step_id);
    if (run_it == step_id_to_partial_run_.end()) {
      return;
    }
    // If we found the partial_run, we call the final callback, if it
    // exists.
    // It is guaranteed that run_it->second->final_callback is left empty
    // after the std::move call.
    done = std::move(run_it->second->final_callback);
    if (!executor_status.ok()) {
      run_it->second->final_status = executor_status;
    }
    callback_status = run_it->second->final_status;
    run_it->second->executor_done = true;
  }
  if (done != nullptr) {
    done(callback_status);
    mutex_lock l(mu_);
    step_id_to_partial_run_.erase(step_id);
  }
}
    
    
    {  // Calling ExecutorDone and PartialRunDone on the step_id should still only
  // result in the callback being called once.
  // This proves that the original PartialRun has been removed.
  partial_run_mgr.PartialRunDone(
      step_id, [&called](Status status) { called++; }, Status::OK());
  partial_run_mgr.ExecutorDone(step_id, Status::OK());
  EXPECT_EQ(1, called);
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Logs information about the dev nodes present on this machine: their
  // existence, permissions, accessibility from this uid/gid.
  static void LogDevNodeDiagnosticInformation();
    
          // Skip Sink/Source nodes.
      if (!out->IsOp()) continue;
    
    class SYCLDeviceContext : public DeviceContext {
 public:
  SYCLDeviceContext() {}
    }
    
    string VersionedComputationHandle::ToString() const {
  return tensorflow::strings::StrCat(handle.handle(), ':v', version);
}
    
    namespace swift {
    }
    
    namespace swift {
    }
    
    namespace swift {
    }
    
    namespace index {
    }
    
    public:
  static CodeBlock *create(MarkupContext &MC, StringRef LiteralContent,
                           StringRef Language);
    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
    #include 'llvm/ADT/Hashing.h'
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #include <boost/asio/detail/config.hpp>
    
      // Constructor for a half fenced block.
  explicit gcc_arm_fenced_block(half_t)
  {
  }
    
    #ifndef BOOST_ASIO_DETAIL_IMPL_EPOLL_REACTOR_HPP
#define BOOST_ASIO_DETAIL_IMPL_EPOLL_REACTOR_HPP
    
     private:
  /// The set of shared osquery service threads.
  std::vector<InternalThreadRef> service_threads_;
    
    /// External (extensions) SQL implementation of the osquery query API.
Status queryExternal(const std::string& query, QueryData& results);
    
    struct FlagDetail {
  std::string description;
  bool shell;
  bool external;
  bool cli;
  bool hidden;
};
    
    class DropPrivileges;
using DropPrivilegesRef = std::shared_ptr<DropPrivileges>;
    
      /**
   * @brief the distributed work ID of a carve
   *
   * This value should be used by the TLS endpoints where carve data is
   * aggregated, to tie together a distributed query with the carve data
   */
  std::string requestId_;
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
    namespace osquery {
    }
    
    bool js_cocos2dx_physics3d_Physics3DHingeConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DHingeConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DHingeConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getHingeAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getMotorTargetVelosity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getFrameOffsetA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getFrameOffsetB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setMaxMotorImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_enableAngularMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getUpperLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getMaxMotorImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getLowerLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setUseFrameOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getEnableAngularMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_enableMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getBFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setFrames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getUseFrameOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setAngularOnly(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setMotorTarget(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getAngularOnly(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_setAxis(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_getAFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DHingeConstraint_Physics3DHingeConstraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
#endif // __cocos2dx_navmesh_h__
#endif //#if CC_USE_NAVMESH

    
        GLfloat    glVertices[] = 
    {
        p1.x * mRatio, p1.y * mRatio,
        p2.x * mRatio, p2.y * mRatio
    };
    glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, glVertices);
    
    	m_world->Step(timeStep, settings->velocityIterations, settings->positionIterations);
    
    struct TestEntry
{
	const char *name;
	TestCreateFcn *createFcn;
};
    
    		b2Body* body2 = m_world->CreateBody(&bd);
		m_piece2 = body2->CreateFixture(&m_shape2, 1.0f);
    
    
    {			b2Vec2 anchor(-15.0f + 1.0f * e_count, 5.0f);
			jd.Initialize(prevBody, ground, anchor);
			m_world->CreateJoint(&jd);
		}
    
    
    {  size_t read = 0;
  std::string read_data;
  while (read < kWriteSize) {
    ASSERT_OK(seq_file->Read(kWriteSize - read, &result, scratch));
    read_data.append(result.data(), result.size());
    read += result.size();
  }
  ASSERT_TRUE(write_data == read_data);
  delete [] scratch;
}
    
      virtual const char* Name() const override;
    
        if (first_iter) {
      prev = curr;
      first_iter = 0;
    } else {
      if (comparator->Compare(prev.f->largest.user_key(),
                              curr.f->smallest.user_key()) >= 0) {
        // found overlapping files, return false
        return false;
      }
      assert(comparator->Compare(curr.f->largest.user_key(),
                                 prev.f->largest.user_key()) > 0);
      prev = curr;
    }
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    setMoveFiles
 * Signature: (JZ)V
 */
void Java_org_rocksdb_IngestExternalFileOptions_setMoveFiles(
    JNIEnv* env, jobject jobj, jlong jhandle, jboolean jmove_files) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  options->move_files = static_cast<bool>(jmove_files);
}
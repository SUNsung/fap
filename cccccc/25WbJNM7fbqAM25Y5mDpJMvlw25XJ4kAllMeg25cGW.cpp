
        
        #include 'tensorflow/core/kernels/cwise_ops_common.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Copy the input dimensions to output except make the last dimension 1.
  TF_LITE_ENSURE(context, NumDimensions(input) >= 1);
  TfLiteIntArray* output_size = TfLiteIntArrayCopy(input->dims);
  output_size->data[NumDimensions(input) - 1] = 1;
    
    void ConvertTransposeConvOperator(const Model& model,
                                  const TransposeConvOperator& src_op,
                                  GraphDef* tensorflow_graph) {
  tensorflow::NodeDef* conv2d_op = tensorflow_graph->add_node();
  conv2d_op->set_op('Conv2DBackpropInput');
  conv2d_op->set_name(src_op.outputs[0]);
  *conv2d_op->add_input() = src_op.inputs[0];
  *conv2d_op->add_input() = src_op.inputs[1];
  *conv2d_op->add_input() = src_op.inputs[2];
  (*conv2d_op->mutable_attr())['T'].set_type(DT_FLOAT);
  const string& weights_array_name = WalkUpToConstantArray(
      model, src_op.inputs[TransposeConvOperator::WEIGHTS]);
  const auto& weights_array = model.GetArray(weights_array_name);
  CHECK(weights_array.buffer->type == ArrayDataType::kFloat);
  ConvertFloatTensorConst(model, weights_array_name, AxesOrder::kOHWI,
                          AxesOrder::kHWOI, tensorflow_graph);
  auto& strides = (*conv2d_op->mutable_attr())['strides'];
  strides.mutable_list()->add_i(1);
  strides.mutable_list()->add_i(src_op.stride_height);
  strides.mutable_list()->add_i(src_op.stride_width);
  strides.mutable_list()->add_i(1);
  string padding;
  if (src_op.padding.type == PaddingType::kSame) {
    padding = 'SAME';
  } else if (src_op.padding.type == PaddingType::kValid) {
    padding = 'VALID';
  } else {
    LOG(FATAL) << 'Bad padding (only SAME and VALID are supported)';
  }
  (*conv2d_op->mutable_attr())['padding'].set_s(padding);
}
    
    #include 'flatbuffers/flexbuffers.h'
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include 'tensorflow/contrib/lite/toco/tooling_util.h'
    
    TEST(PartialRunMgr, PartialRunRemoved) {
  // Test that PartialRunMgr ensures that the PartialRun is deleted after
  // ExecutorDone and PartialRunDone are called.
  PartialRunMgr partial_run_mgr;
  int step_id = 1;
  CancellationManager* cancellation_manager;
  partial_run_mgr.FindOrCreate(step_id, &cancellation_manager);
    }
    
      // Abort and close all existing sessions, disconnecting their resources from
  // future sessions.
  //
  // Reset() allows misbehaving or slow sessions to be aborted and closed, and
  // causes their resources eventually to be released.  Reset() does not wait
  // for the computations in old sessions to cease; it merely starts the
  // process of tearing them down.  However, if a new session is started after
  // a Reset(), the new session is isolated from changes that old sessions
  // (started prior to the Reset()) may continue to make to resources, provided
  // all those resources are in containers listed in 'containers'.
  //
  // Old sessions may continue to have side-effects on resources not in
  // containers listed in 'containers', and thus may affect future
  // sessions' results in ways that are hard to predict.  Thus, if well-defined
  // behavior is desired, is it recommended that all containers be listed in
  // 'containers'.
  //
  // If the 'containers' vector is empty, the default container is assumed.
  // If the 'containers' vector is non-empty, the default container should be
  // listed explicitly.
  //
  // Sessions that support resource containers should override this function.
  virtual Status Reset(const SessionOptions& options,
                       const std::vector<string>& containers) {
    return errors::Unimplemented('Reset()');
  }
    
    // Prefetching support
//
// Defined behavior on some of the uarchs:
// PREFETCH_HINT_T0:
//   prefetch to all levels of the hierarchy (except on p4: prefetch to L2)
// PREFETCH_HINT_NTA:
//   p4: fetch to L2, but limit to 1 way (out of the 8 ways)
//   core: skip L2, go directly to L1
//   k8 rev E and later: skip L2, can go to either of the 2-ways in L1
enum PrefetchHint {
  PREFETCH_HINT_T0 = 3,  // More temporal locality
  PREFETCH_HINT_T1 = 2,
  PREFETCH_HINT_T2 = 1,  // Less temporal locality
  PREFETCH_HINT_NTA = 0  // No temporal locality
};
template <PrefetchHint hint>
void prefetch(const void* x);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    namespace tensorflow {
    }
    
    #endif

    
    void HHVM_FUNCTION(fb_setprofile,
  const Variant& callback,
  int64_t flags = EventHook::ProfileDefault
) {
  if (ThreadInfo::s_threadInfo->m_profiler != nullptr) {
    // phpprof is enabled, don't let PHP code override it
    return;
  }
  g_context->m_setprofileCallback = callback;
  g_context->m_setprofileFlags = flags;
  if (callback.isNull()) {
    HPHP::EventHook::Disable();
  } else {
    HPHP::EventHook::Enable();
  }
}
    
    int64_t Timer::stop() {
  if (!RuntimeOption::EvalJitTimer) return 0;
    }
    
    
    {
    {
    {}}}
    
    #include <folly/portability/Unistd.h>
    
    /*
 * RAII bookmark for scoped rewinding of frontier.
 */
struct CodeCursor : UndoMarker {
  CodeCursor(CodeBlock& cb, CodeAddress newFrontier) : UndoMarker(cb) {
    cb.setFrontier(newFrontier);
  }
    }
    
    
    {  auto const localStatics = index.lookup_local_static_types(f);
  for (auto i = size_t{0}; i < localStatics.size(); ++i) {
    if (localStatics[i].subtypeOf(BBottom)) continue;
    out << name << '::' << local_string(*f, i)
        << ' :: ' << show(localStatics[i]) << '\n';
  }
}
    
    bool mustBeArrLike(const Type& ty) {
  return ty.subtypeOf(BArr | BVec | BDict | BKeyset);
}
    
    std::string show(const php::Func& f, const Iter& iter) {
  return match<std::string>(
    iter,
    [&] (DeadIter) { return 'dead'; },
    [&] (const LiveIter& ti) {
      auto str = folly::sformat(
        '{}, {}',
        show(ti.types.key),
        show(ti.types.value)
      );
      if (ti.initBlock != NoBlockId) {
        folly::format(&str, ' (init=blk:{})', ti.initBlock);
      }
      if (ti.baseLocal != NoLocalId) {
        folly::format(&str, ' (base={})', local_string(f, ti.baseLocal));
      }
      if (ti.keyLocal != NoLocalId) {
        folly::format(&str, ' (key={})', local_string(f, ti.keyLocal));
      }
      return str;
    }
  );
}
    
      auto append_lar = [&](const LocalRange& range) {
    if (!range.count) {
      folly::toAppend('L:-', &ret);
    } else {
      folly::toAppend('L:', local_string(func, range.first), '+',
                      range.count, &ret);
    }
  };
    
    ///////////////////////////////////////////////////////////////////////////////
    
    bool js_cocos2dx_physics3d_Physics3DWorld_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DWorld_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DWorld(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DWorld_setGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_stepSimulate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_needCollisionChecking(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_collisionChecking(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_setGhostPairCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removeAllPhysics3DObjects(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_isDebugDrawEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removeAllPhysics3DConstraints(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_getGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removePhysics3DConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_addPhysics3DObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_setDebugDrawEnable(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removePhysics3DObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_getPhysicsObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_addPhysics3DConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_debugDraw(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_sweepShape(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_Physics3DWorld(JSContext *cx, uint32_t argc, jsval *vp);
    
    
#endif // __cocos2dx_cocosbuilder_h__

    
    
    
    
    
    			for (int i = 0; i < 10; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
    }
    
    
    {
    {			body->CreateFixture(&fd);
		}
	}
    
        jobject     (*GetObjectField)(JNIEnv*, jobject, jfieldID);
    jboolean    (*GetBooleanField)(JNIEnv*, jobject, jfieldID);
    jbyte       (*GetByteField)(JNIEnv*, jobject, jfieldID);
    jchar       (*GetCharField)(JNIEnv*, jobject, jfieldID);
    jshort      (*GetShortField)(JNIEnv*, jobject, jfieldID);
    jint        (*GetIntField)(JNIEnv*, jobject, jfieldID);
    jlong       (*GetLongField)(JNIEnv*, jobject, jfieldID);
    jfloat      (*GetFloatField)(JNIEnv*, jobject, jfieldID);
    jdouble     (*GetDoubleField)(JNIEnv*, jobject, jfieldID);
    
        Value(void)
    : unit(YGUnitUndefined)
    , value(0.0)
    {
    }
    
    // TODO(t10737622): Improve on-device symbolification
void getStackTraceSymbols(vector<StackTraceElement>& symbols,
                          const vector<InstructionPointer>& trace) {
  symbols.clear();
  symbols.reserve(trace.size());
    }
    
    
    {  ASSERT_TRUE(YGNodeLayoutGetHadOverflow(root));
}
    
     public:
    
     public: // Style setters
    
    
    {} // namespace facebook

    
    
    {
    {}  // end namespace internal
}  // end namespace benchmark
    
    // Parses a string for a Double flag, in the form of
// '--flag=value'.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseDoubleFlag(const char* str, const char* flag, double* value);
    
    
    {}  // end namespace benchmark

    
        data.real_accumulated_time = Stat.compute_(real_accumulated_time_stat);
    data.cpu_accumulated_time = Stat.compute_(cpu_accumulated_time_stat);
    data.bytes_per_second = Stat.compute_(bytes_per_second_stat);
    data.items_per_second = Stat.compute_(items_per_second_stat);
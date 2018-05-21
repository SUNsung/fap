
        
        class SmoothHingeLossUpdater : public DualLossUpdater {
 public:
  // Computes the updated dual variable (corresponding) to a single example. The
  // updated dual value maximizes the objective function of the dual
  // optimization problem associated with smooth hinge loss. The computations
  // are detailed in readme.md.
  double ComputeUpdatedDual(const int num_partitions, const double label,
                            const double example_weight,
                            const double current_dual, const double wx,
                            const double weighted_example_norm) const final {
    // Intutitvely there are 3 cases:
    // a. new optimal value of the dual variable falls within the admissible
    // range [0, 1]. In this case we set new dual to this value.
    // b. new optimal value is < 0. Then, because of convexity, the optimal
    // valid value for new dual = 0
    // c. new optimal value > 1.0. Then new optimal value should be set to 1.0.
    const double candidate_optimal_dual =
        current_dual +
        (label - wx - gamma * current_dual) /
            (num_partitions * example_weight * weighted_example_norm + gamma);
    if (label * candidate_optimal_dual < 0) {
      return 0.0;
    }
    if (label * candidate_optimal_dual > 1.0) {
      return label;
    }
    return candidate_optimal_dual;
  }
    }
    
    
    {}  // end namespace Eigen
    
    
    {  void CopyDeviceTensorToCPU(const Tensor *device_tensor, StringPiece edge_name,
                             Device *device, Tensor *cpu_tensor,
                             StatusCallback done) override;
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    class TextLineReaderOp : public ReaderOpKernel {
 public:
  explicit TextLineReaderOp(OpKernelConstruction* context)
      : ReaderOpKernel(context) {
    int skip_header_lines = -1;
    OP_REQUIRES_OK(context,
                   context->GetAttr('skip_header_lines', &skip_header_lines));
    OP_REQUIRES(context, skip_header_lines >= 0,
                errors::InvalidArgument('skip_header_lines must be >= 0 not ',
                                        skip_header_lines));
    Env* env = context->env();
    SetReaderFactory([this, skip_header_lines, env]() {
      return new TextLineReader(name(), skip_header_lines, env);
    });
  }
};
    
        NodeDef* const_node2 = graph_def.add_node();
    const_node2->set_name('const_node2');
    const_node2->set_op('Const');
    
      int64 start(int d) const {
    DCHECK_GE(d, 0);
    DCHECK_LT(d, dims());
    return starts_[d];
  }
    
    void AddDeviceMetadata(const std::map<uint32, const Device *> &devices,
                       string *json) {
  for (const auto &pair : devices) {
    uint32 device_id = pair.first;
    const Device &device = *pair.second;
    if (!device.name().empty()) {
      Appendf(json,
              R'({'ph':'M','pid':%u,'name':'process_name',)'
              R'('args':{)',
              device_id);
      AppendEscapedName(json, device.name());
      StrAppend(json, '}},');
    }
    Appendf(json,
            R'({'ph':'M','pid':%u,'name':'process_sort_index',)'
            R'('args':{'sort_index':%u}},)',
            device_id, device_id);
    // Convert to a std::map so that devices are sorted by the device id.
    std::map<uint32, const Resource *> sorted_resources;
    for (const auto &pair : device.resources()) {
      sorted_resources[pair.first] = &pair.second;
    }
    AddResourceMetadata(device_id, sorted_resources, json);
  }
}
    
      /** \brief An error tagged with where in the JSON text it was encountered.
   *
   * The offsets give the [start, limit) range of bytes within the text. Note
   * that this is bytes, not codepoints.
   *
   */
  struct StructuredError {
    size_t offset_start;
    size_t offset_limit;
    std::string message;
  };
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_CONTAINERS_H__

    
    TEST(AnyTest, TestPackAndUnpackAny) {
  // We can pack a Any message inside another Any message.
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(any);
    }
    
    // CodeGenerator implementation which generates a C++ source file and
// header.  If you create your own protocol compiler binary and you want
// it to support C++ output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT CppGenerator : public CodeGenerator {
 public:
  CppGenerator();
  ~CppGenerator();
    }
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    #include <string>
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    class RepeatedPrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options);
  ~RepeatedPrimitiveFieldGenerator();
    }
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
    std::unique_ptr<ScenarioResult> RunScenario(
    const grpc::testing::ClientConfig& client_config, size_t num_clients,
    const grpc::testing::ServerConfig& server_config, size_t num_servers,
    int warmup_seconds, int benchmark_seconds, int spawn_local_worker_count,
    const grpc::string& qps_server_target_override,
    const grpc::string& credential_type, bool run_inproc);
    
    #include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
      bool SetFailedAndReturnFalse() {
    failed_ = true;
    return false;
  }
    
    #include <algorithm>
    
    #endif  // GRPC_INTERNAL_COMPILER_PYTHON_PRIVATE_GENERATOR_H

    
    
    {}  // namespace grpc

    
    TEST_F(CodegenTestMinimal, Build) {}
    
    namespace osquery {
namespace tables {
    }
    }
    
    /// Helper replacement for REGISTER, used within extension modules.
#define REGISTER_MODULE(t, r, n)                                               \
  auto t##Module = Registry::get().registry(r)->add(n, std::make_shared<t>());
    
    
    {
    { private:
  friend class TLSConfigTests;
};
}

    
    
    {
    {  ::strncpy(dst, src, count);
  return Status(0, 'OK');
}
}

    
    class EphemeralDatabasePlugin : public DatabasePlugin {
  using DBType = std::map<std::string, std::map<std::string, std::string>>;
    }
    
    bool js_cocos2dx_navmesh_NavMeshAgent_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_navmesh_NavMeshAgent_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_navmesh_NavMeshAgent(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_navmesh(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_navmesh_NavMeshAgent_setMaxSpeed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_syncToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_completeOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getSeparationWeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setAutoTraverseOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getCurrentVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_syncToAgent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_isOnOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setSeparationWeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_pause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setAutoOrientation(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getMaxSpeed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getCurrentOffMeshLinkData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_resume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_stop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setMaxAcceleration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setOrientationRefAxes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getMaxAcceleration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getObstacleAvoidanceType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setObstacleAvoidanceType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getNavMeshAgentComponentName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_NavMeshAgent(JSContext *cx, uint32_t argc, jsval *vp);
    
    extern JSClass  *jsb_cocos2d_Physics3DComponent_class;
extern JSObject *jsb_cocos2d_Physics3DComponent_prototype;
    
    bool js_cocos2dx_studio_ColorFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ColorFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ColorFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ColorFrame_getColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ColorFrame_setColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ColorFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ColorFrame_ColorFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    int register_all_cocos2dx_experimental(lua_State* tolua_S);
    
    #if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,'#ferror in function 'lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_hitTest'.',&tolua_err);
#endif
    
    
    
    				b2Vec2 anchor(160.0f + 2.0f * i, -0.125f);
				jd.Initialize(prevBody, body, anchor);
				m_world->CreateJoint(&jd);
    
    #ifndef GUETZLI_COMPARATOR_H_
#define GUETZLI_COMPARATOR_H_
    
    bool EncodeSOF(const JPEGData& jpg, JPEGOutput out) {
  const size_t ncomps = jpg.components.size();
  const size_t marker_len = 8 + 3 * ncomps;
  std::vector<uint8_t> data(marker_len + 2);
  size_t pos = 0;
  data[pos++] = 0xff;
  data[pos++] = 0xc1;
  data[pos++] = static_cast<uint8_t>(marker_len >> 8);
  data[pos++] = marker_len & 0xff;
  data[pos++] = kJpegPrecision;
  data[pos++] = jpg.height >> 8;
  data[pos++] = jpg.height & 0xff;
  data[pos++] = jpg.width >> 8;
  data[pos++] = jpg.width & 0xff;
  data[pos++] = static_cast<uint8_t>(ncomps);
  for (size_t i = 0; i < ncomps; ++i) {
    data[pos++] = jpg.components[i].id;
    data[pos++] = ((jpg.components[i].h_samp_factor << 4) |
                      (jpg.components[i].v_samp_factor));
    const size_t quant_idx = jpg.components[i].quant_idx;
    if (quant_idx >= jpg.quant.size()) {
      return false;
    }
    data[pos++] = jpg.quant[quant_idx].index;
  }
  return JPEGWrite(out, &data[0], pos);
}
    
    #include 'guetzli/jpeg_data.h'
    
    #include <stdint.h>
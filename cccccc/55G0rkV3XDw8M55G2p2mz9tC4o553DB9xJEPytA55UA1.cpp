
        
        std::vector<string> RunCppShapeInference(
    int graph_def_version, const string& serialized_node_def,
    const std::vector<string>& input_serialized_shapes,
    PyObject* input_constant_tensor_values,
    const std::vector<string>& input_constant_tensor_as_shape_values,
    TF_Status* out_status) {
  if (!PyList_Check(input_constant_tensor_values)) {
    TF_SetStatus(out_status, TF_INVALID_ARGUMENT, 'Invalid python value');
    return std::vector<string>();
  }
    }
    
    void CostAnalyzer::PredictCosts(CostEstimator* cost_estimator,
                                CostGraphDef* cost_graph, int64* total_time) {
  TF_CHECK_OK(cost_estimator->Initialize(*item_));
  Costs costs;
  const Status status =
      cost_estimator->PredictCosts(item_->graph, cost_graph, &costs);
  *total_time = costs.execution_time.count();
  if (!status.ok()) {
    LOG(ERROR) << 'Could not estimate the cost for item ' << item_->id << ': '
               << status.error_message();
    return;
  }
}
    
    namespace tensorflow {
namespace grappler {
    }
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_
#define TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
    
    
    {  tensorflow::DeviceNameUtils::ParsedName parsed_name;
  if (!tensorflow::DeviceNameUtils::ParseFullName(node_def.device(),
                                                  &parsed_name)) {
    LOG(WARNING) << 'Failed to parse device from node_def: '
                 << node_def.ShortDebugString();
    return '';
  }
  string class_name = '';
  tensorflow::FindKernelDef(tensorflow::DeviceType(parsed_name.type.c_str()),
                            node_def, nullptr /* kernel_def */, &class_name)
      .IgnoreError();
  return class_name;
}
    
    // Returns the kernel class name required to execute <node_def> on the device
// type of <node_def.device>, or an empty string if the kernel class is not
// found or the device name is invalid.
string TryFindKernelClass(const string& serialized_node_def);
    
    // Converts a parsed driver version or status value to natural string form.
string DriverVersionStatusToString(port::StatusOr<DriverVersion> version);
    
    size_t num_threads = 31;
size_t work_chunk  = 120;
    
    
    {  SrcPos start;
  SrcPos past;
};
    
    void Assembler::limmediate(const Reg64& rt, int64_t imm64,
                           ImmType immt, bool immMayChange) {
  static_assert(
      std::is_unsigned<
        decltype(HPHP::RuntimeOption::EvalPPC64MinTOCImmSize)>::value,
      'RuntimeOption::EvalPPC64MinTOCImmSize is expected to be unsigned.');
  always_assert(HPHP::RuntimeOption::EvalPPC64MinTOCImmSize <= 64);
    }
    
    APCHandle::Pair APCCollection::Make(const ObjectData* obj,
                                    APCHandleLevel level,
                                    bool unserializeObj) {
  auto bail = [&] {
    return APCString::MakeSerializedObject(
      apc_serialize(Variant(const_cast<ObjectData*>(obj)))
    );
  };
    }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    
    {}
    
    template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 1, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 1, rate, fillCols);
}
    
    void logAHMSubMapWarning(folly::StringPiece mapName);
    
    
    {} // namespace aria2

    
    #include 'DHTAbstractMessage.h'
#include 'A2STR.h'
#include 'ValueBase.h'
    
      uint32_t temp32;
  uint64_t temp64;
  // time
  if (version == 2) {
    READ_CHECK(fp, &temp32, sizeof(temp32));
    serializedTime_.setTimeFromEpoch(ntohl(temp32));
    // 4bytes reserved
    readBytes(fp, buf, buf.size(), 4);
  }
  else {
    READ_CHECK(fp, &temp64, sizeof(temp64));
    serializedTime_.setTimeFromEpoch(ntoh64(temp64));
  }
    
    
    {} // namespace aria2

    
    namespace aria2 {
    }
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createBucketRefreshTask()
{
  auto task = std::make_shared<DHTBucketRefreshTask>();
  setCommonProperty(task);
  return task;
}
    
    public:
  DHTTaskFactoryImpl();
    
    bool DHTTokenTracker::validateToken(const std::string& token,
                                    const unsigned char* infoHash,
                                    const std::string& ipaddr,
                                    uint16_t port) const
{
  for (auto& elem : secret_) {
    if (generateToken(infoHash, ipaddr, port, elem) == token) {
      return true;
    }
  }
  return false;
}
    
    #endif // D_DHT_TOKEN_UPDATE_COMMAND_H

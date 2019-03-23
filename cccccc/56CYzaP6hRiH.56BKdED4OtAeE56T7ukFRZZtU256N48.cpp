
        
        Status RunCppShapeInferenceImpl(
    int graph_def_version, const string& serialized_node_def,
    const std::vector<string>& input_serialized_shapes,
    const std::vector<PyObject*>& input_constant_tensor_values,
    const std::vector<string>& input_constant_tensor_as_shape_values,
    std::vector<string>* output_tensor_shape_protos,
    string* input_tensors_needed_out) {
  tensorflow::NodeDef node;
  if (!node.ParseFromString(serialized_node_def)) {
    return errors::InvalidArgument(
        'Error parsing node_def during cpp shape inference');
  }
  DCHECK_EQ(output_tensor_shape_protos->size(), 0);
    }
    
    #include 'tensorflow/python/grappler/model_analyzer.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_

    
    // Safe containers for an owned TFE_TensorHandle. On destruction, the handle
// will be deleted by TFE_DeleteTensorHandle.
using Safe_TFE_TensorHandlePtr =
    std::unique_ptr<TFE_TensorHandle, detail::TFETensorHandleDeleter>;
Safe_TFE_TensorHandlePtr make_safe(TFE_TensorHandle* handle);
    
      const tensorflow::OpRegistrationData* op_reg_data;
  auto status =
      tensorflow::OpRegistry::Global()->LookUp(node_def.op(), &op_reg_data);
  if (!status.ok()) {
    LOG(WARNING) << 'Op ' << node_def.op() << ' not found: ' << status;
    return '';
  }
  AddDefaultsToNodeDef(op_reg_data->op_def, &node_def);
    
      bool operator!=(const DeviceOptions& other) const {
    return !(*this == other);
  }
    
    //////////////////////////////////////////////////////////////////////
    
    CONTAINER_CONFIG_BODY(std::vector<uint32_t>, UInt32Vector)
CONTAINER_CONFIG_BODY(std::vector<std::string>, StrVector)
namespace { using simap = std::unordered_map<std::string, int>; }
CONTAINER_CONFIG_BODY(simap, IntMap)
CONTAINER_CONFIG_BODY(ConfigMap, Map)
CONTAINER_CONFIG_BODY(ConfigMapC, MapC)
CONTAINER_CONFIG_BODY(ConfigSet, Set)
CONTAINER_CONFIG_BODY(ConfigSetC, SetC)
CONTAINER_CONFIG_BODY(ConfigFlatSet, FlatSet)
CONTAINER_CONFIG_BODY(ConfigIMap, IMap)
    
      CLASSNAME_IS('OutputFile');
  // overriding ResourceData
  const String& o_getClassNameHook() const override { return classnameof(); }
    
    template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done) {
  if (LIKELY(map.numSubMaps() == 1) ||
      done.load(std::memory_order_relaxed) ||
      done.exchange(true, std::memory_order_relaxed)) {
    return;
  }
    }
    
    const StaticString s_php('PHP');
const StaticString s_input('Input');
const StaticString s_temp('TEMP');
const StaticString s_memory('MEMORY');
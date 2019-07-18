
        
          /// Get the function name mangled for use with PGO.
  StringRef getPGOFuncName() const { return PGOFuncName; }
    
    static void viewCFGHelper(const SILFunction* f, bool skipBBContents) {
/// When asserts are disabled, this should be a NoOp.
#ifndef NDEBUG
    // If we have a target function, only print that function out.
    if (!TargetFunction.empty() && !(f->getName().str() == TargetFunction))
      return;
    }
    
      void *operator new(size_t Bytes) throw() = delete;
  void operator delete(void *Data) throw() = delete;
  void *operator new(size_t Bytes, void *Mem) throw() = delete;
  void *operator new(size_t Bytes, ASTContext &C,
                     unsigned Alignment = 8);
    
    using namespace swift;
using namespace swift::serialization;
using namespace llvm::support;
using swift::version::Version;
using llvm::BCBlockRAII;
    
    namespace llvm {
    }
    
        case ConstraintKind::DynamicTypeOf: {
      // Direct binding of the left-hand side could result
      // in `DynamicTypeOf` failure if right-hand side is
      // bound (because 'Bind' requires equal types to
      // succeed), or left is bound to Any which is not an
      // [existential] metatype.
      auto dynamicType = constraint->getFirstType();
      if (auto *tv = dynamicType->getAs<TypeVariableType>()) {
        if (tv->getImpl().getRepresentative(nullptr) == typeVar)
          return {typeVar};
      }
    }
    
      /// Cast to a specific (known) type.
  template<typename T>
  const T &castTo() const {
    assert(stored->typeID == TypeID<T>::value);
    return static_cast<const Holder<T> *>(stored.get())->value;
  }
    
    /// Splits the edges between two basic blocks.
///
/// Updates dominance information and loop information if not null.
void splitEdgesFromTo(SILBasicBlock *From, SILBasicBlock *To,
                      DominanceInfo *DT = nullptr, SILLoopInfo *LI = nullptr);
    
      SILDebugScope(SILLocation Loc, SILFunction *SILFn,
                const SILDebugScope *ParentScope = nullptr,
                const SILDebugScope *InlinedCallSite = nullptr);
    
        auto TR = readTypeFromMetadata(MetadataAddress);
    auto kind = this->readKindFromMetadata(MetadataAddress);
    if (TR != nullptr && kind) {
      switch (*kind) {
      case MetadataKind::Class: {
        // Figure out where the stored properties of this class begin
        // by looking at the size of the superclass
        auto start =
            this->readInstanceStartAndAlignmentFromClassMetadata(MetadataAddress);
    }
    }
    }
    
    class App {
 public:
  static void Call(const std::string& method,
                   const base::ListValue& arguments);
    }
    
    #include 'base/logging.h'
#include 'base/strings/string16.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
    
        int menu_id;
    if (option.GetInteger('submenu', &menu_id))
      SetSubmenu(dispatcher_host()->GetApiObject<Menu>(menu_id));
    std::string key;
    if (option.GetString('key',&key)){
      enable_shortcut = true;
      std::string modifiers = '';
      option.GetString('modifiers',&modifiers);
      modifiers_mask = GdkModifierType(0);
      if (modifiers.size() != 0){
        if (modifiers.find('ctrl') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_CONTROL_MASK);
        }
        if (modifiers.find('alt') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_MOD1_MASK);
        }
        if (modifiers.find('super') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SUPER_MASK);
        }
        if (modifiers.find('meta') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_META_MASK);
        }
        
        if (modifiers.find('shift') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SHIFT_MASK);
        }
    }
    }
    
    void ChannelArguments::SetSslTargetNameOverride(const grpc::string& name) {
  SetString(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG, name);
}
    
    namespace grpc_core {
    }
    
    template<typename DType>
struct MultiAllFiniteCPUKernel {
  MSHADOW_XINLINE static void Map(int i, const MultiAllFiniteKernelParam<DType> param,
                                  float* out) {
    bool is_finite = true;
    for (int index = 0; index < param.count; ++index) {
      if ((size_t)i < param.sizes[index]) {
        is_finite = std::isfinite(static_cast<float>(param.arrays[index][i])) ? is_finite : false;
      }
    }
    if (!is_finite) {
      out[0] = 0.;
    }
  }
};
    
    
    {  bool all_inferred = true;
  for (size_t i = 0; i < in_attrs->size(); ++i) {
    // forward inference
    SHAPE_ASSIGN_CHECK(*out_attrs, i, (*in_attrs)[i]);
    // backward inference
    SHAPE_ASSIGN_CHECK(*in_attrs, i, (*out_attrs)[i]);
    all_inferred = all_inferred && !shape_is_none((*in_attrs)[i]);
  }
  return all_inferred;
}
    
          DType sum = 0;
      index_t count = 0;
      index_t gw = floor(static_cast<DType>(pw) * group_size / pooled_width);
      index_t gh = floor(static_cast<DType>(ph) * group_size / pooled_height);
      gw = min(max(gw, static_cast<index_t>(0)), group_size - 1);
      gh = min(max(gh, static_cast<index_t>(0)), group_size - 1);
    
    int MXExecutorBindEX(SymbolHandle symbol_handle,
                     int dev_type,
                     int dev_id,
                     mx_uint num_map_keys,
                     const char** map_keys,
                     const int* map_dev_types,
                     const int* map_dev_ids,
                     mx_uint len,
                     NDArrayHandle *in_args,
                     NDArrayHandle *arg_grad_store,
                     mx_uint *grad_req_type,
                     mx_uint aux_states_len,
                     NDArrayHandle *aux_states,
                     ExecutorHandle shared_exec,
                     ExecutorHandle *out) {
  API_BEGIN();
  nnvm::Symbol *symb = static_cast<nnvm::Symbol*>(symbol_handle);
  Context ctx = Context::Create(static_cast<Context::DeviceType>(dev_type), dev_id);
  std::map<std::string, Context> ctx_map;
  for (mx_uint i = 0; i < num_map_keys; ++i) {
    ctx_map[std::string(map_keys[i])] = Context::Create(
        static_cast<Context::DeviceType>(map_dev_types[i]), map_dev_ids[i]);
  }
  NDArray **in_args_ptr = reinterpret_cast<NDArray**>(in_args);
  NDArray **arg_grad_ptr = reinterpret_cast<NDArray**>(arg_grad_store);
  NDArray **aux_states_ptr = reinterpret_cast<NDArray**>(aux_states);
  std::vector<NDArray> in_args_vec;
  std::vector<NDArray> arg_grad_vec;
  std::vector<OpReqType> grad_req_vec;
  std::vector<NDArray> aux_states_vec;
  for (mx_uint i = 0; i < len; ++i) {
    in_args_vec.push_back(*(in_args_ptr[i]));
    if (arg_grad_ptr[i] == nullptr) {
      arg_grad_vec.emplace_back();
      grad_req_vec.push_back(kNullOp);
    } else {
      arg_grad_vec.push_back(*(arg_grad_ptr[i]));
      grad_req_vec.push_back(static_cast<OpReqType>(grad_req_type[i]));
    }
  }
  for (mx_uint i = 0; i < aux_states_len; ++i) {
    aux_states_vec.push_back(*(aux_states_ptr[i]));
  }
  *out = Executor::Bind(*symb, ctx, ctx_map, in_args_vec,
                        arg_grad_vec, grad_req_vec, aux_states_vec,
                        reinterpret_cast<Executor*>(shared_exec));
  API_END();
}
    
      API_BEGIN();
  CachedOpPtr op = *static_cast<CachedOpPtr*>(handle);
  std::vector<NDArray*> ndinputs;
  ndinputs.reserve(num_inputs);
  for (int i = 0; i < num_inputs; ++i) {
    ndinputs.push_back(reinterpret_cast<NDArray*>(inputs[i]));
  }
    
      // limit inference to part of the graph
  uint32_t node_start = 0, node_end = idx.num_nodes();
  if (ret.attrs.count('node_range')) {
    const auto& range = ret.GetAttr<std::pair<uint32_t, uint32_t> >('node_range');
    node_start = range.first;
    node_end = range.second;
    CHECK_GE(node_start, 0);
    CHECK_LE(node_end, idx.num_nodes());
    ret.attrs.erase('node_range');
  }
  uint32_t entry_start = 0, entry_end = idx.num_node_entries();
  if (ret.attrs.count('entry_range')) {
    const auto& range = ret.GetAttr<std::pair<uint32_t, uint32_t> >('entry_range');
    entry_start = range.first;
    entry_end = range.second;
    CHECK_GE(entry_start, 0);
    CHECK_LE(entry_end, idx.num_node_entries());
    ret.attrs.erase('entry_range');
  }
  // populate the node attribute vector
  if (dispatch_mode_name != nullptr) {
    if (ret.attrs.count(dispatch_mode_name) != 0) {
      dispatch_modes = ret.MoveCopyAttr<NodeAttrVector>(dispatch_mode_name);
    } else {
      LOG(FATAL) << 'Node attribute ' << dispatch_mode_name << ' does not exist in the graph';
    }
  }
    
    template<typename xpu>
void QuantizeCompute(const nnvm::NodeAttrs& attrs,
                     const OpContext& ctx,
                     const std::vector<TBlob>& inputs,
                     const std::vector<OpReqType>& req,
                     const std::vector<TBlob>& outputs) {
  using namespace mshadow;
  using namespace mxnet_op;
  using mshadow::red::limits::MinValue;
  using mshadow::red::limits::MaxValue;
  Stream<xpu> *s = ctx.get_stream<xpu>();
    }
    
      Kernel<QuantizationRangeForS8S8MultiplicationStruct, cpu>::Launch(s, 1, min_output.dptr_,
      max_output.dptr_, min_data.dptr_, max_data.dptr_, min_weight.dptr_, max_weight.dptr_);
  if (!param.no_bias) {
    Tensor<cpu, 1, int8_t> bias = in_data[fullc::kBias].get_with_shape<cpu, 1, int8_t>(
      Shape1(wshape[0]), s);
    Tensor<cpu, 1, float> min_bias =
      in_data[num_inputs + quantized_fullc::kBiasMin].get<cpu, 1, float>(s);
    Tensor<cpu, 1, float> max_bias =
      in_data[num_inputs + quantized_fullc::kBiasMax].get<cpu, 1, float>(s);
    }
    
    #endif  // MXNET_STORAGE_POOLED_STORAGE_MANAGER_H_

    
        Tensor<cpu, 1, int64_t> workspace =
        ctx.requested[0].get_space_typed<cpu, 1, int64_t>(Shape1(2 * naxes), stream);
    
    void ExeJsTask::addExtraArg(String arg) {
    this->extraArgs.push_back(arg);
}
    
      virtual ~RenderObject();
    
    #ifndef CORE_BASE_STRING_UTIL_H
#define CORE_BASE_STRING_UTIL_H
    
    ScopedJString::ScopedJString(JNIEnv *env, jstring _jstring)
        : m_env(env), m_jstring(_jstring), m_chars(nullptr), m_len(0) {
}
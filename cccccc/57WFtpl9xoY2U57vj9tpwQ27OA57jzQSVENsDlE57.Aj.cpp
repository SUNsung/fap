
        
          /// Sets the HasOwnership flag to false. This signals to SIL that no
  /// ownership instructions should be in this function any more.
  void setOwnershipEliminated() {
    HasOwnership = false;
  }
    
    KNOWN_STDLIB_TYPE_DECL(String, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(StaticString, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(Substring, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(Array, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(Set, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(Sequence, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(Dictionary, NominalTypeDecl, 2)
KNOWN_STDLIB_TYPE_DECL(CollectionDifference, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(AnyHashable, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(MutableCollection, ProtocolDecl, 1)
KNOWN_STDLIB_TYPE_DECL(Hasher, NominalTypeDecl, 0)
    
        /// Determine whether this value is equivalent to another.
    ///
    /// The caller guarantees that the type IDs are the same.
    virtual bool equals(const HolderBase &other) const override {
      assert(typeID == other.typeID && 'Caller should match type IDs');
      return value == static_cast<const Holder<T> &>(other).value;
    }
    
    /// This class stores a lexical scope as it is represented in the
/// debug info. In contrast to LLVM IR, SILDebugScope also holds all
/// the inlining information. In LLVM IR the inline info is part of
/// DILocation.
class SILDebugScope : public SILAllocated<SILDebugScope> {
public:
  /// The AST node this lexical scope represents.
  SILLocation Loc;
  /// Always points to the parent lexical scope.
  /// For top-level scopes, this is the SILFunction.
  PointerUnion<const SILDebugScope *, SILFunction *> Parent;
  /// An optional chain of inlined call sites.
  ///
  /// If this scope is inlined, this points to a special 'scope' that
  /// holds the location of the call site.
  const SILDebugScope *InlinedCallSite;
    }
    
    // Capture descriptors describe the layout of a closure context
// object. Unlike nominal types, the generic substitutions for a
// closure context come from the object, and not the metadata.
class CaptureDescriptor {
  const CaptureTypeRecord *getCaptureTypeRecordBuffer() const {
    return reinterpret_cast<const CaptureTypeRecord *>(this + 1);
  }
    }
    
    
    {  return Info;
}
    
    #include 'swift/ABI/MetadataValues.h'
#include 'swift/Basic/LLVMInitialize.h'
#include 'swift/Demangling/Demangle.h'
#include 'swift/Reflection/ReflectionContext.h'
#include 'swift/Reflection/TypeRef.h'
#include 'swift/Reflection/TypeRefBuilder.h'
#include 'llvm/ADT/StringSet.h'
#include 'llvm/Object/Archive.h'
#include 'llvm/Object/COFF.h'
#include 'llvm/Object/ELF.h'
#include 'llvm/Object/ELFObjectFile.h'
#include 'llvm/Object/MachOUniversal.h'
#include 'llvm/Support/CommandLine.h'
    
    
    {  template<typename T> bool RemoveListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i!=listerners_.end()) {
      delete i->second;
      listerners_.erase(i);
      return true;
    }
    return false;
  }
private:
  DISALLOW_COPY_AND_ASSIGN(EventListener);
};
    
    
    {  gtk_widget_show(menu_);
  g_object_ref_sink(G_OBJECT(menu_));
}
    
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
    
    bool NwAppClearAppCacheFunction::RunNWSync(base::ListValue* response, std::string* error) {
  std::string manifest;
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(0, &manifest));
    }
    
        ~ClipboardWriter() {
      scw_.reset();
    }
    
    #include 'src/proto/grpc/testing/echo.grpc.pb.h'
    
    void ChannelArguments::SetResourceQuota(
    const grpc_impl::ResourceQuota& resource_quota) {
  SetPointerWithVtable(GRPC_ARG_RESOURCE_QUOTA,
                       resource_quota.c_resource_quota(),
                       grpc_resource_quota_arg_vtable());
}
    
    
    { private:
  gpr_event* ev_;
};
    
    void DefaultGlobalConfigEnvErrorFunction(const char* error_message) {
  gpr_log(GPR_ERROR, '%s', error_message);
}
    
      bool Get();
  void Set(bool value);
    
    TEST_F(GlobalConfigEnvTest, BoolWithEnvTest) {
  const char* bool_var_name = 'BOOL_VAR';
    }
    
    typedef ::grpc_impl::ChannelArguments ChannelArguments;
    
      std::shared_ptr<grpc::Channel> CreateChannelImpl(
      const string& target, const grpc::ChannelArguments& args) override {
    return CreateChannelWithInterceptors(
        target, args,
        std::vector<std::unique_ptr<
            experimental::ClientInterceptorFactoryInterface>>());
  }
    
    
    {    Status s = stream->Finish();
    EXPECT_TRUE(s.ok());
  }
    
    #include <grpc/grpc.h>
#include <grpc/support/alloc.h>
#include <grpc/support/log.h>
#include <grpc/support/time.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>
    
    
    {  ReduceAxesComputeImpl<xpu, mshadow_op::sum, true, true>(ctx, {data}, {req[0]}, {mean}, small);
  MSHADOW_TYPE_SWITCH(data.type_flag_, DType, {
    Shape<6> data_shape, mean_shape;
    for (int i = 0; i < 6; ++i) {
      data_shape[i] = (i < data.shape_.ndim()) ? data.shape_[i] : 1;
      mean_shape[i] = (i < small.ndim()) ? small[i] : 1;
    }
    Tensor<xpu, 1, DType> temp_data =
      ctx.requested[0].get_space_typed<xpu, 1, DType>(Shape1(data.shape_.Size()), s);;
    Kernel<VarBroadcastKernel, xpu>::Launch(s, data.shape_.Size(), temp_data.dptr_,
      data.dptr<DType>(), mean.dptr<DType>(), data_shape, mean_shape);
    ReduceAxesComputeImpl<xpu, mshadow_op::sum, true, true>(
      ctx, {TBlob(temp_data).reshape(data.shape_)}, {kWriteTo}, {var}, small);
  });
}
    
    )code' ADD_FILELINE)
.set_attr_parser(ParamParser<MomentsParam>)
.set_num_inputs(1)
.set_num_outputs(2)
.set_attr<nnvm::FListInputNames>('FListInputNames',
  [](const NodeAttrs& attrs) {
    return std::vector<std::string>{'data'};
  })
.set_attr<mxnet::FInferShape>('FInferShape', MomentsShape)
.set_attr<nnvm::FInferType>('FInferType', MomentsType)
.set_attr<FCompute>('FCompute<cpu>', MomentsForward<cpu>)
.set_attr<FResourceRequest>('FResourceRequest',
  [](const NodeAttrs& attrs) {
    return std::vector<ResourceRequest>{ResourceRequest::kTempSpace};
  })
.set_attr<nnvm::FGradient>('FGradient', ElemwiseGradUseInOut{'_backward_moments'})
.set_attr<nnvm::FInplaceOption>('FInplaceOption',
  [](const NodeAttrs& attrs) {
    return std::vector<std::pair<int, int> >{{0, 0}};
  })
.add_argument('data', 'NDArray-or-Symbol', 'Input ndarray')
.add_arguments(MomentsParam::__FIELDS__());
    
    struct MultiAllFiniteParam : public dmlc::Parameter<MultiAllFiniteParam> {
  int num_arrays;
  bool init_output;
  DMLC_DECLARE_PARAMETER(MultiAllFiniteParam) {
    DMLC_DECLARE_FIELD(num_arrays)
    .set_default(1)
    .describe('Number of arrays.');
    DMLC_DECLARE_FIELD(init_output)
    .set_default(true)
    .describe('Initialize output to 1.');
  }
};
    
    NNVM_REGISTER_PASS(RemoveAmpCast)
.describe('')
.set_body(RemoveAmpCast)
.set_change_graph(true);
    
    )code' ADD_FILELINE)
.set_num_inputs([](const nnvm::NodeAttrs& attrs) {
    const AMPMultiCastParam& param = dmlc::get<AMPMultiCastParam>(attrs.parsed);
    return static_cast<uint32_t>(param.num_outputs);
  })
.set_num_outputs([](const nnvm::NodeAttrs& attrs) {
    const AMPMultiCastParam& param = dmlc::get<AMPMultiCastParam>(attrs.parsed);
    return static_cast<uint32_t>(param.num_outputs);
  })
.set_attr_parser(ParamParser<AMPMultiCastParam>)
.set_attr<mxnet::FInferShape>('FInferShape', AMPMultiCastShape)
.set_attr<nnvm::FInferType>('FInferType', AMPMultiCastType)
.set_attr<nnvm::FListInputNames>('FListInputNames',
  [](const NodeAttrs& attrs) {
    uint32_t num_args = dmlc::get<AMPMultiCastParam>(attrs.parsed).num_outputs;
    std::vector<std::string> ret;
    for (uint32_t i = 0; i < num_args; ++i) {
      ret.push_back(std::string('data_') + std::to_string(i));
    }
    return ret;
  })
.set_attr<nnvm::FInplaceOption>('FInplaceOption',
  [](const NodeAttrs& attrs){
    int num_args = dmlc::get<AMPMultiCastParam>(attrs.parsed).num_outputs;
    std::vector<std::pair<int, int>> ret;
    for (int i = 0; i < num_args; ++i) {
      ret.emplace_back(i, i);
    }
    return ret;
  })
.set_attr<nnvm::FInplaceIdentity>('FInplaceIdentity',
  [](const NodeAttrs& attrs){
    int num_args = dmlc::get<AMPMultiCastParam>(attrs.parsed).num_outputs;
    return std::vector<bool>(num_args, true);
  })
.set_attr<FCompute>('FCompute<cpu>', AMPMultiCastCompute<cpu>)
.set_attr<nnvm::FGradient>('FGradient', ElemwiseGradUseNone{'_backward_amp_multicast'})
.add_argument('data', 'NDArray-or-Symbol[]', 'Weights')
.add_arguments(AMPMultiCastParam::__FIELDS__());
    
        CHECK_EQ(grad_out.CheckContiguous(), true);
    CHECK_EQ(data.CheckContiguous(), true);
    CHECK_EQ(bbox.CheckContiguous(), true);
    CHECK_EQ(top_count.CheckContiguous(), true);
    CHECK_EQ(grad_in.CheckContiguous(), true);
    
    template <typename xpu>
class DequantizeOperator {
 public:
  explicit DequantizeOperator(const nnvm::NodeAttrs &attrs) : attrs_(attrs) {}
  void Forward(const OpContext &ctx, const std::vector<TBlob> &inputs,
               const std::vector<OpReqType> &req, const std::vector<TBlob> &outputs) {
    using namespace mshadow;
    using namespace mxnet_op;
    using mshadow::red::limits::MaxValue;
    using mshadow::red::limits::MinValue;
    Stream<xpu> *s = ctx.get_stream<xpu>();
    if (inputs[0].type_flag_ == mshadow::kUint8) {
      Kernel<dequantize_unsigned, xpu>::Launch(s, outputs[0].Size(), outputs[0].dptr<float>(),
                                               inputs[0].dptr<uint8_t>(), inputs[1].dptr<float>(),
                                               inputs[2].dptr<float>(), MinValue<uint8_t>(),
                                               MaxValue<uint8_t>());
    } else if (inputs[0].type_flag_ == mshadow::kInt8) {
      Kernel<dequantize_zero_centered, xpu>::Launch(
          s, outputs[0].Size(), outputs[0].dptr<float>(), inputs[0].dptr<int8_t>(),
          inputs[1].dptr<float>(), inputs[2].dptr<float>(),
          MinAbs(MaxValue<int8_t>(), MinValue<int8_t>()));
    } else {
      LOG(FATAL) << 'dequantize op only supports input type int8 or uint8';
    }
  }
    }
    
    /*!
 * Copyright (c) 2019 by Contributors
 * \file quantized_elemwise_add.cc
 * \brief
*/
#include '../tensor/elemwise_unary_op.h'
#include './quantized_elemwise_add-inl.h'
    
    void GPUPooledRoundedStorageManager::Free(Storage::Handle handle) {
  // Do nothing if dptr is nullptr. Otherwise, nullptr may be reused
  // which can cause illegal memory access error.
  if (handle.dptr == nullptr) return;
    }
    
                                        [[2 0]
                                     [2 1]]]
    
      if (req == kWriteTo || req == kWriteInplace) {
    MSHADOW_TYPE_SWITCH(output->data().type_flag_, DType, {
      Kernel<set_zero, xpu>::Launch(s, out_data_size,
                                    output->data().dptr<DType>());
    })
  }
    
    //  cached mkldnn memory
//  first layer wx, wh with next L - 1 layers wx and wh
//  with L layers hx and cx, src and dst data/iter etc.
//  it will prepare memory on before and after reorder and concat.
//  for unidirectional, it will fused as dim like 1  + (L - 1) when I != H.
//  for bidirectional, it will fused as data + back_data (weight, bias, iter etc),
//  also need to identify first layer and next layers
static size_t GetMKLDNNRNNCacheMemorySize(int L,
                                          int D,
                                          int T,
                                          int N,
                                          int I,
                                          int H,
                                          int mode) {
  size_t size = 0;
  switch (mode) {
    case rnn_enum::kLstm:
      size = 2 * (D * (I + H) * 4 * H + (L - 1) * D * (D * H + H) * 4 * H +
             L * D * 2 * N * H) + T * N * D * H + L * 2 * D * 4 * H + (L + 2) * D * 2 * N * H +
             6 * D * (I + H + 2) * 4 * H + T * N * I * 2;
      break;
    case rnn_enum::kGru:
      size = 2 * (D * (I + H) * 3 * H + (L - 1) * D * (D * H + H) * 3 * H +
             L * D * 2 * N * H) + T * N * D * H + L * 2 * D * 3 * H + (L + 2) * D * 2 * N * H +
             6 * D * (I + H + 2) * 3 * H + T * N * I * 2;
      break;
    case rnn_enum::kRnnRelu:
    case rnn_enum::kRnnTanh:
      size = 2 * (D * (I + H) * 1 * H + (L - 1) * D * (D * H + H) * 1 * H +
             L * D * 2 * N * H) + T * N * D * H + L * 2 * D * 1 * H + (L + 2) * D * 2 * N * H +
             6 * D * (I + H + 2) * 1 * H + T * N * I * 2;
      break;
    default:
      LOG(FATAL) << 'unknown RNN mode ' << mode;
      break;
  }
  return size;
}
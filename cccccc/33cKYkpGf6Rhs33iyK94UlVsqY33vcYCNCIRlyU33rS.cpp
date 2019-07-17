
        
        // Request Shell's id for current render_view_host.
IPC_SYNC_MESSAGE_ROUTED0_1(ShellViewHostMsg_GetShellId,
                           int /* result */)
    
    
    {}  // namespace nw

    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
    class NwAppSetProxyConfigFunction : public NWSyncExtensionFunction {
 public:
  NwAppSetProxyConfigFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
        bool Read(ClipboardData& data) {
      switch(data.type) {
        case TYPE_TEXT:
        return ReadText(data);
        break;
        case TYPE_HTML:
        return ReadHTML(data);
        break;
        case TYPE_RTF:
        return ReadRTF(data);
        break;
        case TYPE_PNG:
        case TYPE_JPEG:
        return ReadImage(data);
        break;
        case TYPE_NONE:
        NOTREACHED();
        return false;
      }
      NOTREACHED();
      return false;      
    }
    
      protected:
    ~NwScreenRegisterStreamFunction() override {}
    DECLARE_EXTENSION_FUNCTION('nw.Screen.registerStream', UNKNOWN)
    
      /// Applies batch normalization on the `input` using the stored mean and
  /// variance.
  ///
  /// The module must be constructed with `stateful = true` when calling this
  /// method, as the module will otherwise not store running statistics. If you
  /// want to supply the mean and variance yourself, use `pure_forward`.
  Tensor forward(const Tensor& input);
    
    const std::string doc = R'DOC(
  Single-feature representation:
  - scalar features:
    <feature full name> T
  - list features:
    <feature full name>.lengths int32
    <feature full name>.values T
  - map features:
    <feature full name>.lengths int32
    <feature full name>.keys K
    <feature full name>.values V
    
    template <>
void GluOp<float, CPUContext>::ComputeGlu(
    const int M,
    const int split_dim,
    const int N,
    const float* Xdata,
    float* Ydata) {
  const int xStride = 2 * split_dim * N;
  const int yStride = split_dim * N;
  for (int i = 0; i < M; ++i) {
    const int idx = i * xStride;
    const int idy = i * yStride;
    for (int j = 0; j < split_dim; ++j) {
      const int jN = j * N;
      const int jdx1 = idx + jN;
      const int jdx2 = idx + (j + split_dim) * N;
      const int jdy = idy + jN;
      for (int k = 0; k < N; ++k) {
        const float x1 = Xdata[jdx1 + k];
        const float x2 = Xdata[jdx2 + k];
        Ydata[jdy + k] = x1 * sigmoid(x2);
      }
    }
  }
}
    
        int length = 0;
    wchar_t* temp = new wchar_t[100];
    const wchar_t* data = m_selectedExpressionLastData->Data();
    int i = 0, j = 0;
    int commandIndex = displayExpressionToken->CommandIndex;
    
    namespace CalculationManager
{
    class IResourceProvider;
}
    
                    // Loop through grouping vector until we find a non-zero value.
                // '0' values may appear in a form of either e.g. '3;0' or '3;0;0'.
                // A 0 in the last position means repeat the previous grouping.
                // A 0 in another position is a group. So, '3;0;0' means 'group 3, then group 0 repeatedly'
                // This could be expressed as just '3' but GetLocaleInfo is returning 3;0;0 in some cases instead.
                for (currGrouping = 0; groupItr != grouping.end(); ++groupItr)
                {
                    // If it's a non-zero value, that's our new group
                    if (*groupItr != 0)
                    {
                        currGrouping = *groupItr;
                        break;
                    }
    }
    
    
    {
    {NNVM_REGISTER_OP(_contrib_backward_hawkesll)
    .set_num_inputs(10)
    .set_num_outputs(8)
    .set_attr<nnvm::TIsBackward>('TIsBackward', true)
    .set_attr<FCompute>('FCompute<cpu>', HawkesLLBackward<cpu>)
    .set_attr<FResourceRequest>('FResourceRequest', [](const NodeAttrs& n) {
        return std::vector<ResourceRequest>{ResourceRequest::Type::kTempSpace};
    });
}  // namespace op
}  // namespace mxnet

    
    template<typename xpu, typename DType>
MultiAllFiniteKernelParam<DType> FillMultiAllFiniteParam(const MultiAllFiniteParam& op_param,
                                                         const OpContext &ctx,
                                                         const std::vector<TBlob> &inputs) {
  MultiAllFiniteKernelParam<DType> param;
  using namespace mxnet_op;
  Stream<xpu>* s = ctx.get_stream<xpu>();
  param.count = op_param.num_arrays;
  param.max_size = 0;
  for (int i = 0; i < param.count; ++i) {
    param.sizes[i] = inputs[i].shape_.Size();
    if (param.max_size < param.sizes[i]) {
      param.max_size = param.sizes[i];
    }
    param.arrays[i] = inputs[i].FlatTo2D<xpu, DType>(s).dptr_;
  }
  return param;
}
    
    NNVM_REGISTER_PASS(RemoveAmpCast)
.describe('')
.set_body(RemoveAmpCast)
.set_change_graph(true);
    
    inline bool AMPMultiCastShape(const nnvm::NodeAttrs& attrs,
                              std::vector<TShape> *in_attrs,
                              std::vector<TShape> *out_attrs) {
  const AMPMultiCastParam& param = dmlc::get<AMPMultiCastParam>(attrs.parsed);
  CHECK_EQ(in_attrs->size(), param.num_outputs);
  CHECK_EQ(out_attrs->size(), param.num_outputs);
    }
    
      OperatorProperty* Copy() const override {
    DeformablePSROIPoolingProp* deformable_psroi_pooling_sym = new DeformablePSROIPoolingProp();
    deformable_psroi_pooling_sym->param_ = this->param_;
    return deformable_psroi_pooling_sym;
  }
    
    int MXExecutorPrint(ExecutorHandle handle, const char **out_str) {
  Executor *exec = static_cast<Executor*>(handle);
  MXAPIThreadLocalEntry *ret = MXAPIThreadLocalStore::Get();
  API_BEGIN();
  std::ostringstream os;
  exec->Print(os);
  ret->ret_str = os.str();
  *out_str = (ret->ret_str).c_str();
  API_END();
}
    
    int MXAutogradBackward(mx_uint num_output,
                       NDArrayHandle *output_handles,
                       NDArrayHandle *ograd_handles,
                       int retain_graph) {
  return MXAutogradBackwardEx(num_output, output_handles, ograd_handles,
                              0, nullptr, retain_graph, false, true,
                              nullptr, nullptr);
}
    
      // inference step function for nid
  auto infer_step = [&](uint32_t nid, bool last_iter) {
    const auto& inode = idx[nid];
    const uint32_t num_inputs = inode.inputs.size();
    const uint32_t num_outputs = inode.source->num_outputs();
    if (inode.source->is_variable()) {
      // Variable node. No operator. Only one output entry.
      CHECK(inode.source->op() == nullptr);
      CHECK_EQ(num_outputs, 1U);
      const uint32_t out_ent_id = idx.entry_id(nid, 0);
      if (shape_attr_key.length() != 0 && fis_none(rshape[out_ent_id])) {
        auto it = inode.source->attrs.dict.find(shape_attr_key);
        if (it != inode.source->attrs.dict.end()) {
          std::istringstream is(it->second);
          CHECK(is >> rshape[out_ent_id]) << 'Invalid attribute';
        }
      }
      // assign a default value to node attribute
      if (dispatch_mode_name != nullptr) {
        op::dispatch_mode_assign(&dispatch_modes[nid], default_mode_val);
      }
    } else if (is_backward.get(inode.source->op(), false) &&
               inode.control_deps.size() && bwd_identity_assign) {
      CHECK(dispatch_mode_name == nullptr)
        << 'Backward inference for node attributes is not available';
      CHECK_GE(inode.control_deps.size(), 1U)
        << 'BackwardOp need to have control_deps to its forward op';
      const IndexedGraph::Node& fnode = idx[inode.control_deps[0]];
      nnvm::NodePtr fwd_ptr = inode.source->control_deps[0];
      CHECK(fwd_ptr->op() != nullptr) << 'Forward op cannot be a variable';
      // use gradient function to find out the correspondence.
      std::vector<nnvm::NodeEntry> ograd(fwd_ptr->num_outputs());
      for (size_t i = 0; i < ograd.size(); ++i) {
        ograd[i].index = static_cast<uint32_t>(i);
      }
      // input gradient list
      auto igrad = fgrad[fwd_ptr->op()](fwd_ptr, ograd);
      const nnvm::Node* igrad_node = nullptr;
      // Input gradient assignement
      for (size_t i = 0; i < igrad.size(); ++i) {
        if (igrad[i].node->op() == inode.source->op()) {
          uint32_t eid = idx.entry_id(nid, igrad[i].index);
          if (fis_none(rshape[eid])) {
            rshape[eid] = rshape[idx.entry_id(fnode.inputs[i])];
          } else if (!fis_none(rshape[idx.entry_id(fnode.inputs[i])])) {
            // Need to skip empty forward shape, because it may not be
            // available now and it is possible to infer the forward
            // shape in one of the next a few passes
            CHECK_EQ(rshape[eid], rshape[idx.entry_id(fnode.inputs[i])])
                << 'Backward shape inconsistent with the forward shape';
          }
          if (igrad_node == nullptr) {
            igrad_node = igrad[i].node.get();
          } else {
            CHECK(igrad_node == igrad[i].node.get());
          }
        }
      }
      // out grad entries
      CHECK(igrad_node != nullptr)
        << 'Cannot find matching backward op for ' << inode.source->attrs.name;
      for (size_t i = 0; i < igrad_node->inputs.size(); ++i) {
        const nnvm::NodeEntry& e = igrad_node->inputs[i];
        if (e.node == nullptr) {
          uint32_t eid = idx.entry_id(inode.inputs[i]);
          if (fis_none(rshape[eid])) {
            rshape[eid] = rshape[idx.entry_id(inode.control_deps[0], e.index)];
          }
        }
      }
    } else {
      DispatchMode* dispatch_mode = nullptr;
      bool forward_known = true;
      // Forward operator inference.
      ishape.resize(num_inputs, empty_val);
      for (uint32_t i = 0; i < ishape.size(); ++i) {
        ishape[i] = rshape[idx.entry_id(inode.inputs[i])];
        if (fis_none(ishape[i])) forward_known = false;
      }
      oshape.resize(num_outputs, empty_val);
      for (uint32_t i = 0; i < oshape.size(); ++i) {
        oshape[i] = rshape[idx.entry_id(nid, i)];
        if (fis_none(oshape[i])) forward_known = false;
      }
      if (dispatch_mode_name != nullptr) {
        dispatch_mode = &dispatch_modes[nid];
        if (dispatch_modes[nid] == DispatchMode::kUndefined) forward_known = false;
      }
      auto finfer = finfer_shape.get(inode.source->op(), fdefault);
      if (!forward_known) {
        if (finfer != nullptr) {
          // Call inference function of the operator.
          try {
            forward_known = ApplyOpInferAttr(ret, finfer, inode.source->attrs,
                                             nid, &ishape, &oshape, dispatch_mode);
          } catch (const std::exception& e) {
            throw dmlc::Error('Error in operator ' + inode.source->attrs.name + ': ' + e.what());
          }
        } else {
          CHECK(!last_iter)
              << 'Attribute ' << infer_name
              << ' is not registed by op ' << inode.source->op()->name
              << ' we are not able to complete the inference because of this';
        }
      }
      // Save to the result map.
      for (uint32_t i = 0; i < num_inputs; ++i) {
        rshape[idx.entry_id(inode.inputs[i])] = ishape[i];
      }
      for (uint32_t i = 0; i < num_outputs; ++i) {
        rshape[idx.entry_id(nid, i)] = oshape[i];
      }
    }
  };
    
    // keep zero-center
struct dequantize_zero_centered {
  template<typename DstDType, typename SrcDType>
  MSHADOW_XINLINE static void Map(int i, DstDType *out, const SrcDType *in,
                                  const float *imin_range, const float *imax_range,
                                  const float quantized_range) {
    const float real_range = MaxAbs(*imax_range, *imin_range);
    out[i] = in[i] * (real_range / quantized_range);
  }
};
    
    
    {
    {
}  // namespace op
}  // namespace mxnet
    
          // At this point we have a in_idx[mid] which is close to row_seg_start
      // Safety check to make sure mid is a valid indptr value
      if (mid < row_indptr_start || mid > row_indptr_end)
          mid = row_indptr_start;
    
      rnn_cell::desc rnn_cell(nalgorithm,
      mode == rnn_enum::kRnnRelu ? algorithm::eltwise_relu : algorithm::eltwise_tanh);
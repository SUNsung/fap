
        
        /*!
 *  Copyright (c) 2017 by Contributors
 * \file c_api_profile.cc
 * \brief C API of mxnet profiler and support functions
 */
#include <dmlc/base.h>
#include <dmlc/logging.h>
#include <dmlc/thread_group.h>
#include <mxnet/kvstore.h>
#include <stack>
#include './c_api_common.h'
#include '../profiler/profiler.h'
    
    
    {
    {}  // namespace storage
}  // namespace mxnet
    
    template<typename xpu>
inline void BroadcastComputeImpl(const nnvm::NodeAttrs& attrs,
                                 const OpContext& ctx,
                                 const std::vector<TBlob>& inputs,
                                 const std::vector<OpReqType>& req,
                                 const std::vector<TBlob>& outputs,
                                 const mxnet::TShape& small) {
  using namespace mshadow;
  using namespace mshadow::expr;
  mxnet::TShape src_shape, dst_shape;
  BroadcastReduceShapeCompact(outputs[0].shape_, small, &dst_shape, &src_shape);
  Stream<xpu> *s = ctx.get_stream<xpu>();
  MSHADOW_TYPE_SWITCH(outputs[0].type_flag_, DType, {
    if (dst_shape.ndim() == 2) {
      Tensor<xpu, 2, DType> out =
        outputs[0].get_with_shape<xpu, 2, DType>(dst_shape.get<2>(), s);
      Tensor<xpu, 2, DType> data =
        inputs[0].get_with_shape<xpu, 2, DType>(src_shape.get<2>(), s);
      ASSIGN_DISPATCH(out, req[0], broadcast_to(data, dst_shape));
    } else {
      const int ndim = MXNET_SPECIAL_MAX_NDIM;
      Tensor<xpu, ndim, DType> out =
        outputs[0].get_with_shape<xpu, ndim, DType>(dst_shape.get<ndim>(), s);
      Tensor<xpu, ndim, DType> data =
        inputs[0].get_with_shape<xpu, ndim, DType>(src_shape.get<ndim>(), s);
      ASSIGN_DISPATCH(out, req[0], broadcast_to(data, dst_shape));
    }
  });
}
    
    // DO_BIND_DISPATCH comes from operator_common.h
Operator *DeformableConvolutionProp::CreateOperatorEx(Context ctx,
                                            mxnet::ShapeVector *in_shape,
                                            std::vector<int> *in_type) const {
  mxnet::ShapeVector out_shape, aux_shape;
  std::vector<int> out_type, aux_type;
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0], in_shape, &out_shape, ctx);
}
    
      if (x_ptr && layer_index == 0) {
    (*x_memory)[layer_index].set_data_handle(x_ptr);
  } else {
    (*x_memory)[layer_index].set_data_handle((*user_src_layer_memory).get_data_handle());
  }
  (*y_memory)[layer_index].set_data_handle(y_ptr);
    
      std::vector<NDArray*> ndoutputs;
  ndoutputs.reserve(op->num_outputs());
  if (*outputs == nullptr) {
    *num_outputs = op->num_outputs();
    for (int i = 0; i < *num_outputs; ++i) ndoutputs.push_back(new NDArray());
  } else {
    CHECK_EQ(*num_outputs, op->num_outputs())
        << 'CachedOp expects ' << op->num_outputs() << ' outputs, but '
        << *num_outputs << ' was given.';
    for (int i = 0; i < *num_outputs; ++i) {
      ndoutputs.push_back(reinterpret_cast<NDArray*>((*outputs)[i]));
    }
  }

        
        /*!
 *  Copyright (c) 2015 by Contributors
 * \file operator_util.h
 * \brief Utility functions and registries to help quickly build new operators.
 *  [Deprecated]
 *  Use the register functions in this file when possible to simplify operator creations.
 *  Operators registered in this file will be exposed to both NDArray API and symbolic API.
 *
 * \author Tianqi Chen
 */
#ifndef MXNET_OPERATOR_UTIL_H_
#define MXNET_OPERATOR_UTIL_H_
    
    template<typename Dtype>
void SetOpBlobs(::caffe::Layer<Dtype> *caffeOp,
                const std::vector< ::caffe::Blob<Dtype>*>& weights) {
  CHECK_EQ(caffeOp->blobs().size(), weights.size());
  for (int i = 0; i < weights.size(); ++i)
    caffeOp->blobs()[i].reset(weights[i]);
}
    
    
    {
    {
    {}  // namespace caffe
}  // namespace op
}  // namespace mxnet
    
    template<>
Operator* CreateOp<cpu>(CaffeOpParam param, int dtype) {
  Operator *op = NULL;
  switch (dtype) {
  case mshadow::kFloat32:
    op = new CaffeOp<cpu, float>(param);
    break;
  case mshadow::kFloat64:
    op = new CaffeOp<cpu, double>(param);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 layer is not supported by caffe';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
  return op;
}
    
    /*!
 *  Copyright (c) 2016 by Contributors
 * \file cv_api.h
 * \brief C API for opencv
 * \author Junyuan Xie
 */
#include <dmlc/base.h>
#include <mxnet/base.h>
#include <mxnet/ndarray.h>
#include <opencv2/opencv.hpp>
#include 'cv_api.h'
#include '../../src/c_api/c_api_common.h'
    
     private:
  /*!
   * \brief Wait for all started threads to signal that they're ready
   */
  void WaitForReady() {
    for (const std::shared_ptr<dmlc::ManualEvent>& ptr : ready_events_) {
      ptr->wait();
    }
  }
    
    /*!\brief
 * This is a duplicate of the InferAttr function in nnvm with minor modification
 * to support inferring storage type whose function signature is different from
 * shape/type inference functions'. The nnvm InferAttr will be deprecated
 * in the future. Please use interfaces InferShape, InferType, and InferStorageType
 * to call this function.
 */
template<typename AttrType, typename FInferType, typename IsNone, typename FDefault>
nnvm::Graph InferAttr(nnvm::Graph &&ret,
                      const AttrType empty_val,
                      const char* infer_name,
                      const char* input_name,
                      const char* attr_key_name,
                      const char* attr_name,
                      const char* unknown_name,
                      IsNone fis_none,
                      FDefault fdefault,
                      bool bwd_identity_assign,
                      const char* dispatch_mode_name,
                      const DispatchMode default_mode_val = DispatchMode::kUndefined) {
  using nnvm::IndexedGraph;
  using nnvm::Op;
  using AttrVector = std::vector<AttrType>;
  using NodeAttrVector = std::vector<DispatchMode>;
  using dmlc::any;
    }
    
            // Note: We do not clone m_blockFunctionVariableMapping
        auto clone = MakeSharedObject<VariableFields>(m_shape,
            m_varKind,
            m_dataType,
            m_ownerFunction,
            (m_value) ? m_value->DeepClone() : nullptr,
            m_needsGradient,
            m_dynamicAxes,
            m_isSparse,
            m_name,
            Internal::GenerateUid(m_varKind));
    
    size_t DataReader::GetCurrentSamplePosition()
{
    // BUGBUG: composition of old readers is not supported.
    // Returning just for the last reader.
    return m_dataReaders[m_ioNames.back()]->GetCurrentSamplePosition();
}
    
    
    {  // Synchronous transmission of CAN messages
  int32_t ret = canWrite(dev_handler_, send_frames_, frame_num, nullptr);
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'send message failed, error code: ' << ret << ', '
           << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
  return ErrorCode::OK;
}
    
    
    {  int64_t send_time_ = 0;
  int64_t recv_time_ = 0;
  int32_t send_succ_count_ = 0;
  int32_t recv_succ_count_ = 0;
  int32_t send_err_count_ = 0;
  int32_t recv_err_count_ = 0;
  std::stringstream recv_ss_;
  CANCardParameter param_;
};
    
    class HermesCanClient : public CanClient {
 public:
  /**
   * @brief Initialize the BCAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   */
  // explicit HermesCanClient(const CANCardParameter &parameter);
    }
    
      ProtocolData<::apollo::canbus::ChassisDetail> mpd;
  SenderMessage<::apollo::canbus::ChassisDetail> msg(1, &mpd);
  EXPECT_FALSE(sender.NeedSend(msg, 1));
  EXPECT_EQ(msg.message_id(), 1);
  int32_t period = msg.curr_period();
  msg.UpdateCurrPeriod(-50);
  EXPECT_EQ(msg.curr_period(), period + 50);
  EXPECT_EQ(msg.CanFrame().id, 1);
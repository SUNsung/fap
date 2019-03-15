
        
        namespace grpc {
    }
    
    
    { private:
  CensusContext context_;
  // server method
  absl::string_view method_;
  std::string qualified_method_;
  grpc_slice path_;
  // Pointer to the grpc_call element
  grpc_call* gc_;
  // Authorization context for the call.
  grpc_auth_context* auth_context_;
  // Metadata element for census stats.
  grpc_linked_mdelem census_bin_;
  // recv callback
  grpc_metadata_batch* recv_initial_metadata_;
  grpc_closure* initial_on_done_recv_initial_metadata_;
  grpc_closure on_done_recv_initial_metadata_;
  // recv message
  grpc_closure* initial_on_done_recv_message_;
  grpc_closure on_done_recv_message_;
  absl::Time start_time_;
  absl::Duration elapsed_time_;
  grpc_core::OrphanablePtr<grpc_core::ByteStream>* recv_message_;
  uint64_t recv_message_count_;
  uint64_t sent_message_count_;
  // Buffer needed for grpc_slice to reference it when adding metatdata to
  // response.
  char stats_buf_[kMaxServerStatsLen];
};
    
    void InitProtoReflectionServerBuilderPlugin() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  ::grpc::ServerBuilder::InternalAddPluginFactory(&CreateProtoReflection);
}
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetString(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    
    {  if ((pool_->shutdown_) && (pool_->nthreads_ == 0)) {
    pool_->shutdown_cv_.notify_one();
  }
}
    
    static bool B2_POLYGON_REPORT_ERRORS = false;
    
    
    {			mipWidth >>= 1;
			mipHeight >>= 1;
		}
    
    
    {
    {				uiPixel += 1;
			}
		}
    
    		TryDifferential(!m_boolMostLikelyFlip, 1, -2, 0);
		TryDifferential(!m_boolMostLikelyFlip, 1, 2, 0);
		TryDifferential(!m_boolMostLikelyFlip, 1, 0, 2);
		TryDifferential(!m_boolMostLikelyFlip, 1, 0, -2);
    
    
#define AF_LATIN_BLUE_ACTIVE      ( 1U << 0 ) /* zone height is <= 3/4px   */
#define AF_LATIN_BLUE_TOP         ( 1U << 1 ) /* we have a top blue zone   */
#define AF_LATIN_BLUE_SUB_TOP     ( 1U << 2 ) /* we have a subscript top   */
                                              /* blue zone                 */
#define AF_LATIN_BLUE_NEUTRAL     ( 1U << 3 ) /* we have neutral blue zone */
#define AF_LATIN_BLUE_ADJUSTMENT  ( 1U << 4 ) /* used for scale adjustment */
                                              /* optimization              */
    
    #endif  // VPX_DSP_TXFM_COMMON_H_

    
    enum ClipType { ctIntersection, ctUnion, ctDifference, ctXor };
enum PolyType { ptSubject, ptClip };
//By far the most widely used winding rules for polygon filling are
//EvenOdd & NonZero (GDI, GDI+, XLib, OpenGL, Cairo, AGG, Quartz, SVG, Gr32)
//Others rules include Positive, Negative and ABS_GTR_EQ_TWO (only in OpenGL)
//see http://glprogramming.com/red/chapter11.html
enum PolyFillType { pftEvenOdd, pftNonZero, pftPositive, pftNegative };
    
    #endif /* FASTLZ_H */

    
    
/** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q15
static OPUS_INLINE opus_val32 MULT16_32_Q15_armv5e(opus_val16 a, opus_val32 b)
{
  int res;
  __asm__(
      '#MULT16_32_Q15\n\t'
      'smulwb %0, %1, %2\n\t'
      : '=r'(res)
      : 'r'(b), 'r'(a)
  );
  return res<<1;
}
#define MULT16_32_Q15(a, b) (MULT16_32_Q15_armv5e(a, b))
    
    DMLC_REGISTER_PARAMETER(CaffeDataParam);
    
    
    {    CHECK_EQ(net_param.layer_size(), 1) << 'Prototxt' << value <<' more than a layer';
    caffe::LayerParameter *layer_param = new caffe::LayerParameter(net_param.layer(0));
    this->Get(head) = (*layer_param);
  }
    
    // relu
MXNET_OPERATOR_REGISTER_UNARY(_contrib_div_sqrt_dim)
.describe(R'code(Rescale the input by the square root of the channel dimension.
    
     private:
  inline void Init(mshadow::Stream<gpu> *s,
                   const std::vector<TBlob> &in_data,
                   const std::vector<TBlob> &out_data) {
    using namespace mshadow;
    #if CUDNN_MAJOR >= 5
    format_ = CUDNN_TENSOR_NCHW;
    #endif
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 2U);
    if (!init_cudnn_) {
      init_cudnn_ = true;
      Tensor<gpu, 4, DType> data = in_data[bs::kData].get<gpu, 4, DType>(s);
      Tensor<gpu, 4, DType> out = out_data[bs::kOut].get<gpu, 4, DType>(s);
      CUDNN_CALL(cudnnCreateSpatialTransformerDescriptor(&st_desc_));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&in_desc_));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&out_desc_));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(in_desc_,
                                            format_,
                                            dtype_,
                                            data.size(0),
                                            data.size(1),
                                            data.size(2),
                                            data.size(3)));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(out_desc_,
                                            format_,
                                            dtype_,
                                            out.size(0),
                                            out.size(1),
                                            out.size(2),
                                            out.size(3)));
      int dim[] = {static_cast<int>(out.size(0)), static_cast<int>(out.size(1)),
                   static_cast<int>(out.size(2)), static_cast<int>(out.size(3))};
      CUDNN_CALL(cudnnSetSpatialTransformerNdDescriptor(st_desc_,
                                                        sampler_,
                                                        dtype_,
                                                        4,
                                                        dim));
    }
  }
    
    template<typename xpu>
void NDArrayOp<xpu>::Forward(const OpContext &ctx,
                   const std::vector<TBlob> &in_data,
                   const std::vector<OpReqType> &req,
                   const std::vector<TBlob> &out_data,
                   const std::vector<TBlob> &aux_args) {
  using namespace mshadow;
  Context ndctx = get_ctx();
  std::vector<void*> ptrs;
  std::vector<Engine::VarHandle> ndvar;
  std::vector<int> tags;
  for (auto& i : req) CHECK_NE(i, kAddTo);
    }
    
        private:
        std::unordered_set<StreamInformation> m_streamInfos;
        bool m_epochEndReached;
        size_t m_numWorkers;
        size_t m_workerRank;
        size_t m_prevMinibatchSize;
        size_t m_maxNumSamplesToRead;
        size_t m_maxNumSweepsToRead;
        size_t m_truncationLength;
        size_t m_maxErrors;
        std::unordered_map<StreamInformation, MinibatchData> m_minibatchData;
    
            if (bufferSizeInBytes < (viewShape.TotalSize() * sizeof(V1ElemType)))
            InvalidArgument('Size (%d) of the specified buffer for creating the NDArrayView is smaller than the specified view shape '%S'.',
                            (int)bufferSizeInBytes, viewShape.AsString().c_str());
    
        Parameter::Parameter(const NDShape& shape, DataType dataType, const ParameterInitializer& initializer, const DeviceDescriptor& device, const std::wstring& name)
        : Variable(shape, VariableKind::Parameter, dataType, nullptr, true, {}, name, Internal::GenerateUid(VariableKind::Parameter))
    {
    }
    
                // Validate that each of the dynamic axes are unique
            std::unordered_set<Axis> uniqueDynamicAxis;
            for (auto& currentDynamicAxis : dynamicAxes)
            {
                auto retVal = uniqueDynamicAxis.insert(currentDynamicAxis);
                if (!retVal.second)
                    InvalidArgument('Dynamic axis named %S is specified more than once for Variable '%S'', currentDynamicAxis.Name().c_str(), AsString().c_str());
            }
    
    #pragma once
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // 'secure' CRT not available on all platforms  --add this at the top of all CPP files that give 'function or variable may be unsafe' warnings
#endif
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif // NOMINMAX
#pragma comment(lib, 'Dbghelp.lib')
#else
#include <execinfo.h>
#include <cxxabi.h>
#endif
    
        void Start();
    void Stop();
    void Restart();
    
    
    {        // ensure none of the specified inputs reference back into the cloned set
        // The function we extract must be separable.
        for (let& input : inputNodes)
            for (let& node : ComputationNodeBase::EnumerateNodes(vector<ComputationNodeBasePtr>{input})) // check all indirect inputs of each specified input
            {
                let iter = dependentSet.find(input);
                if (iter != dependentSet.end() && *iter != input)
                    InvalidArgument('CloneFunction: specified function input %ls recursively depends on %ls inside the function.', input->NodeDescription().c_str(), node->NodeDescription().c_str());
            }
    }
    
    DHTResponseMessage::~DHTResponseMessage() = default;
    
    class DHTResponseMessage : public DHTAbstractMessage {
protected:
  virtual std::string toStringOptional() const { return A2STR::NIL; }
    }
    
        taskFactory->setLocalNode(localNode);
    taskFactory->setRoutingTable(routingTable.get());
    taskFactory->setMessageDispatcher(dispatcher.get());
    taskFactory->setMessageFactory(factory.get());
    taskFactory->setTaskQueue(taskQueue.get());
    taskFactory->setTimeout(std::chrono::seconds(messageTimeout));
    
    class DHTTaskExecutor {
private:
  int numConcurrent_;
  std::vector<std::shared_ptr<DHTTask>> execTasks_;
  std::deque<std::shared_ptr<DHTTask>> queue_;
    }
    
      std::chrono::seconds timeout_;
    
    namespace aria2 {
    }
    
      virtual void preProcess() CXX11_OVERRIDE;
    
    
    {protected:
    /** Array of control points */
    PointArray *_points;
    float _deltaT;
    float _tension;
    Vec2 _previousPosition;
    Vec2 _accumulatedDiff;
};
    
    PageTurn3D* PageTurn3D::create(float duration, const Size& gridSize)
{
    PageTurn3D *action = new (std::nothrow) PageTurn3D();
    }
    
    NS_CC_BEGIN
    
    /**
 * @addtogroup _2d
 * @{
 */
    }
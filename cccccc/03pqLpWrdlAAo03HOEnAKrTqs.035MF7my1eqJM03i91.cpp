
        
            //2-line buffer
    std::vector<f32> _buf(4*(cn * (size.width + 2) + 32 / sizeof(f32)));
    f32* lanea = internal::alignPtr(&_buf[cn], 32);
    f32* laneA = internal::alignPtr(lanea + cn * (size.width + 2), 32);
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s32, s8, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.32 {d0-d1}, [%[src1]]                              \n\t'
             'vld1.32 {d2-d3}, [%[src2]]                              \n\t'
             'vqmovn.s32 d4, q0                                       \n\t'
             'vqmovn.s32 d5, q1                                       \n\t'
             'vqmovn.s16  d6, q2                                      \n\t'
             'vst1.8 {d6}, [%[dst]]                                   \n\t'
             : /*no output*/
             : [src1] 'r' (_src + i + 0),
               [src2] 'r' (_src + i + 4),
               [dst] 'r' (_dst + i)
             : 'd0','d1','d2','d3','d4','d5','d6'
         );
     }
})
#else
CVT_FUNC(s32, s8, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         int32x4_t vline1_s32 = vld1q_s32(_src + i);
         int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
    }
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC1(f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vmul.f32 q4, q2, q0                                     \n\t'
            'vmul.f32 q5, q3, q0                                     \n\t'
            'vadd.f32 q6, q4, q1                                     \n\t'
            'vadd.f32 q7, q5, q1                                     \n\t'
            'vst1.32 {d12-d13}, [%[dst1]]                            \n\t'
            'vst1.32 {d14-d15}, [%[dst2]]                            \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w' (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19'
        );
    }
})
#else
CVTS_FUNC1(f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        float32x4_t vline1_f32 = vld1q_f32(_src + i + 0);
        float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
            uint32x4_t vc1 = vmovq_n_u32(1);
        uint32x4_t vs = vmovq_n_u32(0);
    
    template <typename T>
inline T divWrap(const T &v1, const T &v2, const float scale)
{
    return internal::vmovn(divWrapQ(internal::vmovl(v1), internal::vmovl(v2), scale));
}
template <>
inline int32x2_t divWrap<int32x2_t>(const int32x2_t &v1, const int32x2_t &v2, const float scale)
{ return vcvt_s32_f32(vmul_f32(vmul_n_f32(vcvt_f32_s32(v1), scale), internal::vrecp_f32(vcvt_f32_s32(v2)))); }
template <>
inline uint32x2_t divWrap<uint32x2_t>(const uint32x2_t &v1, const uint32x2_t &v2, const float scale)
{ return vcvt_u32_f32(vmul_f32(vmul_n_f32(vcvt_f32_u32(v1), scale), internal::vrecp_f32(vcvt_f32_u32(v2)))); }
    
        ak8 = vminq_s16(ak8, d16_23);
    bk8 = vmaxq_s16(bk8, d16_23);
    
    namespace CAROTENE_NS {
    }
    
                    uint8x8_t ls = vrshrn_n_u16(lsw, 8);
    
    
    {
    {
    {             vec128  vs = internal::vld1q( src + i);
             vec128 vr1 = internal::vld1q(rng1 + i);
             vec128 vr2 = internal::vld1q(rng2 + i);
            uvec128 vd1 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
                     vs = internal::vld1q( src + i + 16/sizeof(T));
                    vr1 = internal::vld1q(rng1 + i + 16/sizeof(T));
                    vr2 = internal::vld1q(rng2 + i + 16/sizeof(T));
            uvec128 vd2 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            vnst(dst + i, vd1, vd2);
        }
        vtail<T, sizeof(T)>::inRange(src, rng1, rng2, dst, i, size.width);
        for( ; i < size.width; i++ )
            dst[i] = (u8)(-(rng1[i] <= src[i] && src[i] <= rng2[i]));
    }
}
    
    
    { protected:
  int n_ = 0;
  std::mutex m_;
  std::condition_variable cv_;
};
    
      template <typename T>
  bool DoRunWithType() {
    const auto& data = Input(0);
    CAFFE_ENFORCE(data.ndim() == 1, 'data should be 1-D.');
    }
    
    template <typename T, class Context>
class FlexibleTopKOp : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
    }
    
    template <class FullyConnectedOp>
bool RunFullyConnectedOpOnCUDADevice(
    const bool float16_compute,
    FullyConnectedOp* op) {
  if (op->Input(0).template IsType<float>()) {
    return op->template DoRunWithType<
        float, // X
        float, // W
        float, // B
        float, // Y
        float>(); // Math
  } else if (op->Input(0).template IsType<float16>()) {
    if (float16_compute) {
      const cudaDeviceProp& prop = GetDeviceProperty(0);
      if (prop.major >= kFp16CUDADevicePropMajor) {
        return op->template DoRunWithType<
            float16, // X
            float16, // W
            float16, // B
            float16, // Y
            float16>(); // Math
      } else {
        LOG(INFO) << 'CUDA Device does not support FP16 computation, '
                     'falling back to FP32.';
        return op->template DoRunWithType<
            float16, // X
            float16, // W
            float16, // B
            float16, // Y
            float>(); // Math
      }
    } else {
      return op->template DoRunWithType<
          float16, // X
          float16, // W
          float16, // B
          float16, // Y
          float>(); // Math
    }
  } else {
    CAFFE_THROW('Unsupported type');
  }
  return false;
}
    
    /**!
 * \brief Workaround for missing functions in ::caffe::Blob
 * \warning Do not add or override any virtual functions in this class
 * @tparam Dtype
 */
template<class Dtype>
class CaffeBlobFriend : public ::caffe::Blob<Dtype> {
 public:
  inline void set_cpu_diff(Dtype* diff) {
    CHECK(diff);
    this->diff_->set_cpu_data(diff);
  }
    }
    
    
  bool ReadProtoFromTextContent(const std::string& text,
                                ::google::protobuf::Message* proto) const {
    bool success = google::protobuf::TextFormat::ParseFromString(text, proto);
    return success;
  }
    
    // DO_BIND_DISPATCH comes from static_operator_common.h
Operator *CaffeLossProp::CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
  std::vector<int> out_type, aux_type;
  std::vector<TShape> out_shape, aux_shape;
  out_type.resize(this->ListOutputs().size());
  out_shape.resize(this->ListOutputs().size());
  aux_type.resize(this->ListAuxiliaryStates().size());
  aux_shape.resize(this->ListAuxiliaryStates().size());
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0]);
}
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_op.cc
 * \brief caffe operator
 * \author Haoran Wang
*/
#include './caffe_op-inl.h'
namespace mxnet {
namespace op {
    }
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
    
    
    {
    {}  // namespace engine
}  // namespace mxnet
    
    
    {
    {    if (--num_pending_reads_ == 0) {
      if (pending_write_ != nullptr) {
        // STATE CHANGE
        trigger = pending_write_->trigger;
        num_pending_reads_ = kWriteTriggered;
      }
    }
  }
  if (trigger != nullptr && trigger->decr_wait() == 0) {
    dispatcher(trigger);
  }
}
    
    #include <folly/portability/GTest.h>
    
      EXPECT_NO_THROW({checkKernelError(0, 'hello', ' world');});
  EXPECT_NO_THROW({checkKernelError(EIO, 'hello', ' world');});
  errno = ERANGE;
  EXPECT_SYSTEM_ERROR({checkKernelError(-EIO, 'hello', ' world');},
                      EIO, 'hello world');
    
    BENCHMARK(exception_ptr_create_and_test_concurrent, iters) {
  std::atomic<bool> go(false);
  std::vector<std::thread> threads;
  BENCHMARK_SUSPEND {
    for (int t = 0; t < FLAGS_num_threads; ++t) {
      threads.emplace_back([&go, iters] {
        while (!go) { }
        std::runtime_error e('payload');
        for (size_t i = 0; i < iters; ++i) {
          auto ep = std::make_exception_ptr(e);
          bool b = static_cast<bool>(ep);
          folly::doNotOptimizeAway(b);
        }
      });
    }
  }
  go.store(true);
  for (auto& t : threads) {
    t.join();
  }
}
    
    
    {  vec.insert(vec.begin() + 1, { 23, 23 });
  EXPECT_EQ(vec.size(), 6);
  EXPECT_EQ(vec[0], 0);
  EXPECT_EQ(vec[1], 23);
  EXPECT_EQ(vec[2], 23);
  EXPECT_EQ(vec[3], 0);
  EXPECT_EQ(vec[4], 12);
  EXPECT_EQ(vec[5], 16);
}
    
      {
    Fingerprint<64> fp;
    for (int i = 0; i < 16; i++) {
      fp.update8(bytes[i]);
    }
    fp.write(u8);
  }
  Fingerprint<64>().update32(val_a >> 32).update32(val_a & 0xffffffff).
    update32(val_b >> 32).update32(val_b & 0xffffffff).write(u32);
  Fingerprint<64>().update64(val_a).update64(val_b).write(u64);
  Fingerprint<64>().update(sp).write(usp);
  uconv[0] = fingerprint64(sp);
    
        // variant 2 (const-overload of v1)
    int operator()(int x) const {
      return 100 + 2 * x;
    }
    
    void DHTReplaceNodeTask::sendMessage()
{
  std::shared_ptr<DHTNode> questionableNode = bucket_->getLRUQuestionableNode();
  if (!questionableNode) {
    setFinished(true);
  }
  else {
    getMessageDispatcher()->addMessageToQueue(
        getMessageFactory()->createPingMessage(questionableNode), timeout_,
        make_unique<DHTPingReplyMessageCallback<DHTReplaceNodeTask>>(this));
  }
}
    
    #include 'LogFactory.h'
#include 'Logger.h'
#include 'util.h'
#include 'DHTNode.h'
#include 'DHTConnectionImpl.h'
#include 'DHTRoutingTable.h'
#include 'DHTMessageFactoryImpl.h'
#include 'DHTMessageTracker.h'
#include 'DHTMessageDispatcherImpl.h'
#include 'DHTMessageReceiver.h'
#include 'DHTTaskQueueImpl.h'
#include 'DHTTaskFactoryImpl.h'
#include 'DHTPeerAnnounceStorage.h'
#include 'DHTTokenTracker.h'
#include 'DHTInteractionCommand.h'
#include 'DHTTokenUpdateCommand.h'
#include 'DHTBucketRefreshCommand.h'
#include 'DHTPeerAnnounceCommand.h'
#include 'DHTEntryPointNameResolveCommand.h'
#include 'DHTAutoSaveCommand.h'
#include 'DHTTask.h'
#include 'DHTRoutingTableDeserializer.h'
#include 'DHTRegistry.h'
#include 'DHTBucketRefreshTask.h'
#include 'DHTMessageCallback.h'
#include 'DHTMessageTrackerEntry.h'
#include 'DHTMessageEntry.h'
#include 'UDPTrackerClient.h'
#include 'BtRegistry.h'
#include 'prefs.h'
#include 'Option.h'
#include 'SocketCore.h'
#include 'DlAbortEx.h'
#include 'RecoverableException.h'
#include 'a2functional.h'
#include 'DownloadEngine.h'
#include 'fmt.h'
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
      virtual void
  addPeriodicTask2(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
    
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
    
    #include 'TimeBasedCommand.h'
    
    std::string DHTUnknownMessage::toString() const
{
  size_t sampleLength = 8;
  if (length_ < sampleLength) {
    sampleLength = length_;
  }
  return fmt('dht unknown Remote:%s(%u) length=%lu, first 8 bytes(hex)=%s',
             ipaddr_.c_str(), port_, static_cast<unsigned long>(length_),
             util::toHex(data_, sampleLength).c_str());
}
    
    #include <string>
#include <set>
#include <algorithm>
#include <vector>

        
        
    {}  // namespace grpc
    
    Status ProtoServerReflection::ServerReflectionInfo(
    ServerContext* context,
    ServerReaderWriter<ServerReflectionResponse, ServerReflectionRequest>*
        stream) {
  ServerReflectionRequest request;
  ServerReflectionResponse response;
  Status status;
  while (stream->Read(&request)) {
    switch (request.message_request_case()) {
      case ServerReflectionRequest::MessageRequestCase::kFileByFilename:
        status = GetFileByName(context, request.file_by_filename(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::kFileContainingSymbol:
        status = GetFileContainingSymbol(
            context, request.file_containing_symbol(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::
          kFileContainingExtension:
        status = GetFileContainingExtension(
            context, &request.file_containing_extension(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::
          kAllExtensionNumbersOfType:
        status = GetAllExtensionNumbers(
            context, request.all_extension_numbers_of_type(),
            response.mutable_all_extension_numbers_response());
        break;
      case ServerReflectionRequest::MessageRequestCase::kListServices:
        status =
            ListService(context, response.mutable_list_services_response());
        break;
      default:
        status = Status(StatusCode::UNIMPLEMENTED, '');
    }
    }
    }
    
    #include <utility>
    
    #include <grpc/support/port_platform.h>
    
    namespace grpc {
    }
    
    
    {}  // namespace leveldb
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
    
    {  // Write the header and the payload
  Status s = dest_->Append(Slice(buf, kHeaderSize));
  if (s.ok()) {
    s = dest_->Append(Slice(ptr, n));
    if (s.ok()) {
      s = dest_->Flush();
    }
  }
  block_offset_ += kHeaderSize + n;
  return s;
}
    
    
    {  // No copying allowed
  MemTableIterator(const MemTableIterator&);
  void operator=(const MemTableIterator&);
};
    
    // Snapshots are kept in a doubly-linked list in the DB.
// Each SnapshotImpl corresponds to a particular sequence number.
class SnapshotImpl : public Snapshot {
 public:
  SnapshotImpl(SequenceNumber sequence_number)
      : sequence_number_(sequence_number) {}
    }
    
    #include <set>
#include <utility>
#include <vector>
#include 'db/dbformat.h'
    
    namespace mxnet {
    }
    
      // override set_default
  inline FieldEntry<caffe::LayerParameter> &set_default(const std::string &value) {
    caffe::NetParameter net_param;
    if (!ReadProtoFromTextContent(value, &net_param))
      CHECK(false)<< 'Caffe Net Prototxt: ' << value << 'Initialized Failed';
    }
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
    
    {    // one-liner channel-wise normalization
    switch (data.shape_[0]) {
      case 4:
        if (meanfile_ready_ && flip) {
          outimg_[3] = mirror((data[3] - meanimg_[3]) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[3] = ((data[3] - meanimg_[3]) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else if (!meanfile_ready_ && flip) {
          outimg_[3] = mirror((data[3] - param_.mean_a) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else {
          outimg_[3] = ((data[3] - param_.mean_a) * contrast + illumination)
            * param_.scale / param_.std_a;
        }
      case 3:
        if (meanfile_ready_ && flip) {
          outimg_[2] = mirror((data[2] - meanimg_[2]) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[2] = ((data[2] - meanimg_[2]) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else if (!meanfile_ready_ && flip) {
          outimg_[2] = mirror((data[2] - param_.mean_b) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else {
          outimg_[2] = ((data[2] - param_.mean_b) * contrast + illumination)
            * param_.scale / param_.std_b;
        }
      case 2:
        if (meanfile_ready_ && flip) {
          outimg_[1] = mirror((data[1] - meanimg_[1]) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[1] = ((data[1] - meanimg_[1]) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else if (!meanfile_ready_ && flip) {
          outimg_[1] = mirror((data[1] - param_.mean_g) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else {
          outimg_[1] = ((data[1] - param_.mean_g) * contrast + illumination)
            * param_.scale / param_.std_g;
        }
      case 1:
        if (meanfile_ready_ && flip) {
          outimg_[0] = mirror((data[0] - meanimg_[0]) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[0] = ((data[0] - meanimg_[0]) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else if (!meanfile_ready_ && flip) {
          outimg_[0] = mirror((data[0] - param_.mean_r) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else {
          outimg_[0] = ((data[0] - param_.mean_r) * contrast + illumination)
            * param_.scale / param_.std_r;
        }
        break;
      default:
        LOG(FATAL) << 'Expected image channels range 1-4, got ' << data.shape_[0];
    }
  }
    
    inline void Quantize2BitImpl(mshadow::Stream<mshadow::cpu> *s,
                             const std::vector<mxnet::TBlob> &inputs,
                             const float threshold) {
  Quantize2BitKernelLaunch(s, inputs, threshold);
}
    
    /*!
 * \file tvm_bridge.cc
 * \brief Bridge to run TVM's PackedFunc in MXNet's async engine.
 *
 *  This bridge is mainly used to expose MXNet's async engine push to
 *  TVM. It only uses TVM runtime in aheader only mode, which means
 *  there is no link dependencies.
 *
 *  Support for TVM is optional even when this code
 *  is always compiled and built with the project.
 *  We choose this strategy because we do not yet want
 *  llvm as dependency(which TVM uses). So instead we expose hook
 *  to TVM and let user use this feature when they have TVM installed.
 *
 *  We do require TVM and MXNet to be built with same C++ ABI of std::function
 */
#define TVM_RUNTIME_HEADER_ONLY 1
#include <tvm/runtime/packed_func.h>
#include <mxnet/c_api.h>
#include <mxnet/ndarray.h>
#include <mxnet/engine.h>
    
        info = MXNET_LAPACK_posv<DType>(MXNET_LAPACK_ROW_MAJOR, 'U',
      k, out.size(1), hadamard_prod.dptr_, hadamard_prod.stride_,
      out.dptr_, out.stride_);
  } else {
    Tensor<cpu, 2, DType> kr(Shape2(out.size(1), out.size(0)));
    AllocSpace(&kr);
    khatri_rao(kr, ts_arr);
    
    
    {    Tensor<gpu, 4, DType> data = in_data[bs::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grid = in_data[bs::kGrid].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grid_tmp = out_data[bs::kTmp].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> out = out_data[bs::kOut].get<gpu, 4, DType>(s);
    // grid_tmp : (batch, h, w, 2)
    grid_tmp = transpose(grid, Shape4(0, 2, 3, 1));
    if (!init_cudnn_) {
     Init(s, in_data, out_data);
    }
    CHECK_EQ(data.CheckContiguous(), true);
    CHECK_EQ(out.CheckContiguous(), true);
    CHECK_EQ(grid_tmp.CheckContiguous(), true);
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    CUDNN_CALL(cudnnSpatialTfSamplerForward(s->dnn_handle_,
                                            st_desc_,
                                            &alpha,
                                            in_desc_,
                                            data.dptr_,
                                            grid_tmp.dptr_,
                                            &beta,
                                            out_desc_,
                                            out.dptr_));
  }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file cudnn_spatial_transformer-inl.h
 * \brief
 * \author Wei Wu
*/
#ifndef MXNET_OPERATOR_CUDNN_SPATIAL_TRANSFORMER_INL_H_
#define MXNET_OPERATOR_CUDNN_SPATIAL_TRANSFORMER_INL_H_
    
    template<>
Operator* CreateOp<gpu>(NDArrayOpParam param) {
  return new NDArrayOp<gpu>(param);
}
#endif  // MXNET_USE_CUDA
    
    // implementing configure.
template<typename PairIter>
inline void GradientBooster::Configure(PairIter begin, PairIter end) {
  std::vector<std::pair<std::string, std::string> > vec(begin, end);
  this->Configure(vec);
}
    
        const auto ngroup = static_cast<bst_omp_uint>(gptr.size() - 1);
    #pragma omp parallel
    {
      // parall construct, declare random number generator here, so that each
      // thread use its own random number generator, seed by thread id and current iteration
      common::RandomEngine rnd(iter * 1111 + omp_get_thread_num());
    }
    
    TEST(ByteTest, ByteToString) {
  unsigned char value = 0x34;
  EXPECT_EQ('34', Byte::byte_to_hex(value));
  EXPECT_EQ('00110100', Byte::byte_to_binary(value));
  uint32_t int_value = 0xE13A;
  EXPECT_EQ('E13A', Byte::byte_to_hex(int_value));
}
    
    #include 'modules/common/time/time.h'
#include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/radar/conti_radar/protocol/const_vars.h'
    
    
    {  for (int i = 0; i < conti_radar->contiobs_size(); ++i) {
    if (conti_radar->contiobs(i).obstacle_id() == obj_id) {
      auto obs = conti_radar->mutable_contiobs(i);
      obs->set_longitude_dist_rms(
          LINEAR_RMS[longitude_dist_rms(bytes, length)]);
      obs->set_lateral_dist_rms(LINEAR_RMS[lateral_dist_rms(bytes, length)]);
      obs->set_longitude_vel_rms(LINEAR_RMS[longitude_vel_rms(bytes, length)]);
      obs->set_lateral_vel_rms(LINEAR_RMS[lateral_vel_rms(bytes, length)]);
      obs->set_longitude_accel_rms(
          LINEAR_RMS[longitude_accel_rms(bytes, length)]);
      obs->set_lateral_accel_rms(LINEAR_RMS[lateral_accel_rms(bytes, length)]);
      obs->set_oritation_angle_rms(
          ANGLE_RMS[oritation_angle_rms(bytes, length)]);
      obs->set_probexist(PROBOFEXIST[probexist(bytes, length)]);
      obs->set_meas_state(meas_state(bytes, length));
      break;
    }
  }
}
    
    void SplineSegKernel::CalculateThirdOrderDerivative(const uint32_t num_params) {
  kernel_third_order_derivative_ =
      Eigen::MatrixXd::Zero(num_params, num_params);
  for (int r = 3; r < kernel_third_order_derivative_.rows(); ++r) {
    for (int c = 3; c < kernel_third_order_derivative_.cols(); ++c) {
      kernel_third_order_derivative_(r, c) =
          (r * r - r) * (r - 2) * (c * c - c) * (c - 2) / (r + c - 5.0);
    }
  }
}
    
      Byte t1(bytes + 1);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
      Byte t2(bytes + 2);
  t = t2.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
        while ((n = (node_t*) swHeap_pop(pq)))
    {
        ASSERT_EQ(_map[n->val], n->pri);
        free(n);
    }
    
    static void RedisQtAddRead(void *);
static void RedisQtDelRead(void *);
static void RedisQtAddWrite(void *);
static void RedisQtDelWrite(void *);
static void RedisQtCleanup(void *);
    
    TEST(coroutine_channel, pop_timeout)
{
    coro_test([](void *arg)
    {
        Channel chan(1);
        void *ret;
    }
    }
    
    enum
{
    EVENT_onStart = 1u << 1,
    EVENT_onShutdown = 1u << 2,
    EVENT_onWorkerStart = 1u << 3,
    EVENT_onWorkerStop = 1u << 4,
    EVENT_onConnect = 1u << 5,
    EVENT_onReceive = 1u << 6,
    EVENT_onPacket = 1u << 7,
    EVENT_onClose = 1u << 8,
    EVENT_onTask = 1u << 9,
    EVENT_onFinish = 1u << 10,
    EVENT_onPipeMessage = 1u << 11,
};
    
        /**
     * 协程2
     */
    Coroutine::create([](void *arg)
    {
        G_a.x = 100;
        G_a.y = nullptr;
    });

        
        
    {  return Begin + oldSize;
}  

    
    void PrefixMapKeyPrinter<unsigned char>::print(raw_ostream &out,
                                               ArrayRef<unsigned char> key) {
  out << '\'';
  for (auto byte : key) {
    if (byte < 16) out << '0';
    out.write_hex(byte);
  }
  out << '\'';
}

    
    % for start_code_point, end_code_point, value in break_table.property_value_ranges:
%   if start_code_point == 0:
  if (C <= ${end_code_point})
%   else:
  if (C >= ${start_code_point} && C <= ${end_code_point})
%   end
    return GraphemeClusterBreakProperty::${value};
% end
    
    #include <caffe/proto/caffe.pb.h>
#include <dmlc/parameter.h>
#include <dmlc/base.h>
#include <dmlc/json.h>
#include <dmlc/logging.h>
#include <dmlc/type_traits.h>
#include <google/protobuf/message.h>
#include <google/protobuf/text_format.h>
    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
    
    {
    {inline void Dequantize2BitImpl(mshadow::Stream<mshadow::cpu> *s,
                               const std::vector<mxnet::TBlob> &inputs,
                               const float threshold) {
  Dequantize2BitKernelLaunch(s, inputs, threshold);
}
}  // namespace kvstore
}  // namespace mxnet
    
      /*!
   * \brief returns compression factor, which is the factor by which size of gradient
   * reduces when using a particular type of compression
   */
  int GetCompressionFactor();
    
    template<typename xpu, typename OP>
void EvalOneHot_(const TBlob &index, const TBlob &rhs,
                 TBlob *ret, RunContext ctx) {
  LOG(INFO) << 'The operator onehot_encode is deprecated; use one_hot instead.';
  using namespace mshadow::expr;
  mshadow::Stream<xpu> *s = ctx.get_stream<xpu>();
  // TODO(eric): support mixed type encoding, i.e. int index and float rhs.
  CHECK_EQ(ret->type_flag_, mshadow::default_type_flag)
    << 'one_hot_encode only support float32 as input/output';
  CHECK_EQ(rhs.type_flag_, mshadow::default_type_flag)
    << 'one_hot_encode only support float32 as input/output';
  CHECK_EQ(index.type_flag_, mshadow::default_type_flag)
    << 'one_hot_encode only support float32 as input/output';
  ret->get<xpu, 2, real_t>(s) =
    one_hot_encode(index.get<xpu, 1, real_t>(s),
                   rhs.shape_[1]);
}
    
      // Pointers to the given variable and result variable
  // We exchange what given and result point to at every step
  Tensor<cpu, 2, DType> *given = &storage,
    *result = &out, *tmp;
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file crop.cc
 * \brief
 * \author Wei Wu
*/
    
      virtual void Forward(const OpContext &ctx,
                       const std::vector<TBlob> &in_data,
                       const std::vector<OpReqType> &req,
                       const std::vector<TBlob> &out_data,
                       const std::vector<TBlob> &aux_args) {
    using namespace mshadow;
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 3U);
    Stream<gpu> *s = ctx.get_stream<gpu>();
    Tensor<gpu, 4, DType> data = in_data[st::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> out = out_data[st::kOut].get<gpu, 4, DType>(s);
    Shape<3> loc_shape = Shape3(data.size(0), 2, 3);
    Shape<4> grid_shape = Shape4(out.size(0), out.size(2), out.size(3), 2);
    Tensor<gpu, 3, DType> loc = in_data[st::kLoc].get_with_shape<gpu, 3, DType>(loc_shape, s);
    Tensor<gpu, 4, DType> grid = out_data[st::kGridSrc]
                                .get_with_shape<gpu, 4, DType>(grid_shape, s);
    if (!init_cudnn_) {
     Init(s, in_data, out_data);
    }
    CHECK_EQ(data.CheckContiguous(), true);
    CHECK_EQ(out.CheckContiguous(), true);
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    if (param_.transform_type == st::kAffine) {
      CUDNN_CALL(cudnnSpatialTfGridGeneratorForward(s->dnn_handle_,
                                                    st_desc_,
                                                    loc.dptr_,
                                                    grid.dptr_));
    }
    CUDNN_CALL(cudnnSpatialTfSamplerForward(s->dnn_handle_,
                                            st_desc_,
                                            &alpha,
                                            in_desc_,
                                            data.dptr_,
                                            grid.dptr_,
                                            &beta,
                                            out_desc_,
                                            out.dptr_));
  }
    
    Operator* NativeOpProp::CreateOperator(Context ctx) const {
  DO_BIND_DISPATCH(CreateOp, param_);
}
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file identity_attach_KL_sparse_reg.cc
 * \brief\
*/
#include './identity_attach_KL_sparse_reg-inl.h'
#include <nnvm/op_attr_types.h>
    
    TEST(ByteTest, SetGetHighLowBit) {
  unsigned char byte_value = 0x37;
  Byte value(&byte_value);
  value.set_value_high_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x07, value.get_byte_low_4_bits());
  value.set_value_low_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x0B, value.get_byte_low_4_bits());
}
    
    
    { protected:
  SpeedLimit speed_limit_;
};
    
    
    {
    {
    {
    {  double ret = x * 0.001000;
  return ret;
}
}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
    void Brakerpt6c::Parse(const std::uint8_t* bytes, int32_t length,
                       ChassisDetail* chassis) const {
  chassis->mutable_gem()->mutable_brake_rpt_6c()->set_manual_input(
      manual_input(bytes, length));
  chassis->mutable_gem()->mutable_brake_rpt_6c()->set_commanded_value(
      commanded_value(bytes, length));
  chassis->mutable_gem()->mutable_brake_rpt_6c()->set_output_value(
      output_value(bytes, length));
  chassis->mutable_gem()->mutable_brake_rpt_6c()->set_brake_on_off(
      brake_on_off(bytes, length));
}
    
    // config detail: {'name': 'veh_can_timeout', 'offset': 0.0, 'precision': 1.0,
// 'len': 1, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 2,
// 'type': 'bool', 'order': 'motorola', 'physical_unit': ''}
bool Globalrpt6a::veh_can_timeout(const std::uint8_t* bytes,
                                  int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(2, 1);
    }
    
        for (i = 1; i < 20000; i++)
    {
        uint32_t key = i * 37;
        swRbtree_insert(tree, key, (void *) (long) (i * 8));
    }
    
            int setContext(redisAsyncContext * ac) {
            if (ac->ev.data != NULL) {
                return REDIS_ERR;
            }
            m_ctx = ac;
            m_ctx->ev.data = this;
            m_ctx->ev.addRead = RedisQtAddRead;
            m_ctx->ev.delRead = RedisQtDelRead;
            m_ctx->ev.addWrite = RedisQtAddWrite;
            m_ctx->ev.delWrite = RedisQtDelWrite;
            m_ctx->ev.cleanup = RedisQtCleanup;
            return REDIS_OK;
        }
    
    
    {    friend
    void getCallback(redisAsyncContext *, void *, void *);
};
    
        cache.set('test2', val2);
    ASSERT_EQ(cache.get('test2').get(), val2.get());
    val2.reset();
    ASSERT_EQ(dtor_num, 1);
    ASSERT_EQ(cache.get('test'), nullptr);
    
        std::unordered_map<std::string, cache_list_t::iterator> cache_map;
    cache_list_t cache_list;
    size_t cache_capacity;
    
    TEST(coroutine_base, yield_resume)
{
    long _cid;
    long cid = Coroutine::create([](void *arg)
    {
        long cid = Coroutine::get_current_cid();
        Coroutine *co = Coroutine::get_by_cid(cid);
        co->yield();
        *(long *) arg = Coroutine::get_current_cid();
    }, &_cid);
    }
    
    private:
    int check_task_param(int dst_worker_id);
    
    void my_onClose(swServer *serv, swDataHead *info)
{
    printf('PID=%d\tClose fd=%d|from_id=%d\n', getpid(), info->fd, info->from_id);
}
    
    
    {    virtual void onTask(int task_id, int src_worker_id, const DataBuffer &data);
    virtual void onFinish(int task_id, const DataBuffer &data);
};
    
    #include <iostream>
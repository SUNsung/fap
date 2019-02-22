
        
        
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
    
    {
    {
    {            for (; j < size.width; j++)
                dst[j] = (s16)((s32)src0[j] + (s32)src1[j]);
        }
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
        void operator() (const uint8x8_t & v_src0, const uint8x8_t & v_src1,
                     uint8x8_t & v_dst) const
    {
        v_dst = veor_u8(v_src0, v_src1);
    }
    
    #define COMBINE(sgn,bits,n) void combine##n(const Size2D &_size                                             \
                                        FILL_LINES##n(FARG, sgn##bits),                                     \
                                        sgn##bits * dstBase, ptrdiff_t dstStride)                           \
{                                                                                                           \
    internal::assertSupportedConfiguration();                                                               \
    Size2D size(_size);                                                                                     \
    if (CONTSRC##n                                                                                          \
        dstStride == (ptrdiff_t)(size.width))                                                               \
    {                                                                                                       \
        size.width *= size.height;                                                                          \
        size.height = 1;                                                                                    \
    }                                                                                                       \
    typedef internal::VecTraits<sgn##bits, n>::vec128 vec128;                                               \
    size_t roiw16 = size.width >= (16/sizeof(sgn##bits) - 1) ? size.width - (16/sizeof(sgn##bits) - 1) : 0; \
    typedef internal::VecTraits<sgn##bits, n>::vec64 vec64;                                                 \
    size_t roiw8 = size.width >= (8/sizeof(sgn##bits) - 1) ? size.width - (8/sizeof(sgn##bits) - 1) : 0;    \
                                                                                                            \
    for (size_t i = 0u; i < size.height; ++i)                                                               \
    {                                                                                                       \
        FILL_LINES##n(VROW, sgn##bits)                                                                      \
        sgn##bits * dst = internal::getRowPtr(dstBase, dstStride, i);                                       \
        size_t sj = 0u, dj = 0u;                                                                            \
                                                                                                            \
        for (; sj < roiw16; sj += 16/sizeof(sgn##bits), dj += MUL##n(16)/sizeof(sgn##bits))                 \
            MERGE_QUAD(sgn, bits, n)                                                                        \
                                                                                                            \
        if ( sj < roiw8 )                                                                                   \
        {                                                                                                   \
            vec64 v_dst;                                                                                    \
            FILL_LINES##n(VLD1, sgn##bits)                                                                  \
            vst##n##_##sgn##bits(dst + dj, v_dst);                                                          \
            sj += 8/sizeof(sgn##bits); dj += MUL##n(8)/sizeof(sgn##bits);                                   \
        }                                                                                                   \
                                                                                                            \
        for (; sj < size.width; ++sj, dj += n)                                                              \
        {                                                                                                   \
            FILL_LINES##n(SLD, sgn##bits)                                                                   \
        }                                                                                                   \
    }                                                                                                       \
}
    
    void assertSupportedConfiguration(bool parametersSupported = true);
    
    struct Fork {
  pid_t pid;
    }
    
    template <typename T, class Context>
class FlexibleTopKGradientOp : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
    }
    
      /**
   * /brief Customize set method for LayerParameter
   * /tparam value string of caffe's layer configuration
   * */
  virtual void Set(void *head, const std::string &value) const {
    caffe::NetParameter net_param;
    if (!ReadProtoFromTextContent(value, &net_param))
      CHECK(false)<< 'Caffe Net Prototxt: ' << value << 'Initialized Failed';
    }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_loss.cc
 * \brief caffe loss
 * \author Haoran Wang
*/
#include './caffe_loss-inl.h'
    
    MXNET_DLL int MXCVImdecode(const unsigned char *img, const mx_uint len,
                           const int flag, NDArrayHandle *out) {
  API_BEGIN();
  mx_uint dims[3];
  CHECK_GE(flag, 0) << 'flag must be 0 (grayscale) or 1 (colored).';
  dims[2] = flag == 0 ? 1 : 3;
  if (get_jpeg_size(img, len, dims+1, dims)) {
  } else if (get_png_size(img, len, dims+1, dims)) {
  } else {
    LOG(FATAL) << 'Only supports png and jpg.';
  }
  NDArray ndout(TShape(dims, dims+3), Context::CPU(), true, mshadow::kUint8);
  unsigned char *img_cpy = new unsigned char[len];
  memcpy(img_cpy, img, sizeof(unsigned char)*len);
  Engine::Get()->PushSync([=](RunContext ctx){
      ndout.CheckAndAlloc();
      cv::Mat buf(1, len, CV_8U, img_cpy);
      cv::Mat dst(dims[0], dims[1], flag == 0 ? CV_8U : CV_8UC3, ndout.data().dptr_);
#if (CV_MAJOR_VERSION > 3 || (CV_MAJOR_VERSION == 3 && CV_MINOR_VERSION >= 3))
      cv::imdecode(buf, flag | cv::IMREAD_IGNORE_ORIENTATION, &dst);
#else
      cv::imdecode(buf, flag, &dst);
#endif
      CHECK(!dst.empty());
      delete[] img_cpy;
    }, ndout.ctx(), {}, {ndout.var()});
  NDArray *tmp = new NDArray();
  *tmp = ndout;
  *out = tmp;
  API_END();
}
    
    
    {
    {
    {  /*!
   * \brief Worker threads.
   */
  std::vector<std::thread> worker_threads_;
  /*!
   * \brief Startup synchronization objects
   */
  std::list<std::shared_ptr<dmlc::ManualEvent>> ready_events_;
  /*!
   * \brief Disallow default construction.
   */
  ThreadPool() = delete;
  /*!
   * \brief Disallow copy construction and assignment.
   */
  DISALLOW_COPY_AND_ASSIGN(ThreadPool);
};
}  // namespace engine
}  // namespace mxnet
#endif  // MXNET_ENGINE_THREAD_POOL_H_

    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file inplace_addto_detect_pass.cc
 * \brief Detect whether inplace addto operation is possible for certain op.
 */
#include <mxnet/base.h>
#include <mxnet/operator.h>
#include <mxnet/op_attr_types.h>
#include <nnvm/graph_attr_types.h>
    
    
    {
    {
    { private:
  /*! \brief base iterator */
  IIterator<DataInst> *base_;
  /*! \brief data shape */
  std::vector<TShape> shape_;
  /*! \brief unit size */
  std::vector<size_t> unit_size_;
  // initialize the data holder by using from the first batch.
  inline void InitData(const DataInst& first_batch) {
    shape_.resize(first_batch.data.size());
    data_.resize(first_batch.data.size());
    unit_size_.resize(first_batch.data.size());
    for (size_t i = 0; i < first_batch.data.size(); ++i) {
      TShape src_shape = first_batch.data[i].shape_;
      int src_type_flag = first_batch.data[i].type_flag_;
      // init object attributes
      std::vector<index_t> shape_vec;
      shape_vec.push_back(param_.batch_size);
      for (index_t dim = 0; dim < src_shape.ndim(); ++dim) {
        shape_vec.push_back(src_shape[dim]);
      }
      TShape dst_shape(shape_vec.begin(), shape_vec.end());
      shape_[i] = dst_shape;
      data_[i].resize(mshadow::Shape1(dst_shape.Size()), src_type_flag);
      unit_size_[i] = src_shape.Size();
      out_.data.push_back(TBlob(data_[i].dptr_, dst_shape, cpu::kDevMask, src_type_flag, 0));
    }
  }
};  // class BatchLoader
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_ITER_BATCHLOADER_H_

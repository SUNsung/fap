
        
          bool has_leaders;   // does the line contain leader dots (.....)?
  bool has_drop_cap;  // does the line have a drop cap?
  int pix_ldistance;  // distance to the left pblock boundary in pixels
  int pix_rdistance;  // distance to the right pblock boundary in pixels
  float pix_xheight;  // guessed xheight for the line
  int average_interword_space; // average space between words in pixels.
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_fieldentry.h
 * \brief Implement FieldEntry<caffe::LayerParameter>
 * \author Haoran Wang
 */
#ifndef PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
#define PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
    
     private:
  /*! \brief base iterator */
  std::unique_ptr<IIterator<DataInst> > base_;
  /*! whether mean image is ready */
  bool meanfile_ready_;
  /*! \brief output data */
  DataInst out_;
  // normalize parameter.
  ImageNormalizeParam param_;
  /*! \brief mean image, if needed */
  mshadow::TensorContainer<cpu, 3> meanimg_;
  /*! \brief temp space for output image */
  mshadow::TensorContainer<cpu, 3> outimg_;
  /*! \brief random numeber engine */
  common::RANDOM_ENGINE rnd_;
  // random magic number of this iterator
  static const int kRandMagic = 0;
    
      ~PrefetcherIter() {
    while (recycle_queue_.size() != 0) {
      DataBatch *batch = recycle_queue_.front();
      recycle_queue_.pop();
      delete batch;
    }
    delete out_;
    iter.Destroy();
  }
    
    #ifndef MXNET_KVSTORE_GRADIENT_COMPRESSION_H_
#define MXNET_KVSTORE_GRADIENT_COMPRESSION_H_
#include <dmlc/parameter.h>
#include <string>
#include <utility>
#include <vector>
#include 'mxnet/ndarray.h'
    
    
    {  if (has('dist')) {
#if MXNET_USE_DIST_KVSTORE
    kv = new kvstore::KVStoreDist(use_device_comm);
    if (!has('_async') && kv->IsWorkerNode() && kv->get_rank() == 0) {
      // configure the server to be the sync mode
      kv->SendCommandToServers(static_cast<int>(kvstore::CommandType::kSyncMode), '');
    }
#else
    LOG(FATAL) << 'compile with USE_DIST_KVSTORE=1 to use ' << tname;
    return nullptr;
#endif  // MXNET_USE_DIST_KVSTORE
  } else {
    if (has('nccl')) {
#if MXNET_USE_NCCL
      kv = new kvstore::KVStoreNCCL();
#else
      LOG(FATAL) << 'compile with USE_NCCL=1 to use ' << tname;
      return nullptr;
#endif
    } else {
      kv =  new kvstore::KVStoreLocal(use_device_comm);
    }
  }
  kv->type_ = tname;
  return kv;
}
    
    
    {
    {.add_argument('data', 'Symbol or Symbol[]', 'Tensor or List of Tensors, the second input '
'will be used as crop_like shape reference')
.add_arguments(CropParam::__FIELDS__())
.set_key_var_num_args('num_args');
}  // namespace op
}  // namespace mxnet

    
    
    {
    {
    {  bool init_cudnn_;
  cudnnDataType_t dtype_;
  cudnnSpatialTransformerDescriptor_t st_desc_;
  cudnnTensorDescriptor_t in_desc_;
  cudnnTensorDescriptor_t out_desc_;
  cudnnSamplerType_t sampler_;
  #if CUDNN_MAJOR >= 5
  cudnnTensorFormat_t format_;
  #endif
  BilinearSamplerParam param_;
};
#endif  // __CUDACC__ && CUDNN
}  // namespace op
}  // namespace mxnet
    
    namespace mxnet {
namespace op {
template<typename DType>
class CuDNNLocalResponseNormOp : public Operator {
 public:
  explicit CuDNNLocalResponseNormOp(LRNParam param) {
    param_ = param;
    init_cudnn_ = false;
    dtype_ = mshadow::DataType<DType>::kCudnnFlag;
  }
    }
    }
    }
    
    DMLC_REGISTER_PARAMETER(NativeOpParam);
    
    ScientificNumberFormatter *ScientificNumberFormatter::createInstance(
            DecimalFormat *fmtToAdopt,
            Style *styleToAdopt,
            UErrorCode &status) {
    LocalPointer<DecimalFormat> fmt(fmtToAdopt);
    LocalPointer<Style> style(styleToAdopt);
    if (U_FAILURE(status)) {
        return NULL;
    }
    ScientificNumberFormatter *result =
            new ScientificNumberFormatter(
                    fmt.getAlias(),
                    style.getAlias(),
                    status);
    if (result == NULL) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return NULL;
    }
    fmt.orphan();
    style.orphan();
    if (U_FAILURE(status)) {
        delete result;
        return NULL;
    }
    return result;
}
    
    #endif /* #if !UCONFIG_NO_BREAK_ITERATION */

    
    U_NAMESPACE_BEGIN
    
    #endif

    
        // Compare the date to the starting and ending rules.+1 = date>rule, -1
    // = date<rule, 0 = date==rule.
    int32_t startCompare = compareToRule((int8_t)month, (int8_t)monthLength, (int8_t)prevMonthLength,
                                         (int8_t)day, (int8_t)dayOfWeek, millis,
                                         startTimeMode == UTC_TIME ? -rawOffset : 0,
                                         startMode, (int8_t)startMonth, (int8_t)startDayOfWeek,
                                         (int8_t)startDay, startTime);
    int32_t endCompare = 0;
    
    
    {    return result;
}
#endif
    
        /**
     * ICU 'poor man's RTTI', returns a UClassID for this class.
     */
    static UClassID U_EXPORT2 getStaticClassID();
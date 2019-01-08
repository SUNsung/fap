
        
          PyObjectStruct* get() const { return ptr_; }
    
    
    {  // Moving messages on two different arenas should lead to a copy.
  *message2_on_arena = std::move(*message1_on_arena);
  EXPECT_NE(nested, &message2_on_arena->optional_nested_message());
  TestUtil::ExpectAllFieldsSet(*message1_on_arena);
  TestUtil::ExpectAllFieldsSet(*message2_on_arena);
}
    
    ImmutableGeneratorFactory::ImmutableGeneratorFactory(
    Context* context) : context_(context) {
}
ImmutableGeneratorFactory::~ImmutableGeneratorFactory() {}
    
      (*variables)['type'] =
      name_resolver->GetImmutableClassName(descriptor->message_type());
  const FieldDescriptor* key = KeyField(descriptor);
  const FieldDescriptor* value = ValueField(descriptor);
  const JavaType keyJavaType = GetJavaType(key);
  const JavaType valueJavaType = GetJavaType(value);
    
    // Helper for CollectMinimalFileDepsContainingExtensionsWorker that marks all
// deps as visited and prunes them from the needed files list.
void PruneFileAndDepsMarkingAsVisited(
    const FileDescriptor* file,
    std::vector<const FileDescriptor*>* files,
    std::set<const FileDescriptor*>* files_visited) {
  std::vector<const FileDescriptor*>::iterator iter =
      std::find(files->begin(), files->end(), file);
  if (iter != files->end()) {
    files->erase(iter);
  }
  files_visited->insert(file);
  for (int i = 0; i < file->dependency_count(); i++) {
    PruneFileAndDepsMarkingAsVisited(file->dependency(i), files, files_visited);
  }
}
    
      // write file header
  io::CodedOutputStream output(raw_output_);
  output.WriteLittleEndian32(0x04034b50);  // magic
  WriteShort(&output, 10);  // version needed to extract
  WriteShort(&output, 0);  // flags
  WriteShort(&output, 0);  // compression method: stored
  WriteShort(&output, 0);  // last modified time
  WriteShort(&output, kDosEpoch);  // last modified date
  output.WriteLittleEndian32(info.crc32);  // crc-32
  output.WriteLittleEndian32(info.size);  // compressed size
  output.WriteLittleEndian32(info.size);  // uncompressed size
  WriteShort(&output, filename_size);  // file name length
  WriteShort(&output, 0);   // extra field length
  output.WriteString(filename);  // file name
  output.WriteString(contents);  // file data
    
    #include <google/protobuf/test_util.h>
#include <google/protobuf/unittest.pb.h>
#include <google/protobuf/unittest_no_field_presence.pb.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/dynamic_message.h>
    
    void add(const Size2D &size,
         const u16 * src0Base, ptrdiff_t src0Stride,
         const u16 * src1Base, ptrdiff_t src1Stride,
         u16 * dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
        if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<u16, u32>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<u16, u32>());
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
    
        inline _normEstimator(const Size2D &size, s32, Margin borderMargin,
                          ptrdiff_t &mapstep, s32** mag_buf, u8* &map):
                          offsetk(1),
                          sobelRow(std::max<ptrdiff_t>(0, offsetk - (ptrdiff_t)borderMargin.left),
                                   std::max<ptrdiff_t>(0, offsetk - (ptrdiff_t)borderMargin.right))
    {
        mapstep = size.width + 2;
        magstep = size.width + 2 + size.width * (4 * sizeof(s16)/sizeof(s32));
        dxOffset = mapstep * sizeof(s32)/sizeof(s16);
        dyOffset = dxOffset + size.width * 1;
        shxOffset = dxOffset + size.width * 2;
        shyOffset = dxOffset + size.width * 3;
        buffer.resize( (size.width+2)*(size.height+2) + magstep*3*sizeof(s32) );
        mag_buf[0] = (s32*)&buffer[0];
        mag_buf[1] = mag_buf[0] + magstep;
        mag_buf[2] = mag_buf[1] + magstep;
        memset(mag_buf[0], 0, mapstep * sizeof(s32));
    }
    
    #define CONTSRC2 dstStride == src0Stride && \
                 dstStride == src1Stride &&
#define CONTSRC3 dstStride == src0Stride && \
                 dstStride == src1Stride && \
                 dstStride == src2Stride &&
#define CONTSRC4 dstStride == src0Stride && \
                 dstStride == src1Stride && \
                 dstStride == src2Stride && \
                 dstStride == src3Stride &&
    
    #include 'common.hpp'
    
    
    {    return 0;
#endif
}
    
    #ifdef CAROTENE_NEON
    
            for ( ; x < width; ++x)
        {
            // make extrapolation for the last elements
            if (x + 1 >= width)
            {
                if (border == BORDER_MODE_CONSTANT)
                    nextx = borderValue << 2;
                else if (border == BORDER_MODE_REPLICATE)
                    nextx = srow2[x] + (srow1[x] << 1) + srow0[x];
            }
            else
                nextx = (srow2 ? srow2[x + 1] : borderValue) +
                                (srow1[x + 1] << 1) +
                        (srow0 ? srow0[x + 1] : borderValue);
    }
    
    #endif  // CAFFE_DATA_TRANSFORMER_HPP_

    
      bool is_started() const;
    
      /**
   * @brief Returns the layer type.
   */
  virtual inline const char* type() const { return ''; }
    
    #include <map>
#include <string>
#include <vector>
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
  /// @brief Not implemented -- AccuracyLayer cannot be used as a loss.
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    for (int i = 0; i < propagate_down.size(); ++i) {
      if (propagate_down[i]) { NOT_IMPLEMENTED; }
    }
  }
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /**
 * @brief Normalizes the input to have 0-mean and/or unit (1) variance across
 *        the batch.
 *
 * This layer computes Batch Normalization as described in [1]. For each channel
 * in the data (i.e. axis 1), it subtracts the mean and divides by the variance,
 * where both statistics are computed across both spatial dimensions and across
 * the different examples in the batch.
 *
 * By default, during training time, the network is computing global
 * mean/variance statistics via a running average, which is then used at test
 * time to allow deterministic outputs for each input. You can manually toggle
 * whether the network is accumulating or using the statistics via the
 * use_global_stats option. For reference, these statistics are kept in the
 * layer's three blobs: (0) mean, (1) variance, and (2) moving average factor.
 *
 * Note that the original paper also included a per-channel learned bias and
 * scaling factor. To implement this in Caffe, define a `ScaleLayer` configured
 * with `bias_term: true` after each `BatchNormLayer` to handle both the bias
 * and scaling factor.
 *
 * [1] S. Ioffe and C. Szegedy, 'Batch Normalization: Accelerating Deep Network
 *     Training by Reducing Internal Covariate Shift.' arXiv preprint
 *     arXiv:1502.03167 (2015).
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class BatchNormLayer : public Layer<Dtype> {
 public:
  explicit BatchNormLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times ...) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (M) @f$
   *      the inputs @f$ x_2 @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (M \times ...) @f$:
   *      the reindexed array @f$
   *        y = x_1[x_2]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    namespace caffe {
    }
    
    // These measure definitions should be kept in sync across opencensus
// implementations--see
// https://github.com/census-instrumentation/opencensus-java/blob/master/contrib/grpc_metrics/src/main/java/io/opencensus/contrib/grpc/metrics/RpcMeasureConstants.java.
    
    const ViewDescriptor& ClientServerLatencyHour() {
  const static ViewDescriptor descriptor =
      HourDescriptor()
          .set_name('grpc.io/client/server_latency/hour')
          .set_measure(kRpcClientServerLatencyMeasureName)
          .set_aggregation(MillisDistributionAggregation())
          .add_column(ClientMethodTagKey());
  return descriptor;
}
    
      // implementation of ServerReflectionInfo(stream ServerReflectionRequest) rpc
  // in ServerReflection service
  Status ServerReflectionInfo(
      ServerContext* context,
      ServerReaderWriter<reflection::v1alpha::ServerReflectionResponse,
                         reflection::v1alpha::ServerReflectionRequest>* stream)
      override;
    
    ProtoServerReflectionPlugin::ProtoServerReflectionPlugin()
    : reflection_service_(new grpc::ProtoServerReflection()) {}
    
    #include <grpc/support/port_platform.h>
    
    #include 'b2Glue.h'
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
      virtual const std::string& getType() const CXX11_OVERRIDE;
    
    #endif // D_DHT_ROUTING_TABLE_DESERIALIZER_H

    
        taskFactory->setLocalNode(localNode);
    taskFactory->setRoutingTable(routingTable.get());
    taskFactory->setMessageDispatcher(dispatcher.get());
    taskFactory->setMessageFactory(factory.get());
    taskFactory->setTaskQueue(taskQueue.get());
    taskFactory->setTimeout(std::chrono::seconds(messageTimeout));
    
    
    {} // namespace aria2

    
      virtual std::shared_ptr<DHTTask>
  createPeerAnnounceTask(const unsigned char* infoHash) = 0;
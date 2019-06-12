
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {  if (debug) {
    const OpRegistrationData* op_reg_data;
    Status status = OpRegistry::Global()->LookUp(node->op(), &op_reg_data);
    if (!status.ok()) {
      os << '\tCouldn't find op registration for ' << node->op() << std::endl;
    } else if (!op_reg_data->shape_inference_fn) {
      os << '\tCouldn't find shape function for op ' << node->op() << std::endl;
    } else if (properties.HasInputProperties(node->name())) {
      const std::vector<OpInfo::TensorProperties>& props =
          properties.GetInputProperties(node->name());
      for (int i = 0; i < props.size(); ++i) {
        const OpInfo::TensorProperties& prop = props[i];
        if (prop.has_value()) {
          os << '\t'
             << 'input ' << i << ' (' << DataTypeString(prop.dtype())
             << ') has known value' << std::endl;
        }
      }
    }
  }
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Actually dereferences cached numpy arrays. REQUIRES being called while
// holding the GIL.
void ClearDecrefCache();
    
    // A wrapper around io::RecordReader that is more easily SWIG wrapped for
// Python.  An instance of this class is not safe for concurrent access
// by multiple threads.
class PyRecordReader {
 public:
  // TODO(vrv): make this take a shared proto to configure
  // the compression options.
  static PyRecordReader* New(const string& filename, uint64 start_offset,
                             const string& compression_type_string,
                             TF_Status* out_status);
    }
    
    #endif  // TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_PLATFORM_ID_H_

    
     public:
  /*! \brief cuda kernel argument descriptor */
  struct ArgType {
    /*! \brief whether argument is NDArray */
    bool is_ndarray;
    /*! \brief whether argument is constant (input) */
    bool is_const;
    /*! \brief data type of argument */
    mshadow::TypeFlag dtype;
  };
  /*! \brief Cuda kernel */
  class Kernel {
   public:
    /*! \brief Launch the kernel */
    void Launch(const Context& ctx, const std::vector<dmlc::any>& args,
                uint32_t grid_dim_x, uint32_t grid_dim_y, uint32_t grid_dim_z,
                uint32_t block_dim_x, uint32_t block_dim_y, uint32_t block_dim_z,
                uint32_t shared_mem);
    /*! \brief kernel interface signature */
    const std::vector<ArgType>& signature() { return signature_; }
    }
    
    template<typename Dtype>
void DelCaffeBlobs(std::vector< ::caffe::Blob<Dtype>*>* v, int n_num) {
  for (index_t i=0; i < n_num; ++i)
    delete v->at(i);
}
    
     private:
  /*!
   * \brief Wait for all started threads to signal that they're ready
   */
  void WaitForReady() {
    for (const std::shared_ptr<dmlc::ManualEvent>& ptr : ready_events_) {
      ptr->wait();
    }
  }
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
      // Change the layout of matrices to column-major
  Tensor<cpu, 2, DType> out_t(Shape2(out.size(1), out.size(0)));
  AllocSpace(&out_t);
  flip<cpu, DType>(out.size(0), out.size(1), out_t.dptr_, out_t.stride_,
    out.dptr_, out.stride_);
    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    struct LambdaRankParam : public dmlc::Parameter<LambdaRankParam> {
  int num_pairsample;
  float fix_list_weight;
  // declare parameters
  DMLC_DECLARE_PARAMETER(LambdaRankParam) {
    DMLC_DECLARE_FIELD(num_pairsample).set_lower_bound(1).set_default(1)
        .describe('Number of pair generated for each instance.');
    DMLC_DECLARE_FIELD(fix_list_weight).set_lower_bound(0.0f).set_default(0.0f)
        .describe('Normalize the weight of each list by this value,'
                  ' if equals 0, no effect will happen');
  }
};
    
      const xgboost::MetaInfo& info = dmat->Info();
  const std::vector<uint64_t> expected_qids{1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3};
  const std::vector<xgboost::bst_uint> expected_group_ptr{0, 4, 8, 12};
  CHECK(info.qids_ == expected_qids);
  CHECK(info.group_ptr_ == expected_group_ptr);
  CHECK_GE(info.kVersion, info.kVersionQidAdded);
    
    // prediction
#include '../src/predictor/predictor.cc'
#include '../src/predictor/cpu_predictor.cc'
    
      const HostDeviceVector<bst_float> in_vec{h_in, TRANSFORM_GPU_DIST};
  HostDeviceVector<bst_float> out_vec{h_out, TRANSFORM_GPU_DIST};
  out_vec.Fill(0);
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
    
    {  static const std::string R;
};
    
      // localnode
  // 8bytes reserved
  readBytes(fp, buf, buf.size(), 8);
  // localnode ID
  readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
  auto localNode = std::make_shared<DHTNode>(buf);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
      void setRoutingTable(DHTRoutingTable* routingTable);
    
      DHTTaskExecutor immediateTaskQueue_;
    
    namespace aria2 {
    }
    
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
    
    class DHTUnknownMessage : public DHTMessage {
private:
  unsigned char* data_;
  size_t length_;
  std::string ipaddr_;
  uint16_t port_;
    }
    
    DNSCache::CacheEntry& DNSCache::CacheEntry::operator=(const CacheEntry& c)
{
  if (this != &c) {
    hostname_ = c.hostname_;
    port_ = c.port_;
    addrEntries_ = c.addrEntries_;
  }
  return *this;
}
    
    void ExtensionProcessor::process_ping(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext('Extension.ping', callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, 'Extension.ping');
    }
    
    namespace osquery {
namespace tables {
    }
    }
    
    #pragma once
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    TEST_F(iptables, test_sanity) {
  auto const data = execute_query('select * from iptables');
    }
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    namespace osquery {
namespace table_tests {
    }
    }
    
    #include <osquery/tests/integration/tables/helper.h>
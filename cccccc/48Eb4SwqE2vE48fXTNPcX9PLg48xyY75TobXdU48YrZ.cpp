
        
        /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
      virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    param_.InitAllowUnknown(kwargs);
    base_->Init(kwargs);
    rnd_.seed(kRandMagic + param_.seed);
    outimg_.set_pad(false);
    meanimg_.set_pad(false);
    if (param_.mean_img.length() != 0) {
      std::unique_ptr<dmlc::Stream> fi(
          dmlc::Stream::Create(param_.mean_img.c_str(), 'r', true));
      if (fi.get() == nullptr) {
        this->CreateMeanImg();
      } else {
        fi.reset(nullptr);
        if (param_.verbose) {
          LOG(INFO) << 'Load mean image from ' << param_.mean_img;
        }
        // use python compatible ndarray store format
        std::vector<NDArray> data;
        std::vector<std::string> keys;
        {
          std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(param_.mean_img.c_str(), 'r'));
          NDArray::Load(fi.get(), &data, &keys);
        }
        CHECK_EQ(data.size(), 1)
            << 'Invalid mean image file format';
        data[0].WaitToRead();
        mshadow::Tensor<cpu, 3> src = data[0].data().get<cpu, 3, real_t>();
        meanimg_.Resize(src.shape_);
        mshadow::Copy(meanimg_, src);
        meanfile_ready_ = true;
      }
    }
  }
    
     protected:
  /*! \brief prefetcher parameters */
  PrefetcherParam param_;
  /*! \brief backend thread */
  dmlc::ThreadedIter<DataBatch> iter;
  /*! \brief internal batch loader */
  std::unique_ptr<IIterator<TBlobBatch> > loader_;
    
    #ifndef MXNET_KVSTORE_GRADIENT_COMPRESSION_H_
#define MXNET_KVSTORE_GRADIENT_COMPRESSION_H_
#include <dmlc/parameter.h>
#include <string>
#include <utility>
#include <vector>
#include 'mxnet/ndarray.h'
    
    #ifndef DECL_BINARY_LAUNCH
#define DECL_BINARY_LAUNCH(XPU, OP)                                               \
  template <> \
  void BinaryOpKernelImpl<OP, XPU>(mshadow::Stream<XPU> *s, \
                          const TBlob& lhs, const TBlob& rhs, TBlob *out) { \
    BinaryOpKernelLaunch<OP>(s, lhs, rhs, out); \
  }
#endif
    
      // Initialise the Hadamard product to eye(k)
  // where k is the number of 'factors'
  int k = out.size(0);
  Tensor<cpu, 2, DType> hadamard_prod(Shape2(k, k));
  AllocSpace(&hadamard_prod);
  hadamard_prod = 1;
    
      ~CuDNNBilinearSamplerOp() {
    if (init_cudnn_) {
      CUDNN_CALL(cudnnDestroySpatialTransformerDescriptor(st_desc_));
      CUDNN_CALL(cudnnDestroyTensorDescriptor(in_desc_));
      CUDNN_CALL(cudnnDestroyTensorDescriptor(out_desc_));
    }
  }
    
    
    {
    {}  // namespace obj
}  // namespace xgboost
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    SEXP XGBoosterLoadModel_R(SEXP handle, SEXP fname) {
  R_API_BEGIN();
  CHECK_CALL(XGBoosterLoadModel(R_ExternalPtrAddr(handle), CHAR(asChar(fname))));
  R_API_END();
  return R_NilValue;
}
    
    // Finally register the objective function.
// After it succeeds you can try use xgboost with objective=mylogistic
XGBOOST_REGISTER_OBJECTIVE(MyLogistic, 'mylogistic')
.describe('User defined logistic regression plugin')
.set_body([]() { return new MyLogistic(); });
    
    
    {
    {} // namespace common
} // namespace xgboost

    
    
    { private:
  // no copying allowed
  WriteControllerToken(const WriteControllerToken&) = delete;
  void operator=(const WriteControllerToken&) = delete;
};
    
    #include <string>
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
    
    {  rocksdb::WriteOptions wopts;
  db->Merge(wopts, '0', 'bad');  // This is filtered out
  db->Merge(wopts, '1', 'data1');
  db->Merge(wopts, '1', 'bad');
  db->Merge(wopts, '1', 'data2');
  db->Merge(wopts, '1', 'bad');
  db->Merge(wopts, '3', 'data3');
  db->CompactRange(rocksdb::CompactRangeOptions(), nullptr, nullptr);
  fprintf(stderr, 'filter.count_ = %d\n', filter.count_);
  assert(filter.count_ == 0);
  fprintf(stderr, 'filter.merge_count_ = %d\n', filter.merge_count_);
  assert(filter.merge_count_ == 6);
}

    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
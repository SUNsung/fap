#ifndef GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
#define GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    SourceGeneratorBase::~SourceGeneratorBase() {
}
    
      virtual ExtensionGenerator* NewExtensionGenerator(
      const FieldDescriptor* descriptor) const;
    
      virtual inline const char* type() const { return 'ArgMax'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    
    {}  // namespace caffe
    
    #include 'caffe/layers/conv_layer.hpp'
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_CUDNN_RELU_LAYER_HPP_

    
    
    {}  // namespace caffe
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #define THPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THPDoubleStorageClass)
#define THPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THPLongStorageClass)
#define THPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THPIntStorageClass)
#define THPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THPShortStorageClass)
#define THPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THPCharStorageClass)
#define THPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THPByteStorageClass)
    
    // recursive computation of SHAP values for a decision tree
inline void RegTree::TreeShap(const RegTree::FVec& feat, bst_float *phi,
                              unsigned node_index, unsigned unique_depth,
                              PathElement *parent_unique_path, bst_float parent_zero_fraction,
                              bst_float parent_one_fraction, int parent_feature_index,
                              int condition, unsigned condition_feature,
                              bst_float condition_fraction) const {
  const auto node = (*this)[node_index];
    }
    
      dmlc::DataIter<SparsePage>* ColIterator() override;
    
    class SparsePageRawFormat : public SparsePageFormat {
 public:
  bool Read(SparsePage* page, dmlc::SeekStream* fi) override {
    if (!fi->Read(&(page->offset))) return false;
    CHECK_NE(page->offset.size(), 0U) << 'Invalid SparsePage file';
    page->data.resize(page->offset.back());
    if (page->data.size() != 0) {
      CHECK_EQ(fi->Read(dmlc::BeginPtr(page->data),
                        (page->data).size() * sizeof(Entry)),
               (page->data).size() * sizeof(Entry))
          << 'Invalid SparsePage file';
    }
    return true;
  }
    }
    
    
    {
    {XGBOOST_REGISTER_GBM(GBTree, 'gbtree')
.describe('Tree booster, gradient boosted trees.')
.set_body([](const std::vector<std::shared_ptr<DMatrix> >& cached_mats, bst_float base_margin) {
    auto* p = new GBTree(base_margin);
    p->InitCache(cached_mats);
    return p;
  });
XGBOOST_REGISTER_GBM(Dart, 'dart')
.describe('Tree booster, dart.')
.set_body([](const std::vector<std::shared_ptr<DMatrix> >& cached_mats, bst_float base_margin) {
    GBTree* p = new Dart(base_margin);
    return p;
  });
}  // namespace gbm
}  // namespace xgboost

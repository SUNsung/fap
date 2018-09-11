
        
        bool NwCurrentWindowInternalGetZoomFunction::RunNWSync(base::ListValue* response, std::string* error) {
  content::WebContents* web_contents = GetSenderWebContents();
  if (!web_contents)
    return false;
  double zoom_level =
      ZoomController::FromWebContents(web_contents)->GetZoomLevel();
  response->AppendDouble(zoom_level);
  return true;
}
    
    // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
       void ExecuteCommand(int command_id, int event_flags) override;
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
      std::string key;
  std::string modifiers;
  option.GetString('key',&key);
  option.GetString('modifiers',&modifiers);
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Datum.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<Datum> & datum_vector,
                Blob<Dtype>* transformed_blob);
    
    #endif  // CAFFE_INTERNAL_THREAD_HPP_

    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
        for (int fd: to_add)
      register_fd(fd);
    to_add.clear();
    
    
    {      vector<TensorShape> out(1);
      std::vector<int> newDims =
          SqueezeOp<CPUContext>::ComputeDims(GetDimsVector(in[0]), dims);
      out[0] = CreateTensorShape(newDims, in[0].data_type());
      return out;
    })
    .InheritOnnxSchema('Squeeze');
    
      bool RunOnDevice() override {
    return DispatchHelper<TensorTypes<float, double, int, long, std::string>>::
        call(this, Input(0));
  }
    
    // implementation of inline functions.
inline void Learner::Predict(const SparsePage::Inst& inst,
                             bool output_margin,
                             HostDeviceVector<bst_float>* out_preds,
                             unsigned ntree_limit) const {
  gbm_->PredictInstance(inst, &out_preds->HostVector(), ntree_limit);
  if (!output_margin) {
    obj_->PredTransform(out_preds);
  }
}
    
      /**
   * \fn  virtual void Predictor::UpdatePredictionCache( const gbm::GBTreeModel
   * &model, std::vector<std::unique_ptr<TreeUpdater> >* updaters, int
   * num_new_trees) = 0;
   *
   * \brief Update the internal prediction cache using newly added trees. Will
   * use the tree updater to do this if possible. Should be called as a part of
   * the tree boosting process to facilitate the look up of predictions
   * at a later time.
   *
   * \param           model         The model.
   * \param [in,out]  updaters      The updater sequence for gradient boosting.
   * \param           num_new_trees Number of new trees.
   */
    
    
    {
    {
    { private:
  /*! \brief input stream */
  dmlc::Stream *strm_;
  /*! \brief current buffer pointer */
  size_t buffer_ptr_;
  /*! \brief internal buffer */
  std::string buffer_;
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_IO_H_

    
    #endif  // DMLC_ENABLE_STD_THREAD

    
    /*!
 * \brief Macro to register sparse page format.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
 * .describe('Raw binary data format.')
 * .set_body([]() {
 *     return new RawFormat();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(Name)                       \
  DMLC_REGISTRY_REGISTER(::xgboost::data::SparsePageFormatReg, SparsePageFormat, Name)
    
    
    {
    {  ThreadState(uint32_t index, SharedState* _shared)
      : tid(index), rnd(1000 + index), shared(_shared) {}
};
}  // namespace
    
    class KeepFilterFactory : public CompactionFilterFactory {
 public:
  explicit KeepFilterFactory(bool check_context = false,
                             bool check_context_cf_id = false)
      : check_context_(check_context),
        check_context_cf_id_(check_context_cf_id),
        compaction_filter_created_(false) {}
    }
    
    #ifndef ROCKSDB_LITE
    
    namespace rocksdb {
    }
    
      env.now_micros_ += 1999900u;  // sleep debt 1000
    
    class MyFilter : public rocksdb::CompactionFilter {
 public:
  bool Filter(int level, const rocksdb::Slice& key,
              const rocksdb::Slice& existing_value, std::string* new_value,
              bool* value_changed) const override {
    fprintf(stderr, 'Filter(%s)\n', key.ToString().c_str());
    ++count_;
    assert(*value_changed == false);
    return false;
  }
    }
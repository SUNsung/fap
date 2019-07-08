
        
            const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    #endif // BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H

    
    
    {    CRIPEMD160();
    CRIPEMD160& Write(const unsigned char* data, size_t len);
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
    CRIPEMD160& Reset();
};
    
    #ifdef USE_OPENCV
  /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Mat.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<cv::Mat> & mat_vector,
                Blob<Dtype>* transformed_blob);
    
    
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
    /**
 * @brief Compute the index of the @f$ K @f$ max values for each datum across
 *        all dimensions @f$ (C \times H \times W) @f$.
 *
 * Intended for use after a classification layer to produce a prediction.
 * If parameter out_max_val is set to true, output is a vector of pairs
 * (max_ind, max_val) for each image. The axis parameter specifies an axis
 * along which to maximise.
 *
 * NOTE: does not implement Backwards operation.
 */
template <typename Dtype>
class ArgMaxLayer : public Layer<Dtype> {
 public:
  /**
   * @param param provides ArgMaxParameter argmax_param,
   *     with ArgMaxLayer options:
   *   - top_k (\b optional uint, default 1).
   *     the number @f$ K @f$ of maximal items to output.
   *   - out_max_val (\b optional bool, default false).
   *     if set, output a vector of pairs (max_ind, max_val) unless axis is set then
   *     output max_val along the specified axis.
   *   - axis (\b optional int).
   *     if set, maximise along the specified axis else maximise the flattened
   *     trailing dimensions for each index of the first / num dimension.
   */
  explicit ArgMaxLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
    
    {  // Best available image.
  Pix* pix_;
  // True if the source image is white-on-black.
  bool inverse_;
  // Block the word came from. If not null, block->re_rotation() takes the
  // 'untransformed' coordinates even further back to the original image.
  // Used only on the first DENORM in a chain.
  const BLOCK* block_;
  // Rotation to apply between translation to the origin and scaling.
  const FCOORD* rotation_;
  // Previous transformation in a chain.
  const DENORM* predecessor_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding x-coord. Owned by the DENORM.
  GenericVector<float>* x_map_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding y-coord. Owned by the DENORM.
  GenericVector<float>* y_map_;
  // x-coordinate to be mapped to final_xshift_ in the result.
  float x_origin_;
  // y-coordinate to be mapped to final_yshift_ in the result.
  float y_origin_;
  // Scale factors for x and y coords. Applied to pre-rotation system.
  float x_scale_;
  float y_scale_;
  // Destination coords of the x_origin_ and y_origin_.
  float final_xshift_;
  float final_yshift_;
};
    
    // Computes the Otsu threshold(s) for the given image rectangle, making one
// for each channel. Each channel is always one byte per pixel.
// Returns an array of threshold values and an array of hi_values, such
// that a pixel value >threshold[channel] is considered foreground if
// hi_values[channel] is 0 or background if 1. A hi_value of -1 indicates
// that there is no apparent foreground. At least one hi_value will not be -1.
// Delete thresholds and hi_values with delete [] after use.
// The return value is the number of channels in the input image, being
// the size of the output thresholds and hi_values arrays.
int OtsuThreshold(Pix* src_pix, int left, int top, int width, int height,
                  int** thresholds, int** hi_values);
    
      // Functions to navigate the tree. Unlike the original implementation, we
  // store the root at index 0.
  int ParentNode(int index) const {
    return (index + 1) / 2 - 1;
  }
  int LeftChild(int index) const {
    return index * 2 + 1;
  }
    
    // A useful base class to facilitate the common operation of sorting a vector
// of owned pointer data using a separate key. This class owns its data pointer,
// deleting it when it has finished with it, and providing copy constructor and
// operator= that have move semantics so that the data does not get copied and
// only a single instance of KDPtrPair holds a specific data pointer.
template <typename Key, typename Data>
class KDPtrPair {
 public:
  KDPtrPair() : data_(nullptr) {}
  KDPtrPair(Key k, Data* d) : data_(d), key_(k) {}
  // Copy constructor steals the pointer from src and nulls it in src, thereby
  // moving the (single) ownership of the data.
  KDPtrPair(KDPtrPair& src) : data_(src.data_), key_(src.key_) {
    src.data_ = nullptr;
  }
  // Destructor deletes data, assuming it is the sole owner.
  ~KDPtrPair() {
    delete this->data_;
    this->data_ = nullptr;
  }
  // Operator= steals the pointer from src and nulls it in src, thereby
  // moving the (single) ownership of the data.
  void operator=(KDPtrPair& src) {
    delete this->data_;
    this->data_ = src.data_;
    src.data_ = nullptr;
    this->key_ = src.key_;
  }
    }
    
      size_t BytesRead() const override {
    return parser_->BytesRead();
  }
    
    class LambdaRankObjMAP : public LambdaRankObj {
 protected:
  struct MAPStats {
    /*! \brief the accumulated precision */
    float ap_acc;
    /*!
     * \brief the accumulated precision,
     *   assuming a positive instance is missing
     */
    float ap_acc_miss;
    /*!
     * \brief the accumulated precision,
     * assuming that one more positive instance is inserted ahead
     */
    float ap_acc_add;
    /* \brief the accumulated positive instance count */
    float hits;
    MAPStats() = default;
    MAPStats(float ap_acc, float ap_acc_miss, float ap_acc_add, float hits)
        : ap_acc(ap_acc), ap_acc_miss(ap_acc_miss), ap_acc_add(ap_acc_add), hits(hits) {}
  };
  /*!
   * \brief Obtain the delta MAP if trying to switch the positions of instances in index1 or index2
   *        in sorted triples
   * \param sorted_list the list containing entry information
   * \param index1,index2 the instances switched
   * \param map_stats a vector containing the accumulated precisions for each position in a list
   */
  inline bst_float GetLambdaMAP(const std::vector<ListEntry> &sorted_list,
                                int index1, int index2,
                                std::vector<MAPStats> *p_map_stats) {
    std::vector<MAPStats> &map_stats = *p_map_stats;
    if (index1 == index2 || map_stats[map_stats.size() - 1].hits == 0) {
      return 0.0f;
    }
    if (index1 > index2) std::swap(index1, index2);
    bst_float original = map_stats[index2].ap_acc;
    if (index1 != 0) original -= map_stats[index1 - 1].ap_acc;
    bst_float changed = 0;
    bst_float label1 = sorted_list[index1].label > 0.0f ? 1.0f : 0.0f;
    bst_float label2 = sorted_list[index2].label > 0.0f ? 1.0f : 0.0f;
    if (label1 == label2) {
      return 0.0;
    } else if (label1 < label2) {
      changed += map_stats[index2 - 1].ap_acc_add - map_stats[index1].ap_acc_add;
      changed += (map_stats[index1].hits + 1.0f) / (index1 + 1);
    } else {
      changed += map_stats[index2 - 1].ap_acc_miss - map_stats[index1].ap_acc_miss;
      changed += map_stats[index2].hits / (index2 + 1);
    }
    bst_float ans = (changed - original) / (map_stats[map_stats.size() - 1].hits);
    if (ans < 0) ans = -ans;
    return ans;
  }
  /*
   * \brief obtain preprocessing results for calculating delta MAP
   * \param sorted_list the list containing entry information
   * \param map_stats a vector containing the accumulated precisions for each position in a list
   */
  inline void GetMAPStats(const std::vector<ListEntry> &sorted_list,
                          std::vector<MAPStats> *p_map_acc) {
    std::vector<MAPStats> &map_acc = *p_map_acc;
    map_acc.resize(sorted_list.size());
    bst_float hit = 0, acc1 = 0, acc2 = 0, acc3 = 0;
    for (size_t i = 1; i <= sorted_list.size(); ++i) {
      if (sorted_list[i - 1].label > 0.0f) {
        hit++;
        acc1 += hit / i;
        acc2 += (hit - 1) / i;
        acc3 += (hit + 1) / i;
      }
      map_acc[i - 1] = MAPStats(acc1, acc2, acc3, hit);
    }
  }
  void GetLambdaWeight(const std::vector<ListEntry> &sorted_list,
                       std::vector<LambdaPair> *io_pairs) override {
    std::vector<LambdaPair> &pairs = *io_pairs;
    std::vector<MAPStats> map_stats;
    GetMAPStats(sorted_list, &map_stats);
    for (auto & pair : pairs) {
      pair.weight *=
          GetLambdaMAP(sorted_list, pair.pos_index,
                       pair.neg_index, &map_stats);
    }
  }
};
    
    
    {
    {    // size, size_types
    {
      float* arr = new float[16];
      Span<float> s (arr, 16);
      SPAN_ASSERT_TRUE(s.size() == 16, status_);
      SPAN_ASSERT_TRUE(s.size_bytes() == 16 * sizeof(float), status_);
      delete [] arr;
    }
  }
};
    
      std::string key, value;
  // 1. Empty lines or comments
  ASSERT_FALSE(parser.ParseKeyValuePair('# Mary had a little lamb',
                                        &key, &value));
  ASSERT_FALSE(parser.ParseKeyValuePair('#tree_method = gpu_hist',
                                        &key, &value));
  ASSERT_FALSE(parser.ParseKeyValuePair(
                 '# minimum sum of instance weight(hessian) needed in a child',
                 &key, &value));
  ASSERT_FALSE(parser.ParseKeyValuePair('', &key, &value));
    
    // global
#include '../src/learner.cc'
#include '../src/logging.cc'
#include '../src/common/common.cc'
#include '../src/common/host_device_vector.cc'
#include '../src/common/hist_util.cc'
    
    /*!
 * \brief Input stream that support additional PeekRead
 *  operation, besides read.
 */
class PeekableInStream : public dmlc::Stream {
 public:
  explicit PeekableInStream(dmlc::Stream* strm)
      : strm_(strm), buffer_ptr_(0) {}
    }
    
      /*! \return the default evaluation metric for the objective */
  virtual const char* DefaultEvalMetric() const = 0;
  // the following functions are optional, most of time default implementation is good enough
  /*!
   * \brief transform prediction values, this is only called when Prediction is called
   * \param io_preds prediction values, saves to this vector as well
   */
  virtual void PredTransform(HostDeviceVector<bst_float> *io_preds) {}
    
    TEST(Metric, DeclareUnifiedTest(RMSLE)) {
  auto lparam = xgboost::CreateEmptyGenericParam(0, NGPUS);
  xgboost::Metric * metric = xgboost::Metric::Create('rmsle', &lparam);
  metric->Configure({});
  ASSERT_STREQ(metric->Name(), 'rmsle');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.2f, 0.4f, 0.8f, 1.6f},
                            {1.0f, 1.0f, 1.0f, 1.0f, 1.0f}), 0.40632, 1e-4);
  delete metric;
}
    
    TEST(Objective, DeclareUnifiedTest(TweedieRegressionBasic)) {
  xgboost::LearnerTrainParam lparam = xgboost::CreateEmptyGenericParam(0, NGPUS);
  std::vector<std::pair<std::string, std::string>> args;
  xgboost::ObjFunction * obj = xgboost::ObjFunction::Create('reg:tweedie', &lparam);
    }
    
    void GBTree::InitUpdater() {
  if (updaters_.size() != 0) return;
  std::string tval = tparam_.updater_seq;
  std::vector<std::string> ups = common::Split(tval, ',');
  for (const std::string& pstr : ups) {
    std::unique_ptr<TreeUpdater> up(TreeUpdater::Create(pstr.c_str(), learner_param_));
    up->Init(this->cfg_);
    updaters_.push_back(std::move(up));
  }
}
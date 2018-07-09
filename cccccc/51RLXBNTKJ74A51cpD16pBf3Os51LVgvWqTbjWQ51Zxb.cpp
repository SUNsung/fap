
        
        
    { private:
  struct pair_sort_first {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
      return left.first < right.first;
    }
  };
  void check_batch_reindex(int initial_num, int final_num,
                           const Dtype* ridx_data);
};
    
      virtual inline const char* type() const { return 'BNLL'; }
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    DIR128::DIR128(                 //from fcoord
               const FCOORD fc  //vector to quantize
              ) {
  int high, low, current;        //binary search
    }
    
    template <bool del, class R, class P1, class A1, class A2>
class _TessFunctionResultCallback_1_2 : public TessResultCallback2<R,A1,A2> {
 public:
  typedef TessResultCallback2<R,A1,A2> base;
  typedef R (*FunctionSignature)(P1,A1,A2);
    }
    
     protected:
  // Converters to generate indices for individual feature dimensions.
  int XBucket(int x) const {
    int bucket = x * x_buckets_ / kIntFeatureExtent;
    return ClipToRange(bucket, 0, static_cast<int>(x_buckets_) - 1);
  }
  int YBucket(int y) const {
    int bucket = y * y_buckets_ / kIntFeatureExtent;
    return ClipToRange(bucket, 0, static_cast<int>(y_buckets_) - 1);
  }
  // Use DivRounded for theta so that exactly vertical and horizontal are in
  // the middle of a bucket. The Modulo takes care of the wrap-around.
  int ThetaBucket(int theta) const {
    int bucket = DivRounded(theta * theta_buckets_, kIntFeatureExtent);
    return Modulo(bucket, theta_buckets_);
  }
  // Returns an INT_FEATURE_STRUCT corresponding to the given buckets.
  INT_FEATURE_STRUCT PositionFromBuckets(int x, int y, int theta) const;
    
      // Displays the labels and cuts at the corresponding xcoords.
  // Size of labels should match xcoords.
  void DisplayLSTMOutput(const GenericVector<int>& labels,
                         const GenericVector<int>& xcoords,
                         int height, ScrollView* window);
    
      // Performs forward-backward on the given trainingdata.
  // Returns the sample that was used or nullptr if the next sample was deemed
  // unusable. samples_trainer could be this or an alternative trainer that
  // holds the training samples.
  const ImageData* TrainOnLine(LSTMTrainer* samples_trainer, bool batch) {
    int sample_index = sample_iteration();
    const ImageData* image =
        samples_trainer->training_data_.GetPageBySerial(sample_index);
    if (image != nullptr) {
      Trainability trainable = TrainOnLine(image, batch);
      if (trainable == UNENCODABLE || trainable == NOT_BOXED) {
        return nullptr;  // Sample was unusable.
      }
    } else {
      ++sample_iteration_;
    }
    return image;
  }
  Trainability TrainOnLine(const ImageData* trainingdata, bool batch);
    
    CCNonTextDetect::CCNonTextDetect(int gridsize,
                             const ICOORD& bleft, const ICOORD& tright)
  : BlobGrid(gridsize, bleft, tright),
    max_noise_count_(static_cast<int>(kMaxSmallNeighboursPerPix *
                                      gridsize * gridsize)),
    noise_density_(nullptr) {
  // TODO(rays) break max_noise_count_ out into an area-proportional
  // value, as now plus an additive constant for the number of text blobs
  // in the 3x3 neighbourhood - maybe 9.
}
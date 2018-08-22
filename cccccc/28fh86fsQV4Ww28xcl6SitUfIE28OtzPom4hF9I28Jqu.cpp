
        
        
    {  if (argc != 4) {
    printf('This script converts the CIFAR dataset to the leveldb format used\n'
           'by caffe to perform classification.\n'
           'Usage:\n'
           '    convert_cifar_data input_folder output_folder db_type\n'
           'Where the input folder should contain the binary batch files.\n'
           'The CIFAR dataset could be downloaded at\n'
           '    http://www.cs.toronto.edu/~kriz/cifar.html\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(string(argv[1]), string(argv[2]), string(argv[3]));
  }
  return 0;
}

    
      /* Merge the separate channels into a single image. */
  cv::Mat mean;
  cv::merge(channels, mean);
    
      FLAGS_alsologtostderr = 1;
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include <vector>
    
    #include <vector>
    
      /**
   * @brief Computes the error gradient w.r.t. the ELU inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} = \left\{
   *        \begin{array}{lr}
   *            1           & \mathrm{if} \; x > 0 \\
   *            y + \alpha  & \mathrm{if} \; x \le 0
   *        \end{array} \right.
   *      @f$ if propagate_down[0].
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
      virtual inline const char* type() const { return 'Filter'; }
  virtual inline int MinBottomBlobs() const { return 2; }
  virtual inline int MinTopBlobs() const { return 1; }
    
    #ifndef TESSERACT_TRAINING_MASTERTRAINER_H_
#define TESSERACT_TRAINING_MASTERTRAINER_H_
    
    // dims=[5, 4, 3, 2]->[3, 5, 4, 2]
TEST_F(MatrixTest, RotatingTranspose_2_0) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 2, 0, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][6, 7][12, 13][18, 19]]
  //                 [[24, 25][30, 31][36, 37][42, 43]]
  //                 [[48, 49][54, 55][60, 61][66, 67]]
  //                 [[72, 73][78, 79][84, 85][90, 91]]
  //                 [[96, 97][102, 103][108, 109][114, 115]]]
  //                [[[2,3]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(6, m(1, 0));
  EXPECT_EQ(7, m(1, 1));
  EXPECT_EQ(24, m(4, 0));
  EXPECT_EQ(25, m(4, 1));
  EXPECT_EQ(30, m(5, 0));
  EXPECT_EQ(2, m(20, 0));
}
    
    // Helper to compute an offset index feature. In this context an offset
// feature with a dir of +/-1 is a feature of a similar direction,
// but shifted perpendicular to the direction of the feature. An offset
// feature with a dir of +/-2 is feature at the same position, but rotated
// by +/- one [compact] quantum. Returns the index of the generated offset
// feature, or -1 if it doesn't exist. Dir should be in
// [-kNumOffsetMaps, kNumOffsetMaps] to indicate the relative direction.
// A dir of 0 is an identity transformation.
// Both input and output are from the index(sparse) feature space, not
// the mapped/compact feature space, but the offset feature is the minimum
// distance moved from the input to guarantee that it maps to the next
// available quantum in the mapped/compact space.
int IntFeatureMap::ComputeOffsetFeature(int index_feature, int dir) const {
  INT_FEATURE_STRUCT f = InverseIndexFeature(index_feature);
  ASSERT_HOST(IndexFeature(f) == index_feature);
  if (dir == 0) {
    return index_feature;
  } else if (dir == 1 || dir == -1) {
    FCOORD feature_dir = FeatureDirection(f.Theta);
    FCOORD rotation90(0.0f, 1.0f);
    feature_dir.rotate(rotation90);
    // Find the nearest existing feature.
    for (int m = 1; m < kMaxOffsetDist; ++m) {
      double x_pos = f.X + feature_dir.x() * (m * dir);
      double y_pos = f.Y + feature_dir.y() * (m * dir);
      int x = IntCastRounded(x_pos);
      int y = IntCastRounded(y_pos);
      if (x >= 0 && x <= UINT8_MAX && y >= 0 && y <= UINT8_MAX) {
        INT_FEATURE_STRUCT offset_f;
        offset_f.X = x;
        offset_f.Y = y;
        offset_f.Theta = f.Theta;
        int offset_index = IndexFeature(offset_f);
        if (offset_index != index_feature && offset_index >= 0)
          return offset_index;  // Found one.
      } else {
        return -1;  // Hit the edge of feature space.
      }
    }
  } else if (dir == 2 || dir == -2) {
    // Find the nearest existing index_feature.
    for (int m = 1; m < kMaxOffsetDist; ++m) {
      int theta = f.Theta + m * dir / 2;
      INT_FEATURE_STRUCT offset_f;
      offset_f.X = f.X;
      offset_f.Y = f.Y;
      offset_f.Theta = Modulo(theta, 256);
      int offset_index = IndexFeature(offset_f);
      if (offset_index != index_feature && offset_index >= 0)
        return offset_index;  // Found one.
    }
  }
  return -1;  // Nothing within the max distance.
}
    
    // The CCNonTextDetect class contains grid-based operations on blobs to create
// a full-resolution image mask analogous yet complementary to
// pixGenHalftoneMask as it is better at line-drawings, graphs and charts.
class CCNonTextDetect : public BlobGrid {
 public:
  CCNonTextDetect(int gridsize, const ICOORD& bleft, const ICOORD& tright);
  virtual ~CCNonTextDetect();
    }
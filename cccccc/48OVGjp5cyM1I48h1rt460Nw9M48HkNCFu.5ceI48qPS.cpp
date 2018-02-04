  /* Load the binaryproto mean file. */
  SetMean(mean_file);
    
      static vector<string> LayerTypeList() {
    CreatorRegistry& registry = Registry();
    vector<string> layer_types;
    for (typename CreatorRegistry::iterator iter = registry.begin();
         iter != registry.end(); ++iter) {
      layer_types.push_back(iter->first);
    }
    return layer_types;
  }
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return true; }
  virtual void compute_output_shape();
};
    
    OCL_PERF_TEST_P(StereoBMFixture, StereoBM, ::testing::Combine(OCL_PERF_ENUM(32, 64, 128), OCL_PERF_ENUM(11,21) ) )
{
    const int n_disp = get<0>(GetParam()), winSize = get<1>(GetParam());
    UMat left, right, disp;
    }
    
    void dAB(cv::InputArray A, InputArray B, OutputArray dABdA, OutputArray dABdB);
    
      // Calculate E^2
  if (E2 >= 0) {
    double E = sqrt(E2);
    double E_2 = 0.5 * E;
    if (nb_real_roots == 0) {
      x0 = - R_2 + E_2 - b_4;
      x1 = x0 - E;
      nb_real_roots = 2;
    }
    else {
      x2 = - R_2 + E_2 - b_4;
      x3 = x2 - E;
      nb_real_roots = 4;
    }
  }
    
    
    {    float alpha = (dir2.x*offset.y - dir2.y*offset.x)/det;
    cross_point = origin1 + dir1*alpha;
}
    
        cv::Affine3<T>::Vec3 w;
    cv::Affine3<T>::Mat3 u, vt, R;
    
            /****************************/
        Mat bad_distCoeffs_cpp1(distCoeffs_cpp.size(), CV_32S); CvMat bad_distCoeffs_c1 = bad_distCoeffs_cpp1;
        Mat bad_distCoeffs_cpp2(2, 2, CV_32F); CvMat bad_distCoeffs_c2 = bad_distCoeffs_cpp2;
        Mat bad_distCoeffs_cpp3(1, 7, CV_32F); CvMat bad_distCoeffs_c3 = bad_distCoeffs_cpp3;
    
    void cameraCalibrationTiltTest::addNoiseRemoveInvalidPoints(
    std::vector<cv::Point2f>& imagePoints,
    std::vector<cv::Point3f>& objectPoints,
    std::vector<cv::Point2f>& noisyImagePoints,
    double halfWidthNoise)
{
    std::vector<cv::Point2f>::iterator itImg = imagePoints.begin();
    std::vector<cv::Point3f>::iterator itObj = objectPoints.begin();
    noisyImagePoints.clear();
    noisyImagePoints.reserve(imagePoints.size());
    while (itImg != imagePoints.end())
    {
        cv::Point2f pix = *itImg + cv::Point2f(
            (float)m_rng.uniform(-halfWidthNoise, halfWidthNoise),
            (float)m_rng.uniform(-halfWidthNoise, halfWidthNoise));
        bool ok =
            pix.x >= 0 &&
            pix.x <= m_imageSize.width - 1.0 &&
            pix.y >= 0 &&
            pix.y <= m_imageSize.height - 1.0;
        if (ok)
        {
            noisyImagePoints.push_back(pix);
            ++itImg;
            ++itObj;
        }
        else
        {
            itImg = imagePoints.erase(itImg);
            itObj = objectPoints.erase(itObj);
        }
    }
}
    
        ChessBoardGenerator(const Size& patternSize = Size(8, 6));
    Mat operator()(const Mat& bg, const Mat& camMat, const Mat& distCoeffs, std::vector<Point2f>& corners) const;
    Mat operator()(const Mat& bg, const Mat& camMat, const Mat& distCoeffs, const Size2f& squareSize, std::vector<Point2f>& corners) const;
    Mat operator()(const Mat& bg, const Mat& camMat, const Mat& distCoeffs, const Size2f& squareSize, const Point3f& pos, std::vector<Point2f>& corners) const;
    Size cornersSize() const;
    
    
    {        cvReleaseMat( &_v );
        cvReleaseImage( &gray );
        cvReleaseImage( &thresh );
        progress = update_progress( progress, idx-1, max_idx, 0 );
    }
    
            if (!us.m_enabled)
        {
            return;
        }
    
    // Compares two ASCII strings ignoring the case.
// TODO: Should switch to boost, boost::iequal should be used instead.
// TODO: we already have EqualCI() in Basics.h which does the same thing.
template<class TElement>
inline bool AreEqualIgnoreCase(
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement>>& s1,
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement> >& s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    }
    
      void StartServers(size_t num_servers,
                    std::vector<int> ports = std::vector<int>()) {
    for (size_t i = 0; i < num_servers; ++i) {
      int port = 0;
      if (ports.size() == num_servers) port = ports[i];
      servers_.emplace_back(new ServerData(server_host_, port));
    }
  }
    
     protected:
  friend std::shared_ptr<ChannelCredentials> CompositeChannelCredentials(
      const std::shared_ptr<ChannelCredentials>& channel_creds,
      const std::shared_ptr<CallCredentials>& call_creds);
    
    int grpc_message_compression_algorithm_parse(
    grpc_slice value, grpc_message_compression_algorithm* algorithm) {
  if (grpc_slice_eq(value, GRPC_MDSTR_IDENTITY)) {
    *algorithm = GRPC_MESSAGE_COMPRESS_NONE;
    return 1;
  } else if (grpc_slice_eq(value, GRPC_MDSTR_DEFLATE)) {
    *algorithm = GRPC_MESSAGE_COMPRESS_DEFLATE;
    return 1;
  } else if (grpc_slice_eq(value, GRPC_MDSTR_GZIP)) {
    *algorithm = GRPC_MESSAGE_COMPRESS_GZIP;
    return 1;
  } else {
    return 0;
  }
  return 0;
}
    
    static int copy(grpc_slice_buffer* input, grpc_slice_buffer* output) {
  size_t i;
  for (i = 0; i < input->count; i++) {
    grpc_slice_buffer_add(output, grpc_slice_ref_internal(input->slices[i]));
  }
  return 1;
}
    
    void grpc_channel_update_call_size_estimate(grpc_channel* channel,
                                            size_t size) {
  size_t cur = (size_t)gpr_atm_no_barrier_load(&channel->call_size_estimate);
  if (cur < size) {
    /* size grew: update estimate */
    gpr_atm_no_barrier_cas(&channel->call_size_estimate, (gpr_atm)cur,
                           (gpr_atm)size);
    /* if we lose: never mind, something else will likely update soon enough */
  } else if (cur == size) {
    /* no change: holding pattern */
  } else if (cur > 0) {
    /* size shrank: decrease estimate */
    gpr_atm_no_barrier_cas(
        &channel->call_size_estimate, (gpr_atm)cur,
        (gpr_atm)(GPR_MIN(cur - 1, (255 * cur + size) / 256)));
    /* if we lose: never mind, something else will likely update soon enough */
  }
}
    
    static void test_tiny_data_compress(void) {
  grpc_slice_buffer input;
  grpc_slice_buffer output;
    }
    
    typedef struct fullstack_compression_fixture_data {
  char* localaddr;
  grpc_channel_args* client_args_compression;
  grpc_channel_args* server_args_compression;
} fullstack_compression_fixture_data;
    
     private:
  // A version of PartialMerge that actually performs 'partial merging'.
  // Use this to simulate the exact behaviour of the StringAppendOperator.
  bool _AssocPartialMergeMulti(const Slice& key,
                               const std::deque<Slice>& operand_list,
                               std::string* new_value, Logger* logger) const;
    
    
    {    ASSERT_EQ(a, 'x\nt\nr');
    ASSERT_EQ(b, 'y\n2\nmonkey');
    ASSERT_EQ(c, 'asdasd\nasdasd');
  }
    
      TestCompactionListener* listener = new TestCompactionListener();
  options.listeners.emplace_back(listener);
  std::vector<std::string> cf_names = {
      'pikachu', 'ilya', 'muromec', 'dobrynia',
      'nikitich', 'alyosha', 'popovich'};
  CreateAndReopenWithCF(cf_names, options);
  ASSERT_OK(Put(1, 'pikachu', std::string(90000, 'p')));
  ASSERT_OK(Put(2, 'ilya', std::string(90000, 'i')));
  ASSERT_OK(Put(3, 'muromec', std::string(90000, 'm')));
  ASSERT_OK(Put(4, 'dobrynia', std::string(90000, 'd')));
  ASSERT_OK(Put(5, 'nikitich', std::string(90000, 'n')));
  ASSERT_OK(Put(6, 'alyosha', std::string(90000, 'a')));
  ASSERT_OK(Put(7, 'popovich', std::string(90000, 'p')));
  for (int i = 1; i < 8; ++i) {
    ASSERT_OK(Flush(i));
    const Slice kRangeStart = 'a';
    const Slice kRangeEnd = 'z';
    ASSERT_OK(dbfull()->CompactRange(CompactRangeOptions(), handles_[i],
                                     &kRangeStart, &kRangeEnd));
    dbfull()->TEST_WaitForFlushMemTable();
    dbfull()->TEST_WaitForCompact();
  }
    
        Size(double width, double height)
    : width(width)
    , height(height)
    {
    }
    
      YGNodeCalculateLayout(root, 100, 100, YGDirectionLTR);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(50, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(50, YGNodeLayoutGetHeight(root_child0));
    
      YGNodeFreeRecursive(root);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(50, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root_child0));
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
      explicit operator bool() const {
    return m_ptr ? true : false;
  }
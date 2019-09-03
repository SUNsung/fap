
        
            Mat displacement_field(Size(dst_frame1.cols / (1 << OF_scale), dst_frame1.rows / (1 << OF_scale)),
                           CV_32FC2);
    randn(displacement_field, 0.0, sigma);
    resize(displacement_field, displacement_field, dst_frame2.size(), 0.0, 0.0, INTER_CUBIC);
    for (int i = 0; i < displacement_field.rows; i++)
        for (int j = 0; j < displacement_field.cols; j++)
            displacement_field.at<Vec2f>(i, j) += Vec2f((float)j, (float)i);
    
    #include 'ImfAttribute.h'
    
    
template <>
void
FloatVectorAttribute::writeValueTo
    (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream &os, int version) const
{
    int n = _value.size();
    }
    
    
    {    FrameBuffer::SliceMap::iterator _i;
};
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
        //--------------------------------------------------
    // Read a tile of raw pixel data from the file,
    // without uncompressing it (this function is
    // used to implement TiledOutputFile::copyPixels()).
    //--------------------------------------------------
    
    void
InputPart::rawPixelData (int firstScanLine, const char *&pixelData, int &pixelDataSize)
{
    file->rawPixelData(firstScanLine, pixelData, pixelDataSize);
}
    
     
        IMF_EXPORT
        void                rawPixelDataToBuffer (int scanLine,
                                                  char *pixelData,
                                                  int &pixelDataSize) const;
    
    TEST_F(JsonObjectWriterTest, EmptyRootObject) {
  ow_ = new JsonObjectWriter('', out_stream_);
  ow_->StartObject('')->EndObject();
  EXPECT_EQ('{}', CloseStreamAndGetString());
}
    
    
    {
    {
    {}  // namespace io
}  // namespace protobuf
}  // namespace google

    
    namespace google {
namespace protobuf {
    }
    }
    
    // Write and Flush via the ByteSink superclass interface.
void WriteAndFlush(ByteSink* s) {
  s->Append('abc', 3);
  s->Flush();
}
    
    // ----
// Author: lar@google.com (Laramie Leavitt)
//
// These tests are really compile time tests.
// If you try to step through this in a debugger
// you will not see any evaluations, merely that
// value is assigned true or false sequentially.
    
    
    {};
    
      cout << 'Enter email address (blank for none): ';
  string email;
  getline(cin, email);
  if (!email.empty()) {
    person->set_email(email);
  }
    
      PyObjectStruct* get() const { return ptr_; }
    
    
    {  EXPECT_EQ(new_net.external_input_size(), 1);
  EXPECT_EQ(new_net.external_output_size(), 2);
}

    
    ```
    
    
    {          return out;
        })
    .Input(0, 'X', '4-tensor in NCHW or NHWC.')
    .Output(
        0,
        'Y',
        '4-tensor. For NCHW: N x (C x kH x kW) x outH x outW.'
        'For NHWC: N x outH x outW x (kH x kW x C');
    
    template <typename Dtype>
void HDF5OutputLayer<Dtype>::LayerSetUp(const vector<Blob<Dtype>*>& bottom,
    const vector<Blob<Dtype>*>& top) {
  file_name_ = this->layer_param_.hdf5_output_param().file_name();
  file_id_ = H5Fcreate(file_name_.c_str(), H5F_ACC_TRUNC, H5P_DEFAULT,
                       H5P_DEFAULT);
  CHECK_GE(file_id_, 0) << 'Failed to open HDF5 file' << file_name_;
  file_opened_ = true;
}
    
    template <>
void hdf5_load_nd_dataset<float>(hid_t file_id, const char* dataset_name_,
        int min_dim, int max_dim, Blob<float>* blob, bool reshape) {
  hdf5_load_nd_dataset_helper(file_id, dataset_name_, min_dim, max_dim, blob,
                              reshape);
  herr_t status = H5LTread_dataset_float(
    file_id, dataset_name_, blob->mutable_cpu_data());
  CHECK_GE(status, 0) << 'Failed to read float dataset ' << dataset_name_;
}
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \max(min, \min(max, x))
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    template <typename Dtype>
void InnerProductLayer<Dtype>::Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  // Figure out the dimensions
  const int axis = bottom[0]->CanonicalAxisIndex(
      this->layer_param_.inner_product_param().axis());
  const int new_K = bottom[0]->count(axis);
  CHECK_EQ(K_, new_K)
      << 'Input size incompatible with inner product parameters.';
  // The first 'axis' dimensions are independent inner products; the total
  // number of these is M_, the product over these dimensions.
  M_ = bottom[0]->count(0, axis);
  // The top shape will be the bottom shape with the flattened axes dropped,
  // and replaced by a single axis with dimension num_output (N_).
  vector<int> top_shape = bottom[0]->shape();
  top_shape.resize(axis + 1);
  top_shape[axis] = N_;
  top[0]->Reshape(top_shape);
  // Set up the bias multiplier
  if (bias_term_) {
    vector<int> bias_shape(1, M_);
    bias_multiplier_.Reshape(bias_shape);
    caffe_set(M_, Dtype(1), bias_multiplier_.mutable_cpu_data());
  }
}
    
     protected:
  string SnapshotFilename(const string& extension);
  string SnapshotToBinaryProto();
  string SnapshotToHDF5();
  // The test routine
  void TestAll();
  void Test(const int test_net_id = 0);
  virtual void SnapshotSolverState(const string& model_filename) = 0;
  virtual void RestoreSolverStateFromHDF5(const string& state_file) = 0;
  virtual void RestoreSolverStateFromBinaryProto(const string& state_file) = 0;
  void DisplayOutputBlobs(const int net_id);
  void UpdateSmoothedLoss(Dtype loss, int start_iter, int average_loss);
    
        for (int i = 0; i < callbacks_.size(); ++i) {
      callbacks_[i]->on_start();
    }
    const bool display = param_.display() && iter_ % param_.display() == 0;
    net_->set_debug_info(display && param_.debug_info());
    // accumulate the loss and gradient
    Dtype loss = 0;
    for (int i = 0; i < param_.iter_size(); ++i) {
      loss += net_->ForwardBackward();
    }
    loss /= param_.iter_size();
    // average the loss across iterations for smoothed reporting
    UpdateSmoothedLoss(loss, start_iter, average_loss);
    if (display) {
      float lapse = iteration_timer_.Seconds();
      float per_s = (iter_ - iterations_last_) / (lapse ? lapse : 1);
      LOG_IF(INFO, Caffe::root_solver()) << 'Iteration ' << iter_
          << ' (' << per_s << ' iter/s, ' << lapse << 's/'
          << param_.display() << ' iters), loss = ' << smoothed_loss_;
      iteration_timer_.Start();
      iterations_last_ = iter_;
      const vector<Blob<Dtype>*>& result = net_->output_blobs();
      int score_index = 0;
      for (int j = 0; j < result.size(); ++j) {
        const Dtype* result_vec = result[j]->cpu_data();
        const string& output_name =
            net_->blob_names()[net_->output_blob_indices()[j]];
        const Dtype loss_weight =
            net_->blob_loss_weights()[net_->output_blob_indices()[j]];
        for (int k = 0; k < result[j]->count(); ++k) {
          ostringstream loss_msg_stream;
          if (loss_weight) {
            loss_msg_stream << ' (* ' << loss_weight
                            << ' = ' << loss_weight * result_vec[k] << ' loss)';
          }
          LOG_IF(INFO, Caffe::root_solver()) << '    Train net output #'
              << score_index++ << ': ' << output_name << ' = '
              << result_vec[k] << loss_msg_stream.str();
        }
      }
    }
    for (int i = 0; i < callbacks_.size(); ++i) {
      callbacks_[i]->on_gradients_ready();
    }
    ApplyUpdate();
    
    #include 'caffe/util/signal_handler.h'
    
    void second(void) {
  printf('second\n');
  emscripten_sleep(1);
  longjmp(buf, -1);
}
    
    void PSOutputDev::clipToStrokePath(GfxState *state) {
  doPath(state->getPath());
  writePS('Ws\n');
}
    
      // Does this device use tilingPatternFill()?  If this returns false,
  // tiling pattern fills will be reduced to a series of other drawing
  // operations.
  virtual GBool useTilingPatternFill() { return gTrue; }
    
    
    {  int (*getCharFunc)(void *);
  void *data;
  int charBuf;
};
    
    #include 'goo/gtypes.h'
#include 'goo/GooList.h'
#include 'goo/GooString.h'
#include 'Object.h'
    
      // get direction
  if (dict->lookup('M', &obj)->isName()) {
    const char *m = obj.getName();
    
    if (strcmp('I', m) == 0)
      direction = transitionInward;
    else if (strcmp('O', m) == 0)
      direction = transitionOutward;
  }
  obj.free();
    
      // Get duration
  int getDuration() { return duration;}
    
    void MediaRendition::outputToFile(FILE* fp) {
  if (!isEmbedded)
    return;
    }
    
      MediaRendition* copy();
    
      virtual void *makeAuthData(GooString *ownerPassword,
			     GooString *userPassword);
  virtual void *getAuthData();
  virtual void freeAuthData(void *authData);
  virtual GBool authorize(void *authData);
  virtual int getPermissionFlags() { return permFlags; }
  virtual GBool getOwnerPasswordOk() { return ownerPasswordOk; }
  virtual Guchar *getFileKey() { return fileKey; }
  virtual int getFileKeyLength() { return fileKeyLength; }
  virtual int getEncVersion() { return encVersion; }
  virtual int getEncRevision() { return encRevision; }
  virtual CryptAlgorithm getEncAlgorithm() { return encAlgorithm; }
    
    
    {  Object *streamObj;
  SoundKind kind;
  GooString *fileName;
  double samplingRate;
  int channels;
  int bitsPerSample;
  SoundEncoding encoding;
};
    
    bool DHTRoutingTable::addNode(const std::shared_ptr<DHTNode>& node, bool good)
{
  A2_LOG_DEBUG(fmt('Trying to add node:%s', node->toString().c_str()));
  if (*localNode_ == *node) {
    A2_LOG_DEBUG('Adding node with the same ID with localnode is not allowed.');
    return false;
  }
  auto treeNode = dht::findTreeNodeFor(root_.get(), node->getID());
  while (1) {
    const std::shared_ptr<DHTBucket>& bucket = treeNode->getBucket();
    if (bucket->addNode(node)) {
      A2_LOG_DEBUG('Added DHTNode.');
      return true;
    }
    else if (bucket->splitAllowed()) {
      A2_LOG_DEBUG(fmt('Splitting bucket. Range:%s-%s',
                       util::toHex(bucket->getMinID(), DHT_ID_LENGTH).c_str(),
                       util::toHex(bucket->getMaxID(), DHT_ID_LENGTH).c_str()));
      treeNode->split();
      ++numBucket_;
      if (treeNode->getLeft()->isInRange(node->getID())) {
        treeNode = treeNode->getLeft();
      }
      else {
        treeNode = treeNode->getRight();
      }
    }
    else {
      if (good) {
        bucket->cacheNode(node);
        A2_LOG_DEBUG(fmt('Cached node=%s', node->toString().c_str()));
      }
      return false;
    }
  }
  return false;
}
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
    
    {} // namespace aria2
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    const std::string DHTUnknownMessage::E('e');
    
      // returns 'unknown'
  virtual const std::string& getMessageType() const CXX11_OVERRIDE;
    
        AddrEntry(const std::string& addr);
    AddrEntry(const AddrEntry& c);
    ~AddrEntry();
    
    class Velodyne64Driver : public VelodyneDriver {
 public:
  explicit Velodyne64Driver(const Config &config) : VelodyneDriver(config) {}
  ~Velodyne64Driver() {}
    }
    
    const float INNER_TIME_128[12][32] = {
    {-8.7f, -8.7f, -8.7f, -8.7f, -8.7f, -8.7f, -8.7f, -8.7f,
     -6.0f, -6.0f, -6.0f, -6.0f, -6.0f, -6.0f, -6.0f, -6.0f,
     -3.4f, -3.4f, -3.4f, -3.4f, -3.4f, -3.4f, -3.4f, -3.4f,
     -0.7f, -0.7f, -0.7f, -0.7f, -0.7f, -0.7f, -0.7f, -0.7f},
    {2.0f, 2.0f, 2.0f,  2.0f,  2.0f,  2.0f,  2.0f,  2.0f,  4.6f,  4.6f, 4.6f,
     4.6f, 4.6f, 4.6f,  4.6f,  4.6f,  7.3f,  7.3f,  7.3f,  7.3f,  7.3f, 7.3f,
     7.3f, 7.3f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f},
    {15.3f, 15.3f, 15.3f, 15.3f, 15.3f, 15.3f, 15.3f, 15.3f,
     18.0f, 18.0f, 18.0f, 18.0f, 18.0f, 18.0f, 18.0f, 18.0f,
     20.6f, 20.6f, 20.6f, 20.6f, 20.6f, 20.6f, 20.6f, 20.6f,
     23.3f, 23.3f, 23.3f, 23.3f, 23.3f, 23.3f, 23.3f, 23.3f},
    {25.9f, 25.9f, 25.9f, 25.9f, 25.9f, 25.9f, 25.9f, 25.9f,
     28.6f, 28.6f, 28.6f, 28.6f, 28.6f, 28.6f, 28.6f, 28.6f,
     31.3f, 31.3f, 31.3f, 31.3f, 31.3f, 31.3f, 31.3f, 31.3f,
     33.9f, 33.9f, 33.9f, 33.9f, 33.9f, 33.9f, 33.9f, 33.9f},
    {44.6f, 44.6f, 44.6f, 44.6f, 44.6f, 44.6f, 44.6f, 44.6f,
     47.3f, 47.3f, 47.3f, 47.3f, 47.3f, 47.3f, 47.3f, 47.3f,
     49.9f, 49.9f, 49.9f, 49.9f, 49.9f, 49.9f, 49.9f, 49.9f,
     52.6f, 52.6f, 52.6f, 52.6f, 52.6f, 52.6f, 52.6f, 52.6f},
    {55.3f, 55.3f, 55.3f, 55.3f, 55.3f, 55.3f, 55.3f, 55.3f,
     57.9f, 57.9f, 57.9f, 57.9f, 57.9f, 57.9f, 57.9f, 57.9f,
     60.6f, 60.6f, 60.6f, 60.6f, 60.6f, 60.6f, 60.6f, 60.6f,
     63.3f, 63.3f, 63.3f, 63.3f, 63.3f, 63.3f, 63.3f, 63.3f},
    {68.6f, 68.6f, 68.6f, 68.6f, 68.6f, 68.6f, 68.6f, 68.6f,
     71.3f, 71.3f, 71.3f, 71.3f, 71.3f, 71.3f, 71.3f, 71.3f,
     73.9f, 73.9f, 73.9f, 73.9f, 73.9f, 73.9f, 73.9f, 73.9f,
     76.6f, 76.6f, 76.6f, 76.6f, 76.6f, 76.6f, 76.6f, 76.6f},
    {79.2f, 79.2f, 79.2f, 79.2f, 79.2f, 79.2f, 79.2f, 79.2f,
     81.9f, 81.9f, 81.9f, 81.9f, 81.9f, 81.9f, 81.9f, 81.9f,
     84.6f, 84.9f, 84.9f, 84.9f, 84.9f, 84.9f, 84.9f, 84.9f,
     87.2f, 87.2f, 87.2f, 87.2f, 87.2f, 87.2f, 87.2f, 87.2f},
    {97.9f,  97.9f,  97.9f,  97.9f,  97.9f,  97.9f,  97.9f,  97.9f,
     100.6f, 100.6f, 100.6f, 100.6f, 100.6f, 100.6f, 100.6f, 100.6f,
     103.2f, 103.2f, 103.2f, 103.2f, 103.2f, 103.2f, 103.2f, 103.2f,
     105.9f, 105.9f, 105.9f, 105.9f, 105.9f, 105.9f, 105.9f, 105.9f},
    {108.6f, 108.6f, 108.6f, 108.6f, 108.6f, 108.6f, 108.6f, 108.6f,
     111.2f, 111.2f, 111.2f, 111.2f, 111.2f, 111.2f, 111.2f, 111.2f,
     113.9f, 113.9f, 113.9f, 113.9f, 113.9f, 113.9f, 113.9f, 113.9f,
     116.6f, 116.6f, 116.6f, 116.6f, 116.6f, 116.6f, 116.6f, 116.6f},
    {121.9f, 121.9f, 121.9f, 121.9f, 121.9f, 121.9f, 121.9f, 121.9f,
     124.6f, 124.6f, 124.6f, 124.6f, 124.6f, 124.6f, 124.6f, 124.6f,
     127.2f, 127.2f, 127.2f, 127.2f, 127.2f, 127.2f, 127.2f, 127.2f,
     129.9f, 129.9f, 129.9f, 129.9f, 129.9f, 129.9f, 129.9f, 129.9f},
    {132.5f, 132.5f, 132.5f, 132.5f, 132.5f, 132.5f, 132.5f, 132.5f,
     135.2f, 135.2f, 135.2f, 135.2f, 135.2f, 135.2f, 135.2f, 135.2f,
     137.9f, 137.9f, 137.9f, 137.9f, 137.9f, 137.9f, 137.9f, 137.9f,
     140.5f, 140.5f, 140.5f, 140.5f, 140.5f, 140.5f, 140.5f, 140.5f}};
    
      for (int i = 0; i < BLOCKS_PER_PACKET; i++) {  // 12
    azimuth = static_cast<float>(raw->blocks[i].rotation);
    if (i < (BLOCKS_PER_PACKET - 1)) {
      azimuth_diff = static_cast<float>(
          (36000 + raw->blocks[i + 1].rotation - raw->blocks[i].rotation) %
          36000);
      last_azimuth_diff = azimuth_diff;
    } else {
      azimuth_diff = last_azimuth_diff;
    }
    for (int laser_id = 0, k = 0; laser_id < SCANS_PER_BLOCK;
         ++laser_id, k += RAW_SCAN_SIZE) {  // 32, 3
      LaserCorrection& corrections = calibration_.laser_corrections_[laser_id];
    }
    }
    
    #include 'cyber/cyber.h'
#include 'cyber/proto/unit_test.pb.h'
#include 'cyber/py_wrapper/py_node.h'
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
      CanAgent agent_a(param_ptr_a.get());
  CanAgent agent_b(param_ptr_b.get());
  agent_a.AddOtherAgent(&agent_b);
  agent_b.AddOtherAgent(&agent_a);
  if (!agent_a.Start()) {
    AERROR << 'Agent a start failed.';
    return -1;
  }
  if (FLAGS_only_one_send) {
    agent_b.is_receiving(true);
    agent_b.is_sending_finish(true);
  } else {
    if (!agent_b.Start()) {
      AERROR << 'Agent b start failed.';
      return -1;
    }
  }
    
    #pragma once
    
      std::for_each(expect.begin(), expect.end(), [](int& input) {
    std::vector<int> vec = {1, 2, 3, 4};
    std::for_each(vec.begin(), vec.end(), [](int& v) { ++v; });
    input = std::accumulate(vec.begin(), vec.end(), input);
  });
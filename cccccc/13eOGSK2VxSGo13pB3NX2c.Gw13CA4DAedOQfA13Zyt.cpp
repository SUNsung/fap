
        
        
    {    void KeyChord::Vkey(int32_t value)
    {
        _vkey = value;
    }
}

    
    struct OSResults {
  OSResults() : unicharset(nullptr) {
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < kMaxNumberOfScripts; ++j)
        scripts_na[i][j] = 0;
      orientations[i] = 0;
    }
  }
  void update_best_orientation();
  // Set the estimate of the orientation to the given id.
  void set_best_orientation(int orientation_id);
  // Update/Compute the best estimate of the script assuming the given
  // orientation id.
  void update_best_script(int orientation_id);
  // Return the index of the script with the highest score for this orientation.
  TESS_API int get_best_script(int orientation_id) const;
  // Accumulate scores with given OSResults instance and update the best script.
  void accumulate(const OSResults& osr);
    }
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
      // Adds a new point. Takes a copy - the pt doesn't need to stay in scope.
  // Add must be called on points in sequence along the line.
  void Add(const ICOORD& pt);
  // Associates a half-width with the given point if a point overlaps the
  // previous point by more than half the width, and its distance is further
  // than the previous point, then the more distant point is ignored in the
  // distance calculation. Useful for ignoring i dots and other diacritics.
  void Add(const ICOORD& pt, int halfwidth);
    
      // Arguments:
  // block: if not nullptr, then this is the first transformation, and
  //        block->re_rotation() needs to be used after the Denorm
  //        transformation to get back to the image coords.
  // rotation: if not nullptr, apply this rotation after translation to the
  //           origin and scaling. (Usually a classify rotation.)
  // predecessor: if not nullptr, then predecessor has been applied to the
  //              input space and needs to be undone to complete the inverse.
  // The above pointers are not owned by this DENORM and are assumed to live
  // longer than this denorm, except rotation, which is deep copied on input.
  //
  // x_origin: The x origin which will be mapped to final_xshift in the result.
  // y_origin: The y origin which will be mapped to final_yshift in the result.
  //           Added to result of row->baseline(x) if not nullptr.
  //
  // x_scale: scale factor for the x-coordinate.
  // y_scale: scale factor for the y-coordinate. Ignored if segs is given.
  // Note that these scale factors apply to the same x and y system as the
  // x-origin and y-origin apply, ie after any block rotation, but before
  // the rotation argument is applied.
  //
  // final_xshift: The x component of the final translation.
  // final_yshift: The y component of the final translation.
  //
  // In theory, any of the commonly used normalizations can be setup here:
  // * Traditional baseline normalization on a word:
  // SetupNormalization(block, nullptr, nullptr,
  //                    box.x_middle(), baseline,
  //                    kBlnXHeight / x_height, kBlnXHeight / x_height,
  //                    0, kBlnBaselineOffset);
  // * 'Numeric mode' baseline normalization on a word, in which the blobs
  //   are positioned with the bottom as the baseline is achieved by making
  //   a separate DENORM for each blob.
  // SetupNormalization(block, nullptr, nullptr,
  //                    box.x_middle(), box.bottom(),
  //                    kBlnXHeight / x_height, kBlnXHeight / x_height,
  //                    0, kBlnBaselineOffset);
  // * Anisotropic character normalization used by IntFx.
  // SetupNormalization(nullptr, nullptr, denorm,
  //                    centroid_x, centroid_y,
  //                    51.2 / ry, 51.2 / rx, 128, 128);
  // * Normalize blob height to x-height (current OSD):
  // SetupNormalization(nullptr, &rotation, nullptr,
  //                    box.rotational_x_middle(rotation),
  //                    box.rotational_y_middle(rotation),
  //                    kBlnXHeight / box.rotational_height(rotation),
  //                    kBlnXHeight / box.rotational_height(rotation),
  //                    0, kBlnBaselineOffset);
  // * Secondary normalization for classification rotation (current):
  // FCOORD rotation = block->classify_rotation();
  // float target_height = kBlnXHeight / CCStruct::kXHeightCapRatio;
  // SetupNormalization(nullptr, &rotation, denorm,
  //                    box.rotational_x_middle(rotation),
  //                    box.rotational_y_middle(rotation),
  //                    target_height / box.rotational_height(rotation),
  //                    target_height / box.rotational_height(rotation),
  //                    0, kBlnBaselineOffset);
  // * Proposed new normalizations for CJK: Between them there is then
  // no need for further normalization at all, and the character fills the cell.
  // ** Replacement for baseline normalization on a word:
  // Scales height and width independently so that modal height and pitch
  // fill the cell respectively.
  // float cap_height = x_height / CCStruct::kXHeightCapRatio;
  // SetupNormalization(block, nullptr, nullptr,
  //                    box.x_middle(), cap_height / 2.0f,
  //                    kBlnCellHeight / fixed_pitch,
  //                    kBlnCellHeight / cap_height,
  //                    0, 0);
  // ** Secondary normalization for classification (with rotation) (proposed):
  // Requires a simple translation to the center of the appropriate character
  // cell, no further scaling and a simple rotation (or nothing) about the
  // cell center.
  // FCOORD rotation = block->classify_rotation();
  // SetupNormalization(nullptr, &rotation, denorm,
  //                    fixed_pitch_cell_center,
  //                    0.0f,
  //                    1.0f,
  //                    1.0f,
  //                    0, 0);
  void SetupNormalization(const BLOCK* block,
                          const FCOORD* rotation,
                          const DENORM* predecessor,
                          float x_origin, float y_origin,
                          float x_scale, float y_scale,
                          float final_xshift, float final_yshift);
    
    // Provides access to the ShapeTable that this classifier works with.
const ShapeTable* TessClassifier::GetShapeTable() const {
  return classify_->shape_table();
}
// Provides access to the UNICHARSET that this classifier works with.
// Only needs to be overridden if GetShapeTable() can return nullptr.
const UNICHARSET& TessClassifier::GetUnicharset() const {
  return classify_->unicharset;
}
    
    #include <memory>
#include <mutex>
    
    #include 'src/core/lib/gpr/env.h'
#include 'src/proto/grpc/testing/echo.grpc.pb.h'
#include 'test/core/util/port.h'
#include 'test/core/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    static void create_sockets(SOCKET sv[2]) {
  SOCKET svr_sock = INVALID_SOCKET;
  SOCKET lst_sock = INVALID_SOCKET;
  SOCKET cli_sock = INVALID_SOCKET;
  SOCKADDR_IN addr;
  int addr_len = sizeof(addr);
    }
    
    static bool iomgr_platform_is_any_background_poller_thread(void) {
  return false;
}
    
    #include <grpc/support/alloc.h>
#include <grpc/support/log.h>
    
    class CronetChannelCredentialsImpl final : public ChannelCredentials {
 public:
  CronetChannelCredentialsImpl(void* engine) : engine_(engine) {}
    }
    
    // Do one real rpc and one mocked one
TEST_F(MockTest, SimpleRpc) {
  ResetStub();
  FakeClient client(stub_.get());
  client.DoEcho();
  MockEchoTestServiceStub stub;
  EchoResponse resp;
  resp.set_message('hello world');
  EXPECT_CALL(stub, Echo(_, _, _))
      .Times(AtLeast(1))
      .WillOnce(DoAll(SetArgPointee<2>(resp), Return(Status::OK)));
  client.ResetStub(&stub);
  client.DoEcho();
}
    
      void ResetStub() {
    std::shared_ptr<Channel> channel = grpc::CreateChannel(
        server_address_.str(), grpc::InsecureChannelCredentials());
    stub_ = grpc::testing::EchoTestService::NewStub(channel);
  }
    
      void setTaskQueue(DHTTaskQueue* taskQueue);
    
      char headerCompat[8];
  memset(headerCompat, 0, sizeof(headerCompat));
  // magic
  headerCompat[0] = 0xa1u;
  headerCompat[1] = 0xa2u;
  // format ID
  headerCompat[2] = 0x02u;
  // version
  headerCompat[6] = 0;
  headerCompat[7] = 0x02u;
    
    #include <cstring>
#include <cstdio>
    
    
    {} // namespace aria2
    
    class DHTTaskQueueImpl : public DHTTaskQueue {
private:
  DHTTaskExecutor periodicTaskQueue1_;
    }
    
    DHTTokenTracker::DHTTokenTracker()
{
  util::generateRandomData(secret_[0], SECRET_SIZE);
  memcpy(secret_[1], secret_[0], SECRET_SIZE);
}
    
        // if image then interpret as W, H, C with layout according to optional imageLayout parameter
    // If more than 3 parameters are given, then we assume that this is for a Times operation and interpret the last 3 dimensions according to imageLayout.
    if (isImage)
    {
        if (dims.size() < 3)
            RuntimeError('%ls should have 3 or more parameters [width, height, numChannels].', cnNodeType.c_str());
        ImageLayoutKind imageLayoutKind = ImageLayoutKindFrom(node->GetOptionalParameter('imageLayout', 'HWC'));
        size_t k0 = dims.size() - 3; // last 3 need to be arranged
        SmallVector<size_t> imageDims = ImageDimensions::AsTensorShape(dims[k0 + 0], dims[k0 + 1], dims[k0 + 2], imageLayoutKind).GetDims();
        for (size_t k = 0; k < 3; k++)
            dims[k0 + k] = imageDims[k];
    }
    
        ConfigParameters config;
    std::string rawConfigString = ConfigParameters::ParseCommandLine(argc, argv, config);    // get the command param set they want
    
        template <typename N>
    static shared_ptr<N> AsNodePtr(const ComputationNodeBasePtr& inode)
    {
        return dynamic_pointer_cast<N>(inode);
    }
    template <typename N>
    static bool IsNodePtr(const ComputationNodeBasePtr& inode)
    {
        return AsNodePtr<N>(inode) != nullptr;
    }
    
        public:
        BasicModelAveragingSGD(const MPIWrapperPtr& pMPI, size_t reportFreq, DEVICEID_TYPE devID)
            : Base(pMPI, reportFreq, devID)
        {
            fprintf(stderr, 'Parallel training (%d workers) using ModelAveraging\n',(int)m_pMPI->NumNodesInUse());
        }
    
    
template <class ElemType>
std::shared_ptr<IDistGradAggregator<ElemType>> GetSimpleDistGradAggregator(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce)
{
    if (Globals::UseV2Aggregator())
        return std::make_shared<V2SimpleDistGradAggregator<ElemType>>(
            mpi,
            useAsyncAggregation,
            deviceId,
            syncStatsTrace,
            ::CNTK::MPICommunicator(packThresholdSizeInBytes, useFP16AllReduce));
    else
        return std::make_shared<SimpleDistGradAggregator<ElemType>>(
            mpi,
            useAsyncAggregation,
            deviceId,
            syncStatsTrace,
            packThresholdSizeInBytes);
}
    
    
    {          m_combinator->combine(future);
        }
    
      bool isMetadataValid() const override { return m_metadata.contains('ttl'); }
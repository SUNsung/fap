
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    TfLiteStatus ArgMinEval(TfLiteContext* context, TfLiteNode* node) {
  return Eval(context, node, false);
}
    
    template <typename T>
class ArgMaxOpModel : public ArgBaseOpModel<T> {
 public:
  ArgMaxOpModel(std::initializer_list<int> input_shape, TensorType input_type,
                TensorType output_type, TensorType index_output_type)
      : ArgBaseOpModel<T>(input_shape, input_type, output_type,
                          index_output_type) {
    ArgBaseOpModel<T>::SetBuiltinOp(
        BuiltinOperator_ARG_MAX, BuiltinOptions_ArgMaxOptions,
        CreateArgMaxOptions(ArgBaseOpModel<T>::builder_, index_output_type)
            .Union());
    ArgBaseOpModel<T>::BuildInterpreter({input_shape, {1, 1, 1, 1}});
  }
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    { private:
  // Smoothness constant of smooth hinge loss
  // TODO(sibyl-Aix6ihai): expose this parameter
  const double gamma = 1;
};
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
    #include 'tensorflow/core/common_runtime/dma_helper.h'
#include 'tensorflow/core/common_runtime/sycl/sycl_device_context.h'
    
    
    {    OP_REQUIRES_OK(
        context, context->GetAttr('samples_per_second', &samples_per_second_));
    OP_REQUIRES(context, samples_per_second_ > 0,
                errors::InvalidArgument('samples_per_second must be > 0.'));
    OP_REQUIRES_OK(context,
                   context->GetAttr('bits_per_second', &bits_per_second_));
  }
    
    #define EIGEN_USE_GPU
    
      CHECK(worker_name.size() < max_worker_name_length)
      << 'Specified worker name is too long.';
  snprintf(my_name, max_worker_name_length, worker_name.c_str());
  std::vector<char> worker_names(number_of_procs * max_worker_name_length);
  MPI_CHECK(MPI_Allgather(my_name, max_worker_name_length, MPI_CHAR,
                          &worker_names[0], max_worker_name_length, MPI_CHAR,
                          MPI_COMM_WORLD));
    
      DebugGrpcIO::SetDebugNodeKeyGrpcState(
      kGrpcUrl1, 'foo:0:DebugIdentity',
      EventReply::DebugOpStateChange::READ_ONLY);
  DebugGrpcIO::SetDebugNodeKeyGrpcState(
      kGrpcUrl2, 'bar:0:DebugIdentity',
      EventReply::DebugOpStateChange::READ_ONLY);
    
      // Expects the appropriate results from the compressed_  unicharset_.
  void ExpectCorrect(const string& lang) {
    // Count the number of times each code is used in each element of
    // RecodedCharID.
    RecodedCharID zeros;
    for (int i = 0; i < RecodedCharID::kMaxCodeLen; ++i) zeros.Set(i, 0);
    int code_range = compressed_.code_range();
    std::vector<RecodedCharID> times_seen(code_range, zeros);
    for (int u = 0; u <= unicharset_.size(); ++u) {
      if (u != UNICHAR_SPACE && u != null_char_ &&
          (u == unicharset_.size() || (unicharset_.has_special_codes() &&
                                       u < SPECIAL_UNICHAR_CODES_COUNT))) {
        continue;  // Not used so not encoded.
      }
      RecodedCharID code;
      int len = compressed_.EncodeUnichar(u, &code);
      // Check round-trip encoding.
      int unichar_id;
      GenericVector<UNICHAR_ID> normed_ids;
      if (u == null_char_ || u == unicharset_.size()) {
        unichar_id = null_char_;
      } else {
        unichar_id = u;
      }
      EXPECT_EQ(unichar_id, compressed_.DecodeUnichar(code));
      // Check that the codes are valid.
      for (int i = 0; i < len; ++i) {
        int code_val = code(i);
        EXPECT_GE(code_val, 0);
        EXPECT_LT(code_val, code_range);
        times_seen[code_val].Set(i, times_seen[code_val](i) + 1);
      }
    }
    // Check that each code is used in at least one position.
    for (int c = 0; c < code_range; ++c) {
      int num_used = 0;
      for (int i = 0; i < RecodedCharID::kMaxCodeLen; ++i) {
        if (times_seen[c](i) != 0) ++num_used;
      }
      EXPECT_GE(num_used, 1) << 'c=' << c << '/' << code_range;
    }
    // Check that GetNextCodes/GetFinalCodes lists match the times_seen,
    // and create valid codes.
    RecodedCharID code;
    CheckCodeExtensions(code, times_seen);
    // Finally, we achieved all that using a codebook < 10% of the size of
    // the original unicharset, for CK or Indic, and 20% with J, but just
    // no bigger for all others.
    if (IsCJKLang(lang) || IsIndicLang(lang)) {
      EXPECT_LT(code_range, unicharset_.size() / (lang == 'jpn' ? 5 : 10));
    } else {
      EXPECT_LE(code_range, unicharset_.size() + 1);
    }
    LOG(INFO) << 'Compressed unicharset of ' << unicharset_.size() << ' to '
              << code_range;
  }
  // Checks for extensions of the current code that either finish a code, or
  // extend it and checks those extensions recursively.
  void CheckCodeExtensions(const RecodedCharID& code,
                           const std::vector<RecodedCharID>& times_seen) {
    RecodedCharID extended = code;
    int length = code.length();
    const GenericVector<int>* final_codes = compressed_.GetFinalCodes(code);
    if (final_codes != nullptr) {
      for (int i = 0; i < final_codes->size(); ++i) {
        int ending = (*final_codes)[i];
        EXPECT_GT(times_seen[ending](length), 0);
        extended.Set(length, ending);
        int unichar_id = compressed_.DecodeUnichar(extended);
        EXPECT_NE(INVALID_UNICHAR_ID, unichar_id);
      }
    }
    const GenericVector<int>* next_codes = compressed_.GetNextCodes(code);
    if (next_codes != nullptr) {
      for (int i = 0; i < next_codes->size(); ++i) {
        int extension = (*next_codes)[i];
        EXPECT_GT(times_seen[extension](length), 0);
        extended.Set(length, extension);
        CheckCodeExtensions(extended, times_seen);
      }
    }
  }
    
      /**
   * Returns the polygon outline of the current block. The returned Pta must
   * be ptaDestroy-ed after use. Note that the returned Pta lists the vertices
   * of the polygon, and the last edge is the line segment between the last
   * point and the first point. nullptr will be returned if the iterator is
   * at the end of the document or layout analysis was not used.
   */
  Pta* BlockPolygon() const;
    
      int GetScaleFactor() const {
    return scale_;
  }
    
    template <bool del, class R, class T, class P1, class P2, class P3, class A1>
class _ConstTessMemberResultCallback_3_1 : public TessResultCallback1<R,A1> {
 public:
  typedef TessResultCallback1<R,A1> base;
  typedef R (T::*MemberSignature)(P1,P2,P3,A1) const;
    }
    
    
//#define EXPERIMENT_ON
#ifdef EXPERIMENT_ON  // This code is commented out as SampleIterator and
// TrainingSample are not reviewed/checked in yet, but these functions are a
// useful indicator of how an IntFeatureMap is setup.
    
        // Non-serialized cache data.
    // Indexed features of the canonical sample.
    GenericVector<int> canonical_features;
    // The mapped features of all the samples.
    BitVector cloud_features;
    
      // Computes matrix.vector v = Wu.
  // u is of size W.dim2() - 1 and the output v is of size W.dim1().
  // u is imagined to have an extra element at the end with value 1, to
  // implement the bias, but it doesn't actually have it.
  // Asserts that the call matches what we have.
  void MatrixDotVector(const double* u, double* v) const;
  void MatrixDotVector(const int8_t* u, double* v) const;
  // MatrixDotVector for peep weights, MultiplyAccumulate adds the
  // component-wise products of *this[0] and v to inout.
  void MultiplyAccumulate(const double* v, double* inout);
  // Computes vector.matrix v = uW.
  // u is of size W.dim1() and the output v is of size W.dim2() - 1.
  // The last result is discarded, as v is assumed to have an imaginary
  // last value of 1, as with MatrixDotVector.
  void VectorDotMatrix(const double* u, double* v) const;
  // Fills dw_[i][j] with the dot product u[i][] . v[j][], using elements
  // from u and v, starting with u[i][offset] and v[j][offset].
  // Note that (matching MatrixDotVector) v[last][] is missing, presumed 1.0.
  // Runs parallel if requested. Note that inputs must be transposed.
  void SumOuterTransposed(const TransposedArray& u, const TransposedArray& v,
                          bool parallel);
  // Updates the weights using the given learning rate, momentum and adam_beta.
  // num_samples is used in the Adam correction factor.
  void Update(double learning_rate, double momentum, double adam_beta,
              int num_samples);
  // Adds the dw_ in other to the dw_ is *this.
  void AddDeltas(const WeightMatrix& other);
  // Sums the products of weight updates in *this and other, splitting into
  // positive (same direction) in *same and negative (different direction) in
  // *changed.
  void CountAlternators(const WeightMatrix& other, double* same,
                        double* changed) const;
    
    // Max number of neighbour small objects per squared gridsize before a grid
// cell becomes image.
const double kMaxSmallNeighboursPerPix = 1.0 / 32;
// Max number of small blobs a large blob may overlap before it is rejected
// and determined to be image.
const int kMaxLargeOverlapsWithSmall = 3;
// Max number of small blobs a medium blob may overlap before it is rejected
// and determined to be image. Larger than for large blobs as medium blobs
// may be complex Chinese characters. Very large Chinese characters are going
// to overlap more medium blobs than small.
const int kMaxMediumOverlapsWithSmall = 12;
// Max number of normal blobs a large blob may overlap before it is rejected
// and determined to be image. This is set higher to allow for drop caps, which
// may overlap a lot of good text blobs.
const int kMaxLargeOverlapsWithMedium = 12;
// Multiplier of original noise_count used to test for the case of spreading
// noise beyond where it should really be.
const int kOriginalNoiseMultiple = 8;
// Pixel padding for noise blobs when rendering on the image
// mask to encourage them to join together. Make it too big and images
// will fatten out too much and have to be clipped to text.
const int kNoisePadding = 4;
// Fraction of max_noise_count_ to be added to the noise count if there is
// photo mask in the background.
const double kPhotoOffsetFraction = 0.375;
// Min ratio of perimeter^2/16area for a 'good' blob in estimating noise
// density. Good blobs are supposed to be highly likely real text.
// We consider a square to have unit ratio, where A=(p/4)^2, hence the factor
// of 16. Digital circles are weird and have a minimum ratio of pi/64, not
// the 1/(4pi) that you would expect.
const double kMinGoodTextPARatio = 1.5;
    
      // ======================================================================
  // The main function of ColumnFinder is broken into pieces to facilitate
  // optional insertion of orientation and script detection in an efficient
  // way. The calling sequence IS MANDATORY however, whether or not
  // OSD is being used:
  // 1. Construction.
  // 2. SetupAndFilterNoise.
  // 3. IsVerticallyAlignedText.
  // 4. CorrectOrientation.
  // 5. FindBlocks.
  // 6. Destruction. Use of a single column finder for multiple images does not
  //    make sense.
  // Throughout these steps, the ColPartitions are owned by part_grid_, which
  // means that that it must be kept correct. Exception: big_parts_ owns its
  // own ColPartitions.
  // The BLOBNBOXes are owned by the input TO_BLOCK for the whole time, except
  // for a phase in FindBlocks before TransformToBlocks, when they become
  // owned by the ColPartitions. The owner() ColPartition of a BLOBNBOX
  // indicates more of a betrothal for the majority of layout analysis, ie
  // which ColPartition will take ownership when the blobs are release from
  // the input TO_BLOCK. Exception: image_bblobs_ owns the fake blobs that
  // are part of the image regions, as they are not on any TO_BLOCK list.
  // TODO(rays) break up column finder further into smaller classes, as
  // there is a lot more to it than column finding now.
  // ======================================================================
    
    // Make blocks out of any partitions in this WorkingPartSet, and append
// them to the end of the blocks list. bleft, tright and resolution give
// the bounds and resolution of the source image, so that blocks can be
// made to fit in the bounds.
// All ColPartitions go in the used_parts list, as they need to be kept
// around, but are no longer needed.
void WorkingPartSet::ExtractCompletedBlocks(const ICOORD& bleft,
                                            const ICOORD& tright,
                                            int resolution,
                                            ColPartition_LIST* used_parts,
                                            BLOCK_LIST* blocks,
                                            TO_BLOCK_LIST* to_blocks) {
  MakeBlocks(bleft, tright, resolution, used_parts);
  BLOCK_IT block_it(blocks);
  block_it.move_to_last();
  block_it.add_list_after(&completed_blocks_);
  TO_BLOCK_IT to_block_it(to_blocks);
  to_block_it.move_to_last();
  to_block_it.add_list_after(&to_blocks_);
}
    
    	if (PathFileExists(cpuCfgPath)) {
		if (PathFileExists(cfgPath)) {
			if (!CopyFile(cfgPath, cpuCfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu.xml file to ConEmu-%COMPUTERNAME%.xml backup location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu.xml file to ConEmu-%COMPUTERNAME%.xml backup location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
		else
		{
			if (!CopyFile(cpuCfgPath, cfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu-%COMPUTERNAME%.xml file to vendored ConEmu.xml location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu-%COMPUTERNAME%.xml file to vendored ConEmu.xml location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
	}
	else if (PathFileExists(userCfgPath)) {
		if (PathFileExists(cfgPath)) {
			if (!CopyFile(cfgPath, userCfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu.xml file to backup location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu.xml file to backup location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
		else
		{
			if (!CopyFile(userCfgPath, cfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu.xml file to vendored ConEmu.xml location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu.xml file to vendored ConEmu.xml location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
	}
	else if (PathFileExists(cfgPath)) {
		if (!CopyFile(cfgPath, userCfgPath, FALSE))
		{
			MessageBox(NULL,
				(GetLastError() == ERROR_ACCESS_DENIED)
				? L'Failed to copy ConEmu.xml file to user-conemu.xml backup location! Restart Cmder as Administrator.'
				: L'Failed to copy ConEmu.xml file to user-conemu.xml backup location!', MB_TITLE, MB_ICONSTOP);
			exit(1);
		}
	}
	else {
		if (!CopyFile(defaultCfgPath, cfgPath, FALSE))
		{
			MessageBox(NULL,
				(GetLastError() == ERROR_ACCESS_DENIED)
				? L'Failed to copy Cmder default ConEmu.xml file to vendored ConEmu.xml location! Restart Cmder as Administrator.'
				: L'Failed to copy Cmder default ConEmu.xml file to vendored ConEmu.xml location!', MB_TITLE, MB_ICONSTOP);
			exit(1);
		}
	}
    
    template<> inline
dnnError_t dnnInnerProductCreateBackwardFilter<float>(
    dnnPrimitive_t* pInnerProduct,
    dnnPrimitiveAttributes_t attributes,
    size_t dimensions,
    const size_t srcSize[],
    size_t outputChannels)
{
    return dnnInnerProductCreateBackwardFilter_F32(
        pInnerProduct, attributes, dimensions, srcSize, outputChannels);
}
template<> inline
dnnError_t dnnInnerProductCreateBackwardFilter<double>(
    dnnPrimitive_t* pInnerProduct,
    dnnPrimitiveAttributes_t attributes,
    size_t dimensions,
    const size_t srcSize[],
    size_t outputChannels)
{
    return dnnInnerProductCreateBackwardFilter_F64(
        pInnerProduct, attributes, dimensions, srcSize, outputChannels);
}
    
    
    {    // write dbn file
    net->SaveToDbnFile<ElemType>(net, dbnModelPath);
}
    
        static bool GetTimestampingFlag()
    {
        return GetStaticInstance().m_timestampFlag;
        // TODO: timestampFlag or timestampingFlag? (Or timeStampFlag?)
    }
    
      DB *db;
  Options options;
  options.create_if_missing = true;
  ASSERT_OK(DB::Open(options, dbpath, &db));
    
        // All added keys must match
    for (int i = 0; i < length; i++) {
      ASSERT_TRUE(Matches(Key(i, buffer)))
          << 'Length ' << length << '; key ' << i;
    }
    
      void Clear();
  void Add(double value);
  void Merge(const Histogram& other);
    
    class AutoCompactTest {
 public:
  std::string dbname_;
  Cache* tiny_cache_;
  Options options_;
  DB* db_;
    }
    
    
    {
    {}  // namespace
}  // namespace leveldb
    
    struct Options;
    
    #include 'modules/perception/obstacle/camera/common/projector.h'
#include 'modules/perception/obstacle/camera/interface/base_camera_detector.h'
#include 'modules/perception/obstacle/camera/interface/base_camera_tracker.h'
#include 'modules/perception/obstacle/camera/interface/base_camera_transformer.h'
    
    #include 'modules/common/macro.h'
#include 'modules/perception/lib/base/registerer.h'
#include 'modules/perception/obstacle/camera/common/visual_object.h'
    
      Eigen::Matrix<float, 3, 1> MakeUnit(
      const Eigen::Matrix<float, 3, 1> &v) const;
    
    TEST(PseudoInverseTest, PseudoInverseI) {
  const Eigen::Matrix<float, 2, 2> A = Eigen::MatrixXf::Identity(2, 2);
    }
    
    
    {  std::unique_ptr<SimulationWorldUpdater> sim_world_updater_;
  std::unique_ptr<PointCloudUpdater> point_cloud_updater_;
  std::unique_ptr<CivetServer> server_;
  std::unique_ptr<SimControl> sim_control_;
  std::unique_ptr<WebSocketHandler> websocket_;
  std::unique_ptr<WebSocketHandler> map_ws_;
  std::unique_ptr<WebSocketHandler> point_cloud_ws_;
  std::unique_ptr<ImageHandler> image_;
  std::unique_ptr<MapService> map_service_;
  std::unique_ptr<HMI> hmi_;
};
    
    TEST_F(DecisionTest, mix) {
  std::vector<int> color_list = {3, 3, 3, 0, 0, 0, 3, 0, 3, 1, 0, 1, 0, 1,
                                 0, 1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3};
  std::vector<int> gt_list = {3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1,
                              1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3};
  ReviseOption option(100);
  for (size_t i = 0; i < color_list.size(); ++i) {
    std::vector<LightPtr> light;
    light.emplace_back(new Light);
    light[0]->status.color = TLColor(color_list[i]);
    reviser_->Revise(option, &light);
    option.ts += 0.1;
    ASSERT_TRUE(light[0]->status.color == TLColor(gt_list[i]));
  }
}
    
      bool VerifyImageLights(const ImageLights &image_lights,
                         CameraId *selection) const;
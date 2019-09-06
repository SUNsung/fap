
        
                //  Create the Pseudo Console and pipes to it
        HANDLE hPipeIn{ INVALID_HANDLE_VALUE };
        HANDLE hPipeOut{ INVALID_HANDLE_VALUE };
        hr = CreatePseudoConsoleAndPipes(&hPC, &hPipeIn, &hPipeOut);
        if (S_OK == hr)
        {
            // Create & start thread to listen to the incoming pipe
            // Note: Using CRT-safe _beginthread() rather than CreateThread()
            HANDLE hPipeListenerThread{ reinterpret_cast<HANDLE>(_beginthread(PipeListener, 0, hPipeIn)) };
    }
    
    
    {    /* d += a3 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rcx\n'
    'movq %%rdx,%%r15\n'
    /* d += a2 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d = a0 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c = a4 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* d += a4 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a0 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a4 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a1 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a4 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a2 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a1 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b2 (last use of %%r10 = a0) */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0), t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* d += a4 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rcx only) */
    'shrdq $52,%%r15,%%rcx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rcx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'b'(b), 'D'(r)
: '%rax', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    int secp256k1_ecdsa_recoverable_signature_parse_compact(const secp256k1_context* ctx, secp256k1_ecdsa_recoverable_signature* sig, const unsigned char *input64, int recid) {
    secp256k1_scalar r, s;
    int ret = 1;
    int overflow = 0;
    }
    
        add	rsp, STACK_SIZE
    
      Status Put(const std::string& k, const std::string& v) {
    return db_->Put(WriteOptions(), k, v);
  }
    
    std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
    // Notified when log reader encounters corruption.
class CorruptionReporter : public log::Reader::Reporter {
 public:
  WritableFile* dst_;
  virtual void Corruption(size_t bytes, const Status& status) {
    std::string r = 'corruption: ';
    AppendNumberTo(&r, bytes);
    r += ' bytes; ';
    r += status.ToString();
    r.push_back('\n');
    dst_->Append(r);
  }
};
    
    template <typename Dtype>
void HDF5OutputLayer<Dtype>::LayerSetUp(const vector<Blob<Dtype>*>& bottom,
    const vector<Blob<Dtype>*>& top) {
  file_name_ = this->layer_param_.hdf5_output_param().file_name();
  file_id_ = H5Fcreate(file_name_.c_str(), H5F_ACC_TRUNC, H5P_DEFAULT,
                       H5P_DEFAULT);
  CHECK_GE(file_id_, 0) << 'Failed to open HDF5 file' << file_name_;
  file_opened_ = true;
}
    
    
    {  string* filename;
  Blob<Dtype>* const blob_top_data_;
  Blob<Dtype>* const blob_top_label_;
  Blob<Dtype>* const blob_top_label2_;
  vector<Blob<Dtype>*> blob_bottom_vec_;
  vector<Blob<Dtype>*> blob_top_vec_;
};
    
    REGISTER_LAYER_CREATOR(Convolution, GetConvolutionLayer);
    
      /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const Datum& datum);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const vector<Datum> & datum_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   */
#ifdef USE_OPENCV
  vector<int> InferBlobShape(const vector<cv::Mat> & mat_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   */
  vector<int> InferBlobShape(const cv::Mat& cv_img);
#endif  // USE_OPENCV
    
                        int currencyTrailingDigits = 0;
                    result = GetLocaleInfoEx(
                        m_resolvedName.c_str(),
                        LOCALE_ICURRDIGITS | LOCALE_RETURN_NUMBER,
                        (LPWSTR)&currencyTrailingDigits,
                        sizeof(currencyTrailingDigits) / sizeof(WCHAR));
                    if (result == 0)
                    {
                        throw std::runtime_error('Unexpected error while getting locale info');
                    }
    
    
    {        // Place the frame in the current Window
        Window::Current->Content = rootFrame;
    }
    
    Size HorizontalNoOverflowStackPanel::MeasureOverride(Size availableSize)
{
    float maxHeight = 0;
    float width = 0;
    for (auto child : Children)
    {
        child->Measure(Size(numeric_limits<float>::infinity(), numeric_limits<float>::infinity()));
        maxHeight = max(maxHeight, child->DesiredSize.Height);
        width += child->DesiredSize.Width;
    }
    return Size(min(width, availableSize.Width), min(availableSize.Height, maxHeight));
}
    
    //-----------------------------------------------------------------------------
//  Package Title  ratpak
//  File           ratpak.h
//  Copyright      (C) 1995-99 Microsoft
//  Date           01-16-95
//
//
//  Description
//
//     Infinite precision math package header file, if you use ratpak.lib you
//  need to include this header.
//
//-----------------------------------------------------------------------------
    
    namespace UCM = UnitConversionManager;
    
            void Clear();
        bool TryToggleSign(bool isIntegerMode, std::wstring_view maxNumStr);
        bool TryAddDigit(unsigned int value, uint32_t radix, bool isIntegerMode, std::wstring_view maxNumStr, int32_t wordBitWidth, int maxDigits);
        bool TryAddDecimalPt();
        bool HasDecimalPt();
        bool TryBeginExponent();
        void Backspace();
        void SetDecimalSymbol(wchar_t decSymbol);
        std::wstring ToString(uint32_t radix);
        Rational ToRational(uint32_t radix, int32_t precision);
    
      // check for external CID TrueType font file
  } else if (globalParams->getPSEmbedCIDTrueType() &&
	     font->getType() == fontCIDType2 &&
	     font->getExtFontFile()) {
    psName = setupExternalCIDTrueTypeFont(font, font->getExtFontFile());
    
    
    {  int (*getCharFunc)(void *);
  void *data;
  int charBuf;
};
    
      // Display part of a page.
  void displaySlice(OutputDev *out, double hDPI, double vDPI,
		    int rotate, GBool useMediaBox, GBool crop,
		    int sliceX, int sliceY, int sliceW, int sliceH,
		    GBool printing, Catalog *catalog,
		    GBool (*abortCheckCbk)(void *data) = NULL,
		    void *abortCheckCbkData = NULL,
                    GBool (*annotDisplayDecideCbk)(Annot *annot, void *user_data) = NULL,
                    void *annotDisplayDecideCbkData = NULL);
    
      // Return the various authorization parameters.  These are only
  // valid after authorize has returned true.
  virtual int getPermissionFlags() = 0;
  virtual GBool getOwnerPasswordOk() = 0;
  virtual Guchar *getFileKey() = 0;
  virtual int getFileKeyLength() = 0;
  virtual int getEncVersion() = 0;
  virtual int getEncRevision() = 0;
  virtual CryptAlgorithm getEncAlgorithm() = 0;
    
    Sound *Sound::copy()
{
  Sound *newsound = new Sound(streamObj, false);
    }
    
    private:
  // Create a sound. The Object obj is ensured to be a Stream with a Dict
  Sound(Object *obj, bool readAttrs = true);
    
        RegexCompile     compiler(This, status);
    compiler.compile(regex, pe, status);
    
    #if !UCONFIG_NO_FORMATTING
    
        UnicodeString &displayScripts(UnicodeString &dest) const; // append script names to dest string.
    ScriptSet & parseScripts(const UnicodeString &scriptsString, UErrorCode &status);  // Replaces ScriptSet contents.
    
    U_NAMESPACE_BEGIN
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};
    
      kf.SetControlMatrix(B);
    
      auto channelManager =
      apollo::cyber::service_discovery::TopologyManager::Instance()
          ->channel_manager();
  channelManager->AddChangeListener(topologyCallback);
    
    #include 'modules/perception/base/box.h'
#include 'modules/perception/base/object_supplement.h'
#include 'modules/perception/base/object_types.h'
    
    // Definition of the use type of a lane mark in lane adjustment
enum class LaneLineUseType { REAL = 0, VIRTUAL };
    
    
    {  // @brief motion state of the tracked object, required
  MotionState motion_state = MotionState::UNKNOWN;
  // // Tailgating (trajectory of objects)
  std::array<Eigen::Vector3d, 100> drops;
  std::size_t drop_num = 0;
  // // CIPV
  bool b_cipv = false;
  // @brief brake light, left-turn light and right-turn light score, optional
  CarLight car_light;
  // @brief sensor-specific object supplements, optional
  LidarObjectSupplement lidar_supplement;
  RadarObjectSupplement radar_supplement;
  CameraObjectSupplement camera_supplement;
  FusionObjectSupplement fusion_supplement;
};
    
    
    {    area_id = 0;
    visible_ratios[0] = visible_ratios[1] = 0;
    visible_ratios[2] = visible_ratios[3] = 0;
    cut_off_ratios[0] = cut_off_ratios[1] = 0;
    cut_off_ratios[2] = cut_off_ratios[3] = 0;
  }
    
    // @brief: fuse two probabilities, fused prob is greater than 0.5, if
// the sum of input prob pair is greater than 1, otherwise, fused prob
// is less than 0.5.
// @return fused prob of input prob pair
// @NOTE: original method name is fused_tow_probabilities
double FuseTwoProbabilities(double prob1, double prob2);
    
    void TrackObjectDistance::QueryProjectedVeloCtOnCamera(
    const SensorObjectConstPtr& velodyne64, const SensorObjectConstPtr& camera,
    const Eigen::Matrix4d& lidar2camera_pose, Eigen::Vector3d* projected_ct) {
  double time_diff = camera->GetTimestamp() - velodyne64->GetTimestamp();
  Eigen::Vector3d offset =
      velodyne64->GetBaseObject()->velocity.cast<double>() * time_diff;
  const Eigen::Vector3d& velo_ct = velodyne64->GetBaseObject()->center;
  Eigen::Vector4d projected_ct_4d =
      static_cast<Eigen::Matrix<double, 4, 1, 0, 4, 1>>(
          lidar2camera_pose * Eigen::Vector4d(velo_ct[0] + offset[0],
                                              velo_ct[1] + offset[1],
                                              velo_ct[2] + offset[2], 1.0));
  *projected_ct = projected_ct_4d.head(3);
}
    
      XSimilarityParams rc_x_similarity_params_ = XSimilarityParams();
  YSimilarityParams rc_y_similarity_params_ = YSimilarityParams();
  HSimilarityParams rc_h_similarity_params_ = HSimilarityParams();
  WSimilarityParams rc_w_similarity_params_ = WSimilarityParams();
  LocSimilarityParams rc_loc_similarity_params_ = LocSimilarityParams();
  XSimilarityParams rc_x_similarity_params_2_ = XSimilarityParams();
    
    // @brief: calculate the location similarity between cloud and camera box
// @return the location similarity which belongs to [0, 1].
// @key idea:
// 1. calculate the mean x y pixel distance
// 2. normalize mean pixel distance on the size of box and std of x/y
// 3. generate location similarity from Chi-Squared distribution
// @NOTE: original method name is compute_pts_box_dist_score
double ComputePtsBoxLocationSimilarity(const ProjectionCachePtr& cache,
                                       const ProjectionCacheObject* object,
                                       const base::BBox2DF& camera_bbox) {
  static const double min_p = 1e-6;
  static const double max_p = 1 - 1e-6;
  double x_std_dev = 0.4;
  double y_std_dev = 0.5;
  size_t check_augmented_iou_minimum_pts_num = 20;
  float augmented_buffer = 25.0f;
  if (object->Empty()) {
    ADEBUG << 'cache object is empty!';
    return min_p;
  }
  Eigen::Vector2d mean_pixel_dist(0.0, 0.0);
  // calculate mean x y pixel distance
  const size_t start_ind = object->GetStartInd();
  const size_t end_ind = object->GetEndInd();
  if (end_ind - start_ind >= check_augmented_iou_minimum_pts_num) {
    base::BBox2DF velo_bbox = object->GetBox();
    float augmented_iou =
        CalculateAugmentedIOUBBox(velo_bbox, camera_bbox, augmented_buffer);
    if (augmented_iou < FLT_EPSILON) {
      ADEBUG << 'augmented iou is empty!';
      return min_p;
    }
  }
  for (size_t i = start_ind; i < end_ind; ++i) {
    auto* velo_pt2d = cache->GetPoint2d(i);
    if (velo_pt2d == nullptr) {
      AERROR << 'query pt from projection cache failed!';
      continue;
    }
    if (velo_pt2d->x() >= camera_bbox.xmin &&
        velo_pt2d->x() < camera_bbox.xmax &&
        velo_pt2d->y() >= camera_bbox.ymin &&
        velo_pt2d->y() < camera_bbox.ymax) {
      continue;
    }
    Eigen::Vector2d diff;
    diff.x() = std::max(0.0, camera_bbox.xmin - velo_pt2d->x());
    diff.x() = std::max(diff.x(), velo_pt2d->x() - camera_bbox.xmax);
    diff.y() = std::max(0.0, camera_bbox.ymin - velo_pt2d->y());
    diff.y() = std::max(diff.y(), velo_pt2d->y() - camera_bbox.ymax);
    mean_pixel_dist += diff;
  }
  mean_pixel_dist /= static_cast<double>(object->Size());
  ADEBUG << 'mean_pixel_dist is: ' << mean_pixel_dist;
  // normalize according to box size
  Eigen::Vector2d box_size = Eigen::Vector2d(
      camera_bbox.xmax - camera_bbox.xmin, camera_bbox.ymax - camera_bbox.ymin);
  mean_pixel_dist.array() /= box_size.array();
  // assuming the normalized distance obeys gauss distribution
  double square_norm_mean_pixel_dist =
      mean_pixel_dist.x() * mean_pixel_dist.x() / x_std_dev / x_std_dev +
      mean_pixel_dist.y() * mean_pixel_dist.y() / y_std_dev / y_std_dev;
  // use chi-square distribution. Cauchy may be more reasonable.
  double location_similarity =
      1 - ChiSquaredCdf2TableFun(square_norm_mean_pixel_dist);
  // for numerical stability
  location_similarity = std::max(min_p, std::min(max_p, location_similarity));
  return location_similarity;
}
// @brief: calculate the shape similarity between cloud and camera box
// @return the shape similarity which belongs to [0, 1].
// @key idea:
// 1. calculate box size diff between velo box and camera box
// 2. normalize box size diff according to the std of x/y
// 3. generate shape similarity from Chi-Squared distribution
// @NOTE: original method name is compute_pts_box_shape_score
double ComputePtsBoxShapeSimilarity(const ProjectionCachePtr& cache,
                                    const ProjectionCacheObject* object,
                                    const base::BBox2DF& camera_bbox) {
  static const double min_p = 1e-3;
  static const double max_p = 1 - 1e-3;
  double x_std_dev = 0.3;
  double y_std_dev = 0.4;
  if (object->Empty()) {
    return min_p;
  }
  // compute 2d bbox size of camera & velo
  Eigen::Vector2d camera_box_size = Eigen::Vector2d(
      camera_bbox.xmax - camera_bbox.xmin, camera_bbox.ymax - camera_bbox.ymin);
  // handled one point case
  base::BBox2DF velo_projection_bbox = object->GetBox();
  Eigen::Vector2d velo_box_size = camera_box_size / 10;
  velo_box_size.x() =
      std::max(static_cast<float>(velo_box_size.x()),
               velo_projection_bbox.xmax - velo_projection_bbox.xmin);
  velo_box_size.y() =
      std::max(static_cast<float>(velo_box_size.y()),
               velo_projection_bbox.ymax - velo_projection_bbox.ymin);
  // compute normalized box size diff
  Eigen::Vector2d mean_box_size = (camera_box_size + velo_box_size) / 2;
  Eigen::Vector2d box_size_diff =
      (velo_box_size - camera_box_size).array() / mean_box_size.array();
  // assuming the normalized distance obeys gauss distribution
  double square_norm_box_size_diff =
      box_size_diff.x() * box_size_diff.x() / x_std_dev / x_std_dev +
      box_size_diff.y() * box_size_diff.y() / y_std_dev / y_std_dev;
  ADEBUG << 'camera_box_size@(' << camera_box_size(0) << ','
         << camera_box_size(1) << '); '
         << 'velo_box_size@(' << velo_box_size.x() << ',' << velo_box_size.y()
         << '); '
         << 'box_size_diff@(' << box_size_diff.x() << ',' << box_size_diff.y()
         << '); '
         << 'square_norm_box_size_diff@' << square_norm_box_size_diff;
  // use chi-square distribution. Cauchy may be more reasonable.
  double shape_similarity =
      1 - ChiSquaredCdf2TableFun(square_norm_box_size_diff);
  // for numerical stability
  shape_similarity = std::max(min_p, std::min(max_p, shape_similarity));
  return shape_similarity;
}
// @brief: calculate the similarity between cloud and camera box
// @return the similarity which belongs to [0, 1].
// @key idea:
// 1. compute location similarity and shape similarity
// 2. fuse the two similarity above
// @NOTE: original method name is compute_pts_box_score
double ComputePtsBoxSimilarity(const ProjectionCachePtr& cache,
                               const ProjectionCacheObject* object,
                               const base::BBox2DF& camera_bbox) {
  double location_similarity =
      ComputePtsBoxLocationSimilarity(cache, object, camera_bbox);
  double shape_similarity =
      ComputePtsBoxShapeSimilarity(cache, object, camera_bbox);
  double fused_similarity =
      FuseTwoProbabilities(location_similarity, shape_similarity);
  ADEBUG << 'fused_similarity@' << fused_similarity << ', location_similarity@'
         << location_similarity << ', shape_similarity@' << shape_similarity;
  return fused_similarity;
}
// @brief: calculate the x/y/h similarity between radar and camera
// @return the similarity which belongs to [0, 1].
// @key idea:
// 1. compute the difference on x/y/h
// 2. compute similarity according to the WelshVarLoss/ChiSquareProb
// 3. scale the similarity above
double ComputeRadarCameraXSimilarity(const double velo_ct_x,
                                     const double camera_ct_x,
                                     const double size_x,
                                     const XSimilarityParams& params) {
  double x_diff = std::abs(velo_ct_x - camera_ct_x) / size_x;
  double x_similarity = WelshVarLossFun(x_diff, params.welsh_loss_thresh_,
                                        params.welsh_loss_scale_);
  x_similarity = ScalePositiveProbability(
      x_similarity, params.scale_positive_max_p_, params.scale_positive_th_p_);
  return x_similarity;
}
double ComputeRadarCameraYSimilarity(const double velo_ct_y,
                                     const double camera_ct_y,
                                     const double size_y,
                                     const YSimilarityParams& params) {
  // double y_diff =
  //     std::abs(velo_ct_y - camera_ct_y + size_y * params.smooth_factor_) /
  //     size_y;
    }
    
    class MlfTracker {
 public:
  MlfTracker() = default;
  ~MlfTracker() {
    for (auto& filter : filters_) {
      delete filter;
    }
  }
    }
    
              auto targetFuture = targetConnection->cmd(
              cmd, this, targetDbIndex,
              [this](const RedisClient::Response&) {
                QMutexLocker l(&m_processedKeysMutex);
                m_progress++;
                emit progress(m_progress);
              },
              err);
    
    class TreeOperations : public QObject,
                       public ConnectionsTree::Operations,
                       public QEnableSharedFromThis<TreeOperations> {
  Q_OBJECT
 public:
  TreeOperations(QSharedPointer<RedisClient::Connection> connection,
                 QSharedPointer<Events> events);
    }
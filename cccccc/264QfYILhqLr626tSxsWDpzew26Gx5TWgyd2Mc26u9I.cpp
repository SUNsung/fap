
        
          // The first paragraph on a page often lacks a first line indent, but should
  // still be modeled by the same model as other body text paragraphs on the
  // page.
  bool is_very_first_or_continuation;
    
    // Writes to the given file. Returns false in case of error.
bool TBOX::Serialize(FILE* fp) const {
  if (!bot_left.Serialize(fp)) return false;
  if (!top_right.Serialize(fp)) return false;
  return true;
}
// Reads from the given file. Returns false in case of error.
// If swap is true, assumes a big/little-endian swap is needed.
bool TBOX::DeSerialize(bool swap, FILE* fp) {
  if (!bot_left.DeSerialize(swap, fp)) return false;
  if (!top_right.DeSerialize(swap, fp)) return false;
  return true;
}
    
    bool UNICHAR::const_iterator::is_legal() const {
  return utf8_step(it_) > 0;
}
    
    const char *kHyphenLikeUTF8[] = {
  '-',       // ASCII hyphen-minus
  '\u05BE',  // word hyphen in hybrew
  '\u2010',  // hyphen
  '\u2011',  // non-breaking hyphen
  '\u2012',  // a hyphen the same width as digits
  '\u2013',  // en dash
  '\u2014',  // em dash
  '\u2015',  // horizontal bar
  '\u2212',  // arithmetic minus sign
  '\uFE58',  // small em dash
  '\uFE63',  // small hyphen-minus
  '\uFF0D',  // fullwidth hyphen-minus
  nullptr,      // end of our list
};
    
      // Returns the size of the compact charset space.
  int CompactCharsetSize() const;
  // Returns the size of the sparse charset space.
  int SparseCharsetSize() const;
    
      // Displays the forward results in a window with the characters and
  // boundaries as determined by the labels and label_coords.
  void DisplayForward(const NetworkIO& inputs,
                      const GenericVector<int>& labels,
                      const GenericVector<int>& label_coords,
                      const char* window_name,
                      ScrollView** window);
  // Converts the network output to a sequence of labels. Outputs labels, scores
  // and start xcoords of each char, and each null_char_, with an additional
  // final xcoord for the end of the output.
  // The conversion method is determined by internal state.
  void LabelsFromOutputs(const NetworkIO& outputs, GenericVector<int>* labels,
                         GenericVector<int>* xcoords);
    
            bool wasDataRead = trainSetDataReader.GetMinibatch(inputMatrices); // fill in the minibatch data into the Input nodes' buffers directly
        // If this returns false, the matrices may contain garbage or not sized to 0 columns.
        // On the other hand, if it returns a 0-column matrix, that would be a perfectly cromulent minibatch (in case of data parallelism with distributed reading).
        // If a passed matrix does not match a reader section, that is an error.
    
        // Attempts to compute the error signal for the whole utterance, which will
    // be fed to the neural network as features. Currently it is a workaround
    // for the two-forward-pass sequence and ctc training, which allows
    // processing more utterances at the same time. Only used in Kaldi2Reader.
    // TODO: move the two-forward-pass support out of the reader.
    void AttemptUtteranceDerivativeFeatures(ComputationNetworkPtr net,
                                            IDataReader* trainSetDataReader,
                                            const std::vector<ComputationNodeBasePtr>& featureNodes,
                                            StreamMinibatchInputs* inputMatrices);
    
    template<> inline
dnnError_t dnnConvolutionCreateBackwardData<float>(
    dnnPrimitive_t* pConvolution,
    dnnPrimitiveAttributes_t attributes,
    dnnAlgorithm_t algorithm,
    size_t dimension,
    const size_t srcSize[],
    const size_t dstSize[],
    const size_t filterSize[],
    const size_t convolutionStrides[],
    const int inputOffset[],
    const dnnBorder_t border_type)
{
    return dnnConvolutionCreateBackwardData_F32(
        pConvolution,
        attributes,
        algorithm,
        dimension,
        srcSize,
        dstSize,
        filterSize,
        convolutionStrides,
        inputOffset,
        border_type);
}
    
                // We can use the original buffer directly but need to reshape to the valueDataShape
            valueData = valueData->AsShape(valueDataShape);
        }
        else
        {
            if (isDataSparse)
            {
                if (storageFormat != StorageFormat::SparseCSC)
                    LogicError('Value::Create currently only SparseCSC format sparse data is supported');
    }
    
        Matrix<float> mBdense(c_deviceIdZero);
    mBdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -5.0f, 0.4f, IncrementCounter()), 0);
    Matrix<float> mBsparse(mBdense.DeepClone());
    mBsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    
        // ProcessNDLConfig - Process the NDL script from a configuration string value
    // config - configuration string containing script
    void ProcessNDLConfig(const ConfigValue& config, bool fullValidate = false)
    {
        NDLScript<ElemType> script(config);
        ProcessNDLScript(&script, ndlPassAll, nullptr, fullValidate);
    }
    
    // ===========================================================================
// DoExportToDbn() - implements CNTK 'exportdbn' command
// ===========================================================================
    
    #include 'Basics.h'
#include 'ScriptableObjects.h'
#include 'BrainScriptParser.h'
    
        // CopySubTree - Copy subtree from one model to another model
    // symbolIn - symbol(s) to copy from
    // symbolOut - symbol(s) to copy to
    // copyFlags - flags on how to copy the nodes
    void CopySubTree(const std::string& symbolFrom, const std::string& toCNName, const std::string toNamePrefix, CopyNodeFlags copyFlags)
    {
        // get the nodes
        NetNdl<ElemType>* netNdlFrom;
    }
    
    
    {
    {
    {}}}

    
    // ---------------------------------------------------------------------------
// hardcoded_array -- wraps a fixed-size C array together with its size.
//
// operator[] checks index bounds in Debug builds. size() is provided such
// that this class can be substituted for STL vector in many cases.
// Can be constructed with a size parameter--it will be checked against the
// hard-coded size.
// Can also be constructed with an initialization parameter (typ. 0).
// ---------------------------------------------------------------------------
    
    // ===========================================================================
// float4 -- wrapper around the rather ugly SSE intrinsics for float[4]
//
// Do not use the intrinsics outside anymore; instead add all you need into this class.
//
// MSDN links:
// basic: http://msdn.microsoft.com/en-us/library/x5c07e2a%28v=VS.80%29.aspx
// load/store: (add this)
// newer ones: (seems no single list available)
// ===========================================================================
    
      static size_t ByteSize(const WriteBatch* batch) {
    return batch->rep_.size();
  }
    
    
    {}  // anonymous namespace
    
      // Second filter
  builder.StartBlock(3100);
  builder.AddKey('box');
    
    static const int kVerbose = 1;
    
    namespace leveldb {
    }
    
    std::string Histogram::ToString() const {
  std::string r;
  char buf[200];
  snprintf(buf, sizeof(buf),
           'Count: %.0f  Average: %.4f  StdDev: %.2f\n',
           num_, Average(), StandardDeviation());
  r.append(buf);
  snprintf(buf, sizeof(buf),
           'Min: %.4f  Median: %.4f  Max: %.4f\n',
           (num_ == 0.0 ? 0.0 : min_), Median(), max_);
  r.append(buf);
  r.append('------------------------------------------------------\n');
  const double mult = 100.0 / num_;
  double sum = 0;
  for (int b = 0; b < kNumBuckets; b++) {
    if (buckets_[b] <= 0.0) continue;
    sum += buckets_[b];
    snprintf(buf, sizeof(buf),
             '[ %7.0f, %7.0f ) %7.0f %7.3f%% %7.3f%% ',
             ((b == 0) ? 0.0 : kBucketLimit[b-1]),      // left
             kBucketLimit[b],                           // right
             buckets_[b],                               // count
             mult * buckets_[b],                        // percentage
             mult * sum);                               // cumulative percentage
    r.append(buf);
    }
    }
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
        RecordType type;
    const bool end = (left == fragment_length);
    if (begin && end) {
      type = kFullType;
    } else if (begin) {
      type = kFirstType;
    } else if (end) {
      type = kLastType;
    } else {
      type = kMiddleType;
    }
    
    #include <stdint.h>
#include 'leveldb/slice.h'
    
    #if DMLC_ENABLE_STD_THREAD
#include './sparse_page_source.h'
#include '../common/common.h'
    
    TEST(MetaInfo, SaveLoadBinary) {
  xgboost::MetaInfo info;
  double vals[2] = {1.0, 2.0};
  info.SetInfo('label', vals, xgboost::kDouble, 2);
  info.num_row_ = 2;
  info.num_col_ = 1;
    }
    
    TEST(Metric, LogLoss) {
  xgboost::Metric * metric = xgboost::Metric::Create('logloss');
  ASSERT_STREQ(metric->Name(), 'logloss');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              1.2039f, 0.001f);
}
    
    #include '../common/host_device_vector.h'
    
    // logistic loss for probability regression task
struct LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return common::Sigmoid(x); }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return x >= 0.0f && x <= 1.0f; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
  static T PredTransform(T x) { return common::Sigmoid(x); }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static bst_float ProbToMargin(bst_float base_score) {
    CHECK(base_score > 0.0f && base_score < 1.0f)
      << 'base_score must be in (0,1) for logistic loss';
    return -logf(1.0f / base_score - 1.0f);
  }
  static const char* LabelErrorMsg() {
    return 'label must be in [0,1] for logistic regression';
  }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
        // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
    if (show_another_window)
    {
        ImGui::Begin('Another Window', &show_another_window);
        ImGui::Text('Hello from another window!');
        if (ImGui::Button('Close Me'))
            show_another_window = false;
        ImGui::End();
    }
    
        // Setup window
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_Window* window = SDL_CreateWindow('ImGui SDL2+OpenGL3 example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_SetSwapInterval(1); // Enable vsync
    gl3wInit();
    
    int main(int, char**)
{
    IwGxInit();
    }
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
    
    {
    {        if (multiply_table == NULL)
        {
            for (uint32_t y = 0; y < h; y++, src += src_pitch, dst += dst_pitch)
                memcpy(dst, src, w);
        }
        else
        {
            for (uint32_t y = 0; y < h; y++, src += src_pitch, dst += dst_pitch)
                for (uint32_t x = 0; x < w; x++)
                    dst[x] = multiply_table[src[x]];
        }
    }
}
    
    // Demonstrate using '##' and '###' in identifiers to manipulate ID generation.
// This apply to regular items as well. Read FAQ section 'How can I have multiple widgets with the same label? Can I have widget without a label? (Yes). A primer on the purpose of labels/IDs.' for details.
static void ShowExampleAppWindowTitles(bool*)
{
    // By default, Windows are uniquely identified by their title.
    // You can use the '##' and '###' markers to manipulate the display/ID.
    }
    
    bool    ImGui_ImplDX10_CreateDeviceObjects()
{
    if (!g_pd3dDevice)
        return false;
    if (g_pFontSampler)
        ImGui_ImplDX10_InvalidateDeviceObjects();
    }
    
        //NotFound is okay; just return empty (similar to std::map)
    //But network or db errors, etc, should fail the test (or at least yell)
    if (!s.IsNotFound()) {
      std::cerr << 'ERROR ' << s.ToString() << std::endl;
    }
    
    /**
 * Reader is a general purpose log stream reader implementation. The actual job
 * of reading from the device is implemented by the SequentialFile interface.
 *
 * Please see Writer for details on the file and record layout.
 */
class Reader {
 public:
  // Interface for reporting errors.
  class Reporter {
   public:
    virtual ~Reporter();
    }
    }
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats,
      const std::set<uint32_t> ignore_histograms) : StatisticsImpl(stats, false),
      m_ignore_histograms(ignore_histograms) {
  }
    
    
    {  // No copying allowed
  MemTable(const MemTable&);
  MemTable& operator=(const MemTable&);
};
    
    
    {  }
    
    
    {  assert(odds > 0);
  if (odds % 7 == 0) {
    // class Random uses multiplier 16807, which is 7^5. If odds are
    // multiplier of 7, there might be limited values generated.
    odds++;
  }
  auto* r = Random::GetTLSInstance();
  bool crash = r->OneIn(odds);
  if (crash) {
    port::Crash(srcfile, srcline);
  }
}
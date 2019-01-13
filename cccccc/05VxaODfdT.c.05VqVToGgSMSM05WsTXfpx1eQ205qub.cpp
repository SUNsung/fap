
        
        void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enumDescriptor) {
    WriteDocCommentBody(printer, enumDescriptor);
}
void WriteEnumValueDocComment(io::Printer* printer, const EnumValueDescriptor* value) {
    WriteDocCommentBody(printer, value);
}
    
    
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_message.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
#include <google/protobuf/compiler/csharp/csharp_reflection_class.h>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    
    {
    {    printer->Print(' * <pre>\n');
    for (int i = 0; i < lines.size(); i++) {
      // Most lines should start with a space.  Watch out for lines that start
      // with a /, since putting that right after the leading asterisk will
      // close the comment.
      if (!lines[i].empty() && lines[i][0] == '/') {
        printer->Print(' * $line$\n', 'line', lines[i]);
      } else {
        printer->Print(' *$line$\n', 'line', lines[i]);
      }
    }
    printer->Print(
        ' * </pre>\n'
        ' *\n');
  }
}
    
    ImmutableGeneratorFactory::ImmutableGeneratorFactory(
    Context* context) : context_(context) {
}
ImmutableGeneratorFactory::~ImmutableGeneratorFactory() {}
    
        // If any indirect dependency provided extensions, it needs to be directly
    // imported so it can get merged into the root's extensions registry.
    // See the Note by CollectMinimalFileDepsContainingExtensions before
    // changing this.
    for (std::vector<const FileDescriptor *>::iterator iter =
             deps_with_extensions.begin();
         iter != deps_with_extensions.end(); ++iter) {
      if (!IsDirectDependency(*iter, file_)) {
        import_writer.AddFile(*iter, header_extension);
      }
    }
    
    #include 'publictypes.h'
#include 'platform.h'
    
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
    
      int num_words;
  TBOX lword_box;     // in normalized (horiz text rows) space
  TBOX rword_box;     // in normalized (horiz text rows) space
    
    #endif  // TESSERACT_CCSTRUCT_DEBUGPIXA_H_

    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CONTEXT_H */

    
    
    {}  // namespace grpc
    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
      // implementation of ServerReflectionInfo(stream ServerReflectionRequest) rpc
  // in ServerReflection service
  Status ServerReflectionInfo(
      ServerContext* context,
      ServerReaderWriter<reflection::v1alpha::ServerReflectionResponse,
                         reflection::v1alpha::ServerReflectionRequest>* stream)
      override;
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
    /*!
 * \brief Gradient function that takes output value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT0)(const OutputGrad& out_grad,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Gradient function that takes output value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param out_value the value of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT1)(const OutputGrad& out_grad,
                                    const OutputValue& out_value,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Gradient function that takes input value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param in_data0 the input value of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT2)(const OutputGrad& out_grad,
                                    const Input0& in_data0,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Binary function that takes lhs, rhs and save result to ret.
 *  The result container is pre-allocated with the correct shape.
 * \param lhs The left operand
 * \param rhs The right operand
 * \param env The Environment arguments.
 * \param ret The containter to store return value.
 * \param req The requirement to stroe the ret.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryFunction)(const TBlob& lhs,
                               const TBlob& rhs,
                               const EnvArguments& env,
                               TBlob* ret,
                               OpReqType req,
                               RunContext ctx);
    
    /**!
 * \brief Workaround for missing functions in ::caffe::Blob
 * \warning Do not add or override any virtual functions in this class
 * @tparam Dtype
 */
template<class Dtype>
class CaffeBlobFriend : public ::caffe::Blob<Dtype> {
 public:
  inline void set_cpu_diff(Dtype* diff) {
    CHECK(diff);
    this->diff_->set_cpu_data(diff);
  }
    }
    
    class CaffeDataIterWrapper : public PrefetcherIter {
 public:
  CaffeDataIterWrapper() : PrefetcherIter(NULL), next_time_(0) {}
  virtual ~CaffeDataIterWrapper() {
    IF_CHECK_TIMING(
      if (next_time_.load() > 0) {
        LOG(WARNING) << 'Caffe data loader was blocked for '
                     << next_time_.load()
                     << ' ms waiting for incoming data';
      }
    )
  }
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    // We need to init prefetcher args in order to get dtype
    this->param_.InitAllowUnknown(kwargs);
    if (!this->param_.dtype) this->param_.dtype = mshadow::kFloat32;
    switch (this->param_.dtype.value()) {
      case mshadow::kFloat32:
        this->loader_.reset(new CaffeDataIter<float>(this->param_.dtype.value()));
        break;
      case mshadow::kFloat64:
        this->loader_.reset(new CaffeDataIter<double>(this->param_.dtype.value()));
        break;
      case mshadow::kFloat16:
        LOG(FATAL) << 'float16 layer is not supported by caffe';
        return;
      default:
        LOG(FATAL) << 'Unsupported type ' << this->param_.dtype.value();
        return;
    }
    PrefetcherIter::Init(kwargs);
    this->param_.prefetch_buffer = 1;
  }
  virtual void BeforeFirst(void) {
    return PrefetcherIter::BeforeFirst();
  }
  virtual bool Next(void) {
    IF_CHECK_TIMING(
      const uint64_t start_time = GetTickCountMS();
    )
    const bool rc = PrefetcherIter::Next();
    IF_CHECK_TIMING(
      const uint64_t diff_time  = GetTickCountMS() - start_time;
      next_time_.fetch_add(diff_time);
    )
    return rc;
  }
    }
    
    #if defined(__CUDACC__)
    Stream<xpu> *s = ctx.get_stream<xpu>();
    // TODO(Haoran): when need cublas handle in stream?
    CHECK_EQ(s->blas_handle_ownership_, Stream<xpu>::OwnHandle)
          << 'Must init CuBLAS handle in stream';
#endif  // __CUDACC__
    
        for (int i = 0; i < param_.num_data; ++i) {
      TShape tshape = (*in_shape)[i];
      if (tshape.ndim() == 0) return false;
      auto blob_ptr = new Blob<float>();
      blob_ptr->Reshape(caffe::TShape2Vector(tshape));
      bot_blobs.push_back(blob_ptr);
    }
    
    template<>
Operator* CreateOp<cpu>(CaffeOpParam param, int dtype) {
  Operator *op = NULL;
  switch (dtype) {
  case mshadow::kFloat32:
    op = new CaffeOp<cpu, float>(param);
    break;
  case mshadow::kFloat64:
    op = new CaffeOp<cpu, double>(param);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 layer is not supported by caffe';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
  return op;
}
    
    /*!
 * Copyright (c) 2015 by Contributors
 */
#ifndef MXNET_ENGINE_THREAD_POOL_H_
#define MXNET_ENGINE_THREAD_POOL_H_
    
    namespace mxnet {
namespace io {
/*!
 * \brief OpenCV based Image augmenter,
 *  The augmenter can contain internal temp state.
 */
class ImageAugmenter {
 public:
  /*!
   *  \brief Initialize the Operator by setting the parameters
   *  This function need to be called before all other functions.
   *  \param kwargs the keyword arguments parameters
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*!
   * \brief augment src image.
   *   this function is not thread safe, and will only be called by one thread
   *   however, it will tries to re-use memory space as much as possible
   * \param src the source image
   * \param prnd pointer to random number generator.
   * \return The processed image.
   */
  virtual cv::Mat Process(const cv::Mat &src, std::vector<float> *label,
                          common::RANDOM_ENGINE *prnd) = 0;
  // virtual destructor
  virtual ~ImageAugmenter() {}
  /*!
   * \brief factory function
   * \param name Name of the augmenter
   * \return The created augmenter.
   */
  static ImageAugmenter* Create(const std::string& name);
};
    }
    }
    
        outimg_.Resize(data.shape_);
    float contrast =
        rand_uniform(rnd_) * param_.max_random_contrast * 2 - param_.max_random_contrast + 1;
    float illumination =
        rand_uniform(rnd_) * param_.max_random_illumination * 2 - param_.max_random_illumination;
    bool flip = (param_.rand_mirror && coin_flip(rnd_)) || param_.mirror;
    
        static ParameterInitializer CreateInitializer(const std::wstring& initializerTypeName, double scale, unsigned long seed) 
    {
        if (scale <= 0) 
            InvalidArgument('CreateInitializer: scale value for initializer '%S' cannot be 0.', 
                initializerTypeName.c_str());
    }
    
    
    {
    {    private:
        // Disallow copy and move construction and assignment
        VariableFields(const VariableFields&) = delete; VariableFields& operator=(const VariableFields& other) = delete; VariableFields(VariableFields&&) = delete; VariableFields& operator=(VariableFields&&) = delete;
    };
}

    
    // ---------------------------------------------------------------------------
// RandomOrdering -- class to help manage randomization of input data
// ---------------------------------------------------------------------------
    
            // if dimension not specified we assume two operands' dimensions should match
        Input(0)->ValidateInferInputDimsFrom(TensorShape(rows1));
    
        virtual bool OutputUsedInComputingInputNodesGradients() const override
    {
        return false;
    }
    virtual bool InputUsedInComputingInputNodesGradients(size_t /*childIndex*/) const override
    {
        return false;
    }
    
    
    {    fPattern           = fPatternOwned;
    init2(RegexStaticSets::gStaticSets->fEmptyText, status);
}
    
    /**
 * Factory method
 */
static Transliterator* RemoveTransliterator_create(const UnicodeString& /*ID*/,
                                                   Transliterator::Token /*context*/) {
    /* We don't need the ID or context. We just remove data */
    return new RemoveTransliterator();
}
    
        const uint32_t allFlags = UREGEX_CANON_EQ | UREGEX_CASE_INSENSITIVE | UREGEX_COMMENTS |
                              UREGEX_DOTALL   | UREGEX_MULTILINE        | UREGEX_UWORD |
                              UREGEX_ERROR_ON_UNKNOWN_ESCAPES           | UREGEX_UNIX_LINES | UREGEX_LITERAL;
    
    UCollationResult
RuleBasedCollator::compare(UCharIterator &left, UCharIterator &right,
                           UErrorCode &errorCode) const {
    if(U_FAILURE(errorCode) || &left == &right) { return UCOL_EQUAL; }
    UBool numeric = settings->isNumeric();
    }
    
    U_CAPI UBool U_EXPORT2
uhash_compareScriptSet(const UElement key1, const UElement key2);
    
    #define DOT               ((UChar)0x002E)
#define SINGLE_QUOTE      ((UChar)0x0027)
#define SLASH             ((UChar)0x002F)
#define BACKSLASH         ((UChar)0x005C)
#define SPACE             ((UChar)0x0020)
#define TAB               ((UChar)0x0009)
#define QUOTATION_MARK    ((UChar)0x0022)
#define ASTERISK          ((UChar)0x002A)
#define COMMA             ((UChar)0x002C)
#define HYPHEN            ((UChar)0x002D)
#define U_ZERO            ((UChar)0x0030)
#define U_ONE             ((UChar)0x0031)
#define U_TWO             ((UChar)0x0032)
#define U_THREE           ((UChar)0x0033)
#define U_FOUR            ((UChar)0x0034)
#define U_FIVE            ((UChar)0x0035)
#define U_SIX             ((UChar)0x0036)
#define U_SEVEN           ((UChar)0x0037)
#define U_EIGHT           ((UChar)0x0038)
#define U_NINE            ((UChar)0x0039)
#define COLON             ((UChar)0x003A)
#define SEMI_COLON        ((UChar)0x003B)
#define CAP_A             ((UChar)0x0041)
#define CAP_B             ((UChar)0x0042)
#define CAP_R             ((UChar)0x0052)
#define CAP_Z             ((UChar)0x005A)
#define LOWLINE           ((UChar)0x005F)
#define LEFTBRACE         ((UChar)0x007B)
#define RIGHTBRACE        ((UChar)0x007D)
    
    SharedBreakIterator::SharedBreakIterator(
        BreakIterator *biToAdopt) : ptr(biToAdopt) { }
    
    #endif

    
    class U_I18N_API SharedPluralRules : public SharedObject {
public:
    SharedPluralRules(PluralRules *prToAdopt) : ptr(prToAdopt) { }
    virtual ~SharedPluralRules();
    const PluralRules *operator->() const { return ptr; }
    const PluralRules &operator*() const { return *ptr; }
private:
    PluralRules *ptr;
    SharedPluralRules(const SharedPluralRules &);
    SharedPluralRules &operator=(const SharedPluralRules &);
};
    
        /**
     * Sets maximum significant digits. 0 or negative means no maximum.
     */
    void setMax(int32_t count) {
        fMax = count <= 0 ? INT32_MAX : count;
    }
    
            // Create a TimeZoneRule for standard time
        timeRuleType = (endTimeMode == STANDARD_TIME) ? DateTimeRule::STANDARD_TIME :
            ((endTimeMode == UTC_TIME) ? DateTimeRule::UTC_TIME : DateTimeRule::WALL_TIME);
        switch (endMode) {
        case DOM_MODE:
            dtRule = new DateTimeRule(endMonth, endDay, endTime, timeRuleType);
            break;
        case DOW_IN_MONTH_MODE:
            dtRule = new DateTimeRule(endMonth, endDay, endDayOfWeek, endTime, timeRuleType);
            break;
        case DOW_GE_DOM_MODE:
            dtRule = new DateTimeRule(endMonth, endDay, endDayOfWeek, true, endTime, timeRuleType);
            break;
        case DOW_LE_DOM_MODE:
            dtRule = new DateTimeRule(endMonth, endDay, endDayOfWeek, false, endTime, timeRuleType);
            break;
        }
        
        // Check for Null pointer
        if (dtRule == NULL) {
            status = U_MEMORY_ALLOCATION_ERROR;
            deleteTransitionRules();
            return;
        }
        // For now, use ID + '(STD)' as the name
        stdRule = new AnnualTimeZoneRule(tzid+UnicodeString(STD_STR), getRawOffset(), 0,
            dtRule, startYear, AnnualTimeZoneRule::MAX_YEAR);
        
        //Check for Null pointer
        if (stdRule == NULL) {
            status = U_MEMORY_ALLOCATION_ERROR;
            deleteTransitionRules();
            return;
        }
    
    UnicodeSet *SimpleDateFormatStaticSets::getIgnorables(UDateFormatField fieldIndex)
{
    UErrorCode status = U_ZERO_ERROR;
    umtx_initOnce(gSimpleDateFormatStaticSetsInitOnce, &smpdtfmt_initSets, status);
    if (U_FAILURE(status)) {
        return NULL;
    }
    
    switch (fieldIndex) {
        case UDAT_YEAR_FIELD:
        case UDAT_MONTH_FIELD:
        case UDAT_DATE_FIELD:
        case UDAT_STANDALONE_DAY_FIELD:
        case UDAT_STANDALONE_MONTH_FIELD:
            return gStaticSets->fDateIgnorables;
            
        case UDAT_HOUR_OF_DAY1_FIELD:
        case UDAT_HOUR_OF_DAY0_FIELD:
        case UDAT_MINUTE_FIELD:
        case UDAT_SECOND_FIELD:
        case UDAT_HOUR1_FIELD:
        case UDAT_HOUR0_FIELD:
            return gStaticSets->fTimeIgnorables;
            
        default:
            return gStaticSets->fOtherIgnorables;
    }
}
    
    
    {    return *this;
}
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or OTHER
     */
    static int32_t indexOrOtherIndexFromString(const UnicodeString &keyword) {
        int32_t i = indexOrNegativeFromString(keyword);
        return i >= 0 ? i : OTHER;
    }
    
    /**
 * Union the set of all characters that may output by this object
 * into the given set.
 * @param toUnionTo the set into which to union the output characters
 */
void StringMatcher::addReplacementSetTo(UnicodeSet& /*toUnionTo*/) const {
    // The output of this replacer varies; it is the source text between
    // matchStart and matchLimit.  Since this varies depending on the
    // input text, we can't compute it here.  We can either do nothing
    // or we can add ALL characters to the set.  It's probably more useful
    // to do nothing.
}
    
      /*!
   * \brief determines whether updater has enough knowledge about a given dataset
   *        to quickly update prediction cache its training data and performs the
   *        update if possible.
   * \param data: data matrix
   * \param out_preds: prediction cache to be updated
   * \return boolean indicating whether updater has capability to update
   *         the prediction cache. If true, the prediction cache will have been
   *         updated by the time this function returns.
   */
  virtual bool UpdatePredictionCache(const DMatrix* data,
                                     HostDeviceVector<bst_float>* out_preds) {
    return false;
  }
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
    struct GBTreeModel {
  explicit GBTreeModel(bst_float base_margin) : base_margin(base_margin) {}
  void Configure(const std::vector<std::pair<std::string, std::string> >& cfg) {
    // initialize model parameters if not yet been initialized.
    if (trees.size() == 0) {
      param.InitAllowUnknown(cfg);
    }
  }
    }
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    SEXP XGDMatrixCreateFromFile_R(SEXP fname, SEXP silent) {
  SEXP ret;
  R_API_BEGIN();
  DMatrixHandle handle;
  CHECK_CALL(XGDMatrixCreateFromFile(CHAR(asChar(fname)), asInteger(silent), &handle));
  ret = PROTECT(R_MakeExternalPtr(handle, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    
    {    // Read 5 bytes - the maximum we will need
    uint64_t tmp = static_cast<uint64_t>(buffer_[start_byte_idx - 4]) << 32 |
                   static_cast<uint64_t>(buffer_[start_byte_idx - 3]) << 24 |
                   static_cast<uint64_t>(buffer_[start_byte_idx - 2]) << 16 |
                   static_cast<uint64_t>(buffer_[start_byte_idx - 1]) << 8 |
                   buffer_[start_byte_idx];
    int bit_shift =
        (bits_per_byte - ((offset_ + 1) * symbol_bits_)) % bits_per_byte;
    tmp >>= bit_shift;
    // Mask off unneeded bits
    uint64_t mask = (1 << symbol_bits_) - 1;
    return static_cast<T>(tmp & mask);
  }
    
    
    {  /*! \brief push up temp */
  inline void PushTemp() {
    temp.Reserve(limit_size * 2);
    for (size_t l = 1; true; ++l) {
      this->InitLevel(l + 1);
      // check if level l is empty
      if (level[l].size == 0) {
        level[l].SetPrune(temp, limit_size);
        break;
      } else {
        // level 0 is actually temp space
        level[0].SetPrune(temp, limit_size);
        temp.SetCombine(level[0], level[l]);
        if (temp.size > limit_size) {
          // try next level
          level[l].size = 0;
        } else {
          // if merged record is still smaller, no need to send to next level
          level[l].CopyFrom(temp); break;
        }
      }
    }
  }
  /*! \brief get the summary after finalize */
  inline void GetSummary(SummaryContainer *out) {
    if (level.size() != 0) {
      out->Reserve(limit_size * 2);
    } else {
      out->Reserve(inqueue.queue.size());
    }
    inqueue.MakeSummary(out);
    if (level.size() != 0) {
      level[0].SetPrune(*out, limit_size);
      for (size_t l = 1; l < level.size(); ++l) {
        if (level[l].size == 0) continue;
        if (level[0].size == 0) {
          level[0].CopyFrom(level[l]);
        } else {
          out->SetCombine(level[0], level[l]);
          level[0].SetPrune(*out, limit_size);
        }
      }
      out->CopyFrom(level[0]);
    } else {
      if (out->size > limit_size) {
        temp.Reserve(limit_size);
        temp.SetPrune(*out, limit_size);
        out->CopyFrom(temp);
      }
    }
  }
  // used for debug, check if the sketch is valid
  inline void CheckValid(RType eps) const {
    for (size_t l = 1; l < level.size(); ++l) {
      level[l].CheckValid(eps);
    }
  }
  // initialize level space to at least nlevel
  inline void InitLevel(size_t nlevel) {
    if (level.size() >= nlevel) return;
    data.resize(limit_size * nlevel);
    level.resize(nlevel, Summary(nullptr, 0));
    for (size_t l = 0; l < level.size(); ++l) {
      level[l].data = dmlc::BeginPtr(data) + l * limit_size;
    }
  }
  // input data queue
  typename Summary::Queue inqueue;
  // number of levels
  size_t nlevel;
  // size of summary in each level
  size_t limit_size;
  // the level of each summaries
  std::vector<Summary> level;
  // content of the summary
  std::vector<Entry> data;
  // temporal summary, used for temp-merge
  SummaryContainer temp;
};
    
    // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
    
    {  mutable int count_ = 0;
  mutable int merge_count_ = 0;
};
    
    #include 'rocksdb/cache.h'
#include 'rocksdb/compaction_filter.h'
#include 'rocksdb/db.h'
#include 'rocksdb/options.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/table.h'
#include 'rocksdb/utilities/options_util.h'
    
      s = db->Get(ReadOptions(), 'key1', &value);
  assert(s.IsNotFound());
    
      ////////////////////////////////////////////////////////
  //
  // 'Read Committed' (Monotonic Atomic Views) Example
  //   --Using multiple Snapshots
  //
  ////////////////////////////////////////////////////////
    
    class DbDumpTool {
 public:
  bool Run(const DumpOptions& dump_options,
           rocksdb::Options options = rocksdb::Options());
};
    
    // FlushBlockPolicy provides a configurable way to determine when to flush a
// block in the block based tables,
class FlushBlockPolicy {
 public:
  // Keep track of the key/value sequences and return the boolean value to
  // determine if table builder should flush current data block.
  virtual bool Update(const Slice& key,
                      const Slice& value) = 0;
    }
    
    // Get Thread-local IOStatsContext object pointer
IOStatsContext* get_iostats_context();
    
      // Lookup page cache by page identifier
  //
  // page_key   Page identifier
  // buf        Buffer where the data should be copied
  // size       Size of the page
  virtual Status Lookup(const Slice& key, std::unique_ptr<char[]>* data,
                        size_t* size) = 0;
    
      // A list of properties that describe some details about the current
  // operation.  Same field in op_properties[] might have different
  // meanings for different operations.
  uint64_t op_properties[kNumOperationProperties];
    
      // When Open() is called, it will open at most this many of the latest
  // non-corrupted backups.
  //
  // Note setting this to a non-default value prevents old files from being
  // deleted in the shared directory, as we can't do proper ref-counting. If
  // using this option, make sure to occasionally disable it (by resetting to
  // INT_MAX) and run GarbageCollect to clean accumulated stale files.
  //
  // Default: INT_MAX
  int max_valid_backups_to_open;
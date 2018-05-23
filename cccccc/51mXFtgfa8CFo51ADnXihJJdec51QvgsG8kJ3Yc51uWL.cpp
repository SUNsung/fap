
        
          /// This is the second time DebuggerClient is consulted:
  /// after all names in external Modules are checked, the client
  /// gets a chance to add names to the list of candidates that
  /// have been found in the external module lookup.
    
    
    {  SyntaxMap[FromNode] = ToNode;
}
    
    namespace swift {
    }
    
    @interface NumberBridgingTester : NSObject
- (BOOL)verifyKeysInRange:(NSRange)range existInDictionary:(NSDictionary *)dictionary;
@end
    
    using namespace swift;
    
    
    {
    {}
}
#endif

    
    #ifdef __APPLE__
    
    /// Runs the given function with the given context argument exactly once.
/// The predicate argument must point to a global or static variable of static
/// extent of type swift_once_t.
void swift::swift_once(swift_once_t *predicate, void (*fn)(void *),
                       void *context) {
#if defined(__APPLE__)
  dispatch_once_f(predicate, context, fn);
#elif defined(__CYGWIN__)
  _swift_once_f(predicate, context, fn);
#else
  std::call_once(*predicate, [fn, context]() { fn(context); });
#endif
}

    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ImmutableExtensionLiteGenerator);
};
    
    #include 'intsimdmatrix.h'
#include <memory>
#include 'genericvector.h'
#include 'include_gunit.h'
#include 'intsimdmatrixavx2.h'
#include 'intsimdmatrixsse.h'
#include 'simddetect.h'
#include 'tprintf.h'
    
    // Tests that the RotatingTranspose function does the right thing for various
// transformations.
// dims=[5, 4, 3, 2]->[5, 2, 4, 3]
TEST_F(MatrixTest, RotatingTranspose_3_1) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 3, 1, &m);
  m.ResizeNoInit(kInputSize_ / 3, 3);
  // Verify that the result is:
  // output tensor=[[[[0, 2, 4][6, 8, 10][12, 14, 16][18, 20, 22]]
  //                 [[1, 3, 5][7, 9, 11][13, 15, 17][19, 21, 23]]]
  //                [[[24, 26, 28]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(2, m(0, 1));
  EXPECT_EQ(4, m(0, 2));
  EXPECT_EQ(6, m(1, 0));
  EXPECT_EQ(1, m(4, 0));
  EXPECT_EQ(24, m(8, 0));
  EXPECT_EQ(26, m(8, 1));
  EXPECT_EQ(25, m(12, 0));
}
    
     private:
  // Size of padded input to weight matrices = ni_ + no_ for 1-D operation
  // and ni_ + 2 * no_ for 2-D operation. Note that there is a phantom 1 input
  // for the bias that makes the weight matrices of size [na + 1][no].
  int32_t na_;
  // Number of internal states. Equal to no_ except for a softmax LSTM.
  // ns_ is NOT serialized, but is calculated from gate_weights_.
  int32_t ns_;
  // Number of additional feedback states. The softmax types feed back
  // additional output information on top of the ns_ internal states.
  // In the case of a binary-coded (EMBEDDED) softmax, nf_ < no_.
  int32_t nf_;
  // Flag indicating 2-D operation.
  bool is_2d_;
    
    bool ResultIterator::IsAtFinalSymbolOfWord() const {
  if (!it_->word()) return true;
  GenericVector<int> blob_order;
  CalculateBlobOrder(&blob_order);
  return blob_order.size() == 0 || blob_order.back() == blob_index_;
}
    
    
    {  int retry_leading = 0;
  int retry_trailing = 0;
  bool is_good = false;
  WERD_RES *revised = TrySuperscriptSplits(
      num_chopped_leading, leading_certainty, sp_leading,
      num_chopped_trailing, trailing_certainty, sp_trailing,
      word, &is_good, &retry_leading, &retry_trailing);
  if (is_good) {
    word->ConsumeWordResults(revised);
  } else if (retry_leading || retry_trailing) {
    int retry_chopped_leading =
        LeadingUnicharsToChopped(revised, retry_leading);
    int retry_chopped_trailing =
        TrailingUnicharsToChopped(revised, retry_trailing);
    WERD_RES *revised2 = TrySuperscriptSplits(
        retry_chopped_leading, leading_certainty, sp_leading,
        retry_chopped_trailing, trailing_certainty, sp_trailing,
        revised, &is_good, &retry_leading, &retry_trailing);
    if (is_good) {
      word->ConsumeWordResults(revised2);
    }
    delete revised2;
  }
  delete revised;
  return is_good;
}
    
      //// tfacepp.cpp ///////////////////////////////////////////////////////
  void recog_word_recursive(WERD_RES* word);
  void recog_word(WERD_RES *word);
  void split_and_recog_word(WERD_RES* word);
  void split_word(WERD_RES *word,
                  int split_pt,
                  WERD_RES **right_piece,
                  BlamerBundle **orig_blamer_bundle) const;
  void join_words(WERD_RES *word,
                  WERD_RES *word2,
                  BlamerBundle *orig_bb) const;
  //// fixspace.cpp ///////////////////////////////////////////////////////
  BOOL8 digit_or_numeric_punct(WERD_RES *word, int char_position);
  int16_t eval_word_spacing(WERD_RES_LIST &word_res_list);
  void match_current_words(WERD_RES_LIST &words, ROW *row, BLOCK* block);
  int16_t fp_eval_word_spacing(WERD_RES_LIST &word_res_list);
  void fix_noisy_space_list(WERD_RES_LIST &best_perm, ROW *row, BLOCK* block);
  void fix_fuzzy_space_list(WERD_RES_LIST &best_perm, ROW *row, BLOCK* block);
  void fix_sp_fp_word(WERD_RES_IT &word_res_it, ROW *row, BLOCK* block);
  void fix_fuzzy_spaces(                      //find fuzzy words
                        ETEXT_DESC *monitor,  //progress monitor
                        int32_t word_count,     //count of words in doc
                        PAGE_RES *page_res);
  void dump_words(WERD_RES_LIST &perm, int16_t score,
                  int16_t mode, BOOL8 improved);
  BOOL8 fixspace_thinks_word_done(WERD_RES *word);
  int16_t worst_noise_blob(WERD_RES *word_res, float *worst_noise_score);
  float blob_noise_score(TBLOB *blob);
  void break_noisiest_blob_word(WERD_RES_LIST &words);
  //// docqual.cpp ////////////////////////////////////////////////////////
  GARBAGE_LEVEL garbage_word(WERD_RES *word, BOOL8 ok_dict_word);
  BOOL8 potential_word_crunch(WERD_RES *word,
                              GARBAGE_LEVEL garbage_level,
                              BOOL8 ok_dict_word);
  void tilde_crunch(PAGE_RES_IT &page_res_it);
  void unrej_good_quality_words(  //unreject potential
                                PAGE_RES_IT &page_res_it);
  void doc_and_block_rejection(  //reject big chunks
                               PAGE_RES_IT &page_res_it,
                               BOOL8 good_quality_doc);
  void quality_based_rejection(PAGE_RES_IT &page_res_it,
                               BOOL8 good_quality_doc);
  void convert_bad_unlv_chs(WERD_RES *word_res);
  void tilde_delete(PAGE_RES_IT &page_res_it);
  int16_t word_blob_quality(WERD_RES *word, ROW *row);
  void word_char_quality(WERD_RES *word, ROW *row, int16_t *match_count,
                         int16_t *accepted_match_count);
  void unrej_good_chs(WERD_RES *word, ROW *row);
  int16_t count_outline_errs(char c, int16_t outline_count);
  int16_t word_outline_errs(WERD_RES *word);
  BOOL8 terrible_word_crunch(WERD_RES *word, GARBAGE_LEVEL garbage_level);
  CRUNCH_MODE word_deletable(WERD_RES *word, int16_t &delete_mode);
  int16_t failure_count(WERD_RES *word);
  BOOL8 noise_outlines(TWERD *word);
  //// pagewalk.cpp ///////////////////////////////////////////////////////
  void
  process_selected_words (
      PAGE_RES* page_res, // blocks to check
      //function to call
      TBOX & selection_box,
      BOOL8 (tesseract::Tesseract::*word_processor)(PAGE_RES_IT* pr_it));
  //// tessbox.cpp ///////////////////////////////////////////////////////
  void tess_add_doc_word(                          //test acceptability
                         WERD_CHOICE *word_choice  //after context
                        );
  void tess_segment_pass_n(int pass_n, WERD_RES *word);
  bool tess_acceptable_word(WERD_RES *word);
    
        static ICOORD chain_step(int chaindir);
    
    
    {  int32_t local_cost_;    // Cost of this point on its own.
  int32_t total_cost_;    // Sum of all costs in best path to here.
                        // During cost calculations local_cost is excluded.
  int32_t total_steps_;   // Number of steps in best path to here.
  const DPPoint* best_prev_;  // Pointer to prev point in best path from here.
  // Information for computing the variance part of the cost.
  int32_t n_;             // Number of steps in best path to here for variance.
  int32_t sig_x_;         // Sum of step sizes for computing variance.
  int64_t sig_xsq_;       // Sum of squares of steps for computing variance.
};
    
    
    {  std::unordered_map<key_type, value_type> _algorithms;
};
    
    #define THPDoubleStorage_CData(obj)  (obj)->cdata
#define THPFloatStorage_CData(obj)   (obj)->cdata
#define THPHalfStorage_CData(obj)    (obj)->cdata
#define THPLongStorage_CData(obj)    (obj)->cdata
#define THPIntStorage_CData(obj)     (obj)->cdata
#define THPShortStorage_CData(obj)   (obj)->cdata
#define THPCharStorage_CData(obj)    (obj)->cdata
#define THPByteStorage_CData(obj)    (obj)->cdata
    
    public:
	typedef void (*LoadCertsFromMemory)(const PoolByteArray &p_certs);
    
    		case LWS_CALLBACK_CLIENT_ESTABLISHED:
			peer->set_wsi(wsi);
			peer_data->peer_id = 0;
			peer_data->in_size = 0;
			peer_data->in_count = 0;
			peer_data->out_count = 0;
			peer_data->rbw.resize(16);
			peer_data->rbr.resize(16);
			peer_data->force_close = false;
			_on_connect(lws_get_protocol(wsi)->name);
			break;
    
    void WebSocketClient::_on_peer_packet() {
    }
    
    #if defined(MBEDTLS_ECDSA_C) &&            \
    ( !defined(MBEDTLS_ECP_C) ||           \
      !defined(MBEDTLS_ASN1_PARSE_C) ||    \
      !defined(MBEDTLS_ASN1_WRITE_C) )
#error 'MBEDTLS_ECDSA_C defined, but not all prerequisites'
#endif
    
    	static void free_clipboard();
    
    #endif

    
    /*Note that we do not provide a macro for abs(), because it is provided as a
   library function, which we assume is translated into an intrinsic to avoid
   the function call overhead and then implemented in the smartest way for the
   target platform.
  With modern gcc (4.x), this is true: it uses cmov instructions if the
   architecture supports it and branchless bit-twiddling if it does not (the
   speed difference between the two approaches is not measurable).
  Interestingly, the bit-twiddling method was patented in 2000 (US 6,073,150)
   by Sun Microsystems, despite prior art dating back to at least 1996:
   http://web.archive.org/web/19961201174141/www.x86.org/ftp/articles/pentopt/PENTOPT.TXT
  On gcc 3.x, however, our assumption is not true, as abs() is translated to a
   conditional jump, which is horrible on deeply piplined architectures (e.g.,
   all consumer architectures for the past decade or more).
  Also be warned that -C*abs(x) where C is a constant is mis-optimized as
   abs(C*x) on every gcc release before 4.2.3.
  See bug http://gcc.gnu.org/bugzilla/show_bug.cgi?id=34130 */
    
        // Operator signature declaration.
    // It defines input formal parameter, output formal parameters and
    // attributes.
    // Once an operator signature created, it's 'Read-Only'.
    class OpSignature
    {
    public:
    }
    
    namespace ONNXIR
{
    namespace Utils
    {
        std::unordered_map<std::string, TypeProto>& OpUtils::GetTypeStrToProtoMap()
        {
            static std::unordered_map<std::string, TypeProto> map;
            return map;
        }
    }
    }
    
            REGISTER_ELEMENTWISE_OPERATOR_SCHEMA(Max, 'max')
        REGISTER_ELEMENTWISE_OPERATOR_SCHEMA(Min, 'min')
        REGISTER_ELEMENTWISE_OPERATOR_SCHEMA(Sum, 'sum')
        REGISTER_ELEMENTWISE_OPERATOR_SCHEMA(Mean, 'mean')
    
    // Class represents a description of an HTK chunk.
// It is only used internally by the HTK deserializer.
// Can exist without associated data and provides methods for requiring/releasing chunk data.
// TODO: We should consider splitting data load from the description in the future versions.
class HTKChunkInfo
{
    // All utterances in the chunk.
    std::vector<UtteranceDescription> m_utterances;
    }
    
        // If not given explicitly, we need to identify the required augmentation range from the expected dimension
    // and the number of dimensions in the file.
    if (m_augmentationWindow.first == 0 && m_augmentationWindow.second == 0)
    {
        const size_t windowFrames = m_dimension / m_ioFeatureDimension; // total number of frames to generate
        const size_t extent = windowFrames / 2;                         // extend each side by this
    }
    
    
    {        result.push_back(s);
    }
    
        // Let's record that we started the copy, so that the main thread can wait afterwards.
    if (m_dataTransferers[currentDataTransferIndex])
        m_dataTransferers[currentDataTransferIndex]->RecordCPUToGPUCopy();
    
    public:
    template <class ConfigRecordType>
    void InitFromConfig(const ConfigRecordType&);
    virtual void Init(const ConfigParameters& config) override
    {
        InitFromConfig(config);
    }
    virtual void Init(const ScriptableObjects::IConfigRecord& config) override
    {
        InitFromConfig(config);
    }
    // DataWriter Constructor
    // config - [in] configuration parameters for the datareader
    BinaryWriter(const ConfigParameters& config)
    {
        Init(config);
    }
    BinaryWriter()
    {
    }
    // Destroy - cleanup and remove this class
    // NOTE: this destroys the object, and it can't be used past this point
    virtual void Destroy();
    virtual ~BinaryWriter();
    
    BOOST_FIXTURE_TEST_CASE(MatrixSparseTimesSparse, RandomSeedFixture)
{
    Matrix<float> mAdense(c_deviceIdZero);
    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -3.0f, 0.1f, IncrementCounter()), 0);
    Matrix<float> mAsparse(mAdense.DeepClone());
    mAsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    }
    
    class IosFlagsSaver {
  ios_base& ios_;
  ios_base::fmtflags flags_;
    }
    
      YGNodeCalculateLayout(root, 200, 100, YGDirectionLTR);
    
        static Config * create(void);
    
        double width;
    double height;
    
        method(calculateLayout);
    
    // Keeps a thread-local reference to the current thread's JNIEnv.
struct Environment {
  // May be null if this thread isn't attached to the JVM
  FBEXPORT static JNIEnv* current();
  static void initialize(JavaVM* vm);
    }
    
    template <typename T, typename ...Args>
static inline RefPtr<T> createNew(Args&&... arguments) {
  return RefPtr<T>::adoptRef(new T(std::forward<Args>(arguments)...));
}
    
    
    {}

    
    
    {}

    
    struct ExternalFunctions {
  // Initialize function pointers. Functions that are not available will be set
  // to nullptr.  Do not call this constructor  before ``main()`` has been
  // entered.
  ExternalFunctions();
    }
    
    void ReadDirToVectorOfUnits(const char *Path, std::vector<Unit> *V,
                            long *Epoch, size_t MaxSize, bool ExitOnError);
    
      Random &GetRand() { return Rand; }
    
    /* public API - prototypes - TODO: doxygen*/
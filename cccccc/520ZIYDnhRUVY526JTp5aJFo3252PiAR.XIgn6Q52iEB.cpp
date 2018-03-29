
        
          // Publish metadata about the debugged Session::Run() call.
  //
  // See the doc string of DebuggerStateInterface::PublishDebugMetadata() for
  // details.
  Status PublishDebugMetadata(const int64 global_step,
                              const int64 session_run_count,
                              const int64 executor_step_count,
                              const std::vector<string>& input_names,
                              const std::vector<string>& output_names,
                              const std::vector<string>& target_names) override;
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      ExpectSuccess(Builder().Input(FakeInput(3, DT_STRING)),
                {DT_STRING, DT_STRING, DT_STRING}, {}, R'proto(
      op: 'NPolymorphicRestrictIn'
      input: ['a', 'a:1', 'a:2']
      attr { key: 'N' value { i: 3 } }
      attr { key: 'T' value { type: DT_STRING } } )proto');
    
    template <typename T>
struct DynamicStitchOpCPU : DynamicStitchOpImplCPU<T, false> {
  using DynamicStitchOpImplCPU<T, false>::DynamicStitchOpImplCPU;
};
    
    void SavePageHandler::Destroy(content::DownloadItem* item) {
  item->RemoveObserver(this);
  delete this;
}
    
    namespace content {
class WebContents;
}
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(AtomQuotaPermissionContext);
};
    
     private:
  // Must be called on IO thread.
  void DoCancelAuth();
  void DoLogin(const base::string16& username, const base::string16& password);
    
    namespace asar {
    }
    
    net::URLRequestJob* HttpProtocolHandler::MaybeCreateJob(
    net::URLRequest* request,
    net::NetworkDelegate* network_delegate) const {
  return net::URLRequestHttpJob::Factory(request,
                                         network_delegate,
                                         scheme_);
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(URLRequestStringJob);
};
    
    class TrayIconGtk : public TrayIcon,
                    public views::StatusIconLinux::Delegate {
 public:
  TrayIconGtk();
  virtual ~TrayIconGtk();
    }
    
    using namespace swift;
    
    /// Index the given module and store the results to \p indexStorePath.
///
/// \param module The module to index.
///
/// \param indexUnitTokens A list of unique identifiers for the index units to
/// be written. This may either be one unit per source file of \p module, or it
/// may be a single unit, in which case all the index information will be
/// combined into a single unit.
///
/// \param moduleUnitToken A unique identifier for this module unit in the form
/// of a file path. Only used if \p indexUnitTokens are specified for each
/// source file, otherwise the single \p indexUnitTokens value is used instead.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(ModuleDecl *module, ArrayRef<std::string> indexUnitTokens,
                    StringRef moduleUnitToken, StringRef indexStorePath,
                    bool indexSystemModules, bool isDebugCompilation,
                    StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
// FIXME: indexUnitTokens could be StringRef, but that creates an impedance
// mismatch in the caller.
    
      /// Indicates whether the diagnostics produced during compilation should be
  /// checked against expected diagnostics, indicated by markers in the
  /// input source file.
  enum {
    NoVerify,
    Verify,
    VerifyAndApplyFixes
  } VerifyMode = NoVerify;
    
    namespace swift {
    }
    
    Substitution::Substitution(Type Replacement,
                           ArrayRef<ProtocolConformanceRef> Conformance)
  : Replacement(Replacement), Conformance(Conformance)
{
  // The replacement type must be materializable.
  assert(Replacement->isMaterializable()
         && 'cannot substitute with a non-materializable type');
}
    
    
    {    ICOORD pt;
    int halfwidth;
  };
  // Type holds the distance of each point from the fitted line and the point
  // itself. Use of double allows integer distances from ICOORDs to be stored
  // exactly, and also the floating point results from ConstrainedFit.
  typedef KDPairInc<double, ICOORD> DistPointPair;
    
    void LLSQ::remove(double x, double y) {          // delete an element
  if (total_weight <= 0.0)                       // illegal
    EMPTY_LLSQ.error('LLSQ::remove', ABORT, NULL);
  total_weight--;                           // count elements
  sigx -= x;                     // update accumulators
  sigy -= y;
  sigxx -= x * x;
  sigxy -= x * y;
  sigyy -= y * y;
}
    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
    
/**********************************************************************
 * QLSQ::fit
 *
 * Fit the given degree of polynomial and store the result.
 * This creates a quadratic of the form axx + bx + c, but limited to
 * the given degree.
 **********************************************************************/
    
    
    {}  // namespace tesseract.
    
      // Main worker method that retrieves the next number in the sequence.
  // Returns kInvalidVal if called more than N times after object initialization
  int GetVal() {
    const int kInvalidVal = -1;
    const int kMaxNaturalNumberValue = 1 << num_bits_;
    if (next_num_ >= kMaxNaturalNumberValue)
      return kInvalidVal;
    int n = next_num_;
    }
    
    
    {
  // Total scaled error used by boosting algorithms.
  double scaled_error_;
  // Difference in result rating to be thought of as an 'equal' choice.
  double rating_epsilon_;
  // Vector indexed by font_id from the samples of error accumulators.
  GenericVector<Counts> font_counts_;
  // Counts of the results that map each unichar_id (from samples) to an
  // incorrect shape_id.
  GENERIC_2D_ARRAY<int> unichar_counts_;
  // Count of the number of times each shape_id occurs, is correct, and multi-
  // unichar.
  GenericVector<int> multi_unichar_counts_;
  // Histogram of scores (as percent) for correct answers.
  STATS ok_score_hist_;
  // Histogram of scores (as percent) for incorrect answers.
  STATS bad_score_hist_;
  // Unicharset for printing character ids in results.
  const UNICHARSET& unicharset_;
};
    
    #define XIntersectionOf(A,B,X)  ( SlopeFrom(A,B) * ((X) - A.x) + A.y)
    
    // Returns the index of the current sample in compact charset space, so
// in a 2-class problem between x and y, the returned indices will all be
// 0 or 1, and have nothing to do with the unichar_ids.
// If the charset_map_ is NULL, then this is equal to GetSparseClassID().
int SampleIterator::GetCompactClassID() const {
  return charset_map_ != NULL ? charset_map_->SparseToCompact(shape_index_)
                              : GetSparseClassID();
}
// Returns the index of the current sample in sparse charset space, so
// in a 2-class problem between x and y, the returned indices will all be
// x or y, where x and y may be unichar_ids (no shape_table_) or shape_ids
// with a shape_table_.
int SampleIterator::GetSparseClassID() const {
  return shape_table_ != NULL ? shape_index_ : GetSample().class_id();
}
    
    bool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    {        ok &= luaval_to_boolean(tolua_S, 3,&arg1, 'cc.SimpleAudioEngine:playBackgroundMusic');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playBackgroundMusic'', nullptr);
            return 0;
        }
        cobj->playBackgroundMusic(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:playBackgroundMusic',argc, 1);
    return 0;
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    
    
    
    
    	m_world->Step(timeStep, settings->velocityIterations, settings->positionIterations);
    
    #endif

    
    			b2FixtureDef sd1;
			sd1.shape = &poly1;
			sd1.density = 4.0f;
    
    
    {		Test::Step(settings);
	}
    
    TemporaryFile::TemporaryFile(size_t size)
    : path_(fs::temp_directory_path() / fs::unique_path()) {
  CHECK_EQ(size % sizeof(uint32_t), 0);
  size /= sizeof(uint32_t);
  const uint32_t seed = 42;
  std::mt19937 rnd(seed);
    }
    
    
    { private:
  bool async_{true};
  Optional<size_t> maxBufferSize_;
};
    
    /**
 * Parse a JSON configuration string.
 *
 * See the documentation in logging/docs/Config.md for a description of the
 * JSON configuration object format.
 *
 * This function uses relaxed JSON parsing, allowing C and C++ style
 * comments, as well as trailing commas.
 */
LogConfig parseLogConfigJson(StringPiece value);
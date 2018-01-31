
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {  virtual ~SessionFactory() {}
  static void Register(const string& runtime_type, SessionFactory* factory);
  static Status GetFactory(const SessionOptions& options,
                           SessionFactory** out_factory);
};
    
      string name() const override { return 'model_pruner'; };
    
    
    {}  // namespace tensorflow
    
    namespace tensorflow {
namespace functor {
    }
    }
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    // static
Base* DispatcherHost::GetApiObject(int id) {
  return objects_registry_.Lookup(id);
}
    
    
    {  template<typename T> bool RemoveListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i!=listerners_.end()) {
      delete i->second;
      listerners_.erase(i);
      return true;
    }
    return false;
  }
private:
  DISALLOW_COPY_AND_ASSIGN(EventListener);
};
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    
    {}  // namespace nwapi

    
    #include <string.h>
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    NwAppClearAppCacheFunction::~NwAppClearAppCacheFunction() {
}
    
      if (flags.bit (CHECK_AMBIG_WERD) &&
      word->best_choice->dangerous_ambig_found()) {
    if (tessedit_adaption_debug) tprintf('word is ambiguous\n');
    return FALSE;
  }
    
    // Fixxht overview.
// Premise: Initial estimate of x-height is adequate most of the time, but
// occasionally it is incorrect. Most notable causes of failure are:
// 1. Small caps, where the top of the caps is the same as the body text
// xheight. For small caps words the xheight needs to be reduced to correctly
// recognize the caps in the small caps word.
// 2. All xheight lines, such as summer. Here the initial estimate will have
// guessed that the blob tops are caps and will have placed the xheight too low.
// 3. Noise/logos beside words, or changes in font size on a line. Such
// things can blow the statistics and cause an incorrect estimate.
// 4. Incorrect baseline. Can happen when 2 columns are incorrectly merged.
// In this case the x-height is often still correct.
//
// Algorithm.
// Compare the vertical position (top only) of alphnumerics in a word with
// the range of positions in training data (in the unicharset).
// See CountMisfitTops. If any characters disagree sufficiently with the
// initial xheight estimate, then recalculate the xheight, re-run OCR on
// the word, and if the number of vertical misfits goes down, along with
// either the word rating or certainty, then keep the new xheight.
// The new xheight is calculated as follows:ComputeCompatibleXHeight
// For each alphanumeric character that has a vertically misplaced top
// (a misfit), yet its bottom is within the acceptable range (ie it is not
// likely a sub-or super-script) calculate the range of acceptable xheight
// positions from its range of tops, and give each value in the range a
// number of votes equal to the distance of its top from its acceptance range.
// The x-height position with the median of the votes becomes the new
// x-height. This assumes that most characters will be correctly recognized
// even if the x-height is incorrect. This is not a terrible assumption, but
// it is not great. An improvement would be to use a classifier that does
// not care about vertical position or scaling at all.
// Separately collect stats on shifted baselines and apply the same logic to
// computing a best-fit shift to fix the error. If the baseline needs to be
// shifted, but the x-height is OK, returns the original x-height along with
// the baseline shift to indicate that recognition needs to re-run.
    
    
    {    // Restore the normal y-position penalties.
    classify_class_pruner_multiplier.set_value(saved_cp_multiplier);
    classify_integer_matcher_multiplier.set_value(saved_im_multiplier);
  }
    
    // Prints the content of the DENORM for debug purposes.
void DENORM::Print() const {
  if (pix_ != NULL) {
    tprintf('Pix dimensions %d x %d x %d\n',
            pixGetWidth(pix_), pixGetHeight(pix_), pixGetDepth(pix_));
  }
  if (inverse_)
    tprintf('Inverse\n');
  if (block_ && block_->re_rotation().x() != 1.0f) {
    tprintf('Block rotation %g, %g\n',
            block_->re_rotation().x(), block_->re_rotation().y());
  }
  tprintf('Input Origin = (%g, %g)\n', x_origin_, y_origin_);
  if (x_map_ != NULL && y_map_ != NULL) {
    tprintf('x map:\n');
    for (int x = 0; x < x_map_->size(); ++x) {
      tprintf('%g ', (*x_map_)[x]);
    }
    tprintf('\ny map:\n');
    for (int y = 0; y < y_map_->size(); ++y) {
      tprintf('%g ', (*y_map_)[y]);
    }
    tprintf('\n');
  } else {
    tprintf('Scale = (%g, %g)\n', x_scale_, y_scale_);
    if (rotation_ != NULL)
      tprintf('Rotation = (%g, %g)\n', rotation_->x(), rotation_->y());
  }
  tprintf('Final Origin = (%g, %g)\n', final_xshift_, final_xshift_);
  if (predecessor_ != NULL) {
    tprintf('Predecessor:\n');
    predecessor_->Print();
  }
}
    
        void set_lmargin(inT16 lmargin) {
      lmargin_ = lmargin;
    }
    void set_rmargin(inT16 rmargin) {
      rmargin_ = rmargin;
    }
    inT16 lmargin() const {
      return lmargin_;
    }
    inT16 rmargin() const {
      return rmargin_;
    }
    
        GradientsUpdateType GradUpdateType() const
    {
        return m_gradType.type;
    }
    double GradientUpdateNoiseStd() const
    {
        return m_gradType.gaussianNoiseInjectStd;
    }
    
        mBsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    Matrix<float>::ScaleAndAdd(alpha, mAdense, mBsparse);
    
    
    {
    {        // the rest is done in a lambda that is only evaluated when a virgin network is needed
        // Note that evaluating the BrainScript *is* instantiating the network, so the evaluate call must be inside the lambda.
        createNetworkFn = [expr](DEVICEID_TYPE /*deviceId*/)
        {
            // evaluate the parse tree, particularly the top-level field 'network'
            // Evaluating it will create the network.
            let object = EvaluateField(expr, L'network');                   // this comes back as a BS::Object
            let network = dynamic_pointer_cast<ComputationNetwork>(object); // cast it
            if (!network)
                LogicError('BuildNetworkFromDescription: ComputationNetwork not what it was meant to be');
            return network;
        };
        return true;
    }
    else
        return false;
}
    
        // helpers for pretty-printing errors: Show source-code line with ...^ under it to mark up the point of error
    static void PrintIssue(const vector<TextLocation>& locations, const wchar_t* errorKind, const wchar_t* kind, const wchar_t* what);
    static std::wstring CreateIssueMessage(const vector<TextLocation>& locations, const wchar_t* errorKind, const wchar_t* kind, const wchar_t* what);
    static void Trace(TextLocation, const wchar_t* traceKind, const wchar_t* op, const wchar_t* exprPath);
    
        // SaveData - save data in the file/files
    // recordStart - Starting record number
    // matricies - a map of section name (section:subsection) to data pointer. Data sepcifications from config file will be used to determine where and how to save data
    // numRecords - number of records we are saving, can be zero if not applicable
    // datasetSize - size of the dataset (in records)
    // byteVariableSized - for variable sized data, size of current block to be written, zero when not used, or ignored if not variable sized data
    virtual bool SaveData(size_t recordStart, const std::map<std::wstring, void*, nocase_compare>& matrices, size_t numRecords, size_t datasetSize, size_t byteVariableSized = 0);
    
    #endif  // STORAGE_LEVELDB_DB_SNAPSHOT_H_

    
    // Use the db with the following name.
static const char* FLAGS_db = NULL;
    
    namespace leveldb {
    }
    
    // 1-byte type + 32-bit crc
static const size_t kBlockTrailerSize = 5;
    
    
    {  // Which direction is the iterator moving?
  enum Direction {
    kForward,
    kReverse
  };
  Direction direction_;
};
    
      // Get an integral value, 0 or 1, for whether a syscall table pointer is modified.
  auto f1 = osquery::readFile(kKernelSyscallAddrModifiedPath, content);
  if (f1.ok()) {
    boost::trim(content);
    syscall_addr_modified = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelSyscallAddrModifiedPath;
    return results;
  }
    
      /**
   * @brief Plan the best set of indexes for event record access.
   *
   * @param start an inclusive time to begin searching.
   * @param stop an inclusive time to end searching.
   * @param sort if true the indexes will be sorted.
   *
   * @return List of 'index.step' index strings.
   */
  std::vector<std::string> getIndexes(EventTime start,
                                      EventTime stop,
                                      bool sort = true);
    
    /**
 * @brief Helper accessor/assignment alias class to support deprecated flags.
 *
 * This templated class wraps Flag::updateValue and Flag::getValue to 'alias'
 * a deprecated flag name as the updated name. The helper macro FLAG_ALIAS
 * will create a global variable instances of this wrapper using the same
 * Gflags naming scheme to prevent collisions and support existing callsites.
 */
template <typename T>
class FlagAlias {
 public:
  FlagAlias& operator=(T const& v) {
    Flag::updateValue(name_, boost::lexical_cast<std::string>(v));
    return *this;
  }
    }
    
      /// See DropPrivileges::dropToParent but explicitiy set the UID and GID.
  bool dropTo(const std::string& uid, const std::string& gid);
    
    /**
 * @brief Create an osquery extension 'module'.
 *
 * This helper macro creates a constructor to declare an osquery module is
 * loading. The osquery registry is set up when modules (shared objects) are
 * discovered via search paths and opened. At that phase the registry is locked
 * meaning no additional plugins can be registered. To unlock the registry
 * for modifications a module must call Registry::declareModule. This declares
 * and any plugins added will use the metadata in the declare to determine:
 *  - The name of the module adding the plugin
 *  - The SDK version the module was built with, to determine compatibility
 *  - The minimum SDK the module requires from osquery core
 *
 * The registry is again locked when the module load is complete and a well
 * known module-exported symbol is called.
 */
#define CREATE_MODULE(name, version, min_sdk_version)                          \
  extern 'C' EXPORT_FUNCTION void initModule(void);                            \
  struct osquery_InternalStructCreateModule {                                  \
    osquery_InternalStructCreateModule(void) {                                 \
      Registry::get().declareModule(                                           \
          name, version, min_sdk_version, OSQUERY_SDK_VERSION);                \
    }                                                                          \
  };                                                                           \
  static osquery_InternalStructCreateModule osquery_internal_module_instance_;
    
    class Initializer : private boost::noncopyable {
 public:
  /**
   * @brief Sets up various aspects of osquery execution state.
   *
   * osquery needs a few things to happen as soon as the process begins
   * executing. Initializer takes care of setting up the relevant parameters.
   * Initializer should be called in an executable's `main()` function.
   *
   * @param argc the number of elements in argv
   * @param argv the command-line arguments passed to `main()`
   * @param tool the type of osquery main (daemon, shell, test, extension).
   */
  Initializer(int& argc, char**& argv, ToolType tool = ToolType::TEST);
    }
    
    template <typename T>
void do_release_std(typename std::shared_ptr<T> const&, T*) {}
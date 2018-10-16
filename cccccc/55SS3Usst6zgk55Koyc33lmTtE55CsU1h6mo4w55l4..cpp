
        
        class AtomContentClient : public brightray::ContentClient {
 public:
  AtomContentClient();
  ~AtomContentClient() override;
    }
    
    bool UvTaskRunner::PostNonNestableDelayedTask(const base::Location& from_here,
                                              base::OnceClosure task,
                                              base::TimeDelta delay) {
  return PostDelayedTask(from_here, std::move(task), delay);
}
    
    #include 'atom/browser/api/atom_api_auto_updater.h'
    
    namespace mate {
class Arguments;
class Dictionary;
}  // namespace mate
    
    #include 'atom/common/native_mate_converters/callback.h'
#include 'atom/common/native_mate_converters/file_path_converter.h'
#include 'base/bind.h'
#include 'base/files/file_util.h'
#include 'content/public/browser/tracing_controller.h'
#include 'native_mate/dictionary.h'
    
    void GlobalShortcut::UnregisterAll() {
  accelerator_callback_map_.clear();
  GlobalShortcutListener::GetInstance()->UnregisterAccelerators(this);
}
    
    
    {
    {  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   brightray::NotificationAction val) {
    mate::Dictionary dict = mate::Dictionary::CreateEmpty(isolate);
    dict.Set('text', val.text);
    dict.Set('type', val.type);
    return dict.GetHandle();
  }
};
}  // namespace mate
    
    namespace tesseract {
    }
    
    /**
 * Class to iterate over tesseract page structure, providing access to all
 * levels of the page hierarchy, without including any tesseract headers or
 * having to handle any tesseract structures.
 * WARNING! This class points to data held within the TessBaseAPI class, and
 * therefore can only be used while the TessBaseAPI class still exists and
 * has not been subjected to a call of Init, SetImage, Recognize, Clear, End
 * DetectOS, or anything else that changes the internal PAGE_RES.
 * See apitypes.h for the definition of PageIteratorLevel.
 * See also ResultIterator, derived from PageIterator, which adds in the
 * ability to access OCR output with text-specific methods.
 */
    
    
    {  TBLOB* blob;
  Tesseract* tesseract;
  BLOB_CHOICE_LIST** choices;
};
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    // Getter for the name.
const char* ParamContent::GetName() const {
  if (param_type_ == VT_INTEGER) { return iIt->name_str(); }
  else if (param_type_ == VT_BOOLEAN) { return bIt->name_str(); }
  else if (param_type_ == VT_DOUBLE) { return dIt->name_str(); }
  else if (param_type_ == VT_STRING) { return sIt->name_str(); }
  else
    return 'ERROR: ParamContent::GetName()';
}
    
    /**
 * @name tess_acceptable_word
 *
 * @return true if the word is regarded as 'good enough'.
 * @param word_choice after context
 * @param raw_choice before context
 */
bool Tesseract::tess_acceptable_word(WERD_RES* word) {
  return getDict().AcceptableResult(word);
}
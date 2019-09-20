
        
          /// Returns true if this vtable is going to be (or was) serialized.
  IsSerialized_t isSerialized() const {
    return Serialized ? IsSerialized : IsNotSerialized;
  }
    
    KNOWN_STDLIB_TYPE_DECL(UnsafeMutableRawPointer, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(UnsafeRawPointer, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(UnsafeMutablePointer, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(UnsafePointer, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(OpaquePointer, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(AutoreleasingUnsafeMutablePointer, NominalTypeDecl, 1)
    
      template <typename MetadataSourceTy, typename... Args>
  MetadataSourceTy *make_source(Args... args) {
    auto MS = new MetadataSourceTy(::std::forward<Args>(args)...);
    MetadataSourcePool.push_back(std::unique_ptr<const MetadataSource>(MS));
    return MS;
  }
    
      /// This class has the exception attribute.
  Exception            = 0x00020,
    
      constexpr ContextDescriptorFlags withVersion(uint8_t version) const {
    return ContextDescriptorFlags((Value & 0xFFFF00FFu) | (version << 8u));
  }
    
    /// Fetch the type metadata associated with the formal dynamic
/// type of the given (possibly Objective-C) object.  The formal
/// dynamic type ignores dynamic subclasses such as those introduced
/// by KVO.
///
/// The object pointer may be a tagged pointer, but cannot be null.
SWIFT_RUNTIME_EXPORT
const Metadata *swift_getObjectType(HeapObject *object);
    
    // static
void App::Quit(RenderProcessHost* render_process_host) {
  // Send the quit message.
  int no_use;
  if (render_process_host) {
    render_process_host->Send(new ViewMsg_WillQuit(&no_use));
  }else{
    std::set<RenderProcessHost*> rphs;
    std::set<RenderProcessHost*>::iterator it;
    }
    }
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    #include <map>
    
    bool MenuDelegate::IsCommandIdEnabled(int command_id) const {
  if (command_id < 0)
    return false;
    }
    
       bool IsItemForCommandIdDynamic(int command_id) const override;
   base::string16 GetLabelForCommandId(int command_id) const override;
   bool GetIconForCommandId(int command_id,
                                   gfx::Image* icon) const override;
    
    void Menu::Append(MenuItem* menu_item) {
  if (menu_item->submenu_)
    menu_model_->AddSubMenu(menu_item->id(), menu_item->label_,
                            menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->AddItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->AddCheckItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->AddSeparator(ui::NORMAL_SEPARATOR);
    }
    
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
    
    // Reads all boxes from the given filename.
// Reads a specific target_page number if >= 0, or all pages otherwise.
// Skips blanks if skip_blanks is true.
// The UTF-8 label of the box is put in texts, and the full box definition as
// a string is put in box_texts, with the corresponding page number in pages.
// Each of the output vectors is optional (may be nullptr).
// Returns false if no boxes are found.
bool ReadAllBoxes(int target_page, bool skip_blanks, const STRING& filename,
                  GenericVector<TBOX>* boxes,
                  GenericVector<STRING>* texts,
                  GenericVector<STRING>* box_texts,
                  GenericVector<int>* pages);
    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return nullptr;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : nullptr;
      int64_t new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != nullptr && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
    static STRING ParagraphJustificationToString(
    tesseract::ParagraphJustification justification) {
  switch (justification) {
    case JUSTIFICATION_LEFT:
      return 'LEFT';
    case JUSTIFICATION_RIGHT:
      return 'RIGHT';
    case JUSTIFICATION_CENTER:
      return 'CENTER';
    default:
      return 'UNKNOWN';
  }
}
    
      // Return whether a given text line could be a first paragraph line according
  // to this paragraph model.
  bool ValidBodyLine(int lmargin, int lindent, int rindent, int rmargin) const;
    
      // Simple accessors.
  bool empty() const {
    return heap_.empty();
  }
  int size() const {
    return heap_.size();
  }
  int size_reserved() const {
    return heap_.size_reserved();
  }
  void clear() {
    // Clear truncates to 0 to keep the number reserved in tact.
    heap_.truncate(0);
  }
  // Provides access to the underlying vector.
  // Caution! any changes that modify the keys will invalidate the heap!
  GenericVector<Pair>* heap() {
    return &heap_;
  }
  // Provides read-only access to an element of the underlying vector.
  const Pair& get(int index) const {
    return heap_[index];
  }
    
      // Insert the given unichar represention in the UNICHARMAP and associate it
  // with the given id. The length of the representation MUST be non-zero.
  void insert(const char* const unichar_repr, UNICHAR_ID id);
    
    // Displays classification as the given shape_id. Creates as many windows
// as it feels fit, using index as a guide for placement. Adds any created
// windows to the windows output and returns a new index that may be used
// by any subsequent classifiers. Caller waits for the user to view and
// then destroys the windows by clearing the vector.
int TessClassifier::DisplayClassifyAs(
    const TrainingSample& sample, Pix* page_pix, int unichar_id, int index,
    PointerVector<ScrollView>* windows) {
  int shape_id = unichar_id;
  // TODO(rays) Fix this so it works with both flat and real shapetables.
  //  if (GetShapeTable() != nullptr)
  //  shape_id = BestShapeForUnichar(sample, page_pix, unichar_id, nullptr);
  if (shape_id < 0) return index;
  if (UnusedClassIdIn(classify_->PreTrainedTemplates, shape_id)) {
    tprintf('No built-in templates for class/shape %d\n', shape_id);
    return index;
  }
  classify_->ShowBestMatchFor(shape_id, sample.features(),
                              sample.num_features());
  return index;
}
    
    
    { private:
  ObjectCache<Dawg> dawgs_;
};
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
std::string CurrentFileName(const std::string& dbname);
    
      fname = TableFileName('bar', 200);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(200, number);
  ASSERT_EQ(kTableFile, type);
    
      // commenting out the line below causes the example to work correctly
  db->CompactRange(&least, &greatest);
    
    #endif  // STORAGE_LEVELDB_TABLE_ITERATOR_WRAPPER_H_

    
    #include 'mongo/db/operation_context.h'
#include 'mongo/db/storage/kv/kv_engine.h'
#include 'mongo/util/assert_util.h'
#include 'mongo/util/str.h'
    
            // Mark several keys as 'unused'
        remove(BSON('a' << 1 << 'b' << 0));
        remove(BSON('a' << 1 << 'b' << 3));
        remove(BSON('a' << 1 << 'b' << 4));
    
    #include 'unicode/translit.h'
    
    class FCDUTF16NFDIterator : public UTF16NFDIterator {
public:
    FCDUTF16NFDIterator(const Normalizer2Impl &nfcImpl, const UChar *text, const UChar *textLimit)
            : UTF16NFDIterator(NULL, NULL) {
        UErrorCode errorCode = U_ZERO_ERROR;
        const UChar *spanLimit = nfcImpl.makeFCD(text, textLimit, NULL, errorCode);
        if(U_FAILURE(errorCode)) { return; }
        if(spanLimit == textLimit || (textLimit == NULL && *spanLimit == 0)) {
            s = text;
            limit = spanLimit;
        } else {
            str.setTo(text, (int32_t)(spanLimit - text));
            {
                ReorderingBuffer buffer(nfcImpl, str);
                if(buffer.init(str.length(), errorCode)) {
                    nfcImpl.makeFCD(spanLimit, textLimit, &buffer, errorCode);
                }
            }
            if(U_SUCCESS(errorCode)) {
                s = str.getBuffer();
                limit = s + str.length();
            }
        }
    }
private:
    UnicodeString str;
};
    
    void SearchIterator::setText(CharacterIterator &text, UErrorCode &status)
{
    if (U_SUCCESS(status)) {
        text.getText(m_text_);
        setText(m_text_, status);
    }
}
    
const UnicodeString & SearchIterator::getText(void) const
{
    return m_text_;
}
    
        void UserPostProcessing::initializationOnThread()
    {
        try
        {
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
        }
    }
    
    
    
            /**
         * Copy constructor.
         * It performs `fast copy`: For performance purpose, copying a Rectangle<T> or Datum or cv::Mat just copies
         * the reference, it still shares the same internal data.
         * Modifying the copied element will modify the original one.
         * Use clone() for a slower but real copy, similarly to cv::Mat and Rectangle<T>.
         * @param rectangle Rectangle to be copied.
         */
        Rectangle<T>(const Rectangle<T>& rectangle);
    
            virtual void initializationOnThread();
    
        template<typename T>
    Point<T>& Point<T>::operator+=(const T value)
    {
        try
        {
            x += value;
            y += value;
            // Return
            return *this;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return *this;
        }
    }
    
        template<typename T>
    Point<T> Rectangle<T>::center() const
    {
        try
        {
            return Point<T>{T(x + width / 2), T(y + height / 2)};
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return Point<T>{};
        }
    }
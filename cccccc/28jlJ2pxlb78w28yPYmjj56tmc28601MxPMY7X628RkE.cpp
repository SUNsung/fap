
        
          // Largest of two values.
  // Works correctly for special floating point values.
  // Note: 0.0 and -0.0 are not differentiated by Max (Max(0.0, -0.0) is -0.0),
  // which should be OK because, although they (can) have different
  // bit representation, they are observably the same when examined
  // with arithmetic and (in)equality operators.
  template<typename T>
  static T Max(const T x, const T y) {
    return MathLimits<T>::IsNaN(x) || x > y ? x : y;
  }
    
      decode_data.AddString(1, 'abcdefghIJ', 'abcdefghIJ');
  decode_data.AddString(3, 'abcdefghIJ', '_AbcdefghIJ');
  decode_data.AddString(2, 'abcdefghIJ', 'Abcd_EfghIJ');
  decode_data.AddString(4, 'abcdefghIJ', 'ABCD__EfghI_j');
  decode_data.AddString(1000,
                        'longFieldNameIsLooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong1000',
                        'long_field_name_is_looooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong_1000');
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
    
    // Write and Flush via the ByteSink superclass interface.
void WriteAndFlush(ByteSink* s) {
  s->Append('abc', 3);
  s->Flush();
}
    
    TEST(StatusOr, TestPointerCopyCtorStatusOk) {
  const int kI = 0;
  StatusOr<const int*> original(&kI);
  StatusOr<const int*> copy(original);
  EXPECT_EQ(original.status(), copy.status());
  EXPECT_EQ(original.ValueOrDie(), copy.ValueOrDie());
}
    
    TEST(StructurallyValidTest, ValidUTF8String) {
  // On GCC, this string can be written as:
  //   'abcd 1234 - \u2014\u2013\u2212'
  // MSVC seems to interpret \u differently.
  string valid_str('abcd 1234 - \342\200\224\342\200\223\342\210\222 - xyz789');
  EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data(),
                                      valid_str.size()));
  // Additional check for pointer alignment
  for (int i = 1; i < 8; ++i) {
    EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data() + i,
                                        valid_str.size() - i));
  }
}
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    #include <string>
    
    
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
    
    void Menu::Popup(int x, int y, content::Shell* shell) {
  GdkEventButton* event = NULL; //FIXME: shell->web_contents()->GetRenderWidgetHostView()->GetLastMouseDown();
  uint32_t triggering_event_time = event ? event->time : GDK_CURRENT_TIME;
  gfx::Point point;
  if (!event) {
    // gfx::Rect bounds = shell->web_contents()->GetRenderWidgetHostView()->GetViewBounds();
    // point = gfx::Point(x + bounds.x(), y + bounds.y());
    DVLOG(1) << 'no last mouse down event';
    point = gfx::Point(x, y);
  }else
    point = gfx::Point(event->x_root, event->y_root);
    }
    
    NwObjCreateFunction::NwObjCreateFunction() {
}
    
     protected:
  ~NwObjCallObjectMethodFunction() override;
    
    // Max number of scripts in ICU + 'NULL' + Japanese and Korean + Fraktur
const int kMaxNumberOfScripts = 116 + 1 + 2 + 1;
    
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
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
    
    { private:
  // The collection of images to put in the PDF.
  Pixa* pixa_;
  // The fonts used to draw text captions.
  L_Bmf* fonts_;
};
    
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
    
      // Add entry to the heap, keeping the smallest item at the top, by operator<.
  // Note that *entry is used as the source of operator=, but it is non-const
  // to allow for a smart pointer to be contained within.
  // Time = O(log n).
  void Push(Pair* entry) {
    int hole_index = heap_.size();
    // Make a hole in the end of heap_ and sift it up to be the correct
    // location for the new *entry. To avoid needing a default constructor
    // for primitive types, and to allow for use of DoublePtr in the Pair
    // somewhere, we have to incur a double copy here.
    heap_.push_back(*entry);
    *entry = heap_.back();
    hole_index = SiftUp(hole_index, *entry);
    heap_[hole_index] = *entry;
  }
    
      // Accessors.
  const Key& key() const {
    return key_;
  }
  void set_key(const Key& new_key) {
    key_ = new_key;
  }
  const Data* data() const {
    return data_;
  }
  // Sets the data pointer, taking ownership of the data.
  void set_data(Data* new_data) {
    delete data_;
    data_ = new_data;
  }
  // Relinquishes ownership of the data pointer (setting it to nullptr).
  Data* extract_data() {
    Data* result = data_;
    data_ = nullptr;
    return result;
  }
    
    namespace tesseract {
  // Generates a TrainingSample from a TBLOB. Extracts features and sets
  // the bounding box, so classifiers that operate on the image can work.
  // TODO(rays) BlobToTrainingSample must remain a global function until
  // the FlexFx and FeatureDescription code can be removed and LearnBlob
  // made a member of Classify.
  TrainingSample* BlobToTrainingSample(
      const TBLOB& blob, bool nonlinear_norm, INT_FX_RESULT_STRUCT* fx_info,
      GenericVector<INT_FEATURE_STRUCT>* bl_features);
}
    
    // Classifies the given [training] sample, writing to results.
// See ShapeClassifier for a full description.
int TessClassifier::UnicharClassifySample(
    const TrainingSample& sample, Pix* page_pix, int debug,
    UNICHAR_ID keep_this, GenericVector<UnicharRating>* results) {
  const int old_matcher_level = classify_->matcher_debug_level;
  const int old_matcher_flags = classify_->matcher_debug_flags;
  const int old_classify_level = classify_->classify_debug_level;
  if (debug) {
    // Explicitly set values of various control parameters to generate debug
    // output if required, restoring the old values after classifying.
    classify_->matcher_debug_level.set_value(2);
    classify_->matcher_debug_flags.set_value(25);
    classify_->classify_debug_level.set_value(3);
  }
  classify_->CharNormTrainingSample(pruner_only_, keep_this, sample, results);
  if (debug) {
    classify_->matcher_debug_level.set_value(old_matcher_level);
    classify_->matcher_debug_flags.set_value(old_matcher_flags);
    classify_->classify_debug_level.set_value(old_classify_level);
  }
  return results->size();
}
    
      void undo() {
    m_cb.setFrontier(m_oldFrontier);
  }
    
    MemFile::MemFile(const char *data, int64_t len,
                 const String& wrapper, const String& stream)
  : File(false, wrapper, stream), m_data(nullptr), m_len(len), m_cursor(0),
    m_malloced(true) {
  m_data = (char*)malloc(len + 1);
  if (m_data && len) {
    memcpy(m_data, data, len);
  }
  m_data[len] = '\0';
  setIsLocal(true);
}
    
      auto make_from = [] (const Variant& f) -> req::ptr<File> {
    auto res = dyn_cast_or_null<PlainFile>(f);
    if (!res || res->isClosed()) return nullptr;
    return req::make<PlainFile>(dup(res->fd()), true, s_php);
  };
    
    bool BZ2File::flush() {
  assertx(m_bzFile);
  return BZ2_bzflush(m_bzFile);
}
    
    
    {  void requestInitMath();
  void requestInitOptions();
};
    
      StreamContext(const Array& options, const Array& params)
    : m_options(options), m_params(params) {
  }
    
    // If set, releaseUnit will contain a pointer to any extraneous unit created due
// to race-conditions while compiling
Unit* compile_file(const char* s, size_t sz, const SHA1& sha1,
                   const char* fname, const Native::FuncTable& nativeFuncs,
                   const RepoOptions&, Unit** releaseUnit = nullptr);
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-object type
        json str = 'I am a string';
        str.at('the good') = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
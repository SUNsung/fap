
        
        bool SavePageHandler::Handle(const base::FilePath& full_path,
                             const content::SavePageType& save_type) {
  auto download_manager = content::BrowserContext::GetDownloadManager(
      web_contents_->GetBrowserContext());
  download_manager->AddObserver(this);
  // Chromium will create a 'foo_files' directory under the directory of saving
  // page 'foo.html' for holding other resource files of 'foo.html'.
  base::FilePath saved_main_directory_path = full_path.DirName().Append(
      full_path.RemoveExtension().BaseName().value() +
      FILE_PATH_LITERAL('_files'));
  bool result = web_contents_->SavePage(full_path,
                                        saved_main_directory_path,
                                        save_type);
  download_manager->RemoveObserver(this);
  // If initialization fails which means fail to create |DownloadItem|, we need
  // to delete the |SavePageHandler| instance to avoid memory-leak.
  if (!result)
    delete this;
  return result;
}
    
    
    {}  // namespace api
    
    namespace asar {
    }
    
    namespace base {
class TaskRunner;
}
    
    HttpProtocolHandler::~HttpProtocolHandler() {
}
    
    
    { private:
  std::string scheme_;
};
    
    // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    
    {}  // namespace atom
    
    // Like the views::NativeFrameView, but returns the min/max size from the
// NativeWindowViews.
class NativeFrameView : public views::NativeFrameView {
 public:
  NativeFrameView(NativeWindow* window, views::Widget* widget);
    }
    
    
    {}  // namespace atom
    
    namespace tesseract {
    }
    
    // A useful base class to facilitate the common operation of sorting a vector
// of owned pointer data using a separate key. This class owns its data pointer,
// deleting it when it has finished with it, and providing copy constructor and
// operator= that have move semantics so that the data does not get copied and
// only a single instance of KDPtrPair holds a specific data pointer.
template <typename Key, typename Data>
class KDPtrPair {
 public:
  KDPtrPair() : data_(NULL) {}
  KDPtrPair(Key k, Data* d) : data_(d), key_(k) {}
  // Copy constructor steals the pointer from src and NULLs it in src, thereby
  // moving the (single) ownership of the data.
  KDPtrPair(KDPtrPair& src) : data_(src.data_), key_(src.key_) {
    src.data_ = NULL;
  }
  // Destructor deletes data, assuming it is the sole owner.
  ~KDPtrPair() {
    delete this->data_;
    this->data_ = NULL;
  }
  // Operator= steals the pointer from src and NULLs it in src, thereby
  // moving the (single) ownership of the data.
  void operator=(KDPtrPair& src) {
    delete this->data_;
    this->data_ = src.data_;
    src.data_ = NULL;
    this->key_ = src.key_;
  }
    }
    
    
    {}  // namespace tesseract.
    
    void NormalizeOutline(MFOUTLINE Outline,
                      FLOAT32 XOrigin);
    
    // See class comment for arguments.
void SampleIterator::Init(const IndexMapBiDi* charset_map,
                          const ShapeTable* shape_table,
                          bool randomize,
                          TrainingSampleSet* sample_set) {
  Clear();
  charset_map_ = charset_map;
  shape_table_ = shape_table;
  sample_set_ = sample_set;
  randomize_ = randomize;
  if (shape_table_ == NULL && charset_map_ != NULL) {
    // The caller wishes to iterate by class. The easiest way to do this
    // is to create a dummy shape_table_ that we will own.
    int num_fonts = sample_set_->NumFonts();
    owned_shape_table_ = new ShapeTable(sample_set_->unicharset());
    int charsetsize = sample_set_->unicharset().size();
    for (int c = 0; c < charsetsize; ++c) {
      // We always add a shape for each character to keep the index in sync
      // with the unichar_id.
      int shape_id = owned_shape_table_->AddShape(c, 0);
      for (int f = 1; f < num_fonts; ++f) {
        if (sample_set_->NumClassSamples(f, c, true) > 0) {
          owned_shape_table_->AddToShape(shape_id, c, f);
        }
      }
    }
    shape_table_ = owned_shape_table_;
  }
  if (shape_table_ != NULL) {
    num_shapes_ = shape_table_->NumShapes();
  } else {
    num_shapes_ = randomize ? sample_set_->num_samples()
                            : sample_set_->num_raw_samples();
  }
  Begin();
}
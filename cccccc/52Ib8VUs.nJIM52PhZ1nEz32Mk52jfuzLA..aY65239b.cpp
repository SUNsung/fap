
        
        v8::Handle<v8::Value> AllocateId(int routing_id) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::EscapableHandleScope scope(isolate);
    }
    
    // Get RenderView from current js context (only works under window context).
content::RenderView* GetCurrentRenderView();
content::RenderView* GetEnteredRenderView();
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    void Menu::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    for(auto* item : menu_items_) {
      item->UpdateKeys(focus_manager);
    }
  }
}
    
      class ClipboardReader {
  public:
    ClipboardReader() {
      clipboard_ = ui::Clipboard::GetForCurrentThread();
    }
    }
    
      int timeout = -1;
  std::vector<int> to_add;
  std::vector<int> to_remove;
  for (;;) {
    int nevents;
    if (client_sessions.size() == 0)
      timeout = SHUTDOWN_TIMEOUT;
    SYSCHECK(nevents = poll(pollfds.data(), pollfds.size(), timeout));
    timeout = -1;
    if (nevents == 0 && client_sessions.size() == 0)
      break;
    }
    
    )DOC')
    .Input(0, 'X', '*(type: Tensor`<float>`)* Input tensor.')
    .Output(
        0,
        'Y',
        '*(type: Tensor`<float>`)* The exponential of the input tensor computed '
        'element-wise.')
    .InheritOnnxSchema('Exp');
    
    op = core.CreateOperator(
    'FindDuplicateElements',
    ['data'],
    ['indices'],
)
    
    namespace caffe2 {
    }
    
      bool RunOnDevice() override {
    auto& X = Input(0);
    auto* Y = Output(0);
    Y->ResizeLike(X);
    }
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/operator.h'
    
    **Result**
    
      XGBOOST_DEVICE GradientPairInternal<T> operator+(
      const GradientPairInternal<T> &rhs) const {
    GradientPairInternal<T> g;
    g.grad_ = grad_ + rhs.grad_;
    g.hess_ = hess_ + rhs.hess_;
    return g;
  }
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    namespace xgboost {
namespace data {
/*!
 * \brief Format specification of SparsePage.
 */
class SparsePageFormat {
 public:
  /*! \brief virtual destructor */
  virtual ~SparsePageFormat() = default;
  /*!
   * \brief Load all the segments into page, advance fi to end of the block.
   * \param page The data to read page into.
   * \param fi the input stream of the file
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page, dmlc::SeekStream* fi) = 0;
  /*!
   * \brief read only the segments we are interested in, advance fi to end of the block.
   * \param page The page to load the data into.
   * \param fi the input stream of the file
   * \param sorted_index_set sorted index of segments we are interested in
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page,
                    dmlc::SeekStream* fi,
                    const std::vector<bst_uint>& sorted_index_set) = 0;
  /*!
   * \brief save the data to fo, when a page was written.
   * \param fo output stream
   */
  virtual void Write(const SparsePage& page, dmlc::Stream* fo) = 0;
  /*!
   * \brief Create sparse page of format.
   * \return The created format functors.
   */
  static SparsePageFormat* Create(const std::string& name);
  /*!
   * \brief decide the format from cache prefix.
   * \return pair of row format, column format type of the cache prefix.
   */
  static std::pair<std::string, std::string> DecideFormat(const std::string& cache_prefix);
};
    }
    }
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
    namespace xgboost {
namespace tree {
    }
    }

        
        
    {} // namespace nwapi

    
    public:
  EventListener(int id,
                const base::WeakPtr<DispatcherHost>& dispatcher_host,
                const base::DictionaryValue& option);
    
    
    {}  // namespace nw
    
    // Popup menus may get squished if they open up too close to the bottom of the
// screen. This function takes the size of the screen, the size of the menu,
// an optional widget, the Y position of the mouse click, and adjusts the popup
// menu's Y position to make it fit if it's possible to do so.
// Returns the new Y position of the popup menu.
int CalculateMenuYPosition(const GdkRectangle* screen_rect,
                           const GtkRequisition* menu_req,
                           GtkWidget* widget, const int y) {
  CHECK(screen_rect);
  CHECK(menu_req);
  // If the menu would run off the bottom of the screen, and there is enough
  // screen space upwards to accommodate the menu, then pop upwards. If there
  // is a widget, then also move the anchor point to the top of the widget
  // rather than the bottom.
  const int screen_top = screen_rect->y;
  const int screen_bottom = screen_rect->y + screen_rect->height;
  const int menu_bottom = y + menu_req->height;
  int alternate_y = y - menu_req->height;
  if (widget) {
    GtkAllocation allocation;
    gtk_widget_get_allocation(widget, &allocation);
    alternate_y -= allocation.height;
  }
  if (menu_bottom >= screen_bottom && alternate_y >= screen_top)
    return alternate_y;
  return y;
}
    
      // Ignore first non-switch arg if it's not a standalone package.
  bool ignore_arg = !package->self_extract();
  for (unsigned i = 1; i < argv.size(); ++i) {
    if (ignore_arg && args.size() && argv[i] == args[0]) {
      ignore_arg = false;
      continue;
    }
    }
    
    class NwAppGetDataPathFunction : public NWSyncExtensionFunction {
 public:
  NwAppGetDataPathFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwAppGetDataPathFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.App.getDataPath', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppGetDataPathFunction);
};
    
    namespace extensions {
    }
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    // Returns the box file name corresponding to the given image_filename.
STRING BoxFileName(const STRING& image_filename);
    
    #include 'ocrpara.h'
#include 'host.h'  // For NearlyEqual()
    
    
    {}  // namespace tesseract.
    
    
    {}  // namespace tesseract.
    
    // If filename is a leveldb file, store the type of the file in *type.
// The number encoded in the filename is stored in *number.  If the
// filename was successfully parsed, returns true.  Else return false.
bool ParseFileName(const std::string& filename, uint64_t* number,
                   FileType* type);
    
      // Release a mapping returned by a previous Lookup().
  // REQUIRES: handle must not have been released yet.
  // REQUIRES: handle must have been returned by a method on *this.
  virtual void Release(Handle* handle) = 0;
    
    namespace {
    }
    
    #ifndef STORAGE_LEVELDB_TABLE_MERGER_H_
#define STORAGE_LEVELDB_TABLE_MERGER_H_
    
    static void DeleteBlock(void* arg, void* ignored) {
  delete reinterpret_cast<Block*>(arg);
}
    
    void first(void) {
  printf('first\n');  // prints
  emscripten_sleep(1);
  longjmp(buf, 1);  // jumps back to where setjmp was called - making setjmp now
                    // return 1
}
    
    void PSOutputDev::setupType3Font(GfxFont *font, GooString *psName,
				 Dict *parentResDict) {
  Dict *resDict;
  Dict *charProcs;
  Object charProc;
  Gfx *gfx;
  PDFRectangle box;
  double *m;
  GooString *buf;
  int i;
    }
    
      //----- update text state
  virtual void updateFont(GfxState *state);
  virtual void updateTextMat(GfxState *state);
  virtual void updateCharSpace(GfxState *state);
  virtual void updateRender(GfxState *state);
  virtual void updateRise(GfxState *state);
  virtual void updateWordSpace(GfxState *state);
  virtual void updateHorizScaling(GfxState *state);
  virtual void updateTextPos(GfxState *state);
  virtual void updateTextShift(GfxState *state, double shift);
    
      // Reserve room for terminating '\0'
  size--;
    
    
    {  delete gfx;
}
    
    private:
  void parse(Object *tree);
    
    PageTransition::PageTransition (Object *trans) {
  Object obj;
  Dict *dict;
    }
    
      // skip over stream data
  if (Lexer::LOOK_VALUE_NOT_CACHED != lexer->lookCharLastValueCached) {
      // take into account the fact that we've cached one value
      pos = pos - 1;
      lexer->lookCharLastValueCached = Lexer::LOOK_VALUE_NOT_CACHED;
  }
  lexer->setPos(pos + length);
    
    
    {  private:
    XRef *xref;
    PopplerCache *cache;
};
    
    #ifdef USE_GCC_PRAGMAS
#pragma implementation
#endif
    
      // if it's embedded
  Stream* embeddedStream;
    
      if (!(*xsh->newDoc)(xsh->handlerData, (XpdfDoc)docA,
		      (XpdfObject)encryptDictA, &docData)) {
    return;
  }
    
      size_t Size(unsigned node_id) {
    return elem_of_each_node_[node_id].Size();
  }
    
    /*! \brief core statistics used for tree construction */
struct  GradStats {
  typedef double GradType;
  /*! \brief sum gradient statistics */
  GradType sum_grad;
  /*! \brief sum hessian statistics */
  GradType sum_hess;
    }
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromCSREx
 * Signature: ([J[J[F)J
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromCSREx
  (JNIEnv *jenv, jclass jcls, jlongArray jindptr, jintArray jindices, jfloatArray jdata, jint jcol, jlongArray jout) {
  DMatrixHandle result;
  jlong* indptr = jenv->GetLongArrayElements(jindptr, 0);
  jint* indices = jenv->GetIntArrayElements(jindices, 0);
  jfloat* data = jenv->GetFloatArrayElements(jdata, 0);
  bst_ulong nindptr = (bst_ulong)jenv->GetArrayLength(jindptr);
  bst_ulong nelem = (bst_ulong)jenv->GetArrayLength(jdata);
  jint ret = (jint) XGDMatrixCreateFromCSREx((size_t const *)indptr, (unsigned int const *)indices, (float const *)data, nindptr, nelem, jcol, &result);
  setHandle(jenv, jout, result);
  //Release
  jenv->ReleaseLongArrayElements(jindptr, indptr, 0);
  jenv->ReleaseIntArrayElements(jindices, indices, 0);
  jenv->ReleaseFloatArrayElements(jdata, data, 0);
  return ret;
}
    
    TEST(SparsePageDMatrix, MetaInfo) {
  dmlc::TemporaryDirectory tempdir;
  const std::string tmp_file = tempdir.path + '/simple.libsvm';
  CreateSimpleTestData(tmp_file);
  xgboost::DMatrix * dmat = xgboost::DMatrix::Load(
    tmp_file + '#' + tmp_file + '.cache', false, false);
  std::cout << tmp_file << std::endl;
  EXPECT_TRUE(FileExists(tmp_file + '.cache'));
    }
    
      for (size_t i = 0; i < n_rows; ++i) {
    // Make sure that all cols are slotted in the first few rows; randomly distribute the
    // rest
    std::stringstream row_data;
    fo << i;
    size_t j = 0;
    if (rem_cols > 0) {
       for (; j < std::min(static_cast<size_t>(rem_cols), cols_per_row); ++j) {
         row_data << ' ' << (col_idx+j) << ':' << (col_idx+j+1)*10;
       }
       rem_cols -= cols_per_row;
    } else {
       // Take some random number of colums in [1, n_cols] and slot them here
       size_t ncols = dis(*gen);
       for (; j < ncols; ++j) {
         size_t fid = (col_idx+j) % n_cols;
         row_data << ' ' << fid << ':' << (fid+1)*10;
       }
    }
    col_idx += j;
    }
    
    TEST(ConfigParser, NormalizeConfigEOL) {
  // Test whether strings with NL are loaded correctly.
  dmlc::TemporaryDirectory tempdir;
  const std::string tmp_file = tempdir.path + '/my.conf';
  /* Old Mac OS uses \r for line ending */
  {
    std::string const input = 'foo\rbar\rdog\r';
    std::string const output = 'foo\nbar\ndog\n';
    {
      std::ofstream fp(
          tmp_file,
          std::ios_base::out | std::ios_base::trunc | std::ios_base::binary);
      fp << input;
    }
    {
      ConfigParser parser(tmp_file);
      auto content = parser.LoadConfigFile(tmp_file);
      content = parser.NormalizeConfigEOL(content);
      ASSERT_EQ(content, output);
    }
  }
  /* Windows uses \r\n for line ending */
  {
    std::string const input = 'foo\r\nbar\r\ndog\r\n';
    std::string const output = 'foo\n\nbar\n\ndog\n\n';
    {
      std::ofstream fp(tmp_file,
                       std::ios_base::out | std::ios_base::trunc | std::ios_base::binary);
      fp << input;
    }
    {
      ConfigParser parser(tmp_file);
      auto content = parser.LoadConfigFile(tmp_file);
      content = parser.NormalizeConfigEOL(content);
      ASSERT_EQ(content, output);
    }
  }
}
    
    // Define a customized logistic regression objective in C++.
// Implement the interface.
class MyLogistic : public ObjFunction {
 public:
  void Configure(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
  }
  void GetGradient(const HostDeviceVector<bst_float> &preds,
                   const MetaInfo &info,
                   int iter,
                   HostDeviceVector<GradientPair> *out_gpair) override {
    out_gpair->Resize(preds.Size());
    const std::vector<bst_float>& preds_h = preds.HostVector();
    std::vector<GradientPair>& out_gpair_h = out_gpair->HostVector();
    const std::vector<bst_float>& labels_h = info.labels_.HostVector();
    for (size_t i = 0; i < preds_h.size(); ++i) {
      bst_float w = info.GetWeight(i);
      // scale the negative examples!
      if (labels_h[i] == 0.0f) w *= param_.scale_neg_weight;
      // logistic transformation
      bst_float p = 1.0f / (1.0f + std::exp(-preds_h[i]));
      // this is the gradient
      bst_float grad = (p - labels_h[i]) * w;
      // this is the second order gradient
      bst_float hess = p * (1.0f - p) * w;
      out_gpair_h.at(i) = GradientPair(grad, hess);
    }
  }
  const char* DefaultEvalMetric() const override {
    return 'error';
  }
  void PredTransform(HostDeviceVector<bst_float> *io_preds) override {
    // transform margin value to probability.
    std::vector<bst_float> &preds = io_preds->HostVector();
    for (size_t i = 0; i < preds.size(); ++i) {
      preds[i] = 1.0f / (1.0f + std::exp(-preds[i]));
    }
  }
  bst_float ProbToMargin(bst_float base_score) const override {
    // transform probability to margin value
    return -std::log(1.0f / base_score - 1.0f);
  }
    }
    
    private:
    /**
     * Maintains the batch execution statistics when a response is received.
     */
    void _incBatchStats(const BatchedCommandResponse& response);
    
    TEST(CurrentOpExhaustCursorTest, CanSeeEachExhaustCursorPseudoGetMoreInCurrentOpOutput) {
    const NamespaceString testNSS{'exhaust_cursor_currentop.exhaust_cursor_currentop'};
    auto conn = connect('curop_exhaust_cursor_test');
    }
    
    
    {    mutable SimpleMutex _lock;
    OperationLatencyHistogram _globalHistogramStats;
    UsageMap _usage;
    std::set<std::string> _collDropNs;
};
    
    using namespace mongo;
    
    // Visual Studio warnings
#ifdef _MSC_VER
#pragma warning (disable: 4127) // condition expression is constant
#endif
    
    
    {    return true;
}
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2019-05-11: Inputs: Don't filter value from WM_CHAR before calling AddInputCharacter().
//  2019-01-17: Misc: Using GetForegroundWindow()+IsChild() instead of GetActiveWindow() to be compatible with windows created in a different thread or parent.
//  2019-01-17: Inputs: Added support for mouse buttons 4 and 5 via WM_XBUTTON* messages.
//  2019-01-15: Inputs: Added support for XInput gamepads (if ImGuiConfigFlags_NavEnableGamepad is set by user application).
//  2018-11-30: Misc: Setting up io.BackendPlatformName so it can be displayed in the About Window.
//  2018-06-29: Inputs: Added support for the ImGuiMouseCursor_Hand cursor.
//  2018-06-10: Inputs: Fixed handling of mouse wheel messages to support fine position messages (typically sent by track-pads).
//  2018-06-08: Misc: Extracted imgui_impl_win32.cpp/.h away from the old combined DX9/DX10/DX11/DX12 examples.
//  2018-03-20: Misc: Setup io.BackendFlags ImGuiBackendFlags_HasMouseCursors and ImGuiBackendFlags_HasSetMousePos flags + honor ImGuiConfigFlags_NoMouseCursorChange flag.
//  2018-02-20: Inputs: Added support for mouse cursors (ImGui::GetMouseCursor() value and WM_SETCURSOR message handling).
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
//  2018-02-06: Inputs: Honoring the io.WantSetMousePos by repositioning the mouse (when using navigation and ImGuiConfigFlags_NavMoveMouse is set).
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-01-20: Inputs: Added Horizontal Mouse Wheel support.
//  2018-01-08: Inputs: Added mapping for ImGuiKey_Insert.
//  2018-01-05: Inputs: Added WM_LBUTTONDBLCLK double-click handlers for window classes with the CS_DBLCLKS flag.
//  2017-10-23: Inputs: Added WM_SYSKEYDOWN / WM_SYSKEYUP handlers so e.g. the VK_MENU key can be read.
//  2017-10-23: Inputs: Using Win32 ::SetCapture/::GetCapture() to retrieve mouse positions outside the client area when dragging.
//  2016-11-12: Inputs: Only call Win32 ::SetCursor(NULL) when io.MouseDrawCursor is set.
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
    
        // Initialize OpenGL loader
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
    bool err = gl3wInit() != 0;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
    bool err = glewInit() != GLEW_OK;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
    bool err = gladLoadGL() == 0;
#else
    bool err = false; // If you use IMGUI_IMPL_OPENGL_LOADER_CUSTOM, your loader is likely to requires some form of initialization.
#endif
    if (err)
    {
        fprintf(stderr, 'Failed to initialize OpenGL loader!\n');
        return 1;
    }
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
            // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;
    }
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    
    {        // Create texture view
        D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc;
        ZeroMemory(&srvDesc, sizeof(srvDesc));
        srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
        srvDesc.Texture2D.MipLevels = desc.MipLevels;
        srvDesc.Texture2D.MostDetailedMip = 0;
        g_pd3dDevice->CreateShaderResourceView(pTexture, &srvDesc, &g_pFontTextureView);
        pTexture->Release();
    }
    
    TEST_F(DBTestCompactionFilter, SkipUntil) {
  Options options = CurrentOptions();
  options.compaction_filter_factory = std::make_shared<SkipEvenFilterFactory>();
  options.disable_auto_compactions = true;
  options.create_if_missing = true;
  DestroyAndReopen(options);
    }
    
      // Make sure unique_lock doesn't unlock mutex when it destructs
  lock.release();
    
      // Commit.  Since the snapshot was advanced, the write done outside of the
  // transaction does not prevent this transaction from Committing.
  s = txn->Commit();
  assert(s.ok());
  delete txn;
  // Clear snapshot from read options since it is no longer valid
  read_options.snapshot = nullptr;
    
    #pragma once
    
    
    {  virtual std::string GetPrintableOptions() const = 0;
};
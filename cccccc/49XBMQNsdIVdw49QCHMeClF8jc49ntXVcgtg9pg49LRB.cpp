
        
        void MyComputedHashes::ComputeHashesForContent(const std::string& contents,
                                             size_t block_size,
                                             std::vector<std::string>* hashes) {
  size_t offset = 0;
  // Even when the contents is empty, we want to output at least one hash
  // block (the hash of the empty string).
  do {
    const char* block_start = contents.data() + offset;
    DCHECK(offset <= contents.size());
    size_t bytes_to_read = std::min(contents.size() - offset, block_size);
    std::unique_ptr<crypto::SecureHash> hash(
        crypto::SecureHash::Create(crypto::SecureHash::SHA256));
    hash->Update(block_start, bytes_to_read);
    }
    }
    
    IPC_SYNC_MESSAGE_ROUTED1_1(ShellViewHostMsg_SetForceClose, bool, int)
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
    Clipboard::Clipboard(int id,
           const base::WeakPtr<DispatcherHost>& dispatcher_host,
           const base::DictionaryValue& option)
    : Base(id, dispatcher_host, option) {
}
    
    void MenuDelegate::ExecuteCommand(int command_id, int event_flags) {
  if (command_id < 0)
    return;
    }
    
    void MenuItem::CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) {
  if (method == 'GetChecked') {
    result->AppendBoolean(GetChecked());
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    #include 'base/files/file_path.h'
#include 'base/strings/string_util.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/threading/thread_restrictions.h'
#include 'base/values.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menu/menu.h'
#include 'content/nw/src/nw_base.h'
#include 'content/nw/src/nw_content.h'
#include 'content/nw/src/nw_package.h'
#include 'ui/base/accelerators/accelerator.h'
#include 'ui/gfx/image/image_skia_operations.h'
#include 'ui/events/event_constants.h'//for modifier key code
#include 'base/logging.h'
    
      // Ignore first non-switch arg if it's not a standalone package.
  bool ignore_arg = !package->self_extract();
  for (unsigned i = 1; i < argv.size(); ++i) {
    if (ignore_arg && args.size() && argv[i] == args[0]) {
      ignore_arg = false;
      continue;
    }
    }
    
    class NwAppClearCacheFunction : public NWSyncExtensionFunction, public content::BrowsingDataRemover::Observer {
 public:
  NwAppClearCacheFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
  void OnBrowsingDataRemoverDone() override;
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.clearSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardClearSyncFunction);
};
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    bool NwObjAllocateIdFunction::RunNWSync(base::ListValue* response, std::string* error) {
  response->AppendInteger(nw::ObjectManager::AllocateId());
  return true;
}
    
        void operator()(const point_read_t &get) {
        response->response = point_read_response_t();
        point_read_response_t *res =
            boost::get<point_read_response_t>(&response->response);
        rdb_get(get.key, btree, superblock, res, trace);
    }
    
      static void Print(const T& value, ::std::ostream* os) {
    // Prints the address of the value.  We use reinterpret_cast here
    // as static_cast doesn't compile when T is a function type.
    *os << '@' << reinterpret_cast<const void*>(&value) << ' ';
    }
    
    // When this flag is set with a 'host:port' string, on supported
// platforms test results are streamed to the specified port on
// the specified host machine.
GTEST_DECLARE_string_(stream_result_to);
    
      // Create the directory so that path exists. Returns true if successful or
  // if the directory already exists; returns false if unable to create the
  // directory for any reason, including if the parent directory does not
  // exist. Not named 'CreateDirectory' because that's a macro on Windows.
  bool CreateFolder() const;
    
      // Returns the fraction bits of this number.
  Bits fraction_bits() const { return kFractionBitMask & u_.bits_; }
    
    
    { private:
  String();  // Not meant to be instantiated.
};  // class String
    
    int main() {
  volatile int x = 0;
  emscripten_sleep(1);
  int jmpval = setjmp(buf);
  if (!jmpval) {
    x++;                  // should be properly restored once longjmp jumps back
    first();              // when executed, setjmp returns 1
    printf('skipped\n');  // does not print
  } else if (jmpval == 1) {  // when first() jumps back, setjmp returns 1
    printf('result: %d %d\n', x, jmpval);  // prints
    x++;
    emscripten_sleep(1);
    second();                 // when executed, setjmp returns -1
    emscripten_sleep(1);
  } else if (jmpval == -1) {  // when second() jumps back, setjmp returns -1
    printf('result: %d %d\n', x, jmpval);  // prints
  }
  emscripten_sleep(1);
  finish(x);
}

    
      // Write the Xpdf procset.
  void writeXpdfProcset();
    
      // read a token
  i = 0;
  buf[i++] = c;
  if (c == '(') {
    backslash = gFalse;
    while ((c = lookChar()) != EOF) {
      consumeChar();
      if (i < size) {
	buf[i++] = c;
      }
      if (c == '\\') {
	backslash = gTrue;
      } else if (!backslash && c == ')') {
	break;
      } else {
	backslash = gFalse;
      }
    }
  } else if (c == '<') {
    while ((c = lookChar()) != EOF) {
      consumeChar();
      if (i < size && specialChars[c] != 1) {
	buf[i++] = c;
      }
      if (c == '>') {
	break;
      }
    }
  } else if (c != '[' && c != ']') {
    while ((c = lookChar()) != EOF && !specialChars[c]) {
      consumeChar();
      if (i < size) {
	buf[i++] = c;
      }
    }
  }
  // Zero terminate token string
  buf[i] = '\0';
  // Return length of token
  *length = i;
    
      // thumb
  pageDict->lookupNF('Thumb', &thumb);
  if (!(thumb.isStream() || thumb.isNull() || thumb.isRef())) {
      error(-1, 'Page thumb object (page %d) is wrong type (%s)',
            num, thumb.getTypeName());
      thumb.initNull(); 
  }
    
      XRef *xref;			// the xref table for this PDF file
  Lexer *lexer;			// input stream
  GBool allowStreams;		// parse stream objects?
  Object buf1, buf2;		// next two tokens
  int inlineImg;		// set when inline image data is encountered
    
    class ObjectItem : public PopplerCacheItem {
  public:
    ObjectItem(Object *obj)
    {
      obj->copy(&item);
    }
    }
    
    
    {  if (!ok) {
    return gFalse;
  }
  if (authData) {
    ownerPassword = ((StandardAuthData *)authData)->ownerPassword;
    userPassword = ((StandardAuthData *)authData)->userPassword;
  } else {
    ownerPassword = NULL;
    userPassword = NULL;
  }
  if (!Decrypt::makeFileKey(encVersion, encRevision, fileKeyLength,
			    ownerKey, userKey, permFlags, fileID,
			    ownerPassword, userPassword, fileKey,
			    encryptMetadata, &ownerPasswordOk)) {
    return gFalse;
  }
  return gTrue;
}
    
    void SplashOutputDev::drawSoftMaskedImage(GfxState *state, Object *ref,
					  Stream *str, int width, int height,
					  GfxImageColorMap *colorMap,
					  GBool interpolate,
					  Stream *maskStr,
					  int maskWidth, int maskHeight,
					  GfxImageColorMap *maskColorMap,
					  GBool maskInterpolate) {
  double *ctm;
  SplashCoord mat[6];
  SplashOutImageData imgData;
  SplashOutImageData imgMaskData;
  SplashColorMode srcMode;
  SplashBitmap *maskBitmap;
  Splash *maskSplash;
  SplashColor maskColor;
  GfxGray gray;
  GfxRGB rgb;
#if SPLASH_CMYK
  GfxCMYK cmyk;
#endif
  Guchar pix;
  int n, i;
    }
    
      XRef *xref;			// xref table for current document
    
    XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(lz4i16hc)
.describe('Apply LZ4 binary data compression(16 bit index mode) for ext memory.')
.set_body([]() {
    return new SparsePageLZ4Format<uint16_t>(true);
  });
    
    /*!
 * \brief Macro to register sparse page format.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
 * .describe('Raw binary data format.')
 * .set_body([]() {
 *     return new RawFormat();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(Name)                       \
  DMLC_REGISTRY_REGISTER(::xgboost::data::SparsePageFormatReg, SparsePageFormat, Name)
    
    
    {    // By default ImGuiFreeType will use IM_ALLOC()/IM_FREE().
    // However, as FreeType does lots of allocations we provide a way for the user to redirect it to a separate memory heap if desired:
    IMGUI_API void SetAllocatorFunctions(void* (*alloc_func)(size_t sz, void* user_data), void (*free_func)(void* ptr, void* user_data), void* user_data = NULL);
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
    
        // Create Vulkan Instance
    {
        VkInstanceCreateInfo create_info = {};
        create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        create_info.enabledExtensionCount = extensions_count;
        create_info.ppEnabledExtensionNames = extensions;
    }
    
    // Main code
int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    ::RegisterClassEx(&wc);
    HWND hwnd = ::CreateWindow(wc.lpszClassName, _T('Dear ImGui DirectX11 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
    void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_hSwapChainWaitableObject != NULL) { CloseHandle(g_hSwapChainWaitableObject); }
    for (UINT i = 0; i < NUM_FRAMES_IN_FLIGHT; i++)
        if (g_frameContext[i].CommandAllocator) { g_frameContext[i].CommandAllocator->Release(); g_frameContext[i].CommandAllocator = NULL; }
    if (g_pd3dCommandQueue) { g_pd3dCommandQueue->Release(); g_pd3dCommandQueue = NULL; }
    if (g_pd3dCommandList) { g_pd3dCommandList->Release(); g_pd3dCommandList = NULL; }
    if (g_pd3dRtvDescHeap) { g_pd3dRtvDescHeap->Release(); g_pd3dRtvDescHeap = NULL; }
    if (g_pd3dSrvDescHeap) { g_pd3dSrvDescHeap->Release(); g_pd3dSrvDescHeap = NULL; }
    if (g_fence) { g_fence->Release(); g_fence = NULL; }
    if (g_fenceEvent) { CloseHandle(g_fenceEvent); g_fenceEvent = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2019-05-29: DirectX9: Added support for large mesh (64K+ vertices), enable ImGuiBackendFlags_RendererHasVtxOffset flag.
//  2019-04-30: DirectX9: Added support for special ImDrawCallback_ResetRenderState callback to reset render state.
//  2019-03-29: Misc: Fixed erroneous assert in ImGui_ImplDX9_InvalidateDeviceObjects().
//  2019-01-16: Misc: Disabled fog before drawing UI's. Fixes issue #2288.
//  2018-11-30: Misc: Setting up io.BackendRendererName so it can be displayed in the About Window.
//  2018-06-08: Misc: Extracted imgui_impl_dx9.cpp/.h away from the old combined DX9+Win32 example.
//  2018-06-08: DirectX9: Use draw_data->DisplayPos and draw_data->DisplaySize to setup projection matrix and clipping rectangle.
//  2018-05-07: Render: Saving/restoring Transform because they don't seem to be included in the StateBlock. Setting shading mode to Gouraud.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplDX9_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
    
    #include 'DHTNode.h'
#include 'DHTBucket.h'
#include 'DHTBucketTree.h'
#include 'DHTTaskQueue.h'
#include 'DHTTaskFactory.h'
#include 'DHTTask.h'
#include 'util.h'
#include 'LogFactory.h'
#include 'Logger.h'
#include 'fmt.h'
    
    #include <vector>
#include <string>
#include <memory>
    
    #endif // D_DHT_TASK_H

    
    #include <algorithm>
    
      void addTask(const std::shared_ptr<DHTTask>& task) { queue_.push_back(task); }
    
    class DHTTaskFactoryImpl : public DHTTaskFactory {
private:
  std::shared_ptr<DHTNode> localNode_;
    }
    
      virtual ~DHTTaskQueueImpl();
    
      std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port,
                            const unsigned char* secret) const;
    
      // returns 'unknown'
  virtual const std::string& getMessageType() const CXX11_OVERRIDE;
    
      template <typename OutputIterator>
  void findAll(OutputIterator out, const std::string& hostname,
               uint16_t port) const
  {
    auto target = std::make_shared<CacheEntry>(hostname, port);
    auto i = entries_.find(target);
    if (i != entries_.end()) {
      (*i)->getAllGoodAddrs(out);
    }
  }
    
    template <class ConfigRecordType, typename ElemType>
bool TryGetNetworkFactory(const ConfigRecordType& config, function<ComputationNetworkPtr(DEVICEID_TYPE)>& createNetworkFn)
{
    DEVICEID_TYPE deviceId = DeviceFromConfig(config);
    }
    
    // Note: while ComputationNode and CompuationNetwork are (supposed to be) independent of ElemType, it is OK to keep this class dependent.
template <class ElemType>
ComputationNetworkPtr SimpleNetworkBuilder<ElemType>::BuildRNNFromDescription()
{
    ComputationNetworkBuilder<ElemType> builder(*m_net);
    if (m_net->GetTotalNumberOfNodes() < 1) // not built yet
    {
        unsigned long randomSeed = 1;
    }
    }
    
        stringargvector m_nonLinearFunctions;
    
    int wmain(int argc, wchar_t* argv[]) // wmain wrapper that reports Win32 exceptions
{
    set_terminate(TerminateThis);    // insert a termination handler to ensure stderr gets flushed before actually terminating
    }
    
    #include 'Basics.h'
#include 'ComputationNode.h'
#include 'ComputationNetwork.h'
#include 'TrainingNodes.h'      // for NCEEvalMode
#include 'ConvolutionalNodes.h' // for PoolKind
#include 'ScriptableObjects.h'
#include 'TensorShape.h'
#include <string>
    
        public:
        BasicModelAveragingSGD(const MPIWrapperPtr& pMPI, size_t reportFreq, DEVICEID_TYPE devID)
            : Base(pMPI, reportFreq, devID)
        {
            fprintf(stderr, 'Parallel training (%d workers) using ModelAveraging\n',(int)m_pMPI->NumNodesInUse());
        }
    
    template std::shared_ptr<IDistGradAggregator<float>> GetSimpleDistGradAggregator<float>(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce);
    
        // Do the same via ValueRefs
    ValueRefs<float> inputRefs(1);
    inputRefs[0].m_buffer.InitFrom(inputBuffer[0].m_buffer);
    inputRefs[0].m_colIndices.InitFrom(inputBuffer[0].m_colIndices);
    inputRefs[0].m_indices.InitFrom(inputBuffer[0].m_indices);
    ValueRefs<float> outputRefs(1);
    std::vector<float> output(1);
    outputRefs[0].m_buffer.InitFrom(output);
    eval->ForwardPass(inputRefs, outputRefs);
    BOOST_CHECK_EQUAL_COLLECTIONS(output.begin(), output.end(), expected.begin(), expected.end());
    
            /**
         * Add your information about what your class does and their inputs/outputs.
         * @param output is the modified cv::Mat.
         * @param input is the input cv::Mat.
         * @return If it is not void, add returning information here.
         */
        void doSomething(cv::Mat& output, const cv::Mat& input);
    
            Point<T> operator*(const T value) const;
    
    namespace op
{
    template<typename T>
    struct Rectangle
    {
        T x;
        T y;
        T width;
        T height;
    }
    }
    
        /*!
     * Create a device command queue for a specified device in the passed context.
     */
    DeviceCommandQueue(
        const Context& context,
        const Device& device,
        DeviceQueueProperties properties = DeviceQueueProperties::None,
        cl_int* err = NULL)
    {
        cl_int error;
    }
    
        template<typename T>
    Rectangle<T> Rectangle<T>::operator/(const T value) const
    {
        try
        {
            return Rectangle<T>{T(x / value), T(y / value), T(width / value), T(height / value)};
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return Rectangle<T>{};
        }
    }
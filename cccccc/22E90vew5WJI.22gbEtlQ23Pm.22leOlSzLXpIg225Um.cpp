class GlobalShortcut : public extensions::GlobalShortcutListener::Observer,
                       public mate::TrackableObject<GlobalShortcut> {
 public:
  static mate::Handle<GlobalShortcut> Create(v8::Isolate* isolate);
    }
    
    // Relaunches the application using the helper application associated with the
// currently running instance of Chrome in the parent browser process as the
// executable for the relauncher process. |args| is an argv-style vector of
// command line arguments of the form normally passed to execv. args[0] is
// also the path to the relaunched process. Because the relauncher process
// will ultimately launch the relaunched process via Launch Services, args[0]
// may be either a pathname to an executable file or a pathname to an .app
// bundle directory. The caller should exit soon after RelaunchApp returns
// successfully. Returns true on success, although some failures can occur
// after this function returns true if, for example, they occur within the
// relauncher process. Returns false when the relaunch definitely failed.
bool RelaunchApp(const StringVector& argv);
    
    
    {}  // namespace atom
    
      std::unique_ptr<base::ListValue> preferences_;
    
    #endif  // CHROME_BROWSER_CHROME_PROCESS_FINDER_WIN_H_

    
      // Stop listening for the given |accelerator|, does nothing if shortcut
  // handling is suspended.
  void UnregisterAccelerator(const ui::Accelerator& accelerator,
                             Observer* observer);
    
    namespace printing {
    }
    
    void TtsPlatformImpl::WillSpeakUtteranceWithVoice(const Utterance* utterance,
                                                  const VoiceData& voice_data) {
}
    
    
    {}  // namespace chrome
    
    // A handful of resource-like constants related to the Chrome application.
    
    struct Pix;
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'strngs.h'
    
      // Indexes the given array of features to a vector of sorted indices.
  void IndexAndSortFeatures(const INT_FEATURE_STRUCT* features,
                            int num_features,
                            GenericVector<int>* sorted_features) const {
    feature_space_.IndexAndSortFeatures(features, num_features,
                                        sorted_features);
  }
  // Maps the given array of index/sparse features to an array of map/compact
  // features.
  // Assumes the input is sorted. The output indices are sorted and uniqued.
  // Returns the number of 'missed' features, being features that
  // don't map to the compact feature space.
  int MapIndexedFeatures(const GenericVector<int>& index_features,
                         GenericVector<int>* map_features) const {
    return feature_map_.MapFeatures(index_features, map_features);
  }
    
    // Sets the given n-vector vec to 0.
template <typename T>
inline void ZeroVector(int n, T* vec) {
  memset(vec, 0, n * sizeof(*vec));
}
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
      static Slice Contents(const WriteBatch* batch) {
    return Slice(batch->rep_);
  }
    
      memset(buf, 0, sizeof(buf));
  ASSERT_EQ(0x8a9136aa, Value(buf, sizeof(buf)));
    
    class HASH { };
    
    namespace leveldb {
    }
    
    TEST(AutoCompactTest, ReadHalf) {
  DoReads(kCount/2);
}
    
    TEST(FormatTest, InternalKeyShortSeparator) {
  // When user keys are same
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 99, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 101, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 100, kTypeDeletion)));
    }
    
    #include <stdint.h>
#include 'db/log_format.h'
#include 'leveldb/slice.h'
#include 'leveldb/status.h'
    
    
    {  // No copying allowed
  BlockBuilder(const BlockBuilder&);
  void operator=(const BlockBuilder&);
};
    
    /*!
 * \brief in-memory storage unit of sparse batch
 */
class SparsePage {
 public:
  std::vector<size_t> offset;
  /*! \brief the data of the segments */
  std::vector<Entry> data;
    }
    
    
    {
    {}  // namespace data
}  // namespace xgboost

    
    
    {// Enable LOG(CONSOLE) for print messages to console.
#define LOG_CONSOLE ::xgboost::ConsoleLogger()
// Enable LOG(TRACKER) for print messages to tracker
#define LOG_TRACKER ::xgboost::TrackerLogger()
}  // namespace xgboost.
#endif  // XGBOOST_LOGGING_H_

    
    XGB_DLL int XGBoosterEvalOneIter(BoosterHandle handle,
                                 int iter,
                                 DMatrixHandle dmats[],
                                 const char* evnames[],
                                 xgboost::bst_ulong len,
                                 const char** out_str) {
  std::string& eval_str = XGBAPIThreadLocalStore::Get()->ret_str;
  API_BEGIN();
  CHECK_HANDLE();
  auto* bst = static_cast<Booster*>(handle);
  std::vector<DMatrix*> data_sets;
  std::vector<std::string> data_names;
    }
    
      /**
   * \brief Updates linear model given gradients.
   *
   * \param in_gpair            The gradient pair statistics of the data.
   * \param data                Input data matrix.
   * \param model               Model to be updated.
   * \param sum_instance_weight The sum instance weights, used to normalise l1/l2 penalty.
   */
    
        if      (numlit ==     0)    ;
    else if (numlit <=    32)    stb_out (0x000020 + numlit-1);
    else if (numlit <=  2048)    stb_out2(0x000800 + numlit-1);
    else /*  numlit <= 65536) */ stb_out3(0x070000 + numlit-1);
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}
    
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
    
        // FreeType glyph rasterizer.
    // NB: No ctor/dtor, explicitly call Init()/Shutdown()
    struct FreeTypeFont
    {
        bool        Init(const ImFontConfig& cfg, unsigned int extra_user_flags);   // Initialize from an external data buffer. Doesn't copy data, and you must ensure it stays valid up to this object lifetime.
        void        Shutdown();
        void        SetPixelHeight(int pixel_height);                               // Change font pixel size. All following calls to RasterizeGlyph() will use this size
    }
    
            VkSubmitInfo end_info = {};
        end_info.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
        end_info.commandBufferCount = 1;
        end_info.pCommandBuffers = &command_buffer;
        err = vkEndCommandBuffer(command_buffer);
        check_vk_result(err);
        err = vkQueueSubmit(g_Queue, 1, &end_info, VK_NULL_HANDLE);
        check_vk_result(err);
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'CIwTexture*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
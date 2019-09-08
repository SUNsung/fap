
        
            for (int i = 0; i <= MAX_CODE_LEN; ++i)
    {
        if (base[i] != 0xffffffffffffffffULL)
        {
            _ljBase[i] = base[i] << (64 - i);
        }
        else
        {
            //
            // Unused code length - insert dummy values
            //
    }
    }
    
    template <>
IMF_EXPORT
void FloatVectorAttribute::writeValueTo
    (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream &, int) const;
    
    
void
FrameBuffer::insert (const char name[], const Slice &slice)
{
    if (name[0] == 0)
    {
        THROW (IEX_NAMESPACE::ArgExc,
               'Frame buffer slice name cannot be an empty string.');
    }
    }
    
    
    //----------------------------------------------------------
    // Default value, used to fill the slice when a file without
    // a channel that corresponds to this slice is read.
    //----------------------------------------------------------
    
    
    {    if (!supportsFlags (getFlags (version)))
    {
        THROW (IEX_NAMESPACE::InputExc, 'The file format version number's flag field '
                              'contains unrecognized flags.');
    }
}
    
    #include 'ImfVersion.h'
#include 'ImfIO.h'
#include 'ImfXdr.h'
#include 'ImfHeader.h'
#include 'ImfNamespace.h'
#include 'ImfExport.h'
    
    IPC_SYNC_MESSAGE_ROUTED0_1(ShellViewHostMsg_AllocateId, int)
    
    #include <string>
    
    
#include 'content/nw/src/api/event/event.h'
#include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/gfx/screen.h'
    
    namespace nwapi {
    }
    
    
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
    
    NwMenuModel::NwMenuModel(Delegate* delegate) : SimpleMenuModel(delegate) {
}
    
    #include 'base/base64.h'
#include 'base/logging.h'
#include 'base/strings/stringprintf.h'
#include 'base/strings/string_util.h'
#include 'base/strings/utf_string_conversions.h'
#include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/nw_clipboard.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
#include 'ui/base/clipboard/clipboard.h'
#include 'ui/base/clipboard/clipboard_constants.h'
#include 'ui/base/clipboard/scoped_clipboard_writer.h'
#include 'ui/gfx/codec/jpeg_codec.h'
#include 'ui/gfx/codec/png_codec.h'
#include 'third_party/skia/include/core/SkBitmap.h'
    
    namespace extensions {
    }
    
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
    
    // ReadNextBox factors out the code to interpret a line of a box
// file so that applybox and unicharset_extractor interpret the same way.
// This function returns the next valid box file utf8 string and coords
// and returns true, or false on eof (and closes the file).
// It ignores the utf8 file signature ByteOrderMark (U+FEFF=EF BB BF), checks
// for valid utf-8 and allows space or tab between fields.
// utf8_str is set with the unichar string, and bounding box with the box.
// If there are page numbers in the file, it reads them all.
bool ReadNextBox(int *line_number, FILE* box_file,
                 STRING* utf8_str, TBOX* bounding_box);
// As ReadNextBox above, but get a specific page number. (0-based)
// Use -1 to read any page number. Files without page number all
// read as if they are page 0.
bool ReadNextBox(int target_page, int *line_number, FILE* box_file,
                 STRING* utf8_str, TBOX* bounding_box);
    
      // Fills in the x-height range accepted by the given unichar_id in blob
  // coordinates, given its bounding box in the usual baseline-normalized
  // coordinates, with some initial crude x-height estimate (such as word
  // size) and this denoting the transformation that was used.
  // Also returns the amount the character must have shifted up or down.
  void XHeightRange(int unichar_id, const UNICHARSET& unicharset,
                    const TBOX& bbox,
                    float* min_xht,
                    float* max_xht,
                    float* yshift) const;
    
    This module may look unnecessarily verbose, but here's the philosophy...
    
    class DENORM;
    
    #include 'tessclassifier.h'
    
      // If we manage the given dawg, decrement its count,
  // and possibly delete it if the count reaches zero.
  // If dawg is unknown to us, return false.
  bool FreeDawg(Dawg *dawg) {
    return dawgs_.Free(dawg);
  }
    
    void StartCmder(std::wstring  path = L'', bool is_single_mode = false, std::wstring taskName = L'', std::wstring cfgRoot = L'', bool use_user_cfg = true, std::wstring conemu_args = L'')
{
#if USE_TASKBAR_API
	wchar_t appId[MAX_PATH] = { 0 };
#endif
	wchar_t exeDir[MAX_PATH] = { 0 };
	wchar_t icoPath[MAX_PATH] = { 0 };
	wchar_t cfgPath[MAX_PATH] = { 0 };
	wchar_t backupCfgPath[MAX_PATH] = { 0 };
	wchar_t cpuCfgPath[MAX_PATH] = { 0 };
	wchar_t userCfgPath[MAX_PATH] = { 0 };
	wchar_t defaultCfgPath[MAX_PATH] = { 0 };
	wchar_t conEmuPath[MAX_PATH] = { 0 };
	wchar_t configDirPath[MAX_PATH] = { 0 };
	wchar_t userConfigDirPath[MAX_PATH] = { 0 };
	wchar_t userBinDirPath[MAX_PATH] = { 0 };
	wchar_t userProfiledDirPath[MAX_PATH] = { 0 };
	wchar_t userProfilePath[MAX_PATH] = { 0 };
	wchar_t legacyUserProfilePath[MAX_PATH] = { 0 };
	wchar_t userAliasesPath[MAX_PATH] = { 0 };
	wchar_t legacyUserAliasesPath[MAX_PATH] = { 0 };
	wchar_t args[MAX_PATH * 2 + 256] = { 0 };
	wchar_t userConEmuCfgPath[MAX_PATH] = { 0 };
    }
    
                    // Get the system calendar type
                // Note: This function returns 0 on failure.
                // We'll ignore the failure in that case and the CalendarIdentifier would get set to GregorianCalendar.
                CALID calId;
                ::GetLocaleInfoEx(m_resolvedName.c_str(), LOCALE_ICALENDARTYPE | LOCALE_RETURN_NUMBER, reinterpret_cast<PWSTR>(&calId), sizeof(calId));
    
        Rational& Rational::operator<<=(Rational const& rhs)
    {
        PRAT lhsRat = this->ToPRAT();
        PRAT rhsRat = rhs.ToPRAT();
    }
    
    using namespace CalculatorApp::Common::Automation;
using namespace Windows::UI::Xaml::Automation;
using namespace Windows::UI::Xaml::Automation::Peers;
using namespace Windows::UI::Xaml::Controls;
    
    // Implementation of the NarratorNotifier class.
    
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
    
        // Check for WSI support
    VkBool32 res;
    vkGetPhysicalDeviceSurfaceSupportKHR(g_PhysicalDevice, g_QueueFamily, wd->Surface, &res);
    if (res != VK_TRUE)
    {
        fprintf(stderr, 'Error no WSI support on physical device 0\n');
        exit(-1);
    }
    
        // For an Emscripten build we are disabling file-system access, so let's not attempt to do a fopen() of the imgui.ini file.
    // You may manually call LoadIniSettingsFromMemory() to load settings from your own storage.
    io.IniFilename = NULL;
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'LPDIRECT3DTEXTURE9' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Renderer: Support for large meshes (64k+ vertices) with 16-bits indices.
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
    #else // !USE_NCCL
namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    // -----------------------------------------------------------------------
// CustomConfigRecord -- helper for implementors of IConfigRecord
// Custom classes that implement IConfigRecord can derive from this to make
// it easier to manage the simulated config record.
// -----------------------------------------------------------------------
    
        // Destructive copy that steals ownership if the content, like std::move()
    // Note: For some reason the VC++ compiler does not generate the 
    // move assignment and we have to do this ourselves
    void MoveFrom(MBLayoutPtr other)
    {
        m_numTimeSteps = other->m_numTimeSteps;
        m_numParallelSequences = other->m_numParallelSequences;
        m_sequences = std::move(other->m_sequences);
        m_numFramesDeclared = other->m_numFramesDeclared;
        m_numGapFrames = other->m_numGapFrames;
    }
    
            // Process all the config files in order, and then add on the inital config,
        // which will override run and load if they exist
        std::string fileContents = m_script.ReadConfigFiles(filePaths);
        fileContents += m_initialConfig;
    
    // copy constructor, creates a new disconnected copy of this node
// doesn't copy everything, so use for macro expansion only (it's private)
// copyMe - node to copy
template <typename ElemType>
NDLNode<ElemType>::NDLNode(const NDLNode<ElemType>& copyMe)
{
    m_name        = copyMe.m_name;        // value on the left of the equals
    m_value       = copyMe.m_value;       // value on the right of the equals (CN node name, or value)
    m_parent      = copyMe.m_parent;      // parent script
    m_type        = copyMe.m_type;        // type of node
    m_paramString = copyMe.m_paramString; // parameter of a function/array
    m_paramMacro  = copyMe.m_paramMacro;  // parameter of a macro (the variables used in the macro definition)
    // don't copy over m_parameters, they will be reparsed after the copy
    }
    
        // EvaluateParameters - Evaluate the parameters of a call
    // node - NDLNode we are evaluating parameters for
    // baseName - baseName for the current node
    // nodeParamStart - starting parameter that contains a node
    // nodeParamCount - ending parameter that contains a node
    // pass - NDL pass we are evaluating
    // returns: vector of eval pointers, which are ComputationNodePtr for CNEvaluator
    virtual std::vector<void*> EvaluateParameters(NDLNode<ElemType>* node, const wstring& baseName, int nodeParamStart, int nodeParamCount, const NDLPass pass) = 0;
    
    // -----------------------------------------------------------------------
// register ComputationNode with the ScriptableObject system
// -----------------------------------------------------------------------
    
    
    {        // run from BrainScript
        return wmainWithBS(argc, argv);
    }
    catch (const ScriptableObjects::ScriptingException& err)
    {
        fprintf(stderr, '\n');
        err.PrintError(ProgressTracing::GetTimeStampPrefix() + L'EXCEPTION occurred.');
    }
    catch (const IExceptionWithCallStackBase& err)
    {
        fprintf(stderr, '\n');
        fprintf(stderr, '%s', err.CallStack());
        LOGPRINTF(stderr, 'EXCEPTION occurred: %s\n', dynamic_cast<const std::exception&>(err).what());
    }
    catch (const std::exception& err)
    {
        fprintf(stderr, '\n');
        LOGPRINTF(stderr, 'EXCEPTION occurred: %s\n', err.what());
    }
    catch (...)
    {
        fprintf(stderr, '\n');
        LOGPRINTF(stderr, 'Unknown ERROR occurred.\n');
    }
    
        // sparse matrix size is optionally specified
    // ComputationNodePtr CreateSparseLearnableParameter(const std::wstring & paramName, const size_t rows, const size_t cols, const size_t size = 0);
    ComputationNodePtr CreateInputNode(const std::wstring& inputName, const size_t rows, const wstring& dynamicAxisName = L'');
    ComputationNodePtr CreateSparseInputNode(const std::wstring& inputName, const size_t rows, const wstring& dynamicAxisName = L'');
    shared_ptr<ComputationNode<ElemType>> CreateInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName = L'')
    {
        return this->template TypedCreateInputNode<ElemType>(inputName, sampleLayout, dynamicAxisName);
    }
    template<class ValueType>
    shared_ptr<ComputationNode<ValueType>> TypedCreateInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName);
    shared_ptr<ComputationNode<ElemType>> CreateSparseInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName = L'')
    {
        return this->template TypedCreateSparseInputNode<ElemType>(inputName, sampleLayout, dynamicAxisName);
    }
    template<class ValueType>
    shared_ptr<ComputationNode<ValueType>> TypedCreateSparseInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName);
    ComputationNodePtr CreateConvolutionNode(const std::wstring& nodeName, const TensorShape& kernelShape, const TensorShape& mapCount, const TensorShape& strideShape,
                                             const std::vector<bool>& sharing, const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad,
                                             bool transpose, const TensorShape& outputShape, ImageLayoutKind imageLayout, size_t maxTempMemSizeInSamples);
    ComputationNodePtr CreateConvolutionNode(const std::wstring& nodeName, const size_t kernelWidth, const size_t kernelHeight, const size_t outputChannels, 
                                             const size_t horizontalSubsample, const size_t verticalSubsample, 
                                             ImageLayoutKind imageLayoutKind, const bool zeroPadding = false, const size_t maxTempMemSizeInSamples = 0);
    ComputationNodePtr CreatePoolingNode(const std::wstring& nodeName, PoolKind poolKind, const TensorShape& kernelShape, const TensorShape& strideShape,
                                         const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad, bool ceilOutDim,
                                         const bool includePad, ImageLayoutKind imageLayout);
    ComputationNodePtr CreateMaxPoolingNode(const std::wstring& nodeName, const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind);
    ComputationNodePtr CreateAveragePoolingNode(const std::wstring& nodeName, const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind);
    ComputationNodePtr CreateROIPoolingNode(const std::wstring& nodeName, PoolKind poolKind, const TensorShape& roiOutputShape, double spatialScale);
    ComputationNodePtr CreateReconcileDynamicAxisNode(const std::wstring& nodeName);
    // this is the catch-all for all cases not covered as special cases above
    // Unlike the specialized ones above, this one creates nodes by type given as a string.
    ComputationNodePtr CreateComputationNode(const std::wstring& nodeType, const std::wstring& nodeName);
    // The following functions create nodes and link them to the network and their inputs.
    // TODO: Do we need both this set and the one above that does not add inputs? Can they share more code?
    ComputationNodePtr BatchNormalization(const ComputationNodePtr input, const ComputationNodePtr scale, const ComputationNodePtr bias,
                                          const ComputationNodePtr runMean, const ComputationNodePtr runVariance, const ComputationNodePtr runSampleCount,
                                          bool spatial = false, double normalizationTimeConstant = 0, double blendTimeConstant = 0, double epsilon = 1e-5, bool useCntkEngine = true,
                                          bool disableRegularization = false, ImageLayoutKind imageLayoutKind = ImageLayoutKind::CHW, const std::wstring nodeName = L'');
    ComputationNodePtr Convolution(const ComputationNodePtr weight,
                                   const ComputationNodePtr inputValues,
                                   const size_t kernelWidth, const size_t kernelHeight, const size_t outputChannels,
                                   const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind,
                                   const bool zeroPadding = false, const size_t maxTempMemSizeInSamples = 0,
                                   const std::wstring nodeName = L'');
    ComputationNodePtr Convolution(const ComputationNodePtr weight,
                                   const ComputationNodePtr inputValues,
                                   const TensorShape& kernelShape, const TensorShape& mapCount, const TensorShape& strideShape,
                                   const std::vector<bool>& sharing, const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad,
                                   bool transpose, const TensorShape& outputShape, ImageLayoutKind imageLayout, size_t maxTempMemSizeInSamples,
                                   const std::wstring nodeName = L'');
    ComputationNodePtr Pooling(const ComputationNodePtr inputValues, 
                               PoolKind poolKind, const TensorShape& kernelShape, const TensorShape& strideShape,
                               const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad, bool ceilOutDim, const bool includePad,
                               ImageLayoutKind imageLayout,
                               const std::wstring nodeName = L'');
    ComputationNodePtr MaxUnpooling(const ComputationNodePtr unpoolInputValues,
                                    const ComputationNodePtr poolInputValues,
                                    const TensorShape& kernelShape, const TensorShape& strideShape,
                                    const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad,
                                    ImageLayoutKind imageLayout,
                                    const std::wstring nodeName = L'');
    ComputationNodePtr MaxPooling(const ComputationNodePtr inputValues,
                                  const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind,
                                  const std::wstring nodeName = L'');
    ComputationNodePtr AveragePooling(const ComputationNodePtr inputValues,
                                      const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind,
                                      const std::wstring nodeName = L'');
    ComputationNodePtr ROIPooling(const ComputationNodePtr inputValues, const ComputationNodePtr inputROIs, PoolKind poolKind, const TensorShape& roiOutputShape, double spatialScale, const std::wstring nodeName = L'');
    ComputationNodePtr ReconcileDynamicAxis(const ComputationNodePtr dataInput, const ComputationNodePtr layoutInput, const std::wstring nodeName = L'');
    
        virtual void ComputeTransforms() override
    {
        if (m_transforms[supportedInputIndex].m_axisTransforms.empty())
        {
            // m_axisTransforms defaults to identity.
            m_transforms[supportedInputIndex].m_axisTransforms.resize(2);
        }
    }
    
    template ASGDHelper<double>* NewASGDHelper<double>(
    const std::list<ComputationNodeBasePtr> & learnableNodes,
    size_t nodeNumRanks,
    bool useAsyncBuffer,
    bool isSimulatedModelAveragingSGD,
    AdjustLearningRateAtBeginning adjusttype,
    double adjustCoef,
    size_t adjustPerMinibatches,
    int traceLevel,
    int syncPerfStats); 
    
        inputBuffer[0].m_colIndices = { 0, 2, 2, 5 };
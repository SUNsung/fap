
    {}  // namespace atom
    
    namespace atom {
    }
    
      // Sent when the applications in the NTP app launcher have been reordered.
  // The details, if not NoDetails, is the std::string ID of the extension that
  // was moved.
  NOTIFICATION_EXTENSION_LAUNCHER_REORDERED,
    
    void TtsPlatformImpl::set_error(const std::string& error) {
  error_ = error;
}
    
    namespace chrome {
    }
    
    // filenames
extern const base::FilePath::CharType kCacheDirname[];
extern const base::FilePath::CharType kChannelIDFilename[];
extern const base::FilePath::CharType kCookieFilename[];
extern const base::FilePath::CharType kCRLSetFilename[];
extern const base::FilePath::CharType kCustomDictionaryFileName[];
extern const base::FilePath::CharType kExtensionActivityLogFilename[];
extern const base::FilePath::CharType kExtensionsCookieFilename[];
extern const base::FilePath::CharType kFirstRunSentinel[];
extern const base::FilePath::CharType kGCMStoreDirname[];
extern const base::FilePath::CharType kLocalStateFilename[];
extern const base::FilePath::CharType kLocalStorePoolName[];
extern const base::FilePath::CharType kMediaCacheDirname[];
extern const base::FilePath::CharType kNetworkPersistentStateFilename[];
extern const base::FilePath::CharType kOfflinePageArchviesDirname[];
extern const base::FilePath::CharType kOfflinePageMetadataDirname[];
extern const base::FilePath::CharType kPreferencesFilename[];
extern const base::FilePath::CharType kProtectedPreferencesFilenameDeprecated[];
extern const base::FilePath::CharType kReadmeFilename[];
extern const base::FilePath::CharType kResetPromptMementoFilename[];
extern const base::FilePath::CharType kSafeBrowsingBaseFilename[];
extern const base::FilePath::CharType kSecurePreferencesFilename[];
extern const base::FilePath::CharType kServiceStateFileName[];
extern const base::FilePath::CharType kSingletonCookieFilename[];
extern const base::FilePath::CharType kSingletonLockFilename[];
extern const base::FilePath::CharType kSingletonSocketFilename[];
extern const base::FilePath::CharType kSupervisedUserSettingsFilename[];
extern const base::FilePath::CharType kThemePackFilename[];
extern const base::FilePath::CharType kThemePackMaterialDesignFilename[];
extern const base::FilePath::CharType kWebAppDirname[];
    
    // Convert color to RGB hex value like '#ABCDEF'
std::string ToRGBHex(SkColor color);
    
    
    {}  // namespace nwapi
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    
#ifndef CONTENT_NW_SRC_API_EVENT_EVENT_H_
#define CONTENT_NW_SRC_API_EVENT_EVENT_H_
    
    #include 'ui/base/models/simple_menu_model.h'
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.create', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCreateFunction);
};
    
    HINSTANCE g_hInst = NULL;
D3D_DRIVER_TYPE g_driverType = D3D_DRIVER_TYPE_NULL;
D3D_FEATURE_LEVEL g_featureLevel = D3D_FEATURE_LEVEL_11_0;
ID3D11Device* g_pd3dDevice = NULL;
ID3D11DeviceContext* g_pImmediateContext = NULL;
IDXGISwapChain* g_pSwapChain = NULL;
    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
    #ifdef HAVE_CLAMDFFT
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
        HHVM_FE(fb_setprofile);
    HHVM_FE(xhprof_frame_begin);
    HHVM_FE(xhprof_frame_end);
    HHVM_FE(xhprof_enable);
    HHVM_FE(xhprof_disable);
    HHVM_FE(xhprof_network_enable);
    HHVM_FE(xhprof_network_disable);
    HHVM_FE(xhprof_sample_enable);
    HHVM_FE(xhprof_sample_disable);
    
      /**
   * Query if a task is finished. This is non-blocking and can be called as
   * many times as desired.
   */
  static int64_t TaskStatus(const Resource& task);
    
    struct Block;
struct SSATmp;
    
    /*
 * If we have non-conservative scanners, we must treat all unknown
 * type-index allocations in the heap as roots. Why? The generated
 * scanners will only report a pointer if it knows the pointer can point
 * to an object on the request heap. It does this by tracking all types
 * which are allocated via the allocation functions via the type-index
 * mechanism. If an allocation has an unknown type-index, then by definition
 * we don't know which type it contains, and therefore the auto generated
 * scanners will never report a pointer to such a type.
 *
 * The only good way to solve this is to treat such allocations as roots
 * and conservative scan them. If we're conservative scanning everything,
 * we need to take no special action, as the above problem only applies to
 * auto generated scanners.
 */
    
            // get some additional information when doing sequence training
        // TODO: This should not need to be called in case of wasDataRead == false, since in that case, returned values are invalid.
        if ((criterionNode != nullptr) && (criterionNode->OperationName() == L'SequenceWithSoftmax'))
        {
            auto node = dynamic_pointer_cast<SequenceWithSoftmaxNode<ElemType>>(criterionNode);
            auto latticeinput = node->getLatticePtr();
            auto uids = node->getuidprt();
            auto boundaries = node->getboundaryprt();
            auto extrauttmap = node->getextrauttmap();
    }
    
            // inject additional items into the source code
        // We support two ways of specifying the network in BrainScript:
        //  - BrainScriptNetworkBuilder = ( any BS expression that evaluates to a ComputationNetwork )
        //  - BrainScriptNetworkBuilder = { constructor parameters for a ComputationNetwork }
        // For back-compat, [ ] is allowed and means the same as { }
        if (sourceOfNetwork[0] == '{' || sourceOfNetwork[0] == '[') // if { } form then we turn it into ComputationNetwork by constructing a ComputationNetwork from it
            sourceOfNetwork = L'new ComputationNetwork ' + sourceOfNetwork;
        let sourceOfBS = msra::strfun::wstrprintf(L'include \'cntk.core.bs\'\n' // include our core lib. Note: Using lowercase here to match the Linux name of the CNTK exe.
            L'deviceId = %d\n'            // deviceId as passed in
            L'traceLevel = %d\n'
            L'precision = '%ls'\n'        // 'float' or 'double'
            L'network = %ls',             // source code of expression that evaluates to a ComputationNetwork
            (int)deviceId, traceLevel, ElemTypeName<ElemType>(), sourceOfNetwork.c_str());
        let expr = BS::ParseConfigDictFromString(sourceOfBS, L'BrainScriptNetworkBuilder', move(includePaths));
    }
    
    
    {    // SaveMapping - save a map into the file
    // saveId - name of the section to save into (section:subsection format)
    // labelMapping - map we are saving to the file
    virtual void SaveMapping(std::wstring saveId, const std::map<LabelIdType, LabelType>& labelMapping);
    virtual bool SupportMultiUtterances() const 
    {
        return false;
    };
};
    
    
    {
    {
    {    // please add anything else you might need HERE
};
};
};

    
    void SimpleCSRSource::CopyFrom(DMatrix* src) {
  this->Clear();
  this->info = src->Info();
  auto iter = src->RowIterator();
  iter->BeforeFirst();
  while (iter->Next()) {
    const auto &batch = iter->Value();
    page_.Push(batch);
  }
}
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
    SEXP XGDMatrixNumRow_R(SEXP handle) {
  bst_ulong nrow;
  R_API_BEGIN();
  CHECK_CALL(XGDMatrixNumRow(R_ExternalPtrAddr(handle), &nrow));
  R_API_END();
  return ScalarInteger(static_cast<int>(nrow));
}
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
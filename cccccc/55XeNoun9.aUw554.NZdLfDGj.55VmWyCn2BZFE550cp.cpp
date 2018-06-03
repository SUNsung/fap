
        
          // Called when a window close is cancelled by beforeunload handler.
  virtual void OnWindowCloseCancelled(NativeWindow* window) {}
    
    
    {}  // namespace mate
    
    #include 'ui/gfx/geometry/rect.h'
    
      std::unique_ptr<base::ListValue> preferences_;
    
    #endif  // CHROME_BROWSER_EXTENSIONS_GLOBAL_SHORTCUT_LISTENER_H_

    
      // Sets time interval between updates. By default list of sources and their
  // thumbnail are updated once per second. If called after StartUpdating() then
  // it will take effect only after the next update.
  virtual void SetUpdatePeriod(base::TimeDelta period) = 0;
    
    #endif  // CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_

    
     private:
  // IPC message handler.
  int32_t OnHostMsgGetDeviceID(ppapi::host::HostMessageContext* context);
  int32_t OnHostMsgGetHmonitor(ppapi::host::HostMessageContext* context);
  int32_t OnHostMsgMonitorIsExternal(ppapi::host::HostMessageContext* context);
    
    #include 'chrome/browser/speech/tts_platform.h'
    
    // filenames
const base::FilePath::CharType kCacheDirname[] = FPL('Cache');
const base::FilePath::CharType kChannelIDFilename[] = FPL('Origin Bound Certs');
const base::FilePath::CharType kCookieFilename[] = FPL('Cookies');
const base::FilePath::CharType kCRLSetFilename[] =
    FPL('Certificate Revocation Lists');
const base::FilePath::CharType kCustomDictionaryFileName[] =
    FPL('Custom Dictionary.txt');
const base::FilePath::CharType kExtensionActivityLogFilename[] =
    FPL('Extension Activity');
const base::FilePath::CharType kExtensionsCookieFilename[] =
    FPL('Extension Cookies');
const base::FilePath::CharType kFirstRunSentinel[] = FPL('First Run');
const base::FilePath::CharType kGCMStoreDirname[] = FPL('GCM Store');
const base::FilePath::CharType kLocalStateFilename[] = FPL('Local State');
const base::FilePath::CharType kLocalStorePoolName[] = FPL('LocalStorePool');
const base::FilePath::CharType kMediaCacheDirname[] = FPL('Media Cache');
const base::FilePath::CharType kNetworkPersistentStateFilename[] =
    FPL('Network Persistent State');
const base::FilePath::CharType kOfflinePageArchviesDirname[] =
    FPL('Offline Pages/archives');
const base::FilePath::CharType kOfflinePageMetadataDirname[] =
    FPL('Offline Pages/metadata');
const base::FilePath::CharType kPreferencesFilename[] = FPL('Preferences');
const base::FilePath::CharType kProtectedPreferencesFilenameDeprecated[] =
    FPL('Protected Preferences');
const base::FilePath::CharType kReadmeFilename[] = FPL('README');
const base::FilePath::CharType kResetPromptMementoFilename[] =
    FPL('Reset Prompt Memento');
const base::FilePath::CharType kSafeBrowsingBaseFilename[] =
    FPL('Safe Browsing');
const base::FilePath::CharType kSecurePreferencesFilename[] =
    FPL('Secure Preferences');
const base::FilePath::CharType kServiceStateFileName[] = FPL('Service State');
const base::FilePath::CharType kSingletonCookieFilename[] =
    FPL('SingletonCookie');
const base::FilePath::CharType kSingletonLockFilename[] = FPL('SingletonLock');
const base::FilePath::CharType kSingletonSocketFilename[] =
    FPL('SingletonSocket');
const base::FilePath::CharType kSupervisedUserSettingsFilename[] =
    FPL('Managed Mode Settings');
const base::FilePath::CharType kThemePackFilename[] = FPL('Cached Theme.pak');
const base::FilePath::CharType kThemePackMaterialDesignFilename[] =
    FPL('Cached Theme Material Design.pak');
const base::FilePath::CharType kWebAppDirname[] = FPL('Web Applications');
    
    // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    class App {
 public:
  static void Call(const std::string& method,
                   const base::ListValue& arguments);
    }
    
      virtual void Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh = nullptr);
  virtual void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result);
    
    
    {} // namespace ui
    
    void MenuItem::Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh) {
  if (method == 'SetLabel') {
    std::string label;
    arguments.GetString(0, &label);
    SetLabel(label);
  } else if (method == 'SetIcon') {
    std::string icon;
    arguments.GetString(0, &icon);
    SetIcon(icon);
  } else if (method == 'SetIconIsTemplate') {
    bool isTemplate;
    arguments.GetBoolean(0, &isTemplate);
    SetIconIsTemplate(isTemplate);
  } else if (method == 'SetTooltip') {
    std::string tooltip;
    arguments.GetString(0, &tooltip);
    SetTooltip(tooltip);
  } else if (method == 'SetEnabled') {
    bool enabled = true;
    arguments.GetBoolean(0, &enabled);
    SetEnabled(enabled);
  } else if (method == 'SetChecked') {
    bool checked = false;
    arguments.GetBoolean(0, &checked);
    SetChecked(checked);
  } else if (method == 'SetSubmenu') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    SetSubmenu(object_manager()->GetApiObject<Menu>(object_id));
#if defined(OS_MACOSX)
  } else if (method == 'SetKey') {
    std::string key;
    arguments.GetString(0, &key);
    SetKey(key);
  } else if (method == 'SetModifiers') {
    std::string mod;
    arguments.GetString(0, &mod);
    SetModifiers(mod);
#endif
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    void MenuItem::OnClick(GtkWidget* widget) {
  if (block_active_)
    return;
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.App.clearCache', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppClearCacheFunction);
};
    
    bool NwClipboardReadAvailableTypesFunction::RunNWSync(base::ListValue* response, std::string* error) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  bool contains_filenames;
  std::vector<base::string16> types;
  clipboard->ReadAvailableTypes(ui::CLIPBOARD_TYPE_COPY_PASTE, &types, &contains_filenames);
  for(std::vector<base::string16>::iterator it = types.begin(); it != types.end(); it++) {
    if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeText)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_TEXT))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeHTML)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_HTML))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeRTF)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_RTF))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypePNG)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_PNG))));
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_JPEG))));
    }
  }
  return true;
}
    
    PyDescriptorDatabase::~PyDescriptorDatabase() { Py_DECREF(py_database_); }
    
      // Find the file that declares the given fully-qualified symbol name.
  bool FindFileContainingSymbol(const string& symbol_name,
                                FileDescriptorProto* output);
    
      void WriteIntroduction(io::Printer* printer);
  void WriteDescriptor(io::Printer* printer);
  void WriteGeneratedCodeInfo(const Descriptor* descriptor,
                              io::Printer* printer,
                              bool last);
    
    // TODO(jonskeet): Refactor repeated field support; all the implementations are *really* similar. We
// should probably have a RepeatedFieldGeneratorBase.
class RepeatedEnumFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedEnumFieldGenerator(const FieldDescriptor* descriptor,
                             int fieldOrdinal,
                             const Options *options);
  ~RepeatedEnumFieldGenerator();
    }
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedMessageFieldGenerator);
};
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    int PowerIphone::get_power_percent_left() {
	if (UpdatePowerInfo()) {
		return percent_left;
	} else {
		return -1;
	}
}
    
    		case LWS_CALLBACK_CLIENT_ESTABLISHED:
			peer->set_wsi(wsi);
			peer_data->peer_id = 0;
			peer_data->in_size = 0;
			peer_data->in_count = 0;
			peer_data->out_count = 0;
			peer_data->rbw.resize(16);
			peer_data->rbr.resize(16);
			peer_data->force_close = false;
			_on_connect(lws_get_protocol(wsi)->name);
			break;
    
    
    {	return false;
}
    
    	static void _bind_methods();
    
    /// This class is required to implement custom collision behaviour in the broadphase
struct GodotFilterCallback : public btOverlapFilterCallback {
	static bool test_collision_filters(uint32_t body0_collision_layer, uint32_t body0_collision_mask, uint32_t body1_collision_layer, uint32_t body1_collision_mask);
    }
    
      public:
    jpeg_decoder_mem_stream() : m_pSrc_data(NULL), m_ofs(0), m_size(0) { }
    jpeg_decoder_mem_stream(const uint8 *pSrc_data, uint size) : m_pSrc_data(pSrc_data), m_ofs(0), m_size(size) { }
    
    void opus_ifft_neon(const kiss_fft_state *st,
                    const kiss_fft_cpx *fin,
                    kiss_fft_cpx *fout);
    
        private:
        void EnumerateStatefulNodesForRoot(ComputationNetwork& net, ComputationNodeBasePtr root, std::map<wstring, shared_ptr<IStatefulNode>>& statefulNodes)
        {
            for (const auto& node : net.GetAllNodesForRoot(root))
            {
                const auto& name = node->GetName();
                if (statefulNodes.find(name) != statefulNodes.end())
                    continue; // already in the list  --TODO: use insert()
                shared_ptr<IStatefulNode> pNode = dynamic_pointer_cast<IStatefulNode>(node);
                if (pNode) // if it is an IStatefulNode then report it
                    statefulNodes[name] = pNode;
            }
        }
    
        Matrix<float>::MultiplyAndWeightedAdd(alpha, mAdense, transposeA, mBdense, transposeB, beta, mCdense);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mAsparse, transposeA, mBsparse, transposeB, beta, mCsparse);
    mCsparse.SwitchToMatrixType(MatrixType::DENSE, matrixFormatDense, true);
    BOOST_CHECK(mCsparse.IsEqualTo(mCdense, c_epsilonFloatE4));
    
    #include 'PostComputingActions.h'
    
    // -----------------------------------------------------------------------
// functions exposed by this module
// -----------------------------------------------------------------------
    
    #ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // 'secure' CRT not available on all platforms  --add this at the top of all CPP files that give 'function or variable may be unsafe' warnings
#endif
    
    // GetWriter - get a reader type from the DLL
// The F version gets the 'float' version, and D gets 'double'.
extern 'C' DATAWRITER_API void GetWriterF(IDataWriter** pwriter);
extern 'C' DATAWRITER_API void GetWriterD(IDataWriter** pwriter);
    
        // call SetStepOffset() at start of a multi-epoch training to set the index of the first epoch in that training
    // This value is added to the local epoch index in TraceProgress().
    static void SetStepOffset(size_t currentStepOffset)
    {
        GetStaticInstance().m_currentStepOffset = currentStepOffset;
    }
    
    
    {    for (size_t i = 0; i < sorted_index_set.size(); ++i) {
      bst_uint cid = sorted_index_set[i];
      size_t dst_begin = page->offset[i];
      size_t src_begin = disk_offset_[cid];
      size_t num = disk_offset_[cid + 1] - disk_offset_[cid];
      for (size_t j = 0; j < num; ++j) {
        page->data[dst_begin + j] = SparseBatch::Entry(
            index_.data[src_begin + j] + min_index_, value_.data[src_begin + j]);
      }
    }
    return true;
  }
    
    // logistic loss for binary classification task
struct LogisticClassification : public LogisticRegression {
  static const char* DefaultEvalMetric() { return 'error'; }
};
    
        // update bias
    for (int gid = 0; gid < ngroup; ++gid) {
      auto grad = GetBiasGradientParallel(gid, ngroup, in_gpair->HostVector(), p_fmat);
      auto dbias = static_cast<bst_float>(param_.learning_rate *
                               CoordinateDeltaBias(grad.first, grad.second));
      model->bias()[gid] += dbias;
      UpdateBiasResidualParallel(gid, ngroup, dbias, &in_gpair->HostVector(), p_fmat);
    }
    
      virtual int64_t size() CXX11_OVERRIDE;
    
    bool AbstractOptionHandler::getChangeOption() const
{
  return flags_ & FLAG_CHANGE_OPTION;
}
    
    namespace aria2 {
    }
    
    void AnnounceList::moveToStoppedAllowedTier()
{
  auto itr = find_wrap_if(std::begin(tiers_), std::end(tiers_), currentTier_,
                          FindStoppedAllowedTier());
  setCurrentTier(std::move(itr));
}
    
      CFRef(T ref) : ref_(ref) {}
    
    class AppleTLSContext : public TLSContext {
public:
  AppleTLSContext(TLSSessionSide side, TLSVersion ver)
      : side_(side), minTLSVer_(ver), verifyPeer_(true), credentials_(nullptr)
  {
  }
    }
    
    std::unique_ptr<AuthConfig> AuthConfig::create(std::string user,
                                               std::string password)
{
  if (user.empty()) {
    return nullptr;
  }
  else {
    return make_unique<AuthConfig>(std::move(user), std::move(password));
  }
}

        
        net::NSSCertDatabase* GetNSSCertDatabaseForResourceContext(
    content::ResourceContext* context,
    base::OnceCallback<void(net::NSSCertDatabase*)> callback) {
  // This initialization is not thread safe. This CHECK ensures that this code
  // is only run on a single thread.
  CHECK(content::BrowserThread::CurrentlyOn(content::BrowserThread::IO));
  if (!g_nss_cert_database) {
    // Linux has only a single persistent slot compared to ChromeOS's separate
    // public and private slot.
    // Redirect any slot usage to this persistent slot on Linux.
    g_nss_cert_database = new net::NSSCertDatabase(
        crypto::ScopedPK11Slot(
            crypto::GetPersistentNSSKeySlot()) /* public slot */,
        crypto::ScopedPK11Slot(
            crypto::GetPersistentNSSKeySlot()) /* private slot */);
  }
  return g_nss_cert_database;
}
    
    void InspectableWebContentsImpl::CloseDevTools() {
  if (GetDevToolsWebContents()) {
    frontend_loaded_ = false;
    if (managed_devtools_web_contents_) {
      view_->CloseDevTools();
      managed_devtools_web_contents_.reset();
    }
    embedder_message_dispatcher_.reset();
    if (!IsGuest())
      web_contents_->Focus();
  }
}
    
    ProcessSingleton::NotifyResult
ProcessSingleton::NotifyOtherProcessWithTimeoutOrCreate(
    const base::CommandLine& command_line,
    int retry_attempts,
    const base::TimeDelta& timeout) {
  const base::TimeTicks begin_ticks = base::TimeTicks::Now();
  NotifyResult result = NotifyOtherProcessWithTimeout(
      command_line, retry_attempts, timeout, true);
  if (result != PROCESS_NONE) {
    if (result == PROCESS_NOTIFIED) {
      UMA_HISTOGRAM_MEDIUM_TIMES('Chrome.ProcessSingleton.TimeToNotify',
                                 base::TimeTicks::Now() - begin_ticks);
    } else {
      UMA_HISTOGRAM_MEDIUM_TIMES('Chrome.ProcessSingleton.TimeToFailure',
                                 base::TimeTicks::Now() - begin_ticks);
    }
    return result;
  }
    }
    
    GlobalMenuBarRegistrarX11::~GlobalMenuBarRegistrarX11() {
  if (registrar_proxy_) {
    g_signal_handlers_disconnect_by_func(
        registrar_proxy_, reinterpret_cast<void*>(OnNameOwnerChangedThunk),
        this);
    g_object_unref(registrar_proxy_);
  }
}
    
      v8::Local<v8::Promise> Get(const base::DictionaryValue& filter);
  v8::Local<v8::Promise> Set(const base::DictionaryValue& details);
  v8::Local<v8::Promise> Remove(const GURL& url, const std::string& name);
  v8::Local<v8::Promise> FlushStore();
    
    #if defined(OS_WIN)
#include 'third_party/webrtc/modules/desktop_capture/win/dxgi_duplicator_controller.h'
#include 'third_party/webrtc/modules/desktop_capture/win/screen_capturer_win_directx.h'
#include 'ui/display/win/display_info.h'
#endif  // defined(OS_WIN)
    
    // static
mate::WrappableBase* Menu::New(mate::Arguments* args) {
  return new MenuViews(args->isolate(), args->GetThis());
}
    
     private:
  void OnClosed(int32_t window_id, base::Closure callback);
    
    void SILGenModule::emitLazyConformancesForFunction(SILFunction *F) {
  LazyConformanceEmitter emitter(*this);
    }
    
      /// Change the DeclContext of any contained parameters to the specified
  /// DeclContext.
  void setDeclContextOfParamDecls(DeclContext *DC);
  
  
  /// Flags used to indicate how ParameterList cloning should operate.
  enum CloneFlags {
    /// The cloned ParamDecls should be marked implicit.
    Implicit = 0x01,
    /// The cloned pattern is for an inherited constructor; mark default
    /// arguments as inherited, and mark unnamed arguments as named.
    Inherited = 0x02,
    /// The cloned pattern will strip type information.
    WithoutTypes = 0x04,
  };
    
      size_t numTrailingObjects(
      typename TrailingObjectsIdentifier::template OverloadToken<SourceLoc>)
      const {
    return asDerived().hasArgumentLabelLocs() ? asDerived().getNumArguments()
                                              : 0;
  }
    
      PrimarySpecificPaths(StringRef OutputFilename = StringRef(),
                       StringRef MainInputFilenameForDebugInfo = StringRef(),
                       SupplementaryOutputPaths SupplementaryOutputs =
                           SupplementaryOutputPaths())
      : OutputFilename(OutputFilename),
        SupplementaryOutputs(SupplementaryOutputs),
        MainInputFilenameForDebugInfo(MainInputFilenameForDebugInfo) {}
    
      /// The path to which we should output a Make-style dependencies file.
  /// It is valid whenever there are any inputs.
  ///
  /// Swift's compilation model means that Make-style dependencies aren't
  /// well-suited to model fine-grained dependencies. See docs/Driver.md for
  /// more information.
  ///
  /// \sa ReferenceDependenciesFilePath
  std::string DependenciesFilePath;
    
    
    {  auto nn = caffe2::convertToNNModule(net);
  auto new_netdef = caffe2::convertToCaffe2Proto(nn);
  EXPECT_EQ(new_netdef.external_output().size(), net.external_output().size());
  for (auto i = 0; i < net.external_output().size(); ++i) {
    EXPECT_EQ(new_netdef.external_output(i), net.external_output(i));
  }
}
    
    
    {} // namespace caffe2

    
    REGISTER_CPU_OPERATOR(
    MergeSingleListFeatureTensors,
    MergeSingleListFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleListFeatureTensors)
    .SetDoc(
        'Merge given single-feature tensors with list features into one '
        'multi-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 3 == 0; })
    .NumOutputs(4)
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_values', '.values')
    .Input(2, 'in1_presence', '.presence')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values_lengths', '.values.lengths')
    .Output(3, 'out_values_values', '.values.values')
    .Arg('feature_ids', 'feature ids');
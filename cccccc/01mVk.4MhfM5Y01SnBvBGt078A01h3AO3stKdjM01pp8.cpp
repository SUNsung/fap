
        
        bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv) {
  const base::CommandLine::StringType dashdash(2, '-');
  bool block_args = false;
  for (int i = 0; i < argc; ++i) {
    if (argv[i] == dashdash)
      break;
    if (block_args) {
      return false;
    } else if (IsUrlArg(argv[i])) {
      block_args = true;
    }
  }
  return true;
}
    
    void AutoUpdater::OnUpdateDownloaded(const std::string& release_notes,
                                     const std::string& release_name,
                                     const base::Time& release_date,
                                     const std::string& url) {
  Emit('update-downloaded', release_notes, release_name, release_date, url,
       // Keep compatibility with old APIs.
       base::Bind(&AutoUpdater::QuitAndInstall, base::Unretained(this)));
}
    
    namespace atom {
    }
    
      // TrayIconObserver:
  void OnClicked(const gfx::Rect& bounds,
                 const gfx::Point& location,
                 int modifiers) override;
  void OnDoubleClicked(const gfx::Rect& bounds, int modifiers) override;
  void OnRightClicked(const gfx::Rect& bounds, int modifiers) override;
  void OnBalloonShow() override;
  void OnBalloonClicked() override;
  void OnBalloonClosed() override;
  void OnDrop() override;
  void OnDropFiles(const std::vector<std::string>& files) override;
  void OnDropText(const std::string& text) override;
  void OnDragEntered() override;
  void OnDragExited() override;
  void OnDragEnded() override;
  void OnMouseEntered(const gfx::Point& location, int modifiers) override;
  void OnMouseExited(const gfx::Point& location, int modifiers) override;
  void OnMouseMoved(const gfx::Point& location, int modifiers) override;
    
    class WebRequest : public mate::TrackableObject<WebRequest> {
 public:
  static mate::Handle<WebRequest> Create(v8::Isolate* isolate,
                                         AtomBrowserContext* browser_context);
    }
    
    
    {}  // namespace
    
      // this.emit(name, event, args...);
  template <typename... Args>
  bool EmitCustomEvent(const base::StringPiece& name,
                       v8::Local<v8::Object> event,
                       const Args&... args) {
    return EmitWithEvent(
        name, internal::CreateCustomEvent(isolate(), GetWrapper(), event),
        args...);
  }
    
    bool SavePageHandler::Handle(const base::FilePath& full_path,
                             const content::SavePageType& save_type) {
  auto* download_manager = content::BrowserContext::GetDownloadManager(
      web_contents_->GetBrowserContext());
  download_manager->AddObserver(this);
  // Chromium will create a 'foo_files' directory under the directory of saving
  // page 'foo.html' for holding other resource files of 'foo.html'.
  base::FilePath saved_main_directory_path = full_path.DirName().Append(
      full_path.RemoveExtension().BaseName().value() +
      FILE_PATH_LITERAL('_files'));
  bool result =
      web_contents_->SavePage(full_path, saved_main_directory_path, save_type);
  download_manager->RemoveObserver(this);
  // If initialization fails which means fail to create |DownloadItem|, we need
  // to delete the |SavePageHandler| instance to avoid memory-leak.
  if (!result)
    delete this;
  return result;
}
    
    namespace api {
class WebContents;
}
    
    
    {	return userOnly;
}
    
        caffe::TBlob2CaffeBlob<xpu, Dtype>(caffe::Data,
                                       bot_.begin(),
                                       in_data.begin(),
                                       param_.num_data);
    caffe::TBlob2CaffeBlob<xpu, Dtype>(caffe::Data,
                                       top_.begin(),
                                       out_data.begin(),
                                       param_.num_out);
    CaffeOpSetup();
    // Init caffe's weight pointer
    if (!init_w_) {
      init_w_ = true;
      caffe::TBlob2CaffeBlob<xpu, Dtype>(caffe::Data,
                                         wei_.begin(),
                                         in_data.begin() + param_.num_data,
                                         param_.num_weight);
      caffe::SetOpBlobs(caffeOp_, wei_);
    }
    if (ctx.is_train)
      MXCAFFELAYER(caffeOp_, Dtype)->SetPhase(::caffe::TRAIN);
    else
      MXCAFFELAYER(caffeOp_, Dtype)->SetPhase(::caffe::TEST);
    caffeOp_->Forward(bot_, top_);
    
      /*
   * @brief a variable to keep track of the temp fs used in carving
   *
   * This variable represents the location in which we store all of our carved
   * files. When a carve has completed all of the desired files, as well
   * as the tar archive should reside in this directory
   */
  boost::filesystem::path carveDir_;
    
    std::vector<std::string> PrometheusMetricsConfigParserPlugin::keys() const {
  return {kPrometheusParserRootKey};
}
    
    TEST_F(ViewsConfigParserPluginTests, test_add_view) {
  Config c;
  auto s = c.update(getTestConfigMap());
  EXPECT_TRUE(s.ok());
    }
    
    
    {  expected = {'select pid from processes where name = 'foobar';'};
  Pack fpack('discovery_pack', getPackWithDiscovery().doc());
  EXPECT_EQ(fpack.getDiscoveryQueries(), expected);
}
    
     private:
  /// The hashing algorithm which is used to compute the hash
  HashType algorithm_;
    
    TEST_F(QueryTests, test_is_query_name_in_database) {
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('foobar', query);
  auto encoded_qd = getSerializedQueryDataJSON();
  auto status = setDatabaseValue(kQueries, 'foobar', encoded_qd.first);
  EXPECT_TRUE(status.ok());
  // Now test that the query name exists.
  EXPECT_TRUE(cf.isQueryNameInDatabase());
}
    
      auto constraint = Constraint(EQUALS);
  constraint.expr = 'some';
    
    void Initializer::platformSetup() {
  // Initialize the COM libraries utilized by Windows WMI calls.
  auto ret = ::CoInitializeEx(0, COINIT_MULTITHREADED);
  if (ret != S_OK) {
    ::CoUninitialize();
  }
}
    
    TEST_F(EventsTests, test_fire_event) {
  auto pub = std::make_shared<BasicEventPublisher>();
  pub->setName('BasicPublisher');
  auto status = EventFactory::registerEventPublisher(pub);
  ASSERT_TRUE(status.ok());
    }

        
        namespace nwapi {
    }
    
    base::StringPiece GetStringResource(int resource_id) {
  return ResourceBundle::GetSharedInstance().GetRawDataResource(resource_id);
}
    
    namespace blink {
class WebFrame;
class WebURLRequest;
class WebView;
}
    
    
    {}  // namespace nwapi
    
    void DispatcherHost::OnCallStaticMethodSync(
    const std::string& type,
    const std::string& method,
    const base::ListValue& arguments,
    base::ListValue* result) {
  DLOG(INFO) << 'OnCallStaticMethodSync: '
             << ' type:' << type
             << ' method:' << method
             << ' arguments:' << arguments;
    }
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    namespace nw {
    }
    
    
void MenuItem::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (enable_shortcut && GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    gtk_widget_add_accelerator(
      menu_item_,
      'activate',
      gtk_accel_group,
      keyval,
      modifiers_mask,
      GTK_ACCEL_VISIBLE);
  }
  if (submenu_ != NULL){
    submenu_->UpdateKeys(gtk_accel_group);
  }
  return;
}
    
      // Ignore first non-switch arg if it's not a standalone package.
  bool ignore_arg = !package->self_extract();
  for (unsigned i = 1; i < argv.size(); ++i) {
    if (ignore_arg && args.size() && argv[i] == args[0]) {
      ignore_arg = false;
      continue;
    }
    }
    
      grpc::testing::RunQPS();
    
    std::string GetDbFileContent(int argc, char** argv);
    
    #endif  // GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H

    
    int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

    
    #include 'test/cpp/qps/histogram.h'
    
    
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
    
      delete metric;
  metric = xgboost::Metric::Create('map@-');
  ASSERT_STREQ(metric->Name(), 'map@-');
  EXPECT_NEAR(GetMetricEval(metric, {}, {}), 0, 1e-10);
    
      XGBOOST_DEVICE GradientPairInternal<T> &operator+=(
      const GradientPairInternal<T> &rhs) {
    grad_ += rhs.grad_;
    hess_ += rhs.hess_;
    return *this;
  }
    
      virtual void InitColAccess(const std::vector<bool>& enabled,
                             float subsample,
                             size_t max_row_perbatch, bool sorted) = 0;
  // the following are column meta data, should be able to answer them fast.
  /*! \return whether column access is enabled */
  virtual bool HaveColAccess(bool sorted) const = 0;
  /*! \return Whether the data columns single column block. */
  virtual bool SingleColBlock() const = 0;
  /*! \brief get number of non-missing entries in column */
  virtual size_t GetColSize(size_t cidx) const = 0;
  /*! \brief get column density */
  virtual float GetColDensity(size_t cidx) const = 0;
  /*! \return reference of buffered rowset, in column access */
  virtual const RowSet& BufferedRowset() const = 0;
  /*! \brief virtual destructor */
  virtual ~DMatrix() = default;
  /*!
   * \brief Save DMatrix to local file.
   *  The saved file only works for non-sharded dataset(single machine training).
   *  This API is deprecated and dis-encouraged to use.
   * \param fname The file name to be saved.
   * \return The created DMatrix.
   */
  virtual void SaveToLocalFile(const std::string& fname);
  /*!
   * \brief Load DMatrix from URI.
   * \param uri The URI of input.
   * \param silent Whether print information during loading.
   * \param load_row_split Flag to read in part of rows, divided among the workers in distributed mode.
   * \param file_format The format type of the file, used for dmlc::Parser::Create.
   *   By default 'auto' will be able to load in both local binary file.
   * \return The created DMatrix.
   */
  static DMatrix* Load(const std::string& uri,
                       bool silent,
                       bool load_row_split,
                       const std::string& file_format = 'auto');
  /*!
   * \brief create a new DMatrix, by wrapping a row_iterator, and meta info.
   * \param source The source iterator of the data, the create function takes ownership of the source.
   * \param cache_prefix The path to prefix of temporary cache file of the DMatrix when used in external memory mode.
   *     This can be nullptr for common cases, and in-memory mode will be used.
   * \return a Created DMatrix.
   */
  static DMatrix* Create(std::unique_ptr<DataSource>&& source,
                         const std::string& cache_prefix = '');
  /*!
   * \brief Create a DMatrix by loading data from parser.
   *  Parser can later be deleted after the DMatrix i created.
   * \param parser The input data parser
   * \param cache_prefix The path to prefix of temporary cache file of the DMatrix when used in external memory mode.
   *     This can be nullptr for common cases, and in-memory mode will be used.
   * \sa dmlc::Parser
   * \note dmlc-core provides efficient distributed data parser for libsvm format.
   *  User can create and register customized parser to load their own format using DMLC_REGISTER_DATA_PARSER.
   *  See 'dmlc-core/include/dmlc/data.h' for detail.
   * \return A created DMatrix.
   */
  static DMatrix* Create(dmlc::Parser<uint32_t>* parser,
                         const std::string& cache_prefix = '');
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct GradientBoosterReg
    : public dmlc::FunctionRegEntryBase<
  GradientBoosterReg,
  std::function<GradientBooster* (const std::vector<std::shared_ptr<DMatrix> > &cached_mats,
                                  bst_float base_margin)> > {
};
    
    
    {    void throw_exception( std::exception const & e ) {
        xfatal2(TSF'boost exception:%_', e.what());
        
#ifdef ANDROID
        char stack[4096] = {0};
        android_callstack(stack, sizeof(stack));
        xfatal2(TSF'%_', stack);
#endif
    }
}

    
    
/*
 * ServiceBase.h
 *
 *  Created on: 2013-6-20
 *      Author: yerungui
 */
    
    
    {  private:
    void* m_this;
    std::map<const std::string, boost::any> m_variablemap;
};
    
    
    {    SPY_DETACH_VARIABLE('TestFun0 i');
}
    
      private:
    int __TestFun1(int i);
    
    //
//  testspy_spy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-14.
//
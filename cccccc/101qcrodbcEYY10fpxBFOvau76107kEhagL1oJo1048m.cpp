
        
        bool UvTaskRunner::PostDelayedTask(const base::Location& from_here,
                                   base::OnceClosure task,
                                   base::TimeDelta delay) {
  auto* timer = new uv_timer_t;
  timer->data = this;
  uv_timer_init(loop_, timer);
  uv_timer_start(timer, UvTaskRunner::OnTimeout, delay.InMilliseconds(), 0);
  tasks_[timer] = std::move(task);
  return true;
}
    
    // All instances of TrackableObject will be kept in a weak map and can be got
// from its ID.
template <typename T>
class TrackableObject : public TrackableObjectBase,
                        public mate::EventEmitter<T> {
 public:
  // Mark the JS object as destroyed.
  void MarkDestroyed() {
    v8::Local<v8::Object> wrapper = Wrappable<T>::GetWrapper();
    if (!wrapper.IsEmpty()) {
      wrapper->SetAlignedPointerInInternalField(0, nullptr);
    }
  }
    }
    
    void AutoUpdater::CheckForUpdates() {}
    
    #include 'atom/browser/net/url_request_about_job.h'
    
    int LaunchProgram(const StringVector& relauncher_args,
                  const StringVector& argv);
    
      PROCESS_BASIC_INFORMATION pbi;
  LONG status =
      NtQueryInformationProcess(handle, ProcessBasicInformation, &pbi,
                                sizeof(PROCESS_BASIC_INFORMATION), NULL);
  if (!NT_SUCCESS(status)) {
    LOG(ERROR) << 'NtQueryInformationProcess failed';
    return NULL;
  }
    
    
struct Config {
  /*
   * Normalizes hdf string names to their ini counterparts
   *
   * We have special handling for a few hdf strings such as those containing
   * MySQL, Eval, IPv[4|6] and EnableHipHopSyntax
   */
  static std::string IniName(const Hdf& config,
                             const bool prepend_hhvm = true);
  static std::string IniName(const std::string& config,
                             const bool prepend_hhvm = true);
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    
    {  // if the function was called via FCallBuiltin, we'll get a bogus name as
  // the stack frame will be wrong
  ActRec* ar = g_context->getStackFrame();
  const char* fn = (ar != nullptr)
    ? ar->func()->name()->data()
    : 'OPTIMIZED_BUILTIN';
  raise_warning('%s(%s): failed to open stream: '
                'wrapper does not support stream open',
                fn, filename.data());
  return nullptr;
}
    
    #include 'hphp/util/stack-trace.h'
    
    namespace xgboost {
/*!
 * \brief interface of tree update module, that performs update of a tree.
 */
class TreeUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~TreeUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief perform update to the tree models
   * \param gpair the gradient pair statistics of the data
   * \param data The data matrix passed to the updater.
   * \param trees references the trees to be updated, updater will change the content of trees
   *   note: all the trees in the vector are updated, with the same statistics,
   *         but maybe different random seeds, usually one tree is passed in at a time,
   *         there can be multiple trees when we train random forest style model
   */
  virtual void Update(HostDeviceVector<GradientPair>* gpair,
                      DMatrix* data,
                      const std::vector<RegTree*>& trees) = 0;
    }
    }
    
    
    {
    {}  // namespace obj
}  // namespace xgboost
    
      inline static void LimitSizeLevel
    (size_t maxn, double eps, size_t* out_nlevel, size_t* out_limit_size) {
    size_t& nlevel = *out_nlevel;
    size_t& limit_size = *out_limit_size;
    nlevel = 1;
    while (true) {
      limit_size = static_cast<size_t>(ceil(nlevel / eps)) + 1;
      size_t n = (1ULL << nlevel);
      if (n * limit_size >= maxn) break;
      ++nlevel;
    }
    // check invariant
    size_t n = (1ULL << nlevel);
    CHECK(n * limit_size >= maxn) << 'invalid init parameter';
    CHECK(nlevel <= limit_size * eps) << 'invalid init parameter';
  }
    
    BatchSet SimpleDMatrix::GetColumnBatches() {
  // column page doesn't exist, generate it
  if (!column_page_) {
    auto page = dynamic_cast<SimpleCSRSource*>(source_.get())->page_;
    column_page_.reset(
        new SparsePage(page.GetTranspose(source_->info.num_col_)));
  }
  auto begin_iter =
      BatchIterator(new SimpleBatchIteratorImpl(column_page_.get()));
  return BatchSet(begin_iter);
}
    
      // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(&this->sync_, seqid);
    
      ExtensionManager_getQueryColumns_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();
    
    typedef struct _ExtensionManager_getQueryColumns_result__isset {
  _ExtensionManager_getQueryColumns_result__isset() : success(false) {}
  bool success :1;
} _ExtensionManager_getQueryColumns_result__isset;
    
          auto history_file =
          (fs::path(osquery::osqueryHomeDirectory()) / '.history')
              .make_preferred()
              .string();
      linenoiseHistorySetMaxLen(100);
      linenoiseHistoryLoad(history_file.c_str());
      linenoiseSetCompletionCallback(tableCompletionFunction);
    
    /// Gets supported hardwareDriver from system storage controllers.
static inline void getSmartCtlDeviceType(
    const std::vector<std::string>& storage_drivers,
    std::vector<hardwareDriver>& types) {
  for (const auto& driver : storage_drivers) {
    auto hw_driver = kSmartExplicitDriverToDevice.find(driver);
    if (hw_driver != kSmartExplicitDriverToDevice.end()) {
      types.push_back(hw_driver->second);
    }
  }
}

        
        class App {
 public:
  static void Call(const std::string& method,
                   const base::ListValue& arguments);
    }
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return item->is_modified_;
}
    
      for(auto* item: menu_items_) {
    item->RemoveKeys();
  }
    
    ExtensionFunction::ResponseAction
NwAppCloseAllWindowsFunction::Run() {
  AppWindowRegistry* registry = AppWindowRegistry::Get(browser_context());
  if (!registry)
    return RespondNow(Error(''));
  base::MessageLoopCurrent::Get()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&NwAppCloseAllWindowsFunction::DoJob, registry, extension()->id()));
    }
    
    
    {  return true;
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.clearSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardClearSyncFunction);
};
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    ExtensionFunction::ResponseAction
NwObjCallObjectMethodAsyncFunction::Run() {
  EXTENSION_FUNCTION_VALIDATE(args_);
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    
    {} // extensions

    
      protected:
    ~NwScreenStartMonitorFunction() override {}
    DECLARE_EXTENSION_FUNCTION('nw.Screen.startMonitor', UNKNOWN)
    
    class CPUParticles2DEditorPlugin : public EditorPlugin {
    }
    
    class CPUParticlesEditorPlugin : public EditorPlugin {
    }
    
    
    {		Map<int, NodeInfo> nodes;
	};
    
    
    {	PluginConfigDialog();
	~PluginConfigDialog();
};
    
    #include 'core/io/resource_loader.h'
#include 'core/math/delaunay.h'
#include 'core/os/input.h'
#include 'core/os/keyboard.h'
#include 'core/project_settings.h'
#include 'scene/animation/animation_blend_tree.h'
#include 'scene/animation/animation_player.h'
#include 'scene/gui/menu_button.h'
#include 'scene/gui/panel.h'
#include 'scene/main/viewport.h'
    
    
    {
    {    if (feature_set_level_.count(depth) == 0) {
      // Level sampling, level does not yet exist so generate it
      feature_set_level_[depth] = ColSample(feature_set_tree_, colsample_bylevel_);
    }
    if (colsample_bynode_ == 1.0f) {
      // Level sampling
      return feature_set_level_[depth];
    }
    // Need to sample for the node individually
    return ColSample(feature_set_level_[depth], colsample_bynode_);
  }
};
    
    namespace xgboost {
namespace metric {
    }
    }
    
        // Implementation of Blockwise Model Update and Filtering (BMUF, a.k.a. block momentum) 
    // For detail, see the following paper
    // Kai Chen and Qiang Huo, 'Scalable training of deep learning machines by incremental block training 
    // with intra-block parallel optimization and blockwise model-update filtering', 
    // in International Conference on Acoustics, Speech and Signal Processing , March 2016, Shanghai, China. 
    
            nodeParamCount = 1;
        nodeParamStart = 2;
    
        // construct NDLScript from a ConfigValue, propogate the config Name
    // configValue - the body of the macro
    // oneLineDefinition - this macro definition is all on one line, names optional
    // macroName - if the macro has a name, the name - this is used to get parameter info
    NDLScript(const ConfigValue& configValue, std::string macroName, bool oneLineDefinition)
        : ConfigParser(';', configValue.Name())
    {
        m_noDefinitions = oneLineDefinition;
        m_definingMacro = true;
        m_macroNode = NULL;
        m_scriptString = configValue;
        NDLNode<ElemType>* ndlNode = s_global.CheckName(macroName, true);
        if (ndlNode == NULL)
            RuntimeError('Invalid macro definition, %s not found', macroName.c_str());
    }
    
            for (size_t i = offset; i < m_layerSizes.size(); i++)
        {
            // add direct connect from each layers' output to the layer before the output layer
            output = BuildDirectConnect(randomSeed, i, (i > 1) ? m_layerSizes[i] : ((offset == 0) ? m_layerSizes[i] : m_layerSizes[i] * m_lookupTableOrder), m_layerSizes[numHiddenLayers], outputFromEachLayer[i], input);
            if (output != nullptr)
                input = output;
        }
    
    
    {        // this section is for back compat only, skip over
        if (fstream.TryGetMarker(FileMarker::fileMarkerBeginSection, L'BPairNodes'))
        {
            fstream >> num;
            if (num > 0)
                RuntimeError('Read: PairNodes are no longer supported');
            fstream.GetMarker(FileMarker::fileMarkerEndSection, L'EPairNodes');
        }
    }
    fstream.GetMarker(FileMarker::fileMarkerEndSection, L'ERootNodes');
    
    protected:                // TODO: should be fully encapsulated here
    bool m_needsGradient; // true if this node or any children need a gradient to be computed (for own consumption or propagation to somewhere in the child tree)
    bool m_needsDynamicValidation;
    
                    Timer threadTimer;
                threadTimer.Restart();
                for (int widx = 0; widx < m_tableCount; widx++)
                {
                    ElemType * px = m_deltaArray + m_tableOffsets[widx];
                    // GPU buffer -> CPU buffer
                    CUDA_CALL(cudaMemcpyAsync(px,
                        m_gpuAsyncBuffer[m_bufferIndexInUse][widx].Data(),
                        m_gpuAsyncBuffer[m_bufferIndexInUse][widx].GetNumElements() * sizeof(ElemType),
                        cudaMemcpyDeviceToHost,
                        _commStream));
                }
                // waiting copy from GPU to CPU has finished
                CUDA_CALL(cudaStreamSynchronize(_commStream));
                threadTimer.Stop();
    
        public:
        MASGDPerfStats(size_t myRank, size_t numWorkers):
            m_numWorkers(numWorkers), m_myRank(myRank), m_numSyncPerformedInCurrentEpoch(0), m_reportFrequency(1), 
            m_totalSamplesProcessedSinceLastReport(0), m_localSamplesProcessedSinceLastReport(0)
        {
            m_Timer.Start();
        }
    
    protected:
    template<class ElemType2 = ElemType>
    void ClipGradient(Matrix<ElemType2>& gradient, const size_t actualMBSize) const;
    
            // Make sure there is no pending async aggregation
        if (m_pendingAsyncAggregation.valid())
            LogicError('Unexpected pending async gradient aggregation found when resetting aggregator state!');
    
    #pragma warning(push)
#pragma warning(disable : 4996) // Due to multiple unsafe functions in fileutil.h
#include 'ComputationNetwork.h'
#include 'Criterion.h'
#include 'DistGradHeader.h'
#include 'LinearAlgebraNodes.h'
#include 'MPIWrapper.h'
#include 'Matrix.h'
#include 'SimpleDistGradAggregator.h'
#include 'V2SimpleDistGradAggregator.h'
#include 'SimpleDistGradAggregatorHelper.h'
    
      _OutputStream &operator<< (const _ISerializable<Type> &v) {
    v.serialize(*this);
    return *this;
  }
    
          tmp = get_node(fault->children, 'faultactor');
      if (tmp != nullptr && tmp->children != nullptr) {
        Variant zv =
          master_to_zval(get_conversion(dataTypeToSoap(KindOfString)), tmp);
        faultactor = zv.toString();
      }
    
    #include 'hphp/util/assertions.h'
#include <atomic>
#include <folly/portability/SysMman.h>
    
    void HostHealthMonitor::notifyObservers(HealthLevel newStatus) {
  if (newStatus != m_status) {
    Logger::Warning('Health level (lower is better) changes from %d to %d.',
                    static_cast<int>(m_status), static_cast<int>(newStatus));
    }
    }
    
      void wait();
  bool wait(long seconds); // false if timed out
  bool wait(long seconds, long long nanosecs); // false if timed out
  void notify();
  void notifyAll();
    
      if (m_sendStarted) {
    Logger::Error('trying to add header '%s: %s' after 1st chunk',
                  name, value);
    return;
  }
    
    ArrayData* ArrayCommon::ToKeyset(ArrayData* a, bool) {
  auto const size = a->size();
  if (!size) return staticEmptyKeysetArray();
  KeysetInit init{size};
  IterateVNoInc(
    a,
    [&](TypedValue v) {
      if (UNLIKELY(isRefType(v.m_type))) {
        if (v.m_data.pref->isReferenced()) {
          throwRefInvalidArrayValueException(init.toArray());
        }
        v = *v.m_data.pref->cell();
        assertx(!isRefType(v.m_type));
      }
    }
    }
    
    //////////////////////////////////////////////////////////////////////
    
          for (auto param_offset : recurse_template_params) {
        FTRACE(9, 'linkage: {} depends on template param {}\n',
               offset, param_offset);
        env.linkage_dependents[param_offset].template_uses.emplace(offset);
      }
      if (parent_offset) {
        FTRACE(9, 'linkage: {} depends on child {}\n',
               *parent_offset, offset);
        env.linkage_dependents[*parent_offset].children.emplace(offset);
      }
      break;
    }
    case DW_TAG_namespace: {
      // Record the namespace in the scope and recurse. If this is an unnamed
      // namespace, that means any type found in child DIEs will have internal
      // linkage.
      auto name = dwarf.getDIEName(die);
      name.empty() ?
        scope.pushUnnamedNamespace() :
        scope.pushNamespace(std::move(name));
      SCOPE_EXIT { scope.pop(); };
      recurse();
      break;
    }
    case DW_TAG_variable: {
      // Normally we don't care about variables since we're only looking for
      // types. However, certain aspects of object types can't be completely
      // inferred at the declaration site (mainly static variable linkage
      // related things like linkage name and address). We need a definition for
      // that, so record all the variable definitions along with their
      // specification, which we can consult later.
    
    /*
 * This routine attempts to find the Func* that will be statically called for
 * a given target Class and function name, when called from ctxFunc.
 *
 * If exactClass is true, the class we are targeting is assumed to be
 * exactly `cls', and the returned Func* is definitely the one called.
 *
 * If exactClass is false, the class we are targeting may be a subclass of
 * `cls`, and the returned Func* may be overridden in a subclass.
 *
 * The returned Func* may be used in a request-insensitive way, i.e. it is
 * suitable for burning into the TC as a pointer.
 *
 * It's the caller's responsibility to ensure that the Class* is usable -
 * is AttrUnique, an instance of the ctx or guarded in some way.
 *
 * Returns nullptr if we can't determine the Func*.
 */
const Func* lookupImmutableClsMethod(const Class* cls, const StringData* name,
                                     const Func* ctxFunc, bool exactClass);
    
    
static void check_and_die(int interval, int grace) noexcept {
  assert(interval > 0);
  assert(grace > 0);
  for (;;) {
    // when we get reparented
    // exit immediately
    if (getppid() == 1) {
      sleep(static_cast<unsigned>(grace));
      exit(20);
    }
    sleep(static_cast<unsigned>(interval));
  }
}
    
    
    {  inited.store(true, std::memory_order_release);
}
    
    /*
 * Unique identifier for this hhvm binary, determined at build-time. Unlike
 * compilerId(), this is computed based on the contents of the executable and
 * thus varies depending on the type of build. It cannot be overridden and
 * serves as an id for anything relying on an exact binary.
 */
folly::StringPiece buildId();
    
    bool DEBUG_ONLY checkParams(const php::Func& f) {
  assert(f.params.size() <= f.locals.size());
  for (uint32_t i = 0; i < f.locals.size(); ++i) {
    assert(f.locals[i].id == i);
  }
    }
    
     protected:
  /**
   * @brief Call the genConfig method of the config retriever plugin.
   *
   * This may perform a resource load such as TCP request or filesystem read.
   * If a non-zero value is passed to --config_refresh, this starts a thread
   * that periodically calls genConfig to reload config state
   */
  Status refresh();
    
      // For the remaining tests, we exercise all of the valid platform values.
  fpack.platform_ = 'darwin';
  if (isPlatform(PlatformType::TYPE_OSX)) {
    EXPECT_TRUE(fpack.checkPlatform());
  } else {
    EXPECT_FALSE(fpack.checkPlatform());
  }
    
    #include <rocksdb/db.h>
    
      /** @brief Virtual method which should implement custom logging.
   *
   *  LoggerPlugin::logString should be implemented by a subclass of
   *  LoggerPlugin which needs to log a string in a custom way.
   *
   *  @return an instance of osquery::Status which indicates the success or
   *  failure of the operation.
   */
  virtual Status logString(const std::string& s) = 0;
    
      /// The plugin may publish route info (other than registry type and name).
  virtual PluginResponse routeInfo() const {
    return PluginResponse();
  }
    
    TEST_F(RocksdbDatabaseTest, test_open) {
  auto path = randomDBPath();
  auto db = std::make_unique<RocksdbDatabase>('test', path_);
  auto result = db->open();
  EXPECT_TRUE(result);
  db->close();
}
  double ComputeDualLoss(const double current_dual, const double example_label,
                         const double example_weight) const final {
    // For binary classification, there are 2 conjugate functions, one per
    // label value (-1 and 1).
    const double y_alpha = current_dual * example_label;  // y \alpha
    if (y_alpha < 0 || y_alpha > 1.0) {
      return std::numeric_limits<double>::max();
    }
    return (-y_alpha + 0.5 * gamma * current_dual * current_dual) *
           example_weight;
  }
    
    DeviceProperties GetDeviceInfo(const DeviceNameUtils::ParsedName& device) {
  if (device.type == 'CPU') {
    return GetLocalCPUInfo();
  } else if (device.type == 'GPU') {
    if (device.has_id) {
      return GetLocalGPUInfo(device.id);
    } else {
      return GetLocalGPUInfo(0);
    }
  }
  DeviceProperties result;
  result.set_type('UNKNOWN');
  return result;
}
    
    /** scalar_sigmoid_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a sigmoid
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::sigmoid_fast_derivative()
  */
template <typename T>
struct scalar_sigmoid_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_sigmoid_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return (one - y) * y;
  }
    }
    
    class TextLineReader : public ReaderBase {
 public:
  TextLineReader(const string& node_name, int skip_header_lines, Env* env)
      : ReaderBase(strings::StrCat('TextLineReader '', node_name, ''')),
        skip_header_lines_(skip_header_lines),
        env_(env),
        line_number_(0) {}
    }
    
    
    {}  // namespace nw

    
    RenderView* GetCurrentRenderView() {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::Local<v8::Context> ctx = isolate->GetCurrentContext();
  return GetRenderView(ctx);
}
    
    void Clipboard::SetText(std::string& text) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  ui::Clipboard::ObjectMap map;
  map[ui::Clipboard::CBF_TEXT].push_back(
      std::vector<char>(text.begin(), text.end()));
  clipboard->WriteObjects(ui::CLIPBOARD_TYPE_COPY_PASTE, map);
}
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
      ~EventListener() override;
    
    public:
  /** \brief Create a default Value of the given type.
    
    namespace file_descriptor {
PyObject* NewFileMessageTypesByName(const FileDescriptor* descriptor);
    }
    
    // Find the file that declares the given fully-qualified symbol name.
bool PyDescriptorDatabase::FindFileContainingSymbol(
    const string& symbol_name, FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallMethod(py_database_, 'FindFileContainingSymbol', 's#',
                          symbol_name.c_str(), symbol_name.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    MapFieldGenerator::~MapFieldGenerator() {
}
    
    SourceGeneratorBase::SourceGeneratorBase(const FileDescriptor* descriptor,
                                         const Options *options)
    : descriptor_(descriptor), options_(options) {
}
    
    extern JSClass  *jsb_cocosbuilder_CCBReader_class;
extern JSObject *jsb_cocosbuilder_CCBReader_prototype;
    
    bool js_cocos2dx_navmesh_NavMeshAgent_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_navmesh_NavMeshAgent_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_navmesh_NavMeshAgent(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_navmesh(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_navmesh_NavMeshAgent_setMaxSpeed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_syncToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_completeOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getSeparationWeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setAutoTraverseOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getCurrentVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_syncToAgent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_isOnOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setSeparationWeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_pause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setAutoOrientation(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getMaxSpeed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getCurrentOffMeshLinkData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_resume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_stop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setMaxAcceleration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setOrientationRefAxes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getMaxAcceleration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getObstacleAvoidanceType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setObstacleAvoidanceType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getNavMeshAgentComponentName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_NavMeshAgent(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    	// Track maximum profile times
	{
		const b2Profile& p = m_world->GetProfile();
		m_maxProfile.step = b2Max(m_maxProfile.step, p.step);
		m_maxProfile.collide = b2Max(m_maxProfile.collide, p.collide);
		m_maxProfile.solve = b2Max(m_maxProfile.solve, p.solve);
		m_maxProfile.solveInit = b2Max(m_maxProfile.solveInit, p.solveInit);
		m_maxProfile.solveVelocity = b2Max(m_maxProfile.solveVelocity, p.solveVelocity);
		m_maxProfile.solvePosition = b2Max(m_maxProfile.solvePosition, p.solvePosition);
		m_maxProfile.solveTOI = b2Max(m_maxProfile.solveTOI, p.solveTOI);
		m_maxProfile.broadphase = b2Max(m_maxProfile.broadphase, p.broadphase);
    }
    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.friction = 0.6f;
			fd.density = 2.0f;
			m_platform->CreateFixture(&fd);
    
    namespace xgboost {
namespace common {
    }
    }
    
        for (size_t i = 0; i < page.data.size(); ++i) {
      bst_uint idx = page.data[i].index - min_index_;
      CHECK_LE(idx, static_cast<bst_uint>(std::numeric_limits<StorageIndex>::max()))
          << 'The storage index is chosen to limited to smaller equal than '
          << std::numeric_limits<StorageIndex>::max()
          << 'min_index=' << min_index_;
      index_.data[i] = static_cast<StorageIndex>(idx);
      value_.data[i] = page.data[i].fvalue;
    }
    
    /*!
 * \brief an iterator that iterates over a configure file and gets the configures
 */
class ConfigIterator: public ConfigStreamReader {
 public:
  /*!
   * \brief constructor
   * \param fname name of configure file
   */
  explicit ConfigIterator(const char *fname) : ConfigStreamReader(fi) {
    fi.open(fname);
    if (fi.fail()) {
      LOG(FATAL) << 'cannot open file ' << fname;
    }
    ConfigReaderBase::Init();
  }
  /*! \brief destructor */
  ~ConfigIterator(void) {
    fi.close();
  }
    }
    
    /*!
 * \brief global singleton of a random engine.
 *  This random engine is thread-local and
 *  only visible to current thread.
 */
GlobalRandomEngine& GlobalRandom(); // NOLINT(*)
    
    TEST(Param, SplitEntry) {
  xgboost::tree::SplitEntry se1;
  EXPECT_FALSE(se1.NeedReplace(-1, 100));
    }
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
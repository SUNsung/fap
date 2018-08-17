
        
        Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    #endif //CONTENT_NW_SRC_API_EVENT_EVENT_H_

    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
    void MenuItem::SetSubmenu(Menu* sub_menu) {
  submenu_ = sub_menu;
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    sub_menu->UpdateKeys(gtk_accel_group);
  }
  if (sub_menu == NULL)
    gtk_menu_item_remove_submenu(GTK_MENU_ITEM(menu_item_));
  else
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item_), sub_menu->menu_);
}
    
    class NwAppClearCacheFunction : public NWSyncExtensionFunction, public content::BrowsingDataRemover::Observer {
 public:
  NwAppClearCacheFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
  void OnBrowsingDataRemoverDone() override;
    }
    
    namespace extensions {
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethodAsync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodAsyncFunction);
};
    
    void ComputeJacobians(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                      const IntrinsicParams& param,  InputArray omc, InputArray Tc,
                      const int& check_cond, const double& thresh_cond, Mat& JJ2_inv, Mat& ex3);
    
                template<typename T>
            static __device__ __forceinline__ T atomicAdd(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count;
                unsigned int tag = threadIdx.x << ( (sizeof(unsigned int) << 3) - 5U);
                do
                {
                    count = *address & TAG_MASK;
                    count = tag | (count + val);
                    *address = count;
                } while (*address != count);
    }
    
    #undef cv_hal_gemm32f
#define cv_hal_gemm32f lapack_gemm32f
#undef cv_hal_gemm64f
#define cv_hal_gemm64f lapack_gemm64f
#undef cv_hal_gemm32fc
#define cv_hal_gemm32fc lapack_gemm32fc
#undef cv_hal_gemm64fc
#define cv_hal_gemm64fc lapack_gemm64fc
    
    #if defined(__linux__)
    #include <dlfcn.h>
    #include <stdio.h>
    
    
    {
    {
    {} } } // namespace cv::ocl::runtime
    
    #include 'precomp.hpp'
    
    static void THDTensor_(_set)(THDTensor *self, THDStorage *storage,
                             ptrdiff_t storageOffset, int nDimension,
                             int64_t *size, int64_t *stride) {
  /* storage */
  if (self->storage != storage) {
    if (self->storage)
      THDStorage_(free)(self->storage);
    }
    }
    
    
    {  if (!at::isFloatingType(self.type().scalarType()) || self.dim() > 2 || self.dim() < 1) {
    std::ostringstream ss;
    REPR(ss) << ': expected a 1D or 2D tensor of floating types';
    AT_ERROR(ss.str());
  }
  Tensor input = self;
  if (self.dim() == 1) {
    input = input.unsqueeze(0);
  }
  int64_t batch = input.size(0);
  int64_t len = input.size(1);
  if (n_fft <= 0 || n_fft > len) {
    std::ostringstream ss;
    REPR(ss) << ': expected 0 < n_fft < ' << len
             << ', but got n_fft=' << win_length;
    AT_ERROR(ss.str());
  }
  if (hop_length <= 0) {
    std::ostringstream ss;
    REPR(ss) << ': expected hop_length > 0, but got hop_length=' << hop_length;
    throw std::runtime_error(ss.str());
  }
  if (win_length <= 0 || win_length > n_fft) {
    std::ostringstream ss;
    REPR(ss) << ': expected 0 < win_length <= n_fft, but got win_length='
             << win_length;
    AT_ERROR(ss.str());
  }
  if (window.defined() && (window.dim() != 1 || window.size(0) != win_length)) {
    std::ostringstream ss;
    REPR(ss) << ': expected a 1D window tensor of size equal to win_length='
             << win_length << ', but got window with size ' << window.sizes();
    AT_ERROR(ss.str());
  }
  #undef REPR
  auto window_ = window;
  if (win_length < n_fft) {
    // pad center
    window_ = at::zeros({n_fft}, self.options());
    auto left = (n_fft - win_length) / 2;
    if (window.defined()) {
      window_.narrow(0, left, win_length).copy_(window);
    } else {
      window_.narrow(0, left, win_length).fill_(1);
    }
  }
  int64_t n_frames = 1 + (len - n_fft) / hop_length;
  // time2col
  input = input.as_strided(
    {batch, n_frames, n_fft},
    {input.stride(0), hop_length * input.stride(1), input.stride(1)}
  );
  if (window_.defined()) {
    input = input.mul(window_);
  }
  // rfft and transpose to get (batch x fft_size x num_frames)
  auto out = input.rfft(1, normalized, onesided).transpose_(1, 2);
  if (self.dim() == 1) {
    return out.squeeze_(0);
  } else {
    return out;
  }
}
    
      EMatXf deltas(5, 4);
  deltas << 0.47861834, 0.13992102, 0.14961673, 0.71495209, 0.29915856,
      -0.35664671, 0.89018666, 0.70815367, -0.03852064, 0.44466892, 0.49492538,
      0.71409376, 0.28052918, 0.02184832, 0.65289006, 1.05060139, -0.38172557,
      -0.08533806, -0.60335309, 0.79052375;
    
    template <>
struct CTypeToScalarType<__half> : public CTypeToScalarType<Half> {};
    
        {Functions::storageNew, storageNew},
    {Functions::storageNewWithSize, storageNewWithSize},
    {Functions::storageNewWithSize1, storageNewWithSize1},
    {Functions::storageNewWithSize2, storageNewWithSize2},
    {Functions::storageNewWithSize3, storageNewWithSize3},
    {Functions::storageNewWithSize4, storageNewWithSize4},
    {Functions::storageFree, storageFree},
    {Functions::storageResize, storageResize},
    {Functions::storageFill, storageFill},
    
    PyObject * THPStorage_(newWithFile)(PyObject *_unused, PyObject *file)
{
  HANDLE_TH_ERRORS
  int fd = PyObject_AsFileDescriptor(file);
  THPUtils_assert(fd != -1, '_new_with_file couldn't retrieve a file '
      'descriptor from given object');
  THWStorage *storage = THPStorage_(readFileRaw<int>)(fd, nullptr);
  if (storage == nullptr)
    return nullptr;
  PyObject *result = THPStorage_(New)(storage);
  return result;
  END_HANDLE_TH_ERRORS
}
    
    
    {  if (deleteFunctionQueue.size() == 0) {
    return;
  }
  if (recursion_depth.value() != kDeleteFunctionMaxRecursionDepth) {
    AT_ERROR('Only one deleter per thread should be able to process '
             'the delete queue. Please open an issue.');
  }
  while (deleteFunctionQueue.size() > 0) {
    auto queued_function = deleteFunctionQueue.front();
    deleteFunctionQueue.pop_front();
    delete queued_function;
  }
}
    
    		Variant v = dbs;
		const Variant *vp[2] = { &v, &fi_callback->callback_udata };
    
    
    {		ERR_FAIL_COND_V(main_thread != Thread::get_caller_id(), Vector<Vector2>());
		return physics_2d_server->space_get_contacts(p_space);
	}
    
    	UndoRedo *undo_redo;
	enum {
		MAX_PLUGINS = 1024
	};
	static Ref<EditorInspectorPlugin> inspector_plugins[MAX_PLUGINS];
	static int inspector_plugin_count;
    
    	_FORCE_INLINE_ T get(int p_index) { return _cowdata->get(p_index); }
	_FORCE_INLINE_ const T get(int p_index) const { return _cowdata->get(p_index); }
	_FORCE_INLINE_ void set(int p_index, const T &p_elem) { _cowdata->set(p_index, p_elem); }
	_FORCE_INLINE_ int size() const { return _cowdata->size(); }
	Error resize(int p_size) { return _cowdata->resize(p_size); }
	_FORCE_INLINE_ const T &operator[](int p_index) const { return _cowdata->get(p_index); }
	Error insert(int p_pos, const T &p_val) { return _cowdata->insert(p_pos, p_val); }
    
    	/* LIGHT SHADOW MAPPING */
    
      // Add the specified file at the specified number.
  // REQUIRES: This version has not been saved (see VersionSet::SaveTo)
  // REQUIRES: 'smallest' and 'largest' are smallest and largest keys in file
  void AddFile(int level, uint64_t file,
               uint64_t file_size,
               const InternalKey& smallest,
               const InternalKey& largest) {
    FileMetaData f;
    f.number = file;
    f.file_size = file_size;
    f.smallest = smallest;
    f.largest = largest;
    new_files_.push_back(std::make_pair(level, f));
  }
    
    
    {  // Update state
  last_key_.resize(shared);
  last_key_.append(key.data() + shared, non_shared);
  assert(Slice(last_key_) == key);
  counter_++;
}
    
    uint32_t Hash(const char* data, size_t n, uint32_t seed) {
  // Similar to murmur hash
  const uint32_t m = 0xc6a4a793;
  const uint32_t r = 24;
  const char* limit = data + n;
  uint32_t h = seed ^ (n * m);
    }
    
    
    {  ASSERT_EQ(Hash(0, 0, 0xbc9f1d34), 0xbc9f1d34);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data1), sizeof(data1), 0xbc9f1d34),
      0xef1345c4);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data2), sizeof(data2), 0xbc9f1d34),
      0x5b663814);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data3), sizeof(data3), 0xbc9f1d34),
      0x323c078f);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data4), sizeof(data4), 0xbc9f1d34),
      0xed21633a);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data5), sizeof(data5), 0x12345678),
      0xf333dabb);
}
    
    double Histogram::Average() const {
  if (num_ == 0.0) return 0;
  return sum_ / num_;
}
    
    
    {
    {}  // namespace
}  // namespace leveldb
    
    /// Define a map of decoration points to their expected configuration key.
extern const std::map<DecorationPoint, std::string> kDecorationPointKeys;
    
    #ifdef WIN32
TEST_F(ProcessTests, test_constructorWin) {
  HANDLE handle =
      ::OpenProcess(PROCESS_ALL_ACCESS, FALSE, ::GetCurrentProcessId());
  EXPECT_NE(handle, reinterpret_cast<HANDLE>(nullptr));
    }
    
    Status WmiResultItem::GetUnsignedLong(const std::string& name,
                                      unsigned long& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
  if (hr != S_OK) {
    return Status(-1, 'Error retrieving data from WMI query.');
  }
  if (value.vt != VT_UI4) {
    VariantClear(&value);
    return Status(-1, 'Invalid data type returned.');
  }
  ret = value.lVal;
  VariantClear(&value);
  return Status(0);
}
    
    class RocksDBDatabasePluginTests : public DatabasePluginTests {
 protected:
  std::string name() override {
    return 'rocksdb';
  }
};
    
      /**
   * @brief Continue to flush the queue.
   */
  Status run() override;
    
    class ExampleTable : public TablePlugin {
 private:
  TableColumns columns() const {
    return {
        std::make_tuple('example_text', TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple(
            'example_integer', INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }
    }
    
      /**
   * @brief Purge the oldest logs, if the max is exceeded
   *
   * Uses the buffered_log_max flag to determine the maximum number of buffered
   * logs. If this number is exceeded, the logs with the oldest timestamp are
   * purged. Order of purging for logs with the same timestamp is undefined.
   */
  void purge();
    
    bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DConeTwistConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DConeTwistConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getBFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setFixThresh(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getFrameOffsetB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getFrameOffsetA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getFixThresh(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getSwingSpan2(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getSwingSpan1(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setMaxMotorImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setFrames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getTwistAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_GetPointForAngle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setMaxMotorImpulseNormalized(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getTwistSpan(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setDamping(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_setLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_getAFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_enableMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConeTwistConstraint_Physics3DConeTwistConstraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    #if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    
    
    
    
    	bool ReportFixture(b2Fixture* fixture)
	{
		b2Body* body = fixture->GetBody();
		if (body->GetType() == b2_dynamicBody)
		{
			bool inside = fixture->TestPoint(m_point);
			if (inside)
			{
				m_fixture = fixture;
    }
    }
    }
    
    
    {			m_speed = 3.0f;
		}
    
    		b2BodyDef bd;
		bd.type = b2_dynamicBody;
		bd.position = body1->GetPosition();
		bd.angle = body1->GetAngle();
    
        void __DelOlderTouchTime(uint64_t _time);
    
      EXPECT_FLOAT_EQ(prt_c_d(0, 0), 0.10050251);
  EXPECT_FLOAT_EQ(prt_c_d(0, 1), 0.10050251);
    
      // @brief: Transform 3D position of objects into targeted space
  // @param [in/out] objects : object lists with 3D positions in camera space,
  // which get transformed into targeted 3D space
  virtual bool Transform(
      std::vector<std::shared_ptr<VisualObject>>* objects) = 0;
    
      // Check convexity.
  is_convex_ = true;
  for (int i = 0; i < num_points_; ++i) {
    if (CrossProd(points_[Prev(i)], points_[i], points_[Next(i)]) <=
        -kMathEpsilon) {
      is_convex_ = false;
      break;
    }
  }
    
      /**
   * @brief Get the axis-aligned bound box of the polygon.
   * @return The axis-aligned bound box of the polygon.
   */
  AABox2d AABoundingBox() const;
    
    #include 'modules/perception/traffic_light/recognizer/unity_recognize.h'
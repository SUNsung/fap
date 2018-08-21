
        
        
    {    // passthrough
    bool empty() const              { return m.empty(); }
    size_type size() const          { return m.size(); }
    size_type max_size() const      { return m.max_size(); }
    void clear()                    { m.clear(); }
    iterator begin()                { return m.begin(); }
    iterator end()                  { return m.end(); }
    const_iterator begin() const    { return m.begin(); }
    const_iterator end() const      { return m.end(); }
    const_iterator cbegin() const   { return m.cbegin(); }
    const_iterator cend() const     { return m.cend(); }
};
    
    void DBIter::Prev() {
  assert(valid_);
    }
    
    void AppendInternalKey(std::string* result, const ParsedInternalKey& key) {
  result->append(key.user_key.data(), key.user_key.size());
  PutFixed64(result, PackSequenceAndType(key.sequence, key.type));
}
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
extern std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
      // Evict any entry for the specified file number
  void Evict(uint64_t file_number);
    
    
    {}  // namespace leveldb
    
    TEST(FindFileTest, OverlappingFiles) {
  Add('150', '600');
  Add('400', '500');
  disjoint_sorted_files_ = false;
  ASSERT_TRUE(! Overlaps('100', '149'));
  ASSERT_TRUE(! Overlaps('601', '700'));
  ASSERT_TRUE(Overlaps('100', '150'));
  ASSERT_TRUE(Overlaps('100', '200'));
  ASSERT_TRUE(Overlaps('100', '300'));
  ASSERT_TRUE(Overlaps('100', '400'));
  ASSERT_TRUE(Overlaps('100', '500'));
  ASSERT_TRUE(Overlaps('375', '400'));
  ASSERT_TRUE(Overlaps('450', '450'));
  ASSERT_TRUE(Overlaps('450', '500'));
  ASSERT_TRUE(Overlaps('450', '700'));
  ASSERT_TRUE(Overlaps('600', '700'));
}
    
    // Return a builtin comparator that uses lexicographic byte-wise
// ordering.  The result remains the property of this module and
// must not be deleted.
extern const Comparator* BytewiseComparator();
    
    inline bool operator==(const Slice& x, const Slice& y) {
  return ((x.size() == y.size()) &&
          (memcmp(x.data(), y.data(), x.size()) == 0));
}
    
      N = std::min<int>(labels_.size(), N);
  std::vector<int> maxN = Argmax(output, N);
  std::vector<Prediction> predictions;
  for (int i = 0; i < N; ++i) {
    int idx = maxN[i];
    predictions.push_back(std::make_pair(labels_[idx], output[idx]));
  }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of SigmoidLayer.
 */
template <typename Dtype>
class CuDNNSigmoidLayer : public SigmoidLayer<Dtype> {
 public:
  explicit CuDNNSigmoidLayer(const LayerParameter& param)
      : SigmoidLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSigmoidLayer();
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {  delete tensor;
  delete tensor2;
  cout << 'OK' << endl;
  return 0;
}

    
        SECTION('Iterates in the correct order') {
      auto iterator = cursor.begin();
      REQUIRE(iterator->value.equal(first->tensor1));
      REQUIRE((++iterator)->value.equal(first->tensor2));
      REQUIRE((++iterator)->value.equal(second->tensor1));
      REQUIRE((++iterator)->value.equal(second->tensor2));
    }
    
    Tensor irfft(const Tensor& self, const int64_t signal_ndim, const bool normalized,
             const bool onesided,  IntList signal_sizes) {
  return _fft(self, signal_ndim, /* complex_input */ true,
              /* complex_output */ false, /* inverse */ true, signal_sizes,
              normalized, onesided);
}
    
    bool THPUtils_tryUnpackLongVarArgs(PyObject *args, int ignore_first, THLongStoragePtr& result) {
  Py_ssize_t length = PyTuple_Size(args) - ignore_first;
  if (length < 1) {
    return false;
  }
    }
    
    static PyObject* THPWrapperClass = NULL;
    
    
    {}
    
    template <typename ...Args>
inline std::unique_ptr<RPCMessage> packMessage(
    function_id_type fid,
    const Args&... args
) {
  ByteArray msg(detail::INITIAL_BUFFER_SIZE);
  detail::_appendScalar<function_id_type>(msg, fid);
  detail::_packIntoString(msg, args...);
  return std::unique_ptr<RPCMessage>(new RPCMessage(std::move(msg)));
}
    
    using function_id_type = uint16_t;
    
    #if defined(TH_REAL_IS_BYTE) || defined(TH_REAL_IS_CHAR)
  memcpy(THWStorage_(data)(storage), src + offset, count);
#elif defined(TH_REAL_IS_SHORT)
  THP_decodeInt16Buffer(THWStorage_(data)(storage), src + offset, byte_order, count);
#elif defined(TH_REAL_IS_INT)
  THP_decodeInt32Buffer(THWStorage_(data)(storage), src + offset, byte_order, count);
#elif defined(TH_REAL_IS_LONG)
  // TODO: remove the cast
  THP_decodeInt64Buffer((int64_t*) THWStorage_(data)(storage), src + offset, byte_order, count);
#elif defined(TH_REAL_IS_HALF)
  THP_decodeHalfBuffer(THWStorage_(data)(storage), src + offset, byte_order, count);
#elif defined(TH_REAL_IS_FLOAT)
  THP_decodeFloatBuffer(THWStorage_(data)(storage), src + offset, byte_order, count);
#elif defined(TH_REAL_IS_DOUBLE)
  THP_decodeDoubleBuffer(THWStorage_(data)(storage), src + offset, byte_order, count);
#else
#error 'Unknown type'
#endif
    
    NodeProto MakeNode(
    const std::string& type,
    const std::vector<std::string>& inputs,
    const std::vector<std::string>& outputs,
    const std::vector<AttributeProto>& attributes,
    const std::string& name = '');
    
    
    {			btBody->setCollisionFlags(clearedCurrentFlags | btCollisionObject::CF_CHARACTER_OBJECT);
		}
    
    	Body2DSW *B = body_owner.get(p_body_b);
	ERR_FAIL_COND_V(!B, RID());
    
    
    {		int tm = GLOBAL_DEF('physics/2d/thread_model', 1);
		if (tm == 0) //single unsafe
			return memnew(T);
		else if (tm == 1) //single saef
			return memnew(Physics2DServerWrapMT(memnew(T), false));
		else //single unsafe
			return memnew(Physics2DServerWrapMT(memnew(T), true));
	}
    
    	virtual void body_attach_object_instance_id(RID p_body, uint32_t p_ID) = 0;
	virtual uint32_t body_get_object_instance_id(RID p_body) const = 0;
    
    	/* MESH API */
    
    
    {	editor = p_node;
	play_btn = memnew(Button);
	play_btn->set_icon(editor->get_gui_base()->get_icon('Play', 'EditorIcons'));
	play_btn->set_text(TTR('Play IK'));
	play_btn->set_toggle_mode(true);
	play_btn->hide();
	play_btn->connect('pressed', this, '_play');
	add_control_to_container(CONTAINER_SPATIAL_EDITOR_MENU, play_btn);
	skeleton_ik = NULL;
}
    
    
    {        // perform the operation on one long vector
        msra::math::float4 threshold4(threshold);
        foreach_index (i, us4)
        {
            us4[i] &= ((refs4[i] >= threshold4) | (refs4[i] <= -threshold4));
        }
    }
    
    public:
    // DataWriter Constructor
    // config - [in] configuration parameters for the datareader
    template <class ConfigRecordType>
    DataWriter(const ConfigRecordType& config);
    // constructor from Scripting
    DataWriter(const ScriptableObjects::IConfigRecordPtr configp)
        : DataWriter(*configp)
    {
    }
    virtual ~DataWriter();
    
    void ImGui_ImplFreeGLUT_ReshapeFunc(int w, int h)
{
    ImGuiIO& io = ImGui::GetIO();
    io.DisplaySize = ImVec2((float)w, (float)h);
}
    
            // Rendering
        ImGui::Render();
        IwGxSetColClear(clear_color.x * 255, clear_color.y * 255, clear_color.z * 255, clear_color.w * 255);
        IwGxClear();
        ImGui_Marmalade_RenderDrawData(ImGui::GetDrawData());
        IwGxSwapBuffers();
    
            ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
        ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
        ImGui::Checkbox('Another Window', &show_another_window);
    
            // Start the Dear ImGui frame
        ImGui_ImplOpenGL2_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();
    
        UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D10_CREATE_DEVICE_DEBUG;
    if (D3D10CreateDeviceAndSwapChain(NULL, D3D10_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, D3D10_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice) != S_OK)
        return E_FAIL;
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    void ImGui_ImplSDL2_NewFrame(SDL_Window* window)
{
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(io.Fonts->IsBuilt());     // Font atlas needs to be built, call renderer _NewFrame() function e.g. ImGui_ImplOpenGL3_NewFrame() 
    }
    
      if (options->Has(String::NewSymbol('target_level')) &&
      options->Get(String::NewSymbol('target_level'))->IsInt32()) {
    target_level = (int)(options->Get(
        String::NewSymbol('target_level'))->ToInt32()->Value());
    }
    
    TEST_F(MockEnvTest, Corrupt) {
  const std::string kGood = 'this is a good string, synced to disk';
  const std::string kCorrupted = 'this part may be corrupted';
  const std::string kFileName = '/dir/f';
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(kFileName, &writable_file, soptions_));
  ASSERT_OK(writable_file->Append(kGood));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size());
    }
    
    
    {} // namespace rocksdb

    
    #include <jni.h>
#include <memory>
    
      // # persistent cache hit
  PERSISTENT_CACHE_HIT,
  // # persistent cache miss
  PERSISTENT_CACHE_MISS,
    
    CompactedDBImpl::CompactedDBImpl(
  const DBOptions& options, const std::string& dbname)
  : DBImpl(options, dbname), cfd_(nullptr), version_(nullptr),
    user_comparator_(nullptr) {
}
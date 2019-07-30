
        
        v8::Local<v8::Object> Dictionary::GetHandle() const {
  return object_;
}
    
    Arguments::Arguments()
    : isolate_(NULL), info_(NULL), next_(0), insufficient_arguments_(false) {}
    
      template <typename T>
  bool GetNext(T* out) {
    if (next_ >= info_->Length()) {
      insufficient_arguments_ = true;
      return false;
    }
    v8::Local<v8::Value> val = (*info_)[next_];
    bool success = ConvertFromV8(isolate_, val, out);
    if (success)
      next_++;
    return success;
  }
    
    
    { private:
  v8::Local<v8::Promise::Resolver> resolver_;
};
    
    #ifndef NATIVE_MATE_NATIVE_MATE_WRAPPABLE_H_
#define NATIVE_MATE_NATIVE_MATE_WRAPPABLE_H_
    
      static void FirstWeakCallback(
      const v8::WeakCallbackInfo<WrappableBase>& data);
  static void SecondWeakCallback(
      const v8::WeakCallbackInfo<WrappableBase>& data);
    
    void AtomURLRequest::RemoveExtraHeader(const std::string& name) const {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
  base::PostTaskWithTraits(
      FROM_HERE, {content::BrowserThread::IO},
      base::BindOnce(&AtomURLRequest::DoRemoveExtraHeader, this, name));
}
    
    namespace electron {
    }
    
      void pollAndSchedule(int task_id);
  void schedule(int task_id, bool run_inline = false) noexcept;
  void reset() override;
  virtual void finishRun();
  void parentCallback(int parent_id);
  bool isInlineTask(int parent_id, int child_id) const;
    
    namespace caffe2 {
namespace {
REGISTER_CPU_OPERATOR(
    FindDuplicateElements,
    FindDuplicateElementsOp<CPUContext>);
    }
    }
    
    namespace caffe2 {
    }
    
    OPERATOR_SCHEMA(Im2Col)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc('The Im2Col operator from Matlab.')
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          ArgumentHelper helper(def);
          auto pad = helper.GetSingleArgument<int>('pad', 0);
          auto kernel_h = helper.GetSingleArgument<int>(
              'kernel_h', helper.GetSingleArgument<int>('kernel', 0));
          auto kernel_w = helper.GetSingleArgument<int>(
              'kernel_w', helper.GetSingleArgument<int>('kernel', 0));
          auto dilation_h = helper.GetSingleArgument<int>(
              'dilation_h', helper.GetSingleArgument<int>('dilation', 1));
          auto dilation_w = helper.GetSingleArgument<int>(
              'dilation_w', helper.GetSingleArgument<int>('dilation', 1));
          auto stride_h = helper.GetSingleArgument<int>(
              'stride_h', helper.GetSingleArgument<int>('stride', 1));
          auto stride_w = helper.GetSingleArgument<int>(
              'stride_w', helper.GetSingleArgument<int>('stride', 1));
          auto order = StringToStorageOrder(
              helper.GetSingleArgument<string>('order', 'NCHW'));
    }
    
      EXPECT_EQ(this->blob_top_label2_->num_axes(), 2);
  EXPECT_EQ(this->blob_top_label2_->shape(0), batch_size);
  EXPECT_EQ(this->blob_top_label2_->shape(1), 1);
    
    REGISTER_LAYER_CREATOR(Sigmoid, GetSigmoidLayer);
    
    template <typename Dtype>
void InnerProductLayer<Dtype>::Backward_cpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down,
    const vector<Blob<Dtype>*>& bottom) {
  if (this->param_propagate_down_[0]) {
    const Dtype* top_diff = top[0]->cpu_diff();
    const Dtype* bottom_data = bottom[0]->cpu_data();
    // Gradient with respect to weight
    if (transpose_) {
      caffe_cpu_gemm<Dtype>(CblasTrans, CblasNoTrans,
          K_, N_, M_,
          (Dtype)1., bottom_data, top_diff,
          (Dtype)1., this->blobs_[0]->mutable_cpu_diff());
    } else {
      caffe_cpu_gemm<Dtype>(CblasTrans, CblasNoTrans,
          N_, K_, M_,
          (Dtype)1., top_diff, bottom_data,
          (Dtype)1., this->blobs_[0]->mutable_cpu_diff());
    }
  }
  if (bias_term_ && this->param_propagate_down_[1]) {
    const Dtype* top_diff = top[0]->cpu_diff();
    // Gradient with respect to bias
    caffe_cpu_gemv<Dtype>(CblasTrans, M_, N_, (Dtype)1., top_diff,
        bias_multiplier_.cpu_data(), (Dtype)1.,
        this->blobs_[1]->mutable_cpu_diff());
  }
  if (propagate_down[0]) {
    const Dtype* top_diff = top[0]->cpu_diff();
    // Gradient with respect to bottom data
    if (transpose_) {
      caffe_cpu_gemm<Dtype>(CblasNoTrans, CblasTrans,
          M_, K_, N_,
          (Dtype)1., top_diff, this->blobs_[0]->cpu_data(),
          (Dtype)0., bottom[0]->mutable_cpu_diff());
    } else {
      caffe_cpu_gemm<Dtype>(CblasNoTrans, CblasNoTrans,
          M_, K_, N_,
          (Dtype)1., top_diff, this->blobs_[0]->cpu_data(),
          (Dtype)0., bottom[0]->mutable_cpu_diff());
    }
  }
}
    
      // Helpers for Init.
  /**
   * @brief Remove layers that the user specified should be excluded given the current
   *        phase, level, and stage.
   */
  static void FilterNet(const NetParameter& param,
      NetParameter* param_filtered);
  /// @brief return whether NetState state meets NetStateRule rule
  static bool StateMeetsRule(const NetState& state, const NetStateRule& rule,
      const string& layer_name);
    
    namespace caffe {
    }
    
    /* Load the mean file in binaryproto format. */
void Classifier::SetMean(const string& mean_file) {
  BlobProto blob_proto;
  ReadProtoFromBinaryFileOrDie(mean_file.c_str(), &blob_proto);
    }
    
      inline int offset(const vector<int>& indices) const {
    CHECK_LE(indices.size(), num_axes());
    int offset = 0;
    for (int i = 0; i < num_axes(); ++i) {
      offset *= shape(i);
      if (indices.size() > i) {
        CHECK_GE(indices[i], 0);
        CHECK_LT(indices[i], shape(i));
        offset += indices[i];
      }
    }
    return offset;
  }
  /**
   * @brief Copy from a source Blob.
   *
   * @param source the Blob to copy from
   * @param copy_diff if false, copy the data; if true, copy the diff
   * @param reshape if false, require this Blob to be pre-shaped to the shape
   *        of other (and die otherwise); if true, Reshape this Blob to other's
   *        shape if necessary
   */
  void CopyFrom(const Blob<Dtype>& source, bool copy_diff = false,
      bool reshape = false);
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a cv::Mat
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See image_data_layer.cpp for an example.
   */
  void Transform(const cv::Mat& cv_img, Blob<Dtype>* transformed_blob);
#endif  // USE_OPENCV
    
    	/*
	Convert legacy user-aliases.cmd to new name user_aliases.cmd
	*/
	PathCombine(legacyUserAliasesPath, configDirPath, L'user-aliases.cmd');
	if (PathFileExists(legacyUserAliasesPath))
	{
		PathCombine(userAliasesPath, configDirPath, L'user_aliases.cmd');
    }
    
    /* QuadricCallback */
/*      GLU_ERROR */
    
    private:
  struct Interval {
    Interval(Object *dict, int baseA);
    ~Interval();
    GooString *prefix;
    enum NumberStyle {
      None,
      Arabic,
      LowercaseRoman,
      UppercaseRoman,
      UppercaseLatin,
      LowercaseLatin
    } style;
    int first, base, length;
  };
    
      // get alignment
  if (dict->lookup('Dm', &obj)->isName()) {
    const char *dm = obj.getName();
    
    if (strcmp('H', dm) == 0)
      alignment = transitionHorizontal;
    else if (strcmp('V', dm) == 0)
      alignment = transitionVertical;
  }
  obj.free();
    
    #ifndef Sound_H
#define Sound_H
    
        mat[0] = (SplashCoord)width;
    mat[1] = 0;
    mat[2] = 0;
    mat[3] = (SplashCoord)height;
    mat[4] = 0;
    mat[5] = 0;
    imgMaskData.imgStr = new ImageStream(maskStr, maskWidth, 1, 1);
    imgMaskData.imgStr->reset();
    imgMaskData.invert = maskInvert ? 0 : 1;
    imgMaskData.width = maskWidth;
    imgMaskData.height = maskHeight;
    imgMaskData.y = 0;
    maskBitmap = new SplashBitmap(width, height, 1, splashModeMono1, gFalse);
    maskSplash = new Splash(maskBitmap, gFalse);
    maskColor[0] = 0;
    maskSplash->clear(maskColor);
    maskColor[0] = 0xff;
    maskSplash->setFillPattern(new SplashSolidColor(maskColor));
    maskSplash->fillImageMask(&imageMaskSrc, &imgMaskData,
			      maskWidth, maskHeight, mat, gFalse);
    delete imgMaskData.imgStr;
    maskStr->close();
    delete maskSplash;
    
      //----- special access
    
    #include <mongo/bson/timestamp.h>
#include <mongo/db/catalog/collection.h>
#include <mongo/db/namespace_string.h>
#include <mongo/db/operation_context.h>
#include <mongo/db/repl/oplog.h>
#include <mongo/db/service_context.h>
#include <mongo/stdx/mutex.h>
    
    /**
 * Provides the minimal api for a simple out of line executor that can run non-cancellable
 * callbacks.
 *
 * The contract for scheduling work on an executor is that it never blocks the caller.  It doesn't
 * necessarily need to offer forward progress guarantees, but actual calls to schedule() should not
 * deadlock.
 *
 * If you manage the lifetime of your executor using a shared_ptr, you can begin a chain of
 * execution like this:
 *      ExecutorFuture(myExec)
 *          .then([] { return doThing1(); })
 *          .then([] { return doThing2(); })
 *          ...
 */
class OutOfLineExecutor {
public:
    using Task = unique_function<void(Status)>;
    }
    
        auto queryObj = cmd.getQuery();
    if (!queryObj.isEmpty()) {
        BSONObjBuilder matchBuilder(pipelineBuilder.subobjStart());
        matchBuilder.append('$match', queryObj);
        matchBuilder.doneFast();
    }
    
        /**
     * If the last oplog timestamp is being tracked for this PlanExecutor, return it.
     * Otherwise return a null timestamp.
     */
    virtual Timestamp getLatestOplogTimestamp() const = 0;
    
    Collator &
RuleBasedCollator::setMaxVariable(UColReorderCode group, UErrorCode &errorCode) {
    if(U_FAILURE(errorCode)) { return *this; }
    // Convert the reorder code into a MaxVariable number, or UCOL_DEFAULT=-1.
    int32_t value;
    if(group == UCOL_REORDER_CODE_DEFAULT) {
        value = UCOL_DEFAULT;
    } else if(UCOL_REORDER_CODE_FIRST <= group && group <= UCOL_REORDER_CODE_CURRENCY) {
        value = group - UCOL_REORDER_CODE_FIRST;
    } else {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return *this;
    }
    CollationSettings::MaxVariable oldValue = settings->getMaxVariable();
    if(value == oldValue) {
        setAttributeExplicitly(ATTR_VARIABLE_TOP);
        return *this;
    }
    const CollationSettings &defaultSettings = getDefaultSettings();
    if(settings == &defaultSettings) {
        if(value == UCOL_DEFAULT) {
            setAttributeDefault(ATTR_VARIABLE_TOP);
            return *this;
        }
    }
    CollationSettings *ownedSettings = SharedObject::copyOnWrite(settings);
    if(ownedSettings == NULL) {
        errorCode = U_MEMORY_ALLOCATION_ERROR;
        return *this;
    }
    }
    
    U_CAPI int8_t U_EXPORT2
uhash_compareScriptSet(UElement key0, UElement key1) {
    icu::ScriptSet *s0 = static_cast<icu::ScriptSet *>(key0.pointer);
    icu::ScriptSet *s1 = static_cast<icu::ScriptSet *>(key1.pointer);
    int32_t diff = s0->countMembers() - s1->countMembers();
    if (diff != 0) return diff;
    int32_t i0 = s0->nextSetBit(0);
    int32_t i1 = s1->nextSetBit(0);
    while ((diff = i0-i1) == 0 && i0 > 0) {
        i0 = s0->nextSetBit(i0+1);
        i1 = s1->nextSetBit(i1+1);
    }
    return (int8_t)diff;
}
    
    void
SelectFormat::applyPattern(const UnicodeString& newPattern, UErrorCode& status) {
    if (U_FAILURE(status)) {
      return;
    }
    }
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};
    
        // Will project scissor/clipping rectangles into framebuffer space
    ImVec2 clip_off = draw_data->DisplayPos;         // (0,0) unless using multi-viewports
    ImVec2 clip_scale = draw_data->FramebufferScale; // (1,1) unless using retina display which are often (2,2)
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    
        // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
    if (show_demo_window)
        ImGui::ShowDemoWindow(&show_demo_window);
    
    
    {    // Setup orthographic projection matrix
    // Our visible imgui space lies from draw_data->DisplayPos (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right). DisplayPos is (0,0) for single viewport apps.
    // Being agnostic of whether <d3dx9.h> or <DirectXMath.h> can be used, we aren't relying on D3DXMatrixIdentity()/D3DXMatrixOrthoOffCenterLH() or DirectX::XMMatrixIdentity()/DirectX::XMMatrixOrthographicOffCenterLH()
    {
        float L = draw_data->DisplayPos.x + 0.5f;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x + 0.5f;
        float T = draw_data->DisplayPos.y + 0.5f;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y + 0.5f;
        D3DMATRIX mat_identity = { { { 1.0f, 0.0f, 0.0f, 0.0f,  0.0f, 1.0f, 0.0f, 0.0f,  0.0f, 0.0f, 1.0f, 0.0f,  0.0f, 0.0f, 0.0f, 1.0f } } };
        D3DMATRIX mat_projection =
        { { {
            2.0f/(R-L),   0.0f,         0.0f,  0.0f,
            0.0f,         2.0f/(T-B),   0.0f,  0.0f,
            0.0f,         0.0f,         0.5f,  0.0f,
            (L+R)/(L-R),  (T+B)/(B-T),  0.5f,  1.0f
        } } };
        g_pd3dDevice->SetTransform(D3DTS_WORLD, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_VIEW, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_PROJECTION, &mat_projection);
    }
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
    	if (inet_aton(string, &tmp)) {
		sin->sin_addr.s_addr = tmp.s_addr;
	} else {
#if PHP_VERSION_ID >= 70006
	    if (strlen(string) > MAXFQDNLEN || ! (host_entry = php_network_gethostbyname(string))) {
#else
        if (strlen(string) > MAXFQDNLEN || ! (host_entry = gethostbyname(string))) {
#endif
			/* Note: < -10000 indicates a host lookup error */
			PHP_SWOOLE_SOCKET_ERROR(php_sock, 'Host lookup failed', (-10000 - h_errno));
			return 0;
		}
		if (host_entry->h_addrtype != AF_INET) {
			php_error_docref(NULL, E_WARNING, 'Host lookup failed: Non AF_INET domain returned on AF_INET socket');
			return 0;
		}
		memcpy(&(sin->sin_addr.s_addr), host_entry->h_addr_list[0], host_entry->h_length);
	}
    }
    
        while (offset < stack_size_)
    {
        if (memcmp((char*) sp - offset + (sizeof(MAGIC_STRING) - 1), SW_STRL(MAGIC_STRING)) != 0)
        {
            retval = offset * 2;
        }
        offset *= 2;
    }
    
    bool zend::include(std::string file)
{
    zend_file_handle file_handle;
    int ret = php_stream_open_for_zend_ex(file.c_str(), &file_handle, USE_PATH | STREAM_OPEN_FOR_INCLUDE);
    if (ret != SUCCESS)
    {
        return false;
    }
    }
    
    
    {    int n = snprintf(resp_data, SW_IPC_BUFFER_SIZE, 'Server: %.*s\n', req->info.len, req->data);
    ret = serv->send(serv, req->info.fd, resp_data, n);
    if (ret < 0)
    {
        printf('send to client fail. errno=%d\n', errno);
    }
    else
    {
        printf('send %d bytes to client success. data=%s\n', n, resp_data);
    }
    return SW_OK;
}
    
        coro_test({
        make_pair([](void *arg)
        {
            auto chan = (Channel *) arg;
    }
    }
    
    static swMemoryPool *pool = NULL;
    
    	if (username_jstr != NULL) {
		info.username = ScopedJstring(env, username_jstr).GetChar();
		env->DeleteLocalRef(username_jstr);
	}
    
        if (0 < _send || 0 < _recv) {
        if (kMobile != getNetInfo())
            wifi_recv_data_size_ += _recv;
        else
            mobile_recv_data_size_ += _recv;
    }
    
    void ActiveLogic::OnForeground(bool _isforeground)
{
	if (MessageQueue::GetDefMessageQueue()!=MessageQueue::CurrentThreadMessageQueue())
	{
        MessageQueue::AsyncInvoke(boost::bind(&ActiveLogic::OnForeground, this, _isforeground), (MessageQueue::MessageTitle_t)this, mq::DefAsyncInvokeHandler(mq::GetDefMessageQueue()), 'ActiveLogic::OnForeground');
		return;
	}
    }
    
    
    {    return ret;
}
    
    size_t AutoBuffer::Capacity() const {
    return capacity_;
}
    
    
    {    __DeleteLogAlloc(_p, __FILE__, __LINE__, __FUNCTION__, ECPPType);
    free(_p);
}
    
    typedef union {
    uint32_t dummy;        /* Helps align structure. */
    struct    sockaddr u_sa;
    u_short    u_data[128];
} sa_u;
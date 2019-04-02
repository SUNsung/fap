
        
        IPC_SYNC_MESSAGE_ROUTED4_1(ShellViewHostMsg_Call_Object_Method_Sync,
                           int /* object id */,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    void GetRenderProcessHosts(std::set<RenderProcessHost*>& rphs) {
  RenderProcessHost* render_process_host = NULL;
  std::vector<Shell*> windows = Shell::windows();
  for (size_t i = 0; i < windows.size(); ++i) {
    if (!windows[i]->is_devtools()) {
      render_process_host = windows[i]->web_contents()->GetRenderProcessHost();
      rphs.insert(render_process_host);
    }
  }
}
    
      // Quit the whole app.
  static void Quit(content::RenderProcessHost* rph = NULL);
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    class MenuDelegate : public ui::SimpleMenuModel::Delegate {
 public:
  MenuDelegate(ObjectManager* object_manager);
  ~MenuDelegate() override;
    }
    
    void MenuItem::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    if (enable_shortcut_){
      focus_manager->RegisterAccelerator(
        accelerator_,
        ui::AcceleratorManager::kHighPriority,
        this);
    }
    if (submenu_ != NULL){
      submenu_->UpdateKeys(focus_manager);
    }
  }
}
    
    class NwAppCloseAllWindowsFunction : public UIThreadExtensionFunction {
 public:
  NwAppCloseAllWindowsFunction() {}
    }
    
          // strip off data uri header if raw is set
      if (!(data.raw.get() && *(data.raw))) {
        if (data.type == TYPE_PNG && base::StartsWith(content, kPNGDataUriPrefix, base::CompareCase::INSENSITIVE_ASCII)) {
          content = content.substr(strlen(kPNGDataUriPrefix));
        } else if (data.type == TYPE_JPEG && base::StartsWith(content, kJPEGDataUriPrefix, base::CompareCase::INSENSITIVE_ASCII)) {
          content = content.substr(strlen(kJPEGDataUriPrefix));
        } else {
          error_ = base::StringPrintf('Invalid data URI. Only \'%s\' or \'%s\' is accepted.', kPNGDataUriPrefix, kJPEGDataUriPrefix);
          return false;
        }
      }
    
    
    {    *context = (cvhalFilter2D*)(ctx);
    return CV_HAL_ERROR_OK;
}
inline int TEGRA_MORPHFREE(cvhalFilter2D *context)
{
    if(context)
    {
        delete (MorphCtx*)context;
        return CV_HAL_ERROR_OK;
    }
    else
    {
        return CV_HAL_ERROR_UNKNOWN;
    }
}
#define TEGRA_MORPHIMPL(context, src_data, src_step, dst_data, dst_step, width, height, src_full_width, src_full_height, src_roi_x, src_roi_y, dst_full_width, dst_full_height, dst_roi_x, dst_roi_y) \
( \
    (void)dst_full_width, (void)dst_full_height, (void)dst_roi_x, (void)dst_roi_y, \
    context && CAROTENE_NS::isSupportedConfiguration() ? \
        ((MorphCtx*)context)->operation == CV_HAL_MORPH_ERODE ? \
        CAROTENE_NS::erode(CAROTENE_NS::Size2D(width, height), ((MorphCtx*)context)->channels, \
                           src_data, src_step, dst_data, dst_step, \
                           ((MorphCtx*)context)->ksize, ((MorphCtx*)context)->anchor_x, ((MorphCtx*)context)->anchor_y, \
                           ((MorphCtx*)context)->border, ((MorphCtx*)context)->border, ((MorphCtx*)context)->borderValues, \
                           CAROTENE_NS::Margin(src_roi_x, src_full_width - width - src_roi_x, src_roi_y, src_full_height - height - src_roi_y)), \
        CV_HAL_ERROR_OK : \
        ((MorphCtx*)context)->operation == CV_HAL_MORPH_DILATE ? \
        CAROTENE_NS::dilate(CAROTENE_NS::Size2D(width, height), ((MorphCtx*)context)->channels, \
                            src_data, src_step, dst_data, dst_step, \
                            ((MorphCtx*)context)->ksize, ((MorphCtx*)context)->anchor_x, ((MorphCtx*)context)->anchor_y, \
                            ((MorphCtx*)context)->border, ((MorphCtx*)context)->border, ((MorphCtx*)context)->borderValues, \
                            CAROTENE_NS::Margin(src_roi_x, src_full_width - width - src_roi_x, src_roi_y, src_full_height - height - src_roi_y)), \
        CV_HAL_ERROR_OK : \
        CV_HAL_ERROR_NOT_IMPLEMENTED \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
        void thresholdBinary(const Size2D &size,
                         const s16 *srcBase, ptrdiff_t srcStride,
                         s16 *dstBase, ptrdiff_t dstStride,
                         s16 threshold, s16 value);
    
            if(cn > 1)
        {
            for(size_t j = 0, jn = 0; j < size.width; ++j, jn += cn)
            {
                size_t maxIdx = jn;
                for(s32 k = 1; k < cn; ++k)
                    if(_norm[jn + k] > _norm[maxIdx]) maxIdx = jn + k;
                _norm[j] = _norm[maxIdx];
                _dx[j] = _dx[maxIdx];
                _dy[j] = _dy[maxIdx];
            }
        }
    
            vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        float32x4_t vline1Shifted_f32 = vaddq_f32(vline1_f32, vshift);
        float32x4_t vline2Shifted_f32 = vaddq_f32(vline2_f32, vshift);
        uint32x4_t vline1_u32 = vcvtq_u32_f32(vline1Shifted_f32);
        uint32x4_t vline2_u32 = vcvtq_u32_f32(vline2Shifted_f32);
        uint32x4_t vline1Mask = vbicq_u32(vmask, vreinterpretq_u32_f32(vline2_f32));
        uint32x4_t vline2Mask = vbicq_u32(vmask, vreinterpretq_u32_f32(vline1Shifted_f32));
        vline1Mask = vshrq_n_u32(vline1Mask, 16);
        vline2Mask = vshrq_n_u32(vline2Mask, 16);
        vline1_u32 = vqsubq_u32(vline1_u32, vline1Mask);
        vline2_u32 = vqsubq_u32(vline2_u32, vline2Mask);
        uint16x4_t vRes1 = vqrshrn_n_u32(vline1_u32, 16);
        uint16x4_t vRes2 = vqrshrn_n_u32(vline2_u32, 16);
        uint8x8_t vRes = vqmovn_u16(vcombine_u16(vRes1, vRes2));
    
    inline float32x2_t vrsqrt_f32(float32x2_t val)
{
    float32x2_t e = vrsqrte_f32(val);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    return e;
}
    
    #ifdef USE_OPENCV
  /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Mat.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<cv::Mat> & mat_vector,
                Blob<Dtype>* transformed_blob);
    
    #include <vector>
    
    
    {}  // namespace caffe
    
    
    {
    {  // Recursive copy function: this is similar to crop_copy() but loops over all
  // but the last two dimensions to allow for ND cropping while still relying on
  // a CUDA kernel for the innermost two dimensions for performance reasons.  An
  // alterantive implementation could rely on the kernel more by passing
  // offsets, but this is problematic because of its variable length.
  // Since in the standard (N,C,W,H) case N,C are usually not cropped a speedup
  // could be achieved by not looping the application of the copy_kernel around
  // these dimensions.
  void crop_copy_gpu(const vector<Blob<Dtype>*>& bottom,
                const vector<Blob<Dtype>*>& top,
                const vector<int>& offsets,
                vector<int> indices,
                int cur_dim,
                const Dtype* src_data,
                Dtype* dest_data,
                bool is_forward);
};
}  // namespace caffe
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    namespace mxnet {
namespace exec {
    }
    }
    
        if (param_.mean_r > 0.0f || param_.mean_g > 0.0f ||
        param_.mean_b > 0.0f || param_.mean_a > 0.0f) {
      // subtract mean per channel
      data[0] -= param_.mean_r;
      if (data.shape_[0] >= 3) {
        data[1] -= param_.mean_g;
        data[2] -= param_.mean_b;
      }
      if (data.shape_[0] == 4) {
        data[3] -= param_.mean_a;
      }
    } else if (!meanfile_ready_ || param_.mean_img.length() == 0) {
      // do not subtract anything
    } else {
      CHECK(meanfile_ready_);
      data -= meanimg_;
    }
    
    
    {  // sorted position of constant arguments
  std::vector<int> const_loc;
  for (int i = 0; i < num_const; ++i) {
    const_loc.push_back(wrap_args[i + 3].operator int());
  }
  std::sort(const_loc.begin(), const_loc.end());
  // wrapped function
  // This is the function that called by the user.
  auto wrapped = [f, fset_stream, const_loc](TVMArgs args, TVMRetValue* rv) {
    std::shared_ptr<TVMFunctor> func =
      std::make_shared<TVMFunctor>(f, fset_stream);
    std::vector<Engine::VarHandle> const_vars, mutate_vars;
    func->Init(args, const_loc, &const_vars, &mutate_vars);
    Engine *engine = Engine::Get();
    engine->DeduplicateVarHandle(&const_vars, &mutate_vars);
    engine->PushSync([func](RunContext ctx) {
        func->Run(ctx);
      }, func->ctx(), const_vars, mutate_vars);
  };
  *wrap_rv = PackedFunc(wrapped);
}
    
    Operator* NativeOpProp::CreateOperator(Context ctx) const {
  DO_BIND_DISPATCH(CreateOp, param_);
}
    
    
    {  CHECK(param_.pinfo->backward(ptrs.size(), ptrs.data(), tags.data(), param_.pinfo->p_backward));
  Engine::Get()->PushAsync(
      [ndcpy, ctx](RunContext rctx, Engine::CallbackOnComplete on_complete){
        ctx.async_on_complete();
        on_complete();
      }, ndctx, ndvar, {}, FnProperty::kNormal, 0, 'NDArrayOpBackward');
}
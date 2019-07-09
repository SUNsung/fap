
        
          // Creates a CertificateManagerModel. The model will be passed to the callback
  // when it is ready. The caller must ensure the model does not outlive the
  // |browser_context|.
  static void Create(content::BrowserContext* browser_context,
                     const CreationCallback& callback);
    
    Dictionary::Dictionary(const Dictionary& other) = default;
    
    v8::MaybeLocal<v8::Object> WrappableBase::GetWrapper(
    v8::Isolate* isolate) const {
  if (!wrapper_.IsEmpty())
    return v8::MaybeLocal<v8::Object>(
        v8::Local<v8::Object>::New(isolate, wrapper_));
  else
    return v8::MaybeLocal<v8::Object>();
}
    
      WrappableBase* object;
  {
    // Don't continue if the constructor throws an exception.
    v8::TryCatch try_catch(isolate);
    object = internal::InvokeFactory(args, factory);
    if (try_catch.HasCaught()) {
      try_catch.ReThrow();
      return;
    }
  }
    
    namespace mate {
    }
    
    void ProcessSingleton::LinuxWatcher::HandleMessage(
    const std::string& current_dir,
    const std::vector<std::string>& argv,
    SocketReader* reader) {
  DCHECK(ui_task_runner_->BelongsToCurrentThread());
  DCHECK(reader);
    }
    
    #include 'base/environment.h'
#include 'base/process/launch.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/win/windows_version.h'
#include 'content/public/app/sandbox_helper_win.h'
#include 'sandbox/win/src/sandbox_types.h'
#include 'shell/app/atom_main_delegate.h'
#include 'shell/app/command_line_args.h'
#include 'shell/common/crash_reporter/win/crash_service_main.h'
#elif defined(OS_LINUX)  // defined(OS_WIN)
#include <unistd.h>
#include <cstdio>
#include 'content/public/app/content_main.h'
#include 'shell/app/atom_main_delegate.h'  // NOLINT
#else                                      // defined(OS_LINUX)
#include <mach-o/dyld.h>
#include <unistd.h>
#include <cstdio>
#include 'shell/app/atom_library_main.h'
#endif  // defined(OS_MACOSX)
    
    /**
 * @brief Applies common transformations to the input data, such as
 * scaling, mirroring, substracting the image mean...
 */
template <typename Dtype>
class DataTransformer {
 public:
  explicit DataTransformer(const TransformationParameter& param, Phase phase);
  virtual ~DataTransformer() {}
    }
    
      // Get a layer using a LayerParameter.
  static shared_ptr<Layer<Dtype> > CreateLayer(const LayerParameter& param) {
    if (Caffe::root_solver()) {
      LOG(INFO) << 'Creating layer ' << param.name();
    }
    const string& type = param.type();
    CreatorRegistry& registry = Registry();
    CHECK_EQ(registry.count(type), 1) << 'Unknown layer type: ' << type
        << ' (known types: ' << LayerTypeListString() << ')';
    return registry[type](param);
  }
    
    #include <vector>
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
    #include <vector>
    
      for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    const auto& inode = idx[nid];
    if (inode.source->op() != ewise_plus_op) continue;
    int sid = storage_id[idx.entry_id(inode.inputs[0])];
    if (sid != storage_id[idx.entry_id(nid, 0)]) continue;
    if (idx[inode.inputs[0].node_id].source->is_variable()) continue;
    if (idx[inode.inputs[1].node_id].source->is_variable()) continue;
    uint32_t eid_rhs  = idx.entry_id(inode.inputs[1]);
    if (ref_count[eid_rhs] != 1) continue;
    if (inode.inputs[0].node_id >= inode.inputs[1].node_id) continue;
    // TODO(haibin) support inplace addto for Dynamic Storage
    if (storage_id[eid_rhs] == kDynamicStorageID) continue;
    CHECK_NE(storage_id[eid_rhs], sid);
    storage_id[eid_rhs] = sid;
    addto_entry[eid_rhs] = 1;
    storage_inplace_index[eid_rhs] = -1;
    skip_plus_node[nid] = 1;
  }
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file iter_normalize.h
 * \brief Iterator that subtracts mean and do a few augmentations.
 */
#ifndef MXNET_IO_ITER_NORMALIZE_H_
#define MXNET_IO_ITER_NORMALIZE_H_
    
    template<typename xpu>
void Dequantize2BitKernelLaunch(mshadow::Stream<xpu> *s, const std::vector<mxnet::TBlob> &inputs,
                                const float threshold) {
  mxnet::op::mxnet_op::Kernel<dequantize_2bit, xpu>
  ::Launch(s,
          inputs[1].Size(),         // original size
          inputs[1].dptr<float>(),  // out array
          inputs[0].dptr<float>(),  // compressed array
          -1 *threshold,            // negative threshold
          threshold);               // positive threshold
}
    
      virtual void Backward(const OpContext &ctx,
                        const std::vector<TBlob> &out_grad,
                        const std::vector<TBlob> &in_data,
                        const std::vector<TBlob> &out_data,
                        const std::vector<OpReqType> &req,
                        const std::vector<TBlob> &in_grad,
                        const std::vector<TBlob> &aux_args) {
    using namespace mshadow;
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 3U);
    CHECK_EQ(out_grad.size(), 1U);
    Stream<gpu> *s = ctx.get_stream<gpu>();
    Tensor<gpu, 4, DType> data = in_data[st::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grad = out_grad[st::kOut].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> ddata = in_grad[st::kData].get<gpu, 4, DType>(s);
    Shape<3> loc_shape = Shape3(data.size(0), 2, 3);
    Shape<4> grid_shape = Shape4(grad.size(0), grad.size(2), grad.size(3), 2);
    Tensor<gpu, 3, DType> dloc = in_grad[st::kLoc].get_with_shape<gpu, 3, DType>(loc_shape, s);
    Tensor<gpu, 4, DType> grid = out_data[st::kGridSrc]
                    .get_with_shape<gpu, 4, DType>(grid_shape, s);
    // do not use out_grad[st::kGridSrc], because dgrid is a intermediate tensor, and not include in
    // DeclareBackwardDependency, another, we can we reuse grid for inplace operator
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    typename DataType<DType>::ScaleType alpha_dgrid = 1.0f;
    typename DataType<DType>::ScaleType beta_dgrid = 0.0f;
    CUDNN_CALL(cudnnSpatialTfSamplerBackward(s->dnn_handle_,
                                             st_desc_,
                                             &alpha,
                                             in_desc_,
                                             data.dptr_,
                                             &beta,
                                             in_desc_/*reuse in_desc_*/,
                                             ddata.dptr_/*output*/,
                                             &alpha_dgrid,
                                             out_desc_/*reuse out_desc_*/,
                                             grad.dptr_,
                                             grid.dptr_,
                                             &beta_dgrid,
                                             grid.dptr_));
    if (param_.transform_type == st::kAffine) {
      CUDNN_CALL(cudnnSpatialTfGridGeneratorBackward(s->dnn_handle_,
                                                     st_desc_,
                                                     grid.dptr_,
                                                     dloc.dptr_/*out*/));
    }
  }
    
    namespace mxnet {
namespace op {
template<>
Operator *CreateOp<cpu>(NativeOpParam param) {
  return new NativeOp<cpu>(param);
}
    }
    }
    
      std::vector<NDArray> ndcpy;
  for (auto& i : ptrs) {
    ndcpy.push_back(*reinterpret_cast<NDArray*>(i));
  }
    
    Operator *IdentityAttachKLSparseRegProp::CreateOperator(Context ctx) const {
  DO_BIND_DISPATCH(CreateOp, param_);
}
    
    template<typename xpu>
void ConcatCompute(const nnvm::NodeAttrs& attrs, const OpContext& ctx,
                   const std::vector<TBlob>& inputs,
                   const std::vector<OpReqType>& req,
                   const std::vector<TBlob>& outputs) {
  const ConcatParam& param = nnvm::get<ConcatParam>(attrs.parsed);
  MSHADOW_TYPE_SWITCH(inputs[concat_enum::kData0].type_flag_, DType, {
    ConcatOp<xpu, DType> op;
    op.Init(param);
    op.Forward(ctx, inputs, req, outputs);
  });
}
    
        /**
    @brief Get the center position of twirl action.
    @return The center position of twirl action.
    */
    const Vec2& getPosition() const { return _position; }
    /**
    @brief Set the center position of twirl action.
    @param position The center position of twirl action will be set.
    */
    void setPosition(const Vec2& position);
    
     THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/
    
        /** Creates the action with the callback
    
        /** 
    * @brief Initializes the action with grid size, random seed and duration.
    * @param duration Specify the duration of the TurnOffTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the Initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, unsigned int seed);
    
    void ActionTween::update(float dt)
{
    dynamic_cast<ActionTweenDelegate*>(_target)->updateTweenAction(_to  - _delta * (1 - dt), _key);
}
    
    
    {        for(const auto &value : spritesheets) {
            std::string path = FileUtils::getInstance()->fullPathFromRelativeFile(value.asString(),plist);
            SpriteFrameCache::getInstance()->addSpriteFramesWithFile(path);
        }
    }
    
        /** The Node to use as a stencil to do the clipping.
     * The stencil node will be retained.
     * This default to nil.
     *
     * @return The stencil node.
     */
    Node* getStencil() const;
    
    /** Set the Node to use as a stencil to do the clipping.
     *
     * @param stencil The Node to use as a stencil to do the clipping.
     */
    void setStencil(Node *stencil);
    
    
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
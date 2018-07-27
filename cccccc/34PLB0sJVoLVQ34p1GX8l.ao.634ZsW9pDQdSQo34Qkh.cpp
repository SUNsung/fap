
        
        #endif  // STORAGE_LEVELDB_DB_BUILDER_H_

    
    namespace leveldb {
    }
    
    
    {
    {    if (!s.ok()) {
      assert(table == NULL);
      delete file;
      // We do not cache error results so that if the error is transient,
      // or somebody repairs the file, we recover automatically.
    } else {
      TableAndFile* tf = new TableAndFile;
      tf->file = file;
      tf->table = table;
      *handle = cache_->Insert(key, tf, 1, &DeleteEntry);
    }
  }
  return s;
}
    
    class VersionEdit {
 public:
  VersionEdit() { Clear(); }
  ~VersionEdit() { }
    }
    
    #include 'db/version_edit.h'
#include 'util/testharness.h'
    
      ASSERT_TRUE(! Overlaps('a', 'b'));
  ASSERT_TRUE(! Overlaps('z1', 'z2'));
  ASSERT_TRUE(Overlaps('a', 'p'));
  ASSERT_TRUE(Overlaps('a', 'q'));
  ASSERT_TRUE(Overlaps('a', 'z'));
  ASSERT_TRUE(Overlaps('p', 'p1'));
  ASSERT_TRUE(Overlaps('p', 'q'));
  ASSERT_TRUE(Overlaps('p', 'z'));
  ASSERT_TRUE(Overlaps('p1', 'p2'));
  ASSERT_TRUE(Overlaps('p1', 'z'));
  ASSERT_TRUE(Overlaps('q', 'q'));
  ASSERT_TRUE(Overlaps('q', 'q1'));
    
    namespace leveldb {
    }
    
    namespace leveldb {
    }
    
    int main(int argc, char** argv) {
  if (argc != 4) {
    printf('This script converts the MNIST dataset to the leveldb format used\n'
           'by caffe to train a siamese network.\n'
           'Usage:\n'
           '    convert_mnist_data input_image_file input_label_file '
           'output_db_file\n'
           'The MNIST dataset could be downloaded at\n'
           '    http://yann.lecun.com/exdb/mnist/\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3]);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB; compile with USE_LEVELDB.';
}
#endif  // USE_LEVELDB

    
    
    {}  // namespace caffe
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      /**
   * @brief Computes the Contrastive error gradient w.r.t. the inputs.
   *
   * Computes the gradients with respect to the two input vectors (bottom[0] and
   * bottom[1]), but not the similarity label (bottom[2]).
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
   *      This Blob's diff will simply contain the loss_weight* @f$ \lambda @f$,
   *      as @f$ \lambda @f$ is the coefficient of this layer's output
   *      @f$\ell_i@f$ in the overall Net loss
   *      @f$ E = \lambda_i \ell_i + \mbox{other loss terms}@f$; hence
   *      @f$ \frac{\partial E}{\partial \ell_i} = \lambda_i @f$.
   *      (*Assuming that this top Blob is not used as a bottom (input) by any
   *      other layer of the Net.)
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$a@f$; Backward fills their diff with
   *      gradients if propagate_down[0]
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$b@f$; Backward fills their diff with gradients if
   *      propagate_down[1]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    
    {  bool first_reshape_;
  vector<int> indices_to_forward_;
};
    
     private:
  // friend with symbol
  friend class Symbol;
  // internal constructor, enable trivial operator=
  Executor()
      : out_arrays_(nullptr),
        arg_arrays_(nullptr),
        grad_arrays_(nullptr),
        aux_arrays_(nullptr) {}
    
    
    {  for (size_t begin = 0; begin < order.size(); begin += batch_size) {
    size_t end = std::min(order.size(), begin + batch_size);
    for (size_t i = begin; i < end; ++i) {
      std::memcpy(&batch[(i - begin) * line_size],
                  &temp[order[i] * line_size],
                  sizeof(mx_float) * line_size);
    }
    NDArray::RObjectType ret = NDArray::Empty(rshape, Context::CPU());
    MX_CALL(MXNDArraySyncCopyFromCPU(
        NDArray(ret)->handle,
        dmlc::BeginPtr(batch), batch.size()));
    out->push_back(NDArray(ret));
  }
}
    
    namespace Rcpp {
  template<>
  inline bool is<mxnet::R::MXDataIter>(SEXP x) {
    return internal::is__module__object_fix<mxnet::R::MXDataIter>(x);
  }
  template<>
  inline bool is<mxnet::R::ArrayDataIter>(SEXP x) {
    return internal::is__module__object_fix<mxnet::R::ArrayDataIter>(x);
  }
  // This patch need to be kept even after the Rcpp update merged in.
  template<>
  inline bool is<mxnet::R::DataIter>(SEXP x) {
    return is<mxnet::R::MXDataIter>(x) ||
        is<mxnet::R::ArrayDataIter>(x);
  }
}  // namespace Rcpp
#endif  // MXNET_RCPP_IO_H_
    
      for (int a = 0; a < anchors; ++a) {
    for (int h = 0; h < heights; ++h) {
      for (int w = 0; w < widths; ++w) {
        index_t index = h * (widths * anchors) + w * (anchors) + a;
        float width = boxes[index][2] - boxes[index][0] + 1.0;
        float height = boxes[index][3] - boxes[index][1] + 1.0;
        float ctr_x = boxes[index][0] + 0.5 * (width - 1.0);
        float ctr_y = boxes[index][1] + 0.5 * (height - 1.0);
    }
    }
    }
    
    
    {    return ret;
  }
  /* \brief Get engine variable associated with this state */
  engine::VarHandle get_var() const {
    return ptr_->var;
  }
  /* \brief Get state of type T */
  template<typename T>
  T& get_state() const {
    return *reinterpret_cast<T*>(ptr_->state);
  }
  /* \brief clear state */
  void reset() {
    ptr_.reset();
  }
  /* \brief checks whether the managed object is managed only by the current
            OpStatePtr instance */
  bool unique() const {
    return ptr_.unique();
  }
  /* \brief Whether state is empty */
  explicit operator bool() const {
    return ptr_ ? true : false;
  }
    
    class CachedOp {
 public:
  CachedOp(
      const nnvm::Symbol& sym,
      const std::vector<std::pair<std::string, std::string> >& flags);
  ~CachedOp();
  uint32_t num_inputs() const {
    return fwd_graph_.indexed_graph().input_nodes().size();
  }
  uint32_t num_outputs() const {
    return fwd_graph_.outputs.size();
  }
  uint32_t num_backward_inputs() const {
    return bwd_ograd_dep_.size() + bwd_in_dep_.size() + bwd_out_dep_.size();
  }
  std::vector<bool>& save_inputs() {
    return save_inputs_;
  }
  std::vector<bool>& save_outputs() {
    return save_outputs_;
  }
  const std::unordered_set<uint32_t>& mutable_input_nodes() const {
    return fwd_graph_.indexed_graph().mutable_input_nodes();
  }
  std::vector<nnvm::NodeEntry> Gradient(
      const nnvm::NodePtr& node,
      const std::vector<nnvm::NodeEntry>& ograds) const;
  OpStatePtr Forward(
      const std::shared_ptr<CachedOp>& op_ptr,
      const std::vector<NDArray*>& inputs,
      const std::vector<NDArray*>& outputs);
  void Backward(
      const bool retain_graph,
      const OpStatePtr& state,
      const std::vector<NDArray*>& inputs,
      const std::vector<OpReqType>& reqs,
      const std::vector<NDArray*>& outputs);
  // forward storage type inference
  bool ForwardStorageType(
      const nnvm::NodeAttrs& attrs,
      const int dev_mask,
      DispatchMode* dispatch_mode,
      std::vector<int> *in_attrs,
      std::vector<int> *out_attrs);
  // backward storage type inference
  bool BackwardStorageType(
      const nnvm::NodeAttrs& attrs,
      const int dev_mask,
      DispatchMode* dispatch_mode,
      std::vector<int> *in_attrs,
      std::vector<int> *out_attrs);
    }
    
    /*
 * Given a computation graph and a set of input node entries, this function cuts
 * the node entries and creates new variable nodes as the input nodes of the
 * subgraph. It returns the nodes that connect to the subgraph directly and
 * the names of the new variable nodes.
 */
bool CutGraphInputs(const std::vector<nnvm::NodeEntry *> &input_entries,
                    bool skip_var, std::vector<nnvm::NodeEntry> *orig_entries) {
  struct pred_entry {
    nnvm::NodeEntry e;
    explicit pred_entry(const nnvm::NodeEntry &_e): e(_e) {}
    bool operator()(const nnvm::NodeEntry e1) {
      return e.node == e1.node && e.index == e1.index;
    }
  };
    }
    
      template<typename xpu, typename LOP, typename ROP, typename DType>
  static void BackwardUseNone_(const nnvm::NodeAttrs &attrs,
                               const OpContext &ctx,
                               const std::vector<TBlob> &inputs,
                               const std::vector<OpReqType> &req,
                               const std::vector<TBlob> &outputs) {
    using namespace mxnet_op;
    Stream<xpu> *s = ctx.get_stream<xpu>();
    const int size = static_cast<int>((outputs[0].Size() + DataType<DType>::kLanes - 1)
                                      / DataType<DType>::kLanes);
    const DType *ograd_dptr = inputs[0].dptr<DType>();
    if (std::is_same<LOP, mshadow_op::identity>::value && req[0] == kWriteInplace) {
      CHECK_EQ(ograd_dptr, outputs[0].dptr<DType>());
    } else if (req[0] != kNullOp) {
      DType *lgrad_dptr = outputs[0].dptr<DType>();
      MXNET_ASSIGN_REQ_SWITCH(req[0], Req, {
        Kernel<mxnet_op::op_with_req<LOP, Req>, xpu>::Launch(s, size, lgrad_dptr, ograd_dptr);
      });
    }
    if (std::is_same<ROP, mshadow_op::identity>::value && req[1] == kWriteInplace) {
      CHECK_EQ(ograd_dptr, outputs[1].dptr<DType>());
    } else if (req[1] != kNullOp) {
      DType *rgrad_dptr = outputs[1].dptr<DType>();
      MXNET_ASSIGN_REQ_SWITCH(req[1], Req, {
        Kernel<mxnet_op::op_with_req<ROP, Req>, xpu>::Launch(s, size, rgrad_dptr, ograd_dptr);
      });
    }
  }
    
    #include <mxnet/base.h>
#include <mxnet/operator_util.h>
#include <mxnet/op_attr_types.h>
#include <dmlc/parameter.h>
#include <dmlc/optional.h>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
#include '../mshadow_op.h'
#include '../elemwise_op_common.h'
#include '../mxnet_op.h'
#include '../mshadow_op.h'
    
    
    {
    {} // namespace asio
} // namespace boost
    
      static void validate(const Buffers& buffer_sequence)
  {
    typename Buffers::const_iterator iter = buffer_sequence.begin();
    typename Buffers::const_iterator end = buffer_sequence.end();
    for (; iter != end; ++iter)
    {
      Buffer buffer(*iter);
      boost::asio::buffer_cast<const void*>(buffer);
    }
  }
    
    #ifndef BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP
#define BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP
    
    int dev_poll_reactor::get_timeout()
{
  // By default we will wait no longer than 5 minutes. This will ensure that
  // any changes to the system clock are detected after no longer than this.
  return timer_queues_.wait_duration_msec(5 * 60 * 1000);
}
    
        // Render command lists
    int vtx_offset = 0;
    int idx_offset = 0;
    ImVec2 pos = draw_data->DisplayPos;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                const RECT r = { (LONG)(pcmd->ClipRect.x - pos.x), (LONG)(pcmd->ClipRect.y - pos.y), (LONG)(pcmd->ClipRect.z - pos.x), (LONG)(pcmd->ClipRect.w - pos.y) };
                g_pd3dDevice->SetTexture(0, (LPDIRECT3DTEXTURE9)pcmd->TextureId);
                g_pd3dDevice->SetScissorRect(&r);
                g_pd3dDevice->DrawIndexedPrimitive(D3DPT_TRIANGLELIST, vtx_offset, 0, (UINT)cmd_list->VtxBuffer.Size, idx_offset, pcmd->ElemCount/3);
            }
            idx_offset += pcmd->ElemCount;
        }
        vtx_offset += cmd_list->VtxBuffer.Size;
    }
    
        // Cleanup
    ImGui_ImplAllegro5_Shutdown();
    ImGui::DestroyContext();
    al_destroy_event_queue(queue);
    al_destroy_display(display);
    
    #ifndef GUETZLI_DCT_DOUBLE_H_
#define GUETZLI_DCT_DOUBLE_H_
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    // Definition of error codes for parsing jpeg files.
    
    AbstractBtMessage::AbstractBtMessage(uint8_t id, const char* name)
    : BtMessage(id),
      invalidate_(false),
      uploading_(false),
      cuid_(0),
      name_(name),
      pieceStorage_(nullptr),
      dispatcher_(nullptr),
      messageFactory_(nullptr),
      requestFactory_(nullptr),
      peerConnection_(nullptr),
      metadataGetMode_(false)
{
}
    
    bool AbstractOptionHandler::getChangeOption() const
{
  return flags_ & FLAG_CHANGE_OPTION;
}
    
    namespace aria2 {
    }
    
      void reconfigure(const std::vector<std::vector<std::string>>& announceList);
  void reconfigure(const std::string& url);
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
    std::ostream& operator<<(std::ostream& o,
                         const std::shared_ptr<AuthConfig>& authConfig)
{
  o << authConfig->getAuthText();
  return o;
}
    
      if (!(stop_sign_status.has_status() &&
        (stop_sign_status.status() == StopSignStatus::CREEP ||
         stop_sign_status.status() == StopSignStatus::STOP_DONE))) {
    // find all the lanes associated/guarded by the stop sign
    GetAssociatedLanes(*next_stop_sign_);
  }
    
      bool Associate(const cv::Mat& img, const double timestamp,
                 std::vector<std::shared_ptr<VisualObject>>* objects) override {
    return true;
  }
    
    double PtSegDistance(double query_x, double query_y, double start_x,
                     double start_y, double end_x, double end_y,
                     double length) {
  const double x0 = query_x - start_x;
  const double y0 = query_y - start_y;
  const double dx = end_x - start_x;
  const double dy = end_y - start_y;
  const double proj = x0 * dx + y0 * dy;
  if (proj <= 0.0) {
    return hypot(x0, y0);
  }
  if (proj >= length * length) {
    return hypot(x0 - dx, y0 - dy);
  }
  return std::abs(x0 * dy - y0 * dx) / length;
}
    
      /**
   * @brief Shifts this box by a given vector
   * @param shift_vec The vector determining the shift
   */
  void Shift(const Vec2d &shift_vec);
    
    std::string Polygon2d::DebugString() const {
  return util::StrCat('polygon2d (  num_points = ', num_points_, '  points = (',
                      util::PrintDebugStringIter(points_), ' )  ',
                      is_convex_ ? 'convex' : 'non-convex', '  area = ', area_,
                      ' )');
}
    
    
    {  ReviseOption option(100);
  for (size_t i = 0; i < color_list.size(); ++i) {
    std::vector<LightPtr> light;
    light.emplace_back(new Light);
    light[0]->status.color = TLColor(color_list[i]);
    reviser_->Revise(option, &light);
    option.ts = ts_list[i];
    ASSERT_TRUE(TLColor(gt_list[i]) == light[0]->status.color) << ' i: ' << i;
  }
}
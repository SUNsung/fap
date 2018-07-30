
        
        // Implements the part of the interface that caches and returns remote
// device status attributes.
class WorkerCachePartial : public WorkerCacheInterface {
 public:
  bool GetDeviceLocalityNonBlocking(const string& device,
                                    DeviceLocality* locality) override;
    }
    
    // Calculate the Levenshtein Edit Distance between two contiguous
// sequences, s and t, of type T.
//
// The Levenshtein distance is a symmetric distance defined as the
// smallest number of insertions, deletions, and substitutions
// required to convert sequence s to t (and vice versa).
// Note, this distance does not consider transpositions.
//
// For more details and a reference implementation, see:
//   https://en.wikipedia.org/wiki/Levenshtein_distance
//
// This implementation has time complexity O(|s|*|t|)
// and space complexity O(min(|s|, |t|)), where
//   |x| := x.size()
//
// A simple call to LevenshteinDistance looks like:
//
//  int64 dist = LevenshteinDistance('hi', 'bye', std::equal_to<char>());
//
template <typename T, typename Cmp>
inline int64 LevenshteinDistance(const gtl::ArraySlice<T>& s,
                                 const gtl::ArraySlice<T>& t, const Cmp& cmp) {
  const int64 s_size = s.size();
  const int64 t_size = t.size();
    }
    
    
    {}  // namespace tensorflow
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Status AtanGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
    {{'x2'}, 'Square', {'x'}},
    FDH::Const('const', 1.0f),
    {{'one'}, 'Cast', {'const'}, {{'SrcT', DT_FLOAT}, {'DstT', '$T'}}},
    {{'a'}, 'Add', {'one', 'x2'}}, // 1 + x^2
    {{'inv'}, 'Reciprocal', {'a'}},
    {{'dx'}, 'Mul', {'dy', 'inv'}}
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Atan', AtanGrad);
    
    // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
      // Sent when a kiosk app is launched.
  NOTIFICATION_KIOSK_APP_LAUNCHED,
    
    namespace chrome {
    }
    
      class_<MXDataIter>('MXNativeDataIter')
      .derives<DataIter>('MXDataIter');
    
    // greedily keep the max detections (already sorted)
inline void NonMaximumSuppression(const mshadow::Tensor<cpu, 2>& dets,
                                  const float thresh,
                                  const index_t post_nms_top_n,
                                  mshadow::Tensor<cpu, 1> *area,
                                  mshadow::Tensor<cpu, 1> *suppressed,
                                  mshadow::Tensor<cpu, 1> *keep,
                                  int *out_size) {
  CHECK_EQ(dets.shape_[1], 5) << 'dets: [x1, y1, x2, y2, score]';
  CHECK_GT(dets.shape_[0], 0);
  CHECK_EQ(dets.CheckContiguous(), true);
  CHECK_EQ(area->CheckContiguous(), true);
  CHECK_EQ(suppressed->CheckContiguous(), true);
  CHECK_EQ(keep->CheckContiguous(), true);
  // calculate area
  #pragma omp parallel for num_threads(engine::OpenMP::Get()->GetRecommendedOMPThreadCount())
  for (int i = 0; i < static_cast<int>(dets.size(0)); ++i) {
    (*area)[i] = (dets[i][2] - dets[i][0] + 1) *
                 (dets[i][3] - dets[i][1] + 1);
  }
    }
    
    
    {  std::vector<std::string>& attr_list = ret->ret_vec_str;
  attr_list.clear();
  for (const auto& kv : attr) {
    attr_list.push_back(kv.first);
    attr_list.push_back(kv.second);
    if (find(kReplacedHiddenKeys.begin(), kReplacedHiddenKeys.end(), kv.first)
          != kReplacedHiddenKeys.end()) {
      attr_list.push_back(kv.first.substr(2, kv.first.length() - 4));
      attr_list.push_back(kv.second);
    }
  }
  *out_size = attr_list.size()/2;
  ret->ret_vec_charp.clear();
  for (size_t i = 0; i < attr_list.size(); ++i) {
    ret->ret_vec_charp.push_back(attr_list[i].c_str());
  }
  *out = dmlc::BeginPtr(ret->ret_vec_charp);
  API_END();
}
    
      if (pctx == nullptr) return ret;
  ret.ctx = *pctx;
  Engine::Get()->DeduplicateVarHandle(&use_vars, &mutate_vars);
    
      OpStatePtr GetCachedOpState(const Context& ctx);
  bool SetForwardGraph(
      GraphInfo* info,
      const bool recording,
      const std::vector<NDArray*>& inputs);
  bool SetBackwardGraph(
      GraphInfo* info,
      const std::vector<OpReqType>& reqs,
      const std::vector<NDArray*>& inputs,
      bool detect_inplace_addto = false);
  OpStatePtr DynamicForward(
      const Context& default_ctx,
      const std::vector<NDArray*>& inputs,
      const std::vector<NDArray*>& outputs);
  void DynamicBackward(
      const bool retain_graph,
      const OpStatePtr& op_state,
      const std::vector<NDArray*>& inputs,
      const std::vector<OpReqType>& reqs,
      const std::vector<NDArray*>& outputs);
  void StaticAllocMemory(
      const OpStatePtr& state_ptr,
      bool recording,
      bool keep_fwd);
  void StaticInitExec(
      const OpStatePtr& state_ptr,
      bool recording,
      bool keep_fwd);
  void StaticRunOps(
      const Context& default_ctx,
      const nnvm::Graph& g,
      const OpStatePtr& state_ptr,
      const std::vector<NDArray *> &state_arrays,
      size_t start_nid,
      size_t end_nid);
  OpStatePtr StaticForward(
      const Context& default_ctx,
      const std::vector<NDArray*>& inputs,
      const std::vector<NDArray*>& outputs);
  void StaticBackward(
      const bool retain_graph,
      const OpStatePtr& state_ptr,
      const std::vector<NDArray*>& inputs,
      const std::vector<OpReqType>& reqs,
      const std::vector<NDArray*>& outputs);
    
    
    {
    {    auto it = std::find_if(orig_entries->begin(), orig_entries->end(),
                           pred_entry(*e));
    bool exist = (it != orig_entries->end());
    orig_entries->push_back(*e);
    nnvm::NodePtr n;
    // If we haven't seen the entry before, we need to create a new var node
    // for the node entry.
    if (!exist) {
      nnvm::Symbol sym;
      sym.outputs.push_back(*e);
      n = nnvm::CreateVariableNode(sym.ListOutputNames()[0]);
    } else {
      // Otherwise, we use the var node created before.
      size_t idx = it - orig_entries->begin();
      CHECK_LT(idx, var_nodes.size());
      n = var_nodes[idx];
    }
    var_nodes.push_back(n);
    *e = nnvm::NodeEntry{n, 0, 0};
  }
  return true;
}
    
    void MKLDNNConcatBackward(const nnvm::NodeAttrs& attrs, const OpContext &ctx,
                          const std::vector<NDArray>& inputs,
                          const std::vector<OpReqType>& req,
                          const std::vector<NDArray>& outputs) {
  TmpMemMgr::Get()->Init(ctx.requested[concat_enum::kTempSpace]);
  const ConcatParam& param = nnvm::get<ConcatParam>(attrs.parsed);
  int num_in_data = param.num_args;
  int axis_ = param.dim;
  auto engine = CpuEngine::Get()->get_engine();
  auto gz_mem = inputs[0].GetMKLDNNData();
  mkldnn::memory::primitive_desc gz_pd = gz_mem->get_primitive_desc();
  /* init the offset */
  mkldnn::memory::dims offsets = {0, 0, 0, 0};
  for (int i = 0; i < num_in_data; i++) {
    mkldnn::memory::dims diff_src_tz
        = {static_cast<int>(outputs[i].shape()[0]),
          static_cast<int>(outputs[i].shape()[1]),
          static_cast<int>(outputs[i].shape()[2]),
          static_cast<int>(outputs[i].shape()[3])};
    auto diff_src_mpd = outputs[i].GetMKLDNNData()->get_primitive_desc();
    auto gradi_mem_ = CreateMKLDNNMem(outputs[i], diff_src_mpd, req[i]);
    // create view from gy to gxs[i]
    std::shared_ptr<mkldnn::view::primitive_desc> view_pd;
    view_pd.reset(new mkldnn::view::primitive_desc(gz_pd, diff_src_tz, offsets));
    // create reorder primitive from gy to gxs[i]
    mkldnn::reorder::primitive_desc reorder_pd(
        view_pd.get()->dst_primitive_desc(), diff_src_mpd);
    offsets[axis_] += diff_src_tz[axis_];
    MKLDNNStream::Get()->RegisterPrim(mkldnn::reorder(
            reorder_pd, *gz_mem, *gradi_mem_.second));
    CommitOutput(outputs[i], gradi_mem_);
  }
  MKLDNNStream::Get()->Submit();
}
    
    
static bool BilinearSampleOpInferShape(const nnvm::NodeAttrs& attrs,
                                       std::vector<TShape> *in_shape,
                                       std::vector<TShape> *out_shape) {
  using namespace mshadow;
  CHECK_EQ(in_shape->size(), 1U) << 'Input:[data]';
  CHECK_EQ(out_shape->size(), 1U) << 'Output:[data]';
  const BilinearSampleParam& param = nnvm::get<BilinearSampleParam>(attrs.parsed);
  TShape dshape(in_shape->at(0));
  if (dshape.ndim() == 0) return false;
  dshape[2] = param.height;
  dshape[3] = param.width;
  out_shape->clear();
  out_shape->push_back(dshape);
  return true;
}
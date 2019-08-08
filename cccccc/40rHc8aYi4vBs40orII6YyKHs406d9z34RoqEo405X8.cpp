
        
        
    {  while (current->size() > 1) {
    // Iterate over the current level of hashes, computing the hash of up to
    // |branch_factor| elements to form the hash of each parent node.
    std::vector<std::string>::const_iterator i = current->begin();
    while (i != current->end()) {
      std::unique_ptr<crypto::SecureHash> hash(
          crypto::SecureHash::Create(crypto::SecureHash::SHA256));
      for (int j = 0; j < branch_factor && i != current->end(); j++) {
        DCHECK_EQ(i->size(), crypto::kSHA256Length);
        hash->Update(i->data(), i->size());
        ++i;
      }
      parent_nodes.push_back(std::string(crypto::kSHA256Length, 0));
      std::string* output = &(parent_nodes.back());
      hash->Finish(base::data(*output), output->size());
    }
    current_nodes.swap(parent_nodes);
    parent_nodes.clear();
    current = &current_nodes;
  }
  DCHECK_EQ(1u, current->size());
  return (*current)[0];
}
    
    // static
void App::EmitReopenEvent() {
  std::set<RenderProcessHost*> rphs;
  std::set<RenderProcessHost*>::iterator it;
    }
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get())));
  return v8::Undefined(isolate);
}
    
    namespace remote {
    }
    
    
    {  template<typename T> bool RemoveListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i!=listerners_.end()) {
      delete i->second;
      listerners_.erase(i);
      return true;
    }
    return false;
  }
private:
  DISALLOW_COPY_AND_ASSIGN(EventListener);
};
    
    #include 'base/run_loop.h'
#include 'base/values.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/message_loop/message_loop_current.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/app_window/app_window.h'
#include 'skia/ext/image_operations.h'
#include 'ui/aura/client/screen_position_client.h'
#include 'ui/aura/window.h'
#include 'ui/aura/window_tree_host.h'
#include 'ui/events/platform/platform_event_source.h'
#include 'ui/views/controls/menu/menu_runner.h'
#include 'ui/views/widget/widget.h'
#include 'ui/views/focus/focus_manager.h'
#include 'vector'
    
    void MenuItem::CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) {
  if (method == 'GetChecked') {
    result->AppendBoolean(GetChecked());
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    #include 'base/run_loop.h'
#include 'content/public/browser/browsing_data_remover.h'
#include 'extensions/browser/extension_function.h'
    
    
    {                    m_nPrecOp[m_precedenceOpCount] = m_nOpCode;
                    m_HistoryCollector.PushLastOpndStart(); // Eg. 1 + 2  *, Need to remember the start of 2 to do Precedence inversion if need to
                }
                else
                {
                    m_precedenceOpCount = MAXPRECDEPTH - 1;
                    HandleErrorCommand(wParam);
                }
                m_precedenceOpCount++;
            }
            else
            {
                /* do the last operation and then if the precedence array is not
                 * empty or the top is not the '(' demarcator then pop the top
                 * of the array and recheck precedence against the new operator
                 */
                m_currentVal = DoOperation(m_nOpCode, m_currentVal, m_lastVal);
                m_nPrevOpCode = m_nOpCode;
    
    using namespace CalculatorApp::DataLoaders;
using namespace Platform;
using namespace std;
using namespace Windows::Foundation;
using namespace Windows::Web::Http;
    
    using namespace std;
    
    
    {    SetRadixTypeAndNumWidth(DEC_RADIX, m_numwidth);
    SettingsChanged();
    DisplayNum();
}
    
    
/*
 * \brief Remove amp_cast and amp_multicast and replug the fp32 weights
 */
Graph RemoveAmpCast(Graph&& g) {
  DFSVisit(g.outputs, [](const NodePtr& n) {
    for (size_t i = 0; i < n->inputs.size(); ++i) {
      auto e = n->inputs[i];
      if (e.node->op() == Op::Get('amp_cast')) {
        n->inputs[i] = e.node->inputs[0];
      } else if (e.node->op() == Op::Get('amp_multicast')) {
        n->inputs[i] = e.node->inputs[e.index];
      }
    }
  });
  return g;
}
    
    inline bool AMPMultiCastType(const nnvm::NodeAttrs& attrs,
                        std::vector<int> *in_attrs,
                        std::vector<int> *out_attrs) {
  using mshadow::kFloat32;
  using mshadow::kFloat16;
  const AMPMultiCastParam& param = nnvm::get<AMPMultiCastParam>(attrs.parsed);
  CHECK_EQ(in_attrs->size(), param.num_outputs);
  CHECK_EQ(out_attrs->size(), param.num_outputs);
  bool ret = true;
  int widest_type = kFloat16;
  for (int i = 0; i < param.num_outputs; ++i) {
    if ((*in_attrs)[i] == kFloat32 || (*out_attrs)[i] == kFloat32) {
      widest_type = kFloat32;
    }
  }
  for (int i = 0; i < param.num_outputs; ++i) {
    if ((*in_attrs)[i] == kFloat32 || (*in_attrs)[i] == kFloat16) {
      TYPE_ASSIGN_CHECK(*out_attrs, i, widest_type);
    } else {
      TYPE_ASSIGN_CHECK(*out_attrs, i, (*in_attrs)[i]);
    }
    ret = ret && ((*in_attrs)[i] != -1);
  }
  return ret;
}
    
    #include <mxnet/op_attr_types.h>
#include <mxnet/graph_attr_types.h>
#include <mxnet/imperative.h>
#include './exec_pass.h'
#include '../operator/operator_common.h'
#include '../common/exec_utils.h'
    
    
    {  SHAPE_ASSIGN_CHECK(*out_shape, 0, (*in_shape)[0]);
  SHAPE_ASSIGN_CHECK(*out_shape, 1, TShape{1});
  SHAPE_ASSIGN_CHECK(*out_shape, 2, TShape{1});
  return true;
}
    
    template<int req>
struct IndexArrayDefaultKernel {
  MSHADOW_XINLINE static void Map(int i,
                                  int64_t* out_data,
                                  const int ndim,
                                  const dim_t* shape) {
    int64_t index = i;
    for (ptrdiff_t j = ndim - 1; j >= 0; j--) {
      KERNEL_ASSIGN(out_data[ptrdiff_t(i) * ptrdiff_t(ndim) + j], req, index % shape[j]);
      index /= shape[j];
    }
  }
};
    
      const Tensor<cpu, 2, DType> wx(wx_ptr, Shape2(H * 3, I));
  const Tensor<cpu, 2, DType> wh(wh_ptr, Shape2(H * 3, H));
  const Tensor<cpu, 2, DType> bx(bx_ptr, Shape2(3, H));
  const Tensor<cpu, 2, DType> bh(bh_ptr, Shape2(3, H));
  const Tensor<cpu, 2, DType> back_wx(back_wx_ptr, Shape2(H * 3, I));
  const Tensor<cpu, 2, DType> back_wh(back_wh_ptr, Shape2(H * 3, H));
  const Tensor<cpu, 2, DType> back_bx(back_bx_ptr, Shape2(3, H));
  const Tensor<cpu, 2, DType> back_bh(back_bh_ptr, Shape2(3, H));
  const int omp_threads = mxnet::engine::OpenMP::Get()->GetRecommendedOMPThreadCount();
  if (D == 1) {
    #pragma omp parallel for num_threads(omp_threads)
    for (int i = 0; i < N; i++)
      for (int j = 0; j < H; j++) {
        y_ptr[i * H + j] = hx[i][j];
      }
  } else {
    #pragma omp parallel for num_threads(omp_threads)
    for (int i = 0; i < N; i++)
      for (int j = 0; j < H; j++) {
        y_ptr[i * D * H + j] = hx[i][j];
        back_ht_1[i * D * H + j] = hx[N + i][j];
    }
  }
  Tensor<cpu, 2, DType> dgemmC1(ws, Shape2(T * N, 3 * H));
  Tensor<cpu, 2, DType> dgemmC2(gemmC2, Shape2(N, 3 * H));
  Tensor<cpu, 2, DType> dback_gemmC1(back_gemmC1, Shape2(T * N, 3 * H));
    
    class Context
{
public:
    Context(size_t stack_size, coroutine_func_t fn, void* private_data);
    ~Context();
    bool swap_in();
    bool swap_out();
#if !defined(SW_NO_USE_ASM_CONTEXT) && defined(SW_LOG_TRACE_OPEN)
    ssize_t get_stack_usage();
#endif
    inline bool is_end()
    {
        return end_;
    }
    static void context_func(void* arg);
    }
    
    static inline void coro_test_create(coroutine_func_t fn, void *arg, int *complete_num)
{
    auto test = new coro_test(fn, arg, complete_num);
    long cid = swoole::Coroutine::create(coro_test_fn, test);
    ASSERT_GT(cid, 0);
}
    
        char *key;
    int data;
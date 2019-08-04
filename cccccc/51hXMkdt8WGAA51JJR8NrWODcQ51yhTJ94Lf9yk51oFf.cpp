
        
        
    {  DISALLOW_COPY_AND_ASSIGN(BrowserWindow);
};
    
      std::unique_ptr<DesktopMediaList> window_capturer_;
  std::unique_ptr<DesktopMediaList> screen_capturer_;
  std::vector<DesktopCapturer::Source> captured_sources_;
  bool capture_window_ = false;
  bool capture_screen_ = false;
  bool fetch_window_icons_ = false;
#if defined(OS_WIN)
  bool using_directx_capturer_ = false;
#endif  // defined(OS_WIN)
    
    
    {  DISALLOW_COPY_AND_ASSIGN(DownloadItem);
};
    
    InAppPurchase::~InAppPurchase() {}
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
      // Try to close all windows (then will cause whole app to quit).
  static void CloseAllWindows(bool force = false, bool quit = false);
    
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
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethodSync')));
    
    class MenuDelegate : public ui::SimpleMenuModel::Delegate {
 public:
  MenuDelegate(ObjectManager* object_manager);
  ~MenuDelegate() override;
    }
    
    void Menu::Append(MenuItem* menu_item) {
  menu_items.push_back(menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_append(GTK_MENU_SHELL(menu_), menu_item->menu_item_);
}
    
    void MenuItem::RemoveKeys() {
  if (!focus_manager_) return;
    }
    
    bool NwAppGetArgvSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
    }
    
    namespace {
float sigmoid(const float x) {
  if (x >= 0) {
    return 1. / (1. + exp(-x));
  } else {
    const float exp_x = exp(x);
    return exp_x / (1 + exp_x);
  }
}
} // namespace
    
    
    {} // namespace caffe2
    
      // Constructs a Message from a C-string.
  explicit Message(const char* str) : ss_(new ::std::stringstream) {
    *ss_ << str;
  }
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
#define GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
    
    // GTEST_ASSERT_ is the basic statement to which all of the assertions
// in this file reduce.  Don't use this in your code.
    
      // A helper class that aborts a death test when it's deleted.
  class ReturnSentinel {
   public:
    explicit ReturnSentinel(DeathTest* test) : test_(test) { }
    ~ReturnSentinel() { test_->Abort(TEST_ENCOUNTERED_RETURN_STATEMENT); }
   private:
    DeathTest* const test_;
    GTEST_DISALLOW_COPY_AND_ASSIGN_(ReturnSentinel);
  } GTEST_ATTRIBUTE_UNUSED_;
    
    #if GTEST_OS_WINDOWS
    
     private:
  // No implementation - assignment is unsupported.
  void operator=(const ValueArray2& other);
    
    // Gets the content of the stringstream's buffer as an std::string.  Each '\0'
// character in the buffer is replaced with '\\0'.
GTEST_API_ std::string StringStreamToString(::std::stringstream* stream);
    
      tuple(const tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_), f5_(t.f5_), f6_(t.f6_), f7_(t.f7_), f8_(t.f8_) {}
    
    $range i 2..n
    
      TYPE_ASSIGN_CHECK(*out_attrs, hawkesll::kOutLL, in_attrs->at(0))
  TYPE_ASSIGN_CHECK(*out_attrs, hawkesll::kOutStates, in_attrs->at(0))
    
    template<typename AttrType, typename FInfer>
bool ApplyOpInferAttr(const nnvm::Graph& g,
                      const FInfer& finfer,
                      const NodeAttrs& attrs,
                      const uint32_t nid,
                      std::vector<AttrType>* in_attrs,
                      std::vector<AttrType>* out_attrs,
                      DispatchMode* dispatch_mode) {
  return finfer(attrs, in_attrs, out_attrs);
}
    
    // dequantize unsigned int8 to float32
struct dequantize_unsigned {
  template<typename DstDType, typename SrcDType>
  MSHADOW_XINLINE static void Map(int i, DstDType *out, const SrcDType *in,
                                  const float *imin_range, const float *imax_range,
                                  const float imin_limit, const float imax_limit) {
    const float scale = (*imax_range - *imin_range) / (imax_limit - imin_limit);
    out[i] = static_cast<DstDType>(in[i] * scale + *imin_range);
  }
};
    
    #include <mxnet/operator_util.h>
#include <vector>
#include <limits>
#include '../elemwise_op_common.h'
#include '../mshadow_op.h'
#include '../mxnet_op.h'
#include './quantization_utils.h'
#include '../tensor/broadcast_reduce_op.h'
    
    NNVM_REGISTER_OP(_contrib_quantized_elemwise_add)
.describe(R'code(elemwise_add operator for input dataA and input dataB data type of int8,
and accumulates in type int32 for the output. For each argument, two more arguments of type
float32 must be provided representing the thresholds of quantizing argument from data
type float32 to int8. The final outputs contain result in int32, and min
and max thresholds representing the threholds for quantizing the float32 output into int32.
    
    
    { private:
  // used memory
  size_t used_memory_ = 0;
  // page size
  size_t page_size_;
  // size that large allocations should be rounded to, for proper freeing.
  size_t large_alloc_round_size_;
  // percentage of reserved memory
  int reserve_;
  // number of devices
  const size_t NDEV = 32;
  // context used by this Storage Manager
  const Context initial_context_;
  // memory pool
  std::unordered_map<size_t, std::vector<void*>> memory_pool_;
  DISALLOW_COPY_AND_ASSIGN(GPUPooledStorageManager);
};  // class GPUPooledStorageManager
    
    #endif  // MXNET_OPERATOR_CONTRIB_INDEX_ARRAY_INL_H_

    
    Additionally, when the parameter `axes` is specified, `idx` will be a
:math:`(d_1, d_2, ..., d_n, m)` array where `m` is the length of `axes`, and the following
equality will hold: :math:`idx[i_1, i_2, ..., i_n, j] = i_{axes[j]}`.
    
          // If row_seg_start is less than the first index for the row, move the
      // row_seg_start forward
      while (row_seg_start < in_idx[row_indptr_start] &&
             row_seg_start < row_seg_end) {
        row_seg_start++;
      }
    
    static bool RNNShape(const nnvm::NodeAttrs& attrs,
                     std::vector<TShape> *in_shape,
                     std::vector<TShape> *out_shape) {
  const RNNParam& param_ = nnvm::get<RNNParam>(attrs.parsed);
  using namespace mshadow;
    }
    
      if (x_ptr && layer_index == 0) {
    (*x_memory)[layer_index].set_data_handle(x_ptr);
  } else {
    (*x_memory)[layer_index].set_data_handle((*user_src_layer_memory).get_data_handle());
  }
  (*y_memory)[layer_index].set_data_handle(y_ptr);
    
    #include <xgboost/data.h>
#include <algorithm>
#include <vector>
    
      std::string BuildTree(RegTree const& tree, int32_t nid, uint32_t depth) override {
    if (tree[nid].IsLeaf()) {
      return this->LeafNode(tree, nid, depth);
    }
    static std::string const kNodeTemplate = '{parent}{stat}\n{left}\n{right}';
    auto result = SuperT::Match(
        kNodeTemplate,
        {{'{parent}', this->SplitNode(tree, nid, depth)},
         {'{stat}',   with_stats_ ? this->NodeStat(tree, nid) : ''},
         {'{left}',   this->BuildTree(tree, tree[nid].LeftChild(), depth+1)},
         {'{right}',  this->BuildTree(tree, tree[nid].RightChild(), depth+1)}});
    return result;
  }
    
    /*!
 * \brief The data reading callback function.
 *  The iterator will be able to give subset of batch in the data.
 *
 *  If there is data, the function will call set_function to set the data.
 *
 * \param data_handle The handle to the callback.
 * \param set_function The batch returned by the iterator
 * \param set_function_handle The handle to be passed to set function.
 * \return 0 if we are reaching the end and batch is not returned.
 */
XGB_EXTERN_C typedef int XGBCallbackDataIterNext(  // NOLINT(*)
    DataIterHandle data_handle, XGBCallbackSetData *set_function,
    DataHolderHandle set_function_handle);
    
      // 4. One-line comment
  ASSERT_TRUE(parser.ParseKeyValuePair('learning_rate = 0.3   # small step',
                                       &key, &value));
  ASSERT_EQ(key, 'learning_rate');
  ASSERT_EQ(value, '0.3');
  // Note: '#' in path won't be accepted correctly unless the whole path is
  // wrapped with quotes. This is important for external memory.
  ASSERT_TRUE(parser.ParseKeyValuePair('data = dmatrix.libsvm#dtrain.cache',
                                       &key, &value));
  ASSERT_EQ(key, 'data');
  ASSERT_EQ(value, 'dmatrix.libsvm');  // cache was silently ignored
    
    TEST(Metric, DeclareUnifiedTest(Error)) {
  auto lparam = xgboost::CreateEmptyGenericParam(0, NGPUS);
  xgboost::Metric * metric = xgboost::Metric::Create('error', &lparam);
  metric->Configure({});
  ASSERT_STREQ(metric->Name(), 'error');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
    }
    
    /* SOAP client calls this function to parse response from SOAP server */
bool parse_packet_soap(SoapClient* obj, const char* buffer, int buffer_size,
                       std::shared_ptr<sdlFunction> fn, const char* /*fn_name*/,
                       Variant& return_value, Array& soap_headers) {
  char* envelope_ns = nullptr;
  xmlNodePtr trav, env, head, body, resp, cur, fault;
  xmlAttrPtr attr;
  int param_count = 0;
  int soap_version = SOAP_1_1;
  sdlSoapBindingFunctionHeaderMap *hdrs = nullptr;
    }
    
    #define CHECK_NATIVE_PROP_SUPPORTED(name, op)                                  \
  if (!T::isPropSupported(name, op)) {                                         \
    return Native::prop_not_handled();                                         \
  }
    
      auto const size = bfd_get_section_size(section);
  if (adata->pc >= vma + size) {
    return;
  }
    
      /* Pre-compute the slot */
  auto const slot = func->cls()->lsbMemoSlot(func, forValue);
    
    
    {  PUNT(Func-cmp);
}
    
    
    {  for (auto it = rootMap.begin() ; it != rootMap.end() ;) {
    auto cur = it++;
    APCHandle* root = cur->second;
    // If root is not visible from any heap
    if (visibleFromHeap.count(root) == 0) {
      auto candidate = candidateList.find(root);
      // If root haven't been freed before, free it
      if (candidate != candidateList.end()) {
        pendingSize.fetch_add(-candidate->second, std::memory_order_relaxed);
        // Remove the root from list, so we won't free it twice
        candidateList.erase(candidate);
        FTRACE(4, 'Sweep! root:{}\n', (void*)root);
        // Free the root
        APCTypedValue::fromHandle(root)->deleteUncounted();
      }
      // Remove {allocation, root}
      rootMap.erase(cur);
    }
  }
  visibleFromHeap.clear();
}
    
      /*
   * Generic Pop and Dequeue implementations in terms of other functions.
   */
  static ArrayData* Pop(ArrayData*, Variant&);
  static ArrayData* Dequeue(ArrayData*, Variant&);
    
    #include 'hphp/util/assertions.h'
#include 'hphp/util/job-queue.h'
#include 'hphp/util/trace.h'
    
    const Func* lookupMethodCtx(const Class* cls,
                            const StringData* methodName,
                            const Class* pctx,
                            CallType lookupType,
                            bool raise = false);
    
    
std::mutex watchdog_mut;
static int watchdog_count = 0;
    
    
    {/**
 * @brief Start a file carve of the given paths
 *
 * @return A status returning if the carves were started successfully
 */
Status carvePaths(const std::set<std::string>& paths);
} // namespace osquery

    
    #include <functional>
#include <map>
#include <memory>
#include <vector>
    
    template <typename StorageType>
std::vector<std::string> InMemoryStorage<StorageType>::getKeys(
    const std::string& prefix) const {
  std::vector<std::string> result;
  for (const auto& iter : storage_) {
    if (boost::starts_with(iter.first, prefix)) {
      result.push_back(iter.first);
    }
  }
  return result;
}
    
    enum class RocksdbError {
  UnexpectedValueType = 1,
  DatabaseIsCorrupted = 2,
  BatchWriteFail = 3,
};
    
    namespace osquery {
    }
    
    namespace {
    }
    
    /**
 * @brief The request part of a plugin (registry item's) call.
 *
 * To use a plugin use Registry::call with a request and response.
 * The request portion is usually simple and normally includes an 'action'
 * key where the value is the action you want to perform on the plugin.
 * Refer to the registry's documentation for the actions supported by
 * each of its plugins.
 */
using PluginRequest = std::map<std::string, std::string>;
    
      /// Tables may be detached by name.
  virtual void detach(const std::string& /*name*/) {}
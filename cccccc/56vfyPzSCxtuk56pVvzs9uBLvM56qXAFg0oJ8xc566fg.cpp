
        
        namespace atom {
    }
    
    bool SavePageHandler::Handle(const base::FilePath& full_path,
                             const content::SavePageType& save_type) {
  auto download_manager = content::BrowserContext::GetDownloadManager(
      web_contents_->GetBrowserContext());
  download_manager->AddObserver(this);
  // Chromium will create a 'foo_files' directory under the directory of saving
  // page 'foo.html' for holding other resource files of 'foo.html'.
  base::FilePath saved_main_directory_path = full_path.DirName().Append(
      full_path.RemoveExtension().BaseName().value() +
      FILE_PATH_LITERAL('_files'));
  bool result = web_contents_->SavePage(full_path,
                                        saved_main_directory_path,
                                        save_type);
  download_manager->RemoveObserver(this);
  // If initialization fails which means fail to create |DownloadItem|, we need
  // to delete the |SavePageHandler| instance to avoid memory-leak.
  if (!result)
    delete this;
  return result;
}
    
    #include 'base/strings/string16.h'
#include 'base/synchronization/lock.h'
#include 'content/public/browser/resource_dispatcher_host_login_delegate.h'
    
    #ifndef ATOM_BROWSER_NET_URL_REQUEST_ASYNC_ASAR_JOB_H_
#define ATOM_BROWSER_NET_URL_REQUEST_ASYNC_ASAR_JOB_H_
    
    using CharType = base::CommandLine::CharType;
using StringType = base::CommandLine::StringType;
using StringVector = base::CommandLine::StringVector;
    
      Predicate predicate_;
    
    bool MenuModelAdapter::GetAccelerator(int id,
                                      ui::Accelerator* accelerator) const {
  ui::MenuModel* model = menu_model_;
  int index = 0;
  if (ui::MenuModel::GetModelAndIndexForCommandId(id, &model, &index)) {
    return static_cast<AtomMenuModel*>(model)->
      GetAcceleratorAtWithParams(index, true, accelerator);
  }
  return false;
}
    
    namespace atom {
    }
    
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
    
      int id() const { return id_; }
  std::string extension_id_;
  ObjectManager* object_manager() const { return object_manager_.get(); }
    
    
    {  base::ListValue result;
  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method_Sync(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get()),
      &result));
  return converter->ToV8Value(&result, isolate->GetCurrentContext());
}
    
    void Clipboard::Call(const std::string& method,
                     const base::ListValue& arguments) {
  if (method == 'Set') {
    std::string text, type;
    arguments.GetString(0, &text);
    arguments.GetString(1, &type);
    SetText(text);
  } else if (method == 'Clear') {
    Clear();
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    #endif  // CONTENT_NW_SRC_API_DISPATCHER_H_
    
      scoped_ptr<base::Value> value_manifest(
                                         converter->FromV8Value(args[1], isolate->GetCurrentContext()));
  if (!value_manifest.get() ||
      !value_manifest->IsType(base::Value::TYPE_DICTIONARY)) {
    args.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
                                     'Unable to convert 'options' passed to CreateShell'))));
    return;
  }
    
      void set_run_loop(base::RunLoop* run_loop) { run_loop_ = run_loop; }
  void quit_run_loop();
  base::RunLoop* run_loop() { return run_loop_; }
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    bool NwAppCloseAllWindowsFunction::RunAsync() {
  AppWindowRegistry* registry = AppWindowRegistry::Get(browser_context());
  if (!registry)
    return false;
    }
    
        std::string error() {
      return error_;
    }
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {}  // namespace caffe
    
    #include <vector>
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/relu_layer.hpp'
    
    #include <vector>
    
    #define EXTERN
    
      bool is_list_item;
    
    
    { private:
  // Pointer to the other end of the link. It is always true that either
  // other_end_ == NULL or other_end_->other_end_ == this.
  DoublePtr* other_end_;
};
    
    // Tests a classifier, computing its error rate.
// See errorcounter.h for description of arguments.
// Iterates over the samples, calling the classifier in normal/silent mode.
// If the classifier makes a CT_UNICHAR_TOPN_ERR error, and the appropriate
// report_level is set (4 or greater), it will then call the classifier again
// with a debug flag and a keep_this argument to find out what is going on.
double ErrorCounter::ComputeErrorRate(ShapeClassifier* classifier,
    int report_level, CountTypes boosting_mode,
    const FontInfoTable& fontinfo_table,
    const GenericVector<Pix*>& page_images, SampleIterator* it,
    double* unichar_error,  double* scaled_error, STRING* fonts_report) {
  int fontsize = it->sample_set()->NumFonts();
  ErrorCounter counter(classifier->GetUnicharset(), fontsize);
  GenericVector<UnicharRating> results;
    }
    
    
    {  CT_SIZE                // Number of types for array sizing.
};
    
    	if (tree->get_current() < 0)
		return;
    
    
    {		default:
			break;
	}
    
    	static void thread_enter();
	static void thread_exit();
    
    class VehicleBody;
    
    	Ref<Mesh> mesh = node->get_mesh();
	ERR_FAIL_COND(!mesh.is_valid());
    
    void test_barrier_group(std::shared_ptr<thd::DataChannel> data_channel,
                        THDGroup group, std::vector<thd::rank_type> group_ranks) {
  if (contains(group_ranks, data_channel->getRank())) {
    for (int i = 0; i < group_ranks.size(); ++i) {
      if (data_channel->getRank() == group_ranks[i]) {
        int64_t time_after_barrier = nowInMilliseconds() + BARRIER_WAIT_TIME;
        auto time_tensor = buildTensor<int64_t>({1}, time_after_barrier);
        data_channel->broadcast(*time_tensor, group_ranks[i], group);
        std::this_thread::sleep_for(std::chrono::milliseconds(BARRIER_WAIT_TIME + 10));
        data_channel->barrier(group);
      } else {
        auto time_tensor = buildTensor<int64_t>({1}, -1);
        data_channel->broadcast(*time_tensor, group_ranks[i], group); // get expected time after barrier
        data_channel->barrier(group);
        assert(nowInMilliseconds() >= reinterpret_cast<int64_t*>(time_tensor->data())[0]);
      }
    }
  } else {
    std::this_thread::sleep_for(std::chrono::milliseconds(BARRIER_WAIT_TIME + 100));
    data_channel->barrier(group);
  }
}
    
    template<> AT_API Half convert(int64_t f) {
  return convert<Half,double>(static_cast<double>(f));
}
template<> AT_API int64_t convert(Half f) {
  return static_cast<int64_t>(convert<double,Half>(f));
}
    
    template<typename To, typename From> To convert(From f) {
  return static_cast<To>(f);
}
    
    IntList ${Tensor}::sizes() const {
  int64_t d = ${THTensor_nDimension};
  if (d != 0) {
    // note: this will return '{}' for a scalar because dim() will return 0 in that case.
    return IntList(reinterpret_cast<int64_t*>(tensor->size),dim());
  } else {
    return IntList(kEmptySizes);
  }
}
    
    template<typename T>
struct algorithm_spec<CollectiveType::ALL_REDUCE, T> {
  static GlooCache::key_type key(
    THDGroup group_id, DeviceType device, std::size_t input_bytes,
    std::size_t unused_count, THDReduceOp op
  ) {
    int stream = UNUSED_STREAM;
    if (device == DeviceType::CUDA) {
      auto cuda_stream = THCState_getCurrentStream(THDGetCudaState());
      stream = THDGetStreamId(cuda_stream);
    }
    return std::make_tuple(CollectiveType::ALL_REDUCE, group_id, device, stream,
                           input_bytes, input_bytes, op, UNUSED_RANK);
  }
    }
    
    #include <ATen/ATen.h>
#include <Python.h>
    
    std::tuple<Tensor, Tensor, Tensor> conv_tbc_backward(const Tensor& dOutput, const Tensor& input, const Tensor& weight, const Tensor& bias, int64_t pad) {
  auto input_size = input.sizes();
  auto weight_size = weight.sizes();
    }
    
    
    {
    {} // namespace asio
} // namespace boost
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    template <typename CompletionCondition>
class base_from_completion_cond
{
protected:
  explicit base_from_completion_cond(CompletionCondition completion_condition)
    : completion_condition_(completion_condition)
  {
  }
    }
    
      static bool all_empty(const boost::asio::mutable_buffers_1& buffer_sequence)
  {
    return boost::asio::buffer_size(buffer_sequence) == 0;
  }
    
    class buffered_stream_storage
{
public:
  // The type of the bytes stored in the buffer.
  typedef unsigned char byte_type;
    }
    
    #endif // BOOST_ASIO_DETAIL_CALL_STACK_HPP

    
    
    {    // Make the upcall if required.
    if (owner)
    {
      fenced_block b(fenced_block::half);
      BOOST_ASIO_HANDLER_INVOCATION_BEGIN((handler.arg1_, handler.arg2_));
      boost_asio_handler_invoke_helpers::invoke(handler, handler.handler_);
      BOOST_ASIO_HANDLER_INVOCATION_END;
    }
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #include <boost/asio/detail/config.hpp>
    
    template <typename Handler>
inline void deallocate(void* p, std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  ::operator delete(p);
#else
  using boost::asio::asio_handler_deallocate;
  asio_handler_deallocate(p, s, boost::asio::detail::addressof(h));
#endif
}
    
    template <typename Time_Traits>
void dev_poll_reactor::schedule_timer(timer_queue<Time_Traits>& queue,
    const typename Time_Traits::time_type& time,
    typename timer_queue<Time_Traits>::per_timer_data& timer, wait_op* op)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
    }
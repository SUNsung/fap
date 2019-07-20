
        
        
    {  return ThrowTypeError(base::StringPrintf(
      'Error processing argument at index %d, conversion failure from %s',
      next_, V8TypeAsString(isolate_, (*info_)[next_]).c_str()));
}
    
    // CallbackHolder and CallbackHolderBase are used to pass a base::Callback from
// CreateFunctionTemplate through v8 (via v8::FunctionTemplate) to
// DispatchToCallback, where it is invoked.
    
    // Specialization for base::Callback.
template <typename T>
struct CallbackTraits<base::Callback<T>> {
  static v8::Local<v8::FunctionTemplate> CreateTemplate(
      v8::Isolate* isolate,
      const base::Callback<T>& callback) {
    return CreateFunctionTemplate(isolate, callback);
  }
};
    
      template <typename P, typename C>
  void SetWeak(P* parameter, C callback) {
    handle_.SetWeak(parameter, callback);
  }
    
      switch (chrome::AttemptToNotifyRunningChrome(remote_window_, false)) {
    case chrome::NOTIFY_SUCCESS:
      return PROCESS_NOTIFIED;
    case chrome::NOTIFY_FAILED:
      remote_window_ = NULL;
      return PROCESS_NONE;
    case chrome::NOTIFY_WINDOW_HUNG:
      // Fall through and potentially terminate the hung browser.
      break;
  }
    
      fetcher_ = net::URLFetcher::Create(formated_url, request_type, this,
                                     MISSING_TRAFFIC_ANNOTATION);
  fetcher_->SaveResponseWithWriter(base::WrapUnique(new ResponsePiper(this)));
    
    void PdfViewerUI::RenderFrameCreated(content::RenderFrameHost* rfh) {
  int render_process_id = rfh->GetProcess()->GetID();
  int render_frame_id = rfh->GetRoutingID();
  int render_view_id = rfh->GetRenderViewHost()->GetRoutingID();
  auto resource_context =
      web_contents()->GetBrowserContext()->GetResourceContext();
  auto callback =
      base::BindOnce(&PdfViewerUI::OnPdfStreamCreated, base::Unretained(this));
  resource_requester_ = new ResourceRequester(std::move(callback));
  base::PostTaskWithTraits(
      FROM_HERE, {BrowserThread::IO},
      base::BindOnce(&ResourceRequester::StartRequest, resource_requester_,
                     GURL(src_), GURL(kPdfViewerUIOrigin), render_process_id,
                     render_view_id, render_frame_id, resource_context));
}
    
    napi_value Print(napi_env env, napi_callback_info info) {
  size_t argc = 1;
  napi_value args[1];
  napi_status status;
    }
    
      if (need_two_pt_correction_ && raw_distance <= 2500) {
    distance_corr_x =
        (corrections.dist_correction - corrections.dist_correction_x) *
            (xx - 2.4) / 22.64 +
        corrections.dist_correction_x;  // 22.64 = 25.04 - 2.4
    distance_corr_y =
        (corrections.dist_correction - corrections.dist_correction_y) *
            (yy - 1.93) / 23.11 +
        corrections.dist_correction_y;  // 23.11 = 25.04 - 1.93
  } else {
    distance_corr_x = distance_corr_y = corrections.dist_correction;
  }
    
    TEST(RecordTest, iterator_test) {
  uint64_t msg_num = 200;
  uint64_t begin_time = 100000000;
  uint64_t step_time = 100000000;  // 100ms
  uint64_t end_time = begin_time + step_time * (msg_num - 1);
  ConstructRecord(msg_num, begin_time, step_time);
    }
    
    Poller::Poller() {
  if (!Init()) {
    AERROR << 'Poller init failed!';
    Clear();
  }
}
    
    int main(int argc, char *argv[]) {
  apollo::cyber::Init('cyber_python');
  apollo::cyber::proto::Chatter chat;
  apollo::cyber::PyNode node('listener');
  pr = node.create_reader('channel/chatter', chat.GetTypeName());
  pr->register_func(cbfun);
    }
    
    static const cv::Scalar kBoxColorMap[] = {
    cv::Scalar(0, 0, 0),        // 0
    cv::Scalar(128, 128, 128),  // 1
    cv::Scalar(255, 0, 0),      // 2
    cv::Scalar(0, 255, 0),      // 3
    cv::Scalar(0, 0, 255),      // 4
    cv::Scalar(255, 255, 0),    // 5
    cv::Scalar(0, 255, 255),    // 6
    cv::Scalar(255, 0, 255),    // 7
    cv::Scalar(255, 255, 255),  // 8
};
    
    class PathLaneBorrowDecider : public Decider {
 public:
  explicit PathLaneBorrowDecider(const TaskConfig& config);
    }
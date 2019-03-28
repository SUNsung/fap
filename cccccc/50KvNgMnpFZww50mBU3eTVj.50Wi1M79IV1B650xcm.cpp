
        
        namespace mate {
    }
    
     private:
  void OnMessageBoxCallback(DialogClosedCallback callback,
                            const std::string& origin,
                            int code,
                            bool checkbox_checked);
    
    #if !defined(OS_MACOSX) || defined(MAS_BUILD)
std::string AutoUpdater::GetFeedURL() {
  return '';
}
    
    
    {  if (!active_ && !pending_damage_rect_.IsEmpty() && paint)
    OnPaint(gfx::Rect(viewport_pixel_size_));
}
    
      // Up until now, the parent process was blocked in a read waiting for the
  // write above to complete. The parent process is now free to exit. Wait for
  // that to happen.
  struct kevent event;
  int events = kevent(kq.get(), nullptr, 0, &event, 1, nullptr);
  if (events != 1) {
    if (events < 0) {
      PLOG(ERROR) << 'kevent (monitor)';
    } else {
      LOG(ERROR) << 'kevent (monitor): unexpected result ' << events;
    }
    return;
  }
    
    void App::SetProxyConfig(content::RenderProcessHost* render_process_host,
                         const std::string& proxy_config) {
  net::ProxyConfig config;
  config.proxy_rules().ParseFromString(proxy_config);
  net::URLRequestContextGetter* context_getter =
    render_process_host->GetBrowserContext()->
    GetRequestContextForRenderProcess(render_process_host->GetID());
    }
    
    
    {}  // namespace nw

    
    #endif  // CONTENT_NW_SRC_API_BASE_BASE_H_

    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
      static int getUID() {
    static int id = 0;
    return ++id;
  }
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    #if defined(OS_WIN) || defined(OS_LINUX)
bool MenuItem::AcceleratorPressed(const ui::Accelerator& accelerator) {
#if defined(OS_WIN)
  if (meta_down_flag_) {
    if ((::GetKeyState(VK_APPS) & 0x8000) != 0x8000) {
      return true;
    }
  }
#endif
  OnClick();
  return true;
}
    
    #include 'extensions/browser/extension_function.h'
    
      // Returns the covariance.
  double covariance() const {
    if (total_weight > 0.0)
      return (sigxy - sigx * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
  double x_variance() const {
    if (total_weight > 0.0)
      return (sigxx - sigx * sigx / total_weight) / total_weight;
    else
      return 0.0;
  }
  double y_variance() const {
    if (total_weight > 0.0)
      return (sigyy - sigy * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
    
    bool ParagraphModel::ValidFirstLine(int lmargin, int lindent,
                                    int rindent, int rmargin) const {
  switch (justification_) {
    case JUSTIFICATION_LEFT:
      return NearlyEqual(lmargin + lindent, margin_ + first_indent_,
                         tolerance_);
    case JUSTIFICATION_RIGHT:
      return NearlyEqual(rmargin + rindent, margin_ + first_indent_,
                         tolerance_);
    case JUSTIFICATION_CENTER:
      return NearlyEqual(lindent, rindent, tolerance_ * 2);
    default:
      // shouldn't happen
      return false;
  }
}
    
      // ValidFirstLine() and ValidBodyLine() take arguments describing a text line
  // in a block of text which we are trying to model:
  //   lmargin, lindent:  these add up to the distance from the leftmost ink
  //                      in the text line to the surrounding text block's left
  //                      edge.
  //   rmargin, rindent:  these add up to the distance from the rightmost ink
  //                      in the text line to the surrounding text block's right
  //                      edge.
  // The caller determines the division between 'margin' and 'indent', which
  // only actually affect whether we think the line may be centered.
  //
  // If the amount of whitespace matches the amount of whitespace expected on
  // the relevant side of the line (within tolerance_) we say it matches.
    
    
    {  /* Accept modes which occur between the above rejection groups */
  R_NN_ACCEPT,          // NN acceptance
  R_HYPHEN_ACCEPT,      // Hyphen acceptance
  R_MM_ACCEPT,          // Matrix match acceptance
  R_QUALITY_ACCEPT,     // Accept word in good quality doc
  R_MINIMAL_REJ_ACCEPT  // Accept EVERYTHING except tess failures
};
    
    // AMBIG_TABLE[i] stores a set of ambiguities whose
// wrong ngram starts with unichar id i.
using UnicharAmbigsVector = GenericVector<AmbigSpec_LIST *>;
    
    namespace tesseract {
    }
    
    b2Triangle::~b2Triangle(){
	delete[] x;
	delete[] y;
}
    
    						// add up all pixel errors
						float fCWError = 0.0f;
						for (unsigned int uiPixel = 0; uiPixel < 8; uiPixel++)
						{
							fCWError += afPixelErrors[uiPixel];
						}
    
        if (node.m_endtype == etClosedPolygon)
    {
      int k = len - 1;
      for (int j = 0; j < len; ++j)
        OffsetPoint(j, k, node.m_jointype);
      m_destPolys.push_back(m_destPoly);
    }
    else if (node.m_endtype == etClosedLine)
    {
      int k = len - 1;
      for (int j = 0; j < len; ++j)
        OffsetPoint(j, k, node.m_jointype);
      m_destPolys.push_back(m_destPoly);
      m_destPoly.clear();
      //re-build m_normals ...
      DoublePoint n = m_normals[len -1];
      for (int j = len - 1; j > 0; j--)
        m_normals[j] = DoublePoint(-m_normals[j - 1].X, -m_normals[j - 1].Y);
      m_normals[0] = DoublePoint(-n.X, -n.Y);
      k = 0;
      for (int j = len - 1; j >= 0; j--)
        OffsetPoint(j, k, node.m_jointype);
      m_destPolys.push_back(m_destPoly);
    }
    else
    {
      int k = 0;
      for (int j = 1; j < len - 1; ++j)
        OffsetPoint(j, k, node.m_jointype);
    }
    
    #define ADD16(a,b) ((a)+(b))
#define SUB16(a,b) ((a)-(b))
#define ADD32(a,b) ((a)+(b))
#define SUB32(a,b) ((a)-(b))
#define MULT16_16_16(a,b)     ((a)*(b))
#define MULT16_16(a,b)     ((opus_val32)(a)*(opus_val32)(b))
#define MAC16_16(c,a,b)     ((c)+(opus_val32)(a)*(opus_val32)(b))
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
        // return the randomized feature bounds for a time range
    std::pair<size_t, size_t> Bounds(size_t ts, size_t te) const
    {
        size_t tbegin = max(ts, randomizationrange / 2) - randomizationrange / 2;
        size_t tend = min(te + randomizationrange / 2, map.size());
        return std::make_pair<size_t, size_t>(std::move(tbegin), move(tend));
    }
    
    class IOpndCommand : public IExpressionCommand
{
public:
    virtual const std::shared_ptr<CalculatorVector<int>> & GetCommands() const= 0;
    virtual void AppendCommand(int command) = 0;
    virtual void ToggleSign() = 0;
    virtual void RemoveFromEnd() = 0;
    virtual bool IsNegative() const = 0;
    virtual bool IsSciFmt() const = 0;
    virtual bool IsDecimalPresent() const = 0;
    virtual const std::wstring & GetToken(wchar_t decimalSymbol) = 0;
    virtual void SetCommands(std::shared_ptr<CalculatorVector<int>> const& commands) = 0;
};
    
    
    {  static void setInitialized6(bool f) { data6_.initialized = f; }
};
    
    
    {  void serialize(const std::string& filename);
};
    
    #include 'LogFactory.h'
#include 'Logger.h'
#include 'util.h'
#include 'DHTNode.h'
#include 'DHTConnectionImpl.h'
#include 'DHTRoutingTable.h'
#include 'DHTMessageFactoryImpl.h'
#include 'DHTMessageTracker.h'
#include 'DHTMessageDispatcherImpl.h'
#include 'DHTMessageReceiver.h'
#include 'DHTTaskQueueImpl.h'
#include 'DHTTaskFactoryImpl.h'
#include 'DHTPeerAnnounceStorage.h'
#include 'DHTTokenTracker.h'
#include 'DHTInteractionCommand.h'
#include 'DHTTokenUpdateCommand.h'
#include 'DHTBucketRefreshCommand.h'
#include 'DHTPeerAnnounceCommand.h'
#include 'DHTEntryPointNameResolveCommand.h'
#include 'DHTAutoSaveCommand.h'
#include 'DHTTask.h'
#include 'DHTRoutingTableDeserializer.h'
#include 'DHTRegistry.h'
#include 'DHTBucketRefreshTask.h'
#include 'DHTMessageCallback.h'
#include 'DHTMessageTrackerEntry.h'
#include 'DHTMessageEntry.h'
#include 'UDPTrackerClient.h'
#include 'BtRegistry.h'
#include 'prefs.h'
#include 'Option.h'
#include 'SocketCore.h'
#include 'DlAbortEx.h'
#include 'RecoverableException.h'
#include 'a2functional.h'
#include 'DownloadEngine.h'
#include 'fmt.h'
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
    namespace aria2 {
    }
    
      virtual ~DHTTaskQueueImpl();
    
      // do nothing; we don't use this message as outgoing message.
  virtual bool send() CXX11_OVERRIDE;
    
    
    {}  //  namespace rocksdb

    
    std::unique_ptr<WriteControllerToken> WriteController::GetStopToken() {
  ++total_stopped_;
  return std::unique_ptr<WriteControllerToken>(new StopWriteToken(this));
}
    
      // Attempt to acquire lock.  If timeout is non-negative, operation may be
  // failed after this many microseconds.
  // Returns OK on success,
  //         TimedOut if timed out,
  //         or other Status on failure.
  // If returned status is OK, TransactionDB will eventually call UnLock().
  virtual Status TryLockFor(int64_t timeout_time) = 0;
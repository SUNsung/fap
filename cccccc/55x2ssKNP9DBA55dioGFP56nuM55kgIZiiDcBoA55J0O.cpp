
        
        void App::ClearCache(content::RenderProcessHost* render_process_host) {
  render_process_host->Send(new ShellViewMsg_ClearCache());
  nw::RemoveHttpDiskCache(render_process_host->GetBrowserContext(),
                          render_process_host->GetID());
}
    
    #endif  // CONTENT_NW_SRC_API_BINDINGS_COMMON_H_

    
    
namespace nwapi {
    }
    
    class NwAppSetProxyConfigFunction : public NWSyncExtensionFunction {
 public:
  NwAppSetProxyConfigFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    class NwObjCallObjectMethodAsyncFunction : public UIThreadExtensionFunction {
 public:
  NwObjCallObjectMethodAsyncFunction();
    }
    
    void NwDesktopCaptureMonitor::OnSourceNameChanged(DesktopMediaList* list, int index) {
    DesktopMediaList::Source src = list->GetSource(index);
    std::unique_ptr<base::ListValue> args = nwapi::nw__screen::OnSourceNameChanged::Create(
      src.id.ToString(),
      base::UTF16ToUTF8(src.name));
    DispatchEvent(
      events::HistogramValue::UNKNOWN, 
      nwapi::nw__screen::OnSourceNameChanged::kEventName,
      std::move(args));    
  }
    
        /*
        Extract a single plane from 3 channel image
    */
    void extract3(const Size2D &size,
                  const u8 * srcBase, ptrdiff_t srcStride,
                  u8 * dstBase, ptrdiff_t dstStride,
                  u32 coi);
    
    #define IMPL_ADDWEIGHTED(type)                                \
void addWeighted(const Size2D &,                              \
                 const type *, ptrdiff_t,                     \
                 const type *, ptrdiff_t,                     \
                 type *, ptrdiff_t,                           \
                 f32, f32, f32)                               \
{                                                             \
    internal::assertSupportedConfiguration();                 \
}
    
    
    {
    {
    {            x -= 8;
            if(x == colsn){
                x -= cn;
            }
            s16 prevx[4], rowx[4], nextx[4];
            for( s32 k = 0; k < cn; k++ )
            {
                prevx[(k + x%cn)%cn] = srow2[x+k-cn] + srow1[x+k-cn] + srow0[x+k-cn];
                rowx[(k + x%cn)%cn] = srow2[x+k] + srow1[x+k] + srow0[x+k];
            }
            for( ; x < colsn; x++ )
            {
                size_t xx = x%cn;
                if(x+cn >= colsn) {
                    // make border
                    if (borderType == BORDER_MODE_CONSTANT)
                    {
                        nextx[xx] = borderValue;
                    } else if (borderType == BORDER_MODE_REFLECT101)
                    {
                        nextx[xx] = srow2[x-cn] + srow1[x-cn] + srow0[x-cn];
                    } else {
                        nextx[xx] = srow2[x] + srow1[x] + srow0[x];
                    }
                } else {
                    nextx[xx] = srow2[x+cn] + srow1[x+cn] + srow0[x+cn];
                }
                *(drow+x) = internal::saturate_cast<u8>((prevx[xx] + rowx[xx] + nextx[xx])*(1/9.));
                prevx[xx] = rowx[xx];
                rowx[xx] = nextx[xx];
            }
        }
    }
#else
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)borderValue;
#endif
}
    
    void assertSupportedConfiguration(bool parametersSupported)
{
    if (!isSupportedConfiguration()) {
        std::cerr << 'internal error: attempted to use an unavailable function' << std::endl;
        std::abort();
    }
    }
    
            //left&right borders
        if (borderType != BORDER_MODE_CONSTANT)
            for (s32 k = 0; k < cn; ++k)
            {
                lane[-cn+k] = lane[idx_l1 + k];
                lane[-cn-cn+k] = lane[idx_l2 + k];
    }
    
    bool IsUserOnly(std::wstring opt)
{
	bool userOnly;
    }
    
    namespace aria2 {
    }
    
    namespace aria2 {
    }
    
      char zero[18];
  memset(zero, 0, sizeof(zero));
    
    
    {} // namespace aria2
    
        taskFactory->setLocalNode(localNode);
    taskFactory->setRoutingTable(routingTable.get());
    taskFactory->setMessageDispatcher(dispatcher.get());
    taskFactory->setMessageFactory(factory.get());
    taskFactory->setTaskQueue(taskQueue.get());
    taskFactory->setTimeout(std::chrono::seconds(messageTimeout));
    
    public:
  DHTTaskExecutor(int numConcurrent);
    
      virtual void executeTask() = 0;
    
    
    {  virtual void
  addImmediateTask(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
};
    
    namespace aria2 {
    }
    
    bool DNSCache::CacheEntry::add(const std::string& addr)
{
  for (std::vector<AddrEntry>::const_iterator i = addrEntries_.begin(),
                                              eoi = addrEntries_.end();
       i != eoi; ++i) {
    if ((*i).addr_ == addr) {
      return false;
    }
  }
  addrEntries_.push_back(AddrEntry(addr));
  return true;
}
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // print values
    std::cout << object << '\n';
    std::cout << *res1.first << ' ' << std::boolalpha << res1.second << '\n';
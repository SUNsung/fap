
    {}  // namespace nwapi
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    bool MenuDelegate::IsCommandIdEnabled(int command_id) const {
  if (command_id < 0)
    return false;
    }
    
    
    {}  // namespace nwapi

    
      nw::Package* package = nw::package();
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  base::CommandLine::StringVector args = command_line->GetArgs();
  base::CommandLine::StringVector argv = command_line->original_argv();
    
    #include 'base/run_loop.h'
#include 'content/public/browser/browsing_data_remover.h'
#include 'extensions/browser/extension_function.h'
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethodSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodSyncFunction);
};
    
    
    {    std::unique_ptr<base::ListValue> args = nwapi::nw__screen::OnSourceThumbnailChanged::Create(
      src.id.ToString(),
      base64);
    DispatchEvent(
      events::HistogramValue::UNKNOWN, 
      nwapi::nw__screen::OnSourceThumbnailChanged::kEventName,
      std::move(args));
  }
    
    
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenStopMonitorFunction);
  };
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    
    {  if (immt != ImmType::TocOnly) li64(rt, imm64, immt != ImmType::AnyCompact);
  else li64TOC (rt, imm64, immt, immMayChange);
}
    
    
    {  if (base64) {
    decoded = string_base64_decode(data, data_len, true);
    if (decoded.isNull()) {
      raise_warning('unable to decode base64 data');
      return nullptr;
    }
  } else {
    decoded = url_decode(data, data_len);
  }
  return req::make<MemFile>(decoded.data(), decoded.size());
}
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    
    {
    {      write(ini_fd, line.c_str(), line.length());
      write(ini_fd, '\n', 1);
      cnt += 2;
      continue;
    }
    if (argv[cnt][0] != '-') {
      if (show) {
        newargv.push_back('-w');
      } else {
        newargv.push_back(lint ? '-l' : '-f');
      }
      newargv.push_back(argv[cnt++]);
      need_file = false;
      break;
    }
    if (strcmp(argv[cnt], '--') == 0) {
      break;
    }
    cnt++; // skip unknown options
  }
    
    #ifndef HPHP_GLOB_STREAM_WRAPPER_H
#define HPHP_GLOB_STREAM_WRAPPER_H
    
      bool valid() const { return !isClosed(); }
    
    template<typename F>
void logPerfWarningImpl(folly::StringPiece event, int64_t priority,
                        int64_t rate, F fillCols) {
  auto const effectiveRate = rate * RuntimeOption::EvalPerfWarningSampleRate;
  if (effectiveRate > std::numeric_limits<uint32_t>::max()) return;
  if (!StructuredLog::coinflip(effectiveRate)) return;
    }
    
    #include 'hphp/util/stack-trace.h'
    
        std::unique_ptr<DHTMessageDispatcher> messageDispatcher;
    
    void DHTRoutingTable::dropNode(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->dropNode(node);
}
/*
  void DHTRoutingTable::moveBucketHead(const std::shared_ptr<DHTNode>& node)
  {
  getBucketFor(node)->moveToHead(node);
  }
*/
void DHTRoutingTable::moveBucketTail(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->moveToTail(node);
}
    
    namespace aria2 {
    }
    
      uint32_t temp32;
  uint64_t temp64;
  // time
  if (version == 2) {
    READ_CHECK(fp, &temp32, sizeof(temp32));
    serializedTime_.setTimeFromEpoch(ntohl(temp32));
    // 4bytes reserved
    readBytes(fp, buf, buf.size(), 4);
  }
  else {
    READ_CHECK(fp, &temp64, sizeof(temp64));
    serializedTime_.setTimeFromEpoch(ntoh64(temp64));
  }
    
    namespace aria2 {
    }
    
      // show some sample bytes
  virtual std::string toString() const CXX11_OVERRIDE;
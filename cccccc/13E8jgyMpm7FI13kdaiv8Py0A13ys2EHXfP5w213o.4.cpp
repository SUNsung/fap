
        
        IPC_MESSAGE_ROUTED4(ShellViewHostMsg_Call_Object_Method,
                    int /* object id */,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
    #if defined(OS_WIN)
#include 'base/strings/utf_string_conversions.h'
#include 'base/files/file_path.h'
#include 'base/files/file_util.h'
#include 'base/win/shortcut.h'
#include 'base/path_service.h'
#include 'content/nw/src/common/shell_switches.h'
#endif
    
    #include <string>
    
    bool MenuDelegate::IsCommandIdEnabled(int command_id) const {
  if (command_id < 0)
    return false;
    }
    
          std::unique_ptr<SkBitmap> bitmap(new SkBitmap());
      if (data.type == TYPE_PNG &&
        !gfx::PNGCodec::Decode(reinterpret_cast<const unsigned char*>(decoded_str.c_str()), decoded_str.size(), bitmap.get())) {
        error_ = 'Failed to decode as PNG';
        return false;
      } else if (data.type == TYPE_JPEG) {
        std::unique_ptr<SkBitmap> tmp_bitmap = gfx::JPEGCodec::Decode(reinterpret_cast<const unsigned char*>(decoded_str.c_str()), decoded_str.size());
        if (tmp_bitmap == NULL) {
          error_ = 'Failed to decode as JPEG';
          return false;
        }
        bitmap = std::move(tmp_bitmap);
      }
    
    class NwClipboardReadAvailableTypesFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardReadAvailableTypesFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
      // implement nw.Screen.registerStream()
  class NwScreenRegisterStreamFunction : public NWSyncExtensionFunction {
  public:
    NwScreenRegisterStreamFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    // RenameNode - Rename a node to another name
// nodeNameOrig - original node name
// nodeNameNew - new node name
void ComputationNetwork::RenameNode(const std::wstring& nodeNameOrig, const std::wstring& newNodeName)
{
    RenameNode(GetNodeFromName(nodeNameOrig), newNodeName);
}
    
    template <class ConfigRecordType, typename ElemType>
function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory(const ConfigRecordType& config)
{
    function<ComputationNetworkPtr(DEVICEID_TYPE)> createNetworkFn;
    bool gotIt = TryGetNetworkFactory<ConfigRecordType, ElemType>(config, createNetworkFn);
    if (!gotIt)
        RuntimeError('No network builder found in the config file. NDLNetworkBuilder, SimpleNetworkBuilder, or BrainScriptNetworkBuilder must be specified');
    else
        return createNetworkFn;
}
    
    #include 'osquery/tests/test_util.h'
    
    
    {  // Support a signed 64, a double, and treat everything else as a signed int.
  if (type == kCFNumberSInt64Type) {
    long long int value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  } else if (type == kCFNumberDoubleType) {
    double value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  } else {
    unsigned int value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  }
  // Cast as a string.
  return '0';
}
    
    class DiskArbitrationEventPublisher
    : public EventPublisher<DiskArbitrationSubscriptionContext,
                            DiskArbitrationEventContext> {
  DECLARE_PUBLISHER('diskarbitration');
    }
    
      auto dequeueEvents = [this]() {
    // Dequeue several events while holding the lock.
    int max_before_lock = kKernelEventsIterate;
    while (max_before_lock > 0) {
      // Request an event from the synchronized, safe, portion of the queue.
      CQueue::event *event = nullptr;
      auto event_type = queue_->dequeue(&event);
      if (event_type == OSQUERY_NULL_EVENT) {
        return false;
      }
    }
    }
    
    
    {  // Too many fields
  bad_line = R'('2016-03-22T21:17:01.701882+00:00','','6','','','','')';
  ec = pub.createEventContext();
  status = pub.populateEventContext(bad_line, ec);
  ASSERT_FALSE(status.ok());
  ASSERT_NE(std::string::npos, status.getMessage().find('more'));
}
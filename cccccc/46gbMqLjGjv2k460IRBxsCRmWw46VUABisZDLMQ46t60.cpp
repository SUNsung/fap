
        
          virtual bool Generate(const FileDescriptor* file, const string& parameter,
                        GeneratorContext* context, string* error) const {
    file->CopyTo(file_);
    return true;
  }
    
    #include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_name_resolver.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/strutil.h>
#include <google/protobuf/stubs/map_util.h>
    
      // We start the comment with the main body based on the comments from the
  // .proto file (if present). We then end with the field declaration, e.g.:
  //   optional string foo = 5;
  // If the field is a group, the debug string might end with {.
  printer->Print('/**\n');
  WriteDocCommentBody(printer, field);
  printer->Print(
    ' * <code>$def$</code>\n',
    'def', EscapeJavadoc(FirstLineOf(field->DebugString())));
  printer->Print(' */\n');
}
    
    void ImmutableExtensionLiteGenerator::Generate(io::Printer* printer) {
  std::map<string, string> vars;
  const bool kUseImmutableNames = true;
  InitTemplateVars(descriptor_, scope_, kUseImmutableNames, name_resolver_,
                   &vars);
  printer->Print(vars,
      'public static final int $constant_name$ = $number$;\n');
    }
    
    ExtensionGenerator::ExtensionGenerator(const string& root_class_name,
                                       const FieldDescriptor* descriptor)
    : method_name_(ExtensionMethodName(descriptor)),
      root_class_and_method_name_(root_class_name + '_' + method_name_),
      descriptor_(descriptor) {
  if (descriptor->is_map()) {
    // NOTE: src/google/protobuf/compiler/plugin.cc makes use of cerr for some
    // error cases, so it seems to be ok to use as a back door for errors.
    std::cerr << 'error: Extension is a map<>!'
         << ' That used to be blocked by the compiler.' << std::endl;
    std::cerr.flush();
    abort();
  }
}
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
      // localnode
  // 8bytes reserved
  readBytes(fp, buf, buf.size(), 8);
  // localnode ID
  readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
  auto localNode = std::make_shared<DHTNode>(buf);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
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
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    
    {} // namespace aria2
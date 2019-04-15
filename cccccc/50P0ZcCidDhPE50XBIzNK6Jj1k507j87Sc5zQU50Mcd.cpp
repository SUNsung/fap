
        
        
    {}  // namespace api
    
     private:
  display::Screen* screen_;
    
      // Removes this instance from the weak map.
  void RemoveFromWeakMap() {
    if (weak_map_ && weak_map_->Has(weak_map_id()))
      weak_map_->Remove(weak_map_id());
  }
    
    #include 'content/public/browser/javascript_dialog_manager.h'
    
    void AtomQuotaPermissionContext::RequestQuotaPermission(
    const content::StorageQuotaParams& params,
    int render_process_id,
    const PermissionCallback& callback) {
  callback.Run(response::QUOTA_PERMISSION_RESPONSE_ALLOW);
}
    
    #endif  // ATOM_BROWSER_NET_ABOUT_PROTOCOL_HANDLER_H_

    
    void OffscreenViewProxy::SetBitmap(const SkBitmap& bitmap) {
  if (view_bounds_.width() == bitmap.width() &&
      view_bounds_.height() == bitmap.height() && observer_) {
    view_bitmap_.reset(new SkBitmap(bitmap));
    observer_->OnProxyViewPaint(view_bounds_);
  }
}
    
    #ifndef NDEBUG
/// Verify that the types of fields are valid within a given generic signature.
static void verifyFields(CanGenericSignature Sig, ArrayRef<SILField> Fields) {
  for (auto &field : Fields) {
    auto ty = field.getLoweredType();
    // Layouts should never refer to archetypes, since they represent an
    // abstract generic type layout.
    assert(!ty->hasArchetype()
           && 'SILLayout field cannot have an archetype type');
    assert(!ty->hasTypeVariable()
           && 'SILLayout cannot contain constraint system type variables');
    if (!ty->hasTypeParameter())
      continue;
    field.getLoweredType().findIf([Sig](Type t) -> bool {
      if (auto gpt = t->getAs<GenericTypeParamType>()) {
        // Check that the generic param exists in the generic signature.
        assert(Sig && 'generic param in nongeneric layout?');
        assert(std::find(Sig.getGenericParams().begin(),
                         Sig.getGenericParams().end(),
                         gpt->getCanonicalType()) != Sig.getGenericParams().end()
               && 'generic param not declared in generic signature?!');
      }
      return false;
    });
  }
}
#endif
    
    bool swift::parseASTSection(SerializedModuleLoader *SML, StringRef buf,
                            SmallVectorImpl<std::string> &foundModules) {
  if (!serialization::isSerializedAST(buf))
    return false;
    }
    
    
    {  return Begin + oldSize;
}  

    
    #ifndef VERB
#  define VERB(Word)
#endif
    
    enum class ChildKind { Left, Right, Further, Root };
    
    
bool Mangle::isNonAscii(StringRef str) {
  for (unsigned char c : str) {
    if (c >= 0x80)
      return true;
  }
  return false;
}
    
    static void printNode(DemanglerPrinter &Out, const Node *node, unsigned depth) {
  // Indent two spaces per depth.
  for (unsigned i = 0; i < depth * 2; ++i) {
    Out << ' ';
  }
  if (!node) {
    Out << '<<NULL>>';
    return;
  }
  Out << 'kind=' << getNodeKindString(node->getKind());
  if (node->hasText()) {
    Out << ', text=\'' << node->getText() << '\'';
  }
  if (node->hasIndex()) {
    Out << ', index=' << node->getIndex();
  }
  Out << '\n';
  for (auto &child : *node) {
    printNode(Out, child, depth + 1);
  }
}
    
    // Section 6.1: Bias adaptation function
    
    // Parses the given box file string into a page_number, utf8_str, and
// bounding_box. Returns true on a successful parse.
bool ParseBoxFileStr(const char* boxfile_str, int* page_number,
                     STRING* utf8_str, TBOX* bounding_box);
    
    #endif  // TESSERACT_CSTRUCT_BOXWORD_H_

    
    
// Returns the median value of the vector, given that the values are
// circular, with the given modulus. Values may be signed or unsigned,
// eg range from -pi to pi (modulus 2pi) or from 0 to 2pi (modulus 2pi).
// NOTE that the array is shuffled, but the time taken is linear.
// An assumption is made that most of the values are spread over no more than
// half the range, but wrap-around is accounted for if the median is near
// the wrap-around point.
// Cannot be a member of GenericVector, as it makes heavy used of LLSQ.
// T must be an integer or float/double type.
template<typename T> T MedianOfCircularValues(T modulus, GenericVector<T>* v) {
  LLSQ stats;
  T halfrange = static_cast<T>(modulus / 2);
  int num_elements = v->size();
  for (int i = 0; i < num_elements; ++i) {
    stats.add((*v)[i], (*v)[i] + halfrange);
  }
  bool offset_needed = stats.y_variance() < stats.x_variance();
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] += halfrange;
    }
  }
  int median_index = v->choose_nth_item(num_elements / 2);
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] -= halfrange;
    }
  }
  return (*v)[median_index];
}
    
    #ifndef TESSERACT_CCSTRUCT_OCRPARA_H_
#define TESSERACT_CCSTRUCT_OCRPARA_H_
    
    CallCredentials::~CallCredentials() {}
    
    void ChannelArguments::SetSslTargetNameOverride(const grpc::string& name) {
  SetString(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG, name);
}
    
    MeasureDouble RpcClientReceivedBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientReceivedBytesPerRpcMeasureName,
      'Total bytes received across all response messages per RPC', kUnitBytes);
  return measure;
}
    
    #include 'opencensus/stats/stats.h'
#include 'src/cpp/ext/filters/census/grpc_plugin.h'
    
    
    { private:
  CensusContext context_;
  // server method
  absl::string_view method_;
  std::string qualified_method_;
  grpc_slice path_;
  // Pointer to the grpc_call element
  grpc_call* gc_;
  // Authorization context for the call.
  grpc_auth_context* auth_context_;
  // Metadata element for census stats.
  grpc_linked_mdelem census_bin_;
  // recv callback
  grpc_metadata_batch* recv_initial_metadata_;
  grpc_closure* initial_on_done_recv_initial_metadata_;
  grpc_closure on_done_recv_initial_metadata_;
  // recv message
  grpc_closure* initial_on_done_recv_message_;
  grpc_closure on_done_recv_message_;
  absl::Time start_time_;
  absl::Duration elapsed_time_;
  grpc_core::OrphanablePtr<grpc_core::ByteStream>* recv_message_;
  uint64_t recv_message_count_;
  uint64_t sent_message_count_;
  // Buffer needed for grpc_slice to reference it when adding metatdata to
  // response.
  char stats_buf_[kMaxServerStatsLen];
};
    
      const protobuf::Descriptor* desc =
      descriptor_pool_->FindMessageTypeByName(request->containing_type());
  if (desc == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'Type not found.');
  }
    
    #endif  // !defined(GPR_LINUX) && !defined(GPR_WINDOWS) && !defined(GPR_APPLE)

    
      void __set_success(const ExtensionResponse& val);
    
    #include 'ExtensionManager.h'
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>
    
    int main(int argc, char **argv) {
  int port = 9090;
  ::apache::thrift::stdcxx::shared_ptr<ExtensionHandler> handler(new ExtensionHandler());
  ::apache::thrift::stdcxx::shared_ptr<TProcessor> processor(new ExtensionProcessor(handler));
  ::apache::thrift::stdcxx::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::apache::thrift::stdcxx::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::apache::thrift::stdcxx::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());
    }
    
    
  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->version);
          this->__isset.version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->sdk_version);
          this->__isset.sdk_version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->min_sdk_version);
          this->__isset.min_sdk_version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }
    
    #include <vector>
#include <string>
    
    
    {      if (entry.first == serial->second) {
        matched = true;
        row['disk_id'] = entry.second['disk_id'];
        row['driver_type'] = entry.second['driver_type'];
      }
    }
    
    Expected<int, PosixError> syscall(struct perf_event_attr* attr,
                                  pid_t pid,
                                  int cpu,
                                  int group_fd,
                                  unsigned long const flags);
    
    #pragma once
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    namespace osquery {
namespace table_tests {
    }
    }
namespace api {
    }
    
    v8::Local<v8::Object> CreateJSEvent(
    v8::Isolate* isolate,
    v8::Local<v8::Object> object,
    content::WebContents* sender,
    IPC::Message* message) {
  v8::Local<v8::Object> event;
  bool use_native_event = sender && message;
    }
    
    namespace atom {
    }
    
    bool AsarProtocolHandler::IsSafeRedirectTarget(const GURL& location) const {
  return false;
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(URLRequestBufferJob);
};
    
    #include 'base/values.h'
#include 'extensions/common/draggable_region.h'
#include 'content/public/common/common_param_traits.h'
#include 'ipc/ipc_message_macros.h'
#include 'ui/gfx/ipc/gfx_param_traits.h'
    
    class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    PolicyCertVerifier::PolicyCertVerifier(
    const base::Closure& anchor_used_callback)
    : anchor_used_callback_(anchor_used_callback) {
  //DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
}
    
      if (type == 'App' && method == 'AddOriginAccessWhitelistEntry') {
    std::string sourceOrigin        = *v8::String::Utf8Value(args[2]);
    std::string destinationProtocol = *v8::String::Utf8Value(args[3]);
    std::string destinationHost     = *v8::String::Utf8Value(args[4]);
    bool allowDestinationSubdomains = args[5]->ToBoolean()->Value();
    }
    
    #ifndef CONTENT_NW_SRC_API_DISPATCHER_BINDINGS_H_
#define CONTENT_NW_SRC_API_DISPATCHER_BINDINGS_H_
    
    void DispatcherHost::OnCallObjectMethod(
    int object_id,
    const std::string& type,
    const std::string& method,
    const base::ListValue& arguments) {
  DLOG(INFO) << 'OnCallObjectMethod: object_id:' << object_id
             << ' type:' << type
             << ' method:' << method
             << ' arguments:' << arguments;
    }
    
    #endif  // CONTENT_NW_SRC_API_DISPATCHER_HOST_H_

    
    void Menu::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (!GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    return ;
  } else {
    std::vector<MenuItem*>::iterator menu_item_iterator = menu_items.begin();
    std::vector<MenuItem*>::iterator menu_item_end = menu_items.end();
    while (menu_item_iterator != menu_item_end){
      MenuItem *menu_item = *menu_item_iterator;
      if (menu_item!=NULL && GTK_IS_MENU_ITEM(menu_item->menu_item_)){
        menu_item->UpdateKeys(gtk_accel_group);
      }
      ++menu_item_iterator;
    }
  }
}
    
    static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    
    {
    {
}  // namespace python
}  // namespace protobuf
    
    // Appends all the elements in the input iterator to the container.
//
// Returns None if successful; returns NULL and sets an exception if
// unsuccessful.
PyObject* Extend(RepeatedScalarContainer* self, PyObject* value);
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
namespace {
    }
    }
    }
    }
    }
    
      cv::Mat sample_float;
  if (num_channels_ == 3)
    sample_resized.convertTo(sample_float, CV_32FC3);
  else
    sample_resized.convertTo(sample_float, CV_32FC1);
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #endif  // CAFFE_BATCHREINDEX_LAYER_HPP_

    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {}  // namespace caffe
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/tanh_layer.hpp'
    
    
    {}  // namespace caffe
    
        case LWS_CALLBACK_CLOSED:
    {
        ext->~SocketExtension();
        break;
    }
    
        // Format message frame(s)
    unsigned char *framePackBufferOffset = framePackBuffer;
    for (int i = 0; i < framesPerSend; i++) {
        framePackBufferOffset[0] = 130;
        if (byteSize < 126) {
            framePackBufferLength += byteSize + 6;
            framePackBufferOffset[1] = 128 | byteSize;
            framePackBufferOffset += byteSize + 6;
        } else if (byteSize <= UINT16_MAX) {
            framePackBufferLength += byteSize + 8;
            framePackBufferOffset[1] = 128 | 126;
            *((uint16_t *) &framePackBufferOffset[2]) = htons(byteSize);
            framePackBufferOffset += byteSize + 8;
        } else {
            framePackBufferLength += byteSize + 14;
            framePackBufferOffset[1] = 128 | 127;
            *((uint64_t *) &framePackBufferOffset[2]) = htobe64(byteSize);
            framePackBufferOffset += byteSize + 14;
        }
    }
    
        z_stream inflationStream = {};
    char *inflationBuffer;
    char *inflate(char *data, size_t &length, size_t maxPayload);
    std::string dynamicInflationBuffer;
    static const int LARGE_BUFFER_SIZE = 300 * 1024;
    
    template <bool isServer>
class ExtensionsNegotiator {
protected:
    int options;
public:
    ExtensionsNegotiator(int wantedOptions);
    std::string generateOffer();
    void readOffer(std::string offer);
    int getNegotiatedOptions();
};
    
    template <bool isServer>
struct WIN32_EXPORT Group : protected uS::NodeData {
protected:
    friend struct Hub;
    friend struct WebSocket<isServer>;
    friend struct HttpSocket<false>;
    friend struct HttpSocket<true>;
    }
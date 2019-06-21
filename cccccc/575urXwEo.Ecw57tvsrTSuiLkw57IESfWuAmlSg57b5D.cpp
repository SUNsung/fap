
        
          for (const auto& node : item_.MainOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
  for (const auto& node : item_.EnqueueOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
    
        nullptr,  // nb_inplace_add
    nullptr,  // nb_inplace_subtract
    nullptr,  // nb_inplace_multiply
#if PY_MAJOR_VERSION < 3
    nullptr,  // nb_inplace_divide
#endif
    nullptr,  // nb_inplace_remainder
    nullptr,  // nb_inplace_power
    nullptr,  // nb_inplace_lshift
    nullptr,  // nb_inplace_rshift
    nullptr,  // nb_inplace_and
    nullptr,  // nb_inplace_xor
    nullptr,  // nb_inplace_or
    
    // Creates a tensor in 'ret' from the input Ndarray.
Status NdarrayToTensor(PyObject* obj, Tensor* ret);
    
    struct PyDecrefDeleter {
  void operator()(PyObject* p) const { Py_DECREF(p); }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Opaque and unique identifier for the host platform.
// This is needed so that plugins can refer to/identify this platform without
// instantiating a HostPlatform object.
// This is broken out here to avoid a circular dependency between HostPlatform
// and HostStreamExecutor.
extern const Platform::Id kHostPlatformId;
    
    // Allows to represent a value that is either a host scalar or a scalar stored
// on the GPU device.
template <typename ElemT>
class HostOrDeviceScalar {
 public:
  // Not marked as explicit because when using this constructor, we usually want
  // to set this to a compile-time constant.
  HostOrDeviceScalar(ElemT value) : value_(value), is_pointer_(false) {}
  explicit HostOrDeviceScalar(const DeviceMemory<ElemT>& pointer)
      : pointer_(pointer), is_pointer_(true) {
    CHECK_EQ(1, pointer.ElementCount());
  }
    }
    
    namespace stream_executor {
namespace port {
    }
    }
    
    
    {}  // namespace mate

    
      template <typename T>
  bool SetMethod(const base::StringPiece& key, const T& callback) {
    return GetHandle()
        ->Set(isolate_->GetCurrentContext(), StringToV8(isolate_, key),
              CallbackTraits<T>::CreateTemplate(isolate_, callback)
                  ->GetFunction(isolate_->GetCurrentContext())
                  .ToLocalChecked())
        .ToChecked();
  }
    
    namespace mate {
    }
    
    template <typename T>
struct Converter<ScopedPersistent<T>> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const ScopedPersistent<T>& val) {
    return val.NewHandle(isolate);
  }
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(WrappableBase);
};
    
    int CertificateManagerModel::ImportFromPKCS12(
    PK11SlotInfo* slot_info,
    const std::string& data,
    const base::string16& password,
    bool is_extractable,
    net::ScopedCERTCertificateList* imported_certs) {
  return cert_db_->ImportFromPKCS12(slot_info, data, password, is_extractable,
                                    imported_certs);
}
    
    ObjectTemplateBuilder& ObjectTemplateBuilder::MakeDestroyable() {
  SetMethod('destroy', base::Bind(internal::Destroyable::Destroy));
  SetMethod('isDestroyed', base::Bind(internal::Destroyable::IsDestroyed));
  return *this;
}
    
      // Notify another process, if available. Otherwise sets ourselves as the
  // singleton instance. Returns PROCESS_NONE if we became the singleton
  // instance. Callers are guaranteed to either have notified an existing
  // process or have grabbed the singleton (unless the profile is locked by an
  // unreachable process).
  // TODO(brettw): Make the implementation of this method non-platform-specific
  // by making Linux re-use the Windows implementation.
  NotifyResult NotifyOtherProcessOrCreate();
  void StartListeningOnSocket();
  void OnBrowserReady();
    
    namespace caffe2 {
namespace {
REGISTER_CPU_OPERATOR(
    FindDuplicateElements,
    FindDuplicateElementsOp<CPUContext>);
    }
    }
    
              vector<TensorShape> out(1);
          switch (order) {
            case StorageOrder::NCHW:
              out[0] = CreateTensorShape(
                  vector<int>{N, C * kernel_h * kernel_w, out_h, out_w},
                  TensorProto::FLOAT);
              break;
            case StorageOrder::NHWC:
              out[0] = CreateTensorShape(
                  vector<int>{N, out_h, out_w, kernel_h * kernel_w * C},
                  TensorProto::FLOAT);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    
    {	b2PolyNode(b2Vec2& pos);
	b2PolyNode();
	void AddConnection(b2PolyNode& toMe);
	void RemoveConnection(b2PolyNode& fromMe);
	void RemoveConnectionByIndex(int32 index);
	bool IsConnectedTo(b2PolyNode& me);
	b2PolyNode* GetRightestConnection(b2PolyNode* incoming);
	b2PolyNode* GetRightestConnection(b2Vec2& incomingDir);
};
    
    			image.m_bVerboseOutput = a_bVerboseOutput;
			image.Encode(a_format, a_eErrMetric, a_fEffort, a_uiJobs, a_uiMaxJobs);
    
    #   define C_MULC(m,a,b) \
      do{ (m).r = ADD32(S_MUL((a).r,(b).r) , S_MUL((a).i,(b).i)); \
          (m).i = SUB32(S_MUL((a).i,(b).r) , S_MUL((a).r,(b).i)); }while(0)
    
    #define MULT32_32_Q31(a,b)     ((a)*(b))
    
    #include 'config.h'
#include 'kiss_fft.h'
    
    #endif

    
    /*The number of bits to output at a time.*/
# define EC_SYM_BITS   (8)
/*The total number of bits in each of the state registers.*/
# define EC_CODE_BITS  (32)
/*The maximum symbol value.*/
# define EC_SYM_MAX    ((1U<<EC_SYM_BITS)-1)
/*Bits to shift by to move a symbol into the high-order position.*/
# define EC_CODE_SHIFT (EC_CODE_BITS-EC_SYM_BITS-1)
/*Carry bit of the high-order range symbol.*/
# define EC_CODE_TOP   (((opus_uint32)1U)<<(EC_CODE_BITS-1))
/*Low-order bit of the high-order range symbol.*/
# define EC_CODE_BOT   (EC_CODE_TOP>>EC_SYM_BITS)
/*The number of bits available for the last, partial symbol in the code field.*/
# define EC_CODE_EXTRA ((EC_CODE_BITS-2)%EC_SYM_BITS+1)
#endif

    
    #ifndef PSTOKENIZER_H
#define PSTOKENIZER_H
    
      Object *getObj(Object *obj, std::set<int> *fetchOriginatorNums);
    
    
    {}
    
    class GooString;
class PDFDoc;
struct XpdfSecurityHandler;
    
    void SplashOutputDev::eoClip(GfxState *state) {
  SplashPath *path;
    }
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-array type
        json str = 'I am a string';
        str.at(0) = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // output element with JSON pointer '/number'
    std::cout << j.at('/number'_json_pointer) << '\n';
    // output element with JSON pointer '/string'
    std::cout << j.at('/string'_json_pointer) << '\n';
    // output element with JSON pointer '/array'
    std::cout << j.at('/array'_json_pointer) << '\n';
    // output element with JSON pointer '/array/1'
    std::cout << j.at('/array/1'_json_pointer) << '\n';
    
    class WriteCallback {
 public:
  virtual ~WriteCallback() {}
    }
    
    // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
    #ifndef ROCKSDB_LITE
    
    
    {}  // namespace rocksdb
    
    /*
 * Class:     org_rocksdb_BackupableDBOptions
 * Method:    setShareFilesWithChecksum
 * Signature: (JZ)V
 */
void Java_org_rocksdb_BackupableDBOptions_setShareFilesWithChecksum(
    JNIEnv* /*env*/, jobject /*jobj*/, jlong jhandle, jboolean flag) {
  auto* bopt = reinterpret_cast<rocksdb::BackupableDBOptions*>(jhandle);
  bopt->share_files_with_checksum = flag;
}
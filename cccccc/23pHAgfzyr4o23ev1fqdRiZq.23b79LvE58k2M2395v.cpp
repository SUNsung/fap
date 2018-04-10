
        
        namespace {
// TODO(suharshs): Move this to a common location to allow other part of the
// repo to use it.
template <typename T, typename... Args>
std::unique_ptr<T> MakeUnique(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
}  // namespace
    
    namespace tensorflow {
class CostGraphDef;
class GraphDef;
}  // namespace tensorflow
    
      // Inserts the event at the current position into the specified stream.
  port::Status Record(CUDAStream* stream);
    
    namespace internal {
template <typename T>
struct functor_traits<scalar_tanh_fast_derivative_op<T> > {
  enum {
    Cost = NumTraits<T>::AddCost * 2 + NumTraits<T>::MulCost * 1,
    PacketAccess = packet_traits<T>::HasAdd && packet_traits<T>::HasMul &&
                   packet_traits<T>::HasNegate
  };
};
}  // namespace internal
    
    #if TENSORFLOW_USE_SYCL
    
      Status OnWorkFinishedLocked() override {
    reader_.reset(nullptr);
    file_.reset(nullptr);
    return Status::OK();
  }
    
    bool HloReachabilityMap::IsConnected(const HloInstruction* a,
                                     const HloInstruction* b) const {
  return IsReachable(a, b) || IsReachable(b, a);
}
    
    sampled_audio: A rank 2 tensor containing all tracks of the audio. Dimension 0
    is time and dimension 1 is the channel.
contents: The binary audio file contents.
file_format: A string describing the audio file format. This must be 'wav'.
samples_per_second: The number of samples per second that the audio should have.
bits_per_second: The approximate bitrate of the encoded audio file. This is
    ignored by the 'wav' file format.
)doc');
    
    #define EIGEN_USE_GPU
    
    #include 'tensorflow/compiler/xla/service/backend.h'
#include 'tensorflow/compiler/xla/service/compiler.h'
#include 'tensorflow/compiler/xla/service/service.h'
#include 'tensorflow/compiler/xla/statusor.h'
#include 'tensorflow/compiler/xla/xla_data.pb.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    namespace nw {
    }
    
    v8::Handle<v8::Value> AllocateId(int routing_id);
    
    
    {}  // namespace nwapi
    
    
    {  v8::Local<v8::Value> val = policy_obj->Get(v8_str('val'));
  if (!val->IsString())
    return;
  v8::String::Utf8Value policy_str(val);
  if (!strcmp(*policy_str, 'ignore'))
    *policy = blink::WebNavigationPolicyIgnore;
  else if (!strcmp(*policy_str, 'download'))
    *policy = blink::WebNavigationPolicyDownload;
  else if (!strcmp(*policy_str, 'current'))
    *policy = blink::WebNavigationPolicyCurrentTab;
  else if (!strcmp(*policy_str, 'new-window'))
    *policy = blink::WebNavigationPolicyNewWindow;
  else if (!strcmp(*policy_str, 'new-popup'))
    *policy = blink::WebNavigationPolicyNewPopup;
}
    
      // Get Shell's corresponding js object's id.
  static void GetShellIdForCurrentContext(
      const v8::FunctionCallbackInfo<v8::Value>& args);
    
    
  void OnAllocateObject(int object_id,
                        const std::string& type,
                        const base::DictionaryValue& option);
  void OnDeallocateObject(int object_id);
  void OnCallObjectMethod(int object_id,
                          const std::string& type,
                          const std::string& method,
                          const base::ListValue& arguments);
  void OnCallObjectMethodSync(int object_id,
                              const std::string& type,
                              const std::string& method,
                              const base::ListValue& arguments,
                              base::ListValue* result);
  void OnCallStaticMethod(const std::string& type,
                          const std::string& method,
                          const base::ListValue& arguments);
  void OnCallStaticMethodSync(const std::string& type,
                              const std::string& method,
                              const base::ListValue& arguments,
                              base::ListValue* result);
  void OnUncaughtException(const std::string& err);
  void OnGetShellId(int* id);
  void OnCreateShell(const std::string& url,
                     const base::DictionaryValue& manifest,
                     int* routing_id);
  void OnAllocateId(int* ret);
  void OnSetForceClose(bool force, int* ret);
    
    #include 'content/nw/src/api/base/base.h'
#include 'ui/gfx/display_observer.h'
    
    
    {  *icon = item->icon_;
  return true;
}
    
    namespace nw {
    }
    
    void Menu::Remove(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.erase(begin+pos);
  gtk_container_remove(GTK_CONTAINER(menu_), menu_item->menu_item_);
}
    
    
    {}
    
    static const int kIconWidth = 16;
static const int kIconHeight = 16;
    
     protected:
  ~NwAppCrashBrowserFunction() override {}
    
            void GetSubMinibatchToNet(size_t iSubminibatch)
        {
            Matrices decimatedMatrices;
            MBLayoutPtr decimatedLayout;
            pair<size_t, size_t> seqRange = DataReaderHelpers::DecimateMinibatch<ElemType>(m_inputMatricesCache, decimatedMatrices, m_MBLayoutCache, decimatedLayout, m_numSubminibatches, iSubminibatch);
            //  NOTE: deimatedMatrices must be released by caller
    }
    
    namespace ONNXIR
{
    Model::Model(const std::string& p_graphName,
        bool p_isONNX,
        const ModelMetaData& p_modelMetaData)
    {
        m_modelProto.reset(new ModelProto);
        m_modelProto->set_ir_version(Version::IR_VERSION);
        m_modelProto->mutable_graph()->set_name(p_graphName);
        m_modelMetaData = p_modelMetaData;
        for (auto& metaData : m_modelMetaData)
        {
            auto prop = m_modelProto->add_metadata_props();
            prop->set_key(metaData.first);
            prop->set_value(metaData.second);
        }
        // Set m_domainToVersion to contain related domains with latest version.
        AddImportOpSets(p_isONNX);
        m_graph.reset(new Graph(m_modelProto->mutable_graph(), m_domainToVersion, p_isONNX));
    }
    }
    
            void StringRange::RestartCapture()
        {
            m_start = m_data;
            m_end = m_data;
        }
    
        inline Status FileOpenRd(const std::string& p_path, /*out*/ int* p_fd)
    {
#ifdef _WIN32
        _sopen_s(p_fd, p_path.c_str(), _O_RDONLY | _O_SEQUENTIAL | _O_BINARY, _SH_DENYWR, _S_IREAD | _S_IWRITE);
#else
        *p_fd = open(p_path.c_str(), O_RDONLY);
#endif
        if (0 > *p_fd)
        {
            return Status(SYSTEM, errno);
        }
        return Status::OK();
    }
    
        //‘GREATER’, ‘LESS’, ‘EQUALS,
    REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Greater)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Less)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Equal)
    
        // Taken from Caffe2
    REGISTER_OPERATOR_SCHEMA(MaxRoiPool)
        .Description('ROI max pool consumes an input tensor X and region of interests (RoIs) to '
            'apply max pooling across each RoI, to produce output 4-D tensor of shape '
            '(num_rois, channels, pooled_shape[0], pooled_shape[1]).')
        .Input('X', 'The input 4-D tensor of data. Only NCHW order is currently supported.', 'T')
        .Input('rois', 'RoIs (Regions of Interest) to pool over. Should be a 2-D tensor of '
            'shape (num_rois, 5) given as [[batch_id, x1, y1, x2, y2], ...].', 'T')
        .Output('Y', 'RoI pooled output 4-D tensor of shape '
            '(num_rois, channels, pooled_h, pooled_w).', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('pooled_shape', 'ROI pool output shape (height, width).',
            AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('spatial_scale', 'Multiplicative spatial scale factor to translate ROI '
            'coordinates from their input scale to the scale used when pooling (Default: 1.0).',
            AttrType::AttributeProto_AttributeType_FLOAT, float(1.0));
    
        // Returns all frames of a given utterance.
    msra::dbn::matrixstripe GetUtteranceFrames(size_t index) const
    {
        if (!IsInRam())
        {
            LogicError('GetUtteranceFrames was called when data have not yet been paged in.');
        }
    }
    
    const std::string GRUInputInitialHNameHint = '_initial_h_';
    
    static bool GetLevel(Slice* input, int* level) {
  uint32_t v;
  if (GetVarint32(input, &v) &&
      v < config::kNumLevels) {
    *level = v;
    return true;
  } else {
    return false;
  }
}
    
    // Helper routine: decode the next block entry starting at 'p',
// storing the number of shared key bytes, non_shared key bytes,
// and the length of the value in '*shared', '*non_shared', and
// '*value_length', respectively.  Will not dereference past 'limit'.
//
// If any errors are detected, returns NULL.  Otherwise, returns a
// pointer to the key delta (just past the three decoded values).
static inline const char* DecodeEntry(const char* p, const char* limit,
                                      uint32_t* shared,
                                      uint32_t* non_shared,
                                      uint32_t* value_length) {
  if (limit - p < 3) return NULL;
  *shared = reinterpret_cast<const unsigned char*>(p)[0];
  *non_shared = reinterpret_cast<const unsigned char*>(p)[1];
  *value_length = reinterpret_cast<const unsigned char*>(p)[2];
  if ((*shared | *non_shared | *value_length) < 128) {
    // Fast path: all three values are encoded in one byte each
    p += 3;
  } else {
    if ((p = GetVarint32Ptr(p, limit, shared)) == NULL) return NULL;
    if ((p = GetVarint32Ptr(p, limit, non_shared)) == NULL) return NULL;
    if ((p = GetVarint32Ptr(p, limit, value_length)) == NULL) return NULL;
  }
    }
    
    Status Footer::DecodeFrom(Slice* input) {
  const char* magic_ptr = input->data() + kEncodedLength - 8;
  const uint32_t magic_lo = DecodeFixed32(magic_ptr);
  const uint32_t magic_hi = DecodeFixed32(magic_ptr + 4);
  const uint64_t magic = ((static_cast<uint64_t>(magic_hi) << 32) |
                          (static_cast<uint64_t>(magic_lo)));
  if (magic != kTableMagicNumber) {
    return Status::Corruption('not an sstable (bad magic number)');
  }
    }
    
    namespace {
class MergingIterator : public Iterator {
 public:
  MergingIterator(const Comparator* comparator, Iterator** children, int n)
      : comparator_(comparator),
        children_(new IteratorWrapper[n]),
        n_(n),
        current_(NULL),
        direction_(kForward) {
    for (int i = 0; i < n; i++) {
      children_[i].Set(children[i]);
    }
  }
    }
    }
    
    static const int kVerbose = 1;
    
    class CRC { };
    
    int Packer_Unpack(const void* _rawbuf, size_t _rawlen, std::string& _url, unsigned int& _sequence, size_t& _packlen, AutoBuffer& _data) {
    if (_rawlen < sizeof(LongLinkPack)) return LONGLINKPACK_CONTINUE;
    }
    
    #endif

    
    
    {  private:
//    int m_t;
};
    
    int TSpy::__TestFun1(int i)
{
    return reinterpret_cast<Test_Spy_Sample*>(This())->__TestFun1(i);
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        JNIEnv* GetEnv();
    int Status();
    
    // Return the epilogue of the generated header file.
grpc::string GetHeaderEpilogue(grpc_generator::File *file,
                               const Parameters &params);
    
    	bool genSend = method->BidiStreaming() || ClientOnlyStreaming(method);
	bool genRecv = method->BidiStreaming() || ServerOnlyStreaming(method);
	bool genCloseAndRecv = ClientOnlyStreaming(method);
    
    #endif  // NET_GRPC_COMPILER_JAVA_GENERATOR_H_

    
    
    {  printf('The FlatBuffer was successfully created and verified!\n');
}

    
    // This is an example of parsing text straight into a buffer and then
// generating flatbuffer (JSON) text from the buffer.
int main(int /*argc*/, const char * /*argv*/ []) {
  // load FlatBuffer schema (.fbs) and JSON from disk
  std::string schemafile;
  std::string jsonfile;
  bool ok = flatbuffers::LoadFile('samples/monster.fbs', false, &schemafile) &&
            flatbuffers::LoadFile('samples/monsterdata.json', false, &jsonfile);
  if (!ok) {
    printf('couldn't load files!\n');
    return 1;
  }
    }
    
    
    {  // Deserialize by pulling the
  static grpc::Status Deserialize(grpc_byte_buffer *buffer,
                                  flatbuffers::grpc::Message<T> *msg) {
    if (!buffer) {
      return ::grpc::Status(::grpc::StatusCode::INTERNAL, 'No payload');
    }
    // Check if this is a single uncompressed slice.
    if ((buffer->type == GRPC_BB_RAW) &&
        (buffer->data.raw.compression == GRPC_COMPRESS_NONE) &&
        (buffer->data.raw.slice_buffer.count == 1)) {
      // If it is, then we can reference the `grpc_slice` directly.
      grpc_slice slice = buffer->data.raw.slice_buffer.slices[0];
      // We wrap a `Message<T>` around the slice, incrementing the refcount.
      *msg = flatbuffers::grpc::Message<T>(slice, true);
    } else {
      // Otherwise, we need to use `grpc_byte_buffer_reader_readall` to read
      // `buffer` into a single contiguous `grpc_slice`. The gRPC reader gives
      // us back a new slice with the refcount already incremented.
      grpc_byte_buffer_reader reader;
      grpc_byte_buffer_reader_init(&reader, buffer);
      grpc_slice slice = grpc_byte_buffer_reader_readall(&reader);
      grpc_byte_buffer_reader_destroy(&reader);
      // We wrap a `Message<T>` around the slice, but dont increment refcount
      *msg = flatbuffers::grpc::Message<T>(slice, false);
    }
    grpc_byte_buffer_destroy(buffer);
#if FLATBUFFERS_GRPC_DISABLE_AUTO_VERIFICATION
    return ::grpc::Status::OK;
#else
    if (msg->Verify()) {
      return ::grpc::Status::OK;
    } else {
      return ::grpc::Status(::grpc::StatusCode::INTERNAL,
                            'Message verification failed');
    }
#endif
  }
};
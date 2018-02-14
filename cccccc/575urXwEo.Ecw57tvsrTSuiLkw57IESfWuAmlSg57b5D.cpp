
        
        class DesktopCapturer: public mate::EventEmitter<DesktopCapturer>,
                       public DesktopMediaListObserver {
 public:
  static mate::Handle<DesktopCapturer> Create(v8::Isolate* isolate);
    }
    
    void GlobalShortcut::UnregisterAll() {
  accelerator_callback_map_.clear();
  GlobalShortcutListener::GetInstance()->UnregisterAccelerators(this);
}
    
    RenderProcessPreferences::RenderProcessPreferences(
    v8::Isolate* isolate,
    const atom::RenderProcessPreferences::Predicate& predicate)
    : preferences_(predicate) {
  Init(isolate);
}
    
    class RenderProcessPreferences
    : public mate::Wrappable<RenderProcessPreferences> {
 public:
  static mate::Handle<RenderProcessPreferences>
      ForAllWebContents(v8::Isolate* isolate);
    }
    
      // The auth is cancelled, must be called on UI thread.
  void CancelAuth();
    
    
    {  // Wait the SIGUSR2 signal to happen.
  struct signalfd_siginfo si;
  HANDLE_EINTR(read(usr2_fd, &si, sizeof(si)));
}
    
    
    {}  // namespace accelerator_util
    
    #include <jni.h>
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {
    {        if (JNI_OK == status_) {
            we_attach_ = true;
            pthread_setspecific(g_env_key, env_);
        } else {
            ASSERT2(false, 'vm:%p, env:%p, status:%d', vm_, env_, status_);
            env_ = NULL;
            return;
        }
    } while (false);
    
    jint ret = env_->PushLocalFrame(_capacity);
    ASSERT2(0 == ret, 'ret:%d', ret);
}
    
    namespace rocksdb {
    }
    
      std::string res;
  bool status = slists.Get('k1', &res);
  ASSERT_TRUE(status);
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    newIngestExternalFileOptions
 * Signature: ()J
 */
jlong Java_org_rocksdb_IngestExternalFileOptions_newIngestExternalFileOptions__(
    JNIEnv* env, jclass jclazz) {
  auto* options = new rocksdb::IngestExternalFileOptions();
  return reinterpret_cast<jlong>(options);
}
    
    
// --------------------
// --- EnvLibrados ----
// --------------------
/**
 * @brief EnvLibrados ctor
 * @details [long description]
 *
 * @param db_name unique database name
 * @param config_path the configure file path for rados
 */
EnvLibrados::EnvLibrados(const std::string& db_name,
                         const std::string& config_path,
                         const std::string& db_pool)
  : EnvLibrados('client.admin',
                'ceph',
                0,
                db_name,
                config_path,
                db_pool,
                '/wal',
                db_pool,
                1 << 20) {}
    
        // `flatbuffers::grpc::MessageBuilder` is a `FlatBufferBuilder` with a
    // special allocator for efficient gRPC buffer transfer, but otherwise
    // usage is the same as usual.
    auto msg_offset = mb_.CreateString('Hello, ' + name);
    auto hello_offset = CreateHelloReply(mb_, msg_offset);
    mb_.Finish(hello_offset);
    
    struct TypeBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_base_type(BaseType base_type) {
    fbb_.AddElement<int8_t>(Type::VT_BASE_TYPE, static_cast<int8_t>(base_type), 0);
  }
  void add_element(BaseType element) {
    fbb_.AddElement<int8_t>(Type::VT_ELEMENT, static_cast<int8_t>(element), 0);
  }
  void add_index(int32_t index) {
    fbb_.AddElement<int32_t>(Type::VT_INDEX, index, -1);
  }
  TypeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TypeBuilder &operator=(const TypeBuilder &);
  flatbuffers::Offset<Type> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Type>(end);
    return o;
  }
};
    
    
    {}  // namespace NamespaceC
    
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* MonsterStorage::Stub::PrepareAsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< flatbuffers::grpc::Message<Stat>>::Create(channel_.get(), cq, rpcmethod_Store_, context, request, false);
}
    
    grpc::string GetHeaderPrologue(grpc_generator::File *file,
                               const Parameters & /*params*/) {
  grpc::string output;
  {
    // Scope the output stream so it closes and finalizes output to the string.
    auto printer = file->CreatePrinter(&output);
    std::map<grpc::string, grpc::string> vars;
    }
    }
    
      virtual grpc::string name() const = 0;
    
      typedef void (*ErrorFn)(const FlatCompiler *flatc, const std::string &err,
                          bool usage, bool show_exe_name);
namespace atom {
    }
    
     protected:
  Debugger(v8::Isolate* isolate, content::WebContents* web_contents);
  ~Debugger() override;
    
    bool GlobalShortcut::Register(const ui::Accelerator& accelerator,
                              const base::Closure& callback) {
  if (!GlobalShortcutListener::GetInstance()->RegisterAccelerator(
      accelerator, this)) {
    return false;
  }
    }
    
    
    {  auto api_web_contents = WebContents::CreateFrom(isolate, web_contents);
  auto type = api_web_contents->GetType();
  return type == WebContents::Type::BROWSER_WINDOW ||
         type == WebContents::Type::WEB_VIEW;
}
    
    namespace IPC {
class Message;
}
    
    namespace atom {
    }
    
      // URLRequestJob:
  void GetResponseInfo(net::HttpResponseInfo* info) override;
    
    
    {  DISALLOW_COPY_AND_ASSIGN(URLRequestBufferJob);
};
    
    void RelauncherSynchronizeWithParent() {
  base::ScopedFD relauncher_sync_fd(kRelauncherSyncFD);
    }
    
      // PID 1 identifies init. launchd, that is. launchd never starts the
  // relauncher process directly, having this parent_pid means that the parent
  // already exited and launchd 'inherited' the relauncher as its child.
  // There's no reason to synchronize with launchd.
  if (parent_pid == 1) {
    LOG(ERROR) << 'unexpected parent_pid';
    return;
  }
    
    void RenderProcessPreferences::UpdateCache() {
  if (!cache_needs_update_)
    return;
    }
    
    
    {
    {}//ocl
}//cvtest
#endif

    
        TEST_CYCLE_N(1000)
    {
        solvePnP(points3d, points2d, intrinsics, distortion, rvec, tvec, false, algo);
    }
    
    
    {    cvReleaseMat( &(*state)->preFilteredImg0 );
    cvReleaseMat( &(*state)->preFilteredImg1 );
    cvReleaseMat( &(*state)->slidingSumBuf );
    cvReleaseMat( &(*state)->disp );
    cvReleaseMat( &(*state)->cost );
    cvFree( state );
}
    
    
    {        left.copyTo(uleft);
        right.copyTo(uright);
    }
    
            // numerical derivatives
        cv::Mat numericJacobian(2*numPoints, numParams, CV_64FC1);
        double eps = 1e-7;
        numericalDerivative(
            numericJacobian,
            eps,
            objectPoints,
            rvec,
            tvec,
            m_cameraMatrix,
            distortionCoeff);
    
    #include 'opencv2/calib3d.hpp'
    
    template<class SerDe>
typename std::enable_if<SerDe::deserializing>::type
ArrayTypeTable::serde(SerDe& sd) {
  TRACE_SET_MOD(rat);
  uint32_t size;
  sd(size);
  FTRACE(1, 'ArrayTypeTable size = {}\n', size);
  decltype(m_arrTypes)(size).swap(m_arrTypes);
  for (auto i = uint32_t{0}; i < size; ++i) {
    m_arrTypes[i] = RepoAuthType::Array::deserialize(sd, *this);
    assert(m_arrTypes[i] != nullptr);
    assert(m_arrTypes[i]->id() == i);
    assert(check(m_arrTypes[i]));
    FTRACE(2, '  {} {}\n', i, show(*m_arrTypes[i]));
  }
}
    
    String TimeStamp::CurrentMicroTime() {
  struct timeval tp;
  gettimeofday(&tp, nullptr);
  char ret[100];
  snprintf(ret, 100, '%.8F %ld', (double)tp.tv_usec / 1000000, tp.tv_sec);
  return String(ret, CopyString);
}
    
    int64_t Timer::GetThreadCPUTimeNanos() {
  return gettime_ns(CLOCK_THREAD_CPUTIME_ID);
}
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    
    {private:
  PageletTransport* m_job;
  // string m_response;
  // Object m_next_wait_handle;
};
    
    Vreg Vunit::makeConst(Vconst vconst) {
  auto it = constToReg.find(vconst);
  if (it != constToReg.end()) return it->second;
    }
    
        for (auto b : m_blocks) {
      const auto total = weight(b);
    }
    
    /*
 * Vlabel wraps a block number.
 */
DECLARE_VNUM(Vlabel, true, 'B');
    
    ALWAYS_INLINE
TypedValue MixedArray::getArrayElmKey(ssize_t pos) const {
  assert(validPos(pos));
  if (size_t(pos) >= m_used) return make_tv<KindOfUninit>();
  auto& elm = data()[pos];
  if (isTombstone(elm.data.m_type)) return make_tv<KindOfUninit>();
  return getElmKey(elm);
}
    
    
    {  static void SetFileLimits(int read_only_file_limit, int mmap_limit) {
    EnvPosixTestHelper::SetReadOnlyFDLimit(read_only_file_limit);
    EnvPosixTestHelper::SetReadOnlyMMapLimit(mmap_limit);
  }
};
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-NULL, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or NULL if no Table object underlies
  // the returned iterator.  The returned '*tableptr' object is owned by
  // the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options,
                        uint64_t file_number,
                        uint64_t file_size,
                        Table** tableptr = NULL);
    
      static Slice Contents(const WriteBatch* batch) {
    return Slice(batch->rep_);
  }
    
    CondVar::CondVar(Mutex* mu)
    : mu_(mu) {
    PthreadCall('init cv', pthread_cond_init(&cv_, NULL));
}
    
    class FilterPolicy;
    
      Slice block = builder.Finish();
  FilterBlockReader reader(&policy_, block);
    
      switch (data[n]) {
    case kNoCompression:
      if (data != buf) {
        // File implementation gave us pointer to some other data.
        // Use it directly under the assumption that it will be live
        // while the file is open.
        delete[] buf;
        result->data = Slice(data, n);
        result->heap_allocated = false;
        result->cachable = false;  // Do not double-cache
      } else {
        result->data = Slice(buf, n);
        result->heap_allocated = true;
        result->cachable = true;
      }
    }
    
    Iterator::Iterator() {
  cleanup_.function = NULL;
  cleanup_.next = NULL;
}
    
      // Check that opening non-existent file fails.
  unique_ptr<SequentialFile> seq_file;
  unique_ptr<RandomAccessFile> rand_file;
  ASSERT_TRUE(!env_->NewSequentialFile(test_dir_ + '/non_existent', &seq_file,
                                       soptions_)
                   .ok());
  ASSERT_TRUE(!seq_file);
  ASSERT_TRUE(!env_->NewRandomAccessFile(test_dir_ + '/non_existent',
                                         &rand_file, soptions_)
                   .ok());
  ASSERT_TRUE(!rand_file);
    
      virtual bool Merge(const Slice& key,
                     const Slice* existing_value,
                     const Slice& value,
                     std::string* new_value,
                     Logger* logger) const override;
    
    namespace rocksdb {
    }
    
    
    {};
    
      // Put the result back to the database
  db_->Put(put_option_, key, it.WriteResult());
    
      /// Return (list: key)[first..last] (inclusive)
  /// May throw RedisListException
  std::vector<std::string> Range(const std::string& key,
                                 int32_t first, int32_t last);
    
    // Checks if the string is stale or not according to TTl provided
bool DateTieredDBImpl::IsStale(int64_t keytime, int64_t ttl, Env* env) {
  if (ttl <= 0) {
    // Data is fresh if TTL is non-positive
    return false;
  }
  int64_t curtime;
  if (!env->GetCurrentTime(&curtime).ok()) {
    // Treat the data as fresh if could not get current time
    return false;
  }
  return curtime >= keytime + ttl;
}
    
    // <editor-fold desc='org.rocksdb.Comparator>
    
      bool pending_exception =
      AbstractSliceJni::setHandle(env, m_jSliceLimit, &limit, JNI_FALSE);
  if(pending_exception) {
    if(env->ExceptionCheck()) {
      // exception thrown from setHandle or descendant
      env->ExceptionDescribe(); // print out exception to stderr
    }
    if(jsStart != nullptr) {
      env->DeleteLocalRef(jsStart);
    }
    releaseJniEnv(attached_thread);
    return;
  }
    
    /*
 * Class:     org_rocksdb_WBWIRocksIterator
 * Method:    disposeInternal
 * Signature: (J)V
 */
void Java_org_rocksdb_WBWIRocksIterator_disposeInternal(
    JNIEnv* env, jobject jobj, jlong handle) {
  auto* it = reinterpret_cast<rocksdb::WBWIIterator*>(handle);
  assert(it != nullptr);
  delete it;
}
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplGlfwGL2_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplGlfwGL2_CreateDeviceObjects();
    
        // Setup inputs
    ALLEGRO_KEYBOARD_STATE keys;
    al_get_keyboard_state(&keys);
    io.KeyCtrl = al_key_down(&keys, ALLEGRO_KEY_LCTRL) || al_key_down(&keys, ALLEGRO_KEY_RCTRL);
    io.KeyShift = al_key_down(&keys, ALLEGRO_KEY_LSHIFT) || al_key_down(&keys, ALLEGRO_KEY_RSHIFT);
    io.KeyAlt = al_key_down(&keys, ALLEGRO_KEY_ALT) || al_key_down(&keys, ALLEGRO_KEY_ALTGR);
    io.KeySuper = al_key_down(&keys, ALLEGRO_KEY_LWIN) || al_key_down(&keys, ALLEGRO_KEY_RWIN);
    
        // Create the vertex shader
    {
        static const char* vertexShader =
            'cbuffer vertexBuffer : register(b0) \
            {\
            float4x4 ProjectionMatrix; \
            };\
            struct VS_INPUT\
            {\
            float2 pos : POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            \
            struct PS_INPUT\
            {\
            float4 pos : SV_POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            \
            PS_INPUT main(VS_INPUT input)\
            {\
            PS_INPUT output;\
            output.pos = mul( ProjectionMatrix, float4(input.pos.xy, 0.f, 1.f));\
            output.col = input.col;\
            output.uv  = input.uv;\
            return output;\
            }';
    }
    
    
    {    // TODO: restore modified state (i.e. mvp matrix)
}
    
        // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    int display_w, display_h;
    glfwGetWindowSize(g_Window, &w, &h);
    glfwGetFramebufferSize(g_Window, &display_w, &display_h);
    io.DisplaySize = ImVec2((float)w, (float)h);
    io.DisplayFramebufferScale = ImVec2(w > 0 ? ((float)display_w / w) : 0, h > 0 ? ((float)display_h / h) : 0);
    
    // This is the main rendering function that you have to implement and provide to ImGui (via setting up 'RenderDrawListsFn' in the ImGuiIO structure)
// Note that this implementation is little overcomplicated because we are saving/setting up/restoring every OpenGL state explicitly, in order to be able to run within any OpenGL engine that doesn't do so. 
// If text or lines are blurry when integrating ImGui in your engine: in your Render function, try translating your projection matrix by (0.5f,0.5f) or (0.375f,0.375f)
void ImGui_ImplGlfwGL3_RenderDrawLists(ImDrawData* draw_data)
{
    // Avoid rendering when minimized, scale coordinates for retina displays (screen coordinates != framebuffer coordinates)
    ImGuiIO& io = ImGui::GetIO();
    int fb_width = (int)(io.DisplaySize.x * io.DisplayFramebufferScale.x);
    int fb_height = (int)(io.DisplaySize.y * io.DisplayFramebufferScale.y);
    if (fb_width == 0 || fb_height == 0)
        return;
    draw_data->ScaleClipRects(io.DisplayFramebufferScale);
    }
    
    inline flatbuffers::TypeTable *TableInNestedNSTypeTable();
    
    
    { public:
  Vec3() {
    memset(this, 0, sizeof(Vec3));
  }
  Vec3(float _x, float _y, float _z)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  void mutate_x(float _x) {
    flatbuffers::WriteScalar(&x_, _x);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  void mutate_y(float _y) {
    flatbuffers::WriteScalar(&y_, _y);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
  void mutate_z(float _z) {
    flatbuffers::WriteScalar(&z_, _z);
  }
};
STRUCT_END(Vec3, 12);
    
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* MonsterStorage::Stub::PrepareAsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< flatbuffers::grpc::Message<Stat>>::Create(channel_.get(), cq, rpcmethod_Store_, context, request, false);
}
    
    class MonsterStorage final {
 public:
  static constexpr char const* service_full_name() {
    return 'MyGame.Example.MonsterStorage';
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Store(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, flatbuffers::grpc::Message<Stat>* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>> AsyncStore(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>>(AsyncStoreRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>> PrepareAsyncStore(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>>(PrepareAsyncStoreRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< flatbuffers::grpc::Message<Monster>>> Retrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< flatbuffers::grpc::Message<Monster>>>(RetrieveRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>> AsyncRetrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>>(AsyncRetrieveRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>> PrepareAsyncRetrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>>(PrepareAsyncRetrieveRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>* AsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>* PrepareAsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< flatbuffers::grpc::Message<Monster>>* RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>* AsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>* PrepareAsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Store(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, flatbuffers::grpc::Message<Stat>* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>> AsyncStore(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>>(AsyncStoreRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>> PrepareAsyncStore(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>>(PrepareAsyncStoreRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< flatbuffers::grpc::Message<Monster>>> Retrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) {
      return std::unique_ptr< ::grpc::ClientReader< flatbuffers::grpc::Message<Monster>>>(RetrieveRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>> AsyncRetrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>>(AsyncRetrieveRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>> PrepareAsyncRetrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>>(PrepareAsyncRetrieveRaw(context, request, cq));
    }
  
   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* AsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* PrepareAsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< flatbuffers::grpc::Message<Monster>>* RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) override;
    ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>* AsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>* PrepareAsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Store_;
    const ::grpc::internal::RpcMethod rpcmethod_Retrieve_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
  
  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response);
    virtual ::grpc::Status Retrieve(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Stat>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<Monster>>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_Store : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Store() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Store() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
    void RequestStore(::grpc::ServerContext* context, flatbuffers::grpc::Message<Monster>* request, ::grpc::ServerAsyncResponseWriter< flatbuffers::grpc::Message<Stat>>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Retrieve : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Retrieve() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Retrieve() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Retrieve(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Stat>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<Monster>>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
    void RequestRetrieve(::grpc::ServerContext* context, flatbuffers::grpc::Message<Stat>* request, ::grpc::ServerAsyncWriter< flatbuffers::grpc::Message<Monster>>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef   WithAsyncMethod_Store<  WithAsyncMethod_Retrieve<  Service   >   >   AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Store : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Store() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Store() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Retrieve : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Retrieve() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Retrieve() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Retrieve(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Stat>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<Monster>>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Store : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Store() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>(std::bind(&WithStreamedUnaryMethod_Store<BaseClass>::StreamedStore, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Store() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedStore(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< flatbuffers::grpc::Message<Monster>,flatbuffers::grpc::Message<Stat>>* server_unary_streamer) = 0;
  };
  typedef   WithStreamedUnaryMethod_Store<  Service   >   StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_Retrieve : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_Retrieve() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::SplitServerStreamingHandler< flatbuffers::grpc::Message<Stat>, flatbuffers::grpc::Message<Monster>>(std::bind(&WithSplitStreamingMethod_Retrieve<BaseClass>::StreamedRetrieve, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_Retrieve() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Retrieve(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Stat>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<Monster>>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedRetrieve(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< flatbuffers::grpc::Message<Stat>,flatbuffers::grpc::Message<Monster>>* server_split_streamer) = 0;
  };
  typedef   WithSplitStreamingMethod_Retrieve<  Service   >   SplitStreamedService;
  typedef   WithStreamedUnaryMethod_Store<  WithSplitStreamingMethod_Retrieve<  Service   >   >   StreamedService;
};
    
        static const char *headers_strs[] = {
        'grpc++/impl/codegen/async_stream.h',
        'grpc++/impl/codegen/sync_stream.h',
        'gmock/gmock.h',
    };
    std::vector<grpc::string> headers(headers_strs, array_end(headers_strs));
    PrintIncludes(printer.get(), headers, params);
    
    
    { private:
  flatbuffers::grpc::MessageBuilder fbb_;
};
    
    
    {  static Blob EmptyBlob() {
    static const uint8_t empty_blob[] = { 0 /*len*/ };
    return Blob(empty_blob + 1, 1);
  }
  bool IsTheEmptyBlob() const { return data_ == EmptyBlob().data_; }
  const uint8_t *data() const { return data_; }
};
    
      // Instead, we're going to access it right away (as if we just received it).
    
      // parse schema first, so we can use it to parse the data after
  flatbuffers::Parser parser;
  const char *include_directories[] = { 'samples', nullptr };
  ok = parser.Parse(schemafile.c_str(), include_directories) &&
       parser.Parse(jsonfile.c_str(), include_directories);
  assert(ok);
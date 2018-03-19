
        
        class TestFileSystem : public NullFileSystem {
 public:
  Status NewRandomAccessFile(
      const string& fname, std::unique_ptr<RandomAccessFile>* result) override {
    result->reset(new TestRandomAccessFile);
    return Status::OK();
  }
  // Always return size of 10
  Status GetFileSize(const string& fname, uint64* file_size) override {
    *file_size = 10;
    return Status::OK();
  }
};
    
    #include 'tensorflow/compiler/xla/service/hlo_module.h'
#include 'tensorflow/compiler/xla/service/hlo_pass_interface.h'
    
    /** scalar_sigmoid_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a sigmoid
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::sigmoid_fast_derivative()
  */
template <typename T>
struct scalar_sigmoid_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_sigmoid_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return (one - y) * y;
  }
    }
    
    bool HloReachabilityMap::SetReachabilityToUnion(
    tensorflow::gtl::ArraySlice<const HloInstruction*> inputs,
    const HloInstruction* instruction) {
  BitVector& bit_vector = GetBitVector(instruction);
  tmp_bit_vector_ = bit_vector;
    }
    
        OP_REQUIRES(context, file_format == 'wav',
                errors::InvalidArgument(
                    'file_format must be \'wav\', but got: ', file_format));
    OP_REQUIRES(context, samples_per_second > 0,
                errors::InvalidArgument(
                    'samples_per_second must be positive, but got: ',
                    samples_per_second));
    OP_REQUIRES(
        context, bits_per_second > 0,
        errors::InvalidArgument('bits_per_second must be positive, but got: ',
                                bits_per_second));
    
    class DebuggerClient {
protected:
  ASTContext &Ctx;
public:
  typedef SmallVectorImpl<LookupResultEntry> ResultVector;
    }
    
      /// True if the VarDecl requires ObjC accessor methods and a property
  /// descriptor.
  bool requiresObjCPropertyDescriptor(IRGenModule &IGM,
                                      VarDecl *property);
    
    
    {  /// Returns true if \p BB is a dead-end block.
  bool isDeadEnd(SILBasicBlock *BB) {
    if (!isComputed) {
      // Lazily compute the dataflow.
      compute();
      isComputed = true;
    }
    return ReachableBlocks.count(BB) == 0;
  }
};
    
        if (shouldVisitChildrenOf(Node))
      for (auto Child : Node->getChildren())
        walk(Child);
    
      bool haveLastDiag() {
    return LastDiagBufferID >= 0;
  }
  void clearLastDiag() {
    LastDiagBufferID = -1;
  }
  DiagnosticEntryInfo &getLastDiag() {
    assert(haveLastDiag());
    return BufferDiagnostics[LastDiagBufferID][LastDiagIndex];
  }
    
    
    {  IndexRelation() = default;
};
    
    Substitution::Substitution(Type Replacement,
                           ArrayRef<ProtocolConformanceRef> Conformance)
  : Replacement(Replacement), Conformance(Conformance)
{
  // The replacement type must be materializable.
  assert(Replacement->isMaterializable()
         && 'cannot substitute with a non-materializable type');
}
    
    namespace leveldb {
    }
    
      DBIter(DBImpl* db, const Comparator* cmp, Iterator* iter, SequenceNumber s,
         uint32_t seed)
      : db_(db),
        user_comparator_(cmp),
        iter_(iter),
        sequence_(s),
        direction_(kForward),
        valid_(false),
        rnd_(seed),
        bytes_counter_(RandomPeriod()) {
  }
  virtual ~DBIter() {
    delete iter_;
  }
  virtual bool Valid() const { return valid_; }
  virtual Slice key() const {
    assert(valid_);
    return (direction_ == kForward) ? ExtractUserKey(iter_->key()) : saved_key_;
  }
  virtual Slice value() const {
    assert(valid_);
    return (direction_ == kForward) ? iter_->value() : saved_value_;
  }
  virtual Status status() const {
    if (status_.ok()) {
      return iter_->status();
    } else {
      return status_;
    }
  }
    
    
    {}  // namespace leveldb

    
    inline ValueType ExtractValueType(const Slice& internal_key) {
  assert(internal_key.size() >= 8);
  const size_t n = internal_key.size();
  uint64_t num = DecodeFixed64(internal_key.data() + n - 8);
  unsigned char c = num & 0xff;
  return static_cast<ValueType>(c);
}
    
    // Return the name of the descriptor file for the db named by
// 'dbname' and the specified incarnation number.  The result will be
// prefixed with 'dbname'.
extern std::string DescriptorFileName(const std::string& dbname,
                                      uint64_t number);
    
    struct TableAndFile {
  RandomAccessFile* file;
  Table* table;
};
    
    TEST(VersionEditTest, EncodeDecode) {
  static const uint64_t kBig = 1ull << 50;
    }
    
    TEST(FindFileTest, MultipleNullBoundaries) {
  Add('150', '200');
  Add('200', '250');
  Add('300', '350');
  Add('400', '450');
  ASSERT_TRUE(! Overlaps(NULL, '149'));
  ASSERT_TRUE(! Overlaps('451', NULL));
  ASSERT_TRUE(Overlaps(NULL, NULL));
  ASSERT_TRUE(Overlaps(NULL, '150'));
  ASSERT_TRUE(Overlaps(NULL, '199'));
  ASSERT_TRUE(Overlaps(NULL, '200'));
  ASSERT_TRUE(Overlaps(NULL, '201'));
  ASSERT_TRUE(Overlaps(NULL, '400'));
  ASSERT_TRUE(Overlaps(NULL, '800'));
  ASSERT_TRUE(Overlaps('100', NULL));
  ASSERT_TRUE(Overlaps('200', NULL));
  ASSERT_TRUE(Overlaps('449', NULL));
  ASSERT_TRUE(Overlaps('450', NULL));
}
    
    #include <string>
#include <vector>
    
      grpc::testing::interop::RunServer(
      grpc::testing::CreateInteropServerCredentials());
    
    template <class T, class F>
double average(const T& container, F functor) {
  return sum(container, functor) / container.size();
}
    
    #include <grpc/support/log.h>
#include <grpc/support/time.h>
#ifdef __linux__
#include <sys/resource.h>
#include <sys/time.h>
    
    grpc::string DescribeServiceList(std::vector<grpc::string> service_list,
                                 grpc::protobuf::DescriptorPool& desc_pool) {
  std::stringstream result;
  for (auto it = service_list.begin(); it != service_list.end(); it++) {
    auto const& service = *it;
    const grpc::protobuf::ServiceDescriptor* service_desc =
        desc_pool.FindServiceByName(service);
    if (service_desc != nullptr) {
      result << DescribeService(service_desc);
    }
  }
  return result.str();
}
    
    
    {  ASSERT_TRUE(Overlaps('100', '150'));
  ASSERT_TRUE(Overlaps('100', '200'));
  ASSERT_TRUE(Overlaps('100', '300'));
  ASSERT_TRUE(Overlaps('100', '400'));
  ASSERT_TRUE(Overlaps('100', '500'));
  ASSERT_TRUE(Overlaps('375', '400'));
  ASSERT_TRUE(Overlaps('450', '450'));
  ASSERT_TRUE(Overlaps('450', '500'));
}
    
    #include 'db/dbformat.h'
#include 'leveldb/write_batch.h'
    
    Status ReadBlock(RandomAccessFile* file,
                 const ReadOptions& options,
                 const BlockHandle& handle,
                 BlockContents* result) {
  result->data = Slice();
  result->cachable = false;
  result->heap_allocated = false;
    }
    
    static Slice Key(int i, char* buffer) {
  EncodeFixed32(buffer, i);
  return Slice(buffer, sizeof(uint32_t));
}
    
    bool GetVarint64(Slice* input, uint64_t* value) {
  const char* p = input->data();
  const char* limit = p + input->size();
  const char* q = GetVarint64Ptr(p, limit, value);
  if (q == NULL) {
    return false;
  } else {
    *input = Slice(q, limit - q);
    return true;
  }
}
    
    extern JSClass  *jsb_cocosbuilder_CCBReader_class;
extern JSObject *jsb_cocosbuilder_CCBReader_prototype;
    
    extern JSClass  *jsb_cocos2d_NavMeshObstacle_class;
extern JSObject *jsb_cocos2d_NavMeshObstacle_prototype;
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
        virtual void DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color);
    
    #ifndef TEST_H
#define TEST_H
    
    	void Step(Settings* settings)
	{
		// Drive the kinematic body.
		if (m_platform->GetType() == b2_kinematicBody)
		{
			b2Vec2 p = m_platform->GetTransform().p;
			b2Vec2 v = m_platform->GetLinearVelocity();
    }
    }
    
    
    {		Test::Step(settings);
	}
    
    			b2RevoluteJointDef jd;
    
    #ifndef DUMPCRASHSTACK_H_
#define DUMPCRASHSTACK_H_
    
    #ifndef WAKEUPLOCK_H_
#define WAKEUPLOCK_H_
    
    class ServiceBase {
  public:
    virtual ~ServiceBase() {}
    void DependServices(const TServicesMap& _dependservices) { m_dependservices = _dependservices;}
    const char* ServiceName() const { return m_servicename.c_str();}
    }
    
      private:
    virtual void __OnAttach(const char* _key) = 0;
    virtual void __OnDetach(const char* _key) = 0;
    
      private:
    int __TestFun1(int i);
    
    static int stb_compress_chunk(stb_uchar *history,
    stb_uchar *start,
    stb_uchar *end,
    int length,
    int *pending_literals,
    stb_uchar **chash,
    stb_uint mask)
{
    (void)history;
    int window = stb__window;
    stb_uint match_max;
    stb_uchar *lit_start = start - *pending_literals;
    stb_uchar *q = start;
    }
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
        // Create depth-stencil State
    {
        D3D11_DEPTH_STENCIL_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.DepthEnable = false;
        desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
        desc.DepthFunc = D3D11_COMPARISON_ALWAYS;
        desc.StencilEnable = false;
        desc.FrontFace.StencilFailOp = desc.FrontFace.StencilDepthFailOp = desc.FrontFace.StencilPassOp = D3D11_STENCIL_OP_KEEP;
        desc.FrontFace.StencilFunc = D3D11_COMPARISON_ALWAYS;
        desc.BackFace = desc.FrontFace;
        g_pd3dDevice->CreateDepthStencilState(&desc, &g_pDepthStencilState);
    }
    
        // Create depth-stencil State
    {
        D3D12_DEPTH_STENCIL_DESC& desc = psoDesc.DepthStencilState;
        desc.DepthEnable = false;
        desc.DepthWriteMask = D3D12_DEPTH_WRITE_MASK_ALL;
        desc.DepthFunc = D3D12_COMPARISON_FUNC_ALWAYS;
        desc.StencilEnable = false;
        desc.FrontFace.StencilFailOp = desc.FrontFace.StencilDepthFailOp = desc.FrontFace.StencilPassOp = D3D12_STENCIL_OP_KEEP;
        desc.FrontFace.StencilFunc = D3D12_COMPARISON_FUNC_ALWAYS;
        desc.BackFace = desc.FrontFace;
    }
    
        // Upload texture to graphics system
    GLint last_texture;
    glGetIntegerv(GL_TEXTURE_BINDING_2D, &last_texture);
    glGenTextures(1, &g_FontTexture);
    glBindTexture(GL_TEXTURE_2D, g_FontTexture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_ALPHA, width, height, 0, GL_ALPHA, GL_UNSIGNED_BYTE, pixels);
    
    static const char* ImGui_ImplGlfwVulkan_GetClipboardText(void* user_data)
{
    return glfwGetClipboardString((GLFWwindow*)user_data);
}
    
    #endif

    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
    #include 'table/merging_iterator.h'
#include <string>
#include <vector>
#include 'db/dbformat.h'
#include 'db/pinned_iterators_manager.h'
#include 'monitoring/perf_context_imp.h'
#include 'rocksdb/comparator.h'
#include 'rocksdb/iterator.h'
#include 'rocksdb/options.h'
#include 'table/internal_iterator.h'
#include 'table/iter_heap.h'
#include 'table/iterator_wrapper.h'
#include 'util/arena.h'
#include 'util/autovector.h'
#include 'util/heap.h'
#include 'util/stop_watch.h'
#include 'util/sync_point.h'
    
      if (jsResultKey != nullptr) {
    // updates key with result, also releases jsResultKey.
    jboolean has_exception = JNI_FALSE;
    std::unique_ptr<const char[]> result_key = JniUtil::copyString(env, jsResultKey,
        &has_exception);    // also releases jsResultKey
    if (has_exception == JNI_TRUE) {
      if (env->ExceptionCheck()) {
        env->ExceptionDescribe();  // print out exception to stderr
      }
      releaseJniEnv(attached_thread);
      return;
    }
    }
    
      virtual bool isUploading() CXX11_OVERRIDE { return uploading_; }
    
    
    {} // namespace aria2
    
      /**
   * Counts the number of tiers to which the 'stopped' event can be sent.
   */
  size_t countStoppedAllowedTier() const;
    
    class AnnounceTier {
public:
  enum AnnounceEvent {
    STARTED,
    STARTED_AFTER_COMPLETION,
    DOWNLOADING,
    STOPPED,
    COMPLETED,
    SEEDING,
    HALTED
  };
    }
    
      // Build and run the KeyChain the query.
  CFRef<SecPolicyRef> policy(SecPolicyCreateSSL(true, nullptr));
  if (!policy) {
    A2_LOG_ERROR('Failed to create SecPolicy');
    return false;
  }
  const void* query_values[] = {kSecClassIdentity, kCFBooleanTrue, policy.get(),
                                kSecMatchLimitAll};
  CFRef<CFDictionaryRef> query(CFDictionaryCreate(
      nullptr, query_keys, query_values, 4, nullptr, nullptr));
  if (!query) {
    A2_LOG_ERROR('Failed to create identity query');
    return false;
  }
  CFArrayRef identities;
  OSStatus err = SecItemCopyMatching(query.get(), (CFTypeRef*)&identities);
  if (err != errSecSuccess) {
    A2_LOG_ERROR('Query failed: ' + errToString(err));
    return false;
  }
    
    AuthConfig::AuthConfig() {}
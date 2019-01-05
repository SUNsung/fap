
        
        StringRef swift::prettyPlatformString(PlatformKind platform) {
  switch (platform) {
  case PlatformKind::none:
    return '*';
#define AVAILABILITY_PLATFORM(X, PrettyName)                                   \
  case PlatformKind::X:                                                        \
    return PrettyName;
#include 'swift/AST/PlatformKinds.def'
  }
  llvm_unreachable('bad PlatformKind');
}
    
    void
swift::trimLeadingWhitespaceFromLines(StringRef RawText,
                                      unsigned WhitespaceToTrim,
                                      SmallVectorImpl<StringRef> &OutLines) {
  SmallVector<StringRef, 8> Lines;
    }
    
    
    {  return GraphemeClusterBreakProperty::Other;
}
    
      bool isRecord() const {
    assert(isValid());
    return !Decl.isNull() && Decl.is<const clang::RecordDecl *>();
  }
  const clang::RecordDecl *getRecord() const {
    assert(isRecord());
    return Decl.get<const clang::RecordDecl *>();
  }
    
    /// The result of out inference system
struct IAMResult {
  // The name to import as
  DeclName name = {};
    }
    
    void Demangler::dump() {
  for (unsigned Idx = 0; Idx < NodeStack.size(); ++Idx) {
    fprintf(stderr, 'NodeStack[%u]:\n', Idx);
    NodeStack[Idx]->dump();
    fprintf(stderr, '\n');
  }
  fprintf(stderr, 'Position = %zd:\n%.*s\n%*s\n', Pos,
          (int)Text.size(), Text.data(), (int)Pos + 1, '^');
}
    
    namespace tesseract {
    }
    
    #endif  // TESSERACT_CCSTRUCT_DEBUGPIXA_H_

    
      // Read until size drops significantly.
  std::string limit_key = Key(n);
  for (int read = 0; true; read++) {
    ASSERT_LT(read, 100) << 'Taking too long to compact';
    Iterator* iter = db_->NewIterator(ReadOptions());
    for (iter->SeekToFirst();
         iter->Valid() && iter->key().ToString() < limit_key;
         iter->Next()) {
      // Drop data
    }
    delete iter;
    // Wait a little bit to allow any triggered compactions to complete.
    Env::Default()->SleepForMicroseconds(1000000);
    uint64_t size = Size(Key(0), Key(n));
    fprintf(stderr, 'iter %3d => %7.3f MB [other %7.3f MB]\n',
            read+1, size/1048576.0, Size(Key(n), Key(kCount))/1048576.0);
    if (size <= initial_size/10) {
      break;
    }
  }
    
      void PrintStats(const char* key) {
    std::string stats;
    if (!db_->GetProperty(key, &stats)) {
      stats = '(failed)';
    }
    fprintf(stdout, '\n%s\n', stats.c_str());
  }
    
    TEST(DBTest, GetIdenticalSnapshots) {
  do {
    // Try with both a short key and a long key
    for (int i = 0; i < 2; i++) {
      std::string key = (i == 0) ? std::string('foo') : std::string(200, 'x');
      ASSERT_OK(Put(key, 'v1'));
      const Snapshot* s1 = db_->GetSnapshot();
      const Snapshot* s2 = db_->GetSnapshot();
      const Snapshot* s3 = db_->GetSnapshot();
      ASSERT_OK(Put(key, 'v2'));
      ASSERT_EQ('v2', Get(key));
      ASSERT_EQ('v1', Get(key, s1));
      ASSERT_EQ('v1', Get(key, s2));
      ASSERT_EQ('v1', Get(key, s3));
      db_->ReleaseSnapshot(s1);
      dbfull()->TEST_CompactMemTable();
      ASSERT_EQ('v2', Get(key));
      ASSERT_EQ('v1', Get(key, s2));
      db_->ReleaseSnapshot(s2);
      ASSERT_EQ('v1', Get(key, s3));
      db_->ReleaseSnapshot(s3);
    }
  } while (ChangeOptions());
}
    
      ReadOptions ro;
  ro.fill_cache = false;
  Iterator* iter = table->NewIterator(ro);
  std::string r;
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    r.clear();
    ParsedInternalKey key;
    if (!ParseInternalKey(iter->key(), &key)) {
      r = 'badkey '';
      AppendEscapedStringTo(&r, iter->key());
      r += '' => '';
      AppendEscapedStringTo(&r, iter->value());
      r += ''\n';
      dst->Append(r);
    } else {
      r = ''';
      AppendEscapedStringTo(&r, key.user_key);
      r += '' @ ';
      AppendNumberTo(&r, key.sequence);
      r += ' : ';
      if (key.type == kTypeDeletion) {
        r += 'del';
      } else if (key.type == kTypeValue) {
        r += 'val';
      } else {
        AppendNumberTo(&r, key.type);
      }
      r += ' => '';
      AppendEscapedStringTo(&r, iter->value());
      r += ''\n';
      dst->Append(r);
    }
  }
  s = iter->status();
  if (!s.ok()) {
    dst->Append('iterator error: ' + s.ToString() + '\n');
  }
    
    
    {  fname = OldInfoLogFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kInfoLogFile, type);
}
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
      std::vector<uint64_t> GetFiles(FileType t) {
    std::vector<std::string> filenames;
    ASSERT_OK(env_->GetChildren(dbname_, &filenames));
    std::vector<uint64_t> result;
    for (size_t i = 0; i < filenames.size(); i++) {
      uint64_t number;
      FileType type;
      if (ParseFileName(filenames[i], &number, &type) && type == t) {
        result.push_back(number);
      }
    }
    return result;
  }
    
      // Per-key generation
  struct State {
    port::AtomicPointer generation[K];
    void Set(int k, intptr_t v) {
      generation[k].Release_Store(reinterpret_cast<void*>(v));
    }
    intptr_t Get(int k) {
      return reinterpret_cast<intptr_t>(generation[k].Acquire_Load());
    }
    }
    
    /*! \brief gradient statistics pair usually needed in gradient boosting */
using GradientPair = detail::GradientPairInternal<float>;
    
    void SparsePageWriter::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
      virtual void PredictInteractionContributions(DMatrix* dmat,
                           std::vector<bst_float>* out_contribs,
                           unsigned ntree_limit, bool approximate) = 0;
    
    
    {  {
    Span<float, 16> s (arr);
    ASSERT_EQ(&arr[0], s.data());
    ASSERT_EQ(s.size(), 16);
    for (size_t i = 0; i < 16; ++i) {
      ASSERT_EQ(arr[i], s[i]);
    }
  }
}
    
    IMGUI_IMPL_API bool     ImGui_ImplDX10_Init(ID3D10Device* device);
IMGUI_IMPL_API void     ImGui_ImplDX10_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX10_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
        // Bind shader and vertex buffers
    unsigned int stride = sizeof(ImDrawVert);
    unsigned int offset = 0;
    D3D12_VERTEX_BUFFER_VIEW vbv;
    memset(&vbv, 0, sizeof(D3D12_VERTEX_BUFFER_VIEW));
    vbv.BufferLocation = g_pVB->GetGPUVirtualAddress() + offset;
    vbv.SizeInBytes = g_VertexBufferSize * stride;
    vbv.StrideInBytes = stride;
    ctx->IASetVertexBuffers(0, 1, &vbv);
    D3D12_INDEX_BUFFER_VIEW ibv;
    memset(&ibv, 0, sizeof(D3D12_INDEX_BUFFER_VIEW));
    ibv.BufferLocation = g_pIB->GetGPUVirtualAddress();
    ibv.SizeInBytes = g_IndexBufferSize * sizeof(ImDrawIdx);
    ibv.Format = sizeof(ImDrawIdx) == 2 ? DXGI_FORMAT_R16_UINT : DXGI_FORMAT_R32_UINT;
    ctx->IASetIndexBuffer(&ibv);
    ctx->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ctx->SetPipelineState(g_pPipelineState);
    ctx->SetGraphicsRootSignature(g_pRootSignature);
    ctx->SetGraphicsRoot32BitConstants(0, 16, &vertex_constant_buffer, 0);
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
        // Create window with graphics context
    GLFWwindow* window = glfwCreateWindow(1280, 720, 'Dear ImGui GLFW+OpenGL3 example', NULL, NULL);
    if (window == NULL)
        return 1;
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Enable vsync
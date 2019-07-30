
        
            auto *SinglePred = Arg->getParent()->getSinglePredecessorBlock();
    if (!SinglePred) {
      if (!isa<SILFunctionArgument>(Arg))
        break;
      auto *CD = Arg->getType().getClassOrBoundGenericClass();
      // Check if this class is effectively final.
      if (!CD || !isKnownFinalClass(CD, M, CHA))
        break;
      return Arg;
    }
    
    
    {  void traceLoc(const void *Entity, SourceManager *SM,
                clang::SourceManager *CSM, raw_ostream &OS) const {
    if (!Entity)
      return;
    const SILFunction *F = static_cast<const SILFunction *>(Entity);
    if (!F->hasLocation())
      return;
    F->getLocation().getSourceRange().print(OS, *SM, false);
  }
};
    
    
    {  vec.add(28, 146898948);
  EXPECT_EQ(true, vec[32]);
}
    
      /// Make a duplicate copy of this parameter list.  This allocates copies of
  /// the ParamDecls, so they can be reparented into a new DeclContext.
  ParameterList *clone(const ASTContext &C,
                       OptionSet<CloneFlags> options = None) const;
    
        // The format is a map of ('group0' : ['file1', 'file2']), meaning all
    // symbols from file1 and file2 belong to 'group0'.
    auto *Map = dyn_cast<llvm::yaml::MappingNode>(Root);
    if (!Map) {
      return diagnoseGroupInfoFile();
    }
    pFileNameToGroupNameMap pMap(new FileNameToGroupNameMap());
    std::string Empty;
    if (parseRoot(*pMap, Root, Empty))
      return diagnoseGroupInfoFile();
    
      /// Return all of the method entries.
  ArrayRef<Entry> getEntries() const { return {Entries, NumEntries}; }
    
    
    {  }
    
    
    {    // Forbid the parameter to be an autoclosure.
    if (param->isAutoClosure()) {
      ctx.Diags.diagnose(attr->getLocation(),
                         diag::function_builder_parameter_autoclosure,
                         nominal->getFullName());
      mutableAttr->setInvalid();
      return Type();
    }
  }
    
          for (auto &AssocTy : AssocTyDescriptor) {
        if (Member.compare(AssocTy.getName(NameOffset)) != 0)
          continue;
    }
    
      if (auto EO = dyn_cast<ELFObjectFileBase>(S.getObject())) {
    static const llvm::StringSet<> ELFSectionsList = {
      '.data', '.rodata', 'swift5_protocols', 'swift5_protocol_conformances',
      'swift5_typeref', 'swift5_reflstr', 'swift5_assocty', 'swift5_replace',
      'swift5_type_metadata', 'swift5_fieldmd', 'swift5_capture', 'swift5_builtin'
    };
    StringRef Name;
    if (auto EC = S.getName(Name))
      reportError(EC);
    return ELFSectionsList.count(Name);
  }
    
    namespace mongo {
namespace repl {
    }
    }
    
        // Note that we only apply the TransientTxnError label if the 'autocommit' field is present in
    // the session options. When present, 'autocommit' will always be false, so we don't check its
    // value.
    if (sessionOptions.getAutocommit() &&
        isTransientTransactionError(code,
                                    hasWriteConcernError,
                                    commandName == 'commitTransaction' ||
                                        commandName == 'coordinateCommitTransaction')) {
        // An error code for which isTransientTransactionError() is true indicates a transaction
        // failure with no persistent side effects.
        labelArray << txn::TransientTxnErrorFieldName;
    }
    
    
    {
}  // namespace mongo

    
    int32_t
RuleBasedCollator::internalNextSortKeyPart(UCharIterator *iter, uint32_t state[2],
                                           uint8_t *dest, int32_t count, UErrorCode &errorCode) const {
    if(U_FAILURE(errorCode)) { return 0; }
    if(iter == NULL || state == NULL || count < 0 || (count > 0 && dest == NULL)) {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return 0;
    }
    if(count == 0) { return 0; }
    }
    
    // protected constructors and destructors -----------------------------
    
    SharedBreakIterator::SharedBreakIterator(
        BreakIterator *biToAdopt) : ptr(biToAdopt) { }
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    
    {        // Rendering
        ImGui::Render();
        glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
            if (ImGui::Button('Button'))                                  // Buttons return true when clicked (most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
    void ResetDevice()
{
    ImGui_ImplDX9_InvalidateDeviceObjects();
    HRESULT hr = g_pd3dDevice->Reset(&g_d3dpp);
    if (hr == D3DERR_INVALIDCALL)
        IM_ASSERT(0);
    ImGui_ImplDX9_CreateDeviceObjects();
}
    
    // DirectX data
static LPDIRECT3DDEVICE9        g_pd3dDevice = NULL;
static LPDIRECT3DVERTEXBUFFER9  g_pVB = NULL;
static LPDIRECT3DINDEXBUFFER9   g_pIB = NULL;
static LPDIRECT3DTEXTURE9       g_FontTexture = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;
    
        // Will project scissor/clipping rectangles into framebuffer space
    ImVec2 clip_off = draw_data->DisplayPos;         // (0,0) unless using multi-viewports
    ImVec2 clip_scale = draw_data->FramebufferScale; // (1,1) unless using retina display which are often (2,2)
    
    /*
 * Class:     org_rocksdb_CompactionOptionsUniversal
 * Method:    setMaxMergeWidth
 * Signature: (JI)V
 */
void Java_org_rocksdb_CompactionOptionsUniversal_setMaxMergeWidth(
    JNIEnv*, jobject, jlong jhandle, jint jmax_merge_width) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsUniversal*>(jhandle);
  opt->max_merge_width = static_cast<unsigned int>(jmax_merge_width);
}
    
    /*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    zstdMaxTrainBytes
 * Signature: (J)I
 */
jint Java_org_rocksdb_CompressionOptions_zstdMaxTrainBytes(
    JNIEnv *, jobject, jlong jhandle) {
  auto* opt = reinterpret_cast<rocksdb::CompressionOptions*>(jhandle);
  return static_cast<jint>(opt->zstd_max_train_bytes);
}
    
      if (!rocksdb::HashMapJni::putAll(env, jusage_by_type, usage_by_type.begin(),
                                   usage_by_type.end(), fn_map_kv)) {
    // exception occcurred
    jusage_by_type = nullptr;
  }
    
    /*
 * Class:     org_rocksdb_Options
 * Method:    maxSuccessiveMerges
 * Signature: (J)J
 */
jlong Java_org_rocksdb_Options_maxSuccessiveMerges(
    JNIEnv*, jobject, jlong jhandle) {
  return reinterpret_cast<rocksdb::Options*>(jhandle)->max_successive_merges;
}
    
    #ifndef JAVA_ROCKSJNI_TRACE_WRITER_JNICALLBACK_H_
#define JAVA_ROCKSJNI_TRACE_WRITER_JNICALLBACK_H_
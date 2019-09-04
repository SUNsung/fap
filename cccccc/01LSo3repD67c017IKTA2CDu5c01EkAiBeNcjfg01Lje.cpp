
        
          // If this conformance was not synthesized by the ClangImporter, we're not
  // going to be emitting it lazily either, so we can avoid doing anything
  // below.
  if (!isa<ClangModuleUnit>(normal->getDeclContext()->getModuleScopeContext()))
    return;
    
      std::string PGOFuncName;
    
    
    {  EXPECT_EQ(31u, vec.size());
  EXPECT_EQ(true, vec[0]);
  EXPECT_EQ(false, vec[1]);
  EXPECT_EQ(true, vec[30]);
}
    
    // Report a message to any forthcoming crash log.
static void
reportOnCrash(uint32_t flags, const char *message)
{
  // We must use an 'unsafe' mutex in this pathway since the normal 'safe'
  // mutex calls fatalError when an error is detected and fatalError ends up
  // calling us. In other words we could get infinite recursion if the
  // mutex errors.
  static swift::StaticUnsafeMutex crashlogLock;
    }
    
    class FieldDescriptorIterator
  : public std::iterator<std::forward_iterator_tag, FieldDescriptor> {
public:
  const void *Cur;
  const void * const End;
  FieldDescriptorIterator(const void *Cur, const void * const End)
    : Cur(Cur), End(End) {}
    }
    
      constexpr static KeyPathComponentHeader
  forStructComponentWithInlineOffset(bool isLet,
                                     unsigned offset) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_StructTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | validateInlineOffset(offset)
      | isLetBit(isLet));
  }
  
  constexpr static KeyPathComponentHeader
  forStructComponentWithOutOfLineOffset(bool isLet) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_StructTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | _SwiftKeyPathComponentHeader_OutOfLineOffsetPayload
      | isLetBit(isLet));
  }
    
    
    {  void appendProtocolConformance(const ProtocolConformance *conformance);
  void appendProtocolConformanceRef(const RootProtocolConformance *conformance);
  void appendConcreteProtocolConformance(
                                        const ProtocolConformance *conformance);
  void appendDependentProtocolConformance(const ConformanceAccessPath &path);
  void appendOpParamForLayoutConstraint(LayoutConstraint Layout);
  
  void appendSymbolicReference(SymbolicReferent referent);
  
  void appendOpaqueDeclName(const OpaqueTypeDecl *opaqueDecl);
};
    
      /// Move value from (old1, old2) to (new1, new2)
  bool move(const Key1 &old1, const Key2 &old2, const Key1 &new1,
            const Key2 &new2) {
    Value v = findAndErase(old1, old2);
    insert(old1, old2, v);
  }
    
    /// Describes the stage at which a particular type should be computed.
///
/// Later stages compute more information about the type, requiring more
/// complete analysis.
enum class TypeResolutionStage : uint8_t {
  /// Produces an interface type describing its structure, but without
  /// performing semantic analysis to resolve (e.g.) references to members of
  /// type parameters.
  Structural,
    }
    
    class GetMergeSingleListFeatureTensorsGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    vector<string> input_blob_names{};
    vector<string> output_blob_names{};
    }
    }
    
    
    {	return 'AudioStreamOGGVorbis';
}
    
    ///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
    
    	String source_emission_file;
    
    	void _add_peer(int p_id);
	void _del_peer(int p_id);
	void _connected_to_server();
	void _connection_failed();
	void _server_disconnected();
    
    
    {	glGetIntegerv(GL_MAX_TEXTURE_IMAGE_UNITS, &max_image_units);
}
    
    #endif // AUDIO_STREAM_PREVIEW_H

    
    public:
	void set_deploy_dumb(bool p_enabled);
	bool is_deploy_dumb_enabled() const;
    
    	//use an xpm because it's size independent, the editor images are vector and size dependent
	//it's a simple hack
	Ref<Image> broken = memnew(Image((const char **)atlas_import_failed_xpm));
	Ref<ImageTexture> broken_texture;
	broken_texture.instance();
	broken_texture->create_from_image(broken);
    
    
    {
    {		float mind = 5 * EDSCALE;
		float maxd = 15 * EDSCALE;
		blend_space_draw->draw_line(gui_point + Vector2(mind, 0), gui_point + Vector2(maxd, 0), color, 2);
		blend_space_draw->draw_line(gui_point + Vector2(-mind, 0), gui_point + Vector2(-maxd, 0), color, 2);
		blend_space_draw->draw_line(gui_point + Vector2(0, mind), gui_point + Vector2(0, maxd), color, 2);
		blend_space_draw->draw_line(gui_point + Vector2(0, -mind), gui_point + Vector2(0, -maxd), color, 2);
	}
}
    
    	snap_x->connect('value_changed', this, '_config_changed');
	snap_y->connect('value_changed', this, '_config_changed');
	max_x_value->connect('value_changed', this, '_config_changed');
	min_x_value->connect('value_changed', this, '_config_changed');
	max_y_value->connect('value_changed', this, '_config_changed');
	min_y_value->connect('value_changed', this, '_config_changed');
	label_x->connect('text_changed', this, '_labels_changed');
	label_y->connect('text_changed', this, '_labels_changed');
    
    	if (type != AnimationTreePlayer::NODE_OUTPUT)
		slot_icon->draw(ci, ofs + Point2(w, icon_h_ofs)); //output
    
    struct SquaredLogError {
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float label) {
    return label > -1;
  }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = fmaxf(predt, -1 + 1e-6);  // ensure correct value for log1p
    return (std::log1p(predt) - std::log1p(label)) / (predt + 1);
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    predt = fmaxf(predt, -1 + 1e-6);
    float res = (-std::log1p(predt) + std::log1p(label) + 1) /
                std::pow(predt + 1, 2);
    res = fmaxf(res, 1e-6f);
    return res;
  }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() {
    return 'label must be greater than -1 for rmsle so that log(label + 1) can be valid.';
  }
  static const char* DefaultEvalMetric() { return 'rmsle'; }
};
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
        // You can set those flags on a per font basis in ImFontConfig::RasterizerFlags.
    // Use the 'extra_flags' parameter of BuildFontAtlas() to force a flag on all your fonts.
    enum RasterizerFlags
    {
        // By default, hinting is enabled and the font's native hinter is preferred over the auto-hinter.
        NoHinting       = 1 << 0,   // Disable hinting. This generally generates 'blurrier' bitmap glyphs when the glyph are rendered in any of the anti-aliased modes.
        NoAutoHint      = 1 << 1,   // Disable auto-hinter.
        ForceAutoHint   = 1 << 2,   // Indicates that the auto-hinter is preferred over the font's native hinter.
        LightHinting    = 1 << 3,   // A lighter hinting algorithm for gray-level modes. Many generated glyphs are fuzzier but better resemble their original shape. This is achieved by snapping glyphs to the pixel grid only vertically (Y-axis), as is done by Microsoft's ClearType and Adobe's proprietary font renderer. This preserves inter-glyph spacing in horizontal text.
        MonoHinting     = 1 << 4,   // Strong hinting algorithm that should only be used for monochrome output.
        Bold            = 1 << 5,   // Styling: Should we artificially embolden the font?
        Oblique         = 1 << 6,   // Styling: Should we slant the font, emulating italic style?
        Monochrome      = 1 << 7    // Disable anti-aliasing. Combine this with MonoHinting for best results!
    };
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
    IMGUI_IMPL_API bool     ImGui_ImplDX9_Init(IDirect3DDevice9* device);
IMGUI_IMPL_API void     ImGui_ImplDX9_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX9_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
    
    {    if (res != ncclSuccess)
        RuntimeError('NcclComm ncclAllReduce failed: %s', ncclGetErrorString(res));
}
    
    #if 1       // support for legacy models when only the matrix dimensions had to match
            // Note: This is non-ambiguous w.r.t. valid new configurations because this condition would otherwise just be considered an error.
            //       But it will fail to discover trailing reduction dimensions that are 1. We assume that no such legacy models exist.
            // Note: This is very ugly [Wayne Xiong]. I agree [fseide].
            if (dimsA.size() == 2 && !transpose && m_outputRank == 1 && dimsA[1] != dimsB[0] && dimsB[0] != 0)
            {
                // search whether we can interpret dimsA[1] as the flattening of the first dimensions
                size_t dim = 1;
                for (size_t k = 0; k < dimsB.size(); k++)
                {
                    dim *= dimsB[k];
                    if (dim == dimsA[1])
                    {
                        // OK, we have an explanation: Patch dimsA and back-patch the sample layout of Input(0)
                        numReductionDims = k + 1;
                        dimsA.resize(m_outputRank + numReductionDims);
                        for (size_t kk = 0; kk < numReductionDims; kk++)
                            dimsA[m_outputRank + kk] = dimsB[kk];
                        Input(0)->SetDims(TensorShape(dimsA), false);
                        fprintf(stderr, '\n%ls %ls operation: For legacy compatibility, the sample layout of left input (%ls %ls operation) was patched to [%s] (from [%s])\n',
                                NodeName().c_str(), OperationName().c_str(), Input(0)->NodeName().c_str(), Input(0)->OperationName().c_str(), string(Input(0)->GetSampleLayout()).c_str(), dimsAstring.c_str());
                        dimsAstring = string(Input(0)->GetSampleLayout()); // for error messages
                        break; // we will continue with this patched up model from here on
                    }
                }
            }
#endif
    
        // constructor from Scripting
    SGD(const ScriptableObjects::IConfigRecordPtr configp)
        : SGD(*configp)
    {
    }
    
            '   Wcidc = DiagTimes(Wci, dc);\n'
        '   it = Sigmoid(Plus(G1, Wcidc));\n'
    
      Status RenameFile(const std::string& src, const std::string& dest) override {
    auto status_and_src_enc_path = EncodePath(src);
    if (!status_and_src_enc_path.first.ok()) {
      return status_and_src_enc_path.first;
    }
    auto status_and_dest_enc_path = EncodePathWithNewBasename(dest);
    if (!status_and_dest_enc_path.first.ok()) {
      return status_and_dest_enc_path.first;
    }
    return EnvWrapper::RenameFile(status_and_src_enc_path.second,
                                  status_and_dest_enc_path.second);
  }
    
    /*
 * Class:     org_rocksdb_CompactionJobStats
 * Method:    largestOutputKeyPrefix
 * Signature: (J)[B
 */
jbyteArray Java_org_rocksdb_CompactionJobStats_largestOutputKeyPrefix(
    JNIEnv* env, jclass, jlong jhandle) {
  auto* compact_job_stats =
      reinterpret_cast<rocksdb::CompactionJobStats*>(jhandle);
  return rocksdb::JniUtil::copyBytes(env,
      compact_job_stats->largest_output_key_prefix);
}
    
    /*
 * Class:     org_rocksdb_CompactionOptions
 * Method:    setMaxSubcompactions
 * Signature: (JI)V
 */
void Java_org_rocksdb_CompactionOptions_setMaxSubcompactions(
    JNIEnv*, jclass, jlong jhandle, jint jmax_subcompactions) {
  auto* compact_opts =
      reinterpret_cast<rocksdb::CompactionOptions*>(jhandle);
  compact_opts->max_subcompactions =
      static_cast<uint32_t>(jmax_subcompactions);
}
    
      jobject jusage_by_type = rocksdb::HashMapJni::construct(
      env, static_cast<uint32_t>(usage_by_type.size()));
  if (jusage_by_type == nullptr) {
    // exception occurred
    return nullptr;
  }
  const rocksdb::HashMapJni::FnMapKV<const rocksdb::MemoryUtil::UsageType, const uint64_t, jobject, jobject>
      fn_map_kv =
      [env](const std::pair<rocksdb::MemoryUtil::UsageType, uint64_t>& pair) {
        // Construct key
        const jobject jusage_type =
            rocksdb::ByteJni::valueOf(env, rocksdb::MemoryUsageTypeJni::toJavaMemoryUsageType(pair.first));
        if (jusage_type == nullptr) {
          // an error occurred
          return std::unique_ptr<std::pair<jobject, jobject>>(nullptr);
        }
        // Construct value
        const jobject jusage_value =
            rocksdb::LongJni::valueOf(env, pair.second);
        if (jusage_value == nullptr) {
          // an error occurred
          return std::unique_ptr<std::pair<jobject, jobject>>(nullptr);
        }
        // Construct and return pointer to pair of jobjects
        return std::unique_ptr<std::pair<jobject, jobject>>(
            new std::pair<jobject, jobject>(jusage_type,
                                            jusage_value));
      };
    
    void build_column_family_descriptor_list(
    JNIEnv* env, jobject jcfds,
    std::vector<rocksdb::ColumnFamilyDescriptor>& cf_descs) {
  jmethodID add_mid = rocksdb::ListJni::getListAddMethodId(env);
  if (add_mid == nullptr) {
    // exception occurred accessing method
    return;
  }
    }
    
    /*
 * Class:     org_rocksdb_RocksDB
 * Method:    createColumnFamily
 * Signature: (J[BIJ)J
 */
jlong Java_org_rocksdb_RocksDB_createColumnFamily(
    JNIEnv* env, jobject, jlong jhandle, jbyteArray jcf_name,
    jint jcf_name_len, jlong jcf_options_handle) {
  auto* db = reinterpret_cast<rocksdb::DB*>(jhandle);
  jboolean has_exception = JNI_FALSE;
  const std::string cf_name =
      rocksdb::JniUtil::byteString<std::string>(env, jcf_name, jcf_name_len,
          [](const char* str, const size_t len) {
              return std::string(str, len); 
          }, &has_exception);
  if (has_exception == JNI_TRUE) {
    // exception occurred
    return 0;
  }
  auto* cf_options =
      reinterpret_cast<rocksdb::ColumnFamilyOptions*>(jcf_options_handle);
  rocksdb::ColumnFamilyHandle *cf_handle;
  rocksdb::Status s = db->CreateColumnFamily(*cf_options, cf_name, &cf_handle);
  if (!s.ok()) {
    // error occurred
    rocksdb::RocksDBExceptionJni::ThrowNew(env, s);
    return 0;
  }
  return reinterpret_cast<jlong>(cf_handle);
}
    
    std::function<bool(const rocksdb::TableProperties&)> TableFilterJniCallback::GetTableFilterFunction() {
  return m_table_filter_function;
}
    
      jlong jfile_size = env->CallLongMethod(m_jcallback_obj,
      m_jget_file_size_methodid);
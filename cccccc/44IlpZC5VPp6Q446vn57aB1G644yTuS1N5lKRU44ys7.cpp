
        
        namespace tensorflow {
    }
    
    // Mutex used to serialize accesses to cached vector of pointers to python
// arrays to be dereferenced.
static mutex* DelayedDecrefLock() {
  static mutex* decref_lock = new mutex;
  return decref_lock;
}
    
    void PyExceptionRegistry::Init(PyObject* code_to_exc_type_map) {
  DCHECK(singleton_ == nullptr) << 'PyExceptionRegistry::Init() already called';
  singleton_ = new PyExceptionRegistry;
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // This file contains APIs that assume a StreamExecutor is backed by CUDA.
// It reaches into the CUDA implementation to activate an underlying CUDA
// context.
//
// Having this file separate from cuda_gpu_executor.h means that dependent
// code does not also have to depend on cuda.h.
    
    /** Check bounds on a command line confirm target */
unsigned int ParseConfirmTarget(const UniValue& value);
    
    int secp256k1_ecdsa_sign_recoverable(const secp256k1_context* ctx, secp256k1_ecdsa_recoverable_signature *signature, const unsigned char *msg32, const unsigned char *seckey, secp256k1_nonce_function noncefp, const void* noncedata) {
    secp256k1_scalar r, s;
    secp256k1_scalar sec, non, msg;
    int recid;
    int ret = 0;
    int overflow = 0;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(secp256k1_ecmult_gen_context_is_built(&ctx->ecmult_gen_ctx));
    ARG_CHECK(msg32 != NULL);
    ARG_CHECK(signature != NULL);
    ARG_CHECK(seckey != NULL);
    if (noncefp == NULL) {
        noncefp = secp256k1_nonce_function_default;
    }
    }
    
    
    {
    {
    {      rph->Send(new ViewMsg_WillQuit(&no_use));
    }
    CloseAllWindows(true);
  }
  // Then quit.
  MessageLoop::current()->PostTask(FROM_HERE, MessageLoop::QuitClosure());
}
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    
    {}
    
      for(auto& data : params->data) {
    if (!reader->Read(data)) {
      *error = reader->error();
      return false;
    }
    response->Append(data.ToValue());
  }
    
    bool NwObjCallObjectMethodFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    #define TEGRA_WARPPERSPECTIVE(src_type, src_data, src_step, src_width, src_height, dst_data, dst_step, dst_width, dst_height, M, interpolation, borderType, borderValue) \
( \
    interpolation == CV_HAL_INTER_NEAREST ? \
        (src_type == CV_8UC1 || src_type == CV_8SC1) && (borderType == CV_HAL_BORDER_REPLICATE || borderType == CV_HAL_BORDER_CONSTANT) && \
        CAROTENE_NS::isWarpPerspectiveNearestNeighborSupported(CAROTENE_NS::Size2D(src_width, src_height)) ? \
            CAROTENE_NS::warpPerspectiveNearestNeighbor(CAROTENE_NS::Size2D(src_width, src_height), CAROTENE_NS::Size2D(dst_width, dst_height), \
                                                        src_data, src_step, \
                                                        std::vector<float>(M+0,M+9).data(), \
                                                        dst_data, dst_step, \
                                                        borderType == CV_HAL_BORDER_REPLICATE ? CAROTENE_NS::BORDER_MODE_REPLICATE : CAROTENE_NS::BORDER_MODE_CONSTANT, \
                                                        (CAROTENE_NS::u8)borderValue[0]), \
        CV_HAL_ERROR_OK : CV_HAL_ERROR_NOT_IMPLEMENTED : \
    interpolation == CV_HAL_INTER_LINEAR ? \
        (src_type == CV_8UC1 || src_type == CV_8SC1) && (borderType == CV_HAL_BORDER_REPLICATE || borderType == CV_HAL_BORDER_CONSTANT) && \
        CAROTENE_NS::isWarpPerspectiveLinearSupported(CAROTENE_NS::Size2D(src_width, src_height)) ? \
            CAROTENE_NS::warpPerspectiveLinear(CAROTENE_NS::Size2D(src_width, src_height), CAROTENE_NS::Size2D(dst_width, dst_height), \
                                               src_data, src_step, \
                                               std::vector<float>(M+0,M+9).data(), \
                                               dst_data, dst_step, \
                                               borderType == CV_HAL_BORDER_REPLICATE ? CAROTENE_NS::BORDER_MODE_REPLICATE : CAROTENE_NS::BORDER_MODE_CONSTANT, \
                                               (CAROTENE_NS::u8)borderValue[0]), \
        CV_HAL_ERROR_OK : CV_HAL_ERROR_NOT_IMPLEMENTED : \
    CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
    
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
    struct BitwiseXor
{
    typedef u8 type;
    }
    
    #endif

    
    CVT_FUNC(u8, s8, 16,
     uint8x16_t v127 = vdupq_n_u8(127);,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         uint8x16_t vu8 = vld1q_u8(_src + i);
         int8x16_t vu1 = vreinterpretq_s8_u8(vminq_u8(vu8, v127));
         vst1q_s8(_dst + i, vu1);
     }
})
    
            if (cpolicy == CONVERT_POLICY_SATURATE)
        {
            for (; j < roiw16; j += 16)
            {
                internal::prefetch(src + j);
                int16x8_t v_src0 = vld1q_s16(src + j), v_src1 = vld1q_s16(src + j + 8);
                uint8x16_t v_dst = vcombine_u8(vqmovun_s16(v_src0), vqmovun_s16(v_src1));
                vst1q_u8(dst + j, v_dst);
            }
            for (; j < roiw8; j += 8)
            {
                int16x8_t v_src = vld1q_s16(src + j);
                vst1_u8(dst + j, vqmovun_s16(v_src));
            }
    }
    
    struct OSResults {
  OSResults() : unicharset(nullptr) {
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < kMaxNumberOfScripts; ++j)
        scripts_na[i][j] = 0;
      orientations[i] = 0;
    }
  }
  void update_best_orientation();
  // Set the estimate of the orientation to the given id.
  void set_best_orientation(int orientation_id);
  // Update/Compute the best estimate of the script assuming the given
  // orientation id.
  void update_best_script(int orientation_id);
  // Return the index of the script with the highest score for this orientation.
  TESS_API int get_best_script(int orientation_id) const;
  // Accumulate scores with given OSResults instance and update the best script.
  void accumulate(const OSResults& osr);
    }
    
    
    {  switch (level) {
    case RIL_BLOCK:
      it_->forward_block();
      break;
    case RIL_PARA:
      it_->forward_paragraph();
      break;
    case RIL_TEXTLINE:
      for (it_->forward_with_empties(); it_->row() == it_->prev_row();
           it_->forward_with_empties());
      break;
    case RIL_WORD:
      it_->forward_with_empties();
      break;
    case RIL_SYMBOL:
      if (cblob_it_ != nullptr)
        cblob_it_->forward();
      ++blob_index_;
      if (blob_index_ >= word_length_)
        it_->forward_with_empties();
      else
        return true;
      break;
  }
  BeginWord(0);
  return it_->block() != nullptr;
}
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
    // Open the boxfile based on the given image filename.
// Returns nullptr if the box file cannot be opened.
FILE* OpenBoxFile(const STRING& fname);
    
      // This and other putatively are the same, so call the (permanent) callback
  // for each blob index where the bounding boxes match.
  // The callback is deleted on completion.
  void ProcessMatchedBlobs(const TWERD& other, TessCallback1<int>* cb) const;
    
      // Writes to the given file. Returns false in case of error.
  bool Serialize(TFile* fp) const;
  // Reads from the given file. Returns false in case of error.
  bool DeSerialize(TFile* fp);
  // As DeSerialize, but only seeks past the data - hence a static method.
  static bool SkipDeSerialize(TFile* fp);
    
    TEST(CorruptionTest, SequenceNumberRecovery) {
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v1'));
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v2'));
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v3'));
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v4'));
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v5'));
  RepairDB();
  Reopen();
  std::string v;
  ASSERT_OK(db_->Get(ReadOptions(), 'foo', &v));
  ASSERT_EQ('v5', v);
  // Write something.  If sequence number was not recovered properly,
  // it will be hidden by an earlier write.
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v6'));
  ASSERT_OK(db_->Get(ReadOptions(), 'foo', &v));
  ASSERT_EQ('v6', v);
  Reopen();
  ASSERT_OK(db_->Get(ReadOptions(), 'foo', &v));
  ASSERT_EQ('v6', v);
}
    
    // State shared by all concurrent executions of the same benchmark.
struct SharedState {
  port::Mutex mu;
  port::CondVar cv GUARDED_BY(mu);
  int total GUARDED_BY(mu);
    }
    
      ASSERT_TRUE(ParseInternalKey(in, &decoded));
  ASSERT_EQ(key, decoded.user_key.ToString());
  ASSERT_EQ(seq, decoded.sequence);
  ASSERT_EQ(vt, decoded.type);
    
    std::string InfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG';
}
    
          if (force_error_) {
        force_error_ = false;
        returned_partial_ = true;
        return Status::Corruption('read error');
      }
    
    int MemTable::KeyComparator::operator()(const char* aptr, const char* bptr)
    const {
  // Internal keys are encoded as length-prefixed strings.
  Slice a = GetLengthPrefixedSlice(aptr);
  Slice b = GetLengthPrefixedSlice(bptr);
  return comparator.Compare(a, b);
}
    
    
    { private:
  std::string dbname_;
  Env* env_;
  DB* db_;
};
    
    // We want to make sure that with a single writer and multiple
// concurrent readers (with no synchronization other than when a
// reader's iterator is created), the reader always observes all the
// data that was present in the skip list when the iterator was
// constructor.  Because insertions are happening concurrently, we may
// also observe new values that were inserted since the iterator was
// constructed, but we should never miss any values that were present
// at iterator construction time.
//
// We generate multi-part keys:
//     <key,gen,hash>
// where:
//     key is in range [0..K-1]
//     gen is a generation number for key
//     hash is hash(key,gen)
//
// The insertion code picks a random key, sets gen to be 1 + the last
// generation number inserted for that key, and sets hash to Hash(key,gen).
//
// At the beginning of a read, we snapshot the last inserted
// generation number for each key.  We then iterate, including random
// calls to Next() and Seek().  For every key we encounter, we
// check that it is either expected given the initial snapshot or has
// been concurrently added since the iterator started.
class ConcurrentTest {
 private:
  static const uint32_t K = 4;
    }
    
      for (auto& t : workers) t.join();
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    
    {} // namespace ppc64_asm

    
    struct ObjectData;
struct Object;
    
    // No `ini` binding yet. Hdf still takes precedence but will be removed
// once we have made all options ini-aware. All new settings should
// use the ini path of this method (i.e., pass a bogus Hdf or keep it null)
void Config::Iterate(std::function<void (const IniSettingMap&,
                                         const Hdf&,
                                         const std::string&)> cb,
                     const IniSettingMap &ini, const Hdf& config,
                     const std::string &name,
                     const bool prepend_hhvm /* = true */) {
  Hdf hdf = name.empty() ? config : config[name];
  if (hdf.exists() && !hdf.isEmpty()) {
    for (Hdf c = hdf.firstChild(); c.exists(); c = c.next()) {
      cb(IniSetting::Map::object, c, '');
    }
  } else {
    Hdf empty;
    auto ini_value = name.empty() ? ini :
      ini_iterate(ini, IniName(name, prepend_hhvm));
    if (ini_value.isArray()) {
      for (ArrayIter iter(ini_value.toArray()); iter; ++iter) {
        cb(iter.second(), empty, iter.first().toString().toCppString());
      }
    }
  }
}
    
    #ifndef incl_HPHP_CONFIG_H_
#define incl_HPHP_CONFIG_H_
    
    
    {        ImGui::Render();
    }
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    // Render function
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_ImplDX11_RenderDrawData(ImDrawData* draw_data)
{
    ID3D11DeviceContext* ctx = g_pd3dDeviceContext;
    }
    
        VkVertexInputAttributeDescription attribute_desc[3] = {};
    attribute_desc[0].location = 0;
    attribute_desc[0].binding = binding_desc[0].binding;
    attribute_desc[0].format = VK_FORMAT_R32G32_SFLOAT;
    attribute_desc[0].offset = IM_OFFSETOF(ImDrawVert, pos);
    attribute_desc[1].location = 1;
    attribute_desc[1].binding = binding_desc[0].binding;
    attribute_desc[1].format = VK_FORMAT_R32G32_SFLOAT;
    attribute_desc[1].offset = IM_OFFSETOF(ImDrawVert, uv);
    attribute_desc[2].location = 2;
    attribute_desc[2].binding = binding_desc[0].binding;
    attribute_desc[2].format = VK_FORMAT_R8G8B8A8_UNORM;
    attribute_desc[2].offset = IM_OFFSETOF(ImDrawVert, col);
    
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
        ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
        // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;       // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;        // We can honor io.WantSetMousePos requests (optional, rarely used)
    io.BackendPlatformName = 'imgui_impl_sdl';
    
    Status PosixSequentialFile::Skip(uint64_t n) {
  if (fseek(file_, static_cast<long int>(n), SEEK_CUR)) {
    return IOError('While fseek to skip ' + ToString(n) + ' bytes', filename_,
                   errno);
  }
  return Status::OK();
}
    
    class PosixRandomRWFile : public RandomRWFile {
 public:
  explicit PosixRandomRWFile(const std::string& fname, int fd,
                             const EnvOptions& options);
  virtual ~PosixRandomRWFile();
    }
    
    class MyFilter : public rocksdb::CompactionFilter {
 public:
  bool Filter(int level, const rocksdb::Slice& key,
              const rocksdb::Slice& existing_value, std::string* new_value,
              bool* value_changed) const override {
    fprintf(stderr, 'Filter(%s)\n', key.ToString().c_str());
    ++count_;
    assert(*value_changed == false);
    return false;
  }
    }
    
      // Initialize pointer options for each column family
  for (size_t i = 0; i < loaded_cf_descs.size(); ++i) {
    auto* loaded_bbt_opt = reinterpret_cast<BlockBasedTableOptions*>(
        loaded_cf_descs[0].options.table_factory->GetOptions());
    // Expect the same as BlockBasedTableOptions will be loaded form file.
    assert(loaded_bbt_opt->block_size == bbt_opts.block_size);
    // However, block_cache needs to be manually initialized as documented
    // in rocksdb/utilities/options_util.h.
    loaded_bbt_opt->block_cache = cache;
  }
  // In addition, as pointer options are initialized with default value,
  // we need to properly initialized all the pointer options if non-defalut
  // values are used before calling DB::Open().
  assert(loaded_cf_descs[0].options.compaction_filter == nullptr);
  loaded_cf_descs[0].options.compaction_filter = compaction_filter.get();
    
      {
    PinnableSlice pinnable_val;
    db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
    assert(pinnable_val == 'value');
  }
    
      WriteOptions write_options;
  ReadOptions read_options;
  TransactionOptions txn_options;
  std::string value;
    
    namespace rocksdb {
struct CompactionJobStats {
  CompactionJobStats() { Reset(); }
  void Reset();
  // Aggregate the CompactionJobStats from another instance with this one
  void Add(const CompactionJobStats& stats);
    }
    }
    
        struct aligned
    {
        type value;
    }

        
          // Construct a generic signature builder by collecting the constraints
  // from the requirement and the context of the conformance together,
  // because both define the capabilities of the requirement.
  GenericSignatureBuilder builder(ctx);
    
        // If we can resolve the desired bits out of the current chunk,
    // all the better.
    if (numBitsWanted <= bitsRemaining) {
      assert(numBitsWanted != ChunkSizeInBits);
      auto result = prevChunk & resultMask;
      bitsRemaining -= numBitsWanted;
      prevChunk >>= numBitsWanted;
      return result;
    }
    
    // We'd like the dump routine to be present in all builds, but it's
// a pretty large amount of code, most of which is not sensitive to the
// actual key and value data.  If we try to have a common implementation,
// we're left with the problem of describing the layout of a node when
// that's technically instantiation-specific.  Redefining the struct here
// is technically an aliasing violation, but we can just tell the compilers
// that actually use TBAA that this is okay.
typedef struct _Node Node LLVM_MAY_ALIAS;
struct _Node {
  // If you change the layout in the header, you'll need to change it here.
  // (This comment is repeated there.)
  Node *Left, *Right, *Further;
};
    
    //////////////////////////////////////////////////////////////////////
    
    /**
 * Canonicalize path to remove '..', '.' and '\/', etc..
 */
String canonicalize(const String& path);
String canonicalize(const std::string& path);
String canonicalize(const char* path, size_t len,
                    bool collapse_slashes = true);
    
        // Setup Dear ImGui binding
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
    //---- Don't implement some functions to reduce linkage requirements.
//#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS   // [Win32] Don't implement default clipboard handler. Won't use and link with OpenClipboard/GetClipboardData/CloseClipboard etc.
//#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS         // [Win32] Don't implement default IME handler. Won't use and link with ImmGetContext/ImmSetCompositionWindow.
//#define IMGUI_DISABLE_FORMAT_STRING_FUNCTIONS             // Don't implement ImFormatString/ImFormatStringV so you can implement them yourself if you don't want to link with vsnprintf.
//#define IMGUI_DISABLE_MATH_FUNCTIONS                      // Don't implement ImFabs/ImSqrt/ImPow/ImFmod/ImCos/ImSin/ImAcos/ImAtan2 wrapper so you can implement them yourself. Declare your prototypes in imconfig.h.
//#define IMGUI_DISABLE_DEFAULT_ALLOCATORS                  // Don't implement default allocators calling malloc()/free() to avoid linking with them. You will need to call ImGui::SetAllocatorFunctions().
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
        // Create the rasterizer state
    {
        D3D10_RASTERIZER_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.FillMode = D3D10_FILL_SOLID;
        desc.CullMode = D3D10_CULL_NONE;
        desc.ScissorEnable = true;
        desc.DepthClipEnable = true;
        g_pd3dDevice->CreateRasterizerState(&desc, &g_pRasterizerState);
    }
    
    bool    ImGui_ImplDX11_CreateDeviceObjects()
{
    if (!g_pd3dDevice)
        return false;
    if (g_pFontSampler)
        ImGui_ImplDX11_InvalidateDeviceObjects();
    }
    
    
    {        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                CIwMaterial* pCurrentMaterial = IW_GX_ALLOC_MATERIAL();
                pCurrentMaterial->SetShadeMode(CIwMaterial::SHADE_FLAT);
                pCurrentMaterial->SetCullMode(CIwMaterial::CULL_NONE);
                pCurrentMaterial->SetFiltering(false);
                pCurrentMaterial->SetAlphaMode(CIwMaterial::ALPHA_BLEND);
                pCurrentMaterial->SetDepthWriteMode(CIwMaterial::DEPTH_WRITE_NORMAL);
                pCurrentMaterial->SetAlphaTestMode(CIwMaterial::ALPHATEST_DISABLED);
                pCurrentMaterial->SetTexture((CIwTexture*)pcmd->TextureId);
                IwGxSetMaterial(pCurrentMaterial);
                IwGxDrawPrims(IW_GX_TRI_LIST, (uint16*)idx_buffer, pcmd->ElemCount);
            }
            idx_buffer += pcmd->ElemCount;
        }
        IwGxFlush();
    }
    
    // About OpenGL function loaders: 
// About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually. 
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad. 
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
    
        VkPipelineColorBlendAttachmentState color_attachment[1] = {};
    color_attachment[0].blendEnable = VK_TRUE;
    color_attachment[0].srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
    color_attachment[0].dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    color_attachment[0].colorBlendOp = VK_BLEND_OP_ADD;
    color_attachment[0].srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    color_attachment[0].dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    color_attachment[0].alphaBlendOp = VK_BLEND_OP_ADD;
    color_attachment[0].colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
    
    class CompactedDBImpl : public DBImpl {
 public:
  CompactedDBImpl(const DBOptions& options, const std::string& dbname);
  virtual ~CompactedDBImpl();
    }
    
    
    {  // Single-Delete diagnostics for exceptional situations
  uint64_t num_single_del_fallthru = 0;
  uint64_t num_single_del_mismatch = 0;
};

    
      uint64_t single_refill_amount =
      delayed_write_rate_ * kRefillInterval / kMicrosPerSecond;
  if (bytes_left_ + single_refill_amount >= num_bytes) {
    // Wait until a refill interval
    // Never trigger expire for less than one refill interval to avoid to get
    // time.
    bytes_left_ = bytes_left_ + single_refill_amount - num_bytes;
    last_refill_time_ = time_now + kRefillInterval;
    return kRefillInterval + sleep_debt;
  }
    
      // these three metods are querying the state of the WriteController
  bool IsStopped() const;
  bool NeedsDelay() const { return total_delayed_.load() > 0; }
  bool NeedSpeedupCompaction() const {
    return IsStopped() || NeedsDelay() || total_compaction_pressure_ > 0;
  }
  // return how many microseconds the caller needs to sleep after the call
  // num_bytes: how many number of bytes to put into the DB.
  // Prerequisite: DB mutex held.
  uint64_t GetDelay(Env* env, uint64_t num_bytes);
  void set_delayed_write_rate(uint64_t write_rate) {
    // avoid divide 0
    if (write_rate == 0) {
      write_rate = 1u;
    } else if (write_rate > max_delayed_write_rate()) {
      write_rate = max_delayed_write_rate();
    }
    delayed_write_rate_ = write_rate;
  }
    
    
    {    // Pull off the basename temporarily since realname(3) (used by
    // EncodePath()) requires a path that exists
    size_t base_sep = path.rfind('/', final_idx);
    auto status_and_enc_path = EncodePath(path.substr(0, base_sep + 1));
    status_and_enc_path.second.append(path.substr(base_sep + 1));
    return status_and_enc_path;
  }
    
      Status PositionedAppend(const Slice& data, uint64_t offset) override {
    AlignedBuffer buf;
    Status status;
    Slice dataToAppend(data); 
    offset += prefixLength_;
    if (data.size() > 0) {
      // Encrypt in cloned buffer
      buf.Alignment(GetRequiredBufferAlignment());
      buf.AllocateNewBuffer(data.size());
      memmove(buf.BufferStart(), data.data(), data.size());
      status = stream_->Encrypt(offset, buf.BufferStart(), data.size());
      if (!status.ok()) {
        return status;
      }
      dataToAppend = Slice(buf.BufferStart(), data.size());
    }
    status = file_->PositionedAppend(dataToAppend, offset);
    if (!status.ok()) {
      return status;
    }
    return status;
  }
    
    using namespace rocksdb;
    
    class MyMerge : public rocksdb::MergeOperator {
 public:
  virtual bool FullMergeV2(const MergeOperationInput& merge_in,
                           MergeOperationOutput* merge_out) const override {
    merge_out->new_value.clear();
    if (merge_in.existing_value != nullptr) {
      merge_out->new_value.assign(merge_in.existing_value->data(),
                                  merge_in.existing_value->size());
    }
    for (const rocksdb::Slice& m : merge_in.operand_list) {
      fprintf(stderr, 'Merge(%s)\n', m.ToString().c_str());
      // the compaction filter filters out bad values
      assert(m.ToString() != 'bad');
      merge_out->new_value.assign(m.data(), m.size());
    }
    return true;
  }
    }
    
      PinnableSlice pinnable_val;
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key1', &pinnable_val);
  assert(s.IsNotFound());
  // Reset PinnableSlice after each use and before each reuse
  pinnable_val.Reset();
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
  assert(pinnable_val == 'value');
  pinnable_val.Reset();
  // The Slice pointed by pinnable_val is not valid after this point
    
    std::string DHTResponseMessage::toString() const
{
  return fmt('dht response %s TransactionID=%s Remote:%s(%u), id=%s, v=%s, %s',
             getMessageType().c_str(), util::toHex(getTransactionID()).c_str(),
             getRemoteNode()->getIPAddress().c_str(),
             getRemoteNode()->getPort(),
             util::toHex(getRemoteNode()->getID(), DHT_ID_LENGTH).c_str(),
             util::torrentPercentEncode(getVersion()).c_str(),
             toStringOptional().c_str());
}
    
    namespace aria2 {
    }
    
      void showBuckets() const;
    
    #include 'DHTNode.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'DlAbortEx.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'fmt.h'
#include 'util.h'
#include 'array_fun.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
    #define WRITE_CHECK(fp, ptr, count)                                            \
  if (fp.write((ptr), (count)) != (count)) {                                   \
    throw DL_ABORT_EX(                                                         \
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));     \
  }
    
      std::shared_ptr<DHTNode> localNode_;
    
        DHTRoutingTableDeserializer deserializer(family);
    const std::string& dhtFile = e->getOption()->get(
        family == AF_INET ? PREF_DHT_FILE_PATH : PREF_DHT_FILE_PATH6);
    try {
      deserializer.deserialize(dhtFile);
      localNode = deserializer.getLocalNode();
    }
    catch (RecoverableException& e) {
      A2_LOG_ERROR_EX(
          fmt('Exception caught while loading DHT routing table from %s',
              dhtFile.c_str()),
          e);
    }
    if (!localNode) {
      localNode = std::make_shared<DHTNode>();
    }
    
    #include <vector>
#include <deque>
#include <memory>
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createPeerLookupTask(
    const std::shared_ptr<DownloadContext>& ctx, uint16_t tcpPort,
    const std::shared_ptr<PeerStorage>& peerStorage)
{
  auto task = std::make_shared<DHTPeerLookupTask>(ctx, tcpPort);
  // TODO this may be not freed by RequestGroup::releaseRuntimeResource()
  task->setPeerStorage(peerStorage);
  setCommonProperty(task);
  return task;
}
    
      DHTMessageDispatcher* dispatcher_;
    
    std::string DHTUnknownMessage::toString() const
{
  size_t sampleLength = 8;
  if (length_ < sampleLength) {
    sampleLength = length_;
  }
  return fmt('dht unknown Remote:%s(%u) length=%lu, first 8 bytes(hex)=%s',
             ipaddr_.c_str(), port_, static_cast<unsigned long>(length_),
             util::toHex(data_, sampleLength).c_str());
}
    
    template< typename T, typename Derived >
struct msvc_arm_operations :
    public msvc_arm_operations_base
{
    typedef T storage_type;
    }
    
    #endif // BOOST_ATOMIC_DETAIL_PAUSE_HPP_INCLUDED_

    
    
    {} // namespace mars_boost
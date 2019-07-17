
        
        
    {  // Force creation of multiple memtables by reducing the write buffer size.
  Options opt;
  opt.reuse_logs = true;
  opt.write_buffer_size = (kNum * 100) / 2;
  Open(&opt);
  ASSERT_LE(2, NumTables());
  ASSERT_EQ(1, NumLogs());
  ASSERT_NE(old_log_file, FirstLogFile()) << 'must not reuse log';
  for (int i = 0; i < kNum; i++) {
    char buf[100];
    snprintf(buf, sizeof(buf), '%050d', i);
    ASSERT_EQ(buf, Get(buf));
  }
}
    
    
    {
    {    if (!s.ok()) {
      assert(table == nullptr);
      delete file;
      // We do not cache error results so that if the error is transient,
      // or somebody repairs the file, we recover automatically.
    } else {
      TableAndFile* tf = new TableAndFile;
      tf->file = file;
      tf->table = table;
      *handle = cache_->Insert(key, tf, 1, &DeleteEntry);
    }
  }
  return s;
}
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
      static Status InsertInto(const WriteBatch* batch, MemTable* memtable);
    
      // Remove all cache entries that are not actively in use.  Memory-constrained
  // applications may wish to call this method to reduce memory usage.
  // Default implementation of Prune() does nothing.  Subclasses are strongly
  // encouraged to override the default implementation.  A future release of
  // leveldb may change Prune() to a pure abstract method.
  virtual void Prune() {}
    
    #endif  // STORAGE_LEVELDB_INCLUDE_COMPARATOR_H_

    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
LEVELDB_EXPORT Status DumpFile(Env* env, const std::string& fname,
                               WritableFile* dst);
    
    // A file abstraction for sequential writing.  The implementation
// must provide buffering since callers may append small fragments
// at a time to the file.
class LEVELDB_EXPORT WritableFile {
 public:
  WritableFile() = default;
    }
    
      // Create a slice that refers to d[0,n-1].
  Slice(const char* d, size_t n) : data_(d), size_(n) {}
    
    
    {}  // namespace leveldb
    
    
    {      // Ok
      break;
    case kSnappyCompression: {
      size_t ulength = 0;
      if (!port::Snappy_GetUncompressedLength(data, n, &ulength)) {
        delete[] buf;
        return Status::Corruption('corrupted compressed block contents');
      }
      char* ubuf = new char[ulength];
      if (!port::Snappy_Uncompress(data, n, ubuf)) {
        delete[] buf;
        delete[] ubuf;
        return Status::Corruption('corrupted compressed block contents');
      }
      delete[] buf;
      result->data = Slice(ubuf, ulength);
      result->heap_allocated = true;
      result->cachable = true;
      break;
    }
    default:
      delete[] buf;
      return Status::Corruption('bad block type');
  }
    
    TEST(Coding, Fixed64) {
  std::string s;
  for (int power = 0; power <= 63; power++) {
    uint64_t v = static_cast<uint64_t>(1) << power;
    PutFixed64(&s, v - 1);
    PutFixed64(&s, v + 0);
    PutFixed64(&s, v + 1);
  }
    }
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file fully_connected.cc
 * \brief fully connect operator
*/
#include './fully_connected-inl.h'
#include './mkldnn/mkldnn_ops-inl.h'
#include './mkldnn/mkldnn_base-inl.h'
#if MXNET_USE_NNPACK == 1
#include '../nnpack/nnpack_fully_connected-inl.h'
#endif  // MXNET_USE_NNPACK
    
    static void ConcatData(mkldnn::memory::format src_format,
                       mkldnn::memory::format dst_format,
                       std::vector<mkldnn::memory::dims> srcs_cds,
                       mkldnn::memory::dims dst_cds,
                       mkldnn::memory::data_type mkldnn_dtype,
                       int concat_dimension,
                       std::vector<void*> srcs_data,
                       const mkldnn::memory &dst) {
  auto cpu_engine = CpuEngine::Get()->get_engine();
  std::vector<mkldnn::memory::primitive_desc> srcs_pd;
  std::vector<mkldnn::memory> srcs;
  for (size_t i = 0; i < srcs_cds.size(); i++) {
    auto desc = mkldnn::memory::desc(srcs_cds[i], mkldnn_dtype, src_format);
    auto mpd = mkldnn::memory::primitive_desc(desc, cpu_engine);
    auto src_memory = mkldnn::memory(mpd, srcs_data[i]);
    srcs_pd.push_back(mpd);
    srcs.push_back(src_memory);
  }
  std::vector<primitive::at> inputs;
  for (size_t i = 0; i < srcs_cds.size(); i++) {
    inputs.push_back(srcs[i]);
  }
  auto dst_desc = mkldnn::memory::desc(dst_cds, mkldnn_dtype, dst_format);
  auto concat_pd = concat::primitive_desc(dst_desc, concat_dimension, srcs_pd);
  MKLDNNStream::Get()->RegisterPrim(concat(concat_pd, inputs, dst));
  MKLDNNStream::Get()->Submit();
}
    
      template<typename DType>
  inline void DeformablePSROIPoolForward(const Tensor<cpu, 4, DType> &out,
                                         const Tensor<cpu, 4, DType> &data,
                                         const Tensor<cpu, 2, DType> &bbox,
                                         const Tensor<cpu, 4, DType> &trans,
                                         const Tensor<cpu, 4, DType> &top_count,
                                         const bool no_trans, const float spatial_scale,
                                         const index_t output_dim, const index_t group_size,
                                         const index_t pooled_size, const index_t part_size,
                                         const index_t sample_per_part, const float trans_std) {
    const DType *bottom_data = data.dptr_;
    const DType *bottom_rois = bbox.dptr_;
    const DType *bottom_trans = no_trans ? nullptr : trans.dptr_;
    DType *top_data = out.dptr_;
    DType *top_count_data = top_count.dptr_;
    const index_t count = out.shape_.Size();
    const index_t channels = data.size(1);
    const index_t height = data.size(2);
    const index_t width = data.size(3);
    const index_t pooled_height = pooled_size;
    const index_t pooled_width = pooled_size;
    const index_t num_classes = no_trans ? 1 : trans.size(1) / 2;
    const index_t channels_each_class = no_trans ? output_dim : output_dim / num_classes;
    DeformablePSROIPoolForwardCPU<DType>(count, bottom_data, spatial_scale,
                                         channels, height, width,
                                         pooled_height, pooled_width,
                                         bottom_rois, bottom_trans,
                                         no_trans, trans_std, sample_per_part,
                                         output_dim, group_size, part_size, num_classes,
                                         channels_each_class, top_data, top_count_data);
    }
    
    template<int req>
struct IndexArrayDefaultKernel {
  MSHADOW_XINLINE static void Map(int i,
                                  int64_t* out_data,
                                  const int ndim,
                                  const dim_t* shape) {
    int64_t index = i;
    for (ptrdiff_t j = ndim - 1; j >= 0; j--) {
      KERNEL_ASSIGN(out_data[ptrdiff_t(i) * ptrdiff_t(ndim) + j], req, index % shape[j]);
      index /= shape[j];
    }
  }
};
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
        // Cleanup
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
    
    
    {        err = vkResetFences(g_Device, 1, &fd->Fence);
        check_vk_result(err);
    }
    {
        err = vkResetCommandPool(g_Device, fd->CommandPool, 0);
        check_vk_result(err);
        VkCommandBufferBeginInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        info.flags |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        err = vkBeginCommandBuffer(fd->CommandBuffer, &info);
        check_vk_result(err);
    }
    {
        VkRenderPassBeginInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
        info.renderPass = wd->RenderPass;
        info.framebuffer = fd->Framebuffer;
        info.renderArea.extent.width = wd->Width;
        info.renderArea.extent.height = wd->Height;
        info.clearValueCount = 1;
        info.pClearValues = &wd->ClearValue;
        vkCmdBeginRenderPass(fd->CommandBuffer, &info, VK_SUBPASS_CONTENTS_INLINE);
    }
    
    // Implemented features:
//  [X] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'.
//  [X] Platform: Clipboard support.
//  [X] Platform: Keyboard arrays indexed using SDL_SCANCODE_* codes, e.g. ImGui::IsKeyPressed(SDL_SCANCODE_SPACE).
//  [X] Platform: Gamepad support. Enabled with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
// Missing features:
//  [ ] Platform: SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputText(label, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
      static void clear(Data& data);
    
    namespace aria2 {
    }
    
      int version;
    
    class DownloadEngine;
class Command;
    
    void DHTTaskFactoryImpl::setCommonProperty(
    const std::shared_ptr<DHTAbstractTask>& task)
{
  task->setRoutingTable(routingTable_);
  task->setMessageDispatcher(dispatcher_);
  task->setMessageFactory(factory_);
  task->setTaskQueue(taskQueue_);
  task->setLocalNode(localNode_);
}
    
    #include 'DHTTaskQueue.h'
#include 'DHTTaskExecutor.h'
    
    void DHTTokenUpdateCommand::preProcess()
{
  if (getDownloadEngine()->getRequestGroupMan()->downloadFinished() ||
      getDownloadEngine()->isHaltRequested()) {
    enableExit();
  }
}
    
    DHTUnknownMessage::DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                                     const unsigned char* data, size_t length,
                                     const std::string& ipaddr, uint16_t port)
    : DHTMessage(localNode, std::shared_ptr<DHTNode>()),
      length_(length),
      ipaddr_(ipaddr),
      port_(port)
{
  if (length_ == 0) {
    data_ = nullptr;
  }
  else {
    data_ = new unsigned char[length];
    memcpy(data_, data, length);
  }
}
    
        void markBad(const std::string& addr);
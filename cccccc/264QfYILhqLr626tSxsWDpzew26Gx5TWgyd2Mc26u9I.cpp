
        
        /// Get a parsed documentation comment for the declaration, if there is one.
Optional<DocComment *>getSingleDocComment(swift::markup::MarkupContext &Context,
                                          const Decl *D);
    
    void dump(const MarkupASTNode *Node, llvm::raw_ostream &OS, unsigned indent = 0);
void printInlinesUnder(const MarkupASTNode *Node, llvm::raw_ostream &OS,
                       bool PrintDecorators = false);
    
      /// Indicates whether the diagnostics produced during compilation should be
  /// checked against expected diagnostics, indicated by markers in the
  /// input source file.
  enum {
    NoVerify,
    Verify,
    VerifyAndApplyFixes
  } VerifyMode = NoVerify;
    
      // #line directive handling.
  struct VirtualFile {
    CharSourceRange Range;
    std::string Name;
    int LineOffset;
  };
  std::map<const char *, VirtualFile> VirtualFiles;
  mutable std::pair<const char *, const VirtualFile*> CachedVFile = {nullptr, nullptr};
    
    #include 'swift/AST/Type.h'
#include 'llvm/ADT/ArrayRef.h'
#include 'llvm/ADT/Optional.h'
    
    IPC_SYNC_MESSAGE_ROUTED4_1(ShellViewHostMsg_Call_Object_Method_Sync,
                           int /* object id */,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
      DVLOG(1) << 'remote::AllocateObject(routing_id=' << routing_id << ', object_id=' << object_id << ')';
    
      NWWebViewTestBase() : guest_web_contents_(NULL), embedder_web_contents_(NULL) {
    GuestViewManager::set_factory_for_testing(&factory_);
  }
    
     private:
  // RenderViewObserver implementation.
   bool OnMessageReceived(const IPC::Message& message) override;
   void DraggableRegionsChanged(blink::WebFrame* frame) override;
   void DidFinishDocumentLoad(blink::WebLocalFrame* frame) override;
   void DidCreateDocumentElement(blink::WebLocalFrame* frame) override;
    
      if (type == 'App') {
    content::Shell* shell =
        content::Shell::FromRenderViewHost(render_view_host());
    nwapi::App::Call(shell, method, arguments, result, this);
    return;
  } else if (type == 'Screen') {
    nwapi::Screen::Call(this, method, arguments, result);
    return;
  }
    
    void MenuDelegate::ExecuteCommand(int command_id, int event_flags) {
  if (command_id < 0)
    return;
    }
    
    Status DumpFile(Env* env, const std::string& fname, WritableFile* dst) {
  FileType ftype;
  if (!GuessType(fname, &ftype)) {
    return Status::InvalidArgument(fname + ': unknown file type');
  }
  switch (ftype) {
    case kLogFile:         return DumpLog(env, fname, dst);
    case kDescriptorFile:  return DumpDescriptor(env, fname, dst);
    case kTableFile:       return DumpTable(env, fname, dst);
    default:
      break;
  }
  return Status::InvalidArgument(fname + ': not a dump-able file type');
}
    
    std::string LockFileName(const std::string& dbname) {
  return dbname + '/LOCK';
}
    
      while (msg == NULL && GetVarint32(&input, &tag)) {
    switch (tag) {
      case kComparator:
        if (GetLengthPrefixedSlice(&input, &str)) {
          comparator_ = str.ToString();
          has_comparator_ = true;
        } else {
          msg = 'comparator name';
        }
        break;
    }
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
    
    
    {
    {      bool known = true;
      bool write_sync = false;
      if (name == Slice('fillseq')) {
        Write(write_sync, SEQUENTIAL, FRESH, num_, FLAGS_value_size, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('fillseqbatch')) {
        Write(write_sync, SEQUENTIAL, FRESH, num_, FLAGS_value_size, 1000);
        WalCheckpoint(db_);
      } else if (name == Slice('fillrandom')) {
        Write(write_sync, RANDOM, FRESH, num_, FLAGS_value_size, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('fillrandbatch')) {
        Write(write_sync, RANDOM, FRESH, num_, FLAGS_value_size, 1000);
        WalCheckpoint(db_);
      } else if (name == Slice('overwrite')) {
        Write(write_sync, RANDOM, EXISTING, num_, FLAGS_value_size, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('overwritebatch')) {
        Write(write_sync, RANDOM, EXISTING, num_, FLAGS_value_size, 1000);
        WalCheckpoint(db_);
      } else if (name == Slice('fillrandsync')) {
        write_sync = true;
        Write(write_sync, RANDOM, FRESH, num_ / 100, FLAGS_value_size, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('fillseqsync')) {
        write_sync = true;
        Write(write_sync, SEQUENTIAL, FRESH, num_ / 100, FLAGS_value_size, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('fillrand100K')) {
        Write(write_sync, RANDOM, FRESH, num_ / 1000, 100 * 1000, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('fillseq100K')) {
        Write(write_sync, SEQUENTIAL, FRESH, num_ / 1000, 100 * 1000, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('readseq')) {
        ReadSequential();
      } else if (name == Slice('readrandom')) {
        Read(RANDOM, 1);
      } else if (name == Slice('readrand100K')) {
        int n = reads_;
        reads_ /= 1000;
        Read(RANDOM, 1);
        reads_ = n;
      } else {
        known = false;
        if (name != Slice()) {  // No error message for empty name
          fprintf(stderr, 'unknown benchmark '%s'\n', name.ToString().c_str());
        }
      }
      if (known) {
        Stop(name);
      }
    }
  }
    
    // Return a builtin comparator that uses lexicographic byte-wise
// ordering.  The result remains the property of this module and
// must not be deleted.
extern const Comparator* BytewiseComparator();
    
    
    {  if (argc != 4) {
    printf('This script converts the CIFAR dataset to the leveldb format used\n'
           'by caffe to perform classification.\n'
           'Usage:\n'
           '    convert_cifar_data input_folder output_folder db_type\n'
           'Where the input folder should contain the binary batch files.\n'
           'The CIFAR dataset could be downloaded at\n'
           '    http://www.cs.toronto.edu/~kriz/cifar.html\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(string(argv[1]), string(argv[2]), string(argv[3]));
  }
  return 0;
}

    
    /* Load the mean file in binaryproto format. */
void Classifier::SetMean(const string& mean_file) {
  BlobProto blob_proto;
  ReadProtoFromBinaryFileOrDie(mean_file.c_str(), &blob_proto);
    }
    
    
template <typename Dtype>
class LayerRegisterer {
 public:
  LayerRegisterer(const string& type,
                  shared_ptr<Layer<Dtype> > (*creator)(const LayerParameter&)) {
    // LOG(INFO) << 'Registering layer type: ' << type;
    LayerRegistry<Dtype>::AddCreator(type, creator);
  }
};
    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
    namespace caffe {
    }
    
    #endif  // CAFFE_CONV_LAYER_HPP_

    
    
    {}  // namespace caffe
    
    
    {  size_t tempDataSize;
  void *tempData1, *tempData2;
};
#endif
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      /**
   * @brief Computes the error gradient w.r.t. the ELU inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} = \left\{
   *        \begin{array}{lr}
   *            1           & \mathrm{if} \; x > 0 \\
   *            y + \alpha  & \mathrm{if} \; x \le 0
   *        \end{array} \right.
   *      @f$ if propagate_down[0].
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    // implements rabit error handling.
extern 'C' {
  void XGBoostAssert_R(int exp, const char *fmt, ...);
  void XGBoostCheck_R(int exp, const char *fmt, ...);
}
    
    class ConsoleLogger : public BaseLogger {
 public:
  ~ConsoleLogger();
};
    
    // array to help compression of decompression.
template<typename DType>
class CompressArray {
 public:
  // the data content.
  std::vector<DType> data;
  // Decompression helper
  // number of chunks
  inline int num_chunk() const {
    CHECK_GT(raw_chunks_.size(), 1);
    return static_cast<int>(raw_chunks_.size() - 1);
  }
  // raw bytes
  inline size_t RawBytes() const {
    return raw_chunks_.back() * sizeof(DType);
  }
  // encoded bytes
  inline size_t EncodedBytes() const {
    return encoded_chunks_.back() +
        (encoded_chunks_.size() + raw_chunks_.size()) * sizeof(bst_uint);
  }
  // load the array from file.
  inline void Read(dmlc::SeekStream* fi);
  // run decode on chunk_id
  inline void Decompress(int chunk_id);
  // Compression helper
  // initialize the compression chunks
  inline void InitCompressChunks(const std::vector<bst_uint>& chunk_ptr);
  // initialize the compression chunks
  inline void InitCompressChunks(size_t chunk_size, size_t max_nchunk);
  // run decode on chunk_id, level = -1 means default.
  inline void Compress(int chunk_id, bool use_hc);
  // save the output buffer into file.
  inline void Write(dmlc::Stream* fo);
    }
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    #if XGBOOST_CUSTOMIZE_GLOBAL_PRNG
/*!
 * \brief An customized random engine, used to be plugged in PRNG from other systems.
 *  The implementation of this library is not provided by xgboost core library.
 *  Instead the other library can implement this class, which will be used as GlobalRandomEngine
 *  If XGBOOST_RANDOM_CUSTOMIZE = 1, by default this is switched off.
 */
class CustomGlobalRandomEngine {
 public:
  /*! \brief The result type */
  typedef size_t result_type;
  /*! \brief The minimum of random numbers generated */
  inline static constexpr result_type min() {
    return 0;
  }
  /*! \brief The maximum random numbers generated */
  inline static constexpr result_type max() {
    return std::numeric_limits<size_t>::max();
  }
  /*!
   * \brief seed function, to be implemented
   * \param val The value of the seed.
   */
  void seed(result_type val);
  /*!
   * \return next random number.
   */
  result_type operator()();
};
    
      double double2[2] = {1.0, 2.0};
  EXPECT_EQ(info.GetRoot(1), 0)
    << 'When no root_index is given, was expecting default value 0';
  info.SetInfo('root_index', double2, xgboost::kDouble, 2);
  EXPECT_EQ(info.GetRoot(1), 2.0f);
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    CHECK(page.offset.size() != 0 && page.offset[0] == 0);
    CHECK_EQ(page.offset.back(), page.data.size());
    fo->Write(page.offset);
    if (page.data.size() != 0) {
      fo->Write(dmlc::BeginPtr(page.data), page.data.size() * sizeof(SparseBatch::Entry));
    }
  }
    
    #if DMLC_ENABLE_STD_THREAD
namespace xgboost {
namespace data {
    }
    }
    
            // FIXME-OPT: Unfortunately Allegro doesn't support 32-bits packed colors so we have to convert them to 4 floats
        static ImVector<ImDrawVertAllegro> vertices;
        vertices.resize(cmd_list->VtxBuffer.Size);
        for (int i = 0; i < cmd_list->VtxBuffer.Size; ++i)
        {
            const ImDrawVert &dv = cmd_list->VtxBuffer[i];
            ImDrawVertAllegro v;
            v.pos = dv.pos;
            v.uv = dv.uv;
            unsigned char *c = (unsigned char*)&dv.col;
            v.col = al_map_rgba(c[0], c[1], c[2], c[3]);
            vertices[i] = v;
        }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
            // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
        if (g_pd3dDevice->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, g_frameContext[0].CommandAllocator, NULL, IID_PPV_ARGS(&g_pd3dCommandList)) != S_OK ||
        g_pd3dCommandList->Close() != S_OK)
        return E_FAIL;
    
        // Upload Fonts
    {
        VkResult err;
        err = vkResetCommandPool(g_Device, g_CommandPool[g_FrameIndex], 0);
        check_vk_result(err);
        VkCommandBufferBeginInfo begin_info = {};
        begin_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        begin_info.flags |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        err = vkBeginCommandBuffer(g_CommandBuffer[g_FrameIndex], &begin_info);
        check_vk_result(err);
    }
    
            // Decode and advance source
        unsigned int c = (unsigned int)*s;
        if (c < 0x80)
        {
            s += 1;
        }
        else
        {
            s += ImTextCharFromUtf8(&c, s, text_end);
            if (c == 0) // Malformed UTF-8?
                break;
        }
    
    static VkSampler              g_FontSampler = VK_NULL_HANDLE;
static VkDeviceMemory         g_FontMemory = VK_NULL_HANDLE;
static VkImage                g_FontImage = VK_NULL_HANDLE;
static VkImageView            g_FontView = VK_NULL_HANDLE;
    
                // Generate a dummy palette
            static bool saved_palette_inited = false;
            static ImVec4 saved_palette[32];
            if (!saved_palette_inited)
                for (int n = 0; n < IM_ARRAYSIZE(saved_palette); n++)
                {
                    ImGui::ColorConvertHSVtoRGB(n / 31.0f, 0.8f, 0.8f, saved_palette[n].x, saved_palette[n].y, saved_palette[n].z);
                    saved_palette[n].w = 1.0f; // Alpha
                }
            saved_palette_inited = true;
    
        IMGUI_API void                  MarkIniSettingsDirty();
    IMGUI_API ImGuiSettingsHandler* FindSettingsHandler(const char* type_name);
    IMGUI_API ImGuiWindowSettings*  FindWindowSettings(ImGuiID id);

        
        #include 'atom/browser/api/event_emitter.h'
#include 'atom/browser/auto_updater.h'
#include 'atom/browser/window_list_observer.h'
#include 'native_mate/arguments.h'
#include 'native_mate/handle.h'
    
    
    {}  // namespace atom
    
    #endif  // ATOM_BROWSER_API_ATOM_API_DOWNLOAD_ITEM_H_

    
    GlobalShortcut::GlobalShortcut(v8::Isolate* isolate) {
  Init(isolate);
}
    
    NODE_BUILTIN_MODULE_CONTEXT_AWARE(atom_browser_menu, Initialize)

    
    
    {}  // namespace mate
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    namespace nw {
    }
    
    #include 'content/nw/src/api/bindings_common.h'
    
      ~EventListener() override;
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return item->is_enabled_;
}
    
    void PointMenuPositionFunc(GtkMenu* menu,
                           int* x,
                           int* y,
                           gboolean* push_in,
                           gpointer userdata) {
  *push_in = TRUE;
    }
    
    void Menu::Destroy() {
}
    
    void MenuItem::SetIcon(const std::string& icon) {
  base::ThreadRestrictions::ScopedAllowIO allow_io;
  is_modified_ = true;
  if (icon.empty()) {
    icon_ = gfx::Image();
    return;
  }
    }
    
    #include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
    
    #define ROW_DST_ARG1 , DT * dst1_data_
#define ROW_DST_STORE1 , dst1_data(dst1_data_)
#define ROW_DST_VAR1 DT * dst1_data;
#define ROW_DST_ARG2 ROW_DST_ARG1 \
                     , DT * dst2_data_
#define ROW_DST_STORE2 ROW_DST_STORE1 \
                       , dst2_data(dst2_data_)
#define ROW_DST_VAR2 ROW_DST_VAR1 \
                     DT * dst2_data;
#define ROW_DST_ARG3 ROW_DST_ARG2 \
                     , DT * dst3_data_
#define ROW_DST_STORE3 ROW_DST_STORE2 \
                       , dst3_data(dst3_data_)
#define ROW_DST_VAR3 ROW_DST_VAR2 \
                     DT * dst3_data;
#define ROW_DST_ARG4 ROW_DST_ARG3 \
                     , DT * dst4_data_
#define ROW_DST_STORE4 ROW_DST_STORE3 \
                       , dst4_data(dst4_data_)
#define ROW_DST_VAR4 ROW_DST_VAR3 \
                     DT * dst4_data;
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vadd(v_src0, v_src1);
    }
    
    
    {    void operator() (const T * src0, const T * src1, u8 * dst) const
    {
        dst[0] = src0[0] == src1[0] ? 255 : 0;
    }
};
    
    
    {
    {        size_t dj = 0u, j = 0u;
        for (; j < roiw16; dj += 64, j += 16)
        {
            internal::prefetch(uv + j);
            internal::prefetch(y1 + j);
            internal::prefetch(y2 + j);
#if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
            CONVERTYUV420TORGB(4, d0, d1, q5, q6)
#else
            convertYUV420.ToRGB(y1 + j, y2 + j, uv + j, dst1 + dj, dst2 + dj);
#endif
        }
        for (; j + 2 <= size.width; j+=2, dj += 8)
        {
            convertYUV420ToRGB<4, 2, 1>(y1+j, y2+j, uv+j, dst1 + dj, dst2 + dj);
        }
    }
#else
    (void)size;
    (void)yBase;
    (void)yStride;
    (void)uvBase;
    (void)uvStride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
        template <typename ElementType>
    /*static*/ ValuePtr Value::CreateSequence(size_t dimension, const std::vector<size_t>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/)
    {
        //TODO: avoid data copy.
        std::vector<std::vector<size_t>> input = { sequenceData };
        return Create<ElementType>(dimension, input, {sequenceStartFlag}, device, readOnly);
    }
    
    
    {private:
    long long m_start;
    long long m_end;
};
    
        // flatten the set of all nodes
    // we collect all root ComputationNodes from the config record, and then expand into all their children by work-list processing
    // TODO: This currently only supports nodes of the same ElemType. We could allow conversion operators.
    for (let& id : config.GetMemberIds())
    {
        let& value = config[id];
        if (value.Is<ComputationNodeBase>())
        {
            const ComputationNodeBasePtr& node = value;
            // top-level defined record members get their top-level name
            bool isSpecialNode = false;
            for (let& nodeGroupName : nodeGroupNames)
                isSpecialNode |= id == nodeGroupName + L'Nodes';
            if (!isSpecialNode)
                node->SetName(id);
            workList.push_back(node);
        }
    }
    
                    for (size_t j = 0; j < secondSize + 1; j++)
                {
                    grid(0, j) = (float)(j * insPen);
                    insMatrix(0, j) = (float)j;
                }
                for (size_t i = 1; i < firstSize + 1; i++)
                {
                    for (size_t j = 1; j < secondSize + 1; j++)
                    {
                        if (firstSeqVec[i - 1] == secondSeqVec[j - 1])
                        {
                            grid(i, j) = grid(i - 1, j - 1);
                            insMatrix(i, j) = insMatrix(i - 1, j - 1);
                            delMatrix(i, j) = delMatrix(i - 1, j - 1);
                            subMatrix(i, j) = subMatrix(i - 1, j - 1);
                        }
                        else
                        {
                            del = grid(i - 1, j) + delPen; //deletion 
                            ins = grid(i, j - 1) + insPen;  //insertion
                            sub = grid(i - 1, j - 1) + subPen; //substitution 
                            if (sub <= del && sub <= ins)
                            {
                                insMatrix(i, j) = insMatrix(i - 1, j - 1);
                                delMatrix(i, j) = delMatrix(i - 1, j - 1);
                                subMatrix(i, j) = subMatrix(i - 1, j - 1) + 1.0f;
                                grid(i, j) = sub;
                            }
                            else if (del < ins)
                            {
                                insMatrix(i, j) = insMatrix(i - 1, j);
                                subMatrix(i, j) = subMatrix(i - 1, j);
                                delMatrix(i, j) = delMatrix(i - 1, j) + 1.0f;
                                grid(i, j) = del;
                            }
                            else
                            {
                                delMatrix(i, j) = delMatrix(i, j - 1);
                                subMatrix(i, j) = subMatrix(i, j - 1);
                                insMatrix(i, j) = insMatrix(i, j - 1) + 1.0f;
                                grid(i, j) = ins;
                            }
                        }
                    }
                }
    
    
    {        bool log = GetEnvironmentPtr() && Environment().traceLevel > 0; // note: this will not log before node is part of network
        if (log)
        {
            fprintf(stderr, '%ls: Initializing Parameter[%s] <- %ls(seed=%d, init dims=[%d x %d], range=%f(%f*%f), onCPU=%s.\n)',
                    NodeDescription().c_str(), string(GetSampleLayout()).c_str(), m_initString.c_str(),
                    (int)randomSeed, (int)fanOut, (int)fanIn, (float)range, (float)(range/initValueScale), (float)(initValueScale), initOnCPUOnly ? 'true' : 'false');
        }
    }
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    class Env;
class Iterator;
class TableCache;
class VersionEdit;
    
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
    
      void Crc32c(ThreadState* thread) {
    // Checksum about 500MB of data total
    const int size = 4096;
    const char* label = '(4K per op)';
    std::string data(size, 'x');
    int64_t bytes = 0;
    uint32_t crc = 0;
    while (bytes < 500 * 1048576) {
      crc = crc32c::Value(data.data(), size);
      thread->stats.FinishedSingleOp();
      bytes += size;
    }
    // Print so result is not dead
    fprintf(stderr, '... crc=0x%x\r', static_cast<unsigned int>(crc));
    }
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
Iterator* NewDBIterator(DBImpl* db,
                        const Comparator* user_key_comparator,
                        Iterator* internal_iter,
                        SequenceNumber sequence,
                        uint32_t seed);
    
    void InternalKeyComparator::FindShortSuccessor(std::string* key) const {
  Slice user_key = ExtractUserKey(*key);
  std::string tmp(user_key.data(), user_key.size());
  user_comparator_->FindShortSuccessor(&tmp);
  if (tmp.size() < user_key.size() &&
      user_comparator_->Compare(user_key, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*key, tmp) < 0);
    key->swap(tmp);
  }
}
    
    
    {  delete iter;
  delete table;
  delete file;
  return Status::OK();
}
    
    std::string TableFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'ldb');
}
    
      fname = TableFileName('bar', 200);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(200, number);
  ASSERT_EQ(kTableFile, type);
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
        // Skip physical record that started before initial_offset_
    if (end_of_buffer_offset_ - buffer_.size() - kHeaderSize - length <
        initial_offset_) {
      result->clear();
      return kBadRecord;
    }
    
      // Read the next record into *record.  Returns true if read
  // successfully, false if we hit end of the input.  May use
  // '*scratch' as temporary storage.  The contents filled in *record
  // will only be valid until the next mutating operation on this
  // reader or the next mutation to *scratch.
  bool ReadRecord(Slice* record, std::string* scratch);
    
    
    {    virtual Status Close() { return Status::OK(); }
    virtual Status Flush() { return Status::OK(); }
    virtual Status Sync() { return Status::OK(); }
    virtual Status Append(const Slice& slice) {
      contents_.append(slice.data(), slice.size());
      return Status::OK();
    }
  };
    
      // Return an iterator that yields the contents of the memtable.
  //
  // The caller must ensure that the underlying MemTable remains live
  // while the returned iterator is live.  The keys returned by this
  // iterator are internal keys encoded by AppendInternalKey in the
  // db/format.{h,cc} module.
  Iterator* NewIterator();
    
      // Make a bunch of uncompacted log files.
  uint64_t old_log = FirstLogFile();
  MakeLogFile(old_log+1, 1000, 'hello', 'world');
  MakeLogFile(old_log+2, 1001, 'hi', 'there');
  MakeLogFile(old_log+3, 1002, 'foo', 'bar2');
    
    template<typename Key, class Comparator>
inline void SkipList<Key,Comparator>::Iterator::Seek(const Key& target) {
  node_ = list_->FindGreaterOrEqual(target, nullptr);
}
    
    static void ConcurrentReader(void* arg) {
  TestState* state = reinterpret_cast<TestState*>(arg);
  Random rnd(state->seed_);
  int64_t reads = 0;
  state->Change(TestState::RUNNING);
  while (!state->quit_flag_.Acquire_Load()) {
    state->t_.ReadStep(&rnd);
    ++reads;
  }
  state->Change(TestState::DONE);
}
    
        // Create Logical Device (with 1 queue)
    {
        int device_extension_count = 1;
        const char* device_extensions[] = { 'VK_KHR_swapchain' };
        const float queue_priority[] = { 1.0f };
        VkDeviceQueueCreateInfo queue_info[1] = {};
        queue_info[0].sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
        queue_info[0].queueFamilyIndex = g_QueueFamily;
        queue_info[0].queueCount = 1;
        queue_info[0].pQueuePriorities = queue_priority;
        VkDeviceCreateInfo create_info = {};
        create_info.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
        create_info.queueCreateInfoCount = sizeof(queue_info) / sizeof(queue_info[0]);
        create_info.pQueueCreateInfos = queue_info;
        create_info.enabledExtensionCount = device_extension_count;
        create_info.ppEnabledExtensionNames = device_extensions;
        err = vkCreateDevice(g_PhysicalDevice, &create_info, g_Allocator, &g_Device);
        check_vk_result(err);
        vkGetDeviceQueue(g_Device, g_QueueFamily, 0, &g_Queue);
    }
    
        // Rendering
    ImGui::Render();
    ImGuiIO& io = ImGui::GetIO();
    glViewport(0, 0, (GLsizei)io.DisplaySize.x, (GLsizei)io.DisplaySize.y);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound, but prefer using the GL3+ code.
    ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
    
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
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // We are using the OpenGL fixed pipeline to make the example code simpler to read!
    // Setup render state: alpha-blending enabled, no face culling, no depth testing, scissor enabled, vertex/texcoord/color pointers, polygon fill.
    GLint last_texture; glGetIntegerv(GL_TEXTURE_BINDING_2D, &last_texture);
    GLint last_polygon_mode[2]; glGetIntegerv(GL_POLYGON_MODE, last_polygon_mode);
    GLint last_viewport[4]; glGetIntegerv(GL_VIEWPORT, last_viewport);
    GLint last_scissor_box[4]; glGetIntegerv(GL_SCISSOR_BOX, last_scissor_box); 
    glPushAttrib(GL_ENABLE_BIT | GL_COLOR_BUFFER_BIT | GL_TRANSFORM_BIT);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_CULL_FACE);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_LIGHTING);
    glDisable(GL_COLOR_MATERIAL);
    glEnable(GL_SCISSOR_TEST);
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    glEnable(GL_TEXTURE_2D);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound
    
        void FreeTypeFont::SetPixelHeight(int pixel_height) 
    {
        // I'm not sure how to deal with font sizes properly.
        // As far as I understand, currently ImGui assumes that the 'pixel_height' is a maximum height of an any given glyph,
        // i.e. it's the sum of font's ascender and descender. Seems strange to me.
        FT_Size_RequestRec req;
        req.type = FT_SIZE_REQUEST_TYPE_REAL_DIM;
        req.width = 0;
        req.height = (uint32_t)pixel_height * 64;
        req.horiResolution = 0;
        req.vertResolution = 0;
        FT_Request_Size(FreetypeFace, &req);
    }
    
    // Data
static ALLEGRO_DISPLAY*         g_Display = NULL;
static ALLEGRO_BITMAP*          g_Texture = NULL;
static double                   g_Time = 0.0;
static ALLEGRO_MOUSE_CURSOR*    g_MouseCursorInvisible = NULL;
static ALLEGRO_VERTEX_DECL*     g_VertexDecl = NULL;
static char*                    g_ClipboardTextData = NULL;
    
      /**
   * @brief Start the ESD CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Start() override;
    
     private:
  std::unique_ptr<std::thread> thread_;
  bool is_running_ = false;
  // CanClient, MessageManager pointer life is managed by outer program
  CanClient *can_client_ = nullptr;
  MessageManager<SensorType> *pt_manager_ = nullptr;
  bool enable_log_ = false;
  bool is_init_ = false;
    
    #include 'gtest/gtest.h'
    
    
    {  EXPECT_TRUE(value.is_bit_1(0));
  EXPECT_TRUE(value.is_bit_1(1));
  EXPECT_FALSE(value.is_bit_1(3));
  EXPECT_TRUE(value.is_bit_1(6));
  EXPECT_FALSE(value.is_bit_1(7));
}
    
    #endif  // MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_

    
    // Canbus gflags
DEFINE_double(sensor_freq, 100,
              'Sensor feedback timer frequency -- 0 means event trigger.');
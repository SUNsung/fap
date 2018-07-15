
        
          LOG(INFO) << 'Writing Training data';
  for (int fileid = 0; fileid < kCIFARTrainBatches; ++fileid) {
    // Open files
    LOG(INFO) << 'Training Batch ' << fileid + 1;
    string batchFileName = input_folder + '/data_batch_'
      + caffe::format_int(fileid+1) + '.bin';
    std::ifstream data_file(batchFileName.c_str(),
        std::ios::in | std::ios::binary);
    CHECK(data_file) << 'Unable to open train file #' << fileid + 1;
    for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
      read_image(&data_file, &label, str_buffer);
      datum.set_label(label);
      datum.set_data(str_buffer, kCIFARImageNBytes);
      string out;
      CHECK(datum.SerializeToString(&out));
      txn->Put(caffe::format_int(fileid * kCIFARBatchSize + itemid, 5), out);
    }
  }
  txn->Commit();
  train_db->Close();
    
    #include <stdint.h>
#include <sys/stat.h>
    
    int main(int argc, char** argv) {
  if (argc != 4) {
    printf('This script converts the MNIST dataset to the leveldb format used\n'
           'by caffe to train a siamese network.\n'
           'Usage:\n'
           '    convert_mnist_data input_image_file input_label_file '
           'output_db_file\n'
           'The MNIST dataset could be downloaded at\n'
           '    http://yann.lecun.com/exdb/mnist/\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3]);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB; compile with USE_LEVELDB.';
}
#endif  // USE_LEVELDB

    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      virtual inline const char* type() const { return 'Convolution'; }
    
    namespace caffe {
    }
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return true; }
  virtual void compute_output_shape();
};
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {
}  // namespace caffe
    
      /**
   * Invoked when all data passed to bidirectional_stream_write() is
   * sent. To continue writing, call bidirectional_stream_write().
   */
  void (*on_write_completed)(bidirectional_stream* stream, const char* data);
    
    std::string GetDbFileContent(int argc, char** argv) {
  std::string db_path;
  std::string arg_str('--db_path');
  if (argc > 1) {
    std::string argv_1 = argv[1];
    size_t start_position = argv_1.find(arg_str);
    if (start_position != std::string::npos) {
      start_position += arg_str.size();
      if (argv_1[start_position] == ' ' ||
          argv_1[start_position] == '=') {
        db_path = argv_1.substr(start_position + 1);
      }
    }
  } else {
    db_path = 'route_guide_db.json';
  }
  std::ifstream db_file(db_path);
  if (!db_file.is_open()) {
    std::cout << 'Failed to open ' << db_path << std::endl;
    return '';
  }
  std::stringstream db;
  db << db_file.rdbuf();
  return db.str();
}
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list);
    
    #include 'test/cpp/interop/server_helper.h'
#include 'test/cpp/util/test_config.h'
    
    #endif

    
    Timer::~Timer() {
  if (!m_name.empty()) {
    report();
  }
}
    
      /**
   * Get results of a task. This is blocking until task is finished or times
   * out. The status code is set to -1 in the event of a timeout.
   */
  static String TaskResult(const Resource& task,
                           Array &headers,
                           int &code,
                           int64_t timeout_ms);
    
        if (b->fallthrough != NoBlockId) {
      set_expected_depth(blockInfo[b->fallthrough]);
      if (std::next(blockIt) == endBlockIt ||
          blockIt[1]->id != b->fallthrough) {
        if (b->fallthroughNS) {
          emit_inst(bc::JmpNS { b->fallthrough });
        } else {
          emit_inst(bc::Jmp { b->fallthrough });
        }
    }
    }
    
    
    {  // We may have inferred a TSStr or TSArr with a value here, but at
  // runtime it will not be static.
  resultTy = loosen_staticness(*resultTy);
  return *resultTy;
}
    
      // find root nodes
  type_scan::Scanner scanner;
  iterateRoots([&](const void* h, size_t size, type_scan::Index tyindex) {
    // it's important that we actually scan each root node before
    // returning, since at least one will be the C++ stack, and some
    // nodes will only exist for the duration of the call to this lambda,
    // for example EphemeralPtrWrapper<T>.
    addRootNode(g, blocks, scanner, h, size, tyindex);
  });
    
    
    {        UINT64 fenceValue = g_fenceLastSignaledValue + 1;
        g_pd3dCommandQueue->Signal(g_fence, fenceValue);
        g_fenceLastSignaledValue = fenceValue;
        frameCtxt->FenceValue = fenceValue;
    }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
        // Copy and convert all vertices into a single contiguous buffer, convert colors to DX9 default format.
    // FIXME-OPT: This is a waste of resource, the ideal is to use imconfig.h and
    //  1) to avoid repacking colors:   #define IMGUI_USE_BGRA_PACKED_COLOR
    //  2) to avoid repacking vertices: #define IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT struct ImDrawVert { ImVec2 pos; float z; ImU32 col; ImVec2 uv; }
    CUSTOMVERTEX* vtx_dst;
    ImDrawIdx* idx_dst;
    if (g_pVB->Lock(0, (UINT)(draw_data->TotalVtxCount * sizeof(CUSTOMVERTEX)), (void**)&vtx_dst, D3DLOCK_DISCARD) < 0)
        return;
    if (g_pIB->Lock(0, (UINT)(draw_data->TotalIdxCount * sizeof(ImDrawIdx)), (void**)&idx_dst, D3DLOCK_DISCARD) < 0)
        return;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawVert* vtx_src = cmd_list->VtxBuffer.Data;
        for (int i = 0; i < cmd_list->VtxBuffer.Size; i++)
        {
            vtx_dst->pos[0] = vtx_src->pos.x;
            vtx_dst->pos[1] = vtx_src->pos.y;
            vtx_dst->pos[2] = 0.0f;
            vtx_dst->col = (vtx_src->col & 0xFF00FF00) | ((vtx_src->col & 0xFF0000) >> 16) | ((vtx_src->col & 0xFF) << 16);     // RGBA --> ARGB for DirectX9
            vtx_dst->uv[0] = vtx_src->uv.x;
            vtx_dst->uv[1] = vtx_src->uv.y;
            vtx_dst++;
            vtx_src++;
        }
        memcpy(idx_dst, cmd_list->IdxBuffer.Data, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
        idx_dst += cmd_list->IdxBuffer.Size;
    }
    g_pVB->Unlock();
    g_pIB->Unlock();
    g_pd3dDevice->SetStreamSource(0, g_pVB, 0, sizeof(CUSTOMVERTEX));
    g_pd3dDevice->SetIndices(g_pIB);
    g_pd3dDevice->SetFVF(D3DFVF_CUSTOMVERTEX);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        VkPipelineColorBlendStateCreateInfo blend_info = {};
    blend_info.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    blend_info.attachmentCount = 1;
    blend_info.pAttachments = color_attachment;
    
        // C++ mappings of API methods
    static Persistent<v8::Function> constructor;
    static Handle<Value> Open(const Arguments& args);
    static Handle<Value> New(const Arguments& args);
    static Handle<Value> Get(const Arguments& args);
    static Handle<Value> Put(const Arguments& args);
    static Handle<Value> Delete(const Arguments& args);
    static Handle<Value> Dump(const Arguments& args);
    static Handle<Value> WriteBatch(const Arguments& args);
    static Handle<Value> CreateColumnFamily(const Arguments& args);
    static Handle<Value> CompactRange(const Arguments& args);
    static Handle<Value> Close(const Arguments& args);
    
    
    {  /// The backend rocksdb database.
  /// Map : key --> list
  ///       where a list is a sequence of elements
  ///       and an element is a 4-byte integer (n), followed by n bytes of data
  std::unique_ptr<DB> db_;
};
    
      // Extend record types with the following special values
  enum {
    kEof = kMaxRecordType + 1,
    // Returned whenever we find an invalid physical record.
    // Currently there are three situations in which this happens:
    // * The record has an invalid CRC (ReadPhysicalRecord reports a drop)
    // * The record is a 0-length record (No drop is reported)
    // * The record is below constructor's initial_offset (No drop is reported)
    kBadRecord = kMaxRecordType + 2,
    // Returned when we fail to read a valid header.
    kBadHeader = kMaxRecordType + 3,
    // Returned when we read an old record from a previous user of the log.
    kOldRecord = kMaxRecordType + 4,
    // Returned when we get a bad record length
    kBadRecordLen = kMaxRecordType + 5,
    // Returned when we get a bad record checksum
    kBadRecordChecksum = kMaxRecordType + 6,
  };
    
      // 5. create db_pool_ioctx
  ret = _rados.ioctx_create(_db_pool_name.c_str(), _db_pool_ioctx);
  if (ret < 0) {
    std::cerr << 'couldn't set up ioctx! error ' << ret << std::endl;
    ret = EXIT_FAILURE;
    goto out;
  }
    
    void SyncPoint::ClearAllCallBacks() {
  impl_->ClearAllCallBacks();
}
    
      // Insert key into the collection. (The caller will pack key and value into a
  // single buffer and pass that in as the parameter to Insert).
  // REQUIRES: nothing that compares equal to key is currently in the
  // collection, and no concurrent modifications to the table in progress
  virtual void Insert(KeyHandle handle) = 0;
    
    class CompactionFilterFactoryJniCallback : public JniCallback, public CompactionFilterFactory {
 public:
    CompactionFilterFactoryJniCallback(
        JNIEnv* env, jobject jcompaction_filter_factory);
    virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context);
    virtual const char* Name() const;
    }
    
    #endif  // JAVA_ROCKSJNI_LOGGERJNICALLBACK_H_

    
      void ReadUnlock() { ReleaseSRWLockShared(&srwLock_); }
    
    // Analyze the performance of a db
class Statistics {
 public:
  virtual ~Statistics() {}
    }
    
    void* YGNodeGetContext(YGNodeRef node);
void YGNodeSetContext(YGNodeRef node, void* context);
YGMeasureFunc YGNodeGetMeasureFunc(YGNodeRef node);
void YGNodeSetMeasureFunc(YGNodeRef node, YGMeasureFunc measureFunc);
YGBaselineFunc YGNodeGetBaselineFunc(YGNodeRef node);
void YGNodeSetBaselineFunc(YGNodeRef node, YGBaselineFunc baselineFunc);
YGDirtiedFunc YGNodeGetDirtiedFunc(YGNodeRef node);
void YGNodeSetDirtiedFunc(YGNodeRef node, YGDirtiedFunc dirtiedFunc);
YGPrintFunc YGNodeGetPrintFunc(YGNodeRef node);
void YGNodeSetPrintFunc(YGNodeRef node, YGPrintFunc printFunc);
bool YGNodeGetHasNewLayout(YGNodeRef node);
void YGNodeSetHasNewLayout(YGNodeRef node, bool hasNewLayout);
YGNodeType YGNodeGetNodeType(YGNodeRef node);
void YGNodeSetNodeType(YGNodeRef node, YGNodeType nodeType);
bool YGNodeIsDirty(YGNodeRef node);
bool YGNodeLayoutGetDidUseLegacyFlag(const YGNodeRef node);
    
      YGNodeCalculateLayout(root, 200, 100, YGDirectionLTR);
    
        Config(Config const &) = delete;
    
    #pragma once
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    namespace detail {
template <typename T, typename jprim>
struct JPrimitive : JavaClass<T> {
  using typename JavaClass<T>::javaobject;
  using JavaClass<T>::javaClassStatic;
  static local_ref<javaobject> valueOf(jprim val) {
    static auto cls = javaClassStatic();
    static auto method =
      cls->template getStaticMethod<javaobject(jprim)>('valueOf');
    return method(cls, val);
  }
  jprim value() const {
    static auto method =
      javaClassStatic()->template getMethod<jprim()>(T::kValueMethod);
    return method(this->self());
  }
};
    }
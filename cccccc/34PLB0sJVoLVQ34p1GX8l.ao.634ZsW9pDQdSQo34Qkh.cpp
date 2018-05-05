
        
        // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
    
    {
    {}  // namespace port
}  // namespace tensorflow
    
      Status ReadLocked(string* key, string* value, bool* produced,
                    bool* at_end) override {
    Status status = input_buffer_->ReadLine(value);
    ++line_number_;
    if (status.ok()) {
      *key = strings::StrCat(current_work(), ':', line_number_);
      *produced = true;
      return status;
    }
    if (errors::IsOutOfRange(status)) {  // End of file, advance to the next.
      *at_end = true;
      return Status::OK();
    } else {  // Some other reading error
      return status;
    }
  }
    
    
    {
    {    SetReaderFactory([this, compression_type, env]() {
      return new TFRecordReader(name(), compression_type, env);
    });
  }
};
    
      {
    // NOTE(mrry): The gRPC channel doesn't expose the target, so we
    // can't compare it for equality.
    auto a_1_1 = cc->FindWorkerChannel('/job:mnist/replica:0/task:0');
    auto a_1_2 = cc->FindWorkerChannel('/job:mnist/replica:0/task:0');
    }
    
    class RemoveDeviceTest : public ::testing::Test {
 protected:
  void TestRemoveDevice() {
    GraphDef graph_def;
    }
    }
    
    namespace tensorflow {
    }
    
    // static
void App::CloseAllWindows(bool force, bool quit) {
  std::vector<Shell*> windows = Shell::windows();
    }
    
    
namespace nwapi {
    }
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
      class ClipboardWriter {
  public:
    ClipboardWriter() {
      scw_.reset(new ui::ScopedClipboardWriter(ui::CLIPBOARD_TYPE_COPY_PASTE));
    }
    }
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    bool NwObjCallObjectMethodFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
    
    {
    {  return readFile(value, pack);
}
}

    
    
    {
    { private:
  friend class TLSConfigTests;
};
}

    
    std::string platformStrerr(int errnum) {
  return ::strerror(errnum);
}
    
    TEST_F(PermissionsTests, test_functional_drop) {
  if (getuid() != 0) {
    LOG(WARNING) << 'Not root, skipping (explicit) unprivileged testing';
    return;
  }
    }
    
    
    {  EXPECT_EQ(process->pid(), pid);
}
    
    class TestTablePlugin : public TablePlugin {
 public:
  void testSetCache(size_t step, size_t interval) {
    QueryData r;
    QueryContext ctx;
    ctx.useCache(true);
    setCache(step, interval, ctx, r);
  }
    }
    
    
    {
    {  EXPECT_EQ(expected, toAsciiTimeUTC(&result));
}
}

    
    std::string platformStrerr(int errnum) {
  std::vector<char> buffer;
  buffer.assign(MAX_BUFFER_SIZE, '\0');
    }
    
    
    {template<typename IndexType>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
    
    {  delete metric;
  metric = xgboost::Metric::Create('error@0.1');
  ASSERT_STREQ(metric->Name(), 'error@0.1');
  EXPECT_STREQ(metric->Name(), 'error@0.1');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.2f, 0.1f, 0.2f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromDataIter
 * Signature: (Ljava/util/Iterator;Ljava/lang/String;[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromDataIter
  (JNIEnv *jenv, jclass jcls, jobject jiter, jstring jcache_info, jlongArray jout) {
  DMatrixHandle result;
  const char* cache_info = nullptr;
  if (jcache_info != nullptr) {
    cache_info = jenv->GetStringUTFChars(jcache_info, 0);
  }
  int ret = XGDMatrixCreateFromDataIter(
      jiter, XGBoost4jCallbackDataIterNext, cache_info, &result);
  if (cache_info) {
    jenv->ReleaseStringUTFChars(jcache_info, cache_info);
  }
  setHandle(jenv, jout, result);
  return ret;
}
    
    namespace xgboost {
/*!
 * \brief interface of linear updater
 */
class LinearUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~LinearUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(
      const std::vector<std::pair<std::string, std::string> >& args) = 0;
    }
    }
    
    #include 'debug_hud.h'
#include 'imgui.h'
    
    // Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data)
{
    // Handle cases of screen coordinates != from framebuffer coordinates (e.g. retina displays)
    ImGuiIO& io = ImGui::GetIO();
    draw_data->ScaleClipRects(io.DisplayFramebufferScale);
    }
    
    IMGUI_API bool        ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_API void        ImGui_Marmalade_Shutdown();
IMGUI_API void        ImGui_Marmalade_NewFrame();
IMGUI_API void        ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    static void ImGui_ImplDX10_CreateFontsTexture()
{
    ImGuiIO& io = ImGui::GetIO();
    }
    
            // Rendering
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui::Render();
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    
    Handle<Value> DBWrapper::Open(const Arguments& args) {
  HandleScope scope;
  DBWrapper* db_wrapper = ObjectWrap::Unwrap<DBWrapper>(args.This());
    }
    
    This pointer must be provided as 'void* state' parameter for XXH32_update().
XXH32_update() can be called as many times as necessary.
The user must provide a valid (allocated) input.
The function returns an error code, with 0 meaning OK, and any other value meaning there is an error.
Note that 'len' is type 'int', which means it is limited to 2^31-1.
If your data is larger, it is recommended to chunk your data into blocks
of size for example 2^30 (1GB) to avoid any 'int' overflow issue.
    
    struct BlockContents;
class Comparator;
class BlockIter;
class BlockPrefixIndex;
    
    namespace rocksdb {
JniCallback::JniCallback(JNIEnv* env, jobject jcallback_obj) {
  // Note: jcallback_obj may be accessed by multiple threads,
  // so we ref the jvm not the env
  const jint rs = env->GetJavaVM(&m_jvm);
  if(rs != JNI_OK) {
    // exception thrown
    return;
  }
    }
    }
    
    #include 'rocksjni/statisticsjni.h'
    
    // Read the key of a record from a write batch.
// if this record represent the default column family then cf_record
// must be passed as false, otherwise it must be passed as true.
extern bool ReadKeyFromWriteBatchEntry(Slice* input, Slice* key,
                                       bool cf_record);
    
    #include 'monitoring/perf_context_imp.h'
#include 'monitoring/statistics.h'
#include 'rocksdb/env.h'
#include 'table/block.h'
#include 'table/block_based_table_reader.h'
#include 'table/persistent_cache_helper.h'
#include 'table/format.h'
#include 'util/coding.h'
#include 'util/compression.h'
#include 'util/crc32c.h'
#include 'util/file_reader_writer.h'
#include 'util/logging.h'
#include 'util/stop_watch.h'
#include 'util/string_util.h'
#include 'util/xxhash.h'
    
    void SyncPoint::ClearAllCallBacks() {
  impl_->ClearAllCallBacks();
}
    
    void TestKillRandom(std::string kill_point, int odds,
                    const std::string& srcfile, int srcline) {
  for (auto& p : rocksdb_kill_prefix_blacklist) {
    if (kill_point.substr(0, p.length()) == p) {
      return;
    }
  }
    }
    
      static Key MakeKey(uint64_t k, uint64_t g) {
    assert(sizeof(Key) == sizeof(uint64_t));
    assert(k <= K);  // We sometimes pass K to seek to the end of the skiplist
    assert(g <= 0xffffffffu);
    return ((k << 40) | (g << 8) | (HashNumbers(k, g) & 0xff));
  }
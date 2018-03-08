
        
        
    {  base::ListValue result;
  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method_Sync(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get()),
      &result));
  return converter->ToV8Value(&result, isolate->GetCurrentContext());
}
    
    bool GetLocalePakFilePath(const std::string& locale, base::FilePath& output);
base::FilePath GetFrameworksPath();
    
    #include 'content/nw/src/api/clipboard/clipboard.h'
    
      base::RunLoop* run_loop_;
    
    
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
    
    
void MenuItem::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (enable_shortcut && GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    gtk_widget_add_accelerator(
      menu_item_,
      'activate',
      gtk_accel_group,
      keyval,
      modifiers_mask,
      GTK_ACCEL_VISIBLE);
  }
  if (submenu_ != NULL){
    submenu_->UpdateKeys(gtk_accel_group);
  }
  return;
}
    
    
    {  result.xcoord = op1.xcoord * scale;
  result.ycoord = op1.ycoord * scale;
  return result;
}
    
    // This is equivalent to returning the Principal Component in PCA, or the
// eigenvector corresponding to the largest eigenvalue in the covariance
// matrix.  However, atan2 is much simpler! The one reference I found that
// uses this formula is http://web.mit.edu/18.06/www/Essays/tlsfit.pdf but
// that is still a much more complex derivation. It seems Pearson had already
// found this simple solution in 1901.
// http://books.google.com/books?id=WXwvAQAAIAAJ&pg=PA559
FCOORD LLSQ::vector_fit() const {
  double x_var = x_variance();
  double y_var = y_variance();
  double covar = covariance();
  double theta = 0.5 * atan2(2.0 * covar, x_var - y_var);
  FCOORD result(cos(theta), sin(theta));
  return result;
}

    
      // Transforms the given coords one step forward to normalized space, without
  // using any block rotation or predecessor.
  void LocalNormTransform(const TPOINT& pt, TPOINT* transformed) const;
  void LocalNormTransform(const FCOORD& pt, FCOORD* transformed) const;
  // Transforms the given coords forward to normalized space using the
  // full transformation sequence defined by the block rotation, the
  // predecessors, deepest first, and finally this. If first_norm is not NULL,
  // then the first and deepest transformation used is first_norm, ending
  // with this, and the block rotation will not be applied.
  void NormTransform(const DENORM* first_norm, const TPOINT& pt,
                     TPOINT* transformed) const;
  void NormTransform(const DENORM* first_norm, const FCOORD& pt,
                     FCOORD* transformed) const;
  // Transforms the given coords one step back to source space, without
  // using to any block rotation or predecessor.
  void LocalDenormTransform(const TPOINT& pt, TPOINT* original) const;
  void LocalDenormTransform(const FCOORD& pt, FCOORD* original) const;
  // Transforms the given coords all the way back to source image space using
  // the full transformation sequence defined by this and its predecessors
  // recursively, shallowest first, and finally any block re_rotation.
  // If last_denorm is not NULL, then the last transformation used will
  // be last_denorm, and the block re_rotation will never be executed.
  void DenormTransform(const DENORM* last_denorm, const TPOINT& pt,
                       TPOINT* original) const;
  void DenormTransform(const DENORM* last_denorm, const FCOORD& pt,
                       FCOORD* original) const;
    
    int decreasing_top_order(const void *row1, const void *row2);
    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
      assert(firstCodePoint >= 0);  // Wrapper fixes up negative starting positions.
  assert(numDesiredCodePoints > 0); // Wrapper fixes up negative/zero length.
  if (str.size() <= 0 ||
      str.size() > INT_MAX ||
      firstCodePoint >= srcLenBytes) {
    return empty_string();
  }
    
    template<class SerDe>
void RepoAuthType::Array::serialize(SerDe& sd) const {
  sd(m_tag)
    (m_emptiness)
    (m_id)
    (m_size)
    ;
    }
    
    void HHVM_FUNCTION(xhprof_sample_enable) {
  if (RuntimeOption::EnableHotProfiler) {
    s_profiler_factory->start(ProfilerKind::Sample, 0);
  } else {
    raise_warning('The runtime option Stats.EnableHotProfiler must be on to '
                  'use xhprof.');
  }
}
    
      /**
   * Get asynchronous results of a task. Returns a tuple of 3 items:
   * - already flushed strings
   * - a WaitHandle representing the future results (or null if finished)
   * - the status code
   */
  static Array AsyncTaskResult(const Resource& task);
    
    struct RepoAuthType;
struct StringData;
    
    /*
 * A Vunit contains all the assets that make up a vasm compilation unit.  It is
 * responsible for allocating new blocks, Vregs, and tuples.
 */
struct Vunit {
  /*
   * Create a new block in the given area and weight, returning its id.
   */
  Vlabel makeBlock(AreaIndex area, uint64_t weight);
    }
    
    static unsigned long php_turkish_tolower(unsigned long code, long l, long r,
                                         int field) {
  if (code == 0x0049L) {
    return 0x0131L;
  }
  return case_lookup(code, l, r, field);
}
    
      std::unique_ptr<char[]> grbuf(new char[grbuflen]);
  struct group gr;
  struct group *retgrptr = NULL;
    
    struct IRGS;
    
        // ParseName - Parse the name and find positions of the wildcard matches
    // name - name to parse
    // firstStart - [out] starting position of the first section
    // firstCount - [out] length of the first section
    // secondStart - [out] starting position of the second section
    // secondCount - [out] length of the second section
    // returns: NetNdl structure that matches the prefix name
    // Notes: This functions handles the following patterns:
    // (prefix, prefix*, prefix.*, prefix.first, first, prefix.first*, first*, first*second, prefix.first*second)
    // prefix names must not be identical to a 'first' name or it will be distinguished as a prefix
    NetNdl<ElemType>* ParseName(std::string name, size_t& firstStart, size_t& firstCount, size_t& secondStart, size_t& secondCount)
    {
        size_t firstDot = name.find_first_of('.*');
        NetNdl<ElemType>* netNdl = m_netNdlDefault;
    }
    
        void getlattices(const std::wstring& key, std::shared_ptr<const latticepair>& L, size_t expectedframes) const
    {
        std::shared_ptr<latticepair> LP(new latticepair);
        denlattices.getlattice(key, LP->second, expectedframes); // this loads the lattice from disk, using the existing L.second object
        L = LP;
    }
    
    TEST(InlinedVectorTest, CreateAndIterate) {
  const int kNumElements = 9;
  InlinedVector<int, 2> v;
  for (int i = 0; i < kNumElements; ++i) {
    v.push_back(i);
  }
  EXPECT_EQ(static_cast<size_t>(kNumElements), v.size());
  for (int i = 0; i < kNumElements; ++i) {
    EXPECT_EQ(i, v[i]);
  }
}
    
    std::unique_ptr<ScenarioResult> RunScenario(
    const grpc::testing::ClientConfig& client_config, size_t num_clients,
    const grpc::testing::ServerConfig& server_config, size_t num_servers,
    int warmup_seconds, int benchmark_seconds, int spawn_local_worker_count,
    const grpc::string& qps_server_target_override,
    const grpc::string& credential_type, bool run_inproc);
    
    // Logic and data behind the server's behavior.
class GreeterServiceImpl final : public Greeter::Service {
  Status SayHello(ServerContext* context, const HelloRequest* request,
                  HelloReply* reply) override {
    std::string prefix('Hello ');
    reply->set_message(prefix + request->name());
    return Status::OK;
  }
};
    
        system_clock::time_point start_time = system_clock::now();
    while (reader->Read(&point)) {
      point_count++;
      if (!GetFeatureName(point, feature_list_).empty()) {
        feature_count++;
      }
      if (point_count != 1) {
        distance += GetDistance(previous, point);
      }
      previous = point;
    }
    system_clock::time_point end_time = system_clock::now();
    summary->set_point_count(point_count);
    summary->set_feature_count(feature_count);
    summary->set_distance(static_cast<long>(distance));
    auto secs = std::chrono::duration_cast<std::chrono::seconds>(
        end_time - start_time);
    summary->set_elapsed_time(secs.count());
    
    
    {}  // namespace grpc_python_generator
    
    AuthPropertyIterator SecureAuthContext::begin() const {
  if (ctx_) {
    grpc_auth_property_iterator iter =
        grpc_auth_context_property_iterator(ctx_);
    const grpc_auth_property* property =
        grpc_auth_property_iterator_next(&iter);
    return AuthPropertyIterator(property, &iter);
  } else {
    return end();
  }
}
    
                ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our windows open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
        // Show the window
    ShowWindow(hwnd, SW_SHOWDEFAULT);
    UpdateWindow(hwnd);
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
        // Create the Image:
    {
        VkImageCreateInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
        info.imageType = VK_IMAGE_TYPE_2D;
        info.format = VK_FORMAT_R8G8B8A8_UNORM;
        info.extent.width = width;
        info.extent.height = height;
        info.extent.depth = 1;
        info.mipLevels = 1;
        info.arrayLayers = 1;
        info.samples = VK_SAMPLE_COUNT_1_BIT;
        info.tiling = VK_IMAGE_TILING_OPTIMAL;
        info.usage = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
        info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
        info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        err = vkCreateImage(g_Device, &info, g_Allocator, &g_FontImage);
        ImGui_ImplGlfwVulkan_VkResult(err);
        VkMemoryRequirements req;
        vkGetImageMemoryRequirements(g_Device, g_FontImage, &req);
        VkMemoryAllocateInfo alloc_info = {};
        alloc_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
        alloc_info.allocationSize = req.size;
        alloc_info.memoryTypeIndex = ImGui_ImplGlfwVulkan_MemoryType(VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, req.memoryTypeBits);
        err = vkAllocateMemory(g_Device, &alloc_info, g_Allocator, &g_FontMemory);
        ImGui_ImplGlfwVulkan_VkResult(err);
        err = vkBindImageMemory(g_Device, g_FontImage, g_FontMemory, 0);
        ImGui_ImplGlfwVulkan_VkResult(err);
    }
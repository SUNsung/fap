
        
         protected:
  bool RunAsync() override;
    
    namespace caffe2 {
namespace {
REGISTER_CPU_OPERATOR(
    FindDuplicateElements,
    FindDuplicateElementsOp<CPUContext>);
    }
    }
    
    ```
    
    /**
 * evaluate a single workload
 */
void EvaluateWorkload(const Workload& wl, std::vector<double>* data) {
  double tmp = 0;
  for (int i : wl.reads) tmp += data->at(i);
  data->at(wl.write) = tmp / (wl.reads.size() + 1);
  if (wl.time > 0) {
    std::this_thread::sleep_for(std::chrono::microseconds(wl.time));
  }
}
    
    bool SupportMKLDNNFC(const NDArray& input) {
  int ndim = input.shape().ndim();
  return input.dtype() == mshadow::kFloat32 && (ndim >= 1 && ndim <= 4) &&
         input.storage_type() == kDefaultStorage;
}
    
    
Both ``weight`` and ``bias`` are learnable parameters.
    
        const index_t group_index = c / (2 * kernel_h * kernel_w);
    const index_t group_col_step = channel_per_group * width_col * height_col;
    const index_t group_im_step = channel_per_group / kernel_h / kernel_w * height * width;
    const index_t group_offset_step = 2 * kernel_h * kernel_w * height_col * width_col;
    const index_t col_step = kernel_h * kernel_w;
    const DType* data_col_ptr = data_col + group_index * group_col_step;
    const DType* data_im_ptr = data_im + group_index * group_im_step;
    const DType* data_offset_ptr = data_offset + group_index * group_offset_step;
    
      for (int i = T - 1; i >= 0; --i) {
    int t = bid ? T - 1 - i : i;
    int tnext = bid ? t + 1 : t - 1;
    const Tensor<cpu, 2, DType>& dhnext = i ? dh : dhx;
    const Tensor<cpu, 2, DType>& dcnext = i ? dc : dcx;
    const Tensor<cpu, 2, DType>& hnext = i ? htmp : hx;
    const Tensor<cpu, 2, DType>& cnext = i ? c[i - 1] : cx;
    #pragma omp parallel for num_threads(omp_threads)
    for (int jk = 0; jk < cell_size; ++jk) {
      int j = jk / H;
      int k = jk % H;
      DType tc = tanh(c[i][j][k]);
      DType it = ifgo[i][j][k][0];
      DType ft = ifgo[i][j][k][1];
      DType gt = ifgo[i][j][k][2];
      DType ot = ifgo[i][j][k][3];
      dh[j][k] += dy[t][j][k + offset];
      dc[j][k] += dh[j][k] * ot * (1 - tc * tc);
      difgo[t][j][0][k] = dc[j][k] * gt * it * (1 - it);
      difgo[t][j][1][k] = dc[j][k] * cnext[j][k] * ft * (1 - ft);
      difgo[t][j][2][k] = dc[j][k] * it * (1 - gt * gt);
      difgo[t][j][3][k] = dh[j][k] * tc * ot * (1 - ot);
      if (req_statecell != kNullOp || i > 0) {
        dcnext[j][k] = dc[j][k] * ft;
      }
      if (i) {
        htmp[j][k] = y[tnext][j][k + offset];
      }
    }
    Tensor<cpu, 2, DType> dyh(difgo[t].dptr_, Shape2(N, H * 4));
    if (req_state != kNullOp || i > 0) {
      linalg_gemm(dyh, wh, dhnext, alpha, beta0, false, false);
    }
    if (req_params != kNullOp) {
      if (req_params != kAddTo) {
        linalg_gemm(dyh, hnext, dwh, alpha, beta1, true, false);
      } else {
        linalg_gemm(dyh, hnext, dwh, alpha, beta2, true, false);
    }
    }
    }
    
    
    {
    {
    {
    {          index_t offset_trans_diff = (((n * num_classes + class_id) * 2)
            * part_size + part_h) * part_size + part_w;
          bottom_trans_diff[offset_trans_diff] += diff_x;
          bottom_trans_diff[offset_trans_diff + part_size * part_size] += diff_y;
        }
      }
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
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
    
    {    // Rendering
    ImGui::Render();
    SDL_GL_MakeCurrent(g_Window, g_GLContext);
    glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    SDL_GL_SwapWindow(g_Window);
}

    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
            param[1].ParameterType = D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE;
        param[1].DescriptorTable.NumDescriptorRanges = 1;
        param[1].DescriptorTable.pDescriptorRanges = &descRange;
        param[1].ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;
    
    static bool ImGui_ImplDX9_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height, bytes_per_pixel;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height, &bytes_per_pixel);
    }
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
        UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext) != S_OK)
        return false;
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
      std::shared_ptr<DHTNode> localNode_;
    
    class DHTRoutingTableSerializer {
private:
  int family_;
    }
    
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
    
    
    {} // namespace aria2

    
    void DHTTaskQueueImpl::addPeriodicTask2(const std::shared_ptr<DHTTask>& task)
{
  periodicTaskQueue2_.addTask(task);
}
    
    namespace aria2 {
    }
    
    
    {  return (::getppid() != launcher.nativeHandle());
}
    
    
    { private:
  friend class ConfigTests;
  friend class ConfigRefreshRunner;
  friend class FilePathsConfigParserPluginTests;
  friend class FileEventsTableTests;
  friend class DecoratorsConfigParserPluginTests;
  friend class SchedulerTests;
  friend class WatcherTests;
  FRIEND_TEST(ConfigTests, test_config_backup);
  FRIEND_TEST(ConfigTests, test_config_backup_integrate);
  FRIEND_TEST(ConfigTests, test_config_refresh);
  FRIEND_TEST(ConfigTests, test_get_scheduled_queries);
  FRIEND_TEST(ConfigTests, test_nonblacklist_query);
  FRIEND_TEST(OptionsConfigParserPluginTests, test_get_option);
  FRIEND_TEST(ViewsConfigParserPluginTests, test_add_view);
  FRIEND_TEST(ViewsConfigParserPluginTests, test_swap_view);
  FRIEND_TEST(ViewsConfigParserPluginTests, test_update_view);
  FRIEND_TEST(OptionsConfigParserPluginTests, test_unknown_option);
  FRIEND_TEST(OptionsConfigParserPluginTests, test_json_option);
  FRIEND_TEST(EventsConfigParserPluginTests, test_get_event);
  FRIEND_TEST(PacksTests, test_discovery_cache);
  FRIEND_TEST(PacksTests, test_multi_pack);
  FRIEND_TEST(SchedulerTests, test_monitor);
  FRIEND_TEST(SchedulerTests, test_config_results_purge);
  FRIEND_TEST(EventsTests, test_event_subscriber_configure);
  FRIEND_TEST(TLSConfigTests, test_retrieve_config);
  FRIEND_TEST(TLSConfigTests, test_runner_and_scheduler);
};
    
      // Check for a platform restriction.
  platform_.clear();
  if (obj.HasMember('platform') && obj['platform'].IsString()) {
    platform_ = obj['platform'].GetString();
  }
    
      // Test support for stripping C++ and hash style comments from config JSON.
  auto actual = json_comments;
  stripConfigComments(actual);
  std::string expected = '{\'options\':{}}\n';
  EXPECT_EQ(actual, expected);
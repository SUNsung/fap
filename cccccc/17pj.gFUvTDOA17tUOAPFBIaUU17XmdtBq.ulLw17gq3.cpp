
        
        #include 'content/nw/src/api/clipboard/clipboard.h'
    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    void MenuItem::SetChecked(bool checked) {
  // Set active will cause 'activate' to be emitted, so block here
  block_active_ = true;
  gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM(menu_item_), checked);
  block_active_ = false;
}
    
    
    {  int menu_id;
  if (option.GetInteger('submenu', &menu_id))
    SetSubmenu(object_manager()->GetApiObject<Menu>(menu_id));
}
    
      static void DoJob(AppWindowRegistry* registry, std::string id);
 protected:
  ~NwAppCloseAllWindowsFunction() override {}
    
    bool NwObjAllocateIdFunction::RunNWSync(base::ListValue* response, std::string* error) {
  response->AppendInteger(nw::ObjectManager::AllocateId());
  return true;
}
    
    namespace extensions {
    }
    
      // implement nw.Screen.getScreens()
  class NwScreenGetScreensFunction: public NWSyncExtensionFunction {
    public:
      NwScreenGetScreensFunction();
      bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    // Inserts a new box before the given index.
// Recomputes the bounding box.
void BoxWord::InsertBox(int index, const TBOX& box) {
  if (index < length_)
    boxes_.insert(box, index);
  else
    boxes_.push_back(box);
  length_ = boxes_.size();
  ComputeBoundingBox();
}
    
    #pragma once
    
    // Render function
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data)
{
    ID3D10Device* ctx = g_pd3dDevice;
    }
    
        // Setup orthographic projection matrix
    // Our visible imgui space lies from draw_data->DisplayPos (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right).
    {
        float L = draw_data->DisplayPos.x;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x;
        float T = draw_data->DisplayPos.y;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y;
        ALLEGRO_TRANSFORM transform;
        al_identity_transform(&transform);
        al_use_transform(&transform);
        al_orthographic_transform(&transform, L, T, 1.0f, R, B, -1.0f);
        al_use_projection_transform(&transform);
    }
    
        if (int size = s3eClipboardGetText(NULL, 0))
    {
        if (g_ClipboardText)
            delete[] g_ClipboardText;
        g_ClipboardText = new char[size];
        g_ClipboardText[0] = '\0';
        s3eClipboardGetText(g_ClipboardText, size);
    }
    
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
    
        const GLchar* vertex_shader_glsl_300_es =
        'precision mediump float;\n'
        'layout (location = 0) in vec2 Position;\n'
        'layout (location = 1) in vec2 UV;\n'
        'layout (location = 2) in vec4 Color;\n'
        'uniform mat4 ProjMtx;\n'
        'out vec2 Frag_UV;\n'
        'out vec4 Frag_Color;\n'
        'void main()\n'
        '{\n'
        '    Frag_UV = UV;\n'
        '    Frag_Color = Color;\n'
        '    gl_Position = ProjMtx * vec4(Position.xy,0,1);\n'
        '}\n';
    
        // Render text label (with clipping + alpha gradient) + unsaved marker
    const char* TAB_UNSAVED_MARKER = '*';
    ImRect text_pixel_clip_bb(bb.Min.x + style.FramePadding.x, bb.Min.y + style.FramePadding.y, bb.Max.x - style.FramePadding.x, bb.Max.y);
    if (flags & ImGuiTabItemFlags_UnsavedDocument)
    {
        text_pixel_clip_bb.Max.x -= CalcTextSize(TAB_UNSAVED_MARKER, NULL, false).x;
        ImVec2 unsaved_marker_pos(ImMin(bb.Min.x + style.FramePadding.x + label_size.x + 2, text_pixel_clip_bb.Max.x), bb.Min.y + style.FramePadding.y + (float)(int)(-g.FontSize * 0.25f));
        RenderTextClippedEx(draw_list, unsaved_marker_pos, bb.Max - style.FramePadding, TAB_UNSAVED_MARKER, NULL, NULL);
    }
    ImRect text_ellipsis_clip_bb = text_pixel_clip_bb;
    
    
    {    state.SetBytesProcessed(state.iterations() * j.dump(indent).size());
}
BENCHMARK_CAPTURE(Dump, jeopardy / -,      'data/jeopardy/jeopardy.json',                 -1);
BENCHMARK_CAPTURE(Dump, jeopardy / 4,      'data/jeopardy/jeopardy.json',                 4);
BENCHMARK_CAPTURE(Dump, canada / -,        'data/nativejson-benchmark/canada.json',       -1);
BENCHMARK_CAPTURE(Dump, canada / 4,        'data/nativejson-benchmark/canada.json',       4);
BENCHMARK_CAPTURE(Dump, citm_catalog / -,  'data/nativejson-benchmark/citm_catalog.json', -1);
BENCHMARK_CAPTURE(Dump, citm_catalog / 4,  'data/nativejson-benchmark/citm_catalog.json', 4);
BENCHMARK_CAPTURE(Dump, twitter / -,       'data/nativejson-benchmark/twitter.json',      -1);
BENCHMARK_CAPTURE(Dump, twitter / 4,       'data/nativejson-benchmark/twitter.json',      4);
BENCHMARK_CAPTURE(Dump, floats / -,        'data/numbers/floats.json',                    -1);
BENCHMARK_CAPTURE(Dump, floats / 4,        'data/numbers/floats.json',                    4);
BENCHMARK_CAPTURE(Dump, signed_ints / -,   'data/numbers/signed_ints.json',               -1);
BENCHMARK_CAPTURE(Dump, signed_ints / 4,   'data/numbers/signed_ints.json',               4);
BENCHMARK_CAPTURE(Dump, unsigned_ints / -, 'data/numbers/unsigned_ints.json',             -1);
BENCHMARK_CAPTURE(Dump, unsigned_ints / 4, 'data/numbers/unsigned_ints.json',             4);
    
    void State::SetIterationTime(double seconds) {
  timer_->SetIterationTime(seconds);
}
    
    
    {    // Compute all possible fitting curves and stick to the best one
    for (const auto& fit : fit_curves) {
      LeastSq current_fit = MinimalLeastSq(n, time, FittingCurve(fit));
      if (current_fit.rms < best_fit.rms) {
        best_fit = current_fit;
        best_fit.complexity = fit;
      }
    }
  } else {
    best_fit = MinimalLeastSq(n, time, FittingCurve(complexity));
    best_fit.complexity = complexity;
  }
    
    double Finish(Counter const& c, double cpu_time, double num_threads) {
  double v = c.value;
  if (c.flags & Counter::kIsRate) {
    v /= cpu_time;
  }
  if (c.flags & Counter::kAvgThreads) {
    v /= num_threads;
  }
  return v;
}
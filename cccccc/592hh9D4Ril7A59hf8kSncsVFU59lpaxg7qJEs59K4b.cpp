
        
            /// Adds an implementation of the method in a specific class.
    void addClassMethodImpl(SILFunction *F, ClassDecl *C) {
      assert(!isWitnessMethod);
      implementingFunctions.push_back(FuncImpl(F, C));
    }
    
      AssociatedTypeIterator &operator++() {
    const auto &ATR = this->operator*();
    size_t Size = sizeof(AssociatedTypeDescriptor) +
      ATR.NumAssociatedTypes * ATR.AssociatedTypeRecordSize;
    const void *Next = reinterpret_cast<const char *>(Cur) + Size;
    Cur = Next;
    return *this;
  }
    
    #include <stdint.h>
    
      /// The path to which we should emit a serialized module.
  /// It is valid whenever there are any inputs.
  ///
  /// This binary format is used to describe the interface of a module when
  /// imported by client source code. The swiftmodule format is described in
  /// docs/Serialization.rst.
  ///
  /// \sa swift::serialize
  std::string ModuleOutputPath;
    
    
    {    result->AppendBoolean(success);
    return;
  } else if (method == 'UnregisterGlobalHotKey') {
    int object_id = -1;
    arguments.GetInteger(0, &object_id);
    Shortcut* shortcut =
        static_cast<Shortcut*>(DispatcherHost::GetApiObject(object_id));
    GlobalShortcutListener::GetInstance()->UnregisterAccelerator(
        shortcut->GetAccelerator(), shortcut);
    return;
  } else if (method == 'SetProxyConfig') {
    std::string proxy_config;
    arguments.GetString(0, &proxy_config);
    SetProxyConfig(GetRenderProcessHost(), proxy_config);
    return;
  } else if (method == 'DoneMenuShow') {
    dispatcher_host->quit_run_loop();
    return;
  }
    
      static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    void Menu::Remove(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.erase(begin+pos);
  gtk_container_remove(GTK_CONTAINER(menu_), menu_item->menu_item_);
}
    
    void Menu::Append(MenuItem* menu_item) {
  if (menu_item->submenu_)
    menu_model_->AddSubMenu(menu_item->id(), menu_item->label_,
                            menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->AddItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->AddCheckItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->AddSeparator(ui::NORMAL_SEPARATOR);
    }
    
    caffe2::NetDef fakeNet() {
  using namespace caffe2::testing;
  caffe2::NetDef net;
  NetMutator(&net)
      .newOp('Fake', {'X'}, {'Y'})
      .newOp('Fake', {'Y'}, {'Z'})
      .newOp('Fake', {'Z', 'X'}, {'W'})
      .externalInputs({'X'})
      .externalOutputs({'Y', 'W'});
  return net;
}
    
    
    {} // namespace caffe2

    
    X before running op:
[[ 3.813361   -1.319647    5.2089314  -4.931328    0.6218652 ]
 [ 7.2757645   5.5552588   5.785643   -2.4790506  -0.41400087]
 [ 1.1541046  -6.933266    3.3754056   1.6569928  -1.7670316 ]
 [-3.4932013   4.891472    1.5530115  -3.2443287  -4.605099  ]
 [-4.574543   -7.360948    5.91305    -8.196495   -5.357458  ]]
X after running op:
[[ 3. -2.  5. -5.  0.]
 [ 7.  5.  5. -3. -1.]
 [ 1. -7.  3.  1. -2.]
 [-4.  4.  1. -4. -5.]
 [-5. -8.  5. -9. -6.]]
    
    
    {          return out;
        })
    .Input(0, 'X', '4-tensor in NCHW or NHWC.')
    .Output(
        0,
        'Y',
        '4-tensor. For NCHW: N x (C x kH x kW) x outH x outW.'
        'For NHWC: N x outH x outW x (kH x kW x C');
    
                    if (clip_rect.x < fb_width && clip_rect.y < fb_height && clip_rect.z >= 0.0f && clip_rect.w >= 0.0f)
                {
                    // Apply scissor/clipping rectangle
                    if (clip_origin_lower_left)
                        glScissor((int)clip_rect.x, (int)(fb_height - clip_rect.w), (int)(clip_rect.z - clip_rect.x), (int)(clip_rect.w - clip_rect.y));
                    else
                        glScissor((int)clip_rect.x, (int)clip_rect.y, (int)clip_rect.z, (int)clip_rect.w); // Support for GL 4.5 rarely used glClipControl(GL_UPPER_LEFT)
    }
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
        // Create window with graphics context
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_WindowFlags window_flags = (SDL_WindowFlags)(SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    g_Window = SDL_CreateWindow('Dear ImGui Emscripten example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, window_flags);
    g_GLContext = SDL_GL_CreateContext(g_Window);
    if (!g_GLContext)
    {
        fprintf(stderr, 'Failed to initialize WebGL context!\n');
        return 1;
    }
    SDL_GL_SetSwapInterval(1); // Enable vsync
    
      template<class SerDe>
  typename std::enable_if<SerDe::deserializing>::type
  serde(SerDe& sd) {
    Map m;
    sd(m);
    lookup(std::move(m));
  }
    
          tmp = get_node(fault->children, 'faultactor');
      if (tmp != nullptr && tmp->children != nullptr) {
        Variant zv =
          master_to_zval(get_conversion(dataTypeToSoap(KindOfString)), tmp);
        faultactor = zv.toString();
      }
    
    /**
 * A super-fast hierarchical data structure, wrapped around ClearSilver's HDF
 * data format: http://www.clearsilver.net/docs/man_hdf.hdf
 *
 * HDF is a serialization format that emphasizes cleanness and simplicity when
 * representing hierarchical data. It's designed to be fast parsing and
 * accessing. One example is,
 *
 *   Server {
 *     Name = MyTestServer
 *     IP.1 = 192.168.100.100
 *     IP.2 = 192.168.100.101
 *   }
 */
struct HdfRaw; // reference counting HDF* raw pointer, implmented in .cpp file
struct Hdf {
  /**
   * Constructors.
   */
  Hdf();                                          // create an empty HDF tree
  explicit Hdf(const char *filename);             // open the specified file
  explicit Hdf(const std::string &filename);      // open the specified file
  explicit Hdf(const Hdf *hdf, const char *name); // constructing a sub-node
           Hdf(const Hdf &hdf);                   // make a copy by reference
  explicit Hdf(HDF *hdf);                         // attaching a raw pointer
  ~Hdf();
    }
    
    static void init_entity_table() {
  for (unsigned int i = 0; entity_map[i].charset != cs_terminator; i++) {
    const html_entity_map &em = entity_map[i];
    const entity_charset charset = entity_map[i].charset;
    }
    }
    
    void RangeState::reserve() {
  auto const base = reinterpret_cast<void*>(low());
  auto const size = capacity();
  auto ret = mmap(base, size, PROT_NONE,
                  MAP_ANONYMOUS | MAP_PRIVATE | MAP_NORESERVE, -1, 0);
  if (ret != base) {
    char msg[128];
    if (ret == MAP_FAILED) {
      std::snprintf(msg, sizeof(msg),
                    'failed to reserve address range 0x%p to 0x%' PRIuPTR
                    ', errno = %d',
                    base, high(), errno);
    } else {
      munmap(ret, capacity());
      std::snprintf(msg, sizeof(msg),
                    'failed to reserve address range 0x%p to 0x%' PRIuPTR
                    ', got 0x%p instead',
                    base, high(), ret);
    }
    throw std::runtime_error{msg};
  }
}
    
      // Form a linked list of mappers for the same range.
  static void append(RangeMapper**& ptail, RangeMapper* next) {
    assert((*ptail) == nullptr);        // always keep track of the tail.
    *ptail = next;
    ptail = &(next->m_fallback);
    assert((*ptail) == nullptr);        // next already has fallback?
  }
    
    // Specify the mount point of hugetlbfs with 1G page size.  Returns whether the
// operation succeeded, i.e., the specified path is accessible, and is on a
// hugetlbfs with 1G page size.
bool set_hugetlbfs_path(const char* path);
    
    
    {
    {    // Now iterate over all the compilation units again. Only actually print out
    // compilation units if they lie within the begin/end parameter range.
    dwarf.forEachTopLevelUnit(
      [&] (Dwarf_Die cu) {
        auto context = cu->context;
        auto type_offset = GlobalOff { context->typeOffset, context->isInfo };
        auto pair = std::make_pair(context->typeSignature, type_offset);
        const auto offset = dwarf.getDIEOffset(cu).offset();
        if (offset >= end) return false;
        if ((!last || offset >= *last)) {
          printDIE(
            os,
            dwarf,
            cu,
            &pair,
            // If this compilation unit entirely lies within the begin/end
            // range, specify a begin parameter of '0', which will stop
            // printDIE() from doing range checks (which is more efficient).
            (!last || (offset > *last)) ? 0 : begin,
            end
          );
        }
        return true;
      },
      isInfo
    );
  }
  std::string m_filename;
};
    
    
    {    // Check the length of the class vectors.  If the candidate's is at least
    // as long as the potential base (`rhsCls'), it might be a subclass.
    auto const sf = v.makeReg();
    emitCmpVecLen(v, sf, static_cast<int32_t>(rhsCls->classVecLen()),
                  lhs[Class::classVecLenOff()]);
    return check_subcls(v, sf, d, lhs, rhsCls, rhsCls->classVecLen());
  };
    
    struct InlineReturnTarget {
  /*
   * Block that will serve as a branch target for returning to the caller.
   */
  Block* callerTarget;
    }
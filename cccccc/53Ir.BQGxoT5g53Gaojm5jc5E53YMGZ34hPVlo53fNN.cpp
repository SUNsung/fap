
        
        void
SyntaxASTMap::recordSyntaxMapping(RC<syntax::SyntaxData> FromNode,
                                  ASTNode ToNode) {
  if (FromNode->getKind() == SyntaxKind::Unknown) {
    return;
  }
    }
    
    
    {
    {        // Register the memory buffer.
        SML->registerMemoryBuffer(info.name, std::move(bitstream));
        foundModules.push_back(info.name);
      }
    } else {
      llvm::dbgs() << 'Unable to load module';
      if (!info.name.empty())
        llvm::dbgs() << ' '' << info.name << '\'';
      llvm::dbgs() << '.\n';
    }
    
    #endif // finish default implementation

    
    
    {  ChunkType pattern = (addOnes ? ~ChunkType(0) : ChunkType(0));
  appendReserved(numBits, [=](size_t numBitsWanted) -> ChunkType {
    return (pattern >> (ChunkSizeInBits - numBitsWanted));
  });
}
    
      assert(capacity % 16 == 0 && 'not allocating multiple of alignment');
    
      // Set the 'targetEnvironment' platform condition if targeting a simulator
  // environment. Otherwise _no_ value is present for targetEnvironment; it's
  // an optional disambiguating refinement of the triple.
  if (swift::tripleIsAnySimulator(Target))
    addPlatformConditionValue(PlatformConditionKind::TargetEnvironment,
                              'simulator');
    
    // HACK: Allow support for many newer emoji by overriding behavior of ZWJ and
// emoji modifiers. This does not make the breaks correct for any version of
// Unicode, but shifts the ways in which it is incorrect to be less harmful.
//
// TODO: Remove this hack and reevaluate whether we should have any static
// notion of what a grapheme is.
//
// Returns true if lhs and rhs shouldn't be considered as having a grapheme
// break between them. That is, whether we're overriding the behavior of the
// hard coded Unicode 8 rules surrounding ZWJ and emoji modifiers.
static inline bool graphemeBreakOverride(llvm::UTF32 lhs, llvm::UTF32 rhs) {
  return lhs == 0x200D || (rhs >= 0x1F3FB && rhs <= 0x1F3FF);
}
    
    typedef bool (*RenderWidgetWasHiddenHookFn)(content::RenderWidget*);
#if defined(COMPONENT_BUILD)
CONTENT_EXPORT RenderWidgetWasHiddenHookFn gRenderWidgetWasHiddenHook;
#else
extern RenderWidgetWasHiddenHookFn gRenderWidgetWasHiddenHook;
#endif
    
    #if defined(OS_WIN)
#include 'base/strings/utf_string_conversions.h'
#include 'base/files/file_path.h'
#include 'base/files/file_util.h'
#include 'base/win/shortcut.h'
#include 'base/path_service.h'
#include 'content/nw/src/common/shell_switches.h'
#endif
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
      int id() const { return id_; }
  std::string extension_id_;
  ObjectManager* object_manager() const { return object_manager_.get(); }
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethodSync')));
    
    void Clipboard::CallSync(const std::string& method,
                         const base::ListValue& arguments,
                         base::ListValue* result) {
  if (method == 'Get') {
    result->AppendString(GetText());
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
       bool IsCommandIdChecked(int command_id) const override;
   bool IsCommandIdEnabled(int command_id) const override;
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
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
    
    void MenuItem::SetIcon(const std::string& icon) {
  if (icon.empty()) {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_), NULL); 
  } else {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                  gtk_image_new_from_file(icon.c_str()));
    gtk_image_menu_item_set_always_show_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                              TRUE);
  }
}
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21>
internal::ValueArray21<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21> Values(T1 v1, T2 v2, T3 v3, T4 v4,
    T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13,
    T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21) {
  return internal::ValueArray21<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21>(v1, v2, v3, v4, v5, v6,
      v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21);
}
    
      // Same as above, but you can choose the interception scope of this object.
  ScopedFakeTestPartResultReporter(InterceptMode intercept_mode,
                                   TestPartResultArray* result);
    
     private:
  std::vector<TestPartResult> array_;
    
    // Tests factorial of 0.
TEST(FactorialTest, Zero) {
  EXPECT_EQ(1, Factorial(0));
}
    
    #include <grpcpp/security/auth_context.h>
    
    void CoreCodegen::gpr_free(void* p) { return ::gpr_free(p); }
    
    namespace grpc {
    }
    
    
    {    // Do it
    std::string contents;
    Status s = ReadFileToString(Env::Default(), fname, &contents);
    ASSERT_TRUE(s.ok()) << s.ToString();
    for (int i = 0; i < bytes_to_corrupt; i++) {
      contents[i + offset] ^= 0x80;
    }
    s = WriteStringToFile(Env::Default(), contents, fname);
    ASSERT_TRUE(s.ok()) << s.ToString();
  }
    
    void DBImpl::MaybeIgnoreError(Status* s) const {
  if (s->ok() || options_.paranoid_checks) {
    // No change needed
  } else {
    Log(options_.info_log, 'Ignoring error %s', s->ToString().c_str());
    *s = Status::OK();
  }
}
    
      fname = LockFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kDBLockFile, type);
    
        switch (record_type) {
      case kFullType:
        if (in_fragmented_record) {
          // Handle bug in earlier versions of log::Writer where
          // it could emit an empty kFirstType record at the tail end
          // of a block followed by a kFullType or kFirstType record
          // at the beginning of the next block.
          if (!scratch->empty()) {
            ReportCorruption(scratch->size(), 'partial record without end(1)');
          }
        }
        prospective_record_offset = physical_record_offset;
        scratch->clear();
        *record = fragment;
        last_record_offset_ = prospective_record_offset;
        return true;
    }
    
    TEST(LogTest, UnexpectedFullType) {
  Write('foo');
  Write('bar');
  SetByte(6, kFirstType);
  FixChecksum(0, 3);
  ASSERT_EQ('bar', Read());
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ(3, DroppedBytes());
  ASSERT_EQ('OK', MatchError('partial record without end'));
}
    
    
    {  // Force creation of multiple memtables by reducing the write buffer size.
  Options opt;
  opt.reuse_logs = true;
  opt.write_buffer_size = (kNum*100) / 2;
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
    
      int height = RandomHeight();
  if (height > GetMaxHeight()) {
    for (int i = GetMaxHeight(); i < height; i++) {
      prev[i] = head_;
    }
    //fprintf(stderr, 'Change height from %d to %d\n', max_height_, height);
    }
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
       verify_options(re.flags(), m_match_flags);
   // find out what kind of expression we have:
   unsigned type = (m_match_flags & match_continuous) ? 
      static_cast<unsigned int>(regbase::restart_continue) 
         : static_cast<unsigned int>(re.get_restart_type());
    
    
    {   push_recursion_stopper();
   do{
      while(pstate)
      {
         matcher_proc_type proc = s_match_vtable[pstate->type];
         ++state_count;
         if(!(this->*proc)())
         {
            if(state_count > max_state_count)
               raise_error(traits_inst, regex_constants::error_complexity);
            if((m_match_flags & match_partial) && (position == last) && (position != search_base))
               m_has_partial_match = true;
            bool successful_unwind = unwind(false);
            if((m_match_flags & match_partial) && (position == last) && (position != search_base))
               m_has_partial_match = true;
            if(false == successful_unwind)
               return m_recursive_result;
         }
      }
   }while(unwind(true));
   return m_recursive_result;
}
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    
namespace boost{
    }
    
    
    {   match_results<BidiIterator> m;
   typedef typename match_results<BidiIterator>::allocator_type match_alloc_type;
   BOOST_REGEX_DETAIL_NS::perl_matcher<BidiIterator, match_alloc_type, traits> matcher(first, last, m, e, flags | regex_constants::match_any, first);
   return matcher.find();
}
    
    #include 'imgui.h'
#include 'imgui_impl_freeglut.h'
#include <GL/freeglut.h>
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
        if (g_pFontSampler) { g_pFontSampler->Release(); g_pFontSampler = NULL; }
    if (g_pFontTextureView) { g_pFontTextureView->Release(); g_pFontTextureView = NULL; ImGui::GetIO().Fonts->TexID = NULL; } // We copied g_pFontTextureView to io.Fonts->TexID so let's clear that as well.
    if (g_pIB) { g_pIB->Release(); g_pIB = NULL; }
    if (g_pVB) { g_pVB->Release(); g_pVB = NULL; }
    
        // Setup viewport
    D3DVIEWPORT9 vp;
    vp.X = vp.Y = 0;
    vp.Width = (DWORD)draw_data->DisplaySize.x;
    vp.Height = (DWORD)draw_data->DisplaySize.y;
    vp.MinZ = 0.0f;
    vp.MaxZ = 1.0f;
    g_pd3dDevice->SetViewport(&vp);
    
    int32 ImGui_Marmalade_CharCallback(void* system_data, void* user_data)
{
    ImGuiIO& io = ImGui::GetIO();
    s3eKeyboardCharEvent* e = (s3eKeyboardCharEvent*)system_data;
    if ((e->m_Char > 0 && e->m_Char < 0x10000))
        io.AddInputCharacter((unsigned short)e->m_Char);
    }
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    #define GUETZLI_LOG(stats, ...)                                    \
  do {                                                             \
    char debug_string[1024];                                       \
    int res = snprintf(debug_string, sizeof(debug_string),         \
                       __VA_ARGS__);                               \
    assert(res > 0 && 'expected successful printing');             \
    (void)res;                                                     \
    debug_string[sizeof(debug_string) - 1] = '\0';                 \
    ::guetzli::PrintDebug(                      \
         stats, std::string(debug_string));        \
  } while (0)
#define GUETZLI_LOG_QUANT(stats, q)                    \
  for (int y = 0; y < 8; ++y) {                        \
    for (int c = 0; c < 3; ++c) {                      \
      for (int x = 0; x < 8; ++x)                      \
        GUETZLI_LOG(stats, ' %2d', (q)[c][8 * y + x]); \
      GUETZLI_LOG(stats, '   ');                       \
    }                                                  \
    GUETZLI_LOG(stats, '\n');                          \
  }
    
    #ifndef GUETZLI_FAST_LOG_H_
#define GUETZLI_FAST_LOG_H_
    
    // Huffman code and decoding lookup table used for DC and AC coefficients.
struct JPEGHuffmanCode {
  JPEGHuffmanCode() : counts(kJpegHuffmanMaxBitLength + 1),
                      values(kJpegHuffmanAlphabetSize + 1),
                      slot_id(0),
                      is_last(true) {}
    }
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    
    {}  // namespace guetzli
    
    #include <string>
    
    size_t ClusterHistograms(JpegHistogram* histo, size_t* num, int* histo_indexes,
                         uint8_t* depths);
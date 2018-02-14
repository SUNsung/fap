
        
        
    {}  // namespace nwapi
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    
    {  template<typename T> bool RemoveListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i!=listerners_.end()) {
      delete i->second;
      listerners_.erase(i);
      return true;
    }
    return false;
  }
private:
  DISALLOW_COPY_AND_ASSIGN(EventListener);
};
    
       bool GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const override;
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    bool NwAppQuitFunction::RunAsync() {
  ExtensionService* service =
    ExtensionSystem::Get(browser_context())->extension_service();
  base::MessageLoop::current()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&ExtensionService::TerminateExtension,
                   service->AsWeakPtr(),
                   extension_id()));
  return true;
}
    
    NwClipboardSetListSyncFunction::~NwClipboardSetListSyncFunction() {
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.setListSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardSetListSyncFunction);
};
    
    void RepeatedMessageFieldGenerator::GenerateCloningCode(io::Printer* printer) {
  printer->Print(variables_,
    '$name$_ = other.$name$_.Clone();\n');
}
    
    class RepeatedPrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options);
  ~RepeatedPrimitiveFieldGenerator();
    }
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    // Generates code for a lite extension, which may be within the scope of some
// message or may be at file scope.  This is much simpler than FieldGenerator
// since extensions are just simple identifiers with interesting types.
class ImmutableExtensionLiteGenerator : public ExtensionGenerator {
 public:
  explicit ImmutableExtensionLiteGenerator(const FieldDescriptor* descriptor,
                                           Context* context);
  virtual ~ImmutableExtensionLiteGenerator();
    }
    
    /**
 * @brief Delete the existing node key from the persistent storage
 *
 * @return a Status indicating the success or failure of the operation
 */
Status clearNodeKey();
    
    /**
 * @brief Access the internal storage of the Decorator parser.
 *
 * The decoration set is a map of column name to value. It contains the opaque
 * set of decoration point results.
 *
 * Decorations are applied to log items before they are sent to the downstream
 * logging APIs: logString, logSnapshot, etc.
 *
 * @param results the output parameter to write decorations.
 */
void getDecorations(std::map<std::string, std::string>& results);
    
    #ifndef COMM_COMM_DNS_H_
#define COMM_COMM_DNS_H_
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    class Test_Spy_Sample {
  public:
    Test_Spy_Sample();
    ~Test_Spy_Sample();
    }
    
        // stop short of the end so we don't scan off the end doing
    // the hashing; this means we won't compress the last few bytes
    // unless they were part of something longer
    while (q < start+length && q+12 < end) {
        int m;
        stb_uint h1,h2,h3,h4, h;
        stb_uchar *t;
        int best = 2, dist=0;
    }
    
    struct IDirect3DDevice9;
    
        // Start the frame. This call will update the io.WantCaptureMouse, io.WantCaptureKeyboard flag that you can use to dispatch inputs (or not) to your application.
    ImGui::NewFrame();
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
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
    
        for (int i = 0; i < 3; i++)
    {
        // If a mouse press event came, always pass it as 'mouse held this frame', so we don't miss click-release events that are shorter than 1 frame.
        io.MouseDown[i] = g_MouseJustPressed[i] || glfwGetMouseButton(g_Window, i) != 0;
        g_MouseJustPressed[i] = false;
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {        // Rendering
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui::Render();
        glfwSwapBuffers(window);
    }
    
    
    {    // Restore modified state
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    glBindTexture(GL_TEXTURE_2D, (GLuint)last_texture);
    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glPopAttrib();
    glPolygonMode(GL_FRONT, last_polygon_mode[0]); glPolygonMode(GL_BACK, last_polygon_mode[1]);
    glViewport(last_viewport[0], last_viewport[1], (GLsizei)last_viewport[2], (GLsizei)last_viewport[3]);
    glScissor(last_scissor_box[0], last_scissor_box[1], (GLsizei)last_scissor_box[2], (GLsizei)last_scissor_box[3]);
}
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
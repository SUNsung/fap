
        
        #endif  // TENSORFLOW_DEBUGGER_STATE_IMPL_H_

    
    #include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/grappler/costs/cost_estimator.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/core/threadpool.h'
#include 'tensorflow/core/platform/types.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
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
    
    // Enumeration to list the supported types of plugins / support libraries.
enum class PluginKind {
  kInvalid,
  kBlas,
  kDnn,
  kFft,
  kRng,
};
    
    class WritableFile;
    
    bool ParseInt32Flag(tensorflow::StringPiece arg, tensorflow::StringPiece flag,
                    int32* dst) {
  if (arg.Consume(flag) && arg.Consume('=')) {
    char extra;
    return (sscanf(arg.data(), '%d%c', dst, &extra) == 1);
  }
    }
    
    TEST(GrpcChannelTest, SparseHostPorts) {
  GrpcChannelSpec spec;
  TF_EXPECT_OK(
      spec.AddHostPortsJob('mnist', {{0, 'a:1'}, {3, 'd:4'}, {4, 'e:5'}}));
  ChannelCreationFunction channel_func =
      ConvertToChannelCreationFunction(NewHostPortGrpcChannel);
  std::unique_ptr<GrpcChannelCache> cc(NewGrpcChannelCache(spec, channel_func));
    }
    
    TEST_F(RemoveDeviceTest, TestRemoveDevice) { TestRemoveDevice(); }
    
    AtomQuotaPermissionContext::~AtomQuotaPermissionContext() {
}
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(AtomQuotaPermissionContext);
};
    
    
    { private:
  std::string scheme_;
};
    
      // URLRequestSimpleJob:
  int GetRefCountedData(std::string* mime_type,
                        std::string* charset,
                        scoped_refptr<base::RefCountedMemory>* data,
                        const net::CompletionCallback& callback) const override;
    
      // URLRequestSimpleJob:
  int GetData(std::string* mime_type,
              std::string* charset,
              std::string* data,
              const net::CompletionCallback& callback) const override;
    
    #ifndef ATOM_BROWSER_RENDER_PROCESS_PREFERENCES_H_
#define ATOM_BROWSER_RENDER_PROCESS_PREFERENCES_H_
    
      void SetMenu(AtomMenuModel* menu_model);
  bool IsServerStarted() const;
    
    bool MenuModelAdapter::GetAccelerator(int id,
                                      ui::Accelerator* accelerator) const {
  ui::MenuModel* model = menu_model_;
  int index = 0;
  if (ui::MenuModel::GetModelAndIndexForCommandId(id, &model, &index)) {
    return static_cast<AtomMenuModel*>(model)->
      GetAcceleratorAtWithParams(index, true, accelerator);
  }
  return false;
}
    
    #endif  // ATOM_BROWSER_UI_VIEWS_MENU_MODEL_ADAPTER_H_

    
      // Find a file by file name.
  bool FindFileByName(const string& filename,
                      FileDescriptorProto* output);
    
      std::string namespace_;
  std::string reflectionClassname_;
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    
      virtual ExtensionGenerator* NewExtensionGenerator(
      const FieldDescriptor* descriptor) const = 0;
    
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(variables_,
    '$deprecation$public $type$OrBuilder get$capitalized_name$OrBuilder(\n'
    '    int index) {\n'
    '  if ($name$Builder_ == null) {\n'
    '    return $name$_.get(index);'
    '  } else {\n'
    '    return $name$Builder_.getMessageOrBuilder(index);\n'
    '  }\n'
    '}\n');
    
    
namespace tesseract {
    }
    
    /**
 * @name tess_acceptable_word
 *
 * @return true if the word is regarded as 'good enough'.
 * @param word_choice after context
 * @param raw_choice before context
 */
bool Tesseract::tess_acceptable_word(WERD_RES* word) {
  return getDict().AcceptableResult(word);
}
    
      // Fits a line to the points, returning the fitted line as a pair of
  // points, and the upper quartile error.
  double Fit(ICOORD* pt1, ICOORD* pt2) {
    return Fit(0, 0, pt1, pt2);
  }
  // Fits a line to the points, ignoring the skip_first initial points and the
  // skip_last final points, returning the fitted line as a pair of points,
  // and the upper quartile error.
  double Fit(int skip_first, int skip_last, ICOORD* pt1, ICOORD* pt2);
    
    // Free allocated memory and clear pointers.
void DENORM::Clear() {
  if (x_map_ != NULL) {
    delete x_map_;
    x_map_ = NULL;
  }
  if (y_map_ != NULL) {
    delete y_map_;
    y_map_ = NULL;
  }
  if (rotation_ != NULL) {
    delete rotation_;
    rotation_ = NULL;
  }
}
    
    // Minimum variance in least squares before backing off to a lower degree.
const double kMinVariance = 1.0 / 1024;
    
    // A simple object cache which maps a string to an object of type T.
// Usually, these are expensive objects that are loaded from disk.
// Reference counting is performed, so every Get() needs to be followed later
// by a Free().  Actual deletion is accomplished by DeleteUnusedObjects().
template<typename T>
class ObjectCache {
 public:
  ObjectCache() {}
  ~ObjectCache() {
    mu_.Lock();
    for (int i = 0; i < cache_.size(); i++) {
      if (cache_[i].count > 0) {
        tprintf('ObjectCache(%p)::~ObjectCache(): WARNING! LEAK! object %p '
                'still has count %d (id %s)\n',
                this, cache_[i].object, cache_[i].count,
                cache_[i].id.string());
      } else {
        delete cache_[i].object;
        cache_[i].object = NULL;
      }
    }
    mu_.Unlock();
  }
    }
    
    
    {    while (next_num_ < kMaxNaturalNumberValue) {
      n = GetBinaryReversedInteger(next_num_++);
      if (n < N_) break;
    }
    return (next_num_ > kMaxNaturalNumberValue) ? kInvalidVal : n;
  }
    
    #include 'fontinfo.h'
#include 'ndminx.h'
#include 'sampleiterator.h'
#include 'shapeclassifier.h'
#include 'shapetable.h'
#include 'trainingsample.h'
#include 'trainingsampleset.h'
#include 'unicity_table.h'
    
    // Clear all data.
void IntFeatureDist::Clear() {
  delete [] features_;
  features_ = NULL;
  delete [] features_delta_one_;
  features_delta_one_ = NULL;
  delete [] features_delta_two_;
  features_delta_two_ = NULL;
}
    
    namespace tesseract {
    }
    
    JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_appenderFlush(JNIEnv *env, jobject, jboolean _is_sync) {
	if (_is_sync) {
		appender_flush_sync();
	} else {
		appender_flush();
	}
}
    
    
    {    ::wakeupLock_delete(object_);
}
    
        xassert2(now > touch_times_.front());
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    namespace design_patterns {
    }
    
    
    {  private:
//    int m_t;
};
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #define DEFINE_HAS_MEMBER(member_name) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <int> struct tester;\
        template <typename U> static yes_type test(tester<sizeof(&U::member_name)>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };
    
    jvalue JNU_CallMethodByMethodInfo(JNIEnv* _env, jobject _obj, JniMethodInfo _method_info, ...);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Setup time step
    double current_time = s3eTimerGetUST() / 1000.0f;
    io.DeltaTime = g_Time > 0.0 ? (float)(current_time - g_Time) : (float)(1.0f/60.0f);
    g_Time = current_time;
    
    struct GLFWwindow;
    
        // Cleanup
    ImGui_ImplA5_Shutdown();
    ImGui::DestroyContext();
    al_destroy_event_queue(queue);
    al_destroy_display(display);
    
        // Initialize Direct3D
    if (CreateDeviceD3D(hwnd) < 0)
    {
        CleanupDeviceD3D();
        UnregisterClass(_T('ImGui Example'), wc.hInstance);
        return 1;
    }
    
        // Setup ImGui binding
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    ImGui_ImplDX9_Init(hwnd, g_pd3dDevice);
    
    
    {        // Rendering
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound, but prefer using the GL3+ code.
        ImGui::Render();
        ImGui_ImplGlfwGL2_RenderDrawData(ImGui::GetDrawData());
        glfwSwapBuffers(window);
    }
    
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
    
    static void ImGui_ImplGlfw_InstallCallbacks(GLFWwindow* window)
{
    glfwSetMouseButtonCallback(window, ImGui_ImplGlfw_MouseButtonCallback);
    glfwSetScrollCallback(window, ImGui_ImplGlfw_ScrollCallback);
    glfwSetKeyCallback(window, ImGui_ImplGlfw_KeyCallback);
    glfwSetCharCallback(window, ImGui_ImplGlfw_CharCallback);
}
    
        // Load cursors
    // FIXME: GLFW doesn't expose suitable cursors for ResizeAll, ResizeNESW, ResizeNWSE. We revert to arrow cursor for those.
    g_MouseCursors[ImGuiMouseCursor_Arrow] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_TextInput] = glfwCreateStandardCursor(GLFW_IBEAM_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeAll] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeNS] = glfwCreateStandardCursor(GLFW_VRESIZE_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeEW] = glfwCreateStandardCursor(GLFW_HRESIZE_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeNESW] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeNWSE] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);
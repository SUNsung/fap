
        
        bool Converter<Dictionary>::FromV8(v8::Isolate* isolate,
                                   v8::Local<v8::Value> val,
                                   Dictionary* out) {
  if (!val->IsObject() || val->IsFunction())
    return false;
  *out = Dictionary(isolate, v8::Local<v8::Object>::Cast(val));
  return true;
}
    
      // Updates the current user activity
  void UpdateCurrentActivity(const std::string& type,
                             const base::DictionaryValue& user_info);
    
      bool use_context_isolation = renderer_client_->isolated_world();
  bool is_main_world = IsMainWorld(world_id);
  bool is_main_frame = render_frame_->IsMainFrame();
  bool is_not_opened = !render_frame_->GetWebFrame()->Opener();
  bool allow_node_in_sub_frames =
      base::CommandLine::ForCurrentProcess()->HasSwitch(
          switches::kNodeIntegrationInSubFrames);
  bool should_create_isolated_context =
      use_context_isolation && is_main_world &&
      (is_main_frame || allow_node_in_sub_frames) && is_not_opened;
    
      node::DebugOptions options;
  std::vector<std::string> exec_args;
  std::vector<std::string> v8_args;
  std::vector<std::string> errors;
    
    Promise::Promise(v8::Isolate* isolate) : isolate_(isolate) {
  resolver_ = v8::Promise::Resolver::New(isolate);
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
    
    namespace google {
namespace protobuf {
namespace internal {
namespace {
    }
    }
    }
    }
    
    
    {
    {    return true;
  }
 private:
  bool CanGenerate(const FileDescriptor* file) const {
    if (GetPool()->FindFileByName(file->name()) != nullptr) {
      return false;
    }
    for (int j = 0; j < file->dependency_count(); j++) {
      if (GetPool()->FindFileByName(file->dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    for (int j = 0; j < file->public_dependency_count(); j++) {
      if (GetPool()->FindFileByName(
          file->public_dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    for (int j = 0; j < file->weak_dependency_count(); j++) {
      if (GetPool()->FindFileByName(
          file->weak_dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    return true;
  }
};
    
    #include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/dynamic_message.h>
#include <google/protobuf/pyext/descriptor.h>
#include <google/protobuf/pyext/descriptor_containers.h>
#include <google/protobuf/pyext/descriptor_pool.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/message_factory.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
#include <google/protobuf/stubs/hash.h>
    
    
    {}  // namespace
    
    namespace content {
class RenderProcessHost;
class Shell;
}
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    
namespace nwapi {
    }
    
    NwAppClearAppCacheFunction::NwAppClearAppCacheFunction() {
}
    
    bool NwObjCallObjectMethodSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    
    {} // namespace extensions
#endif

    
      bool NwScreenStopMonitorFunction::RunNWSync(base::ListValue* response, std::string* error) {
    NwDesktopCaptureMonitor::GetInstance()->Stop();
    return true;
  }
    
    
    {    return g_ClipboardText;
}
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    bool ImGui::InputTextWithHint(const char* label, const char* hint, std::string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
    
    {        // Rendering
        ImGui::Render();
        al_clear_to_color(al_map_rgba_f(clear_color.x, clear_color.y, clear_color.z, clear_color.w));
        ImGui_ImplAllegro5_RenderDrawData(ImGui::GetDrawData());
        al_flip_display();
    }
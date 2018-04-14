
        
        // The browser want to open a file.
IPC_MESSAGE_CONTROL1(ShellViewMsg_Open,
                     std::string /* file name */)
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    #include 'base/values.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/strings/string16.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/base/clipboard/clipboard.h'
    
    // static
void DispatcherBindings::CrashRenderer(
    const v8::FunctionCallbackInfo<v8::Value>& args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  RenderView* render_view = GetCurrentRenderView();
  if (!render_view) {
    args.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
                                     'Unable to get render view in CallObjectMethod'))));
    return;
  }
  int* ptr = NULL;
  *ptr = 1;
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
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return item->is_modified_;
}
    
    #ifndef CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_
#define CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_
    
    static stb_uint stb_adler32(stb_uint adler32, stb_uchar *buffer, stb_uint buflen)
{
    const unsigned long ADLER_MOD = 65521;
    unsigned long s1 = adler32 & 0xffff, s2 = adler32 >> 16;
    unsigned long blocklen, i;
    }
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
    
            max_glyph_size.x = ImMax(max_glyph_size.x, font_face.Info.MaxAdvanceWidth);
        max_glyph_size.y = ImMax(max_glyph_size.y, font_face.Info.Ascender - font_face.Info.Descender);
    
        // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;   // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;    // We can honor io.WantSetMousePos requests (optional, rarely used)
    
            ID3D12Resource* uploadBuffer = NULL;
        HRESULT hr = g_pd3dDevice->CreateCommittedResource(&props, D3D12_HEAP_FLAG_NONE, &desc,
            D3D12_RESOURCE_STATE_GENERIC_READ, NULL, IID_PPV_ARGS(&uploadBuffer));
        IM_ASSERT(SUCCEEDED(hr));
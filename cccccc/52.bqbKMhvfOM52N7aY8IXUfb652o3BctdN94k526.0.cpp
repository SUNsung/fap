
        
        
    {  v << vcall{
    CallSpec::direct(pthread_getspecific),
    v.makeVcallArgs({{v.cns(datum.tls->m_key)}}),
    v.makeTuple({d}),
    Fixup{},
    DestType::SSA
  };
}
    
      String getResults(
    Array &headers,
    int &code,
    int64_t timeout_ms
  );
    
    struct SSATmp;
struct Type;
    
    namespace HPHP {
    }
    
    #endif
#endif

    
    struct CurlShareResource : SweepableResourceData {
  DECLARE_RESOURCE_ALLOCATION(CurlShareResource)
  CLASSNAME_IS('curl_share')
  const String& o_getClassNameHook() const override { return classnameof(); }
  bool isInvalid() const override { return !m_share; }
    }
    
        bool empty() const {
      return m_highPriList.empty() && m_midLowPriList.empty();
    }
    CondVarNode& front() {
      if (!m_highPriList.empty()) return m_highPriList.front();
      return m_midLowPriList.front();
    }
    void pop_front() {
      if (!m_highPriList.empty()) m_highPriList.pop_front();
      else m_midLowPriList.pop_front();
    }
    
    HugePageInfo get_huge1g_info(int node /* = -1 */) {
  return read_hugepage_info(size1g, node);
}
    
    
    {
    {}}

    
    extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;
    }
    
    int main(int, char**)
{
    // Setup SDL
    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0)
    {
        printf('Error: %s\n', SDL_GetError());
        return -1;
    }
    }
    
                    FT_Glyph ft_glyph = NULL;
                FT_BitmapGlyph ft_glyph_bitmap = NULL; // NB: will point to bitmap within FT_Glyph
                GlyphInfo glyph_info;
                if (!font_face.CalcGlyphInfo(codepoint, glyph_info, ft_glyph, ft_glyph_bitmap))
                    continue;
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    //
//  comm_frequency_limit.cc
//  comm
//
//  Created by liucan on 13-11-23.
//
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
      DownloadEngine* getDownloadEngine() const { return e_; }
    
    void AbstractHttpServerResponseCommand::updateReadWriteCheck()
{
  if (httpServer_->wantRead()) {
    if (!readCheck_) {
      readCheck_ = true;
      e_->addSocketForReadCheck(socket_, this);
    }
  }
  else if (readCheck_) {
    readCheck_ = false;
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (httpServer_->wantWrite()) {
    if (!writeCheck_) {
      writeCheck_ = true;
      e_->addSocketForWriteCheck(socket_, this);
    }
  }
  else if (writeCheck_) {
    writeCheck_ = false;
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
      virtual ~AbstractHttpServerResponseCommand();
    
    bool AbstractProxyRequestCommand::executeInternal()
{
  // socket->setBlockingMode();
  if (httpConnection_->sendBufferIsEmpty()) {
    auto httpRequest = make_unique<HttpRequest>();
    httpRequest->setUserAgent(getOption()->get(PREF_USER_AGENT));
    httpRequest->setRequest(getRequest());
    httpRequest->setProxyRequest(proxyRequest_);
    }
    }
    
    class AsyncNameResolver;
class DownloadEngine;
class Command;
class Option;
    
    
    {} // namespace aria2
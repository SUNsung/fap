
        
        REGISTER_OP('Add').Doc(R'doc(
An op to test that duplicate registrations don't override previously
registered ops.
)doc');
    
    
    {  DCHECK(PyDict_Check(code_to_exc_type_map));
  PyObject* key;
  PyObject* value;
  Py_ssize_t pos = 0;
  while (PyDict_Next(code_to_exc_type_map, &pos, &key, &value)) {
    TF_Code code = static_cast<TF_Code>(PyLong_AsLong(key));
    singleton_->exc_types_[code] = value;
    // The exception classes should also have the lifetime of the process, but
    // incref just in case.
    Py_INCREF(value);
  }
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {
    {}  // namespace host
}  // namespace stream_executor

    
    // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    void App::SetProxyConfig(content::RenderProcessHost* render_process_host,
                         const std::string& proxy_config) {
  net::ProxyConfig config;
  config.proxy_rules().ParseFromString(proxy_config);
  net::URLRequestContextGetter* context_getter =
    render_process_host->GetBrowserContext()->
    GetRequestContextForRenderProcess(render_process_host->GetID());
    }
    
    void MenuItem::SetSubmenu(Menu* menu) {
  if (submenu_) submenu_->RemoveKeys();
    }
    
    
    {  for (AppWindow* window : windows) {
    if (window->NWCanClose())
      window->GetBaseWindow()->Close();
  }
}
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnDeallocateObject(id);
  return true;
}
    
      kFullType = 1,
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
    #ifndef STORAGE_LEVELDB_DB_MEMTABLE_H_
#define STORAGE_LEVELDB_DB_MEMTABLE_H_
    
      // If non-null, use the specified cache for blocks.
  // If null, leveldb will automatically create and use an 8MB internal cache.
  Cache* block_cache = nullptr;
    
    
    {  Insert(1, 100);
  ASSERT_EQ(-1, Lookup(1));
}
    
      double min_;
  double max_;
  double num_;
  double sum_;
  double sum_squares_;
    
    int PSTokenizer::lookChar() {
  if (charBuf < 0) {
    charBuf = (*getCharFunc)(data);
  }
  return charBuf;
}
    
    #include <config.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
    
      check(state->getFillColorSpace(), state->getFillColor(),
	state->getFillOpacity(), state->getBlendMode());
  gdi = gFalse;
  if ((level == psLevel1 || level == psLevel1Sep) &&
      state->getFillColorSpace()->getMode() == csPattern) {
    level1PSBug = gTrue;
  }
    
      //----- image drawing
  virtual void drawImageMask(GfxState *state, Object *ref, Stream *str,
			     int width, int height, GBool invert,
			     GBool interpolate, GBool inlineImg);
  virtual void drawImage(GfxState *state, Object *ref, Stream *str,
			 int width, int height, GfxImageColorMap *colorMap,
			 GBool interpolate, int *maskColors, GBool inlineImg);
  virtual void drawMaskedImage(GfxState *state, Object *ref, Stream *str,
			       int width, int height,
			       GfxImageColorMap *colorMap,
			       GBool interpolate,
			       Stream *maskStr, int maskWidth, int maskHeight,
			       GBool maskInvert, GBool maskInterpolate);
  virtual void drawSoftMaskedImage(GfxState *state, Object *ref, Stream *str,
				   int width, int height,
				   GfxImageColorMap *colorMap,
				   GBool interpolate,
				   Stream *maskStr,
				   int maskWidth, int maskHeight,
				   GfxImageColorMap *maskColorMap,
				   GBool maskInterpolate);
    
      virtual void *makeAuthData(GooString *ownerPassword,
			     GooString *userPassword);
  virtual void *getAuthData();
  virtual void freeAuthData(void *authData);
  virtual GBool authorize(void *authData);
  virtual int getPermissionFlags() { return permFlags; }
  virtual GBool getOwnerPasswordOk() { return gFalse; }
  virtual Guchar *getFileKey() { return fileKey; }
  virtual int getFileKeyLength() { return fileKeyLength; }
  virtual int getEncVersion() { return encVersion; }
  virtual CryptAlgorithm getEncAlgorithm() { return encAlgorithm; }
    
      //----- update graphics state
  virtual void updateAll(GfxState *state);
  virtual void updateCTM(GfxState *state, double m11, double m12,
			 double m21, double m22, double m31, double m32);
  virtual void updateLineDash(GfxState *state);
  virtual void updateFlatness(GfxState *state);
  virtual void updateLineJoin(GfxState *state);
  virtual void updateLineCap(GfxState *state);
  virtual void updateMiterLimit(GfxState *state);
  virtual void updateLineWidth(GfxState *state);
  virtual void updateStrokeAdjust(GfxState *state);
  virtual void updateFillColor(GfxState *state);
  virtual void updateStrokeColor(GfxState *state);
  virtual void updateBlendMode(GfxState *state);
  virtual void updateFillOpacity(GfxState *state);
  virtual void updateStrokeOpacity(GfxState *state);
    
    #ifdef _WIN32
  setmode(fileno(stdin), O_BINARY);
#endif
    
    // Temporary data for one destination ImFont* (multiple source fonts can be merged into one destination ImFont)
struct ImFontBuildDstDataFT
{
    int                 SrcCount;           // Number of source fonts targeting this destination font.
    int                 GlyphsHighest;
    int                 GlyphsCount;
    ImBoolVector        GlyphsSet;          // This is used to resolve collision when multiple sources are merged into a same destination font.
};
    
    
    {
    {
    {                // Bind texture, Draw
                ID3D11ShaderResourceView* texture_srv = (ID3D11ShaderResourceView*)pcmd->TextureId;
                ctx->PSSetShaderResources(0, 1, &texture_srv);
                ctx->DrawIndexed(pcmd->ElemCount, pcmd->IdxOffset + global_idx_offset, pcmd->VtxOffset + global_vtx_offset);
            }
        }
        global_idx_offset += cmd_list->IdxBuffer.Size;
        global_vtx_offset += cmd_list->VtxBuffer.Size;
    }
    
        // Render command lists
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawIdx* idx_buffer = cmd_list->IdxBuffer.Data;
        const int nVert = cmd_list->VtxBuffer.Size;
        CIwFVec2* pVertStream = IW_GX_ALLOC(CIwFVec2, nVert);
        CIwFVec2* pUVStream = IW_GX_ALLOC(CIwFVec2, nVert);
        CIwColour* pColStream = IW_GX_ALLOC(CIwColour, nVert);
    }
    
    void    ImGui_ImplWin32_NewFrame()
{
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(io.Fonts->IsBuilt() && 'Font atlas not built! It is generally built by the renderer back-end. Missing call to renderer _NewFrame() function? e.g. ImGui_ImplOpenGL3_NewFrame().');
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        glfwDestroyWindow(window);
    glfwTerminate();
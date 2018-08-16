
        
          /// When evaluating an expression in the context of an existing source file,
  /// we may want to prefer declarations from that source file.
  /// The DebuggerClient can return a private-discriminator to tell lookup to
  /// prefer these certain decls.
  virtual Identifier getPreferredPrivateDiscriminator() = 0;
    
      const llvm::UTF8 *SourceNext = SourceStart;
  llvm::UTF32 C[2];
  llvm::UTF32 *TargetStart = C;
    
    @interface CalendarBridgingTester : NSObject
- (NSCalendar *)autoupdatingCurrentCalendar;
- (BOOL)verifyAutoupdatingCalendar:(NSCalendar *)calendar;
@end
    
    #include 'swift/Basic/LLVM.h'
#include 'llvm/ADT/ArrayRef.h'
#include 'llvm/ADT/StringRef.h'
    
    #ifndef SWIFT_AST_COMMENT_H
#define SWIFT_AST_COMMENT_H
    
    #ifndef SWIFT_PRINTINGDIAGNOSTICCONSUMER_H
#define SWIFT_PRINTINGDIAGNOSTICCONSUMER_H
    
      /// Expand this location to all individual fields it contains.
  ///
  /// In SIL, we can have a store to an aggregate and loads from its individual
  /// fields. Therefore, we expand all the operations on aggregates onto
  /// individual fields and process them separately.
  static void expand(LSLocation Base, SILModule *Mod, LSLocationList &Locs,
                     TypeExpansionAnalysis *TE);
    
      void handleDiagnostic(SourceManager &SM, SourceLoc Loc,
                        DiagnosticKind Kind,
                        StringRef FormatString,
                        ArrayRef<DiagnosticArgument> FormatArgs,
                        const DiagnosticInfo &Info) override;
    
    #ifndef SWIFT_SILOPTIMIZER_UTILS_INDEXTREE_H
#define SWIFT_SILOPTIMIZER_UTILS_INDEXTREE_H
    
    //! @endcond
    
    //
// BEGIN OF CUSTOM FUNCTIONS
//
    
    #endif // __OPENCV_CORE_OCL_RUNTIME_COMMON_HPP__

    
    void cv::cuda::copyMakeBorder(InputArray, OutputArray, int, int, int, int, int, Scalar, Stream&) { throw_no_cuda(); }
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    #include <algorithm>
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. If the block
 * starts with a DefLabel expecting a StkPtr, this function will return an
 * intermediate block that passes the current sp.
 */
Block* getBlock(IRGS& env, Offset offset);
    
      bool isValidAddress(const CodeAddress tca) const {
    return tca >= m_base && tca < (m_base + m_size);
  }
    
      /*
   * StringData objects allocated with MakeUncounted should be freed
   * using this function. It will remove a reference via
   * uncountedDecRef, and if necessary destroy the StringData and
   * return true.
   */
  static void ReleaseUncounted(const StringData*);
    
    struct hphp_string_hash {
  size_t operator()(const String& s) const {
    return s.get()->hash();
  }
};
    
      /*
   * Size of the table.
   */
  size_t numLitstrs() const;
    
    void TaggedSlabList::addRange(void* ptr, std::size_t size) {
  if (!ptr) return;
  while (size >= kSlabSize) {
    push_front(ptr, 0);
    size -= kSlabSize;
    ptr = reinterpret_cast<char*>(ptr) + kSlabSize;
  }
}
    
    // For 2M pages, we want more control over protection and mapping flags.  Note
// that MAP_FIXED can overwrite the existing mapping without checking/failing.
void* mmap_2m(void* addr, int prot, int node, bool map_shared, bool map_fixed);
    
    template<class T>
void implLdCachedSafe(IRLS& env, const IRInstruction* inst,
                      const StringData* name) {
  auto const dst = dstLoc(env, inst, 0).reg();
  auto const ch = handleFrom<T>(NamedEntity::get(name));
  auto& v = vmain(env);
    }
    
    /*
 * Map from DefLabel instructions to produced references.
 *
 * See comment in IRBuilder::cond for more details.
 */
using LabelRefs = jit::hash_map<const IRInstruction*, jit::vector<uint32_t>>;
    
    	wchar_t message[1024];
	swprintf_s(message, L'%s\nFunction: %s\nLine: %d', buffer, func, line);
	LocalFree(buffer);
    
    //-----------------------------------------------------------------------------
// EXAMPLE APP CODE: CONSTRAINED RESIZE
//-----------------------------------------------------------------------------
    
    
    {        ImGui::Render();
    }
    
        // Create texture
    atlas->TexHeight = (atlas->Flags & ImFontAtlasFlags_NoPowerOfTwoHeight) ? (atlas->TexHeight + 1) : ImUpperPowerOfTwo(atlas->TexHeight);
    atlas->TexUvScale = ImVec2(1.0f / atlas->TexWidth, 1.0f / atlas->TexHeight);
    atlas->TexPixelsAlpha8 = (unsigned char*)ImGui::MemAlloc(atlas->TexWidth * atlas->TexHeight);
    memset(atlas->TexPixelsAlpha8, 0, atlas->TexWidth * atlas->TexHeight);
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
        // Create Vulkan Instance
    {
        VkInstanceCreateInfo create_info = {};
        create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        create_info.enabledExtensionCount = extensions_count;
        create_info.ppEnabledExtensionNames = extensions;
    }
    
    void CreateRenderTarget()
{
    ID3D10Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, __uuidof(ID3D10Texture2D), (LPVOID*)&pBackBuffer);
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
    pBackBuffer->Release();
}
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('Dear ImGui DirectX9 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    #define IM_VEC4_CLASS_EXTRA                                                 \
        ImVec4(const MyVec4& f) { x = f.x; y = f.y; z = f.z; w = f.w; }     \
        operator MyVec4() const { return MyVec4(x,y,z,w); }
*/
    
    	std::string cache_dir;
	if (NULL != _cache_dir) {
		ScopedJstring cache_dir_jstr(env, _cache_dir);
		cache_dir = cache_dir_jstr.GetChar();
	}
    
    #include <exception>
#include 'comm/xlogger/xlogger.h'
    
      private:
    CommFrequencyLimit(CommFrequencyLimit&);
    CommFrequencyLimit& operator=(CommFrequencyLimit&);
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
        Spy* GetSpy(const char* _name) const
    { return m_strmap.find(_name)->second; }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #include 'comm/debugger/spy.inl'
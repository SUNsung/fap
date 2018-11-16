
        
        void CostAnalyzer::PrintAnalysis(std::ostream& os, bool per_node_report,
                                 bool verbose) const {
  os << std::endl;
  os << std::left << std::setw(50)
     << 'Total time measured in ns (serialized): ' << std::right
     << std::setw(20) << total_time_measured_serialized_ << std::endl;
  os << std::left << std::setw(50)
     << 'Total time measured in ns (actual): ' << std::right << std::setw(20)
     << total_time_measured_ << std::endl;
  os << std::left << std::setw(50)
     << 'Total time analytical in ns (upper bound): ' << std::right
     << std::setw(20) << total_time_analytical_upper_ << std::endl;
  os << std::left << std::setw(50)
     << 'Total time analytical in ns (lower bound): ' << std::right
     << std::setw(20) << total_time_analytical_lower_ << std::endl;
  double efficiency_upper = static_cast<double>(total_time_analytical_upper_) /
                            static_cast<double>(total_time_measured_);
  os << std::left << std::setw(50)
     << 'Overall efficiency (analytical upper/actual): ' << std::right
     << std::setw(20) << efficiency_upper << std::endl;
  double efficiency_lower = static_cast<double>(total_time_analytical_lower_) /
                            static_cast<double>(total_time_measured_);
  os << std::left << std::setw(50)
     << 'Overall efficiency (analytical lower/actual): ' << std::right
     << std::setw(20) << efficiency_lower << std::endl;
  os << std::endl;
    }
    
    Status TF_TensorToPyArray(Safe_TF_TensorPtr tensor, PyObject** out_ndarray);
    
    PyExceptionRegistry* PyExceptionRegistry::singleton_ = nullptr;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
    
      // Returns true if all stream tasks have completed at time of the call. Note
  // the potential for races around this call (if another thread adds work to
  // the stream immediately after this returns).
  static bool IsStreamIdle(CudaContext* context, CUstream stream);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #endif

    
      /**
   * Prefer the Bind() over the GetFoo() as it makes ini_get() work too.
   * These Bind()s should be used for ini settings. Specifically, they
   * should be used when the bound setting is needed before the main ini
   * processing pass. Unlike IniSetting::Bind, these bindings will fetch the
   * value in an ini setting if it is set otherwise it will use the defValue.
   */
  static void Bind(bool& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const bool defValue = false,
                   const bool prepend_hhvm = true);
  static void Bind(const char*& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const char *defValue = nullptr,
                   const bool prepend_hhvm = true);
  static void Bind(std::string& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const std::string defValue = '',
                   const bool prepend_hhvm = true);
  static void Bind(char& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const char defValue = 0, const bool prepend_hhvm = true);
  static void Bind(unsigned char& loc,const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const unsigned char defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(int16_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const int16_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(uint16_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const uint16_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(int32_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const int32_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(uint32_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const uint32_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(int64_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const int64_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(uint64_t& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const uint64_t defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(double& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name = '',
                   const double defValue = 0,
                   const bool prepend_hhvm = true);
  static void Bind(HackStrictOption& loc, const IniSettingMap &ini,
                   const Hdf& config, const std::string& name,
                   HackStrictOption def);
  static void
  Bind(std::vector<uint32_t>& loc, const IniSettingMap& ini,
       const Hdf& config, const std::string& name = '',
       const std::vector<uint32_t>& defValue = std::vector<uint32_t>(),
       const bool prepend_hhvm = true);
  static void
  Bind(std::vector<std::string>& loc, const IniSettingMap& ini,
       const Hdf& config, const std::string& name = '',
       const std::vector<std::string>& defValue = std::vector<std::string>(),
       const bool prepend_hhvm = true);
  static void
  Bind(std::unordered_map<std::string, int>& loc,
       const IniSettingMap& ini, const Hdf& config,
       const std::string& name = '',
       const std::unordered_map<std::string, int>& defValue =
         std::unordered_map<std::string, int>{},
       const bool prepend_hhvm = true);
  static void Bind(ConfigMap& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigMap& defValue = ConfigMap(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigMapC& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigMapC& defValue = ConfigMapC(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigSet& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigSet& defValue = ConfigSet(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigSetC& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigSetC& defValue = ConfigSetC(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigIMap& loc, const IniSettingMap& ini, const Hdf& config,
                   const std::string& name = '',
                   const ConfigIMap& defValue = ConfigIMap(),
                   const bool prepend_hhvm = true);
  static void Bind(ConfigFlatSet& loc, const IniSettingMap& ini,
                   const Hdf& config, const std::string& name = '',
                   const ConfigFlatSet& defValue = ConfigFlatSet(),
                   const bool prepend_hhvm = true);
    
      const char* data = filename.data();
  int data_len = filename.length();
  bool base64 = false;
  if (strncmp(data, 'data:', sizeof('data:') - 1)) {
    return nullptr;
  }
  data += sizeof('data:') - 1;
  data_len -= sizeof('data:') - 1;
    
          std::string line = argv[cnt+1];
      std::string section = 'php';
      int pos_period = line.find_first_of('.');
      int pos_equals = line.find_first_of('=');
    
    bool OutputFile::rewind() {
  raise_warning('cannot rewind a php://output stream');
  return false;
}
    
    
    {    return CatmullRomBy::create(_duration, reverse);
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCActionGrid3D.h'
#include 'base/CCDirector.h'
    
    __CCCallFuncND * __CCCallFuncND::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) __CCCallFuncND();
    
    if( _selectorTarget)
    {
        a->initWithTarget(_selectorTarget, _callFuncND, _data);
    }
    
    a->autorelease();
    return a;
}
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(Spawn);
};
    
    
    {    return 0;
}
    
        if (action && action->initWithDuration(duration, gridSize))
    {
        action->autorelease();
        return action;
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCActionTiledGrid.h'
#include '2d/CCGrid.h'
#include '2d/CCNodeGrid.h'
#include 'base/CCDirector.h'
#include 'base/ccMacros.h'
    
    /**
@brief SplitRows action.
@details Split the target node in many rows.
        Then move out some rows from left, move out the other rows from right.
*/
class CC_DLL SplitRows : public TiledGrid3DAction
{
public :
    /** 
     * @brief Create the action with the number of rows and the duration.
     * @param duration Specify the duration of the SplitRows action. It's a value in seconds.
     * @param rows Specify the rows count should be split.
     * @return If the creation success, return a pointer of SplitRows action; otherwise, return nil.
     */
    static SplitRows* create(float duration, unsigned int rows);
    }
    
        for (int n = 0; n < 50; n++)
    {
        printf('NewFrame() %d\n', n);
        io.DisplaySize = ImVec2(1920, 1080);
        io.DeltaTime = 1.0f / 60.0f;
        ImGui::NewFrame();
    }
    
            D3D12_STATIC_SAMPLER_DESC staticSampler = {};
        staticSampler.Filter = D3D12_FILTER_MIN_MAG_MIP_LINEAR;
        staticSampler.AddressU = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.AddressV = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.AddressW = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.MipLODBias = 0.f;
        staticSampler.MaxAnisotropy = 0;
        staticSampler.ComparisonFunc = D3D12_COMPARISON_FUNC_ALWAYS;
        staticSampler.BorderColor = D3D12_STATIC_BORDER_COLOR_TRANSPARENT_BLACK;
        staticSampler.MinLOD = 0.f;
        staticSampler.MaxLOD = 0.f;
        staticSampler.ShaderRegister = 0;
        staticSampler.RegisterSpace = 0;
        staticSampler.ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;
    
    
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
    glPolygonMode(GL_FRONT, (GLenum)last_polygon_mode[0]); glPolygonMode(GL_BACK, (GLenum)last_polygon_mode[1]);
    glViewport(last_viewport[0], last_viewport[1], (GLsizei)last_viewport[2], (GLsizei)last_viewport[3]);
    glScissor(last_scissor_box[0], last_scissor_box[1], (GLsizei)last_scissor_box[2], (GLsizei)last_scissor_box[3]);
}
    
        // Keyboard mapping. ImGui will use those indices to peek into the io.KeysDown[] array that we will update during the application lifetime.
    io.KeyMap[ImGuiKey_Tab] = VK_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = VK_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = VK_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = VK_UP;
    io.KeyMap[ImGuiKey_DownArrow] = VK_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = VK_PRIOR;
    io.KeyMap[ImGuiKey_PageDown] = VK_NEXT;
    io.KeyMap[ImGuiKey_Home] = VK_HOME;
    io.KeyMap[ImGuiKey_End] = VK_END;
    io.KeyMap[ImGuiKey_Insert] = VK_INSERT;
    io.KeyMap[ImGuiKey_Delete] = VK_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = VK_BACK;
    io.KeyMap[ImGuiKey_Space] = VK_SPACE;
    io.KeyMap[ImGuiKey_Enter] = VK_RETURN;
    io.KeyMap[ImGuiKey_Escape] = VK_ESCAPE;
    io.KeyMap[ImGuiKey_A] = 'A';
    io.KeyMap[ImGuiKey_C] = 'C';
    io.KeyMap[ImGuiKey_V] = 'V';
    io.KeyMap[ImGuiKey_X] = 'X';
    io.KeyMap[ImGuiKey_Y] = 'Y';
    io.KeyMap[ImGuiKey_Z] = 'Z';
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    void BENCHFUN(insertFront)(int iters, int initialSize) {
  BenchmarkSuspender braces;
  auto const obj = randomObject<VECTOR::value_type>();
  VECTOR v(initialSize, obj);
  braces.dismissing([&]() {
    FOR_EACH_RANGE (i, 0, iters) { v.insert(v.begin(), obj); }
  });
}
    
    template <class String>
String Uri::toString() const {
  String str;
  if (hasAuthority_) {
    toAppend(scheme_, '://', &str);
    if (!password_.empty()) {
      toAppend(username_, ':', password_, '@', &str);
    } else if (!username_.empty()) {
      toAppend(username_, '@', &str);
    }
    toAppend(host_, &str);
    if (port_ != 0) {
      toAppend(':', port_, &str);
    }
  } else {
    toAppend(scheme_, ':', &str);
  }
  toAppend(path_, &str);
  if (!query_.empty()) {
    toAppend('?', query_, &str);
  }
  if (!fragment_.empty()) {
    toAppend('#', fragment_, &str);
  }
  return str;
}
    
    
    {  bool initialized_{false};
  folly::Function<folly::Function<void(double)>()> initialize_;
  folly::Function<void(double)> increment_;
};
    
        PackedPtr newptr;
    newptr.init(newval, count);

        
        void absDiff(const Size2D &size,
             const s32 *src0Base, ptrdiff_t src0Stride,
             const s32 *src1Base, ptrdiff_t src1Stride,
             s32 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiffSigned<s32>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    void bitwiseNot(const Size2D &size,
                const u8 *srcBase, ptrdiff_t srcStride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
        std::vector<u8> _tmp;
    u8 *tmp = 0;
    if (borderType == BORDER_MODE_CONSTANT)
    {
        _tmp.assign(colsn + 2*cn, borderValue);
        tmp = &_tmp[cn];
    }
    
    
    {
    {        _x = internal::getRowPtr(dxBase, dxStride, i-1);
        _y = internal::getRowPtr(dyBase, dyStride, i-1);
    }
};
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin = 0, size_t endMargin = 0);
    
        for( ptrdiff_t y = 0; y < rows; y++ )
    {
        const u8* v0 = 0;
        const u8* v1 = internal::getRowPtr(srcBase, srcStride, y);
        const u8* v2 = 0;
        // make border
        if (border == BORDER_MODE_REFLECT101) {
            v0 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : y+1);
            v2 = internal::getRowPtr(srcBase, srcStride, y < rows-1 ? y+1 : rows > 1 ? rows-2 : 0);
        } else  if (border == BORDER_MODE_CONSTANT) {
            v0 = y > 0 ? internal::getRowPtr(srcBase, srcStride, y-1) : tmp;
            v2 = y < rows-1 ? internal::getRowPtr(srcBase, srcStride, y+1) : tmp;
        } else {
            v0 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 0);
            v2 = internal::getRowPtr(srcBase, srcStride, y < rows-1 ? y+1 : rows > 0 ? rows-1 : 0);
        }
        s16* drow = internal::getRowPtr(dstBase, dstStride, y);
    }
    
    b2Triangle::~b2Triangle(){
	delete[] x;
	delete[] y;
}
    
    #include 'EtcConfig.h'
#include 'EtcImage.h'
#include 'EtcColor.h'
#include 'EtcErrorMetric.h'
#include <memory>
    
    class clipperException : public std::exception
{
  public:
    clipperException(const char* description): m_descr(description) {}
    virtual ~clipperException() throw() {}
    virtual const char* what() const throw() {return m_descr.c_str();}
  private:
    std::string m_descr;
};
//------------------------------------------------------------------------------
    
    /** 16x32 multiplication, followed by a 16-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q16
static OPUS_INLINE opus_val32 MULT16_32_Q16_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q16\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b),'r'(a<<16)
  );
  return rd_hi;
}
#define MULT16_32_Q16(a, b) (MULT16_32_Q16_armv4(a, b))
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
    
    {  Engine::Get()->PushSync([=](RunContext ctx){
      ndout.CheckAndAlloc();
      cv::Mat buf(h, w, c == 3 ? CV_8UC3 : CV_8U, ndsrc.data().dptr_);
      cv::Mat dst(top+h+bot, left+w+right, c == 3 ? CV_8UC3 : CV_8U, ndout.data().dptr_);
      cv::copyMakeBorder(buf, dst, top, bot, left, right, type, cv::Scalar(value));
      CHECK(!dst.empty());
    }, ndout.ctx(), {ndsrc.var()}, {ndout.var()});
  NDArray *tmp = new NDArray();
  *tmp = ndout;
  *out = tmp;
  API_END();
}

    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
    /*
 * Call a function that produces a return value for each element of
 * `inputs' in parallel, and collect the results.
 *
 * Requires: the type returned from the function call must be
 * DefaultConstructible, and either MoveAssignable or Assignable.
 *
 * If `func' throws an exception, the results of the output vector
 * will contain some default-constructed values.
 */
template<class Func, class Items>
auto map(Items&& inputs, Func func) -> std::vector<decltype(func(inputs[0]))> {
  std::vector<decltype(func(inputs[0]))> retVec(inputs.size());
  auto const retMem = &retVec[0];
    }
    
      void branchFar(Label& l,
                 BranchConditions bc = BranchConditions::Always,
                 LinkReg lr = LinkReg::DoNotTouch,
                 ImmType immt = ImmType::TocOnly,
                 bool immMayChange = false) {
    l.branchFar(*this, bc, lr, immt, immMayChange);
  }
    
    APCCollection::~APCCollection() {
  // Zero for size is correct, because when this APCCollection was unreferenced
  // it already included the size of the inner handle.
  m_arrayHandle->unreferenceRoot(0);
}
    
    Array Directory::getMetaData() {
  return make_map_array(
    s_wrapper_type, s_plainfile, // PHP5 compatibility
    s_stream_type,  s_dir,
    s_mode,         s_r,
    s_unread_bytes, 0,
    s_seekable,     false,
    s_timed_out,    false,
    s_blocked,      true,
    s_eof,          isEof()
  );
}
    
    int emulate_zend(int argc, char** argv) {
  std::vector<std::string> newargv;
    }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    /**
 * For php://output, a simple wrapper of g_context->out().
 */
struct OutputFile : File {
  DECLARE_RESOURCE_ALLOCATION(OutputFile);
    }
    
    constexpr int64_t kDefaultPerfWarningRate = 100;
    
      /*!
   * \brief determines whether updater has enough knowledge about a given dataset
   *        to quickly update prediction cache its training data and performs the
   *        update if possible.
   * \param data: data matrix
   * \param out_preds: prediction cache to be updated
   * \return boolean indicating whether updater has capability to update
   *         the prediction cache. If true, the prediction cache will have been
   *         updated by the time this function returns.
   */
  virtual bool UpdatePredictionCache(const DMatrix* data,
                                     HostDeviceVector<bst_float>* out_preds) {
    return false;
  }
    
      void InitTreesToUpdate() {
    if (trees_to_update.size() == 0u) {
      for (auto & tree : trees) {
        trees_to_update.push_back(std::move(tree));
      }
      trees.clear();
      param.num_trees = 0;
      tree_info.clear();
    }
  }
    
     public:
  CompressedIterator() : buffer_(nullptr), symbol_bits_(0), offset_(0) {}
  CompressedIterator(CompressedByteT *buffer, int num_symbols)
      : buffer_(buffer), offset_(0) {
    symbol_bits_ = detail::SymbolBits(num_symbols);
  }
    
    
    {  /*! \brief push up temp */
  inline void PushTemp() {
    temp.Reserve(limit_size * 2);
    for (size_t l = 1; true; ++l) {
      this->InitLevel(l + 1);
      // check if level l is empty
      if (level[l].size == 0) {
        level[l].SetPrune(temp, limit_size);
        break;
      } else {
        // level 0 is actually temp space
        level[0].SetPrune(temp, limit_size);
        temp.SetCombine(level[0], level[l]);
        if (temp.size > limit_size) {
          // try next level
          level[l].size = 0;
        } else {
          // if merged record is still smaller, no need to send to next level
          level[l].CopyFrom(temp); break;
        }
      }
    }
  }
  /*! \brief get the summary after finalize */
  inline void GetSummary(SummaryContainer *out) {
    if (level.size() != 0) {
      out->Reserve(limit_size * 2);
    } else {
      out->Reserve(inqueue.queue.size());
    }
    inqueue.MakeSummary(out);
    if (level.size() != 0) {
      level[0].SetPrune(*out, limit_size);
      for (size_t l = 1; l < level.size(); ++l) {
        if (level[l].size == 0) continue;
        if (level[0].size == 0) {
          level[0].CopyFrom(level[l]);
        } else {
          out->SetCombine(level[0], level[l]);
          level[0].SetPrune(*out, limit_size);
        }
      }
      out->CopyFrom(level[0]);
    } else {
      if (out->size > limit_size) {
        temp.Reserve(limit_size);
        temp.SetPrune(*out, limit_size);
        out->CopyFrom(temp);
      }
    }
  }
  // used for debug, check if the sketch is valid
  inline void CheckValid(RType eps) const {
    for (size_t l = 1; l < level.size(); ++l) {
      level[l].CheckValid(eps);
    }
  }
  // initialize level space to at least nlevel
  inline void InitLevel(size_t nlevel) {
    if (level.size() >= nlevel) return;
    data.resize(limit_size * nlevel);
    level.resize(nlevel, Summary(nullptr, 0));
    for (size_t l = 0; l < level.size(); ++l) {
      level[l].data = dmlc::BeginPtr(data) + l * limit_size;
    }
  }
  // input data queue
  typename Summary::Queue inqueue;
  // number of levels
  size_t nlevel;
  // size of summary in each level
  size_t limit_size;
  // the level of each summaries
  std::vector<Summary> level;
  // content of the summary
  std::vector<Entry> data;
  // temporal summary, used for temp-merge
  SummaryContainer temp;
};
    
      void __set_success(const ExtensionResponse& val);
    
    typedef struct _ExtensionManager_extensions_presult__isset {
  _ExtensionManager_extensions_presult__isset() : success(false) {}
  bool success :1;
} _ExtensionManager_extensions_presult__isset;
    
    #include <fstream>
    
      // Log CurrentDirectory
  unsigned long long curDirBufferAddr = 0;
  if (data->ReadPointersVirtual(
          1, procParamsAddr + curDirOffset + 0x8, &curDirBufferAddr) != S_OK) {
    return Status(1);
  }
  wchar_t curDir[MAX_PATH + 1] = {0};
  data->ReadUnicodeStringVirtualWide(
      curDirBufferAddr, sizeof(curDir), curDir, MAX_PATH + 1, nullptr);
  r['current_directory'] = wstringToString(curDir);
    
    template <typename MapType>
void testTryTake() {
  auto m = MapType{
      {'dev', '/dev/'},
      {'etc', '/etc/'},
      {'usr', '/usr/'},
      {'bin', '/bin/'},
      {'var', '/var/'},
  };
  ASSERT_EQ(m.size(), 5);
  {
    auto exp = tryTake(m, 'dev');
    ASSERT_FALSE(exp.isError());
    EXPECT_EQ(exp.get(), '/dev/');
  }
  ASSERT_EQ(m.size(), 4);
  {
    auto exp = tryTake(m, 'etc');
    ASSERT_FALSE(exp.isError());
    EXPECT_EQ(exp.get(), '/etc/');
  }
  ASSERT_EQ(m.size(), 3);
  {
    auto exp = tryTake(m, 'no such key');
    ASSERT_TRUE(exp.isError());
    EXPECT_EQ(exp.getErrorCode(), MapTakeError::NoSuchKey);
  }
  EXPECT_EQ(m.size(), 3);
}
    
    
    {  needQuote = static_cast<int>(
      (isalpha(static_cast<unsigned char>(*zName)) == 0) && *zName != '_');
  for (i = n = 0; zName[i] != 0; i++, n++) {
    if ((isalnum(static_cast<unsigned char>(zName[i])) == 0) &&
        zName[i] != '_') {
      needQuote = 1;
      if (zName[i] == '\'') {
        n++;
      }
    }
  }
  if (needQuote != 0) {
    n += 2;
  }
  z = p->zDestTable = reinterpret_cast<char*>(malloc(n + 1));
  if (z == nullptr) {
    fprintf(stderr, 'Error: out of memory\n');
    exit(1);
  }
  n = 0;
  if (needQuote != 0) {
    z[n++] = '\'';
  }
  for (i = 0; zName[i] != 0; i++) {
    z[n++] = zName[i];
    if (zName[i] == '\'') {
      z[n++] = '\'';
    }
  }
  if (needQuote != 0) {
    z[n++] = '\'';
  }
  z[n] = 0;
}
    
    namespace osquery {
    }
    
    class PosixErrnoTests : public testing::Test {};
    
    #pragma once
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX10_CreateDeviceObjects();

    
        io.KeyCtrl = s3eKeyboardGetState(s3eKeyLeftControl) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightControl) == S3E_KEY_STATE_DOWN;
    io.KeyShift = s3eKeyboardGetState(s3eKeyLeftShift) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightShift) == S3E_KEY_STATE_DOWN;
    io.KeyAlt = s3eKeyboardGetState(s3eKeyLeftAlt) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightAlt) == S3E_KEY_STATE_DOWN;
    io.KeySuper = s3eKeyboardGetState(s3eKeyLeftWindows) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightWindows) == S3E_KEY_STATE_DOWN;
    
            if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
        // Cleanup
    err = vkDeviceWaitIdle(g_Device);
    check_vk_result(err);
    ImGui_ImplVulkan_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
    CleanupVulkan();
    
    
    {        // Rendering
        ImGui::Render();
        glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
    
    {    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            CreateRenderTarget();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}
    
        // Show the window
    ShowWindow(hwnd, SW_SHOWDEFAULT);
    UpdateWindow(hwnd);
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-11-30: Misc: Setting up io.BackendPlatformName so it can be displayed in the About Window.
//  2018-03-22: Added FreeGLUT Platform binding.
    
            Vec2 tempPos = _halfScreenSize - _followedNode->getPosition();
    
    // CatmullRom Spline formula:
Vec2 ccCardinalSplineAt(const Vec2 &p0, const Vec2 &p1, const Vec2 &p2, const Vec2 &p3, float tension, float t)
{
    float t2 = t * t;
    float t3 = t2 * t;
    
    /*
     * Formula: s(-ttt + 2tt - t)P1 + s(-ttt + tt)P2 + (2ttt - 3tt + 1)P2 + s(ttt - 2tt + t)P3 + (-2ttt + 3tt)P3 + s(ttt - tt)P4
     */
    float s = (1 - tension) / 2;
    }
    
    
    {    return false;
}
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(FlipX3D);
};
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPAGETURN3D_ACTION_H__
#define __ACTION_CCPAGETURN3D_ACTION_H__
    
        //
    // Overrides
    //
    virtual ProgressFromTo* clone() const override;
    virtual ProgressFromTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ProgressFromTo() {}
    virtual ~ProgressFromTo() {}
    
    
    {    delete action;
    return nullptr;
}
    
    bool Animation::initWithSpriteFrames(const Vector<SpriteFrame*>& frames, float delay/* = 0.0f*/, unsigned int loops/* = 1*/)
{
    _delayPerUnit = delay;
    _loops = loops;
    }
    
        for (const auto& anim : animations)
    {
        std::string name = anim.first;
        ValueMap& animationDict = const_cast<ValueMap&>(anim.second.asValueMap());
    }
    
    @since v0.99.5
@js cc.animationCache
*/
class CC_DLL AnimationCache : public Ref
{
public:
    /**
     * @js ctor
     */
    AnimationCache();
    /**
     * @js NA
     * @lua NA
     */
    ~AnimationCache();
    /** Returns the shared instance of the Animation cache 
	 @js NA
	*/
    static AnimationCache* getInstance();
    }
    
    #include '2d/CCNode.h'
#include 'base/CCProtocols.h'
#include 'base/ccTypes.h'
#include 'renderer/CCQuadCommand.h'
    
    PolygonInfo& PolygonInfo::operator= (const PolygonInfo& other)
{
    if(this != &other)
    {
        releaseVertsAndIndices();
        _filename = other._filename;
        _isVertsOwner = true;
        _rect = other._rect;
        triangles.verts = new (std::nothrow) V3F_C4B_T2F[other.triangles.vertCount];
        triangles.indices = new (std::nothrow) unsigned short[other.triangles.indexCount];
        CCASSERT(triangles.verts && triangles.indices, 'not enough memory');
        triangles.vertCount = other.triangles.vertCount;
        triangles.indexCount = other.triangles.indexCount;
        memcpy(triangles.verts, other.triangles.verts, other.triangles.vertCount * sizeof(other.triangles.verts[0]));
        memcpy(triangles.indices, other.triangles.indices, other.triangles.indexCount * sizeof(other.triangles.indices[0]));
    }
    return *this;
}
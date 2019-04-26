
        
        
/*
 * Checks if polygon is valid for use in Box2d engine.
 * Last ditch effort to ensure no invalid polygons are
 * added to world geometry.
 *
 * Performs a full check, for simplicity, convexity,
 * orientation, minimum angle, and volume.  This won't
 * be very efficient, and a lot of it is redundant when
 * other tools in this section are used.
 */
bool b2Polygon::IsUsable(bool printErrors){
	int32 error = -1;
	bool noError = true;
	if (nVertices < 3 || nVertices > b2_maxPolygonVertices) {noError = false; error = 0;}
	if (!IsConvex()) {noError = false; error = 1;}
	if (!IsSimple()) {noError = false; error = 2;}
	if (GetArea() < CMP_EPSILON) {noError = false; error = 3;}
    }
    
    
    {	b2PolyNode(b2Vec2& pos);
	b2PolyNode();
	void AddConnection(b2PolyNode& toMe);
	void RemoveConnection(b2PolyNode& fromMe);
	void RemoveConnectionByIndex(int32 index);
	bool IsConnectedTo(b2PolyNode& me);
	b2PolyNode* GetRightestConnection(b2PolyNode* incoming);
	b2PolyNode* GetRightestConnection(b2Vec2& incomingDir);
};
    
    
    {	}
    
    		m_mode = MODE_ETC1;
		m_boolDiff = m_pencodingbitsRGB8->individual.diff;
		m_boolFlip = m_pencodingbitsRGB8->individual.flip;
		if (m_boolDiff)
		{
			int iR2 = (int)(m_pencodingbitsRGB8->differential.red1 + m_pencodingbitsRGB8->differential.dred2);
			if (iR2 < 0)
			{
				iR2 = 0;
			}
			else if (iR2 > 31)
			{
				iR2 = 31;
			}
    }
    
    typedef opus_int16 opus_val16;
typedef opus_int32 opus_val32;
    
    void opus_ifft_neon(const kiss_fft_state *st,
                    const kiss_fft_cpx *fin,
                    kiss_fft_cpx *fout);
    
    
/** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q15
static OPUS_INLINE opus_val32 MULT16_32_Q15_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q15\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b), 'r'(a<<16)
  );
  /*We intentionally don't OR in the high bit of rd_lo for speed.*/
  return rd_hi<<1;
}
#define MULT16_32_Q15(a, b) (MULT16_32_Q15_armv4(a, b))
    
    /** 16x16 multiply-add where the result fits in 32 bits */
#define MAC16_16(c,a,b) (ADD32((c),MULT16_16((a),(b))))
/** 16x32 multiply, followed by a 15-bit shift right and 32-bit add.
    b must fit in 31 bits.
    Result fits in 32 bits. */
#define MAC16_32_Q15(c,a,b) ADD32((c),ADD32(MULT16_16((a),SHR((b),15)), SHR(MULT16_16((a),((b)&0x00007fff)),15)))
    
    
    {    return 0;
}

    
            vector<int> res;
        if( root == NULL )
            return res;
    
    int main() {
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    int main(int, char**)
{
    // Setup window
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;
    }
    
    // [Win32] Our example includes a copy of glfw3.lib pre-compiled with VS2010 to maximize ease of testing and compatibility with old VS compilers.
// To link with VS2010-era libraries, VS2015+ requires linking with legacy_stdio_definitions.lib, which we do using this pragma.
// Your own project should not be affected, as you are likely to link with a newer binary of GLFW that is adequate for your version of Visual Studio.
#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, 'legacy_stdio_definitions')
#endif
    
        // Setup Platform/Renderer bindings
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX10_Init(g_pd3dDevice);
    
    // Helper functions
    
    void glut_display_func()
{
    // Start the Dear ImGui frame
    ImGui_ImplOpenGL2_NewFrame();
    ImGui_ImplGLUT_NewFrame();
    }
    
        for (int n = 0; n < 20; n++)
    {
        printf('NewFrame() %d\n', n);
        io.DisplaySize = ImVec2(1920, 1080);
        io.DeltaTime = 1.0f / 60.0f;
        ImGui::NewFrame();
    }
    
    void Action::stop()
{
    _target = nullptr;
}
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual DelayTime* reverse() const override;
    virtual DelayTime* clone() const override;
    
        tHashElement *element = nullptr;
    // we should convert it to Ref*, because we save it as Ref*
    Ref *tmp = target;
    HASH_FIND_PTR(_targets, &tmp, element);
    if (! element)
    {
        element = (tHashElement*)calloc(sizeof(*element), 1);
        element->paused = paused;
        target->retain();
        element->target = target;
        HASH_ADD_PTR(_targets, target, element);
    }
    
    /**
 @brief This action simulates a page turn from the bottom right hand corner of the screen.
 
 @details It's not much use by itself but is used by the PageTurnTransition.
         Based on an original paper by L Hong et al.
         http://www.parc.com/publication/1638/turning-pages-of-3d-electronic-books.html
  
 @since v0.8.2
 */
class CC_DLL PageTurn3D : public Grid3DAction
{
public:
    /**
     * @js NA 
     */
    virtual GridBase* getGrid() override;
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
#ifndef __CCACTIONTWEEN_H__
#define __CCACTIONTWEEN_H__
    
    void AnimationCache::parseVersion1(const ValueMap& animations)
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    }
    
      // We keep the lowest and highest addresses allocated as a quick way
  // of determining that pointers are outside the heap. The estimate is
  // conservative, i.e. not all addresses in 'allocated' space are allocated
  // to our heap. The range is [lowest, highest[, inclusive on the low end
  // and exclusive on the high end.
  std::atomic<Address> lowest_ever_allocated_;
  std::atomic<Address> highest_ever_allocated_;
    
      if (FLAG_trace_stress_scavenge) {
    heap_.isolate()->PrintWithTimestamp(
        '[Scavenge] %.2lf%% of the new space capacity reached\n',
        current_percent);
    heap_.isolate()->PrintWithTimestamp('[Scavenge] %d%% is the new limit\n',
                                        limit_percentage_);
  }
    
    
    {  ForAllSweepingSpaces([this](AllocationSpace space) {
    CHECK(sweeping_list_[GetSweepSpaceIndex(space)].empty());
  });
  sweeping_in_progress_ = false;
}
    
      void andps(XMMRegister dst, Operand src);
  void andps(XMMRegister dst, XMMRegister src) { andps(dst, Operand(src)); }
  void xorps(XMMRegister dst, Operand src);
  void xorps(XMMRegister dst, XMMRegister src) { xorps(dst, Operand(src)); }
  void orps(XMMRegister dst, Operand src);
  void orps(XMMRegister dst, XMMRegister src) { orps(dst, Operand(src)); }
    
    
class InstructionTable {
 public:
  InstructionTable();
  const InstructionDesc& Get(byte x) const { return instructions_[x]; }
  static InstructionTable* get_instance() {
    static InstructionTable table;
    return &table;
  }
    }
    
    void AccessorAssembler::HandleStoreICHandlerCase(
    const StoreICParameters* p, TNode<MaybeObject> handler, Label* miss,
    ICMode ic_mode, ElementSupport support_elements) {
  Label if_smi_handler(this), if_nonsmi_handler(this);
  Label if_proto_handler(this), if_element_handler(this), call_handler(this),
      store_transition_or_global(this);
    }
    
    #include 'src/code-stub-assembler.h'

        
        #include 'atom/common/node_includes.h'
    
    void PowerMonitor::OnPowerStateChange(bool on_battery_power) {
  if (on_battery_power)
    Emit('on-battery');
  else
    Emit('on-ac');
}
    
    void Screen::OnDisplayAdded(const display::Display& new_display) {
  Emit('display-added', new_display);
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Screen);
};
    
    
    {  DISALLOW_COPY_AND_ASSIGN(WebRequest);
};
    
    void SavePageHandler::OnDownloadCreated(content::DownloadManager* manager,
                                        download::DownloadItem* item) {
  // OnDownloadCreated is invoked during WebContents::SavePage, so the |item|
  // here is the one stated by WebContents::SavePage.
  item->AddObserver(this);
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(TrackableObject);
};
    
    AtomQuotaPermissionContext::~AtomQuotaPermissionContext() {}
    
    // Now the tricky part: you need to register all test patterns before
// you can instantiate them.  The first argument of the macro is the
// test case name; the rest are the names of the tests in this test
// case.
REGISTER_TYPED_TEST_CASE_P(FooTest,
                           DoesBlah, HasPropertyA);
    
      // Create the directory so that path exists. Returns true if successful or
  // if the directory already exists; returns false if unable to create the
  // directory for any reason, including if the parent directory does not
  // exist. Not named 'CreateDirectory' because that's a macro on Windows.
  bool CreateFolder() const;
    
    template<typename T> inline
bool operator==(T* ptr, const linked_ptr<T>& x) {
  return ptr == x.get();
}
    
      CartesianProductGenerator4(const ParamGenerator<T1>& g1,
      const ParamGenerator<T2>& g2, const ParamGenerator<T3>& g3,
      const ParamGenerator<T4>& g4)
      : g1_(g1), g2_(g2), g3_(g3), g4_(g4) {}
  virtual ~CartesianProductGenerator4() {}
    
      const char* const name = typeid(T).name();
#  if GTEST_HAS_CXXABI_H_ || defined(__HP_aCC)
  int status = 0;
  // gcc's implementation of typeid(T).name() mangles the type name,
  // so we have to demangle it.
#   if GTEST_HAS_CXXABI_H_
  using abi::__cxa_demangle;
#   endif  // GTEST_HAS_CXXABI_H_
  char* const readable_name = __cxa_demangle(name, 0, 0, &status);
  const std::string name_str(status == 0 ? readable_name : name);
  free(readable_name);
  return name_str;
#  else
  return name;
#  endif  // GTEST_HAS_CXXABI_H_ || __HP_aCC
    
      virtual int GetNextPrime(int p) const {
    for (int n = p + 1; n > 0; n++) {
      if (IsPrime(n)) return n;
    }
    }
    
    
// Tests IsPrime()
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    #include <cstddef>
#include <cstdlib>
#include <sstream>
#include <limits>
#include <map>
#include <set>
#include <typeinfo>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
    
            const auto paramShape = GetMatrixShape(parameter);
        NDShape shape;
        if (factor == 0)
        {
            shape = NDShape({});
        }
        else
        {
            if (factor == 1)
                shape = parameter.Shape();
            else
                shape = NDShape({ paramShape[0], factor * paramShape[1] });
        }
    
    #pragma once
    
            m_aggregatedTrainingLossValue->Update(loss, computeDevice);
     
        if (m_aggregatedTrainingEvalCriterionValue)
        {
            m_aggregatedTrainingEvalCriterionValue->Update(evalCriterion, computeDevice);
        }
    
            void Erase() override
        {
            if (IsPacked())
            {
                m_packedData = nullptr;
                m_packedDataLayout = nullptr;
                m_isPacked = false;
            }
            else
                Value::Erase();
        }
    
    #include <string>
    
            case URX_LBN_END:
            // End of a negative look-behind block, after a successful match.
            {
                U_ASSERT(opValue>=0 && opValue+1<fPattern->fDataSize);
                if (fp->fInputIdx != fActiveLimit) {
                    //  The look-behind expression matched, but the match did not
                    //    extend all the way to the point that we are looking behind from.
                    //  FAIL out of here, which will take us back to the LB_CONT, which
                    //     will retry the match starting at another position or succeed
                    //     the look-behind altogether, whichever is appropriate.
                    fp = (REStackFrame *)fStack->popFrame(fFrameSize);
                    break;
                }
    }
    
    ScientificNumberFormatter::Style *ScientificNumberFormatter::SuperscriptStyle::clone() const {
    return new ScientificNumberFormatter::SuperscriptStyle(*this);
}
    
    #endif /* #if !UCONFIG_NO_BREAK_ITERATION */

    
    #endif

    
        UErrorCode status = U_ZERO_ERROR;
    checkTransitionRules(status);
    if (U_FAILURE(status)) {
        return FALSE;
    }
    
    // Bitwise comparison for the collation keys.
Collator::EComparisonResult
CollationKey::compareTo(const CollationKey& target) const
{
    UErrorCode errorCode = U_ZERO_ERROR;
    return static_cast<Collator::EComparisonResult>(compareTo(target, errorCode));
}
    
    int32_t StandardPlural::indexFromString(const char *keyword, UErrorCode &errorCode) {
    if (U_FAILURE(errorCode)) { return OTHER; }
    int32_t i = indexOrNegativeFromString(keyword);
    if (i >= 0) {
        return i;
    } else {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return OTHER;
    }
}
    
        // Create texture
    atlas->TexHeight = (atlas->Flags & ImFontAtlasFlags_NoPowerOfTwoHeight) ? (atlas->TexHeight + 1) : ImUpperPowerOfTwo(atlas->TexHeight);
    atlas->TexUvScale = ImVec2(1.0f / atlas->TexWidth, 1.0f / atlas->TexHeight);
    atlas->TexPixelsAlpha8 = (unsigned char*)ImGui::MemAlloc(atlas->TexWidth * atlas->TexHeight);
    memset(atlas->TexPixelsAlpha8, 0, atlas->TexWidth * atlas->TexHeight);
    
    IMGUI_IMPL_API bool     ImGui_ImplDX9_Init(IDirect3DDevice9* device);
IMGUI_IMPL_API void     ImGui_ImplDX9_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX9_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
    // Functions
bool    ImGui_ImplOpenGL2_Init()
{
    ImGuiIO& io = ImGui::GetIO();
    io.BackendRendererName = 'imgui_impl_opengl2';
    return true;
}
    
        // Size default to hold ~7 items. Fractional number of items helps seeing that we can scroll down/up without looking at scrollbar.
    ImVec2 size = CalcItemSize(size_arg, CalcItemWidth(), GetTextLineHeightWithSpacing() * 7.4f + style.ItemSpacing.y);
    ImVec2 frame_size = ImVec2(size.x, ImMax(size.y, label_size.y));
    ImRect frame_bb(window->DC.CursorPos, window->DC.CursorPos + frame_size);
    ImRect bb(frame_bb.Min, frame_bb.Max + ImVec2(label_size.x > 0.0f ? style.ItemInnerSpacing.x + label_size.x : 0.0f, 0.0f));
    window->DC.LastItemRect = bb; // Forward storage for ListBoxFooter.. dodgy.
    
    /** @class OrbitCamera
 *
 * @brief OrbitCamera action.
 * Orbits the camera around the center of the screen using spherical coordinates.
 * @ingroup Actions
 */
class CC_DLL OrbitCamera : public ActionCamera
{
public:
    /** Creates a OrbitCamera action with radius, delta-radius,  z, deltaZ, x, deltaX. 
     *
     * @param t Duration in seconds.
     * @param radius The start radius.
     * @param deltaRadius The delta radius.
     * @param angleZ The start angle in Z.
     * @param deltaAngleZ The delta angle in Z.
     * @param angleX The start angle in X.
     * @param deltaAngleX The delta angle in X.
     * @return An OrbitCamera.
     */
    static OrbitCamera* create(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX);
    
    /** Positions the camera according to spherical coordinates. 
     *
     * @param r The spherical radius.
     * @param zenith The spherical zenith.
     * @param azimuth The spherical azimuth.
     */
    void sphericalRadius(float *r, float *zenith, float *azimuth);
    }
    
        /** Creates and initializes a Points array with capacity.
     * @js NA
     * @param capacity The size of the array.
     */
    static PointArray* create(ssize_t capacity);
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
        if (action)
    {
        if (action->initWithDuration(duration, gridSize, position, twirls, amplitude))
        {
            action->autorelease();
        }
        else
        {
            CC_SAFE_RELEASE_NULL(action);
        }
    }
    
        /**
    @brief Set whether lens is concave.
    @param concave Whether lens is concave.
    */
    void setConcave(bool concave) { _concave = concave; }
    
    bool __CCCallFuncND::initWithTarget(Ref* selectorTarget, SEL_CallFuncND selector, void* d)
{
    if (CallFunc::initWithTarget(selectorTarget))
    {
        _data = d;
        _callFuncND = selector;
        return true;
    }
    
    return false;
}
    
    
    {// end of base_node group
/// @}
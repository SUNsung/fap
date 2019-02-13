
        
        /*!
 * \file graph_attr_types.h
 * \brief Data structures that can appear in graph attributes.
 */
#ifndef MXNET_GRAPH_ATTR_TYPES_H_
#define MXNET_GRAPH_ATTR_TYPES_H_
    
    
    { private:
  friend class NDArray;
  /*! \brief make constructor protected. */
  Imperative() {
    if (dmlc::GetEnv('MXNET_EXEC_BULK_EXEC_TRAIN', 1)) {
      backward_bulk_size_ =  dmlc::GetEnv('MXNET_EXEC_BULK_EXEC_MAX_NODE_TRAIN', 15);
    }
  }
  /*! \brief find the input/output ndarrays that are needed for backward */
  void GetBackwardDependency(
      const nnvm::NodePtr& node,
      uint32_t num_inputs, uint32_t num_outputs,
      std::vector<bool> *p_save_inputs,
      std::vector<bool> *p_save_outputs);
  /*! \brief indicate whether is training. */
#if DMLC_CXX11_THREAD_LOCAL
  static thread_local bool is_train_;
  static thread_local bool is_recording_;
#else
  static MX_THREAD_LOCAL bool is_train_;
  static MX_THREAD_LOCAL bool is_recording_;
#endif
  /*! \brief node count used for naming */
  std::atomic<uint64_t> node_count_{0};
  /*! \brief variable count used for naming */
  std::atomic<uint64_t> variable_count_{0};
  /*! \brief default backward bulk size */
  int backward_bulk_size_{0};
};
    
    
    {
    {}  // namespace exec
}  // namespace mxnet

    
    #include '../common/utils.h'
    
    
    {    if(group == UCOL_REORDER_CODE_DEFAULT) {
        group = (UColReorderCode)(UCOL_REORDER_CODE_FIRST + defaultSettings.getMaxVariable());
    }
    uint32_t varTop = data->getLastPrimaryForGroup(group);
    U_ASSERT(varTop != 0);
    ownedSettings->setMaxVariable(value, defaultSettings.options, errorCode);
    if(U_FAILURE(errorCode)) { return *this; }
    ownedSettings->variableTop = varTop;
    setFastLatinOptions(*ownedSettings);
    if(value == UCOL_DEFAULT) {
        setAttributeDefault(ATTR_VARIABLE_TOP);
    } else {
        setAttributeExplicitly(ATTR_VARIABLE_TOP);
    }
    return *this;
}
    
    UBool SearchIterator::operator==(const SearchIterator &that) const
{
    if (this == &that) {
        return TRUE;
    }
    return (m_breakiterator_            == that.m_breakiterator_ &&
            m_search_->isCanonicalMatch == that.m_search_->isCanonicalMatch &&
            m_search_->isOverlap        == that.m_search_->isOverlap &&
            m_search_->elementComparisonType == that.m_search_->elementComparisonType &&
            m_search_->matchedIndex     == that.m_search_->matchedIndex &&
            m_search_->matchedLength    == that.m_search_->matchedLength &&
            m_search_->textLength       == that.m_search_->textLength &&
            getOffset() == that.getOffset() &&
            (uprv_memcmp(m_search_->text, that.m_search_->text, 
                              m_search_->textLength * sizeof(UChar)) == 0));
}
    
    
#ifndef SELFMTIMPL
#define SELFMTIMPL
    
    // -------------------------------------
    
    #ifdef U_USE_COLLATION_KEY_DEPRECATES
// Create a copy of the byte array.
uint8_t*
CollationKey::toByteArray(int32_t& count) const
{
    uint8_t *result = (uint8_t*) uprv_malloc( sizeof(uint8_t) * fCount );
    }
    
    /**
 * Implement UnicodeMatcher
 */
UnicodeString& StringMatcher::toPattern(UnicodeString& result,
                                        UBool escapeUnprintable) const
{
    result.truncate(0);
    UnicodeString str, quoteBuf;
    if (segmentNumber > 0) {
        result.append((UChar)40); /*(*/
    }
    for (int32_t i=0; i<pattern.length(); ++i) {
        UChar keyChar = pattern.charAt(i);
        const UnicodeMatcher* m = data->lookupMatcher(keyChar);
        if (m == 0) {
            ICU_Utility::appendToRule(result, keyChar, FALSE, escapeUnprintable, quoteBuf);
        } else {
            ICU_Utility::appendToRule(result, m->toPattern(str, escapeUnprintable),
                         TRUE, escapeUnprintable, quoteBuf);
        }
    }
    if (segmentNumber > 0) {
        result.append((UChar)41); /*)*/
    }
    // Flush quoteBuf out to result
    ICU_Utility::appendToRule(result, -1,
                              TRUE, escapeUnprintable, quoteBuf);
    return result;
}
    
    
    {  if (action->second == Killswitch::refresh_) {
    auto result = refresh();
    if (result) {
      return Status::success();
    } else {
      return Status::failure(result.getError().getMessage());
    }
  } else {
    return KillswitchPlugin::call(request, response);
  }
}
    
    GTEST_TEST(ErrorTest, createErrorFromOtherError) {
  const auto firstMsg = std::string{'2018-06-28 08:13 451014'};
    }
    
    GTEST_TEST(ExpectedTest, get_error_from_expected_with_value) {
  auto action = []() {
    auto expected = Expected<int, TestError>(228);
    const auto& error = expected.getError();
    boost::ignore_unused(error);
  };
#ifndef NDEBUG
  ASSERT_DEATH(action(), 'Do not try to get error from Expected with value');
#else
  boost::ignore_unused(action);
#endif
}
    
    #include <osquery/utils/error/error.h>
#include <osquery/utils/expected/expected.h>
#include <sstream>
#include <string>
    
    Expected<int, NativeEvent::Error> extractIdFromTheSystem(
    fs::path const& full_event_path) {
  auto const id_path = full_event_path / 'id';
  auto id_in =
      std::fstream(id_path.native(), std::ios_base::in | std::ios_base::binary);
  auto id_str = std::string{};
  if (id_in.is_open()) {
    id_in >> id_str;
  }
  if (!id_in.is_open() || id_in.fail()) {
    return createError(NativeEvent::Error::System,
                       'Could not open linux event id file ')
           << boost::io::quoted(id_path.string());
  }
  auto id_exp = tryTo<SystemEventId>(id_str);
  if (id_exp.isError()) {
    return createError(NativeEvent::Error::System,
                       'Could not parse linux event id from the string ')
           << boost::io::quoted(id_str);
  }
  return id_exp.get();
}
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    void ImGui_ImplFreeGLUT_MouseWheelFunc(int button, int dir, int x, int y)
{
    ImGuiIO& io = ImGui::GetIO();
    io.MousePos = ImVec2((float)x, (float)y);
    if (dir > 0)
        io.MouseWheel += 1.0;
    else if (dir < 0)
        io.MouseWheel -= 1.0;
    (void)button; // Unused
}
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
        // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;       // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;        // We can honor io.WantSetMousePos requests (optional, rarely used)
    io.BackendPlatformName = 'imgui_impl_sdl';
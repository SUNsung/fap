
        
        namespace testing {
    }
    
    // Now the tricky part: you need to register all test patterns before
// you can instantiate them.  The first argument of the macro is the
// test case name; the rest are the names of the tests in this test
// case.
REGISTER_TYPED_TEST_CASE_P(FooTest,
                           DoesBlah, HasPropertyA);
    
    // DeathTest is a class that hides much of the complexity of the
// GTEST_DEATH_TEST_ macro.  It is abstract; its static Create method
// returns a concrete class that depends on the prevailing death test
// style, as defined by the --gtest_death_test_style and/or
// --gtest_internal_run_death_test flags.
    
    // This is used internally by all instances of linked_ptr<>.  It needs to be
// a non-template class because different types of linked_ptr<> can refer to
// the same object (linked_ptr<Superclass>(obj) vs linked_ptr<Subclass>(obj)).
// So, it needs to be possible for different types of linked_ptr to participate
// in the same circular linked list, so we need a single class type here.
//
// DO NOT USE THIS CLASS DIRECTLY YOURSELF.  Use linked_ptr<T>.
class linked_ptr_internal {
 public:
  // Create a new circle that includes only this instance.
  void join_new() {
    next_ = this;
  }
    }
    
    using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestCase;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;
    
    
    {  E element_;
  QueueNode* next_;
};
    
      void DoReads(int n);
    
      WritableFile* dest_;
  int block_offset_;  // Current offset in block
    
      // Change the options used by this builder.  Note: only some of the
  // option fields can be changed after construction.  If a field is
  // not allowed to change dynamically and its value in the structure
  // passed to the constructor is different from its value in the
  // structure passed to this method, this method will return an error
  // without changing any fields.
  Status ChangeOptions(const Options& options);
    
    namespace leveldb {
    }
    
    #include <vector>
#include 'Ratpack/ratpak.h'
    
    // Some commands are not affecting the state machine state of the calc flow. But these are more of
// some gui mode kind of settings (eg Inv button, or Deg,Rad , Back etc.). This list is getting bigger & bigger
// so we abstract this as a separate routine. Note: There is another side to this. Some commands are not
// gui mode setting to begin with, but once it is discovered it is invalid and we want to behave as though it
// was never inout, we need to revert the state changes made as a result of this test
bool IsGuiSettingOpCode(OpCode opCode)
{
    if (IsOpInRange(opCode, IDM_HEX, IDM_BIN) || IsOpInRange(opCode, IDM_QWORD, IDM_BYTE) || IsOpInRange(opCode, IDM_DEG, IDM_GRAD))
    {
        return true;
    }
    }
    
        if (numwidth >= QWORD_WIDTH && numwidth <= BYTE_WIDTH)
    {
        m_numwidth = numwidth;
        m_dwWordBitWidth = DwWordBitWidthFromeNumWidth(numwidth);
    }
    
    class CBinaryCommand final : public IBinaryCommand
{
public:
    CBinaryCommand(int command);
    void SetCommand(int command) override;
    int GetCommand() const override;
    CalculationManager::CommandType GetCommandType() const override;
    void Accept(_In_ ISerializeCommandVisitor& commandVisitor) override;
    }
    
    // maximum depth you can get by precedence. It is just an array's size limit.
static constexpr size_t MAXPRECDEPTH = 25;
    
        /**
     * Constructs a transliterator.
     */
    RemoveTransliterator();
    
        fFlags            = other.fFlags;
    fLiteralText      = other.fLiteralText;
    fMinMatchLen      = other.fMinMatchLen;
    fFrameSize        = other.fFrameSize;
    fDataSize         = other.fDataSize;
    fStaticSets       = other.fStaticSets;
    fStaticSets8      = other.fStaticSets8;
    
    int32_t ScriptSet::nextSetBit(int32_t fromIndex) const {
    // TODO: Wants a better implementation.
    if (fromIndex < 0) {
        return -1;
    }
    UErrorCode status = U_ZERO_ERROR;
    for (int32_t scriptIndex = fromIndex; scriptIndex < (int32_t)sizeof(bits)*8; scriptIndex++) {
        if (test((UScriptCode)scriptIndex, status)) {
            return scriptIndex;
        }
    }
    return -1;
}
    
    U_NAMESPACE_BEGIN
    
    #ifndef __SHARED_NUMBERFORMAT_H__
#define __SHARED_NUMBERFORMAT_H__
    
    U_NAMESPACE_BEGIN
    
    int32_t StandardPlural::indexFromString(const UnicodeString &keyword, UErrorCode &errorCode) {
    if (U_FAILURE(errorCode)) { return OTHER; }
    int32_t i = indexOrNegativeFromString(keyword);
    if (i >= 0) {
        return i;
    } else {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return OTHER;
    }
}
    
        /**
     * Sets U_ILLEGAL_ARGUMENT_ERROR if the keyword is not a plural form.
     *
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword
     */
    static int32_t indexFromString(const char *keyword, UErrorCode &errorCode);
    
    /**
 * UnicodeReplacer API
 */
UnicodeString& StringMatcher::toReplacerPattern(UnicodeString& rule,
                                                UBool /*escapeUnprintable*/) const {
    // assert(segmentNumber > 0);
    rule.truncate(0);
    rule.append((UChar)0x0024 /*$*/);
    ICU_Utility::appendNumber(rule, segmentNumber, 10, 1);
    return rule;
}
    
        /**
     * Copy constructor
     * @param o  the object to be copied.
     */
    StringMatcher(const StringMatcher& o);
        
    /**
     * Destructor
     */
    virtual ~StringMatcher();
    
        // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;         // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;          // We can honor io.WantSetMousePos requests (optional, rarely used)
    io.BackendPlatformName = 'imgui_impl_glfw';
    
    
    {        return &slot->metrics;
    }
    
    namespace ImGuiFreeType
{
    // Hinting greatly impacts visuals (and glyph sizes).
    // When disabled, FreeType generates blurrier glyphs, more or less matches the stb's output.
    // The Default hinting mode usually looks good, but may distort glyphs in an unusual way.
    // The Light hinting mode generates fuzzier glyphs but better matches Microsoft's rasterizer.
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
            ImGui::Text('This is some useful text.');                     // Display some text (you can use a format strings too)
        ImGui::Checkbox('Demo Window', &show_demo_window);            // Edit bools storing our window open/close state
        ImGui::Checkbox('Another Window', &show_another_window);
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write beyond the array limit
        array.at(5) = 'sixth';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    int main()
{
    // create a JSON value
    json j =
    {
        {'number', 1}, {'string', 'foo'}, {'array', {1, 2}}
    };
    }
    
    
    {    std::cout << null << '\n';
    std::cout << *res2.first << ' ' << std::boolalpha << res2.second << '\n';
}

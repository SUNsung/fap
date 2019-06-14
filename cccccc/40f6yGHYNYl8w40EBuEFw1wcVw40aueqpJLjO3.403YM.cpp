
        
            template <typename V1ElemType>
    TensorView<V1ElemType>* NDArrayView::GetWritableTensorView()
    {
        if (IsReadOnly())
            InvalidArgument('NDArrayView::GetWritableTensorView: Cannot get a writable TensorView from a read-only NDArrayView.');
    }
    
            static bool IsUDF(const FunctionPtr& f);
    
            template <typename ElementType>
        std::pair<std::shared_ptr<const Microsoft::MSR::CNTK::Matrix<ElementType>>, std::shared_ptr<Microsoft::MSR::CNTK::MBLayout>> PackedData()
        {
            if (!m_isPacked)
                InvalidArgument('PackedValue::PackedData called on a Value object that has already been unpacked.');
    }
    
    
    {private:
    long long m_start;
    long long m_end;
};
    
    int32_t
RuleBasedCollator::getSortKey(const UnicodeString &s,
                              uint8_t *dest, int32_t capacity) const {
    return getSortKey(s.getBuffer(), s.length(), dest, capacity);
}
    
    int32_t ScriptSet::countMembers() const {
    // This bit counter is good for sparse numbers of '1's, which is
    //  very much the case that we will usually have.
    int32_t count = 0;
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        uint32_t x = bits[i];
        while (x > 0) {
            count++;
            x &= (x - 1);    // and off the least significant one bit.
        }
    }
    return count;
}
    
    #include 'unicode/uobject.h'
#include 'unicode/utypes.h'
    
    /**
 * Overrides TimeZone
 * Queries if the given date is in Daylight Savings Time.
 */
UBool SimpleTimeZone::inDaylightTime(UDate date, UErrorCode& status) const
{
    // This method is wasteful since it creates a new GregorianCalendar and
    // deletes it each time it is called.  However, this is a deprecated method
    // and provided only for Java compatibility as of 8/6/97 [LIU].
    if (U_FAILURE(status)) return FALSE;
    GregorianCalendar *gc = new GregorianCalendar(*this, status);
    /* test for NULL */
    if (gc == 0) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return FALSE;
    }
    gc->setTime(date, status);
    UBool result = gc->inDaylightTime(status);
    delete gc;
    return result;
}
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
    static const char *gKeywords[StandardPlural::COUNT] = {
    'zero', 'one', 'two', 'few', 'many', 'other'
};
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the plural form corresponding to the keyword, or OTHER
     */
    static Form orOtherFromString(const char *keyword) {
        return static_cast<Form>(indexOrOtherIndexFromString(keyword));
    }
    
        // Create custom vertex declaration.
    // Unfortunately Allegro doesn't support 32-bits packed colors so we have to convert them to 4 floats.
    // We still use a custom declaration to use 'ALLEGRO_PRIM_TEX_COORD' instead of 'ALLEGRO_PRIM_TEX_COORD_PIXEL' else we can't do a reliable conversion.
    ALLEGRO_VERTEX_ELEMENT elems[] =
    {
        { ALLEGRO_PRIM_POSITION, ALLEGRO_PRIM_FLOAT_2, IM_OFFSETOF(ImDrawVertAllegro, pos) },
        { ALLEGRO_PRIM_TEX_COORD, ALLEGRO_PRIM_FLOAT_2, IM_OFFSETOF(ImDrawVertAllegro, uv) },
        { ALLEGRO_PRIM_COLOR_ATTR, 0, IM_OFFSETOF(ImDrawVertAllegro, col) },
        { 0, 0, 0 }
    };
    g_VertexDecl = al_create_vertex_decl(elems, sizeof(ImDrawVertAllegro));
    
    static void* FreeType_Realloc(FT_Memory /*memory*/, long cur_size, long new_size, void* block)
{
    // Implement realloc() as we don't ask user to provide it.
    if (block == NULL)
        return GImFreeTypeAllocFunc((size_t)new_size, GImFreeTypeAllocatorUserData);
    }
    
        // Main loop
    bool running = true;
    while (running)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        ALLEGRO_EVENT ev;
        while (al_get_next_event(queue, &ev))
        {
            ImGui_ImplAllegro5_ProcessEvent(&ev);
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
                running = false;
            if (ev.type == ALLEGRO_EVENT_DISPLAY_RESIZE)
            {
                ImGui_ImplAllegro5_InvalidateDeviceObjects();
                al_acknowledge_resize(display);
                ImGui_ImplAllegro5_CreateDeviceObjects();
            }
        }
    }
    
        // Tooltips
    IMGUI_API void          BeginTooltip();                                                     // begin/append a tooltip window. to create full-featured tooltip (with any kind of items).
    IMGUI_API void          EndTooltip();
    IMGUI_API void          SetTooltip(const char* fmt, ...) IM_FMTARGS(1);                     // set a text-only tooltip, typically use with ImGui::IsItemHovered(). override any previous call to SetTooltip().
    IMGUI_API void          SetTooltipV(const char* fmt, va_list args) IM_FMTLIST(1);
    
    // Extend ImGuiTabBarFlags_
enum ImGuiTabBarFlagsPrivate_
{
    ImGuiTabBarFlags_DockNode                   = 1 << 20,  // Part of a dock node [we don't use this in the master branch but it facilitate branch syncing to keep this around]
    ImGuiTabBarFlags_IsFocused                  = 1 << 21,
    ImGuiTabBarFlags_SaveSettings               = 1 << 22   // FIXME: Settings are handled by the docking system, this only request the tab bar to mark settings dirty when reordering tabs
};
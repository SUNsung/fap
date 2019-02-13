
        
        private:
    Ui::SignVerifyMessageDialog *ui;
    WalletModel *model;
    const PlatformStyle *platformStyle;
    
    static void secp256k1_ge_set_gej_zinv(secp256k1_ge *r, const secp256k1_gej *a, const secp256k1_fe *zi) {
    secp256k1_fe zi2;
    secp256k1_fe zi3;
    secp256k1_fe_sqr(&zi2, zi);
    secp256k1_fe_mul(&zi3, &zi2, zi);
    secp256k1_fe_mul(&r->x, &a->x, &zi2);
    secp256k1_fe_mul(&r->y, &a->y, &zi3);
    r->infinity = a->infinity;
}
    
    
    {    secp256k1_scalar_clear(&s);
    return ret;
}
    
    
    
    void ChaCha20::SetIV(uint64_t iv)
{
    input[14] = iv;
    input[15] = iv >> 32;
}
    
        void LearnerNesterov::UpdateHalf(const Parameter& parameter, const NDArrayViewPtr& gradientValue,
        const NDArrayViewPtr& smoothedGradientValue, size_t trainingSampleCount) const
    {
        const auto& compoundMatrix = GetWritableMatrix<float>(smoothedGradientValue);
        const auto& gradientMatrix = GetWritableMatrix<half>(gradientValue);
        auto smoothedGradientMatrix = compoundMatrix->ColumnSlice(0, gradientMatrix->GetNumCols());
        auto tempGradientMatrix = compoundMatrix->ColumnSlice(gradientMatrix->GetNumCols(), gradientMatrix->GetNumCols());
        auto parameterMatrix = compoundMatrix->ColumnSlice(2 * gradientMatrix->GetNumCols(), gradientMatrix->GetNumCols());
    }
    
    #pragma once
    
        /*virtual*/ Value::~Value()
    {
    }
    
        /*virtual*/ Dictionary Variable::Serialize() const
    {
        if (IsOutput())
            LogicError('Variable '%S': Output variables cannot be saved.', AsString().c_str());
    }
    
    #ifdef WIN32 // --- Windows version
    
    
    {private:
    long long m_start;
    long long m_end;
};
    
        virtual void /*ComputationNode::*/ BackpropTo(const size_t /*inputIndex*/, const FrameRange& fr) override
    {
        auto sliceInputGrad  = InputRef(0).GradientFor(fr);
        auto sliceOutputGrad =           GradientFor(fr);
    }
    
    public:
    OneHotNode(DEVICEID_TYPE deviceId, size_t num_class, bool is_sparse, int axis, const wstring& name) : Base(deviceId, name)
    {
        m_num_class = num_class;
        m_sparse = is_sparse;
        m_axis = axis;
        m_offset = -1;
    }
    //do we really need this?
    OneHotNode(DEVICEID_TYPE deviceId, const wstring& name) : OneHotNode(deviceId, 0, false, -1, name)
    {
    }
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX10_CreateDeviceObjects();

    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
// If you have multiple SDL events and some of them are not meant to be used by dear imgui, you may need to filter events based on their windowID field.
bool ImGui_ImplSDL2_ProcessEvent(const SDL_Event* event)
{
    ImGuiIO& io = ImGui::GetIO();
    switch (event->type)
    {
    case SDL_MOUSEWHEEL:
        {
            if (event->wheel.x > 0) io.MouseWheelH += 1;
            if (event->wheel.x < 0) io.MouseWheelH -= 1;
            if (event->wheel.y > 0) io.MouseWheel += 1;
            if (event->wheel.y < 0) io.MouseWheel -= 1;
            return true;
        }
    case SDL_MOUSEBUTTONDOWN:
        {
            if (event->button.button == SDL_BUTTON_LEFT) g_MousePressed[0] = true;
            if (event->button.button == SDL_BUTTON_RIGHT) g_MousePressed[1] = true;
            if (event->button.button == SDL_BUTTON_MIDDLE) g_MousePressed[2] = true;
            return true;
        }
    case SDL_TEXTINPUT:
        {
            io.AddInputCharactersUTF8(event->text.text);
            return true;
        }
    case SDL_KEYDOWN:
    case SDL_KEYUP:
        {
            int key = event->key.keysym.scancode;
            IM_ASSERT(key >= 0 && key < IM_ARRAYSIZE(io.KeysDown));
            io.KeysDown[key] = (event->type == SDL_KEYDOWN);
            io.KeyShift = ((SDL_GetModState() & KMOD_SHIFT) != 0);
            io.KeyCtrl = ((SDL_GetModState() & KMOD_CTRL) != 0);
            io.KeyAlt = ((SDL_GetModState() & KMOD_ALT) != 0);
            io.KeySuper = ((SDL_GetModState() & KMOD_GUI) != 0);
            return true;
        }
    }
    return false;
}
    
    void DHTReplaceNodeTask::sendMessage()
{
  std::shared_ptr<DHTNode> questionableNode = bucket_->getLRUQuestionableNode();
  if (!questionableNode) {
    setFinished(true);
  }
  else {
    getMessageDispatcher()->addMessageToQueue(
        getMessageFactory()->createPingMessage(questionableNode), timeout_,
        make_unique<DHTPingReplyMessageCallback<DHTReplaceNodeTask>>(this));
  }
}
    
      uint32_t temp32;
  uint64_t temp64;
  // time
  if (version == 2) {
    READ_CHECK(fp, &temp32, sizeof(temp32));
    serializedTime_.setTimeFromEpoch(ntohl(temp32));
    // 4bytes reserved
    readBytes(fp, buf, buf.size(), 4);
  }
  else {
    READ_CHECK(fp, &temp64, sizeof(temp64));
    serializedTime_.setTimeFromEpoch(ntoh64(temp64));
  }
    
    class DHTTaskFactory {
public:
  virtual ~DHTTaskFactory() = default;
    }
    
    #endif // D_DHT_TOKEN_UPDATE_COMMAND_H

    
        /** Returns a new action that performs the exact reverse of the action. 
     *
     * @return A new action that performs the exact reverse of the action.
     * @js NA
     */
    virtual Action* reverse() const
    {
        CC_ASSERT(0);
        return nullptr;
    }
    
    /** @class CatmullRomTo
 * An action that moves the target with a CatmullRom curve to a destination point.
 * A Catmull Rom is a Cardinal Spline with a tension of 0.5.
 * http://en.wikipedia.org/wiki/Cubic_Hermite_spline#Catmull.E2.80.93Rom_spline
 * @ingroup Actions
 */
class CC_DLL CatmullRomTo : public CardinalSplineTo
{
public:
    }
    
    bool Waves::initWithDuration(float duration, const Size& gridSize, unsigned int waves, float amplitude, bool horizontal, bool vertical)
{
    if (Grid3DAction::initWithDuration(duration, gridSize))
    {
        _waves = waves;
        _amplitude = amplitude;
        _amplitudeRate = 1.0f;
        _horizontal = horizontal;
        _vertical = vertical;
    }
    }
    
         typedef void (Ref::*SEL_CallFuncO)(Ref*);
     */
    bool initWithTarget(Ref* target, SEL_CallFuncO selector, Ref* object);
    
protected:
    /** object to be passed as argument */
    Ref* _object;
    SEL_CallFuncO _callFuncO;
    
    void ActionManager::resumeTarget(Node *target)
{
    tHashElement *element = nullptr;
    HASH_FIND_PTR(_targets, &target, element);
    if (element)
    {
        element->paused = false;
    }
}
    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
        /** array of AnimationFrames. */
    Vector<AnimationFrame*> _frames;
    
    
    {    return s_sharedAnimationCache;
}
    
    
    {}
    
    http://www.cocos2d-x.org
    
    std::vector<cocos2d::Vec2> AutoPolygon::marchSquare(const Rect& rect, const Vec2& start, float threshold)
{
    int stepx = 0;
    int stepy = 0;
    int prevx = 0;
    int prevy = 0;
    int startx = start.x;
    int starty = start.y;
    int curx = startx;
    int cury = starty;
    unsigned int count = 0;
    std::vector<int> case9s;
    std::vector<int> case6s;
    int i;
    std::vector<int>::iterator it;
    std::vector<cocos2d::Vec2> _points;
    do{
        int sv = getSquareValue(curx, cury, rect, threshold);
        switch(sv){
    }
    }
    }
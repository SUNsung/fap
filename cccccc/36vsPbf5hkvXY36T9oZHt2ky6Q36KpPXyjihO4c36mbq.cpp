
        
        
    {  // Produce the generic signature and environment.
  // FIXME: Pass in a source location for the conformance, perhaps? It seems
  // like this could fail.
  syntheticSignature =
    std::move(builder).computeGenericSignature(SourceLoc());
  syntheticEnvironment = syntheticSignature->createGenericEnvironment();
}

    
    #include 'swift/AST/GenericSignature.h'
#include 'swift/AST/SubstitutionMap.h'
#include 'llvm/Support/TrailingObjects.h'
#include 'llvm/ADT/FoldingSet.h'
    
    void SyntaxASTMap::dumpSyntaxMap() const {
  for (const auto &SyntaxAndSemaNode : SyntaxMap) {
    auto SyntaxNode = SyntaxAndSemaNode.getFirst();
    auto SemanticNode = SyntaxAndSemaNode.getSecond();
    }
    }
    
    struct DefaultCache {
  llvm::sys::Mutex Mux;
  CacheImpl::CallBacks CBs;
  llvm::DenseMap<DefaultCacheKey, void *> Entries;
    }
    
      Begin = new char[capacity];
  EndOfAllocation = Begin + capacity;
  End = Begin + oldSize + needed;
  std::memcpy(Begin, oldBegin, oldSize);
    
      // Set the 'targetEnvironment' platform condition if targeting a simulator
  // environment. Otherwise _no_ value is present for targetEnvironment; it's
  // an optional disambiguating refinement of the triple.
  if (swift::tripleIsAnySimulator(Target))
    addPlatformConditionValue(PlatformConditionKind::TargetEnvironment,
                              'simulator');
    
    /// Classify a potential CF typedef.
CFPointeeInfo
CFPointeeInfo::classifyTypedef(const clang::TypedefNameDecl *typedefDecl) {
  clang::QualType type = typedefDecl->getUnderlyingType();
    }
    
    namespace tesseract {
    }
    
    #endif

    
    // Helper method to convert an orientation index to its value in degrees.
// The value represents the amount of clockwise rotation in degrees that must be
// applied for the text to be upright (readable).
TESS_API int OrientationIdToValue(const int& id);
    
      /**
   * Return whether this iterator points anywhere in the first textline of a
   * paragraph.
   */
  bool IsWithinFirstTextlineOfParagraph() const;
    
    // Integrate the parameters editor as popupmenu into the existing scrollview
// window (usually the pg editor). If sv == null, create a new empty
// empty window and attach the parameters editor to that window (ugly).
ParamsEditor::ParamsEditor(tesseract::Tesseract* tess,
                                 ScrollView* sv) {
  if (sv == nullptr) {
    const char* name = 'ParamEditorMAIN';
    sv = new ScrollView(name, 1, 1, 200, 200, 300, 200);
  }
    }
    
        /*virtual*/ void LearnerSGD::Update(const Parameter& parameter, const NDArrayViewPtr& gradientValue, 
                                        const NDArrayViewPtr& smoothedGradientValue, size_t trainingSampleCount) /*override*/
    {
        DISPATCH_TO_TYPED_UPDATE_FUNCTION;
    }
    
        protected:
        // If a gradient is sparse, we skip updating columns with zero gradients. This means some 
        // columns will receive their updates when their gradient is non-zero. The only exception
        // is that once every s_SyncInterval updates we will make sure all columns are up to date. 
        static const int s_SyncInterval;
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    #include '2d/CCActionCamera.h'
#include '2d/CCNode.h'
#include 'platform/CCStdC.h'
    
    Quad3 TiledGrid3DAction::getTile(const Vec2& pos) const
{
    TiledGrid3D *g = (TiledGrid3D*)_gridNodeTarget->getGrid();
    return g->getTile(pos);
}
    
        virtual void transformTile(const Vec2& pos, float distance) override;
    
    
    {        for(const auto &value : spritesheets) {
            std::string path = FileUtils::getInstance()->fullPathFromRelativeFile(value.asString(),plist);
            SpriteFrameCache::getInstance()->addSpriteFramesWithFile(path);
        }
    }
    
        /** Adds a Animation with a name.
     *
     * @param animation An animation.
     * @param name The name of animation.
     */
    void addAnimation(Animation *animation, const std::string& name);
    
    //---- Avoid multiple STB libraries implementations, or redefine path/filenames to prioritize another version
// By default the embedded implementations are declared static and not available outside of imgui cpp files.
//#define IMGUI_STB_TRUETYPE_FILENAME   'my_folder/stb_truetype.h'
//#define IMGUI_STB_RECT_PACK_FILENAME  'my_folder/stb_rect_pack.h'
//#define IMGUI_DISABLE_STB_TRUETYPE_IMPLEMENTATION
//#define IMGUI_DISABLE_STB_RECT_PACK_IMPLEMENTATION
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
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
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    void ImGui_ImplDX9_InvalidateDeviceObjects()
{
    if (!g_pd3dDevice)
        return;
    if (g_pVB)
    {
        g_pVB->Release();
        g_pVB = NULL;
    }
    if (g_pIB)
    {
        g_pIB->Release();
        g_pIB = NULL;
    }
    }
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver. 
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Create texture
    atlas->TexHeight = (atlas->Flags & ImFontAtlasFlags_NoPowerOfTwoHeight) ? (atlas->TexHeight + 1) : ImUpperPowerOfTwo(atlas->TexHeight);
    atlas->TexUvScale = ImVec2(1.0f / atlas->TexWidth, 1.0f / atlas->TexHeight);
    atlas->TexPixelsAlpha8 = (unsigned char*)ImGui::MemAlloc(atlas->TexWidth * atlas->TexHeight);
    memset(atlas->TexPixelsAlpha8, 0, atlas->TexWidth * atlas->TexHeight);
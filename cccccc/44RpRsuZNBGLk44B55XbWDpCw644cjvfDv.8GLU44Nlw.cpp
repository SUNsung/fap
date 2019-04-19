
        
        #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
    
      static void OnDoneRecvTrailingMetadataCb(void* user_data, grpc_error* error);
    
    #include <grpc/support/port_platform.h>
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetString(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    #ifndef GRPC_INTERNAL_CPP_UTIL_CORE_STATS_H
#define GRPC_INTERNAL_CPP_UTIL_CORE_STATS_H
    
    void Assembler::li64TOC(const Reg64& rt, int64_t imm64, ImmType /*immt*/,
                        bool immMayChange) {
  int64_t TOCoffset;
  TOCoffset = VMTOC::getInstance().pushElem(imm64, immMayChange);
    }
    
    APCHandle::Pair APCCollection::WrapArray(APCHandle::Pair inner,
                                         CollectionType colType) {
  auto const col = new APCCollection;
  col->m_arrayHandle = inner.handle;
  col->m_colType = colType;
  return { &col->m_handle, inner.size + sizeof(APCCollection) };
}
    
      Object createObject() const;
    
    
    {}
    
    
    { private:
  int mkdir_recursive(const String& path, int mode);
};
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    
    {}
    
    
    {        // Apply multiply operator
        if (cfg.RasterizerMultiply != 1.0f)
        {
            unsigned char multiply_table[256];
            ImFontAtlasBuildMultiplyCalcLookupTable(multiply_table, cfg.RasterizerMultiply);
            stbrp_rect* r = &src_tmp.Rects[0];
            for (int glyph_i = 0; glyph_i < src_tmp.GlyphsCount; glyph_i++, r++)
                if (r->was_packed)
                    ImFontAtlasBuildMultiplyRectAlpha8(multiply_table, atlas->TexPixelsAlpha8, r->x, r->y, r->w, r->h, atlas->TexWidth * 1);
        }
        src_tmp.Rects = NULL;
    }
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
        // Cleanup
    ImGui_ImplOpenGL2_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
    
    // About GLSL version:
//  The 'glsl_version' initialization parameter should be NULL (default) or a '#version XXX' string.
//  On computer platform the GLSL version default to '#version 130'. On OpenGL ES 3 platform it defaults to '#version 300 es'
//  Only override if your GL version doesn't handle this GLSL version. See GLSL version table at the top of imgui_impl_opengl3.cpp.
    
    Action::Action()
:_originalTarget(nullptr)
,_target(nullptr)
,_tag(Action::INVALID_TAG)
,_flags(0)
{
#if CC_ENABLE_SCRIPT_BINDING
    ScriptEngineProtocol* engine = ScriptEngineManager::getInstance()->getScriptEngine();
    _scriptType = engine != nullptr ? engine->getScriptType() : kScriptTypeNone;
#endif
}
    
        /** 
     * Creates the action with X Y Z factor.
     * @param duration Duration time, in seconds.
     * @param sx Scale factor of x.
     * @param sy Scale factor of y.
     * @param sz Scale factor of z.
     * @return An autoreleased ScaleBy object.
     */
    static ScaleBy* create(float duration, float sx, float sy, float sz);
    
    
    {    setTile(pos, coords);
}
    
    
    {    //turn the result into simply polygon (AKA, fix overlap)
    
    //clamp into the specified rect
    ClipperLib::Clipper cl;
    cl.StrictlySimple(true);
    cl.AddPath(p->Contour, ClipperLib::ptSubject, true);
    //create the clipping rect
    ClipperLib::Path clamp;
    clamp.push_back(ClipperLib::IntPoint(0, 0));
    clamp.push_back(ClipperLib::IntPoint(rect.size.width/_scaleFactor * PRECISION, 0));
    clamp.push_back(ClipperLib::IntPoint(rect.size.width/_scaleFactor * PRECISION, rect.size.height/_scaleFactor * PRECISION));
    clamp.push_back(ClipperLib::IntPoint(0, rect.size.height/_scaleFactor * PRECISION));
    cl.AddPath(clamp, ClipperLib::ptClip, true);
    cl.Execute(ClipperLib::ctIntersection, out);
    
    std::vector<Vec2> outPoints;
    ClipperLib::PolyNode* p2 = out.GetFirst();
    while(p2->IsHole()){
        p2 = p2->GetNext();
    }
    for(const auto& pt : p2->Contour)
    {
        outPoints.push_back(Vec2(pt.X/PRECISION, pt.Y/PRECISION));
    }
    return outPoints;
}

        
        #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
    
    #include <string>
    
      std::string namespace_;
  std::string reflectionClassname_;
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    #include <string>
#include <google/protobuf/compiler/code_generator.h>
    
    #endif // incl_HPHP_TIMER_H_

    
      /**
   * Get a description of the type of transport.
   */
  String describe() const override {
    return s_pagelet;
  }
    
    void Vunit::freeScratchBlock(Vlabel l) {
  // This will leak blocks if anything's been added since the corresponding
  // call to makeScratchBlock(), but it's harmless.
  if (l == blocks.size() - 1) blocks.pop_back();
}
    
      // We lower Switch to a series of comparisons if any of the successors are in
  // included in the region.
  auto const shouldLower =
    std::any_of(offsets.begin(), offsets.end(), [&](Offset o) {
      SrcKey sk(curSrcKey(env), bcOff(env) + o);
      return env.irb->hasBlock(sk);
    });
  if (shouldLower && profile.optimizing()) {
    auto const values = sortedSwitchProfile(profile, iv.size());
    FTRACE(2, 'Switch profile data for Switch @ {}\n', bcOff(env));
    for (UNUSED auto const& val : values) {
      FTRACE(2, '  case {} hit {} times\n', val.caseIdx, val.count);
    }
    }
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. If the block
 * starts with a DefLabel expecting a StkPtr, this function will return an
 * intermediate block that passes the current sp.
 */
Block* getBlock(IRGS& env, Offset offset);
    
    
    {
    {///////////////////////////////////////////////////////////////////////////////
}}
#endif

    
    namespace {
void freezeClusters(const TargetGraph& cg, std::vector<Cluster>& clusters) {
  uint32_t totalSize = 0;
  std::sort(clusters.begin(), clusters.end(), compareClustersDensity);
  for (auto& cluster : clusters) {
    uint32_t newSize = totalSize + cluster.size;
    if (newSize > kFrozenPages * kPageSize) break;
    cluster.frozen = true;
    totalSize = newSize;
    auto fid = cluster.targets[0];
    HFTRACE(1, 'freezing cluster for func %d, size = %u, samples = %u)\n',
            fid, cg.targets[fid].size, cg.targets[fid].samples);
  }
}
    }
    
    bool js_cocos2dx_builder_CCBAnimationManager_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBAnimationManager_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBAnimationManager(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBAnimationManager_moveAnimationsFromNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_actionForSoundChannel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setBaseValue(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getLastCompletedSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setRootNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_actionForCallbackChannel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getKeyframeCallbacks(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRunningSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRootNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setDelegate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getSequenceDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getSequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setSequences(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_debug(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_CCBAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
    
    bool js_cocos2dx_physics3d_Physics3DSliderConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DSliderConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DSliderConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setPoweredAngMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getLinearPos(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getFrameOffsetA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getFrameOffsetB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setPoweredLinMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getAngularPos(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setUpperLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUpperAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getPoweredAngMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setLowerAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setUpperAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setTargetLinMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUseFrameOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setUseFrameOffset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setLowerLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getTargetLinMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getLowerLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getPoweredLinMotor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setFrames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getMaxAngMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUpperLinLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setMaxLinMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setTargetAngMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getLowerAngLimit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionDirAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getTargetAngMotorVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getMaxLinMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingOrthoLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessOrthoAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingLimLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setMaxAngMotorForce(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessDirLin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessLimAng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_getUseLinearReferenceFrameA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DSliderConstraint_Physics3DSliderConstraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    
    
    {		Test::Step(settings);
		m_debugDraw.DrawString(5, m_textLine, 'Keys: (d) dynamic, (s) static, (k) kinematic');
		m_textLine += DRAW_STRING_NEW_LINE;
	}
    
    
    {	bool m_broke;
	bool m_break;
};
    
    #ifndef CANTILEVER_H
#define CANTILEVER_H
    
    			b2RevoluteJointDef jd;
    
    #include <vector>
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    #include <math.h>
    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_JPEG_ERROR_H_
#define GUETZLI_JPEG_ERROR_H_
    
      void ApplyGlobalQuantization(const int q[3][kDCTBlockSize]);
    
    // Copyright (C) 2015 by Giovanni Zito
// This file is part of ImGui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // FreeType glyph rasterizer.
    // NB: No ctor/dtor, explicitly call Init()/Shutdown()
    struct FreeTypeFont
    {
        bool        Init(const ImFontConfig& cfg, unsigned int extra_user_flags);   // Initialize from an external data buffer. Doesn't copy data, and you must ensure it stays valid up to this object lifetime.
        void        Shutdown();
        void        SetPixelHeight(int pixel_height);                               // Change font pixel size. All following calls to RasterizeGlyph() will use this size
    }
    
        // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        glfwPollEvents();
        ImGui_ImplGlfwGL3_NewFrame();
    }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    //---- Tip: You can add extra functions within the ImGui:: namespace, here or in your own headers files.
/*
namespace ImGui
{
    void MyFunction(const char* name, const MyMatrix44& v);
}
*/

    
            D3DCompile(vertexShader, strlen(vertexShader), NULL, NULL, NULL, 'main', 'vs_4_0', 0, 0, &g_pVertexShaderBlob, NULL);
        if (g_pVertexShaderBlob == NULL) // NB: Pass ID3D10Blob* pErrorBlob to D3DCompile() to get error showing in (const char*)pErrorBlob->GetBufferPointer(). Make sure to Release() the blob!
            return false;
        if (g_pd3dDevice->CreateVertexShader((DWORD*)g_pVertexShaderBlob->GetBufferPointer(), g_pVertexShaderBlob->GetBufferSize(), &g_pVertexShader) != S_OK)
            return false;
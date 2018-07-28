
        
        #if GOOGLE_CUDA
    
    
    {  return call;
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      // RPC handler for deleting a session.
  void CloseSessionHandler(
      MasterCall<CloseSessionRequest, CloseSessionResponse>* call) {
    master_impl_->CloseSession(&call->request, &call->response,
                               [call](const Status& status) {
                                 call->SendResponse(ToGrpcStatus(status));
                               });
    ENQUEUE_REQUEST(CloseSession, false);
  }
    
    #include 'tensorflow/core/distributed_runtime/partial_run_mgr.h'
    
      partial_run_mgr_.PartialRunDone(step_id,
                                  [this](Status status) { set_status(status); },
                                  param.partial_run_status);
  partial_run_mgr_.ExecutorDone(step_id, param.executor_status);
    
    class TFRecordReader : public ReaderBase {
 public:
  TFRecordReader(const string& node_name, const string& compression_type,
                 Env* env)
      : ReaderBase(strings::StrCat('TFRecordReader '', node_name, ''')),
        env_(env),
        offset_(0),
        compression_type_(compression_type) {}
    }
    
    extern JSClass  *jsb_cocosbuilder_CCBReader_class;
extern JSObject *jsb_cocosbuilder_CCBReader_prototype;
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
        CC_INCREMENT_GL_DRAWN_BATCHES_AND_VERTICES(2,vertexCount*2);
    
    #define	RAND_LIMIT	32767
#define DRAW_STRING_NEW_LINE 25
    
    				b2Vec2 anchor(-15.0f + 2.0f * i, 15.0f);
				jd.Initialize(prevBody, body, anchor);
				m_world->CreateJoint(&jd);
    
        // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    w = al_get_display_width(g_Display);
    h = al_get_display_height(g_Display);
    io.DisplaySize = ImVec2((float)w, (float)h);
    
        // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;         // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;          // We can honor io.WantSetMousePos requests (optional, rarely used)
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    
    {        glfwMakeContextCurrent(window);
        glfwSwapBuffers(window);
    }
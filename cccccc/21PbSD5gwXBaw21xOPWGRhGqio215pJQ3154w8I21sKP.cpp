
        
        
    
    
    
    void GLESDebugDraw::DrawTransform(const b2Transform& xf)
{
    b2Vec2 p1 = xf.p, p2;
    const float32 k_axisScale = 0.4f;
    p2 = p1 + k_axisScale * xf.q.GetXAxis();
    DrawSegment(p1, p2, b2Color(1,0,0));
    }
    
    
#endif

    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the sdl_opengl3_example/ folder**
// See imgui_impl_sdl.cpp for details.
    
    
    {    // Create Framebuffer:
    {
        VkImageView attachment[1];
        VkFramebufferCreateInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
        info.renderPass = g_RenderPass;
        info.attachmentCount = 1;
        info.pAttachments = attachment;
        info.width = fb_width;
        info.height = fb_height;
        info.layers = 1;
        for (uint32_t i = 0; i < g_BackBufferCount; i++)
        {
            attachment[0] = g_BackBufferView[i];
            err = vkCreateFramebuffer(g_Device, &info, g_Allocator, &g_Framebuffer[i]);
            check_vk_result(err);
        }
    }
}
    
            param[0].ParameterType = D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS;
        param[0].Constants.ShaderRegister = 0;
        param[0].Constants.RegisterSpace = 0;
        param[0].Constants.Num32BitValues = 16;
        param[0].ShaderVisibility = D3D12_SHADER_VISIBILITY_VERTEX;
    
    
    {}  // namespace grpc_cpp_generator
    
    struct Parameters {
  //Defines the custom parameter types for methods
  //eg: flatbuffers uses flatbuffers.Builder as input for the client and output for the server
  grpc::string custom_method_io_type;
    }
    
    #include 'monster_test_generated.h'
#include 'monster_test.grpc.fb.h'
    
      // Appends the given text to the generated code as well as a newline
  // character.  Any text within {{ and }} delimeters is replaced by values
  // previously stored in the CodeWriter by calling SetValue above.  The newline
  // will be suppressed if the text ends with the \\ character.
  void operator+=(std::string text);
    
    
    {  printf('The FlatBuffer was successfully created and verified!\n');
}

    
          ss << '\n';
    
      // Test flexbuffer if available:
  auto flex = monster->flex();
  // flex is a vector of bytes you can memcpy etc.
  TEST_EQ(flex->size(), 4);  // Encoded FlexBuffer bytes.
  // However, if you actually want to access the nested data, this is a
  // convenient accessor that directly gives you the root value:
  TEST_EQ(monster->flex_flexbuffer_root().AsInt16(), 1234);
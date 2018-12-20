
        
        #include 'collision_object_bullet.h'
#include 'space_bullet.h'
    
    class PinJointBullet : public JointBullet {
	class btPoint2PointConstraint *p2pConstraint;
    }
    
    class BulletPhysicsServer;
    
    bool ImGui::InputText(const char* label, std::string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
    struct VERTEX_CONSTANT_BUFFER
{
    float   mvp[4][4];
};
    
    
    {    // Store our identifier
    static_assert(sizeof(ImTextureID) >= sizeof(g_hFontSrvGpuDescHandle.ptr), 'Can't pack descriptor handle into TexID, 32-bit not supported yet.');
    io.Fonts->TexID = (ImTextureID)g_hFontSrvGpuDescHandle.ptr;
}
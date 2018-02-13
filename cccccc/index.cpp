
        
        #include 'atom/common/api/api_messages.h'
#include 'atom/common/native_mate_converters/string16_converter.h'
#include 'content/public/browser/web_contents.h'
#include 'native_mate/object_template_builder.h'
    
    #include 'atom/common/node_includes.h'
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(AtomQuotaPermissionContext);
};
    
    #include 'base/strings/string16.h'
#include 'base/synchronization/lock.h'
#include 'content/public/browser/resource_dispatcher_host_login_delegate.h'
    
    
    {}  // namespace atom

    
    struct CV_EXPORTS IntrinsicParams
{
    Vec2d f;
    Vec2d c;
    Vec4d k;
    double alpha;
    std::vector<uchar> isEstimate;
    }
    
    static void orderContours(const std::vector<std::vector<Point> >& contours, Point2f point, std::vector<std::pair<int, float> >& order)
{
    order.clear();
    size_t i, j, n = contours.size();
    for(i = 0; i < n; i++)
    {
        size_t ni = contours[i].size();
        double min_dist = std::numeric_limits<double>::max();
        for(j = 0; j < ni; j++)
        {
            double dist = norm(Point2f((float)contours[i][j].x, (float)contours[i][j].y) - point);
            min_dist = MIN(min_dist, dist);
        }
        order.push_back(std::pair<int, float>((int)i, (float)min_dist));
    }
    }
    
    #ifndef __OPENCV_CORE_BUFFER_POOL_IMPL_HPP__
#define __OPENCV_CORE_BUFFER_POOL_IMPL_HPP__
    
        struct InitializeVariables
    {
        InitializeVariables()
        {
            // Extension: 1.1
            CullFace = Switch_CullFace;
            FrontFace = Switch_FrontFace;
            Hint = Switch_Hint;
            LineWidth = Switch_LineWidth;
            PointSize = Switch_PointSize;
            PolygonMode = Switch_PolygonMode;
            Scissor = Switch_Scissor;
            TexParameterf = Switch_TexParameterf;
            TexParameterfv = Switch_TexParameterfv;
            TexParameteri = Switch_TexParameteri;
            TexParameteriv = Switch_TexParameteriv;
            TexImage1D = Switch_TexImage1D;
            TexImage2D = Switch_TexImage2D;
            DrawBuffer = Switch_DrawBuffer;
            Clear = Switch_Clear;
            ClearColor = Switch_ClearColor;
            ClearStencil = Switch_ClearStencil;
            ClearDepth = Switch_ClearDepth;
            StencilMask = Switch_StencilMask;
            ColorMask = Switch_ColorMask;
            DepthMask = Switch_DepthMask;
            Disable = Switch_Disable;
            Enable = Switch_Enable;
            Finish = Switch_Finish;
            Flush = Switch_Flush;
            BlendFunc = Switch_BlendFunc;
            LogicOp = Switch_LogicOp;
            StencilFunc = Switch_StencilFunc;
            StencilOp = Switch_StencilOp;
            DepthFunc = Switch_DepthFunc;
            PixelStoref = Switch_PixelStoref;
            PixelStorei = Switch_PixelStorei;
            ReadBuffer = Switch_ReadBuffer;
            ReadPixels = Switch_ReadPixels;
            GetBooleanv = Switch_GetBooleanv;
            GetDoublev = Switch_GetDoublev;
            GetError = Switch_GetError;
            GetFloatv = Switch_GetFloatv;
            GetIntegerv = Switch_GetIntegerv;
            GetString = Switch_GetString;
            GetTexImage = Switch_GetTexImage;
            GetTexParameterfv = Switch_GetTexParameterfv;
            GetTexParameteriv = Switch_GetTexParameteriv;
            GetTexLevelParameterfv = Switch_GetTexLevelParameterfv;
            GetTexLevelParameteriv = Switch_GetTexLevelParameteriv;
            IsEnabled = Switch_IsEnabled;
            DepthRange = Switch_DepthRange;
            Viewport = Switch_Viewport;
            DrawArrays = Switch_DrawArrays;
            DrawElements = Switch_DrawElements;
            GetPointerv = Switch_GetPointerv;
            PolygonOffset = Switch_PolygonOffset;
            CopyTexImage1D = Switch_CopyTexImage1D;
            CopyTexImage2D = Switch_CopyTexImage2D;
            CopyTexSubImage1D = Switch_CopyTexSubImage1D;
            CopyTexSubImage2D = Switch_CopyTexSubImage2D;
            TexSubImage1D = Switch_TexSubImage1D;
            TexSubImage2D = Switch_TexSubImage2D;
            BindTexture = Switch_BindTexture;
            DeleteTextures = Switch_DeleteTextures;
            GenTextures = Switch_GenTextures;
            IsTexture = Switch_IsTexture;
            Indexub = Switch_Indexub;
            Indexubv = Switch_Indexubv;
    }
    }
    
    #ifndef GL_LOAD_GEN_BASIC_OPENGL_TYPEDEFS
#define GL_LOAD_GEN_BASIC_OPENGL_TYPEDEFS
    typedef unsigned int GLenum;
    typedef unsigned char GLboolean;
    typedef unsigned int GLbitfield;
    typedef signed char GLbyte;
    typedef short GLshort;
    typedef int GLint;
    typedef int GLsizei;
    typedef unsigned char GLubyte;
    typedef unsigned short GLushort;
    typedef unsigned int GLuint;
    typedef float GLfloat;
    typedef float GLclampf;
    typedef double GLdouble;
    typedef double GLclampd;
    #define GLvoid void
#endif // GL_LOAD_GEN_BASIC_OPENGL_TYPEDEFS
    
    bool js_cocos2dx_physics3d_PhysicsSprite3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_PhysicsSprite3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_PhysicsSprite3D(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_PhysicsSprite3D_syncNodeToPhysics(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_syncPhysicsToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_getPhysicsObj(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_PhysicsSprite3D(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
        //    glPointSize(size);
    
    			b2FixtureDef sd;
			sd.shape = &shape;
			sd.density = 0.0f;
			sd.restitution = k_restitution;
    
    	b2Body* m_body1;
	b2Vec2 m_velocity;
	float32 m_angularVelocity;
	b2PolygonShape m_shape1;
	b2PolygonShape m_shape2;
	b2Fixture* m_piece1;
	b2Fixture* m_piece2;
    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 1.0f;
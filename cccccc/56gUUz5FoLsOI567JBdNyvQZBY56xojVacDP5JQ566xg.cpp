#include 'tensorflow/core/kernels/cwise_ops_gpu_common.cu.h'
    
    
    {  // Whether rewrite has occurred.
  bool changed_ = false;
};
    
    namespace tflite {
namespace ops {
namespace builtin {
namespace arg_min_max {
    }
    }
    }
    }
    
    namespace {
// TODO(suharshs): Move this to a common location to allow other part of the
// repo to use it.
template <typename T, typename... Args>
std::unique_ptr<T> MakeUnique(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
}  // namespace
    
    /**
 * \ingroup CXX11_NeuralNetworks_Module
 * \brief Template functor to clip the magnitude of the first scalar.
 *
 * \sa class CwiseBinaryOp, MatrixBase::Clip
 */
template <typename Scalar>
struct scalar_clip_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_clip_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Scalar
  operator()(const Scalar& a, const Scalar& b) const {
    return numext::mini(numext::maxi(a, -b), b);
  }
  template <typename Packet>
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Packet
  packetOp(const Packet& a, const Packet& b) const {
    return internal::pmin(internal::pmax(a, internal::pnegate(b)), b);
  }
};
    
    REGISTER_KERNEL_BUILDER(Name('TextLineReader').Device(DEVICE_CPU),
                        TextLineReaderOp);
REGISTER_KERNEL_BUILDER(Name('TextLineReaderV2').Device(DEVICE_CPU),
                        TextLineReaderOp);
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    #include <grpc/support/log.h>
    
    #endif  // GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H

    
      Result Mark() const;
    
    /// Cast a non-modifiable buffer to a specified pointer to POD type.
template <typename PointerToPodType>
inline PointerToPodType buffer_cast(const mutable_buffer& b)
{
  return static_cast<PointerToPodType>(detail::buffer_cast_helper(b));
}
    
    namespace boost {
namespace asio {
    }
    }
    
    template<class T, std::size_t N>
class array;
    
      // Return a pointer to the beginning of the unread data.
  const_buffer data() const
  {
    return boost::asio::buffer(buffer_) + begin_offset_;
  }
    
    #include <boost/asio/detail/push_options.hpp>
    
    bool js_cocos2dx_studio_BoneNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_BoneNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_BoneNode(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_BoneNode_getDebugDrawWidth(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getChildBones(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getAllSubBones(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_setBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_setDebugDrawEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getVisibleSkinsRect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getAllSubSkins(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_displaySkin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_isDebugDrawEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_addSkin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getRootSkeletonNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_setDebugDrawLength(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getSkins(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getVisibleSkins(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_setDebugDrawWidth(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getDebugDrawLength(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_setDebugDrawColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_getDebugDrawColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BoneNode_BoneNode(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    
    
    
    
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,'cc.PhysicsBody',0,&tolua_err)) goto tolua_lerror;
#endif
    
    
    {
    {			float minX = -6.0f;
			float maxX = 0.0f;
			float minY = 4.0f;
			float maxY = 6.0f;
			
			for (int32 i = 0; i < 400; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position = b2Vec2(RandomFloat(minX,maxX),RandomFloat(minY,maxY));
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&shape, 0.01f);
			}
		}
		
		{
			b2PolygonShape shape;
			shape.SetAsBox(1.5f, 1.5f);
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-40.0f,5.0f);
			bd.bullet = true;
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&shape, 1.0f);
			body->SetLinearVelocity(b2Vec2(150.0f, 0.0f));
		}
	}
    
    				// For a circle: I = 0.5 * m * r * r ==> r = sqrt(2 * I / m)
				float32 radius = b2Sqrt(2.0f * I / mass);
    
    #ifndef BULLET_TEST_H
#define BULLET_TEST_H
    
    			b2WeldJointDef jd;
			jd.frequencyHz = 5.0f;
			jd.dampingRatio = 0.7f;
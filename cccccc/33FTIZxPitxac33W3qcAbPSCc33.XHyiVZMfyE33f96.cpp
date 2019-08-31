
        
                // 
        // Refill all of bufferBack from the bitstream. Either grab
        // a full 64-bit chunk, or whatever bytes are left. If we
        // don't have 64-bits left, pad with 0's.
        //
    
    
template <>
void
FloatVectorAttribute::writeValueTo
    (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream &os, int version) const
{
    int n = _value.size();
    }
    
    #include <ImfFramesPerSecond.h>
#include 'ImathFun.h'
    
    #include <ImfBoxAttribute.h>
#include <ImfFloatAttribute.h>
#include <ImfTimeCodeAttribute.h>
#include <ImfChromaticitiesAttribute.h>
    
    
class GenericOutputFile
{
    public:
        IMF_EXPORT
        virtual ~GenericOutputFile() {}
    }
    
    
IStream::~IStream ()
{
    // empty
}
    
    const FrameBuffer &
InputPart::frameBuffer () const
{
    return file->frameBuffer();
}
    
    Example 2 (with KEY):
DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
KEY   = [0, 1, 3, 2, 1, 0, 1, 0]
RANGES = [
  [
    [2, 4],
    [0, 2],
  ],
  [
    [0, 0],
    [6, 2],
  ]
]
lengths = [4, 2]
OUTPUT[0] = [[6, 5, 4, 3], [0, 0, 0, 0]]
OUTPUT[1] = [[1, 2], [8, 7]]
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    ChannelArguments::ChannelArguments(const ChannelArguments& other)
    : strings_(other.strings_) {
  args_.reserve(other.args_.size());
  auto list_it_dst = strings_.begin();
  auto list_it_src = other.strings_.begin();
  for (auto a = other.args_.begin(); a != other.args_.end(); ++a) {
    grpc_arg ap;
    ap.type = a->type;
    GPR_ASSERT(list_it_src->c_str() == a->key);
    ap.key = const_cast<char*>(list_it_dst->c_str());
    ++list_it_src;
    ++list_it_dst;
    switch (a->type) {
      case GRPC_ARG_INTEGER:
        ap.value.integer = a->value.integer;
        break;
      case GRPC_ARG_STRING:
        GPR_ASSERT(list_it_src->c_str() == a->value.string);
        ap.value.string = const_cast<char*>(list_it_dst->c_str());
        ++list_it_src;
        ++list_it_dst;
        break;
      case GRPC_ARG_POINTER:
        ap.value.pointer = a->value.pointer;
        ap.value.pointer.p = a->value.pointer.vtable->copy(ap.value.pointer.p);
        break;
    }
    args_.push_back(ap);
  }
}
    
    #ifdef GRPC_WINSOCK_SOCKET
#include 'src/core/lib/iomgr/endpoint_pair.h'
#include 'src/core/lib/iomgr/sockaddr.h'
#include 'src/core/lib/iomgr/sockaddr_utils.h'
    
    static bool iomgr_platform_is_any_background_poller_thread(void) {
  return false;
}
    
     protected:
  char* GetName();
    
    
    {  /* large negative */
  GPR_ASSERT(20 == int64_ttoa(-9223372036854775807LL - 1, buf));
  GPR_ASSERT(0 == strcmp('-9223372036854775808', buf));
}
    
    static grpc::internal::GrpcLibraryInitializer g_gli_initializer;
ChannelCredentials::ChannelCredentials() { g_gli_initializer.summon(); }
    
    #include <gmock/gmock.h>
#include <gtest/gtest.h>
    
    public:
    /**
    @{
    Constructor.
    @param width Width of the size.
    @param height Height of the size.
    @param other Copy constructor.
    @param point Conversion from a point.
     */
    Size();
    Size(float width, float height);
    explicit Size(const Vec2& point);
    /**@}*/
    
        /**
    @brief Get the amplitude of the effect.
    @return Return the amplitude of the effect.
    */
    float getAmplitude() const { return _amplitude; }
    /**
    @brief Set the amplitude to the effect.
    @param amplitude The value of amplitude will be set.
    */
    void setAmplitude(float amplitude) { _amplitude = amplitude; }
    
        auto propsItr = dictionary.find('properties');
    if(propsItr != dictionary.end() )
    {
        const ValueMap& properties = propsItr->second.asValueMap();
        version = properties.at('format').asInt();
        const ValueVector& spritesheets = properties.at('spritesheets').asValueVector();
    }
    
    
#include '2d/CCClippingRectangleNode.h'
#include 'base/CCDirector.h'
#include 'renderer/CCRenderer.h'
#include 'math/Vec2.h'
#include 'platform/CCGLView.h'
    
    NS_CC_BEGIN

        
        
    {    bool checkSubsetPublic( const CvMat* ms1, int count, bool checkPartialSubset );
};
    
    // GL type for 'half' precision (s10e5) float data in host memory
#ifndef GL_ARB_half_float_pixel
    typedef unsigned short GLhalfARB;
#endif
#ifndef GL_NV_half_float
    typedef unsigned short GLhalfNV;
#endif
    
    void freeifaddrs(struct ifaddrs* addrs) {
	struct ifaddrs* last = NULL;
	struct ifaddrs* cursor = addrs;
	while (cursor) {
		delete[] cursor->ifa_name;
		delete cursor->ifa_addr;
		delete cursor->ifa_netmask;
		last = cursor;
		cursor = cursor->ifa_next;
		delete last;
	}
}

    
    #include 'io/stream_peer.h'
    
    	_create = _create_func;
	load_certs_func = _load_certs;
    
    #if defined(MBEDTLS_GCM_C) && (                                        \
        !defined(MBEDTLS_AES_C) && !defined(MBEDTLS_CAMELLIA_C) )
#error 'MBEDTLS_GCM_C defined, but not all prerequisites'
#endif
    
    	MonoObject *mono_object = mono_object_new(mono_domain_get(), klass->get_mono_ptr());
    
    	ClassDB::bind_method(D_METHOD('play'), &VideoPlayer::play);
	ClassDB::bind_method(D_METHOD('stop'), &VideoPlayer::stop);
    
    	friend class GDNativeLibraryResourceLoader;
	friend class GDNative;
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
    
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    
    
    // This class implements debug drawing callbacks that are invoked
// inside b2World::Step.
class GLESDebugDraw : public b2Draw
{
    float32 mRatio;
    cocos2d::GLProgram* mShaderProgram;
    GLint        mColorLocation;
    }
    
    
    {	if (callback.m_fixture)
	{
		b2Body* body = callback.m_fixture->GetBody();
		b2MouseJointDef md;
		md.bodyA = m_groundBody;
		md.bodyB = body;
		md.target = p;
		md.maxForce = 1000.0f * body->GetMass();
		m_mouseJoint = (b2MouseJoint*)m_world->CreateJoint(&md);
		body->SetAwake(true);
        return true;
	}
    
    return false;
}
    
        int unit;
    double value;
    
    class YogaTest_HadOverflowTests : public Test {
protected:
  YogaTest_HadOverflowTests() {
    config = YGConfigNew();
    root = YGNodeNewWithConfig(config);
    YGNodeStyleSetWidth(root, 200);
    YGNodeStyleSetHeight(root, 100);
    YGNodeStyleSetFlexDirection(root, YGFlexDirectionColumn);
    YGNodeStyleSetFlexWrap(root, YGWrapNoWrap);
  }
    }
    
        ~Config(void);
    
    Node * Node::getParent(void)
{
    auto nodePtr = YGNodeGetParent(m_node);
    }
    
    
    {  // There are subtle issues with calling the next functions directly. It is
  // much better to always use a ThreadScope to manage attaching/detaching for
  // you.
  FBEXPORT static JNIEnv* ensureCurrentThreadIsAttached();
  FBEXPORT static void detachCurrentThread();
};
    
    
    {}

    
      virtual ~AbstractAuthResolver();
    
      // Returns proxy method for given protocol. Either V_GET or V_TUNNEL
  // is returned.  For HTTPS, always returns V_TUNNEL.
  const std::string& resolveProxyMethod(const std::string& protocol) const;
    
      virtual void writeData(const unsigned char* data, size_t len,
                         int64_t offset) CXX11_OVERRIDE;
    
      enum Flag {
    FLAG_HIDDEN = 1,
    FLAG_ERASE_AFTER_PARSE = 1 << 1,
    FLAG_INITIAL_OPTION = 1 << 2,
    FLAG_CHANGE_OPTION = 1 << 3,
    FLAG_CHANGE_OPTION_FOR_RESERVED = 1 << 4,
    FLAG_CHANGE_GLOBAL_OPTION = 1 << 5,
    FLAG_CUMULATIVE = 1 << 6
  };
    
    AdaptiveFileAllocationIterator::~AdaptiveFileAllocationIterator() = default;
    
    class AnnounceTier {
public:
  enum AnnounceEvent {
    STARTED,
    STARTED_AFTER_COMPLETION,
    DOWNLOADING,
    STOPPED,
    COMPLETED,
    SEEDING,
    HALTED
  };
    }
    
    #endif // D_LIBSSL_TLS_CONTEXT_H

    
    
    {} // namespace aria2

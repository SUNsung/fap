
        
        namespace mars {
namespace baseevent {
    }
    }
    
    #ifdef ANDROID
    
        _outbuf.AllocWrite(st.total_length);
    
        bool Check();  // true pass, false limit
    
    class ServiceBase {
  public:
    virtual ~ServiceBase() {}
    void DependServices(const TServicesMap& _dependservices) { m_dependservices = _dependservices;}
    const char* ServiceName() const { return m_servicename.c_str();}
    }
    
    
    {        for (it = m_strmap.begin(); it != m_strmap.end(); ++it) {
            if (it->second->This() == _this) {
                m_strmap.erase(it);
                break;
            }
        }
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
#define DEFINE_HAS_MEMBER_WITH_TYPE(member_name, member_type) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <member_type (T::*)> struct tester;\
        template <typename U> static yes_type test(tester<&U::member_name>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        jobject NewObject(jclass clazz, jmethodID methodID, ...)
    {
        va_list args;
        va_start(args, methodID);
        jobject result = functions->NewObjectV(this, clazz, methodID, args);
        va_end(args);
        return result;
    }
    
    // convert to alias_ref<T> from T
template <typename T>
struct Convert<alias_ref<T>> {
  typedef JniType<T> jniType;
  static alias_ref<jniType> fromJni(jniType t) {
    return wrap_alias(t);
  }
  static jniType toJniRet(alias_ref<jniType> t) {
    return t.get();
  }
  static jniType toCall(alias_ref<jniType> t) {
    return t.get();
  }
};
    
    void Config::setExperimentalFeatureEnabled(int feature, bool enabled)
{
    YGConfigSetExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature), enabled);
}
    
    void Node::setAlignItems(int alignItems)
{
    YGNodeStyleSetAlignItems(m_node, static_cast<YGAlign>(alignItems));
}
    
    
    {    method(getComputedMargin);
    method(getComputedBorder);
    method(getComputedPadding);
}

    
    // Class that lets you declare a global but does not add a static constructor
// to the binary. Eventually I'd like to have this auto-initialize in a
// multithreaded environment but for now it's easiest just to use manual
// initialization.
template <typename T>
class StaticInitialized {
public:
  constexpr StaticInitialized() :
    m_instance(nullptr)
  {}
    }
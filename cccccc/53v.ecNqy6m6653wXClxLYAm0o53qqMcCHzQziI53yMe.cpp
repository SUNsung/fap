
        
          void WriteIntroduction(io::Printer* printer);
  void WriteDescriptor(io::Printer* printer);
  void WriteGeneratedCodeInfo(const Descriptor* descriptor,
                              io::Printer* printer,
                              bool last);
    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
      // Write any attributes used to decorate generated function members (methods and properties).
  // Should not be used to decorate types.
  void WriteGeneratedCodeAttributes(io::Printer* printer);
    
    #include <google/protobuf/compiler/java/java_doc_comment.h>
    
    // CodeGenerator implementation which generates Java code.  If you create your
// own protocol compiler binary and you want it to support Java output, you
// can do so by registering an instance of this CodeGenerator with the
// CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT JavaGenerator : public CodeGenerator {
 public:
  JavaGenerator();
  ~JavaGenerator();
    }
    
    
    { private:
  Context* context_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ImmutableGeneratorFactory);
};
    
      // Add the specified file at the specified number.
  // REQUIRES: This version has not been saved (see VersionSet::SaveTo)
  // REQUIRES: 'smallest' and 'largest' are smallest and largest keys in file
  void AddFile(int level, uint64_t file,
               uint64_t file_size,
               const InternalKey& smallest,
               const InternalKey& largest) {
    FileMetaData f;
    f.number = file;
    f.file_size = file_size;
    f.smallest = smallest;
    f.largest = largest;
    new_files_.push_back(std::make_pair(level, f));
  }
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    size_t BlockBuilder::CurrentSizeEstimate() const {
  return (buffer_.size() +                        // Raw data buffer
          restarts_.size() * sizeof(uint32_t) +   // Restart array
          sizeof(uint32_t));                      // Restart array length
}
    
    
    {  unsigned char data[48] = {
    0x01, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x14,
    0x00, 0x00, 0x00, 0x18,
    0x28, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
  };
  ASSERT_EQ(0xd9963a56, Value(reinterpret_cast<char*>(data), sizeof(data)));
}
    
    void Histogram::Clear() {
  min_ = kBucketLimit[kNumBuckets-1];
  max_ = 0;
  num_ = 0;
  sum_ = 0;
  sum_squares_ = 0;
  for (int i = 0; i < kNumBuckets; i++) {
    buckets_[i] = 0;
  }
}
    
    #include 'port/port.h'
#include 'port/thread_annotations.h'
    
      // Returns an estimate of the current (uncompressed) size of the block
  // we are building.
  size_t CurrentSizeEstimate() const;
    
    
    {        ok &= luaval_to_boolean(tolua_S, 3,&arg1, 'cc.SimpleAudioEngine:playBackgroundMusic');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playBackgroundMusic'', nullptr);
            return 0;
        }
        cobj->playBackgroundMusic(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:playBackgroundMusic',argc, 1);
    return 0;
    
    
    
    
    
    
    {		// Continue the query.
		return true;
	}
    
    
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
    
    	static Test* Create()
	{
		return new ApplyForce;
	}
    
    
    {		m_break = false;
		m_broke = false;
	}
    
    		// Car
		{
			b2PolygonShape chassis;
			b2Vec2 vertices[8];
			vertices[0].Set(-1.5f, -0.5f);
			vertices[1].Set(1.5f, -0.5f);
			vertices[2].Set(1.5f, 0.0f);
			vertices[3].Set(0.0f, 0.9f);
			vertices[4].Set(-1.15f, 0.9f);
			vertices[5].Set(-1.5f, 0.2f);
			chassis.Set(vertices, 6);
    }
    
    DEFINE_FIND_STATIC_METHOD(KXlog_setAppenderMode, KXlog, 'setAppenderMode', '(I)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_setAppenderMode
  (JNIEnv *, jclass, jint _mode) {
	appender_setmode((TAppenderMode)_mode);
}
    
    #endif /* BASEEVENT_INTERFACE_BASEEVENT_H_ */

    
        snprintf(processname, sizeof(processname), '>>> %s <<<', _processname.c_str());
    
    WakeUpLock::WakeUpLock() {
    object_ = ::wakeupLock_new();
    ASSERT(object_);
    xinfo2('new wakeuplock:%p', object_);
}
    
    #include 'basepacker.h'
    
    #include <exception>
#include 'comm/xlogger/xlogger.h'
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
    {        return NULL;
    }
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    class ScopeJEnv {
  public:
    ScopeJEnv(JavaVM* jvm, jint _capacity = 16);
    ~ScopeJEnv();
    }
    
    template<typename F>
inline JStaticMethod<F> JClass::getStaticMethod(
    const char* name,
    const char* descriptor) const {
  const auto env = internal::getEnv();
  const auto method = env->GetStaticMethodID(self(), name, descriptor);
  FACEBOOK_JNI_THROW_EXCEPTION_IF(!method);
  return JStaticMethod<F>{method};
}
    
    void HybridDataOnLoad();
    
    /// JMethod specialization for references that wraps the return value in a @ref local_ref
template<typename R, typename... Args>
class JMethod<R(Args...)> : public JMethodBase {
 public:
   // TODO: static_assert is jobject-derived or local_ref jobject
  using JniRet = typename detail::Convert<typename std::decay<R>::type>::jniType;
  static_assert(IsPlainJniReference<JniRet>(), 'JniRet must be a JNI reference');
  using JMethodBase::JMethodBase;
  JMethod() noexcept {};
  JMethod(const JMethod& other) noexcept = default;
    }
    
    bool Config::isExperimentalFeatureEnabled(int feature) const
{
    return YGConfigIsExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature));
}

    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
        method(setPadding);
    method(setPaddingPercent);
    
      T* operator->() const {
    return m_ptr;
  }
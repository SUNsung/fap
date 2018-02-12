
        
          brightray::ContentClient content_client_;
  std::unique_ptr<content::ContentBrowserClient> browser_client_;
  std::unique_ptr<content::ContentRendererClient> renderer_client_;
  std::unique_ptr<content::ContentUtilityClient> utility_client_;
    
    #include 'content/public/browser/download_item.h'
#include 'content/public/browser/download_manager.h'
#include 'content/public/browser/save_page_type.h'
#include 'v8/include/v8.h'
    
    
    {}  // namespace atom

    
    bool js_cocos2dx_studio_SkewFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_SkewFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_SkewFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_SkewFrame_getSkewY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_setSkewX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_setSkewY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_getSkewX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_SkewFrame_SkewFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    	void Break()
	{
		// Create two bodies from one.
		b2Body* body1 = m_piece1->GetBody();
		b2Vec2 center = body1->GetWorldCenter();
    }
    
    #include 'wakeuplock.h'
#include 'assert/__assert.h'
#include 'xlogger/xlogger.h'
    
        LongLinkPack st = {0};
    st.ver = 0x1;
    st.head_length = (unsigned char)sizeof(st);
    st.url_length = url_size;
    st.total_length = (unsigned int)(st.head_length + st.url_length  + _datalen);
    st.sequence = _sequence;
    st.magic = (st.head_length + st.url_length + st.total_length) & 0xFF;
    
    
    {    __DelOlderTouchTime(now);
    touch_times_.push_back(now);
    return true;
}
    
    //
//  testspy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-13.
//
    
    int TSpy::__TestFun1(int i)
{
    return reinterpret_cast<Test_Spy_Sample*>(This())->__TestFun1(i);
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Return the epilogue of the generated source file.
grpc::string GetSourceEpilogue(grpc_generator::File *file,
                               const Parameters &params);
    
    	if (genSend) {
		printer->Print(vars, 'func (x *$StreamType$) Send(m *$Request$) error {\n');
		printer->Indent();
		printer->Print('return x.ClientStream.SendMsg(m)\n');
		printer->Outdent();
		printer->Print('}\n\n');
	}
    
    
    {}
    
    struct SecondTableInA FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_REFER_TO_C = 4
  };
  const NamespaceC::TableInC *refer_to_c() const {
    return GetPointer<const NamespaceC::TableInC *>(VT_REFER_TO_C);
  }
  NamespaceC::TableInC *mutable_refer_to_c() {
    return GetPointer<NamespaceC::TableInC *>(VT_REFER_TO_C);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_REFER_TO_C) &&
           verifier.VerifyTable(refer_to_c()) &&
           verifier.EndTable();
  }
};
    
    #endif  // FLATBUFFERS_GENERATED_NAMESPACETEST1_NAMESPACEA_NAMESPACEB_H_

    
    template<typename T> T EndianSwap(T t) {
  #if defined(_MSC_VER)
    #define FLATBUFFERS_BYTESWAP16 _byteswap_ushort
    #define FLATBUFFERS_BYTESWAP32 _byteswap_ulong
    #define FLATBUFFERS_BYTESWAP64 _byteswap_uint64
  #else
    #if defined(__GNUC__) && __GNUC__ * 100 + __GNUC_MINOR__ < 408 && !defined(__clang__)
      // __builtin_bswap16 was missing prior to GCC 4.8.
      #define FLATBUFFERS_BYTESWAP16(x) \
        static_cast<uint16_t>(__builtin_bswap32(static_cast<uint32_t>(x) << 16))
    #else
      #define FLATBUFFERS_BYTESWAP16 __builtin_bswap16
    #endif
    #define FLATBUFFERS_BYTESWAP32 __builtin_bswap32
    #define FLATBUFFERS_BYTESWAP64 __builtin_bswap64
  #endif
  if (sizeof(T) == 1) {   // Compile-time if-then's.
    return t;
  } else if (sizeof(T) == 2) {
    union { T t; uint16_t i; } u;
    u.t = t;
    u.i = FLATBUFFERS_BYTESWAP16(u.i);
    return u.t;
  } else if (sizeof(T) == 4) {
    union { T t; uint32_t i; } u;
    u.t = t;
    u.i = FLATBUFFERS_BYTESWAP32(u.i);
    return u.t;
  } else if (sizeof(T) == 8) {
    union { T t; uint64_t i; } u;
    u.t = t;
    u.i = FLATBUFFERS_BYTESWAP64(u.i);
    return u.t;
  } else {
    assert(0);
  }
}
    
      // Ensure that a type is prefixed with its namespace whenever it is used
  // outside of its namespace.
  std::string WrapInNameSpace(const Namespace *ns,
                              const std::string &name) const;
    
    
    {    GenerateFn generate;
    const char *generator_opt_short;
    const char *generator_opt_long;
    const char *lang_name;
    bool schema_only;
    GenerateFn generateGRPC;
    flatbuffers::IDLOptions::Language lang;
    const char *generator_help;
    MakeRuleFn make_rule;
  };
    
    inline Type ToTypedVector(Type t, size_t fixed_len = 0) {
  assert(IsTypedVectorElementType(t));
  switch (fixed_len) {
    case 0: return static_cast<Type>(t - TYPE_INT + TYPE_VECTOR_INT);
    case 2: return static_cast<Type>(t - TYPE_INT + TYPE_VECTOR_INT2);
    case 3: return static_cast<Type>(t - TYPE_INT + TYPE_VECTOR_INT3);
    case 4: return static_cast<Type>(t - TYPE_INT + TYPE_VECTOR_INT4);
    default: assert(0); return TYPE_NULL;
  }
}
    
    // Set any vector element as a double, regardless of type what it is.
inline void SetAnyVectorElemF(VectorOfAny *vec, reflection::BaseType elem_type,
                              size_t i, double val) {
  SetAnyValueF(elem_type, vec->Data() + GetTypeSize(elem_type) * i, val);
}
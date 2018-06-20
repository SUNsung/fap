
        
        PyDescriptorDatabase::PyDescriptorDatabase(PyObject* py_database)
    : py_database_(py_database) {
  Py_INCREF(py_database_);
}
    
    #include <string>
    
    void RepeatedEnumFieldGenerator::WriteEquals(io::Printer* printer) {
  printer->Print(
    variables_,
    'if(!$name$_.Equals(other.$name$_)) return false;\n');
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    SourceGeneratorBase::~SourceGeneratorBase() {
}
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_EXTENSION_LITE_H__

    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Generates Java code for a given .proto file.
    
    // ===================================================================
    
      // overroads RepeatedImmutableMessageFieldGenerator -------------------------
  void GenerateMembers(io::Printer* printer) const;
  void GenerateBuilderMembers(io::Printer* printer) const;
  void GenerateParsingCode(io::Printer* printer) const;
  void GenerateSerializationCode(io::Printer* printer) const;
  void GenerateSerializedSizeCode(io::Printer* printer) const;
    
    	ClassDB::bind_method(D_METHOD('poll'), &StreamPeerSSL::poll);
	ClassDB::bind_method(D_METHOD('accept_stream', 'stream'), &StreamPeerSSL::accept_stream);
	ClassDB::bind_method(D_METHOD('connect_to_stream', 'stream', 'validate_certs', 'for_hostname'), &StreamPeerSSL::connect_to_stream, DEFVAL(false), DEFVAL(String()));
	ClassDB::bind_method(D_METHOD('get_status'), &StreamPeerSSL::get_status);
	ClassDB::bind_method(D_METHOD('disconnect_from_stream'), &StreamPeerSSL::disconnect_from_stream);
    
    
    {	if (_is_multiplayer) {
		// need to wait for ID confirmation...
	} else {
		emit_signal('connection_established', p_protocol);
	}
}
    
    	virtual bool is_server() const;
	virtual ConnectionStatus get_connection_status() const = 0;
    
    	static void add_signal(StringName p_class, const MethodInfo &p_signal);
	static bool has_signal(StringName p_class, StringName p_signal);
	static bool get_signal(StringName p_class, StringName p_signal, MethodInfo *r_signal);
	static void get_signal_list(StringName p_class, List<MethodInfo> *p_signals, bool p_no_inheritance = false);
    
    #ifndef VEHICLE_BODY_H
#define VEHICLE_BODY_H
    
    #ifdef ANDROID
#include <jni.h>
    
    #ifndef DUMPCRASHSTACK_H_
#define DUMPCRASHSTACK_H_
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
      protected:
    ServiceBase(const char* _servicename) : m_servicename(_servicename) {}
    
    //
//  spy.h
//  PublicComponent
//
//  Created by yerungui on 14-5-14.
//
    
    
    static bool SpyHookLogFunc(struct XLoggerInfo_t& _info, std::string& _log);
    void TestFun0();
    int __TestFun1(int i);
    
    #define CALL_NONVIRT_TYPE(_jtype, _jname)                                   \
    CALL_NONVIRT_TYPE_METHOD(_jtype, _jname)                                \
    CALL_NONVIRT_TYPE_METHODV(_jtype, _jname)                               \
    CALL_NONVIRT_TYPE_METHODA(_jtype, _jname)
    
    template <typename T> struct jni_sig_from_cxx_t;
template <typename R, typename... Args>
struct jni_sig_from_cxx_t<R(Args...)> {
  using JniRet = typename Convert<typename std::decay<R>::type>::jniType;
  using JniSig = JniRet(typename Convert<typename std::decay<Args>::type>::jniType...);
};
    
    /* static */ void Config::destroy(Config * node)
{
    delete node;
}
    
     public: // Measure func inspectors
    
    struct Size
{
    double width;
    double height;
    }
    
        method(setFlex);
    method(setFlexBasis);
    method(setFlexBasisPercent);
    method(setFlexGrow);
    method(setFlexShrink);
    
    private:
  void ref() {
    ++m_refcount;
  }
    
    namespace facebook {
    }
    
    FBEXPORT void assertInternal(const char* formatstr, ...) __attribute__((noreturn));
    
    
    {  uint8_t* getDirectBytes() const;
  size_t getDirectSize() const;
};
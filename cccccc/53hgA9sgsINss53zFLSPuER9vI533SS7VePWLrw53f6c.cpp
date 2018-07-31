
        
        /// Index the given module and store the results to \p indexStorePath.
///
/// \param module The module to index.
///
/// \param indexUnitTokens A list of unique identifiers for the index units to
/// be written. This may either be one unit per source file of \p module, or it
/// may be a single unit, in which case all the index information will be
/// combined into a single unit.
///
/// \param moduleUnitToken A unique identifier for this module unit in the form
/// of a file path. Only used if \p indexUnitTokens are specified for each
/// source file, otherwise the single \p indexUnitTokens value is used instead.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(ModuleDecl *module, ArrayRef<std::string> indexUnitTokens,
                    StringRef moduleUnitToken, StringRef indexStorePath,
                    bool indexSystemModules, bool isDebugCompilation,
                    StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
// FIXME: indexUnitTokens could be StringRef, but that creates an impedance
// mismatch in the caller.
    
    class Document final : public MarkupASTNode,
    private llvm::TrailingObjects<Document, MarkupASTNode *> {
  friend TrailingObjects;
    }
    
      ArrayRef<IndexTrieNode*> getChildren() const { return Children; }
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_MESSAGE_FIELD_H__
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__

    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_MESSAGE_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_MESSAGE_H__
    
    #include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, false);
    
    #endif  // GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    #include 'src/compiler/config.h'
#include 'src/compiler/generator_helpers.h'
    
    #include 'src/compiler/config.h'
#include 'src/compiler/schema_interface.h'
    
    #include 'src/compiler/python_generator.h'
#include 'src/compiler/schema_interface.h'
    
    AuthPropertyIterator SecureAuthContext::begin() const {
  if (ctx_) {
    grpc_auth_property_iterator iter =
        grpc_auth_context_property_iterator(ctx_);
    const grpc_auth_property* property =
        grpc_auth_property_iterator_next(&iter);
    return AuthPropertyIterator(property, &iter);
  } else {
    return end();
  }
}
    
    template <class T, class F>
double average(const T& container, F functor) {
  return sum(container, functor) / container.size();
}
    
    bool js_cocos2dx_studio_ComExtensionData_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ComExtensionData_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ComExtensionData(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ComExtensionData_setActionTag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComExtensionData_getCustomProperty(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComExtensionData_getActionTag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComExtensionData_setCustomProperty(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComExtensionData_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComExtensionData_ComExtensionData(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
#endif

    
    		for (int32 i = 0; i < 2; ++i)
		{
			b2Vec2 vertices[3];
			vertices[0].Set(-0.5f, 0.0f);
			vertices[1].Set(0.5f, 0.0f);
			vertices[2].Set(0.0f, 1.5f);
    }
    
    
    {		b2_toiCalls = 0;
		b2_toiIters = 0;
		b2_toiMaxIters = 0;
		b2_toiRootIters = 0;
		b2_toiMaxRootIters = 0;
	}
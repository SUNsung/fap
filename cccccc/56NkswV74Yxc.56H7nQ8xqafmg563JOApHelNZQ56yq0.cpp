
        
            llvm::errs() << '\n=====================================================\n';
    SyntaxNode->dump(llvm::errs());
    llvm::errs() << '\n\n---- Maps to semantic node: ----\n\n';
    
      /// Allocate an Objective-C object.
  llvm::Value *emitObjCAllocObjectCall(IRGenFunction &IGF,
                                       llvm::Value *classPtr,
                                       SILType resultType);
    
    @interface TimeZoneBridgingTester : NSObject
- (NSTimeZone *)autoupdatingCurrentTimeZone;
- (BOOL)verifyAutoupdatingTimeZone:(NSTimeZone *)tz;
@end
    
        auto makeSubmoduleNameFromGroupName = [](StringRef groupName, SmallString<128> &buf) {
      buf += 'Swift';
      if (groupName.empty())
        return;
      buf += '.';
      for (char ch : groupName) {
        if (ch == '/')
          buf += '.';
        else if (ch == ' ' || ch == '-')
          buf += '_';
        else
          buf += ch;
      }
    };
    auto appendGroupNameForFilename = [](StringRef groupName, SmallString<256> &buf) {
      if (groupName.empty())
        return;
      buf += '_';
      for (char ch : groupName) {
        if (ch == '/' || ch ==' ')
          buf += '_';
        else
          buf += ch;
      }
    };
    
    
    {  const SILDebugScope *Scope = this;
  while (Scope->Parent.is<const SILDebugScope *>())
    Scope = Scope->Parent.get<const SILDebugScope *>();
  assert(Scope->Parent.is<SILFunction *>() && 'orphaned scope');
  return Scope->Parent.get<SILFunction *>();
}
    
    
    {  StringRef getReceiverUSR() const {
    for (auto Relation: Relations) {
      if (Relation.roles & (SymbolRoleSet) SymbolRole::RelationReceivedBy)
        return Relation.USR;
    }
    return StringRef();
  }
};
    
      /// Add a #line-defined virtual file region.
  ///
  /// By default, this region continues to the end of the buffer.
  ///
  /// \returns True if the new file was added, false if the file already exists.
  /// The name and line offset must match exactly in that case.
  ///
  /// \sa closeVirtualFile.
  bool openVirtualFile(SourceLoc loc, StringRef name, int lineOffset);
    
    #ifndef SWIFT_SYNTAX_REFERENCES_H
#define SWIFT_SYNTAX_REFERENCES_H
    
    namespace swift {
class ModuleDecl;
class SourceFile;
class DeclContext;
    }
    
    
    {
    {} // end namespace index
} // end namespace swift
    
    #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
#include <google/protobuf/testing/file.h>
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
    
    {
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__

    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
    #include <google/protobuf/compiler/java/java_generator_factory.h>
    
    //////////////////////////////////////////////////////////////////////
    
    
    {  int64_t measure() const;
};
    
      mpz_init(gmpReturn);
  mpz_nextprime(gmpReturn, gmpData);
    
    inline void initNuma() {}
inline constexpr int next_numa_node(std::atomic_int& curr_node) { return 0; }
inline constexpr int num_numa_nodes() { return 1; }
inline void numa_interleave(void* start, size_t size) {}
inline void numa_bind_to(void* start, size_t size, int node) {}
inline constexpr bool numa_node_allowed(int node) { return true; }
    
    #include 'hphp/util/assertions.h'
#include 'magic.h' // @nolint
    
    /*
 * Helpers for unconditional and conditional jumps.
 */
void surpriseCheck(IRGS&);
void surpriseCheck(IRGS&, Offset);
void jmpImpl(IRGS&, Offset);
void implCondJmp(IRGS&, Offset taken, bool negate, SSATmp*);
    
    
Instruction* Instruction::ImmPCOffsetTarget(Instruction* from) {
  ptrdiff_t offset;
  if (IsPCRelAddressing()) {
    // PC-relative addressing. Only ADR is supported.
    offset = ImmPCRel();
  } else if (IsLoadOrStore()) {
    offset = ImmLLiteral() << kInstructionSizeLog2;
  } else {
    // All PC-relative branches.
    assert(BranchType() != UnknownBranchType);
    // Relative branch offsets are instruction-size-aligned.
    offset = ImmBranch() << kInstructionSizeLog2;
  }
  return (!from ? this : from) + offset;
}
    
      while (to_read > 0) {
    auto const read = folly::readNoInt(source_file, buffer,
                                       std::min(sizeof(buffer), to_read));
    if (read <= 0) {
      Logger::Error('dlopen_embedded_data: Error reading from section: %s',
                    folly::errnoStr(errno).c_str());
      return nullptr;
    }
    if (folly::writeFull(dest_file, buffer, read) <= 0) {
      Logger::Error('dlopen_embedded_data: Error writing to temporary file: %s',
                    folly::errnoStr(errno).c_str());
      return nullptr;
    }
    to_read -= read;
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {    // The next element in the stack.
    context* next_;
  };
    
    #endif // BOOST_ASIO_DETAIL_DESCRIPTOR_READ_OP_HPP

    
    #include <boost/asio/detail/addressof.hpp>
#include <boost/asio/detail/bind_handler.hpp>
#include <boost/asio/detail/buffer_sequence_adapter.hpp>
#include <boost/asio/detail/descriptor_ops.hpp>
#include <boost/asio/detail/fenced_block.hpp>
#include <boost/asio/detail/reactor_op.hpp>
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
typedef null_fenced_block fenced_block;
#elif defined(__MACH__) && defined(__APPLE__)
typedef macos_fenced_block fenced_block;
#elif defined(__sun)
typedef solaris_fenced_block fenced_block;
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
typedef gcc_arm_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
typedef gcc_hppa_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
typedef gcc_x86_fenced_block fenced_block;
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
typedef gcc_sync_fenced_block fenced_block;
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
typedef win_fenced_block fenced_block;
#else
typedef null_fenced_block fenced_block;
#endif
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #include <boost/asio/detail/config.hpp>
#include <list>
#include <utility>
#include <boost/asio/detail/assert.hpp>
#include <boost/asio/detail/noncopyable.hpp>
    
    #endif // defined(BOOST_ASIO_WINDOWS_RUNTIME)
    
        cobj = (CocosDenshion::SimpleAudioEngine*)tolua_tousertype(tolua_S,1,0);
    
    
    
        argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_physics_PhysicsContactPostSolve_getFriction'', nullptr);
            return 0;
        }
        double ret = cobj->getFriction();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.PhysicsContactPostSolve:getFriction',argc, 0);
    return 0;
    
        virtual void DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color);
    
    	b2WorldManifold worldManifold;
	contact->GetWorldManifold(&worldManifold);
    
    
    {	static Test* Create()
	{
		return new AddPair;
	}
};
    
    			b2Transform xf2;
			xf2.q.Set(-0.3524f * b2_pi);
			xf2.p = -xf2.q.GetXAxis();
    
    
    {			b2EdgeShape shape;
			shape.Set(b2Vec2(-40.0f, 0.0f), b2Vec2(40.0f, 0.0f));
			ground->CreateFixture(&shape, 0.0f);
		}
    
    			b2Body* prevBody = ground;
			for (int32 i = 0; i < e_count; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position.Set(-4.5f + 1.0f * i, 5.0f);
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&fd);
    }
    
    DEFINE_FIND_STATIC_METHOD(KXlog_logWrite, KXlog, 'logWrite', '(Lcom/tencent/mars/xlog/Xlog$XLoggerInfo;Ljava/lang/String;)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_logWrite
  (JNIEnv *env, jclass, jobject _log_info, jstring _log) {
    }
    
    #include 'dumpcrash_stack.h'
    
    
/*
 * WakeUpLock.h
 *
 *  Created on: 2012-9-28
 *      Author: yerungui
 */
    
    //
//  comm_frequency_limit.cc
//  comm
//
//  Created by liucan on 13-11-23.
//
    
    
Test_Spy_Sample::Test_Spy_Sample()
{
    SPY_ATTACH_CLASS(NULL);
}
    
    void TSpy::TestFun0()
{
    return reinterpret_cast<Test_Spy_Sample*>(This())->TestFun0();
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
/*
 * scop_jenv.h
 *
 *  Created on: 2012-8-21
 *      Author: yanguoyue
 */
    
    class PieceStorage;
class Peer;
class BtMessageDispatcher;
class BtMessageFactory;
class BtRequestFactory;
class PeerConnection;
class BtMessageValidator;
    
    #include 'TimerA2.h'
    
    
    {} // namespace aria2
    
      void setBtRuntime(const std::shared_ptr<BtRuntime>& btRuntime);
    
    namespace aria2 {
    }
    
    private:
  void startAsyncFamily(const std::string& hostname, int family,
                        DownloadEngine* e, Command* command);
  void setNameResolverCheck(size_t resolverIndex, DownloadEngine* e,
                            Command* command);
  void disableNameResolverCheck(size_t index, DownloadEngine* e,
                                Command* command);
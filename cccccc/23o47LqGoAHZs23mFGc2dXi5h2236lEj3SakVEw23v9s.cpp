
        
        
    { private:
  DISALLOW_COPY_AND_ASSIGN(URLRequestAsyncAsarJob);
};
    
    class WinFrameView : public FramelessView {
 public:
  WinFrameView();
  virtual ~WinFrameView();
    }
    
    #ifndef ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_
#define ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_
    
    class PreferencesManager : public content::RenderThreadObserver {
 public:
  PreferencesManager();
  ~PreferencesManager() override;
    }
    
    
    {}  // namespace chrome
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedMessageFieldGenerator);
};
    
    
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
    
    #include 'hphp/util/compatibility.h'
    
    private:
  std::atomic<int> m_refCount;
  int m_timeoutSeconds;
    
    #ifdef _MSC_VER
    
      bool initShadow(int afdt_listen,
                  const std::string& afdt_filename, int id,
                  const std::vector<int> &inherited_fds);
  static void runShadow(int afdt_fd);
  void closeShadow();
    
    bool js_cocos2dx_navmesh_NavMeshAgent_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_navmesh_NavMeshAgent_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_navmesh_NavMeshAgent(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_navmesh(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_navmesh_NavMeshAgent_setMaxSpeed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_syncToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_completeOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getSeparationWeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setAutoTraverseOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getCurrentVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_syncToAgent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_isOnOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setSeparationWeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_pause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setAutoOrientation(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getMaxSpeed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getCurrentOffMeshLinkData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_resume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_stop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setMaxAcceleration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setOrientationRefAxes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getMaxAcceleration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getObstacleAvoidanceType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setObstacleAvoidanceType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getNavMeshAgentComponentName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_NavMeshAgent(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    
        glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, vertices);
    glDrawArrays(GL_LINE_LOOP, 0, vertexCount);
    
      if (Flags.merge) {
    if (Options.MaxLen == 0)
      F->SetMaxInputLen(kMaxSaneLen);
    if (TPC.UsingTracePcGuard()) {
      if (Flags.merge_control_file)
        F->CrashResistantMergeInternalStep(Flags.merge_control_file);
      else
        F->CrashResistantMerge(Args, *Inputs);
    } else {
      F->Merge(*Inputs);
    }
    exit(0);
  }
    
    extern 'C' {
// Declare these symbols as weak to allow them to be optionally defined.
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  __attribute__((weak)) RETURN_TYPE NAME FUNC_SIG
    }
    
    // Returns 'Dir/FileName' or equivalent for the current OS.
std::string DirPlusFile(const std::string &DirPath,
                        const std::string &FileName);
    
      FindClose(FindHandle);
    
      // Parse NumFiles.
  if (!std::getline(IS, Line, '\n')) return false;
  std::istringstream L1(Line);
  size_t NumFiles = 0;
  L1 >> NumFiles;
  if (NumFiles == 0 || NumFiles > 10000000) return false;
    
    static bool IsInterestingCoverageFile(std::string &File) {
  if (File.find('compiler-rt/lib/') != std::string::npos)
    return false; // sanitizer internal.
  if (File.find('/usr/lib/') != std::string::npos)
    return false;
  if (File.find('/usr/include/') != std::string::npos)
    return false;
  if (File == '<null>')
    return false;
  return true;
}
    
    #include 'FuzzerDefs.h'
#include 'FuzzerValueBitMap.h'
#include <set>
    
    namespace fuzzer {
    }
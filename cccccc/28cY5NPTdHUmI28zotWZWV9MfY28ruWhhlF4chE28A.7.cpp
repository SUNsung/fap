
        
        #include 'atom/browser/api/trackable_object.h'
#include 'atom/browser/net/atom_network_delegate.h'
#include 'native_mate/arguments.h'
#include 'native_mate/handle.h'
    
      AtomQuotaPermissionContext();
  virtual ~AtomQuotaPermissionContext();
    
    namespace atom {
    }
    
      // URLRequestJob:
  void GetResponseInfo(net::HttpResponseInfo* info) override;
    
    typedef struct { int position; atom::AtomMenuModel* model; } MenuItem;
typedef std::map<ui::Accelerator, MenuItem> AcceleratorTable;
    
    #endif  // ATOM_BROWSER_UI_DRAG_UTIL_H_

    
    #ifndef ATOM_BROWSER_UI_TRAY_ICON_GTK_H_
#define ATOM_BROWSER_UI_TRAY_ICON_GTK_H_
    
    MenuModelAdapter::~MenuModelAdapter() {
}
    
    #define MARKUP_SIMPLE_FIELD(Id, Keyword, XMLKind) \
class Id final : public PrivateExtension, \
    private llvm::TrailingObjects<Id, MarkupASTNode *> { \
  friend TrailingObjects; \
\
  size_t NumChildren; \
\
  Id(ArrayRef<MarkupASTNode *> Children);\
\
public: \
  static Id *create(MarkupContext &MC, ArrayRef<MarkupASTNode *> Children); \
\
  ArrayRef<MarkupASTNode *> getChildren() { \
    return {getTrailingObjects<MarkupASTNode *>(), NumChildren}; \
  } \
\
  ArrayRef<const MarkupASTNode *> getChildren() const { \
    return {getTrailingObjects<MarkupASTNode *>(), NumChildren}; \
  } \
\
  static bool classof(const MarkupASTNode *N) { \
    return N->getKind() == ASTNodeKind::Id; \
  } \
};
#include 'swift/Markup/SimpleFields.def'
    
      /// \brief Returns a SourceRange covering the entire specified buffer.
  ///
  /// Note that the start location might not point at the first token: it
  /// might point at whitespace or a comment.
  CharSourceRange getRangeForBuffer(unsigned BufferID) const;
    
    extern JSClass  *jsb_cocosbuilder_CCBAnimationManager_class;
extern JSObject *jsb_cocosbuilder_CCBAnimationManager_prototype;
    
    bool js_cocos2dx_navmesh_NavMeshObstacle_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_navmesh_NavMeshObstacle_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_navmesh_NavMeshObstacle(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_navmesh(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_navmesh_NavMeshObstacle_getSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_initWith(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_syncToObstacle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_syncToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getNavMeshObstacleComponentName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_NavMeshObstacle(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    class AddPair : public Test
{
public:
    }
    
    
    {    _state = EXPECTS_CRASH_DUMP_END;
    return 0;
}
    
    
    
    #ifndef _COMM_FUNCTION_H_
#define _COMM_FUNCTION_H_
    
    
/*
 * scop_jenv.h
 *
 *  Created on: 2012-8-21
 *      Author: yanguoyue
 */
    
    ////////////////////////////////////////////////////////////////////////////////
/// Disclaimer: This is intended only as a partial stand-in for
/// std::pmr::memory_resource (C++17) as needed for developing a
/// hazptr prototype.
////////////////////////////////////////////////////////////////////////////////
    
    
    { private:
  bool async_{true};
  Optional<size_t> maxBufferSize_;
};
    
     private:
  ImmediateFileWriter(ImmediateFileWriter const&) = delete;
  ImmediateFileWriter& operator=(ImmediateFileWriter const&) = delete;
    
    /**
 * Configuration for a LogCategory
 */
class LogCategoryConfig {
 public:
  explicit LogCategoryConfig(
      LogLevel level = LogLevel::WARNING,
      bool inheritParentLevel = true);
  LogCategoryConfig(
      LogLevel level,
      bool inheritParentLevel,
      std::vector<std::string> handlers);
    }
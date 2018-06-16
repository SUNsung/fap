
        
        
    {}  // namespace atom
    
    #include 'base/macros.h'
#include 'v8/include/v8.h'
    
    // Wrapper used to keep track of the lifetime of a WebContents.
// Lives on the UI thread.
class PrintingUIWebContentsObserver : public content::WebContentsObserver {
 public:
  explicit PrintingUIWebContentsObserver(content::WebContents* web_contents);
    }
    
    
    {  /// Returns true if \p BB is a dead-end block.
  bool isDeadEnd(SILBasicBlock *BB) {
    if (!isComputed) {
      // Lazily compute the dataflow.
      compute();
      isComputed = true;
    }
    return ReachableBlocks.count(BB) == 0;
  }
};
    
    namespace swift {
    }
    
    // On Cygwin, std::once_flag can not be used because it is larger than the
// platform word.
typedef uintptr_t swift_once_t;
#else
    
    #include <google/protobuf/descriptor_database.h>
    
    // TODO(jonskeet): Refactor repeated field support; all the implementations are *really* similar. We
// should probably have a RepeatedFieldGeneratorBase.
class RepeatedEnumFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedEnumFieldGenerator(const FieldDescriptor* descriptor,
                             int fieldOrdinal,
                             const Options *options);
  ~RepeatedEnumFieldGenerator();
    }
    
    // Exposed for testing only.
LIBPROTOC_EXPORT string EscapeJavadoc(const string& input);
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_enum_field.h>
#include <google/protobuf/compiler/java/java_extension.h>
#include <google/protobuf/compiler/java/java_extension_lite.h>
#include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_message.h>
#include <google/protobuf/compiler/java/java_message_lite.h>
#include <google/protobuf/compiler/java/java_service.h>
    
      virtual ExtensionGenerator* NewExtensionGenerator(
      const FieldDescriptor* descriptor) const;
    
    #ifdef WIN32
/// Suppress a C4244 warning in gtest-printers.h (double -> BiggestInt
/// conversion)
#pragma warning(push, 3)
#pragma warning(disable : 4244)
#endif
    
        auto dropper = DropPrivileges::get();
    EXPECT_TRUE(dropper->dropToParent(perm_path_ + 'ro'));
    EXPECT_TRUE(dropper->dropped_);
    EXPECT_EQ(dropper->to_user_, nobody->pw_uid);
    
    #include <osquery/core.h>
#include <osquery/system.h>
    
    bool js_cocos2dx_studio_MovementData_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_MovementData_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_MovementData(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_MovementData_getMovementBoneData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_MovementData_addMovementBoneData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_MovementData_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_MovementData_MovementData(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    
    		case 's':
			m_platform->SetType(b2_staticBody);
			break;
    
    class AbstractDiskWriter : public DiskWriter {
private:
  std::string filename_;
    }
    
    void AbstractHttpServerResponseCommand::updateReadWriteCheck()
{
  if (httpServer_->wantRead()) {
    if (!readCheck_) {
      readCheck_ = true;
      e_->addSocketForReadCheck(socket_, this);
    }
  }
  else if (readCheck_) {
    readCheck_ = false;
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (httpServer_->wantWrite()) {
    if (!writeCheck_) {
      writeCheck_ = true;
      e_->addSocketForWriteCheck(socket_, this);
    }
  }
  else if (writeCheck_) {
    writeCheck_ = false;
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    namespace aria2 {
    }
    
    class ActivePeerConnectionCommand : public Command {
private:
  RequestGroup* requestGroup_;
  std::shared_ptr<BtRuntime> btRuntime_;
  std::shared_ptr<PieceStorage> pieceStorage_;
  std::shared_ptr<PeerStorage> peerStorage_;
  std::shared_ptr<BtAnnounce> btAnnounce_;
    }
    
      int64_t offset_;
    
    void AnnounceList::setCurrentTier(
    std::deque<std::shared_ptr<AnnounceTier>>::iterator itr)
{
  if (itr != std::end(tiers_)) {
    currentTier_ = std::move(itr);
    currentTracker_ = std::begin((*currentTier_)->urls);
  }
}
    
    
    {  void nextEventIfAfterStarted();
};

        
        #define IPC_MESSAGE_START ShellMsgStart
    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
       bool IsCommandIdChecked(int command_id) const override;
   bool IsCommandIdEnabled(int command_id) const override;
    
    #include 'base/logging.h'
#include 'base/strings/string_util.h'
#include 'base/values.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menu/menu.h'
    
    #include 'base/files/file_path.h'
#include 'base/strings/string_util.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/threading/thread_restrictions.h'
#include 'base/values.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menu/menu.h'
#include 'content/nw/src/nw_base.h'
#include 'content/nw/src/nw_content.h'
#include 'content/nw/src/nw_package.h'
#include 'ui/base/accelerators/accelerator.h'
#include 'ui/gfx/image/image_skia_operations.h'
#include 'ui/events/event_constants.h'//for modifier key code
#include 'base/logging.h'
    
    namespace extensions {
    }
    
    
    {} // namespace extensions
#endif

    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.destroy', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjDestroyFunction);
};
    
        std::unique_ptr<base::ListValue> args = nwapi::nw__screen::OnSourceAdded::Create(
      src.id.ToString(),
      base::UTF16ToUTF8(src.name),
      index,
      type,
      src.id.type == content::DesktopMediaID::TYPE_SCREEN && GetPrimaryMonitorIndex() == index);
    
    TEST(MovableMessageTest, SelfMoveAssignment) {
  // The `self` reference is necessary to defeat -Wself-move.
  protobuf_unittest::TestAllTypes message, &self = message;
  TestUtil::SetAllFields(&message);
  message = std::move(self);
  TestUtil::ExpectAllFieldsSet(message);
}
    
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
    
    int main(int argc, const char** argv) {
  FileInputStream fin(STDIN_FILENO);
  GzipInputStream in(&fin);
    }
    
    class Proto3DataStripper : public DataStripper {
 private:
  virtual bool ShouldBeClear(const FieldDescriptor *field) {
    return field->type() == FieldDescriptor::TYPE_GROUP ||
           field->is_extension();
  }
};
    
    #include 'google/protobuf/message.h'
#include 'google/protobuf/descriptor.h'
#include 'google/protobuf/descriptor.pb.h'
    
    namespace HPHP {
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}

    
    #ifndef incl_HPHP_OUTPUT_FILE_H_
#define incl_HPHP_OUTPUT_FILE_H_
    
    
    {  StructuredLogEntry cols;
  fillCols(cols);
  cols.setStr('event_name', event);
  cols.setInt('priority', priority);
  StructuredLog::log('hhvm_perf_warning', cols);
}
    
        // change element at index 1 (second element) to 'second'
    array.at(1) = 'second';
    
        // out_of_range.401
    try
    {
        // try to use a an invalid array index
        json::const_reference ref = j.at('/array/4'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
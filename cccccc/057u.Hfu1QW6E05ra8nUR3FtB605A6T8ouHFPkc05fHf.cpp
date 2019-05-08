
        
        #include 'base/compiler_specific.h'
#include 'content/nw/src/api/base/base.h'
    
    
    {  *accelerator = item->accelerator_;
  return true;
}
    
       bool IsItemForCommandIdDynamic(int command_id) const override;
   base::string16 GetLabelForCommandId(int command_id) const override;
   bool GetIconForCommandId(int command_id,
                                   gfx::Image* icon) const override;
    
      gfx::Point* point = reinterpret_cast<gfx::Point*>(userdata);
  *x = point->x();
  *y = point->y();
    
    
    {
    {    // build keyboard code
    ui::DomCode domCode = ui::KeycodeConverter::CodeStringToDomCode(keyName.c_str());
    retval = ui::DomCodeToUsLayoutKeyboardCode(domCode);
  }
  return retval;
}
    
    class NwAppCloseAllWindowsFunction : public UIThreadExtensionFunction {
 public:
  NwAppCloseAllWindowsFunction() {}
    }

        
          static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    namespace content {
class RenderFrameHost;
}
    
    
    {}  // namespace nwapi

    
    Menu::~Menu() {
  Destroy();
}
    
    void MenuItem::SetSubmenu(Menu* sub_menu) {
  submenu_ = sub_menu;
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    sub_menu->UpdateKeys(gtk_accel_group);
  }
  if (sub_menu == NULL)
    gtk_menu_item_remove_submenu(GTK_MENU_ITEM(menu_item_));
  else
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item_), sub_menu->menu_);
}
    
      option.GetString('type', &type_);
  option.GetString('label', &label_);
  option.GetString('tooltip', &tooltip_);
  option.GetBoolean('checked', &is_checked_);
  option.GetBoolean('enabled', &is_enabled_);
    
    ExtensionFunction::ResponseAction
NwAppCrashBrowserFunction::Run() {
  int* ptr = nullptr;
  *ptr = 1;
  return RespondNow(NoArguments());
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.App.clearAppCache', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppClearAppCacheFunction);
};
    
    namespace extensions {
    }
    
    #include <vector>
    
    NwObjAllocateIdFunction::NwObjAllocateIdFunction() {
}
    
    
    {  bool isChild() {
    return pid == 0;
  }
};
    
    
    {} // namespace caffe2

    
    **Result**
    
    workspace.RunOperatorOnce(op)
print('Out:\n', workspace.FetchBlob('out'))
    
    #include 'caffe2/operators/glu_op.h'
    
    class GetIm2ColGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Col2Im',
        '',
        std::vector<string>{GO(0), I(0)},
        std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Im2Col, GetIm2ColGradient);
    
    
    {
    {}}
    
    void Assembler::addi(const Reg64& rt, const Reg64& ra, Immed imm) {
  assert(imm.fits(HPHP::sz::word) && 'Immediate is too big');
  EmitDForm(14, rn(rt), rn(ra), imm.w());
}
    
      void EmitXX2Form(const uint8_t op,
                   const RegNumber t,
                   const uint8_t uim,
                   const RegNumber b,
                   const uint16_t xo,
                   const bool bx,
                   const bool tx)  {
    XX2_form_t xx2_formater {{
      tx,
      bx,
      xo,
      static_cast<uint32_t>(b),
      static_cast<uint32_t>(uim & 0x3),
      static_cast<uint32_t>(t),
      op
    }};
    dword(xx2_formater.instruction);
  }
    
    IMPLEMENT_RESOURCE_ALLOCATION(PlainDirectory)
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
  int64_t readImpl(char *buffer, int64_t length) override;
  int getc() override;
  int64_t writeImpl(const char *buffer, int64_t length) override;
  bool seek(int64_t offset, int whence = SEEK_SET) override;
  int64_t tell() override;
  bool eof() override;
  bool rewind() override;
  bool flush() override;
  bool truncate(int64_t size) override;
    
    namespace HPHP {
    }
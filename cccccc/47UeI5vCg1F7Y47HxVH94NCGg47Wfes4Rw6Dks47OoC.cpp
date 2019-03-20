
        
        
    {    /* On the first run, return 0 to force a second run */
    if (counter == 0) {
        memset(nonce32, 0, 32);
        return 1;
    }
    /* On the second run, return an overflow to force a third run */
    if (counter == 1) {
        memset(nonce32, 0xff, 32);
        return 1;
    }
    /* On the next run, return a valid nonce, but flip a coin as to whether or not to fail signing. */
    memset(nonce32, 1, 32);
    return secp256k1_rand_bits(1);
}
    
    // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    
#include 'base/basictypes.h'
    
    bool MenuDelegate::IsItemForCommandIdDynamic(int command_id) const {
  if (command_id < 0)
    return false;
    }
    
       bool IsItemForCommandIdDynamic(int command_id) const override;
   base::string16 GetLabelForCommandId(int command_id) const override;
   bool GetIconForCommandId(int command_id,
                                   gfx::Image* icon) const override;
    
    void Menu::UpdateStates() {
}
    
    bool NwClipboardGetListSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  std::unique_ptr<GetListSync::Params> params(GetListSync::Params::Create(*args_));
  EXTENSION_FUNCTION_VALIDATE(params.get());
  std::unique_ptr<ClipboardReader> reader(new ClipboardReader());
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.clearSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardClearSyncFunction);
};
    
      ::opencensus::trace::SpanContext Context() const { return span_.context(); }
  ::opencensus::trace::Span Span() const { return span_; }
  void EndSpan() { span_.End(); }
    
    
    {  const protobuf::FieldDescriptor* field_desc =
      descriptor_pool_->FindExtensionByNumber(desc,
                                              request->extension_number());
  if (field_desc == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'Extension not found.');
  }
  std::unordered_set<grpc::string> seen_files;
  FillFileDescriptorResponse(field_desc->file(), response, &seen_files);
  return Status::OK;
}
    
    #include <grpcpp/grpcpp.h>
#include 'src/proto/grpc/reflection/v1alpha/reflection.grpc.pb.h'
    
                    auto tempRat = m_chopNumbers[m_numwidth] >> holdVal;
                tempRat = Integer(tempRat);
    
        Rational Sin(Rational const& rat, ANGLE_TYPE angletype);
    Rational Cos(Rational const& rat, ANGLE_TYPE angletype);
    Rational Tan(Rational const& rat, ANGLE_TYPE angletype);
    Rational ASin(Rational const& rat, ANGLE_TYPE angletype);
    Rational ACos(Rational const& rat, ANGLE_TYPE angletype);
    Rational ATan(Rational const& rat, ANGLE_TYPE angletype);
    
    INarratorAnnouncementHost^ LiveRegionHost::MakeHost()
{
    return ref new LiveRegionHost();
}
    
        wstring EngineResourceProvider::GetCEngineString(const wstring& id)
    {
        const auto& localizationSettings = LocalizationSettings::GetInstance();
    }
    
    CBinaryCommand CommandDeserializer::DeserializeBinary()
{
    int cmd = m_dataReader->ReadInt32();
    return CBinaryCommand(cmd);
}

    
    int main()
{
    // create JSON array
    json array = {'first', '2nd', 'third', 'fourth'};
    }
    
        // out_of_range.401
    try
    {
        // try to use a an invalid array index
        json::reference ref = j.at('/array/4'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
    
    {    // out_of_range.404
    try
    {
        // try to use a JSON pointer that cannot be resolved
        json::const_reference ref = j.at('/number/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

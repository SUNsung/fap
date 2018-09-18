
        
        public:
    ~MacDockIconHandler();
    
        /** Colorize an icon (given object) with the text color */
    QIcon TextColorIcon(const QIcon& icon) const;
    
    static void secp256k1_ge_set_gej_var(secp256k1_ge *r, secp256k1_gej *a) {
    secp256k1_fe z2, z3;
    r->infinity = a->infinity;
    if (a->infinity) {
        return;
    }
    secp256k1_fe_inv_var(&a->z, &a->z);
    secp256k1_fe_sqr(&z2, &a->z);
    secp256k1_fe_mul(&z3, &a->z, &z2);
    secp256k1_fe_mul(&a->x, &a->x, &z2);
    secp256k1_fe_mul(&a->y, &a->y, &z3);
    secp256k1_fe_set_int(&a->z, 1);
    r->x = a->x;
    r->y = a->y;
}
    
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 0));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 1));
    CHECK(secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 2));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 3));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    
    // Verify that difficulty is 1.0 for an empty chain.
BOOST_AUTO_TEST_CASE(get_difficulty_for_null_tip)
{
    double difficulty = GetDifficulty(nullptr);
    RejectDifficultyMismatch(difficulty, 1.0);
}
    
        strKey = 'distance';
    BOOST_CHECK(obj.pushKV(strKey, (int64_t) 25));
    
    inline reffed_ptr<FileDef> FileDef::New() {
  upb_filedef *f = upb_filedef_new(&f);
  return reffed_ptr<FileDef>(f, &f);
}
    
    EnumGenerator::~EnumGenerator() {
}
    
    void EnumFieldGenerator::GenerateParsingCode(io::Printer* printer) {
  printer->Print(variables_,
    '$name$_ = ($type_name$) input.ReadEnum();\n');
}
    
      struct Options cli_options;
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    #include <sstream>
    
      // Parameterless constructor and partial OnConstruction method.
  WriteGeneratedCodeAttributes(printer);
  printer->Print(
    vars,
    'public $class_name$() {\n'
    '  OnConstruction();\n'
    '}\n\n'
    'partial void OnConstruction();\n\n');
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    void PrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  // TODO(jonskeet): Work out whether we want to prevent the fields from ever being
  // null, or whether we just handle it, in the cases of bytes and string.
  // (Basically, should null-handling code be in the getter or the setter?)
  printer->Print(
    variables_,
    'private $type_name$ $name_def_message$;\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ $type_name$ $property_name$ {\n'
    '  get { return $name$_; }\n'
    '  set {\n');
  if (is_value_type) {
    printer->Print(
      variables_,
      '    $name$_ = value;\n');
  } else {
    printer->Print(
      variables_,
      '    $name$_ = pb::ProtoPreconditions.CheckNotNull(value, \'value\');\n');
  }
  printer->Print(
    '  }\n'
    '}\n');
}
    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    REGISTER_GRADIENT(Sub, GetSubGradient);
    
        auto oldSize = new_tensor->size();
    auto maxElem = 1 +
        *(std::max_element(
            indices.template data<int>(),
            indices.template data<int>() + indices.size()));
    
      auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = pretransposed_weight
      ? size_from_dim_(canonical_axis_w, GetDimsVector(in[1]))
      : size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    // ##########################################################
    
    namespace caffe2 {
namespace {
REGISTER_CPU_OPERATOR(
    FindDuplicateElements,
    FindDuplicateElementsOp<CPUContext>);
    }
    }
    
    //---- Include imgui_user.h at the end of imgui.h as a convenience
//#define IMGUI_INCLUDE_IMGUI_USER_H
    
    static int InputTextCallback(ImGuiInputTextCallbackData* data)
{
    InputTextCallback_UserData* user_data = (InputTextCallback_UserData*)data->UserData;
    if (data->EventFlag == ImGuiInputTextFlags_CallbackResize)
    {
        // Resize string callback
        std::string* str = user_data->Str;
        IM_ASSERT(data->Buf == str->c_str());
        str->resize(data->BufTextLen);
        data->Buf = (char*)str->c_str();
    }
    else if (user_data->ChainCallback)
    {
        // Forward to user callback, if any
        data->UserData = user_data->ChainCallbackUserData;
        return user_data->ChainCallback(data);
    }
    return 0;
}
    
            const uint32_t w = ft_bitmap->bitmap.width;
        const uint32_t h = ft_bitmap->bitmap.rows;
        const uint8_t* src = ft_bitmap->bitmap.buffer;
        const uint32_t src_pitch = ft_bitmap->bitmap.pitch;
    
        // Setup Dear ImGui binding
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
    HRESULT CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    }
    
        // Bind shader and vertex buffers
    unsigned int stride = sizeof(ImDrawVert);
    unsigned int offset = 0;
    ctx->IASetInputLayout(g_pInputLayout);
    ctx->IASetVertexBuffers(0, 1, &g_pVB, &stride, &offset);
    ctx->IASetIndexBuffer(g_pIB, sizeof(ImDrawIdx) == 2 ? DXGI_FORMAT_R16_UINT : DXGI_FORMAT_R32_UINT, 0);
    ctx->IASetPrimitiveTopology(D3D10_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ctx->VSSetShader(g_pVertexShader);
    ctx->VSSetConstantBuffers(0, 1, &g_pVertexConstantBuffer);
    ctx->PSSetShader(g_pPixelShader);
    ctx->PSSetSamplers(0, 1, &g_pFontSampler);
    
    void EsdCanClient::Stop() {
  if (is_started_) {
    is_started_ = false;
    int32_t ret = canClose(dev_handler_);
    if (ret != NTCAN_SUCCESS) {
      AERROR << 'close error code:' << ret << ', ' << GetErrorString(ret);
    } else {
      AINFO << 'close esd can ok. port:' << port_;
    }
  }
}
    
    ErrorCode FakeCanClient::Send(const std::vector<CanFrame> &frames,
                              int32_t *const frame_num) {
  if (frame_num == nullptr) {
    AERROR << 'frame_num pointer is null';
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    }
    
    #include <sstream>
#include <string>
#include <vector>
    
    /*
TEST(HermesCanClient, send) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::HERMES_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
  HermesCanClient hermes_can;
  EXPECT_TRUE(hermes_can.Init(param));
    }
    
    
    {  port_ = parameter.channel_id();
  return true;
}
    
    #include <string>
#include <vector>
    
      /*
   * @brief reset send messages
   */
  void ResetSendMessages();
    
    /**
 * @class ProtocolData
 *
 * @brief This is the base class of protocol data.
 */
template <typename SensorType>
class ProtocolData {
 public:
  /**
   * @brief static function, used to calculate the checksum of input array.
   * @param input the pointer to the start position of input array
   * @param length the length of the input array
   * @return the value of checksum
   */
  static std::uint8_t CalculateCheckSum(const uint8_t *input,
                                        const uint32_t length);
  /**
   * @brief construct protocol data.
   */
  ProtocolData() = default;
    }
    
    TEST(ByteTest, ByteToString) {
  unsigned char value = 0x34;
  EXPECT_EQ('34', Byte::byte_to_hex(value));
  EXPECT_EQ('00110100', Byte::byte_to_binary(value));
  uint32_t int_value = 0xE13A;
  EXPECT_EQ('E13A', Byte::byte_to_hex(int_value));
}
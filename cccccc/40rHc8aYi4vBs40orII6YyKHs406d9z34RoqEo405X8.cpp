#include 'base/stl_util.h'
    
      // add two new params for better error handling
  errorObject->Set(mate::StringToV8(isolate(), 'code'),
                   v8::Integer::New(isolate(), code));
  errorObject->Set(mate::StringToV8(isolate(), 'domain'),
                   mate::StringToV8(isolate(), domain));
    
    #if defined(OS_WIN)
  // Static callback invoked when a message comes in to our messaging window.
  static LRESULT CALLBACK WndProcStatic(HWND hwnd,
                                        UINT message,
                                        WPARAM wparam,
                                        LPARAM lparam);
    
    class TrayIcon;
    
     private:
  // Replyer for the synchronous messages.
  content::RenderFrameHost* sender_ = nullptr;
  IPC::Message* message_ = nullptr;
    
     private:
  void OnMessageBoxCallback(DialogClosedCallback callback,
                            const std::string& origin,
                            int code,
                            bool checkbox_checked);
    
    void AtomQuotaPermissionContext::RequestQuotaPermission(
    const content::StorageQuotaParams& params,
    int render_process_id,
    const PermissionCallback& callback) {
  callback.Run(response::QUOTA_PERMISSION_RESPONSE_ALLOW);
}
    
    void AutoUpdater::QuitAndInstall() {}
#endif
    
      virtual void OnError(const std::string& error,
                       const int code,
                       const std::string& domain) {}
    
    /* Adds a ref from one refcounted object to another ('from' must not already
 * own a ref).  These refs may be circular; cycles will be collected correctly
 * (if conservatively).  These refs do not need to be freed in from's free()
 * function. */
void upb_refcounted_ref2(const upb_refcounted *r, upb_refcounted *from);
    
    
    {  for (int i = 0; i < parts.size(); i++) {
    string::size_type equals_pos = parts[i].find_first_of('=');
    std::pair<string, string> value;
    if (equals_pos == string::npos) {
      value.first = parts[i];
      value.second = '';
    } else {
      value.first = parts[i].substr(0, equals_pos);
      value.second = parts[i].substr(equals_pos + 1);
    }
    output->push_back(value);
  }
}
    
      auto* message1_on_arena =
      Arena::CreateMessage<protobuf_unittest::TestAllTypes>(&arena);
  TestUtil::SetAllFields(message1_on_arena);
  const auto* nested = &message1_on_arena->optional_nested_message();
    
    #include <sstream>
    
    void ImmutableExtensionLiteGenerator::Generate(io::Printer* printer) {
  std::map<string, string> vars;
  const bool kUseImmutableNames = true;
  InitTemplateVars(descriptor_, scope_, kUseImmutableNames, name_resolver_,
                   &vars);
  printer->Print(vars,
      'public static final int $constant_name$ = $number$;\n');
    }
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_doc_comment.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_name_resolver.h>
#include <google/protobuf/io/printer.h>
    
    // Author: xiaofeng@google.com (Feng Xiao)
    
      // Different data, can't transform.
  decode_data.AddString(1, 'abcdefghIJ', 'zbcdefghIJ');
  decode_data.AddString(3, 'abcdefghIJ', 'abcdezghIJ');
  // Shortened data, can't transform.
  decode_data.AddString(2, 'abcdefghIJ', 'abcdefghI');
  // Extra data, can't transform.
  decode_data.AddString(4, 'abcdefghIJ', 'abcdefghIJz');
    
    int PluginMain(int argc, char* argv[], const CodeGenerator* generator) {
    }
    
    static void WriteShort(io::CodedOutputStream *out, uint16 val) {
  uint8 p[2];
  p[0] = static_cast<uint8>(val);
  p[1] = static_cast<uint8>(val >> 8);
  out->WriteRaw(p, 2);
}
    
    #define streqi(a, b) (_wcsicmp((a), (b)) == 0)
    
    /*!
 * \brief Shape inference function to get the correct shape given source shapes.
 * \param lhs The shape of left operand.
 * \param rhs The shape of right operand.
 * \param env The Environment arguments.
 * \return The inferred result shape.
 */
typedef TShape (*BinaryShapeFunction)(const TShape& lhs,
                                      const TShape& rhs,
                                      const EnvArguments& env);
/*!
 * \brief Gradient function that takes only output gradient and computes gradient wrt to input.
 *  We support total gradient as a whole to make it easy to combine a few ops.
 * \param out_grad the gradient wrt to output of the function.
 * \param env The Environment arguments.
 * \param lhs_grad The container to store result of lhs gradient.
 * \param rhs_grad The container to store result of lhs gradient.
 * \param req_lhs_grad The requirement to store the lhs_grad
 * \param req_rhs_grad The requirement to store the rhs_grad
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryGradFunctionT0)(const OutputGrad& out_grad,
                                     const EnvArguments& env,
                                     TBlob* lhs_grad,
                                     TBlob* rhs_grad,
                                     OpReqType req_lhs_grad,
                                     OpReqType req_rhs_grad,
                                     RunContext ctx);
/*!
 * \brief Gradient function that takes inputs of function anod computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param lhs The left operand to the function.
 * \param rhs The right operand to the function.
 * \param env The Environment arguments.
 * \param lhs_grad The container to store result of lhs gradient.
 * \param rhs_grad The container to store result of lhs gradient.
 * \param req_lhs_grad The requirement to store the lhs_grad
 * \param req_rhs_grad The requirement to store the rhs_grad
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryGradFunctionT1)(const OutputGrad& out_grad,
                                     const Input0& lhs,
                                     const Input1& rhs,
                                     const EnvArguments& env,
                                     TBlob* lhs_grad,
                                     TBlob* rhs_grad,
                                     OpReqType req_lhs_grad,
                                     OpReqType req_rhs_grad,
                                     RunContext ctx);
    
    // specialize define for Layer Parameter
template<>
class FieldEntry<caffe::LayerParameter>
    : public FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> {
 public:
  // parent class
  typedef FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> Parent;
    }
    
      ~CaffeLoss() {
    caffe::DelCaffeBlobs(&bot_, param_.num_data);
    caffe::DelCaffeBlobs(&top_, param_.num_out);
  }
    
    MXNET_DLL int MXCVImdecode(const unsigned char *img, const mx_uint len,
                           const int flag, NDArrayHandle *out) {
  API_BEGIN();
  mx_uint dims[3];
  CHECK_GE(flag, 0) << 'flag must be 0 (grayscale) or 1 (colored).';
  dims[2] = flag == 0 ? 1 : 3;
  if (get_jpeg_size(img, len, dims+1, dims)) {
  } else if (get_png_size(img, len, dims+1, dims)) {
  } else {
    LOG(FATAL) << 'Only supports png and jpg.';
  }
  NDArray ndout(TShape(dims, dims+3), Context::CPU(), true, mshadow::kUint8);
  unsigned char *img_cpy = new unsigned char[len];
  memcpy(img_cpy, img, sizeof(unsigned char)*len);
  Engine::Get()->PushSync([=](RunContext ctx){
      ndout.CheckAndAlloc();
      cv::Mat buf(1, len, CV_8U, img_cpy);
      cv::Mat dst(dims[0], dims[1], flag == 0 ? CV_8U : CV_8UC3, ndout.data().dptr_);
#if (CV_MAJOR_VERSION > 3 || (CV_MAJOR_VERSION == 3 && CV_MINOR_VERSION >= 3))
      cv::imdecode(buf, flag | cv::IMREAD_IGNORE_ORIENTATION, &dst);
#else
      cv::imdecode(buf, flag, &dst);
#endif
      CHECK(!dst.empty());
      delete[] img_cpy;
    }, ndout.ctx(), {}, {ndout.var()});
  NDArray *tmp = new NDArray();
  *tmp = ndout;
  *out = tmp;
  API_END();
}
    
    namespace mxnet {
namespace engine {
    }
    }
    
    
    {
    {}  // namespace exec
}  // namespace mxnet

    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    void DHTReplaceNodeTask::onTimeout(const std::shared_ptr<DHTNode>& node)
{
  ++numRetry_;
  if (numRetry_ >= MAX_RETRY) {
    A2_LOG_INFO(fmt('ReplaceNode: Ping failed %d times. Replace %s with %s.',
                    numRetry_, node->toString().c_str(),
                    newNode_->toString().c_str()));
    node->markBad();
    bucket_->addNode(newNode_);
    setFinished(true);
  }
  else {
    A2_LOG_INFO(fmt('ReplaceNode: Ping reply timeout from %s. Try once more.',
                    node->toString().c_str()));
    sendMessage();
  }
}
    
    
    {} // namespace aria2

    
    #include <vector>
#include <string>
#include <memory>
    
      virtual std::shared_ptr<DHTTask>
  createNodeLookupTask(const unsigned char* targetID) = 0;
    
    #include <cstring>
#include <cstdlib>
    
      virtual ~DHTUnknownMessage();
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    void ComputeBlockDCT(coeff_t* coeffs) {
  ColumnDct(coeffs);
  RowDct(coeffs + 0 * 8, kTable04);
  RowDct(coeffs + 1 * 8, kTable17);
  RowDct(coeffs + 2 * 8, kTable26);
  RowDct(coeffs + 3 * 8, kTable35);
  RowDct(coeffs + 4 * 8, kTable04);
  RowDct(coeffs + 5 * 8, kTable35);
  RowDct(coeffs + 6 * 8, kTable26);
  RowDct(coeffs + 7 * 8, kTable17);
}
    
    #ifndef GUETZLI_FDCT_H_
#define GUETZLI_FDCT_H_
    
    #include <cmath>
    
      png_infop info_ptr = png_create_info_struct(png_ptr);
  if (!info_ptr) {
    png_destroy_read_struct(&png_ptr, nullptr, nullptr);
    return false;
  }
    
    namespace guetzli {
    }
    
    bool JPEGData::Is444() const {
  return (components.size() == 3 &&
          max_h_samp_factor == 1 &&
          max_v_samp_factor == 1 &&
          components[0].h_samp_factor == 1 &&
          components[0].v_samp_factor == 1 &&
          components[1].h_samp_factor == 1 &&
          components[1].v_samp_factor == 1 &&
          components[2].h_samp_factor == 1 &&
          components[2].v_samp_factor == 1);
}
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    #include <stdint.h>
    
    // Reads the DRI marker and saved the restart interval into *jpg.
bool ProcessDRI(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  if (jpg->restart_interval > 0) {
    fprintf(stderr, 'Duplicate DRI marker.\n');
    jpg->error = JPEG_DUPLICATE_DRI;
    return false;
  }
  const size_t start_pos = *pos;
  VERIFY_LEN(4);
  size_t marker_len = ReadUint16(data, pos);
  int restart_interval = ReadUint16(data, pos);
  jpg->restart_interval = restart_interval;
  VERIFY_MARKER_END();
  return true;
}
    
    #ifndef GUETZLI_JPEG_DATA_READER_H_
#define GUETZLI_JPEG_DATA_READER_H_
    
    // Size of everything except the Huffman codes and the entropy coded data.
size_t JpegHeaderSize(const JPEGData& jpg, bool strip_metadata) {
  size_t num_bytes = 0;
  num_bytes += 2;  // SOI
  if (strip_metadata) {
    num_bytes += 18;  // APP0
  } else {
    for (size_t i = 0; i < jpg.app_data.size(); ++i) {
      num_bytes += 1 + jpg.app_data[i].size();
    }
    for (size_t i = 0; i < jpg.com_data.size(); ++i) {
      num_bytes += 2 + jpg.com_data[i].size();
    }
  }
  // DQT
  num_bytes += 4;
  for (size_t i = 0; i < jpg.quant.size(); ++i) {
    num_bytes += 1 + (jpg.quant[i].precision ? 2 : 1) * kDCTBlockSize;
  }
  num_bytes += 10 + 3 * jpg.components.size();  // SOF
  num_bytes += 4;  // DHT (w/o actual Huffman code data)
  num_bytes += 8 + 2 * jpg.components.size();  // SOS
  num_bytes += 2;  // EOI
  num_bytes += jpg.tail_data.size();
  return num_bytes;
}
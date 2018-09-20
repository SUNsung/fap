
        
        namespace atom {
    }
    
    
    {}  // namespace api
    
    
    {}  // namespace atom
    
    
    {}  // namespace api
    
      friend class SubstitutionMap;
    
      char *oldAllocation = Allocated;
  char *oldBegin = Begin;
  std::size_t oldSize = (std::size_t) (End - oldBegin);
    
        {
      Out << Indent;
      if (childKind == ChildKind::Root) {
        Out << '+- ';
      } else if (childKind == ChildKind::Left) {
        Out << '/- ';
      } else if (childKind == ChildKind::Right) {
        Out << '\\- ';
      } else if (childKind == ChildKind::Further) {
        Out << '\\-> ';
      }
      PrintNodeData(Out, node);
      Out << '\n';
    }
    
    void
swift::trimLeadingWhitespaceFromLines(StringRef RawText,
                                      unsigned WhitespaceToTrim,
                                      SmallVectorImpl<StringRef> &OutLines) {
  SmallVector<StringRef, 8> Lines;
    }
    
      bool SubtaskFailed = false;
    
      PyObject* as_pyobject() const { return reinterpret_cast<PyObject*>(ptr_); }
    
    AnyMetadata::AnyMetadata(UrlType* type_url, ValueType* value)
    : type_url_(type_url), value_(value) {
}
    
    bool RunProtoCompiler(const string& filename,
                      const string& plugin_specific_args,
                      CommandLineInterface* cli, FileDescriptorProto* file) {
  cli->SetInputsAreProtoPathRelative(true);
    }
    
    
    {
    {
    {}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    void MessageOneofFieldGenerator::GenerateParsingCode(io::Printer* printer) {
  // TODO(jonskeet): We may be able to do better than this
  printer->Print(
    variables_,
    '$type_name$ subBuilder = new $type_name$();\n'
    'if ($has_property_check$) {\n'
    '  subBuilder.MergeFrom($property_name$);\n'
    '}\n'
    'input.ReadMessage(subBuilder);\n' // No support of TYPE_GROUP
    '$property_name$ = subBuilder;\n');
}
    
    #include <google/protobuf/stubs/common.h>
namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void PrimitiveOneofFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(variables_,
    'PrintField(\'$descriptor_name$\', $has_property_check$, $oneof_name$_, writer);\n');
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    #include <mxnet/op_attr_types.h>
#include <mxnet/graph_attr_types.h>
#include <mxnet/c_api.h>
#include <nnvm/symbolic.h>
#include <nnvm/op.h>
#include <nnvm/graph.h>
#include <vector>
#include <atomic>
#include <utility>
#include <string>
#include <unordered_map>
    
    struct CaffeDataParam : public dmlc::Parameter<CaffeDataParam> {
  /*! \brief protobuf text */
  ::caffe::LayerParameter prototxt;
  /*! \brief number of iterations per epoch */
  int num_examples;
  /*! \brief data mode */
  bool flat;
    }
    
    
    {
    {/*! \brief typedef the factory function of data iterator */
typedef std::function<ImageAugmenter *()> ImageAugmenterFactory;
/*!
 * \brief Registry entry for DataIterator factory functions.
 */
struct ImageAugmenterReg
    : public dmlc::FunctionRegEntryBase<ImageAugmenterReg,
                                        ImageAugmenterFactory> {
};
//--------------------------------------------------------------
// The following part are API Registration of Iterators
//--------------------------------------------------------------
/*!
 * \brief Macro to register image augmenter
 *
 * \code
 * // example of registering a mnist iterator
 * REGISTER_IMAGE_AUGMENTER(aug_default)
 * .describe('default augmenter')
 * .set_body([]() {
 *     return new DefaultAugmenter();
 *   });
 * \endcode
 */
#define MXNET_REGISTER_IMAGE_AUGMENTER(name)                            \
  DMLC_REGISTRY_REGISTER(::mxnet::io::ImageAugmenterReg, ImageAugmenterReg, name)
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_USE_OPENCV
    
    bool get_png_size(const uint8_t* data, uint32_t data_size, int64_t *width, int64_t *height) {
  if (data[0] == 0x89 && data[1] == 0x50 && data[2] ==0x4E && data[3] == 0x47) {
    uint8_t const* p = data + 16;
    *width = ((p[0]*256 + p[1])*256 + p[2])*256 + p[3];
    p += 4;
    *height = ((p[0]*256 + p[1])*256 + p[2])*256 + p[3];
    return true;
  } else {
    return false;
  }
}
    
        LearnerPtr MomentumSGDLearner(const vector<Parameter>& parameters,
                                  const LearningRateSchedule& learningRateSchedule,
                                  const MomentumSchedule& momentumSchedule,
                                  bool unitGain,
                                  AdditionalLearningOptions additionalOptions /*= AdditionalLearningOptions()*/)
    {
        return MakeSharedObject<LearnerMomentumSGD>(parameters, learningRateSchedule, momentumSchedule, unitGain, additionalOptions, 1);
    }
    
            if (sectionShape.Rank() > m_maskShape.Rank())
            LogicError('NDMask::MaskSection: The section shape '%S' rank (%d) must be <= rank (%d) of 'this' mask.', sectionShape.AsString().c_str(), (int)sectionShape.Rank(), (int)m_maskShape.Rank());
    
        void ProgressWriter::UpdateTraining(size_t samples, const ValuePtr& accumulatedLoss,
                                        const ValuePtr& accumulatedMetric)
    {
        m_training->Update(samples, accumulatedLoss, accumulatedMetric,
            [this](const std::pair<size_t, size_t> samples, std::pair<size_t, size_t> updates,
                   const std::pair<double, double> aggregateLoss, std::pair<double, double> aggregateMetric)
            {
                OnWriteTrainingUpdate(samples, updates, aggregateLoss, aggregateMetric);
            });
        OnTrainingUpdateEnd();
    }
    
    
    {                unpackedShape = unpackedShape.AppendShape({ packedDataLayout->GetNumSequences() });
            }
            else if (!sampleDynamicAxes.empty())
                LogicError('A PackedValue object that does not have a layout cannot have any dynamic axes.');
    
    // some older code uses this namespace
namespace DebugUtil
{
    void PrintCallStack(size_t skipLevels = 0, bool makeFunctionNamesStandOut = false);
    }
    
    #endif // BOOST_NO_WREGEX
    
    namespace boost{
   namespace BOOST_REGEX_DETAIL_NS{
    }
    }
    
    
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
       format_perl = 0,                                  /* perl style replacement */
   format_default = 0,                               /* ditto. */
   format_sed = match_max << 1,                      /* sed style replacement. */
   format_all = format_sed << 1,                     /* enable all extentions to sytax. */
   format_no_copy = format_all << 1,                 /* don't copy non-matching segments. */
   format_first_only = format_no_copy << 1,          /* Only replace first occurance. */
   format_is_if = format_first_only << 1,            /* internal use only. */
   format_literal = format_is_if << 1                /* treat string as a literal */
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::unwind_recursion_stopper(bool)
{
   boost::BOOST_REGEX_DETAIL_NS::inplace_destroy(m_backup_state++);
   pstate = 0;   // nothing left to search
   return false; // end of stack nothing more to search
}
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::backtrack_till_match(std::size_t count)
{
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable:4127)
#endif
   if(!m_can_backtrack)
      return false;
   if((m_match_flags & match_partial) && (position == last))
      m_has_partial_match = true;
    }
    
    template <class ST, class SA, class Allocator, class charT, class traits>
inline bool regex_match(const std::basic_string<charT, ST, SA>& s, 
                 match_results<typename std::basic_string<charT, ST, SA>::const_iterator, Allocator>& m, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
template <class charT, class traits>
inline bool regex_match(const charT* str, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   match_results<const charT*> m;
   return regex_match(str, str + traits::length(str), m, e, flags | regex_constants::match_any);
}
    
    

    
        // Cleanup
    ImGui_ImplOpenGL2_Shutdown();
    ImGui_ImplFreeGLUT_Shutdown();
    ImGui::DestroyContext();
    
        // Create window with graphics context
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_Window* window = SDL_CreateWindow('Dear ImGui SDL2+OpenGL3 example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_SetSwapInterval(1); // Enable vsync
    
        if (!g_pIB || g_IndexBufferSize < draw_data->TotalIdxCount)
    {
        if (g_pIB) { g_pIB->Release(); g_pIB = NULL; }
        g_IndexBufferSize = draw_data->TotalIdxCount + 10000;
        D3D10_BUFFER_DESC desc;
        memset(&desc, 0, sizeof(D3D10_BUFFER_DESC));
        desc.Usage = D3D10_USAGE_DYNAMIC;
        desc.ByteWidth = g_IndexBufferSize * sizeof(ImDrawIdx);
        desc.BindFlags = D3D10_BIND_INDEX_BUFFER;
        desc.CPUAccessFlags = D3D10_CPU_ACCESS_WRITE;
        if (ctx->CreateBuffer(&desc, NULL, &g_pIB) < 0)
            return;
    }
    
    bool    ImGui_ImplDX11_Init(ID3D11Device* device, ID3D11DeviceContext* device_context)
{
    // Get factory from device
    IDXGIDevice* pDXGIDevice = NULL;
    IDXGIAdapter* pDXGIAdapter = NULL;
    IDXGIFactory* pFactory = NULL;
    }
    
    // Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data)
{
    // Avoid rendering when minimized
    if (draw_data->DisplaySize.x <= 0.0f || draw_data->DisplaySize.y <= 0.0f)
        return;
    }
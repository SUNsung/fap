
        
        #include <google/protobuf/compiler/annotation_test_util.h>
    
    TEST(MovableMessageTest, MoveConstructor) {
  protobuf_unittest::TestAllTypes message1;
  TestUtil::SetAllFields(&message1);
  const auto* nested = &message1.optional_nested_message();
    }
    
    void EnumOneofFieldGenerator::GenerateParsingCode(io::Printer* printer) {
  // TODO(jonskeet): What about if we read the default value?
  printer->Print(
    variables_,
    '$oneof_name$_ = input.ReadEnum();\n'
    '$oneof_name$Case_ = $oneof_property_name$OneofCase.$property_name$;\n');
}
    
    class EnumFieldGenerator : public PrimitiveFieldGenerator {
 public:
  EnumFieldGenerator(const FieldDescriptor* descriptor,
                     int fieldOrdinal,
                     const Options *options);
  ~EnumFieldGenerator();
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/mathlimits.h>
#include <google/protobuf/stubs/strutil.h>
#include <google/protobuf/wire_format.h>
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void RepeatedEnumFieldGenerator::GenerateSerializationCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.WriteTo(output, _repeated_$name$_codec);\n');
}
    
    #endif  // TESSERACT_ARCH_DOTPRODUCTSSE_H_

    
    
    {}  // namespace tesseract

    
    
    {  if (len > 4) {
    dodgy_chars = 2 * tess_rejs + bad_char_count + isolated_digits +
        isolated_alphas;
    if (dodgy_chars > 5 || (dodgy_chars / (float) len) > 0.5)
      return G_DODGY;
    else
      return G_OK;
  } else {
    dodgy_chars = 2 * tess_rejs + bad_char_count;
    if ((len == 4 && dodgy_chars > 2) ||
        (len == 3 && dodgy_chars > 2) || dodgy_chars >= len)
      return G_DODGY;
    else
      return G_OK;
  }
}
    
    #include 'bbgrid.h'
#include 'classify.h'
#include 'colpartition.h'
#include 'colpartitiongrid.h'
#include 'colpartitionset.h'
#include 'helpers.h'
#include 'ratngs.h'
#include 'tesseractclass.h'
    
      // Compute the foreground pixel density for a tbox area.
  float ComputeForegroundDensity(const TBOX& tbox);
    
    extern BLOCK_LIST *current_block_list;
extern STRING_VAR_H (editor_image_win_name, 'EditorImage',
'Editor image window name');
extern INT_VAR_H (editor_image_xpos, 590, 'Editor image X Pos');
extern INT_VAR_H (editor_image_ypos, 10, 'Editor image Y Pos');
extern INT_VAR_H (editor_image_height, 680, 'Editor image height');
extern INT_VAR_H (editor_image_width, 655, 'Editor image width');
extern INT_VAR_H (editor_image_word_bb_color, BLUE,
'Word bounding box colour');
extern INT_VAR_H (editor_image_blob_bb_color, YELLOW,
'Blob bounding box colour');
extern INT_VAR_H (editor_image_text_color, WHITE, 'Correct text colour');
extern STRING_VAR_H (editor_dbwin_name, 'EditorDBWin',
'Editor debug window name');
extern INT_VAR_H (editor_dbwin_xpos, 50, 'Editor debug window X Pos');
extern INT_VAR_H (editor_dbwin_ypos, 500, 'Editor debug window Y Pos');
extern INT_VAR_H (editor_dbwin_height, 24, 'Editor debug window height');
extern INT_VAR_H (editor_dbwin_width, 80, 'Editor debug window width');
extern STRING_VAR_H (editor_word_name, 'BlnWords',
'BL normalised word window');
extern INT_VAR_H (editor_word_xpos, 60, 'Word window X Pos');
extern INT_VAR_H (editor_word_ypos, 510, 'Word window Y Pos');
extern INT_VAR_H (editor_word_height, 240, 'Word window height');
extern INT_VAR_H (editor_word_width, 655, 'Word window width');
extern double_VAR_H (editor_smd_scale_factor, 1.0, 'Scaling for smd image');
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
      std::map<std::string, std::string> GetParams() const override {
    return param_.__DICT__();
  }
    
      // Set up caffe op with real data
  void CaffeOpSetup() {
    if (!setup_) {
      setup_ = true;
      caffeOp_->SetUp(bot_, top_);
    }
  }
    
    /*!
 * \brief Stream manager.
 *
 * Uses a basic round-robin algorithm to dispatch GPU streams. Returns default
 * context on CPU.
 */
template <std::size_t kNumGpus, std::size_t kStreams>
class StreamManager {
 public:
  StreamManager();
  ~StreamManager() {
    Finalize();
  }
  RunContext GetRunContext(Context const& ctx);
  RunContext GetIORunContext(Context const& ctx);
  void Finalize();
 private:
  std::mutex mutex_;
#if MXNET_USE_CUDA
  std::array<std::array<mshadow::Stream<gpu>*, kStreams>, kNumGpus>
      gpu_streams_;
  std::array<mshadow::Stream<gpu>*, kNumGpus> gpu_io_streams_;
  std::array<int, kNumGpus> gpu_cnt_;
#endif  // MXNET_USE_CUDA
  DISALLOW_COPY_AND_ASSIGN(StreamManager);
};  // class StreamManager
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_


        
        // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    void Clipboard::SetText(std::string& text) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  ui::Clipboard::ObjectMap map;
  map[ui::Clipboard::CBF_TEXT].push_back(
      std::vector<char>(text.begin(), text.end()));
  clipboard->WriteObjects(ui::CLIPBOARD_TYPE_COPY_PASTE, map);
}
    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
    #include 'extensions/browser/extension_function.h'
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethod', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodFunction);
};
    
    
    {} // extensions

    
      /// \c true if root must be either an array or an object value. Default: \c
  /// false.
  bool strictRoot_;
    
    // Initialize the various types and objects.
bool InitDescriptorMappingTypes();
    
    // Find the file which defines an extension extending the given message type
// with the given field number.
// Python DescriptorDatabases are not required to implement this method.
bool PyDescriptorDatabase::FindFileContainingExtension(
    const string& containing_type, int field_number,
    FileDescriptorProto* output) {
  ScopedPyObjectPtr py_method(
      PyObject_GetAttrString(py_database_, 'FindFileContainingExtension'));
  if (py_method == NULL) {
    // This method is not implemented, returns without error.
    PyErr_Clear();
    return false;
  }
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallFunction(py_method.get(), 's#i', containing_type.c_str(),
                            containing_type.size(), field_number));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    #include <string>
#include <google/protobuf/compiler/code_generator.h>
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_MESSAGE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_MESSAGE_FIELD_H__
    
    void RepeatedPrimitiveFieldGenerator::GenerateSerializedSizeCode(io::Printer* printer) {
  printer->Print(
    variables_,
    'size += $name$_.CalculateSize(_repeated_$name$_codec);\n');
}
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
    // Generates code for a lite extension, which may be within the scope of some
// message or may be at file scope.  This is much simpler than FieldGenerator
// since extensions are just simple identifiers with interesting types.
class ImmutableExtensionLiteGenerator : public ExtensionGenerator {
 public:
  explicit ImmutableExtensionLiteGenerator(const FieldDescriptor* descriptor,
                                           Context* context);
  virtual ~ImmutableExtensionLiteGenerator();
    }
    
    // Tests that the RotatingTranspose function does the right thing for various
// transformations.
// dims=[5, 4, 3, 2]->[5, 2, 4, 3]
TEST_F(MatrixTest, RotatingTranspose_3_1) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 3, 1, &m);
  m.ResizeNoInit(kInputSize_ / 3, 3);
  // Verify that the result is:
  // output tensor=[[[[0, 2, 4][6, 8, 10][12, 14, 16][18, 20, 22]]
  //                 [[1, 3, 5][7, 9, 11][13, 15, 17][19, 21, 23]]]
  //                [[[24, 26, 28]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(2, m(0, 1));
  EXPECT_EQ(4, m(0, 2));
  EXPECT_EQ(6, m(1, 0));
  EXPECT_EQ(1, m(4, 0));
  EXPECT_EQ(24, m(8, 0));
  EXPECT_EQ(26, m(8, 1));
  EXPECT_EQ(25, m(12, 0));
}
    
    
#endif  // TESSERACT_LSTM_LSTM_H_

    
    DIR128::DIR128(                 //from fcoord
               const FCOORD fc  //vector to quantize
              ) {
  int high, low, current;        //binary search
    }
    
      // Generates debug output relating to the canonical distance between the
  // two given UTF8 grapheme strings.
  void DebugCanonical(const char* unichar_str1, const char* unichar_str2);
  #ifndef GRAPHICS_DISABLED
  // Debugging for cloud/canonical features.
  // Displays a Features window containing:
  // If unichar_str2 is in the unicharset, and canonical_font is non-negative,
  // displays the canonical features of the char/font combination in red.
  // If unichar_str1 is in the unicharset, and cloud_font is non-negative,
  // displays the cloud feature of the char/font combination in green.
  // The canonical features are drawn first to show which ones have no
  // matches in the cloud features.
  // Until the features window is destroyed, each click in the features window
  // will display the samples that have that feature in a separate window.
  void DisplaySamples(const char* unichar_str1, int cloud_font,
                      const char* unichar_str2, int canonical_font);
  #endif  // GRAPHICS_DISABLED
    
    
#ifndef TESSERACT_CLASSIFY_SAMPLEITERATOR_H_
#define TESSERACT_CLASSIFY_SAMPLEITERATOR_H_
    
    	// Set path to vendored ConEmu config file
	PathCombine(cfgPath, exeDir, L'vendor\\conemu-maximus5\\ConEmu.xml');
    
    // This function will create a Huffman tree.
//
// The (data,length) contains the population counts.
// The tree_limit is the maximum bit depth of the Huffman codes.
//
// The depth contains the tree, i.e., how many bits are used for
// the symbol.
//
// The actual Huffman tree is constructed in the tree[] array, which has to
// be at least 2 * length + 1 long.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth);
    
    
    {}  // namespace guetzli

    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
      // Fills in block[] with the 8x8 coefficient block with block coordinates
  // (block_x, block_y).
  // NOTE: If the component is 2x2 subsampled, this corresponds to the 16x16
  // pixel area with upper-left corner (16 * block_x, 16 * block_y).
  void GetCoeffBlock(int block_x, int block_y,
                     coeff_t block[kDCTBlockSize]) const;
    
    constexpr int kLowestQuality = 70;
constexpr int kHighestQuality = 110;
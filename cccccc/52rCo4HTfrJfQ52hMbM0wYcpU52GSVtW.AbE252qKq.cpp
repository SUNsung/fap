  /* Returns the function pointer for this handler.  It is the client's
   * responsibility to cast to the correct function type before calling it. */
  GenericFunction* GetHandler(Selector selector);
    
    bool AnyMetadata::InternalIs(const Descriptor* descriptor) const {
  const string type_url = type_url_->GetNoArena();
  string full_name;
  if (!ParseAnyTypeUrl(type_url, &full_name)) {
    return false;
  }
  return full_name == descriptor->full_name();
}
    
    void FindAnnotationsOnPath(
    const GeneratedCodeInfo& info, const string& source_file,
    const std::vector<int>& path,
    std::vector<const GeneratedCodeInfo::Annotation*>* annotations) {
  for (int i = 0; i < info.annotation_size(); ++i) {
    const GeneratedCodeInfo::Annotation* annotation = &info.annotation(i);
    if (annotation->source_file() != source_file ||
        annotation->path_size() != path.size()) {
      continue;
    }
    int node = 0;
    for (; node < path.size(); ++node) {
      if (annotation->path(node) != path[node]) {
        break;
      }
    }
    if (node == path.size()) {
      annotations->push_back(annotation);
    }
  }
}
    
    // Write out the generated code for a particular message. This consists of the CLR type, property names
// corresponding to fields, names corresponding to oneofs, nested enums, and nested types. Each array part
// can be specified as null if it would be empty, to make the generated code somewhat simpler to read.
// We write a line break at the end of each generated code info, so that in the final file we'll see all
// the types, pre-ordered depth first, one per line. The indentation will be slightly unusual,
// in that it will look like a single array when it's actually constructing a tree, but it'll be easy to
// read even with multiple levels of nesting.
// The 'last' parameter indicates whether this message descriptor is the last one being printed in this immediate
// context. It governs whether or not a trailing comma and newline is written after the constructor, effectively
// just controlling the formatting in the generated code.
void ReflectionClassGenerator::WriteGeneratedCodeInfo(const Descriptor* descriptor, io::Printer* printer, bool last) {
  if (IsMapEntryMessage(descriptor)) {
    printer->Print('null, ');
    return;
  }
  // Generated message type
  printer->Print('new pbr::GeneratedClrTypeInfo(typeof($type_name$), $type_name$.Parser, ', 'type_name', GetClassName(descriptor));
  
  // Fields
  if (descriptor->field_count() > 0) {
      std::vector<std::string> fields;
      for (int i = 0; i < descriptor->field_count(); i++) {
          fields.push_back(GetPropertyName(descriptor->field(i)));
      }
      printer->Print('new[]{ \'$fields$\' }, ', 'fields', JoinStrings(fields, '\', \''));
  }
  else {
      printer->Print('null, ');
  }
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, message);
  printer->Print(
    ' * Protobuf type {@code $fullname$}\n'
    ' */\n',
    'fullname', EscapeJavadoc(message->full_name()));
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    void ImmutableMapFieldGenerator::
GenerateParsingCode(io::Printer* printer) const {
  printer->Print(
      variables_,
      'if (!$get_mutable_bit_parser$) {\n'
      '  $name$_ = com.google.protobuf.MapField.newMapField(\n'
      '      $map_field_parameter$);\n'
      '  $set_mutable_bit_parser$;\n'
      '}\n');
  if (!SupportUnknownEnumValue(descriptor_->file()) &&
      GetJavaType(ValueField(descriptor_)) == JAVATYPE_ENUM) {
    printer->Print(
        variables_,
        'com.google.protobuf.ByteString bytes = input.readBytes();\n'
        'com.google.protobuf.MapEntry<$type_parameters$>\n'
        '$name$__ = $default_entry$.getParserForType().parseFrom(bytes);\n');
    printer->Print(
        variables_,
        'if ($value_enum_type$.forNumber($name$__.getValue()) == null) {\n'
        '  unknownFields.mergeLengthDelimitedField($number$, bytes);\n'
        '} else {\n'
        '  $name$_.getMutableMap().put(\n'
        '      $name$__.getKey(), $name$__.getValue());\n'
        '}\n');
  } else {
    printer->Print(
        variables_,
        'com.google.protobuf.MapEntry<$type_parameters$>\n'
        '$name$__ = input.readMessage(\n'
        '    $default_entry$.getParserForType(), extensionRegistry);\n'
        '$name$_.getMutableMap().put(\n'
        '    $name$__.getKey(), $name$__.getValue());\n');
  }
}
    
    FileGenerator::FileGenerator(const FileDescriptor *file, const Options& options)
    : file_(file),
      root_class_name_(FileClassName(file)),
      is_bundled_proto_(IsProtobufLibraryBundledProtoFile(file)),
      options_(options) {
  for (int i = 0; i < file_->enum_type_count(); i++) {
    EnumGenerator *generator = new EnumGenerator(file_->enum_type(i));
    enum_generators_.push_back(generator);
  }
  for (int i = 0; i < file_->message_type_count(); i++) {
    MessageGenerator *generator =
        new MessageGenerator(root_class_name_, file_->message_type(i), options_);
    message_generators_.push_back(generator);
  }
  for (int i = 0; i < file_->extension_count(); i++) {
    ExtensionGenerator *generator =
        new ExtensionGenerator(root_class_name_, file_->extension(i));
    extension_generators_.push_back(generator);
  }
}
    
      decode_data.AddString(1, 'abcdefghIJ', 'abcdefghIJ');
  decode_data.AddString(3, 'abcdefghIJ', '_AbcdefghIJ');
  decode_data.AddString(2, 'abcdefghIJ', 'Abcd_EfghIJ');
  decode_data.AddString(4, 'abcdefghIJ', 'ABCD__EfghI_j');
  decode_data.AddString(1000,
                        'longFieldNameIsLooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong1000',
                        'long_field_name_is_looooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong_1000');
    
    extern void UNSCALE_BT_BASIS(btTransform &scaledBasis);
#endif

    
    class JointBullet : public ConstraintBullet {
    }
    
    
    {#ifdef __cplusplus
}
#endif
    
    #include 'thread.h'
    
    /*! \brief a single data instance */
struct DataInst {
  /*! \brief unique id for instance */
  unsigned index;
  /*! \brief content of data */
  std::vector<TBlob> data;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
};  // struct DataInst
    
    namespace mxnet {
namespace io {
/*!
 * \brief OpenCV based Image augmenter,
 *  The augmenter can contain internal temp state.
 */
class ImageAugmenter {
 public:
  /*!
   *  \brief Initialize the Operator by setting the parameters
   *  This function need to be called before all other functions.
   *  \param kwargs the keyword arguments parameters
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*!
   * \brief augment src image.
   *   this function is not thread safe, and will only be called by one thread
   *   however, it will tries to re-use memory space as much as possible
   * \param src the source image
   * \param prnd pointer to random number generator.
   * \return The processed image.
   */
  virtual cv::Mat Process(const cv::Mat &src, std::vector<float> *label,
                          common::RANDOM_ENGINE *prnd) = 0;
  // virtual destructor
  virtual ~ImageAugmenter() {}
  /*!
   * \brief factory function
   * \param name Name of the augmenter
   * \return The created augmenter.
   */
  static ImageAugmenter* Create(const std::string& name);
};
    }
    }
    
    The `data_libsvm` parameter is used to set the path input LibSVM file.
When it is set to a directory, all the files in the directory will be read.
    
    TEST(LogTest, UnexpectedLastType) {
  Write('foo');
  SetByte(6, kLastType);
  FixChecksum(0, 3);
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ(3, DroppedBytes());
  ASSERT_EQ('OK', MatchError('missing start'));
}
    
        // Invariant: we never leave < kHeaderSize bytes in a block.
    assert(kBlockSize - block_offset_ - kHeaderSize >= 0);
    
    #include <string>
#include 'leveldb/db.h'
#include 'db/dbformat.h'
#include 'db/skiplist.h'
#include 'util/arena.h'
    
    template<typename Key, class Comparator>
inline SkipList<Key,Comparator>::Iterator::Iterator(const SkipList* list) {
  list_ = list;
  node_ = nullptr;
}
    
    
    {
}  // namespace guetzli
    
    #include 'guetzli/gamma_correct.h'
    
    bool ReadPNG(const std::string& data, int* xsize, int* ysize,
             std::vector<uint8_t>* rgb) {
  png_structp png_ptr =
      png_create_read_struct(PNG_LIBPNG_VER_STRING, nullptr, nullptr, nullptr);
  if (!png_ptr) {
    return false;
  }
    }
    
      tmp0 = in[6 * stride];
  tmp1 = kIDCTMatrix[ 6] * tmp0;
  tmp2 = kIDCTMatrix[14] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] -= tmp2;
  out[3] -= tmp1;
  out[4] -= tmp1;
  out[5] -= tmp2;
  out[6] += tmp2;
  out[7] += tmp1;
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    #ifndef GUETZLI_JPEG_DATA_DECODER_H_
#define GUETZLI_JPEG_DATA_DECODER_H_
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
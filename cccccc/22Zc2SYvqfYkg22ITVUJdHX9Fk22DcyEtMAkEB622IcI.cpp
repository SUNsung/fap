
        
        // This is initialized with a default, stub implementation.
// If python-google.protobuf.cc is loaded, the function pointer is overridden
// with a full implementation.
const Message* (*GetCProtoInsidePyProtoPtr)(PyObject* msg) =
    GetCProtoInsidePyProtoStub;
Message* (*MutableCProtoInsidePyProtoPtr)(PyObject* msg) =
    MutableCProtoInsidePyProtoStub;
    
    void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enumDescriptor) {
    WriteDocCommentBody(printer, enumDescriptor);
}
void WriteEnumValueDocComment(io::Printer* printer, const EnumValueDescriptor* value) {
    WriteDocCommentBody(printer, value);
}
    
    #include <sstream>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
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
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
    void ImmutableMapFieldGenerator::
GenerateSerializationCode(io::Printer* printer) const {
  printer->Print(
      variables_,
      'com.google.protobuf.GeneratedMessage$ver$\n'
      '  .serialize$short_key_type$MapTo(\n'
      '    output,\n'
      '    internalGet$capitalized_name$(),\n'
      '    $default_entry$,\n'
      '    $number$);\n');
}
    
    // Get the full name of a Java class by prepending the Java package name
// or outer class name.
string ClassNameResolver::GetClassFullName(const string& name_without_package,
                                           const FileDescriptor* file,
                                           bool immutable,
                                           bool multiple_files) {
  string result;
  if (multiple_files) {
    result = FileJavaPackage(file, immutable);
  } else {
    result = GetClassName(file, immutable);
  }
  if (!result.empty()) {
    result += '.';
  }
  result += name_without_package;
  return result;
}
    
    void EnumGenerator::GenerateHeader(io::Printer* printer) {
  string enum_comments;
  SourceLocation location;
  if (descriptor_->GetSourceLocation(&location)) {
    enum_comments = BuildCommentsString(location, true);
  } else {
    enum_comments = '';
  }
    }
    
    ExtensionGenerator::ExtensionGenerator(const string& root_class_name,
                                       const FieldDescriptor* descriptor)
    : method_name_(ExtensionMethodName(descriptor)),
      root_class_and_method_name_(root_class_name + '_' + method_name_),
      descriptor_(descriptor) {
  if (descriptor->is_map()) {
    // NOTE: src/google/protobuf/compiler/plugin.cc makes use of cerr for some
    // error cases, so it seems to be ok to use as a back door for errors.
    std::cerr << 'error: Extension is a map<>!'
         << ' That used to be blocked by the compiler.' << std::endl;
    std::cerr.flush();
    abort();
  }
}
    
    
    {    float _radZ;
    float _radDeltaZ;
    float _radX;
    float _radDeltaX;
};
    
    /** @class TintTo
 * @brief Tints a Node that implements the NodeRGB protocol from current tint to a custom one.
 @warning This action doesn't support 'reverse'
 @since v0.7.2
*/
class CC_DLL TintTo : public ActionInterval
{
public:
    /** 
     * Creates an action with duration and color.
     * @param duration Duration time, in seconds.
     * @param red Red Color, from 0 to 255.
     * @param green Green Color, from 0 to 255.
     * @param blue Blue Color, from 0 to 255.
     * @return An autoreleased TintTo object.
     */
    static TintTo* create(float duration, GLubyte red, GLubyte green, GLubyte blue);
    /**
     * Creates an action with duration and color.
     * @param duration Duration time, in seconds.
     * @param color It's a Color3B type.
     * @return An autoreleased TintTo object.
     */
    static TintTo* create(float duration, const Color3B& color);
    }
    
    void FadeOutUpTiles::transformTile(const Vec2& pos, float distance)
{
    Quad3 coords = getOriginalTile(pos);
    Vec2 step = _gridNodeTarget->getGrid()->getStep();
    }
    
        /** Gets the units of time the frame takes.
     *
     * @return The units of time the frame takes.
     */
    float getDelayUnits() const { return _delayUnits; };
    
    /** Sets the units of time the frame takes.
     *
     * @param delayUnits The units of time the frame takes.
     */
    void setDelayUnits(float delayUnits) { _delayUnits = delayUnits; };
    
    /** @brief Gets user information
     * A AnimationFrameDisplayedNotification notification will be broadcast when the frame is displayed with this dictionary as UserInfo. 
     * If UserInfo is nil, then no notification will be broadcast.
     *
     * @return A dictionary as UserInfo
     */
    const ValueMap& getUserInfo() const { return _userInfo; };
    ValueMap& getUserInfo() { return _userInfo; };
    
    /** Sets user information.
     * @param userInfo A dictionary as UserInfo.
     */
    void setUserInfo(const ValueMap& userInfo)
    {
        _userInfo = userInfo;
    }
    
    // Overrides
    virtual AnimationFrame *clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    /**
     * @js ctor
     */
    AnimationFrame();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~AnimationFrame();
    
    /** initializes the animation frame with a spriteframe, number of delay units and a notification user info */
    bool initWithSpriteFrame(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo);
    
    
    {                continue;
            }
    
        /** Initializes an AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render*/
    bool initWithTileFile(const std::string& tile, int tileWidth, int tileHeight, int itemsToRender);
    
    /** Initializes an AtlasNode  with a texture the width and height of each item measured in points and the quantity of items to render*/
    bool initWithTexture(Texture2D* texture, int tileWidth, int tileHeight, int itemsToRender);
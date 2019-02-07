
        
        
    {}  // namespace mate
    
    namespace atom {
    }
    
    namespace atom {
    }
    
    #endif  // ATOM_BROWSER_LIB_POWER_OBSERVER_H_

    
    #include 'base/callback.h'
    
    #include 'base/threading/thread_task_runner_handle.h'
    
    
    {  // Produce the generic signature and environment.
  // FIXME: Pass in a source location for the conformance, perhaps? It seems
  // like this could fail.
  syntheticSignature =
    std::move(builder).computeGenericSignature(SourceLoc());
  syntheticEnvironment = syntheticSignature->createGenericEnvironment();
}

    
      // An AST section consists of one or more AST modules, optionally with
  // headers. Iterate over all AST modules.
  while (!buf.empty()) {
    auto info = serialization::validateSerializedAST(buf);
    }
    
    void
swift::trimLeadingWhitespaceFromLines(StringRef RawText,
                                      unsigned WhitespaceToTrim,
                                      SmallVectorImpl<StringRef> &OutLines) {
  SmallVector<StringRef, 8> Lines;
    }
    
      static CFPointeeInfo forRecord(bool isConst, const clang::RecordDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = isConst;
    info.Decl = decl;
    return info;
  }
    
    static void printNode(DemanglerPrinter &Out, const Node *node, unsigned depth) {
  // Indent two spaces per depth.
  for (unsigned i = 0; i < depth * 2; ++i) {
    Out << ' ';
  }
  if (!node) {
    Out << '<<NULL>>';
    return;
  }
  Out << 'kind=' << getNodeKindString(node->getKind());
  if (node->hasText()) {
    Out << ', text=\'' << node->getText() << '\'';
  }
  if (node->hasIndex()) {
    Out << ', index=' << node->getIndex();
  }
  Out << '\n';
  for (auto &child : *node) {
    printNode(Out, child, depth + 1);
  }
}
    
    static const int base         = 36;
static const int tmin         = 1;
static const int tmax         = 26;
static const int skew         = 38;
static const int damp         = 700;
static const int initial_bias = 72;
static const uint32_t initial_n = 128;
    
    namespace swift {
namespace driver {
namespace toolchains {
    }
    }
    }
    
    // This is initialized with a default, stub implementation.
// If python-google.protobuf.cc is loaded, the function pointer is overridden
// with a full implementation.
const Message* (*GetCProtoInsidePyProtoPtr)(PyObject* msg) =
    GetCProtoInsidePyProtoStub;
Message* (*MutableCProtoInsidePyProtoPtr)(PyObject* msg) =
    MutableCProtoInsidePyProtoStub;
    
    bool CodeGenerator::GenerateAll(
    const std::vector<const FileDescriptor*>& files,
    const string& parameter,
    GeneratorContext* generator_context,
    string* error) const {
  // Default implemenation is just to call the per file method, and prefix any
  // error string with the file to provide context.
  bool succeeded = true;
  for (int i = 0; i < files.size(); i++) {
    const FileDescriptor* file = files[i];
    succeeded = Generate(file, parameter, generator_context, error);
    if (!succeeded && error && error->empty()) {
      *error = 'Code generator returned false but provided no error '
               'description.';
    }
    if (error && !error->empty()) {
      *error = file->name() + ': ' + *error;
      break;
    }
    if (!succeeded) {
      break;
    }
  }
  return succeeded;
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    // Get the name of an enum's Java class without package name prefix.
string ClassNameWithoutPackage(const EnumDescriptor* descriptor,
                               bool immutable) {
  // Doesn't append 'Mutable' for enum type's name.
  const Descriptor* message_descriptor = descriptor->containing_type();
  if (message_descriptor == NULL) {
    return descriptor->name();
  } else {
    return ClassNameWithoutPackage(message_descriptor, immutable) +
           '.' + descriptor->name();
  }
}
    
    void OneofGenerator::GenerateClearFunctionImplementation(io::Printer* printer) {
  printer->Print(
      variables_,
      'void $owning_message_class$_Clear$capitalized_name$OneOfCase($owning_message_class$ *message) {\n'
      '  GPBDescriptor *descriptor = [message descriptor];\n'
      '  GPBOneofDescriptor *oneof = [descriptor.oneofs objectAtIndex:$raw_index$];\n'
      '  GPBMaybeClearOneof(message, oneof, $index$, 0);\n'
      '}\n');
}
    
    #include <iostream>
#include <set>
    
    static uint32 ComputeCRC32(const string &buf) {
  uint32 x = ~0U;
  for (int i = 0; i < buf.size(); ++i) {
    unsigned char c = buf[i];
    x = kCRC32Table[(x ^ c) & 0xff] ^ (x >> 8);
  }
  return ~x;
}
    
    //
// Follow
//
Follow::~Follow()
{
    CC_SAFE_RELEASE(_followedNode);
}
    
    CardinalSplineTo* CardinalSplineTo::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) CardinalSplineTo();
    a->initWithDuration(this->_duration, this->_points->clone(), this->_tension);
    a->autorelease();
    return a;
}
    
        if (targetGrid && targetGrid->getReuseGrid() > 0)
    {
        if (targetGrid->isActive() && targetGrid->getGridSize().width == _gridSize.width
            && targetGrid->getGridSize().height == _gridSize.height)
        {
            targetGrid->reuse();
        }
        else
        {
            CCASSERT(0, 'Invalid grid parameters!');
        }
    }
    else
    {
        if (targetGrid && targetGrid->isActive())
        {
            targetGrid->setActive(false);
        }
    }
    
    
/** @class ResizeBy
* @brief Resize a Node object by a Size. Works on all nodes where setContentSize is effective. But it's mostly useful for nodes where 9-slice is enabled
*/
class CC_DLL ResizeBy : public ActionInterval 
{
public:
    /**
    * Creates the action.
    *
    * @param duration Duration time, in seconds.
    * @param deltaSize The delta size.
    * @return An autoreleased ResizeBy object.
    */
    static ResizeBy* create(float duration, const cocos2d::Size& deltaSize);
    
    //
    // Overrides
    //
    virtual ResizeBy* clone() const override;
    virtual ResizeBy* reverse() const  override;
    virtual void startWithTarget(Node *target) override;
    /**
    * @param time in seconds
    */
    virtual void update(float time) override;
    }
    
        /** 
     * @brief Initializes with a duration and destination percentage. 
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, float percent);
    
                if( ! spriteFrame ) {
                CCLOG('cocos2d: AnimationCache: Animation '%s' refers to frame '%s' which is not currently in the SpriteFrameCache. This frame will not be added to the animation.', name.c_str(), spriteFrameName.c_str());
    }
    
    http://www.cocos2d-x.org
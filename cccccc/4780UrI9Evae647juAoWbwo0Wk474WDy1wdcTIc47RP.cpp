
        
        PlatformKind swift::targetPlatform(LangOptions &LangOpts) {
  if (LangOpts.Target.isMacOSX()) {
    return (LangOpts.EnableAppExtensionRestrictions
                ? PlatformKind::OSXApplicationExtension
                : PlatformKind::OSX);
  }
    }
    
      reqToSyntheticEnvMap = SubstitutionMap::get(reqSig,
    [selfType, substConcreteType, depth, covariantSelf, &ctx]
    (SubstitutableType *type) -> Type {
      // If the conforming type is a class, the protocol 'Self' maps to
      // the class-constrained 'Self'. Otherwise, it maps to the concrete
      // type.
      if (type->isEqual(selfType)) {
        if (covariantSelf)
          return GenericTypeParamType::get(/*depth=*/0, /*index=*/0, ctx);
        return substConcreteType;
      }
      // Other requirement generic parameters map 1:1 with their depth
      // increased appropriately.
      auto *genericParam = cast<GenericTypeParamType>(type);
      // In a protocol requirement, the only generic parameter at depth 0
      // should be 'Self', and all others at depth 1. Anything else is
      // invalid code.
      if (genericParam->getDepth() != 1)
        return Type();
      auto substGenericParam =
        GenericTypeParamType::get(depth, genericParam->getIndex(), ctx);
      return substGenericParam;
    },
    [selfType, substConcreteType, conformance, conformanceDC, &ctx](
        CanType type, Type replacement, ProtocolDecl *proto)
          -> Optional<ProtocolConformanceRef> {
      // The protocol 'Self' conforms concretely to the conforming type.
      if (type->isEqual(selfType)) {
        ProtocolConformance *specialized = conformance;
        if (conformance && conformance->getGenericSignature()) {
          auto concreteSubs =
            substConcreteType->getContextSubstitutionMap(
              conformanceDC->getParentModule(), conformanceDC);
          specialized =
            ctx.getSpecializedConformance(substConcreteType, conformance,
                                          concreteSubs);
        }
    }
    }
    
    void
swift::trimLeadingWhitespaceFromLines(StringRef RawText,
                                      unsigned WhitespaceToTrim,
                                      SmallVectorImpl<StringRef> &OutLines) {
  SmallVector<StringRef, 8> Lines;
    }
    
    static StringRef omitNeedlessWords(StringRef name,
                                   OmissionTypeName typeName,
                                   NameRole role,
                                   const InheritedNameSet *allPropertyNames,
                                   StringScratchSpace &scratch) {
  // If we have no name or no type name, there is nothing to do.
  if (name.empty() || typeName.empty()) return name;
    }
    
    /// Maintain a set of known CF types.
static bool isKnownCFTypeName(StringRef name) {
  return std::binary_search(KnownCFTypes, KnownCFTypes + NumKnownCFTypes,
                            name, SortByLengthComparator());
}
    
      if (clangDiag.getID() == clang::diag::err_module_not_built &&
      CurrentImport && clangDiag.getArgStdStr(0) == CurrentImport->getName()) {
    SourceLoc loc = DiagLoc;
    if (clangDiag.getLocation().isValid())
      loc = resolveSourceLocation(clangDiag.getSourceManager(),
                                  clangDiag.getLocation());
    }
    
    // Import As Member -- attempt to import C global functions and variables as
// members on types or instances.
    
    bool Mangle::needsPunycodeEncoding(StringRef str) {
  for (unsigned char c : str) {
    if (!isValidSymbolChar(c))
      return true;
  }
  return false;
}
    
    void swift::Demangle::Node::dump() {
  std::string TreeStr = getNodeTreeAsString(this);
  fputs(TreeStr.c_str(), stderr);
}
    
    
    {}  // namespace nwapi
    
    class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    #endif  // CONTENT_NW_SRC_API_BINDINGS_COMMON_H_

    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
    NwAppSetProxyConfigFunction::NwAppSetProxyConfigFunction() {
}
    
    
    {} // namespace extensions
#endif

    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    AccelAmplitude* AccelAmplitude::create(Action *action, float duration)
{
    AccelAmplitude *ret = new (std::nothrow) AccelAmplitude();
    if (ret && ret->initWithAction(action, duration))
    {
        ret->autorelease();
        return ret;
    }
    }
    
    // implementation of Ripple3D
    
        unsigned int idx = pos.width * _gridSize.height + pos.height;
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    void AutoPolygon::calculateUV(const Rect& rect, V3F_C4B_T2F* verts, ssize_t count)
{
    /*
     whole texture UV coordination
     0,0                  1,0
     +---------------------+
     |                     |0.1
     |                     |0.2
     |     +--------+      |0.3
     |     |texRect |      |0.4
     |     |        |      |0.5
     |     |        |      |0.6
     |     +--------+      |0.7
     |                     |0.8
     |                     |0.9
     +---------------------+
     0,1                  1,1
     */
    
    CCASSERT(_width && _height, 'please specify width and height for this AutoPolygon instance');
    float texWidth  = _width;
    float texHeight = _height;
    }
    
    
    {    //real rect is the size that is in scale with the texture file
    Rect getRealRect(const Rect& rect);
    
    Image* _image;
    unsigned char * _data;
    std::string _filename;
    unsigned int _width;
    unsigned int _height;
    float _scaleFactor;
    unsigned int _threshold;
};
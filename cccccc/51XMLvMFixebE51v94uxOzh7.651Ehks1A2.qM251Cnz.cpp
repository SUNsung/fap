
        
        public:
  static SILProfiler *create(SILModule &M, ForDefinition_t forDefinition,
                             ASTNode N, SILDeclRef forDecl);
    
    TEST(ClusteredBitVector, FlipAllBig) {
  ClusteredBitVector vec;
  vec.appendClearBits(163);
  EXPECT_EQ(false, vec[12]);
  EXPECT_EQ(0u, vec.count());
  vec.flipAll();
  EXPECT_EQ(true, vec[12]);
  EXPECT_EQ(163u, vec.count());
  vec.clearBit(7);
  EXPECT_EQ(true, vec[12]);
  EXPECT_EQ(false, vec[7]);
  EXPECT_EQ(162u, vec.count());
  vec.flipAll();
  EXPECT_EQ(false, vec[12]);
  EXPECT_EQ(true, vec[7]);
  EXPECT_EQ(1u, vec.count());
}

    
      /// The main entry point of the optimization.
  void eliminateFunctions(SILModuleTransform *DFEPass) {
    }
    
    #if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
// Avoid defining macro max(), min() which conflict with std::max(), std::min()
#define NOMINMAX
#include <windows.h>
#else
#if !defined(__HAIKU__)
#include <sys/errno.h>
#else
#include <errno.h>
#endif
#include <sys/resource.h>
#include <unistd.h>
#endif
#include <climits>
#include <clocale>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#if defined(__CYGWIN__) || defined(_WIN32) || defined(__HAIKU__)
#include <sstream>
#include <cmath>
#elif defined(__ANDROID__)
#include <locale.h>
    
    class MetadataSourceBuilder {
  std::vector<std::unique_ptr<const MetadataSource>> MetadataSourcePool;
public:
  using Source = const MetadataSource *;
    }
    
    class BuiltinTypeDescriptorIterator
  : public std::iterator<std::forward_iterator_tag, BuiltinTypeDescriptor> {
public:
  const void *Cur;
  const void * const End;
  BuiltinTypeDescriptorIterator(const void *Cur, const void * const End)
    : Cur(Cur), End(End) {}
    }
    
    
    {  constexpr static KeyPathComponentHeader
  forClassComponentWithOutOfLineOffset(bool isLet) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_ClassTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | _SwiftKeyPathComponentHeader_OutOfLineOffsetPayload
      | isLetBit(isLet));
  }
  
  constexpr static KeyPathComponentHeader
  forClassComponentWithUnresolvedFieldOffset(bool isLet) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_ClassTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | _SwiftKeyPathComponentHeader_UnresolvedFieldOffsetPayload
      | isLetBit(isLet));
  }
  
  constexpr static KeyPathComponentHeader
  forClassComponentWithUnresolvedIndirectOffset(bool isLet) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_ClassTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | _SwiftKeyPathComponentHeader_UnresolvedIndirectOffsetPayload
      | isLetBit(isLet));
  }
  
  constexpr static KeyPathComponentHeader
  forOptionalChain() {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_OptionalTag
      << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | _SwiftKeyPathComponentHeader_OptionalChainPayload);
  }
  constexpr static KeyPathComponentHeader
  forOptionalWrap() {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_OptionalTag
      << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | _SwiftKeyPathComponentHeader_OptionalWrapPayload);
  }
  constexpr static KeyPathComponentHeader
  forOptionalForce() {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_OptionalTag
      << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | _SwiftKeyPathComponentHeader_OptionalForcePayload);
  }
  
  enum ComputedPropertyKind {
    GetOnly,
    SettableNonmutating,
    SettableMutating,
  };
  
  enum ComputedPropertyIDKind {
    Pointer,
    StoredPropertyIndex,
    VTableOffset,
  };
  
  enum ComputedPropertyIDResolution {
    Resolved,
    IndirectPointer,
    FunctionCall,
  };
  
  constexpr static KeyPathComponentHeader
  forComputedProperty(ComputedPropertyKind kind,
                      ComputedPropertyIDKind idKind,
                      bool hasArguments,
                      ComputedPropertyIDResolution resolution) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_ComputedTag
        << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | (kind != GetOnly
           ? _SwiftKeyPathComponentHeader_ComputedSettableFlag : 0)
      | (kind == SettableMutating
           ? _SwiftKeyPathComponentHeader_ComputedMutatingFlag : 0)
      | (idKind == StoredPropertyIndex
           ? _SwiftKeyPathComponentHeader_ComputedIDByStoredPropertyFlag : 0)
      | (idKind == VTableOffset
           ? _SwiftKeyPathComponentHeader_ComputedIDByVTableOffsetFlag : 0)
      | (hasArguments ? _SwiftKeyPathComponentHeader_ComputedHasArgumentsFlag : 0)
      | (resolution == Resolved ? _SwiftKeyPathComponentHeader_ComputedIDResolved
       : resolution == IndirectPointer ? _SwiftKeyPathComponentHeader_ComputedIDUnresolvedIndirectPointer
       : resolution == FunctionCall ? _SwiftKeyPathComponentHeader_ComputedIDUnresolvedFunctionCall
       : (assert(false && 'invalid resolution'), 0)));
  }
  
  constexpr static KeyPathComponentHeader
  forExternalComponent(unsigned numSubstitutions) {
    return assert(numSubstitutions <
        (1u << _SwiftKeyPathComponentHeader_DiscriminatorShift) - 1u
        && 'too many substitutions'),
      KeyPathComponentHeader(
        (_SwiftKeyPathComponentHeader_ExternalTag
          << _SwiftKeyPathComponentHeader_DiscriminatorShift)
        | numSubstitutions);
  }
  
  constexpr uint32_t getData() const { return Data; }
};
    
    int main(int argc, char** argv) { return leveldb::test::RunAllTests(); }

    
    class CondVar;
    
    TEST(Coding, Varint32) {
  std::string s;
  for (uint32_t i = 0; i < (32 * 32); i++) {
    uint32_t v = (i / 32) << (i % 32);
    PutVarint32(&s, v);
  }
    }
    
      // Write the document-level header.
  void writeHeader(int firstPage, int lastPage,
		   PDFRectangle *mediaBox, PDFRectangle *cropBox,
		   int pageRotate, char *pstitle);
    
      // Construct a new PageAttrs object by merging a dictionary
  // (of type Pages or Page) into another PageAttrs object.  If
  // <attrs> is NULL, uses defaults.
  PageAttrs(PageAttrs *attrs, Dict *dict);
    
      // get direction
  if (dict->lookup('M', &obj)->isName()) {
    const char *m = obj.getName();
    
    if (strcmp('I', m) == 0)
      direction = transitionInward;
    else if (strcmp('O', m) == 0)
      direction = transitionOutward;
  }
  obj.free();
    
      // refill buffer after inline image data
  if (inlineImg == 2) {
    buf1.free();
    buf2.free();
    lexer->getObj(&buf1);
    lexer->getObj(&buf2);
    inlineImg = 0;
  }
    
    PreScanOutputDev::~PreScanOutputDev() {
}
    
      GBool isEmbedded;
    
      // Constructor.
  SplashOutputDev(SplashColorMode colorModeA, int bitmapRowPadA,
		  GBool reverseVideoA, SplashColorPtr paperColorA,
		  GBool bitmapTopDownA = gTrue,
		  GBool allowAntialiasA = gTrue);
    
     signals:
    
    
    {  if (m_affectedKeys.size() > 0) {
    performOperation(targetConnection, targetDbIndex);
  } else {
    getAffectedKeys([this, targetConnection, targetDbIndex](QVariant, QString) {
      performOperation(targetConnection, targetDbIndex);
    });
  }
}
    
      QFuture<void> getDatabases(
      std::function<void(RedisClient::DatabaseList)>) override;
    
    namespace BulkOperations {
    }
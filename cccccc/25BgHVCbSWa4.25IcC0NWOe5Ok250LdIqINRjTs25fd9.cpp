
        
            // Check witness table methods.
    for (SILWitnessTable &WT : Module->getWitnessTableList()) {
      ProtocolConformance *Conf = WT.getConformance();
      if (isVisibleExternally(Conf->getProtocol())) {
        // The witness table is visible from 'outside'. Therefore all methods
        // might be called and we mark all methods as alive.
        for (const SILWitnessTable::Entry &entry : WT.getEntries()) {
          if (entry.getKind() != SILWitnessTable::Method)
            continue;
    }
    }
    }
    
    /// This class stores a lexical scope as it is represented in the
/// debug info. In contrast to LLVM IR, SILDebugScope also holds all
/// the inlining information. In LLVM IR the inline info is part of
/// DILocation.
class SILDebugScope : public SILAllocated<SILDebugScope> {
public:
  /// The AST node this lexical scope represents.
  SILLocation Loc;
  /// Always points to the parent lexical scope.
  /// For top-level scopes, this is the SILFunction.
  PointerUnion<const SILDebugScope *, SILFunction *> Parent;
  /// An optional chain of inlined call sites.
  ///
  /// If this scope is inlined, this points to a special 'scope' that
  /// holds the location of the call site.
  const SILDebugScope *InlinedCallSite;
    }
    
    bool TypeRefBuilder::getFieldTypeRefs(
    const TypeRef *TR,
    const std::pair<const FieldDescriptor *, const ReflectionInfo *> &FD,
    std::vector<FieldTypeInfo> &Fields) {
  if (FD.first == nullptr)
    return false;
    }
    
      /// If enabled, some entities will be emitted as symbolic reference
  /// placeholders. The offsets of these references will be stored in the
  /// `SymbolicReferences` vector, and it is up to the consumer of the mangling
  /// to fill these in.
  bool AllowSymbolicReferences = false;
    
    namespace swift {
    }
    
        // change element with key 'the bad'
    object.at('the bad') = 'il cattivo';
    
    using json = nlohmann::json;
    
    #include <folly/PriorityMPMCQueue.h>
#include <folly/portability/GTest.h>
    
    template <
    typename Key,
    typename Hasher = f14::DefaultHasher<Key>,
    typename KeyEqual = f14::DefaultKeyEqual<Key>,
    typename Alloc = f14::DefaultAlloc<Key>>
class F14FastSet;
    
    /**
 * Simple arena: allocate memory which gets freed when the arena gets
 * destroyed.
 *
 * The arena itself allocates memory using a custom allocator which conforms
 * to the C++ concept Allocator.
 *
 *   http://en.cppreference.com/w/cpp/concept/Allocator
 *
 * You may also specialize ArenaAllocatorTraits for your allocator type to
 * provide:
 *
 *   size_t goodSize(const Allocator& alloc, size_t size) const;
 *      Return a size (>= the provided size) that is considered 'good' for your
 *      allocator (for example, if your allocator allocates memory in 4MB
 *      chunks, size should be rounded up to 4MB).  The provided value is
 *      guaranteed to be rounded up to a multiple of the maximum alignment
 *      required on your system; the returned value must be also.
 *
 * An implementation that uses malloc() / free() is defined below, see SysArena.
 */
template <class Alloc>
struct ArenaAllocatorTraits;
template <class Alloc>
class Arena {
 public:
  explicit Arena(
      const Alloc& alloc,
      size_t minBlockSize = kDefaultMinBlockSize,
      size_t sizeLimit = kNoSizeLimit,
      size_t maxAlign = kDefaultMaxAlign)
      : allocAndSize_(alloc, minBlockSize),
        ptr_(nullptr),
        end_(nullptr),
        totalAllocatedSize_(0),
        bytesUsed_(0),
        sizeLimit_(sizeLimit),
        maxAlign_(maxAlign) {
    if ((maxAlign_ & (maxAlign_ - 1)) || maxAlign_ > alignof(Block)) {
      throw_exception(std::invalid_argument(
          folly::to<std::string>('Invalid maxAlign: ', maxAlign_)));
    }
  }
    }
    
    #include <glog/logging.h>
    
      std::string name('world');
    
    // Return the prologue of the generated mock file.
grpc::string GetMockPrologue(grpc_generator::File *file,
                             const Parameters &params);
    
    typedef GRPC_CUSTOM_STRING string;
    
    inline flatbuffers::Offset<Object> CreateObject(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<reflection::Field>>> fields = 0,
    bool is_struct = false,
    int32_t minalign = 0,
    int32_t bytesize = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<reflection::KeyValue>>> attributes = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> documentation = 0) {
  ObjectBuilder builder_(_fbb);
  builder_.add_documentation(documentation);
  builder_.add_attributes(attributes);
  builder_.add_bytesize(bytesize);
  builder_.add_minalign(minalign);
  builder_.add_fields(fields);
  builder_.add_name(name);
  builder_.add_is_struct(is_struct);
  return builder_.Finish();
}
    
    #if !defined(FLATBUFFERS_ASSERT)
#include <assert.h>
#define FLATBUFFERS_ASSERT assert
#elif defined(FLATBUFFERS_ASSERT_INCLUDE)
// Include file with forward declaration
#include FLATBUFFERS_ASSERT_INCLUDE
#endif
    
      // Converts a binary buffer to text using one of the schemas in the registry,
  // use the file_identifier to indicate which.
  // If DetachedBuffer::data() is null then parsing failed.
  DetachedBuffer TextToFlatBuffer(const char *text,
                                  const char *file_identifier) {
    // Load and parse the schema.
    Parser parser;
    if (!LoadSchema(file_identifier, &parser)) return DetachedBuffer();
    // Parse the text.
    if (!parser.Parse(text)) {
      lasterror_ = parser.error_;
      return DetachedBuffer();
    }
    // We have a valid FlatBuffer. Detach it from the builder and return.
    return parser.builder_.Release();
  }
    
    template <class SrcBuilder>
struct BuilderReuseTests<flatbuffers::grpc::MessageBuilder, SrcBuilder> {
  static void builder_reusable_after_release_message_test(TestSelector selector) {
    if (!selector.count(REUSABLE_AFTER_RELEASE_MESSAGE)) {
      return;
    }
    }
    }
    
    ::grpc::Status MonsterStorage::Service::GetMaxHitPoint(::grpc::ServerContext* context, ::grpc::ServerReader< flatbuffers::grpc::Message<Monster>>* reader, flatbuffers::grpc::Message<Stat>* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
}
    
    
    {    // Restore locale.
    if (use_locale) { FLATBUFFERS_ASSERT(setlocale(LC_ALL, 'C')); }
  }
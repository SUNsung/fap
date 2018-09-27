
        
        bool swift::parseASTSection(SerializedModuleLoader *SML, StringRef buf,
                            SmallVectorImpl<std::string> &foundModules) {
  if (!serialization::isSerializedAST(buf))
    return false;
    }
    
    #include 'swift/Basic/Cache.h'
#include 'llvm/ADT/SmallString.h'
#include <cache.h>
    
    class TreePrinter {
  llvm::raw_ostream &Out;
  void (&PrintNodeData)(llvm::raw_ostream &out, void *node);
  SmallString<40> Indent;
public:
  TreePrinter(llvm::raw_ostream &out,
              void (&printNodeData)(llvm::raw_ostream &out, void *node))
    : Out(out), PrintNodeData(printNodeData) {}
    }
    
    using namespace swift;
    
    
    {  return loc;
}
    
    
    { private:
  App();
  DISALLOW_COPY_AND_ASSIGN(App);
};
    
    #include 'content/nw/src/api/base/base.h'
    
    #include 'base/compiler_specific.h'
#include 'content/nw/src/api/base/base.h'
    
    
    {} // namespace nwapi

    
      static int getUID() {
    static int id = 0;
    return ++id;
  }
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    EnumGenerator::~EnumGenerator() {
}
    
    #include <google/protobuf/compiler/java/java_context.h>
    
    void WriteMethodDocComment(io::Printer* printer,
                           const MethodDescriptor* method) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, method);
  printer->Print(
    ' * <code>$def$</code>\n'
    ' */\n',
    'def', EscapeJavadoc(FirstLineOf(method->DebugString())));
}
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {  WriteFieldDocComment(printer, descriptor_);
  if (descriptor_->is_repeated()) {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newRepeatedGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $packed$,\n'
        '      $singular_type$.class);\n');
  } else {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newSingularGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $default$,\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $singular_type$.class);\n');
  }
  printer->Annotate('name', descriptor_);
}
    
    #include <google/protobuf/compiler/java/java_shared_code_generator.h>
    
    ALWAYS_INLINE
const APCLocalArray* APCLocalArray::asApcArray(const ArrayData* ad) {
  assertx(ad->kind() == kApcKind);
  return static_cast<const APCLocalArray*>(ad);
}
    
    const StaticString
  s_wrapper_type('wrapper_type'),
  s_stream_type('stream_type'),
  s_mode('mode'),
  s_unread_bytes('unread_bytes'),
  s_seekable('seekable'),
  s_timed_out('timed_out'),
  s_blocked('blocked'),
  s_eof('eof'),
  s_plainfile('plainfile'),
  s_dir('dir'),
  s_r('r');
    
    //////////////////////////////////////////////////////////////////////
    
    
    {    if (isPHP == php) {
      callback(spath + ename, false);
    }
  }
    
    #include 'hphp/runtime/base/type-string.h'
    
        static BOOST_FORCEINLINE void store(storage_type volatile& storage, storage_type v, memory_order) BOOST_NOEXCEPT
    {
        uint64_t const* p_value = (uint64_t const*)&v;
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %[dest], %%rax\n\t'
            'movq 8+%[dest], %%rdx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg16b %[dest]\n\t'
            'jne 1b\n\t'
            : [dest] '=o' (storage)
            : 'b' (p_value[0]), 'c' (p_value[1])
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'rax', 'rdx', 'memory'
        );
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq 0(%[dest]), %%rax\n\t'
            'movq 8(%[dest]), %%rdx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg16b 0(%[dest])\n\t'
            'jne 1b\n\t'
            :
            : 'b' (p_value[0]), 'c' (p_value[1]), [dest] 'r' (&storage)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'rax', 'rdx', 'memory'
        );
#endif // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
    }
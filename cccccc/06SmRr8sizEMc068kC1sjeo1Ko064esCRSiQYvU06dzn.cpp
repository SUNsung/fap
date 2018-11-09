
        
        #ifndef NDEBUG
/// Verify that the types of fields are valid within a given generic signature.
static void verifyFields(CanGenericSignature Sig, ArrayRef<SILField> Fields) {
  for (auto &field : Fields) {
    auto ty = field.getLoweredType();
    // Layouts should never refer to archetypes, since they represent an
    // abstract generic type layout.
    assert(!ty->hasArchetype()
           && 'SILLayout field cannot have an archetype type');
    assert(!ty->hasTypeVariable()
           && 'SILLayout cannot contain constraint system type variables');
    if (!ty->hasTypeParameter())
      continue;
    field.getLoweredType().findIf([Sig](Type t) -> bool {
      if (auto gpt = t->getAs<GenericTypeParamType>()) {
        // Check that the generic param exists in the generic signature.
        assert(Sig && 'generic param in nongeneric layout?');
        assert(std::find(Sig.getGenericParams().begin(),
                         Sig.getGenericParams().end(),
                         gpt->getCanonicalType()) != Sig.getGenericParams().end()
               && 'generic param not declared in generic signature?!');
      }
      return false;
    });
  }
}
#endif
    
      size_t numTrailingObjects(OverloadToken<Type>) const {
    return getNumReplacementTypes();
  }
    
      if (triple.getOS() == llvm::Triple::Darwin &&
      triple.getVendor() == llvm::Triple::Apple) {
    // Rewrite darwinX.Y triples to macosx10.X'.Y ones.
    // It affects code generation on our platform.
    llvm::SmallString<16> osxBuf;
    llvm::raw_svector_ostream osx(osxBuf);
    osx << llvm::Triple::getOSTypeName(llvm::Triple::MacOSX);
    }
    
    bool swift::canBeMemberName(StringRef identifier) {
  return llvm::StringSwitch<bool>(identifier)
    .Case('init', false)
    .Case('Protocol', false)
    .Case('self', false)
    .Case('Type', false)
    .Default(true);
}
    
    #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
      // True when a ScopedPyObjectPtr and a raw pointer refer to the same object.
  // Comparison operators are non reflexive.
  bool operator==(const PyObjectStruct* p) const { return ptr_ == p; }
  bool operator!=(const PyObjectStruct* p) const { return ptr_ != p; }
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    void Context::InitializeFieldGeneratorInfoForMessage(
    const Descriptor* message) {
  for (int i = 0; i < message->nested_type_count(); ++i) {
    InitializeFieldGeneratorInfoForMessage(message->nested_type(i));
  }
  std::vector<const FieldDescriptor*> fields;
  for (int i = 0; i < message->field_count(); ++i) {
    fields.push_back(message->field(i));
  }
  InitializeFieldGeneratorInfoForFields(fields);
    }
    
      string::size_type pos = result.find_first_of('\n');
  if (pos != string::npos) {
    result.erase(pos);
  }
    
    #include <google/protobuf/compiler/java/java_generator_factory.h>
    
    string ClassNameResolver::GetFileDefaultImmutableClassName(
    const FileDescriptor* file) {
  string basename;
  string::size_type last_slash = file->name().find_last_of('/');
  if (last_slash == string::npos) {
    basename = file->name();
  } else {
    basename = file->name().substr(last_slash + 1);
  }
  return UnderscoresToCamelCase(StripProto(basename), true);
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_EXTENSION_H__
#define GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_EXTENSION_H__
    
    std::string tmppath() {
  // TMPFILE is for manual test execution during which the user will specify
  // the full temp file path using the environmental variable TMPFILE
  const char* tmpfile = getenv('TMPFILE');
  if (tmpfile) {
    return std::string(tmpfile);
  }
    }
    
    SHOULD_NOT_DO_GRADIENT(EnforceFinite);
    
    ```
    
    namespace caffe2 {
    }
    
    
    {} // namespace caffe2
    
    ```
    
    //////////////////////////////////////////////////////////////////////
    
    APCHandle::Pair APCCollection::WrapArray(APCHandle::Pair inner,
                                         CollectionType colType) {
  auto const col = new APCCollection;
  col->m_arrayHandle = inner.handle;
  col->m_colType = colType;
  return { &col->m_handle, inner.size + sizeof(APCCollection) };
}
    
    
    {private:
  APCHandle m_handle;
  APCHandle* m_arrayHandle;
  CollectionType m_colType;
};
    
    struct FatalErrorException : ExtendedException {
  explicit FatalErrorException(const char *msg)
    : ExtendedException('%s', msg)
  {}
  FatalErrorException(int, ATTRIBUTE_PRINTF_STRING const char *msg, ...)
    ATTRIBUTE_PRINTF(3,4);
  FatalErrorException(const std::string&, const Array& backtrace,
                      bool isRecoverable = false);
    }
    
    inline TypedValue ExecutionContext::invokeMethod(
  ObjectData* obj,
  const Func* meth,
  InvokeArgs args,
  bool dynamic
) {
  return invokeFuncFew(
    meth,
    ActRec::encodeThis(obj),
    nullptr /* invName */,
    args.size(),
    args.start(),
    dynamic
  );
}
    
        // skipping 'tags' files
    if (strcmp(ename, 'tags') == 0) {
      continue;
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    
    {
    {
} // namespace BOOST_REGEX_DETAIL_NS
using boost::BOOST_REGEX_DETAIL_NS::directory_iterator;
using boost::BOOST_REGEX_DETAIL_NS::file_iterator;
using boost::BOOST_REGEX_DETAIL_NS::mapfile;
} // namespace boost
    
       format_perl = 0,                                  /* perl style replacement */
   format_default = 0,                               /* ditto. */
   format_sed = match_max << 1,                      /* sed style replacement. */
   format_all = format_sed << 1,                     /* enable all extentions to sytax. */
   format_no_copy = format_all << 1,                 /* don't copy non-matching segments. */
   format_first_only = format_no_copy << 1,          /* Only replace first occurance. */
   format_is_if = format_first_only << 1,            /* internal use only. */
   format_literal = format_is_if << 1                /* treat string as a literal */
    
    template <class BidiIterator, class Allocator, class traits>
inline void perl_matcher<BidiIterator, Allocator, traits>::push_repeater_count(int i, repeater_count<BidiIterator>** s)
{
   saved_repeater<BidiIterator>* pmp = static_cast<saved_repeater<BidiIterator>*>(m_backup_state);
   --pmp;
   if(pmp < m_stack_base)
   {
      extend_stack();
      pmp = static_cast<saved_repeater<BidiIterator>*>(m_backup_state);
      --pmp;
   }
   (void) new (pmp)saved_repeater<BidiIterator>(i, s, position, this->recursion_stack.size() ? this->recursion_stack.back().idx : (INT_MIN + 3));
   m_backup_state = pmp;
}
    
    
    {
    {}
} // namespace boost
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_format.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides formatting output routines for search and replace
  *                operations.  Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    #ifdef BOOST_MSVC
#  pragma warning(pop)
#endif
    
    typedef regex_token_iterator<const char*> cregex_token_iterator;
typedef regex_token_iterator<std::string::const_iterator> sregex_token_iterator;
#ifndef BOOST_NO_WREGEX
typedef regex_token_iterator<const wchar_t*> wcregex_token_iterator;
typedef regex_token_iterator<std::wstring::const_iterator> wsregex_token_iterator;
#endif
    
    #ifndef BOOST_ATOMIC_DETAIL_PAUSE_HPP_INCLUDED_
#define BOOST_ATOMIC_DETAIL_PAUSE_HPP_INCLUDED_
    
    template< >
struct make_storage_type< 8u, true >
{
    typedef mars_boost::int64_t type;
    }
    
    #if BOOST_ATOMIC_SIGNAL_FENCE > 0
BOOST_FORCEINLINE void atomic_signal_fence(memory_order order) BOOST_NOEXCEPT
{
    detail::signal_fence(order);
}
#else
BOOST_FORCEINLINE void atomic_signal_fence(memory_order) BOOST_NOEXCEPT
{
    detail::lockpool::signal_fence();
}
#endif
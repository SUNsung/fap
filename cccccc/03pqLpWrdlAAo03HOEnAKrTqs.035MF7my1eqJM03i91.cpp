
        
          // Increments the reference count fo the current object.
  // Should not be called when no object is held.
  void inc() const { Py_INCREF(ptr_); }
    
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
    
    // Functions to create C# XML documentation comments.
// Currently this only includes documentation comments containing text specified as comments
// in the .proto file; documentation comments generated just from field/message/enum/proto names
// is inlined in the relevant code. If more control is required, that code can be moved here.
    
    // Generates output file name for given file descriptor. If generate_directories
// is true, the output file will be put under directory corresponding to file's
// namespace. base_namespace can be used to strip some of the top level
// directories. E.g. for file with namespace 'Bar.Foo' and base_namespace='Bar',
// the resulting file will be put under directory 'Foo' (and not 'Bar/Foo').
//
// Requires:
//   descriptor != NULL
//   error != NULL
//
//  Returns:
//    The file name to use as output file for given file descriptor. In case
//    of failure, this function will return empty string and error parameter
//    will contain the error message.
string LIBPROTOC_EXPORT GetOutputFile(
    const google::protobuf::FileDescriptor* descriptor,
    const string file_extension,
    const bool generate_directories,
    const string base_namespace,
    string* error);
    
    #include <google/protobuf/stubs/common.h>
namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
        static BOOST_FORCEINLINE void store(storage_type volatile& storage, storage_type v, memory_order) BOOST_NOEXCEPT
    {
        if ((((uint32_t)&storage) & 0x00000007) == 0)
        {
#if defined(__SSE2__)
            __asm__ __volatile__
            (
#if defined(__AVX__)
                'vmovq %1, %%xmm4\n\t'
                'vmovq %%xmm4, %0\n\t'
#else
                'movq %1, %%xmm4\n\t'
                'movq %%xmm4, %0\n\t'
#endif
                : '=m' (storage)
                : 'm' (v)
                : 'memory', 'xmm4'
            );
#else
            __asm__ __volatile__
            (
                'fildll %1\n\t'
                'fistpll %0\n\t'
                : '=m' (storage)
                : 'm' (v)
                : 'memory'
            );
#endif
        }
        else
        {
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
#if defined(__PIC__)
            uint32_t scratch;
            __asm__ __volatile__
            (
                'movl %%ebx, %[scratch]\n\t'
                'movl %[value_lo], %%ebx\n\t'
                'movl %[dest], %%eax\n\t'
                'movl 4+%[dest], %%edx\n\t'
                '.align 16\n\t'
                '1: lock; cmpxchg8b %[dest]\n\t'
                'jne 1b\n\t'
                'movl %[scratch], %%ebx\n\t'
                : [scratch] '=m' (scratch), [dest] '=o' (storage)
                : [value_lo] 'a' ((uint32_t)v), 'c' ((uint32_t)(v >> 32))
                : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'edx', 'memory'
            );
#else // defined(__PIC__)
            __asm__ __volatile__
            (
                'movl %[dest], %%eax\n\t'
                'movl 4+%[dest], %%edx\n\t'
                '.align 16\n\t'
                '1: lock; cmpxchg8b %[dest]\n\t'
                'jne 1b\n\t'
                : [dest] '=o' (storage)
                : [value_lo] 'b' ((uint32_t)v), 'c' ((uint32_t)(v >> 32))
                : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'eax', 'edx', 'memory'
            );
#endif // defined(__PIC__)
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
#if defined(__PIC__)
            uint32_t scratch;
            __asm__ __volatile__
            (
                'movl %%ebx, %[scratch]\n\t'
                'movl %[value_lo], %%ebx\n\t'
                'movl 0(%[dest]), %%eax\n\t'
                'movl 4(%[dest]), %%edx\n\t'
                '.align 16\n\t'
                '1: lock; cmpxchg8b 0(%[dest])\n\t'
                'jne 1b\n\t'
                'movl %[scratch], %%ebx\n\t'
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
                : [scratch] '=m,m' (scratch)
                : [value_lo] 'a,a' ((uint32_t)v), 'c,c' ((uint32_t)(v >> 32)), [dest] 'D,S' (&storage)
#else
                : [scratch] '=m' (scratch)
                : [value_lo] 'a' ((uint32_t)v), 'c' ((uint32_t)(v >> 32)), [dest] 'D' (&storage)
#endif
                : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'edx', 'memory'
            );
#else // defined(__PIC__)
            __asm__ __volatile__
            (
                'movl 0(%[dest]), %%eax\n\t'
                'movl 4(%[dest]), %%edx\n\t'
                '.align 16\n\t'
                '1: lock; cmpxchg8b 0(%[dest])\n\t'
                'jne 1b\n\t'
                :
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
                : [value_lo] 'b,b' ((uint32_t)v), 'c,c' ((uint32_t)(v >> 32)), [dest] 'D,S' (&storage)
#else
                : [value_lo] 'b' ((uint32_t)v), 'c' ((uint32_t)(v >> 32)), [dest] 'D' (&storage)
#endif
                : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'eax', 'edx', 'memory'
            );
#endif // defined(__PIC__)
#endif // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        }
    }
    
        static BOOST_FORCEINLINE storage_type fetch_or(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        switch (order)
        {
        case memory_order_relaxed:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR_RELAXED(&storage, v));
            break;
        case memory_order_consume:
        case memory_order_acquire:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR_ACQUIRE(&storage, v));
            break;
        case memory_order_release:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR_RELEASE(&storage, v));
            break;
        case memory_order_acq_rel:
        case memory_order_seq_cst:
        default:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR(&storage, v));
            break;
        }
        return v;
    }
    
    namespace mars_boost {} namespace boost = mars_boost; namespace mars_boost {
namespace atomics {
namespace detail {
    }
    }
    }
    
        struct aligned
    {
        BOOST_ALIGNMENT(4) type value;
    }
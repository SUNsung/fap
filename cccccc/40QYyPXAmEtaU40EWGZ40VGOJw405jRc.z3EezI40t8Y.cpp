
        
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
    
    // This file defines a C++ DescriptorDatabase, which wraps a Python Database
// and delegate all its operations to Python methods.
    
      // Find the file which defines an extension extending the given message type
  // with the given field number.
  // Containing_type must be a fully-qualified type name.
  // Python objects are not required to implement this method.
  bool FindFileContainingExtension(const string& containing_type,
                                   int field_number,
                                   FileDescriptorProto* output);
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
        'ensure$capitalized_name$IsMutable();\n'
    '$name$_.remove(index);\n'
    '$on_changed$\n',
    
    #if GTEST_OS_SYMBIAN
  // Streams a value (either a pointer or not) to this object.
  template <typename T>
  inline Message& operator <<(const T& value) {
    StreamHelper(typename internal::is_pointer<T>::type(), value);
    return *this;
  }
#else
  // Streams a non-pointer value to this object.
  template <typename T>
  inline Message& operator <<(const T& val) {
    // Some libraries overload << for STL containers.  These
    // overloads are defined in the global namespace instead of ::std.
    //
    // C++'s symbol lookup rule (i.e. Koenig lookup) says that these
    // overloads are visible in either the std namespace or the global
    // namespace, but not other namespaces, including the testing
    // namespace which Google Test's Message class is in.
    //
    // To allow STL containers (and other types that has a << operator
    // defined in the global namespace) to be used in Google Test
    // assertions, testing::Message must access the custom << operator
    // from the global namespace.  With this using declaration,
    // overloads of << defined in the global namespace and those
    // visible via Koenig lookup are both exposed in this function.
    using ::operator <<;
    *ss_ << val;
    return *this;
  }
    
    #if !GTEST_OS_SYMBIAN
# include <utility>
#endif
    
    // Makes sure this header is not included before gtest.h.
#ifndef GTEST_INCLUDE_GTEST_GTEST_H_
# error Do not include gtest_pred_impl.h directly.  Include gtest.h instead.
#endif  // GTEST_INCLUDE_GTEST_GTEST_H_
    
      virtual ParamIteratorInterface<ParamType>* Begin() const {
    return new Iterator(this, g1_, g1_.begin(), g2_, g2_.begin());
  }
  virtual ParamIteratorInterface<ParamType>* End() const {
    return new Iterator(this, g1_, g1_.end(), g2_, g2_.end());
  }
    
      // Compares two wide C strings.  Returns true iff they have the same
  // content.
  //
  // Unlike wcscmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool WideCStringEquals(const wchar_t* lhs, const wchar_t* rhs);
    
    template <GTEST_10_TYPENAMES_(T), GTEST_10_TYPENAMES_(U)>
inline bool operator==(const GTEST_10_TUPLE_(T)& t,
                       const GTEST_10_TUPLE_(U)& u) {
  return gtest_internal::SameSizeTuplePrefixComparator<
      tuple_size<GTEST_10_TUPLE_(T) >::value,
      tuple_size<GTEST_10_TUPLE_(U) >::value>::Eq(t, u);
}
    
    
// Step 1. Include necessary header files such that the stuff your
// test logic needs is declared.
//
// Don't forget gtest.h, which declares the testing framework.
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    namespace HPHP { namespace jit {
    }
    }
    
    SSATmp* implInstanceOfD(IRGS& env, SSATmp* src, const StringData* className);
    
    #include 'hphp/util/safe-cast.h'
    
    void numa_local(void* start, size_t size) {
  if (!use_numa) return;
  numa_setlocal_memory(start, size);
}
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. If the block
 * starts with a DefLabel expecting a StkPtr, this function will return an
 * intermediate block that passes the current sp.
 */
Block* getBlock(IRGS& env, Offset offset);
    
    #include <cstdint>
#include <cstring>
#include <map>
#include <set>
    
    GodotSharpBuilds *GodotSharpBuilds::singleton = NULL;
    
    /*Note that we do not provide a macro for abs(), because it is provided as a
   library function, which we assume is translated into an intrinsic to avoid
   the function call overhead and then implemented in the smartest way for the
   target platform.
  With modern gcc (4.x), this is true: it uses cmov instructions if the
   architecture supports it and branchless bit-twiddling if it does not (the
   speed difference between the two approaches is not measurable).
  Interestingly, the bit-twiddling method was patented in 2000 (US 6,073,150)
   by Sun Microsystems, despite prior art dating back to at least 1996:
   http://web.archive.org/web/19961201174141/www.x86.org/ftp/articles/pentopt/PENTOPT.TXT
  On gcc 3.x, however, our assumption is not true, as abs() is translated to a
   conditional jump, which is horrible on deeply piplined architectures (e.g.,
   all consumer architectures for the past decade or more).
  Also be warned that -C*abs(x) where C is a constant is mis-optimized as
   abs(C*x) on every gcc release before 4.2.3.
  See bug http://gcc.gnu.org/bugzilla/show_bug.cgi?id=34130 */
    
    
static const vorbis_mapping_template _mapres_template_16_uncoupled[3]={
  { _map_nominal_u, _res_16u_0 }, /* 0 */
  { _map_nominal_u, _res_16u_1 }, /* 1 */
  { _map_nominal_u, _res_16u_2 }, /* 2 */
};

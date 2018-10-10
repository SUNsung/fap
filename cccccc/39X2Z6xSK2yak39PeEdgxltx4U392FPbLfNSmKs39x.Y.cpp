
        
        static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/compiler/plugin.pb.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/strutil.h>
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
#include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/printer.h>
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
    
    ExtensionGenerator::~ExtensionGenerator() {}
    
    
    {
    {
    {
    {
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ExtensionGenerator);
};
}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_MESSAGE_H__

    
    ```
    
    class GetMergeSingleScalarFeatureTensorsGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    vector<string> input_blob_names{};
    vector<string> output_blob_names{};
    }
    }
    
    
    {  bool RunOnDevice() override;
};
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/operator.h'
    
    namespace internal {
    }
    
    bool IsColorTerminal() {
#if BENCHMARK_OS_WINDOWS
  // On Windows the TERM variable is usually not set, but the
  // console there does support colors.
  return 0 != _isatty(_fileno(stdout));
#else
  // On non-Windows platforms, we rely on the TERM variable. This list of
  // supported TERM values is copied from Google Test:
  // <https://github.com/google/googletest/blob/master/googletest/src/gtest.cc#L2925>.
  const char* const SUPPORTED_TERM_VALUES[] = {
      'xterm',         'xterm-color',     'xterm-256color',
      'screen',        'screen-256color', 'tmux',
      'tmux-256color', 'rxvt-unicode',    'rxvt-unicode-256color',
      'linux',         'cygwin',
  };
    }
    
    double Finish(Counter const& c, double cpu_time, double num_threads) {
  double v = c.value;
  if (c.flags & Counter::kIsRate) {
    v /= cpu_time;
  }
  if (c.flags & Counter::kAvgThreads) {
    v /= num_threads;
  }
  return v;
}
    
    #if defined(BENCHMARK_OS_MACOSX)
#include <mach/mach_time.h>
#endif
// For MSVC, we want to use '_asm rdtsc' when possible (since it works
// with even ancient MSVC compilers), and when not possible the
// __rdtsc intrinsic, declared in <intrin.h>.  Unfortunately, in some
// environments, <windows.h> and <intrin.h> have conflicting
// declarations of some other intrinsics, breaking compilation.
// Therefore, we simply declare __rdtsc ourselves. See also
// http://connect.microsoft.com/VisualStudio/feedback/details/262047
#if defined(COMPILER_MSVC) && !defined(_M_IX86)
extern 'C' uint64_t __rdtsc();
#pragma intrinsic(__rdtsc)
#endif
    
    #define TRY_ACQUIRE_SHARED(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(try_acquire_shared_capability(__VA_ARGS__))
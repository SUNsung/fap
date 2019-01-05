
        
        #include 'base/command_line.h'
    
    
    {  DISALLOW_COPY_AND_ASSIGN(AutoUpdater);
};
    
    namespace mate {
    }
    
      void PurchaseProduct(const std::string& product_id, mate::Arguments* args);
    
    #include 'atom/browser/render_process_preferences.h'
#include 'native_mate/handle.h'
#include 'native_mate/wrappable.h'
    
    #endif  // ATOM_BROWSER_API_ATOM_API_TRAY_H_

    
    
    {  RAW_CHECK(g_pipe_pid == getpid());
  RAW_CHECK(g_shutdown_pipe_write_fd != -1);
  RAW_CHECK(g_shutdown_pipe_read_fd != -1);
  size_t bytes_written = 0;
  do {
    int rv = HANDLE_EINTR(
        write(g_shutdown_pipe_write_fd,
              reinterpret_cast<const char*>(&signal) + bytes_written,
              sizeof(signal) - bytes_written));
    RAW_CHECK(rv >= 0);
    bytes_written += rv;
  } while (bytes_written < sizeof(signal));
}
    
    #if defined(OS_LINUX)
#include 'atom/browser/lib/power_observer_linux.h'
#else
#include 'base/power_monitor/power_observer.h'
#endif  // defined(OS_LINUX)
    
    static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enumDescriptor) {
    WriteDocCommentBody(printer, enumDescriptor);
}
void WriteEnumValueDocComment(io::Printer* printer, const EnumValueDescriptor* value) {
    WriteDocCommentBody(printer, value);
}
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
#include <google/protobuf/testing/file.h>
    
    
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_message.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
#include <google/protobuf/compiler/csharp/csharp_reflection_class.h>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    void WriteFieldDocComment(io::Printer* printer, const FieldDescriptor* field) {
  // In theory we should have slightly different comments for setters, getters,
  // etc., but in practice everyone already knows the difference between these
  // so it's redundant information.
    }
    
    #include <google/protobuf/compiler/java/java_doc_comment.h>
    
    #define CHECK_FLOAT_EQ(a, b, eps) CHECK(std::fabs((a) - (b)) <  (eps))
#define CHECK_FLOAT_NE(a, b, eps) CHECK(std::fabs((a) - (b)) >= (eps))
#define CHECK_FLOAT_GE(a, b, eps) CHECK((a) - (b) > -(eps))
#define CHECK_FLOAT_LE(a, b, eps) CHECK((b) - (a) > -(eps))
#define CHECK_FLOAT_GT(a, b, eps) CHECK((a) - (b) >  (eps))
#define CHECK_FLOAT_LT(a, b, eps) CHECK((b) - (a) >  (eps))
    
    std::string FormatString(const char* msg, va_list args) {
  // we might need a second shot at this, so pre-emptivly make a copy
  va_list args_cp;
  va_copy(args_cp, args);
    }
    
    #ifndef BENCHMARK_CYCLECLOCK_H_
#define BENCHMARK_CYCLECLOCK_H_
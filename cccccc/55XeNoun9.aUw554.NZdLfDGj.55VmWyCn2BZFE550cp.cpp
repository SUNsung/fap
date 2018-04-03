
        
        #include 'atom/browser/api/trackable_object.h'
#include 'atom/browser/net/atom_network_delegate.h'
#include 'native_mate/arguments.h'
#include 'native_mate/handle.h'
    
    
    {}  // namespace atom
    
      // JsAsker:
  void StartAsync(std::unique_ptr<base::Value> options) override;
    
      // JsAsker:
  void StartAsync(std::unique_ptr<base::Value> options) override;
    
    // Relaunches the application using the helper application associated with the
// currently running instance of Chrome in the parent browser process as the
// executable for the relauncher process. |args| is an argv-style vector of
// command line arguments of the form normally passed to execv. args[0] is
// also the path to the relaunched process. Because the relauncher process
// will ultimately launch the relaunched process via Launch Services, args[0]
// may be either a pathname to an executable file or a pathname to an .app
// bundle directory. The caller should exit soon after RelaunchApp returns
// successfully. Returns true on success, although some failures can occur
// after this function returns true if, for example, they occur within the
// relauncher process. Returns false when the relaunch definitely failed.
bool RelaunchApp(const StringVector& argv);
    
    namespace atom {
    }
    
    #include 'ui/views/window/native_frame_view.h'
    
    # define JSON_ASSERT(condition) assert(condition)
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_DATABASE_H__

    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    void RepeatedPrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.For$capitalized_type_name$($tag$);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(SourceGeneratorBase);
};
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
    
    #include <gtest/gtest.h>
    
            const std::vector<Point>* quads[4] = {&black_contours[black_order[0].first], &black_contours[black_order[1].first],
                                         &white_contours[white_order[0].first], &white_contours[white_order[1].first]};
        std::vector<Point2f> quads_approx[4];
        Point2f quad_corners[4];
        for(int k = 0; k < 4; k++)
        {
            std::vector<Point2f> temp;
            for(size_t j = 0; j < quads[k]->size(); j++) temp.push_back((*quads[k])[j]);
            approxPolyDP(Mat(temp), quads_approx[k], 0.5, true);
    }
    
    #undef cv_hal_gemm32f
#define cv_hal_gemm32f lapack_gemm32f
#undef cv_hal_gemm64f
#define cv_hal_gemm64f lapack_gemm64f
#undef cv_hal_gemm32fc
#define cv_hal_gemm32fc lapack_gemm32fc
#undef cv_hal_gemm64fc
#define cv_hal_gemm64fc lapack_gemm64fc
    
        static void* WinGetProcAddress(const char* name)
    {
        static HMODULE opencl_module = NULL;
        if (!opencl_module)
        {
            opencl_module = GetModuleHandleA('clAmdFft.Runtime.dll');
            if (!opencl_module)
            {
                opencl_module = LoadLibraryA('clAmdFft.Runtime.dll');
                if (!opencl_module)
                    return NULL;
            }
        }
        return (void*)GetProcAddress(opencl_module, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) WinGetProcAddress(name)
#endif // _WIN32
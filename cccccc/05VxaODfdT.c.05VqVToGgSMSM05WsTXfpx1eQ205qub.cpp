
        
          bool isEqual(const SelfType& other) const;
    
    #include <google/protobuf/pyext/descriptor_database.h>
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* generator_context,
                string* error) const;
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void RepeatedPrimitiveFieldGenerator::WriteHash(io::Printer* printer) {
  printer->Print(
    variables_,
    'hash ^= $name$_.GetHashCode();\n');
}
void RepeatedPrimitiveFieldGenerator::WriteEquals(io::Printer* printer) {
  printer->Print(
    variables_,
    'if(!$name$_.Equals(other.$name$_)) return false;\n');
}
void RepeatedPrimitiveFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(variables_,
    'PrintField(\'$descriptor_name$\', $name$_, writer);\n');
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    
    #include <string>
#include <google/protobuf/compiler/code_generator.h>
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(GeneratorFactory);
};
    
        cv::Mat eigenval_r, eigenval_i, eigenvec_r, eigenvec_i;
    compute_eigenvec(Mtilde, eigenval_r, eigenval_i, eigenvec_r, eigenvec_i);
    
    #ifndef CODEGEN_FUNCPTR
    #define CODEGEN_REMOVE_FUNCPTR
    #if defined(_WIN32)
        #define CODEGEN_FUNCPTR APIENTRY
    #else
        #define CODEGEN_FUNCPTR
    #endif
#endif // CODEGEN_FUNCPTR
    
    int lapack_LU32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, int* info);
int lapack_LU64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, int* info);
int lapack_Cholesky32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, bool* info);
int lapack_Cholesky64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, bool* info);
int lapack_SVD32f(float* a, size_t a_step, float* w, float* u, size_t u_step, float* vt, size_t v_step, int m, int n, int flags);
int lapack_SVD64f(double* a, size_t a_step, double* w, double* u, size_t u_step, double* vt, size_t v_step, int m, int n, int flags);
int lapack_QR32f(float* src1, size_t src1_step, int m, int n, int k, float* src2, size_t src2_step, float* dst, int* info);
int lapack_QR64f(double* src1, size_t src1_step, int m, int n, int k, double* src2, size_t src2_step, double* dst, int* info);
int lapack_gemm32f(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64f(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm32fc(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64fc(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
    
    #if defined(__linux__)
    #include <dlfcn.h>
    #include <stdio.h>
    
    #define THDPStorage TH_CONCAT_3(THDP,Real,Storage)
#define THDPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THDPStorageClass TH_CONCAT_3(THDP,Real,StorageClass)
#define THDPStorage_(NAME) TH_CONCAT_4(THDP,Real,Storage_,NAME)
    
      masterCommandChannel->sendMessage(
    packMessage(Functions::tensorGesvd2, ru, rs, rv, ra, a, jobu[0]),
    THDState::s_current_worker
  );
    
    /* Destroys stream object. Destroy could be called from any thread, including
 * network thread, but is posted, so |stream| is valid until calling task is
 * complete.
 */
GRPC_SUPPORT_EXPORT
int bidirectional_stream_destroy(bidirectional_stream* stream);
    
    #include <grpc/support/log.h>
    
    
    {}  // namespace grpc_python_generator
    
    
    {  return 0;
}

    
    class UsageTimer {
 public:
  UsageTimer();
    }
    
    grpc::string DescribeServiceList(std::vector<grpc::string> service_list,
                                 grpc::protobuf::DescriptorPool& desc_pool) {
  std::stringstream result;
  for (auto it = service_list.begin(); it != service_list.end(); it++) {
    auto const& service = *it;
    const grpc::protobuf::ServiceDescriptor* service_desc =
        desc_pool.FindServiceByName(service);
    if (service_desc != nullptr) {
      result << DescribeService(service_desc);
    }
  }
  return result.str();
}
    
    namespace grpc {
    }
    
    int64_t Timer::GetCurrentTimeMicros() {
  timeval tv;
  gettimeofday(&tv, 0);
  return to_usec(tv);
}
    
    
    {
    {    (void)memset(&utbuf, 0, sizeof(utbuf));
    utbuf.actime = sb->st_atime;
    utbuf.modtime = sb->st_mtime;
    (void) utime(name, &utbuf); /* don't care if loses */
#endif
  }
}
    
      LdSSwitchData data;
  data.numCases   = numCases;
  data.cases      = &cases[0];
  data.defaultSk  = SrcKey{curSrcKey(env),
                           bcOff(env) + iv.strvec()[iv.size() - 1].dest};
  data.bcSPOff    = spOffBCFromFP(env);
    
      for (size_t f = 0; f < cg.targets.size(); f++) {
    if (cg.targets[f].samples == 0) continue;
    clusters.emplace_back(f, cg.targets[f]);
    sortedFuncs.push_back(f);
  }
    
    #endif
    
      static FILE *LightPopenImpl(const char *cmd, const char *type,
                              const char *cwd);
  static FILE *HeavyPopenImpl(const char *cmd, const char *type,
                              const char *cwd);
    
    #include 'hphp/runtime/ext/curl/curl-share-resource.h'
#include 'hphp/runtime/ext/curl/curl-resource.h'
#include 'hphp/runtime/base/builtin-functions.h'
    
    
    {
    {  // Save NUMA policy for the current thread.
  void save() {
    needRestore = !get_mempolicy(&oldPolicy, &oldMask, sizeof(oldMask),
                                 nullptr, 0);
  }
  ~SavedNumaPolicy() {
    if (needRestore) {
      set_mempolicy(oldPolicy, &oldMask, sizeof(oldMask));
    }
  }
};
}
#endif
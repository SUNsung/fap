
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      // Abort and close all existing sessions, disconnecting their resources from
  // future sessions.
  //
  // Reset() allows misbehaving or slow sessions to be aborted and closed, and
  // causes their resources eventually to be released.  Reset() does not wait
  // for the computations in old sessions to cease; it merely starts the
  // process of tearing them down.  However, if a new session is started after
  // a Reset(), the new session is isolated from changes that old sessions
  // (started prior to the Reset()) may continue to make to resources, provided
  // all those resources are in containers listed in 'containers'.
  //
  // Old sessions may continue to have side-effects on resources not in
  // containers listed in 'containers', and thus may affect future
  // sessions' results in ways that are hard to predict.  Thus, if well-defined
  // behavior is desired, is it recommended that all containers be listed in
  // 'containers'.
  //
  // If the 'containers' vector is empty, the default container is assumed.
  // If the 'containers' vector is non-empty, the default container should be
  // listed explicitly.
  //
  // Sessions that support resource containers should override this function.
  virtual Status Reset(const SessionOptions& options,
                       const std::vector<string>& containers) {
    return errors::Unimplemented('Reset()');
  }
    
      double PrimalLossDerivative(const double wx, const double label,
                              const double example_weight) const final {
    if (label * wx >= 1) {
      return 0;
    }
    if (label * wx <= 1 - gamma) {
      return -label;
    }
    return (wx - label) / gamma;
  }
    
    /** scalar_sigmoid_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a sigmoid
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::sigmoid_fast_derivative()
  */
template <typename T>
struct scalar_sigmoid_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_sigmoid_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return (one - y) * y;
  }
    }
    
    
    {
    {}  // namespace port
}  // namespace tensorflow
    
    void SYCLDeviceContext::CopyCPUTensorToDevice(const Tensor *cpu_tensor,
                                              Device *device,
                                              Tensor *device_tensor,
                                              StatusCallback done) const {
  const int64 total_bytes = cpu_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(cpu_tensor);
    void *dst_ptr = DMAHelper::base(device_tensor);
    switch (cpu_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    
    {}  // namespace tensorflow

    
    /*
 * Deprecated in favor of EncodeAudioOpV2.
 */
class EncodeAudioOp : public OpKernel {
 public:
  explicit EncodeAudioOp(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context, context->GetAttr('file_format', &file_format_));
    file_format_ = str_util::Lowercase(file_format_);
    OP_REQUIRES(context, file_format_ == 'wav',
                errors::InvalidArgument('file_format arg must be \'wav\'.'));
    }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    namespace swift {
    }
    
    uint64_t swift::unicode::getUTF16Length(StringRef Str) {
  uint64_t Length;
  // Transcode the string to UTF-16 to get its length.
  SmallVector<llvm::UTF16, 128> buffer(Str.size() + 1); // +1 for ending nulls.
  const llvm::UTF8 *fromPtr = (const llvm::UTF8 *) Str.data();
  llvm::UTF16 *toPtr = &buffer[0];
  llvm::ConversionResult Result =
    ConvertUTF8toUTF16(&fromPtr, fromPtr + Str.size(),
                       &toPtr, toPtr + Str.size(),
                       llvm::strictConversion);
  assert(Result == llvm::conversionOK &&
         'UTF-8 encoded string cannot be converted into UTF-16 encoding');
  (void)Result;
    }
    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
    /// Create a canonicalized substitution list from subs.
/// subs is the substitution list to be canonicalized.
/// canSubs is an out-parameter, which is used to store the results in case
/// the list of substitutions was not canonical.
/// The function returns a list of canonicalized substitutions.
/// If the substitution list subs was canonical already, it will be returned and
/// canSubs out-parameter will be empty.
/// If something had to be canonicalized, then the canSubs out-parameter will be
/// populated and the returned SubstitutionList would refer to canSubs storage.
SubstitutionList
getCanonicalSubstitutionList(SubstitutionList subs,
                             SmallVectorImpl<Substitution> &canSubs);
    
      void setCodeCompletionPoint(unsigned BufferID, unsigned Offset) {
    assert(BufferID != 0U && 'Buffer should be valid');
    }
    
      /// Get the canonicalized substitution. If wasCanonical is not nullptr,
  /// store there whether the current substitution was canonical already.
  Substitution getCanonicalSubstitution(bool *wasCanonical = nullptr) const;
    
    #include 'swift/AST/ASTContext.h'
#include 'swift/AST/GenericEnvironment.h'
#include 'swift/AST/Module.h'
#include 'swift/AST/ProtocolConformance.h'
#include 'swift/AST/SubstitutionMap.h'
#include 'swift/AST/Types.h'
#include 'llvm/ADT/DenseMap.h'
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace cpp {
    }
    }
    }
    }
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_repeated_primitive_field.h>
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(JavaGenerator);
};
    
            int black_thresh = 0, white_thresh = 0;
        segment_hist_max(hist, black_thresh, white_thresh);
    
    // Like ASSERT_DEATH, but continues on to successive tests in the
// test case, if any:
# define EXPECT_DEATH(statement, regex) \
    EXPECT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
    #endif  // GTEST_HAS_PARAM_TEST
    
    
    {
    {  if (count > 0) {
    *os << ' ';
  }
  *os << '}';
}
    
      // Gets the number of disabled tests.
  int disabled_test_count() const;
    
      // Returns true if pathname describes a directory in the file-system
  // that exists.
  bool DirectoryExists() const;
    
    #if GTEST_HAS_EXCEPTIONS
# include <stdexcept>
#endif
    
    #if GTEST_OS_WINDOWS_MOBILE
  // Windows CE does not have the 'ANSI' versions of Win32 APIs. To be
  // able to pass strings to Win32 APIs on CE we need to convert them
  // to 'Unicode', UTF-16.
    
      tuple& operator=(const tuple& t) { return CopyFrom(t); }
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
    #include 'hphp/runtime/vm/jit/abi.h'
#include 'hphp/runtime/vm/jit/arg-group.h'
#include 'hphp/runtime/vm/jit/fixup.h'
#include 'hphp/runtime/vm/jit/phys-reg-saver.h'
#include 'hphp/runtime/vm/jit/vasm-gen.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-reg.h'
    
    #include 'hphp/runtime/vm/jit/vasm-unit.h'
    
    
    {  // Finished copying the file; now load it.
  auto const handle = dlopen(tmp_filename, RTLD_NOW);
  if (!handle) {
    Logger::Error('dlopen_embedded_data: dlopen failed: %s', dlerror());
    return nullptr;
  }
  return handle;
}
    
    #ifndef incl_HPHP_JIT_TC_PROLOGUE_H_
#define incl_HPHP_JIT_TC_PROLOGUE_H_
    
    CURLcode CurlShareResource::attachToCurlHandle(CURL *cp) {
  return curl_easy_setopt(cp, CURLOPT_SHARE, m_share);
}
    
    #include <osquery/core.h>
#include <osquery/flags.h>
#include <osquery/query.h>
#include <osquery/registry.h>
    
    #pragma once
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
    class TLSConfigPlugin;
    
    std::string platformStrerr(int errnum) {
  return ::strerror(errnum);
}
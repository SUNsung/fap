
        
        
    
    #include <Python.h>
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ImmutableExtensionLiteGenerator);
};
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
    // Author: liujisi@google.com (Pherl Liu)
    
    #endif  // GRPC_TEST_CPP_UTIL_BENCHMARK_CONFIG_H

    
    /* Returns true if the |stream| was successfully started and is now done
 * (succeeded, canceled, or failed).
 * Returns false if the |stream| stream is not yet started or is in progress.
 */
GRPC_SUPPORT_EXPORT
bool bidirectional_stream_is_done(bidirectional_stream* stream);
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list);
    
    // Data pertaining to configuration of the generator with respect to anything
// that may be used internally at Google.
struct GeneratorConfiguration {
  GeneratorConfiguration();
  grpc::string grpc_package_root;
  // TODO(https://github.com/grpc/grpc/issues/8622): Drop this.
  grpc::string beta_package_root;
  // TODO(https://github.com/google/protobuf/issues/888): Drop this.
  grpc::string import_prefix;
};
    
    #include 'src/compiler/python_generator.h'
#include 'src/compiler/schema_interface.h'
    
    #include 'test/cpp/interop/server_helper.h'
#include 'test/cpp/util/test_config.h'
    
    
    { private:
  std::map<string, std::shared_ptr<QpsGauge>> qps_gauges_;
  std::mutex mu_;
};
    
    
    {  grpc::string package = service->full_name();
  size_t pos = package.rfind('.' + service->name());
  if (pos != grpc::string::npos) {
    package.erase(pos);
    result.append('package: ' + package + ';\n');
  }
  result.append('service ' + service->name() + ' {\n');
  for (int i = 0; i < service->method_count(); ++i) {
    result.append(DescribeMethod(service->method(i)));
  }
  result.append('}\n\n');
  return result;
}
    
      // Proto2 Python
  google::protobuf::compiler::python::Generator py_generator;
  cli.RegisterGenerator('--python_out', &py_generator,
                        'Generate Python source file.');
    
    template<typename To, typename From> To checked_convert(From f, const char* name) {
  if (overflows<To, From>(f)) {
    std::string msg = 'value cannot be converted to type ';
    msg += name;
    msg += ' without overflow: ';
    msg += std::to_string(f);
    throw std::domain_error(std::move(msg));
  }
  return convert<To, From>(f);
}
    
    int64_t stride(const Tensor& self, int64_t dim) {
  // false is passed to maybe_wrap_dim so behavior is identical to array access (but with wrapping)
  dim = maybe_wrap_dim(dim, self.dim(), false);
  return self.strides()[dim];
}
    
    std::size_t ${Storage}::elementSize() const {
  return sizeof(${ScalarType});
}
    
    IntList ${Tensor}::sizes() const {
  int64_t d = ${THTensor_nDimension};
  if (d != 0) {
    // note: this will return '{}' for a scalar because dim() will return 0 in that case.
    return IntList(reinterpret_cast<int64_t*>(tensor->size),dim());
  } else {
    return IntList(kEmptySizes);
  }
}
    
      // NOTE: this function needs to be thread safe
  std::shared_ptr<buffer_type> createBuffer(std::size_t bytes, DeviceType device) const {
    if (device == DeviceType::CPU) {
      return std::shared_ptr<buffer_type>(new char[bytes],
                                          std::default_delete<char[]>());
#ifdef WITH_CUDA
    } else if (device == DeviceType::CUDA) {
      buffer_type *buf;
      THCudaCheck(THCudaMalloc(THDGetCudaState(), (void**)&buf, bytes));
      return std::shared_ptr<buffer_type>(buf, [](char* ptr) { THCudaFree(THDGetCudaState(), ptr); });
#endif
    } else {
      throw std::runtime_error('unsupported device in GlooCache::createBuffer');
    }
  }
    
      auto ilen = input_size[0];
  auto batchSize = input_size[1];
  auto inputPlanes = input_size[2];
  auto outputPlanes = weight_size[2];
  auto kw = weight.sizes()[0];
  auto olen = input_size[0] - kw + 1 + pad * 2;
  int real_pad = (olen - ilen + kw - 1) / 2;
    
    #undef THHostTensor
#undef THHostTensor_
#undef THHostStorage
#undef THHostStorage_

    
    #include 'wakeuplock.h'
#include 'assert/__assert.h'
#include 'xlogger/xlogger.h'
    
    #include 'socket/unix_socket.h'
#include 'ptrbuffer.h'
#include 'adler32.h'
#include 'assert/__assert.h'
    
    #ifndef COMM_COMM_FREQUENCY_LIMIT_H_
#define COMM_COMM_FREQUENCY_LIMIT_H_
    
    
    {  private:
    TServicesMap m_services;
    TServicesMap m_publicservices;
    std::vector<ServiceBase*> m_releasevec;
};
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    struct ExternalFunctions {
  // Initialize function pointers. Functions that are not available will be set
  // to nullptr.  Do not call this constructor  before ``main()`` has been
  // entered.
  ExternalFunctions();
    }
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
    
    int DuplicateFile(int Fd);
    
      HANDLE FileHandle(
      CreateFileA(Path.c_str(), 0, FILE_SHARE_READ, NULL, OPEN_EXISTING,
                  FILE_FLAG_BACKUP_SEMANTICS, 0));
    
    // Inner process. May crash if the target crashes.
void Fuzzer::CrashResistantMergeInternalStep(const std::string &CFPath) {
  Printf('MERGE-INNER: using the control file '%s'\n', CFPath.c_str());
  Merger M;
  std::ifstream IF(CFPath);
  M.ParseOrExit(IF, false);
  IF.close();
  if (!M.LastFailure.empty())
    Printf('MERGE-INNER: '%s' caused a failure at the previous merge step\n',
           M.LastFailure.c_str());
    }
    
    struct Merger {
  std::vector<MergeFileInfo> Files;
  size_t NumFilesInFirstCorpus = 0;
  size_t FirstNotProcessedFile = 0;
  std::string LastFailure;
    }
    
    
    {	// Append length in the last 8 bytes
	sha1_addUncounted(s, 0); // We're only using 32 bit lengths
	sha1_addUncounted(s, 0); // But SHA-1 supports 64 bit lengths
	sha1_addUncounted(s, 0); // So zero pad the top bits
	sha1_addUncounted(s, s->byteCount >> 29); // Shifting to multiply by 8
	sha1_addUncounted(s, s->byteCount >> 21); // as SHA-1 supports bitstreams as well as
	sha1_addUncounted(s, s->byteCount >> 13); // byte.
	sha1_addUncounted(s, s->byteCount >> 5);
	sha1_addUncounted(s, s->byteCount << 3);
}
    
    __attribute__((visibility('default')))
void __sanitizer_cov_trace_pc_guard_init(uint32_t *Start, uint32_t *Stop) {
  fuzzer::TPC.HandleInit(Start, Stop);
}
    
    #include 'FuzzerUtil.h'
#include 'FuzzerIO.h'
#include 'FuzzerInternal.h'
#include <cassert>
#include <chrono>
#include <cstring>
#include <errno.h>
#include <signal.h>
#include <sstream>
#include <stdio.h>
#include <sys/types.h>
#include <thread>
    
    #include 'FuzzerIO.h'
#include <mutex>
#include <signal.h>
#include <spawn.h>
#include <sys/wait.h>
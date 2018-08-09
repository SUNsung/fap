
        
        static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* generator_context,
                string* error) const;
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_GENERATOR_FACTORY_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_GENERATOR_FACTORY_H__
    
    CV_EXPORTS Mat NormalizePixels(const Mat& imagePoints, const IntrinsicParams& param);
    
    #if 0
#include '_modelest.h'
    
                template<typename T>
            static __device__ __forceinline__ T atomicInc(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count;
                unsigned int tag = threadIdx.x << ( (sizeof(unsigned int) << 3) - 5U);
                do
                {
                    count = *address & TAG_MASK;
                    count = tag | (count + 1);
                    *address = count;
                } while (*address != count);
    }
    
    
    {} // namespace detail
    
        Node* next() {
      return next_;
    }
    
    /*
 * A QuantileEstimator that keeps values for nWindows * windowDuration (see
 * constructor). Values are buffered for windowDuration.
 */
template <typename ClockT = std::chrono::steady_clock>
class SlidingWindowQuantileEstimator {
 public:
  using TimePoint = typename ClockT::time_point;
    }
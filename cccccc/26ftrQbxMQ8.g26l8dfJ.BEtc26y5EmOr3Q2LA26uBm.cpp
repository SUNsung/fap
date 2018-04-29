
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    namespace tensorflow {
    }
    
    
    {
    {}  // namespace io
}  // namespace tensorflow
    
    #include 'tensorflow/core/platform/platform.h'
    
    #include 'tensorflow/core/lib/strings/strcat.h'
    
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
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // From the zlib manual (http://www.zlib.net/manual.html):
  // The mem_level parameter specifies how much memory should be allocated for
  // the internal compression state. mem_level=1 uses minimum memory but is slow
  // and reduces compression ratio; mem_level=9 uses maximum memory for optimal
  // speed. The default value is 8.
  int8 mem_level = 9;
    
            template<int CTA_SIZE>
        static __forceinline__ __device__ int Ballot(int predicate)
        {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ >= 200)
            return __ballot(predicate);
#else
            __shared__ volatile int cta_buffer[CTA_SIZE];
    }
    
            // Core Extension: ARB_texture_compression_rgtc
        COMPRESSED_RED_RGTC1             = 0x8DBB,
        COMPRESSED_SIGNED_RED_RGTC1      = 0x8DBC,
        COMPRESSED_RG_RGTC2              = 0x8DBD,
        COMPRESSED_SIGNED_RG_RGTC2       = 0x8DBE,
    
    struct DynamicFnEntry
{
    const char* fnName; // 'clCreateContext'
    void** ppFn; // &clCreateContext_pfn
};
    
    #endif

    
    #include <THPP/tensors/THTensor.hpp>
    
    void* ${Storage}::unsafeGetTH(bool retain) const {
  if (retain) {
    ${THStorage}_retain(${state,} storage);
  }
  return storage;
}
    
      auto ilen = input_size[0];
  auto batchSize = input_size[1];
  auto inputPlanes = input_size[2];
  auto outputPlanes = weight_size[2];
  auto kw = weight.sizes()[0];
  auto olen = input_size[0] - kw + 1 + pad * 2;
  int real_pad = (olen - ilen + kw - 1) / 2;
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHCudaDoubleTensor(THCudaDoubleTensor *tensor) {
  return at::getType(at::Backend::CUDA, at::ScalarType::Double).unsafeTensorFromTH((void*)tensor, true);
}
    
    #undef THHostTensor
#undef THHostTensor_
#undef THHostStorage
#undef THHostStorage_

    
    // TODO(t10737667): The implement a tool that parse the stack trace and
// symbolicate it
ostream& operator<<(ostream& out, const vector<StackTraceElement>& trace) {
  IosFlagsSaver flags{out};
    }
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
        method(setMargin);
    method(setMarginPercent);
    method(setMarginAuto);
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    private:
  void initialize() {
    int ret = pthread_key_create(&m_key, m_cleanup);
    if (ret != 0) {
      const char *msg = '(unknown error)';
      switch (ret) {
      case EAGAIN:
        msg = 'PTHREAD_KEYS_MAX (1024) is exceeded';
        break;
      case ENOMEM:
        msg = 'Out-of-memory';
        break;
      }
      (void) msg;
      FBASSERTMSGF(0, 'pthread_key_create failed: %d %s', ret, msg);
    }
  }

        
        // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    #endif //CONTENT_NW_SRC_API_EVENT_EVENT_H_

    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
     protected:
  ~NwAppClearAppCacheFunction() override;
    
    bool NwObjCallObjectMethodFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
      // This random number generator facade hides boost and CUDA rng
  // implementation from one another (for cross-platform compatibility).
  class RNG {
   public:
    RNG();
    explicit RNG(unsigned int seed);
    explicit RNG(const RNG&);
    RNG& operator=(const RNG&);
    void* generator();
   private:
    class Generator;
    shared_ptr<Generator> generator_;
  };
    
    
/// @brief Fills a Blob with constant values @f$ x = 0 @f$.
template <typename Dtype>
class ConstantFiller : public Filler<Dtype> {
 public:
  explicit ConstantFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    const int count = blob->count();
    const Dtype value = this->filler_param_.value();
    CHECK(count);
    for (int i = 0; i < count; ++i) {
      data[i] = value;
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    /**
 * @brief Computes @f$ y = |x| @f$
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class AbsValLayer : public NeuronLayer<Dtype> {
 public:
  explicit AbsValLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #ifndef CPU_ONLY
  void forward_gpu_gemm(const Dtype* col_input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_gpu_bias(Dtype* output, const Dtype* bias);
  void backward_gpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* col_output);
  void weight_gpu_gemm(const Dtype* col_input, const Dtype* output, Dtype*
      weights);
  void backward_gpu_bias(Dtype* bias, const Dtype* input);
#endif
    
    template <typename Dtype>
class BasePrefetchingDataLayer :
    public BaseDataLayer<Dtype>, public InternalThread {
 public:
  explicit BasePrefetchingDataLayer(const LayerParameter& param);
  // LayerSetUp: implements common data layer setup functionality, and calls
  // DataLayerSetUp to do special data layer setup for individual layer types.
  // This method may not be overridden.
  void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {}  // namespace caffe
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
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
    
        static BOOST_FORCEINLINE storage_type fetch_and(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        base_type::fence_before(order);
        int backup;
        __asm
        {
            mov backup, ebx
            xor edx, edx
            mov edi, storage
            movzx ebx, v
            movzx eax, byte ptr [edi]
            align 16
        again:
            mov dl, al
            and dl, bl
            lock cmpxchg byte ptr [edi], dl
            jne again
            mov v, al
            mov ebx, backup
        };
        base_type::fence_after(order);
        return v;
    }
    
    BOOST_FORCEINLINE void pause() BOOST_NOEXCEPT
{
#if defined(_MSC_VER) && (defined(_M_AMD64) || defined(_M_IX86))
    _mm_pause();
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
    __asm__ __volatile__('pause;');
#endif
}
    
        BOOST_FORCEINLINE bool operator== (buffer_storage const& that) const BOOST_NOEXCEPT
    {
        return BOOST_ATOMIC_DETAIL_MEMCMP(data, that.data, Size) == 0;
    }
    
    #if BOOST_ATOMIC_SIGNAL_FENCE > 0
BOOST_FORCEINLINE void atomic_signal_fence(memory_order order) BOOST_NOEXCEPT
{
    detail::signal_fence(order);
}
#else
BOOST_FORCEINLINE void atomic_signal_fence(memory_order) BOOST_NOEXCEPT
{
    detail::lockpool::signal_fence();
}
#endif
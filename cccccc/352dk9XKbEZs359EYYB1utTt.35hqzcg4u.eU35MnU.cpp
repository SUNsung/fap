
        
        
    {  DISALLOW_COPY_AND_ASSIGN(UvTaskRunner);
};
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #endif  // ATOM_BROWSER_API_ATOM_API_NET_H_

    
    #include 'atom/browser/api/trackable_object.h'
#include 'atom/browser/lib/power_observer.h'
#include 'base/compiler_specific.h'
#include 'native_mate/handle.h'
#include 'ui/base/idle/idle.h'
    
    class Tray : public mate::TrackableObject<Tray>, public TrayIconObserver {
 public:
  static mate::WrappableBase* New(mate::Handle<NativeImage> image,
                                  mate::Arguments* args);
    }
    
    #include 'atom/browser/api/save_page_handler.h'
    
    #include 'content/public/browser/quota_permission_context.h'
#include 'content/public/common/storage_quota_params.h'
    
    // --------------------------- Typedefs ---------------------------
    
    
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
    #ifdef CAROTENE_NEON
    // this ugly contruction is needed to avoid:
    // /usr/lib/gcc/arm-linux-gnueabihf/4.8/include/arm_neon.h:3581:59: error: argument must be a constant
    // return (int16x8_t)__builtin_neon_vshr_nv8hi (__a, __b, 1);
    
        void operator() (const typename VecTraits<s32>::vec64 & v_src0,
                     const typename VecTraits<s32>::vec64 & v_src1,
                     typename VecTraits<s32>::vec64 & v_dst) const
    {
        float32x2_t vs1 = vcvt_f32_s32(v_src0);
        float32x2_t vs2 = vcvt_f32_s32(v_src1);
    }
    
    #ifndef __ANDROID__
        for (; sj < roiw32; sj += 32, syj += 64, dj += 128)
        {
            internal::prefetch(srcy + syj);
            internal::prefetch(srcu + sj);
            internal::prefetch(srcv + sj);
    }
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin, size_t endMargin)
{
    ptrdiff_t p = _p + (ptrdiff_t)startMargin;
    size_t len = _len + startMargin + endMargin;
    if( (size_t)p < len )
        return _p;
    else if( borderType == BORDER_MODE_REPLICATE )
        p = p < 0 ? 0 : (ptrdiff_t)len - 1;
    else if( borderType == BORDER_MODE_REFLECT || borderType == BORDER_MODE_REFLECT101 )
    {
        s32 delta = borderType == BORDER_MODE_REFLECT101;
        if( len == 1 )
            return 0;
        do
        {
            if( p < 0 )
                p = -p - 1 + delta;
            else
                p = (ptrdiff_t)len - 1 - (p - (ptrdiff_t)len) - delta;
        }
        while( (size_t)p >= len );
    }
    else if( borderType == BORDER_MODE_WRAP )
    {
        if( p < 0 )
            p -= ((p-(ptrdiff_t)len+1)/(ptrdiff_t)len)*(ptrdiff_t)len;
        if( p >= (ptrdiff_t)len )
            p %= (ptrdiff_t)len;
    }
    else if( borderType == BORDER_MODE_CONSTANT )
        p = -1;
    else
        internal::assertSupportedConfiguration(false);
    return p - (ptrdiff_t)startMargin;
}
    
    #define CVTS_FUNC(T1, T2, SIMD_SIZE, CVTINIT, CVTROW)                            \
    void convertScale(const Size2D &,                                            \
                      const T1 *, ptrdiff_t,                                     \
                      T2 *, ptrdiff_t,                                           \
                      f64, f64)                                                  \
    {                                                                            \
        internal::assertSupportedConfiguration();                                \
    }
    
    
    {
    {
    {            prevx[2] = currx[2];
            currx[2] = nextx[2];
        }
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)border;
    (void)borderValue;
    (void)ksize;
    (void)kernelBase;
    (void)scale;
#endif
}
    
    
    {    return 0;
#endif
}
    
        for(size_t j = 0; j < size.height; ++j)
    {
        const T *  src = internal::getRowPtr( srcBase,  srcStride, j);
        const T * rng1 = internal::getRowPtr(rng1Base, rng1Stride, j);
        const T * rng2 = internal::getRowPtr(rng2Base, rng2Stride, j);
             u8 *  dst = internal::getRowPtr( dstBase,  dstStride, j);
        size_t i = 0;
        for( ; i < width; i += 32/sizeof(T) )
        {
            internal::prefetch(src + i);
            internal::prefetch(rng1 + i);
            internal::prefetch(rng2 + i);
    }
    }
    
      const Dtype* cpu_data() const;
  void set_cpu_data(Dtype* data);
  const int* gpu_shape() const;
  const Dtype* gpu_data() const;
  void set_gpu_data(Dtype* data);
  const Dtype* cpu_diff() const;
  const Dtype* gpu_diff() const;
  Dtype* mutable_cpu_data();
  Dtype* mutable_gpu_data();
  Dtype* mutable_cpu_diff();
  Dtype* mutable_gpu_diff();
  void Update();
  void FromProto(const BlobProto& proto, bool reshape = true);
  void ToProto(BlobProto* proto, bool write_diff = false) const;
    
    /**
 * @brief Applies common transformations to the input data, such as
 * scaling, mirroring, substracting the image mean...
 */
template <typename Dtype>
class DataTransformer {
 public:
  explicit DataTransformer(const TransformationParameter& param, Phase phase);
  virtual ~DataTransformer() {}
    }
    
    namespace caffe {
    }
    
    #endif  // CAFFE_ABSVAL_LAYER_HPP_

    
    #endif  // CAFFE_CROP_LAYER_HPP_

    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    #include 'caffe/layers/lrn_layer.hpp'
#include 'caffe/layers/power_layer.hpp'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    void *AlignTo8(void *from) {
  uint8_t *val = reinterpret_cast<uint8_t*>(from);
  std::size_t remainder = reinterpret_cast<std::size_t>(val) & 7;
  if (!remainder) return val;
  return val + 8 - remainder;
}
    
    #include 'lm/lm_exception.hh'
#include 'util/file.hh'
#include 'util/file_piece.hh'
    
        // Reading a binary file:
    // Takes ownership of fd
    void InitializeBinary(int fd, ModelType model_type, unsigned int search_version, Parameters &params);
    // Used to read parts of the file to update the config object before figuring out full size.
    void ReadForConfig(void *to, std::size_t amount, uint64_t offset_excluding_header) const;
    // Actually load the binary file and return a pointer to the beginning of the search area.
    void *LoadBinary(std::size_t size);
    
    // This compiles down nicely.
inline bool HasExtension(const float &backoff) {
  typedef union { float f; uint32_t i; } UnionValue;
  UnionValue compare, interpret;
  compare.f = kNoExtensionBackoff;
  interpret.f = backoff;
  return compare.i != interpret.i;
}
    
    namespace lm { namespace {
    }
    }
    
    
    {    const Payload &Value() const { return *reinterpret_cast<const Payload *>(end()); }
    Payload &Value() { return *reinterpret_cast<Payload *>(end()); }
};
    
    #include <sstream>
#include <cstring>
    
        void operator()(const std::string &from) {
      behind_ = util::ParseSize(from);
    }
    
    class SpecialVocab {
  public:
    SpecialVocab(WordIndex bos, WordIndex eos) : bos_(bos), eos_(eos) {}
    }
    
    #endif // LM_INTERPOLATE_BACKOFF_MATRIX_H

    
    /********************************************************************************** 
 * 
 * Design a data structure that supports the following two operations:
 * 
 * void addWord(word)
 * bool search(word)
 * 
 * search(word) can search a literal word or a regular expression string containing only letters `a-z` or `.`
 * A `.` means it can represent any one letter.
 * 
 * For example:
 * 
 *   addWord('bad')
 *   addWord('dad')
 *   addWord('mad')
 *   search('pad') -> false
 *   search('bad') -> true
 *   search('.ad') -> true
 *   search('b..') -> true
 * 
 * Note:
 * You may assume that all words are consist of lowercase letters a-z.
 * 
 * click to show hint.
 * 
 * You should be familiar with how a Trie works. If not, please work on this problem: Implement Trie (Prefix Tree) first.
 * 
 *               
 **********************************************************************************/
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
    
    
    {        }

        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    template <typename T>
class ArgBaseOpModel : public SingleOpModel {
 public:
  ArgBaseOpModel(std::initializer_list<int> input_shape, TensorType input_type,
                 TensorType output_type, TensorType index_output_type) {
    input_ = AddInput(input_type);
    axis_ = AddInput(TensorType_INT32);
    output_ = AddOutput(output_type);
  }
    }
    
    namespace tensorflow {
    }
    
    
    {  std::unique_ptr<PartialRunState> partial_run = MakeUnique<PartialRunState>();
  partial_run->cancellation_manager = MakeUnique<CancellationManager>();
  *cancellation_manager = partial_run->cancellation_manager.get();
  step_id_to_partial_run_[step_id] = std::move(partial_run);
  return true;
}
    
    #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_HLO_CONSTANT_FOLDING_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_HLO_CONSTANT_FOLDING_H_
    
      Status ReadLocked(string* key, string* value, bool* produced,
                    bool* at_end) override {
    *key = strings::StrCat(current_work(), ':', offset_);
    Status status = reader_->ReadRecord(&offset_, value);
    if (errors::IsOutOfRange(status)) {
      *at_end = true;
      return Status::OK();
    }
    if (!status.ok()) return status;
    *produced = true;
    return Status::OK();
  }
    
    The input audio has one row of the tensor for each channel in the audio file.
Each channel contains audio samples starting at the beginning of the audio and
having `1/samples_per_second` time between them. The output file will contain
all of the audio channels contained in the tensor.
    
        NodeDef* add_node4 = graph_def.add_node();
    add_node4->set_name('add_node4');
    add_node4->set_op('Add');
    add_node4->add_input('add_node2');
    add_node4->add_input('add_node3');
    
    #include 'tensorflow/core/kernels/cwise_ops_common.h'
    
    class GlobalShortcut : public extensions::GlobalShortcutListener::Observer,
                       public mate::TrackableObject<GlobalShortcut> {
 public:
  static mate::Handle<GlobalShortcut> Create(v8::Isolate* isolate);
    }
    
    class UnresponsiveSuppressor {
 public:
  UnresponsiveSuppressor();
  ~UnresponsiveSuppressor();
    }
    
    
    {}  // namespace chrome
    
    #include 'chrome/browser/speech/tts_platform.h'
    
    // File name of the Pepper Flash plugin on different platforms.
extern const base::FilePath::CharType kPepperFlashPluginFilename[];
    
    
    { private:
  /// The guard for the current device.
  at::DeviceGuard device_guard_;
  /// The original streams that were active on all devices.
  std::vector<CUDAStream> original_streams_;
};
    
    void check_status(int32_t status) {
  AT_CHECK(
      static_cast<cudaError_t>(status) == cudaSuccess,
      'CUDA error (',
      static_cast<int32_t>(status),
      '): ',
      cudaGetErrorString(static_cast<cudaError_t>(status)));
}
    
    // Since ATen is separated into CPU build and CUDA build, we need a way to call
// these functions only when CUDA is loaded. We use CUDA hooks for this purpose
// (at cuda/detail/CUDAHooks.cpp), and call the hooked functions from the actual
// native function counterparts (at native/SpectralOps.cpp), i.e.,
// _cufft_get_plan_cache_max_size, _cufft_set_plan_cache_max_size
// _cufft_get_plan_cache_size, and _cufft_clear_plan_cache.
int64_t cufft_get_plan_cache_max_size_impl();
void cufft_set_plan_cache_max_size_impl(int64_t max_size);
int64_t cufft_get_plan_cache_size_impl();
void cufft_clear_plan_cache_impl();
    
      cudnnBatchNormMode_t mode;
  if (input->dim() == 2) {
    mode = CUDNN_BATCHNORM_PER_ACTIVATION;
  } else {
#if CUDNN_VERSION >= 7003
    mode = CUDNN_BATCHNORM_SPATIAL_PERSISTENT;
#else
    mode = CUDNN_BATCHNORM_SPATIAL;
#endif
  }
    
    public:
	Error connect_to_url(String p_url, PoolVector<String> p_protocols = PoolVector<String>(), bool gd_mp_api = false);
    
    
/* END */

    
      m_eob_run = 0;
    
            __inline long int float2int(float value)
        {
                return _mm_cvtss_si32(_mm_load_ss(&value));
        }
#elif (defined(_MSC_VER) && _MSC_VER >= 1400) && defined (_M_IX86)
        #include <math.h>
    
    /*The number of bits to output at a time.*/
# define EC_SYM_BITS   (8)
/*The total number of bits in each of the state registers.*/
# define EC_CODE_BITS  (32)
/*The maximum symbol value.*/
# define EC_SYM_MAX    ((1U<<EC_SYM_BITS)-1)
/*Bits to shift by to move a symbol into the high-order position.*/
# define EC_CODE_SHIFT (EC_CODE_BITS-EC_SYM_BITS-1)
/*Carry bit of the high-order range symbol.*/
# define EC_CODE_TOP   (((opus_uint32)1U)<<(EC_CODE_BITS-1))
/*Low-order bit of the high-order range symbol.*/
# define EC_CODE_BOT   (EC_CODE_TOP>>EC_SYM_BITS)
/*The number of bits available for the last, partial symbol in the code field.*/
# define EC_CODE_EXTRA ((EC_CODE_BITS-2)%EC_SYM_BITS+1)
#endif

    
    # if defined(OPUS_X86_MAY_HAVE_AVX)
#  define MAY_HAVE_AVX(name) name ## _avx
# else
#  define MAY_HAVE_AVX(name) name ## _c
# endif
    
    /* Useful Macros that can be adjusted to other platforms */
#define silk_memcpy(dest, src, size)        memcpy((dest), (src), (size))
#define silk_memset(dest, src, size)        memset((dest), (src), (size))
#define silk_memmove(dest, src, size)       memmove((dest), (src), (size))
    
    #include <boost/asio/detail/config.hpp>
    
    private:
  // The offset to the beginning of the unread data.
  size_type begin_offset_;
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    template <typename MutableBufferSequence>
class descriptor_read_op_base : public reactor_op
{
public:
  descriptor_read_op_base(int descriptor,
      const MutableBufferSequence& buffers, func_type complete_func)
    : reactor_op(&descriptor_read_op_base::do_perform, complete_func),
      descriptor_(descriptor),
      buffers_(buffers)
  {
  }
    }
    
    #define BOOST_ASIO_RESOLVE_HANDLER_CHECK( \
    handler_type, handler, iter_type) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code, iter_type)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::two_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0), \
          static_cast<const iter_type*>(0))) == 1, \
      'ResolveHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>(), \
            boost::asio::detail::lvref<const iter_type>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
    #if defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
# include <boost/asio/detail/socket_types.hpp>
#endif // defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
    
    #endif // defined(BOOST_ASIO_WINDOWS_RUNTIME)
    
      void Reset(size_t pos) {
    pos_ = pos;
    val_ = 0;
    bits_left_ = 0;
    next_marker_pos_ = len_ - 2;
    FillBitWindow();
  }
    
    std::string OutputImage::FrameTypeStr() const {
  char buf[128];
  int len = snprintf(buf, sizeof(buf), 'f%d%d%d%d%d%d',
                     component(0).factor_x(), component(0).factor_y(),
                     component(1).factor_x(), component(1).factor_y(),
                     component(2).factor_x(), component(2).factor_y());
  return std::string(buf, len);
}
    
    
    {
    {      if (sharpenmap[index]) {
        if (sharpen) yuv[channel][index] = sharpened[index];
      } else if (blurmap[index]) {
        if (blur) yuv[channel][index] = blurred[index];
      }
    }
  }
    
    static const int kCrToGreenTable[256] = {
  5990656,  5943854,  5897052,  5850250,  5803448,  5756646,  5709844,  5663042,
  5616240,  5569438,  5522636,  5475834,  5429032,  5382230,  5335428,  5288626,
  5241824,  5195022,  5148220,  5101418,  5054616,  5007814,  4961012,  4914210,
  4867408,  4820606,  4773804,  4727002,  4680200,  4633398,  4586596,  4539794,
  4492992,  4446190,  4399388,  4352586,  4305784,  4258982,  4212180,  4165378,
  4118576,  4071774,  4024972,  3978170,  3931368,  3884566,  3837764,  3790962,
  3744160,  3697358,  3650556,  3603754,  3556952,  3510150,  3463348,  3416546,
  3369744,  3322942,  3276140,  3229338,  3182536,  3135734,  3088932,  3042130,
  2995328,  2948526,  2901724,  2854922,  2808120,  2761318,  2714516,  2667714,
  2620912,  2574110,  2527308,  2480506,  2433704,  2386902,  2340100,  2293298,
  2246496,  2199694,  2152892,  2106090,  2059288,  2012486,  1965684,  1918882,
  1872080,  1825278,  1778476,  1731674,  1684872,  1638070,  1591268,  1544466,
  1497664,  1450862,  1404060,  1357258,  1310456,  1263654,  1216852,  1170050,
  1123248,  1076446,  1029644,   982842,   936040,   889238,   842436,   795634,
   748832,   702030,   655228,   608426,   561624,   514822,   468020,   421218,
   374416,   327614,   280812,   234010,   187208,   140406,    93604,    46802,
        0,   -46802,   -93604,  -140406,  -187208,  -234010,  -280812,  -327614,
  -374416,  -421218,  -468020,  -514822,  -561624,  -608426,  -655228,  -702030,
  -748832,  -795634,  -842436,  -889238,  -936040,  -982842, -1029644, -1076446,
 -1123248, -1170050, -1216852, -1263654, -1310456, -1357258, -1404060, -1450862,
 -1497664, -1544466, -1591268, -1638070, -1684872, -1731674, -1778476, -1825278,
 -1872080, -1918882, -1965684, -2012486, -2059288, -2106090, -2152892, -2199694,
 -2246496, -2293298, -2340100, -2386902, -2433704, -2480506, -2527308, -2574110,
 -2620912, -2667714, -2714516, -2761318, -2808120, -2854922, -2901724, -2948526,
 -2995328, -3042130, -3088932, -3135734, -3182536, -3229338, -3276140, -3322942,
 -3369744, -3416546, -3463348, -3510150, -3556952, -3603754, -3650556, -3697358,
 -3744160, -3790962, -3837764, -3884566, -3931368, -3978170, -4024972, -4071774,
 -4118576, -4165378, -4212180, -4258982, -4305784, -4352586, -4399388, -4446190,
 -4492992, -4539794, -4586596, -4633398, -4680200, -4727002, -4773804, -4820606,
 -4867408, -4914210, -4961012, -5007814, -5054616, -5101418, -5148220, -5195022,
 -5241824, -5288626, -5335428, -5382230, -5429032, -5475834, -5522636, -5569438,
 -5616240, -5663042, -5709844, -5756646, -5803448, -5850250, -5897052, -5943854,
};
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    namespace guetzli {
    }
    
    #include 'guetzli/gamma_correct.h'
    
    size_t HistogramEntropyCost(const JpegHistogram& histo,
                            const uint8_t depths[256]);
size_t HistogramHeaderCost(const JpegHistogram& histo);
    
      // Fill in root table.
  key = 0;
  idx = 0;
  for (len = 1; len <= kJpegHuffmanRootTableBits; ++len) {
    for (; count[len] > 0; --count[len]) {
      code.bits = len;
      code.value = symbols[idx++];
      reps = 1 << (kJpegHuffmanRootTableBits - len);
      while (reps--) {
        table[key++] = code;
      }
    }
  }
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
    
    namespace {
    }
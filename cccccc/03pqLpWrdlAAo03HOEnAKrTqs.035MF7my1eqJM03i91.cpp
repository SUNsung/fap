
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Calculate the Levenshtein Edit Distance between two contiguous
// sequences, s and t, of type T.
//
// The Levenshtein distance is a symmetric distance defined as the
// smallest number of insertions, deletions, and substitutions
// required to convert sequence s to t (and vice versa).
// Note, this distance does not consider transpositions.
//
// For more details and a reference implementation, see:
//   https://en.wikipedia.org/wiki/Levenshtein_distance
//
// This implementation has time complexity O(|s|*|t|)
// and space complexity O(min(|s|, |t|)), where
//   |x| := x.size()
//
// A simple call to LevenshteinDistance looks like:
//
//  int64 dist = LevenshteinDistance('hi', 'bye', std::equal_to<char>());
//
template <typename T, typename Cmp>
inline int64 LevenshteinDistance(const gtl::ArraySlice<T>& s,
                                 const gtl::ArraySlice<T>& t, const Cmp& cmp) {
  const int64 s_size = s.size();
  const int64 t_size = t.size();
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    TEST(ArgMaxOpTest, GetMaxArgInt) {
  ArgMaxOpModel<int32_t> model({1, 1, 1, 4}, TensorType_INT32, TensorType_INT32,
                               TensorType_INT32);
  model.PopulateTensor<int>(model.input(), {1, 9, 7, 3});
  // Currently only support the last dimension.
  model.PopulateTensor<int>(model.axis(), {3});
  model.Invoke();
    }
    
      double ComputePrimalLoss(const double wx, const double example_label,
                           const double example_weight) const final {
    const double y_wx = example_label * wx;
    if (y_wx >= 1) return 0;
    if (y_wx <= 1 - gamma) return (1 - y_wx - gamma / 2) * example_weight;
    return (1 - y_wx) * (1 - y_wx) * example_weight * 0.5 / gamma;
  }
    
      Status ReadLocked(string* key, string* value, bool* produced,
                    bool* at_end) override {
    Status status = input_buffer_->ReadLine(value);
    ++line_number_;
    if (status.ok()) {
      *key = strings::StrCat(current_work(), ':', line_number_);
      *produced = true;
      return status;
    }
    if (errors::IsOutOfRange(status)) {  // End of file, advance to the next.
      *at_end = true;
      return Status::OK();
    } else {  // Some other reading error
      return status;
    }
  }
    
    #include 'tensorflow/core/framework/register_types.h'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/kernels/cuda_device_array_gpu.h'
#include 'tensorflow/core/util/cuda_kernel_helper.h'
    
      CHECK(worker_name.size() < max_worker_name_length)
      << 'Specified worker name is too long.';
  snprintf(my_name, max_worker_name_length, worker_name.c_str());
  std::vector<char> worker_names(number_of_procs * max_worker_name_length);
  MPI_CHECK(MPI_Allgather(my_name, max_worker_name_length, MPI_CHAR,
                          &worker_names[0], max_worker_name_length, MPI_CHAR,
                          MPI_COMM_WORLD));
    
    
    {  delete db;
  delete [] pixels;
}
    
    #endif  // CAFFE_DATA_TRANSFORMER_HPP_

    
    
template <typename Dtype>
class LayerRegisterer {
 public:
  LayerRegisterer(const string& type,
                  shared_ptr<Layer<Dtype> > (*creator)(const LayerParameter&)) {
    // LOG(INFO) << 'Registering layer type: ' << type;
    LayerRegistry<Dtype>::AddCreator(type, creator);
  }
};
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/relu_layer.hpp'
    
    namespace caffe {
    }
    
    /**
 * @brief Convolve the input with a bank of learned filters, and (optionally)
 *        add biases, treating filters and convolution parameters in the
 *        opposite sense as ConvolutionLayer.
 *
 *   ConvolutionLayer computes each output value by dotting an input window with
 *   a filter; DeconvolutionLayer multiplies each input value by a filter
 *   elementwise, and sums over the resulting output windows. In other words,
 *   DeconvolutionLayer is ConvolutionLayer with the forward and backward passes
 *   reversed. DeconvolutionLayer reuses ConvolutionParameter for its
 *   parameters, but they take the opposite sense as in ConvolutionLayer (so
 *   padding is removed from the output rather than added to the input, and
 *   stride results in upsampling rather than downsampling).
 */
template <typename Dtype>
class DeconvolutionLayer : public BaseConvolutionLayer<Dtype> {
 public:
  explicit DeconvolutionLayer(const LayerParameter& param)
      : BaseConvolutionLayer<Dtype>(param) {}
    }
    
      virtual inline const char* type() const { return 'Embed'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    static int make_prefixes(struct ifaddrs* ifaddr, int family, int prefixlen) {
	char* prefix = NULL;
	if (family == AF_INET) {
		sockaddr_in* mask = new sockaddr_in;
		mask->sin_family = AF_INET;
		memset(&mask->sin_addr, 0, sizeof(in_addr));
		ifaddr->ifa_netmask = reinterpret_cast<sockaddr*>(mask);
		if (prefixlen > 32) {
			prefixlen = 32;
		}
		prefix = reinterpret_cast<char*>(&mask->sin_addr);
	} else if (family == AF_INET6) {
		sockaddr_in6* mask = new sockaddr_in6;
		mask->sin6_family = AF_INET6;
		memset(&mask->sin6_addr, 0, sizeof(in6_addr));
		ifaddr->ifa_netmask = reinterpret_cast<sockaddr*>(mask);
		if (prefixlen > 128) {
			prefixlen = 128;
		}
		prefix = reinterpret_cast<char*>(&mask->sin6_addr);
	} else {
		return -1;
	}
	for (int i = 0; i < (prefixlen / 8); i++) {
		*prefix++ = 0xFF;
	}
	char remainder = 0xff;
	remainder <<= (8 - prefixlen % 8);
	*prefix = remainder;
	return 0;
}
    
    PowerIphone::~PowerIphone() {
	// TODO Auto-generated destructor stub
}

    
    #include 'video_player.h'
#include 'scene/scene_string_names.h'
    
        inline int get_bytes_per_pixel() const { return m_dest_bytes_per_pixel; }
    inline int get_bytes_per_scan_line() const { return m_image_x_size * get_bytes_per_pixel(); }
    
    /*Note that we do not provide a macro for abs(), because it is provided as a
   library function, which we assume is translated into an intrinsic to avoid
   the function call overhead and then implemented in the smartest way for the
   target platform.
  With modern gcc (4.x), this is true: it uses cmov instructions if the
   architecture supports it and branchless bit-twiddling if it does not (the
   speed difference between the two approaches is not measurable).
  Interestingly, the bit-twiddling method was patented in 2000 (US 6,073,150)
   by Sun Microsystems, despite prior art dating back to at least 1996:
   http://web.archive.org/web/19961201174141/www.x86.org/ftp/articles/pentopt/PENTOPT.TXT
  On gcc 3.x, however, our assumption is not true, as abs() is translated to a
   conditional jump, which is horrible on deeply piplined architectures (e.g.,
   all consumer architectures for the past decade or more).
  Also be warned that -C*abs(x) where C is a constant is mis-optimized as
   abs(C*x) on every gcc release before 4.2.3.
  See bug http://gcc.gnu.org/bugzilla/show_bug.cgi?id=34130 */
    
    /*============================================================================
**      On Intel Pentium processors (especially PIII and probably P4), converting
**      from float to int is very slow. To meet the C specs, the code produced by
**      most C compilers targeting Pentium needs to change the FPU rounding mode
**      before the float to int conversion is performed.
**
**      Changing the FPU rounding mode causes the FPU pipeline to be flushed. It
**      is this flushing of the pipeline which is so slow.
**
**      Fortunately the ISO C99 specifications define the functions lrint, lrintf,
**      llrint and llrintf which fix this problem as a side effect.
**
**      On Unix-like systems, the configure process should have detected the
**      presence of these functions. If they weren't found we have to replace them
**      here with a standard C cast.
*/
    
    # if !defined(__OPTIMIZE__)
#  define OP_CVTEPI16_EPI32_M64(x) \
 (_mm_cvtepi16_epi32(_mm_loadl_epi64((__m128i *)(x))))
# else
#  define OP_CVTEPI16_EPI32_M64(x) \
 (_mm_cvtepi16_epi32(*(__m128i *)(x)))
# endif
    
    static OPUS_INLINE opus_int64 silk_SaveCount(){
    return(ops_count);
}
    
    #define silk_ADD_LSHIFT(a, b, shift)        ((a) + silk_LSHIFT((b), (shift)))               /* shift >= 0 */
#define silk_ADD_LSHIFT32(a, b, shift)      silk_ADD32((a), silk_LSHIFT32((b), (shift)))    /* shift >= 0 */
#define silk_ADD_LSHIFT_uint(a, b, shift)   ((a) + silk_LSHIFT_uint((b), (shift)))          /* shift >= 0 */
#define silk_ADD_RSHIFT(a, b, shift)        ((a) + silk_RSHIFT((b), (shift)))               /* shift >= 0 */
#define silk_ADD_RSHIFT32(a, b, shift)      silk_ADD32((a), silk_RSHIFT32((b), (shift)))    /* shift >= 0 */
#define silk_ADD_RSHIFT_uint(a, b, shift)   ((a) + silk_RSHIFT_uint((b), (shift)))          /* shift >= 0 */
#define silk_SUB_LSHIFT32(a, b, shift)      silk_SUB32((a), silk_LSHIFT32((b), (shift)))    /* shift >= 0 */
#define silk_SUB_RSHIFT32(a, b, shift)      silk_SUB32((a), silk_RSHIFT32((b), (shift)))    /* shift >= 0 */
    
    #undef silk_SMLAWW
static OPUS_INLINE opus_int32 silk_SMLAWW_armv4(opus_int32 a, opus_int32 b,
 opus_int32 c)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
    '#silk_SMLAWW\n\t'
    'smull %0, %1, %2, %3\n\t'
    : '=&r'(rd_lo), '=&r'(rd_hi)
    : '%r'(b), 'r'(c)
  );
  return a+(rd_hi<<16)+(rd_lo>>16);
}
#define silk_SMLAWW(a, b, c) (silk_SMLAWW_armv4(a, b, c))
    
    template<> inline
dnnError_t dnnSumCreate<double>(
    dnnPrimitive_t* pSum,
    dnnPrimitiveAttributes_t attributes,
    const size_t nSummands,
    dnnLayout_t layout,
    double* coefficients)
{
    return dnnSumCreate_F64(pSum, attributes, nSummands, layout, coefficients);
}
    
    
    {    cudaMemcpyAsync(cpuBuffer, gpuBuffer, numElements * elementSize, cudaMemcpyDeviceToHost, GetFetchStream()) || 'cudaMemcpyAsync failed';
}
    
    // Data Writer class
// interface for clients of the Data Writer
// mirrors the IDataWriter interface, except the Init method is private (use the constructor)
class DataWriter : public IDataWriter, protected Plugin
{
    IDataWriter* m_dataWriter; // writer
    }
    
        virtual void ForwardPass(const Values<ElemType>& inputs, Values<ElemType>& output) override;
    
    // This is the wrapper class that most users actually interact with.
// It allows for simple access to registering and instantiating
// singletons.  Create instances of this class in the global scope of
// type Singleton<T> to register your singleton for later access via
// Singleton<T>::try_get().
template <
    typename T,
    typename Tag = detail::DefaultTag,
    typename VaultTag = detail::DefaultTag /* for testing */>
class Singleton {
 public:
  typedef std::function<T*(void)> CreateFunc;
  typedef std::function<void(T*)> TeardownFunc;
    }
    
    FOLLY_ALWAYS_INLINE int __builtin_ctzl(unsigned long x) {
  return __builtin_ctz((unsigned int)x);
}
    
    inline void* aligned_malloc(size_t size, size_t align) {
  return memalign(align, size);
}
    
    TEST(AlignedSysAllocator, allocate_unique_fixed) {
  using Alloc = AlignedSysAllocator<float, FixedAlign<1024>>;
  Alloc const alloc;
  auto ptr = allocate_unique<float>(alloc, 3.);
  EXPECT_EQ(3., *ptr);
  EXPECT_EQ(0, std::uintptr_t(ptr.get()) % 1024);
}
    
    
    {  template <class... Args>
  SettingContents(std::string _reason, Args&&... args)
      : updateReason(std::move(_reason)), value(std::forward<Args>(args)...) {}
};
    
      {
    auto meta = folly::settings::getSettingsMeta('follytest_public_flag_to_a');
    EXPECT_TRUE(meta.hasValue());
    const auto& md = meta.value();
    EXPECT_EQ(md.project, 'follytest');
    EXPECT_EQ(md.name, 'public_flag_to_a');
    EXPECT_EQ(md.typeStr, 'int');
    EXPECT_EQ(md.typeId, typeid(int));
  }
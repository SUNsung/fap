
        
        
    {    if (tmp.handle_data().is_set()) {
      input_handle_shapes_and_types[i].reset(
          new std::vector<std::pair<TensorShapeProto, DataType>>);
      auto& v = *input_handle_shapes_and_types[i];
      for (const auto& x : tmp.handle_data().shape_and_type()) {
        v.emplace_back(x.shape(), x.dtype());
      }
    }
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_

    
    // Actually dereferences cached numpy arrays. REQUIRES being called while
// holding the GIL.
void ClearDecrefCache();
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Safe_TF_TensorPtr make_safe(TF_Tensor* tensor) {
  return Safe_TF_TensorPtr(tensor);
}
    
      ScopedActivateExecutorContext(ScopedActivateExecutorContext&& other);
    
    SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    'movq $0xfffffffffffff,%%r15\n'
    }
    
            secp256k1_ecmult_const(&res, &pt, &s);
        secp256k1_ge_set_gej(&pt, &res);
        /* Compute a hash of the point in compressed form
         * Note we cannot use secp256k1_eckey_pubkey_serialize here since it does not
         * expect its output to be secret and has a timing sidechannel. */
        secp256k1_fe_normalize(&pt.x);
        secp256k1_fe_normalize(&pt.y);
        secp256k1_fe_get_b32(x, &pt.x);
        y[0] = 0x02 | secp256k1_fe_is_odd(&pt.y);
    
        s_one[31] = 1;
    /* Check against pubkey creation when the basepoint is the generator */
    for (i = 0; i < 100; ++i) {
        secp256k1_sha256_t sha;
        unsigned char s_b32[32];
        unsigned char output_ecdh[32];
        unsigned char output_ser[32];
        unsigned char point_ser[33];
        size_t point_ser_len = sizeof(point_ser);
        secp256k1_scalar s;
    }
    
    #include <boost/test/unit_test.hpp>
    
        enum COLOR_SPACE
    {
        COLOR_SPACE_BT601,
        COLOR_SPACE_BT709
    };
    
            for (; j < roiw32; j += 32)
        {
            internal::prefetch(src + j);
            uint8x16_t v_src0 = vld1q_u8(src + j), v_src1 = vld1q_u8(src + j + 16);
            uint8x16_t v_dst0 = vmvnq_u8(v_src0), v_dst1 = vmvnq_u8(v_src1);
            vst1q_u8(dst + j, v_dst0);
            vst1q_u8(dst + j + 16, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            uint8x8_t v_src = vld1_u8(src + j);
            uint8x8_t v_dst = vmvn_u8(v_src);
            vst1_u8(dst + j, v_dst);
        }
    
    
    {#ifdef FLOAT_VARIANT_1_25
            uint32x4_t tres1 = vmovl_u16(vget_low_u16(t0));
            uint32x4_t tres2 = vmovl_u16(vget_high_u16(t0));
            float32x4_t vf1 = vmulq_f32(v1_25, vcvtq_f32_u32(tres1));
            float32x4_t vf2 = vmulq_f32(v1_25, vcvtq_f32_u32(tres2));
            tres1 = vcvtq_u32_f32(vaddq_f32(vf1, v0_5));
            tres2 = vcvtq_u32_f32(vaddq_f32(vf2, v0_5));
            t0 = vcombine_u16(vmovn_u32(tres1),vmovn_u32(tres2));
            vst1_u8(drow + x - 8, vmovn_u16(t0));
#else
            int16x8_t tt0 = vqrdmulhq_s16(vreinterpretq_s16_u16(t0), vScale);
            uint8x8_t it0 = vmovn_u16(vreinterpretq_u16_s16(tt0));
            vst1_u8(drow + x - 8, it0);
#endif
        }
    
    template <typename Op, int elsize> struct vtail
{
    static inline void compare(const typename Op::type * src0, const typename Op::type * src1,
                               u8 * dst, const Op & op,
                               size_t &x, size_t width)
    {
        //do nothing since there couldn't be enough data
        (void)src0;
        (void)src1;
        (void)dst;
        (void)op;
        (void)x;
        (void)width;
    }
};
template <typename Op> struct vtail<Op, 2>
{
    static inline void compare(const typename Op::type * src0, const typename Op::type * src1,
                               u8 * dst, const Op & op,
                               size_t &x, size_t width)
    {
        typedef typename Op::type type;
        typedef typename internal::VecTraits<type>::vec128 vec128;
        typedef typename internal::VecTraits<type>::unsign::vec128 uvec128;
        //There no more than 15 elements in the tail, so we could handle 8 element vector only once
        if( x + 8 < width)
        {
            vec128  v_src0, v_src1;
            uvec128 v_dst;
    }
    }
    }
    
    
    {                s1 = vpadalq_s16(s1, vdot1);
                s2 = vpadalq_s16(s2, vdot2);
            }
    
                    vSum_0_4 = vmlaq_u16(vSum_0_4, vSum_4_8, vc4u16);
                vSum_1_5 = vmlaq_u16(vSum_1_5, vSum_5_9, vc4u16);
                vSum_2_6 = vmlaq_u16(vSum_2_6, vSum_6_10, vc4u16);
                vSum_3_7 = vmlaq_u16(vSum_3_7, vSum_7_11, vc4u16);
    
    bool isLaplacian3x3Supported(const Size2D &size, BORDER_MODE border)
{
    return isSupportedConfiguration() && size.width >= 8 &&
        (border == BORDER_MODE_CONSTANT ||
            border == BORDER_MODE_REPLICATE);
}
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
    /// @brief Fills a Blob with Gaussian-distributed values @f$ x = a @f$.
template <typename Dtype>
class GaussianFiller : public Filler<Dtype> {
 public:
  explicit GaussianFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    CHECK(blob->count());
    caffe_rng_gaussian<Dtype>(blob->count(), Dtype(this->filler_param_.mean()),
        Dtype(this->filler_param_.std()), blob->mutable_cpu_data());
    int sparse = this->filler_param_.sparse();
    CHECK_GE(sparse, -1);
    if (sparse >= 0) {
      // Sparse initialization is implemented for 'weight' blobs; i.e. matrices.
      // These have num == channels == 1; width is number of inputs; height is
      // number of outputs.  The 'sparse' variable specifies the mean number
      // of non-zero input weights for a given output.
      CHECK_GE(blob->num_axes(), 1);
      const int num_outputs = blob->shape(0);
      Dtype non_zero_probability = Dtype(sparse) / Dtype(num_outputs);
      rand_vec_.reset(new SyncedMemory(blob->count() * sizeof(int)));
      int* mask = reinterpret_cast<int*>(rand_vec_->mutable_cpu_data());
      caffe_rng_bernoulli(blob->count(), non_zero_probability, mask);
      for (int i = 0; i < blob->count(); ++i) {
        data[i] *= mask[i];
      }
    }
  }
    }
    
      /**
   * @brief Given the bottom blobs, compute the top blobs and the loss.
   *
   * @param bottom
   *     the input blobs, whose data fields store the input data for this layer
   * @param top
   *     the preshaped output blobs, whose data fields will store this layers'
   *     outputs
   * \return The total loss from the layer.
   *
   * The Forward wrapper calls the relevant device wrapper function
   * (Forward_cpu or Forward_gpu) to compute the top blob values given the
   * bottom blobs.  If the layer has any non-zero loss_weights, the wrapper
   * then computes and returns the loss.
   *
   * Your layer should implement Forward_cpu and (optionally) Forward_gpu.
   */
  inline Dtype Forward(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    namespace caffe {
    }
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /**
 * @brief Index into the input blob along its first axis.
 *
 * This layer can be used to select, reorder, and even replicate examples in a
 * batch.  The second blob is cast to int and treated as an index into the
 * first axis of the first blob.
 */
template <typename Dtype>
class BatchReindexLayer : public Layer<Dtype> {
 public:
  explicit BatchReindexLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  std::string columnDefinition() const {
    return ::osquery::columnDefinition(tc_columns_);
  }
    
      ASSERT_TRUE(data.doc().HasMember('events'));
  ASSERT_TRUE(data.doc()['events'].HasMember('environment_variables'));
  ASSERT_TRUE(data.doc()['events']['environment_variables'].IsArray());
  for (const auto& var :
       data.doc()['events']['environment_variables'].GetArray()) {
    std::string value = var.GetString();
    EXPECT_TRUE(value == 'foo' || value == 'bar');
  }
    
      // This looks funky, because the parser is named 'options' and it claims
  // ownership of a single top-level-key called 'options'.
  const auto& doc = c.getParser('options')->getData().doc()['options'];
    
    // clang-format off
// Keep it on top of all other includes to fix double include WinSock.h header file
// which is windows specific boost build problem
#include <osquery/remote/utility.h>
// clang-format on
    
        std::shared_ptr<DHTNode> localNode;
    
      virtual void startup() CXX11_OVERRIDE;
    
    DHTRoutingTable::~DHTRoutingTable() = default;
    
      void moveBucketTail(const std::shared_ptr<DHTNode>& node);
    
      std::shared_ptr<DHTNode> localNode_;
    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
    
    {} // namespace aria2

    
    #include 'common.h'
#include <string>
    
    
    {} // namespace aria2
    
      typedef std::set<std::shared_ptr<CacheEntry>,
                   DerefLess<std::shared_ptr<CacheEntry>>>
      CacheEntrySet;
  CacheEntrySet entries_;
    
    #include 'gtest/gtest.h'
    
    #include 'gtest/gtest.h'
    
    #include 'modules/drivers/radar/conti_radar/protocol/cluster_list_status_600.h'
    
    ObjectQualityInfo60C::ObjectQualityInfo60C() {}
const uint32_t ObjectQualityInfo60C::ID = 0x60C;
    
      auto geo_reference_node = header_node->FirstChildElement('geoReference');
  if (!geo_reference_node) {
    std::string err_msg = 'Error parsing header geoReoference attributes';
    return Status(apollo::common::ErrorCode::HDMAP_DATA_ERROR, err_msg);
  }
  auto geo_text = geo_reference_node->FirstChild()->ToText();
  if (!geo_text) {
    std::string err_msg = 'Error parsing header geoReoference text';
    return Status(apollo::common::ErrorCode::HDMAP_DATA_ERROR, err_msg);
  }
    
    void BackupTrajectoryGenerator::GenerateTrajectory1dPairs(
    const State& init_s, const State& init_d) {
  std::vector<std::shared_ptr<Curve1d>> lon_trajectories;
  std::array<double, 5> dds_condidates = {-0.1, -1.0, -2.0, -3.0, -4.0};
  for (const auto dds : dds_condidates) {
    lon_trajectories.emplace_back(
        new ConstantDecelerationTrajectory1d(init_s[0], init_s[1], dds));
  }
    }
    
      const auto mat = kernel.kernel_matrix();
  const auto offset = kernel.offset_matrix();
    
      /**
   * Returns a secure random uint32_t
   */
  static uint32_t secureRand32() {
    return secureRandom<uint32_t>();
  }
    
    //////////////////////////////////////////////////////////////////////
    
      bool hasImplementation() {
    performLazyInit();
    return static_cast<bool>(increment_);
  }
    
    /**
 * This class creates core-local caches for a given shared_ptr, to
 * mitigate contention when acquiring/releasing it.
 *
 * It has the same thread-safety guarantees as shared_ptr: it is safe
 * to concurrently call get(), but reset()s must be synchronized with
 * reads and other resets().
 *
 * @author Giuseppe Ottaviano <ott@fb.com>
 */
template <class T, size_t kNumSlots = 64>
class CoreCachedSharedPtr {
 public:
  explicit CoreCachedSharedPtr(const std::shared_ptr<T>& p = nullptr) {
    reset(p);
  }
    }
    
    TEST_F(SparseByteSetTest, each_random) {
  mt19937 rng;
  uniform_int_distribution<uint16_t> dist{lims::min(), lims::max()};
  set<uint8_t> added;
  while (added.size() <= lims::max()) {
    auto c = uint8_t(dist(rng));
    EXPECT_EQ(added.count(c), s.contains(c));
    EXPECT_EQ(!added.count(c), s.add(c));
    added.insert(c);
    EXPECT_TRUE(added.count(c)); // sanity
    EXPECT_TRUE(s.contains(c));
  }
}

    
    namespace mars_boost {} namespace boost = mars_boost; namespace mars_boost {
namespace atomics {
namespace detail {
    }
    }
    }
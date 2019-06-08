
        
          char label_i;
  char label_j;
  char* pixels = new char[2 * rows * cols];
  std::string value;
    
      /**
   * @brief Implements common layer setup functionality.
   *
   * @param bottom the preshaped input blobs
   * @param top
   *     the allocated but unshaped output blobs, to be shaped by Reshape
   *
   * Checks that the number of bottom and top blobs is correct.
   * Calls LayerSetUp to do special layer setup for individual layer types,
   * followed by Reshape to set up sizes of top blobs and internal buffers.
   * Sets up the loss weight multiplier blobs for any non-zero loss weights.
   * This method may not be overridden.
   */
  void SetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
    CheckBlobCounts(bottom, top);
    LayerSetUp(bottom, top);
    Reshape(bottom, top);
    SetLossWeights(top);
  }
    
    /**
 * @brief Compute the index of the @f$ K @f$ max values for each datum across
 *        all dimensions @f$ (C \times H \times W) @f$.
 *
 * Intended for use after a classification layer to produce a prediction.
 * If parameter out_max_val is set to true, output is a vector of pairs
 * (max_ind, max_val) for each image. The axis parameter specifies an axis
 * along which to maximise.
 *
 * NOTE: does not implement Backwards operation.
 */
template <typename Dtype>
class ArgMaxLayer : public Layer<Dtype> {
 public:
  /**
   * @param param provides ArgMaxParameter argmax_param,
   *     with ArgMaxLayer options:
   *   - top_k (\b optional uint, default 1).
   *     the number @f$ K @f$ of maximal items to output.
   *   - out_max_val (\b optional bool, default false).
   *     if set, output a vector of pairs (max_ind, max_val) unless axis is set then
   *     output max_val along the specified axis.
   *   - axis (\b optional int).
   *     if set, maximise along the specified axis else maximise the flattened
   *     trailing dimensions for each index of the first / num dimension.
   */
  explicit ArgMaxLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
     protected:
  virtual void InternalThreadEntry();
  virtual void load_batch(Batch<Dtype>* batch) = 0;
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'b2Glue.h'
    
    	void EncodeMipmaps(float *a_pafSourceRGBA,
		unsigned int a_uiSourceWidth,
		unsigned int a_uiSourceHeight,
		Image::Format a_format,
		ErrorMetric a_eErrMetric,
		float a_fEffort,
		unsigned int a_uiJobs,
		unsigned int a_uiMaxJobs,
		unsigned int a_uiMaxMipmaps,
		unsigned int a_uiMipFilterFlags,
		RawImage* a_pMipmaps,
		int *a_piEncodingTime_ms, bool a_bVerboseOutput = false);
    
    		inline ColorFloatRGBA * GetSource()
		{
			return m_afrgbaSource;
		}
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    #ifndef SILK_MACROS_ARMv4_H
#define SILK_MACROS_ARMv4_H
    
    
    {
    {}}
    
    APCCollection::~APCCollection() {
  // Zero for size is correct, because when this APCCollection was unreferenced
  // it already included the size of the inner handle.
  m_arrayHandle->unreferenceRoot(0);
}
    
    namespace HPHP {
    }
    
    #include 'hphp/runtime/base/type-string.h'
    
    namespace HPHP {
    }
    
    #include 'hphp/runtime/base/plain-file.h'
    
    #endif // incl_HPHP_URL_FILE_H_

    
        // read-only access
    
    static std::string
getStr(const std::vector<uint8_t>& v, size_t& pos, const size_t len) {
  CHECK_GE(len, 1);
  std::string res;
  res.resize(len - 1);
  for (size_t i = 0; i < len - 1; i++) {
    CHECK_NE(v[pos + i], 0);
    res[i] = char(v[pos + i]);
  }
  CHECK_EQ(0, v[pos + len - 1]);
  pos += len;
  return res;
}
    
    template <class UIntType, size_t w, size_t s, size_t r>
struct StateSize<std::subtract_with_carry_engine<UIntType, w, s, r>> {
  // [rand.eng.sub]: r * ceil(w / 32)
  using type = std::integral_constant<size_t, r*((w + 31) / 32)>;
};
    
      /**
   * Returns a random uint64_t in [0, max). If max == 0, returns 0.
   */
  static uint64_t rand64(uint64_t max) {
    return rand64(0, max, ThreadLocalPRNG());
  }
    
    #include <string>
    
    
    {  /**
   * The strategy parameter is used to tune the compression algorithm.
   * Supported values:
   * - Z_DEFAULT_STRATEGY: normal data
   * - Z_FILTERED: data produced by a filter (or predictor)
   * - Z_HUFFMAN_ONLY: force Huffman encoding only (no string match)
   * - Z_RLE: limit match distances to one
   * - Z_FIXED: prevents the use of dynamic Huffman codes
   *
   * The strategy parameter only affects the compression ratio but not the
   * correctness of the compressed output.
   */
  int strategy;
};
    
      /* Get a reference to the pointer, either from the local batch or
   * from the global count.
   *
   * return is the base ptr, and the previous local count, if it is
   * needed for compare_and_swap later.
   */
  PackedPtr takeOwnedBase(std::memory_order order) const noexcept {
    PackedPtr local, newlocal;
    local = ptr_.load(std::memory_order_acquire);
    while (true) {
      if (!local.get()) {
        return local;
      }
      newlocal = local;
      if (get_local_count(newlocal) + 1 > EXTERNAL_OFFSET) {
        // spinlock in the rare case we have more than
        // EXTERNAL_OFFSET threads trying to access at once.
        std::this_thread::yield();
        // Force DeterministicSchedule to choose a different thread
        local = ptr_.load(std::memory_order_acquire);
      } else {
        newlocal.setExtra(newlocal.extra() + 1);
        assert(get_local_count(newlocal) > 0);
        if (ptr_.compare_exchange_weak(local, newlocal, order)) {
          break;
        }
      }
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

    
        /*! \brief Constructor from cl_mem - takes ownership.
     *
     * \param retainObject will cause the constructor to retain its cl object.
     *                     Defaults to false to maintain compatibility with
     *                     earlier versions.
     *  See Memory for further details.
     */
    explicit Image2DGL(const cl_mem& image, bool retainObject = false) : 
        Image2D(image, retainObject) { }
    
    #ifdef USE_3D_ADAM_MODEL
    #include <adam/totalmodel.h>
#endif
#include <openpose/core/common.hpp>
#include <openpose/gui/enumClasses.hpp>
#include <openpose/gui/gui.hpp>
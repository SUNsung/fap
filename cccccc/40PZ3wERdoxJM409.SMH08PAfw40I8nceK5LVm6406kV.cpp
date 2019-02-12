
        
                    int16x4_t v_srclo = vget_low_s16(v_src0), v_srchi = vget_high_s16(v_src0);
            v_dst0 = vcombine_s16(vqmovn_s32(vaddw_s16(vmull_s16(v_srclo, v_srclo), vget_low_s16(v_dst0))),
                                  vqmovn_s32(vaddw_s16(vmull_s16(v_srchi, v_srchi), vget_high_s16(v_dst0))));
    
    void blur3x3(const Size2D &size, s32 cn,
             const u8 * srcBase, ptrdiff_t srcStride,
             u8 * dstBase, ptrdiff_t dstStride,
             BORDER_MODE borderType, u8 borderValue)
{
    internal::assertSupportedConfiguration(isBlurU8Supported(size, cn, borderType));
#ifdef CAROTENE_NEON
//#define FLOAT_VARIANT_1_9
#ifdef FLOAT_VARIANT_1_9
    float32x4_t v1_9 = vdupq_n_f32 (1.0/9.0);
    float32x4_t v0_5 = vdupq_n_f32 (.5);
#else
    const int16x8_t vScale = vmovq_n_s16(3640);
#endif
    }
    
                int16x8_t l02 = vreinterpretq_s16_u16(vaddl_u8(l2, l0));
            int16x8_t ldx = vreinterpretq_s16_u16(vsubl_u8(l2, l0));
            int16x8_t ldy = vaddq_s16(l02, l1x2);
    
    
    {            v_y = vld2q_u8(srcy + syj + 32);
            v_dst.val[0] = vld1q_u8(srcu + sj + 16);
            v_dst.val[1] = v_y.val[0];
            v_dst.val[2] = vld1q_u8(srcv + sj + 16);
            v_dst.val[3] = v_y.val[1];
            vst4q_u8(dst + dj + 64, v_dst);
        }
#endif
    
            x -= 8;
        if (x == width)
            --x;
    
    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
                uint16x8_t v_mask0 = vorrq_u16(vceqq_u16(v_src0, v_maxval8), vceqq_u16(v_src0, v_minval8));
            uint16x8_t v_mask1 = vorrq_u16(vceqq_u16(v_src1, v_maxval8), vceqq_u16(v_src1, v_minval8));
    
    
    {
    {} }
    
    void Laplacian3x3(const Size2D &size,
                  const u8 * srcBase, ptrdiff_t srcStride,
                  u8 * dstBase, ptrdiff_t dstStride,
                  BORDER_MODE border, u8 borderValue)
{
    internal::assertSupportedConfiguration(isLaplacian3x3Supported(size, border));
#ifdef CAROTENE_NEON
    const uint16x8_t v_border_x3 = vdupq_n_u16(borderValue * 3);
    const uint16x8_t v_zero = vdupq_n_u16(0);
    const uint8x8_t v_border = vdup_n_u8(borderValue);
    }
    
    int16_t word_blob_quality(WERD_RES *word, ROW *row);
void reject_whole_page(PAGE_RES_IT &page_res_it);
    
    namespace tesseract {
  class BoolParam;
  class DoubleParam;
  class IntParam;
  class StringParam;
  class Tesseract;
}
    
    // Clip output boxes to input blob boxes for bounds that are within this
// tolerance. Otherwise, the blob may be chopped and we have to just use
// the word bounding box.
const int kBoxClipTolerance = 2;
    
    // A simple class to provide a dynamic programming solution to a class of
// 1st-order problems in which the cost is dependent only on the current
// step and the best cost to that step, with a possible special case
// of using the variance of the steps, and only the top choice is required.
// Useful for problems such as finding the optimal cut points in a fixed-pitch
// (vertical or horizontal) situation.
// Skeletal Example:
// DPPoint* array = new DPPoint[width];
// for (int i = 0; i < width; i++) {
//   array[i].AddLocalCost(cost_at_i)
// }
// DPPoint* best_end = DPPoint::Solve(..., array);
// while (best_end != nullptr) {
//   int cut_index = best_end - array;
//   best_end = best_end->best_prev();
// }
// delete [] array;
class DPPoint {
 public:
  // The cost function evaluates the total cost at this (excluding this's
  // local_cost) and if it beats this's total_cost, then
  // replace the appropriate values in this.
  typedef int64_t (DPPoint::*CostFunc)(const DPPoint* prev);
    }
    
    //////////////////////////////////////////////////////////////////////
    
    /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
        // GP Register cannot be greater than 31
    assert(static_cast<uint32_t>(rs) < 32);
    
      if (ignore_default_configs) {
    // Appending empty file to -c options to avoid loading defaults
    ini_fd = get_tempfile_if_not_exists(ini_fd, ini_path);
  } else {
    // Should only include this default if not explicitly ignored.
#ifdef PHP_DEFAULT_HDF
    newargv.push_back('-c');
    newargv.push_back(PHP_DEFAULT_HDF);
#endif
    }
    
      for (unsigned i = 0; i < iter; ++i) {
    FB_LOG_EVERY_MS(INFO, 1000) << 'every 1s';
  }
    
    template <class RNG, class /* EnableIf */>
void Random::seed(RNG& rng) {
  detail::SeedData<RNG> sd;
  std::seed_seq s(std::begin(sd.seedData), std::end(sd.seedData));
  rng.seed(s);
}
    
    #include <folly/Range.h>
    
      void add_external(BasePtr* res, int64_t c = 0) const {
    assert(res);
    CountedDetail::inc_shared_count(res, EXTERNAL_OFFSET + c);
  }
  void release_external(PackedPtr& res, int64_t c = 0) const {
    if (!res.get()) {
      return;
    }
    int64_t count = get_local_count(res) + c;
    int64_t diff = EXTERNAL_OFFSET - count;
    assert(diff >= 0);
    CountedDetail::template release_shared<T>(res.get(), diff);
  }
  PackedPtr get_newptr(const SharedPtr& n) const {
    BasePtr* newval;
    unsigned count = 0;
    if (!n) {
      newval = nullptr;
    } else {
      newval = CountedDetail::get_counted_base(n);
      if (n.get() != CountedDetail::template get_shared_ptr<T>(newval)) {
        // This is an aliased sharedptr.  Make an un-aliased one
        // by wrapping in *another* shared_ptr.
        auto data = CountedDetail::template make_ptr<SharedPtr>(n);
        newval = CountedDetail::get_counted_base(data);
        count = ALIASED_PTR;
        // (add external must happen before data goes out of scope)
        add_external(newval);
      } else {
        add_external(newval);
      }
    }
    }
    
    #include <cstdint>
#include <limits>
#include <random>
#include <set>
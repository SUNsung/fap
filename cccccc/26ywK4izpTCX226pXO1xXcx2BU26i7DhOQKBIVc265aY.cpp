
    {	virtual btScalar addSingleResult(btManifoldPoint &cp, const btCollisionObjectWrapper *colObj0Wrap, int partId0, int index0, const btCollisionObjectWrapper *colObj1Wrap, int partId1, int index1);
};
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
      m_expanded_blocks_per_component = m_comp_h_samp[0] * m_comp_v_samp[0];
  m_expanded_blocks_per_mcu = m_expanded_blocks_per_component * m_comps_in_frame;
  m_expanded_blocks_per_row = m_max_mcus_per_row * m_expanded_blocks_per_mcu;
	// Freq. domain chroma upsampling is only supported for H2V2 subsampling factor (the most common one I've seen).
  m_freq_domain_chroma_upsample = false;
#if JPGD_SUPPORT_FREQ_DOMAIN_UPSAMPLING
  m_freq_domain_chroma_upsample = (m_expanded_blocks_per_mcu == 4*3);
#endif
    
    
    {
    {    void free_all_blocks();
    JPGD_NORETURN void stop_decoding(jpgd_status status);
    void *alloc(size_t n, bool zero = false);
    void word_clear(void *p, uint16 c, uint n);
    void prep_in_buffer();
    void read_dht_marker();
    void read_dqt_marker();
    void read_sof_marker();
    void skip_variable_marker();
    void read_dri_marker();
    void read_sos_marker();
    int next_marker();
    int process_markers();
    void locate_soi_marker();
    void locate_sof_marker();
    int locate_sos_marker();
    void init(jpeg_decoder_stream * pStream);
    void create_look_ups();
    void fix_in_buffer();
    void transform_mcu(int mcu_row);
    void transform_mcu_expand(int mcu_row);
    coeff_buf* coeff_buf_open(int block_num_x, int block_num_y, int block_len_x, int block_len_y);
    inline jpgd_block_t *coeff_buf_getp(coeff_buf *cb, int block_x, int block_y);
    void load_next_row();
    void decode_next_row();
    void make_huff_table(int index, huff_tables *pH);
    void check_quant_tables();
    void check_huff_tables();
    void calc_mcu_block_order();
    int init_scan();
    void init_frame();
    void process_restart();
    void decode_scan(pDecode_block_func decode_block_func);
    void init_progressive();
    void init_sequential();
    void decode_start();
    void decode_init(jpeg_decoder_stream * pStream);
    void H2V2Convert();
    void H2V1Convert();
    void H1V2Convert();
    void H1V1Convert();
    void gray_convert();
    void expanded_convert();
    void find_eoi();
    inline uint get_char();
    inline uint get_char(bool *pPadding_flag);
    inline void stuff_char(uint8 q);
    inline uint8 get_octet();
    inline uint get_bits(int num_bits);
    inline uint get_bits_no_markers(int numbits);
    inline int huff_decode(huff_tables *pH);
    inline int huff_decode(huff_tables *pH, int& extrabits);
    static inline uint8 clamp(int i);
    static void decode_block_dc_first(jpeg_decoder *pD, int component_id, int block_x, int block_y);
    static void decode_block_dc_refine(jpeg_decoder *pD, int component_id, int block_x, int block_y);
    static void decode_block_ac_first(jpeg_decoder *pD, int component_id, int block_x, int block_y);
    static void decode_block_ac_refine(jpeg_decoder *pD, int component_id, int block_x, int block_y);
  };
  
} // namespace jpgd
    
    # if defined(CLZ64)
/**
 * OC_ILOGNZ_64 - Integer binary logarithm of a non-zero 64-bit value.
 * @_v: A non-zero 64-bit value.
 * Returns floor(log2(_v))+1.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * If _v is zero, the return value is undefined; use OC_ILOG_64() instead.
 */
#  define OC_ILOGNZ_64(_v) (CLZ64_OFFS-CLZ64(_v))
/**
 * OC_ILOG_64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 */
#  define OC_ILOG_64(_v)   (OC_ILOGNZ_64(_v)&-!!(_v))
# else
#  define OC_ILOGNZ_64(_v) (oc_ilog64(_v))
#  define OC_ILOG_64(_v)   (oc_ilog64(_v))
# endif
    
    
    
    #elif (defined(OPUS_X86_MAY_HAVE_SSE) && !defined(OPUS_X86_PRESUME_SSE)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE2) && !defined(OPUS_X86_PRESUME_SSE2)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE4_1) && !defined(OPUS_X86_PRESUME_SSE4_1)) || \
  (defined(OPUS_X86_MAY_HAVE_AVX) && !defined(OPUS_X86_PRESUME_AVX))
    
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
    
      // Returns true if the argument of the last Compare() call (or the baseline
  // image, if Compare() was not called yet) meets the image acceptance
  // criteria. The target_mul modifies the acceptance criteria used in this call
  // the following way:
  //    = 1.0 : the original acceptance criteria is used,
  //    < 1.0 : a more strict acceptance criteria is used,
  //    > 1.0 : a less strict acceptance criteria is used.
  virtual bool DistanceOK(double target_mul) const = 0;
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    #ifndef GUETZLI_ENTROPY_ENCODE_H_
#define GUETZLI_ENTROPY_ENCODE_H_
    
    struct HuffmanCodeTable {
  uint8_t depth[256];
  int code[256];
};
    
    #ifndef GUETZLI_OUTPUT_IMAGE_H_
#define GUETZLI_OUTPUT_IMAGE_H_
    
    // Butteraugli scores that correspond to JPEG quality levels, starting at
// kLowestQuality. They were computed by taking median BA scores of JPEGs
// generated using libjpeg-turbo at given quality from a set of PNGs.
// The scores above quality level 100 are just linearly decreased so that score
// for 110 is 90% of the score for 100.
const double kScoreForQuality[] = {
  2.810761,  // 70
  2.729300,
  2.689687,
  2.636811,
  2.547863,
  2.525400,
  2.473416,
  2.366133,
  2.338078,
  2.318654,
  2.201674,  // 80
  2.145517,
  2.087322,
  2.009328,
  1.945456,
  1.900112,
  1.805701,
  1.750194,
  1.644175,
  1.562165,
  1.473608,  // 90
  1.382021,
  1.294298,
  1.185402,
  1.066781,
  0.971769,  // 95
  0.852901,
  0.724544,
  0.611302,
  0.443185,
  0.211578,  // 100
  0.209462,
  0.207346,
  0.205230,
  0.203114,
  0.200999,  // 105
  0.198883,
  0.196767,
  0.194651,
  0.192535,
  0.190420,  // 110
  0.190420,
};
    
    #include <algorithm>
    
      std::shared_ptr<HttpConnection> httpConnection_;
    
      std::chrono::seconds interval_;
  DownloadEngine* e_;
  Timer checkPoint_;
  int numNewConnection_; // the number of the connection to establish.
public:
  ActivePeerConnectionCommand(cuid_t cuid, RequestGroup* requestGroup,
                              DownloadEngine* e, std::chrono::seconds interval);
    
      /**
   * The internal announce URL pointer points to next URL.
   * If the current URL is the last element of its group, then the first
   * element of the next group is pointed.
   */
  void announceFailure();
    
    namespace aria2 {
    }
    
    #include 'DiskWriterFactory.h'
#include 'a2functional.h'
    
    #include 'common.h'
    
    
    {  std::shared_ptr<AsyncNameResolver> asyncNameResolver_[2];
  size_t numResolver_;
  int resolverCheck_;
  bool ipv4_;
  bool ipv6_;
};
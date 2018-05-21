
        
        TEST_F(UnicharcompressTest, DoesJapanese) {
  LOG(INFO) << 'Testing jpn';
  LoadUnicharset('jpn.unicharset');
  ExpectCorrect('jpn');
}
    
      // See PageIterator and ResultIterator for most calls.
    
    
    {  // Globally accessible constants.
  // APPROXIMATIONS of the fractions of the character cell taken by
  // the descenders, ascenders, and x-height.
  static const double kDescenderFraction;  // = 0.25;
  static const double kXHeightFraction;    // = 0.5;
  static const double kAscenderFraction;   // = 0.25;
  // Derived value giving the x-height as a fraction of cap-height.
  static const double kXHeightCapRatio;    // = XHeight/(XHeight + Ascender).
};
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
    // Computes the Otsu threshold(s) for the given image rectangle, making one
// for each channel. Each channel is always one byte per pixel.
// Returns an array of threshold values and an array of hi_values, such
// that a pixel value >threshold[channel] is considered foreground if
// hi_values[channel] is 0 or background if 1. A hi_value of -1 indicates
// that there is no apparent foreground. At least one hi_value will not be -1.
// Delete thresholds and hi_values with delete [] after use.
// The return value is the number of channels in the input image, being
// the size of the output thresholds and hi_values arrays.
int OtsuThreshold(Pix* src_pix, int left, int top, int width, int height,
                  int** thresholds, int** hi_values);
    
    #define ASSERT_HOST_MSG(x, ...)                                                \
  if (!(x)) {                                                                  \
    tprintf(__VA_ARGS__);                                                      \
    ASSERT_FAILED.error(#x, ABORT, 'in file %s, line %d', __FILE__, __LINE__); \
  }
    
    
    {  UNICHARMAP_NODE* nodes;
};
    
    /// The following are confusable internal word punctuation symbols
/// which we normalize to the first variant when matching in dawgs.
extern const char *kHyphenLikeUTF8[];
extern const char *kApostropheLikeUTF8[];
    
      using key_type = gloo_cache::key_type;
  using value_type = std::tuple<
    std::shared_ptr<algorithm_type>, // algorithm
    std::shared_ptr<buffer_type>,    // input buffer (nullptr if not used)
    std::shared_ptr<buffer_type>,    // output buffer (nullptr if not used)
    std::shared_ptr<std::mutex>      // mutex to protect same algorithm from running concurrently
  >;
    
    #endif

    
    
void unregister_fd(int fd) {
  pollfds.erase(
    std::remove_if(pollfds.begin(), pollfds.end(),
        [fd](const struct pollfd &pfd) { return pfd.fd == fd; }),
    pollfds.end());
  client_sessions.erase(fd);
}
    
    
    {  auto& counter = s_counters[m_name];
  counter.total += elapsed;
  ++counter.count;
  counter.max = std::max(counter.max, elapsed);
  counter.wall_time_elapsed += elapsed_wall_clock;
  m_finished = true;
  return elapsed;
}
    
    #endif // USE_GCC_FAST_TLS
    
    #endif

    
    /*
 * Determine the next NUMA node according to state maintained in `curr_node`.
 */
int next_numa_node(std::atomic_int& curr_node);
/*
 * The number of numa nodes in the system
 */
inline int num_numa_nodes() {
  return use_numa ? numa_num_nodes : 1;
}
/*
 * Enable numa interleaving for the specified address range
 */
void numa_interleave(void* start, size_t size);
/*
 * Allocate the specified address range on the given node
 */
void numa_bind_to(void* start, size_t size, int node);
/*
 * Return true if node is part of the allowed set of numa nodes
 */
inline bool numa_node_allowed(int node) {
  if (numa_node_set == 0) return true;
  return numa_node_set & (1u << node);
}
    
    
    {}
    
    
///////////////////////////////////////////////////////////////////////////////
    
    # define OC_STATIC_ILOG0(_v) (!!(_v))
# define OC_STATIC_ILOG1(_v) (((_v)&0x2)?2:OC_STATIC_ILOG0(_v))
# define OC_STATIC_ILOG2(_v) \
 (((_v)&0xC)?2+OC_STATIC_ILOG1((_v)>>2):OC_STATIC_ILOG1(_v))
# define OC_STATIC_ILOG3(_v) \
 (((_v)&0xF0)?4+OC_STATIC_ILOG2((_v)>>4):OC_STATIC_ILOG2(_v))
# define OC_STATIC_ILOG4(_v) \
 (((_v)&0xFF00)?8+OC_STATIC_ILOG3((_v)>>8):OC_STATIC_ILOG3(_v))
# define OC_STATIC_ILOG5(_v) \
 (((_v)&0xFFFF0000)?16+OC_STATIC_ILOG4((_v)>>16):OC_STATIC_ILOG4(_v))
# define OC_STATIC_ILOG6(_v) \
 (((_v)&0xFFFFFFFF00000000ULL)?32+OC_STATIC_ILOG5((_v)>>32):OC_STATIC_ILOG5(_v))
/**
 * OC_STATIC_ILOG_32 - The integer logarithm of an (unsigned, 32-bit) constant.
 * @_v: A non-negative 32-bit constant.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * This macro is suitable for evaluation at compile time, but it should not be
 *  used on values that can change at runtime, as it operates via exhaustive
 *  search.
 */
# define OC_STATIC_ILOG_32(_v) (OC_STATIC_ILOG5((ogg_uint32_t)(_v)))
/**
 * OC_STATIC_ILOG_64 - The integer logarithm of an (unsigned, 64-bit) constant.
 * @_v: A non-negative 64-bit constant.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * This macro is suitable for evaluation at compile time, but it should not be
 *  used on values that can change at runtime, as it operates via exhaustive
 *  search.
 */
# define OC_STATIC_ILOG_64(_v) (OC_STATIC_ILOG6((ogg_int64_t)(_v)))
    
    static const static_bookblock _resbook_16s_0={
  {
    {0},
    {0,0,&_16c0_s_p1_0},
    {0},
    {0,0,&_16c0_s_p3_0},
    {0,0,&_16c0_s_p4_0},
    {0,0,&_16c0_s_p5_0},
    {0,0,&_16c0_s_p6_0},
    {&_16c0_s_p7_0,&_16c0_s_p7_1},
    {&_16c0_s_p8_0,&_16c0_s_p8_1},
    {&_16c0_s_p9_0,&_16c0_s_p9_1,&_16c0_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_1={
  {
    {0},
    {0,0,&_16c1_s_p1_0},
    {0},
    {0,0,&_16c1_s_p3_0},
    {0,0,&_16c1_s_p4_0},
    {0,0,&_16c1_s_p5_0},
    {0,0,&_16c1_s_p6_0},
    {&_16c1_s_p7_0,&_16c1_s_p7_1},
    {&_16c1_s_p8_0,&_16c1_s_p8_1},
    {&_16c1_s_p9_0,&_16c1_s_p9_1,&_16c1_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_2={
  {
    {0},
    {0,0,&_16c2_s_p1_0},
    {0,0,&_16c2_s_p2_0},
    {0,0,&_16c2_s_p3_0},
    {0,0,&_16c2_s_p4_0},
    {&_16c2_s_p5_0,&_16c2_s_p5_1},
    {&_16c2_s_p6_0,&_16c2_s_p6_1},
    {&_16c2_s_p7_0,&_16c2_s_p7_1},
    {&_16c2_s_p8_0,&_16c2_s_p8_1},
    {&_16c2_s_p9_0,&_16c2_s_p9_1,&_16c2_s_p9_2}
   }
};
    
      {2,0,32,  &_residue_44_mid,
   &_huff_book__44c5_s_long,&_huff_book__44c5_s_long,
   &_resbook_44s_5,&_resbook_44s_5}
};
static const vorbis_residue_template _res_44s_6[]={
  {2,0,16,  &_residue_44_high,
   &_huff_book__44c6_s_short,&_huff_book__44c6_s_short,
   &_resbook_44s_6,&_resbook_44s_6},
    
    static const static_bookblock _resbook_8s_0={
  {
    {0},
    {0,0,&_8c0_s_p1_0},
    {0},
    {0,0,&_8c0_s_p3_0},
    {0,0,&_8c0_s_p4_0},
    {0,0,&_8c0_s_p5_0},
    {0,0,&_8c0_s_p6_0},
    {&_8c0_s_p7_0,&_8c0_s_p7_1},
    {&_8c0_s_p8_0,&_8c0_s_p8_1},
    {&_8c0_s_p9_0,&_8c0_s_p9_1,&_8c0_s_p9_2}
   }
};
static const static_bookblock _resbook_8s_1={
  {
    {0},
    {0,0,&_8c1_s_p1_0},
    {0},
    {0,0,&_8c1_s_p3_0},
    {0,0,&_8c1_s_p4_0},
    {0,0,&_8c1_s_p5_0},
    {0,0,&_8c1_s_p6_0},
    {&_8c1_s_p7_0,&_8c1_s_p7_1},
    {&_8c1_s_p8_0,&_8c1_s_p8_1},
    {&_8c1_s_p9_0,&_8c1_s_p9_1,&_8c1_s_p9_2}
   }
};
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    void ReadDirToVectorOfUnits(const char *Path, std::vector<Unit> *V,
                            long *Epoch, size_t MaxSize, bool ExitOnError);
    
    
    {}  // namespace fuzzer
    
    #ifndef LLVM_FUZZER_TRACE_PC
#define LLVM_FUZZER_TRACE_PC
    
    bool IsASCII(const Unit &U) { return IsASCII(U.data(), U.size()); }
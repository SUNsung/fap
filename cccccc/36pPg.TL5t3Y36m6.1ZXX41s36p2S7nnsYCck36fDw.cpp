
        
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
    
    #ifndef UINT32_MAX
    #define UINT32_MAX (4294967295U)
#endif
    
    void add(const Size2D &size,
         const u32 * src0Base, ptrdiff_t src0Stride,
         const u32 * src1Base, ptrdiff_t src1Stride,
         u32 * dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
        if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<u32, u64>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<u32, u64>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
    void Canny3x3L2(const Size2D &size,
                const u8 * srcBase, ptrdiff_t srcStride,
                u8 * dstBase, ptrdiff_t dstStride,
                f64 low_thresh, f64 high_thresh,
                Margin borderMargin)
{
    internal::assertSupportedConfiguration(isCanny3x3Supported(size));
#ifdef CAROTENE_NEON
    Canny3x3<true, false>(size, 1,
                          srcBase, srcStride,
                          dstBase, dstStride,
                          NULL, 0,
                          NULL, 0,
                          low_thresh, high_thresh,
                          borderMargin);
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)low_thresh;
    (void)high_thresh;
    (void)borderMargin;
#endif
}
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        s16 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s32, u8, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vcvt.f32.s32 q4, q2                                     \n\t'
            'vcvt.f32.s32 q5, q3                                     \n\t'
            'vmul.f32 q6, q4, q0                                     \n\t'
            'vmul.f32 q7, q5, q0                                     \n\t'
            'vadd.f32 q8, q6, q1                                     \n\t'
            'vadd.f32 q9, q7, q1                                     \n\t'
            'vcvt.s32.f32 q10, q8                                    \n\t'
            'vcvt.s32.f32 q11, q9                                    \n\t'
            'vqmovun.s32 d24, q10                                    \n\t'
            'vqmovun.s32 d25, q11                                    \n\t'
            'vqmovn.u16  d26, q12                                    \n\t'
            'vst1.8 {d26}, [%[dst]]                                  \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst] 'r' (_dst + i),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26'
        );
    }
})
#else
CVTS_FUNC(s32, u8, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int32x4_t vline1_s32 = vld1q_s32(_src + i + 0);
        int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        uint16x4_t vRes1 = vqmovun_s32(vline1_s32);
        uint16x4_t vRes2 = vqmovun_s32(vline2_s32);
        uint8x8_t vRes = vqmovn_u16(vcombine_u16(vRes1, vRes2));
        vst1_u8(_dst + i, vRes);
    }
})
#endif
    
    #include <carotene/definitions.hpp>
    
    
    {            vsub = x1;
        }
    
    
    {};
    
    		virtual void InitFromEncodingBits(Block4x4 *a_pblockParent,
											unsigned char *a_paucEncodingBits,
											ColorFloatRGBA *a_pafrgbaSource,
    
    	// ################################################################################
	// Block4x4EncodingBits_RGB8
	// Encoding bits for the RGB portion of ETC1, RGB8, RGB8A1 and RGBA8
	// ################################################################################
    
    								if (fPixelError < afPixelErrors[uiPixel])
								{
									auiPixelSelectors[uiPixel] = uiSelector;
									afrgbaDecodedPixels[uiPixel] = frgbaDecodedPixel;
									afPixelErrors[uiPixel] = fPixelError;
								}
    
      typedef enum  AF_Blue_Stringset_
  {
    AF_BLUE_STRINGSET_ADLM = 0,
    AF_BLUE_STRINGSET_ARAB = 5,
    AF_BLUE_STRINGSET_ARMN = 9,
    AF_BLUE_STRINGSET_AVST = 16,
    AF_BLUE_STRINGSET_BAMU = 19,
    AF_BLUE_STRINGSET_BENG = 22,
    AF_BLUE_STRINGSET_BUHD = 27,
    AF_BLUE_STRINGSET_CAKM = 32,
    AF_BLUE_STRINGSET_CANS = 36,
    AF_BLUE_STRINGSET_CARI = 43,
    AF_BLUE_STRINGSET_CHER = 46,
    AF_BLUE_STRINGSET_COPT = 53,
    AF_BLUE_STRINGSET_CPRT = 58,
    AF_BLUE_STRINGSET_CYRL = 63,
    AF_BLUE_STRINGSET_DEVA = 69,
    AF_BLUE_STRINGSET_DSRT = 75,
    AF_BLUE_STRINGSET_ETHI = 80,
    AF_BLUE_STRINGSET_GEOR = 83,
    AF_BLUE_STRINGSET_GEOK = 90,
    AF_BLUE_STRINGSET_GLAG = 97,
    AF_BLUE_STRINGSET_GOTH = 102,
    AF_BLUE_STRINGSET_GREK = 105,
    AF_BLUE_STRINGSET_GUJR = 112,
    AF_BLUE_STRINGSET_GURU = 118,
    AF_BLUE_STRINGSET_HEBR = 124,
    AF_BLUE_STRINGSET_KALI = 128,
    AF_BLUE_STRINGSET_KHMR = 134,
    AF_BLUE_STRINGSET_KHMS = 140,
    AF_BLUE_STRINGSET_KNDA = 143,
    AF_BLUE_STRINGSET_LAO = 146,
    AF_BLUE_STRINGSET_LATN = 152,
    AF_BLUE_STRINGSET_LATB = 159,
    AF_BLUE_STRINGSET_LATP = 166,
    AF_BLUE_STRINGSET_LISU = 173,
    AF_BLUE_STRINGSET_MLYM = 176,
    AF_BLUE_STRINGSET_MYMR = 179,
    AF_BLUE_STRINGSET_NKOO = 184,
    AF_BLUE_STRINGSET_NONE = 189,
    AF_BLUE_STRINGSET_OLCK = 190,
    AF_BLUE_STRINGSET_ORKH = 193,
    AF_BLUE_STRINGSET_OSGE = 196,
    AF_BLUE_STRINGSET_OSMA = 204,
    AF_BLUE_STRINGSET_SAUR = 207,
    AF_BLUE_STRINGSET_SHAW = 210,
    AF_BLUE_STRINGSET_SINH = 216,
    AF_BLUE_STRINGSET_SUND = 220,
    AF_BLUE_STRINGSET_TAML = 224,
    AF_BLUE_STRINGSET_TAVT = 227,
    AF_BLUE_STRINGSET_TELU = 230,
    AF_BLUE_STRINGSET_TFNG = 233,
    AF_BLUE_STRINGSET_THAI = 236,
    AF_BLUE_STRINGSET_VAII = 244,
    af_blue_2_1 = 247,
#ifdef AF_CONFIG_OPTION_CJK
    AF_BLUE_STRINGSET_HANI = af_blue_2_1 + 0,
    af_blue_2_1_1 = af_blue_2_1 + 2,
#ifdef AF_CONFIG_OPTION_CJK_BLUE_HANI_VERT
    af_blue_2_1_2 = af_blue_2_1_1 + 2,
#else
    af_blue_2_1_2 = af_blue_2_1_1 + 0,
#endif /* AF_CONFIG_OPTION_CJK_BLUE_HANI_VERT */
    af_blue_2_2 = af_blue_2_1_2 + 1,
#else
    af_blue_2_2 = af_blue_2_1 + 0,
#endif /* AF_CONFIG_OPTION_CJK                */
    }
    
    
    {  friend inline bool operator== (const IntPoint& a, const IntPoint& b)
  {
    return a.X == b.X && a.Y == b.Y;
  }
  friend inline bool operator!= (const IntPoint& a, const IntPoint& b)
  {
    return a.X != b.X  || a.Y != b.Y; 
  }
};
//------------------------------------------------------------------------------
    
    #include 'opus_types.h'
#include 'opus_defines.h'
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
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
    
    
    {    Transliterator::_registerSpecialInverse(UNICODE_STRING_SIMPLE('Remove'),
                                            UNICODE_STRING_SIMPLE('Null'), FALSE);
}
    
    #include 'unicode/uchar.h'
#include 'unicode/unistr.h'
    
    #include 'uelement.h'
    
    class Calendar;
    
        /**
     * Returns TRUE if this object is equal to rhs.
     */
    UBool equals(const SignificantDigitInterval &rhs) const {
        return ((fMax == rhs.fMax) && (fMin == rhs.fMin));
    }
    
    U_NAMESPACE_END
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the plural form corresponding to the keyword, or OTHER
     */
    static Form orOtherFromString(const char *keyword) {
        return static_cast<Form>(indexOrOtherIndexFromString(keyword));
    }
    
    
    {        UnicodeReplacer* r = data->lookupReplacer(c);
        if (r == NULL) {
            ICU_Utility::appendToRule(rule, c, FALSE, escapeUnprintable, quoteBuf);
        } else {
            UnicodeString buf;
            r->toReplacerPattern(buf, escapeUnprintable);
            buf.insert(0, (UChar)0x20);
            buf.append((UChar)0x20);
            ICU_Utility::appendToRule(rule, buf,
                                      TRUE, escapeUnprintable, quoteBuf);
        }
    }
    
    class DHTResponseMessage : public DHTAbstractMessage {
protected:
  virtual std::string toStringOptional() const { return A2STR::NIL; }
    }
    
      void moveBucketTail(const std::shared_ptr<DHTNode>& node);
    
      // number of nodes
  uint32_t numNodes = htonl(nodes_.size());
  WRITE_CHECK(fp, &numNodes, sizeof(uint32_t));
  // 4bytes reserved
  WRITE_CHECK(fp, zero, 4);
    
    #include 'common.h'
    
    #include 'common.h'
    
      std::chrono::seconds timeout_;
    
      virtual void process() CXX11_OVERRIDE;
    
    std::vector<DNSCache::AddrEntry>::const_iterator
DNSCache::CacheEntry::find(const std::string& addr) const
{
  for (auto i = addrEntries_.begin(), eoi = addrEntries_.end(); i != eoi; ++i) {
    if ((*i).addr_ == addr) {
      return i;
    }
  }
  return addrEntries_.end();
}
    
    #include <list>
    
      template <typename ExecutorT>
  static KeepAlive<ExecutorT> getKeepAliveToken(ExecutorT& executor) {
    static_assert(
        std::is_base_of<Executor, ExecutorT>::value,
        'getKeepAliveToken only works for folly::Executor implementations.');
    return getKeepAliveToken(&executor);
  }
    
        static constexpr result_type min() {
      return std::numeric_limits<result_type>::min();
    }
    
    TEST_F(SparseByteSetTest, empty) {
  for (auto c = lims::min(); c < lims::max(); ++c) {
    EXPECT_FALSE(s.contains(c));
  }
}
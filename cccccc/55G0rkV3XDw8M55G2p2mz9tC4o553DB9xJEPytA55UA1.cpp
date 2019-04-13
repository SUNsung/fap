
        
        // Request Shell's id for current render_view_host.
IPC_SYNC_MESSAGE_ROUTED0_1(ShellViewHostMsg_GetShellId,
                           int /* result */)
    
    
    { private:
  App();
  DISALLOW_COPY_AND_ASSIGN(App);
};
    
    #include 'content/nw/src/api/base/base.h'
    
    #endif  // CONTENT_NW_SRC_API_BASE_BASE_H_

    
    
    {}
    
    
void MenuItem::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (enable_shortcut && GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    gtk_widget_add_accelerator(
      menu_item_,
      'activate',
      gtk_accel_group,
      keyval,
      modifiers_mask,
      GTK_ACCEL_VISIBLE);
  }
  if (submenu_ != NULL){
    submenu_->UpdateKeys(gtk_accel_group);
  }
  return;
}
    
    NwAppSetProxyConfigFunction::NwAppSetProxyConfigFunction() {
}
    
        bool WriteRTF(ClipboardData& data) {
      DCHECK(data.type == TYPE_RTF);
      scw_->WriteRTF(*(data.data));
      return true;
    }
    
    void absDiff(const Size2D &size,
             const u16 *src0Base, ptrdiff_t src0Stride,
             const u16 *src1Base, ptrdiff_t src1Stride,
             u16 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<u16>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    
    {    void operator() (const u8 * src0, const u8 * src1, u8 * dst) const
    {
        dst[0] = src0[0] | src1[0];
    }
};
    
    
    {    if (!parametersSupported) {
        std::cerr << 'internal error: attempted to use a function with unsupported parameters' << std::endl;
        std::abort();
    }
}
    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_dst1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
    }
    
            vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        float32x4_t vline1Shifted_f32 = vaddq_f32(vline1_f32, vshift);
        float32x4_t vline2Shifted_f32 = vaddq_f32(vline2_f32, vshift);
        uint32x4_t vline1_u32 = vcvtq_u32_f32(vline1Shifted_f32);
        uint32x4_t vline2_u32 = vcvtq_u32_f32(vline2Shifted_f32);
        uint32x4_t vline1Mask = vbicq_u32(vmask, vreinterpretq_u32_f32(vline2_f32));
        uint32x4_t vline2Mask = vbicq_u32(vmask, vreinterpretq_u32_f32(vline1Shifted_f32));
        vline1Mask = vshrq_n_u32(vline1Mask, 16);
        vline2Mask = vshrq_n_u32(vline2Mask, 16);
        vline1_u32 = vqsubq_u32(vline1_u32, vline1Mask);
        vline2_u32 = vqsubq_u32(vline2_u32, vline2Mask);
        uint16x4_t vRes1 = vqrshrn_n_u32(vline1_u32, 16);
        uint16x4_t vRes2 = vqrshrn_n_u32(vline2_u32, 16);
        uint8x8_t vRes = vqmovn_u16(vcombine_u16(vRes1, vRes2));
    
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
    
        Size2D size(_size);
    if (srcStride == dstStride &&
        srcStride == rng1Stride &&
        srcStride == rng2Stride &&
        srcStride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    const size_t width = size.width & ~( 32/sizeof(T) - 1 );
    
    inline float32x2_t vrecp_f32(float32x2_t val)
{
    float32x2_t reciprocal = vrecpe_f32(val);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    return reciprocal;
}
    
                tnext3 = vreinterpretq_s16_u16(vaddq_u16(vaddl_u8(x3, x2),vaddl_u8(x2, x1)));
            tnext3 = vshlq_n_s16(tnext3, 1);
    
      protobuf_unittest::TestAllTypes message2;
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    TEST(TemplateUtilTest, TestTemplateAndOr) {
  // Check that the TemplateTypeEquals works correctly.
  bool value = false;
    }
    
    // Main function:  Reads the entire address book from a file,
//   adds one person based on user input, then writes it back out to the same
//   file.
int main(int argc, char* argv[]) {
  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;
    }
    
    #ifndef TESSERACT_CCMAIN_PARAGRAPHS_H_
#define TESSERACT_CCMAIN_PARAGRAPHS_H_
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
      // Fits a line to the points, returning the fitted line as a pair of
  // points, and the upper quartile error.
  double Fit(ICOORD* pt1, ICOORD* pt2) {
    return Fit(0, 0, pt1, pt2);
  }
  // Fits a line to the points, ignoring the skip_first initial points and the
  // skip_last final points, returning the fitted line as a pair of points,
  // and the upper quartile error.
  double Fit(int skip_first, int skip_last, ICOORD* pt1, ICOORD* pt2);
    
      // Deletes all existing documents from the cache.
  void Clear() {
    documents_.clear();
    num_pages_per_doc_ = 0;
  }
  // Adds all the documents in the list of filenames, counting memory.
  // The reader is used to read the files.
  bool LoadDocuments(const GenericVector<STRING>& filenames,
                     CachingStrategy cache_strategy, FileReader reader);
    
      // Prints the content of the DENORM for debug purposes.
  void Print() const;
    
    bool ParagraphModel::Comparable(const ParagraphModel &other) const {
  if (justification_ != other.justification_)
    return false;
  if (justification_ == JUSTIFICATION_CENTER ||
      justification_ == JUSTIFICATION_UNKNOWN)
    return true;
  int tolerance = (tolerance_ + other.tolerance_) / 4;
  return NearlyEqual(margin_ + first_indent_,
                     other.margin_ + other.first_indent_, tolerance) &&
         NearlyEqual(margin_ + body_indent_,
                     other.margin_ + other.body_indent_, tolerance);
}
    
      ParagraphModel()
      : justification_(tesseract::JUSTIFICATION_UNKNOWN),
         margin_(0),
         first_indent_(0),
         body_indent_(0),
         tolerance_(0) { }
    
      REJMAP &operator=(const REJMAP &source);
    
    
    {  // WARNING! Keep data as the first element! KDPairInc and KDPairDec depend
  // on the order of these elements so they can downcast pointers appropriately
  // for use by GenericHeap::Reshuffle.
  Data data;
  Key key;
};
// Specialization of KDPair to provide operator< for sorting in increasing order
// and recasting of data pointers for use with DoublePtr.
template <typename Key, typename Data>
struct KDPairInc : public KDPair<Key, Data> {
  KDPairInc() = default;
  KDPairInc(Key k, Data d) : KDPair<Key, Data>(k, d) {}
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPairInc<Key, Data>& other) const {
    return this->key < other.key;
  }
  // Returns the input Data pointer recast to a KDPairInc pointer.
  // Just casts a pointer to the first element to a pointer to the whole struct.
  static KDPairInc* RecastDataPointer(Data* data_ptr) {
    return reinterpret_cast<KDPairInc*>(data_ptr);
  }
};
// Specialization of KDPair to provide operator< for sorting in decreasing order
// and recasting of data pointers for use with DoublePtr.
template <typename Key, typename Data>
struct KDPairDec : public KDPair<Key, Data> {
  KDPairDec() = default;
  KDPairDec(Key k, Data d) : KDPair<Key, Data>(k, d) {}
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPairDec<Key, Data>& other) const {
    return this->key > other.key;
  }
  // Returns the input Data pointer recast to a KDPairDec pointer.
  // Just casts a pointer to the first element to a pointer to the whole struct.
  static KDPairDec* RecastDataPointer(Data* data_ptr) {
    return reinterpret_cast<KDPairDec*>(data_ptr);
  }
};
    
    bool b2Triangle::IsInside(float32 _x, float32 _y){
	if (_x < x[0] && _x < x[1] && _x < x[2]) return false;
	if (_x > x[0] && _x > x[1] && _x > x[2]) return false;
	if (_y < y[0] && _y < y[1] && _y < y[2]) return false;
	if (_y > y[0] && _y > y[1] && _y > y[2]) return false;
		
		float32 vx2 = _x-x[0]; float32 vy2 = _y-y[0];
		float32 vx1 = x[1]-x[0]; float32 vy1 = y[1]-y[0];
		float32 vx0 = x[2]-x[0]; float32 vy0 = y[2]-y[0];
		
		float32 dot00 = vx0*vx0+vy0*vy0;
		float32 dot01 = vx0*vx1+vy0*vy1;
		float32 dot02 = vx0*vx2+vy0*vy2;
		float32 dot11 = vx1*vx1+vy1*vy1;
		float32 dot12 = vx1*vx2+vy1*vy2;
		float32 invDenom = 1.0f / (dot00*dot11 - dot01*dot01);
		float32 u = (dot11*dot02 - dot01*dot12)*invDenom;
		float32 v = (dot00*dot12 - dot01*dot02)*invDenom;
		
		return ((u>=0)&&(v>=0)&&(u+v<=1));    
}
    
    
    {			totalEncodingTime += image.GetEncodingTimeMs();
			}
    
    		typedef void (Block4x4::*EncoderFunctionPtr)(void);
    
    			float fWeightSumLeft = fWeightSumUL + fWeightSumLL;
			float fWeightSumRight = fWeightSumUR + fWeightSumLR;
			float fWeightSumTop = fWeightSumUL + fWeightSumUR;
			float fWeightSumBottom = fWeightSumLL + fWeightSumLR;
    
      /* The AF_Blue_Stringset enumeration values are offsets into the */
  /* `af_blue_stringsets' array.                                   */
    
    /* kiss_fft.h
   defines kiss_fft_scalar as either short or a float type
   and defines
   typedef struct { kiss_fft_scalar r; kiss_fft_scalar i; }kiss_fft_cpx; */
#include 'kiss_fft.h'
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
    #include <stdint.h>
#include 'leveldb/db.h'
#include 'db/dbformat.h'
    
    static void TestKey(const std::string& key,
                    uint64_t seq,
                    ValueType vt) {
  std::string encoded = IKey(key, seq, vt);
    }
    
    
    {
    {}  // namespace
}  // namespace leveldb
    
    #ifndef STORAGE_LEVELDB_DB_LOG_READER_H_
#define STORAGE_LEVELDB_DB_LOG_READER_H_
    
    
    {}  // namespace leveldb
    
    
    {  virtual ~ExtensionProcessor() {}
};
    
    namespace osquery {
namespace tables {
    }
    }
    
    class iokitRegistry : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};
    
    
    {  ValidatatioMap row_map = {{'filter_name', NonEmptyString},
                            {'chain', NormalType},
                            {'policy', NormalType},
                            {'target', NormalType},
                            {'protocol', IntType},
                            {'src_port', IntMinMaxCheck(0, 65535)},
                            {'dst_port', IntMinMaxCheck(0, 65535)},
                            {'src_ip', verifyEmptyStringOrIpAddress},
                            {'src_mask', verifyEmptyStringOrIpAddress},
                            {'iniface', NormalType},
                            {'iniface_mask', verifyEmptyStringOrIpAddress},
                            {'dst_ip', verifyEmptyStringOrIpAddress},
                            {'dst_mask', verifyEmptyStringOrIpAddress},
                            {'outiface', NormalType},
                            {'outiface_mask', verifyEmptyStringOrIpAddress},
                            {'match', SpecificValuesCheck{'yes', 'no'}},
                            {'packets', NonNegativeInt},
                            {'bytes', NonNegativeInt}};
  validate_rows(data, row_map);
}
    
    TEST_F(kernelExtensions, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from kernel_extensions');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'idx', IntType}
  //      {'refs', IntType}
  //      {'size', IntType}
  //      {'name', NormalType}
  //      {'version', NormalType}
  //      {'linked_against', NormalType}
  //      {'path', NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
    
    {
    {} // namespace table_tests
} // namespace osquery

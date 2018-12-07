
        
        void absDiff(const Size2D &size,
             const u8 *src0Base, ptrdiff_t src0Stride,
             const u8 *src1Base, ptrdiff_t src1Stride,
             u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<u8>());
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
    
    #include <cstring>
    
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
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0, const typename internal::VecTraits<T>::vec128 & v_src1,
              typename internal::VecTraits<T>::unsign::vec128 & v_dst) const
    {
        v_dst = internal::vmvnq(internal::vceqq(v_src0, v_src1));
    }
    
        v1k0 = vextq_s16(d0_7, d8_15, 6);
    ak0 = vminq_s16(ak0, v1k0);
    bk0 = vmaxq_s16(bk0, v1k0);
    
                uint8x8_t el8shr0 = vld1_u8(src + j);
            uint8x8_t el8shr1 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 8));
            uint8x8_t el8shr2 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 16));
            uint8x8_t el8shr3 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 24));
    
    
    {}  // namespace tesseract.
    
    #include <cstdint>  // for int16_t
    
    const PageIterator& PageIterator::operator=(const PageIterator& src) {
  page_res_ = src.page_res_;
  tesseract_ = src.tesseract_;
  include_upper_dots_ = src.include_upper_dots_;
  include_lower_dots_ = src.include_lower_dots_;
  scale_ = src.scale_;
  scaled_yres_ = src.scaled_yres_;
  rect_left_ = src.rect_left_;
  rect_top_ = src.rect_top_;
  rect_width_ = src.rect_width_;
  rect_height_ = src.rect_height_;
  delete it_;
  it_ = new PAGE_RES_IT(*src.it_);
  BeginWord(src.blob_index_);
  return *this;
}
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
      const UNICHARSET &unicharset = *word->uch_set;
  word->ClearResults();
  word2->ClearResults();
  word->chopped_word = chopped;
  word2->chopped_word = chopped2;
  word->SetupBasicsFromChoppedWord(unicharset);
  word2->SetupBasicsFromChoppedWord(unicharset);
    
    /// Base class for all tesseract image thresholding classes.
/// Specific classes can add new thresholding methods by
/// overriding ThresholdToPix.
/// Each instance deals with a single image, but the design is intended to
/// be useful for multiple calls to SetRectangle and ThresholdTo* if
/// desired.
class TESS_API ImageThresholder {
 public:
  ImageThresholder();
  virtual ~ImageThresholder();
    }
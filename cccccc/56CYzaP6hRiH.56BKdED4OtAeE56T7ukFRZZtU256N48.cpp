
        
        TegraCvtColor_Invoker(rgb2hsv, rgb2hsv, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                        dst_data + static_cast<size_t>(range.start) * dst_step, dst_step, 180)
TegraCvtColor_Invoker(bgr2hsv, bgr2hsv, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                        dst_data + static_cast<size_t>(range.start) * dst_step, dst_step, 180)
TegraCvtColor_Invoker(rgbx2hsv, rgbx2hsv, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                          dst_data + static_cast<size_t>(range.start) * dst_step, dst_step, 180)
TegraCvtColor_Invoker(bgrx2hsv, bgrx2hsv, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                          dst_data + static_cast<size_t>(range.start) * dst_step, dst_step, 180)
TegraCvtColor_Invoker(rgb2hsvf, rgb2hsv, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                         dst_data + static_cast<size_t>(range.start) * dst_step, dst_step, 256)
TegraCvtColor_Invoker(bgr2hsvf, bgr2hsv, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                         dst_data + static_cast<size_t>(range.start) * dst_step, dst_step, 256)
TegraCvtColor_Invoker(rgbx2hsvf, rgbx2hsv, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                           dst_data + static_cast<size_t>(range.start) * dst_step, dst_step, 256)
TegraCvtColor_Invoker(bgrx2hsvf, bgrx2hsv, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                           dst_data + static_cast<size_t>(range.start) * dst_step, dst_step, 256)
#define TEGRA_CVTBGRTOHSV(src_data, src_step, dst_data, dst_step, width, height, depth, scn, swapBlue, isFullRange, isHSV) \
( \
    isHSV && depth == CV_8U && CAROTENE_NS::isSupportedConfiguration() ? \
        scn == 3 ? \
            (swapBlue ? \
                isFullRange ? \
                    parallel_for_(Range(0, height), \
                    TegraCvtColor_rgb2hsvf_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                    (width * height) / static_cast<double>(1<<16)) : \
                    parallel_for_(Range(0, height), \
                    TegraCvtColor_rgb2hsv_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                    (width * height) / static_cast<double>(1<<16)) : \
                isFullRange ? \
                    parallel_for_(Range(0, height), \
                    TegraCvtColor_bgr2hsvf_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                    (width * height) / static_cast<double>(1<<16)) : \
                    parallel_for_(Range(0, height), \
                    TegraCvtColor_bgr2hsv_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                    (width * height) / static_cast<double>(1<<16)) ), \
            CV_HAL_ERROR_OK : \
        scn == 4 ? \
            (swapBlue ? \
                isFullRange ? \
                    parallel_for_(Range(0, height), \
                    TegraCvtColor_rgbx2hsvf_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                    (width * height) / static_cast<double>(1<<16)) : \
                    parallel_for_(Range(0, height), \
                    TegraCvtColor_rgbx2hsv_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                    (width * height) / static_cast<double>(1<<16)) : \
                isFullRange ? \
                    parallel_for_(Range(0, height), \
                    TegraCvtColor_bgrx2hsvf_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                    (width * height) / static_cast<double>(1<<16)) : \
                    parallel_for_(Range(0, height), \
                    TegraCvtColor_bgrx2hsv_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                    (width * height) / static_cast<double>(1<<16)) ), \
            CV_HAL_ERROR_OK : \
        CV_HAL_ERROR_NOT_IMPLEMENTED \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
                float32x4_t lane0b = vld1q_f32(laneB + x - cn);
            float32x4_t lane2b = vld1q_f32(laneB + x + cn);
            float32x4_t lane1b = vld1q_f32(laneB + x);
    
                v_src0 = internal::vld1q(src0 + x);
            v_src1 = internal::vld1q(src1 + x);
            op(v_src0, v_src1, v_dst);
            internal::vst1q(dst + x, v_dst);
            x+=16;
        }
        if( x + 8 < width)
        {
            vec64  v_src0, v_src1;
            uvec64 v_dst;
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVT_FUNC(u8, s32, 16,
     register uint8x16_t zero0 asm ('q1') = vmovq_n_u8(0);
     register uint8x16_t zero1 asm ('q2') = vmovq_n_u8(0);
     register uint8x16_t zero2 asm ('q3') = vmovq_n_u8(0);,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.8 {d0-d1}, [%[src]]                              \n\t'
             'vst4.8 {d0,d2,d4,d6}, [%[dst1]]                       \n\t'
             'vst4.8 {d1,d3,d5,d7}, [%[dst2]]                       \n\t'
             : /*no output*/
             : [src] 'r' (_src + i),
               [dst1] 'r' (_dst + i + 0),
               [dst2] 'r' (_dst + i + 8),
               'w' (zero0), 'w' (zero1), 'w' (zero2)
             : 'd0','d1'
         );
     }
})
#else
CVT_FUNC(u8, s32, 16,
     uint8x16x4_t vline;
     vline.val[1] = vmovq_n_u8(0);
     vline.val[2] = vmovq_n_u8(0);
     vline.val[3] = vmovq_n_u8(0);,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
        vline.val[0] = vld1q_u8(_src + i);
        vst4q_u8((uint8_t*)(_dst + i), vline);
     }
})
#endif
    
                    uint16x8_t vSum_4_8  = vaddq_u16(vLane4.val[0], vLane6.val[0]);
                uint16x8_t vSum_5_9  = vaddq_u16(vLane4.val[1], vLane6.val[1]);
                uint16x8_t vSum_6_10 = vaddq_u16(vLane4.val[2], vLane6.val[2]);
                uint16x8_t vSum_7_11 = vaddq_u16(vLane4.val[3], vLane6.val[3]);
    
    
    {		*a_piEncodingTime_ms = totalEncodingTime;
	}
    
    	// C-style inteface to the encoder
	void Encode(float *a_pafSourceRGBA,
				unsigned int a_uiSourceWidth,
				unsigned int a_uiSourceHeight,
				Image::Format a_format,
				ErrorMetric a_eErrMetric,
				float a_fEffort,
				unsigned int a_uiJobs,
				unsigned int a_uimaxJobs,
				unsigned char **a_ppaucEncodingBits,
				unsigned int *a_puiEncodingBitsBytes,
				unsigned int *a_puiExtendedWidth,
				unsigned int *a_puiExtendedHeight,
				int *a_piEncodingTime_ms, bool a_bVerboseOutput = false);
    
    						for (unsigned int uiPixel = 0; uiPixel < 8; uiPixel++)
						{
							ColorFloatRGBA *pfrgbaSourcePixel = &m_pafrgbaSource[a_phalf->m_pauiPixelMapping[uiPixel]];
							ColorFloatRGBA frgbaDecodedPixel;
    }
    
       C_MUL(m,a,b)         : m = a*b
   C_FIXDIV( c , div )  : if a fixed point impl., c /= div. noop otherwise
   C_SUB( res, a,b)     : res = a - b
   C_SUBFROM( res , a)  : res -= a
   C_ADDTO( res , a)    : res += a
 * */
#ifdef FIXED_POINT
#include 'arch.h'
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
    void silk_insertion_sort_decreasing_int16(
    opus_int16                  *a,                 /* I/O   Unsorted / Sorted vector                                   */
    opus_int                    *idx,               /* O     Index vector for the sorted elements                       */
    const opus_int              L,                  /* I     Vector length                                              */
    const opus_int              K                   /* I     Number of correctly sorted positions                       */
);
    
    #ifndef SILK_MACROS_ARMv4_H
#define SILK_MACROS_ARMv4_H
    
    //////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    namespace xgboost {
/*!
 * \brief interface of gradient boosting model.
 */
class GradientBooster {
 public:
  /*! \brief virtual destructor */
  virtual ~GradientBooster() = default;
  /*!
   * \brief set configuration from pair iterators.
   * \param begin The beginning iterator.
   * \param end The end iterator.
   * \tparam PairIter iterator<std::pair<std::string, std::string> >
   */
  template<typename PairIter>
  inline void Configure(PairIter begin, PairIter end);
  /*!
   * \brief Set the configuration of gradient boosting.
   *  User must call configure once before InitModel and Training.
   *
   * \param cfg configurations on both training and model parameters.
   */
  virtual void Configure(const std::vector<std::pair<std::string, std::string> >& cfg) = 0;
  /*!
   * \brief load model from stream
   * \param fi input stream.
   */
  virtual void Load(dmlc::Stream* fi) = 0;
  /*!
   * \brief save model to stream.
   * \param fo output stream
   */
  virtual void Save(dmlc::Stream* fo) const = 0;
  /*!
   * \brief whether the model allow lazy checkpoint
   * return true if model is only updated in DoBoost
   * after all Allreduce calls
   */
  virtual bool AllowLazyCheckPoint() const {
    return false;
  }
  /*!
   * \brief perform update to the model(boosting)
   * \param p_fmat feature matrix that provide access to features
   * \param in_gpair address of the gradient pair statistics of the data
   * \param obj The objective function, optional, can be nullptr when use customized version
   * the booster may change content of gpair
   */
  virtual void DoBoost(DMatrix* p_fmat,
                       HostDeviceVector<GradientPair>* in_gpair,
                       ObjFunction* obj = nullptr) = 0;
    }
    }
    
    class SparsePageRawFormat : public SparsePageFormat {
 public:
  bool Read(SparsePage* page, dmlc::SeekStream* fi) override {
    auto& offset_vec = page->offset.HostVector();
    if (!fi->Read(&offset_vec)) return false;
    auto& data_vec = page->data.HostVector();
    CHECK_NE(page->offset.Size(), 0U) << 'Invalid SparsePage file';
    data_vec.resize(offset_vec.back());
    if (page->data.Size() != 0) {
      CHECK_EQ(fi->Read(dmlc::BeginPtr(data_vec),
                        (page->data).Size() * sizeof(Entry)),
               (page->data).Size() * sizeof(Entry))
          << 'Invalid SparsePage file';
    }
    return true;
  }
    }
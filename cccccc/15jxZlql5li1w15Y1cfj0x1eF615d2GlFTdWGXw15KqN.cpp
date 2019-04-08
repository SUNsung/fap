
        
        #include 'tensorflow/python/lib/core/numpy.h'
    
    
    {  VLOG(2) << 'building executor';
  port::StatusOr<std::unique_ptr<StreamExecutor>> result = factory();
  if (!result.ok()) {
    VLOG(2) << 'failed to get build executor: ' << result.status();
    // If construction failed, leave the cache Entry around, but with a null
    // executor.
    return result.status();
  }
  entry->configurations.emplace_back(config, std::move(result.ValueOrDie()));
  return entry->configurations.back().second.get();
}
    
      // Creates a 2d FFT plan with scratch allocator.
  virtual std::unique_ptr<Plan> Create2dPlanWithScratchAllocator(
      Stream *stream, uint64 num_x, uint64 num_y, Type type, bool in_place_fft,
      ScratchAllocator *scratch_allocator) = 0;
    
    
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    #ifndef CONTENT_NW_SRC_API_BASE_BASE_H_
#define CONTENT_NW_SRC_API_BASE_BASE_H_
    
    void Clipboard::SetText(std::string& text) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  ui::Clipboard::ObjectMap map;
  map[ui::Clipboard::CBF_TEXT].push_back(
      std::vector<char>(text.begin(), text.end()));
  clipboard->WriteObjects(ui::CLIPBOARD_TYPE_COPY_PASTE, map);
}
    
    
    {}  // namespace nwapi
    
    class BaseEvent {
  friend class EventListener;
  DISALLOW_COPY_AND_ASSIGN(BaseEvent);
    }
    
        bool ReadRTF(ClipboardData& data) {
      DCHECK(data.type == TYPE_RTF);
      std::string text;
      clipboard_->ReadRTF(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
      data.data.reset(new std::string(text));
      return true;
    }
    
    
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
    void absDiff(const Size2D &size,
             const f32 * src0Base, ptrdiff_t src0Stride,
             const f32 * src1Base, ptrdiff_t src1Stride,
             f32 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<f32>());
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
    
    #else
    
             int16x8_t vline1_s16 = vmovl_s8(vget_low_s8(vline_s8));
         int16x8_t vline2_s16 = vmovl_s8(vget_high_s8(vline_s8));
    
            if (cpolicy == CONVERT_POLICY_SATURATE)
        {
            for (; j < roiw16; j += 16)
            {
                internal::prefetch(src + j);
                int16x8_t v_src0 = vshrq_n_s16(vld1q_s16(src + j), shift),
                          v_src1 = vshrq_n_s16(vld1q_s16(src + j + 8), shift);
                uint8x16_t v_dst = vcombine_u8(vqmovun_s16(v_src0),
                                               vqmovun_s16(v_src1));
                vst1q_u8(dst + j, v_dst);
            }
            for (; j < roiw8; j += 8)
            {
                int16x8_t v_src = vshrq_n_s16(vld1q_s16(src + j), shift);
                vst1_u8(dst + j, vqmovun_s16(v_src));
            }
    }
    
                uint8x8_t vsrc = vld1_u8(src + j);
    
    #ifndef B2_TRIANGLE_H
#define B2_TRIANGLE_H
    
    		void InitFromEtcEncodingBits(Image::Format a_imageformat,
										unsigned int a_uiSourceH,
										unsigned int a_uiSourceV,
										unsigned char *a_paucEncodingBits,
										Image *a_pimageSource,
										ErrorMetric a_errormetric);
    
    			ColorFloatRGBA frgbaSumLL = afrgbaAlphaWeightedSource[2] +
										afrgbaAlphaWeightedSource[3] +
										afrgbaAlphaWeightedSource[6] +
										afrgbaAlphaWeightedSource[7];
    
      FT_LOCAL( void )
  af_latin_metrics_init_widths( AF_LatinMetrics  metrics,
                                FT_Face          face );
    
    
    {
    {        //test for duplicate points and collinear edges ...
        if ((pp->Pt == pp->Next->Pt) || (pp->Pt == pp->Prev->Pt) ||
            (SlopesEqual(pp->Prev->Pt, pp->Pt, pp->Next->Pt, m_UseFullRange) &&
            (!preserveCol || !Pt2IsBetweenPt1AndPt3(pp->Prev->Pt, pp->Pt, pp->Next->Pt))))
        {
            lastOK = 0;
            OutPt *tmp = pp;
            pp->Prev->Next = pp->Next;
            pp->Next->Prev = pp->Prev;
            pp = pp->Prev;
            delete tmp;
        }
        else if (pp == lastOK) break;
        else
        {
            if (!lastOK) lastOK = pp;
            pp = pp->Next;
        }
    }
    outrec.Pts = pp;
}
//------------------------------------------------------------------------------
    
    #endif /* HAVE_ARM_NE10 */
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
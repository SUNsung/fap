
        
        #endif  // PYTHON_PROTO2_PYTHON_IMPL
#endif  // PYTHON_PROTO2_CPP_IMPL_V2
#endif  // PYTHON_PROTO2_CPP_IMPL_V1
    
    
    {  // Moving messages on two different arenas should lead to a copy.
  *message2_on_arena = std::move(*message1_on_arena);
  EXPECT_NE(nested, &message2_on_arena->optional_nested_message());
  TestUtil::ExpectAllFieldsSet(*message1_on_arena);
  TestUtil::ExpectAllFieldsSet(*message2_on_arena);
}
    
    // Author: kenton@google.com (Kenton Varda)
// emulates google3/testing/base/public/googletest.cc
    
      while (true) {
    void* outptr;
    int outlen;
    bool ok;
    do {
      ok = out.Next(&outptr, &outlen);
      if (!ok) {
        break;
      }
    } while (outlen <= 0);
    readlen = read(STDIN_FILENO, outptr, outlen);
    if (readlen <= 0) {
      out.BackUp(outlen);
      break;
    }
    if (readlen < outlen) {
      out.BackUp(outlen - readlen);
    }
  }
    
    
    {    func(size, srcBase, srcStride, dstBase, dstStride);
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)shift;
#endif
}
    
        void operator() (const uint8x8_t & v_src0, const uint8x8_t & v_src1,
                     uint8x8_t & v_dst) const
    {
        v_dst = veor_u8(v_src0, v_src1);
    }
    
    #define CONTDST2 srcStride == dst0Stride && \
                 srcStride == dst1Stride &&
#define CONTDST3 srcStride == dst0Stride && \
                 srcStride == dst1Stride && \
                 srcStride == dst2Stride &&
#define CONTDST4 srcStride == dst0Stride && \
                 srcStride == dst1Stride && \
                 srcStride == dst2Stride && \
                 srcStride == dst3Stride &&
    
    
    {            v_y = vld2q_u8(srcy + syj + 32);
            v_dst.val[0] = v_y.val[0];
            v_dst.val[1] = vld1q_u8(srcu + sj + 16);
            v_dst.val[2] = v_y.val[1];
            v_dst.val[3] = vld1q_u8(srcv + sj + 16);
            vst4q_u8(dst + dj + 64, v_dst);
        }
#endif
    
    namespace CAROTENE_NS {
    }
    
             int32x4_t vline_s32_lo = vmovl_s16(vget_low_s16(vline_s16));
         int32x4_t vline_s32_hi = vmovl_s16(vget_high_s16(vline_s16));
         float32x4_t vline_f32_lo = vcvtq_f32_s32(vline_s32_lo);
         float32x4_t vline_f32_hi = vcvtq_f32_s32(vline_s32_hi);
    
      /** Are we positioned at the same location as other? */
  bool PositionedAtSameWord(const PAGE_RES_IT* other) const;
    
      // go through the list again and this time create the menu structure.
  vc_it.move_to_first();
  for (vc_it.mark_cycle_pt(); !vc_it.cycled_list(); vc_it.forward()) {
    ParamContent* vc = vc_it.data();
    STRING tag;
    STRING tag2;
    STRING tag3;
    GetPrefixes(vc->GetName(), &tag, &tag2, &tag3);
    }
    
    void FullPageBlock(int width, int height, BLOCK_LIST *blocks) {
  BLOCK_IT block_it(blocks);
  BLOCK* block = new BLOCK('', TRUE, 0, 0, 0, 0, width, height);
  block_it.add_to_end(block);
}

    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }
    
    class WordFeature {
 public:
  WordFeature();
  WordFeature(const FCOORD& fcoord, uint8_t dir);
    }
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H */

    
      void Add(const std::function<void()>& callback) override;
    
    
    {template<typename IndexType, typename DType = real_t>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    
    {
    {/*!
 * \brief Quantile sketch use WXQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class WXQuantileSketch :
      public QuantileSketchTemplate<DType, RType, WXQSummary<DType, RType> > {
};
/*!
 * \brief Quantile sketch use WQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class GKQuantileSketch :
      public QuantileSketchTemplate<DType, RType, GKSummary<DType, RType> > {
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_QUANTILE_H_

    
    /*!
 * \brief Registry entry for tree updater.
 */
struct GradientBoosterReg
    : public dmlc::FunctionRegEntryBase<
  GradientBoosterReg,
  std::function<GradientBooster* (const std::vector<std::shared_ptr<DMatrix> > &cached_mats,
                                  bst_float base_margin)> > {
};
    
    
    { private:
  // default chunk size.
  static const size_t kChunkSize = 64 << 10UL;
  // maximum chunk size.
  static const size_t kMaxChunk = 128;
  // bool whether use hc
  bool use_lz4_hc_;
  // number of threads
  int nthread_;
  // number of writing threads
  int nthread_write_;
  // raw bytes
  size_t raw_bytes_, raw_bytes_index_, raw_bytes_value_;
  // encoded bytes
  size_t encoded_bytes_index_, encoded_bytes_value_;
  /*! \brief minimum index value */
  uint32_t min_index_;
  /*! \brief external memory column offset */
  std::vector<size_t> disk_offset_;
  // internal index
  CompressArray<StorageIndex> index_;
  // value set.
  CompressArray<bst_float> value_;
};
    
    DMLC_REGISTRY_FILE_TAG(rank_obj);
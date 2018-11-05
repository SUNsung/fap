#define MERGE_ASM2(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vst2.' #bits ' {d0, d2}, [%[out0]]           \n\t' \
                                          'vst2.' #bits ' {d1, d3}, [%[out1]]           \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL2(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3' \
                                      );
#define MERGE_ASM3(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vld1.' #bits ' {d4-d5}, [%[in2]]             \n\t' \
                                          'vst3.' #bits ' {d0, d2, d4}, [%[out0]]       \n\t' \
                                          'vst3.' #bits ' {d1, d3, d5}, [%[out1]]       \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), [in2] 'r' (src2 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL3(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5' \
                                      );
#define MERGE_ASM4(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vld1.' #bits ' {d4-d5}, [%[in2]]             \n\t' \
                                          'vld1.' #bits ' {d6-d7}, [%[in3]]             \n\t' \
                                          'vst4.' #bits ' {d0, d2, d4, d6}, [%[out0]]   \n\t' \
                                          'vst4.' #bits ' {d1, d3, d5, d7}, [%[out1]]   \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), [in2] 'r' (src2 + sj), [in3] 'r' (src3 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL4(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5','d6','d7' \
                                      );
    
    #if !defined(__aarch64__) && defined(__GNUC__) && defined(__arm__)
CVTS_FUNC(s8, u16, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s8 q3, d4                                       \n\t'
            'vmovl.s8 q4, d5                                       \n\t'
            'vmovl.s16 q5, d6                                      \n\t'
            'vmovl.s16 q6, d7                                      \n\t'
            'vmovl.s16 q7, d8                                      \n\t'
            'vmovl.s16 q8, d9                                      \n\t'
            'vcvt.f32.s32 q9, q5                                   \n\t'
            'vcvt.f32.s32 q10, q6                                  \n\t'
            'vcvt.f32.s32 q11, q7                                  \n\t'
            'vcvt.f32.s32 q12, q8                                  \n\t'
            'vmul.f32 q13, q9, q0                                  \n\t'
            'vmul.f32 q14, q10, q0                                 \n\t'
            'vmul.f32 q15, q11, q0                                 \n\t'
            'vmul.f32 q2, q12, q0                                  \n\t'
            'vadd.f32 q3, q13, q1                                  \n\t'
            'vadd.f32 q4, q14, q1                                  \n\t'
            'vadd.f32 q5, q15, q1                                  \n\t'
            'vadd.f32 q6, q2, q1                                   \n\t'
            'vcvt.s32.f32 q7, q3                                   \n\t'
            'vcvt.s32.f32 q8, q4                                   \n\t'
            'vcvt.s32.f32 q9, q5                                   \n\t'
            'vcvt.s32.f32 q10, q6                                  \n\t'
            'vqmovun.s32 d22, q7                                   \n\t'
            'vqmovun.s32 d23, q8                                   \n\t'
            'vqmovun.s32 d24, q9                                   \n\t'
            'vqmovun.s32 d25, q10                                  \n\t'
            'vst1.16 {d22-d23}, [%[dst1]]                          \n\t'
            'vst1.16 {d24-d25}, [%[dst2]]                          \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 8),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28','d29','d30','d31'
        );
    }
})
#else
CVTS_FUNC(s8, u16, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        int8x16_t vline = vld1q_s8(_src + i);
        int16x8_t vline1_s16 = vmovl_s8(vget_low_s8 (vline));
        int16x8_t vline2_s16 = vmovl_s8(vget_high_s8(vline));
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline1_s16));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline1_s16));
        int32x4_t vline3_s32 = vmovl_s16(vget_low_s16 (vline2_s16));
        int32x4_t vline4_s32 = vmovl_s16(vget_high_s16(vline2_s16));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        float32x4_t vline3_f32 = vcvtq_f32_s32(vline3_s32);
        float32x4_t vline4_f32 = vcvtq_f32_s32(vline4_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline3_f32 = vmulq_f32(vline3_f32, vscale);
        vline4_f32 = vmulq_f32(vline4_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline3_f32 = vaddq_f32(vline3_f32, vshift);
        vline4_f32 = vaddq_f32(vline4_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        vline3_s32 = vcvtq_s32_f32(vline3_f32);
        vline4_s32 = vcvtq_s32_f32(vline4_f32);
        uint16x8_t vRes1_u16 = vcombine_u16(vqmovun_s32(vline1_s32), vqmovun_s32(vline2_s32));
        uint16x8_t vRes2_u16 = vcombine_u16(vqmovun_s32(vline3_s32), vqmovun_s32(vline4_s32));
        vst1q_u16(_dst + i + 0, vRes1_u16);
        vst1q_u16(_dst + i + 8, vRes2_u16);
    }
})
#endif
    
        std::vector<u8> _buf((size.width+16)*3*(sizeof(ptrdiff_t) + sizeof(u8)) + 128);
    u8* buf[3];
    buf[0] = &_buf[0]; buf[1] = buf[0] + size.width; buf[2] = buf[1] + size.width;
    ptrdiff_t* cpbuf[3];
    cpbuf[0] = (ptrdiff_t*)internal::alignPtr(buf[2] + size.width, sizeof(ptrdiff_t)) + 1;
    cpbuf[1] = cpbuf[0] + size.width + 1;
    cpbuf[2] = cpbuf[1] + size.width + 1;
    memset(buf[0], 0, size.width*3);
    
    #define INRANGEFUNC(T)                                       \
void inRange(const Size2D &_size,                            \
             const T * srcBase, ptrdiff_t srcStride,         \
             const T * rng1Base, ptrdiff_t rng1Stride,       \
             const T * rng2Base, ptrdiff_t rng2Stride,       \
             u8 * dstBase, ptrdiff_t dstStride)              \
{                                                            \
    internal::assertSupportedConfiguration();                \
    inRangeCheck(_size, srcBase, srcStride,                  \
                 rng1Base, rng1Stride, rng2Base, rng2Stride, \
                 dstBase, dstStride);                        \
}
#else
#define INRANGEFUNC(T)                                       \
void inRange(const Size2D &,                                 \
             const T *, ptrdiff_t,                           \
             const T *, ptrdiff_t,                           \
             const T *, ptrdiff_t,                           \
             u8 *, ptrdiff_t)                                \
{                                                            \
    internal::assertSupportedConfiguration();                \
}
#endif
    
    // Deserializing an array could give back a different ArrayKind than we need,
// so we have to go with the slow case of calling a collection constructor.
NEVER_INLINE
Object createFromSerialized(CollectionType colType, APCHandle* handle) {
  auto const col = Object::attach(collections::alloc(colType));
  auto const arr = handle->toLocal();
  switch (colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    static_cast<BaseVector*>(col.get())->init(arr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    static_cast<BaseSet*>(col.get())->init(arr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    static_cast<BaseMap*>(col.get())->init(arr);
    break;
  case CollectionType::Pair:
    not_reached();
    break;
  }
  return col;
}
    
          std::string line = argv[cnt+1];
      std::string section = 'php';
      int pos_period = line.find_first_of('.');
      int pos_equals = line.find_first_of('=');
    
    
    {  return write(csvline.detach());
}
    
       file_iterator();
   file_iterator(const char* wild);
   ~file_iterator();
   file_iterator(const file_iterator&);
   file_iterator& operator=(const file_iterator&);
   const char* root()const { return _root; }
   const char* path()const { return _path; }
   const char* name()const { return ptr; }
   _fi_find_data* data() { return &(ref->_data); }
   void next();
   file_iterator& operator++() { next(); return *this; }
   file_iterator operator++(int);
   const char* operator*() { return path(); }
    
    #  ifndef BOOST_REGEX_INSTANTIATE
#     ifdef __GNUC__
#        define template __extension__ extern template
#     else
#        if BOOST_MSVC > 1310
#           define BOOST_REGEX_TEMPLATE_DECL
#        endif
#        define template extern template
#     endif
#  endif
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_match.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Iterator traits for selecting an iterator type as
  *                an integral constant expression.
  */
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         mem_block_cache.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: memory block cache used by the non-recursive matcher.
  */
    
    //
// error checking API:
//
BOOST_REGEX_DECL void BOOST_REGEX_CALL verify_options(boost::regex_constants::syntax_option_type ef, match_flag_type mf);
//
// function can_start:
//
template <class charT>
inline bool can_start(charT c, const unsigned char* map, unsigned char mask)
{
   return ((c < static_cast<charT>(0)) ? true : ((c >= static_cast<charT>(1 << CHAR_BIT)) ? true : map[c] & mask));
}
inline bool can_start(char c, const unsigned char* map, unsigned char mask)
{
   return map[(unsigned char)c] & mask;
}
inline bool can_start(signed char c, const unsigned char* map, unsigned char mask)
{
   return map[(unsigned char)c] & mask;
}
inline bool can_start(unsigned char c, const unsigned char* map, unsigned char mask)
{
   return map[c] & mask;
}
inline bool can_start(unsigned short c, const unsigned char* map, unsigned char mask)
{
   return ((c >= (1 << CHAR_BIT)) ? true : map[c] & mask);
}
#if !defined(__hpux) && !defined(__WINSCW__)// WCHAR_MIN not usable in pp-directives.
#if defined(WCHAR_MIN) && (WCHAR_MIN == 0) && !defined(BOOST_NO_INTRINSIC_WCHAR_T)
inline bool can_start(wchar_t c, const unsigned char* map, unsigned char mask)
{
   return ((c >= static_cast<wchar_t>(1u << CHAR_BIT)) ? true : map[c] & mask);
}
#endif
#endif
#if !defined(BOOST_NO_INTRINSIC_WCHAR_T)
inline bool can_start(unsigned int c, const unsigned char* map, unsigned char mask)
{
   return (((c >= static_cast<unsigned int>(1u << CHAR_BIT)) ? true : map[c] & mask));
}
#endif
    
    template <class OutputIterator, class Results, class traits, class ForwardIter>
void basic_regex_formatter<OutputIterator, Results, traits, ForwardIter>::put(char_type c)
{
   // write a single character to output
   // according to which case translation mode we are in:
   switch(this->m_state)
   {
   case output_none:
      return;
   case output_next_lower:
      c = m_traits.tolower(c);
      this->m_state = m_restore_state;
      break;
   case output_next_upper:
      c = m_traits.toupper(c);
      this->m_state = m_restore_state;
      break;
   case output_lower:
      c = m_traits.tolower(c);
      break;
   case output_upper:
      c = m_traits.toupper(c);
      break;
   default:
      break;
   }
   *m_out = c;
   ++m_out;
}
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_grep.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides regex_grep implementation.
  */
    
    template <class OutputIterator, class Iterator, class traits, class charT>
inline OutputIterator regex_merge(OutputIterator out,
                         Iterator first,
                         Iterator last,
                         const basic_regex<charT, traits>& e, 
                         const std::basic_string<charT>& fmt,
                         match_flag_type flags = match_default)
{
   return regex_merge(out, first, last, e, fmt.c_str(), flags);
}
    
    struct empty_padding{};
    
      const dmlc::RowBlock<IndexType>& Value() const override {
    return out_;
  }
    
     private:
  dmlc::Stream *fp;
  int buf_top;
  unsigned char buf[4];
  std::string out_buf;
  static const size_t kBufferSize = 256;
    
     private:
  // try to prune off current leaf
  inline int TryPruneLeaf(RegTree &tree, int nid, int depth, int npruned) { // NOLINT(*)
    if (tree[nid].IsRoot()) return npruned;
    int pid = tree[nid].Parent();
    RegTree::NodeStat &s = tree.Stat(pid);
    ++s.leaf_child_cnt;
    if (s.leaf_child_cnt >= 2 && param_.NeedPrune(s.loss_chg, depth - 1)) {
      // need to be pruned
      tree.ChangeToLeaf(pid, param_.learning_rate * s.base_weight);
      // tail recursion
      return this->TryPruneLeaf(tree, pid, depth - 1, npruned + 2);
    } else {
      return npruned;
    }
  }
  /*! \brief do pruning of a tree */
  inline void DoPrune(RegTree &tree) { // NOLINT(*)
    int npruned = 0;
    // initialize auxiliary statistics
    for (int nid = 0; nid < tree.param.num_nodes; ++nid) {
      tree.Stat(nid).leaf_child_cnt = 0;
    }
    for (int nid = 0; nid < tree.param.num_nodes; ++nid) {
      if (tree[nid].IsLeaf()) {
        npruned = this->TryPruneLeaf(tree, nid, tree.GetDepth(nid), npruned);
      }
    }
    if (!param_.silent) {
      LOG(INFO) << 'tree pruning end, ' << tree.param.num_roots << ' roots, '
                << tree.NumExtraNodes() << ' extra nodes, ' << npruned
                << ' pruned nodes, max_depth=' << tree.MaxDepth();
    }
  }
    
      xgboost::tree::SplitEntry se2;
  EXPECT_FALSE(se1.Update(se2));
  EXPECT_FALSE(se2.Update(-1, 100, 0, true));
  ASSERT_TRUE(se2.Update(1, 100, 0, true));
  ASSERT_TRUE(se1.Update(se2));
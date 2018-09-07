
        
            void operator() (const typename internal::VecTraits<T>::vec128 & v_src0,
                     const typename internal::VecTraits<T>::vec128 & v_src1,
                     typename internal::VecTraits<T>::vec128 & v_dst) const
    {
        v_dst = internal::vqaddq(v_src0, v_src1);
    }
    
    using namespace internal;
    
    
    {} // namespace CAROTENE_NS

    
        v += fastSaturate8u[g-v+256];
    v += fastSaturate8u[r-v+256];
    vmin -= fastSaturate8u[vmin-g+256];
    vmin -= fastSaturate8u[vmin-r+256];
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s8, f32, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
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
            'vst1.32 {d6-d7}, [%[dst1]]                            \n\t'
            'vst1.32 {d8-d9}, [%[dst2]]                            \n\t'
            'vst1.32 {d10-d11}, [%[dst3]]                          \n\t'
            'vst1.32 {d12-d13}, [%[dst4]]                          \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              [dst3] 'r' (_dst + i + 8),
              [dst4] 'r' (_dst + i + 12),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10',
            'd11','d12','d13','d14','d15','d16','d17',
            'd18','d19','d20','d21','d22','d23','d24',
            'd25','d26','d27','d28','d29','d30','d31'
        );
    }
})
#else
CVTS_FUNC(s8, f32, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
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
        vst1q_f32(_dst + i + 0,  vline1_f32);
        vst1q_f32(_dst + i + 4,  vline2_f32);
        vst1q_f32(_dst + i + 8,  vline3_f32);
        vst1q_f32(_dst + i + 12, vline4_f32);
    }
})
#endif
    
    
    {            if (mask)
                process(src, j, j + 8, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
        }
    
    TEST(AutoCompactTest, ReadAll) {
  DoReads(kCount);
}
    
      std::string fname = TableFileName(dbname, meta->number);
  if (iter->Valid()) {
    WritableFile* file;
    s = env->NewWritableFile(fname, &file);
    if (!s.ok()) {
      return s;
    }
    }
    
      void PrintHeader() {
    const int kKeySize = 16;
    PrintEnvironment();
    fprintf(stdout, 'Keys:       %d bytes each\n', kKeySize);
    fprintf(stdout, 'Values:     %d bytes each (%d bytes after compression)\n',
            FLAGS_value_size,
            static_cast<int>(FLAGS_value_size * FLAGS_compression_ratio + 0.5));
    fprintf(stdout, 'Entries:    %d\n', num_);
    fprintf(stdout, 'RawSize:    %.1f MB (estimated)\n',
            ((static_cast<int64_t>(kKeySize + FLAGS_value_size) * num_)
             / 1048576.0));
    fprintf(stdout, 'FileSize:   %.1f MB (estimated)\n',
            (((kKeySize + FLAGS_value_size * FLAGS_compression_ratio) * num_)
             / 1048576.0));
    PrintWarnings();
    fprintf(stdout, '------------------------------------------------\n');
  }
    
    
    {
    {
    {      if (!keep) {
        if (type == kTableFile) {
          table_cache_->Evict(number);
        }
        Log(options_.info_log, 'Delete type=%d #%lld\n',
            static_cast<int>(type),
            static_cast<unsigned long long>(number));
        env_->DeleteFile(dbname_ + '/' + filenames[i]);
      }
    }
  }
}
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
Iterator* NewDBIterator(DBImpl* db,
                        const Comparator* user_key_comparator,
                        Iterator* internal_iter,
                        SequenceNumber sequence,
                        uint32_t seed);
    
      ReadOptions ro;
  ro.fill_cache = false;
  Iterator* iter = table->NewIterator(ro);
  std::string r;
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    r.clear();
    ParsedInternalKey key;
    if (!ParseInternalKey(iter->key(), &key)) {
      r = 'badkey '';
      AppendEscapedStringTo(&r, iter->key());
      r += '' => '';
      AppendEscapedStringTo(&r, iter->value());
      r += ''\n';
      dst->Append(r);
    } else {
      r = ''';
      AppendEscapedStringTo(&r, key.user_key);
      r += '' @ ';
      AppendNumberTo(&r, key.sequence);
      r += ' : ';
      if (key.type == kTypeDeletion) {
        r += 'del';
      } else if (key.type == kTypeValue) {
        r += 'val';
      } else {
        AppendNumberTo(&r, key.type);
      }
      r += ' => '';
      AppendEscapedStringTo(&r, iter->value());
      r += ''\n';
      dst->Append(r);
    }
  }
  s = iter->status();
  if (!s.ok()) {
    dst->Append('iterator error: ' + s.ToString() + '\n');
  }
    
    std::string TempFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'dbtmp');
}
    
    #include 'db/db_impl.h'
#include 'db/filename.h'
#include 'db/version_set.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
#include 'util/testharness.h'
#include 'util/testutil.h'
    
      Status WriteDescriptor() {
    std::string tmp = TempFileName(dbname_, 1);
    WritableFile* file;
    Status status = env_->NewWritableFile(tmp, &file);
    if (!status.ok()) {
      return status;
    }
    }
    
      void ReadStep(Random* rnd) {
    // Remember the initial committed state of the skiplist.
    State initial_state;
    for (int k = 0; k < K; k++) {
      initial_state.Set(k, current_.Get(k));
    }
    }
    
    namespace boost{
namespace detail{
    }
    }
    
    
    {   ~mem_block_cache()
   {
      while(next)
      {
         mem_block_node* old = next;
         next = next->next;
         ::operator delete(old);
      }
   }
   void* get()
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
     if(next)
      {
         mem_block_node* result = next;
         next = next->next;
         --cached_blocks;
         return result;
      }
      return ::operator new(BOOST_REGEX_BLOCKSIZE);
   }
   void put(void* p)
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
      if(cached_blocks >= BOOST_REGEX_MAX_CACHE_BLOCKS)
      {
         ::operator delete(p);
      }
      else
      {
         mem_block_node* old = static_cast<mem_block_node*>(p);
         old->next = next;
         next = old;
         ++cached_blocks;
      }
   }
};
    
    template <class F, class M, class O>
struct format_traits
{
public:
   // 
   // Type is mpl::int_<N> where N is one of:
   //
   // 0 : F is a pointer to a presumably null-terminated string.
   // 1 : F is a character-container such as a std::string.
   //
   // Other options such as F being a Functor are not supported without
   // SFINAE support.
   //
   typedef typename boost::mpl::if_<
      boost::is_pointer<F>,
      boost::mpl::int_<0>,
      boost::mpl::int_<1>
   >::type type;
};
    
    
#ifndef BOOST_REGEX_MATCH_HPP
#define BOOST_REGEX_MATCH_HPP
    
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
    
    #ifndef BOOST_REGEX_V4_REGEX_REPLACE_HPP
#define BOOST_REGEX_V4_REGEX_REPLACE_HPP
    
    template <class charT, class traits>
inline bool regex_search(const charT* str, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   return regex_search(str, str + traits::length(str), e, flags);
}
    
    

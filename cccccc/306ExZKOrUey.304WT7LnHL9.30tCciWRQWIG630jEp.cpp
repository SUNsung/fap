#define TegraUnaryOp_Invoker(name, func) TegraGenOp_Invoker(name, func, 1, 1, 0, \
                                                            RANGE_DATA(ST, src1_data, src1_step), src1_step, \
                                                            RANGE_DATA(DT, dst1_data, dst1_step), dst1_step )
    
        explicit AccumulateWeighted(float _alpha) :
        alpha(_alpha), beta(1 - _alpha)
    {
        v_alpha = vdupq_n_f32(alpha);
        v_beta = vdupq_n_f32(beta);
    }
    
                    if(cn==2)
                    t2 = vextq_u16(tcurr, tnext, 2);
                else if(cn==3)
                    t2 = vextq_u16(tcurr, tnext, 3);
                else if(cn==4)
                    t2 = vextq_u16(tcurr, tnext, 4);
    
    
    {
    {        for (; sj < size.width; ++sj, syj += 2, dj += 4)
        {
            dst[dj] = srcu[sj];
            dst[dj + 1] = srcy[syj];
            dst[dj + 2] = srcv[sj];
            dst[dj + 3] = srcy[syj + 1];
        }
    }
#else
    (void)size;
    (void)srcyBase;
    (void)srcyStride;
    (void)srcuBase;
    (void)srcuStride;
    (void)srcvBase;
    (void)srcvStride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(f32, s16, 8,
     register float32x4_t vhalf asm ('q0') = vdupq_n_f32(0.5f);,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.32 {d2-d3}, [%[src]]                               \n\t'
             'vadd.f32 q2, q1, q0                                     \n\t'
             'vcvt.s32.f32 q3, q2                                     \n\t'
             'vqmovn.s32 d8, q3                                       \n\t'
             'vst1.16 {d8}, [%[dst]]                                  \n\t'
             : /*no output*/
             : [src] 'r' (_src + i),
               [dst] 'r' (_dst + i),
               'w' (vhalf)
             : 'd2','d3','d4','d5','d6','d7','d8'
         );
         __asm__ (
             'vld1.32 {d2-d3}, [%[src]]                               \n\t'
             'vadd.f32 q2, q1, q0                                     \n\t'
             'vcvt.s32.f32 q3, q2                                     \n\t'
             'vqmovn.s32 d8, q3                                       \n\t'
             'vst1.16 {d8}, [%[dst]]                                  \n\t'
             : /*no output*/
             : [src] 'r' (_src + i + 4),
               [dst] 'r' (_dst + i + 4),
               'w' (vhalf)
             : 'd2','d3','d4','d5','d6','d7','d8'
         );
     }
})
#else
CVT_FUNC(f32, s16, 8,
     float32x4_t vhalf = vdupq_n_f32(0.5f);,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         float32x4_t vline_f32 = vld1q_f32(_src + i);
    }
    }
    
    
    {            u32 buf[8];
            vst1_u32(buf, vget_low_u32(el8shr01l));
            vst1_u32(buf+2, el2l);
            vst1_u32(buf+4, el2hl);
            vst1_u32(buf+6, el2hh);
            for(u32 k=0; k < 8; k++)
                sqsum[j+k] = prev + prevSqSum[j+k] + buf[k];
            prev += buf[7];
        }
    
      uint64_t Size(const Slice& start, const Slice& limit) {
    Range r(start, limit);
    uint64_t size;
    db_->GetApproximateSizes(&r, 1, &size);
    return size;
  }
    
    #include 'db/db_impl.h'
    
      Status MakeRoomForWrite(bool force /* compact even if there is room? */)
      EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  WriteBatch* BuildBatchGroup(Writer** last_writer)
      EXCLUSIVE_LOCKS_REQUIRED(mutex_);
    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
      void ReopenForAppend() {
    delete writer_;
    writer_ = new Writer(&dest_, dest_.contents_.size());
  }
    
    Status Writer::AddRecord(const Slice& slice) {
  const char* ptr = slice.data();
  size_t left = slice.size();
    }
    
    
    {#if !defined(NDEBUG)
    snapshot->list_ = this;
#endif  // !defined(NDEBUG)
    snapshot->next_ = &head_;
    snapshot->prev_ = head_.prev_;
    snapshot->prev_->next_ = snapshot;
    snapshot->next_->prev_ = snapshot;
    return snapshot;
  }
    
    namespace php {
struct Program;
}
struct Index;
    
    //////////////////////////////////////////////////////////////////////
    
      /*
   * Create an uncounted array if we can.
   *
   * If this collection is an OuterHandle, then we need to do a full check on
   * this array for things like circularity.  If we're an InnerHandle, someone
   * already checked that, but we want to check for whether it's uncounted to
   * use a better representation.  For the OuterHandle case, we just delegate
   * to APCArray below (which will do the full DataWalker pass).
   */
  if (level == APCHandleLevel::Inner && apcExtension::UseUncounted &&
      !array->empty()) {
    DataWalker walker(DataWalker::LookupFeature::HasObjectOrResource);
    auto const features = walker.traverseData(const_cast<ArrayData*>(array));
    assertx(!features.isCircular);
    if (!features.hasObjectOrResource) {
      auto const makeUncounted = [&] () {
        if (isVectorCollection(obj->collectionType())) {
          return APCArray::MakeUncountedVec(const_cast<ArrayData*>(array));
        }
        return APCArray::MakeUncountedDict(const_cast<ArrayData*>(array));
      };
      return WrapArray(
        { makeUncounted(), getMemSize(array) + sizeof(APCTypedValue) },
        obj->collectionType()
      );
    }
  }
    
    CONTAINER_CONFIG_BODY(std::vector<uint32_t>, UInt32Vector)
CONTAINER_CONFIG_BODY(std::vector<std::string>, StrVector)
namespace { using simap = std::unordered_map<std::string, int>; }
CONTAINER_CONFIG_BODY(simap, IntMap)
CONTAINER_CONFIG_BODY(ConfigMap, Map)
CONTAINER_CONFIG_BODY(ConfigMapC, MapC)
CONTAINER_CONFIG_BODY(ConfigSet, Set)
CONTAINER_CONFIG_BODY(ConfigSetC, SetC)
CONTAINER_CONFIG_BODY(ConfigFlatSet, FlatSet)
CONTAINER_CONFIG_BODY(ConfigIMap, IMap)
    
    
    {  if (base64) {
    decoded = string_base64_decode(data, data_len, true);
    if (decoded.isNull()) {
      raise_warning('unable to decode base64 data');
      return nullptr;
    }
  } else {
    decoded = url_decode(data, data_len);
  }
  return req::make<MemFile>(decoded.data(), decoded.size());
}
    
      static std::string FormatNumber(const char* fmt, int64_t n);
  static std::string FormatSize(int64_t size);
  static std::string FormatTime(int64_t milliSeconds);
    
    void PlainDirectory::rewind() {
  ::rewinddir(m_dir);
}
    
    #endif

    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    /**
 * For php://output, a simple wrapper of g_context->out().
 */
struct OutputFile : File {
  DECLARE_RESOURCE_ALLOCATION(OutputFile);
    }
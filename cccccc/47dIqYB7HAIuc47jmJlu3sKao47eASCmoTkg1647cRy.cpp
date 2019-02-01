
        
        
    {                // make border
                switch(cn)
                {
                case 1:
                    if (borderType == BORDER_MODE_CONSTANT)
                    {
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 6);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 7);
                    }
                    else if (borderType == BORDER_MODE_REFLECT101)
                    {
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 2),tcurr, 6);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 1),tcurr, 7);
                    }
                    else if (borderType == BORDER_MODE_REFLECT)
                    {
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 1),tcurr, 6);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 0),tcurr, 7);
                    }
                    else
                    {
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 0),tcurr, 6);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 0),tcurr, 7);
                    }
                    break;
                case 2:
                    if (borderType == BORDER_MODE_CONSTANT)
                    {
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 4);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 5);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 6);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 7);
                    }
                    else if (borderType == BORDER_MODE_REFLECT101)
                    {
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 2),tcurr, 6);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 3),tcurr, 7);
                    }
                    else if (borderType == BORDER_MODE_REFLECT)
                    {
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 2),tcurr, 4);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 3),tcurr, 5);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 0),tcurr, 6);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 1),tcurr, 7);
                    }
                    else
                    {
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 0),tcurr, 4);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 1),tcurr, 5);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 0),tcurr, 6);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 1),tcurr, 7);
                    }
                    break;
                case 3:
                    if (borderType == BORDER_MODE_CONSTANT)
                    {
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 2);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 3);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 4);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 5);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 6);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 7);
                    }
                    else if (borderType == BORDER_MODE_REFLECT101)
                    {
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 6),tcurr, 2);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 7),tprev, 3);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 3),tprev, 5);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 4),tprev, 6);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 5),tprev, 7);
                        s16 lane8 = srow4[8] + srow3[8] + srow2[8] + srow1[8] + srow0[8];
                        tcurr = vsetq_lane_u16(lane8,tprev, 4);
                    }
                    else if (borderType == BORDER_MODE_REFLECT)
                    {
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 3),tcurr, 2);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 4),tprev, 3);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 5),tprev, 4);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 0),tprev, 5);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 1),tprev, 6);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 2),tprev, 7);
                    }
                    else
                    {
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 0),tcurr, 2);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 1),tprev, 3);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 2),tprev, 4);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 0),tprev, 5);
                        tprev = vsetq_lane_u16(vgetq_lane_u16(tcurr, 1),tprev, 6);
                        tcurr = vsetq_lane_u16(vgetq_lane_u16(tcurr, 2),tprev, 7);
                    }
                    break;
                case 4:
                    if (borderType == BORDER_MODE_CONSTANT)
                    {
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 0);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 1);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 2);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 3);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 4);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 5);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 6);
                        tcurr = vsetq_lane_u16(borderValue, tcurr, 7);
                    }
                    else if (borderType == BORDER_MODE_REFLECT101)
                    {
                        s16 lane8  = srow4[ 8] + srow3[ 8] + srow2[ 8] + srow1[ 8] + srow0[ 8];
                        s16 lane9  = srow4[ 9] + srow3[ 9] + srow2[ 9] + srow1[ 9] + srow0[ 9];
                        s16 lane10 = srow4[10] + srow3[10] + srow2[10] + srow1[10] + srow0[10];
                        s16 lane11 = srow4[11] + srow3[11] + srow2[11] + srow1[11] + srow0[11];
                        tprev = vsetq_lane_u16( lane8,tcurr, 0);
                        tprev = vsetq_lane_u16( lane9,tprev, 1);
                        tprev = vsetq_lane_u16(lane10,tprev, 2);
                        tcurr = vsetq_lane_u16(lane11,tprev, 3);
                    }
                    else if (borderType == BORDER_MODE_REFLECT)
                    {
                        tcurr = vcombine_u16(vget_high_u16(tcurr),vget_low_u16(tcurr));//swap 64-bit parts
                    }
                    else
                    {
                        tcurr = vcombine_u16(vget_low_u16(tcurr),vget_low_u16(tcurr));//double 64-bit part
                    }
                    break;
                }
                continue;
            }
            switch(cn)
            {
            case 1:
                t0 = vextq_u16(tprev, tcurr, 6);
                t1 = vextq_u16(tprev, tcurr, 7);
                t2 = tcurr;
                t3 = vextq_u16(tcurr, tnext, 1);
                t4 = vextq_u16(tcurr, tnext, 2);
                break;
            case 2:
                t0 = vextq_u16(tprev, tcurr, 4);
                t1 = vextq_u16(tprev, tcurr, 6);
                t2 = tcurr;
                t3 = vextq_u16(tcurr, tnext, 2);
                t4 = vextq_u16(tcurr, tnext, 4);
                break;
            case 3:
                t0 = vextq_u16(tprev, tcurr, 2);
                t1 = vextq_u16(tprev, tcurr, 5);
                t2 = tcurr;
                t3 = vextq_u16(tcurr, tnext, 3);
                t4 = vextq_u16(tcurr, tnext, 6);
                break;
            case 4:
                t0 = tprev;
                t1 = vextq_u16(tprev, tcurr, 4);
                t2 = tcurr;
                t3 = vextq_u16(tcurr, tnext, 4);
                t4 = tnext;
                break;
            default:
                internal::assertSupportedConfiguration(false);//Unsupported channels number
                return;
            }
            t0 = vqaddq_u16(vqaddq_u16(vqaddq_u16(t0, t1), vqaddq_u16(t2, t3)), t4);
    
    template <bool L2gradient>
inline void NormCanny(const ptrdiff_t colscn, s16* _dx, s16* _dy, s32* _norm)
{
    ptrdiff_t j = 0;
    if (colscn >= 8)
    {
        int16x8_t vx = vld1q_s16(_dx);
        int16x8_t vy = vld1q_s16(_dy);
        for (; j <= colscn - 16; j+=8)
        {
            internal::prefetch(_dx);
            internal::prefetch(_dy);
    }
    }
    }
    
                uint32x4_t vequ1 = vceqq_u32(vreinterpretq_u32_u64(vm1), vc0);
            uint32x4_t vequ2 = vceqq_u32(vreinterpretq_u32_u64(vm2), vc0);
            uint32x4_t vequ3 = vceqq_u32(vreinterpretq_u32_u64(vm3), vc0);
            uint32x4_t vequ4 = vceqq_u32(vreinterpretq_u32_u64(vm4), vc0);
    
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
    
    
    {
    {} }
    
    // scripts/fuse_gtest.py depends on gtest's own header being #included
// *unconditionally*.  Therefore these #includes cannot be moved
// inside #if GTEST_HAS_PARAM_TEST.
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-param-util.h'
#include 'gtest/internal/gtest-param-util-generated.h'
    
      // Returns true iff the test part fatally failed.
  bool fatally_failed() const { return type_ == kFatalFailure; }
    
    #include 'sample1.h'
    
      static int allocated() { return allocated_; }
    
    
// This sample shows how to write a simple unit test for a function,
// using Google C++ testing framework.
//
// Writing a unit test using Google C++ testing framework is easy as 1-2-3:
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
      // Copy c'tor
  MyString(const MyString& string) : c_string_(NULL) {
    Set(string.c_string_);
  }
    
      void SeekRandom(ThreadState* thread) {
    ReadOptions options;
    int found = 0;
    for (int i = 0; i < reads_; i++) {
      Iterator* iter = db_->NewIterator(options);
      char key[100];
      const int k = thread->rand.Next() % FLAGS_num;
      snprintf(key, sizeof(key), '%016d', k);
      iter->Seek(key);
      if (iter->Valid() && iter->key() == key) found++;
      delete iter;
      thread->stats.FinishedSingleOp();
    }
    char msg[100];
    snprintf(msg, sizeof(msg), '(%d of %d found)', found, num_);
    thread->stats.AddMessage(msg);
  }
    
          case kLastType:
        if (!in_fragmented_record) {
          ReportCorruption(fragment.size(),
                           'missing start of fragmented record(2)');
        } else {
          scratch->append(fragment.data(), fragment.size());
          *record = Slice(*scratch);
          last_record_offset_ = prospective_record_offset;
          return true;
        }
        break;
    
    class MemTable {
 public:
  // MemTables are reference counted.  The initial reference count
  // is zero and the caller must call Ref() at least once.
  explicit MemTable(const InternalKeyComparator& comparator);
    }
    
    class TestState {
 public:
  ConcurrentTest t_;
  int seed_;
  port::AtomicPointer quit_flag_;
    }
    
    /*!
 * \brief Environment arguments that is used by the function.
 * These can be things like scalar arguments when add a value with scalar.
 */
struct EnvArguments {
  /*! \brief scalar argument, if enabled */
  real_t scalar;
  /*! \brief keyword arguments */
  std::vector<std::pair<std::string, std::string> > kwargs;
  /*! \brief pointer to the resources requested */
  std::vector<Resource> resource;
};
    
    template<typename Dtype>
class CaffeDataIter : public IIterator<TBlobBatch> {
 public:
  explicit CaffeDataIter(int type_flag) : batch_size_(0), channels_(1), width_(1), height_(1)
                               , type_flag_(type_flag), loc_(0)
  {}
  virtual ~CaffeDataIter(void) {}
    }
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
    class TBlobContainer : public TBlob {
 public:
  TBlobContainer(void)
    : TBlob(), tensor_container_(nullptr) {}
  ~TBlobContainer() {
    if (tensor_container_) {
      release();
    }
  }
  void resize(const TShape &shape, int type_flag) {
    if (tensor_container_) {
      CHECK_EQ(this->type_flag_, type_flag);
      this->shape_ = shape;
      resize();
    } else {
      this->type_flag_ = type_flag;
      this->shape_ = shape;
      create();
    }
  }
    }
    
    #ifdef REGEX_RUN_DEBUG
    if (fTraceDebug) {
        if (isMatch) {
            printf('Match.  start=%ld   end=%ld\n\n', fMatchStart, fMatchEnd);
        } else {
            printf('No match\n\n');
        }
    }
#endif
    
            if (periodType != DayPeriodRules::DAYPERIOD_AM &&
                periodType != DayPeriodRules::DAYPERIOD_PM &&
                periodType != DayPeriodRules::DAYPERIOD_MIDNIGHT) {
            index = (int32_t)periodType;
            if (count <= 3) {
                toAppend = &fSymbols->fAbbreviatedDayPeriods[index];  // i.e. short
            } else if (count == 4 || count > 5) {
                toAppend = &fSymbols->fWideDayPeriods[index];
            } else {  // count == 5
                toAppend = &fSymbols->fNarrowDayPeriods[index];
            }
        }
    
    ExitConstrDeleteAll: // Remove all sets and return error
    delete fDateIgnorables;  fDateIgnorables = NULL;
    delete fTimeIgnorables;  fTimeIgnorables = NULL;
    delete fOtherIgnorables; fOtherIgnorables = NULL;
    
    
    {    return fHashCode;
}
    
    U_NAMESPACE_END
    
    U_NAMESPACE_END
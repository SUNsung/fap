
        
        
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
    void add(const Size2D &size,
         const u8 * src0Base, ptrdiff_t src0Stride,
         const u8 * src1Base, ptrdiff_t src1Stride,
         u8 *dstBase, ptrdiff_t dstStride,
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
                             AddSaturate<u8, u16>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<u8, u16>());
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
    
        void operator() (const typename VecTraits<f32>::vec128 & v_src0,
                     const typename VecTraits<f32>::vec128 & v_src1,
                     typename VecTraits<f32>::vec128 & v_dst) const
    {
        float32x4_t vs1 = vmlaq_f32(vgamma, v_src0, valpha);
        v_dst = vmlaq_f32(vs1, v_src1, vbeta);
    }
    
    
    {            vx = vxnext;
            vy = vynext;
        }
        int32x4_t norml = vmull_s16(vget_low_s16(vx), vget_low_s16(vx));
        int32x4_t normh = vmull_s16(vget_high_s16(vy), vget_high_s16(vy));
    
    #ifndef __ANDROID__
        for (; dj < roiw32; sj += 128, dj += 32)
        {
            internal::prefetch(src + sj);
    }
    
    #ifndef __ANDROID__
        for (; sj < roiw32; sj += 32, syj += 64, dj += 128)
        {
            internal::prefetch(srcy + syj);
            internal::prefetch(srcu + sj);
            internal::prefetch(srcv + sj);
    }
    
            while(i + 16 <= size.width)
        {
            size_t lim = std::min(i + DOT_UINT_BLOCKSIZE, size.width) - 16;
    }
    
        v0k0 = vextq_s16(d0_7, d8_15, 7);
    ak0 = vminq_s16(ak0, v0k0);
    bk0 = vmaxq_s16(bk0, v0k0);
    
    template <typename T, int elsize> struct vtail
{
    static inline void inRange(const T *, const T *, const T *,
                               u8 *, size_t &, size_t)
    {
        //do nothing since there couldn't be enough data
    }
};
template <typename T> struct vtail<T, 2>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        //There no more than 15 elements in the tail, so we could handle 8 element vector only once
        if( x + 8 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1(dst + x, internal::vmovn(vd));
            x+=8;
        }
    }
};
template <typename T> struct vtail<T, 1>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        typedef typename internal::VecTraits<T>::vec64 vec64;
        typedef typename internal::VecTraits<T>::unsign::vec64 uvec64;
        //There no more than 31 elements in the tail, so we could handle once 16+8 or 16 or 8 elements
        if( x + 16 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1q(dst + x, vd);
            x+=16;
        }
        if( x + 8 < width)
        {
             vec64  vs = internal::vld1( src + x);
             vec64 vr1 = internal::vld1(rng1 + x);
             vec64 vr2 = internal::vld1(rng2 + x);
            uvec64  vd = internal::vand(internal::vcge(vs, vr1), internal::vcge(vr2, vs));
            internal::vst1(dst + x, vd);
            x+=8;
        }
    }
};
    
    // table lookup with the table in a 128-bit register
    
    // Owns a python object and decrements the reference count on destruction.
// This class is not threadsafe.
template <typename PyObjectStruct>
class ScopedPythonPtr {
 public:
  // Takes the ownership of the specified object to ScopedPythonPtr.
  // The reference count of the specified py_object is not incremented.
  explicit ScopedPythonPtr(PyObjectStruct* py_object = NULL)
      : ptr_(py_object) {}
    }
    
    TEST(MovableMessageTest, MoveDifferentArenas) {
  Arena arena1, arena2;
    }
    
    
    {  input_for_decode =
      'longFieldNameIsLooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong1000';
  desired_output_for_decode =
      'long_field_name_is_looooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong_1000';
  expected = string('\x04\xA5\xA4\xA2\xBF\x1F\x0E\x84\x0', 9);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
}
    
    
bool ZeroCopyOutputStream::WriteAliasedRaw(const void* /* data */,
                                           int /* size */) {
  GOOGLE_LOG(FATAL) << 'This ZeroCopyOutputStream doesn't support aliasing. '
                'Reaching here usually means a ZeroCopyOutputStream '
                'implementation bug.';
  return false;
}
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
    size_t LogTest::initial_offset_record_sizes_[] =
    {10000,  // Two sizable records in first block
     10000,
     2 * log::kBlockSize - 1000,  // Span three blocks
     1,
     13716,  // Consume all but two bytes of block 3.
     log::kBlockSize - kHeaderSize, // Consume the entirety of block 4.
    };
    
    
    {  // Write the header and the payload
  Status s = dest_->Append(Slice(buf, kHeaderSize));
  if (s.ok()) {
    s = dest_->Append(Slice(ptr, n));
    if (s.ok()) {
      s = dest_->Flush();
    }
  }
  block_offset_ += kHeaderSize + n;
  return s;
}
    
    
    {}  // namespace leveldb

    
    static bool GetInternalKey(Slice* input, InternalKey* dst) {
  Slice str;
  if (GetLengthPrefixedSlice(input, &str)) {
    dst->DecodeFrom(str);
    return true;
  } else {
    return false;
  }
}
    
            for(int i = 0 ; i < nums.size() ; i ++)
            for(int j = i + 1 ; j < nums.size() ; j ++)
                if(nums[i] + nums[j] == target){
                    int res[] = {i, j};
                    return vector<int>(res, res + 2);
                }
    
    #include <iostream>
#include <stack>
#include <cassert>
    
    /// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
    
    
    {
    {
    {            if(command.s == 'print')
                res.push_back(command.node->val);
            else{
                assert(command.s == 'go');
                if(command.node->right)
                    stack.push(Command('go',command.node->right));
                stack.push(Command('print', command.node));
                if(command.node->left)
                    stack.push(Command('go',command.node->left));
            }
        }
        return res;
    }
};
    
    
    {
    {        return res;
    }
};
    
    
    {
    {
    {            if(command.s == 'print')
                res.push_back(command.node->val);
            else{
                assert(command.s == 'go');
                if(command.node->right)
                    stack.push(Command('go',command.node->right));
                if(command.node->left)
                    stack.push(Command('go',command.node->left));
                stack.push(Command('print', command.node));
            }
        }
        return res;
    }
};
    
    
    
    template<class ElemType>
void OptimizedRNNStackNode<ElemType>::Load(File& fstream, size_t modelVersion)
{
    Base::Load(fstream, modelVersion);
    bool isLegacyVersion = modelVersion < CNTK_MODEL_VERSION_14; // (to support an internal legacy version)
    m_legacySwapInputsPending = isLegacyVersion;
    m_rnnAttributes.Read(fstream, /*readAxis=*/ !isLegacyVersion);
}
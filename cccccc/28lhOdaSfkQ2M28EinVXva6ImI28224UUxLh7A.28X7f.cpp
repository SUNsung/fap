
        
        #include 'base/callback.h'
#include 'base/macros.h'
#include 'base/memory/ref_counted.h'
#include 'base/strings/string16.h'
#include 'net/cert/nss_cert_database.h'
    
    
    {}  // namespace mate

    
    enum CreateFunctionTemplateFlags {
  HolderIsFirstArgument = 1 << 0,
};
    
    // This specialization allows people to construct function templates directly if
// they need to do fancier stuff.
template <>
struct CallbackTraits<v8::Local<v8::FunctionTemplate>> {
  static v8::Local<v8::FunctionTemplate> CreateTemplate(
      v8::Local<v8::FunctionTemplate> templ) {
    return templ;
  }
};
    
      v8::Isolate* isolate() const { return isolate_; }
    
      ProcessSingleton(const base::FilePath& user_data_dir,
                   const NotificationCallback& notification_callback);
  ~ProcessSingleton();
    
    namespace {
    }
    
    #define TegraRowOp_Invoker(name, func, src_cnt, dst_cnt, val_cnt, ...) \
template <typename ST, typename DT> \
class TegraRowOp_##name##_Invoker : public cv::ParallelLoopBody \
{ \
public: \
    TegraRowOp_##name##_Invoker(ROW_SRC_ARG##src_cnt \
                                ROW_DST_ARG##dst_cnt \
                                ROW_VAL_ARG##val_cnt) : \
         cv::ParallelLoopBody() ROW_SRC_STORE##src_cnt \
                                ROW_DST_STORE##dst_cnt \
                                ROW_VAL_STORE##val_cnt {} \
    virtual void operator()(const cv::Range& range) const \
    { \
        CAROTENE_NS::func(CAROTENE_NS::Size2D(range.end-range.start, 1), __VA_ARGS__); \
    } \
private: \
    ROW_SRC_VAR##src_cnt \
    ROW_DST_VAR##dst_cnt \
    ROW_VAL_VAR##val_cnt \
    const TegraRowOp_##name##_Invoker& operator= (const TegraRowOp_##name##_Invoker&); \
};
    
        typedef ptrdiff_t  stride_t;
    
    
    {} // namespace CAROTENE_NS

    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_dst1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u8, s32, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.u8 q3, d4                                       \n\t'
            'vmovl.u8 q4, d5                                       \n\t'
            'vmovl.u16 q5, d6                                      \n\t'
            'vmovl.u16 q6, d7                                      \n\t'
            'vmovl.u16 q7, d8                                      \n\t'
            'vmovl.u16 q8, d9                                      \n\t'
            'vcvt.f32.u32 q9, q5                                   \n\t'
            'vcvt.f32.u32 q10, q6                                  \n\t'
            'vcvt.f32.u32 q11, q7                                  \n\t'
            'vcvt.f32.u32 q12, q8                                  \n\t'
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
            'vst1.32 {d14-d15}, [%[dst1]]                          \n\t'
            'vst1.32 {d16-d17}, [%[dst2]]                          \n\t'
            'vst1.32 {d18-d19}, [%[dst3]]                          \n\t'
            'vst1.32 {d20-d21}, [%[dst4]]                          \n\t'
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
CVTS_FUNC(u8, s32, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        uint8x16_t vline = vld1q_u8(_src + i);
        uint16x8_t vline1_u16 = vmovl_u8(vget_low_u8 (vline));
        uint16x8_t vline2_u16 = vmovl_u8(vget_high_u8(vline));
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline1_u16));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline1_u16));
        uint32x4_t vline3_u32 = vmovl_u16(vget_low_u16 (vline2_u16));
        uint32x4_t vline4_u32 = vmovl_u16(vget_high_u16(vline2_u16));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        float32x4_t vline3_f32 = vcvtq_f32_u32(vline3_u32);
        float32x4_t vline4_f32 = vcvtq_f32_u32(vline4_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline3_f32 = vmulq_f32(vline3_f32, vscale);
        vline4_f32 = vmulq_f32(vline4_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline3_f32 = vaddq_f32(vline3_f32, vshift);
        vline4_f32 = vaddq_f32(vline4_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int32x4_t vline3_s32 = vcvtq_s32_f32(vline3_f32);
        int32x4_t vline4_s32 = vcvtq_s32_f32(vline4_f32);
        vst1q_s32(_dst + i + 0,  vline1_s32);
        vst1q_s32(_dst + i + 4,  vline2_s32);
        vst1q_s32(_dst + i + 8,  vline3_s32);
        vst1q_s32(_dst + i + 12, vline4_s32);
    }
})
#endif
    
        if (func == NULL)
        return;
    
            int16x8_t tcurr1 = vmovq_n_s16(0x0);
        int16x8_t tnext1 = vmovq_n_s16(0x0);
        int16x8_t tprev1 = vmovq_n_s16(0x0);
        int16x8_t tpprev1 = vmovq_n_s16(0x0);
        int16x8_t tppprev1 = vmovq_n_s16(0x0);
    
    class Semaphore {
 public:
  void post(int n = 1) {
    std::unique_lock<std::mutex> lock(m_);
    n_ += n;
    cv_.notify_all();
  }
    }
    
    namespace caffe2 {
    }
    
    bool AuthPropertyIterator::operator==(const AuthPropertyIterator& rhs) const {
  if (property_ == nullptr || rhs.property_ == nullptr) {
    return property_ == rhs.property_;
  } else {
    return index_ == rhs.index_;
  }
}
    
    // Serialize outgoing server stats. Returns the number of bytes serialized.
size_t ServerStatsSerialize(uint64_t server_elapsed_time, char* buf,
                            size_t buf_size);
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_SERVER_FILTER_H */

    
    Status ProtoServerReflection::GetAllExtensionNumbers(
    ServerContext* context, const grpc::string& type,
    ExtensionNumberResponse* response) {
  if (descriptor_pool_ == nullptr) {
    return Status::CANCELLED;
  }
    }
    
    #include <grpc/support/cpu.h>
    
    #if !defined(GPR_LINUX) && !defined(GPR_WINDOWS) && !defined(GPR_APPLE)
    
    // Given a map from type K to a set of value type V, removes the given key and
// the associated set, and returns the set. Returns an empty set if the key is
// not found.
template <typename K, typename V>
std::set<V> UnorderedMapOfSetExtract(std::unordered_map<K, std::set<V>>& map,
                                     const K& key) {
  auto it = map.find(key);
  if (it != map.end()) {
    auto set = std::move(it->second);
    map.erase(it);
    return set;
  }
  return {};
};
    
    
    {}  // namespace leveldb
    
    class VersionSet {
 public:
  VersionSet(const std::string& dbname, const Options* options,
             TableCache* table_cache, const InternalKeyComparator*);
  VersionSet(const VersionSet&) = delete;
  VersionSet& operator=(const VersionSet&) = delete;
    }
    
      // EXPERIMENTAL: If true, append to existing MANIFEST and log files
  // when a database is opened.  This can significantly speed up open.
  //
  // Default: currently false, but may become true later.
  bool reuse_logs = false;
    
        template std::shared_ptr<const Matrix<float>> NDArrayView::GetMatrix(size_t rowColSplitPoint/* = AutoSelectRowColSplitPoint*/) const;
    template std::shared_ptr<const Matrix<double>> NDArrayView::GetMatrix(size_t rowColSplitPoint/* = AutoSelectRowColSplitPoint*/) const;
    template std::shared_ptr<const Matrix<half>> NDArrayView::GetMatrix(size_t rowColSplitPoint/* = AutoSelectRowColSplitPoint*/) const;
    template std::shared_ptr<const Matrix<char>> NDArrayView::GetMatrix(size_t rowColSplitPoint/* = AutoSelectRowColSplitPoint*/) const;
    template std::shared_ptr<const Matrix<short>> NDArrayView::GetMatrix(size_t rowColSplitPoint/* = AutoSelectRowColSplitPoint*/) const;
    
    
    {        return dict[versionKey].Value<size_t>();
    }
    
        virtual void /*ComputationNodeBase::*/ Validate(bool isFinalValidationPass) override
    {
        Base::Validate(isFinalValidationPass);
        InferMBLayoutFromInputsForStandardCase(isFinalValidationPass);
    }

        
        
    {
    {
    {            for (; j < size.width; j++)
                dst[j] = (s16)((s32)src0[j] + (s32)src1[j]);
        }
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
    
    
    {            vx = vxnext;
            vy = vynext;
        }
        int32x4_t norml = vmull_s16(vget_low_s16(vx), vget_low_s16(vx));
        int32x4_t normh = vmull_s16(vget_high_s16(vy), vget_high_s16(vy));
    
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
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const s16 * src = internal::getRowPtr(srcBase, srcStride, i);
        size_t j = 0;
    }
    
    inline float32x4_t vrsqrtq_f32(float32x4_t val)
{
    float32x4_t e = vrsqrteq_f32(val);
    e = vmulq_f32(vrsqrtsq_f32(vmulq_f32(e, e), val), e);
    e = vmulq_f32(vrsqrtsq_f32(vmulq_f32(e, e), val), e);
    return e;
}
    
                // combine 3 'shifted' vectors
            t0 = vextq_u16(tprev, tcurr, 7);
            t1 = tcurr;
            t2 = vextq_u16(tcurr, tnext, 1);
    
    void RemoveTransliterator::handleTransliterate(Replaceable& text, UTransPosition& index,
                                               UBool /*isIncremental*/) const {
    // Our caller (filteredTransliterate) has already narrowed us
    // to an unfiltered run.  Delete it.
    UnicodeString empty;
    text.handleReplaceBetween(index.start, index.limit, empty);
    int32_t len = index.limit - index.start;
    index.contextLimit -= len;
    index.limit -= len;
}
U_NAMESPACE_END
    
    SelectFormat::~SelectFormat() {
}
    
    U_NAMESPACE_BEGIN
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    #endif  // __SMALLINTFORMATTER_H__

    
        // We will need the calendar to know what type of symbols to load.
    initializeCalendar(NULL, locale, status);
    if (U_FAILURE(status)) return;
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
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
    
    #endif // HPHP_DATA_STREAM_WRAPPER_H

    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
  int64_t readImpl(char *buffer, int64_t length) override;
  int getc() override;
  int64_t writeImpl(const char *buffer, int64_t length) override;
  bool seek(int64_t offset, int whence = SEEK_SET) override;
  int64_t tell() override;
  bool eof() override;
  bool rewind() override;
  bool flush() override;
  bool truncate(int64_t size) override;
    
    ///////////////////////////////////////////////////////////////////////////////
    
    /**
 * Wrapper around popen/pclose.
 */
struct Pipe : PlainFile {
  DECLARE_RESOURCE_ALLOCATION(Pipe);
    }
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/execution-context.h'
#include 'hphp/runtime/base/request-event-handler.h'
    
    #include <string>
    
    ClusterGeneralInfo701::ClusterGeneralInfo701() {}
const uint32_t ClusterGeneralInfo701::ID = 0x701;
    
      Byte t1(bytes + 3);
  int32_t t = t1.get_byte(4, 4);
    
    ObjectGeneralInfo60B::ObjectGeneralInfo60B() {}
const uint32_t ObjectGeneralInfo60B::ID = 0x60B;
    
    bool RadarState201::send_quality(const std::uint8_t* bytes,
                                 int32_t length) const {
  Byte t0(bytes + 5);
  uint32_t x = t0.get_byte(4, 1);
    }
    
    namespace apollo {
namespace localization {
namespace msf {
    }
    }
    }
    
      x <<= 16;
  x >>= 16;
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
      // Picks a node of at least |minimum_size| from the category. Stores the
  // actual size in |node_size|. Returns nullptr if no node is found.
  FreeSpace SearchForNodeInList(size_t minimum_size, size_t* node_size);
    
    #include 'src/allocation.h'
#include 'src/base/logging.h'
#include 'src/base/platform/platform.h'
#include 'src/cancelable-task.h'
#include 'src/globals.h'
#include 'src/heap/gc-tracer.h'
#include 'src/heap/remembered-set.h'
#include 'src/heap/slot-set.h'
    
    #include 'src/heap/stress-scavenge-observer.h'
    
    #include 'src/ia32/frame-constants-ia32.h'
    
    class ExitFrameConstants : public TypedFrameConstants {
 public:
  static constexpr int kSPOffset = TYPED_FRAME_PUSHED_VALUE_OFFSET(0);
  static constexpr int kCodeOffset = TYPED_FRAME_PUSHED_VALUE_OFFSET(1);
  DEFINE_TYPED_FRAME_SIZES(2);
    }
    
      flatbuffers::FlatBufferBuilder builder;
  auto name = builder.CreateString('Dog');
  auto sound = builder.CreateString('Bark');
  auto animal_buffer = sample::CreateAnimal(builder, name, sound);
  builder.Finish(animal_buffer);
    
    // Generate a flatbuffer schema from the Parser's internal representation.
std::string GenerateFBS(const Parser &parser, const std::string &file_name) {
  // Proto namespaces may clash with table names, escape the ones that were
  // generated from a table:
  for (auto it = parser.namespaces_.begin(); it != parser.namespaces_.end();
       ++it) {
    auto &ns = **it;
    for (size_t i = 0; i < ns.from_table; i++) {
      ns.components[ns.components.size() - 1 - i] += '_';
    }
  }
    }
    
    
    {    code += Indent + '/**\n';
    code += Indent + ' * @param int $_i offset\n';
    code += Indent + ' * @param ByteBuffer $_bb\n';
    code += Indent + ' * @return ' + struct_def.name + '\n';
    code += Indent + ' **/\n';
    code += Indent + 'public function init($_i, ByteBuffer $_bb)\n';
    code += Indent + '{\n';
    code += Indent + Indent + '$this->bb_pos = $_i;\n';
    code += Indent + Indent + '$this->bb = $_bb;\n';
    code += Indent + Indent + 'return $this;\n';
    code += Indent + '}\n\n';
  }
    
    // Test to validate Conan package generated
    
      // GetMessage extracts the subslice of the buffer corresponding to the
  // flatbuffers-encoded region and wraps it in a `Message<T>` to handle buffer
  // ownership.
  template<class T> Message<T> GetMessage() {
    auto buf_data = buf_.scratch_data();       // pointer to memory
    auto buf_size = buf_.capacity();  // size of memory
    auto msg_data = buf_.data();      // pointer to msg
    auto msg_size = buf_.size();      // size of msg
    // Do some sanity checks on data/size
    FLATBUFFERS_ASSERT(msg_data);
    FLATBUFFERS_ASSERT(msg_size);
    FLATBUFFERS_ASSERT(msg_data >= buf_data);
    FLATBUFFERS_ASSERT(msg_data + msg_size <= buf_data + buf_size);
    // Calculate offsets from the buffer start
    auto begin = msg_data - buf_data;
    auto end = begin + msg_size;
    // Get the slice we are working with (no refcount change)
    grpc_slice slice = slice_allocator_.get_slice(buf_data, buf_size);
    // Extract a subslice of the existing slice (increment refcount)
    grpc_slice subslice = grpc_slice_sub(slice, begin, end);
    // Wrap the subslice in a `Message<T>`, but don't increment refcount
    Message<T> msg(subslice, false);
    return msg;
  }
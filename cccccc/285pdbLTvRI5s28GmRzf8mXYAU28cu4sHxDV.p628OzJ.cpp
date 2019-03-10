
        
        
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
    
    
    {} // namespace CAROTENE_NS

    
                vst1q_s32(_norm + j + 0, norml);
            vst1q_s32(_norm + j + 4, normh);
    
    void combineYUYV(const Size2D &size,
                 const u8 * srcyBase, ptrdiff_t srcyStride,
                 const u8 * srcuBase, ptrdiff_t srcuStride,
                 const u8 * srcvBase, ptrdiff_t srcvStride,
                 u8 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
#ifndef __ANDROID__
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
#endif
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
        if (src0Stride == src1Stride && src0Stride == dstStride &&
        src0Stride == (ptrdiff_t)(size.width * sizeof(type)))
    {
        size.width *= size.height;
        size.height = 1;
    }
    
             int16x4_t vline1_s16 = vqmovn_s32(vline1_s32);
         int16x4_t vline2_s16 = vqmovn_s32(vline2_s32);
    
    
    {} // namespace CAROTENE_NS

    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s16, f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s16 q3, d4                                       \n\t'
            'vmovl.s16 q4, d5                                       \n\t'
            'vcvt.f32.s32 q5, q3                                    \n\t'
            'vcvt.f32.s32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                     \n\t'
            'vadd.f32 q10, q8, q1                                     \n\t'
            'vst1.32 {d18-d19}, [%[dst1]]                             \n\t'
            'vst1.32 {d20-d21}, [%[dst2]]                             \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21'
        );
    }
})
#else
CVTS_FUNC(s16, f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int16x8_t vline = vld1q_s16(_src + i);
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
    
    {    return 0;
#endif
}
    
    
    {}  // namespace grpc

    
    void CensusClientCallData::StartTransportStreamOpBatch(
    grpc_call_element* elem, TransportStreamOpBatch* op) {
  if (op->send_initial_metadata() != nullptr) {
    census_context* ctxt = op->get_census_context();
    GenerateClientContext(
        qualified_method_, &context_,
        (ctxt == nullptr) ? nullptr : reinterpret_cast<CensusContext*>(ctxt));
    size_t tracing_len = TraceContextSerialize(context_.Context(), tracing_buf_,
                                               kMaxTraceContextLen);
    if (tracing_len > 0) {
      GRPC_LOG_IF_ERROR(
          'census grpc_filter',
          grpc_metadata_batch_add_tail(
              op->send_initial_metadata()->batch(), &tracing_bin_,
              grpc_mdelem_from_slices(
                  GRPC_MDSTR_GRPC_TRACE_BIN,
                  grpc_slice_from_copied_buffer(tracing_buf_, tracing_len))));
    }
    grpc_slice tags = grpc_empty_slice();
    // TODO: Add in tagging serialization.
    size_t encoded_tags_len = StatsContextSerialize(kMaxTagsLen, &tags);
    if (encoded_tags_len > 0) {
      GRPC_LOG_IF_ERROR(
          'census grpc_filter',
          grpc_metadata_batch_add_tail(
              op->send_initial_metadata()->batch(), &stats_bin_,
              grpc_mdelem_from_slices(GRPC_MDSTR_GRPC_TAGS_BIN, tags)));
    }
  }
    }
    
    // These helper functions return the SpanContext and Span, respectively
// associated with the census_context* stored by grpc. The user will need to
// call this for manual propagation of tracing data.
::opencensus::trace::SpanContext SpanContextFromCensusContext(
    const census_context* ctxt);
::opencensus::trace::Span SpanFromCensusContext(const census_context* ctxt);
    
    constexpr size_t TraceContextEncoding::kGrpcTraceContextSize;
constexpr size_t TraceContextEncoding::kEncodeDecodeFailure;
constexpr size_t TraceContextEncoding::kVersionIdSize;
constexpr size_t TraceContextEncoding::kFieldIdSize;
constexpr size_t TraceContextEncoding::kVersionIdOffset;
constexpr size_t TraceContextEncoding::kVersionId;
    
    #ifndef GRPC_INTERNAL_CPP_EXT_PROTO_SERVER_REFLECTION_H
#define GRPC_INTERNAL_CPP_EXT_PROTO_SERVER_REFLECTION_H
    
    static std::unique_ptr< ::grpc::ServerBuilderPlugin> CreateProtoReflection() {
  return std::unique_ptr< ::grpc::ServerBuilderPlugin>(
      new ProtoServerReflectionPlugin());
}
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetInt(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    #include <windows.h>
#include <cstdint>
    
            if (sectionOffset.size() > m_maskShape.Rank())
            LogicError('NDMask::MaskSection: The sectionOffset dimensionality (%d) must be <= rank (%d) of 'this' mask.', (int)sectionOffset.size(), (int)m_maskShape.Rank());
    
    
    {
    {                valueData = MakeSharedObject<NDArrayView>(dataType, valueDataShape, colStarts.data(), rowIndices.data(), (void*)nonZeroValues.data(), totalNumNonZeroValues, device, readOnly);
            }
            else
            {
                valueData = MakeSharedObject<NDArrayView>(dataType, valueDataShape, DeviceDescriptor::CPUDevice());
                auto maxSequenceSizeInElements = fullyDefinedSampleShape.TotalSize() * maxSequenceLength;
                switch (dataType)
                {
                case DataType::Float:
                {
                    float* dataBuffer = valueData->WritableDataBuffer<float>();
                    for (size_t i = 0; i < numSequences; ++i)
                    {
                        const float* currentSequenceBuffer = sequences[i]->DataBuffer<float>();
                        auto currentSequenceSizeInElements = sequences[i]->Shape().TotalSize();
                        std::copy(currentSequenceBuffer, currentSequenceBuffer + currentSequenceSizeInElements, dataBuffer + (maxSequenceSizeInElements * i));
                    }
                    break;
                }
                case DataType::Double:
                {
                    double* dataBuffer = valueData->WritableDataBuffer<double>();
                    for (size_t i = 0; i < numSequences; ++i)
                    {
                        const double* currentSequenceBuffer = sequences[i]->DataBuffer<double>();
                        auto currentSequenceSizeInElements = sequences[i]->Shape().TotalSize();
                        std::copy(currentSequenceBuffer, currentSequenceBuffer + currentSequenceSizeInElements, dataBuffer + (maxSequenceSizeInElements * i));
                    }
                    break;
                }
                default:
                    NOT_IMPLEMENTED;
                }
            }
        }
    
    
    {            if ((m_varKind == VariableKind::Parameter) || (m_varKind == VariableKind::Constant))
            {
                if (m_shape.HasFreeDimension())
                    InvalidArgument('Parameter/Constant '%S' has invalid shape '%S'; it is illegal for a Parameter/Constant to have a FreeDimension.', AsString().c_str(), m_shape.AsString().c_str());
            }
        }
    
    
    {    return false;
}
    
    #include <string>
    
    template <class ElemType>
void EpochAccumulatorNode<ElemType>::Validate(bool isFinalValidationPass)
{
    Base::Validate(isFinalValidationPass);
    SetDims(Input(0)->GetSampleLayout(), HasMBLayout());
}
    
    
    {    return 0;
}
    
            ListNode* delNode = p->next;
        p->next = delNode->next;
        delete delNode;
    
    using namespace std;
    
    
    {    return 0;
}

    
    #include <iostream>
#include <vector>
#include <queue>
#include <cassert>
    
        TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> res = Solution().preorderTraversal(root);
    print_vec(res);
    
    
    {    return 0;
}
    
    
    {    return 0;
}
    
    
    {  rocksdb::CacheBench bench;
  if (FLAGS_populate_cache) {
    bench.PopulateCache();
  }
  if (bench.Run()) {
    return 0;
  } else {
    return 1;
  }
}
    
      std::atomic<int> total_stopped_;
  std::atomic<int> total_delayed_;
  std::atomic<int> total_compaction_pressure_;
  uint64_t bytes_left_;
  uint64_t last_refill_time_;
  // write rate set when initialization or by `DBImpl::SetDBOptions`
  uint64_t max_delayed_write_rate_;
  // current write rate
  uint64_t delayed_write_rate_;
    
      // Read a key using the snapshot
  read_options.snapshot = snapshot;
  s = txn->GetForUpdate(read_options, 'abc', &value);
  assert(value == 'def');
    
      // open DB
  Status s = DB::Open(options, kDBPath, &db);
  assert(s.ok());
    
    #ifndef ROCKSDB_LITE
// The following set of functions provide a way to construct RocksDB Options
// from a string or a string-to-string map.  Here're the general rule of
// setting option values from strings by type.  Some RocksDB types are also
// supported in these APIs.  Please refer to the comment of the function itself
// to find more information about how to config those RocksDB types.
//
// * Strings:
//   Strings will be used as values directly without any truncating or
//   trimming.
//
// * Booleans:
//   - 'true' or '1' => true
//   - 'false' or '0' => false.
//   [Example]:
//   - {'optimize_filters_for_hits', '1'} in GetColumnFamilyOptionsFromMap, or
//   - 'optimize_filters_for_hits=true' in GetColumnFamilyOptionsFromString.
//
// * Integers:
//   Integers are converted directly from string, in addition to the following
//   units that we support:
//   - 'k' or 'K' => 2^10
//   - 'm' or 'M' => 2^20
//   - 'g' or 'G' => 2^30
//   - 't' or 'T' => 2^40  // only for unsigned int with sufficient bits.
//   [Example]:
//   - {'arena_block_size', '19G'} in GetColumnFamilyOptionsFromMap, or
//   - 'arena_block_size=19G' in GetColumnFamilyOptionsFromString.
//
// * Doubles / Floating Points:
//   Doubles / Floating Points are converted directly from string.  Note that
//   currently we do not support units.
//   [Example]:
//   - {'hard_rate_limit', '2.1'} in GetColumnFamilyOptionsFromMap, or
//   - 'hard_rate_limit=2.1' in GetColumnFamilyOptionsFromString.
// * Array / Vectors:
//   An array is specified by a list of values, where ':' is used as
//   the delimiter to separate each value.
//   [Example]:
//   - {'compression_per_level', 'kNoCompression:kSnappyCompression'}
//     in GetColumnFamilyOptionsFromMap, or
//   - 'compression_per_level=kNoCompression:kSnappyCompression' in
//     GetColumnFamilyOptionsFromMapString
// * Enums:
//   The valid values of each enum are identical to the names of its constants.
//   [Example]:
//   - CompressionType: valid values are 'kNoCompression',
//     'kSnappyCompression', 'kZlibCompression', 'kBZip2Compression', ...
//   - CompactionStyle: valid values are 'kCompactionStyleLevel',
//     'kCompactionStyleUniversal', 'kCompactionStyleFIFO', and
//     'kCompactionStyleNone'.
//
    
    struct UndumpOptions {
  // Database that we will load the dumped file into
  std::string db_path;
  // File location of the dumped file that will be loaded
  std::string dump_location;
  // Compact the db after loading the dumped file
  bool compact_db = false;
};
    
    #include 'rocksdb/db.h'
#include 'rocksdb/status.h'
    
    #ifdef FAILED
#undef FAILED
#endif
    
    #endif //__CCCAMERA_ACTION_H__

    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCActionGrid3D.h'
#include 'base/CCDirector.h'
    
    protected:
    Vec2 _position;
    
        // actions
    
    /** Adds an action with a target. 
     If the target is already present, then the action will be added to the existing target.
     If the target is not present, a new instance of this target will be created either paused or not, and the action will be added to the newly created target.
     When the target is paused, the queued actions won't be 'ticked'.
     *
     * @param action    A certain action.
     * @param target    The target which need to be added an action.
     * @param paused    Is the target paused or not.
     */
    virtual void addAction(Action *action, Node *target, bool paused);
    
    NS_CC_END
    
        /** Adds a frame with a texture and a rect. Internally it will create a SpriteFrame and it will add it.
     * The frame will be added with one 'delay unit'.
     * Added to facilitate the migration from v0.8 to v0.9.
     * @param pobTexture A frame with a texture.
     * @param rect The Texture of rect.
     */
    void addSpriteFrameWithTexture(Texture2D* pobTexture, const Rect& rect);
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCAnimationCache.h'
#include '2d/CCSpriteFrameCache.h'
#include 'platform/CCFileUtils.h'
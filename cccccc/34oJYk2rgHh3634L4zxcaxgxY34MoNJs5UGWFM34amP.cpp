
        
        #include 'swift/Basic/Cache.h'
#include 'llvm/ADT/SmallString.h'
#include <cache.h>
    
      IsFirstLine = true;
  for (auto &Line : Lines) {
    if (!IsFirstLine) {
      Line = Line.drop_front(WhitespaceToTrim);
    }
    IsFirstLine = false;
  }
    
    
    {    void operator() (const T * src0, const T * src1, T * dst) const
    {
        dst[0] = internal::saturate_cast<T>(src0[0] >= src1[0] ? (s64)src0[0] - src1[0] : (s64)src1[0] - src0[0]);
    }
};
    
    #define SPLIT4ALPHA(sgn,bits) void split4(const Size2D &size,                                        \
                                          const sgn##bits * srcBase, ptrdiff_t srcStride,            \
                                          sgn##bits * dst3Base, ptrdiff_t dst3Stride,                \
                                          sgn##bits * dst1Base, ptrdiff_t dst1Stride)                \
{                                                                                                    \
    internal::assertSupportedConfiguration();                                                        \
    (void)size;                                                                                      \
    (void)srcBase;                                                                                   \
    (void)srcStride;                                                                                 \
    (void)dst3Base;                                                                                  \
    (void)dst3Stride;                                                                                \
    (void)dst1Base;                                                                                  \
    (void)dst1Stride;                                                                                \
}
    
    #define MERGE_QUAD(sgn, bits, n) { \
                                     vec128 v_dst; \
                                     /*FILL_LINES##n(PREF, sgn##bits) \
                                     FILL_LINES##n(VLD1Q, sgn##bits)*/ \
                                     FILL_LINES##n(PRLD, sgn##bits) \
                                     vst##n##q_##sgn##bits(dst + dj, v_dst); \
                                 }
    
    namespace internal {
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(f32, s16, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vmul.f32 q4, q2, q0                                     \n\t'
            'vmul.f32 q5, q3, q0                                     \n\t'
            'vadd.f32 q6, q4, q1                                     \n\t'
            'vadd.f32 q7, q5, q1                                     \n\t'
            'vcvt.s32.f32 q8, q6                                     \n\t'
            'vcvt.s32.f32 q9, q7                                     \n\t'
            'vqmovn.s32 d8, q8                                       \n\t'
            'vqmovn.s32 d9, q9                                       \n\t'
            'vst1.16 {d8-d9}, [%[dst]]                               \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst] 'r' (_dst + i),
              'w' (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19'
        );
    }
})
#else
CVTS_FUNC(f32, s16, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        float32x4_t vline1_f32 = vld1q_f32(_src + i + 0);
        float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int16x4_t vRes1 = vqmovn_s32(vline1_s32);
        int16x4_t vRes2 = vqmovn_s32(vline2_s32);
        vst1q_s16(_dst + i, vcombine_s16(vRes1, vRes2));
    }
})
#endif
    
        for (ptrdiff_t y = 0; y < height; ++y)
    {
        const u8 * srow0 = y == 0 && border == BORDER_MODE_CONSTANT ? NULL : internal::getRowPtr(srcBase, srcStride, std::max<ptrdiff_t>(y - 1, 0));
        const u8 * srow1 = internal::getRowPtr(srcBase, srcStride, y);
        const u8 * srow2 = y + 1 == height && border == BORDER_MODE_CONSTANT ? NULL : internal::getRowPtr(srcBase, srcStride, std::min(y + 1, height - 1));
        u8 * drow = internal::getRowPtr(dstBase, dstStride, y);
    }
    
    namespace grpc {
    }
    
    #include <grpc/grpc_security.h>
#include 'src/core/lib/channel/channel_args.h'
    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
    #include 'absl/strings/string_view.h'
#include 'absl/time/clock.h'
#include 'absl/time/time.h'
#include 'include/grpc/grpc_security.h'
#include 'src/cpp/ext/filters/census/channel_filter.h'
#include 'src/cpp/ext/filters/census/context.h'
    
    const ViewDescriptor& ClientServerLatencyHour() {
  const static ViewDescriptor descriptor =
      HourDescriptor()
          .set_name('grpc.io/client/server_latency/hour')
          .set_measure(kRpcClientServerLatencyMeasureName)
          .set_aggregation(MillisDistributionAggregation())
          .add_column(ClientMethodTagKey());
  return descriptor;
}
    
    
    {  const protobuf::FieldDescriptor* field_desc =
      descriptor_pool_->FindExtensionByNumber(desc,
                                              request->extension_number());
  if (field_desc == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'Extension not found.');
  }
  std::unordered_set<grpc::string> seen_files;
  FillFileDescriptorResponse(field_desc->file(), response, &seen_files);
  return Status::OK;
}
    
    
    {}  // namespace grpc

    
    namespace grpc {
    }
    
    #include <utility>
    
    class b2Triangle{
public:
	float* x;
    float* y;
	b2Triangle();
	b2Triangle(float32 x1, float32 y1, float32 x2, float32 y2, float32 x3, float32 y3);
	~b2Triangle();
	bool IsInside(float32 _x, float32 _y);
	void Set(const b2Triangle& toMe);
    }
    
    			if(mip == 0)
			{
				pImageData = a_pafSourceRGBA;
			}
			else
			{
				pMipImage = new float[mipWidth*mipHeight*4];
				if(FilterTwoPass(a_pafSourceRGBA, a_uiSourceWidth, a_uiSourceHeight, pMipImage, mipWidth, mipHeight, a_uiMipFilterFlags, Etc::FilterLanczos3) )
				{
					pImageData = pMipImage;
				}
			}
    
    
    {} // namespace Etc

    
    		static const unsigned int ROWS = 4;
		static const unsigned int COLUMNS = 4;
		static const unsigned int PIXELS = ROWS * COLUMNS;
		static const float LUMA_WEIGHT;
		static const float CHROMA_BLUE_WEIGHT;
    
      bool              m_UseFullRange;
  EdgeList          m_edges;
  bool              m_PreserveCollinear;
  bool              m_HasOpenPaths;
  PolyOutList       m_PolyOuts;
  TEdge           *m_ActiveEdges;
    
      Compression level can be specified in parameter level. At the moment,
  only level 1 and level 2 are supported.
  Level 1 is the fastest compression and generally useful for short data.
  Level 2 is slightly slower but it gives better compression ratio.
    
    #include 'opus_types.h'
#include 'opus_defines.h'
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
    #include <memory>
    
      virtual ~DHTReplaceNodeTask();
    
      virtual bool isReply() const CXX11_OVERRIDE;
    
    void DHTRoutingTable::setTaskQueue(DHTTaskQueue* taskQueue)
{
  taskQueue_ = taskQueue;
}
    
      void getClosestKNodes(std::vector<std::shared_ptr<DHTNode>>& nodes,
                        const unsigned char* key) const;
    
    
    {  void serialize(const std::string& filename);
};
    
    #include <vector>
#include <memory>
    
      void update();
    
      virtual std::shared_ptr<DHTTask>
  createNodeLookupTask(const unsigned char* targetID) CXX11_OVERRIDE;
    
    bool DHTTokenTracker::validateToken(const std::string& token,
                                    const unsigned char* infoHash,
                                    const std::string& ipaddr,
                                    uint16_t port) const
{
  for (auto& elem : secret_) {
    if (generateToken(infoHash, ipaddr, port, elem) == token) {
      return true;
    }
  }
  return false;
}
    
    
    {} // namespace aria2

    
    //
// Speed
//
Speed::Speed()
: _speed(0.0)
, _innerAction(nullptr)
{
}
    
    Vec3 Grid3DAction::getOriginalVertex(const Vec2& position) const
{
    Grid3D *g = (Grid3D*)_gridNodeTarget->getGrid();
    return g->getOriginalVertex(position);
}
    
    
    {    CC_SAFE_DELETE(ret);
    return nullptr;
}
    
        /** 
     * Creates the action with 3D rotation angles.
     * @param duration Duration time, in seconds.
     * @param dstAngle3D A Vec3 angle.
     * @return An autoreleased RotateTo object.
     */
    static RotateTo* create(float duration, const Vec3& dstAngle3D);
    
        /** @deprecated Use getNumberOfRunningActionsInTarget() instead.
     */
    CC_DEPRECATED_ATTRIBUTE ssize_t numberOfRunningActionsInTarget(Node *target) const { return getNumberOfRunningActionsInTarget(target); }
    
    /*
 * Update each tick
 * Time is the percentage of the way through the duration
 */
void PageTurn3D::update(float time)
{
    float tt = MAX(0, time - 0.25f);
    float deltaAy = (tt * tt * 500);
    float ay = -100 - deltaAy;
    
    float deltaTheta = sqrtf(time);
    float theta = deltaTheta > 0.5f ? (float)M_PI_2*deltaTheta : (float)M_PI_2*(1-deltaTheta);
    
    float rotateByYAxis = (2-time)* M_PI;
    
    float sinTheta = sinf(theta);
    float cosTheta = cosf(theta);
    
    for (int i = 0; i <= _gridSize.width; ++i)
    {
        for (int j = 0; j <= _gridSize.height; ++j)
        {
            // Get original vertex
            Vec3 p = getOriginalVertex(Vec2(i ,j));
            
            p.x -= getGridRect().origin.x;
            float R = sqrtf((p.x * p.x) + ((p.y - ay) * (p.y - ay)));
            float r = R * sinTheta;
            float alpha = asinf( p.x / R );
            float beta = alpha / sinTheta;
            float cosBeta = cosf( beta );
            
            // If beta > PI then we've wrapped around the cone
            // Reduce the radius to stop these points interfering with others
            if (beta <= M_PI)
            {
                p.x = ( r * sinf(beta));
            }
            else
            {
                // Force X = 0 to stop wrapped
                // points
                p.x = 0;
            }
    }
    }
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPROGRESS_TIMER_H__
#define __ACTION_CCPROGRESS_TIMER_H__
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    void AnimationCache::addAnimationsWithDictionary(const ValueMap& dictionary,const std::string& plist)
{
    auto anisItr = dictionary.find('animations');
    if (anisItr == dictionary.end() )
    {
        CCLOG('cocos2d: AnimationCache: No animations were found in provided dictionary.');
        return;
    }
    
    const Value& animations = anisItr->second;
    unsigned int version = 1;
    }
    
        /** Deletes a Animation from the cache.
     *
     * @param name The name of animation.
     */
    void removeAnimation(const std::string& name);
    /** @deprecated. Use removeAnimation() instead
     * @js NA
     * @lua NA
     */
    CC_DEPRECATED_ATTRIBUTE void removeAnimationByName(const std::string& name){ removeAnimation(name);}
    
    #ifndef BOOST_ATOMIC_FENCES_HPP_INCLUDED_
#define BOOST_ATOMIC_FENCES_HPP_INCLUDED_
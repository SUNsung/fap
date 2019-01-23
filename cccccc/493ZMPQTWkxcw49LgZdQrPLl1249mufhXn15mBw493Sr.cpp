
        
        // static
void UvTaskRunner::OnClose(uv_handle_t* handle) {
  delete reinterpret_cast<uv_timer_t*>(handle);
}
    
    namespace api {
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Event);
};
    
    namespace base {
class FilePath;
}
    
    namespace atom {
    }
    
    #endif  // ATOM_BROWSER_MAC_IN_APP_PURCHASE_H_

    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(AboutProtocolHandler);
};
    
    #undef cv_hal_addWeighted8u
#define cv_hal_addWeighted8u(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::u8, addWeighted, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_addWeighted8s
#define cv_hal_addWeighted8s(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::s8, addWeighted, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_addWeighted16u
#define cv_hal_addWeighted16u(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::u16, addWeighted, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_addWeighted16s
#define cv_hal_addWeighted16s(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::s16, addWeighted, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_addWeighted32s
#define cv_hal_addWeighted32s(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::s32, addWeighted, src1, sz1, src2, sz2, dst, sz, w, h, scales)
//#undef cv_hal_addWeighted32f
//#define cv_hal_addWeighted32f(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::f32, addWeighted, src1, sz1, src2, sz2, dst, sz, w, h, scales)
//#undef cv_hal_addWeighted64f
//#define cv_hal_addWeighted64f(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::f64, addWeighted, src1, sz1, src2, sz2, dst, sz, w, h, scales)
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC1(s32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                             \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                             \n\t'
            'vcvt.f32.s32 q4, q2                                    \n\t'
            'vcvt.f32.s32 q5, q3                                    \n\t'
            'vmul.f32 q6, q4, q0                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vadd.f32 q8, q6, q1                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vcvt.s32.f32 q10, q8                                   \n\t'
            'vcvt.s32.f32 q11, q9                                   \n\t'
            'vst1.32 {d20-d21}, [%[dst1]]                           \n\t'
            'vst1.32 {d22-d23}, [%[dst2]]                           \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23'
        );
    }
})
#else
CVTS_FUNC1(s32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int32x4_t vline1_s32 = vld1q_s32(_src + i + 0);
        int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        vst1q_s32(_dst + i + 0, vline1_s32);
        vst1q_s32(_dst + i + 4, vline2_s32);
    }
})
#endif
    
            if(i + 2 <= size.width)
        {
            float32x2_t vres = vmul_f32(vld1_f32(src0 + i), vld1_f32(src1 + i));
            result += vget_lane_f32(vres, 0) + vget_lane_f32(vres, 1);
            i += 2;
        }
    
    /*
Copyright (c) 2006, 2008 Edward Rosten
All rights reserved.
    
            uint8x8_t el8shr0 = vld1_u8(src + j);
        uint8x8_t el8shr1 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 8));
        uint8x8_t el8shr2 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 16));
        uint8x8_t el8shr3 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 24));
    
    
    {
    {        for( ; x < cols; x++ )
        {
            s16 nextx, nextx2;
            s16 prevx, prevx2;
            // make border
            if (border == BORDER_MODE_REPLICATE || border == BORDER_MODE_REFLECT)
            {
                prevx = x == 0 ? v0[0] : v0[x-1];
                prevx2 = x == 0 ? v2[0] : v2[x-1];
                nextx = x == cols-1 ? v0[x] : v0[x+1];
                nextx2 = x == cols-1 ? v2[x] : v2[x+1];
            }
            else if (border == BORDER_MODE_REFLECT101)
            {
                prevx = x == 0 ? v0[1] : v0[x-1];
                prevx2 = x == 0 ? v2[1] : v2[x-1];
                nextx = x == cols-1 ? v0[x-1] : v0[x+1];
                nextx2 = x == cols-1 ? v2[x-1] : v2[x+1];
            }
            else //if (border == BORDER_MODE_CONSTANT)
            {
                prevx = x == 0 ? borderValue : v0[x-1];
                prevx2 = x == 0 ? borderValue : v2[x-1];
                nextx = x == cols-1 ? borderValue : v0[x+1];
                nextx2 = x == cols-1 ? borderValue : v2[x+1];
            }
            s16 res = prevx + nextx - 4*v1[x] + prevx2 + nextx2;
            *(drow+x) = 2*res;
        }
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)border;
    (void)borderValue;
#endif
}
    
        AGInfo() :
      grad_req(kNullOp), fresh_out_grad(false) {}
    
    #ifdef CHECK_NEXT_TIMING
#define IF_CHECK_TIMING(__t$) __t$
#else
#define IF_CHECK_TIMING(__t$)
#endif
    
    
    {
    {    CHECK_EQ(net_param.layer_size(), 1) << 'Protoxt ' << value <<' is more than one layer';
    default_value_ = caffe::LayerParameter(net_param.layer(0));
    has_default_ = true;
    // return self to allow chaining
    return this->self();
  }
};
    
      std::vector<int> DeclareBackwardDependency(
    const std::vector<int> &out_grad,
    const std::vector<int> &in_data,
    const std::vector<int> &out_data) const override {
    std::vector<int> dep;
    dep.insert(dep.end(), in_data.begin(), in_data.end());
    dep.insert(dep.end(), out_data.begin(), out_data.end());
    return dep;
  }
    
    #if MXNET_USE_OPENCV
#include <opencv2/opencv.hpp>
#include <vector>  // NOLINT(*)
#include <utility> // NOLINT(*)
#include <string> // NOLINT(*)
    
      Byte t1(bytes + 2);
  int32_t t = t1.get_byte(6, 2);
    
    namespace apollo {
namespace drivers {
namespace conti_radar {
    }
    }
    }
    
    BaseMapMatrix::BaseMapMatrix(const BaseMapMatrix& cells) {}
    
    #include 'modules/planning/lattice/trajectory_generation/backup_trajectory_generator.h'
    
    bool NodeWithRange::IsVirtual() const { return topo_node_->IsVirtual(); }
    
    
    {
    {
    {}  // namespace gem
}  // namespace canbus
}  // namespace apollo

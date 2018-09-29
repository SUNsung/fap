
        
            switch(kernel_type)
    {
    case CV_8UC1:
        ctx->kernelx_data[0]=kernelx_data[0];
        ctx->kernelx_data[1]=kernelx_data[1];
        ctx->kernelx_data[2]=kernelx_data[2];
        ctx->kernely_data[0]=kernely_data[0];
        ctx->kernely_data[1]=kernely_data[1];
        ctx->kernely_data[2]=kernely_data[2];
        break;
    case CV_8SC1:
        ctx->kernelx_data[0]=((char*)kernelx_data)[0];
        ctx->kernelx_data[1]=((char*)kernelx_data)[1];
        ctx->kernelx_data[2]=((char*)kernelx_data)[2];
        ctx->kernely_data[0]=((char*)kernely_data)[0];
        ctx->kernely_data[1]=((char*)kernely_data)[1];
        ctx->kernely_data[2]=((char*)kernely_data)[2];
        break;
    case CV_16UC1:
        ctx->kernelx_data[0]=((int16_t*)kernelx_data)[0];
        ctx->kernelx_data[1]=((int16_t*)kernelx_data)[1];
        ctx->kernelx_data[2]=((int16_t*)kernelx_data)[2];
        ctx->kernely_data[0]=((int16_t*)kernely_data)[0];
        ctx->kernely_data[1]=((int16_t*)kernely_data)[1];
        ctx->kernely_data[2]=((int16_t*)kernely_data)[2];
    default:
        delete ctx;
        return CV_HAL_ERROR_NOT_IMPLEMENTED;
    }
    
    
    {            vst1q_s16(dst + j, v_dst0);
            vst1q_s16(dst + j + 8, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            int16x8_t v_src = vreinterpretq_s16_u16(vmovl_u8(vld1_u8(src + j)));
            int16x8_t v_dst = vld1q_s16(dst + j);
            int16x4_t v_srclo = vget_low_s16(v_src), v_srchi = vget_high_s16(v_src);
            v_dst = vcombine_s16(vqmovn_s32(vaddw_s16(vmull_s16(v_srclo, v_srclo), vget_low_s16(v_dst))),
                                 vqmovn_s32(vaddw_s16(vmull_s16(v_srchi, v_srchi), vget_high_s16(v_dst))));
            vst1q_s16(dst + j, v_dst);
        }
    
            const f32* ln0 = idx_rm1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm1) : tmp;
        const f32* ln1 = internal::getRowPtr(srcBase, srcStride, i);
        const f32* ln2 = internal::getRowPtr(srcBase, srcStride, i + 1);
        const f32* ln3 = idx_rp2 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp2) : tmp;
    
    #define  FARG_LINE(type, n) , const type * src##n##Base, ptrdiff_t src##n##Stride
    
                v_dst.val[0] = vcombine(vget_high(v_src.val[0]), vget_low(v_src.val[0]));
            v_dst.val[1] = vcombine(vget_high(v_src.val[1]), vget_low(v_src.val[1]));
            v_dst.val[2] = vcombine(vget_high(v_src.val[2]), vget_low(v_src.val[2]));
    
      bool ApplyToCall(grpc_call* call) override;
  SecureCallCredentials* AsSecureCredentials() override { return this; }
    
    namespace grpc {
    }
    
    MeasureDouble RpcServerReceivedBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerReceivedBytesPerRpcMeasureName,
      'Total bytes received across all messages per RPC', kUnitBytes);
  return measure;
}
    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
    
    {    buf[kVersionIdOffset] = kVersionId;
    buf[kServerElapsedTimeOffset] = kServerElapsedTimeField;
    absl::little_endian::Store64(&buf[kServerElapsedTimeOffset + kFieldIdSize],
                                 time);
    return kRpcServerStatsSize;
  }
    
    
    {            if (std::find(combinedFunctionArgs.begin(), combinedFunctionArgs.end(), m_trainingSampleCountVar) == combinedFunctionArgs.end())
                combinedFunctionArgs.push_back(m_trainingSampleCountVar);
        }
    
                Microsoft::MSR::CNTK::LearnableParameter<ElementType>::InitBilinear(*valueMatrix, AsTensorShape(shape), kernelWidth, kernelHeight, AsCNTKImplDeviceId(device));
        }
        else
        {
            auto randomSeed = (unsigned long)initConfig[RandomSeedAttributeName].Value<size_t>();
            // using this in place on an assert, which is ignored in Release mode.
            if (randomSeed == SentinelValueForAutoSelectRandomSeed) {
                RuntimeError('Unexpected 'auto-select' placeholder. At this point the seed should have a fixed value.');
            }
    
    #pragma once
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // 'secure' CRT not available on all platforms  --add this at the top of all CPP files that give 'function or variable may be unsafe' warnings
#endif
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif // NOMINMAX
#pragma comment(lib, 'Dbghelp.lib')
#else
#include <execinfo.h>
#include <cxxabi.h>
#endif
    
    
    {        fstream << m_learningRateMultiplier;
    }
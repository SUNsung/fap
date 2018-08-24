
        
        
    {    QWidget *m_dummyWidget;
    QMenu *m_dockMenu;
    QMainWindow *mainWindow;
};
    
    
    {private:
    Ui::OpenURIDialog *ui;
};
    
    #undef cv_hal_cmp8u
#define cv_hal_cmp8u(src1, sz1, src2, sz2, dst, sz, w, h, op) TEGRA_CMP(CAROTENE_NS::u8, src1, sz1, src2, sz2, dst, sz, w, h, op)
#undef cv_hal_cmp8s
#define cv_hal_cmp8s(src1, sz1, src2, sz2, dst, sz, w, h, op) TEGRA_CMP(CAROTENE_NS::s8, src1, sz1, src2, sz2, dst, sz, w, h, op)
#undef cv_hal_cmp16u
#define cv_hal_cmp16u(src1, sz1, src2, sz2, dst, sz, w, h, op) TEGRA_CMP(CAROTENE_NS::u16, src1, sz1, src2, sz2, dst, sz, w, h, op)
#undef cv_hal_cmp16s
#define cv_hal_cmp16s(src1, sz1, src2, sz2, dst, sz, w, h, op) TEGRA_CMP(CAROTENE_NS::s16, src1, sz1, src2, sz2, dst, sz, w, h, op)
#undef cv_hal_cmp32s
#define cv_hal_cmp32s(src1, sz1, src2, sz2, dst, sz, w, h, op) TEGRA_CMP(CAROTENE_NS::s32, src1, sz1, src2, sz2, dst, sz, w, h, op)
#undef cv_hal_cmp32f
#define cv_hal_cmp32f(src1, sz1, src2, sz2, dst, sz, w, h, op) TEGRA_CMP(CAROTENE_NS::f32, src1, sz1, src2, sz2, dst, sz, w, h, op)
//#undef cv_hal_cmp64f
//#define cv_hal_cmp64f(src1, sz1, src2, sz2, dst, sz, w, h, op) TEGRA_CMP(CAROTENE_NS::f64, src1, sz1, src2, sz2, dst, sz, w, h, op)
    
        enum FLIP_MODE
    {
        FLIP_HORIZONTAL_MODE = 1,
        FLIP_VERTICAL_MODE = 2,
        FLIP_BOTH_MODE = FLIP_HORIZONTAL_MODE | FLIP_VERTICAL_MODE
    };
    
            for (; j < roiw32; j += 32)
        {
            internal::prefetch(src0 + j);
            internal::prefetch(src1 + j);
            uint8x16_t v_src00 = vld1q_u8(src0 + j), v_src01 = vld1q_u8(src0 + j + 16);
            uint8x16_t v_src10 = vld1q_u8(src1 + j), v_src11 = vld1q_u8(src1 + j + 16);
            vst1q_u16(dst + j, vaddl_u8(vget_low_u8(v_src00), vget_low_u8(v_src10)));
            vst1q_u16(dst + j + 8, vaddl_u8(vget_high_u8(v_src00), vget_high_u8(v_src10)));
            vst1q_u16(dst + j + 16, vaddl_u8(vget_low_u8(v_src01), vget_low_u8(v_src11)));
            vst1q_u16(dst + j + 24, vaddl_u8(vget_high_u8(v_src01), vget_high_u8(v_src11)));
        }
        for (; j < roiw8; j += 8)
        {
            uint8x8_t v_src0 = vld1_u8(src0 + j);
            uint8x8_t v_src1 = vld1_u8(src1 + j);
            vst1q_u16(dst + j, vaddl_u8(v_src0, v_src1));
        }
    
    /*!
 *  Aligns pointer by the certain number of bytes
 *
 *  This small inline function aligns the pointer by the certain number of bytes by shifting
 *  it forward by 0 or a positive offset.
 */
template<typename T> inline T* alignPtr(T* ptr, size_t n=sizeof(T))
{
    return (T*)(((size_t)ptr + n-1) & -n);
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u16, u8, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src1]]                             \n\t'
            'vmovl.u16 q3, d4                                      \n\t'
            'vmovl.u16 q4, d5                                      \n\t'
            'vcvt.f32.u32 q5, q3                                   \n\t'
            'vcvt.f32.u32 q6, q4                                   \n\t'
            'vmul.f32 q7, q5, q0                                   \n\t'
            'vmul.f32 q8, q6, q0                                   \n\t'
            'vadd.f32 q9, q7, q1                                   \n\t'
            'vadd.f32 q10, q8, q1                                  \n\t'
            'vcvt.s32.f32 q11, q9                                  \n\t'
            'vcvt.s32.f32 q12, q10                                 \n\t'
            'vqmovn.s32 d26, q11                                   \n\t'
            'vqmovn.s32 d27, q12                                   \n\t'
            'vqmovun.s16 d28, q13                                  \n\t'
             'vst1.8 {d28}, [%[dst]]                               \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i),
              [dst] 'r' (_dst + i + 0),
               'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28'
        );
    }
})
#else
CVTS_FUNC(u16, u8, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        uint16x8_t vline = vld1q_u16(_src + i);
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int16x4_t vRes1 = vqmovn_s32(vline1_s32);
        int16x4_t vRes2 = vqmovn_s32(vline2_s32);
        uint8x8_t vRes = vqmovun_s16(vcombine_s16(vRes1, vRes2));
        vst1_u8(_dst + i, vRes);
    }
})
#endif
    
    
    {} // namespace CAROTENE_NS

    
    #include 'common.hpp'
    
            const u8* prev = buf[(i - 4 + 3)%3];
        const u8* pprev = buf[(i - 5 + 3)%3];
        cornerpos = cpbuf[(i - 4 + 3)%3];
        ncorners = cornerpos[-1];
    
    #endif
    
    #include <condition_variable>
#include <mutex>
#include <string>
#include <system_error>
#include <vector>
    
    X before running op:
[[0.5821691  0.07719802 0.50159824]
 [0.40952456 0.36788362 0.84887683]
 [0.02472685 0.65730894 0.9066397 ]]
X after running op:
[[1.7899168 1.080256  1.6513585]
 [1.5061016 1.4446739 2.3370204]
 [1.0250351 1.9295927 2.4759884]]
    
      const auto& X = in[0];
  const auto& W = in[1];
  const auto& b = in[2];
  auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  const int M = size_to_dim_(canonical_axis, GetDimsVector(in[0]));
  const int K = size_from_dim_(canonical_axis, GetDimsVector(in[0]));
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    
    {
    {SHOULD_NOT_DO_GRADIENT(FindDuplicateElements);
} // namespace
} // namespace caffe2

    
            template <typename GradType, typename AccumType>
        void Update(const Parameter& parameter, const NDArrayViewPtr& gradientValue, const NDArrayViewPtr& smoothedGradientValue, size_t trainingSampleCount);
    
                tensorView = new TensorView<double>(slicedMatrixView, AsTensorViewShape(sliceViewShape));
            break;
        }
        case DataType::Float16:
        {
            auto currentMatrix = GetMatrix<half>();
            std::pair<size_t, size_t> currentMatrixDims = { currentMatrix->GetNumRows(), currentMatrix->GetNumCols() };
            std::shared_ptr<Matrix<half>> slicedMatrixView;
            if (sliceViewMatrixDims.first != currentMatrixDims.first)
                slicedMatrixView = make_shared<Matrix<half>>(currentMatrix->Reshaped(1, currentMatrix->GetNumElements()).ColumnSlice(flatBufferOffset, sliceViewShape.TotalSize()));
            else
                slicedMatrixView = make_shared<Matrix<half>>(currentMatrix->ColumnSlice(sliceMatrixColumnOffset, sliceViewMatrixDims.second));
    
        template <typename T> 
    inline std::string GetVersionsString(size_t currentVersion, size_t dictVersion)
    {
        std::stringstream info;
        info << 'Current ' << Typename<T>() << ' version = ' << currentVersion 
             << ', Dictionary version = ' << dictVersion;
        return info.str();
    }
    
    
    {            m_parameterLearners->DoAggregateMetricsIfNeededLambda(localLossValue, localEvalCriterion);
        }
    
        template <typename ElementType>
    void Value::CopyVariableValueToVector(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences)
    {
        if (outputVariable.Shape()[0] != outputVariable.Shape().TotalSize())
            InvalidArgument('For sparse data, the outputVariable's leading axis dimensionality (%zu) must equal the total size (%zu) of the Variable '%S'.',
                            outputVariable.Shape()[0], outputVariable.Shape().TotalSize(), outputVariable.AsString().c_str());
    }
    
    
    {            if ((m_varKind == VariableKind::Parameter) || (m_varKind == VariableKind::Constant))
            {
                if (m_shape.HasFreeDimension())
                    InvalidArgument('Parameter/Constant '%S' has invalid shape '%S'; it is illegal for a Parameter/Constant to have a FreeDimension.', AsString().c_str(), m_shape.AsString().c_str());
            }
        }
    
    
    {    std::string GetCallStack(size_t skipLevels = 0, bool makeFunctionNamesStandOut = false);
};
    
    
    {/*!
 * \brief Macro to register objective function.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_OBJECTIVE(LinearRegression, 'reg:linear')
 * .describe('Linear regression objective')
 * .set_body([]() {
 *     return new RegLossObj(LossType::kLinearSquare);
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_OBJECTIVE(UniqueId, Name)                      \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::ObjFunctionReg &              \
  __make_ ## ObjFunctionReg ## _ ## UniqueId ## __ =                    \
      ::dmlc::Registry< ::xgboost::ObjFunctionReg>::Get()->__REGISTER__(Name)
}  // namespace xgboost
#endif  // XGBOOST_OBJECTIVE_H_

    
    XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(lz4i16hc)
.describe('Apply LZ4 binary data compression(16 bit index mode) for ext memory.')
.set_body([]() {
    return new SparsePageLZ4Format<uint16_t>(true);
  });
    
      size_t Read(void* dptr, size_t size) override {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer == 0) return strm_->Read(dptr, size);
    if (nbuffer < size) {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, nbuffer);
      buffer_ptr_ += nbuffer;
      return nbuffer + strm_->Read(reinterpret_cast<char*>(dptr) + nbuffer,
                                   size - nbuffer);
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      buffer_ptr_ += size;
      return size;
    }
  }
    
    namespace xgboost {
namespace common {
/*!
 * \brief calculate the sigmoid of the input.
 * \param x input parameter
 * \return the transformed value.
 */
XGBOOST_DEVICE inline float Sigmoid(float x) {
  return 1.0f / (1.0f + expf(-x));
}
    }
    }
    
      ~Monitor() {
    if (!debug_verbose) return;
    }
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    #include 'imgui.h'
#include 'imgui_impl_marmalade.h'
#include <stdio.h>
    
    
    {    return 0;
}

    
    static void CleanupVulkan()
{
    ImGui_ImplVulkanH_WindowData* wd = &g_WindowData;
    ImGui_ImplVulkanH_DestroyWindowData(g_Instance, g_Device, wd, g_Allocator);
    vkDestroyDescriptorPool(g_Device, g_DescriptorPool, g_Allocator);
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
            ID3D11Texture2D *pTexture = NULL;
        D3D11_SUBRESOURCE_DATA subResource;
        subResource.pSysMem = pixels;
        subResource.SysMemPitch = desc.Width * 4;
        subResource.SysMemSlicePitch = 0;
        g_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture);
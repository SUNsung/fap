
        
        
    {
    {}  // namespace exec
}  // namespace mxnet

    
    template<typename xpu>
void Quantize2BitKernelLaunch(mshadow::Stream<xpu> *s, const std::vector<mxnet::TBlob> &inputs,
                              const float threshold) {
  mxnet::op::mxnet_op::Kernel<quantize_2bit, xpu>
    ::Launch(s,
            inputs[2].Size(),         // compressed array size
            inputs[0].Size(),         // original size
            inputs[2].dptr<float>(),  // compressed array
            inputs[0].dptr<float>(),  // original array
            inputs[1].dptr<float>(),  // residual array
            -1 *threshold,            // negative threshold
            threshold);               // positive threshold
}
    
    
    {    typename DataType<DType>::ScaleType alpha = (req[bs::kData] == kNullOp) ? 0.0f : 1.0f;
    typename DataType<DType>::ScaleType beta = (req[bs::kData] == kAddTo) ? 1.0f : 0.0f;
    typename DataType<DType>::ScaleType alpha_dgrid = 1.0f;
    typename DataType<DType>::ScaleType beta_dgrid = 0.0f;
    CUDNN_CALL(cudnnSpatialTfSamplerBackward(s->dnn_handle_,
                                             st_desc_,
                                             &alpha,
                                             in_desc_,
                                             data.dptr_,
                                             &beta,
                                             in_desc_/*reuse in_desc_*/,
                                             gdata.dptr_/*output*/,
                                             &alpha_dgrid,
                                             out_desc_/*reuse out_desc_*/,
                                             grad.dptr_,
                                             grid_tmp.dptr_,
                                             &beta_dgrid,
                                             grid_tmp.dptr_));
    Assign(ggrid, req[bs::kGrid], transpose(grid_tmp, Shape4(0, 3, 1, 2)));
  }
    
    namespace CNTK
{
    static Matrix<char>* AllocateMatrix(const NDShape& viewShape, const DeviceDescriptor& device)
    {
        auto matrixDims = GetMatrixDimensions(viewShape);
        return new Matrix<char>(matrixDims.first, matrixDims.second, AsCNTKImplDeviceId(device));
    }
    }
    
    namespace CNTK
{
    const std::wstring versionKey = L'version';
    const std::wstring typeKey = L'type';
    const std::wstring uidKey = L'uid';
    const std::wstring kindKey = L'kind';
    const std::wstring dataTypeKey = L'data_type';
    const std::wstring dynamicAxisKey = L'dynamic_axis';
    const std::wstring isSparseKey = L'is_sparse';
    const std::wstring nameKey = L'name';
    const std::wstring needsGradientKey = L'needs_gradient';
    const std::wstring shapeKey = L'shape';
    const std::wstring valueKey = L'value';
    const std::wstring opKey = L'op';
    const std::wstring attributesKey = L'attributes';
    const std::wstring inputsKey = L'inputs';
    const std::wstring rootKey = L'root';
    const std::wstring functionsKey = L'primitive_functions';
    const std::wstring sampleCountKey = L'sample_count';
    const std::wstring minibatchCountKey = L'minibatchCount'; // TODO: Python-style spelling
    const std::wstring sweepCountKey = L'sweepCount';
    const std::wstring unitKey = L'unit';
    const std::wstring refMBSizeKey = L'ref_mb_size';
    const std::wstring epochSizeKey = L'epoch_size';
    const std::wstring scheduleKey = L'schedule';
    const std::wstring learningRateScheduleKey = L'learnig_rate_schedule';
    const std::wstring smoothedGradientsKey = L'smoothed_gradients';
    const std::wstring noiseInjectionSeedKey = L'noise_injection_seed';
    const std::wstring masterParameterUpdatedKey = L'master_parameter_updated';
    const std::wstring smoothedCountKey = L'smoothed_count';
    const std::wstring stateKey = L'state';
    const std::wstring rngSeedKey = L'rng_seed';
    const std::wstring rngOffsetKey = L'rng_offset';
    const std::wstring blockFunctionCompositeKey = L'block_function_composite';
    const std::wstring blockFunctionOpNameKey = L'block_function_op_name';
    const std::wstring blockFunctionCompositeArgumentsMapKeysKey = L'block_function_composite_arguments_map_keys';
    const std::wstring blockFunctionCompositeArgumentsMapValuesKey = L'block_function_composite_arguments_map_values';
    const std::wstring internalWorkerStateKey = L'internal_worker_state';
    const std::wstring externalWorkerStateKey = L'external_worker_state';
    const std::wstring userDefinedStateKey = L'user_defined_state';
    const std::wstring udfModuleNameKey = L'module';
    const std::wstring udfFactoryMethodNameKey = L'deserialize_method';
    const std::wstring nativeUDFKey = L'native';
    }
    
            static bool IsUDF(const FunctionPtr& f);
    
            NDMaskPtr Mask() const override
        {
            Unpack();
            return Value::Mask();
        }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    TEST(CanSenderTest, OneRunCase) {
  CanSender<::apollo::canbus::ChassisDetail> sender;
  can::FakeCanClient can_client;
  sender.Init(&can_client, true);
    }
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
    
    
    {  int ret = x;
  return ret;
}
    
    #include 'gtest/gtest.h'
    
    TEST(TestPiecewiseLinearKernel, add_reference_line_kernel_matrix_01) {
  PiecewiseLinearKernel kernel(10, 0.1);
    }
    
    Spline1dSeg::Spline1dSeg(const std::vector<double>& params) {
  SetSplineFunc(PolynomialXd(params));
}
    
    // config detail: {'name': 'output_value', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 39,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Accelrpt68::output_value(const std::uint8_t* bytes,
                                int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(0, 8);
    }
    
        void UserPostProcessing::initializationOnThread()
    {
        try
        {
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
        }
    }
    
    namespace op
{
    const auto FACE_MAX_FACES = POSE_MAX_PEOPLE;
    }
    
            virtual void update();
    
    #include <atomic>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <openpose/core/common.hpp>
    
            // Thread-safe variables
        std::atomic<long long> mLastFrameId;
    
        template<typename T>
    Point<T> Point<T>::operator/(const T value) const
    {
        try
        {
            return Point<T>{T(x / value), T(y / value)};
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return Point<T>{};
        }
    }
    
        template<typename T>
    Rectangle<T>& Rectangle<T>::operator=(const Rectangle<T>& rectangle)
    {
        try
        {
            x = rectangle.x;
            y = rectangle.y;
            width = rectangle.width;
            height = rectangle.height;
            // Return
            return *this;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return *this;
        }
    }
    
        static BOOST_FORCEINLINE bool compare_exchange_strong(
        storage_type volatile& storage, storage_type& expected, storage_type desired, memory_order, memory_order) BOOST_NOEXCEPT
    {
#if defined(__clang__)
        // Clang cannot allocate rax:rdx register pairs but it has sync intrinsics
        storage_type old_expected = expected;
        expected = __sync_val_compare_and_swap(&storage, old_expected, desired);
        return expected == old_expected;
#elif defined(BOOST_ATOMIC_DETAIL_NO_ASM_RAX_RDX_PAIRS)
        // GCC 4.4 can't allocate rax:rdx register pair either but it also doesn't support 128-bit __sync_val_compare_and_swap
        uint64_t const* p_desired = (uint64_t const*)&desired;
        bool success;
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %[expected], %%rax\n\t'
            'movq 8+%[expected], %%rdx\n\t'
            'lock; cmpxchg16b %[dest]\n\t'
            'sete %[success]\n\t'
            'movq %%rax, %[expected]\n\t'
            'movq %%rdx, 8+%[expected]\n\t'
            : [dest] '+m' (storage), [expected] '+o' (expected), [success] '=q' (success)
            : 'b' (p_desired[0]), 'c' (p_desired[1])
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory', 'rax', 'rdx'
        );
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq 0(%[expected]), %%rax\n\t'
            'movq 8(%[expected]), %%rdx\n\t'
            'lock; cmpxchg16b %[dest]\n\t'
            'sete %[success]\n\t'
            'movq %%rax, 0(%[expected])\n\t'
            'movq %%rdx, 8(%[expected])\n\t'
            : [dest] '+m' (storage), [success] '=q' (success)
            : 'b' (p_desired[0]), 'c' (p_desired[1]), [expected] 'r' (&expected)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory', 'rax', 'rdx'
        );
#endif // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
    }
    
    /*
 * IMPLEMENTATION NOTE: All interface functions MUST be declared with BOOST_FORCEINLINE,
 *                      see comment for convert_memory_order_to_gcc in ops_gcc_atomic.hpp.
 */
    
      void ExecuteAction();
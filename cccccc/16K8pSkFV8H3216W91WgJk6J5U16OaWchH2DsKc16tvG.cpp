
        
        void CalibrateExtrinsics(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                         const IntrinsicParams& param, const int check_cond,
                         const double thresh_cond, InputOutputArray omc, InputOutputArray Tc);
    
    // fit second order curve to a set of 2D points
inline void fitCurve2Order(const std::vector<Point2f>& /*points*/, std::vector<float>& /*curve*/)
{
    // TBD
}
    
                //a simple check that the position is general:
            //  for each line check that all other points don't belong to it
            isGeneralPosition = true;
            for (int startPointIndex = 0; startPointIndex < usedPointsCount && isGeneralPosition; startPointIndex++)
            {
                for (int endPointIndex = startPointIndex + 1; endPointIndex < usedPointsCount && isGeneralPosition; endPointIndex++)
                {
    }
    }
    
    //! @cond IGNORED
    
    static void* openclamdblas_check_fn(int ID)
{
    assert(ID >= 0 && ID < (int)(sizeof(openclamdblas_fn)/sizeof(openclamdblas_fn[0])));
    const struct DynamicFnEntry* e = openclamdblas_fn[ID];
    void* func = CV_CL_GET_PROC_ADDRESS(e->fnName);
    if (!func)
    {
        throw cv::Exception(cv::Error::OpenCLApiCallError,
                cv::format('OpenCL AMD BLAS function is not available: [%s]', e->fnName),
                CV_Func, __FILE__, __LINE__);
    }
    *(e->ppFn) = func;
    return func;
}
    
    #define THC_GENERIC_FILE 'torch/csrc/generic/Storage.h'
#include <THC/THCGenerateAllTypes.h>
    
    void THP_decodeInt64Buffer(int64_t* dst, const uint8_t* src, THPByteOrder order, size_t len)
{
  for (size_t i = 0; i < len; i++) {
    dst[i] = (int64_t) (order == THP_BIG_ENDIAN ? decodeUInt64BE(src) : decodeUInt64LE(src));
    src += sizeof(int64_t);
  }
}
    
          // Test write entire array
      std::vector<unsigned char> buffer(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
    
    template <class Char, std::size_t A, std::size_t B>
constexpr bool operator<(
    const BasicFixedString<Char, A>& a,
    const BasicFixedString<Char, B>& b) noexcept {
  return ordering::lt ==
      detail::fixedstring::compare_(
             detail::fixedstring::Helper::data_(a),
             0u,
             a.size(),
             detail::fixedstring::Helper::data_(b),
             0u,
             b.size());
}
    
      explicit LeakySingleton(CreateFunc createFunc) {
    auto& entry = entryInstance();
    if (entry.state != State::NotRegistered) {
      detail::singletonWarnLeakyDoubleRegistrationAndAbort(entry.type_);
    }
    entry.createFunc = createFunc;
    entry.state = State::Dead;
  }
    
     protected:
  bool keepAliveAcquire() override;
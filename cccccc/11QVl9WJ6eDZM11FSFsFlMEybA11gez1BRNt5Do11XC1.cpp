
        
        bool CacheImpl::remove(const void *Key) {
  DefaultCache &DCache = *static_cast<DefaultCache*>(Impl);
  llvm::sys::ScopedLock L(DCache.Mux);
    }
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
      Begin -= needed;
    
      // FIXME: Map over source ranges in the diagnostic.
  auto emitDiag = [&ctx, this](clang::FullSourceLoc clangNoteLoc,
                      clang::DiagnosticsEngine::Level clangDiagLevel,
                      StringRef message) {
    decltype(diag::error_from_clang) diagKind;
    switch (clangDiagLevel) {
    case clang::DiagnosticsEngine::Ignored:
      return;
    case clang::DiagnosticsEngine::Note:
      diagKind = diag::note_from_clang;
      break;
    case clang::DiagnosticsEngine::Remark:
      // FIXME: We don't handle remarks yet.
      return;
    case clang::DiagnosticsEngine::Warning:
      diagKind = diag::warning_from_clang;
      break;
    case clang::DiagnosticsEngine::Error:
    case clang::DiagnosticsEngine::Fatal:
      // FIXME: What happens after a fatal error in the importer?
      diagKind = diag::error_from_clang;
      break;
    }
    }
    
    #include 'swift/AST/Identifier.h'
    
    void JobAction::anchor() {}
    
    /* Coin network-specific GUI style information */
class NetworkStyle
{
public:
    /** Get style associated with provided BIP70 network id, or 0 if not known */
    static const NetworkStyle *instantiate(const QString &networkId);
    }
    
    #include <QDialog>
    
    #endif // BITCOIN_REVERSELOCK_H

    
    #ifndef SECP256K1_MODULE_ECDH_MAIN_H
#define SECP256K1_MODULE_ECDH_MAIN_H
    
    #define TINYFORMAT_ARGTYPES(n) TINYFORMAT_ARGTYPES_ ## n
#define TINYFORMAT_VARARGS(n) TINYFORMAT_VARARGS_ ## n
#define TINYFORMAT_PASSARGS(n) TINYFORMAT_PASSARGS_ ## n
#define TINYFORMAT_PASSARGS_TAIL(n) TINYFORMAT_PASSARGS_TAIL_ ## n
    
    double UniValue::get_real() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not a number as expected');
    double retval;
    if (!ParseDouble(getValStr(), &retval))
        throw std::runtime_error('JSON double out of range');
    return retval;
}
    
    #undef cv_hal_cmp8u
#define cv_hal_cmp8u TEGRA_CMP
#undef cv_hal_cmp8s
#define cv_hal_cmp8s TEGRA_CMP
#undef cv_hal_cmp16u
#define cv_hal_cmp16u TEGRA_CMP
#undef cv_hal_cmp16s
#define cv_hal_cmp16s TEGRA_CMP
#undef cv_hal_cmp32s
#define cv_hal_cmp32s TEGRA_CMP
#undef cv_hal_cmp32f
#define cv_hal_cmp32f TEGRA_CMP
//#undef cv_hal_cmp64f
//#define cv_hal_cmp64f TEGRA_CMP
    
    template <typename T> struct TypeTraits;
template <> struct TypeTraits< u8> { typedef u16 wide;                     typedef  u8 unsign; typedef  uint8x16_t vec128; };
template <> struct TypeTraits< s8> { typedef s16 wide;                     typedef  u8 unsign; typedef   int8x16_t vec128; };
template <> struct TypeTraits<u16> { typedef u32 wide; typedef  u8 narrow; typedef u16 unsign; typedef  uint16x8_t vec128; };
template <> struct TypeTraits<s16> { typedef s32 wide; typedef  s8 narrow; typedef u16 unsign; typedef   int16x8_t vec128; };
template <> struct TypeTraits<u32> { typedef u64 wide; typedef u16 narrow; typedef u32 unsign; typedef  uint32x4_t vec128; };
template <> struct TypeTraits<s32> { typedef s64 wide; typedef s16 narrow; typedef u32 unsign; typedef   int32x4_t vec128; };
template <> struct TypeTraits<f32> { typedef f64 wide;                                         typedef float32x4_t vec128; };
    
        size_t i = 0;
    f32* dsta = internal::getRowPtr(dstBase, dstStride, 0);
    for (; i < size.height-1; i+=2)
    {
        //vertical convolution
        ptrdiff_t idx_rm1 = internal::borderInterpolate(i - 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rp2 = internal::borderInterpolate(i + 2, size.height, borderType, borderMargin.top, borderMargin.bottom);
    }
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin, size_t endMargin)
{
    ptrdiff_t p = _p + (ptrdiff_t)startMargin;
    size_t len = _len + startMargin + endMargin;
    if( (size_t)p < len )
        return _p;
    else if( borderType == BORDER_MODE_REPLICATE )
        p = p < 0 ? 0 : (ptrdiff_t)len - 1;
    else if( borderType == BORDER_MODE_REFLECT || borderType == BORDER_MODE_REFLECT101 )
    {
        s32 delta = borderType == BORDER_MODE_REFLECT101;
        if( len == 1 )
            return 0;
        do
        {
            if( p < 0 )
                p = -p - 1 + delta;
            else
                p = (ptrdiff_t)len - 1 - (p - (ptrdiff_t)len) - delta;
        }
        while( (size_t)p >= len );
    }
    else if( borderType == BORDER_MODE_WRAP )
    {
        if( p < 0 )
            p -= ((p-(ptrdiff_t)len+1)/(ptrdiff_t)len)*(ptrdiff_t)len;
        if( p >= (ptrdiff_t)len )
            p %= (ptrdiff_t)len;
    }
    else if( borderType == BORDER_MODE_CONSTANT )
        p = -1;
    else
        internal::assertSupportedConfiguration(false);
    return p - (ptrdiff_t)startMargin;
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s8, s16, 16,
,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.8 {d0-d1}, [%[src]]                              \n\t'
             'vmovl.s8 q1, d0                                       \n\t'
             'vmovl.s8 q2, d1                                       \n\t'
             'vst1.16 {d2-d3}, [%[dst1]]                            \n\t'
             'vst1.16 {d4-d5}, [%[dst2]]                            \n\t'
             : /*no output*/
             : [src] 'r' (_src + i),
               [dst1] 'r' (_dst + i + 0),
               [dst2] 'r' (_dst + i + 8)
             : 'd0','d1','d2','d3','d4','d5'
         );
     }
})
#else
CVT_FUNC(s8, s16, 16,
,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         int8x16_t vline_s8 = vld1q_s8(_src + i);
    }
    }
    
    template <>
void lshiftConst<0>(const Size2D &size,
                    const u8 * srcBase, ptrdiff_t srcStride,
                    s16 * dstBase, ptrdiff_t dstStride)
{
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    // It is possible to accumulate up to 66051 uchar multiplication results in uint32 without overflow
// We process 16 elements and accumulate two new elements per step. So we could handle 66051/2*16 elements
#define DOT_UINT_BLOCKSIZE 66050*8
    f64 result = 0.0;
    for (size_t row = 0; row < size.height; ++row)
    {
        const u8 * src0 = internal::getRowPtr(src0Base, src0Stride, row);
        const u8 * src1 = internal::getRowPtr(src1Base, src1Stride, row);
    }
    
    void fillMinMaxLocs(const Size2D & size,
                    const u32 * srcBase, ptrdiff_t srcStride,
                    u32 minVal, size_t * minLocPtr, s32 & minLocCount, s32 minLocCapacity,
                    u32 maxVal, size_t * maxLocPtr, s32 & maxLocCount, s32 maxLocCapacity)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
        for( ptrdiff_t y = 0; y < rows; y++ )
    {
        const u8* v0 = 0;
        const u8* v1 = 0;
        const u8* v2 = internal::getRowPtr(srcBase, srcStride, y);
        const u8* v3 = 0;
        const u8* v4 = 0;
        // make border
        if (border == BORDER_MODE_REPLICATE) {
            v0 = internal::getRowPtr(srcBase, srcStride, y > 1 ? y-2 : 0);
            v1 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 0);
            v3 = internal::getRowPtr(srcBase, srcStride, y < rows-1 ? y+1 : rows > 0 ? rows-1 : 0);
            v4 = internal::getRowPtr(srcBase, srcStride, y < rows-2 ? y+2 : rows > 0 ? rows-1 : 0);
        } else if (border == BORDER_MODE_REFLECT) {
            v0 = internal::getRowPtr(srcBase, srcStride, y > 1 ? y-2 : rows > 1 ? 1-y : 0);
            v1 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 0);
            v3 = internal::getRowPtr(srcBase, srcStride, y < rows-1 ? y+1 : rows > 0 ? rows-1 : 0);
            v4 = internal::getRowPtr(srcBase, srcStride, y < rows-2 ? y+2 : rows > 1 ? 2*rows-(y+3) : 0);
        } else if (border == BORDER_MODE_REFLECT101) {
            v0 = internal::getRowPtr(srcBase, srcStride, y > 1 ? y-2 : rows > 2-y ? 2-y : 0); ///check
            v1 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : rows > 1 ? 1 : 0);
            v3 = internal::getRowPtr(srcBase, srcStride, y < rows-1 ? y+1 : rows > 1 ? rows-2 : 0);
            v4 = internal::getRowPtr(srcBase, srcStride, y < rows-2 ? y+2 : rows > 2 ? 2*rows-(y+4) : 0);///bad if rows=2 y=1   rows - 4 + (2,1)
        } else if (border == BORDER_MODE_CONSTANT) {
            v0 = y > 1 ? internal::getRowPtr(srcBase, srcStride, y-2) : tmp;
            v1 = y > 0 ? internal::getRowPtr(srcBase, srcStride, y-1) : tmp;
            v3 = y < rows-1 ? internal::getRowPtr(srcBase, srcStride, y+1) : tmp;
            v4 = y < rows-2 ? internal::getRowPtr(srcBase, srcStride, y+2) : tmp;
        }
        s16* drow = internal::getRowPtr(dstBase, dstStride, y);
    }
    
    // Given a MutableIterator to the start of a block, run DetectParagraphs on
// that block and commit the results to the underlying ROW and BLOCK structs,
// saving the ParagraphModels in models.  Caller owns the models.
// We use unicharset during the function to answer questions such as 'is the
// first letter of this word upper case?'
void DetectParagraphs(int debug_level,
                      bool after_text_recognition,
                      const MutableIterator *block_start,
                      GenericVector<ParagraphModel *> *models);
    
    static STRING ParagraphJustificationToString(
    tesseract::ParagraphJustification justification) {
  switch (justification) {
    case JUSTIFICATION_LEFT:
      return 'LEFT';
    case JUSTIFICATION_RIGHT:
      return 'RIGHT';
    case JUSTIFICATION_CENTER:
      return 'CENTER';
    default:
      return 'UNKNOWN';
  }
}
    
      // The first paragraph on a page often lacks a first line indent, but should
  // still be modeled by the same model as other body text paragraphs on the
  // page.
  bool is_very_first_or_continuation;
    
    // An array of TestPartResult objects.
//
// Don't inherit from TestPartResultArray as its destructor is not
// virtual.
class GTEST_API_ TestPartResultArray {
 public:
  TestPartResultArray() {}
    }
    
    // If the type list contains only one type, you can write that type
// directly without Types<...>:
//   TYPED_TEST_CASE(FooTest, int);
    
    #define GTEST_ASSERT_(expression, on_failure) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (const ::testing::AssertionResult gtest_ar = (expression)) \
    ; \
  else \
    on_failure(gtest_ar.failure_message())
    
    // Protects copying of all linked_ptr objects.
GTEST_API_ GTEST_DECLARE_STATIC_MUTEX_(g_linked_ptr_mutex);
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11>
struct Templates11 {
  typedef TemplateSel<T1> Head;
  typedef Templates10<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> Tail;
};
    
    
    {
    {      // Marks all multiples of i (except i itself) as non-prime.
      for (int j = 2*i; j <= max; j += i) {
        is_prime_[j] = false;
      }
    }
  }
    
      // Called after a test ends.
  virtual void OnTestEnd(const TestInfo& /* test_info */) {
    int difference = Water::allocated() - initially_allocated_;
    }
    
    // Tests the Set method.
TEST(MyString, Set) {
  MyString s;
    }
    
      // Adds an element to the end of the queue.  A copy of the element is
  // created using the copy constructor, and then stored in the queue.
  // Changes made to the element in the queue doesn't affect the source
  // object, and vice versa.
  void Enqueue(const E& element) {
    QueueNode<E>* new_node = new QueueNode<E>(element);
    }
    
    const int32 MAX_CONNECTED = 32;
const float32 COLLAPSE_DIST_SQR = CMP_EPSILON*CMP_EPSILON;//0.1f;//1000*CMP_EPSILON*1000*CMP_EPSILON;
	
class b2PolyNode{
public:
	b2Vec2 position;
	b2PolyNode* connected[MAX_CONNECTED];
	int32 nConnected;
	bool visited;
    }
    
    namespace Etc
{
	// ----------------------------------------------------------------------------------------------------
	// C-style inteface to the encoder
	//
	void Encode(float *a_pafSourceRGBA,
				unsigned int a_uiSourceWidth, 
				unsigned int a_uiSourceHeight,
				Image::Format a_format,
				ErrorMetric a_eErrMetric,
				float a_fEffort,
				unsigned int a_uiJobs,
				unsigned int a_uiMaxJobs,
				unsigned char **a_ppaucEncodingBits,
				unsigned int *a_puiEncodingBitsBytes,
				unsigned int *a_puiExtendedWidth,
				unsigned int *a_puiExtendedHeight, 
				int *a_piEncodingTime_ms, bool a_bVerboseOutput)
	{
    }
    }
    
    		if (encodingTry.m_fError < m_fError)
		{
			m_mode = MODE_ETC1;
			m_boolDiff = true;
			m_boolFlip = encodingTry.m_boolFlip;
			m_frgbaColor1 = ColorFloatRGBA::ConvertFromRGB5((unsigned char)ptryBest1->m_iRed, (unsigned char)ptryBest1->m_iGreen, (unsigned char)ptryBest1->m_iBlue);
			m_frgbaColor2 = ColorFloatRGBA::ConvertFromRGB5((unsigned char)ptryBest2->m_iRed, (unsigned char)ptryBest2->m_iGreen, (unsigned char)ptryBest2->m_iBlue);
			m_uiCW1 = ptryBest1->m_uiCW;
			m_uiCW2 = ptryBest2->m_uiCW;
    }
    
    #define AF_LATIN_HINTS_HORZ_SNAP    ( 1U << 0 ) /* stem width snapping  */
#define AF_LATIN_HINTS_VERT_SNAP    ( 1U << 1 ) /* stem height snapping */
#define AF_LATIN_HINTS_STEM_ADJUST  ( 1U << 2 ) /* stem width/height    */
                                                /* adjustment           */
#define AF_LATIN_HINTS_MONO         ( 1U << 3 ) /* monochrome rendering */
    
    //  16384 * sqrt(2) * sin(kPi/9) * 2 / 3
static const tran_high_t sinpi_1_9 = 5283;
static const tran_high_t sinpi_2_9 = 9929;
static const tran_high_t sinpi_3_9 = 13377;
static const tran_high_t sinpi_4_9 = 15212;
    
    #ifndef FIXED_ARMv4_H
#define FIXED_ARMv4_H
    
    void CensusClientCallData::Destroy(grpc_call_element* elem,
                                   const grpc_call_final_info* final_info,
                                   grpc_closure* then_call_closure) {
  const uint64_t request_size = GetOutgoingDataSize(final_info);
  const uint64_t response_size = GetIncomingDataSize(final_info);
  double latency_ms = absl::ToDoubleMilliseconds(absl::Now() - start_time_);
  ::opencensus::stats::Record(
      {{RpcClientSentBytesPerRpc(), static_cast<double>(request_size)},
       {RpcClientReceivedBytesPerRpc(), static_cast<double>(response_size)},
       {RpcClientRoundtripLatency(), latency_ms},
       {RpcClientServerLatency(),
        ToDoubleMilliseconds(absl::Nanoseconds(elapsed_time_))},
       {RpcClientSentMessagesPerRpc(), sent_message_count_},
       {RpcClientReceivedMessagesPerRpc(), recv_message_count_}},
      {{ClientMethodTagKey(), method_},
       {ClientStatusTagKey(), StatusCodeToString(final_info->final_status)}});
  grpc_slice_unref_internal(path_);
  context_.EndSpan();
}
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    void DynamicThreadPool::ReapThreads(std::list<DynamicThread*>* tlist) {
  for (auto t = tlist->begin(); t != tlist->end(); t = tlist->erase(t)) {
    delete *t;
  }
}
    
    
    {}  // namespace
    
    namespace mxnet {
    }
    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
    
    {
    {inline void Dequantize2BitImpl(mshadow::Stream<mshadow::cpu> *s,
                               const std::vector<mxnet::TBlob> &inputs,
                               const float threshold) {
  Dequantize2BitKernelLaunch(s, inputs, threshold);
}
}  // namespace kvstore
}  // namespace mxnet
    
      virtual void Backward(const OpContext &ctx,
                        const std::vector<TBlob> &out_grad,
                        const std::vector<TBlob> &in_data,
                        const std::vector<TBlob> &out_data,
                        const std::vector<OpReqType> &req,
                        const std::vector<TBlob> &in_grad,
                        const std::vector<TBlob> &aux_args) {
    using namespace mshadow;
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 3U);
    CHECK_EQ(out_grad.size(), 1U);
    Stream<gpu> *s = ctx.get_stream<gpu>();
    Tensor<gpu, 4, DType> data = in_data[st::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grad = out_grad[st::kOut].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> ddata = in_grad[st::kData].get<gpu, 4, DType>(s);
    Shape<3> loc_shape = Shape3(data.size(0), 2, 3);
    Shape<4> grid_shape = Shape4(grad.size(0), grad.size(2), grad.size(3), 2);
    Tensor<gpu, 3, DType> dloc = in_grad[st::kLoc].get_with_shape<gpu, 3, DType>(loc_shape, s);
    Tensor<gpu, 4, DType> grid = out_data[st::kGridSrc]
                    .get_with_shape<gpu, 4, DType>(grid_shape, s);
    // do not use out_grad[st::kGridSrc], because dgrid is a intermediate tensor, and not include in
    // DeclareBackwardDependency, another, we can we reuse grid for inplace operator
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    typename DataType<DType>::ScaleType alpha_dgrid = 1.0f;
    typename DataType<DType>::ScaleType beta_dgrid = 0.0f;
    CUDNN_CALL(cudnnSpatialTfSamplerBackward(s->dnn_handle_,
                                             st_desc_,
                                             &alpha,
                                             in_desc_,
                                             data.dptr_,
                                             &beta,
                                             in_desc_/*reuse in_desc_*/,
                                             ddata.dptr_/*output*/,
                                             &alpha_dgrid,
                                             out_desc_/*reuse out_desc_*/,
                                             grad.dptr_,
                                             grid.dptr_,
                                             &beta_dgrid,
                                             grid.dptr_));
    if (param_.transform_type == st::kAffine) {
      CUDNN_CALL(cudnnSpatialTfGridGeneratorBackward(s->dnn_handle_,
                                                     st_desc_,
                                                     grid.dptr_,
                                                     dloc.dptr_/*out*/));
    }
  }
    
    MXNET_REGISTER_OP_PROPERTY(_Native, NativeOpProp)
.describe('Stub for implementing an operator implemented in native frontend language.')
.add_argument('data', 'NDArray-or-Symbol[]', 'Input data for the custom operator.')
.add_arguments(NativeOpParam::__FIELDS__());
    
    namespace xgboost {
/*!
 * \brief interface of linear updater
 */
class LinearUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~LinearUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(
      const std::vector<std::pair<std::string, std::string> >& args) = 0;
    }
    }
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    const auto& offset_vec = page.offset.HostVector();
    const auto& data_vec = page.data.HostVector();
    CHECK(page.offset.Size() != 0 && offset_vec[0] == 0);
    CHECK_EQ(offset_vec.back(), page.data.Size());
    fo->Write(offset_vec);
    if (page.data.Size() != 0) {
      fo->Write(dmlc::BeginPtr(data_vec), page.data.Size() * sizeof(Entry));
    }
  }
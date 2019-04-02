
        
        #define TEGRA_DIV(src1, sz1, src2, sz2, dst, sz, w, h, scale) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    CAROTENE_NS::div(CAROTENE_NS::Size2D(w, h), \
                     src1, sz1, \
                     src2, sz2, \
                     dst, sz, \
                     scale, \
                     CAROTENE_NS::CONVERT_POLICY_SATURATE), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
    void absDiff(const Size2D &size,
             const s16 *src0Base, ptrdiff_t src0Stride,
             const s16 *src1Base, ptrdiff_t src1Stride,
             s16 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiffSigned<s16>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
        f32 alpha, beta, gamma;
    float32x4_t valpha, vbeta, vgamma;
    wAdd(f32 _alpha, f32 _beta, f32 _gamma):
        alpha(_alpha), beta(_beta), gamma(_gamma)
    {
        valpha = vdupq_n_f32(_alpha);
        vbeta = vdupq_n_f32(_beta);
        vgamma = vdupq_n_f32(_gamma + 0.5);
    }
    
                ColFilter3x3Canny<L2gradient>( ((s16*)mag_buf[2]) + shxOffset, ((s16*)mag_buf[0]) + shxOffset, ((s16*)mag_buf[1]) + shxOffset,
                                           ((s16*)mag_buf[1]) + dxOffset,  ((s16*)mag_buf[1]) + dyOffset, mag_buf[1] + 1, size.width);
        }
        else
        {
            ColFilter3x3Canny<L2gradient>( ((s16*)mag_buf[0]) + shxOffset, ((s16*)mag_buf[0]) + shxOffset, ((s16*)mag_buf[1]) + shxOffset,
                                           ((s16*)mag_buf[1]) + dxOffset,  ((s16*)mag_buf[1]) + dyOffset, mag_buf[1] + 1, size.width);
        }
    }
    inline void nextRow(const Size2D &size, s32,
                        const u8 *srcBase, ptrdiff_t srcStride,
                        s16*, ptrdiff_t,
                        s16*, ptrdiff_t,
                        const ptrdiff_t &mapstep, s32** mag_buf,
                        size_t i, const s16* &_x, const s16* &_y)
    {
        mag_buf[2][0] = mag_buf[2][size.width+1] = 0;
        if (i < size.height - borderyb)
        {
            const u8* _src = internal::getRowPtr(srcBase, srcStride, i+1);
            //sobelH row #i+1
            sobelRow(_src, ((s16*)mag_buf[2]) + shxOffset, ((s16*)mag_buf[2]) + shyOffset, size.width);
    
    namespace CAROTENE_NS {
    }
    
                // make extrapolation for the first elements
            if (!x)
            {
                // make border
                if (border == BORDER_MODE_CONSTANT)
                    tcurr[0] = tcurr[1] = tcurr[2] = v_border;
                else if (border == BORDER_MODE_REPLICATE)
                {
                    tcurr[0] = vdup_n_u8(vget_lane_u8(tnext[0], 0));
                    tcurr[1] = vdup_n_u8(vget_lane_u8(tnext[1], 0));
                    tcurr[2] = vdup_n_u8(vget_lane_u8(tnext[2], 0));
                }
    }
    
            if( i < (ptrdiff_t)size.height - 3 )
        {
            j = 3;
    }
    
                v = vmlal_u8(v, v2, vc6u8);
            v = vmlaq_u16(v, v13, vc4u16);
    
    // caclulate sqrt value
    
      desired_output_for_decode = 'ABCD__EfghI_j';
  expected = string('\x64\x80\xC5\xA1\x0', 5);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    
    {
    {  // No default clause, clang will abort if a code is missing from
  // above switch.
  return 'UNKNOWN';
}
}  // namespace error.
    
    
    {
    {
    {
}  // namespace internal
}  // namespace protobuf
}  // namespace google
    
      // Yes && Yes == true.
  value = and_<true_, true_>::value;
  EXPECT_TRUE(value);
  // Yes && No == false.
  value = and_<true_, false_>::value;
  EXPECT_FALSE(value);
  // No && Yes == false.
  value = and_<false_, true_>::value;
  EXPECT_FALSE(value);
  // No && No == false.
  value = and_<false_, false_>::value;
  EXPECT_FALSE(value);
    
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
    
    		// the alpha mix for a 4x4 block of pixels
		enum class SourceAlphaMix
		{
			UNKNOWN,
			//
			OPAQUE,			// all 1.0
			TRANSPARENT,	// all 0.0 or NAN
			TRANSLUCENT		// not all opaque or transparent
		};
    
    		m_fError = -1.0f;
    
    double Area(const Path &poly)
{
  int size = (int)poly.size();
  if (size < 3) return 0;
    }
    
    //ClipperBase is the ancestor to the Clipper class. It should not be
//instantiated directly. This class simply abstracts the conversion of sets of
//polygon coordinates into edge objects that are stored in a LocalMinima list.
class ClipperBase
{
public:
  ClipperBase();
  virtual ~ClipperBase();
  virtual bool AddPath(const Path &pg, PolyType PolyTyp, bool Closed);
  bool AddPaths(const Paths &ppg, PolyType PolyTyp, bool Closed);
  virtual void Clear();
  IntRect GetBounds();
  bool PreserveCollinear() {return m_PreserveCollinear;};
  void PreserveCollinear(bool value) {m_PreserveCollinear = value;};
protected:
  void DisposeLocalMinimaList();
  TEdge* AddBoundsToLML(TEdge *e, bool IsClosed);
  virtual void Reset();
  TEdge* ProcessBound(TEdge* E, bool IsClockwise);
  void InsertScanbeam(const cInt Y);
  bool PopScanbeam(cInt &Y);
  bool LocalMinimaPending();
  bool PopLocalMinima(cInt Y, const LocalMinimum *&locMin);
  OutRec* CreateOutRec();
  void DisposeAllOutRecs();
  void DisposeOutRec(PolyOutList::size_type index);
  void SwapPositionsInAEL(TEdge *edge1, TEdge *edge2);
  void DeleteFromAEL(TEdge *e);
  void UpdateEdgeIntoAEL(TEdge *&e);
    }
    
    #   define DIVSCALAR(x,k) \
        (x) = S_MUL(  x, (TWID_MAX-((k)>>1))/(k)+1 )
    
    #define QCONST16(x,bits) (x)
#define QCONST32(x,bits) (x)
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
    
    {  /*! \brief milliseconds spent in Next() */
  std::atomic<uint64_t> next_time_;
};  // class CaffeDataIterWrapper
    
      for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    const auto& inode = idx[nid];
    if (inode.source->op() != ewise_plus_op) continue;
    int sid = storage_id[idx.entry_id(inode.inputs[0])];
    if (sid != storage_id[idx.entry_id(nid, 0)]) continue;
    if (idx[inode.inputs[0].node_id].source->is_variable()) continue;
    if (idx[inode.inputs[1].node_id].source->is_variable()) continue;
    uint32_t eid_rhs  = idx.entry_id(inode.inputs[1]);
    if (ref_count[eid_rhs] != 1) continue;
    if (inode.inputs[0].node_id >= inode.inputs[1].node_id) continue;
    // TODO(haibin) support inplace addto for Dynamic Storage
    if (storage_id[eid_rhs] == kDynamicStorageID) continue;
    CHECK_NE(storage_id[eid_rhs], sid);
    storage_id[eid_rhs] = sid;
    addto_entry[eid_rhs] = 1;
    storage_inplace_index[eid_rhs] = -1;
    skip_plus_node[nid] = 1;
  }
    
    // these gpu functions are defined in gradient_compression.cu
void Quantize2BitImpl(mshadow::Stream<mshadow::gpu> *s, const std::vector<mxnet::TBlob> &inputs,
                      const float threshold);
void Dequantize2BitImpl(mshadow::Stream<mshadow::gpu> *s, const std::vector<mxnet::TBlob> &inputs,
                        const float threshold);
    
        info = MXNET_LAPACK_posv<DType>(MXNET_LAPACK_ROW_MAJOR, 'U',
      k, out.size(1), hadamard_prod.dptr_, hadamard_prod.stride_,
      out.dptr_, out.stride_);
  } else {
    Tensor<cpu, 2, DType> kr(Shape2(out.size(1), out.size(0)));
    AllocSpace(&kr);
    khatri_rao(kr, ts_arr);
    
    )code' ADD_FILELINE)
.set_attr<FCompute>('FCompute<cpu>', DivSqrtDimForward_<cpu>)
.set_attr<nnvm::FGradient>('FGradient', ElemwiseGradUseNone{'_contrib_div_sqrt_dim'});
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file cudnn_bilinear_sampler-inl.h
 * \brief
 * \author Xu Dong
*/
#ifndef MXNET_OPERATOR_CUDNN_BILINEAR_SAMPLER_INL_H_
#define MXNET_OPERATOR_CUDNN_BILINEAR_SAMPLER_INL_H_
    
     private:
  inline void Init(mshadow::Stream<gpu> *s,
                   const std::vector<TBlob> &in_data,
                   const std::vector<TBlob> &out_data) {
    using namespace mshadow;
    #if CUDNN_MAJOR >= 5
    format_ = CUDNN_TENSOR_NCHW;
    #endif
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 3U);
    if (!init_cudnn_) {
      init_cudnn_ = true;
      Tensor<gpu, 4, DType> data = in_data[st::kData].get<gpu, 4, DType>(s);
      Tensor<gpu, 4, DType> out = out_data[st::kOut].get<gpu, 4, DType>(s);
      CUDNN_CALL(cudnnCreateSpatialTransformerDescriptor(&st_desc_));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&in_desc_));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&out_desc_));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(in_desc_,
                                            format_,
                                            dtype_,
                                            data.size(0),
                                            data.size(1),
                                            data.size(2),
                                            data.size(3)));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(out_desc_,
                                            format_,
                                            dtype_,
                                            out.size(0),
                                            out.size(1),
                                            out.size(2),
                                            out.size(3)));
      if (param_.sampler_type == st::kBilinear) {
        int dim[] = {static_cast<int>(out.size(0)), static_cast<int>(out.size(1)),
                     static_cast<int>(out.size(2)), static_cast<int>(out.size(3))};
        CUDNN_CALL(cudnnSetSpatialTransformerNdDescriptor(st_desc_,
                                                          sampler_,
                                                          dtype_,
                                                          4,
                                                          dim));
      }
    }
  }
    
    MXNET_REGISTER_OP_PROPERTY(_Native, NativeOpProp)
.describe('Stub for implementing an operator implemented in native frontend language.')
.add_argument('data', 'NDArray-or-Symbol[]', 'Input data for the custom operator.')
.add_arguments(NativeOpParam::__FIELDS__());
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    
    {        glfwMakeContextCurrent(window);
        glfwSwapBuffers(window);
    }
    
            // Get the function pointer (required for any extensions)
        auto vkCreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT)vkGetInstanceProcAddr(g_Instance, 'vkCreateDebugReportCallbackEXT');
        IM_ASSERT(vkCreateDebugReportCallbackEXT != NULL);
    
    // Specific OpenGL versions
//#define IMGUI_IMPL_OPENGL_ES2     // Auto-detected on Emscripten
//#define IMGUI_IMPL_OPENGL_ES3     // Auto-detected on iOS/Android
    
        IDXGISwapChain1* swapChain1 = NULL;
    dxgiFactory->CreateSwapChainForHwnd(g_pd3dCommandQueue, hWnd, &sd, NULL, NULL, &swapChain1);
    swapChain1->QueryInterface(IID_PPV_ARGS(&g_pSwapChain));
    swapChain1->Release();
    dxgiFactory->Release();
    
    void ResetDevice()
{
    ImGui_ImplDX9_InvalidateDeviceObjects();
    HRESULT hr = g_pd3dDevice->Reset(&g_d3dpp);
    if (hr == D3DERR_INVALIDCALL)
        IM_ASSERT(0);
    ImGui_ImplDX9_CreateDeviceObjects();
}
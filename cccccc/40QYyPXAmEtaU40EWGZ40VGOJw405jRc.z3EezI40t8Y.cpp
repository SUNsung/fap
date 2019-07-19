
        
        // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return nullptr;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : nullptr;
      int64_t new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != nullptr && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
      // Transforms the given coords one step forward to normalized space, without
  // using any block rotation or predecessor.
  void LocalNormTransform(const TPOINT& pt, TPOINT* transformed) const;
  void LocalNormTransform(const FCOORD& pt, FCOORD* transformed) const;
  // Transforms the given coords forward to normalized space using the
  // full transformation sequence defined by the block rotation, the
  // predecessors, deepest first, and finally this. If first_norm is not nullptr,
  // then the first and deepest transformation used is first_norm, ending
  // with this, and the block rotation will not be applied.
  void NormTransform(const DENORM* first_norm, const TPOINT& pt,
                     TPOINT* transformed) const;
  void NormTransform(const DENORM* first_norm, const FCOORD& pt,
                     FCOORD* transformed) const;
  // Transforms the given coords one step back to source space, without
  // using to any block rotation or predecessor.
  void LocalDenormTransform(const TPOINT& pt, TPOINT* original) const;
  void LocalDenormTransform(const FCOORD& pt, FCOORD* original) const;
  // Transforms the given coords all the way back to source image space using
  // the full transformation sequence defined by this and its predecessors
  // recursively, shallowest first, and finally any block re_rotation.
  // If last_denorm is not nullptr, then the last transformation used will
  // be last_denorm, and the block re_rotation will never be executed.
  void DenormTransform(const DENORM* last_denorm, const TPOINT& pt,
                       TPOINT* original) const;
  void DenormTransform(const DENORM* last_denorm, const FCOORD& pt,
                       FCOORD* original) const;
    
      // Comparator function for sorting AmbigSpec_LISTs. The lists will
  // be sorted by their wrong_ngram arrays. Example of wrong_ngram vectors
  // in a a sorted AmbigSpec_LIST: [9 1 3], [9 3 4], [9 8], [9, 8 1].
  static int compare_ambig_specs(const void *spec1, const void *spec2) {
    const AmbigSpec *s1 = *static_cast<const AmbigSpec *const *>(spec1);
    const AmbigSpec *s2 = *static_cast<const AmbigSpec *const *>(spec2);
    int result = UnicharIdArrayUtils::compare(s1->wrong_ngram, s2->wrong_ngram);
    if (result != 0) return result;
    return UnicharIdArrayUtils::compare(s1->correct_fragments,
                                        s2->correct_fragments);
  }
    
      // Main worker method that retrieves the next number in the sequence.
  // Returns kInvalidVal if called more than N times after object initialization
  int GetVal() {
    const int kInvalidVal = -1;
    const int kMaxNaturalNumberValue = 1 << num_bits_;
    if (next_num_ >= kMaxNaturalNumberValue)
      return kInvalidVal;
    int n = next_num_;
    }
    
      // Return true if the given unichar representation is already present in the
  // UNICHARMAP. The first length characters (maximum) from unichar_repr are
  // used. The length MUST be non-zero.
  bool contains(const char* const unichar_repr, int length) const;
    
    
    {  // internal storage managers
  std::array<common::LazyAllocArray<storage::StorageManager>,
             kMaxNumberOfDevices> storage_managers_;
  storage::DeviceStorageProfiler profiler_;
};  // struct Storage::Impl
#if MXNET_USE_CUDA
int StorageImpl::num_gpu_device = 0;
#endif  // MXNET_USE_CUDA
    
    MXNET_REGISTER_OP_PROPERTY(_contrib_DeformableConvolution, DeformableConvolutionProp)
.describe(R'code(Compute 2-D deformable convolution on 4-D input.
    
    
/*!\brief
 * cpu function of deformable_im2col algorithm
 * \param s device stream
 * \param data_im pointer of an image (C, H, W, ...) in the image batch
 * \param data_offset pointer of offset (C, H, W, ...) in the offset batch
 * \param im_shape input image shape in dimensions (N, C, H, W,)
 * \param col_shape column buffer shape (#channels, output_im_height, output_im_width, ...)
 * \param kernel_shape kernel filter shape
 * \param pad pad shape
 * \param stride stride shape
 * \param dilation dilation shape
 * \param deformable_group #offset group that deformable convolution use
 * \param data_col column buffer pointer
 */
template <typename DType>
inline void deformable_im2col(mshadow::Stream<cpu>* s,
                              const DType* data_im, const DType* data_offset,
                              const mxnet::TShape& im_shape,
                              const mxnet::TShape& col_shape,
                              const mxnet::TShape& kernel_shape,
                              const mxnet::TShape& pad,
                              const mxnet::TShape& stride,
                              const mxnet::TShape& dilation,
                              const index_t deformable_group,
                              DType* data_col) {
  if (2 == kernel_shape.ndim()) {
    deformable_im2col_cpu(data_im, data_offset,
                          im_shape[1], im_shape[2], im_shape[3],
                          kernel_shape[0], kernel_shape[1],
                          pad[0], pad[1],
                          stride[0], stride[1],
                          dilation[0], dilation[1],
                          deformable_group,
                          col_shape[1], col_shape[2], data_col);
  } else {
    LOG(FATAL) << 'not implemented';
  }
}
    
    template<typename DType, typename Rand>
void Shuffle1D(DType* const out, const index_t size, Rand* const prnd) {
  #ifdef USE_GNU_PARALLEL_SHUFFLE
     /*
      * See issue #15029: the data type of n needs to be compatible with
      * the gcc library: https://github.com/gcc-mirror/gcc/blob/master/libstdc%2B%2B\
      * -v3/include/parallel/random_shuffle.h#L384
      */
    auto rand_n = [prnd](uint32_t n) {
      std::uniform_int_distribution<uint32_t> dist(0, n - 1);
      return dist(*prnd);
    };
    __gnu_parallel::random_shuffle(out, out + size, rand_n);
  #else
    std::shuffle(out, out + size, *prnd);
  #endif
}
    
      const Tensor<cpu, 2, DType> wx(wx_ptr, Shape2(H * 3, I));
  const Tensor<cpu, 2, DType> wh(wh_ptr, Shape2(H * 3, H));
  const Tensor<cpu, 2, DType> bx(bx_ptr, Shape2(3, H));
  const Tensor<cpu, 2, DType> bh(bh_ptr, Shape2(3, H));
  const Tensor<cpu, 2, DType> back_wx(back_wx_ptr, Shape2(H * 3, I));
  const Tensor<cpu, 2, DType> back_wh(back_wh_ptr, Shape2(H * 3, H));
  const Tensor<cpu, 2, DType> back_bx(back_bx_ptr, Shape2(3, H));
  const Tensor<cpu, 2, DType> back_bh(back_bh_ptr, Shape2(3, H));
  const int omp_threads = mxnet::engine::OpenMP::Get()->GetRecommendedOMPThreadCount();
  if (D == 1) {
    #pragma omp parallel for num_threads(omp_threads)
    for (int i = 0; i < N; i++)
      for (int j = 0; j < H; j++) {
        y_ptr[i * H + j] = hx[i][j];
      }
  } else {
    #pragma omp parallel for num_threads(omp_threads)
    for (int i = 0; i < N; i++)
      for (int j = 0; j < H; j++) {
        y_ptr[i * D * H + j] = hx[i][j];
        back_ht_1[i * D * H + j] = hx[N + i][j];
    }
  }
  Tensor<cpu, 2, DType> dgemmC1(ws, Shape2(T * N, 3 * H));
  Tensor<cpu, 2, DType> dgemmC2(gemmC2, Shape2(N, 3 * H));
  Tensor<cpu, 2, DType> dback_gemmC1(back_gemmC1, Shape2(T * N, 3 * H));
    
    #include <mxnet/op_attr_types.h>
#include <mxnet/graph_attr_types.h>
#include <mxnet/c_api.h>
#include <nnvm/symbolic.h>
#include <nnvm/op.h>
#include <nnvm/graph.h>
#include <vector>
#include <atomic>
#include <utility>
#include <string>
#include <unordered_map>
    
                    Matrix<ElemType>& value = node->Value();
                if (m_blockLevelSmoothedGradient.find(name) == m_blockLevelSmoothedGradient.end())
                {
                    // has not been initialized yet
                    auto pSmoothedGrad = make_shared<Matrix<ElemType>> (value.GetDeviceId());
                    pSmoothedGrad->Resize(value.GetNumRows(), value.GetNumCols());
                    pSmoothedGrad->SetValue((ElemType)0); 
                    m_blockLevelSmoothedGradient[name] = pSmoothedGrad; 
                }
    
    // DuplicateNode - Duplicate a node in a macro as needed (it might already exist)
// node - node we are duplicating
// return - the new duplicated node if it didn't exist, or the previously duplicated node if it already did
template <typename ElemType>
NDLNode<ElemType>* NDLScript<ElemType>::DuplicateNode(NDLNode<ElemType>* node)
{
    NDLNode<ElemType>* newNode = node->Copy();
    m_children.push_back(newNode);
    newNode->SetParentScript(this);
    return newNode;
}
    
    namespace Microsoft { namespace MSR { namespace ScriptableObjects {
    }
    }
    }
    
            // decide start column and end column
        size_t st = numParallelSequences *  rank      / numProcs;
        size_t en = numParallelSequences * (rank + 1) / numProcs;
        assert(rank < numProcs);
        en = en > numParallelSequences ? numParallelSequences : en; // TODO: why are these two tests necessary? We should rather test rank
        en = (rank + 1 == numProcs) ? numParallelSequences : en;
        size_t numNewParallelSequence = en - st;
    
        void InitDistGradAgg(int numEvalNodes, int numGradientBits, int deviceId, int traceLevel);
    void InitModelAggregationHandler(int traceLevel, DEVICEID_TYPE devID);
private:
    // UpdateWeights() - actual weight update, implementing various update rules
    void UpdateWeights(Matrix<ElemType>& functionValues, Matrix<ElemType>& gradientValues,
        MatrixBasePtr& smoothedGradient, double& smoothedCount,
        const double learnRatePerSample, const double momentumPerSample,
        size_t actualMBSize,
        const double L2RegWeight, const double L1RegWeight,
        const bool needAveMultiplier,
        const bool useNesterovMomentum) const;
    
    
    {            if (m_useAsyncAggregation)
            {
                std::unique_ptr<MatrixComputeStreamEvent> mainStreamSyncEvent(MatrixComputeStreamEvent::Create(deviceId));
                mainStreamSyncEvent->SynchronizeDataTransferFetchStreamWithEvent<float>();
            }
        }
    
    void ImGui_ImplGLUT_KeyboardFunc(unsigned char c, int x, int y)
{
    // Send character to imgui
    //printf('char_down_func %d '%c'\n', c, c);
    ImGuiIO& io = ImGui::GetIO();
    if (c >= 32)
        io.AddInputCharacter((unsigned int)c);
    }
    
    // Copyright (C) 2015 by Giovanni Zito
// This file is part of Dear ImGui
    
        // Initialize Direct3D
    if (!CreateDeviceD3D(hwnd))
    {
        CleanupDeviceD3D();
        ::UnregisterClass(wc.lpszClassName, wc.hInstance);
        return 1;
    }
    
    
    {    // Rendering
    ImGui::Render();
    SDL_GL_MakeCurrent(g_Window, g_GLContext);
    glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    SDL_GL_SwapWindow(g_Window);
}

    
    
    {    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            CreateRenderTarget();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'ID3D10ShaderResourceView*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Renderer: Support for large meshes (64k+ vertices) with 16-bits indices.
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2019-05-29: DirectX9: Added support for large mesh (64K+ vertices), enable ImGuiBackendFlags_RendererHasVtxOffset flag.
//  2019-04-30: DirectX9: Added support for special ImDrawCallback_ResetRenderState callback to reset render state.
//  2019-03-29: Misc: Fixed erroneous assert in ImGui_ImplDX9_InvalidateDeviceObjects().
//  2019-01-16: Misc: Disabled fog before drawing UI's. Fixes issue #2288.
//  2018-11-30: Misc: Setting up io.BackendRendererName so it can be displayed in the About Window.
//  2018-06-08: Misc: Extracted imgui_impl_dx9.cpp/.h away from the old combined DX9+Win32 example.
//  2018-06-08: DirectX9: Use draw_data->DisplayPos and draw_data->DisplaySize to setup projection matrix and clipping rectangle.
//  2018-05-07: Render: Saving/restoring Transform because they don't seem to be included in the StateBlock. Setting shading mode to Gouraud.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplDX9_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
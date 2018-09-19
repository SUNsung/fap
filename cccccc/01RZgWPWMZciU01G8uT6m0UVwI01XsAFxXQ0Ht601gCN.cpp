
        
          // Build a substitution map to replace the protocol's \c Self and the type
  // parameters of the requirement into a combined context that provides the
  // type parameters of the conformance context and the parameters of the
  // requirement.
  auto selfType = cast<GenericTypeParamType>(
      proto->getSelfInterfaceType()->getCanonicalType());
    
      bool visitSILFunctionType(SILFunctionType *ty) {
    for (auto param : ty->getParameters())
      if (doIt(param.getType()))
        return true;
    for (auto result : ty->getResults())
      if (doIt(result.getType()))
        return true;
    if (ty->hasErrorResult())
      if (doIt(ty->getErrorResult().getType()))
        return true;
    return false;
  }
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
    
    {  if (!wasInline) delete[] oldAllocation;
}  
    
    
    {  return word1.substr(1) == word2.substr(1);
}
    
    
    {    if (Finished) {
      std::string Output = 'Output placeholder\n';
      std::string Errors =
          P.second->SeparateErrors ? 'Error placeholder\n' : '';
      if (Finished(P.first, 0, Output, Errors, TaskProcessInformation(Pid),
                   P.second->Context) == TaskFinishedResponse::StopExecution)
        SubtaskFailed = true;
    }
  }
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
    #ifndef CAFFE_LAYER_FACTORY_H_
#define CAFFE_LAYER_FACTORY_H_
    
    
    {  /// Whether to ignore instances with a certain label.
  bool has_ignore_label_;
  /// The label indicating that an instance should be ignored.
  int ignore_label_;
  /// Keeps counts of the number of samples per class.
  Blob<Dtype> nums_buffer_;
};
    
      vector<shared_ptr<Batch<Dtype> > > prefetch_;
  BlockingQueue<Batch<Dtype>*> prefetch_free_;
  BlockingQueue<Batch<Dtype>*> prefetch_full_;
  Batch<Dtype>* prefetch_current_;
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
  cudnnPoolingDescriptor_t  pooling_desc_;
  cudnnPoolingMode_t        mode_;
};
#endif
    
    
    { private:
  void* engine_;
};
    
    
    {}  // namespace grpc

    
    
    {}  // namespace grpc

    
    #include 'absl/strings/string_view.h'
#include 'absl/time/time.h'
#include 'src/cpp/ext/filters/census/channel_filter.h'
#include 'src/cpp/ext/filters/census/context.h'
    
    void GenerateClientContext(absl::string_view method, CensusContext* ctxt,
                           CensusContext* parent_ctxt) {
  if (parent_ctxt != nullptr) {
    SpanContext span_ctxt = parent_ctxt->Context();
    Span span = parent_ctxt->Span();
    if (span_ctxt.IsValid()) {
      new (ctxt) CensusContext(method, &span);
      return;
    }
  }
  new (ctxt) CensusContext(method);
}
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    extern void UNSCALE_BT_BASIS(btTransform &scaledBasis);
#endif

    
    #include 'bullet_utilities.h'
#include 'rid_bullet.h'
    
    		btScalar depth(ray_shape->getScaledLength() * (btResult.m_closestHitFraction - 1));
    
    void register_dds_types() {
    }
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include 'Utils.h'
#include 'Learner.h'
#include 'PerformanceProfiler.h'
#include 'CompositeFunction.h'
#include 'Serialization.h'
    
        virtual bool OutputUsedInComputingInputNodesGradients() const override
    {
        return false;
    }
    virtual bool InputUsedInComputingInputNodesGradients(size_t /*childIndex*/) const override
    {
        return false;
    }
    
    void Animate::setAnimation(cocos2d::Animation *animation)
{
    if (_animation != animation)
    {
        CC_SAFE_RETAIN(animation);
        CC_SAFE_RELEASE(_animation);
        _animation = animation;
    }
}
    
    NS_CC_BEGIN
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
     @code
     // scaleA and scaleB are equivalents
     auto scaleA = ScaleTo::create(2, 3);                 // (duration, to)
     auto scaleB = ActionTween::create(2, 'scale', 1, 3); // (duration, key, from, to)
 @endcode
    
    //---- Don't define obsolete functions/enums names. Consider enabling from time to time after updating to avoid using soon-to-be obsolete function/names.
//#define IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    
                    FT_Glyph ft_glyph = NULL;
                FT_BitmapGlyph ft_glyph_bitmap = NULL; // NB: will point to bitmap within FT_Glyph
                GlyphInfo glyph_info;
                if (!font_face.CalcGlyphInfo(codepoint, glyph_info, ft_glyph, ft_glyph_bitmap))
                    continue;
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
    
            if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('Dear ImGui DirectX9 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    void    ImGui_ImplDX10_InvalidateDeviceObjects()
{
    if (!g_pd3dDevice)
        return;
    }
    
    
    {    if (g_pVertexShaderBlob) { g_pVertexShaderBlob->Release(); g_pVertexShaderBlob = NULL; }
    if (g_pPixelShaderBlob) { g_pPixelShaderBlob->Release(); g_pPixelShaderBlob = NULL; }
    if (g_pRootSignature) { g_pRootSignature->Release(); g_pRootSignature = NULL; }
    if (g_pPipelineState) { g_pPipelineState->Release(); g_pPipelineState = NULL; }
    if (g_pFontTextureResource) { g_pFontTextureResource->Release(); g_pFontTextureResource = NULL; ImGui::GetIO().Fonts->TexID = NULL; } // We copied g_pFontTextureView to io.Fonts->TexID so let's clear that as well.
    for (UINT i = 0; i < g_numFramesInFlight; i++)
    {
        if (g_pFrameResources[i].IB) { g_pFrameResources[i].IB->Release(); g_pFrameResources[i].IB = NULL; }
        if (g_pFrameResources[i].VB) { g_pFrameResources[i].VB->Release(); g_pFrameResources[i].VB = NULL; }
    }
}
    
    
    {
}  // namespace guetzli

    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_DCT_DOUBLE_H_
#define GUETZLI_DCT_DOUBLE_H_
    
    namespace guetzli {
    }
    
    
    {  int width;
  int height;
  int version;
  int max_h_samp_factor;
  int max_v_samp_factor;
  int MCU_rows;
  int MCU_cols;
  int restart_interval;
  std::vector<std::string> app_data;
  std::vector<std::string> com_data;
  std::vector<JPEGQuantTable> quant;
  std::vector<JPEGHuffmanCode> huffman_code;
  std::vector<JPEGComponent> components;
  std::vector<JPEGScanInfo> scan_info;
  std::vector<uint8_t> marker_order;
  std::vector<std::string> inter_marker_data;
  std::string tail_data;
  const uint8_t* original_jpg;
  size_t original_jpg_size;
  JPEGReadError error;
};
    
    // Library to decode jpeg coefficients into an RGB image.
    
    // Creates a JPEG from the rgb pixel data. Returns true on success.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg);
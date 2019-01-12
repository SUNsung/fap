
        
        public:
  /// Form storage for the given generic signature and its replacement
  /// types and conformances.
  static Storage *get(GenericSignature *genericSig,
                      ArrayRef<Type> replacementTypes,
                      ArrayRef<ProtocolConformanceRef> conformances);
    
    bool importer::isCFTypeDecl(
       const clang::TypedefNameDecl *Decl) {
  if (CFPointeeInfo::classifyTypedef(Decl))
    return true;
  return false;
}
    
    
    {
    {/// Determine the imported CF type for the given typedef-name, or the empty
/// string if this is not an imported CF type name.
llvm::StringRef getCFTypeName(const clang::TypedefNameDecl *decl);
}
}
    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
    namespace {
string GetTypeUrl(const Descriptor* message,
                  const string& type_url_prefix) {
  if (!type_url_prefix.empty() &&
      type_url_prefix[type_url_prefix.size() - 1] == '/') {
    return type_url_prefix + message->full_name();
  } else {
    return type_url_prefix + '/' + message->full_name();
  }
}
}  // namespace
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    void ImmutableMapFieldGenerator::
GenerateBuildingCode(io::Printer* printer) const {
  printer->Print(
      variables_,
      'result.$name$_ = internalGet$capitalized_name$();\n'
      'result.$name$_.makeImmutable();\n');
}
    
    // Check whether there is any type defined in the proto file that has
// the given class name.
bool ClassNameResolver::HasConflictingClassName(
    const FileDescriptor* file, const string& classname) {
  for (int i = 0; i < file->enum_type_count(); i++) {
    if (file->enum_type(i)->name() == classname) {
      return true;
    }
  }
  for (int i = 0; i < file->service_count(); i++) {
    if (file->service(i)->name() == classname) {
      return true;
    }
  }
  for (int i = 0; i < file->message_type_count(); i++) {
    if (MessageHasConflictingClassName(file->message_type(i), classname)) {
      return true;
    }
  }
  return false;
}
    
    
    {  decode_data.AddString(1, 'abcdefghIJ', 'abcdefghIJ');
  decode_data.AddString(3, 'abcdefghIJ', '_AbcdefghIJ');
  decode_data.AddString(2, 'abcdefghIJ', 'Abcd_EfghIJ');
  EXPECT_EXIT(decode_data.AddString(2, 'xyz', 'x_yz'),
              ::testing::KilledBySignal(SIGABRT),
              'error: duplicate key \\(2\\) making TextFormat data, input:');
}
#endif  // PROTOBUF_HAS_DEATH_TEST
    
        void thresholdBinaryInv(const Size2D &size,
                            const u16 *srcBase, ptrdiff_t srcStride,
                            u16 *dstBase, ptrdiff_t dstStride,
                            u16 threshold, u16 value);
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0, const typename internal::VecTraits<T>::vec128 & v_src1,
              typename internal::VecTraits<T>::unsign::vec128 & v_dst) const
    {
        v_dst = internal::vcgtq(v_src0, v_src1);
    }
    
    #endif

    
    
    {
    {         vst1_s16(_dst + i + 4, vline_s16);
     }
})
#endif
    
    template <int shift>
void lshiftConst(const Size2D &size,
                 const u8 * srcBase, ptrdiff_t srcStride,
                 s16 * dstBase, ptrdiff_t dstStride)
{
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
        for (ptrdiff_t y = 0; y < height; ++y)
    {
        const u8 * srow0 = y == 0 && border == BORDER_MODE_CONSTANT ? NULL : internal::getRowPtr(srcBase, srcStride, std::max<ptrdiff_t>(y - 1, 0));
        const u8 * srow1 = internal::getRowPtr(srcBase, srcStride, y);
        const u8 * srow2 = y + 1 == height && border == BORDER_MODE_CONSTANT ? NULL : internal::getRowPtr(srcBase, srcStride, std::min(y + 1, height - 1));
        u8 * drow = internal::getRowPtr(dstBase, dstStride, y);
    }
    
    
    {            float32x2_t vres = vpadd_f32(vget_low_f32(v_sum),vget_high_f32(v_sum));
            result += vget_lane_f32(vres, 0) + vget_lane_f32(vres, 1);
        }
    
    bool ImGui::InputText(const char* label, std::string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
    //---- Don't define obsolete functions/enums names. Consider enabling from time to time after updating to avoid using soon-to-be obsolete function/names.
//#define IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyDeviceObjects();

    
    
    {    // Restore modified DX state
    ctx->RSSetScissorRects(old.ScissorRectsCount, old.ScissorRects);
    ctx->RSSetViewports(old.ViewportsCount, old.Viewports);
    ctx->RSSetState(old.RS); if (old.RS) old.RS->Release();
    ctx->OMSetBlendState(old.BlendState, old.BlendFactor, old.SampleMask); if (old.BlendState) old.BlendState->Release();
    ctx->OMSetDepthStencilState(old.DepthStencilState, old.StencilRef); if (old.DepthStencilState) old.DepthStencilState->Release();
    ctx->PSSetShaderResources(0, 1, &old.PSShaderResource); if (old.PSShaderResource) old.PSShaderResource->Release();
    ctx->PSSetSamplers(0, 1, &old.PSSampler); if (old.PSSampler) old.PSSampler->Release();
    ctx->PSSetShader(old.PS); if (old.PS) old.PS->Release();
    ctx->VSSetShader(old.VS); if (old.VS) old.VS->Release();
    ctx->VSSetConstantBuffers(0, 1, &old.VSConstantBuffer); if (old.VSConstantBuffer) old.VSConstantBuffer->Release();
    ctx->IASetPrimitiveTopology(old.PrimitiveTopology);
    ctx->IASetIndexBuffer(old.IndexBuffer, old.IndexBufferFormat, old.IndexBufferOffset); if (old.IndexBuffer) old.IndexBuffer->Release();
    ctx->IASetVertexBuffers(0, 1, &old.VertexBuffer, &old.VertexBufferStride, &old.VertexBufferOffset); if (old.VertexBuffer) old.VertexBuffer->Release();
    ctx->IASetInputLayout(old.InputLayout); if (old.InputLayout) old.InputLayout->Release();
}
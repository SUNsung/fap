
        
        
    {}  // namespace atom
    
    #ifndef ATOM_BROWSER_API_ATOM_API_AUTO_UPDATER_H_
#define ATOM_BROWSER_API_ATOM_API_AUTO_UPDATER_H_
    
        // Downloadable Content Information
    dict.Set('isDownloadable', val.downloadable);
    
    class InAppPurchase : public mate::EventEmitter<InAppPurchase>,
                      public in_app_purchase::TransactionObserver {
 public:
  static mate::Handle<InAppPurchase> Create(v8::Isolate* isolate);
    }
    
    PowerMonitor::PowerMonitor(v8::Isolate* isolate) {
#if defined(OS_LINUX)
  SetShutdownHandler(
      base::Bind(&PowerMonitor::ShouldShutdown, base::Unretained(this)));
#elif defined(OS_MACOSX)
  Browser::Get()->SetShutdownHandler(
      base::Bind(&PowerMonitor::ShouldShutdown, base::Unretained(this)));
#endif
  base::PowerMonitor::Get()->AddObserver(this);
  Init(isolate);
#if defined(OS_MACOSX) || defined(OS_WIN)
  InitPlatformSpecificMonitors();
#endif
}
    
    // Find an item in container according to its ID.
template <class T>
typename T::iterator FindById(T* container, int id) {
  auto predicate = [id](const typename T::value_type& item) -> bool {
    return item.id() == id;
  };
  return std::find_if(container->begin(), container->end(), predicate);
}
    
    void AtomQuotaPermissionContext::RequestQuotaPermission(
    const content::StorageQuotaParams& params,
    int render_process_id,
    const PermissionCallback& callback) {
  callback.Run(response::QUOTA_PERMISSION_RESPONSE_ALLOW);
}
    
    #include <QDialog>
    
        /** We need to calculate (rx,ry,rz) = (ax,ay,az) + (bx,by,1/bzinv). Due to
     *  secp256k1's isomorphism we can multiply the Z coordinates on both sides
     *  by bzinv, and get: (rx,ry,rz*bzinv) = (ax,ay,az*bzinv) + (bx,by,1).
     *  This means that (rx,ry,rz) can be calculated as
     *  (ax,ay,az*bzinv) + (bx,by,1), when not applying the bzinv factor to rz.
     *  The variable az below holds the modified Z coordinate for a, which is used
     *  for the computation of rx and ry, but not for rz.
     */
    secp256k1_fe_mul(&az, &a->z, bzinv);
    
    static void CheckSplitTorReplyLine(std::string input, std::string command, std::string args)
{
    BOOST_TEST_MESSAGE(std::string('CheckSplitTorReplyLine(') + input + ')');
    auto ret = SplitTorReplyLine(input);
    BOOST_CHECK_EQUAL(ret.first, command);
    BOOST_CHECK_EQUAL(ret.second, args);
}
    
    bool ImGui::InputText(const char* label, std::string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
    //---- Tip: You can add extra functions within the ImGui:: namespace, here or in your own headers files.
/*
namespace ImGui
{
    void MyFunction(const char* name, const MyMatrix44& v);
}
*/

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {
    {
    {                // Bind texture, Draw
                ID3D10ShaderResourceView* texture_srv = (ID3D10ShaderResourceView*)pcmd->TextureId;
                ctx->PSSetShaderResources(0, 1, &texture_srv);
                ctx->DrawIndexed(pcmd->ElemCount, idx_offset, vtx_offset);
            }
            idx_offset += pcmd->ElemCount;
        }
        vtx_offset += cmd_list->VtxBuffer.Size;
    }
    
    
    {        D3DCompile(pixelShader, strlen(pixelShader), NULL, NULL, NULL, 'main', 'ps_4_0', 0, 0, &g_pPixelShaderBlob, NULL);
        if (g_pPixelShaderBlob == NULL)  // NB: Pass ID3D10Blob* pErrorBlob to D3DCompile() to get error showing in (const char*)pErrorBlob->GetBufferPointer(). Make sure to Release() the blob!
            return false;
        if (g_pd3dDevice->CreatePixelShader((DWORD*)g_pPixelShaderBlob->GetBufferPointer(), g_pPixelShaderBlob->GetBufferSize(), NULL, &g_pPixelShader) != S_OK)
            return false;
    }
    
        // Create and grow vertex/index buffers if needed
    if (!g_pVB || g_VertexBufferSize < draw_data->TotalVtxCount)
    {
        if (g_pVB) { g_pVB->Release(); g_pVB = NULL; }
        g_VertexBufferSize = draw_data->TotalVtxCount + 5000;
        D3D12_HEAP_PROPERTIES props;
        memset(&props, 0, sizeof(D3D12_HEAP_PROPERTIES));
        props.Type = D3D12_HEAP_TYPE_UPLOAD;
        props.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
        props.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
        D3D12_RESOURCE_DESC desc;
        memset(&desc, 0, sizeof(D3D12_RESOURCE_DESC));
        desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
        desc.Width = g_VertexBufferSize * sizeof(ImDrawVert);
        desc.Height = 1;
        desc.DepthOrArraySize = 1;
        desc.MipLevels = 1;
        desc.Format = DXGI_FORMAT_UNKNOWN;
        desc.SampleDesc.Count = 1;
        desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
        desc.Flags = D3D12_RESOURCE_FLAG_NONE;
        if (g_pd3dDevice->CreateCommittedResource(&props, D3D12_HEAP_FLAG_NONE, &desc, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, IID_PPV_ARGS(&g_pVB)) < 0)
            return;
        frameResources->VB = g_pVB;
        frameResources->VertexBufferSize = g_VertexBufferSize;
    }
    if (!g_pIB || g_IndexBufferSize < draw_data->TotalIdxCount)
    {
        if (g_pIB) { g_pIB->Release(); g_pIB = NULL; }
        g_IndexBufferSize = draw_data->TotalIdxCount + 10000;
        D3D12_HEAP_PROPERTIES props;
        memset(&props, 0, sizeof(D3D12_HEAP_PROPERTIES));
        props.Type = D3D12_HEAP_TYPE_UPLOAD;
        props.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
        props.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
        D3D12_RESOURCE_DESC desc;
        memset(&desc, 0, sizeof(D3D12_RESOURCE_DESC));
        desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
        desc.Width = g_IndexBufferSize * sizeof(ImDrawIdx);
        desc.Height = 1;
        desc.DepthOrArraySize = 1;
        desc.MipLevels = 1;
        desc.Format = DXGI_FORMAT_UNKNOWN;
        desc.SampleDesc.Count = 1;
        desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
        desc.Flags = D3D12_RESOURCE_FLAG_NONE;
        if (g_pd3dDevice->CreateCommittedResource(&props, D3D12_HEAP_FLAG_NONE, &desc, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, IID_PPV_ARGS(&g_pIB)) < 0)
            return;
        frameResources->IB = g_pIB;
        frameResources->IndexBufferSize = g_IndexBufferSize;
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        std::unique_ptr<DHTPeerAnnounceStorage> peerAnnounceStorage;
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
    namespace aria2 {
    }
    
        receiver->setMessageFactory(factory.get());
    receiver->setRoutingTable(routingTable.get());
    
      DHTRoutingTable* routingTable_;
    
      bool validateToken(const std::string& token, const unsigned char* infoHash,
                     const std::string& ipaddr, uint16_t port) const;
    
    void DHTTokenUpdateCommand::process()
{
  try {
    tokenTracker_->updateTokenSecret();
  }
  catch (RecoverableException& e) {
    A2_LOG_ERROR_EX(EX_EXCEPTION_CAUGHT, e);
  }
}
    
      static const std::string E;
    
    // Function to return an string for the calculated complexity
std::string GetBigOString(BigO complexity) {
  switch (complexity) {
    case oN:
      return 'N';
    case oNSquared:
      return 'N^2';
    case oNCubed:
      return 'N^3';
    case oLogN:
      return 'lgN';
    case oNLogN:
      return 'NlgN';
    case o1:
      return '(1)';
    default:
      return 'f(N)';
  }
}
    
    #include <string>
#include <vector>
    
    
    {
    {} // end namespace internal
} // end namespace benchmark

    
    namespace benchmark {
    }
    
    #include <vector>
    
    
    {  ::apollo::canbus::ChassisDetail chassis_detail;
  chassis_detail.set_car_type(::apollo::canbus::ChassisDetail::QIRUI_EQ_15);
  EXPECT_EQ(manager.GetSensorData(&chassis_detail), ErrorCode::OK);
  EXPECT_EQ(manager.GetSensorData(nullptr), ErrorCode::CANBUS_ERROR);
}
    
    
    {  int ret = x;
  return ret;
}
    
    int ObjectExtendedInfo60D::object_id(const std::uint8_t* bytes,
                                     int32_t length) const {
  Byte t0(bytes);
  int32_t x = t0.get_byte(0, 8);
    }
    
    
    {  int ret = x;
  return ret;
}
    
    BaseMapMatrix::BaseMapMatrix(const BaseMapMatrix& cells) {}
    
    #include 'modules/map/hdmap/adapter/xml_parser/header_xml_parser.h'
    
    
    { protected:
  SpeedLimit speed_limit_;
};
    
    void SplineSegKernel::IntegratedTermMatrix(const uint32_t num_params,
                                           const double x,
                                           const std::string& type,
                                           Eigen::MatrixXd* term_matrix) const {
  if (term_matrix->rows() != term_matrix->cols() ||
      term_matrix->rows() != static_cast<int>(num_params)) {
    term_matrix->resize(num_params, num_params);
  }
    }
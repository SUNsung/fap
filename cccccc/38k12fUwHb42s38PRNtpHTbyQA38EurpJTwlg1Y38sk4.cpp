
        
            // Setup Platform/Renderer bindings
    ImGui_Marmalade_Init(true);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        // Create the pixel shader
    {
        static const char* pixelShader =
            'struct PS_INPUT\
            {\
            float4 pos : SV_POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            sampler sampler0;\
            Texture2D texture0;\
            \
            float4 main(PS_INPUT input) : SV_Target\
            {\
            float4 out_col = input.col * texture0.Sample(sampler0, input.uv); \
            return out_col; \
            }';
    }
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver.
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
    // About GLSL version:
//  The 'glsl_version' initialization parameter should be NULL (default) or a '#version XXX' string.
//  On computer platform the GLSL version default to '#version 130'. On OpenGL ES 3 platform it defaults to '#version 300 es'
//  Only override if your GL version doesn't handle this GLSL version. See GLSL version table at the top of imgui_impl_opengl3.cpp.
    
    static void ImGui_ImplGlfw_UpdateGamepads()
{
    ImGuiIO& io = ImGui::GetIO();
    memset(io.NavInputs, 0, sizeof(io.NavInputs));
    if ((io.ConfigFlags & ImGuiConfigFlags_NavEnableGamepad) == 0)
        return;
    }
    
            // Rendering
        ImGui::Render();
        g_pd3dDevice->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDevice->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui_ImplDX10_RenderDrawData(ImGui::GetDrawData());
    
    void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
      virtual const std::string& getType() const CXX11_OVERRIDE;
    
    class DHTRoutingTable {
private:
  std::shared_ptr<DHTNode> localNode_;
    }
    
    
    {  const int clen = bittorrent::getCompactLength(family_);
  // nodes
  for (std::vector<std::shared_ptr<DHTNode>>::const_iterator i = nodes_.begin(),
                                                             eoi = nodes_.end();
       i != eoi; ++i) {
    const std::shared_ptr<DHTNode>& node = *i;
    // Write IP address + port in Compact IP-address/port info form.
    unsigned char compactPeer[COMPACT_LEN_IPV6];
    int compactlen = bittorrent::packcompact(compactPeer, node->getIPAddress(),
                                             node->getPort());
    if (compactlen != clen) {
      memset(compactPeer, 0, clen);
    }
    uint8_t clen1 = clen;
    // 1byte compact peer format length
    WRITE_CHECK(fp, &clen1, sizeof(clen1));
    // 7bytes reserved
    WRITE_CHECK(fp, zero, 7);
    // clen bytes compact peer
    WRITE_CHECK(fp, compactPeer, static_cast<size_t>(clen));
    // 24-clen bytes reserved
    WRITE_CHECK(fp, zero, static_cast<size_t>(24 - clen));
    // 20bytes: node ID
    WRITE_CHECK(fp, node->getID(), DHT_ID_LENGTH);
    // 4bytes reserved
    WRITE_CHECK(fp, zero, 4);
  }
  if (fp.close() == EOF) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  if (!File(filenameTemp).renameTo(filename)) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  A2_LOG_INFO('DHT routing table was saved successfully');
}
    
      void update();
    
      // returns 'unknown'
  virtual const std::string& getMessageType() const CXX11_OVERRIDE;
    
    
    {  return xfer;
}
    
    
    {};
    
    using namespace  ::osquery::extensions;
    
    
    {};
    
      xfer += oprot->writeFieldBegin('response', ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_MAP, static_cast<uint32_t>(this->response.size()));
    std::vector<std::map<std::string, std::string> > ::const_iterator _iter18;
    for (_iter18 = this->response.begin(); _iter18 != this->response.end(); ++_iter18)
    {
      {
        xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*_iter18).size()));
        std::map<std::string, std::string> ::const_iterator _iter19;
        for (_iter19 = (*_iter18).begin(); _iter19 != (*_iter18).end(); ++_iter19)
        {
          xfer += oprot->writeString(_iter19->first);
          xfer += oprot->writeString(_iter19->second);
        }
        xfer += oprot->writeMapEnd();
      }
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
    
    /**
 * @brief Represents a hardware driver type that SMART api can you use to query
 * device information.
 *
 * @param driver name of SMART controller driver
 * @param maxID max ID number of which disks on the controller is monitored
 */
struct hardwareDriver {
  std::string driver;
  size_t maxID;
};
    
    void tableCompletionFunction(char const* prefix, linenoiseCompletions* lc) {
  auto tables = osquery::RegistryFactory::get().names('table');
  size_t index = 0;
    }
    
    
    {  return stream;
}
    
    #pragma once
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    class kernelExtensions : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};
    
    TEST_F(kernelIntegrity, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from kernel_integrity');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'sycall_addr_modified', IntType}
  //      {'text_segment_hash', NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
    TEST_F(KernelModules, test_sanity) {
  QueryData data = execute_query('select * from kernel_modules');
  ASSERT_GT(data.size(), 0ul);
  ValidatatioMap row_map = {
      {'name', NonEmptyString},
      {'size', NonNegativeInt},
      {'used_by', NonEmptyString},
      {'status', NonEmptyString},
      {'address', NonNegativeInt},
  };
  validate_rows(data, row_map);
}
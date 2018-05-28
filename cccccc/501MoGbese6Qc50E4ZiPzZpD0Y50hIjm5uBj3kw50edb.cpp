
        
          void compute();
    
      auto &fileMgr = clangCI.getFileManager();
  bool isSystem = module->isSystemModule();
  // FIXME: Get real values for the following.
  StringRef swiftVersion;
  StringRef sysrootPath = clangCI.getHeaderSearchOpts().Sysroot;
  std::string indexUnitToken = module->getModuleFilename();
  // For indexing serialized modules 'debug compilation' is irrelevant, so
  // set it to true by default.
  bool isDebugCompilation = true;
    
    #include 'swift/Markup/Markup.h'
#include 'llvm/ADT/Optional.h'
    
      /// Treat all warnings as errors
  bool WarningsAsErrors = false;
    
    
    {  StringRef getReceiverUSR() const {
    for (auto Relation: Relations) {
      if (Relation.roles & (SymbolRoleSet) SymbolRole::RelationReceivedBy)
        return Relation.USR;
    }
    return StringRef();
  }
};
    
        mBsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    Matrix<float>::ScaleAndAdd(alpha, mAdense, mBsparse);
    
        StreamMinibatchInputs inputMatrices;
    for (auto& node : featureNodes)
        inputMatrices.AddInput(node->NodeName(), node->ValuePtr(), node->GetMBLayout(), node->GetSampleLayout());
    
    // ===========================================================================
// DoConvertFromDbn() - implements CNTK 'convertdbn' command
// ===========================================================================
    
    // access the parser through one of these functions
ExpressionPtr ParseConfigDictFromString(wstring text, wstring location, vector<wstring>&& includePaths);          // parses a list of dictionary members, returns a dictionary expression
// TODO: These rvalue references are no longer adding value, change to const<>&
//ExpressionPtr ParseConfigDictFromFile(wstring path, vector<wstring> includePaths);              // likewise, but from a file path
ExpressionPtr ParseConfigExpression(const wstring& sourceText, vector<wstring>&& includePaths); // parses a single expression from sourceText, which is meant to contain an include statement, hence includePaths
    
    
    {        // no config file, parse as regular argument
        if (compare)
        {
            configString += (msra::strfun::utf8(str) + '\n');
        }
        else // One or more config file paths specified in a '+'-separated list.
        {
            const std::string filePaths = msra::strfun::utf8(str.substr(configDescriptor.length()));
            std::vector<std::string> filePathsVec = msra::strfun::split(filePaths, '+');
            for (auto filePath : filePathsVec)
            {
                if (std::find(resolvedConfigFiles.begin(), resolvedConfigFiles.end(), filePath) == resolvedConfigFiles.end())
                {
                    // if haven't already read this file, read it
                    resolvedConfigFiles.push_back(filePath);
                    configString += config.ReadConfigFile(filePath);
                    // remember all config directories, for use as include paths by BrainScriptNetworkBuilder
                    GetBrainScriptNetworkBuilderIncludePaths().push_back(File::DirectoryPathOf(msra::strfun::utf16(filePath)));
                }
                else
                    RuntimeError('Cannot specify same config file multiple times at the command line.');
            }
        }
    }
    // now, configString is a concatenation of lines, including parameters from the command line, with comments stripped
    
    public:
    // DataWriter Constructor
    // config - [in] configuration parameters for the datareader
    template <class ConfigRecordType>
    DataWriter(const ConfigRecordType& config);
    // constructor from Scripting
    DataWriter(const ScriptableObjects::IConfigRecordPtr configp)
        : DataWriter(*configp)
    {
    }
    virtual ~DataWriter();
    
    
    {        // compute global progress
        bool needToPrint = us.m_progressTracingTimer.ElapsedSeconds() > 10;
        if (needToPrint || isTimerPaced)
        {
            double epochProg = ((100.0f * (double) (us.m_currentStepOffset + epochNumber)) / (double) us.m_totalNumberOfSteps);
            mbProg = (mbProg * 100.0f) / (double) us.m_totalNumberOfSteps;
            printf('PROGRESS: %.2f%%\n', epochProg + mbProg);
            us.m_progressTracingTimer.Restart();
        }
        return needToPrint;
    }
    
        float4 operator>=(const float4& other) const
    {
        return _mm_cmpge_ps(v, other);
    }
    float4 operator<=(const float4& other) const
    {
        return _mm_cmple_ps(v, other);
    }
    
      std::string content;
  auto status = readFile('/etc/exports', content);
  if (!status.ok()) {
    VLOG(1) << 'Error reading /etc/exports: ' << status.toString();
    return {};
  }
    
    
    {/**
 * @brief Write a log line to the OS system log.
 *
 * There are occasional needs to log independently of the osquery logging
 * facilities. This allows a feature (not a table) to bypass all osquery
 * configuration and log to the OS system log.
 *
 * Linux/Darwin: this uses syslog's LOG_NOTICE.
 * Windows: This will end up inside the Facebook/osquery in the Windows
 * Event Log.
 */
void systemLog(const std::string& line);
} // namespace osquery

    
    static inline void teardown_locks() {
  // Release locks and their heap memory.
  lck_mtx_free(osquery.mtx, osquery.lck_grp);
    }
    
    
    {  // Cleanup allocations.
  std::string result(buffer);
  free(buffer);
  return result;
}
    
    
    {  EXPECT_EQ(expected, toAsciiTime(&result));
}
    
    Status WmiResultItem::GetUnsignedShort(const std::string& name,
                                       unsigned short& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
    }
    
        // Create texture
    int flags = al_get_new_bitmap_flags();
    int fmt = al_get_new_bitmap_format();
    al_set_new_bitmap_flags(ALLEGRO_MEMORY_BITMAP|ALLEGRO_MIN_LINEAR|ALLEGRO_MAG_LINEAR);
    al_set_new_bitmap_format(ALLEGRO_PIXEL_FORMAT_ABGR_8888_LE);
    ALLEGRO_BITMAP* img = al_create_bitmap(width, height);
    al_set_new_bitmap_flags(flags);
    al_set_new_bitmap_format(fmt);
    if (!img)
        return false;
    
            max_glyph_size.x = ImMax(max_glyph_size.x, font_face.Info.MaxAdvanceWidth);
        max_glyph_size.y = ImMax(max_glyph_size.y, font_face.Info.Ascender - font_face.Info.Descender);
    
        // Setup style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    
        IDXGISwapChain1* swapChain1 = NULL;
    dxgiFactory->CreateSwapChainForHwnd(g_pd3dCommandQueue, hWnd, &sd, NULL, NULL, &swapChain1);
    swapChain1->QueryInterface(IID_PPV_ARGS(&g_pSwapChain));
    swapChain1->Release();
    dxgiFactory->Release();
    
    
    {    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            ImGui_ImplDX9_InvalidateDeviceObjects();
            g_d3dpp.BackBufferWidth  = LOWORD(lParam);
            g_d3dpp.BackBufferHeight = HIWORD(lParam);
            HRESULT hr = g_pd3dDevice->Reset(&g_d3dpp);
            if (hr == D3DERR_INVALIDCALL)
                IM_ASSERT(0);
            ImGui_ImplDX9_CreateDeviceObjects();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    // About GLSL version:
// The 'glsl_version' initialization parameter defaults to '#version 150' if NULL.
// Only override if your GL version doesn't handle this GLSL version. Keep NULL if unsure!
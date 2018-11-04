
        
            if (info.bytes > buf.size()) {
      llvm::dbgs() << 'AST section too small.\n';
      return false;
    }
    
      DefaultCacheKey CKey(Key, &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    if (Entry->second == Value)
      return;
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
  }
    
      char *oldBegin = Begin;
  char *oldEnd = End;
  std::size_t oldSize = (std::size_t) (oldEnd - oldBegin);
    
    
    {} // namespace caffe2
    
    OPERATOR_SCHEMA(GivenTensorIntFill)
    .NumInputs(0, 1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .Arg(
        'values',
        'The value for the elements of the output tensor.',
        true /* required */)
    .Arg(
        'shape',
        'The shape of the output tensor.'
        'Cannot set the shape argument and pass in an input at the same time.')
    .Arg(
        'extra_shape',
        'The additional dimensions appended at the end of the shape indicated'
        'by the input blob.'
        'Cannot set the extra_shape argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '1D tensor containing the desired output shape. First input must be in CPU context.')
    .TensorInferenceFunction(FillerTensorInference<TensorProto_DataType_INT32>);
    
    
    {        smoothedGradientMatrix->template AdaDeltaUpdate<GradType>(*gradientMatrix, parameterMatrix, (AccumType)learningRate, (AccumType)m_rho, (AccumType)m_epsilon, timestamps, currentTimestamp);
    }
    
        private:
        static Microsoft::MSR::CNTK::InputStreamDescription GetInputStreamDescription(const StreamInformation& s, const DeviceDescriptor& device)
        {
            assert(s.m_storageFormat == StorageFormat::Dense || s.m_storageFormat == StorageFormat::SparseCSC);
            auto CNTKdeviceId = AsCNTKImplDeviceId(device);
            auto CNTKMatrixType = s.m_storageFormat == StorageFormat::Dense ? Microsoft::MSR::CNTK::MatrixType::DENSE : Microsoft::MSR::CNTK::MatrixType::SPARSE;
            auto CNTKMatrixFormat = AsCNTKImplMatrixFormat(s.m_storageFormat);
            return Microsoft::MSR::CNTK::InputStreamDescription(s.m_name, CNTKdeviceId, CNTKMatrixType, CNTKMatrixFormat);
        }
    
    
    {        auto ownerFunctionPtr = m_ownerFunction.lock();
        if (ownerFunctionPtr != nullptr)
            return ownerFunctionPtr->shared_from_this();
        else
            return nullptr;
    }
    
                if (m_varKind == VariableKind::Input)
            {
                for (auto dim : m_shape.Dimensions())
                {
                    if (dim == 0)
                        InvalidArgument('Variable '%S' has invalid shape '%S'.', AsString().c_str(), m_shape.AsString().c_str());
                }
            }
    
        static void setupTimeout(int seconds)
    {
        struct sigaction action = {};
        action.sa_handler = &CrossProcessMutex::noOpAlarmHandler;
        sigaction(SIGALRM, &action, NULL);
        alarm(seconds);
    }
    
            if (isFinalValidationPass)
        {
            if (!Input(0)->GetSampleLayout().IsElementwiseCompatibleWith(Input(1)->GetSampleLayout()) || !Input(0)->GetSampleLayout().IsElementwiseCompatibleWith(Input(2)->GetSampleLayout()))
                InvalidArgument('PerDimMeanVarNormalizationNode: All inputs should have same sample layout.');
        }
    
        /*TODO: merge with call site*/ void BackpropToRight(Matrix<ElemType>& inputFunctionValues, Matrix<ElemType>& inputGradientValues, Matrix<ElemType>& gradientValues)
    {
        size_t rows1 = inputGradientValues.GetNumRows(), cols1 = inputGradientValues.GetNumCols();
        size_t rowsp = gradientValues.GetNumRows(), colsp = gradientValues.GetNumCols();
        int wordsInEachSample = rows1 / inputFunctionValues.GetNumCols();
    }
    
            if (q+65536 > end)
            match_max = end-q;
        else
            match_max = 65536;
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    ImGui_Marmalade_Init(true);
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-08-01: DirectX11: Querying for IDXGIFactory instead of IDXGIFactory1 to increase compatibility.
//  2018-07-13: DirectX11: Fixed unreleased resources in Init and Shutdown functions.
//  2018-06-08: Misc: Extracted imgui_impl_dx11.cpp/.h away from the old combined DX11+Win32 example.
//  2018-06-08: DirectX11: Use draw_data->DisplayPos and draw_data->DisplaySize to setup projection matrix and clipping rectangle.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplDX11_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2016-05-07: DirectX11: Disabling depth-write.
    
    
    {
    {        if (multiply_table == NULL)
        {
            for (uint32_t y = 0; y < h; y++, src += src_pitch, dst += dst_pitch)
                memcpy(dst, src, w);
        }
        else
        {
            for (uint32_t y = 0; y < h; y++, src += src_pitch, dst += dst_pitch)
                for (uint32_t x = 0; x < w; x++)
                    dst[x] = multiply_table[src[x]];
        }
    }
}
    
        // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;       // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;        // We can honor io.WantSetMousePos requests (optional, rarely used)
    
    const ImWchar*  ImFontAtlas::GetGlyphRangesChineseSimplifiedCommon()
{
    // Store 2500 regularly used characters for Simplified Chinese.
    // Sourced from https://zh.wiktionary.org/wiki/%E9%99%84%E5%BD%95:%E7%8E%B0%E4%BB%A3%E6%B1%89%E8%AF%AD%E5%B8%B8%E7%94%A8%E5%AD%97%E8%A1%A8
    // This table covers 97.97% of all characters used during the month in July, 1987.
    // You can use ImFontAtlas::GlyphRangesBuilder to create your own ranges derived from this, by merging existing ranges or adding new characters.
    // (Stored as accumulative offsets from the initial unicode codepoint 0x4E00. This encoding is designed to helps us compact the source code size.)
    static const short accumulative_offsets_from_0x4E00[] =
    {
        0,1,2,4,1,1,1,1,2,1,3,2,1,2,2,1,1,1,1,1,5,2,1,2,3,3,3,2,2,4,1,1,1,2,1,5,2,3,1,2,1,2,1,1,2,1,1,2,2,1,4,1,1,1,1,5,10,1,2,19,2,1,2,1,2,1,2,1,2,
        1,5,1,6,3,2,1,2,2,1,1,1,4,8,5,1,1,4,1,1,3,1,2,1,5,1,2,1,1,1,10,1,1,5,2,4,6,1,4,2,2,2,12,2,1,1,6,1,1,1,4,1,1,4,6,5,1,4,2,2,4,10,7,1,1,4,2,4,
        2,1,4,3,6,10,12,5,7,2,14,2,9,1,1,6,7,10,4,7,13,1,5,4,8,4,1,1,2,28,5,6,1,1,5,2,5,20,2,2,9,8,11,2,9,17,1,8,6,8,27,4,6,9,20,11,27,6,68,2,2,1,1,
        1,2,1,2,2,7,6,11,3,3,1,1,3,1,2,1,1,1,1,1,3,1,1,8,3,4,1,5,7,2,1,4,4,8,4,2,1,2,1,1,4,5,6,3,6,2,12,3,1,3,9,2,4,3,4,1,5,3,3,1,3,7,1,5,1,1,1,1,2,
        3,4,5,2,3,2,6,1,1,2,1,7,1,7,3,4,5,15,2,2,1,5,3,22,19,2,1,1,1,1,2,5,1,1,1,6,1,1,12,8,2,9,18,22,4,1,1,5,1,16,1,2,7,10,15,1,1,6,2,4,1,2,4,1,6,
        1,1,3,2,4,1,6,4,5,1,2,1,1,2,1,10,3,1,3,2,1,9,3,2,5,7,2,19,4,3,6,1,1,1,1,1,4,3,2,1,1,1,2,5,3,1,1,1,2,2,1,1,2,1,1,2,1,3,1,1,1,3,7,1,4,1,1,2,1,
        1,2,1,2,4,4,3,8,1,1,1,2,1,3,5,1,3,1,3,4,6,2,2,14,4,6,6,11,9,1,15,3,1,28,5,2,5,5,3,1,3,4,5,4,6,14,3,2,3,5,21,2,7,20,10,1,2,19,2,4,28,28,2,3,
        2,1,14,4,1,26,28,42,12,40,3,52,79,5,14,17,3,2,2,11,3,4,6,3,1,8,2,23,4,5,8,10,4,2,7,3,5,1,1,6,3,1,2,2,2,5,28,1,1,7,7,20,5,3,29,3,17,26,1,8,4,
        27,3,6,11,23,5,3,4,6,13,24,16,6,5,10,25,35,7,3,2,3,3,14,3,6,2,6,1,4,2,3,8,2,1,1,3,3,3,4,1,1,13,2,2,4,5,2,1,14,14,1,2,2,1,4,5,2,3,1,14,3,12,
        3,17,2,16,5,1,2,1,8,9,3,19,4,2,2,4,17,25,21,20,28,75,1,10,29,103,4,1,2,1,1,4,2,4,1,2,3,24,2,2,2,1,1,2,1,3,8,1,1,1,2,1,1,3,1,1,1,6,1,5,3,1,1,
        1,3,4,1,1,5,2,1,5,6,13,9,16,1,1,1,1,3,2,3,2,4,5,2,5,2,2,3,7,13,7,2,2,1,1,1,1,2,3,3,2,1,6,4,9,2,1,14,2,14,2,1,18,3,4,14,4,11,41,15,23,15,23,
        176,1,3,4,1,1,1,1,5,3,1,2,3,7,3,1,1,2,1,2,4,4,6,2,4,1,9,7,1,10,5,8,16,29,1,1,2,2,3,1,3,5,2,4,5,4,1,1,2,2,3,3,7,1,6,10,1,17,1,44,4,6,2,1,1,6,
        5,4,2,10,1,6,9,2,8,1,24,1,2,13,7,8,8,2,1,4,1,3,1,3,3,5,2,5,10,9,4,9,12,2,1,6,1,10,1,1,7,7,4,10,8,3,1,13,4,3,1,6,1,3,5,2,1,2,17,16,5,2,16,6,
        1,4,2,1,3,3,6,8,5,11,11,1,3,3,2,4,6,10,9,5,7,4,7,4,7,1,1,4,2,1,3,6,8,7,1,6,11,5,5,3,24,9,4,2,7,13,5,1,8,82,16,61,1,1,1,4,2,2,16,10,3,8,1,1,
        6,4,2,1,3,1,1,1,4,3,8,4,2,2,1,1,1,1,1,6,3,5,1,1,4,6,9,2,1,1,1,2,1,7,2,1,6,1,5,4,4,3,1,8,1,3,3,1,3,2,2,2,2,3,1,6,1,2,1,2,1,3,7,1,8,2,1,2,1,5,
        2,5,3,5,10,1,2,1,1,3,2,5,11,3,9,3,5,1,1,5,9,1,2,1,5,7,9,9,8,1,3,3,3,6,8,2,3,2,1,1,32,6,1,2,15,9,3,7,13,1,3,10,13,2,14,1,13,10,2,1,3,10,4,15,
        2,15,15,10,1,3,9,6,9,32,25,26,47,7,3,2,3,1,6,3,4,3,2,8,5,4,1,9,4,2,2,19,10,6,2,3,8,1,2,2,4,2,1,9,4,4,4,6,4,8,9,2,3,1,1,1,1,3,5,5,1,3,8,4,6,
        2,1,4,12,1,5,3,7,13,2,5,8,1,6,1,2,5,14,6,1,5,2,4,8,15,5,1,23,6,62,2,10,1,1,8,1,2,2,10,4,2,2,9,2,1,1,3,2,3,1,5,3,3,2,1,3,8,1,1,1,11,3,1,1,4,
        3,7,1,14,1,2,3,12,5,2,5,1,6,7,5,7,14,11,1,3,1,8,9,12,2,1,11,8,4,4,2,6,10,9,13,1,1,3,1,5,1,3,2,4,4,1,18,2,3,14,11,4,29,4,2,7,1,3,13,9,2,2,5,
        3,5,20,7,16,8,5,72,34,6,4,22,12,12,28,45,36,9,7,39,9,191,1,1,1,4,11,8,4,9,2,3,22,1,1,1,1,4,17,1,7,7,1,11,31,10,2,4,8,2,3,2,1,4,2,16,4,32,2,
        3,19,13,4,9,1,5,2,14,8,1,1,3,6,19,6,5,1,16,6,2,10,8,5,1,2,3,1,5,5,1,11,6,6,1,3,3,2,6,3,8,1,1,4,10,7,5,7,7,5,8,9,2,1,3,4,1,1,3,1,3,3,2,6,16,
        1,4,6,3,1,10,6,1,3,15,2,9,2,10,25,13,9,16,6,2,2,10,11,4,3,9,1,2,6,6,5,4,30,40,1,10,7,12,14,33,6,3,6,7,3,1,3,1,11,14,4,9,5,12,11,49,18,51,31,
        140,31,2,2,1,5,1,8,1,10,1,4,4,3,24,1,10,1,3,6,6,16,3,4,5,2,1,4,2,57,10,6,22,2,22,3,7,22,6,10,11,36,18,16,33,36,2,5,5,1,1,1,4,10,1,4,13,2,7,
        5,2,9,3,4,1,7,43,3,7,3,9,14,7,9,1,11,1,1,3,7,4,18,13,1,14,1,3,6,10,73,2,2,30,6,1,11,18,19,13,22,3,46,42,37,89,7,3,16,34,2,2,3,9,1,7,1,1,1,2,
        2,4,10,7,3,10,3,9,5,28,9,2,6,13,7,3,1,3,10,2,7,2,11,3,6,21,54,85,2,1,4,2,2,1,39,3,21,2,2,5,1,1,1,4,1,1,3,4,15,1,3,2,4,4,2,3,8,2,20,1,8,7,13,
        4,1,26,6,2,9,34,4,21,52,10,4,4,1,5,12,2,11,1,7,2,30,12,44,2,30,1,1,3,6,16,9,17,39,82,2,2,24,7,1,7,3,16,9,14,44,2,1,2,1,2,3,5,2,4,1,6,7,5,3,
        2,6,1,11,5,11,2,1,18,19,8,1,3,24,29,2,1,3,5,2,2,1,13,6,5,1,46,11,3,5,1,1,5,8,2,10,6,12,6,3,7,11,2,4,16,13,2,5,1,1,2,2,5,2,28,5,2,23,10,8,4,
        4,22,39,95,38,8,14,9,5,1,13,5,4,3,13,12,11,1,9,1,27,37,2,5,4,4,63,211,95,2,2,2,1,3,5,2,1,1,2,2,1,1,1,3,2,4,1,2,1,1,5,2,2,1,1,2,3,1,3,1,1,1,
        3,1,4,2,1,3,6,1,1,3,7,15,5,3,2,5,3,9,11,4,2,22,1,6,3,8,7,1,4,28,4,16,3,3,25,4,4,27,27,1,4,1,2,2,7,1,3,5,2,28,8,2,14,1,8,6,16,25,3,3,3,14,3,
        3,1,1,2,1,4,6,3,8,4,1,1,1,2,3,6,10,6,2,3,18,3,2,5,5,4,3,1,5,2,5,4,23,7,6,12,6,4,17,11,9,5,1,1,10,5,12,1,1,11,26,33,7,3,6,1,17,7,1,5,12,1,11,
        2,4,1,8,14,17,23,1,2,1,7,8,16,11,9,6,5,2,6,4,16,2,8,14,1,11,8,9,1,1,1,9,25,4,11,19,7,2,15,2,12,8,52,7,5,19,2,16,4,36,8,1,16,8,24,26,4,6,2,9,
        5,4,36,3,28,12,25,15,37,27,17,12,59,38,5,32,127,1,2,9,17,14,4,1,2,1,1,8,11,50,4,14,2,19,16,4,17,5,4,5,26,12,45,2,23,45,104,30,12,8,3,10,2,2,
        3,3,1,4,20,7,2,9,6,15,2,20,1,3,16,4,11,15,6,134,2,5,59,1,2,2,2,1,9,17,3,26,137,10,211,59,1,2,4,1,4,1,1,1,2,6,2,3,1,1,2,3,2,3,1,3,4,4,2,3,3,
        1,4,3,1,7,2,2,3,1,2,1,3,3,3,2,2,3,2,1,3,14,6,1,3,2,9,6,15,27,9,34,145,1,1,2,1,1,1,1,2,1,1,1,1,2,2,2,3,1,2,1,1,1,2,3,5,8,3,5,2,4,1,3,2,2,2,12,
        4,1,1,1,10,4,5,1,20,4,16,1,15,9,5,12,2,9,2,5,4,2,26,19,7,1,26,4,30,12,15,42,1,6,8,172,1,1,4,2,1,1,11,2,2,4,2,1,2,1,10,8,1,2,1,4,5,1,2,5,1,8,
        4,1,3,4,2,1,6,2,1,3,4,1,2,1,1,1,1,12,5,7,2,4,3,1,1,1,3,3,6,1,2,2,3,3,3,2,1,2,12,14,11,6,6,4,12,2,8,1,7,10,1,35,7,4,13,15,4,3,23,21,28,52,5,
        26,5,6,1,7,10,2,7,53,3,2,1,1,1,2,163,532,1,10,11,1,3,3,4,8,2,8,6,2,2,23,22,4,2,2,4,2,1,3,1,3,3,5,9,8,2,1,2,8,1,10,2,12,21,20,15,105,2,3,1,1,
        3,2,3,1,1,2,5,1,4,15,11,19,1,1,1,1,5,4,5,1,1,2,5,3,5,12,1,2,5,1,11,1,1,15,9,1,4,5,3,26,8,2,1,3,1,1,15,19,2,12,1,2,5,2,7,2,19,2,20,6,26,7,5,
        2,2,7,34,21,13,70,2,128,1,1,2,1,1,2,1,1,3,2,2,2,15,1,4,1,3,4,42,10,6,1,49,85,8,1,2,1,1,4,4,2,3,6,1,5,7,4,3,211,4,1,2,1,2,5,1,2,4,2,2,6,5,6,
        10,3,4,48,100,6,2,16,296,5,27,387,2,2,3,7,16,8,5,38,15,39,21,9,10,3,7,59,13,27,21,47,5,21,6
    };
    static ImWchar base_ranges[] = // not zero-terminated
    {
        0x0020, 0x00FF, // Basic Latin + Latin Supplement
        0x3000, 0x30FF, // Punctuations, Hiragana, Katakana
        0x31F0, 0x31FF, // Katakana Phonetic Extensions
        0xFF00, 0xFFEF, // Half-width characters
    };
    static ImWchar full_ranges[IM_ARRAYSIZE(base_ranges) + IM_ARRAYSIZE(accumulative_offsets_from_0x4E00) * 2 + 1] = { 0 };
    if (!full_ranges[0])
    {
        memcpy(full_ranges, base_ranges, sizeof(base_ranges));
        UnpackAccumulativeOffsetsIntoRanges(0x4E00, accumulative_offsets_from_0x4E00, IM_ARRAYSIZE(accumulative_offsets_from_0x4E00), full_ranges + IM_ARRAYSIZE(base_ranges));
    }
    return &full_ranges[0];
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
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
      virtual void addPeriodicTask2(const std::shared_ptr<DHTTask>& task) = 0;
    
    #endif // D_DHT_TOKEN_TRACKER_H

    
    bool DNSCache::CacheEntry::operator<(const CacheEntry& e) const
{
  int r = hostname_.compare(e.hostname_);
  if (r != 0) {
    return r < 0;
  }
  return port_ < e.port_;
}
    
      static const struct ERR2STR err2str[] = {
      {NTCAN_SUCCESS, 'NTCAN_SUCCESS'},
      {NTCAN_RX_TIMEOUT, 'NTCAN_RX_TIMEOUT'},
      {NTCAN_TX_TIMEOUT, 'NTCAN_TX_TIMEOUT'},
      {NTCAN_TX_ERROR, 'NTCAN_TX_ERROR'},
      {NTCAN_CONTR_OFF_BUS, 'NTCAN_CONTR_OFF_BUS'},
      {NTCAN_CONTR_BUSY, 'NTCAN_CONTR_BUSY'},
      {NTCAN_CONTR_WARN, 'NTCAN_CONTR_WARN'},
      {NTCAN_NO_ID_ENABLED, 'NTCAN_NO_ID_ENABLED'},
      {NTCAN_ID_ALREADY_ENABLED, 'NTCAN_ID_ALREADY_ENABLED'},
      {NTCAN_ID_NOT_ENABLED, 'NTCAN_ID_NOT_ENABLED'},
      {NTCAN_INVALID_FIRMWARE, 'NTCAN_INVALID_FIRMWARE'},
      {NTCAN_MESSAGE_LOST, 'NTCAN_MESSAGE_LOST'},
      {NTCAN_INVALID_PARAMETER, 'NTCAN_INVALID_PARAMETER'},
      {NTCAN_INVALID_HANDLE, 'NTCAN_INVALID_HANDLE'},
      {NTCAN_NET_NOT_FOUND, 'NTCAN_NET_NOT_FOUND'},
#ifdef NTCAN_IO_INCOMPLETE
      {NTCAN_IO_INCOMPLETE, 'NTCAN_IO_INCOMPLETE'},
#endif
#ifdef NTCAN_IO_PENDING
      {NTCAN_IO_PENDING, 'NTCAN_IO_PENDING'},
#endif
#ifdef NTCAN_INVALID_HARDWARE
      {NTCAN_INVALID_HARDWARE, 'NTCAN_INVALID_HARDWARE'},
#endif
#ifdef NTCAN_PENDING_WRITE
      {NTCAN_PENDING_WRITE, 'NTCAN_PENDING_WRITE'},
#endif
#ifdef NTCAN_PENDING_READ
      {NTCAN_PENDING_READ, 'NTCAN_PENDING_READ'},
#endif
#ifdef NTCAN_INVALID_DRIVER
      {NTCAN_INVALID_DRIVER, 'NTCAN_INVALID_DRIVER'},
#endif
#ifdef NTCAN_OPERATION_ABORTED
      {NTCAN_OPERATION_ABORTED, 'NTCAN_OPERATION_ABORTED'},
#endif
#ifdef NTCAN_WRONG_DEVICE_STATE
      {NTCAN_WRONG_DEVICE_STATE, 'NTCAN_WRONG_DEVICE_STATE'},
#endif
      {NTCAN_INSUFFICIENT_RESOURCES, 'NTCAN_INSUFFICIENT_RESOURCES'},
#ifdef NTCAN_HANDLE_FORCED_CLOSE
      {NTCAN_HANDLE_FORCED_CLOSE, 'NTCAN_HANDLE_FORCED_CLOSE'},
#endif
#ifdef NTCAN_NOT_IMPLEMENTED
      {NTCAN_NOT_IMPLEMENTED, 'NTCAN_NOT_IMPLEMENTED'},
#endif
#ifdef NTCAN_NOT_SUPPORTED
      {NTCAN_NOT_SUPPORTED, 'NTCAN_NOT_SUPPORTED'},
#endif
#ifdef NTCAN_SOCK_CONN_TIMEOUT
      {NTCAN_SOCK_CONN_TIMEOUT, 'NTCAN_SOCK_CONN_TIMEOUT'},
#endif
#ifdef NTCAN_SOCK_CMD_TIMEOUT
      {NTCAN_SOCK_CMD_TIMEOUT, 'NTCAN_SOCK_CMD_TIMEOUT'},
#endif
#ifdef NTCAN_SOCK_HOST_NOT_FOUND
      {NTCAN_SOCK_HOST_NOT_FOUND, 'NTCAN_SOCK_HOST_NOT_FOUND'},
#endif
#ifdef NTCAN_CONTR_ERR_PASSIVE
      {NTCAN_CONTR_ERR_PASSIVE, 'NTCAN_CONTR_ERR_PASSIVE'},
#endif
#ifdef NTCAN_ERROR_NO_BAUDRATE
      {NTCAN_ERROR_NO_BAUDRATE, 'NTCAN_ERROR_NO_BAUDRATE'},
#endif
#ifdef NTCAN_ERROR_LOM
      {NTCAN_ERROR_LOM, 'NTCAN_ERROR_LOM'},
#endif
      {(NTCAN_RESULT)0xffffffff, 'NTCAN_UNKNOWN'} /* stop-mark */
  };
    
      /**
   * @brief Receive messages
   * @param frames The messages to receive.
   * @param frame_num The amount of messages to receive.
   * @return The status of the receiving action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Receive(std::vector<CanFrame> *const frames,
                                    int32_t *const frame_num) override;
    
    #include 'gtest/gtest.h'
    
    using apollo::common::ErrorCode;
    
      dev_handler_ = socket(PF_CAN, SOCK_RAW, CAN_RAW);
  if (dev_handler_ < 0) {
    AERROR << 'open device error code [' << dev_handler_ << ']: ';
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    /**
 * @file
 * @brief Defines the SocketCanClientRaw class which inherits CanClient.
 */
    
      /**
   * @brief Check if the bit on a specified position is one.
   * @param pos The position of the bit to check.
   * @return If the bit on a specified position is one.
   */
  bool is_bit_1(const int32_t pos) const;

        
          // Print statistics.
  void print_scores(void) const;
  void print_scores(int orientation_id) const;
    
    // Size of buffer used to read a line from a box file.
const int kBoxReadBufSize = 1024;
    
    #endif  // TESSERACT_CCSTRUCT_DEBUGPIXA_H_

    
    // A CostFunc that takes the variance of step into account in the cost.
int64_t DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == nullptr || prev == this) {
    UpdateIfBetter(0, 1, nullptr, 0, 0, 0);
    return 0;
  }
    }
    
      // Arguments:
  // block: if not nullptr, then this is the first transformation, and
  //        block->re_rotation() needs to be used after the Denorm
  //        transformation to get back to the image coords.
  // rotation: if not nullptr, apply this rotation after translation to the
  //           origin and scaling. (Usually a classify rotation.)
  // predecessor: if not nullptr, then predecessor has been applied to the
  //              input space and needs to be undone to complete the inverse.
  // The above pointers are not owned by this DENORM and are assumed to live
  // longer than this denorm, except rotation, which is deep copied on input.
  //
  // x_origin: The x origin which will be mapped to final_xshift in the result.
  // y_origin: The y origin which will be mapped to final_yshift in the result.
  //           Added to result of row->baseline(x) if not nullptr.
  //
  // x_scale: scale factor for the x-coordinate.
  // y_scale: scale factor for the y-coordinate. Ignored if segs is given.
  // Note that these scale factors apply to the same x and y system as the
  // x-origin and y-origin apply, ie after any block rotation, but before
  // the rotation argument is applied.
  //
  // final_xshift: The x component of the final translation.
  // final_yshift: The y component of the final translation.
  //
  // In theory, any of the commonly used normalizations can be setup here:
  // * Traditional baseline normalization on a word:
  // SetupNormalization(block, nullptr, nullptr,
  //                    box.x_middle(), baseline,
  //                    kBlnXHeight / x_height, kBlnXHeight / x_height,
  //                    0, kBlnBaselineOffset);
  // * 'Numeric mode' baseline normalization on a word, in which the blobs
  //   are positioned with the bottom as the baseline is achieved by making
  //   a separate DENORM for each blob.
  // SetupNormalization(block, nullptr, nullptr,
  //                    box.x_middle(), box.bottom(),
  //                    kBlnXHeight / x_height, kBlnXHeight / x_height,
  //                    0, kBlnBaselineOffset);
  // * Anisotropic character normalization used by IntFx.
  // SetupNormalization(nullptr, nullptr, denorm,
  //                    centroid_x, centroid_y,
  //                    51.2 / ry, 51.2 / rx, 128, 128);
  // * Normalize blob height to x-height (current OSD):
  // SetupNormalization(nullptr, &rotation, nullptr,
  //                    box.rotational_x_middle(rotation),
  //                    box.rotational_y_middle(rotation),
  //                    kBlnXHeight / box.rotational_height(rotation),
  //                    kBlnXHeight / box.rotational_height(rotation),
  //                    0, kBlnBaselineOffset);
  // * Secondary normalization for classification rotation (current):
  // FCOORD rotation = block->classify_rotation();
  // float target_height = kBlnXHeight / CCStruct::kXHeightCapRatio;
  // SetupNormalization(nullptr, &rotation, denorm,
  //                    box.rotational_x_middle(rotation),
  //                    box.rotational_y_middle(rotation),
  //                    target_height / box.rotational_height(rotation),
  //                    target_height / box.rotational_height(rotation),
  //                    0, kBlnBaselineOffset);
  // * Proposed new normalizations for CJK: Between them there is then
  // no need for further normalization at all, and the character fills the cell.
  // ** Replacement for baseline normalization on a word:
  // Scales height and width independently so that modal height and pitch
  // fill the cell respectively.
  // float cap_height = x_height / CCStruct::kXHeightCapRatio;
  // SetupNormalization(block, nullptr, nullptr,
  //                    box.x_middle(), cap_height / 2.0f,
  //                    kBlnCellHeight / fixed_pitch,
  //                    kBlnCellHeight / cap_height,
  //                    0, 0);
  // ** Secondary normalization for classification (with rotation) (proposed):
  // Requires a simple translation to the center of the appropriate character
  // cell, no further scaling and a simple rotation (or nothing) about the
  // cell center.
  // FCOORD rotation = block->classify_rotation();
  // SetupNormalization(nullptr, &rotation, denorm,
  //                    fixed_pitch_cell_center,
  //                    0.0f,
  //                    1.0f,
  //                    1.0f,
  //                    0, 0);
  void SetupNormalization(const BLOCK* block,
                          const FCOORD* rotation,
                          const DENORM* predecessor,
                          float x_origin, float y_origin,
                          float x_scale, float y_scale,
                          float final_xshift, float final_yshift);
    
    namespace tesseract {
    }
    
    #include <memory>
#include 'bits16.h'
#include 'errcode.h'
#include 'params.h'
    
    // Clear all data.
void IntFeatureDist::Clear() {
  delete [] features_;
  features_ = nullptr;
  delete [] features_delta_one_;
  features_delta_one_ = nullptr;
  delete [] features_delta_two_;
  features_delta_two_ = nullptr;
}
    
    
    {    Microsoft::VisualStudio::TestPlatform::TestExecutor::WinRTCore::UnitTestClient::Run(e->Arguments);
}
    
    Size HorizontalNoOverflowStackPanel::ArrangeOverride(Size finalSize)
{
    if (Children->Size == 0)
    {
        return finalSize;
    }
    }
    
            // -IF- the Paren holding array is full and we try to add a paren
        // -OR- the paren holding array is empty and we try to remove a
        //      paren
        // -OR- the precedence holding array is full
        if ((m_openParenCount >= MAXPRECDEPTH && nx) || (!m_openParenCount && !nx)
            || ((m_precedenceOpCount >= MAXPRECDEPTH && m_nPrecOp[m_precedenceOpCount - 1] != 0)))
        {
            if (!m_openParenCount && !nx)
            {
                m_pCalcDisplay->OnNoRightParenAdded();
            }
    }
    
    PNUMBER RatToNumber(_In_ PRAT prat, uint32_t radix, int32_t precision)
{
    PRAT temprat = nullptr;
    DUPRAT(temprat, prat);
    // Convert p and q of rational form from internal base to requested base.
    // Scale by largest power of BASEX possible.
    int32_t scaleby = min(temprat->pp->exp, temprat->pq->exp);
    scaleby = max<int32_t>(scaleby, 0);
    }
    
    
    {            int command = nOpCode;
            switch (nOpCode)
            {
            case IDC_SIN:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandASIN) : IDC_SIN;
                spExpressionCommand = std::make_shared<CUnaryCommand>(static_cast<int>(angleOpCode), command);
                break;
            case IDC_COS:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandACOS) : IDC_COS;
                spExpressionCommand = std::make_shared<CUnaryCommand>(static_cast<int>(angleOpCode), command);
                break;
            case IDC_TAN:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandATAN) : IDC_TAN;
                spExpressionCommand = std::make_shared<CUnaryCommand>(static_cast<int>(angleOpCode), command);
                break;
            case IDC_SINH:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandASINH) : IDC_SINH;
                spExpressionCommand = std::make_shared<CUnaryCommand>(command);
                break;
            case IDC_COSH:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandACOSH) : IDC_COSH;
                spExpressionCommand = std::make_shared<CUnaryCommand>(command);
                break;
            case IDC_TANH:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandATANH) : IDC_TANH;
                spExpressionCommand = std::make_shared<CUnaryCommand>(command);
                break;
            case IDC_LN:
                command = fInv ? static_cast<int>(CalculationManager::Command::CommandPOWE) : IDC_LN;
                spExpressionCommand = std::make_shared<CUnaryCommand>(command);
                break;
            default:
                spExpressionCommand = std::make_shared<CUnaryCommand>(nOpCode);
            }
        }
    
        bool numChanged = false;
    
        struct HISTORYITEM
    {
        HISTORYITEMVECTOR historyItemVector;
    };
    
    INarratorAnnouncementHost ^ LiveRegionHost::MakeHost()
{
    return ref new LiveRegionHost();
}
    
        for (size_t r = 0; r < numRanks; r++)
    {
        for (size_t s = 0; s < r; s++)
        {
            if (strcmp(allDeviceUUIDs[r].data(), allDeviceUUIDs[s].data()) == 0)
            {
                fprintf(stderr, 'NcclComm: disabled, same device %s used by more than one rank\n', allDeviceUUIDs[0].data());
                nvmlShutdown();
                return;
            }
        }
    }
    nvmlShutdown();
    
        bo = builder.CreateLearnableParameter(msra::strfun::wstrprintf(L'bo%d', iLayer), outputDim, 1);
    bc = builder.CreateLearnableParameter(msra::strfun::wstrprintf(L'bc%d', iLayer), outputDim, 1);
    bi = builder.CreateLearnableParameter(msra::strfun::wstrprintf(L'bi%d', iLayer), outputDim, 1);
    bf = builder.CreateLearnableParameter(msra::strfun::wstrprintf(L'bf%d', iLayer), outputDim, 1);
    
    
    {    // if any of the action has set a reader/SGD section and has different Truncated value for reader and SGD section
    ConfigArray actions = commandConfig(L'action');
    for (size_t i = 0; i < actions.size(); i++)
    {
        if (actions[i] == 'train' || actions[i] == 'trainRNN')
        {
            ConfigParameters sgd = ConfigParameters(commandConfig(L'SGD'));
            ConfigParameters reader = ConfigParameters(commandConfig(L'reader'));
            // reader and SGD sections are two must-have sections in train/trainRNN
            if (reader.ExistsCurrent(L'Truncated') && !sgd.ExistsCurrent(L'Truncated'))
            {
                InvalidArgument('DisableLegacyUsage: setting Truncated only in reader section are not allowed. Please move Truncated=true/false to the top level section.');
            }
        }
    }
}
static void DisableLegacyUsage(const ConfigParameters& TopLevelConfig, const ConfigArray& commands)
{
    for (size_t i = 0; i < commands.size(); i++)
    {
        ConfigParameters cfgParameters(TopLevelConfig(commands[i]));
        DisableLegacyTruncationSettings(TopLevelConfig, cfgParameters);
    }
}
    
    // -----------------------------------------------------------------------
// topological plot [erw]
// -----------------------------------------------------------------------
    
        // Get the eval nodes with names
    // if evalNodeNames are not specified, return all the default evalnodes and training criterion nodes.
    std::vector<ComputationNodeBasePtr> GetEvalNodesWithName(const std::vector<wstring> evalNodeNames)
    {
        // determine nodes to evaluate
        std::vector<ComputationNodeBasePtr> evalNodes;
    }
    
        // sparse matrix size is optionally specified
    // ComputationNodePtr CreateSparseLearnableParameter(const std::wstring & paramName, const size_t rows, const size_t cols, const size_t size = 0);
    ComputationNodePtr CreateInputNode(const std::wstring& inputName, const size_t rows, const wstring& dynamicAxisName = L'');
    ComputationNodePtr CreateSparseInputNode(const std::wstring& inputName, const size_t rows, const wstring& dynamicAxisName = L'');
    shared_ptr<ComputationNode<ElemType>> CreateInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName = L'')
    {
        return this->template TypedCreateInputNode<ElemType>(inputName, sampleLayout, dynamicAxisName);
    }
    template<class ValueType>
    shared_ptr<ComputationNode<ValueType>> TypedCreateInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName);
    shared_ptr<ComputationNode<ElemType>> CreateSparseInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName = L'')
    {
        return this->template TypedCreateSparseInputNode<ElemType>(inputName, sampleLayout, dynamicAxisName);
    }
    template<class ValueType>
    shared_ptr<ComputationNode<ValueType>> TypedCreateSparseInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName);
    ComputationNodePtr CreateConvolutionNode(const std::wstring& nodeName, const TensorShape& kernelShape, const TensorShape& mapCount, const TensorShape& strideShape,
                                             const std::vector<bool>& sharing, const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad,
                                             bool transpose, const TensorShape& outputShape, ImageLayoutKind imageLayout, size_t maxTempMemSizeInSamples);
    ComputationNodePtr CreateConvolutionNode(const std::wstring& nodeName, const size_t kernelWidth, const size_t kernelHeight, const size_t outputChannels, 
                                             const size_t horizontalSubsample, const size_t verticalSubsample, 
                                             ImageLayoutKind imageLayoutKind, const bool zeroPadding = false, const size_t maxTempMemSizeInSamples = 0);
    ComputationNodePtr CreatePoolingNode(const std::wstring& nodeName, PoolKind poolKind, const TensorShape& kernelShape, const TensorShape& strideShape,
                                         const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad, bool ceilOutDim,
                                         const bool includePad, ImageLayoutKind imageLayout);
    ComputationNodePtr CreateMaxPoolingNode(const std::wstring& nodeName, const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind);
    ComputationNodePtr CreateAveragePoolingNode(const std::wstring& nodeName, const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind);
    ComputationNodePtr CreateROIPoolingNode(const std::wstring& nodeName, PoolKind poolKind, const TensorShape& roiOutputShape, double spatialScale);
    ComputationNodePtr CreateReconcileDynamicAxisNode(const std::wstring& nodeName);
    // this is the catch-all for all cases not covered as special cases above
    // Unlike the specialized ones above, this one creates nodes by type given as a string.
    ComputationNodePtr CreateComputationNode(const std::wstring& nodeType, const std::wstring& nodeName);
    // The following functions create nodes and link them to the network and their inputs.
    // TODO: Do we need both this set and the one above that does not add inputs? Can they share more code?
    ComputationNodePtr BatchNormalization(const ComputationNodePtr input, const ComputationNodePtr scale, const ComputationNodePtr bias,
                                          const ComputationNodePtr runMean, const ComputationNodePtr runVariance, const ComputationNodePtr runSampleCount,
                                          bool spatial = false, double normalizationTimeConstant = 0, double blendTimeConstant = 0, double epsilon = 1e-5, bool useCntkEngine = true,
                                          bool disableRegularization = false, ImageLayoutKind imageLayoutKind = ImageLayoutKind::CHW, const std::wstring nodeName = L'');
    ComputationNodePtr Convolution(const ComputationNodePtr weight,
                                   const ComputationNodePtr inputValues,
                                   const size_t kernelWidth, const size_t kernelHeight, const size_t outputChannels,
                                   const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind,
                                   const bool zeroPadding = false, const size_t maxTempMemSizeInSamples = 0,
                                   const std::wstring nodeName = L'');
    ComputationNodePtr Convolution(const ComputationNodePtr weight,
                                   const ComputationNodePtr inputValues,
                                   const TensorShape& kernelShape, const TensorShape& mapCount, const TensorShape& strideShape,
                                   const std::vector<bool>& sharing, const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad,
                                   bool transpose, const TensorShape& outputShape, ImageLayoutKind imageLayout, size_t maxTempMemSizeInSamples,
                                   const std::wstring nodeName = L'');
    ComputationNodePtr Pooling(const ComputationNodePtr inputValues, 
                               PoolKind poolKind, const TensorShape& kernelShape, const TensorShape& strideShape,
                               const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad, bool ceilOutDim, const bool includePad,
                               ImageLayoutKind imageLayout,
                               const std::wstring nodeName = L'');
    ComputationNodePtr MaxUnpooling(const ComputationNodePtr unpoolInputValues,
                                    const ComputationNodePtr poolInputValues,
                                    const TensorShape& kernelShape, const TensorShape& strideShape,
                                    const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad,
                                    ImageLayoutKind imageLayout,
                                    const std::wstring nodeName = L'');
    ComputationNodePtr MaxPooling(const ComputationNodePtr inputValues,
                                  const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind,
                                  const std::wstring nodeName = L'');
    ComputationNodePtr AveragePooling(const ComputationNodePtr inputValues,
                                      const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind,
                                      const std::wstring nodeName = L'');
    ComputationNodePtr ROIPooling(const ComputationNodePtr inputValues, const ComputationNodePtr inputROIs, PoolKind poolKind, const TensorShape& roiOutputShape, double spatialScale, const std::wstring nodeName = L'');
    ComputationNodePtr ReconcileDynamicAxis(const ComputationNodePtr dataInput, const ComputationNodePtr layoutInput, const std::wstring nodeName = L'');
    
      void next() {
    if (m_first) {
      m_out << '[';
      m_first = false;
    } else {
      m_out << ',';
    }
  }
    
      bool isPropSupported(const String& name);
    
    namespace HPHP { namespace alloc {
    }
    }
    
    // These helpers are shared by an FB-specific extension.
Class* get_cls(const Variant& class_or_object);
const Func* get_method_func(const Class* cls, const String& meth_name);
Variant default_arg_from_php_code(const Func::ParamInfo& fpi, const Func* func,
                                  unsigned argIdx);
bool resolveDefaultParameterConstant(const char *value, int64_t valueLen,
                                     Variant &cns);
    
    
    {
    {  if (!ad->isZombie()) {
    auto const elms = ad->data();
    auto const used = ad->m_used;
    for (uint32_t i = 0; i < used; ++i) {
      auto& elm = elms[i];
      if (UNLIKELY(elm.isTombstone())) continue;
      assertx(!elm.isEmpty());
      if (elm.hasStrKey()) {
        auto const skey = elm.strKey();
        assertx(!skey->isRefCounted());
        if (skey->isUncounted()) {
          skey->registerUncountedAllocation(rootAPCHandle);
        }
      }
    }
  }
  assertx(RuntimeOption::EvalGCForAPC);
  APCGCManager::getInstance().registerAllocation(ad,
                                        (char*)ad + ad->heapSize(),
                                        rootAPCHandle);
}
//////////////////////////////////////////////////////////////////////
}

    
    
    {  enum class RefCheckResult {
    Pass, // No refs
    Fail, // Referenced ref
    Collapse // Non-referenced ref
  };
  static RefCheckResult CheckForRefs(const ArrayData*);
};
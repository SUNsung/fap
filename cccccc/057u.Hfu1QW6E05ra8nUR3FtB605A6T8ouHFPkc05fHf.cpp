
        
        cv::Mat dls::LeftMultVec(const cv::Mat& v)
{
    cv::Mat mat_ = cv::Mat::zeros(3, 9, CV_64F);
    }
    
    
    {    // temporary solution, have to make something more precise
    corner = contour[min_idx];
    return;
}
    
            if (lane < 16)
        {
            T partial = ptr[tid];
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    /*
 * Vlabel wraps a block number.
 */
DECLARE_VNUM(Vlabel, true, 'B');
    
      std::vector<LdSSwitchData::Elm> cases(numCases);
  for (int i = 0; i < numCases; ++i) {
    auto const& kv = iv.strvec()[i];
    cases[i].str  = curUnit(env)->lookupLitstrId(kv.str);
    cases[i].dest = SrcKey{curSrcKey(env), bcOff(env) + kv.dest};
  }
    
    //////////////////////////////////////////////////////////////////////
    
    
void Instruction::SetBranchImmTarget(Instruction* target) {
  assert(((target - this) & 3) == 0);
  Instr branch_imm = 0;
  uint32_t imm_mask = 0;
  int offset = (target - this) >> kInstructionSizeLog2;
  switch (BranchType()) {
    case CondBranchType: {
      branch_imm = Assembler::ImmCondBranch(offset);
      imm_mask = ImmCondBranch_mask;
      break;
    }
    case UncondBranchType: {
      branch_imm = Assembler::ImmUncondBranch(offset);
      imm_mask = ImmUncondBranch_mask;
      break;
    }
    case CompareBranchType: {
      branch_imm = Assembler::ImmCmpBranch(offset);
      imm_mask = ImmCmpBranch_mask;
      break;
    }
    case TestBranchType: {
      branch_imm = Assembler::ImmTestBranch(offset);
      imm_mask = ImmTestBranch_mask;
      break;
    }
    default: not_reached();
  }
  SetInstructionBits(Mask(~imm_mask) | branch_imm);
}
    
    bool get_embedded_data(const char* section, embedded_data* desc,
                       const std::string& filename = '');
    
      static FILE *popen(const char *cmd, const char *type,
                     const char *cwd = nullptr);
  static int pclose(FILE *f);
    
            std::map<wstring, shared_ptr<IStatefulNode>> EnumerateStatefulNode(ComputationNetwork& net,
                                                                           const std::vector<ComputationNodeBasePtr>& criterionNode,
                                                                           const std::vector<ComputationNodeBasePtr>& evaluationNode)
        {
            std::map<wstring, shared_ptr<IStatefulNode>> statefulNodes;
            for (auto& root : criterionNode)
                EnumerateStatefulNodesForRoot(net, root, statefulNodes);
            for (auto& root : evaluationNode)
                EnumerateStatefulNodesForRoot(net, root, statefulNodes);
            return statefulNodes;
        }
    
        const OperatorSchema* OpSchemaRegistry::Schema(
        const std::string& p_key,
        const int p_maxInclusiveVersion,
        const std::string& p_domain)
    {
        auto& m = map();
        if (m.count(p_key) && m[p_key].count(p_domain))
        {
            auto pos = m[p_key][p_domain].lower_bound(p_maxInclusiveVersion);
            if (m[p_key][p_domain].begin() == pos && pos->first > p_maxInclusiveVersion)
            {
                // All versions are greater than specified version.
                return nullptr;
            }
    }
    }
    
        REGISTER_ELEMENTWISE_BROADCAST_OPERATOR_SCHEMA(Add)
        REGISTER_ELEMENTWISE_BROADCAST_OPERATOR_SCHEMA(Sub)
        REGISTER_ELEMENTWISE_BROADCAST_OPERATOR_SCHEMA(Mul)
        REGISTER_ELEMENTWISE_BROADCAST_OPERATOR_SCHEMA(Div)
    
        virtual void CopyTo(ComputationNodeBasePtr nodeP, const std::wstring& newName, const CopyNodeFlags flags) const override
    {
        Base::CopyTo(nodeP, newName, flags);
    }
    
        // Let's check that there is no outstanding copies.
    // Wait on all events if there are any pending copy operations in flight.
    if (m_dataTransferers[m_currentDataTransferIndex])
        m_dataTransferers[m_currentDataTransferIndex]->WaitForCopyCPUToGPU();
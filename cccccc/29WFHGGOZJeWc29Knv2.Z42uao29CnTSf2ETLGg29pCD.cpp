
        
                    // second, get data from reader, stored it in cache
            // 1. for each key, allocate the specific matrix on device
            for (auto& pa : inputMatrices)
            {
                const wstring& name = pa.first;
                const auto& input = pa.second;
                auto& M = input.GetMatrix<ElemType>();
                if (m_inputMatricesCache.find(name) == m_inputMatricesCache.end())
                    m_inputMatricesCache.AddInput(name, make_shared<Matrix<ElemType>>(M, M.GetDeviceId()), input.pMBLayout, input.sampleLayout); // deep copy from M
                else
                    m_inputMatricesCache.GetInputMatrix<ElemType>(name).SetValue(M);
            }
            // 2. MBlayout
            m_MBLayoutCache->CopyFrom(net.GetMBLayoutPtrOfNetwork());
            size_t nParallelSequences = m_MBLayoutCache->GetNumParallelSequences();
    
        // fetch entire object into the cache
    // Does this really make sense?? Should be rather done during computation.
    void prefetch() const
    {
        const msra::math::float4 *p2 = (msra::math::float4 *) this->p;
        size_t numfloat4s = cols() * colstride / 4;
        const msra::math::float4 *q = p2 + numfloat4s;
        const size_t cacherowbytes = 64; // or what?
        const size_t cacherowfloat4s = cacherowbytes / sizeof(*p2);
        for (; p2 < q; p2 += cacherowfloat4s)
            msra::math::float4::prefetch(p2);
    }
    
            ComputationNodeBasePtr toNode = CopyNode(fromNet, fromNodeName,
                                                 toNodeName,
                                                 CopyNodeFlags::copyNodeValue);
    
    BOOST_FIXTURE_TEST_CASE(MatrixSparseElementWisePower, RandomSeedFixture)
{
    Matrix<float> mAdense(c_deviceIdZero);
    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -3.0f, 0.1f, IncrementCounter()), 0);
    Matrix<float> mAsparse(mAdense.DeepClone());
    mAsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    }
    
        // find all the  BN nodes by evalOrder
    std::vector<ComputationNodeBasePtr> bnNodes;
    std::set<ComputationNodeBasePtr> bnNodesLogged; // (avoid double record of batch normalization nodes)
    for (auto& evalNode : evalNodes)
    {
        for (auto& node : m_net->GetEvalOrder(evalNode))
        {
            let bnNode = dynamic_pointer_cast<BatchNormalizationNode<ElemType>>(node);
            if (bnNode)
            {
                if (bnNodesLogged.insert(node).second)
                {
                    // reset the statistics states of bn nodes
                    bnNode->ResetStatisticsState();
                    bnNode->SetNormalizationTimeConstants(-1, bnNode->NormalizationTimeConstant(),
                        0, bnNode->BlendTimeConstant());
                    bnNodes.push_back(node);
                    // add BN nodes into the evaluation group, then they will be added into root nodes when
                    // the network re-compile
                    m_net->AddToNodeGroup(L'evaluation', bnNode);
                }
            }
        }
    }
    
        // ProcessNDLScript - Process the NDL script
    // script - NDL Script to process
    // ndlPassUntil - complete processing through this pass, all passes if ndlPassAll
    // skipThrough - [in/out] for iterative processing, a pointer to an array of NDLNode*, one for each pass
    //               the pointer will be updated to last node processed for that pass, can be NULL if all node processing is desired
    // fullValidate - validate as a complete network? (false if this might be a snippet of a full network)
    void ProcessNDLScript(NDLScript<ElemType>* script, NDLPass ndlPassUntil = ndlPassAll, NDLNode<ElemType>** skipThrough = nullptr, bool fullValidate = false, const std::wstring& dumpFileName = L'')
    {
        // if we don't have a script yet, don't bother
        if (script == nullptr)
            return;
    }
    
    template void DoConvertFromDbn<float>(const ConfigParameters& config);
template void DoConvertFromDbn<double>(const ConfigParameters& config);
template void DoExportToDbn<float>(const ConfigParameters& config);
template void DoExportToDbn<double>(const ConfigParameters& config);

    
    
    {private:
    size_t sourceFileAsIndex; // source file is remembered in the value struct as an index into the static sourceFileMap[]
    // the meaning of the 'sourceFile' index is global, stored in this static map
    static vector<SourceFile> sourceFileMap;
};
    
    
    {
    {
    {}}}

    
        bool haslattice(std::wstring key) const
    {
#ifdef NONUMLATTICEMMI
        return denlattices.haslattice(key);
#else
        return numlattices.haslattice(key) && denlattices.haslattice(key);
#endif
    }
    
    // ---------------------------------------------------------------------------
// hardcoded_array -- wraps a fixed-size C array together with its size.
//
// operator[] checks index bounds in Debug builds. size() is provided such
// that this class can be substituted for STL vector in many cases.
// Can be constructed with a size parameter--it will be checked against the
// hard-coded size.
// Can also be constructed with an initialization parameter (typ. 0).
// ---------------------------------------------------------------------------
    
        // return the horizontal sum of all 4 components
    // ... return float4, use another mechanism to store the low word
    float sum() const
    {
        float4 hsum = _mm_hadd_ps(v, v);
        hsum = _mm_hadd_ps(hsum, hsum);
        return hsum.f0();
    }
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect'', nullptr);
        return 0;
    }
#endif
    
    
    
    
    
    
    
    	enum
	{
		e_count = 30
	};
    
    			b2Body* prevBody = ground;
			for (int32 i = 0; i < e_count; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position.Set(-4.5f + 1.0f * i, 5.0f);
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&fd);
    }
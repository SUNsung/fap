
        
            NDLBuilderImpl(ComputationNetworkPtr computationNetwork)
    {
        m_computationNetwork = computationNetwork;
        m_nodeEvaluator = new NDLNodeEvaluatorImpl<ElemType>(m_computationNetwork);
    }
    
    // CheckFunction - check to see if we match a function name
// string1 - [in,out] string to compare, if comparision is equal and at least half the full node name will replace with full node name
// allowUndeterminedVariable - [out] set to true if undetermined variables (symbols yet to be defined) are allowed here
// return - true if function name found
bool CheckFunction(std::string& p_nodeType, bool* allowUndeterminedVariable)
{
    if (allowUndeterminedVariable)
        *allowUndeterminedVariable = true; // be default we allow undetermined variables
    }
    
            if (des->OperationName() == OperationNameOf(PastValueNode) || des->OperationName() == L'Delay')
        {
            // special treament for arc with PastValue node as the children
            // create a dummy node
            ComputationNodeBasePtr pastValueNode = des;
            wstring dummyName = des->GetName() + L'.dummy';
            wstring out = msra::strfun::wstrprintf(L'node [ shape = box3d  , color = lightgray, style = \'filled\' , label = \'%ls\' ] ; \'%ls\'\n',
                                                   (pastValueNode->GetName() + L'\\n(PastValue)').c_str(),
                                                   dummyName.c_str());
            line = out;
            line += msra::strfun::wstrprintf(L'\'%ls\' -> \'%ls\' ; \n', dummyName.c_str(), srcname.c_str());
        }
        else if (des->OperationName() == OperationNameOf(FutureValueNode))
        {
            // special treament for arc with FutureValue node as the children
            // create a dummy node
            ComputationNodeBasePtr futureValueNode = des;
            wstring dummyName = des->GetName() + L'.dummy';
            wstring out = msra::strfun::wstrprintf(L'node [ shape = box3d  , color = red, style = \'filled\' , label = \'%ls\' ] ; \'%ls\'\n',
                                                   (futureValueNode->GetName() + L'\\n(FutureValue)').c_str(),
                                                   dummyName.c_str());
            line = out;
            line += msra::strfun::wstrprintf(L'\'%ls\' -> \'%ls\' ; \n', dummyName.c_str(), srcname.c_str());
        }
        else
        {
            line = msra::strfun::wstrprintf(L'\'%ls\' -> \'%ls\' ; \n', desname.c_str(), srcname.c_str());
        }
    
            ValueContainer<ElemType>& vec = outputs[i2].m_buffer;
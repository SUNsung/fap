
        
            KeyChord::KeyChord(Settings::KeyModifiers const& modifiers, int32_t vkey) :
        _modifiers{ modifiers },
        _vkey{ vkey }
    {
    }
    
    SECP256K1_INLINE static void secp256k1_fe_mul_inner(uint64_t *r, const uint64_t *a, const uint64_t * SECP256K1_RESTRICT b) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            r15:rcx = d
 *            r10-r14 = a0-a4
 *            rbx     = b
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    }
    
    
    {    secp256k1_ecdsa_recoverable_signature_load(ctx, &r, &s, &recid, signature);
    VERIFY_CHECK(recid >= 0 && recid < 4);  /* should have been caught in parse_compact */
    secp256k1_scalar_set_b32(&m, msg32, NULL);
    if (secp256k1_ecdsa_sig_recover(&ctx->ecmult_ctx, &r, &s, &q, &m, recid)) {
        secp256k1_pubkey_save(pubkey, &q);
        return 1;
    } else {
        memset(pubkey, 0, sizeof(*pubkey));
        return 0;
    }
}
    
        UniValue v3;
    BOOST_CHECK(v3.setNumStr('32482348723847471234'));
    BOOST_CHECK_THROW(v3.get_int64(), std::runtime_error);
    BOOST_CHECK(v3.setNumStr('1000'));
    BOOST_CHECK_EQUAL(v3.get_int64(), 1000);
    
        mov	SRND, 2
loop2:
    paddd	X0, [TBL + 0*16]
    movdqa	[rsp + _XFER], X0
    DO_ROUND	0
    DO_ROUND	1
    DO_ROUND	2
    DO_ROUND	3
    paddd	X1, [TBL + 1*16]
    movdqa	[rsp + _XFER], X1
    add	TBL, 2*16
    DO_ROUND	0
    DO_ROUND	1
    DO_ROUND	2
    DO_ROUND	3
    
        cudaDeviceSynchronize();
    size_t numRanks = mpi->NumNodesInUse();
    
            if (pass == ndlPassInitial)
        {
            if (parameter.size() == 2 || parameter.size() == 3)
            {
                auto reqParams = node->GetParameters(false);
                auto optParams = node->GetParameters(true);
                auto paramGetter = [reqParams, node](size_t index) -> TensorShape
                {
                    assert(index < reqParams.size());
                    auto parm = reqParams[index];
                    if (parm->GetType() != ndlTypeArray)
                        return TensorShape((size_t)parm->GetScalar());
                    auto parms = node->GetParentScript()->ParseVariable(parm->GetValue(), false)->GetParameters();
                    vector<size_t> dims(parms.size());
                    for (size_t i = 0; i < dims.size(); i++)
                        dims[i] = parms[i]->GetValue();
                    return TensorShape(dims);
                };
                auto paramResolver = [optParams, node](const char* name, size_t defaultVal) -> TensorShape
                {
                    auto res = std::find_if(begin(optParams), end(optParams), [name](const NDLNode<ElemType>* n) { return EqualCI(n->GetName(), name); });
                    if (res == end(optParams))
                        return TensorShape(defaultVal);
                    auto parm = node->GetParentScript()->ParseVariable((*res)->GetValue(), false);
                    if (parm->GetType() == ndlTypeConstant)
                        return TensorShape((size_t)parm->GetValue());
                    auto parms = parm->GetParameters();
                    vector<size_t> dims(parms.size());
                    for (size_t i = 0; i < dims.size(); i++)
                        dims[i] = parms[i]->GetValue();
                    return TensorShape(dims);
                };
                auto boolParamResolver = [&optParams, node](const char* name, bool defaultVal) -> vector<bool>
                {
                    auto res = std::find_if(begin(optParams), end(optParams), [name](const NDLNode<ElemType>* n) { return EqualCI(n->GetName(), name); });
                    if (res == end(optParams))
                        return vector<bool>{defaultVal};
                    auto parm = node->GetParentScript()->ParseVariable((*res)->GetValue(), false);
                    if (parm == nullptr)
                        return vector<bool>{(*res)->GetValue()};
                    if (parm->GetType() != ndlTypeArray)
                        return vector<bool>{parm->GetValue()};
                    auto parms = parm->GetParameters();
                    vector<bool> dims(parms.size());
                    for (size_t i = 0; i < dims.size(); i++)
                        dims[i] = parms[i]->GetValue();
                    return dims;
                };
    }
    }
    
    template<typename ElemType>
VariableSchema CNTKEvalExtended<ElemType>::GetInputSchema() const
{
    VariableSchema inputLayouts;
    auto nodes = m_inputNodes;
    if (nodes.size() == 0)
    {
        // Default to all nodes
        nodes = this->m_net->InputNodesForOutputs({});
    }
    }
    
            int i = 0;
        for (auto nodeIter = learnableNodes.begin(); nodeIter != learnableNodes.end(); nodeIter++, i++)
        {
            ComputationNodePtr node = dynamic_pointer_cast<ComputationNode<ElemType>>(*nodeIter);
            Matrix<ElemType> &mat = node->Value();
            size_t layerSize = mat.GetNumElements();
    }
    
    private:
    // Perform aysnchronous gradient aggregation using double buffering of the gradient matrices
    bool m_useAsyncAggregation;
    
    // Prints a (const) char/wchar_t array of 'len' elements, starting at address
// 'begin'.  CharType must be either char or wchar_t.
template <typename CharType>
GTEST_ATTRIBUTE_NO_SANITIZE_MEMORY_
GTEST_ATTRIBUTE_NO_SANITIZE_ADDRESS_
GTEST_ATTRIBUTE_NO_SANITIZE_HWADDRESS_
GTEST_ATTRIBUTE_NO_SANITIZE_THREAD_
static void UniversalPrintCharArray(
    const CharType* begin, size_t len, ostream* os) {
  // The code
  //   const char kFoo[] = 'foo';
  // generates an array of 4, not 3, elements, with the last one being '\0'.
  //
  // Therefore when printing a char array, we don't print the last element if
  // it's '\0', such that the output matches the string literal as it's
  // written in the source code.
  if (len > 0 && begin[len - 1] == '\0') {
    PrintCharsAsStringTo(begin, len - 1, os);
    return;
  }
    }
    
      // In order to test the leak detector, we deliberately leak foo1 and
  // foo2.
    
    
    {  foo_.Bar2(2, 2);  // Expected call.
  foo_.Bar2(2, 2);  // Excessive call, takes default action #1.
  foo_.Bar2(1, 1);  // Expected call.
  foo_.Bar2(1, 1);  // Excessive call, takes default action #2.
}
    
    
    {}  // namespace
    
      if (strcmp(flag, 'death_test_style') == 0) {
    cout << GTEST_FLAG(death_test_style);
    return;
  }
    
    using ::testing::AddGlobalTestEnvironment;
using ::testing::Bool;
using ::testing::Combine;
using ::testing::Message;
using ::testing::Range;
using ::testing::TestWithParam;
using ::testing::Values;
using ::testing::ValuesIn;
    
    TEST(OverloadedMockMethodTest, CanOverloadOnArgNumberInMacroBody) {
  MockOverloadedOnArgNumber mock;
  EXPECT_CALL(mock, Overloaded());
  EXPECT_CALL(mock, Overloaded(1)).WillOnce(Return(2));
  EXPECT_CALL(mock, Overloaded(true, 1)).WillOnce(Return(true));
    }
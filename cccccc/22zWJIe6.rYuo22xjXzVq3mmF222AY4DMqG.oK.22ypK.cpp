
        
        SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
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
    'movq $0xfffffffffffff,%%r15\n'
    }
    
    int secp256k1_ecdsa_sign_recoverable(const secp256k1_context* ctx, secp256k1_ecdsa_recoverable_signature *signature, const unsigned char *msg32, const unsigned char *seckey, secp256k1_nonce_function noncefp, const void* noncedata) {
    secp256k1_scalar r, s;
    secp256k1_scalar sec, non, msg;
    int recid;
    int ret = 0;
    int overflow = 0;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(secp256k1_ecmult_gen_context_is_built(&ctx->ecmult_gen_ctx));
    ARG_CHECK(msg32 != NULL);
    ARG_CHECK(signature != NULL);
    ARG_CHECK(seckey != NULL);
    if (noncefp == NULL) {
        noncefp = secp256k1_nonce_function_default;
    }
    }
    
        /* Check bad contexts and NULLs for signing */
    ecount = 0;
    CHECK(secp256k1_ecdsa_sign_recoverable(none, &recsig, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(sign, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(vrfy, &recsig, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, NULL, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 3);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, NULL, privkey, NULL, NULL) == 0);
    CHECK(ecount == 4);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, NULL, NULL, NULL) == 0);
    CHECK(ecount == 5);
    /* This will fail or succeed randomly, and in either case will not ARG_CHECK failure */
    secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, recovery_test_nonce_function, NULL);
    CHECK(ecount == 5);
    /* These will all fail, but not in ARG_CHECK way */
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, zero_privkey, NULL, NULL) == 0);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, over_privkey, NULL, NULL) == 0);
    /* This one will succeed. */
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 5);
    
    BOOST_AUTO_TEST_SUITE_END()
    
    void InternalKeyComparator::FindShortSuccessor(std::string* key) const {
  Slice user_key = ExtractUserKey(*key);
  std::string tmp(user_key.data(), user_key.size());
  user_comparator_->FindShortSuccessor(&tmp);
  if (tmp.size() < user_key.size() &&
      user_comparator_->Compare(user_key, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*key, tmp) < 0);
    key->swap(tmp);
  }
}
    
    // Filter policy wrapper that converts from internal keys to user keys
class InternalFilterPolicy : public FilterPolicy {
 private:
  const FilterPolicy* const user_policy_;
 public:
  explicit InternalFilterPolicy(const FilterPolicy* p) : user_policy_(p) { }
  virtual const char* Name() const;
  virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const;
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const;
};
    
      // When start user key is prefix of limit user key
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foobar', 200, kTypeValue)));
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
    // If filename is a leveldb file, store the type of the file in *type.
// The number encoded in the filename is stored in *number.  If the
// filename was successfully parsed, returns true.  Else return false.
extern bool ParseFileName(const std::string& filename,
                          uint64_t* number,
                          FileType* type);
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
    uint32_t
RuleBasedCollator::setVariableTop(const UChar *varTop, int32_t len, UErrorCode &errorCode) {
    if(U_FAILURE(errorCode)) { return 0; }
    if(varTop == NULL && len !=0) {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return 0;
    }
    if(len < 0) { len = u_strlen(varTop); }
    if(len == 0) {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return 0;
    }
    UBool numeric = settings->isNumeric();
    int64_t ce1, ce2;
    if(settings->dontCheckFCD()) {
        UTF16CollationIterator ci(data, numeric, varTop, varTop, varTop + len);
        ce1 = ci.nextCE(errorCode);
        ce2 = ci.nextCE(errorCode);
    } else {
        FCDUTF16CollationIterator ci(data, numeric, varTop, varTop, varTop + len);
        ce1 = ci.nextCE(errorCode);
        ce2 = ci.nextCE(errorCode);
    }
    if(ce1 == Collation::NO_CE || ce2 != Collation::NO_CE) {
        errorCode = U_CE_NOT_FOUND_ERROR;
        return 0;
    }
    setVariableTop((uint32_t)(ce1 >> 32), errorCode);
    return settings->variableTop;
}
    
    #define LOW_A             ((UChar)0x0061)
#define LOW_B             ((UChar)0x0062)
#define LOW_C             ((UChar)0x0063)
#define LOW_D             ((UChar)0x0064)
#define LOW_E             ((UChar)0x0065)
#define LOW_F             ((UChar)0x0066)
#define LOW_G             ((UChar)0x0067)
#define LOW_H             ((UChar)0x0068)
#define LOW_I             ((UChar)0x0069)
#define LOW_J             ((UChar)0x006a)
#define LOW_K             ((UChar)0x006B)
#define LOW_L             ((UChar)0x006C)
#define LOW_M             ((UChar)0x006D)
#define LOW_N             ((UChar)0x006E)
#define LOW_O             ((UChar)0x006F)
#define LOW_P             ((UChar)0x0070)
#define LOW_Q             ((UChar)0x0071)
#define LOW_R             ((UChar)0x0072)
#define LOW_S             ((UChar)0x0073)
#define LOW_T             ((UChar)0x0074)
#define LOW_U             ((UChar)0x0075)
#define LOW_V             ((UChar)0x0076)
#define LOW_W             ((UChar)0x0077)
#define LOW_X             ((UChar)0x0078)
#define LOW_Y             ((UChar)0x0079)
#define LOW_Z             ((UChar)0x007A)
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::Atan(const ComputationNodePtr a, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<AtanNode<ElemType>>(net.GetDeviceId(), nodeName), { a });
}
    
           void LoadParameters(File& f, map<wstring, shared_ptr<Matrix<ElemType>>>& parameters, DEVICEID_TYPE deviceID)
       {
           unsigned int size = 0;
           unsigned int pair = 0;
           f >> size;
           f >> pair;
           if (size != sizeof(ElemType))
           {
               LogicError('Mismatched ElemType in loading BlockMomentumSGD checkpoint. Expecting %s, while loading element size=%d\n',
                   sizeof(ElemType) == 4 ? 'float' : 'double',
                   size
                   );
           }
           parameters.clear();
           for (size_t i = 0; i < pair; i++)
           {
               wstring name;
               f >> name;
               shared_ptr<Matrix<ElemType>> mat = make_shared<Matrix<ElemType>>(deviceID);
               f >> *mat;
               parameters[name] = mat;
           }
       }
    
        virtual ComputationNetworkPtr BuildNetworkFromDescription(ComputationNetwork* = nullptr)
    {
        if (m_net->GetTotalNumberOfNodes() < 1) // not built yet
            LoadNetworkFromConfig(m_networkConfig);
        else
            m_net->ResetEvalTimeStamps();
        return m_net;
    }
    
        // parallel training
    // The top-level 'parallelTrain' is a bool, not to be confused with the parallelTrain block inside SGD.
    shared_ptr<Microsoft::MSR::CNTK::MPIWrapper> mpi;
    auto ensureMPIWrapperCleanup = MakeScopeExit(&MPIWrapper::DeleteInstance);
    
    // when running under MPI with more than one node, use 'true' as the default value for parallelTrain,
    // 'false' otherwise.
    bool paralleltrain = config(L'parallelTrain', (EnvironmentUtil::GetTotalNumberOfMPINodes() > 1));
    
                // end + 1 - start = the length of the string, including opening and closing braces.
            std::size_t varLength = (end + 1 - start) - (openBraceVarSize + closingBraceVarSize);
            std::string varName = newConfigLine.substr(start + openBraceVarSize, varLength);
    
            node->Load(fstream, modelVersion);
    
        void ReleaseMatrixToPool(shared_ptr<Matrix<ElemType>>& matrixPtr, MatrixPool& matrixPool, bool aliasing = false)
    {
        TypedReleaseMatrixToPool<ElemType>(matrixPtr, matrixPool, aliasing);
    }
    
    #include 'Basics.h'
#include 'ComputationNetwork.h'
#include 'Config.h'
#include 'SGD.h'
#include 'Matrix.h'
#include 'MPIWrapper.h'
#include 'TimerUtility.h'
#include 'NcclComm.h'
#include <vector>
#include <string>
#include <stdexcept>
#include <chrono> 
#include <random>
    
            '       G1 = RowSlice(0, cellDim, wxxpbpwhh)\n'
        '       G2 = RowSlice(cellDim, cellDim, wxxpbpwhh)\n'
        '       G3 = RowSlice(cellDimX2, cellDim, wxxpbpwhh);\n'
        '   G4 = RowSlice(cellDimX3, cellDim, wxxpbpwhh);\n'
    
        // a few more handy operations that occurred multiple times
    bool IsNan() const { return std::isnan(first); }
    EpochCriterion operator-(const EpochCriterion& other) const { return EpochCriterion(first - other.first, second - other.second); }
    void operator+=(const EpochCriterion& other) { first += other.first; second += other.second; }
    
        // serialize the JSON objects
    std::cout << j_object_t << '\n';
    std::cout << j_map << '\n';
    std::cout << j_umap << '\n';
    std::cout << j_mmap << '\n';
    std::cout << j_ummap << '\n\n';
    
        template<typename T>
    std::string Point<T>::toString() const
    {
        try
        {
            return '[' + std::to_string(x) + ', ' + std::to_string(y) + ']';
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return '';
        }
    }

        
        #endif // BITCOIN_QT_MACDOCKICONHANDLER_H

    
    
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
    
    {    Lock& lock;
    Lock templock;
};
    
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
    
    static int recovery_test_nonce_function(unsigned char *nonce32, const unsigned char *msg32, const unsigned char *key32, const unsigned char *algo16, void *data, unsigned int counter) {
    (void) msg32;
    (void) key32;
    (void) algo16;
    (void) data;
    }
    
    BOOST_FIXTURE_TEST_SUITE(bech32_tests, BasicTestingSetup)
    
    
    {    // These inputs are valid because PROTOCOLINFO accepts an OtherLine that is
    // just an OptArguments, which enables multiple spaces to be present
    // between the command and arguments.
    CheckSplitTorReplyLine('COMMAND  ARGS', 'COMMAND', ' ARGS');
    CheckSplitTorReplyLine('COMMAND   EVEN+more  ARGS', 'COMMAND', '  EVEN+more  ARGS');
}
    
    
    {
    {        // For now reusing the shim to allow prefetch.
        // Please only use a subset of the shim interface that includes
        // Init()/StartEpoch()/GetMinibatch()/IsEndOfEpoch()
        // Shim will be deleted in the future versions.
        std::shared_ptr<ReaderShim<float>> m_shim;
        Microsoft::MSR::CNTK::StreamMinibatchInputs m_matrices;
    };
}

    
        // TODO: This could actually be strided?
    const MaskKind* NDMask::DataBuffer() const
    {
        // First make sure that the underlying matrix is on the right device
        auto matrix = GetMatrix();
        matrix->TransferToDeviceIfNotThere(AsCNTKImplDeviceId(m_device), true);
        return (const MaskKind*)(matrix->Data());
    }
    
    namespace CNTK
{
    const std::wstring versionKey = L'version';
    const std::wstring typeKey = L'type';
    const std::wstring uidKey = L'uid';
    const std::wstring kindKey = L'kind';
    const std::wstring dataTypeKey = L'data_type';
    const std::wstring dynamicAxisKey = L'dynamic_axis';
    const std::wstring isSparseKey = L'is_sparse';
    const std::wstring nameKey = L'name';
    const std::wstring needsGradientKey = L'needs_gradient';
    const std::wstring shapeKey = L'shape';
    const std::wstring valueKey = L'value';
    const std::wstring opKey = L'op';
    const std::wstring attributesKey = L'attributes';
    const std::wstring inputsKey = L'inputs';
    const std::wstring rootKey = L'root';
    const std::wstring functionsKey = L'primitive_functions';
    const std::wstring sampleCountKey = L'sample_count';
    const std::wstring minibatchCountKey = L'minibatchCount'; // TODO: Python-style spelling
    const std::wstring sweepCountKey = L'sweepCount';
    const std::wstring unitKey = L'unit';
    const std::wstring refMBSizeKey = L'ref_mb_size';
    const std::wstring epochSizeKey = L'epoch_size';
    const std::wstring scheduleKey = L'schedule';
    const std::wstring learningRateScheduleKey = L'learnig_rate_schedule';
    const std::wstring smoothedGradientsKey = L'smoothed_gradients';
    const std::wstring noiseInjectionSeedKey = L'noise_injection_seed';
    const std::wstring masterParameterUpdatedKey = L'master_parameter_updated';
    const std::wstring smoothedCountKey = L'smoothed_count';
    const std::wstring stateKey = L'state';
    const std::wstring rngSeedKey = L'rng_seed';
    const std::wstring rngOffsetKey = L'rng_offset';
    const std::wstring blockFunctionCompositeKey = L'block_function_composite';
    const std::wstring blockFunctionOpNameKey = L'block_function_op_name';
    const std::wstring blockFunctionCompositeArgumentsMapKeysKey = L'block_function_composite_arguments_map_keys';
    const std::wstring blockFunctionCompositeArgumentsMapValuesKey = L'block_function_composite_arguments_map_values';
    const std::wstring internalWorkerStateKey = L'internal_worker_state';
    const std::wstring externalWorkerStateKey = L'external_worker_state';
    const std::wstring userDefinedStateKey = L'user_defined_state';
    const std::wstring udfModuleNameKey = L'module';
    const std::wstring udfFactoryMethodNameKey = L'deserialize_method';
    const std::wstring nativeUDFKey = L'native';
    }
    
        Dictionary Trainer::RestoreFromCheckpoint(const std::wstring& modelFilePath)
    {
        // Restore the model's parameters
        m_combinedTrainingFunction->Restore(modelFilePath);
    }
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
    
            size_t rows1 = input1.GetNumRows(), cols1 = input1.GetNumCols();
        size_t cols0 = input0.GetNumCols();
    
    template <class charT, class traits>
bool basic_regex_parser<charT, traits>::parse_literal()
{
   // append this as a literal provided it's not a space character
   // or the perl option regbase::mod_x is not set:
   if(
      ((this->flags() 
         & (regbase::main_option_type|regbase::mod_x|regbase::no_perl_ex)) 
            != regbase::mod_x)
      || !this->m_traits.isctype(*m_position, this->m_mask_space))
         this->append_literal(*m_position);
   ++m_position;
   return true;
}
    
    template<>
struct regex_iterator_traits<char*> : pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<const char*> : const_pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<wchar_t*> : pointer_iterator_traits<wchar_t>{};
template<>
struct regex_iterator_traits<const wchar_t*> : const_pointer_iterator_traits<wchar_t>{};
//
// the follwoing are needed for ICU support:
//
template<>
struct regex_iterator_traits<unsigned char*> : pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<const unsigned char*> : const_pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<int*> : pointer_iterator_traits<int>{};
template<>
struct regex_iterator_traits<const int*> : const_pointer_iterator_traits<int>{};
    
       const_reference prefix() const
   {
      if(m_is_singular)
         raise_logic_error();
      return (*this)[-1];
   }
    
       // try and match a single character, could be a multi-character
   // collating element...
   for(i = 0; i < set_->csingles; ++i)
   {
      ptr = next;
      if(*p == static_cast<charT>(0))
      {
         // treat null string as special case:
         if(traits_inst.translate(*ptr, icase) != *p)
         {
            while(*p == static_cast<charT>(0))++p;
            continue;
         }
         return set_->isnot ? next : (ptr == next) ? ++next : ptr;
      }
      else
      {
         while(*p && (ptr != last))
         {
            if(traits_inst.translate(*ptr, icase) != *p)
               break;
            ++p;
            ++ptr;
         }
    }
    }
    
    #ifndef BOOST_REGEX_V4_PROTECTED_CALL_HPP
#define BOOST_REGEX_V4_PROTECTED_CALL_HPP
    
    
    {   // output varies depending upon whether sub-expression v matched or not:
   if(m_results[v].matched)
   {
      m_have_conditional = true;
      format_all();
      m_have_conditional = false;
      if((m_position != m_end) && (*m_position == static_cast<char_type>(':')))
      {
         // skip the ':':
         ++m_position;
         // save output state, then turn it off:
         output_state saved_state = m_state;
         m_state = output_none;
         // format the rest of this scope:
         format_until_scope_end();
         // restore output state:
         m_state = saved_state;
      }
   }
   else
   {
      // save output state, then turn it off:
      output_state saved_state = m_state;
      m_state = output_none;
      // format until ':' or ')':
      m_have_conditional = true;
      format_all();
      m_have_conditional = false;
      // restore state:
      m_state = saved_state;
      if((m_position != m_end) && (*m_position == static_cast<char_type>(':')))
      {
         // skip the ':':
         ++m_position;
         // format the rest of this scope:
         format_until_scope_end();
      }
   }
}
    
       ~raw_storage()
   {
      ::operator delete(start);
   }
    
    
    {
    {      // Record end time
      uint64_t end_time = env->NowMicros();
      double elapsed = static_cast<double>(end_time - start_time) * 1e-6;
      uint32_t qps = static_cast<uint32_t>(
          static_cast<double>(FLAGS_threads * FLAGS_ops_per_thread) / elapsed);
      fprintf(stdout, 'Complete in %.3f s; QPS = %u\n', elapsed, qps);
    }
    return true;
  }
    
      // Implementations of the DB interface
  using DB::Get;
  virtual Status Get(const ReadOptions& options,
                     ColumnFamilyHandle* column_family, const Slice& key,
                     PinnableSlice* value) override;
  using DB::MultiGet;
  virtual std::vector<Status> MultiGet(
      const ReadOptions& options,
      const std::vector<ColumnFamilyHandle*>&,
      const std::vector<Slice>& keys, std::vector<std::string>* values)
    override;
    
    namespace rocksdb {
    }
    
    class ChrootEnv : public EnvWrapper {
 public:
  ChrootEnv(Env* base_env, const std::string& chroot_dir)
      : EnvWrapper(base_env) {
#if defined(OS_AIX)
    char resolvedName[PATH_MAX];
    char* real_chroot_dir = realpath(chroot_dir.c_str(), resolvedName);
#else
    char* real_chroot_dir = realpath(chroot_dir.c_str(), nullptr);
#endif
    // chroot_dir must exist so realpath() returns non-nullptr.
    assert(real_chroot_dir != nullptr);
    chroot_dir_ = real_chroot_dir;
#if !defined(OS_AIX)
    free(real_chroot_dir);
#endif
  }
    }
    
    #if !defined(ROCKSDB_LITE) && !defined(OS_WIN)
    
    class DHTNode;
class DHTRoutingTable;
class DHTTaskQueue;
class DHTTaskFactory;
class DHTPeerAnnounceStorage;
class DHTTokenTracker;
class DHTMessageDispatcher;
class DHTMessageReceiver;
class DHTMessageFactory;
    
    void DHTReplaceNodeTask::startup() { sendMessage(); }
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
      char headerCompat[8];
  memset(headerCompat, 0, sizeof(headerCompat));
  // magic
  headerCompat[0] = 0xa1u;
  headerCompat[1] = 0xa2u;
  // format ID
  headerCompat[2] = 0x02u;
  // version
  headerCompat[6] = 0;
  headerCompat[7] = 0x02u;
    
    #include 'common.h'
    
    class DHTSetup {
public:
  DHTSetup();
    }
    
    
    {  virtual void addImmediateTask(const std::shared_ptr<DHTTask>& task) = 0;
};
    
    namespace {
const size_t NUM_CONCURRENT_TASK = 15;
} // namespace
    
    std::string DHTUnknownMessage::toString() const
{
  size_t sampleLength = 8;
  if (length_ < sampleLength) {
    sampleLength = length_;
  }
  return fmt('dht unknown Remote:%s(%u) length=%lu, first 8 bytes(hex)=%s',
             ipaddr_.c_str(), port_, static_cast<unsigned long>(length_),
             util::toHex(data_, sampleLength).c_str());
}
    
            // We don't care for comparison result here; the previous value will be stored into value anyway.
        // Also we don't care for rbx and rcx values, they just have to be equal to rax and rdx before cmpxchg16b.
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %%rbx, %%rax\n\t'
            'movq %%rcx, %%rdx\n\t'
            'lock; cmpxchg16b %[storage]\n\t'
            'movq %%rax, %[value]\n\t'
            'movq %%rdx, 8+%[value]\n\t'
            : [value] '=o' (value)
            : [storage] 'm' (storage)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory', 'rax', 'rdx'
        );
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %%rbx, %%rax\n\t'
            'movq %%rcx, %%rdx\n\t'
            'lock; cmpxchg16b %[storage]\n\t'
            'movq %%rax, 0(%[value])\n\t'
            'movq %%rdx, 8(%[value])\n\t'
            :
            : [storage] 'm' (storage), [value] 'r' (&value)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory', 'rax', 'rdx'
        );
#endif // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
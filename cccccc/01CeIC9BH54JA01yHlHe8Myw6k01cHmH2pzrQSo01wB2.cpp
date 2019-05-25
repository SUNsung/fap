
        
        namespace tensorflow {
    }
    
    
    {}  // namespace tensorflow

    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/core/framework/types.pb.h'
#include 'tensorflow/core/lib/core/status.h'
    
    PyObject* PyExceptionRegistry::Lookup(TF_Code code) {
  DCHECK(singleton_ != nullptr) << 'Must call PyExceptionRegistry::Init() '
                                   'before PyExceptionRegistry::Lookup()';
  DCHECK_NE(code, TF_OK);
  DCHECK(singleton_->exc_types_.find(code) != singleton_->exc_types_.end())
      << 'Unknown error code passed to PyExceptionRegistry::Lookup: ' << code;
  return singleton_->exc_types_[code];
}
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_FUNC_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_FUNC_H_
    
    namespace tensorflow {
    }
    
    #endif  // TENSORFLOW_STREAM_EXECUTOR_FFT_H_

    
      // Indicates a preference for more shared memory than L1 cache.
  kPreferShared,
    
        enum CONVERT_POLICY
    {
        CONVERT_POLICY_WRAP,
        CONVERT_POLICY_SATURATE
    };
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vqadd(v_src0, v_src1);
    }
    
        if (borderType == BORDER_MODE_CONSTANT)
        for (s32 k = 0; k < cn; ++k)
        {
            lanea[-cn+k] = borderValue;
            lanea[colsn+k] = borderValue;
            laneA[-cn+k] = borderValue;
            laneA[colsn+k] = borderValue;
            laneb[-cn+k] = borderValue;
            laneb[colsn+k] = borderValue;
            laneB[-cn+k] = borderValue;
            laneB[colsn+k] = borderValue;
        }
    
    #define IMPL_CMPOP(op, type)                              \
void cmp##op(const Size2D &size,                          \
             const type * src0Base, ptrdiff_t src0Stride, \
             const type * src1Base, ptrdiff_t src1Stride, \
                       u8 *dstBase, ptrdiff_t dstStride)  \
{                                                         \
    internal::assertSupportedConfiguration();             \
    vcompare(size,                                        \
             src0Base, src0Stride,                        \
             src1Base, src1Stride,                        \
             dstBase, dstStride,                          \
             OpCmp##op<type>());                          \
}
    
    #ifdef CAROTENE_NEON
#include <arm_neon.h>
#include 'intrinsics.hpp'
#endif
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s32, s8, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.32 {d0-d1}, [%[src1]]                              \n\t'
             'vld1.32 {d2-d3}, [%[src2]]                              \n\t'
             'vqmovn.s32 d4, q0                                       \n\t'
             'vqmovn.s32 d5, q1                                       \n\t'
             'vqmovn.s16  d6, q2                                      \n\t'
             'vst1.8 {d6}, [%[dst]]                                   \n\t'
             : /*no output*/
             : [src1] 'r' (_src + i + 0),
               [src2] 'r' (_src + i + 4),
               [dst] 'r' (_dst + i)
             : 'd0','d1','d2','d3','d4','d5','d6'
         );
     }
})
#else
CVT_FUNC(s32, s8, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         int32x4_t vline1_s32 = vld1q_s32(_src + i);
         int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
    }
    }
    
    
    {        for (; i < size.width; ++i)
            result += s32(src0[i]) * s32(src1[i]);
    }
    return result;
#else
    (void)_size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    
        if (elemSize == (u32)sizeof(u8))
        func = &flip<u8>;
    if (elemSize == (u32)sizeof(u16))
        func = &flip<u16>;
    if (elemSize == (u32)sizeof(u32))
        func = &flip<u32>;
    if (elemSize == (u32)sizeof(u8) * 3)
        func = &flip3<u8>;
    
        // the others
    for (size_t i = 1; i < size.height ; ++i)
    {
        src = internal::getRowPtr(srcBase, srcStride, i);
        u32 * prevSum = internal::getRowPtr(sumBase, sumStride, i - 1);
        sum = internal::getRowPtr(sumBase, sumStride, i);
    }
    
    inline float32x2_t vrsqrt_f32(float32x2_t val)
{
    float32x2_t e = vrsqrte_f32(val);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    return e;
}
    
        std::vector<u8> _tmp;
    u8 *tmp = 0;
    if (border == BORDER_MODE_CONSTANT)
    {
        _tmp.assign(cols + 4,borderValue);
        tmp = &_tmp[2];
    }
    
    void b2PolyNode::AddConnection(b2PolyNode& toMe){
	b2Assert(nConnected < MAX_CONNECTED);
	// Ignore duplicate additions
	for (int32 i=0; i<nConnected; ++i) {
		if (connected[i] == &toMe) return;
	}
	connected[nConnected] = &toMe;
	++nConnected;
}
    
    			a_pMipmapImages[mip].paucEncodingBits = std::shared_ptr<unsigned char>(image.GetEncodingBits(), [](unsigned char *p) { delete[] p; });
			a_pMipmapImages[mip].uiEncodingBitsBytes = image.GetEncodingBitsBytes();
			a_pMipmapImages[mip].uiExtendedWidth = image.GetExtendedWidth();
			a_pMipmapImages[mip].uiExtendedHeight = image.GetExtendedHeight();
    
    #endif /* OPUS_HAVE_RTCD */
    
    /** Compile-time conversion of float constant to 32-bit value */
#define QCONST32(x,bits) ((opus_val32)(.5+(x)*(((opus_val32)1)<<(bits))))
    
    /* (opus_int32)((opus_int16)(a32)) * (b32 >> 16) */
#undef silk_SMULBT
static OPUS_INLINE opus_int32 silk_SMULBT_armv5e(opus_int32 a, opus_int32 b)
{
  int res;
  __asm__(
      '#silk_SMULBT\n\t'
      'smulbt %0, %1, %2\n\t'
      : '=r'(res)
      : 'r'(a), 'r'(b)
  );
  return res;
}
#define silk_SMULBT(a, b) (silk_SMULBT_armv5e(a, b))
    
    namespace leveldb {
    }
    
      // Offset at which to start looking for the first record to return
  uint64_t const initial_offset_;
    
    template <typename Key, class Comparator>
typename SkipList<Key, Comparator>::Node* SkipList<Key, Comparator>::NewNode(
    const Key& key, int height) {
  char* const node_memory = arena_->AllocateAligned(
      sizeof(Node) + sizeof(std::atomic<Node*>) * (height - 1));
  return new (node_memory) Node(key);
}
    
    #include <stdint.h>
    
      void ReadMeta(const Footer& footer);
  void ReadFilter(const Slice& filter_handle_value);
    
    #include 'leveldb/export.h'
#include 'leveldb/status.h'
    
      size_t size() const { return size_; }
  Iterator* NewIterator(const Comparator* comparator);
    
    // A FilterBlockBuilder is used to construct all of the filters for a
// particular Table.  It generates a single string which is stored as
// a special block in the Table.
//
// The sequence of calls to FilterBlockBuilder must match the regexp:
//      (StartBlock AddKey*)* Finish
class FilterBlockBuilder {
 public:
  explicit FilterBlockBuilder(const FilterPolicy*);
    }
    
    
    {  // Write footer
  if (ok()) {
    Footer footer;
    footer.set_metaindex_handle(metaindex_block_handle);
    footer.set_index_handle(index_block_handle);
    std::string footer_encoding;
    footer.EncodeTo(&footer_encoding);
    r->status = r->file->Append(footer_encoding);
    if (r->status.ok()) {
      r->offset += footer_encoding.size();
    }
  }
  return r->status;
}
    
        ScopedHandle handle =
        ::CreateFileA(fname.c_str(), desired_access, share_mode, nullptr,
                      CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (!handle.is_valid()) {
      *result = nullptr;
      return WindowsError(fname, ::GetLastError());
    }
    
    
    {    return result;
}
    
    constexpr int C_NUM_MAX_DIGITS = MAX_STRLEN;
constexpr int C_EXP_MAX_DIGITS = 4;
    
        ResultCode GetString(_Out_ std::wstring* expression)
    {
        ResultCode hr = S_OK;
        unsigned int nTokens = 0;
        std::pair<std::wstring, int> currentPair;
        hr = this->GetSize(&nTokens);
        if (SUCCEEDED(hr))
        {
            for (unsigned int i = 0; i < nTokens; i++)
            {
                hr = this->GetAt(i, &currentPair);
                if (SUCCEEDED(hr))
                {
                    expression->append(currentPair.first);
    }
    }
    }
    }
    
            // No new command should not be added before CommandSign, 80
        // If it is needed, the following two functions need to be revised too.
        // CalculatorManager::MapCommandForSerialize(Command command);
        // CalculatorManager::MapCommandForDeSerialize(unsigned char command);
        CommandSIGN = 80,
        CommandCLEAR = 81,
        CommandCENTR = 82,
        CommandBACK = 83,
    
    
    {private:
    std::shared_ptr<CalculatorVector<int>> m_commands;
    bool m_fNegative;
    bool m_fSciFmt;
    bool m_fDecimal;
    bool m_fInitialized;
    std::wstring m_token;
    CalcEngine::Rational m_value;
    void ClearAllAndAppendCommand(CalculationManager::Command command);
};
    
    #include <string>
    
            // Inner state of the underlying reader.
        // Is set in the RestoreFromCheckpoint call and used in the next GetNextMinibatch
        // when the reader state is restored after the first StartEpoch call.
        Internal::Optional<Dictionary> m_state;
    
                m_samples.second += samples;
            m_updates.second++;
            m_totalUpdates++;
            
            if (ShouldWriteUpdate(m_updates.second))
            {
                // Time to output the accumulated updates.
                // Note that we take snapshot of the accumulated loss/metric only when we want to write.
                // We do it this way on purpose, since accumulated loss/metric may be stored on a GPU
                // and we want to minimize the number of GPU->CPU data transfers.
                if (accumulatedLoss)
                {
                    m_loss.second = accumulatedLoss->AsScalar<double>();
                }
    }
    
            static bool IsUDF(const Dictionary& dict);
    
        ParameterInitializer HeNormalInitializer(double scale, int outputRank, int filterRank, unsigned long seed)
    {
        return CreateInitializer(Microsoft::MSR::CNTK::HeNormalInitializerTypeName, scale, outputRank, filterRank, seed);
    }
    
    
    {        // resize the temporaries to their proper size
        size_t cols = Input(0)->Value().GetNumCols();
        m_maxIndexes0->Resize(m_topK, cols);
        m_maxIndexes1->Resize(m_topK, cols);
        m_maxValues->Resize(m_topK, cols);
    }
    
    
    {
    {}  // namespace obj
}  // namespace xgboost
    
    // implementing configure.
template<typename PairIter>
inline void ObjFunction::Configure(PairIter begin, PairIter end) {
  std::vector<std::pair<std::string, std::string> > vec(begin, end);
  this->Configure(vec);
}
    
    // beta version: NDCG lambda rank
class LambdaRankObjNDCG : public LambdaRankObj {
 protected:
  void GetLambdaWeight(const std::vector<ListEntry> &sorted_list,
                       std::vector<LambdaPair> *io_pairs) override {
    std::vector<LambdaPair> &pairs = *io_pairs;
    float IDCG;  // NOLINT
    {
      std::vector<bst_float> labels(sorted_list.size());
      for (size_t i = 0; i < sorted_list.size(); ++i) {
        labels[i] = sorted_list[i].label;
      }
      std::sort(labels.begin(), labels.end(), std::greater<bst_float>());
      IDCG = CalcDCG(labels);
    }
    if (IDCG == 0.0) {
      for (auto & pair : pairs) {
        pair.weight = 0.0f;
      }
    } else {
      IDCG = 1.0f / IDCG;
      for (auto & pair : pairs) {
        unsigned pos_idx = pair.pos_index;
        unsigned neg_idx = pair.neg_index;
        float pos_loginv = 1.0f / std::log2(pos_idx + 2.0f);
        float neg_loginv = 1.0f / std::log2(neg_idx + 2.0f);
        auto pos_label = static_cast<int>(sorted_list[pos_idx].label);
        auto neg_label = static_cast<int>(sorted_list[neg_idx].label);
        bst_float original =
            ((1 << pos_label) - 1) * pos_loginv + ((1 << neg_label) - 1) * neg_loginv;
        float changed  =
            ((1 << neg_label) - 1) * pos_loginv + ((1 << pos_label) - 1) * neg_loginv;
        bst_float delta = (original - changed) * IDCG;
        if (delta < 0.0f) delta = - delta;
        pair.weight *= delta;
      }
    }
  }
  inline static bst_float CalcDCG(const std::vector<bst_float> &labels) {
    double sumdcg = 0.0;
    for (size_t i = 0; i < labels.size(); ++i) {
      const auto rel = static_cast<unsigned>(labels[i]);
      if (rel != 0) {
        sumdcg += ((1 << rel) - 1) / std::log2(static_cast<bst_float>(i + 2));
      }
    }
    return static_cast<bst_float>(sumdcg);
  }
};
    
    void SimpleCSRSource::CopyFrom(dmlc::Parser<uint32_t>* parser) {
  // use qid to get group info
  const uint64_t default_max = std::numeric_limits<uint64_t>::max();
  uint64_t last_group_id = default_max;
  bst_uint group_size = 0;
  this->Clear();
  while (parser->Next()) {
    const dmlc::RowBlock<uint32_t>& batch = parser->Value();
    if (batch.label != nullptr) {
      auto& labels = info.labels_.HostVector();
      labels.insert(labels.end(), batch.label, batch.label + batch.size);
    }
    if (batch.weight != nullptr) {
      auto& weights = info.weights_.HostVector();
      weights.insert(weights.end(), batch.weight, batch.weight + batch.size);
    }
    if (batch.qid != nullptr) {
      info.qids_.insert(info.qids_.end(), batch.qid, batch.qid + batch.size);
      // get group
      for (size_t i = 0; i < batch.size; ++i) {
        const uint64_t cur_group_id = batch.qid[i];
        if (last_group_id == default_max || last_group_id != cur_group_id) {
          info.group_ptr_.push_back(group_size);
        }
        last_group_id = cur_group_id;
        ++group_size;
      }
    }
    }
    }
    
      Extension_ping_result result;
  try {
    iface_->ping(result.success);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, 'Extension.ping');
    }
    }
    
    
    {
    {struct mei_version {
  uint32_t important_details[7];
  uint16_t major;
  uint16_t minor;
  uint16_t hotfix;
  uint16_t build;
  uint16_t r_major;
  uint16_t r_minor;
  uint16_t r_hotfix;
  uint16_t r_build;
  uint16_t codes[6];
};
}
}

    
    // Sanity check integration test for iokit_devicetree
// Spec file: specs/darwin/iokit_devicetree.table
    
    
    {  ValidatatioMap row_map = {{'filter_name', NonEmptyString},
                            {'chain', NormalType},
                            {'policy', NormalType},
                            {'target', NormalType},
                            {'protocol', IntType},
                            {'src_port', IntMinMaxCheck(0, 65535)},
                            {'dst_port', IntMinMaxCheck(0, 65535)},
                            {'src_ip', verifyEmptyStringOrIpAddress},
                            {'src_mask', verifyEmptyStringOrIpAddress},
                            {'iniface', NormalType},
                            {'iniface_mask', verifyEmptyStringOrIpAddress},
                            {'dst_ip', verifyEmptyStringOrIpAddress},
                            {'dst_mask', verifyEmptyStringOrIpAddress},
                            {'outiface', NormalType},
                            {'outiface_mask', verifyEmptyStringOrIpAddress},
                            {'match', SpecificValuesCheck{'yes', 'no'}},
                            {'packets', NonNegativeInt},
                            {'bytes', NonNegativeInt}};
  validate_rows(data, row_map);
}
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    TEST_F(KernelInfo, test_sanity) {
  QueryData data = execute_query('select * from kernel_info');
  ValidatatioMap row_map = {{'version', NonEmptyString},
                            {'arguments', NormalType},
                            {'path', NormalType},
                            {'device', NonEmptyString}};
  validate_rows(data, row_map);
}
    
    namespace osquery {
namespace table_tests {
    }
    }
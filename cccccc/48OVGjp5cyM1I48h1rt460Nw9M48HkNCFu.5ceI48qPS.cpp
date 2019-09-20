
        
        CholeskyThunk::CholeskyThunk(const CholeskyOptions& options,
                             BufferAllocation::Slice a_buffer,
                             BufferAllocation::Slice workspace_buffer,
                             BufferAllocation::Slice info_buffer,
                             PrimitiveType type, int64 batch_size, int64 n,
                             const HloInstruction* hlo)
    : Thunk(Kind::kCholesky, hlo),
      uplo_(options.lower() ? se::blas::UpperLower::kLower
                            : se::blas::UpperLower::kUpper),
      a_buffer_(a_buffer),
      workspace_buffer_(workspace_buffer),
      info_buffer_(info_buffer),
      type_(type),
      batch_size_(batch_size),
      a_batch_stride_(n * n *
                      ShapeUtil::ByteSizeOfPrimitiveType(
                          hlo->operand(0)->shape().element_type())),
      n_(n) {}
    
    
    {  const int64 replica_count_;
  const int64 element_count_;
  const BufferAllocation::Slice source_buffer_;
  const BufferAllocation::Slice destination_buffer_;
  std::unique_ptr<AuxData> aux_data_;
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/sequential_thunk.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    
    {  EXPECT_EQ(5, computation->instruction_count());
  EXPECT_FALSE(HasInstruction(*computation, dead_negate));
  EXPECT_FALSE(HasInstruction(*computation, dead_add));
  EXPECT_TRUE(HasInstruction(*computation, dead_negate_with_control_dep));
  EXPECT_TRUE(HasInstruction(*computation, dead_add_with_control_dep));
}
    
        // If any of the indices are out of range, we must populate the labels with
    // NaNs to obey the interface contract of
    // tf.nn.sparse_softmax_cross_entropy_with_logits.
    // Builds a vector of {batch_size} that is 0 if the index is in range, or
    // NaN otherwise; then add that vector to the labels to force out-of-range
    // values to NaNs.
    xla::XlaOp nan_or_zero = xla::Select(
        xla::And(xla::Le(XlaHelpers::Zero(builder, indices_type), indices),
                 xla::Lt(indices, XlaHelpers::IntegerLiteral(
                                      builder, indices_type, depth))),
        xla::Broadcast(XlaHelpers::Zero(builder, logits_type), {batch_size}),
        xla::Broadcast(XlaHelpers::FloatLiteral(builder, logits_type, NAN),
                       {batch_size}));
    labels = xla::Add(labels, nan_or_zero, {0});
    
    /**
 * Helper class for tracking certain errors from batch operations
 */
class TrackedErrors {
public:
    TrackedErrors() = default;
    }
    
    
    {    auto status = _kvEngine->dropIdent(opCtx, _rs->getIdent());
    fassert(
        51032,
        status.withContext(str::stream() << 'failed to drop temporary ident: ' << _rs->getIdent()));
    _recordStoreHasBeenDeleted = true;
}
    
        /**
     * Appends the global latency statistics.
     */
    void appendGlobalLatencyStats(bool includeHistograms, BSONObjBuilder* builder);
    
    TEST_F(ExtensionsCallbackRealTest, TextLanguageError) {
    ASSERT_OK(dbtests::createIndex(&_opCtx,
                                   _nss.ns(),
                                   BSON('a'
                                        << 'text'),
                                   false));  // isUnique
    }
    
    protected:
    static NamespaceString nss() {
        return NamespaceString('unittests.pdfiletests.Insert');
    }
    Collection* collection() {
        return _context.db()->getCollection(&_opCtx, nss());
    }
    
    UCollationResult
RuleBasedCollator::compare(const UnicodeString &left, const UnicodeString &right,
                           int32_t length, UErrorCode &errorCode) const {
    if(U_FAILURE(errorCode) || length == 0) { return UCOL_EQUAL; }
    if(length < 0) {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return UCOL_EQUAL;
    }
    int32_t leftLength = left.length();
    int32_t rightLength = right.length();
    if(leftLength > length) { leftLength = length; }
    if(rightLength > length) { rightLength = length; }
    return doCompare(left.getBuffer(), leftLength,
                     right.getBuffer(), rightLength, errorCode);
}
    
    U_CAPI int8_t U_EXPORT2
uhash_compareScriptSet(UElement key0, UElement key1) {
    icu::ScriptSet *s0 = static_cast<icu::ScriptSet *>(key0.pointer);
    icu::ScriptSet *s1 = static_cast<icu::ScriptSet *>(key1.pointer);
    int32_t diff = s0->countMembers() - s1->countMembers();
    if (diff != 0) return diff;
    int32_t i0 = s0->nextSetBit(0);
    int32_t i1 = s1->nextSetBit(0);
    while ((diff = i0-i1) == 0 && i0 > 0) {
        i0 = s0->nextSetBit(i0+1);
        i1 = s1->nextSetBit(i1+1);
    }
    return (int8_t)diff;
}
    
    UnicodeString&
SelectFormat::toPattern(UnicodeString& appendTo) {
    if (0 == msgPattern.countParts()) {
        appendTo.setToBogus();
    } else {
        appendTo.append(msgPattern.getPatternString());
    }
    return appendTo;
}
    
    U_NAMESPACE_BEGIN
    
    U_NAMESPACE_BEGIN
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override
    {
        auto result = ValueFor(fr);
        auto input = static_cast<ComputationNode<InputType>&>(*m_inputs[0].get()).ValueFor(fr);
        result.CastAssignValuesOf(input);
    }
    
            if (pass == ndlPassInitial)
        {
            int id = 1; // skip inputValueNode
    }
    
        for (size_t i = 0; i < m_directConnect.size(); i++)
    {
        if (m_directConnect[i] == iLayer)
        {
            ComputationNodePtr directWIO = builder.CreateLearnableParameter(msra::strfun::wstrprintf(L'D%d', i), outputDim, inputDim);
            m_net->RandomInitLearnableParameters(directWIO, m_uniformInit, randomSeed++, m_initValueScale);
            directOutput = ApplyNonlinearFunction(builder.Times(directWIO, input), i);
    }
    }
    
    #pragma warning(disable : 4996) // Caused by the TODO below (line ~1280)
    
            int i = 0; // indicate the index of learnable nodes
        if (m_useAsyncBuffer)
        {
            m_reportTimer.Restart();
            for (auto nodeIter = learnableNodes.begin(); nodeIter != learnableNodes.end(); nodeIter++, i++)
            {
                ComputationNodePtr node = dynamic_pointer_cast<ComputationNode<ElemType>>(*nodeIter);
                Microsoft::MSR::CNTK::Matrix<ElemType> &mat = node->Value();
#ifndef CPUONLY
                // CNTK model -> GPU buffer
                CUDA_CALL(cudaMemcpy(m_gpuAsyncBuffer[m_bufferIndexInUse][i].Data(),
                    mat.Data(),
                    mat.GetNumElements() * sizeof(ElemType),
                    cudaMemcpyDeviceToDevice));
    }
    }
    
                m_pendingAsyncAggregation = std::async(std::launch::async, [=] {
                // We are starting on a new thread. Make sure the new thread is
                // setup to use the right device
                Matrix<ElemType>::SetDevice(deviceId);
    }
    
    // helper class for passing accumulated epoch-level criteria around while retaining their sample counts
// Criteria are represented as a tuple (aggregate criterion, sample count). The average criterion value is their ratio.
struct EpochCriterion : public std::pair<double, size_t>
{
    // construction
    explicit EpochCriterion(double aggregateCriterionValue = 0.0, size_t aggregateSampleCount = 0) : std::pair<double, size_t>(aggregateCriterionValue, aggregateSampleCount) { }
    EpochCriterion(const std::pair<double, size_t>& other) : std::pair<double, size_t>(other) { }
    }
    
    class DBTestXactLogIterator : public DBTestBase {
 public:
  DBTestXactLogIterator() : DBTestBase('/db_log_iter_test') {}
    }
    
    
    {  bool FullMergeV2(const MergeOperationInput& merge_in,
                   MergeOperationOutput* merge_out) const override {
    // Put basically only looks at the current/latest value
    assert(!merge_in.operand_list.empty());
    merge_out->existing_operand = merge_in.operand_list.back();
    return true;
  }
};
    
    namespace rocksdb {
    }
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
    namespace rocksdb {
    }
    
      // Set a snapshot at start of transaction
  txn_options.set_snapshot = true;
  txn = txn_db->BeginTransaction(write_options, txn_options);
    
    
    {  // close DB
  for (auto* handle : handles) {
    delete handle;
  }
  delete db;
}

    
      // Starts a new Transaction.
  //
  // Caller is responsible for deleting the returned transaction when no
  // longer needed.
  //
  // If old_txn is not null, BeginTransaction will reuse this Transaction
  // handle instead of allocating a new one.  This is an optimization to avoid
  // extra allocations when repeatedly creating transactions.
  virtual Transaction* BeginTransaction(
      const WriteOptions& write_options,
      const OptimisticTransactionOptions& txn_options =
          OptimisticTransactionOptions(),
      Transaction* old_txn = nullptr) = 0;
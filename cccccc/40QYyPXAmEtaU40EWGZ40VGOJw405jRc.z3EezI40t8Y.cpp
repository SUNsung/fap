
        
                    Graph* m_graph;
    
    #ifdef _WIN32
        static Status Save(Model& p_model, const std::wstring& p_filePath);
    
                // A set of data types supported for <*this> formal parameter.
            // It should contain at least one element if this formal parameter
            // is good.
            DataTypeSet m_types;
    
    
    
            std::mutex& OpUtils::GetTypeStrLock()
        {
            static std::mutex lock;
            return lock;
        }
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Pad)
        .Description('Given data tensor, paddings, mode, and value. '
            'Example: Insert 0 paddings to the beginning of the second dimension. '
            'data = [ [1.0, 1.2], [2.3, 3.4], [4.5, 5.7], ] paddings = [0, 0, 2, 0] '
            'output = [ [ [0.0, 0.0, 1.0, 1.2], [0.0, 0.0, 2.3, 3.4], [0.0, 0.0, 4.5, 5.7] ] ]')
        .Input('data', 'Input tensor.', 'T')
        .Output('output', 'Tensor after padding.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('pads',
              'List of integers indicate the padding sizes, paddings's length '
              'should be the double of input's dimension. '
              'The order should be axis_0_begin, axis_0_end, axis_1_begin, ..., '
              'axis_n_begin, axis_n_end, n is input's dimension.',
              AttrType::AttributeProto_AttributeType_INTS, int64_t(1))
        .Attr('mode',
              'Three modes: constant(default), reflect, edge',
              AttrType::AttributeProto_AttributeType_STRING, std::string('constant'))
        .Attr('value',
              'One float, indicates the value to be filled, default is 0',
              AttrType::AttributeProto_AttributeType_FLOAT, float(0));
    
        void BackpropToLogStddev(Matrix<ElemType>& logStddevGradientValues, const Matrix<ElemType>& gradientValues, const Matrix<ElemType>& normedDeviation,
                             const Matrix<ElemType>& posterior, Matrix<ElemType>& temp)
    {
        size_t numComponent = posterior.GetNumRows();
        size_t numSamples = posterior.GetNumCols();
    }
    
        // Let's check that there is no outstanding copies.
    // Wait on all events if there are any pending copy operations in flight.
    if (m_dataTransferers[m_currentDataTransferIndex])
        m_dataTransferers[m_currentDataTransferIndex]->WaitForCopyCPUToGPU();
    
        Matrix<float> mAsparse(mAdense.DeepClone());
    mAsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSC, true);
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
          CompressedIterator<int> ci(buffer.data(), alphabet_size);
      std::vector<int> output(input.size());
      for (int i = 0; i < input.size(); i++) {
        output[i] = ci[i];
      }
    
    
/*
 * dns.h
 *
 *  Created on: 2012-11-23
 *      Author: yanguoyue
 */
    
    #include <stdlib.h>
    
    
    static bool SpyHookLogFunc(struct XLoggerInfo_t& _info, std::string& _log);
    void TestFun0();
    int __TestFun1(int i);
    
    
#endif /* SCOP_JENV_H_ */

    
    
    {    if (success) {
      // Expand to real size
      assert(newByteSize / sizeof(ElementWrapper) >= newCapacity);
      newCapacity = newByteSize / sizeof(ElementWrapper);
    } else {
      throw std::bad_alloc();
    }
  } else { // no jemalloc
    // calloc() is simpler than malloc() followed by memset(), and
    // potentially faster when dealing with a lot of memory, as it can get
    // already-zeroed pages from the kernel.
    reallocated = static_cast<ElementWrapper*>(
        calloc(newCapacity, sizeof(ElementWrapper)));
    if (!reallocated) {
      throw std::bad_alloc();
    }
  }
    
    #include <folly/io/async/AsyncTransport.h>
#include <folly/io/async/WriteChainAsyncTransportWrapper.h>
#include <folly/portability/GMock.h>
#include <folly/portability/GTest.h>
    
    
  // Create a clone of a different IOBuf
  EXPECT_FALSE(iob1->isShared());
  EXPECT_FALSE(iob3ptr->isSharedOne());
    
    FOLLY_TLS sem_t* DeterministicSchedule::tls_sem;
FOLLY_TLS DeterministicSchedule* DeterministicSchedule::tls_sched;
FOLLY_TLS unsigned DeterministicSchedule::tls_threadId;
thread_local AuxAct DeterministicSchedule::tls_aux_act;
AuxChk DeterministicSchedule::aux_chk;
    
    #include <array>
    
    
    {  EXPECT_CALL(fut, futexWaitUntil(2, forever, 0xff))
      .WillOnce(Return(FutexResult::AWOKEN));
  EXPECT_EQ(
      FutexResult::AWOKEN,
      MemoryIdler::futexWaitUntil(
          fut, 2, forever, 0xff, std::chrono::seconds(0)));
}
    
    #include <folly/detail/RangeCommon.h>
    
    namespace folly {
    }
    
    size_t qfind_first_byte_of_sse42(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  if (UNLIKELY(needles.empty() || haystack.empty())) {
    return std::string::npos;
  } else if (needles.size() <= 16) {
    // we can save some unnecessary load instructions by optimizing for
    // the common case of needles.size() <= 16
    return qfind_first_byte_of_needles16(haystack, needles);
  }
    }
    
      // Returns an index of random unit from the corpus to mutate.
  // Hypothesis: units added to the corpus last are more likely to be
  // interesting. This function gives more weight to the more recent units.
  size_t ChooseUnitIdxToMutate(Random &Rand) {
    size_t Idx = static_cast<size_t>(CorpusDistribution(Rand.Get_mt19937()));
    assert(Idx < Inputs.size());
    return Idx;
  }
    
      bool ContainsWord(const Word &W) const {
    return std::any_of(begin(), end(), [&](const DictionaryEntry &DE) {
      return DE.GetW() == W;
    });
  }
  const DictionaryEntry *begin() const { return &DE[0]; }
  const DictionaryEntry *end() const { return begin() + Size; }
  DictionaryEntry & operator[] (size_t Idx) {
    assert(Idx < Size);
    return DE[Idx];
  }
  void push_back(DictionaryEntry DE) {
    if (Size < kMaxDictSize)
      this->DE[Size++] = DE;
  }
  void clear() { Size = 0; }
  bool empty() const { return Size == 0; }
  size_t size() const { return Size; }
    
    
    {} // namespace fuzzer
    
      // Dictionary provided by the user via -dict=DICT_FILE.
  Dictionary ManualDictionary;
  // Temporary dictionary modified by the fuzzer itself,
  // recreated periodically.
  Dictionary TempAutoDictionary;
  // Persistent dictionary modified by the fuzzer, consists of
  // entries that led to successfull discoveries in the past mutations.
  Dictionary PersistentAutoDictionary;
    
    #ifndef LLVM_FUZZER_OPTIONS_H
#define LLVM_FUZZER_OPTIONS_H
    
    unsigned long GetPid();
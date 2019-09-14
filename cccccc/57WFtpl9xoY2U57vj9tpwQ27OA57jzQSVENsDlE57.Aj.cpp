
        
          void pollAndSchedule(int task_id);
  void schedule(int task_id, bool run_inline = false) noexcept;
  void reset() override;
  virtual void finishRun();
  void parentCallback(int parent_id);
  bool isInlineTask(int parent_id, int child_id) const;
    
    
    {} // namespace caffe2

    
        for (int inputIdx = 0; inputIdx < def_.input_size() / 3; ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * 3));
      input_blob_names.push_back(I(inputIdx * 3 + 2));
      output_blob_names.push_back(GI(inputIdx * 3 + 1));
    }
    input_blob_names.push_back(GO(3));
    
    OPERATOR_SCHEMA(FindDuplicateElements)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
The *FindDuplicateElements* op takes a single 1-D tensor *data* as input and returns a single 1-D output tensor *indices*. The output tensor contains the indices of the duplicate elements of the input, excluding the first occurrences. If all elements of *data* are unique, *indices* will be empty.
    
    template <typename T, class Context>
class BernoulliJSDGradientOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDGradientOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    SEXP XGDMatrixNumCol_R(SEXP handle) {
  bst_ulong ncol;
  R_API_BEGIN();
  CHECK_CALL(XGDMatrixNumCol(R_ExternalPtrAddr(handle), &ncol));
  R_API_END();
  return ScalarInteger(static_cast<int>(ncol));
}
    
    /**
 * \class CompressedBufferWriter
 *
 * \brief Writes bit compressed symbols to a memory buffer. Use
 * CompressedIterator to read symbols back from buffer. Currently limited to a
 * maximum symbol size of 28 bits.
 *
 * \author  Rory
 * \date  7/9/2017
 */
    
    /*!
 * \brief Registry entry for sparse page format.
 */
struct SparsePageFormatReg
    : public dmlc::FunctionRegEntryBase<SparsePageFormatReg,
                                        std::function<SparsePageFormat* ()> > {
};
    
            pid_t pid = fork();
        ASSERT_NE(pid, -1);
    
            void addWrite() {
            if (m_write) return;
            m_write = new QSocketNotifier(m_ctx->c.fd, QSocketNotifier::Write, 0);
            connect(m_write, SIGNAL(activated(int)), this, SLOT(write()));
        }
    
    #endif /* !__HIREDIS_EXAMPLE_QT_H */


        
        #include 'base/stl_util.h'
    
    namespace atom {
    }
    
    void DownloadItem::Cancel() {
  download_item_->Cancel(true);
}
    
    void Menu::Clear() {
  model_->Clear();
}
    
    
    {}  // namespace mate
    
    void SILLayout::Profile(llvm::FoldingSetNodeID &id,
                        CanGenericSignature Generics,
                        ArrayRef<SILField> Fields) {
  id.AddPointer(Generics.getPointer());
  for (auto &field : Fields) {
    id.AddPointer(field.getLoweredType().getPointer());
    id.AddBoolean(field.isMutable());
  }
}

    
    public:
  /// Form storage for the given generic signature and its replacement
  /// types and conformances.
  static Storage *get(GenericSignature *genericSig,
                      ArrayRef<Type> replacementTypes,
                      ArrayRef<ProtocolConformanceRef> conformances);
    
        assert(info.name.size() < (2 << 10) && 'name failed sanity check');
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include 'Utils.h'
#include 'Matrix.h'
#include <algorithm>
#include 'TensorShape.h'
    
        void ProgressWriter::WriteTestSummary(const ValuePtr& accumulatedMetric)
    {
        m_test->WriteSummary(
            nullptr, accumulatedMetric,
            [this](size_t samples, size_t updates, size_t summaries, double /*aggregateLoss*/, double aggregateMetric,
                uint64_t elapsedMs)
            {
                OnWriteTestSummary(samples, updates, summaries, aggregateMetric, elapsedMs);
            });
    }
    
                // Validate that each of the dynamic axes are unique
            std::unordered_set<Axis> uniqueDynamicAxis;
            for (auto& currentDynamicAxis : dynamicAxes)
            {
                auto retVal = uniqueDynamicAxis.insert(currentDynamicAxis);
                if (!retVal.second)
                    InvalidArgument('Dynamic axis named %S is specified more than once for Variable '%S'', currentDynamicAxis.Name().c_str(), AsString().c_str());
            }
    
            // Get the first element in the sequence
        size_t lastId = (int)firstSeq(0, columnIndices[0]);
        if (std::find(tokensToIgnore.begin(), tokensToIgnore.end(), lastId) == tokensToIgnore.end())
            out_SampleSeqVec.push_back(lastId);
    
      inline void SkipLine() {
    do {
      ch_buf_ = this->GetChar();
    } while (ch_buf_ != EOF && ch_buf_ != '\n' && ch_buf_ != '\r');
  }
    
    
    {
    {
    { private:
  /*! \brief input stream */
  dmlc::Stream *strm_;
  /*! \brief current buffer pointer */
  size_t buffer_ptr_;
  /*! \brief internal buffer */
  std::string buffer_;
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_IO_H_

    
      void InitTreesToUpdate() {
    if (trees_to_update.size() == 0u) {
      for (auto & tree : trees) {
        trees_to_update.push_back(std::move(tree));
      }
      trees.clear();
      param.num_trees = 0;
      tree_info.clear();
    }
  }
    
    Status WriteBatchBase::DeleteRange(const SliceParts& begin_key,
                                   const SliceParts& end_key) {
  std::string begin_key_buf, end_key_buf;
  Slice begin_key_slice(begin_key, &begin_key_buf);
  Slice end_key_slice(end_key, &end_key_buf);
  return DeleteRange(begin_key_slice, end_key_slice);
}
    
    #pragma once
    
      // Remove any kind of caching of data from the offset to offset+length
  // of this file. If the length is 0, then it refers to the end of file.
  // If the system is not caching the file contents, then this is a noop.
  virtual Status InvalidateCache(size_t offset, size_t length) override {
    return file_->InvalidateCache(offset + prefixLength_, length);
  }
    
      virtual Status GetChildren(const std::string& dir,
                             std::vector<std::string>* result) override;
    
    std::string kDBPath = '/tmp/rocksdb_transaction_example';
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    bool SetDepth(int p0, HuffmanTree *pool, uint8_t *depth, int max_depth) {
  int stack[17];
  int level = 0;
  int p = p0;
  assert(max_depth <= 16);
  stack[0] = -1;
  while (true) {
    if (pool[p].index_left_ >= 0) {
      level++;
      if (level > max_depth) return false;
      stack[level] = pool[p].index_right_or_value_;
      p = pool[p].index_left_;
      continue;
    } else {
      depth[pool[p].index_right_or_value_] = static_cast<uint8_t>(level);
    }
    while (level >= 0 && stack[level] == -1) level--;
    if (level < 0) return true;
    p = stack[level];
    stack[level] = -1;
  }
}
    
      tmp0 = in[4 * stride];
  tmp1 = kIDCTMatrix[ 4] * tmp0;
  out[0] += tmp1;
  out[1] -= tmp1;
  out[2] -= tmp1;
  out[3] += tmp1;
  out[4] += tmp1;
  out[5] -= tmp1;
  out[6] -= tmp1;
  out[7] += tmp1;
    
    #include 'guetzli/jpeg_data.h'
    
     public:
  struct Result {
    double real_time_used = 0;
    double cpu_time_used = 0;
    double manual_time_used = 0;
    int64_t bytes_processed = 0;
    int64_t items_processed = 0;
    int complexity_n = 0;
    std::string report_label_;
    std::string error_message_;
    bool has_error_ = false;
    UserCounters counters;
  };
  GUARDED_BY(GetBenchmarkMutex()) Result results;
    
    
    {  AddRange(&thread_counts_, min_threads, max_threads, 2);
  return this;
}
    
    
    {  fflush(stdout);
  // Restores the text color.
  SetConsoleTextAttribute(stdout_handle, old_color_attrs);
#else
  const char* color_code = GetPlatformColorCode(color);
  if (color_code) out << FormatString('\033[0;3%sm', color_code);
  out << FormatString(fmt, args) << '\033[m';
#endif
}
    
    #endif  // BENCHMARK_COLORPRINT_H_

    
      // Aborts if the parsing failed.
  if (value_str == nullptr) return false;
    
    
    {}  // end namespace benchmark
    
    #include 'benchmark/benchmark.h'
#include 'internal_macros.h'
    
    namespace benchmark {
namespace internal {
    }
    }
    
    #define GUARDED_BY(x) THREAD_ANNOTATION_ATTRIBUTE__(guarded_by(x))
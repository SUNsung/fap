#ifndef GTEST_INCLUDE_GTEST_GTEST_SPI_H_
#define GTEST_INCLUDE_GTEST_GTEST_SPI_H_
    
    // Implements typed tests.
    
    // Unary predicate assertion macros.
#define EXPECT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_FATAL_FAILURE_)
    
      // Returns a pathname for a file that does not currently exist. The pathname
  // will be directory/base_name.extension or
  // directory/base_name_<number>.extension if directory/base_name.extension
  // already exists. The number will be incremented until a pathname is found
  // that does not already exist.
  // Examples: 'dir/foo_test.xml' or 'dir/foo_test_1.xml'.
  // There could be a race condition if two or more processes are calling this
  // function at the same time -- they could both pick the same filename.
  static FilePath GenerateUniqueFileName(const FilePath& directory,
                                         const FilePath& base_name,
                                         const char* extension);
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_LINKED_PTR_H_

    
    // Type and function utilities for implementing parameterized tests.
// This file is generated by a SCRIPT.  DO NOT EDIT BY HAND!
//
// Currently Google Test supports at most 50 arguments in Values,
// and at most 10 arguments in Combine. Please contact
// googletestframework@googlegroups.com if you need more.
// Please note that the number of arguments to Combine is limited
// by the maximum arity of the implementation of tr1::tuple which is
// currently set at 10.
    
      template <GTEST_1_TYPENAMES_(U)>
  tuple& CopyFrom(const GTEST_1_TUPLE_(U)& t) {
    f0_ = t.f0_;
    return *this;
  }
    
      // Called after a test ends.
  virtual void OnTestEnd(const TestInfo& /* test_info */) {
    int difference = Water::allocated() - initially_allocated_;
    }
    
    #include <limits.h>
#include 'sample1.h'
#include 'gtest/gtest.h'
    
    	si.cb = sizeof(STARTUPINFO);
#if USE_TASKBAR_API
	si.lpTitle = appId;
	si.dwFlags = STARTF_TITLEISAPPID;
#endif
	PROCESS_INFORMATION pi;
	if (!CreateProcess(conEmuPath, args, NULL, NULL, false, 0, NULL, NULL, &si, &pi)) {
		MessageBox(NULL, _T('Unable to create the ConEmu process!'), _T('Error'), MB_OK);
		return;
	}
    
    #include <vector>
#include <string>
#include <memory>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include './ndarray.h'
    
      virtual void PrintDefaultValueString(std::ostream &os) const {  // NOLINT(*)
    std::string s;
    caffe::NetParameter np;
    // Avoid wasting time making a copy -- just push in out default object's pointer
    np.mutable_layer()->AddAllocated(const_cast<::caffe::LayerParameter *>(&default_value_));
    google::protobuf::TextFormat::PrintToString(np, &s);
    np.mutable_layer()->ReleaseLast();
    os << '\'' << s << '\'';
  }
    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
      for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    const auto& inode = idx[nid];
    if (inode.source->op() != ewise_plus_op) continue;
    int sid = storage_id[idx.entry_id(inode.inputs[0])];
    if (sid != storage_id[idx.entry_id(nid, 0)]) continue;
    if (idx[inode.inputs[0].node_id].source->is_variable()) continue;
    if (idx[inode.inputs[1].node_id].source->is_variable()) continue;
    uint32_t eid_rhs  = idx.entry_id(inode.inputs[1]);
    if (ref_count[eid_rhs] != 1) continue;
    if (inode.inputs[0].node_id >= inode.inputs[1].node_id) continue;
    // TODO(haibin) support inplace addto for Dynamic Storage
    if (storage_id[eid_rhs] == kDynamicStorageID) continue;
    CHECK_NE(storage_id[eid_rhs], sid);
    storage_id[eid_rhs] = sid;
    addto_entry[eid_rhs] = 1;
    storage_inplace_index[eid_rhs] = -1;
    skip_plus_node[nid] = 1;
  }
    
      void InitParams(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    std::vector<std::pair<std::string, std::string> > kwargs_left;
    // init image rec param
    kwargs_left = param_.InitAllowUnknown(kwargs);
    // maximum prefetch threaded iter internal size
    const int kMaxPrefetchBuffer = 16;
    // init thread iter
    iter.set_max_capacity(kMaxPrefetchBuffer);
  }
    
    /*!
 *  Copyright (c) 2018 by Contributors
 * \file transformer.cc
 * \brief CPU implementation of the operators used in Transformer
 */
#include <mxnet/base.h>
#include './transformer-inl.h'
#include '../tensor/elemwise_unary_op.h'
    
    
    {    Tensor<gpu, 4, DType> data = in_data[bs::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grid = in_data[bs::kGrid].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> grid_tmp = out_data[bs::kTmp].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> out = out_data[bs::kOut].get<gpu, 4, DType>(s);
    // grid_tmp : (batch, h, w, 2)
    grid_tmp = transpose(grid, Shape4(0, 2, 3, 1));
    if (!init_cudnn_) {
     Init(s, in_data, out_data);
    }
    CHECK_EQ(data.CheckContiguous(), true);
    CHECK_EQ(out.CheckContiguous(), true);
    CHECK_EQ(grid_tmp.CheckContiguous(), true);
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    CUDNN_CALL(cudnnSpatialTfSamplerForward(s->dnn_handle_,
                                            st_desc_,
                                            &alpha,
                                            in_desc_,
                                            data.dptr_,
                                            grid_tmp.dptr_,
                                            &beta,
                                            out_desc_,
                                            out.dptr_));
  }
    
    
    {
    {
    { private:
  inline void Init(mshadow::Stream<gpu> *s,
                   const std::vector<TBlob> &in_data,
                   const std::vector<TBlob> &out_data) {
    using namespace mshadow;
    CHECK_EQ(in_data.size(), 1U);
    CHECK_EQ(out_data.size(), 2U);
    if (!init_cudnn_) {
      init_cudnn_ = true;
      Tensor<gpu, 4, DType> data = in_data[lrn_enum::kData].get<gpu, 4, DType>(s);
      Tensor<gpu, 4, DType> out = out_data[lrn_enum::kOut].get<gpu, 4, DType>(s);
      unsigned lrn_n = param_.nsize;
      double alpha = param_.alpha;
      double beta = param_.beta;
      double lrn_k = param_.knorm;
      CHECK_EQ(data.shape_, out.shape_);
      CUDNN_CALL(cudnnCreateLRNDescriptor(&lrn_desc_));
      CUDNN_CALL(cudnnSetLRNDescriptor(lrn_desc_,
                                       lrn_n,
                                       alpha,
                                       beta,
                                       lrn_k));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&shape_desc_));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(shape_desc_,
                                            CUDNN_TENSOR_NCHW,
                                            dtype_,
                                            data.shape_[0],
                                            data.shape_[1],
                                            data.shape_[2],
                                            data.shape_[3]));
    }
  }
  bool init_cudnn_;
  LRNParam param_;
  cudnnDataType_t dtype_;
  cudnnLRNDescriptor_t lrn_desc_;
  cudnnTensorDescriptor_t shape_desc_;
};  // class CuDNNLocalResponseNormOp
}  // namespace op
}  // namespace mxnet
#endif  // MXNET_OPERATOR_CUDNN_LRN_INL_H_

    
    UOBJECT_DEFINE_RTTI_IMPLEMENTATION(RemoveTransliterator)
    
    //--------------------------------------------------------------------------
//
//    Assignment Operator
//
//--------------------------------------------------------------------------
RegexPattern &RegexPattern::operator = (const RegexPattern &other) {
    if (this == &other) {
        // Source and destination are the same.  Don't do anything.
        return *this;
    }
    }
    
        UBool      test(UScriptCode script, UErrorCode &status) const;
    ScriptSet &Union(const ScriptSet &other);
    ScriptSet &set(UScriptCode script, UErrorCode &status);
    ScriptSet &reset(UScriptCode script, UErrorCode &status);
    ScriptSet &intersect(const ScriptSet &other);
    ScriptSet &intersect(UScriptCode script, UErrorCode &status);
    UBool      intersects(const ScriptSet &other) const;  // Sets contain at least one script in commmon.
    UBool      contains(const ScriptSet &other) const;    // All set bits in other are also set in this.
    
            if (matchindex != USEARCH_DONE) {
            if (m_search_->isOverlap) {
                matchindex += m_search_->matchedLength - 2;
            }
    }
    
    #endif /* #if !UCONFIG_NO_FORMATTING */
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    U_CDECL_END
    
    UOBJECT_DEFINE_RTTI_IMPLEMENTATION(CollationKey)
    
        /**
     * Returns a string representation of this replacer.  If the
     * result of calling this function is passed to the appropriate
     * parser, typically TransliteratorParser, it will produce another
     * replacer that is equal to this one.
     * @param result the string to receive the pattern.  Previous
     * contents will be deleted.
     * @param escapeUnprintable if TRUE then convert unprintable
     * character to their hex escape representations, \\uxxxx or
     * \\Uxxxxxxxx.  Unprintable characters are defined by
     * Utility.isUnprintable().
     * @return a reference to 'result'.
     */
    virtual UnicodeString& toReplacerPattern(UnicodeString& result,
                                             UBool escapeUnprintable) const;
    
    #include 'rocksdb/slice.h'
#include 'rocksdb/status.h'
    
    
    {  rocksdb::WriteOptions wopts;
  db->Merge(wopts, '0', 'bad');  // This is filtered out
  db->Merge(wopts, '1', 'data1');
  db->Merge(wopts, '1', 'bad');
  db->Merge(wopts, '1', 'data2');
  db->Merge(wopts, '1', 'bad');
  db->Merge(wopts, '3', 'data3');
  db->CompactRange(rocksdb::CompactRangeOptions(), nullptr, nullptr);
  fprintf(stderr, 'filter.count_ = %d\n', filter.count_);
  assert(filter.count_ == 0);
  fprintf(stderr, 'filter.merge_count_ = %d\n', filter.merge_count_);
  assert(filter.merge_count_ == 6);
}

    
      PinnableSlice pinnable_val;
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key1', &pinnable_val);
  assert(s.IsNotFound());
  // Reset PinnableSlice after each use and before each reuse
  pinnable_val.Reset();
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
  assert(pinnable_val == 'value');
  pinnable_val.Reset();
  // The Slice pointed by pinnable_val is not valid after this point
    
    
    {
    {}  // namespace experimental
}  // namespace rocksdb

    
    
    {}  // namespace rocksdb
#endif  // !ROCKSDB_LITE

    
    // Options to control the behavior of a database (passed to
// DB::Open). A LevelDBOptions object can be initialized as though
// it were a LevelDB Options object, and then it can be converted into
// a RocksDB Options object.
struct LevelDBOptions {
  // -------------------
  // Parameters that affect behavior
    }
    
    #pragma once

        
              // colon indicates that the argument starts with a URI scheme
      if (c == ':') {
        // it could also be a Windows filesystem path
        if (p == arg + 1)
          break;
    }
    
    #include 'base/command_line.h'
    
    #include 'base/callback.h'
#include 'base/location.h'
#include 'base/single_thread_task_runner.h'
#include 'uv.h'  // NOLINT(build/include)
    
    
    {}  // namespace atom
    
     protected:
  WebRequest(v8::Isolate* isolate, AtomBrowserContext* browser_context);
  ~WebRequest() override;
    
    void AutoUpdater::SetDelegate(Delegate* delegate) {
  delegate_ = delegate;
}
    
    #ifndef ATOM_BROWSER_LIB_POWER_OBSERVER_H_
#define ATOM_BROWSER_LIB_POWER_OBSERVER_H_
    
    void FinishAllTransactions(void);
    
    
    {}  // namespace in_app_purchase
    
    #include 'atom/browser/net/url_request_about_job.h'
    
      static vector<string> LayerTypeList() {
    CreatorRegistry& registry = Registry();
    vector<string> layer_types;
    for (typename CreatorRegistry::iterator iter = registry.begin();
         iter != registry.end(); ++iter) {
      layer_types.push_back(iter->first);
    }
    return layer_types;
  }
    
      virtual inline const char* type() const { return 'Accuracy'; }
  virtual inline int ExactNumBottomBlobs() const { return 2; }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
                           const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
                            const vector<bool>& propagate_down,
                            const vector<Blob<Dtype>*>& bottom);
    
    
struct NULLDeleter {template<typename T> void operator()(T*){}};
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file inplace_addto_detect_pass.cc
 * \brief Detect whether inplace addto operation is possible for certain op.
 */
#include <mxnet/base.h>
#include <mxnet/operator.h>
#include <mxnet/op_attr_types.h>
#include <nnvm/graph_attr_types.h>
    
    intptr_t VMTOC::getPtrVector() {
  always_assert(m_tocvector != nullptr);
  return reinterpret_cast<intptr_t>(m_tocvector->base() + INT16_MAX + 1);
}
    
        D_form_t d_formater {{
                          static_cast<uint32_t>(imm),
                          static_cast<uint32_t>(ra),
                          static_cast<uint32_t>(rt),
                          op
                         }};
    
    APCHandle::Pair APCCollection::WrapArray(APCHandle::Pair inner,
                                         CollectionType colType) {
  auto const col = new APCCollection;
  col->m_arrayHandle = inner.handle;
  col->m_colType = colType;
  return { &col->m_handle, inner.size + sizeof(APCCollection) };
}
    
    #include 'hphp/runtime/base/type-string.h'
    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
    /*!
 * \brief Quantile sketch use WQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class WQuantileSketch :
      public QuantileSketchTemplate<DType, RType, WQSummary<DType, RType> > {
};
    
    
    {
    {}  // namespace obj
}  // namespace xgboost

    
      void OperateCache(ThreadState* thread) {
    for (uint64_t i = 0; i < FLAGS_ops_per_thread; i++) {
      uint64_t rand_key = thread->rnd.Next() % FLAGS_max_key;
      // Cast uint64* to be char*, data would be copied to cache
      Slice key(reinterpret_cast<char*>(&rand_key), 8);
      int32_t prob_op = thread->rnd.Uniform(100);
      if (prob_op >= 0 && prob_op < FLAGS_insert_percent) {
        // do insert
        cache_->Insert(key, new char[10], 1, &deleter);
      } else if (prob_op -= FLAGS_insert_percent &&
                 prob_op < FLAGS_lookup_percent) {
        // do lookup
        auto handle = cache_->Lookup(key);
        if (handle) {
          cache_->Release(handle);
        }
      } else if (prob_op -= FLAGS_lookup_percent &&
                 prob_op < FLAGS_erase_percent) {
        // do erase
        cache_->Erase(key);
      }
    }
  }
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
      uint64_t single_refill_amount =
      delayed_write_rate_ * kRefillInterval / kMicrosPerSecond;
  if (bytes_left_ + single_refill_amount >= num_bytes) {
    // Wait until a refill interval
    // Never trigger expire for less than one refill interval to avoid to get
    // time.
    bytes_left_ = bytes_left_ + single_refill_amount - num_bytes;
    last_refill_time_ = time_now + kRefillInterval;
    return kRefillInterval + sleep_debt;
  }
    
      delete db;
    
    #pragma once
#ifndef ROCKSDB_LITE
    
      ~ManagedSnapshot();
    
      // A list of properties that describe some details about the current
  // operation.  Same field in op_properties[] might have different
  // meanings for different operations.
  uint64_t op_properties[kNumOperationProperties];
    
    namespace rocksdb {
    }
    
      // If non-NULL, use the specified filter policy to reduce disk reads.
  // Many applications will benefit from passing the result of
  // NewBloomFilterPolicy() here.
  //
  // Default: NULL
  const FilterPolicy* filter_policy;
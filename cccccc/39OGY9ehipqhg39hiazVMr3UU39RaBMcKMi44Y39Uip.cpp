
        
        class Event : public Wrappable<Event>,
              public content::WebContentsObserver {
 public:
  static Handle<Event> Create(v8::Isolate* isolate);
    }
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    namespace relauncher {
    }
    
    // only copy a complete independent tree
// when node name exists
void ComputationNetwork::CopySubTree(const ComputationNetwork& fromNet,
                                     const std::wstring fromName, std::wstring toNamePrefix,
                                     const CopyNodeFlags flags)
{
    InvalidateCompiledNetwork();
    }
    
    #include 'PostComputingActions.h'
    
    #pragma once
    
            // if we have more than one matching parameter
        if (singleInputMultiOutput)
        {
            auto nodeIn = nodes[0];
            vector<ComputationNodeBasePtr> nodesOut = netNdlOut->cn->GetNodesFromName(nameOut);
    }
    
      memset(lotsa_as, 'a', 512 * sizeof(lotsa_as[0]));
  memset(lotsa_bs, 'b', 1024 * sizeof(lotsa_bs[0]));
  /* use slices large enough to overflow inlining */
  slices[0] = grpc_slice_malloc(512);
  memcpy(GRPC_SLICE_START_PTR(slices[0]), lotsa_as, 512);
  slices[1] = grpc_slice_malloc(1024);
  memcpy(GRPC_SLICE_START_PTR(slices[1]), lotsa_bs, 1024);
    
    
    { private:
  static void CheckDone(grpc::Status s, SimpleResponse* response) {}
  static std::unique_ptr<grpc::ClientAsyncWriter<SimpleRequest>> PrepareReq(
      BenchmarkService::Stub* stub, grpc::ClientContext* ctx,
      SimpleResponse* resp, CompletionQueue* cq) {
    auto stream = stub->PrepareAsyncStreamingFromClient(ctx, resp, cq);
    return stream;
  };
  static ClientRpcContext* SetupCtx(BenchmarkService::Stub* stub,
                                    std::function<gpr_timespec()> next_issue,
                                    const SimpleRequest& req) {
    return new ClientRpcContextStreamingFromClientImpl<SimpleRequest,
                                                       SimpleResponse>(
        stub, req, next_issue, AsyncStreamingFromClientClient::PrepareReq,
        AsyncStreamingFromClientClient::CheckDone);
  }
};
    
     protected:
  // WaitToIssue returns false if we realize that we need to break out
  bool WaitToIssue(int thread_idx) {
    if (!closed_loop_) {
      const gpr_timespec next_issue_time = NextIssueTime(thread_idx);
      // Avoid sleeping for too long continuously because we might
      // need to terminate before then. This is an issue since
      // exponential distribution can occasionally produce bad outliers
      while (true) {
        const gpr_timespec one_sec_delay =
            gpr_time_add(gpr_now(GPR_CLOCK_MONOTONIC),
                         gpr_time_from_seconds(1, GPR_TIMESPAN));
        if (gpr_time_cmp(next_issue_time, one_sec_delay) <= 0) {
          gpr_sleep_until(next_issue_time);
          return true;
        } else {
          gpr_sleep_until(one_sec_delay);
          if (gpr_atm_acq_load(&thread_pool_done_) != static_cast<gpr_atm>(0)) {
            return false;
          }
        }
      }
    }
    return true;
  }
    
    #endif // BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP

    
    #include <boost/asio/detail/config.hpp>
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    
    {    // Make the upcall if required.
    if (owner)
    {
      fenced_block b(fenced_block::half);
      BOOST_ASIO_HANDLER_INVOCATION_BEGIN((handler.arg1_, handler.arg2_));
      boost_asio_handler_invoke_helpers::invoke(handler, handler.handler_);
      BOOST_ASIO_HANDLER_INVOCATION_END;
    }
  }
    
      static bool do_perform(reactor_op* base)
  {
    descriptor_write_op_base* o(static_cast<descriptor_write_op_base*>(base));
    }
    
    #include <boost/asio/detail/posix_fd_set_adapter.hpp>
#include <boost/asio/detail/win_fd_set_adapter.hpp>
    
    dev_poll_reactor::dev_poll_reactor(boost::asio::io_service& io_service)
  : boost::asio::detail::service_base<dev_poll_reactor>(io_service),
    io_service_(use_service<io_service_impl>(io_service)),
    mutex_(),
    dev_poll_fd_(do_dev_poll_create()),
    interrupter_(),
    shutdown_(false)
{
  // Add the interrupter's descriptor to /dev/poll.
  ::pollfd ev = { 0, 0, 0 };
  ev.fd = interrupter_.read_descriptor();
  ev.events = POLLIN | POLLERR;
  ev.revents = 0;
  ::write(dev_poll_fd_, &ev, sizeof(ev));
}
    
    FilterBlockReader::FilterBlockReader(const FilterPolicy* policy,
                                     const Slice& contents)
    : policy_(policy),
      data_(NULL),
      offset_(NULL),
      num_(0),
      base_lg_(0) {
  size_t n = contents.size();
  if (n < 5) return;  // 1 byte for base_lg_ and 4 for start of offset array
  base_lg_ = contents[n-1];
  uint32_t last_word = DecodeFixed32(contents.data() + n - 5);
  if (last_word > n - 5) return;
  data_ = contents.data();
  offset_ = data_ + last_word;
  num_ = (n - 5 - last_word) / 4;
}
    
      void Delete(const SnapshotImpl* s) {
    assert(s->list_ == this);
    s->prev_->next_ = s->next_;
    s->next_->prev_ = s->prev_;
    delete s;
  }
    
      void Add(const char* smallest, const char* largest,
           SequenceNumber smallest_seq = 100,
           SequenceNumber largest_seq = 100) {
    FileMetaData* f = new FileMetaData;
    f->number = files_.size() + 1;
    f->smallest = InternalKey(smallest, smallest_seq, kTypeValue);
    f->largest = InternalKey(largest, largest_seq, kTypeValue);
    files_.push_back(f);
  }
    
      static Status InsertInto(const WriteBatch* batch, MemTable* memtable);
    
     public:
  RandomGenerator() {
    // We use a limited amount of data over and over again and ensure
    // that it is larger than the compression window (32KB), and also
    // large enough to serve all typical value sizes we want to write.
    Random rnd(301);
    std::string piece;
    while (data_.size() < 1048576) {
      // Add a short fragment that is as compressible as specified
      // by FLAGS_compression_ratio.
      test::CompressibleString(&rnd, FLAGS_compression_ratio, 100, &piece);
      data_.append(piece);
    }
    pos_ = 0;
  }
    
      std::string write_data;
  for (size_t i = 0; i < kWriteSize; ++i) {
    write_data.append(1, static_cast<char>(i));
  }
    
      // Third filter is empty
    
    #endif  // STORAGE_LEVELDB_TABLE_ITERATOR_WRAPPER_H_

    
      virtual Slice key() const {
    assert(Valid());
    return current_->key();
  }
    
    
    { private:
  // synchronizer
  std::unique_ptr<TreeUpdater> syncher;
  // training parameter
  TrainParam param;
};
    
      uint32_t uint32_t2[2] = {1U, 2U};
  EXPECT_EQ(info.base_margin.size(), 0);
  info.SetInfo('base_margin', uint32_t2, xgboost::kUInt32, 2);
  EXPECT_EQ(info.base_margin.size(), 2);
    
    
    { private:
  inline static void AddStats(const RegTree &tree,
                              const RegTree::FVec &feat,
                              const std::vector<bst_gpair> &gpair,
                              const MetaInfo &info,
                              const bst_uint ridx,
                              TStats *gstats) {
    // start from groups that belongs to current data
    int pid = static_cast<int>(info.GetRoot(ridx));
    gstats[pid].Add(gpair, info, ridx);
    // tranverse tree
    while (!tree[pid].is_leaf()) {
      unsigned split_index = tree[pid].split_index();
      pid = tree.GetNext(pid, feat.fvalue(split_index), feat.is_missing(split_index));
      gstats[pid].Add(gpair, info, ridx);
    }
  }
  inline void Refresh(const TStats *gstats,
                      int nid, RegTree *p_tree) {
    RegTree &tree = *p_tree;
    tree.stat(nid).base_weight = static_cast<bst_float>(gstats[nid].CalcWeight(param));
    tree.stat(nid).sum_hess = static_cast<bst_float>(gstats[nid].sum_hess);
    gstats[nid].SetLeafVec(param, tree.leafvec(nid));
    if (tree[nid].is_leaf()) {
      if (param.refresh_leaf) {
        tree[nid].set_leaf(tree.stat(nid).base_weight * param.learning_rate);
      }
    } else {
      tree.stat(nid).loss_chg = static_cast<bst_float>(
          gstats[tree[nid].cleft()].CalcGain(param) +
          gstats[tree[nid].cright()].CalcGain(param) -
          gstats[nid].CalcGain(param));
      this->Refresh(gstats, tree[nid].cleft(), p_tree);
      this->Refresh(gstats, tree[nid].cright(), p_tree);
    }
  }
  // training parameter
  TrainParam param;
  // reducer
  rabit::Reducer<TStats, TStats::Reduce> reducer;
};
    
    // This is a helpful data structure to define parameters
// You do not have to use it.
// see http://dmlc-core.readthedocs.org/en/latest/parameter.html
// for introduction of this module.
struct MyLogisticParam : public dmlc::Parameter<MyLogisticParam> {
  float scale_neg_weight;
  // declare parameters
  DMLC_DECLARE_PARAMETER(MyLogisticParam) {
    DMLC_DECLARE_FIELD(scale_neg_weight).set_default(1.0f).set_lower_bound(0.0f)
        .describe('Scale the weight of negative examples by this factor');
  }
};
    
    
    {#undef EXT_FUNC
}
    
    #include 'FuzzerIO.h'
#include 'FuzzerDefs.h'
#include 'FuzzerExtFunctions.h'
#include <algorithm>
#include <cstdarg>
#include <fstream>
#include <iterator>
#include <sys/stat.h>
#include <sys/types.h>
    
    void MutationDispatcher::ClearAutoDictionary() {
  TempAutoDictionary.clear();
}
    
    #ifndef LLVM_FUZZER_OPTIONS_H
#define LLVM_FUZZER_OPTIONS_H
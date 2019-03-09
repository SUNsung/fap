
        
          uv_loop_t* loop_;
    
      int AddEntry(const base::DictionaryValue& entry);
  void RemoveEntry(int id);
    
    
    {}  // namespace api
    
    #include 'atom/browser/api/trackable_object.h'
#include 'atom/browser/net/atom_network_delegate.h'
#include 'native_mate/arguments.h'
#include 'native_mate/handle.h'
    
    namespace atom {
    }
    
    #ifndef ATOM_BROWSER_NET_URL_REQUEST_ABOUT_JOB_H_
#define ATOM_BROWSER_NET_URL_REQUEST_ABOUT_JOB_H_
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size/5 - 1048576);
}
    
      void RunBenchmark(int n, Slice name,
                    void (Benchmark::*method)(ThreadState*)) {
    SharedState shared(n);
    }
    
    #ifndef STORAGE_LEVELDB_DB_DB_IMPL_H_
#define STORAGE_LEVELDB_DB_DB_IMPL_H_
    
    // Append the serialization of 'key' to *result.
void AppendInternalKey(std::string* result, const ParsedInternalKey& key);
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string LogFileName(const std::string& dbname, uint64_t number);
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
    
    {
    {    if (!s.ok()) {
      assert(table == nullptr);
      delete file;
      // We do not cache error results so that if the error is transient,
      // or somebody repairs the file, we recover automatically.
    } else {
      TableAndFile* tf = new TableAndFile;
      tf->file = file;
      tf->table = table;
      *handle = cache_->Insert(key, tf, 1, &DeleteEntry);
    }
  }
  return s;
}
    
    #include <caffe/proto/caffe.pb.h>
    
    MXNET_REGISTER_IO_ITER(CaffeDataIter)
.describe('Create MxNet iterator for a Caffe data layer.')
.add_arguments(CaffeDataParam::__FIELDS__())
.add_arguments(PrefetcherParam::__FIELDS__())
.set_body([]() {
    return new CaffeDataIterWrapper();
});
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
     protected:
  /*! \brief prefetcher parameters */
  PrefetcherParam param_;
  /*! \brief backend thread */
  dmlc::ThreadedIter<DataBatch> iter;
  /*! \brief internal batch loader */
  std::unique_ptr<IIterator<TBlobBatch> > loader_;
    
    
    {  // sorted position of constant arguments
  std::vector<int> const_loc;
  for (int i = 0; i < num_const; ++i) {
    const_loc.push_back(wrap_args[i + 3].operator int());
  }
  std::sort(const_loc.begin(), const_loc.end());
  // wrapped function
  // This is the function that called by the user.
  auto wrapped = [f, fset_stream, const_loc](TVMArgs args, TVMRetValue* rv) {
    std::shared_ptr<TVMFunctor> func =
      std::make_shared<TVMFunctor>(f, fset_stream);
    std::vector<Engine::VarHandle> const_vars, mutate_vars;
    func->Init(args, const_loc, &const_vars, &mutate_vars);
    Engine *engine = Engine::Get();
    engine->DeduplicateVarHandle(&const_vars, &mutate_vars);
    engine->PushSync([func](RunContext ctx) {
        func->Run(ctx);
      }, func->ctx(), const_vars, mutate_vars);
  };
  *wrap_rv = PackedFunc(wrapped);
}
    
      ~CuDNNLocalResponseNormOp() {
    if (init_cudnn_) {
      CUDNN_CALL(cudnnDestroyLRNDescriptor(lrn_desc_));
      CUDNN_CALL(cudnnDestroyTensorDescriptor(shape_desc_));
    }
  }
    
    
    {
    {      Engine::Get()->PushSync(
          [=](RunContext rctx) {
            for (size_t i = 0, out_idx = 0; i < arrs.size(); i++) {
              if (arrs[i].storage_type() == kDefaultStorage ||
                  arrs[i].storage_type() == kUndefinedStorage)
                continue;
              if (output_tags.count(tags[i]) > 0) {
                outputs[out_idx].SparseUpdateChunk(arrs[i]);
                out_idx++;
              }
            }
            ctx.async_on_complete();
          },
          ctx.run_ctx.ctx, vars, vars2, FnProperty::kNormal, 0,
          'CustomOperator');
    });
    cv_.notify_all();
  }
    
    
    {  setup(lm_path, trie_path);
}
    
        /**
     * Constructs a comparator capable of comparing two n-grams.
     *
     * @param order Number of words in each n-gram
     */
    explicit Comparator(std::size_t order) : order_(order) {}
    
    template <class Payload> class NGramStreams : public util::stream::GenericStreams<NGramStream<Payload> > {
  private:
    typedef util::stream::GenericStreams<NGramStream<Payload> > P;
  public:
    NGramStreams() : P() {}
    NGramStreams(const util::stream::ChainPositions &positions) : P(positions) {}
};
    
    class Renumber {
  public:
    // Assumes the array is large enough to map all words and stays alive while
    // the thread is active.
    Renumber(const WordIndex *new_numbers, std::size_t order)
      : new_numbers_(new_numbers), order_(order) {}
    }
    
    boost::program_options::typed_value<std::string> *SizeOption(std::size_t &to, const char *default_value) {
  return boost::program_options::value<std::string>()->notifier(SizeNotify(to))->default_value(default_value);
}
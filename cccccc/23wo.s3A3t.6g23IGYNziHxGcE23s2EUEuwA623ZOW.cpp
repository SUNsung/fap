
        
        
    {}  // namespace
    
    namespace atom {
    }
    
    namespace atom {
    }
    
    Screen::Screen(v8::Isolate* isolate, display::Screen* screen)
    : screen_(screen) {
  screen_->AddObserver(this);
  Init(isolate);
}
    
      gfx::Point GetCursorScreenPoint();
  display::Display GetPrimaryDisplay();
  std::vector<display::Display> GetAllDisplays();
  display::Display GetDisplayNearestPoint(const gfx::Point& point);
  display::Display GetDisplayMatching(const gfx::Rect& match_rect);
    
    #ifndef ATOM_BROWSER_ATOM_JAVASCRIPT_DIALOG_MANAGER_H_
#define ATOM_BROWSER_ATOM_JAVASCRIPT_DIALOG_MANAGER_H_
    
    void AtomQuotaPermissionContext::RequestQuotaPermission(
    const content::StorageQuotaParams& params,
    int render_process_id,
    const PermissionCallback& callback) {
  callback.Run(response::QUOTA_PERMISSION_RESPONSE_ALLOW);
}
    
    std::string tmppath() {
  // TMPFILE is for manual test execution during which the user will specify
  // the full temp file path using the environmental variable TMPFILE
  const char* tmpfile = getenv('TMPFILE');
  if (tmpfile) {
    return std::string(tmpfile);
  }
    }
    
    OpSchema::Cost CostInferenceForFC(
    const OperatorDef& def,
    const vector<TensorShape>& in) {
  CAFFE_ENFORCE_EQ(in.size(), 3, 'FC requires three inputs');
  struct OpSchema::Cost c;
  ArgumentHelper helper(def);
    }
    
    #include 'absl/strings/str_cat.h'
#include 'absl/strings/string_view.h'
#include 'opencensus/stats/stats.h'
#include 'src/core/lib/surface/call.h'
#include 'src/cpp/ext/filters/census/grpc_plugin.h'
#include 'src/cpp/ext/filters/census/measures.h'
    
    // Server
MeasureDouble RpcServerSentBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerSentBytesPerRpcMeasureName,
      'Total bytes sent across all messages per RPC', kUnitBytes);
  return measure;
}
    
    #include 'opencensus/stats/stats.h'
#include 'src/cpp/ext/filters/census/grpc_plugin.h'
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusServerCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusServerCallData : public CallData {
 public:
  // Maximum size of server stats that are sent on the wire.
  static constexpr uint32_t kMaxServerStatsLen = 16;
    }
    
    
    {
    {}  // namespace reflection
}  // namespace grpc

    
    template<>
void SetDataGradToBlob<mshadow::gpu, float>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<float>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  float *data_ptr = reinterpret_cast<float*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_gpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, float)->set_gpu_diff(data_ptr);
}
    
    
    {      out_.data.clear();
      out_.data.push_back(batch_data_);
      out_.data.push_back(batch_label_);
      loc_ += batch_size_;
      return true;
    }
    
    namespace mxnet {
namespace op {
template<>
Operator *CreateOp<cpu>(CaffeLossParam param, int dtype) {
  Operator *op = NULL;
  switch (dtype) {
  case mshadow::kFloat32:
    op = new CaffeLoss<cpu, float>(param);
    break;
  case mshadow::kFloat64:
    op = new CaffeLoss<cpu, double>(param);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 layer is not supported by caffe';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
  return op;
}
    }
    }
    
      void Start() override {
    streams_.reset(new StreamManager<kMaxNumGpus, kNumStreamsPerGpu>());
    task_queue_.reset(new dmlc::ConcurrentBlockingQueue<OprBlock*>());
    io_task_queue_.reset(new dmlc::ConcurrentBlockingQueue<OprBlock*>());
    thread_pool_.reset(new ThreadPool(kNumWorkingThreads,
                                      [this](std::shared_ptr<dmlc::ManualEvent> ready_event) {
                                        ThreadWorker(task_queue_, ready_event); },
                                      true));
    io_thread_pool_.reset(new ThreadPool(1,
                                         [this](std::shared_ptr<dmlc::ManualEvent> ready_event) {
                                           ThreadWorker(io_task_queue_, ready_event); },
                                         true));
  }
    
    
    { private:
  /*! \brief index of the data */
  std::vector<unsigned> index_;
  // label
  TensorVector<3, DType> data_;
  // data
  TensorVector<1, real_t> label_;
};
    
    void VMTOC::forceAlignment(HPHP::Address& addr) {
  folly::MSLGuard g{s_TOC};
  // keep 8-byte alignment
  while (reinterpret_cast<uintptr_t>(addr) % 8 != 0) {
    uint8_t fill_byte = 0xf0;
    m_tocvector->assertCanEmit(sizeof(uint8_t));
    m_tocvector->byte(fill_byte);
    addr = m_tocvector->frontier();
  }
}
    
    template <typename F>
void find(const std::string &root, const std::string& path, bool php,
          const F& callback) {
  auto spath = path.empty() || !isDirSeparator(path[0]) ?
    path : path.substr(1);
    }
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    ///////////////////////////////////////////////////////////////////////////////
    
    template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 1, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 1, rate, fillCols);
}
    
    #include 'hphp/util/stack-trace.h'
    
            template <typename ElementType>
        static const Microsoft::MSR::CNTK::TensorView<ElementType>* GetTensorView(const NDArrayViewPtr& arrayView);
    
    
    {        // First make sure that the underlying matrix is on the right device
        auto matrix = GetMatrix<V1ElemType>();
        matrix->TransferToDeviceIfNotThere(AsCNTKImplDeviceId(m_device), true);
        return reinterpret_cast<ElementType*>(matrix->Data());
    }
    
        size_t NDMask::MaskedCount() const
    {
        auto maskMatrix = GetMatrix();
        std::unique_ptr<char[]> maskData(maskMatrix->CopyToArray());
        return std::count_if(maskData.get(), maskData.get() + maskMatrix->GetNumElements(), [](const char& val) {
            return val == (char)MaskKind::Invalid;
        });
    }
    
    
    {                unpackedShape = unpackedShape.AppendShape({ packedDataLayout->GetNumSequences() });
            }
            else if (!sampleDynamicAxes.empty())
                LogicError('A PackedValue object that does not have a layout cannot have any dynamic axes.');
    
        size_t Variable::CurrentValueTimeStamp() const
    {
        if (!IsParameter() && !IsConstant())
            LogicError('Variable '%S' CurrentValueTimeStamp: Variable must be a Parameter or Constant', AsString().c_str());
        return m_dataFields->m_valueTimeStamp.load(); 
    }
    
        typedef unsigned int INDEXTYPE; // don't use size_t, as this saves HUGE amounts of RAM
    std::vector<INDEXTYPE> map;     // [t] -> t' indices in randomized order
    size_t currentseed;             // seed for current sequence
    size_t randomizationrange;      // t - randomizationrange/2 <= t' < t + randomizationrange/2 (we support this to enable swapping)
                                    // special values (randomizeDisable)
    void Invalidate()
    {
        currentseed = (size_t) -1;
    }
    
    Status WriteBatchBase::DeleteRange(const SliceParts& begin_key,
                                   const SliceParts& end_key) {
  std::string begin_key_buf, end_key_buf;
  Slice begin_key_slice(begin_key, &begin_key_buf);
  Slice end_key_slice(end_key, &end_key_buf);
  return DeleteRange(begin_key_slice, end_key_slice);
}
    
    class CompactionPressureToken : public WriteControllerToken {
 public:
  explicit CompactionPressureToken(WriteController* controller)
      : WriteControllerToken(controller) {}
  virtual ~CompactionPressureToken();
};
    
      // Schedule the specified compaction task in background.
  void ScheduleCompaction(CompactionTask* task) override {
    options_.env->Schedule(&FullCompactor::CompactFiles, task);
  }
    
      bool FilterMergeOperand(int level, const rocksdb::Slice& key,
                          const rocksdb::Slice& existing_value) const override {
    fprintf(stderr, 'FilterMerge(%s)\n', key.ToString().c_str());
    ++merge_count_;
    return existing_value == 'bad';
  }
    
      // atomically apply a set of updates
  {
    WriteBatch batch;
    batch.Delete('key1');
    batch.Put('key2', value);
    s = db->Write(WriteOptions(), &batch);
  }
    
    Status GetStringFromDBOptions(std::string* opts_str,
                              const DBOptions& db_options,
                              const std::string& delimiter = ';  ');
    
    #pragma once
    
      // Return a new block flush policy that flushes data blocks by data size.
  // FlushBlockPolicy may need to access the metadata of the data block
  // builder to determine when to flush the blocks.
  //
  // Callers must delete the result after any database that is using the
  // result has been closed.
  virtual FlushBlockPolicy* NewFlushBlockPolicy(
      const BlockBasedTableOptions& table_options,
      const BlockBuilder& data_block_builder) const = 0;
    
    /*
 * ThreadPool is a component that will spawn N background threads that will
 * be used to execute scheduled work, The number of background threads could
 * be modified by calling SetBackgroundThreads().
 * */
class ThreadPool {
 public:
  virtual ~ThreadPool() {}
    }
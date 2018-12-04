
        
          auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = pretransposed_weight
      ? size_from_dim_(canonical_axis_w, GetDimsVector(in[1]))
      : size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    #endif // CAFFE2_OPERATORS_FREE_OP_H_

    
    OPERATOR_SCHEMA(HalfToFloat)
    .NumInputs(1)
    .NumOutputs(1)
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          vector<TensorShape> out;
          const TensorShape& X = in[0];
          out.push_back(X);
          out[0].set_data_type(TensorProto_DataType_FLOAT);
    }
    
    /*!
 * \brief source function that generate output based on env
 *  The result container is pre-allocated with the correct shape.
 * \param env The Environment arguments.
 * \param ret The containter to store return value.
 * \param req The requirement to stroe the ret.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*SourceFunction)(const EnvArguments& env,
                               TBlob* ret,
                               OpReqType req,
                               RunContext ctx);
    
    /**
 * \brief The interface to convert mxnet's tensor to caffe's blob
 * \brief called in caffe_operator_inl.h
 */
template<typename Device, typename Dtype>
void TBlob2CaffeBlob(caffeMemoryTypes memType,
                     typename std::vector< ::caffe::Blob<Dtype>*>::iterator blob,
                     typename std::vector<TBlob>::const_iterator tblob,
                     int n = 1) {
  for (int i = 0; i < n; ++i, ++blob, ++tblob) {
    (*blob)->Reshape(TShape2Vector((*tblob).shape_));
    SetDataGradToBlob<Device, Dtype>(memType, blob, tblob);
  }
}
    
    DMLC_REGISTER_PARAMETER(CaffeOpParam);
    
    
    { private:
  /*! \brief Concurrency for thread pool */
  static constexpr std::size_t kNumWorkingThreads = 16;
  /*! \brief Maximum number of GPUs */
  static constexpr std::size_t kMaxNumGpus = 16;
  /*!\brief number of streams allocated for each GPU */
  static constexpr std::size_t kNumStreamsPerGpu = 16;
  /*!
   * \brief Streams.
   */
  std::unique_ptr<StreamManager<kMaxNumGpus, kNumStreamsPerGpu>> streams_;
  /*!
   * \brief Task queues.
   */
  std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> task_queue_;
  std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> io_task_queue_;
  /*!
   * \brief Thread pools.
   */
  std::unique_ptr<ThreadPool> thread_pool_;
  std::unique_ptr<ThreadPool> io_thread_pool_;
  /*!
   * \brief Worker.
   * \param task_queue Queue to work on.
   *
   * The method to pass to thread pool to parallelize.
   */
  void ThreadWorker(std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> task_queue,
                    const std::shared_ptr<dmlc::ManualEvent>& ready_event) {
    OprBlock* opr_block;
    ready_event->signal();
    while (task_queue->Pop(&opr_block)) {
      DoExecute(opr_block);
    }
  }
  /*!
   * \brief Execute an operation.
   * \param opr_block The operator block.
   */
  void DoExecute(OprBlock* opr_block) {
    assert(opr_block->wait.load() == 0);
    if (opr_block->ctx.dev_mask() == gpu::kDevMask) {
      #if MXNET_USE_CUDA
      CUDA_CALL(cudaSetDevice(opr_block->ctx.dev_id));
      #else   // MXNET_USE_CUDA
      LOG(FATAL) << 'Please compile with CUDA enabled';
      #endif  // MXNET_USE_CUDA
    }
    bool is_copy = (opr_block->opr->prop == FnProperty::kCopyFromGPU ||
                    opr_block->opr->prop == FnProperty::kCopyToGPU);
    auto&& rctx = is_copy
        ? streams_->GetIORunContext(opr_block->ctx)
        : streams_->GetRunContext(opr_block->ctx);
    this->ExecuteOprBlock(rctx, opr_block);
  }
  /*!
   * \brief Push the operation to the queue.
   * \param opr_block The operator block.
   */
  void DoPushToQueue(OprBlock* opr_block) {
    switch (opr_block->opr->prop) {
      case FnProperty::kCopyFromGPU:
      case FnProperty::kCopyToGPU: {
        io_task_queue_->Push(opr_block);
        break;
      }
      default: {
        task_queue_->Push(opr_block);
        break;
      }
    }
  }
};
    
      inline TBlob AsIdxBlob(const dmlc::Row<uint64_t>& row) {
    const uint64_t* ptr = row.index;
    TShape shape(mshadow::Shape1(row.length));
    return TBlob((int64_t*) ptr, shape, cpu::kDevMask, mshadow::kInt64);  // NOLINT(*)
  }
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    void Assembler::limmediate(const Reg64& rt, int64_t imm64,
                           ImmType immt, bool immMayChange) {
  static_assert(
      std::is_unsigned<
        decltype(HPHP::RuntimeOption::EvalPPC64MinTOCImmSize)>::value,
      'RuntimeOption::EvalPPC64MinTOCImmSize is expected to be unsigned.');
  always_assert(HPHP::RuntimeOption::EvalPPC64MinTOCImmSize <= 64);
    }
    
      // Label variants
    
    inline APCLocalArray::APCLocalArray(const APCArray* source)
  : ArrayData(kApcKind)
  , m_arr(source)
{
  m_size = m_arr->size();
  source->reference();
  tl_heap->addApcArray(this);
  memset(localCache(), static_cast<data_type_t>(KindOfUninit),
         m_size * sizeof(TypedValue));
  assertx(hasExactlyOneRef());
}
    
    bool PlainDirectory::isValid() const {
  return m_dir;
}
    
    inline void ExecutionContext::write(const char* s) {
  write(s, strlen(s));
}
    
    //////////////////////////////////////////////////////////////////////
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
  int64_t readImpl(char *buffer, int64_t length) override;
  int getc() override;
  int64_t writeImpl(const char *buffer, int64_t length) override;
  bool seek(int64_t offset, int whence = SEEK_SET) override;
  int64_t tell() override;
  bool eof() override;
  bool rewind() override;
  bool flush() override;
  bool truncate(int64_t size) override;
    
    /**
 * @brief A simple ConfigParserPlugin for feature vector dictionary keys.
 */
class FeatureVectorsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
    }
    
    #include <osquery/config.h>
#include <osquery/registry_factory.h>
    
    #include 'osquery/config/parsers/prometheus_targets.h'
    
      const auto& doc = c.getParser('options')->getData().doc()['options'];
    
          std::string old_query = '';
      getDatabaseValue(kQueries, kConfigViews + name, old_query);
      erase_views.erase(name);
      if (old_query == query) {
        continue;
      }
    
    
    {  // And of the column has constraints:
  EXPECT_TRUE(cm['path'].notExistsOrMatches('some'));
  EXPECT_FALSE(cm['path'].notExistsOrMatches('not_some'));
  EXPECT_TRUE(cm['path'].exists());
  EXPECT_TRUE(cm['path'].existsAndMatches('some'));
}
    
    
    {  // Similarly deregistering closes the handle.
  EventFactory::deregisterEventPublisher('inotify');
  EXPECT_FALSE(event_pub->isHandleOpen());
}
    
    struct Statistics {
  std::string name_;
  StatisticsFunc* compute_;
    }
    
    #include <cstdlib>
#include <ostream>
#include <cmath>
    
    
    {}  // end namespace benchmark
    
      if (!printed_header_) {
    // save the names of all the user counters
    for (const auto& run : reports) {
      for (const auto& cnt : run.counters) {
        user_counter_names_.insert(cnt.first);
      }
    }
    }
    
    inline bool Regex::Init(const std::string& spec, std::string* error) {
#ifdef BENCHMARK_HAS_NO_EXCEPTIONS
  ((void)error); // suppress unused warning
#else
  try {
#endif
    re_ = std::regex(spec, std::regex_constants::extended);
    init_ = true;
#ifndef BENCHMARK_HAS_NO_EXCEPTIONS
  } catch (const std::regex_error& e) {
    if (error) {
      *error = e.what();
    }
  }
#endif
  return init_;
}
    
    double BenchmarkReporter::Run::GetAdjustedCPUTime() const {
  double new_time = cpu_accumulated_time * GetTimeUnitMultiplier(time_unit);
  if (iterations != 0) new_time /= static_cast<double>(iterations);
  return new_time;
}
    
    
    {void SleepForSeconds(double seconds) {
  SleepForMicroseconds(static_cast<int>(seconds * kNumMicrosPerSecond));
}
#endif  // BENCHMARK_OS_WINDOWS
}  // end namespace benchmark

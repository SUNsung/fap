
        
        base::StringPiece GetStringResource(int resource_id) {
  return ResourceBundle::GetSharedInstance().GetRawDataResource(resource_id);
}
    
    class ObjectManager;
    
    
    {} // namespace extensions
#endif

    
    bool AuthPropertyIterator::operator==(const AuthPropertyIterator& rhs) const {
  if (property_ == nullptr || rhs.property_ == nullptr) {
    return property_ == rhs.property_;
  } else {
    return index_ == rhs.index_;
  }
}
    
    #include <grpc/support/port_platform.h>
    
    void FilterTrailingMetadata(grpc_metadata_batch* b, uint64_t* elapsed_time) {
  if (b->idx.named.grpc_server_stats_bin != nullptr) {
    ServerStatsDeserialize(
        reinterpret_cast<const char*>(GRPC_SLICE_START_PTR(
            GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md))),
        GRPC_SLICE_LENGTH(GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md)),
        elapsed_time);
    grpc_metadata_batch_remove(b, b->idx.named.grpc_server_stats_bin);
  }
}
    
    #include 'absl/strings/string_view.h'
#include 'absl/time/time.h'
#include 'src/cpp/ext/filters/census/channel_filter.h'
#include 'src/cpp/ext/filters/census/context.h'
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetInt(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    // Reads the CPU stats (in a pair of busy and total numbers) from the system.
// The units of the stats should be the same.
std::pair<uint64_t, uint64_t> GetCpuStatsImpl();
    
    #if !defined(GPR_LINUX) && !defined(GPR_WINDOWS) && !defined(GPR_APPLE)
    
    namespace grpc {
    }
    
    
    {}  // namespace grpc
    
    system_clock::time_point Timespec2Timepoint(gpr_timespec t) {
  if (gpr_time_cmp(t, gpr_inf_future(t.clock_type)) == 0) {
    return system_clock::time_point::max();
  }
  t = gpr_convert_clock_type(t, GPR_CLOCK_REALTIME);
  system_clock::time_point tp;
  tp += duration_cast<system_clock::time_point::duration>(seconds(t.tv_sec));
  tp +=
      duration_cast<system_clock::time_point::duration>(nanoseconds(t.tv_nsec));
  return tp;
}
    
      std::string Key(int i) {
    char buf[100];
    snprintf(buf, sizeof(buf), 'key%06d', i);
    return std::string(buf);
  }
    
    #include 'db/builder.h'
    
    #include <stdint.h>
#include 'leveldb/db.h'
#include 'db/dbformat.h'
    
    typedef uint64_t SequenceNumber;
    
      // When user keys are different, but correctly ordered
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('hello', 200, kTypeValue)));
    
    #ifndef STORAGE_LEVELDB_DB_LOG_READER_H_
#define STORAGE_LEVELDB_DB_LOG_READER_H_
    
    #endif  // STORAGE_LEVELDB_DB_MEMTABLE_H_

    
    
    {
    {  void ArchiveFile(const std::string& fname) {
    // Move into another directory.  E.g., for
    //    dir/foo
    // rename to
    //    dir/lost/foo
    const char* slash = strrchr(fname.c_str(), '/');
    std::string new_dir;
    if (slash != nullptr) {
      new_dir.assign(fname.data(), slash - fname.data());
    }
    new_dir.append('/lost');
    env_->CreateDir(new_dir);  // Ignore error
    std::string new_file = new_dir;
    new_file.append('/');
    new_file.append((slash == nullptr) ? fname.c_str() : slash + 1);
    Status s = env_->RenameFile(fname, new_file);
    Log(options_.info_log, 'Archiving %s: %s\n',
        fname.c_str(), s.ToString().c_str());
  }
};
}  // namespace
    
    TableCache::TableCache(const std::string& dbname,
                       const Options& options,
                       int entries)
    : env_(options.env),
      dbname_(dbname),
      options_(options),
      cache_(NewLRUCache(entries)) {
}
    
    #ifndef STORAGE_LEVELDB_DB_VERSION_EDIT_H_
#define STORAGE_LEVELDB_DB_VERSION_EDIT_H_
    
    // WriteBatchInternal provides static methods for manipulating a
// WriteBatch that we don't want in the public WriteBatch interface.
class WriteBatchInternal {
 public:
  // Return the number of entries in the batch.
  static int Count(const WriteBatch* batch);
    }
    
     public:
  enum Order {
    SEQUENTIAL,
    RANDOM
  };
  enum DBState {
    FRESH,
    EXISTING
  };
    
    
  bool ReadProtoFromTextContent(const std::string& text,
                                ::google::protobuf::Message* proto) const {
    bool success = google::protobuf::TextFormat::ParseFromString(text, proto);
    return success;
  }
    
    
    {
    {
    {  /*!
   * \brief Worker threads.
   */
  std::vector<std::thread> worker_threads_;
  /*!
   * \brief Startup synchronization objects
   */
  std::list<std::shared_ptr<dmlc::ManualEvent>> ready_events_;
  /*!
   * \brief Disallow default construction.
   */
  ThreadPool() = delete;
  /*!
   * \brief Disallow copy construction and assignment.
   */
  DISALLOW_COPY_AND_ASSIGN(ThreadPool);
};
}  // namespace engine
}  // namespace mxnet
#endif  // MXNET_ENGINE_THREAD_POOL_H_

    
      // Note that out is of the same shape as the transpose of
  // the Khatri-Rao product
  //
  // When input is transposed, we could first put the transpose of
  // the Khatri-Rao product in out, then call the linear solver, which
  // will update the out's content to the final result;
  //
  // If the input is not transposed, we need to create an intermediate
  // tensor to store the Khatri-Rao product, call the linear solver with
  // MXNET_LAPACK_COL_MAJOR as the matrix layout, and transpose
  // the final result into out
    
       out = data / sqrt(data.shape[-1])
    
    #include './crop-inl.h'
    
      virtual void Forward(const OpContext &ctx,
                       const std::vector<TBlob> &in_data,
                       const std::vector<OpReqType> &req,
                       const std::vector<TBlob> &out_data,
                       const std::vector<TBlob> &aux_args) {
    using namespace mshadow;
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 3U);
    Stream<gpu> *s = ctx.get_stream<gpu>();
    Tensor<gpu, 4, DType> data = in_data[st::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> out = out_data[st::kOut].get<gpu, 4, DType>(s);
    Shape<3> loc_shape = Shape3(data.size(0), 2, 3);
    Shape<4> grid_shape = Shape4(out.size(0), out.size(2), out.size(3), 2);
    Tensor<gpu, 3, DType> loc = in_data[st::kLoc].get_with_shape<gpu, 3, DType>(loc_shape, s);
    Tensor<gpu, 4, DType> grid = out_data[st::kGridSrc]
                                .get_with_shape<gpu, 4, DType>(grid_shape, s);
    if (!init_cudnn_) {
     Init(s, in_data, out_data);
    }
    CHECK_EQ(data.CheckContiguous(), true);
    CHECK_EQ(out.CheckContiguous(), true);
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    if (param_.transform_type == st::kAffine) {
      CUDNN_CALL(cudnnSpatialTfGridGeneratorForward(s->dnn_handle_,
                                                    st_desc_,
                                                    loc.dptr_,
                                                    grid.dptr_));
    }
    CUDNN_CALL(cudnnSpatialTfSamplerForward(s->dnn_handle_,
                                            st_desc_,
                                            &alpha,
                                            in_desc_,
                                            data.dptr_,
                                            grid.dptr_,
                                            &beta,
                                            out_desc_,
                                            out.dptr_));
  }
    
    DMLC_REGISTER_PARAMETER(NDArrayOpParam);
    
    
    {
    {NNVM_REGISTER_OP(IdentityAttachKLSparseReg)
.set_attr<nnvm::FSetInputVarAttrOnCompose>('FSetInputVarAttrOnCompose',
    [](const nnvm::NodeAttrs& attrs, nnvm::NodePtr var, const int index) {
      if (var->attrs.dict.find('__init__') != var->attrs.dict.end()) return;
      if (index == 1) {
        var->attrs.dict['__init__'] = '[\'zero\', {}]';
      }
    });
}  // namespace op
}  // namespace mxnet
    
    
    {
    {    private:
        std::wstring m_activityName;
        winrt::Windows::Foundation::Diagnostics::LoggingChannel m_channel;
        winrt::Windows::Foundation::Diagnostics::LoggingFields m_fields;
        winrt::Windows::Foundation::Diagnostics::LoggingActivity m_activity;
    };
}

    
    
    {}
    
    
    {  /**
   * Execute a debugger action.
   */
  virtual String debuggerVerb(const std::string& /*verb*/,
                              const std::vector<std::string>& /*args*/) {
    return String();
  }
};
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/mem-file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include <folly/String.h>
#include <folly/portability/SysStat.h>
#include <folly/portability/Unistd.h>
    
    req::ptr<Directory> GlobStreamWrapper::opendir(const String& path) {
  const char* prefix = 'glob://';
  const char* path_str = path.data();
  int path_len = path.length();
    }
    
    #ifndef HPHP_GLOB_STREAM_WRAPPER_H
#define HPHP_GLOB_STREAM_WRAPPER_H
    
    /*
 * If the given AtomicHashMap has more than one submap allocated, log a perf
 * warning with its name.
 *
 * A single unique done flag should exist for each map being checked, to avoid
 * logging more than once (process, map) pair.
 */
template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done);
    
    bool Waves3D::initWithDuration(float duration, const Size& gridSize, unsigned int waves, float amplitude)
{
    if (Grid3DAction::initWithDuration(duration, gridSize))
    {
        _waves = waves;
        _amplitude = amplitude;
        _amplitudeRate = 1.0f;
    }
    }
    
    // main loop
void ActionManager::update(float dt)
{
    for (tHashElement *elt = _targets; elt != nullptr; )
    {
        _currentTarget = elt;
        _currentTargetSalvaged = false;
    }
    }
    
    http://www.cocos2d-x.org
    
    @since v0.99.5
@js cc.animationCache
*/
class CC_DLL AnimationCache : public Ref
{
public:
    /**
     * @js ctor
     */
    AnimationCache();
    /**
     * @js NA
     * @lua NA
     */
    ~AnimationCache();
    /** Returns the shared instance of the Animation cache 
	 @js NA
	*/
    static AnimationCache* getInstance();
    }
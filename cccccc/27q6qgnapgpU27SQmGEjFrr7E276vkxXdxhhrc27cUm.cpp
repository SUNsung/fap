
        
        				if (PathFileExists(szArgList[i + 1]))
				{
					cmderOptions.cmderStart = szArgList[i + 1];
					i++;
				}
				else
				{
					MessageBox(NULL, szArgList[i + 1], L'/START - Folder does not exist!', MB_OK);
				}
			}
			else if (_wcsicmp(L'/task', szArgList[i]) == 0)
			{
				cmderOptions.cmderTask = szArgList[i + 1];
				i++;
			}
			else if (_wcsicmp(L'/single', szArgList[i]) == 0)
			{
				cmderOptions.cmderSingle = true;
			}
			else if (_wcsicmp(L'/m', szArgList[i]) == 0)
			{
				cmderOptions.cmderUserCfg = false;
			}
			else if (_wcsicmp(L'/register', szArgList[i]) == 0)
			{
				cmderOptions.registerApp = true;
				cmderOptions.unRegisterApp = false;
				if (szArgList[i + 1] != NULL)
				{
					if (_wcsicmp(L'all', szArgList[i + 1]) == 0 || _wcsicmp(L'user', szArgList[i + 1]) == 0)
					{
						cmderOptions.cmderRegScope = szArgList[i + 1];
						i++;
					}
				}
			}
			else if (_wcsicmp(L'/unregister', szArgList[i]) == 0)
			{
				cmderOptions.unRegisterApp = true;
				cmderOptions.registerApp = false;
				if (szArgList[i + 1] != NULL)
				{
					if (_wcsicmp(L'all', szArgList[i + 1]) == 0 || _wcsicmp(L'user', szArgList[i + 1]) == 0)
					{
						cmderOptions.cmderRegScope = szArgList[i + 1];
						i++;
					}
				}
			}
			else if (cmderOptions.cmderStart == L'')
			{
				int len = wcslen(szArgList[i]);
				if (wcscmp(&szArgList[i][len - 1], L'\'') == 0)
				{
					szArgList[i][len - 1] = '\0';
				}
    
    
    {
    {    std::vector<T> ret(ret_index.size());
    for (size_t i = 0; i < ret_index.size(); ++i) {
      ret[i] = all_data[ret_index[i]];
    }
    return ret;
  }
  /*!
   * \brief create OperatorProperty
   * \param type_name the type string of the OperatorProperty
   * \return a new constructed OperatorProperty
   */
  static OperatorProperty *Create(const char* type_name);
  /*! \return execution type of the operator */
  virtual ExecType exec_type() const {
    return ExecType::kSync;
  }
};
    
    /*!
 * \brief assign the expression to out according to request
 * \param out the data to be assigned
 * \param req the assignment request
 * \param exp the expression
 * \tparam OType output type
 * \tparam Exp expression type
 */
#define ASSIGN_DISPATCH(out, req, exp)  \
  {                                     \
    switch (req) {                      \
      case kNullOp:                     \
        break;                          \
      case kWriteTo:                    \
      case kWriteInplace:               \
        (out) = (exp);                  \
        break;                          \
      case kAddTo:                      \
        (out) += (exp);                 \
        break;                          \
      default:                          \
        LOG(FATAL) << 'not reached';    \
    }                                   \
  }
    
    /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
    template<>
void SetDataGradToBlob<mshadow::cpu, double>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<double>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  double *data_ptr = reinterpret_cast<double*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_cpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, double)->set_cpu_diff(data_ptr);
}
    
    TShape Vector2TShape(const std::vector<int> &vec_int);
std::vector<int> TShape2Vector(const TShape &tshape);
    
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
    
    
    { private:
  CaffeOpParam param_;
  ::caffe::Layer<Dtype> *caffeOp_;
  std::vector< ::caffe::Blob<Dtype> *> bot_, top_, wei_;
  std::vector<bool> flags_;
  bool init_w_, init_wd_, setup_;
};  // class CaffeOp
    
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
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
    
    {
    {}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_INST_VECTOR_H_

    
      // See documentation in compaction_picker.h
  // REQUIRES: DB mutex held
  bool NeedsCompaction() const;
  // REQUIRES: DB mutex held
  Compaction* PickCompaction(const MutableCFOptions& mutable_options,
                             LogBuffer* log_buffer);
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
    std::unique_ptr<WriteControllerToken> WriteController::GetStopToken() {
  ++total_stopped_;
  return std::unique_ptr<WriteControllerToken>(new StopWriteToken(this));
}
    
    #include <stdint.h>
    
    // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
    // This is an example interface of external-compaction algorithm.
// Compaction algorithm can be implemented outside the core-RocksDB
// code by using the pluggable compaction APIs that RocksDb provides.
class Compactor : public EventListener {
 public:
  // Picks and returns a compaction task given the specified DB
  // and column family.  It is the caller's responsibility to
  // destroy the returned CompactionTask.  Returns 'nullptr'
  // if it cannot find a proper compaction task.
  virtual CompactionTask* PickCompaction(
      DB* db, const std::string& cf_name) = 0;
    }
    
      s = db->Get(ReadOptions(), 'key1', &value);
  assert(s.IsNotFound());
    
    // Take a default PlainTableOptions 'table_options' in addition to a
// map 'opts_map' of option name to option value to construct the new
// PlainTableOptions 'new_table_options'.
//
// @param table_options the default options of the output 'new_table_options'.
// @param opts_map an option name to value map for specifying how
//     'new_table_options' should be set.
// @param new_table_options the resulting options based on 'table_options'
//     with the change specified in 'opts_map'.
// @param input_strings_escaped when set to true, each escaped characters
//     prefixed by '\' in the values of the opts_map will be further converted
//     back to the raw string before assigning to the associated options.
// @param ignore_unknown_options when set to true, unknown options are ignored
//     instead of resulting in an unknown-option error.
// @return Status::OK() on success.  Otherwise, a non-ok status indicating
//     error will be returned, and 'new_table_options' will be set to
//     'table_options'.
Status GetPlainTableOptionsFromMap(
    const PlainTableOptions& table_options,
    const std::unordered_map<std::string, std::string>& opts_map,
    PlainTableOptions* new_table_options, bool input_strings_escaped = false,
    bool ignore_unknown_options = false);
    
    // FlushBlockPolicy provides a configurable way to determine when to flush a
// block in the block based tables,
class FlushBlockPolicy {
 public:
  // Keep track of the key/value sequences and return the boolean value to
  // determine if table builder should flush current data block.
  virtual bool Update(const Slice& key,
                      const Slice& value) = 0;
    }
    
    
    {  // time spent in open() and fopen().
  uint64_t open_nanos;
  // time spent in fallocate().
  uint64_t allocate_nanos;
  // time spent in write() and pwrite().
  uint64_t write_nanos;
  // time spent in read() and pread()
  uint64_t read_nanos;
  // time spent in sync_file_range().
  uint64_t range_sync_nanos;
  // time spent in fsync
  uint64_t fsync_nanos;
  // time spent in preparing write (fallocate etc).
  uint64_t prepare_write_nanos;
  // time spent in Logger::Logv().
  uint64_t logger_nanos;
};
    
    #include <stdint.h>
#include <cstddef>
#include <map>
#include <string>
#include <utility>
#include <vector>
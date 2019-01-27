
        
        #endif // BITCOIN_REVERSELOCK_H

    
    static void secp256k1_ge_set_all_gej_var(secp256k1_ge *r, const secp256k1_gej *a, size_t len, const secp256k1_callback *cb) {
    secp256k1_fe *az;
    secp256k1_fe *azi;
    size_t i;
    size_t count = 0;
    az = (secp256k1_fe *)checked_malloc(cb, sizeof(secp256k1_fe) * len);
    for (i = 0; i < len; i++) {
        if (!a[i].infinity) {
            az[count++] = a[i].z;
        }
    }
    }
    
    const UniValue& UniValue::get_obj() const
{
    if (typ != VOBJ)
        throw std::runtime_error('JSON value is not an object as expected');
    return *this;
}
    
    	// Check for machine-specific then user config source file.
	PathCombine(cpuCfgPath, userConfigDirPath, L'ConEmu-%COMPUTERNAME%.xml');
	ExpandEnvironmentStrings(cpuCfgPath, cpuCfgPath, sizeof(cpuCfgPath) / sizeof(cpuCfgPath[0]));
    
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
    
    #endif  // PLUGIN_CAFFE_CAFFE_COMMON_H_

    
    // specialize define for Layer Parameter
template<>
class FieldEntry<caffe::LayerParameter>
    : public FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> {
 public:
  // parent class
  typedef FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> Parent;
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
    
        caffe::TBlob2CaffeBlob<xpu, Dtype>(caffe::Data,
                                       bot_.begin(),
                                       in_data.begin(),
                                       param_.num_data);
    caffe::TBlob2CaffeBlob<xpu, Dtype>(caffe::Data,
                                       top_.begin(),
                                       out_data.begin(),
                                       param_.num_out);
    CaffeOpSetup();
    // Init caffe's weight pointer
    if (!init_w_) {
      init_w_ = true;
      caffe::TBlob2CaffeBlob<xpu, Dtype>(caffe::Data,
                                         wei_.begin(),
                                         in_data.begin() + param_.num_data,
                                         param_.num_weight);
      caffe::SetOpBlobs(caffeOp_, wei_);
    }
    if (ctx.is_train)
      MXCAFFELAYER(caffeOp_, Dtype)->SetPhase(::caffe::TRAIN);
    else
      MXCAFFELAYER(caffeOp_, Dtype)->SetPhase(::caffe::TEST);
    caffeOp_->Forward(bot_, top_);
    
    // DO_BIND_DISPATCH comes from static_operator_common.h
Operator *CaffeOpProp::CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
  std::vector<int> out_type, aux_type;
  std::vector<TShape> out_shape, aux_shape;
  out_type.resize(this->ListOutputs().size());
  out_shape.resize(this->ListOutputs().size());
  aux_type.resize(this->ListAuxiliaryStates().size());
  aux_shape.resize(this->ListAuxiliaryStates().size());
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0]);
}
    
    /*!
 * \brief Thread pool.
 */
class ThreadPool {
 public:
  /*! \brief Signal event upon destruction, even for exceptions (RAII) */
  struct SetReadyOnDestroy {
    explicit inline SetReadyOnDestroy(const std::shared_ptr<dmlc::ManualEvent>& event)
      : event_(event) {
    }
    inline ~SetReadyOnDestroy() {
      if (event_) {
        event_->signal();
      }
    }
    std::shared_ptr<dmlc::ManualEvent>  event_;
  };
    }
    
    
    {
    {
    { private:
  /*! \brief base iterator */
  IIterator<DataInst> *base_;
  /*! \brief data shape */
  std::vector<TShape> shape_;
  /*! \brief unit size */
  std::vector<size_t> unit_size_;
  // initialize the data holder by using from the first batch.
  inline void InitData(const DataInst& first_batch) {
    shape_.resize(first_batch.data.size());
    data_.resize(first_batch.data.size());
    unit_size_.resize(first_batch.data.size());
    for (size_t i = 0; i < first_batch.data.size(); ++i) {
      TShape src_shape = first_batch.data[i].shape_;
      int src_type_flag = first_batch.data[i].type_flag_;
      // init object attributes
      std::vector<index_t> shape_vec;
      shape_vec.push_back(param_.batch_size);
      for (index_t dim = 0; dim < src_shape.ndim(); ++dim) {
        shape_vec.push_back(src_shape[dim]);
      }
      TShape dst_shape(shape_vec.begin(), shape_vec.end());
      shape_[i] = dst_shape;
      data_[i].resize(mshadow::Shape1(dst_shape.Size()), src_type_flag);
      unit_size_[i] = src_shape.Size();
      out_.data.push_back(TBlob(data_[i].dptr_, dst_shape, cpu::kDevMask, src_type_flag, 0));
    }
  }
};  // class BatchLoader
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_ITER_BATCHLOADER_H_

    
      virtual bool Next(void) {
    if (out_ != nullptr) {
      recycle_queue_.push(out_); out_ = nullptr;
    }
    // do recycle
    if (recycle_queue_.size() == param_.prefetch_buffer) {
      DataBatch *old_batch =  recycle_queue_.front();
      // can be more efficient on engine
      for (NDArray& arr : old_batch->data) {
        arr.WaitToWrite();
      }
      recycle_queue_.pop();
      iter.Recycle(&old_batch);
    }
    return iter.Next(&out_);
  }
  virtual const DataBatch &Value(void) const {
    return *out_;
  }
    
            const auto learningRate = ElementType(LearningRate(trainingSampleCount));
        const auto momentum = ElementType(MomentumValueForMB(trainingSampleCount));
        const auto unitGainFactor = UnitGainFactor<ElementType>(trainingSampleCount);
    
    namespace CNTK
{
    static Matrix<char>* AllocateMatrix(const NDShape& viewShape, const DeviceDescriptor& device)
    {
        auto matrixDims = GetMatrixDimensions(viewShape);
        return new Matrix<char>(matrixDims.first, matrixDims.second, AsCNTKImplDeviceId(device));
    }
    }
    
        static void noOpAlarmHandler(int /*signum*/)
    {
        // this handler is intentionally NO-OP
        // the side effect of execution this handler
        // will be a termination of fcntl call below with EINTR
    }
    
        // this returns the map directly (read-only) and will lazily initialize it for a given seed
    const std::vector<INDEXTYPE>& operator()(size_t seed) // throw()
    {
        // if wrong seed then lazily recache the sequence
        if (seed != currentseed && randomizationrange != randomizeDisable)
        {
            // test for numeric overflow
            if (map.size() - 1 != (INDEXTYPE)(map.size() - 1))
                RuntimeError('RandomOrdering: INDEXTYPE has too few bits for this corpus');
            // 0, 1, 2...
            foreach_index (t, map)
                map[t] = (INDEXTYPE) t;
    }
    }
    
    
ExtensionManager_getQueryColumns_presult::~ExtensionManager_getQueryColumns_presult() throw() {
}
    
    
    {
    {}} // namespace
    
    QueryData getTestDBExpectedResults() {
  QueryData d;
  Row row1;
  row1['username'] = 'mike';
  row1['age'] = '23';
  d.push_back(row1);
  Row row2;
  row2['username'] = 'matt';
  row2['age'] = '24';
  d.push_back(row2);
  return d;
}
    
    // getSerializedQueryData() return an std::pair where pair->first is a string
// which should serialize to pair->second. pair->second should
// deserialize to pair->first. getSerializedQueryDataWithColumnOrder
// returns a pair where pair->second is a tree that has a repeated column and
// the child nodes are not in alphabetical order
std::pair<JSON, QueryData> getSerializedQueryData();
std::pair<JSON, QueryData> getSerializedQueryDataWithColumnOrder();
std::pair<std::string, QueryData> getSerializedQueryDataJSON();
    
    class SQLPlugin : public Plugin {
 public:
  /// Run a SQL query string against the SQL implementation.
  virtual Status query(const std::string& query,
                       QueryData& results,
                       bool use_cache) const = 0;
    }
    
    enum class PosixError {
  Unknown = 0,
  PERM = EPERM,
  NOENT = ENOENT,
  SRCH = ESRCH,
  INTR = EINTR,
  IO = EIO,
  NXIO = ENXIO,
  T_BIG = E2BIG,
  NOEXEC = ENOEXEC,
  BADF = EBADF,
  CHILD = ECHILD,
  AGAIN = EAGAIN,
  NOMEM = ENOMEM,
  ACCES = EACCES,
  FAULT = EFAULT,
  NOTBLK = ENOTBLK,
  BUSY = EBUSY,
  EXIST = EEXIST,
  XDEV = EXDEV,
  NODEV = ENODEV,
  NOTDIR = ENOTDIR,
  ISDIR = EISDIR,
  INVAL = EINVAL,
  NFILE = ENFILE,
  MFILE = EMFILE,
  NOTTY = ENOTTY,
  TXTBSY = ETXTBSY,
  FBIG = EFBIG,
  NOSPC = ENOSPC,
  SPIPE = ESPIPE,
  ROFS = EROFS,
  MLINK = EMLINK,
  PIPE = EPIPE,
  DOM = EDOM,
  RANGE = ERANGE,
};
    
    
    {
    {
    {      shell_callback(pArg, 2, &row[0], COLUMN_NAMES, nullptr);
    }
    pretty_print_if_needed(pArg);
  } else {
    fprintf(
        stdout, 'Error %d: %s\n', status.getCode(), status.toString().c_str());
  }
}
    
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
    
      // Set a snapshot at start of transaction
  txn_options.set_snapshot = true;
  txn = txn_db->BeginTransaction(write_options, txn_options);
    
    
    {class DbUndumpTool {
 public:
  bool Run(const UndumpOptions& undump_options,
           rocksdb::Options options = rocksdb::Options());
};
}  // namespace rocksdb
#endif  // ROCKSDB_LITE

    
      static const std::string MicrosToString(uint64_t op_elapsed_time);
    
      // Wait for all threads to finish.
  // Discard those threads that did not start
  // executing
  virtual void JoinAllThreads() = 0;
    
        static BOOST_FORCEINLINE storage_type fetch_add(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        switch (order)
        {
        case memory_order_relaxed:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD_RELAXED(&storage, v));
            break;
        case memory_order_consume:
        case memory_order_acquire:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD_ACQUIRE(&storage, v));
            break;
        case memory_order_release:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD_RELEASE(&storage, v));
            break;
        case memory_order_acq_rel:
        case memory_order_seq_cst:
        default:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD(&storage, v));
            break;
        }
        return v;
    }
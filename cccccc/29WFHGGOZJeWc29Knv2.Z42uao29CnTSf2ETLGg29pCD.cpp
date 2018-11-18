
        
        /**
 * @brief Fills a Blob with values @f$ x \sim U(-a, +a) @f$ where @f$ a @f$ is
 *        set inversely proportional to number of incoming nodes, outgoing
 *        nodes, or their average.
 *
 * A Filler based on the paper [Bengio and Glorot 2010]: Understanding
 * the difficulty of training deep feedforward neuralnetworks.
 *
 * It fills the incoming matrix by randomly sampling uniform data from [-scale,
 * scale] where scale = sqrt(3 / n) where n is the fan_in, fan_out, or their
 * average, depending on the variance_norm option. You should make sure the
 * input blob has shape (num, a, b, c) where a * b * c = fan_in and num * b * c
 * = fan_out. Note that this is currently not the case for inner product layers.
 *
 * TODO(dox): make notation in above comment consistent with rest & use LaTeX.
 */
template <typename Dtype>
class XavierFiller : public Filler<Dtype> {
 public:
  explicit XavierFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    int fan_in = blob->count() / blob->shape(0);
    // Compatibility with ND blobs
    int fan_out = blob->num_axes() > 1 ?
                  blob->count() / blob->shape(1) :
                  blob->count();
    Dtype n = fan_in;  // default to fan_in
    if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_AVERAGE) {
      n = (fan_in + fan_out) / Dtype(2);
    } else if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_FAN_OUT) {
      n = fan_out;
    }
    Dtype scale = sqrt(Dtype(3) / n);
    caffe_rng_uniform<Dtype>(blob->count(), -scale, scale,
        blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    #ifndef CPU_ONLY
  void forward_gpu_gemm(const Dtype* col_input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_gpu_bias(Dtype* output, const Dtype* bias);
  void backward_gpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* col_output);
  void weight_gpu_gemm(const Dtype* col_input, const Dtype* output, Dtype*
      weights);
  void backward_gpu_bias(Dtype* bias, const Dtype* input);
#endif
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include <vector>
    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
    // Adds reference to a type if it is not a reference type,
// otherwise leaves it unchanged.  This is the same as
// tr1::add_reference, which is not widely available yet.
template <typename T>
struct AddReference { typedef T& type; };  // NOLINT
template <typename T>
struct AddReference<T&> { typedef T& type; };  // NOLINT
    
    // We don't want to require the users to write TypesN<...> directly,
// as that would require them to count the length.  Types<...> is much
// easier to write, but generates horrible messages when there is a
// compiler error, as gcc insists on printing out each template
// argument, even if it has the default value (this means Types<int>
// will appear as Types<int, None, None, ..., None> in the compiler
// errors).
//
// Our solution is to combine the best part of the two approaches: a
// user would write Types<T1, ..., TN>, and Google Test will translate
// that to TypesN<T1, ..., TN> internally to make error messages
// readable.  The translation is done by the 'type' member of the
// Types template.
template <typename T1 = internal::None, typename T2 = internal::None,
    typename T3 = internal::None, typename T4 = internal::None,
    typename T5 = internal::None, typename T6 = internal::None,
    typename T7 = internal::None, typename T8 = internal::None,
    typename T9 = internal::None, typename T10 = internal::None,
    typename T11 = internal::None, typename T12 = internal::None,
    typename T13 = internal::None, typename T14 = internal::None,
    typename T15 = internal::None, typename T16 = internal::None,
    typename T17 = internal::None, typename T18 = internal::None,
    typename T19 = internal::None, typename T20 = internal::None,
    typename T21 = internal::None, typename T22 = internal::None,
    typename T23 = internal::None, typename T24 = internal::None,
    typename T25 = internal::None, typename T26 = internal::None,
    typename T27 = internal::None, typename T28 = internal::None,
    typename T29 = internal::None, typename T30 = internal::None,
    typename T31 = internal::None, typename T32 = internal::None,
    typename T33 = internal::None, typename T34 = internal::None,
    typename T35 = internal::None, typename T36 = internal::None,
    typename T37 = internal::None, typename T38 = internal::None,
    typename T39 = internal::None, typename T40 = internal::None,
    typename T41 = internal::None, typename T42 = internal::None,
    typename T43 = internal::None, typename T44 = internal::None,
    typename T45 = internal::None, typename T46 = internal::None,
    typename T47 = internal::None, typename T48 = internal::None,
    typename T49 = internal::None, typename T50 = internal::None>
struct Types {
  typedef internal::Types50<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12,
      T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26,
      T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40,
      T41, T42, T43, T44, T45, T46, T47, T48, T49, T50> type;
};
    
    // The empty template list.
struct Templates0 {};
    
    
// This sample shows how to write a simple unit test for a function,
// using Google C++ testing framework.
//
// Writing a unit test using Google C++ testing framework is easy as 1-2-3:
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
      // Create template
  std::vector<char> tmp(256);
  auto len = snprintf(tmp.data(), tmp.size(), '%s/testXXXXXX', tmpdir);
  tmp.resize(len);
    
    #endif // CAFFE2_OPERATORS_FREE_OP_H_

    
    
    {
    {   private:
    friend class CudaModule;
    /*!
     * \brief constructor
     * \param mod module of this kernel
     * \param mangled_name mangled kernel name
     * \param signature kernel argument signature
     */
    Kernel(const std::shared_ptr<Chunk>& mod,
           const std::string& mangled_name,
           const std::vector<ArgType>& signature);
    /*! \brief mangled kernel name */
    std::string mangled_name_;
    /*! \brief kernel argument signature */
    std::vector<ArgType> signature_;
    /*! \brief module of this kernel */
    std::shared_ptr<Chunk> mod_;
    /*! \brief cached kernel function on each device */
    std::unordered_map<int, CUfunction> func_;
  };
  /*!
   * \brief CudaModule constructor
   * \param source cuda source code.
   * \param exports export symbols before mangling.
   */
  CudaModule(const char* source,
             const std::vector<std::string>& options,
             const std::vector<std::string>& exports)
      : ptr_(std::make_shared<Chunk>(source, options, exports)) {}
  /*!
   * \brief Get cuda kernal from module by name
   * \param name kernel name
   * \param signature kernel signature
   * \return shared pointer to cuda kernel
   */
  std::shared_ptr<Kernel> GetKernel(const std::string& name,
                                    const std::vector<ArgType>& signature);
};
    
    
    {
    {    CHECK_EQ(net_param.layer_size(), 1) << 'Protoxt ' << value <<' is more than one layer';
    default_value_ = caffe::LayerParameter(net_param.layer(0));
    has_default_ = true;
    // return self to allow chaining
    return this->self();
  }
};
    
    #if defined(__CUDACC__)
    Stream<xpu> *s = ctx.get_stream<xpu>();
    // TODO(Haoran): when need cublas handle in stream?
    CHECK_EQ(s->blas_handle_ownership_, Stream<xpu>::OwnHandle)
          << 'Must init CuBLAS handle in stream';
#endif  // __CUDACC__
    
    
    {
    {}  // namespace op
}  // namespace mxnet

    
    
    {        switch (gradientValue->GetDataType())
        {
        case DataType::Float:
            Update<float>(parameter, gradientValue, smoothedGradientValue, trainingSampleCount);
            break;
        case DataType::Double:
            Update<double>(parameter, gradientValue, smoothedGradientValue, trainingSampleCount);
            break;
        case DataType::Float16:
            UpdateHalf(parameter, gradientValue, smoothedGradientValue, trainingSampleCount);
            break;
        default:
            NOT_IMPLEMENTED;
        }
    }
    
            static bool IsUDF(const FunctionPtr& f);
    
    
    {        return CreateMask(sequenceLengths, sequenceStartFlags, device);
    }
    
    // GetLabelMapping - Gets the label mapping from integer index to label type
// returns - a map from numeric datatype to native label type
const std::map<typename DataReader::LabelIdType, typename DataReader::LabelType>& DataReader::GetLabelMapping(const std::wstring&)
{
    NOT_IMPLEMENTED;
}
    
            // add it to the respective node groups based on the tags
        for (auto tag : node->GetTags())
        {
#if 1       // we keep this for a while (we already verified that our samples no longer use this)
            // map legacy names
            if      (tag == L'criteria') tag = L'criterion';
            else if (tag == L'eval'    ) tag = L'evaluation';
#endif
            AddToNodeGroup(tag, node); // tag may be empty, or may have been set by array parameters
        }
    
    
    {  QueryLogItem second_item;
  getDecorations(second_item.decorations);
  ASSERT_EQ(second_item.decorations.size(), 2U);
}
    
        std::string arg_timeout('--timeout');
    arguments.push_back(arg_timeout.c_str());
    arguments.push_back(extensions_timeout.c_str());
    
    TEST_F(QueryTests, test_query_name_updated) {
  // Try to retrieve results from a query that has not executed.
  QueryDataSet previous_qd;
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('will_update_query', query);
  EXPECT_TRUE(cf.isNewQuery());
  EXPECT_TRUE(cf.isNewQuery());
    }
    
    /**
 * @brief The watchdog thread responsible for spawning/monitoring children.
 *
 * The WatcherRunner thread will spawn any autoloaded extensions or optional
 * osquery daemon worker processes. It will then poll for their performance
 * state and kill/respawn osquery child processes if they violate limits.
 */
class WatcherRunner : public InternalRunnable {
 public:
  /**
   * @brief Construct a watcher thread.
   *
   * @param argc The osquery process argc.
   * @param argv The osquery process argv.
   * @param use_worker True if the process should spawn and monitor a worker.
   */
  explicit WatcherRunner(int argc, char** argv, bool use_worker)
      : InternalRunnable('WatcherRunner'),
        argc_(argc),
        argv_(argv),
        use_worker_(use_worker) {
    (void)argc_;
  }
    }
    
    Status deserializeDistributedQueryRequest(const rj::Value& obj,
                                          DistributedQueryRequest& r) {
  if (!obj.HasMember('query') || !obj.HasMember('id') ||
      !obj['query'].IsString() || !obj['id'].IsString()) {
    return Status(1, 'Malformed distributed query request');
  }
    }
    
    #ifdef ROCKSDB_RANGESYNC_PRESENT
Status PosixWritableFile::RangeSync(uint64_t offset, uint64_t nbytes) {
  assert(offset <= std::numeric_limits<off_t>::max());
  assert(nbytes <= std::numeric_limits<off_t>::max());
  if (sync_file_range(fd_, static_cast<off_t>(offset),
      static_cast<off_t>(nbytes), SYNC_FILE_RANGE_WRITE) == 0) {
    return Status::OK();
  } else {
    return IOError('While sync_file_range offset ' + ToString(offset) +
                       ' bytes ' + ToString(nbytes),
                   filename_, errno);
  }
}
#endif
    
    // A simple compaction algorithm that always compacts everything
// to the highest level whenever possible.
class FullCompactor : public Compactor {
 public:
  explicit FullCompactor(const Options options) : options_(options) {
    compact_options_.compression = options_.compression;
    compact_options_.output_file_size_limit =
        options_.target_file_size_base;
  }
    }
    
      // the number of deletion entries before compaction. Deletion entries
  // can disappear after compaction because they expired
  uint64_t num_input_deletion_records;
  // number of deletion records that were found obsolete and discarded
  // because it is not possible to delete any more keys with this entry
  // (i.e. all possible deletions resulting from it have been completed)
  uint64_t num_expired_deletion_records;
    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
    
      // Lookup page cache by page identifier
  //
  // page_key   Page identifier
  // buf        Buffer where the data should be copied
  // size       Size of the page
  virtual Status Lookup(const Slice& key, std::unique_ptr<char[]>* data,
                        size_t* size) = 0;
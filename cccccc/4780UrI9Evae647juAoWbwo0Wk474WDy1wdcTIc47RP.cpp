
        
        
    {  vec.clearBit(63);
  EXPECT_EQ(2u, vec.count());
  EXPECT_EQ(false, vec[63]);
}
    
      /// Create a parameter list with the specified parameters, with no location
  /// info for the parens.
  static ParameterList *create(const ASTContext &C,
                               ArrayRef<ParamDecl*> params) {
    return create(C, SourceLoc(), params, SourceLoc());
  }
 
  /// Create an empty parameter list.
  static ParameterList *createEmpty(const ASTContext &C,
                                    SourceLoc LParenLoc = SourceLoc(),
                                    SourceLoc RParenLoc = SourceLoc()) {
    return create(C, LParenLoc, {}, RParenLoc);
  }
  
  /// Create a parameter list for a single parameter lacking location info.
  static ParameterList *createWithoutLoc(ParamDecl *decl) {
    return create(decl->getASTContext(), decl);
  }
    
      /// Create a scope for an artificial function.
  SILDebugScope(SILLocation Loc);
    
      void appendClosureEntity(const SerializedAbstractClosureExpr *closure);
  
  void appendClosureEntity(const AbstractClosureExpr *closure);
    
    /// RAII class that suppresses diagnostics by temporarily disabling all of
/// the diagnostic consumers.
class DiagnosticSuppression {
  DiagnosticEngine &diags;
  std::vector<DiagnosticConsumer *> consumers;
    }
    
    
    {  for (int i = 0; i < bottom[0]->num(); ++i) {
    caffe_copy(data_datum_dim, &bottom[0]->cpu_data()[i * data_datum_dim],
        &data_blob_.mutable_cpu_data()[i * data_datum_dim]);
    caffe_copy(label_datum_dim, &bottom[1]->cpu_data()[i * label_datum_dim],
        &label_blob_.mutable_cpu_data()[i * label_datum_dim]);
  }
  SaveBlobs();
}
    
    string hdf5_load_string(hid_t loc_id, const string& dataset_name) {
  // Get size of dataset
  size_t size;
  H5T_class_t class_;
  herr_t status = \
    H5LTget_dataset_info(loc_id, dataset_name.c_str(), NULL, &class_, &size);
  CHECK_GE(status, 0) << 'Failed to get dataset info for ' << dataset_name;
  char *buf = new char[size];
  status = H5LTread_dataset_string(loc_id, dataset_name.c_str(), buf);
  CHECK_GE(status, 0)
    << 'Failed to load int dataset with name ' << dataset_name;
  string val(buf);
  delete[] buf;
  return val;
}
    
    
    {  for (int i = 0; i < count; ++i) {
    top_data[i] = std::max(min, std::min(bottom_data[i], max));
  }
}
    
    
    {  void TestLogGradient(const float base, const float scale, const float shift) {
    LogBottomInit();
    LayerParameter layer_param;
    layer_param.mutable_log_param()->set_base(base);
    layer_param.mutable_log_param()->set_scale(scale);
    layer_param.mutable_log_param()->set_shift(shift);
    LogLayer<Dtype> layer(layer_param);
    GradientChecker<Dtype> checker(1e-2, 1e-2);
    checker.CheckGradientEltwise(&layer, blob_bottom_vec_, blob_top_vec_);
  }
};
    
      // Invoked at specific points during an iteration
  class Callback {
   protected:
    virtual void on_start() = 0;
    virtual void on_gradients_ready() = 0;
    }
    
    template <typename Dtype>
const shared_ptr<Layer<Dtype> > Net<Dtype>::layer_by_name(
    const string& layer_name) const {
  shared_ptr<Layer<Dtype> > layer_ptr;
  if (has_layer(layer_name)) {
    layer_ptr = layers_[layer_names_index_.find(layer_name)->second];
  } else {
    layer_ptr.reset((Layer<Dtype>*)(NULL));
    LOG(WARNING) << 'Unknown layer name ' << layer_name;
  }
  return layer_ptr;
}
    
    void read_image(std::ifstream* image_file, std::ifstream* label_file,
        uint32_t index, uint32_t rows, uint32_t cols,
        char* pixels, char* label) {
  image_file->seekg(index * rows * cols + 16);
  image_file->read(pixels, rows * cols);
  label_file->seekg(index + 8);
  label_file->read(label, 1);
}
    
      /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const Datum& datum);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const vector<Datum> & datum_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   */
#ifdef USE_OPENCV
  vector<int> InferBlobShape(const vector<cv::Mat> & mat_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   */
  vector<int> InferBlobShape(const cv::Mat& cv_img);
#endif  // USE_OPENCV
    
    
/// @brief Fills a Blob with constant values @f$ x = 0 @f$.
template <typename Dtype>
class ConstantFiller : public Filler<Dtype> {
 public:
  explicit ConstantFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    const int count = blob->count();
    const Dtype value = this->filler_param_.value();
    CHECK(count);
    for (int i = 0; i < count; ++i) {
      data[i] = value;
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
        response->n_shards = 1;
    if (trace.has()) {
        response->event_log = std::move(*trace).extract_event_log();
    }
    // This is a tad hacky, this just adds a stop event to signal the end of the
    // parallel task.
    
    // EXPECT_DEBUG_DEATH asserts that the given statements die in debug mode.
// The death testing framework causes this to have interesting semantics,
// since the sideeffects of the call are only visible in opt mode, and not
// in debug mode.
//
// In practice, this can be used to test functions that utilize the
// LOG(DFATAL) macro using the following style:
//
// int DieInDebugOr12(int* sideeffect) {
//   if (sideeffect) {
//     *sideeffect = 12;
//   }
//   LOG(DFATAL) << 'death';
//   return 12;
// }
//
// TEST(TestCase, TestDieOr12WorksInDgbAndOpt) {
//   int sideeffect = 0;
//   // Only asserts in dbg.
//   EXPECT_DEBUG_DEATH(DieInDebugOr12(&sideeffect), 'death');
//
// #ifdef NDEBUG
//   // opt-mode has sideeffect visible.
//   EXPECT_EQ(12, sideeffect);
// #else
//   // dbg-mode no visible sideeffect.
//   EXPECT_EQ(0, sideeffect);
// #endif
// }
//
// This will assert that DieInDebugReturn12InOpt() crashes in debug
// mode, usually due to a DCHECK or LOG(DFATAL), but returns the
// appropriate fallback value (12 in this case) in opt mode. If you
// need to test that a function has appropriate side-effects in opt
// mode, include assertions against the side-effects.  A general
// pattern for this is:
//
// EXPECT_DEBUG_DEATH({
//   // Side-effects here will have an effect after this statement in
//   // opt mode, but none in debug mode.
//   EXPECT_EQ(12, DieInDebugOr12(&sideeffect));
// }, 'death');
//
# ifdef NDEBUG
    
    // Gets the content of the stringstream's buffer as an std::string.  Each '\0'
// character in the buffer is replaced with '\\0'.
GTEST_API_ std::string StringStreamToString(::std::stringstream* stream);
    
    #endif  // STORAGE_LEVELDB_DB_DB_ITER_H_

    
    #include <string>
    
      std::string ManifestFileName() {
    std::string current;
    ASSERT_OK(ReadFileToString(env_, CurrentFileName(dbname_), &current));
    size_t len = current.size();
    if (len > 0 && current[len - 1] == '\n') {
      current.resize(len - 1);
    }
    return dbname_ + '/' + current;
  }
    
    
    {  // Changes *key to a short string >= *key.
  // Simple comparator implementations may return with *key unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortSuccessor(std::string* key) const = 0;
};
    
      // Delete the specified directory.
  virtual Status DeleteDir(const std::string& dirname) = 0;
    
      // Create a slice that refers to d[0,n-1].
  Slice(const char* d, size_t n) : data_(d), size_(n) {}
    
      ReadOptions read_options;
  Iterator* iter = db->NewIterator(read_options);
    
    inline bool Snappy_GetUncompressedLength(const char* input, size_t length,
                                         size_t* result) {
#if HAVE_SNAPPY
  return snappy::GetUncompressedLength(input, length, result);
#else
  // Silence compiler warnings about unused arguments.
  (void)input;
  (void)length;
  (void)result;
  return false;
#endif  // HAVE_SNAPPY
}
    
    namespace leveldb {
    }
    
    
    {  Status result = metaindex_handle_.DecodeFrom(input);
  if (result.ok()) {
    result = index_handle_.DecodeFrom(input);
  }
  if (result.ok()) {
    // We skip over any leftover data (just padding for now) in 'input'
    const char* end = magic_ptr + 8;
    *input = Slice(end, input->data() + input->size() - end);
  }
  return result;
}
    
    
    {}  // namespace leveldb
    
    
    {  Iterator* iter;
  if (block != nullptr) {
    iter = block->NewIterator(table->rep_->options.comparator);
    if (cache_handle == nullptr) {
      iter->RegisterCleanup(&DeleteBlock, block, nullptr);
    } else {
      iter->RegisterCleanup(&ReleaseBlock, block_cache, cache_handle);
    }
  } else {
    iter = NewErrorIterator(s);
  }
  return iter;
}
    
    #ifndef STORAGE_LEVELDB_TABLE_TWO_LEVEL_ITERATOR_H_
#define STORAGE_LEVELDB_TABLE_TWO_LEVEL_ITERATOR_H_
    
    
    {
    {
    {                    // Create crop node with offsets but without inputs (will be attached later in resolve phase).
                    nodePtr = builder.Crop(nullptr, nullptr, offsetX, offsetY, name);
                }
                else
                {
                    // We have 4 node inputs (2 crop inputs and 2 equivalence node inputs).
                    nodePtr = builder.Crop(nullptr, nullptr, nullptr, nullptr, name);
                }
            }
            else
            {
                // Just two inputs, must be node inputs which will be attached in the resolve phase below.
                nodePtr = builder.Crop(nullptr, nullptr, name);
            }
            // Done processing in this phase.
            nodeParamStart = 0;
            nodeParamCount = 0;
        }
        else
        {
            // In non-initial phase we just process node inputs below, here we just set inputs of interest.
            nodeParamStart = 0;
            nodeParamCount = nodePtr->GetNumInputs();
        }
    }
    else if (cnNodeType == OperationName2Of(CastNode))
    {
        if (parameter.size() < 1)
            RuntimeError('%ls should have 1 or more parameters (node and cast precision).', cnNodeType.c_str());
    
        // publicly accessible Copy method
    // should only be used for macro expansion
    NDLNode* Copy() const
    {
        NDLNode* ret = new NDLNode(*this);
        return ret;
    }
    
    function<ComputationNetworkPtr(DEVICEID_TYPE)> GetCreateNetworkFn(const ScriptableObjects::IConfigRecord& config)
{
    // createNetwork() is a BrainScript lambda that creates the model
    // We create a C++ wrapper around it, which we then pass to Train().
    auto createNetworkConfigLambda = config[L'createNetwork'].AsPtr<ScriptableObjects::ConfigLambda>();
    return [createNetworkConfigLambda](DEVICEID_TYPE /*deviceId*/)
    {
        // execute the lambda
        vector<ScriptableObjects::ConfigValuePtr> args; // this lambda has no arguments
        ScriptableObjects::ConfigLambda::NamedParams namedArgs;
        let netValue = createNetworkConfigLambda->Apply(move(args), move(namedArgs), L'BuildNetworkFromDescription');
        // typecast the result to the desired type
        return netValue.AsPtr<ComputationNetwork>();
    };
}
    
    #include <string>
#include <chrono>
#include <algorithm>
#if defined(_WIN32)
#include 'io.h'
#include <DelayImp.h>
#pragma comment(lib, 'Delayimp.lib')
#pragma comment(lib, 'shlwapi.lib')
#endif
#include 'buildinfo.h'
#include 'hostname.h'
#ifdef LEAKDETECT
#include 'vld.h' // for memory leak detection
#endif
#include <vector>
#include <iostream>
#include <queue>
#include <set>
#include <memory>
    
        // dict(name, default) for strings
    ConfigValue operator()(const std::wstring& name,
                           const wchar_t* defaultvalue) const
    {
        return operator()(Microsoft::MSR::CNTK::ToLegacyString(Microsoft::MSR::CNTK::ToUTF8(name)), defaultvalue);
    }
    
            virtual void BeginBackprop() override {}
        virtual void BackpropTo(const size_t inputIndex, const FrameRange&) override
        {
            NOT_IMPLEMENTED;
        } // ugh, call Backprop() instead
        virtual void EndBackprop() override {}
    
    
    {    // call the evaluator
    SimpleOutputWriter<ElemType> eval(this->m_net);
    eval.WriteOutput(*m_writer, outNodeNames);
}
    
    protected:
    // learning rate per sample provided outside
    floatargvector m_learningRatesParam;
    intargvector m_learningRatesSpecifiedForMBSize; // 1 for per sample, m_mbSize[] for per MB
    floatargvector m_momentumParam;
    intargvector m_momentumSpecifiedForMBSize;
    bool m_useNesterovMomentum;
    
    
    {    eval->Destroy();
}
    
    /*
 * Class:     org_rocksdb_CompactionJobStats
 * Method:    newCompactionJobStats
 * Signature: ()J
 */
jlong Java_org_rocksdb_CompactionJobStats_newCompactionJobStats(
    JNIEnv*, jclass) {
  auto* compact_job_stats = new rocksdb::CompactionJobStats();
  return reinterpret_cast<jlong>(compact_job_stats);
}
    
    
/*
 * Class:     org_rocksdb_CompactionOptions
 * Method:    newCompactionOptions
 * Signature: ()J
 */
jlong Java_org_rocksdb_CompactionOptions_newCompactionOptions(
    JNIEnv*, jclass) {
  auto* compact_opts = new rocksdb::CompactionOptions();
  return reinterpret_cast<jlong>(compact_opts);
}
    
    /*
 * Class:     org_rocksdb_CompactionOptionsFIFO
 * Method:    setMaxTableFilesSize
 * Signature: (JJ)V
 */
void Java_org_rocksdb_CompactionOptionsFIFO_setMaxTableFilesSize(
    JNIEnv*, jobject, jlong jhandle, jlong jmax_table_files_size) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsFIFO*>(jhandle);
  opt->max_table_files_size = static_cast<uint64_t>(jmax_table_files_size);
}
    
    /*
 * Class:     org_rocksdb_CompactionOptionsUniversal
 * Method:    setStopStyle
 * Signature: (JB)V
 */
void Java_org_rocksdb_CompactionOptionsUniversal_setStopStyle(
    JNIEnv*, jobject, jlong jhandle, jbyte jstop_style_value) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsUniversal*>(jhandle);
  opt->stop_style = rocksdb::CompactionStopStyleJni::toCppCompactionStopStyle(
      jstop_style_value);
}
    
    /*
 * Class:     org_rocksdb_EnvOptions
 * Method:    writableFileMaxBufferSize
 * Signature: (J)J
 */
jlong Java_org_rocksdb_EnvOptions_writableFileMaxBufferSize(
    JNIEnv*, jobject, jlong jhandle) {
  return ENV_OPTIONS_GET(jhandle, writable_file_max_buffer_size);
}
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    setAllowBlockingFlush
 * Signature: (JZ)V
 */
void Java_org_rocksdb_IngestExternalFileOptions_setAllowBlockingFlush(
    JNIEnv*, jobject, jlong jhandle, jboolean jallow_blocking_flush) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  options->allow_blocking_flush = static_cast<bool>(jallow_blocking_flush);
}
    
      // Column family descriptor
  for (rocksdb::ColumnFamilyDescriptor& cfd : cf_descs) {
    // Construct a ColumnFamilyDescriptor java object
    jobject jcfd = rocksdb::ColumnFamilyDescriptorJni::construct(env, &cfd);
    if (env->ExceptionCheck()) {
      // exception occurred constructing object
      if (jcfd != nullptr) {
        env->DeleteLocalRef(jcfd);
      }
      return;
    }
    }
    
      if(env->ExceptionCheck()) {
    // exception thrown from CallShortMethod
    env->ExceptionDescribe();  // print out exception to stderr
    releaseJniEnv(attached_thread);
    return Status::IOError('Unable to call AbstractTraceWriter#writeProxy(long)');
  }
    
      if (!parent()) return QWeakPointer<TreeItem>();
    
    void BulkOperations::DeleteOperation::performOperation(
    QSharedPointer<RedisClient::Connection> targetConnection,
    int targetDbIndex) {
  m_combinator = QSharedPointer<AsyncFuture::Combinator>(
      new AsyncFuture::Combinator(AsyncFuture::FailFast));
    }
    
      for (QString k : m_affectedKeys) {
    auto future = m_connection->cmd(
        {'EXPIRE', k.toUtf8(), ttl}, this, m_dbIndex,
        [this](const RedisClient::Response&) {
          QMutexLocker l(&m_processedKeysMutex);
          m_progress++;
          emit progress(m_progress);
        },
        [this, k](const QString& err) {
          QMutexLocker l(&m_errorsMutex);
          m_errors.append(
              QCoreApplication::translate('RDM', 'Cannot set TTL for key ') +
              QString('%1: %2').arg(k).arg(err));
        });
    }
    
      int getDbIndex() const;
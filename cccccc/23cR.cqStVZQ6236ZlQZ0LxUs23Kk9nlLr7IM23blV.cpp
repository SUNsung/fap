
        
        
    {  void CopyDeviceTensorToCPU(const Tensor *device_tensor, StringPiece edge_name,
                             Device *device, Tensor *cpu_tensor,
                             StatusCallback done) override;
};
    
    #define REGISTER_GPU(T)                                           \
  template void DynamicStitchGPUImpl(                             \
      const Eigen::GpuDevice& gpu_device, const int32 slice_size, \
      const int32 first_dim_size,                                 \
      const CudaDeviceArrayStruct<int32>& input_indices,          \
      const CudaDeviceArrayStruct<const T*>& input_ptrs, T* output);
    
    namespace tensorflow {
namespace graph_transforms {
    }
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Status AsinhGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
      {{'y'}, 'Asinh', {'x'}},
      {{'cosh'}, 'Cosh', {'y'}},
      {{'dx'}, 'Mul', {'dy', 'cosh'}},  // dy * cosh(y)
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Asinh', AsinhGrad);
    
    void SyntaxASTMap::dumpSyntaxMap() const {
  for (const auto &SyntaxAndSemaNode : SyntaxMap) {
    auto SyntaxNode = SyntaxAndSemaNode.getFirst();
    auto SemanticNode = SyntaxAndSemaNode.getSecond();
    }
    }
    
    #ifndef SWIFT_SIL_DEADENDBLOCKS_H
#define SWIFT_SIL_DEADENDBLOCKS_H
    
    void takesData(NSData *object);
NSData *returnsData();
BOOL identityOfData(NSData *data);
    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
      unsigned getCodeCompletionBufferID() const {
    return CodeCompletionBufferID;
  }
    
    #include 'swift/Runtime/HeapObject.h'
#include <mutex>
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    static std::string IKey(const std::string& user_key,
                        uint64_t seq,
                        ValueType vt) {
  std::string encoded;
  AppendInternalKey(&encoded, ParsedInternalKey(user_key, seq, vt));
  return encoded;
}
    
    Status DumpTable(Env* env, const std::string& fname, WritableFile* dst) {
  uint64_t file_size;
  RandomAccessFile* file = NULL;
  Table* table = NULL;
  Status s = env->GetFileSize(fname, &file_size);
  if (s.ok()) {
    s = env->NewRandomAccessFile(fname, &file);
  }
  if (s.ok()) {
    // We use the default comparator, which may or may not match the
    // comparator used in this database. However this should not cause
    // problems since we only use Table operations that do not require
    // any comparisons.  In particular, we do not call Seek or Prev.
    s = Table::Open(Options(), file, file_size, &table);
  }
  if (!s.ok()) {
    delete table;
    delete file;
    return s;
  }
    }
    
      // Successful parses
  static struct {
    const char* fname;
    uint64_t number;
    FileType type;
  } cases[] = {
    { '100.log',            100,   kLogFile },
    { '0.log',              0,     kLogFile },
    { '0.sst',              0,     kTableFile },
    { '0.ldb',              0,     kTableFile },
    { 'CURRENT',            0,     kCurrentFile },
    { 'LOCK',               0,     kDBLockFile },
    { 'MANIFEST-2',         2,     kDescriptorFile },
    { 'MANIFEST-7',         7,     kDescriptorFile },
    { 'LOG',                0,     kInfoLogFile },
    { 'LOG.old',            0,     kInfoLogFile },
    { '18446744073709551615.log', 18446744073709551615ull, kLogFile },
  };
  for (int i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
    std::string f = cases[i].fname;
    ASSERT_TRUE(ParseFileName(f, &number, &type)) << f;
    ASSERT_EQ(cases[i].type, type) << f;
    ASSERT_EQ(cases[i].number, number) << f;
  }
    
          case kDeletedFile:
        if (GetLevel(&input, &level) &&
            GetVarint64(&input, &number)) {
          deleted_files_.insert(std::make_pair(level, number));
        } else {
          msg = 'deleted file';
        }
        break;
    
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
    
    #endif  // STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_

    
    
    {  LOG(INFO) << 'Writing Testing data';
  scoped_ptr<db::DB> test_db(db::GetDB(db_type));
  test_db->Open(output_folder + '/cifar10_test_' + db_type, db::NEW);
  txn.reset(test_db->NewTransaction());
  // Open files
  std::ifstream data_file((input_folder + '/test_batch.bin').c_str(),
      std::ios::in | std::ios::binary);
  CHECK(data_file) << 'Unable to open test file.';
  for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
    read_image(&data_file, &label, str_buffer);
    datum.set_label(label);
    datum.set_data(str_buffer, kCIFARImageNBytes);
    string out;
    CHECK(datum.SerializeToString(&out));
    txn->Put(caffe::format_int(itemid, 5), out);
  }
  txn->Commit();
  test_db->Close();
}
    
      Blob<float>* input_layer = net_->input_blobs()[0];
  num_channels_ = input_layer->channels();
  CHECK(num_channels_ == 3 || num_channels_ == 1)
    << 'Input layer should have 1 or 3 channels.';
  input_geometry_ = cv::Size(input_layer->width(), input_layer->height());
    
    
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
      virtual inline const char* type() const { return 'ArgMax'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/im2col.hpp'
    
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
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
      virtual inline const char* type() const { return 'Deconvolution'; }
    
    TEST(VersionEditTest, EncodeDecode) {
  static const uint64_t kBig = 1ull << 50;
    }
    
    class Issue178 { };
    
    static const int kVerbose = 1;
    
    #include <string>
    
    
    { private:
  port::Mutex *const mu_;
  // No copying allowed
  MutexLock(const MutexLock&);
  void operator=(const MutexLock&);
};
    
        RecordType type;
    const bool end = (left == fragment_length);
    if (begin && end) {
      type = kFullType;
    } else if (begin) {
      type = kFirstType;
    } else if (end) {
      type = kLastType;
    } else {
      type = kMiddleType;
    }
    
    /**
 * @brief Create an osquery extension 'module'.
 *
 * This helper macro creates a constructor to declare an osquery module is
 * loading. The osquery registry is set up when modules (shared objects) are
 * discovered via search paths and opened. At that phase the registry is locked
 * meaning no additional plugins can be registered. To unlock the registry
 * for modifications a module must call Registry::declareModule. This declares
 * and any plugins added will use the metadata in the declare to determine:
 *  - The name of the module adding the plugin
 *  - The SDK version the module was built with, to determine compatibility
 *  - The minimum SDK the module requires from osquery core
 *
 * The registry is again locked when the module load is complete and a well
 * known module-exported symbol is called.
 */
#define CREATE_MODULE(name, version, min_sdk_version)                          \
  extern 'C' EXPORT_FUNCTION void initModule(void);                            \
  struct osquery_InternalStructCreateModule {                                  \
    osquery_InternalStructCreateModule(void) {                                 \
      Registry::get().declareModule(                                           \
          name, version, min_sdk_version, OSQUERY_SDK_VERSION);                \
    }                                                                          \
  };                                                                           \
  static osquery_InternalStructCreateModule osquery_internal_module_instance_;
    
    #ifdef DEBUG
#define dbg_printf(...) printf('osquery kext: ' __VA_ARGS__)
#else
#define dbg_printf(...) \
  do {                  \
  } while (0)
#endif
    
      auto process = PlatformProcess::getCurrentProcess();
  EXPECT_NE(nullptr, process.get());
    
    namespace osquery {
    }
    
    #include <boost/optional.hpp>
    
    
    {  delete metric;
  metric = xgboost::Metric::Create('error@0.1');
  ASSERT_STREQ(metric->Name(), 'error@0.1');
  EXPECT_STREQ(metric->Name(), 'error@0.1');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.2f, 0.1f, 0.2f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
}
    
    std::shared_ptr<xgboost::DMatrix> CreateDMatrix(int rows, int columns,
                                                float sparsity, int seed = 0);
#endif

    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterDumpModelEx
 * Signature: (JLjava/lang/String;I)[Ljava/lang/String;
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterDumpModelEx
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jstring jfmap, jint jwith_stats, jstring jformat, jobjectArray jout) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  const char *fmap = jenv->GetStringUTFChars(jfmap, 0);
  const char *format = jenv->GetStringUTFChars(jformat, 0);
  bst_ulong len = 0;
  char **result;
    }
    
    TEST(Metric, MAP) {
  xgboost::Metric * metric = xgboost::Metric::Create('map');
  ASSERT_STREQ(metric->Name(), 'map');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
  EXPECT_NEAR(GetMetricEval(metric, {}, {}), 1, 1e-10);
    }
    
    /*!
 * \brief Tag function as usable by device
 */
#ifdef __NVCC__
#define XGBOOST_DEVICE __host__ __device__
#else
#define XGBOOST_DEVICE
#endif
    
    
/*
 * DumpCrashStack.h
 *
 *  Created on: 2012-9-28
 *      Author: yerungui
 */
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #include <jni.h>
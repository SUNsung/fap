
        
            return;
  } else if (method == 'ClearCache') {
    ClearCache(GetRenderProcessHost());
    return;
  } else if (method == 'CreateShortcut') {
#if defined(OS_WIN)
    base::string16 path;
    arguments.GetString(0, &path);
    
    class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    
#include 'content/nw/src/api/event/event.h'
#include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/gfx/screen.h'
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    MenuDelegate::~MenuDelegate() {
}
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
     protected:
  ~NwObjCreateFunction() override;
    
        std::string type;
    switch(src.id.type) {
    case content::DesktopMediaID::TYPE_WINDOW:
      type = 'window';
      break;
    case content::DesktopMediaID::TYPE_SCREEN:
      type = 'screen';
      break;
    case content::DesktopMediaID::TYPE_NONE:
      type = 'none';
      break;
    default:
      type = 'unknown';
      break;
    }
    
    #include 'caffe/layer.hpp'
#include 'caffe/layer_factory.hpp'
#include 'caffe/layers/clip_layer.hpp'
#include 'caffe/layers/conv_layer.hpp'
#include 'caffe/layers/deconv_layer.hpp'
#include 'caffe/layers/lrn_layer.hpp'
#include 'caffe/layers/pooling_layer.hpp'
#include 'caffe/layers/relu_layer.hpp'
#include 'caffe/layers/sigmoid_layer.hpp'
#include 'caffe/layers/softmax_layer.hpp'
#include 'caffe/layers/tanh_layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    /**
 * @brief An interface for classes that perform optimization on Net%s.
 *
 * Requires implementation of ApplyUpdate to compute a parameter update
 * given the current state of the Net parameters.
 */
template <typename Dtype>
class Solver {
 public:
  explicit Solver(const SolverParameter& param);
  explicit Solver(const string& param_file);
  void Init(const SolverParameter& param);
  void InitTrainNet();
  void InitTestNets();
    }
    
    void InitLog() {
  ::google::InitGoogleLogging('');
  ::google::InstallFailureSignalHandler();
}
void InitLogLevel(int level) {
  FLAGS_minloglevel = level;
  InitLog();
}
void InitLogLevelPipe(int level, bool stderr) {
  FLAGS_minloglevel = level;
  FLAGS_logtostderr = stderr;
  InitLog();
}
void Log(const string& s) {
  LOG(INFO) << s;
}
    
      LOG(INFO) << 'Writing Training data';
  for (int fileid = 0; fileid < kCIFARTrainBatches; ++fileid) {
    // Open files
    LOG(INFO) << 'Training Batch ' << fileid + 1;
    string batchFileName = input_folder + '/data_batch_'
      + caffe::format_int(fileid+1) + '.bin';
    std::ifstream data_file(batchFileName.c_str(),
        std::ios::in | std::ios::binary);
    CHECK(data_file) << 'Unable to open train file #' << fileid + 1;
    for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
      read_image(&data_file, &label, str_buffer);
      datum.set_label(label);
      datum.set_data(str_buffer, kCIFARImageNBytes);
      string out;
      CHECK(datum.SerializeToString(&out));
      txn->Put(caffe::format_int(fileid * kCIFARBatchSize + itemid, 5), out);
    }
  }
  txn->Commit();
  train_db->Close();
    
      inline Dtype diff_at(const int n, const int c, const int h,
      const int w) const {
    return cpu_diff()[offset(n, c, h, w)];
  }
    
    #include 'caffe/blob.hpp'
#include 'caffe/common.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    	SetEnvironmentVariable(L'CMDER_ROOT', exeDir);
	if (wcscmp(userConfigDirPath, configDirPath) != 0)
	{
		SetEnvironmentVariable(L'CMDER_USER_CONFIG', userConfigDirPath);
		SetEnvironmentVariable(L'CMDER_USER_BIN', userBinDirPath);
	}
    
    struct TestCanParam {
  CANCardParameter conf;
  bool is_first_agent = false;
  int32_t recv_cnt = 0;
  int32_t recv_err_cnt = 0;
  int32_t send_cnt = 0;
  int32_t send_err_cnt = 0;
  int32_t send_lost_cnt = 0;
  int32_t send_time = 0;
  int32_t recv_time = 0;
  CanClient *can_client = nullptr;
    }
    
    #define ALOG_MODULE_STREAM_WARN(module)                            \
  google::LogMessage(__FILE__, __LINE__, google::WARNING).stream() \
      << LEFT_BRACKET << module << RIGHT_BRACKET
    
    bool GetFileList(const std::string &path, const std::string &suffix,
                 std::vector<std::string> *files) {
  if (!PathExists(path)) {
    AINFO << path << ' not exist.';
    return false;
  }
    }
    
    
    { protected:
  std::unique_ptr<PullOverScenario> scenario_;
};
    
    
    {  if (writer->attributes().has_proto_desc()) {
    *proto_desc = writer->attributes().proto_desc();
  }
}
    
    /*
 * Class:     org_rocksdb_CompactionJobStats
 * Method:    largestOutputKeyPrefix
 * Signature: (J)[B
 */
jbyteArray Java_org_rocksdb_CompactionJobStats_largestOutputKeyPrefix(
    JNIEnv* env, jclass, jlong jhandle) {
  auto* compact_job_stats =
      reinterpret_cast<rocksdb::CompactionJobStats*>(jhandle);
  return rocksdb::JniUtil::copyBytes(env,
      compact_job_stats->largest_output_key_prefix);
}
    
    /*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    level
 * Signature: (J)I
 */
jint Java_org_rocksdb_CompressionOptions_level(
    JNIEnv*, jobject, jlong jhandle) {
  auto* opt = reinterpret_cast<rocksdb::CompressionOptions*>(jhandle);
  return static_cast<jint>(opt->level);
}
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    setSnapshotConsistency
 * Signature: (JZ)V
 */
void Java_org_rocksdb_IngestExternalFileOptions_setSnapshotConsistency(
    JNIEnv*, jobject, jlong jhandle, jboolean jsnapshot_consistency) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  options->snapshot_consistency = static_cast<bool>(jsnapshot_consistency);
}
    
    void build_column_family_descriptor_list(
    JNIEnv* env, jobject jcfds,
    std::vector<rocksdb::ColumnFamilyDescriptor>& cf_descs) {
  jmethodID add_mid = rocksdb::ListJni::getListAddMethodId(env);
  if (add_mid == nullptr) {
    // exception occurred accessing method
    return;
  }
    }
    
      jlongArray jtxns = env->NewLongArray(len);
  if (jtxns == nullptr) {
    // exception thrown: OutOfMemoryError
    return nullptr;
  }
  env->SetLongArrayRegion(jtxns, 0, len, tmp.data());
  if (env->ExceptionCheck()) {
    // exception thrown: ArrayIndexOutOfBoundsException
    env->DeleteLocalRef(jtxns);
    return nullptr;
  }

        
        IPC_SYNC_MESSAGE_ROUTED0_1(ShellViewHostMsg_AllocateId, int)
    
    namespace content {
class RenderProcessHost;
class Shell;
}
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
      ~EventListener() override;
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return;
  item->OnClick();
}
    
    namespace {
void SetProxyConfigCallback(
    base::WaitableEvent* done,
    const scoped_refptr<net::URLRequestContextGetter>& url_request_context_getter,
    const net::ProxyConfig& proxy_config) {
  net::ProxyResolutionService* proxy_service =
      url_request_context_getter->GetURLRequestContext()->proxy_resolution_service();
  proxy_service->ResetConfigService(base::WrapUnique(new net::ProxyConfigServiceFixed(proxy_config)));
  done->Signal();
}
} // namespace
    
        bool ReadImage(ClipboardData& data) {
      DCHECK(data.type == TYPE_PNG || data.type == TYPE_JPEG);
      std::vector<unsigned char> encoded_image;
      SkBitmap bitmap = clipboard_->ReadImage(ui::CLIPBOARD_TYPE_COPY_PASTE);
    }
    
    bool NwObjDestroyFunction::RunNWSync(base::ListValue* response, std::string* error) {
  int id = 0;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
    }
    
      if (direction_ == kForward) {  // Switch directions?
    // iter_ is pointing at the current entry.  Scan backwards until
    // the key changes so we can use the normal reverse scanning code.
    assert(iter_->Valid());  // Otherwise valid_ would have been false
    SaveKey(ExtractUserKey(iter_->key()), &saved_key_);
    while (true) {
      iter_->Prev();
      if (!iter_->Valid()) {
        valid_ = false;
        saved_key_.clear();
        ClearSavedValue();
        return;
      }
      if (user_comparator_->Compare(ExtractUserKey(iter_->key()),
                                    saved_key_) < 0) {
        break;
      }
    }
    direction_ = kReverse;
  }
    
    std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
    namespace leveldb {
    }
    
      // Add the specified file at the specified number.
  // REQUIRES: This version has not been saved (see VersionSet::SaveTo)
  // REQUIRES: 'smallest' and 'largest' are smallest and largest keys in file
  void AddFile(int level, uint64_t file,
               uint64_t file_size,
               const InternalKey& smallest,
               const InternalKey& largest) {
    FileMetaData f;
    f.number = file;
    f.file_size = file_size;
    f.smallest = smallest;
    f.largest = largest;
    new_files_.push_back(std::make_pair(level, f));
  }
    
    TEST(FindFileTest, Single) {
  Add('p', 'q');
  ASSERT_EQ(0, Find('a'));
  ASSERT_EQ(0, Find('p'));
  ASSERT_EQ(0, Find('p1'));
  ASSERT_EQ(0, Find('q'));
  ASSERT_EQ(1, Find('q1'));
  ASSERT_EQ(1, Find('z'));
    }
    
        // Preparing sqlite3 statements
    status = sqlite3_prepare_v2(db_, begin_trans_str.c_str(), -1,
                                &begin_trans_stmt, NULL);
    ErrorCheck(status);
    status = sqlite3_prepare_v2(db_, end_trans_str.c_str(), -1,
                                &end_trans_stmt, NULL);
    ErrorCheck(status);
    status = sqlite3_prepare_v2(db_, read_str.c_str(), -1, &read_stmt, NULL);
    ErrorCheck(status);
    
      // Open leveldb
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  options.error_if_exists = true;
  leveldb::Status status = leveldb::DB::Open(
      options, db_filename, &db);
  CHECK(status.ok()) << 'Failed to open leveldb ' << db_filename
      << '. Is it already existing?';
    
    namespace caffe {
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      virtual inline const char* type() const { return 'BNLL'; }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif  // CAFFE_FILTER_LAYER_HPP_

    
    
    {            // Export node state
            for (auto& x : m_netStatefulNodes)
            {
                const wstring& name = x.first;
                m_netStates[name][iSubminibatch] = x.second->ExportState();
            }
        }
    
    
    {
    {            if (m[p_key][p_domain].end() == pos || pos->first > p_maxInclusiveVersion)
            {
                // All versions are less than specified version, or,
                // The <pos> version is greater than specified version.
                pos--;
                return &(pos->second);
            }
            // Schema with exact version as specified one exists.
            return &(pos->second);
        }
        else {
            return nullptr;
        }
    }
    
                // A set of data types supported for <*this> formal parameter.
            // It should contain at least one element if this formal parameter
            // is good.
            DataTypeSet m_types;
    
                    if (IsLittleEndianOrder())
                {
                    memcpy((void*)p_data, (void*)buff, raw_data.size() * sizeof(char));
                }
                else
                {
                    for (size_t i = 0; i < raw_data.size(); i += typeSize, buff += typeSize)
                    {
                        T result;
                        const char* tempBytes = reinterpret_cast<char*>(&result);
                        for (size_t j = 0; j < typeSize; ++j)
                        {
                            memcpy((void*)&tempBytes[j], (void*)&buff[typeSize - 1 - i], sizeof(char));
                        }
                        p_data[i] = result;
                    }
                }
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(ScaledTanh)
        .Description('ScaledTanh takes one input data (Tensor<T>) and produces one output '
            'data (Tensor<T>) where the scaled hyperbolic tangent function, '
            'f(x) = alpha*tanh⁡(beta*x), is applied to the  tensor elementwise.')
        .Input('input', 'Input tensor, typically 1-D.', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('alpha', 'Scaling value', AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('beta', 'Scaling value', AttrType::AttributeProto_AttributeType_FLOAT);
    
            REGISTER_ELEMENTWISE_OPERATOR_SCHEMA(Max, 'max')
        REGISTER_ELEMENTWISE_OPERATOR_SCHEMA(Min, 'min')
        REGISTER_ELEMENTWISE_OPERATOR_SCHEMA(Sum, 'sum')
        REGISTER_ELEMENTWISE_OPERATOR_SCHEMA(Mean, 'mean')
    
        REGISTER_OPERATOR_SCHEMA(LpNormalization)
        .Description('Given a matrix, apply Lp-normalization along the provided axis. '
            'For RS4 default of p = 2 and it will perform L2 normalization. Divide each '
            'element by the square root of the sum of squares of all elements in the input tensor.')
        .Input('input', 'Input tensor of any shape', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(float)' }, 'Constrain input and output '
            'types to float tensors.')
        .Attr('axis', 'Axis along which to perform normalization.',
            AttrType::AttributeProto_AttributeType_INT)
        .Attr('p', '(int64, default 2) the order of the normalization, only 1 or 2 are supported.',
            AttrType::AttributeProto_AttributeType_INT);
    
    #pragma once
    
    BOOST_FIXTURE_TEST_CASE(MatrixDensePlusSparse, RandomSeedFixture)
{
    std::mt19937 rng(0);
    Matrix<float> mAdense(c_deviceIdZero);
    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -3.0f, 0.1f, IncrementCounter()), 0);
    }
    
    
    {    m_inner = make_unique<GranularGPUDataTransferer>(deviceId, s_fetchStream, s_assignStream);
}
    
    
    {DMLC_REGISTER_DATA_PARSER(uint32_t, dense_libsvm, data::CreateDenseLibSVMParser<uint32_t>);
}  // namespace dmlc

    
    	std::string cache_dir;
	if (NULL != _cache_dir) {
		ScopedJstring cache_dir_jstr(env, _cache_dir);
		cache_dir = cache_dir_jstr.GetChar();
	}
    
    struct DNSBreaker {
	DNSBreaker(): isbreak(false), dnsstatus(NULL) {}
	bool isbreak;
	int* dnsstatus;
};
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        if (touch_times_.size() <= count_) {
        touch_times_.push_back(now);
        return true;
    }
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    #include <vector>
    
      private:
    int __TestFun1(int i);
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    It must be started with :
void* XXH32_init()
The function returns a pointer which holds the state of calculation.
    
     private: // Private Functions
  /// Calls InsertBefore or InsertAfter
  int Insert(const std::string& key, const std::string& pivot,
             const std::string& value, bool insert_after);
 private:
  std::string db_name_;       // The actual database name/path
  WriteOptions put_option_;
  ReadOptions get_option_;
    
      auto marker_iter = markers_.find(point);
  if (marker_iter != markers_.end()) {
    for (auto& marked_point : marker_iter->second) {
      marked_thread_id_.emplace(marked_point, thread_id);
    }
  }
    
      void ReadStep(Random* rnd) {
    // Remember the initial committed state of the skiplist.
    State initial_state;
    for (unsigned int k = 0; k < K; k++) {
      initial_state.Set(k, current_.Get(k));
    }
    }
    
        jstring     (*NewString)(JNIEnv*, const jchar*, jsize);
    jsize       (*GetStringLength)(JNIEnv*, jstring);
    const jchar* (*GetStringChars)(JNIEnv*, jstring, jboolean*);
    void        (*ReleaseStringChars)(JNIEnv*, jstring, const jchar*);
    jstring     (*NewStringUTF)(JNIEnv*, const char*);
    jsize       (*GetStringUTFLength)(JNIEnv*, jstring);
    /* JNI spec says this returns const jbyte*, but that's inconsistent */
    const char* (*GetStringUTFChars)(JNIEnv*, jstring, jboolean*);
    void        (*ReleaseStringUTFChars)(JNIEnv*, jstring, const char*);
    jsize       (*GetArrayLength)(JNIEnv*, jarray);
    jobjectArray (*NewObjectArray)(JNIEnv*, jsize, jclass, jobject);
    jobject     (*GetObjectArrayElement)(JNIEnv*, jobjectArray, jsize);
    void        (*SetObjectArrayElement)(JNIEnv*, jobjectArray, jsize, jobject);
    
    #include <yoga/Yoga.h>
    
     public:
    
      void reset(T* other = NULL) {
    T* old = (T*)pthread_getspecific(m_key);
    if (old != other) {
      FBASSERT(m_cleanup);
      m_cleanup(old);
      pthread_setspecific(m_key, other);
    }
  }
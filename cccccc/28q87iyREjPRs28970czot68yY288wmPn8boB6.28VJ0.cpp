
        
          net::NSSCertDatabase* cert_db_;
  // Whether the certificate database has a public slot associated with the
  // profile. If not set, importing certificates is not allowed with this model.
  bool is_user_db_available_;
    
      v8::Local<v8::Value> PeekNext() const;
    
    // Like Dictionary, but stores object in persistent handle so you can keep it
// safely on heap.
class PersistentDictionary : public Dictionary {
 public:
  PersistentDictionary();
  PersistentDictionary(v8::Isolate* isolate, v8::Local<v8::Object> object);
  PersistentDictionary(const PersistentDictionary& other);
  ~PersistentDictionary() override;
    }
    
    template <>
struct Converter<Promise> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate, Promise val);
  // TODO(MarshallOfSound): Implement FromV8 to allow promise chaining
  //                        in native land
  // static bool FromV8(v8::Isolate* isolate,
  //                    v8::Local<v8::Value> val,
  //                    Promise* out);
};
    
    namespace mate {
    }
    
    #if defined(OS_WIN)
#include <windows.h>
#endif  // defined(OS_WIN)
    
    ProcessSingleton::~ProcessSingleton() {
  DCHECK_CALLED_ON_VALID_SEQUENCE(sequence_checker_);
  // Manually free resources with IO explicitly allowed.
  base::ThreadRestrictions::ScopedAllowIO allow_io;
  watcher_ = nullptr;
  ignore_result(socket_dir_.Delete());
}
    
      // 3. Use of forward and backward slashes in value
  ASSERT_TRUE(parser.ParseKeyValuePair('test:data = test/data.libsvm',
                                       &key, &value));
  ASSERT_EQ(key, 'test:data');
  ASSERT_EQ(value, 'test/data.libsvm');
  ASSERT_TRUE(parser.ParseKeyValuePair('data = C:\\data.libsvm', &key, &value));
  ASSERT_EQ(key, 'data');
  ASSERT_EQ(value, 'C:\\data.libsvm');
    
    
    {
    {#ifndef XGBOOST_USE_CUDA
  EXPECT_EQ(GPUSet::AllVisible(), GPUSet::Empty());
#endif
}
}  // namespace xgboost

    
    template<typename StorageIndex>
class SparsePageLZ4Format : public SparsePageFormat {
 public:
  explicit SparsePageLZ4Format(bool use_lz4_hc)
      : use_lz4_hc_(use_lz4_hc) {
    raw_bytes_ = raw_bytes_value_ = raw_bytes_index_ = 0;
    encoded_bytes_value_ = encoded_bytes_index_ = 0;
    nthread_ = dmlc::GetEnv('XGBOOST_LZ4_DECODE_NTHREAD', 4);
    nthread_write_ = dmlc::GetEnv('XGBOOST_LZ4_COMPRESS_NTHREAD', 12);
  }
  virtual ~SparsePageLZ4Format() {
    size_t encoded_bytes = raw_bytes_ +  encoded_bytes_value_ + encoded_bytes_index_;
    raw_bytes_ += raw_bytes_value_ + raw_bytes_index_;
    if (raw_bytes_ != 0) {
      LOG(CONSOLE) << 'raw_bytes=' << raw_bytes_
                   << ', encoded_bytes=' << encoded_bytes
                   << ', ratio=' << double(encoded_bytes) / raw_bytes_
                   << ', ratio-index=' << double(encoded_bytes_index_) /raw_bytes_index_
                   << ', ratio-value=' << double(encoded_bytes_value_) /raw_bytes_value_;
    }
  }
    }
    
        // create (floating point) JSON numbers
    json j_ok(v_ok);
    json j_nan(v_nan);
    json j_infinity(v_infinity);
    json j_float(n_float);
    json j_float_nan(n_float_nan);
    json j_double(n_double);
    
    void  wakeupLock_Unlock(void* _object) {
    xverbose_function();
    xassert2(_object);
    xdebug2(TSF'_object= %0', _object);
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {
    {        if (_size != fwrite(zero_data, sizeof(char), _size, file)) {
            _mmmap_file.close();
            fclose(file);
            boost::filesystem::remove(_filepath);
            delete[] zero_data;
            return false;
        }
        fclose(file);
        delete[] zero_data;
    }
#endif
    return is_open;
}
    
    
    {	return s_version;
}
    
    enum {
    kRetCodeInternalStateError =  -888,
    kRetCodeParamNotMatch,
    kRetCodeDnsItemNotFound,
    kRetCodeGetADDRTimeout
};
struct DnsItem {
    thread_tid      threadid;
    //parameter
    const char *node;
    const char *service;
    const struct addrinfo *hints;
    struct addrinfo **res;
    //~parameter
    
    int error_code;
    int status;
    
    DnsItem(): threadid(0), node(NULL), service(NULL), hints(NULL), res(NULL), error_code(0), status(kGetADDRNotBegin) {}
    
    bool EqualParameter(const DnsItem& _item) {
        return _item.node == node
            && _item.service == service
            && _item.hints == hints
            && _item.res == res;
    }
    std::string ToString() const {
        XMessage xmsg;
        xmsg(TSF'node:%_, service:%_, hints:%_, res:%_, tid:%_, error_code:%_, status:%_',
             NULL==node?'NULL':node
            ,NULL==service?'NULL':service
            ,NULL==hints?(void*)0:hints
            ,NULL==res?(void*)0:res
            ,threadid
            ,error_code
            ,status);
        return xmsg.String();
    }
};
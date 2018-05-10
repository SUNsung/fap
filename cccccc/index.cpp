
        
              T* resource;
      OP_REQUIRES_OK(
          context,
          mgr->LookupOrCreate<T>(cinfo_.container(), cinfo_.name(), &resource,
                                 [this](T** ret) EXCLUSIVE_LOCKS_REQUIRED(mu_) {
                                   Status s = CreateResource(ret);
                                   if (!s.ok() && *ret != nullptr) {
                                     CHECK((*ret)->Unref());
                                   }
                                   return s;
                                 }));
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #ifndef TENSORFLOW_COMMON_RUNTIME_SYCL_SYCL_DEVICE_CONTEXT_H_
#define TENSORFLOW_COMMON_RUNTIME_SYCL_SYCL_DEVICE_CONTEXT_H_
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    REGISTER_KERNEL_BUILDER(Name('TFRecordReader').Device(DEVICE_CPU),
                        TFRecordReaderOp);
REGISTER_KERNEL_BUILDER(Name('TFRecordReaderV2').Device(DEVICE_CPU),
                        TFRecordReaderOp);
    
    MPIUtils::MPIUtils(const std::string& worker_name) {
  InitMPI();
  // Connect the MPI process IDs to the worker names that are used by TF.
  // Gather the names of all the active processes (name can't be longer than
  // 128 bytes)
  int proc_id = 0, number_of_procs = 1;
  char my_name[max_worker_name_length];
  MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
  MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    }
    
    namespace tensorflow {
namespace tpu {
namespace {
    }
    }
    }
    
    bool IsUnresponsiveEventSuppressed() {
  return g_suppress_level > 0;
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Locker);
};
    
    class RemoteCallbackFreer : public ObjectLifeMonitor,
                            public content::WebContentsObserver {
 public:
  static void BindTo(v8::Isolate* isolate,
                     v8::Local<v8::Object> target,
                     int object_id,
                     content::WebContents* web_conents);
    }
    
      // Panels Notifications. The Panels are small browser windows near the bottom
  // of the screen.
  // Sent when all nonblocking bounds animations are finished across panels.
  // Used only in unit testing.
  NOTIFICATION_PANEL_BOUNDS_ANIMATIONS_FINISHED,
    
    bool TtsPlatformImpl::LoadBuiltInTtsExtension(
    content::BrowserContext* browser_context) {
  return false;
}
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    #endif //CONTENT_NW_SRC_API_EVENT_EVENT_H_

    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
    
    {  menu_items_.empty();
}
    
     protected:
  ~NwObjCallObjectMethodFunction() override;
    
    #if GTEST_OS_SYMBIAN
  // Streams a value (either a pointer or not) to this object.
  template <typename T>
  inline Message& operator <<(const T& value) {
    StreamHelper(typename internal::is_pointer<T>::type(), value);
    return *this;
  }
#else
  // Streams a non-pointer value to this object.
  template <typename T>
  inline Message& operator <<(const T& val) {
    // Some libraries overload << for STL containers.  These
    // overloads are defined in the global namespace instead of ::std.
    //
    // C++'s symbol lookup rule (i.e. Koenig lookup) says that these
    // overloads are visible in either the std namespace or the global
    // namespace, but not other namespaces, including the testing
    // namespace which Google Test's Message class is in.
    //
    // To allow STL containers (and other types that has a << operator
    // defined in the global namespace) to be used in Google Test
    // assertions, testing::Message must access the custom << operator
    // from the global namespace.  With this using declaration,
    // overloads of << defined in the global namespace and those
    // visible via Koenig lookup are both exposed in this function.
    using ::operator <<;
    *ss_ << val;
    return *this;
  }
    
    template <typename T>
class UniversalTersePrinter {
 public:
  static void Print(const T& value, ::std::ostream* os) {
    UniversalPrint(value, os);
  }
};
template <typename T>
class UniversalTersePrinter<T&> {
 public:
  static void Print(const T& value, ::std::ostream* os) {
    UniversalPrint(value, os);
  }
};
template <typename T, size_t N>
class UniversalTersePrinter<T[N]> {
 public:
  static void Print(const T (&value)[N], ::std::ostream* os) {
    UniversalPrinter<T[N]>::Print(value, os);
  }
};
template <>
class UniversalTersePrinter<const char*> {
 public:
  static void Print(const char* str, ::std::ostream* os) {
    if (str == NULL) {
      *os << 'NULL';
    } else {
      UniversalPrint(string(str), os);
    }
  }
};
template <>
class UniversalTersePrinter<char*> {
 public:
  static void Print(char* str, ::std::ostream* os) {
    UniversalTersePrinter<const char*>::Print(str, os);
  }
};
    
      // Returns the name of the parameter type, or NULL if this is not a typed
  // or a type-parameterized test.
  const char* type_param() const {
    if (type_param_.get() != NULL)
      return type_param_->c_str();
    return NULL;
  }
    
    // GTEST_ASSERT_ is the basic statement to which all of the assertions
// in this file reduce.  Don't use this in your code.
    
    // This provides interface PrimeTable that determines whether a number is a
// prime and determines a next prime number. This interface is used
// in Google Test samples demonstrating use of parameterized tests.
    
    namespace leveldb {
namespace log {
    }
    }
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
      // Open database.  Disable compression since it affects the creation
  // of layers and the code below is trying to test against a very
  // specific scenario.
  leveldb::DB* db;
  leveldb::Options db_options;
  db_options.create_if_missing = true;
  db_options.compression = leveldb::kNoCompression;
  ASSERT_OK(leveldb::DB::Open(db_options, dbpath, &db));
    
    #include <algorithm>
#include <assert.h>
#include 'leveldb/comparator.h'
#include 'leveldb/table_builder.h'
#include 'util/coding.h'
    
     private:
  void GenerateFilter();
    
    #ifndef STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
#define STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
    
    
    {  class Iter;
};
    
    
    { private:
  FRIEND_TEST(EventsTests, test_event_subscriber_subscribe);
  FRIEND_TEST(EventsTests, test_event_subscriber_context);
  FRIEND_TEST(EventsTests, test_fire_event);
};
    
    #pragma once
    
    class ViewsConfigParserPluginTests : public testing::Test {};
    
      std::vector<std::string> conf_files;
  resolveFilePattern(FLAGS_config_path + '.d/%.conf', conf_files);
  std::sort(conf_files.begin(), conf_files.end());
  conf_files.push_back(FLAGS_config_path);
    
    
    {
    {  ::strncpy(dst, src, count);
  return Status(0, 'OK');
}
}

    
    namespace dmlc {
DMLC_REGISTRY_ENABLE(::xgboost::TreeUpdaterReg);
}  // namespace dmlc
    
    SEXP XGBoosterUpdateOneIter_R(SEXP handle, SEXP iter, SEXP dtrain) {
  R_API_BEGIN();
  CHECK_CALL(XGBoosterUpdateOneIter(R_ExternalPtrAddr(handle),
                                  asInteger(iter),
                                  R_ExternalPtrAddr(dtrain)));
  R_API_END();
  return R_NilValue;
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixSetUIntInfo
 * Signature: (JLjava/lang/String;[I)V
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixSetUIntInfo
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jstring jfield, jintArray jarray) {
  DMatrixHandle handle = (DMatrixHandle) jhandle;
  const char*  field = jenv->GetStringUTFChars(jfield, 0);
  jint* array = jenv->GetIntArrayElements(jarray, NULL);
  bst_ulong len = (bst_ulong)jenv->GetArrayLength(jarray);
  int ret = XGDMatrixSetUIntInfo(handle, (char const *)field, (unsigned int const *)array, len);
  //release
  if (field) jenv->ReleaseStringUTFChars(jfield, (const char *)field);
  jenv->ReleaseIntArrayElements(jarray, array, 0);
    }
    
    #endif  // XGBOOST_OBJECTIVE_REGRESSION_LOSS_H_

    
    inline void RowSet::PushBack(bst_uint i) {
  if (rows_.size() == 0) {
    if (i == size_) {
      ++size_; return;
    } else {
      rows_.resize(size_);
      for (size_t i = 0; i < size_; ++i) {
        rows_[i] = static_cast<bst_uint>(i);
      }
    }
  }
  rows_.push_back(i);
  ++size_;
}
    
    
    
    			b2Body* body = NULL;
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
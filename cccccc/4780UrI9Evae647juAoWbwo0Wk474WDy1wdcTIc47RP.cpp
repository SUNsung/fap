
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    namespace tensorflow {
namespace {
    }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      void Compute(OpKernelContext* context) override {
    // Get and verify the input data.
    OP_REQUIRES(
        context, context->num_inputs() == 1,
        errors::InvalidArgument('EncodeAudio requires exactly one input.'));
    const Tensor& contents = context->input(0);
    OP_REQUIRES(context, TensorShapeUtils::IsMatrix(contents.shape()),
                errors::InvalidArgument(
                    'sampled_audio must be a rank 2 tensor but got shape ',
                    contents.shape().DebugString()));
    OP_REQUIRES(
        context, contents.NumElements() <= std::numeric_limits<int32>::max(),
        errors::InvalidArgument(
            'sampled_audio cannot have more than 2^31 entries. Shape = ',
            contents.shape().DebugString()));
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    REGISTER_COMPLEX(CPU, float, complex64);
REGISTER_COMPLEX(CPU, double, complex128);
    
    #include 'tensorflow/core/kernels/cwise_ops_gpu_common.cu.h'
    
    public:
  EventListener(int id,
                const base::WeakPtr<DispatcherHost>& dispatcher_host,
                const base::DictionaryValue& option);
    
    bool MenuDelegate::HasIcon(int command_id) {
  if (command_id < 0)
    return false;
    }
    
       bool IsCommandIdChecked(int command_id) const override;
   bool IsCommandIdEnabled(int command_id) const override;
    
    #include <string.h>
    
    void MenuItem::SetEnabled(bool enabled) {
  gtk_widget_set_sensitive(menu_item_, enabled);
}
    
        bool WriteImage(ClipboardData& data) {
      DCHECK(data.type == TYPE_PNG || data.type == TYPE_JPEG);
      std::string content = *(data.data);
    }
    
    bool NwObjCallObjectMethodSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.allocateId', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjAllocateIdFunction);
};
    
    // Streams a Message to an ostream.
inline std::ostream& operator <<(std::ostream& os, const Message& sb) {
  return os << sb.GetString();
}
    
      // Note: we deliberately don't call this PrintTo(), as that name
  // conflicts with ::testing::internal::PrintTo in the body of the
  // function.
  static void Print(const T& value, ::std::ostream* os) {
    // By default, ::testing::internal::PrintTo() is used for printing
    // the value.
    //
    // Thanks to Koenig look-up, if T is a class and has its own
    // PrintTo() function defined in its namespace, that function will
    // be visible here.  Since it is more specific than the generic ones
    // in ::testing::internal, it will be picked by the compiler in the
    // following statement - exactly what we want.
    PrintTo(value, os);
  }
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_SPI_H_

    
    // Traps C++ exceptions escaping statement and reports them as test
// failures. Note that trapping SEH exceptions is not implemented here.
# if GTEST_HAS_EXCEPTIONS
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  try { \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } catch (const ::std::exception& gtest_exception) { \
    fprintf(\
        stderr, \
        '\n%s: Caught std::exception-derived exception escaping the ' \
        'death test statement. Exception message: %s\n', \
        ::testing::internal::FormatFileLocation(__FILE__, __LINE__).c_str(), \
        gtest_exception.what()); \
    fflush(stderr); \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  } catch (...) { \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  }
    
    #ifndef GTEST_LANG_CXX11
// gcc and clang define __GXX_EXPERIMENTAL_CXX0X__ when
// -std={c,gnu}++{0x,11} is passed.  The C++11 standard specifies a
// value for __cplusplus, and recent versions of clang, gcc, and
// probably other compilers set that too in C++11 mode.
# if __GXX_EXPERIMENTAL_CXX0X__ || __cplusplus >= 201103L
// Compiling in at least C++11 mode.
#  define GTEST_LANG_CXX11 1
# else
#  define GTEST_LANG_CXX11 0
# endif
#endif
    
    
    {  return result;
}
    
      // count the keys
  leveldb::Iterator* iter = db->NewIterator(leveldb::ReadOptions());
  size_t num_keys = 0;
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    num_keys++;
  }
  delete iter;
  ASSERT_EQ(kNumKeys, num_keys) << 'Bad number of keys';
    
    void BlockBuilder::Add(const Slice& key, const Slice& value) {
  Slice last_key_piece(last_key_);
  assert(!finished_);
  assert(counter_ <= options_->block_restart_interval);
  assert(buffer_.empty() // No values yet?
         || options_->comparator->Compare(key, last_key_piece) > 0);
  size_t shared = 0;
  if (counter_ < options_->block_restart_interval) {
    // See how much sharing to do with previous string
    const size_t min_length = std::min(last_key_piece.size(), key.size());
    while ((shared < min_length) && (last_key_piece[shared] == key[shared])) {
      shared++;
    }
  } else {
    // Restart compression
    restarts_.push_back(buffer_.size());
    counter_ = 0;
  }
  const size_t non_shared = key.size() - shared;
    }
    
    // The FALLTHROUGH_INTENDED macro can be used to annotate implicit fall-through
// between switch labels. The real definition should be provided externally.
// This one is a fallback version for unsupported compilers.
#ifndef FALLTHROUGH_INTENDED
#define FALLTHROUGH_INTENDED do { } while (0)
#endif
    
      Status status_;
  std::string saved_key_;     // == current key when direction_==kReverse
  std::string saved_value_;   // == current raw value when direction_==kReverse
  Direction direction_;
  bool valid_;
    
    static std::string ShortSuccessor(const std::string& s) {
  std::string result = s;
  InternalKeyComparator(BytewiseComparator()).FindShortSuccessor(&result);
  return result;
}
    
      // Create a writer that will append data to '*dest'.
  // '*dest' must have initial length 'dest_length'.
  // '*dest' must remain live while this Writer is in use.
  Writer(WritableFile* dest, uint64_t dest_length);
    
    #ifndef BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
    
    #include <boost/asio/detail/config.hpp>
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    #include <boost/asio/detail/pop_options.hpp>
    
    void dev_poll_reactor::cancel_ops(socket_type descriptor,
    dev_poll_reactor::per_descriptor_data&)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
  cancel_ops_unlocked(descriptor, boost::asio::error::operation_aborted);
}
    
    	extern void addLoadModule(std::string _module_name);
    
        while (-1 != __ParseStack(stream, state, strcache, strstack)) {
        if (!_processname.empty() && std::string::npos == strstack.find(processname, 0)) {
            strstack.clear();
            continue;
        }
    }
    
    
/*
 * DumpCrashStack.h
 *
 *  Created on: 2012-9-28
 *      Author: yerungui
 */
    
    
    {    ::wakeupLock_delete(object_);
}
    
    class ServiceBase {
  public:
    virtual ~ServiceBase() {}
    void DependServices(const TServicesMap& _dependservices) { m_dependservices = _dependservices;}
    const char* ServiceName() const { return m_servicename.c_str();}
    }
    
    // bool JNU_Jstring2Wstring( JNIEnv* _env, const jstring jstr, std::wstring& wstr); //in linux sizeof(wchar_t)==4 but sizeof(jchar)==2
wchar_t* JNU_Jstring2Wchar(JNIEnv* _env, const jstring jstr);
void JNU_FreeWchar(JNIEnv* _env, jstring str, wchar_t* wchar);
jstring JNU_Wstring2Jstring(JNIEnv* _env, const std::wstring& wstr);
jstring JNU_Wchar2JString(JNIEnv* _env, wchar_t* wchar);
    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
      // Don't allow copying
  AnnounceList(const AnnounceList&) = delete;
  AnnounceList& operator=(const AnnounceList&) = delete;
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
    class AuthResolver {
public:
  virtual ~AuthResolver() = default;
    }
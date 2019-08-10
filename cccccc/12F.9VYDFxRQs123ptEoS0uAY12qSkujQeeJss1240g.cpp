
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace xla {
namespace gpu {
    }
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    class GpuExecutable;
    
      const int lda = side_ == se::blas::Side::kLeft ? m_ : n_;
  const int ldb = m_;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {
    {    // We measure the time of one execution of the while body computation. The
    // while body may be executed more than once, the last measurement 'wins'.
    profiler.StartHloComputation();
    VLOG(3) << 'Executing body computation';
    // Invoke thunk sequence for while 'body' computation, and pass on
    // 'profiler' to measure the timing of the thunks in 'body_thunk_sequence_'.
    TF_RETURN_IF_ERROR(body_thunk_sequence_->ExecuteOnStream(params));
    profiler.FinishHloComputation(hlo_instruction()->while_body());
  }
  return Status::OK();
}
    
    
    {
    {
    {    // Here, 5 is a empirical factor of cost_per_unit.
    auto worker_threads = *(context->device()->tensorflow_cpu_worker_threads());
    Shard(worker_threads.num_threads, worker_threads.workers, size, 5,
          subDiagPart);
    return Status::OK();
  }
};
}  // namespace functor
    
    class binary_blob_t;
    
    #endif  // RDB_PROTOCOL_STORE_HPP_

    
    
    {  std::string pathname_;
};  // class FilePath
    
      // Creates a UTF-16 wide string from the given ANSI string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the wide string, or NULL if the
  // input is NULL.
  //
  // The wide string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static LPCWSTR AnsiToUtf16(const char* c_str);
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::AveragePooling(const ComputationNodePtr inputValues,
                                                                                          const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind,
                                                                                          const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<AveragePoolingNode<ElemType>>(net.GetDeviceId(), nodeName, windowWidth, windowHeight, horizontalSubsample, verticalSubsample, imageLayoutKind), { inputValues });
}
    
    // NDLBuilderImpl
// TODO JC Refactor eligible methods and members into abstract base class.
template <typename ElemType>
class NDLBuilderImpl
{
public:
    NDLBuilderImpl(DEVICEID_TYPE deviceId, unsigned long randomSeedOffset = 0)
    {
        m_computationNetwork = make_shared<ComputationNetwork>(deviceId);
        m_computationNetwork->SetRandomSeedOffset(randomSeedOffset);
        m_nodeEvaluator = new NDLNodeEvaluatorImpl<ElemType>(m_computationNetwork);
    }
    }
    
        shared_ptr<SGD<ElemType>> optimizer;
    if (config.Exists(L'optimizer'))
    {
        optimizer = CreateObject<SGD<ElemType>>(config, L'optimizer');
    }
    else // legacy CNTK config syntax: needs a record called 'SGD'
    {
        const ConfigRecordType& configSGD(config(L'SGD'));
        optimizer = make_shared<SGD<ElemType>>(configSGD);
    }
    
        // subgraph eval/output/criteria
    fstream << L'subgraph {\n';
    fstream << L'\t\t rank=sink ; ';
    line.clear();
    for (const auto& x : m_criterionNodes)
        line = line + msra::strfun::wstrprintf(L'\'%ls\' ', x->GetName().c_str());
    for (const auto& x : m_outputNodes)
        line = line + msra::strfun::wstrprintf(L'\'%ls\' ', x->GetName().c_str());
    for (const auto& x : m_evaluationNodes)
        line = line + msra::strfun::wstrprintf(L'\'%ls\' ', x->GetName().c_str());
    }
    
    class ComputationNetwork :
    public ScriptableObjects::Object,
    public ScriptableObjects::HasToString,
    public ScriptableObjects::CustomConfigRecord
{
public:
    typedef shared_ptr<ComputationNetwork> ComputationNetworkPtr;
    }
    
      /// Try if the configuration has started an auto-refresh thread.
  bool started_thread_{false};
    
      const std::string kConfigTestNonBlacklistQuery{'pack_unrestricted_pack_process_heartbeat'};
    
    #include <gtest/gtest.h>
    
    #include <map>
#include <string>
    
    Expected<int32_t, DatabaseError> Database::getInt32Or(
    const std::string& domain,
    const std::string& key,
    const int32_t default_value) {
  auto result = getInt32(domain, key);
  if (!result && result.getError() == DatabaseError::KeyNotFound) {
    return default_value;
  }
  return result;
}
    
    ExpectedSuccess<DatabaseError> RocksdbDatabase::putRawBytesInternal(
    Handle* handle, const std::string& key, const std::string& value) {
  auto status = db_->Put(default_write_options_, handle, key, value);
  if (!status.ok()) {
    return createError(DatabaseError::FailToWriteData) << status.ToString();
  }
  return Success();
}
    
     private:
  rocksdb::Options getOptions();
  std::vector<rocksdb::ColumnFamilyDescriptor> createDefaultColumnFamilies(
      const rocksdb::Options& options);
  ExpectedSuccess<DatabaseError> openInternal(
      const rocksdb::Options& options, const boost::filesystem::path& path);
  Expected<std::string, DatabaseError> getRawBytesInternal(
      Handle* handle, const std::string& key);
  ExpectedSuccess<DatabaseError> putRawBytesInternal(Handle* handle,
                                                     const std::string& key,
                                                     const std::string& value);
  ExpectedSuccess<DatabaseError> checkDbConnection();
  Expected<std::shared_ptr<Handle>, DatabaseError> getHandle(
      const std::string& domain);
    
    
    {    if (drop_src_data) {
      VLOG(1) << 'Destroying db at path: ' << src_path;
      rocksdb::DestroyDB(src_path, rocksdb::Options());
    }
    drop_src_data = true;
    src_path = dst_path;
    dst_path = randomOutputPath();
  }
    
    #include <map>
#include <string>
#include <vector>
    
        if (serv.gs->start == 0)
    {
        swWarn('server is not running');
        return retval;
    }
    
    enum
{
    EVENT_onStart = 1u << 1,
    EVENT_onShutdown = 1u << 2,
    EVENT_onWorkerStart = 1u << 3,
    EVENT_onWorkerStop = 1u << 4,
    EVENT_onConnect = 1u << 5,
    EVENT_onReceive = 1u << 6,
    EVENT_onPacket = 1u << 7,
    EVENT_onClose = 1u << 8,
    EVENT_onTask = 1u << 9,
    EVENT_onFinish = 1u << 10,
    EVENT_onPipeMessage = 1u << 11,
};
    
    typedef struct
{
    std::thread *thread;
    swPipe pipe;
} ThreadObject;
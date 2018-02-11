
        
        #include <map>
#include <string>
    
    namespace api {
    }
    
    
    {}  // namespace api
    
    
    {}  // namespace atom
    
    AsarProtocolHandler::~AsarProtocolHandler() {
}
    
    #include 'net/url_request/url_request_job_factory.h'
    
    #include 'atom/browser/net/asar/url_request_asar_job.h'
#include 'atom/browser/net/js_asker.h'
    
    namespace content {
struct MainFunctionParams;
}
    
        // enable tracing. Nodes listed here get their m_traceNodeValueXXX flags set
    std::vector<std::wstring> m_traceNodeNamesReal;
    std::vector<std::wstring> m_traceNodeNamesCategory;
    std::vector<std::wstring> m_traceNodeNamesSparse;
    
    void GPUDataTransferer::CopyCPUToGPUAsync(void* cpuBuffer, size_t totalSize, void* gpuBuffer)
{
    m_inner->CopyCPUToGPUAsync(cpuBuffer, 1, totalSize, gpuBuffer);
    m_inner->RecordCPUToGPUCopy();
}
    
        // first try if a NetworkBuilder is present
    function<ComputationNetworkPtr(DEVICEID_TYPE)> createNetworkFn;
    bool gotIt = TryGetNetworkFactory<ConfigRecordType, ElemType>(config, createNetworkFn);
    if (gotIt)
    {
        // We have several ways to create a network.
        net = createNetworkFn(deviceId);
        if (outputNodeNames.size() > 0)
        {
            net->InvalidateCompiledNetwork();
            PatchOutputNodes(net, outputNodeNames, outputNodeNamesVector);
            net->CompileNetwork();
            // BUGBUG: This will generate double Validation output in the log
        }
    }
    else // no NetworkBuilder given: load from 'modelPath'
    {
        wstring modelPath = config(L'modelPath');
    }
    
    #include <memory> // for shared_ptr
    
    // ---------------------------------------------------------------------------
// ConfigException -- all errors from processing the config files are reported as ConfigException
// ---------------------------------------------------------------------------
    
    // Compares two ASCII strings ignoring the case.
// TODO: Should switch to boost, boost::iequal should be used instead.
// TODO: we already have EqualCI() in Basics.h which does the same thing.
template<class TElement>
inline bool AreEqualIgnoreCase(
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement>>& s1,
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement> >& s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    }
    
    #endif

    
      {2,0,32,  &_residue_44_low,
   &_huff_book__44c0_s_long,&_huff_book__44c0_sm_long,
   &_resbook_44s_0,&_resbook_44sm_0}
};
static const vorbis_residue_template _res_44s_1[]={
  {2,0,16,  &_residue_44_low,
   &_huff_book__44c1_s_short,&_huff_book__44c1_sm_short,
   &_resbook_44s_1,&_resbook_44sm_1},
    
    #include <stdio.h>
#include <stdlib.h>
#include <openssl/cast.h>
    
    
    {        vecdump_.push_back(strstack);
        strstack.clear();
    }
    
    
    {  private:
    std::vector<std::string> vecdump_;
};
    
    #endif /* WAKEUPLOCK_H_ */

    
    
    {    __DelOlderTouchTime(now);
    touch_times_.push_back(now);
    return true;
}
    
    class ServiceBase {
  public:
    virtual ~ServiceBase() {}
    void DependServices(const TServicesMap& _dependservices) { m_dependservices = _dependservices;}
    const char* ServiceName() const { return m_servicename.c_str();}
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    int getKb(int pid) {
    std::string line;
    std::ifstream self((std::string('/proc/') + std::to_string(pid) + std::string('/status')).c_str());
    int vmRSS;
    while(!self.eof()) {
        std::getline(self, line, ':');
        if (line == 'VmRSS') {
            self >> vmRSS;
        }
        std::getline(self, line);
    }
    return vmRSS;
}
    
    
    {}

    
    struct HttpResponse;
    
    #ifdef __APPLE__
        if (createdFd != INVALID_SOCKET) {
            int noSigpipe = 1;
            setsockopt(createdFd, SOL_SOCKET, SO_NOSIGPIPE, &noSigpipe, sizeof(int));
        }
#endif
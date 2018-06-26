
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    namespace Eigen {
    }
    
    #include 'tensorflow/core/platform/platform.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    template <int NDIMS>
void TensorSlice::FillIndicesAndSizes(
    const TensorShape& shape, Eigen::DSizes<Eigen::DenseIndex, NDIMS>* indices,
    Eigen::DSizes<Eigen::DenseIndex, NDIMS>* sizes) const {
  CHECK_EQ(shape.dims(), dims()) << 'Incompatible dimensions between shape '
                                 << 'slices: shape = ' << shape.DebugString()
                                 << ', slice = ' << DebugString();
  CHECK_GE(NDIMS, dims()) << 'Asking for a ' << NDIMS << '-dim slice from '
                          << 'a slice of dimension ' << dims();
  for (int d = 0; d < dims(); ++d) {
    if (IsFullAt(d)) {
      (*indices)[d] = 0;
      (*sizes)[d] = shape.dim_size(d);
    } else {
      (*indices)[d] = starts_[d];
      (*sizes)[d] = lengths_[d];
    }
  }
  for (int d = dims(); d < NDIMS; ++d) {
    (*indices)[d] = 0;
    (*sizes)[d] = 1;
  }
}
    
    // Adds resource events for a single device.
void AddResourceMetadata(uint32 device_id,
                         const std::map<uint32, const Resource *> &resources,
                         string *json) {
  for (const auto &pair : resources) {
    uint32 resource_id = pair.first;
    const Resource &resource = *pair.second;
    if (!resource.name().empty()) {
      Appendf(json,
              R'({'ph':'M','pid':%u,'tid':%u,)'
              R'('name':'thread_name','args':{)',
              device_id, resource_id);
      AppendEscapedName(json, resource.name());
      Appendf(json, '}},');
    }
    Appendf(json,
            R'({'ph':'M','pid':%u,'tid':%u,)'
            R'('name':'thread_sort_index','args':{'sort_index':%u}},)',
            device_id, resource_id, resource_id);
  }
}
    
    /*Control parameters for error()*/
enum TessErrorLogCode {
  DBG =     -1,           /*log without alert */
  TESSLOG =  0,            /*alert user */
  TESSEXIT = 1,            /*exit after erro */
  ABORT =    2            /*abort after error */
};
    
     private:
  // Clear all data.
  void Clear();
    
    void Efree(void *ptr);
    
    // Copies n values of the given src vector to dest.
inline void CopyVector(int n, const double* src, double* dest) {
  memcpy(dest, src, n * sizeof(dest[0]));
}
    
    
    {}  // namespace tesseract.
    
      // Compute a search box based on the orientation of the partition.
  // Returns true if a suitable box can be calculated.
  // Callback for EasyMerges.
  bool OrientationSearchBox(ColPartition* part, TBOX* box);
    
      ServerConfig server_config;
  server_config.set_server_type(ASYNC_SERVER);
  server_config.set_async_server_threads(8);
    
    #include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    std::string GetDbFileContent(int argc, char** argv) {
  std::string db_path;
  std::string arg_str('--db_path');
  if (argc > 1) {
    std::string argv_1 = argv[1];
    size_t start_position = argv_1.find(arg_str);
    if (start_position != std::string::npos) {
      start_position += arg_str.size();
      if (argv_1[start_position] == ' ' ||
          argv_1[start_position] == '=') {
        db_path = argv_1.substr(start_position + 1);
      }
    }
  } else {
    db_path = 'route_guide_db.json';
  }
  std::ifstream db_file(db_path);
  if (!db_file.is_open()) {
    std::cout << 'Failed to open ' << db_path << std::endl;
    return '';
  }
  std::stringstream db;
  db << db_file.rdbuf();
  return db.str();
}
    
    // Get leading or trailing comments in a string. Comment lines start with '// '.
// Leading detached comments are put in in front of leading comments.
template <typename DescriptorType>
inline grpc::string GetNodeComments(const DescriptorType* desc, bool leading) {
  return grpc_generator::GetPrefixedComments(desc, leading, '//');
}
    
    namespace grpc {
namespace testing {
    }
    }
    
      static double Now();
    
    grpc::string DescribeServiceList(std::vector<grpc::string> service_list,
                                 grpc::protobuf::DescriptorPool& desc_pool) {
  std::stringstream result;
  for (auto it = service_list.begin(); it != service_list.end(); it++) {
    auto const& service = *it;
    const grpc::protobuf::ServiceDescriptor* service_desc =
        desc_pool.FindServiceByName(service);
    if (service_desc != nullptr) {
      result << DescribeService(service_desc);
    }
  }
  return result.str();
}
    
    
    {  return cli.Run(argc, argv);
}

    
    #include 'ifaddrs_android.h'
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <unistd.h>
#include <errno.h>
#include <linux/netlink.h>
#include <linux/rtnetlink.h>
    
    PowerIphone::PowerIphone() :
		nsecs_left(-1),
		percent_left(-1),
		power_state(OS::POWERSTATE_UNKNOWN) {
	// TODO Auto-generated constructor stub
}
    
    	static LoadCertsFromMemory load_certs_func;
	static bool available;
    
    class WebSocketClient : public WebSocketMultiplayerPeer {
    }
    
    
    {	static void set_current_api(APIType p_api);
	static void cleanup();
};
    
    	struct VirtualInMenu {
		String name;
		Variant::Type ret;
		bool ret_variant;
		Vector<Pair<Variant::Type, String> > args;
	};
    
    #define opus_fft_free_arch(_st, arch) \
   ((void)(arch), opus_fft_free_arm_neon(_st))
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
        // find all the  BN nodes by evalOrder
    std::vector<ComputationNodeBasePtr> bnNodes;
    std::set<ComputationNodeBasePtr> bnNodesLogged; // (avoid double record of batch normalization nodes)
    for (auto& evalNode : evalNodes)
    {
        for (auto& node : m_net->GetEvalOrder(evalNode))
        {
            let bnNode = dynamic_pointer_cast<BatchNormalizationNode<ElemType>>(node);
            if (bnNode)
            {
                if (bnNodesLogged.insert(node).second)
                {
                    // reset the statistics states of bn nodes
                    bnNode->ResetStatisticsState();
                    bnNode->SetNormalizationTimeConstants(-1, bnNode->NormalizationTimeConstant(),
                        0, bnNode->BlendTimeConstant());
                    bnNodes.push_back(node);
                    // add BN nodes into the evaluation group, then they will be added into root nodes when
                    // the network re-compile
                    m_net->AddToNodeGroup(L'evaluation', bnNode);
                }
            }
        }
    }
    
    
    {        // loop through the different passes, processing as we go
        // skipThrough (when not null) is a pointer to the following structure in the NetNdl class:
        //     NDLNode<ElemType>* lastNode[ndlPassMax]; // last node we evaluated for each pass
        NDLNode<ElemType>* lastNode = nullptr;
        for (NDLPass ndlPass = ndlPassInitial; ndlPass <= ndlPassUntil; ++ndlPass)
        {
            NDLNode<ElemType>* skipThroughNode = skipThrough ? *skipThrough : nullptr;
            lastNode = ProcessPassNDLScript(script, ndlPass, skipThroughNode, fullValidate, dumpFileName);
            if (skipThrough)
            {
                *skipThrough = lastNode;
                skipThrough++;
            }
        }
    }
    
    class ConfigException : public Microsoft::MSR::ScriptableObjects::ScriptingException
{
    vector<TextLocation> locations; // error location (front()) and evaluation parents (upper)
public:
    // Note: All our Error objects use wide strings, which we round-trip through runtime_error as utf8.
    ConfigException(const wstring& msg, TextLocation where)
        : Microsoft::MSR::ScriptableObjects::ScriptingException(msra::strfun::utf8(msg))
    {
        locations.push_back(where);
    }
    }
    
    // TODO: make this proper C++ functions with variadic templates and a name that reflects their difference to fprintf(stderr) which already implies printing to log
// Print out a log message.  If the Tracing flag is set, prepend with a timestamp
#define LOGPRINTF(stream, ...) \
    do \
    { \
        PREPENDTS(stream); \
        fprintf(stream, __VA_ARGS__); \
    } while(0)
    
    class float4
{
    __m128 v; // value
private:
    // return the low 'float'
    float f0() const
    {
        float f;
        _mm_store_ss(&f, v);
        return f;
    }
    // construct from a __m128, assuming it is a f32 vector (needed for directly returning __m128 below)
    float4(const __m128& v)
        : v(v)
    {
    }
    // return as a __m128 --should this be a reference?
    operator __m128() const
    {
        return v;
    }
    // assign a __m128 (needed for using nested float4 objects inside this class, e.g. sum())
    float4& operator=(const __m128& other)
    {
        v = other;
        return *this;
    }
    }
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
    const double* Srgb8ToLinearTable() {
  static const double* const kSrgb8ToLinearTable = NewSrgb8ToLinearTable();
  return kSrgb8ToLinearTable;
}
    
    namespace guetzli {
    }
    
    #include <stdint.h>
    
    
    {}  // namespace guetzli
    
    namespace guetzli {
    }
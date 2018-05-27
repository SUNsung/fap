
        
          DebuggerClient(ASTContext &C) : Ctx(C) { }
  virtual ~DebuggerClient() = default;
  
  // DebuggerClient is consulted at the beginning of the parsing
  // of various DeclKinds to see whether the decl should be parsed
  // in the global context rather than the current context.
  // This question will only be asked if the decl's current context
  // is a function marked with the LLDBDebuggerFunction attribute.
  virtual bool shouldGlobalize(Identifier Name, DeclKind kind) = 0;
  
  virtual void didGlobalize (Decl *Decl) = 0;
    
    
    {  /// Return a hash code of any components from these options that should
  /// contribute to a Swift Bridging PCH hash.
  llvm::hash_code getPCHHashComponents() const {
    // Nothing here that contributes anything significant when emitting the PCH.
    return llvm::hash_value(0);
  }
};
    
    #endif

    
    // The compiler generates the swift_once_t values as word-sized zero-initialized
// variables, so we want to make sure swift_once_t isn't larger than the
// platform word or the function below might overwrite something it shouldn't.
static_assert(sizeof(swift_once_t) <= sizeof(void*),
              'swift_once_t must be no larger than the platform word');
    
    /// The class for building result plans.
struct ResultPlanBuilder {
  SILGenFunction &SGF;
  SILLocation loc;
  const CalleeTypeInfo &calleeTypeInfo;
    }
    
        for (UINT driverTypeIndex = 0; driverTypeIndex < numDriverTypes; driverTypeIndex++)
    {
        g_driverType = driverTypes[driverTypeIndex];
        hr = D3D11CreateDeviceAndSwapChain(NULL, g_driverType, NULL, createDeviceFlags, featureLevels, numFeatureLevels,
                D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &g_featureLevel, &g_pImmediateContext);
        if (SUCCEEDED(hr))
            break;
    }
    if (FAILED(hr))
        return hr;
    
        f2coeff[1] = - 2*D[1][3] + 2*D[1][7] - 2*D[3][1] - 2*D[3][5] - 2*D[3][9] - 2*D[5][3] + 2*D[5][7] + 2*D[7][1] + 2*D[7][5] + 2*D[7][9] - 2*D[9][3] + 2*D[9][7]; // constant term
    f2coeff[2] = 4*D[1][5] - 4*D[1][1] + 8*D[2][2] + 8*D[2][4] + 8*D[4][2] + 8*D[4][4] + 4*D[5][1] - 4*D[5][5] + 4*D[9][9]; // s1^2  * s2
    f2coeff[3] = 4*D[1][8] - 4*D[1][6] - 8*D[2][3] + 8*D[2][7] - 8*D[3][2] - 8*D[3][4] - 8*D[4][3] + 8*D[4][7] + 4*D[5][6] - 4*D[5][8] - 4*D[6][1] + 4*D[6][5] - 4*D[6][9] + 8*D[7][2] + 8*D[7][4] + 4*D[8][1] - 4*D[8][5] + 4*D[8][9] - 4*D[9][6] + 4*D[9][8]; // s1 * s2
    f2coeff[4] = 8*D[2][2] - 8*D[3][3] - 8*D[4][4] + 8*D[6][6] + 8*D[7][7] - 8*D[8][8]; // s1 * s3
    f2coeff[5] = 4*D[1][4] - 4*D[1][2] - 4*D[2][1] + 4*D[2][5] - 4*D[2][9] - 8*D[3][6] - 8*D[3][8] + 4*D[4][1] - 4*D[4][5] + 4*D[4][9] + 4*D[5][2] - 4*D[5][4] - 8*D[6][3] + 8*D[6][7] + 8*D[7][6] + 8*D[7][8] - 8*D[8][3] + 8*D[8][7] - 4*D[9][2] + 4*D[9][4]; // s2 * s3
    f2coeff[6] = 6*D[5][6] - 6*D[1][8] - 6*D[1][6] + 6*D[5][8] - 6*D[6][1] + 6*D[6][5] - 6*D[6][9] - 6*D[8][1] + 6*D[8][5] - 6*D[8][9] - 6*D[9][6] - 6*D[9][8]; // s2^2 * s3
    f2coeff[7] = 4*D[1][1] - 4*D[1][5] + 4*D[1][9] - 4*D[5][1] + 4*D[5][5] - 4*D[5][9] + 4*D[9][1] - 4*D[9][5] + 4*D[9][9]; // s2^3
    f2coeff[8] = 2*D[2][9] - 2*D[1][4] - 2*D[2][1] - 2*D[2][5] - 2*D[1][2] + 4*D[3][6] + 4*D[3][8] - 2*D[4][1] - 2*D[4][5] + 2*D[4][9] - 2*D[5][2] - 2*D[5][4] + 4*D[6][3] + 4*D[6][7] + 4*D[7][6] + 4*D[7][8] + 4*D[8][3] + 4*D[8][7] + 2*D[9][2] + 2*D[9][4]; // s1 * s3^2
    f2coeff[9] = 2*D[1][2] + 2*D[1][4] + 2*D[2][1] + 2*D[2][5] + 2*D[2][9] - 4*D[3][6] + 4*D[3][8] + 2*D[4][1] + 2*D[4][5] + 2*D[4][9] + 2*D[5][2] + 2*D[5][4] - 4*D[6][3] + 4*D[6][7] + 4*D[7][6] - 4*D[7][8] + 4*D[8][3] - 4*D[8][7] + 2*D[9][2] + 2*D[9][4]; // s1
    f2coeff[10] = 2*D[1][6] + 2*D[1][8] - 4*D[2][3] + 4*D[2][7] - 4*D[3][2] + 4*D[3][4] + 4*D[4][3] - 4*D[4][7] + 2*D[5][6] + 2*D[5][8] + 2*D[6][1] + 2*D[6][5] + 2*D[6][9] + 4*D[7][2] - 4*D[7][4] + 2*D[8][1] + 2*D[8][5] + 2*D[8][9] + 2*D[9][6] + 2*D[9][8]; // s3
    f2coeff[11] = 8*D[3][3] - 4*D[1][9] - 4*D[1][1] - 8*D[3][7] + 4*D[5][5] - 8*D[7][3] + 8*D[7][7] - 4*D[9][1] - 4*D[9][9]; // s2
    f2coeff[12] = 4*D[1][1] - 4*D[5][5] + 4*D[5][9] + 8*D[6][6] + 8*D[6][8] + 8*D[8][6] + 8*D[8][8] + 4*D[9][5] - 4*D[9][9]; // s2 * s3^2
    f2coeff[13] = 2*D[1][7] - 2*D[1][3] + 4*D[2][6] - 4*D[2][8] - 2*D[3][1] + 2*D[3][5] + 2*D[3][9] + 4*D[4][6] - 4*D[4][8] + 2*D[5][3] - 2*D[5][7] + 4*D[6][2] + 4*D[6][4] + 2*D[7][1] - 2*D[7][5] - 2*D[7][9] - 4*D[8][2] - 4*D[8][4] + 2*D[9][3] - 2*D[9][7]; // s1^2
    f2coeff[14] = 2*D[1][3] - 2*D[1][7] + 4*D[2][6] + 4*D[2][8] + 2*D[3][1] + 2*D[3][5] - 2*D[3][9] - 4*D[4][6] - 4*D[4][8] + 2*D[5][3] - 2*D[5][7] + 4*D[6][2] - 4*D[6][4] - 2*D[7][1] - 2*D[7][5] + 2*D[7][9] + 4*D[8][2] - 4*D[8][4] - 2*D[9][3] + 2*D[9][7]; // s3^2
    f2coeff[15] = 6*D[1][3] - 6*D[1][7] + 6*D[3][1] - 6*D[3][5] + 6*D[3][9] - 6*D[5][3] + 6*D[5][7] - 6*D[7][1] + 6*D[7][5] - 6*D[7][9] + 6*D[9][3] - 6*D[9][7]; // s2^2
    f2coeff[16] = 2*D[6][9] - 2*D[1][8] - 2*D[5][6] - 2*D[5][8] - 2*D[6][1] - 2*D[6][5] - 2*D[1][6] - 2*D[8][1] - 2*D[8][5] + 2*D[8][9] + 2*D[9][6] + 2*D[9][8]; // s3^3
    f2coeff[17] = 8*D[2][6] - 4*D[1][7] - 4*D[1][3] + 8*D[2][8] - 4*D[3][1] + 4*D[3][5] - 4*D[3][9] + 8*D[4][6] + 8*D[4][8] + 4*D[5][3] + 4*D[5][7] + 8*D[6][2] + 8*D[6][4] - 4*D[7][1] + 4*D[7][5] - 4*D[7][9] + 8*D[8][2] + 8*D[8][4] - 4*D[9][3] - 4*D[9][7]; // s1 * s2 * s3
    f2coeff[18] = 6*D[2][5] - 6*D[1][4] - 6*D[2][1] - 6*D[1][2] - 6*D[2][9] - 6*D[4][1] + 6*D[4][5] - 6*D[4][9] + 6*D[5][2] + 6*D[5][4] - 6*D[9][2] - 6*D[9][4]; // s1 * s2^2
    f2coeff[19] = 2*D[1][6] + 2*D[1][8] + 4*D[2][3] + 4*D[2][7] + 4*D[3][2] + 4*D[3][4] + 4*D[4][3] + 4*D[4][7] - 2*D[5][6] - 2*D[5][8] + 2*D[6][1] - 2*D[6][5] - 2*D[6][9] + 4*D[7][2] + 4*D[7][4] + 2*D[8][1] - 2*D[8][5] - 2*D[8][9] - 2*D[9][6] - 2*D[9][8]; // s1^2 * s3
    f2coeff[20] = 2*D[1][2] + 2*D[1][4] + 2*D[2][1] - 2*D[2][5] - 2*D[2][9] + 2*D[4][1] - 2*D[4][5] - 2*D[4][9] - 2*D[5][2] - 2*D[5][4] - 2*D[9][2] - 2*D[9][4]; // s1^3
    
    
    {
    {
    {
    {                        const float eps = 1e-4f;
                        //TODO: perhaps it is better to normalize the cross product by norms of the tangent vectors
                        if (fabs(tangentVector_1.cross(tangentVector_2)) < eps)
                        {
                            isGeneralPosition = false;
                        }
                    }
                }
            }
        }
        while(!isGeneralPosition);
    }
    else
    {
        //create points in a degenerate position (there are at least 3 points belonging to the same line)
    
    #if defined(_WIN32)
#include <windows.h>
    
                    // loop over sub-ranges of the dot product (full dot product will exceed the L1 cache)
                float patchbuffer[rowstripehM * colstripewV + 3]; // note: don't forget column rounding
                // 128 * 16 -> 8 KB
                ssematrixbase patch(patchbuffer, i1 - i0, j1 - j0);
    
        InvalidateCompiledNetwork();
    
    PrefetchGPUDataTransferer::PrefetchGPUDataTransferer(int deviceId) : GranularGPUDataTransferer(deviceId, nullptr, nullptr, true)
{
     cudaStreamCreateWithFlags(&m_stream, cudaStreamNonBlocking) || 'cudaStreamCreateWithFlags failed (PrefetchGPUDataTransferer ctor)';
}
    
    // -----------------------------------------------------------------------
// functions exposed by this module
// -----------------------------------------------------------------------
    
    // The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DATAWRITER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DATAWRITER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef _WIN32
#if defined(DATAWRITER_EXPORTS)
#define DATAWRITER_API __declspec(dllexport)
#elif defined(DATAWRITER_LOCAL)
#define DATAWRITER_API
#else
#define DATAWRITER_API __declspec(dllimport)
#endif
#else
#define DATAWRITER_API
#endif
    
      /// Accept a new connection and obtain the endpoint of the peer
  /**
   * This function is used to accept a new connection from a peer into the
   * given socket, and additionally provide the endpoint of the remote peer.
   * The function call will block until a new connection has been accepted
   * successfully or an error occurs.
   *
   * @param peer The socket into which the new connection will be accepted.
   *
   * @param peer_endpoint An endpoint object which will receive the endpoint of
   * the remote peer.
   *
   * @param ec Set to indicate what error occurred, if any.
   *
   * @par Example
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * ...
   * boost::asio::ip::tcp::socket socket(io_service);
   * boost::asio::ip::tcp::endpoint endpoint;
   * boost::system::error_code ec;
   * acceptor.accept(socket, endpoint, ec);
   * if (ec)
   * {
   *   // An error occurred.
   * }
   * @endcode
   */
  template <typename SocketService>
  boost::system::error_code accept(
      basic_socket<protocol_type, SocketService>& peer,
      endpoint_type& peer_endpoint, boost::system::error_code& ec)
  {
    return this->get_service().accept(
        this->get_implementation(), peer, &peer_endpoint, ec);
  }
    
    #if defined(GENERATING_DOCUMENTATION)
  /// The default buffer size.
  static const std::size_t default_buffer_size = implementation_defined;
#else
  BOOST_ASIO_STATIC_CONSTANT(std::size_t, default_buffer_size = 1024);
#endif
    
    
    {
    {} // namespace asio
} // namespace boost
    
    #include <boost/asio/detail/config.hpp>
    
    template <typename Buffer, typename Elem>
class buffer_sequence_adapter<Buffer, boost::array<Elem, 2> >
  : buffer_sequence_adapter_base
{
public:
  explicit buffer_sequence_adapter(
      const boost::array<Elem, 2>& buffer_sequence)
  {
    init_native_buffer(buffers_[0], Buffer(buffer_sequence[0]));
    init_native_buffer(buffers_[1], Buffer(buffer_sequence[1]));
    total_buffer_size_ = boost::asio::buffer_size(buffer_sequence[0])
      + boost::asio::buffer_size(buffer_sequence[1]);
  }
    }
    
      static void do_complete(io_service_impl* owner, operation* base,
      const boost::system::error_code& /*ec*/,
      std::size_t /*bytes_transferred*/)
  {
    // Take ownership of the handler object.
    descriptor_read_op* o(static_cast<descriptor_read_op*>(base));
    ptr p = { boost::asio::detail::addressof(o->handler_), o, o };
    }
    
    
    {private:
  byte* bytes_;
  UINT32 length_;
  UINT32 capacity_;
};
    
    std::size_t sync_write(int d, state_type state, const buf* bufs,
    std::size_t count, bool all_empty, boost::system::error_code& ec)
{
  if (d == -1)
  {
    ec = boost::asio::error::bad_descriptor;
    return 0;
  }
    }
    
    #include <string>
#include <vector>
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        void Lock(int64_t _timelock);  // ms
    void Lock();
    void Unlock();
    bool IsLocking();
    
        if (st.url_length + st.head_length > st.total_length) return __LINE__;
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    //
//  comm_frequency_limit.cc
//  comm
//
//  Created by liucan on 13-11-23.
//
    
    
    {  private:
    TServicesMap m_services;
    TServicesMap m_publicservices;
    std::vector<ServiceBase*> m_releasevec;
};
    
    //============================================================================
// Name        : has_member.h
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
    
    
    {
    {        if (JNI_OK == status_) {
            we_attach_ = true;
            pthread_setspecific(g_env_key, env_);
        } else {
            ASSERT2(false, 'vm:%p, env:%p, status:%d', vm_, env_, status_);
            env_ = NULL;
            return;
        }
    } while (false);
    
    jint ret = env_->PushLocalFrame(_capacity);
    ASSERT2(0 == ret, 'ret:%d', ret);
}
    
    int RunOneTest(Fuzzer *F, const char *InputFilePath, size_t MaxLen) {
  Unit U = FileToVector(InputFilePath);
  if (MaxLen && MaxLen < U.size())
    U.resize(MaxLen);
  F->RunOne(U.data(), U.size());
  F->TryDetectingAMemoryLeak(U.data(), U.size(), true);
  return 0;
}
    
    
    {#undef EXT_FUNC
}
    
    long GetEpoch(const std::string &Path) {
  struct stat St;
  if (stat(Path.c_str(), &St))
    return 0;  // Can't stat, be conservative.
  return St.st_mtime;
}
    
    std::string FileToString(const std::string &Path);
    
    typedef struct sha1nfo {
	uint32_t buffer[BLOCK_LENGTH/4];
	uint32_t state[HASH_LENGTH/4];
	uint32_t byteCount;
	uint8_t bufferOffset;
	uint8_t keyBuffer[BLOCK_LENGTH];
	uint8_t innerHash[HASH_LENGTH];
} sha1nfo;
    
      static const size_t kTORCSize = 1 << 5;
  TableOfRecentCompares<uint32_t, kTORCSize> TORC4;
  TableOfRecentCompares<uint64_t, kTORCSize> TORC8;
    
    void TraceState::TraceSwitchCallback(uintptr_t PC, size_t ValSizeInBits,
                                     uint64_t Val, size_t NumCases,
                                     uint64_t *Cases) {
  if (F->InFuzzingThread()) return;
  size_t ValSize = ValSizeInBits / 8;
  bool TryShort = IsTwoByteData(Val);
  for (size_t i = 0; i < NumCases; i++)
    TryShort &= IsTwoByteData(Cases[i]);
    }
    
    bool ParseDictionaryFile(const std::string &Text, std::vector<Unit> *Units) {
  if (Text.empty()) {
    Printf('ParseDictionaryFile: file does not exist or is empty\n');
    return false;
  }
  std::istringstream ISS(Text);
  Units->clear();
  Unit U;
  int LineNo = 0;
  std::string S;
  while (std::getline(ISS, S, '\n')) {
    LineNo++;
    size_t Pos = 0;
    while (Pos < S.size() && isspace(S[Pos])) Pos++;  // Skip spaces.
    if (Pos == S.size()) continue;  // Empty line.
    if (S[Pos] == '#') continue;  // Comment line.
    if (ParseOneDictionaryEntry(S, &U)) {
      Units->push_back(U);
    } else {
      Printf('ParseDictionaryFile: error in line %d\n\t\t%s\n', LineNo,
             S.c_str());
      return false;
    }
  }
  return true;
}
    
      // NOTE: Do not introduce any new `return` statements past this
  // point. It is important that `ActiveThreadCount` always be decremented
  // when leaving this function.
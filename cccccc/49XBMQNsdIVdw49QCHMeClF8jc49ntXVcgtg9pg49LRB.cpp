
        
        namespace xla {
namespace gpu {
    }
    }
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
    #include 'absl/types/optional.h'
#include 'tensorflow/compiler/xla/service/buffer_assignment.h'
#include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/cudnn_conv_runner.h'
#include 'tensorflow/compiler/xla/service/gpu/gpu_executable.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/compiler/xla/service/hlo_instructions.h'
#include 'tensorflow/compiler/xla/types.h'
#include 'tensorflow/compiler/xla/xla_data.pb.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    HostToDeviceCopyThunk::HostToDeviceCopyThunk(
    const void* source_address,
    const BufferAllocation::Slice& destination_buffer, uint64 mem_size,
    const HloInstruction* hlo_instruction)
    : Thunk(Kind::kCopy, hlo_instruction),
      source_address_(source_address),
      destination_buffer_(destination_buffer),
      mem_size_(mem_size) {}
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
    
    { private:
  uint32 value_;
  const BufferAllocation::Slice dest_;
};
    
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
    
    #include 'absl/memory/memory.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/util.h'
#include 'tensorflow/core/lib/core/errors.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include 'base/basictypes.h'
#include '../dispatcher_host.h'
    
    
    {}  // namespace nw

    
    ui::KeyboardCode GetKeycodeFromText(std::string text){
  ui::KeyboardCode retval = ui::VKEY_UNKNOWN;
  if (text.size() != 0){
    std::string upperText = base::ToUpperASCII(text);
    std::string keyName = text;
    bool found = false;
    if (upperText.size() == 1){
      char key = upperText[0];
      if (key>='0' && key<='9'){//handle digital
        keyName = 'Digit' + upperText;
        found = true;
      } else if (key>='A'&&key<='Z'){//handle alphabet
        keyName = 'Key' + upperText;
        found = true;
      }
    }
    }
    }
    
    NwAppClearAppCacheFunction::NwAppClearAppCacheFunction() {
}
    
    #include 'base/run_loop.h'
#include 'content/public/browser/browsing_data_remover.h'
#include 'extensions/browser/extension_function.h'
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.create', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCreateFunction);
};
    
    protected:
    ComputationNetworkPtr m_net;
    
    template <typename ElemType, typename ElemType2> static inline const wchar_t* ElemTypeName2();
template <> /*static*/ inline const wchar_t* ElemTypeName2<float,half>() { return L'float,half'; }
template <> /*static*/ inline const wchar_t* ElemTypeName2<float,double>() { return L'float,double'; }
template <> /*static*/ inline const wchar_t* ElemTypeName2<double,half>() { return L'double,half'; }
template <> /*static*/ inline const wchar_t* ElemTypeName2<double,float>() { return L'double,float'; }
template <> /*static*/ inline const wchar_t* ElemTypeName2<half,float>() { return L'half,float'; }
template <> /*static*/ inline const wchar_t* ElemTypeName2<half,double>() { return L'half,double'; }
    
    BOOST_AUTO_TEST_CASE(EvalConstantPlusTest)
{
    // Setup model for adding two constants (1 + 2)
    std::string modelDefinition =
        'deviceId = -1 \n'
        'precision = \'float\' \n'
        'traceLevel = 1 \n'
        'run=NDLNetworkBuilder \n'
        'NDLNetworkBuilder=[ \n'
        'v1 = Constant(1) \n'
        'v2 = Constant(2) \n'
        'ol = Plus(v1, v2, tag=\'output\') \n'
        'FeatureNodes = (v1) \n'
        '] \n';
    }
    
    #include 'coroutine_channel.h'
    
        for (i = 0; i < MAP_SIZE; i++)
    {
        pkt = (swFdInfo *) malloc(sizeof(swFdInfo));
        pkt->key = i;
        pkt->fd = i * 37;
        swHashMap_add_int(ht, pkt->fd, pkt);
        lists[i] = pkt;
    }
    
        long buf;
    read(_pipe, (void*) &buf, sizeof(buf));
    close(_pipe);
    
    const char* swoole_strerror(int code)
{
    if (code < SW_ERROR_START)
    {
        return strerror(code);
    }
    /* swstrerror {{{*/
    switch(code)
    {
    case SW_ERROR_MALLOC_FAIL:
        return 'Malloc fail';
    case SW_ERROR_SYSTEM_CALL_FAIL:
        return 'System call fail';
    case SW_ERROR_PHP_FATAL_ERROR:
        return 'PHP fatal error';
    case SW_ERROR_NAME_TOO_LONG:
        return 'Name too long';
    case SW_ERROR_INVALID_PARAMS:
        return 'Invalid params';
    case SW_ERROR_QUEUE_FULL:
        return 'Queue full';
    case SW_ERROR_OPERATION_NOT_SUPPORT:
        return 'Operation not support';
    case SW_ERROR_FILE_NOT_EXIST:
        return 'File not exist';
    case SW_ERROR_FILE_TOO_LARGE:
        return 'File too large';
    case SW_ERROR_FILE_EMPTY:
        return 'File empty';
    case SW_ERROR_DNSLOOKUP_DUPLICATE_REQUEST:
        return 'DNS Lookup duplicate request';
    case SW_ERROR_DNSLOOKUP_RESOLVE_FAILED:
        return 'DNS Lookup resolve failed';
    case SW_ERROR_DNSLOOKUP_RESOLVE_TIMEOUT:
        return 'DNS Lookup resolve timeout';
    case SW_ERROR_BAD_IPV6_ADDRESS:
        return 'Bad ipv6 address';
    case SW_ERROR_UNREGISTERED_SIGNAL:
        return 'Unregistered signal';
    case SW_ERROR_SESSION_CLOSED_BY_SERVER:
        return 'Session closed by server';
    case SW_ERROR_SESSION_CLOSED_BY_CLIENT:
        return 'Session closed by client';
    case SW_ERROR_SESSION_CLOSING:
        return 'Session closing';
    case SW_ERROR_SESSION_CLOSED:
        return 'Session closed';
    case SW_ERROR_SESSION_NOT_EXIST:
        return 'Session not exist';
    case SW_ERROR_SESSION_INVALID_ID:
        return 'Session invalid id';
    case SW_ERROR_SESSION_DISCARD_TIMEOUT_DATA:
        return 'Session discard timeout data';
    case SW_ERROR_OUTPUT_BUFFER_OVERFLOW:
        return 'Output buffer overflow';
    case SW_ERROR_SSL_NOT_READY:
        return 'SSL not ready';
    case SW_ERROR_SSL_CANNOT_USE_SENFILE:
        return 'SSL cannot use senfile';
    case SW_ERROR_SSL_EMPTY_PEER_CERTIFICATE:
        return 'SSL empty peer certificate';
    case SW_ERROR_SSL_VEFIRY_FAILED:
        return 'SSL vefiry failed';
    case SW_ERROR_SSL_BAD_CLIENT:
        return 'SSL bad client';
    case SW_ERROR_SSL_BAD_PROTOCOL:
        return 'SSL bad protocol';
    case SW_ERROR_PACKAGE_LENGTH_TOO_LARGE:
        return 'Package length too large';
    case SW_ERROR_DATA_LENGTH_TOO_LARGE:
        return 'Data length too large';
    case SW_ERROR_TASK_PACKAGE_TOO_BIG:
        return 'Task package too big';
    case SW_ERROR_TASK_DISPATCH_FAIL:
        return 'Task dispatch fail';
    case SW_ERROR_HTTP2_STREAM_ID_TOO_BIG:
        return 'Http2 stream id too big';
    case SW_ERROR_HTTP2_STREAM_NO_HEADER:
        return 'Http2 stream no header';
    case SW_ERROR_HTTP2_STREAM_NOT_FOUND:
        return 'Http2 stream not found';
    case SW_ERROR_AIO_BAD_REQUEST:
        return 'Aio bad request';
    case SW_ERROR_AIO_CANCELED:
        return 'Aio canceled';
    case SW_ERROR_CLIENT_NO_CONNECTION:
        return 'Client no connection';
    case SW_ERROR_SOCKET_CLOSED:
        return 'Socket closed';
    case SW_ERROR_SOCKS5_UNSUPPORT_VERSION:
        return 'Socks5 unsupport version';
    case SW_ERROR_SOCKS5_UNSUPPORT_METHOD:
        return 'Socks5 unsupport method';
    case SW_ERROR_SOCKS5_AUTH_FAILED:
        return 'Socks5 auth failed';
    case SW_ERROR_SOCKS5_SERVER_ERROR:
        return 'Socks5 server error';
    case SW_ERROR_HTTP_PROXY_HANDSHAKE_ERROR:
        return 'Http proxy handshake error';
    case SW_ERROR_HTTP_INVALID_PROTOCOL:
        return 'Http invalid protocol';
    case SW_ERROR_WEBSOCKET_BAD_CLIENT:
        return 'Websocket bad client';
    case SW_ERROR_WEBSOCKET_BAD_OPCODE:
        return 'Websocket bad opcode';
    case SW_ERROR_WEBSOCKET_UNCONNECTED:
        return 'Websocket unconnected';
    case SW_ERROR_WEBSOCKET_HANDSHAKE_FAILED:
        return 'Websocket handshake failed';
    case SW_ERROR_SERVER_MUST_CREATED_BEFORE_CLIENT:
        return 'Server must created before client';
    case SW_ERROR_SERVER_TOO_MANY_SOCKET:
        return 'Server too many socket';
    case SW_ERROR_SERVER_WORKER_TERMINATED:
        return 'Server worker terminated';
    case SW_ERROR_SERVER_INVALID_LISTEN_PORT:
        return 'Server invalid listen port';
    case SW_ERROR_SERVER_TOO_MANY_LISTEN_PORT:
        return 'Server too many listen port';
    case SW_ERROR_SERVER_PIPE_BUFFER_FULL:
        return 'Server pipe buffer full';
    case SW_ERROR_SERVER_NO_IDLE_WORKER:
        return 'Server no idle worker';
    case SW_ERROR_SERVER_ONLY_START_ONE:
        return 'Server only start one';
    case SW_ERROR_SERVER_SEND_IN_MASTER:
        return 'Server send in master';
    case SW_ERROR_SERVER_INVALID_REQUEST:
        return 'Server invalid request';
    case SW_ERROR_SERVER_CONNECT_FAIL:
        return 'Server connect fail';
    case SW_ERROR_SERVER_WORKER_EXIT_TIMEOUT:
        return 'Server worker exit timeout';
    case SW_ERROR_CO_OUT_OF_COROUTINE:
        return 'Coroutine out of coroutine';
    case SW_ERROR_CO_HAS_BEEN_BOUND:
        return 'Coroutine has been bound';
    case SW_ERROR_CO_MUTEX_DOUBLE_UNLOCK:
        return 'Coroutine mutex double unlock';
    case SW_ERROR_CO_BLOCK_OBJECT_LOCKED:
        return 'Coroutine block object locked';
    case SW_ERROR_CO_BLOCK_OBJECT_WAITING:
        return 'Coroutine block object waiting';
    case SW_ERROR_CO_YIELD_FAILED:
        return 'Coroutine yield failed';
    case SW_ERROR_CO_GETCONTEXT_FAILED:
        return 'Coroutine getcontext failed';
    case SW_ERROR_CO_SWAPCONTEXT_FAILED:
        return 'Coroutine swapcontext failed';
    case SW_ERROR_CO_MAKECONTEXT_FAILED:
        return 'Coroutine makecontext failed';
    case SW_ERROR_CO_IOCPINIT_FAILED:
        return 'Coroutine iocpinit failed';
    case SW_ERROR_CO_PROTECT_STACK_FAILED:
        return 'Coroutine protect stack failed';
    case SW_ERROR_CO_STD_THREAD_LINK_ERROR:
        return 'Coroutine std thread link error';
    case SW_ERROR_CO_DISABLED_MULTI_THREAD:
        return 'Coroutine disabled multi thread';
    default:
        static char buffer[32];
#ifndef __MACH__
        snprintf(buffer, sizeof(buffer), 'Unknown error %d', code);
#else
        snprintf(buffer, sizeof(buffer), 'Unknown error: %d', code);
#endif
        return buffer;
    }
/*}}}*/
}
    
    #include 'example-qt.h'
    
    class ExampleQt : public QObject {
    }
    
    static unordered_map<string, string> mime_map({
    { 'ez', 'application/andrew-inset' },
    { 'aw', 'application/applixware' },
    { 'atom', 'application/atom+xml' },
    { 'atomcat', 'application/atomcat+xml' },
    { 'atomsvc', 'application/atomsvc+xml' },
    { 'bdoc', 'application/bdoc' },
    { 'ccxml', 'application/ccxml+xml' },
    { 'cdmia', 'application/cdmi-capability' },
    { 'cdmic', 'application/cdmi-container' },
    { 'cdmid', 'application/cdmi-domain' },
    { 'cdmio', 'application/cdmi-object' },
    { 'cdmiq', 'application/cdmi-queue' },
    { 'cu', 'application/cu-seeme' },
    { 'mpd', 'application/dash+xml' },
    { 'davmount', 'application/davmount+xml' },
    { 'dbk', 'application/docbook+xml' },
    { 'dssc', 'application/dssc+der' },
    { 'xdssc', 'application/dssc+xml' },
    { 'ecma', 'application/ecmascript' },
    { 'emma', 'application/emma+xml' },
    { 'epub', 'application/epub+zip' },
    { 'exi', 'application/exi' },
    { 'pfr', 'application/font-tdpfr' },
    { 'woff', 'application/font-woff' },
    { 'geojson', 'application/geo+json' },
    { 'gml', 'application/gml+xml' },
    { 'gpx', 'application/gpx+xml' },
    { 'gxf', 'application/gxf' },
    { 'gz', 'application/gzip' },
    { 'hjson', 'application/hjson' },
    { 'stk', 'application/hyperstudio' },
    { 'ink', 'application/inkml+xml' },
    { 'inkml', 'application/inkml+xml' },
    { 'ipfix', 'application/ipfix' },
    { 'jar', 'application/java-archive' },
    { 'war', 'application/java-archive' },
    { 'ear', 'application/java-archive' },
    { 'ser', 'application/java-serialized-object' },
    { 'class', 'application/java-vm' },
    { 'js', 'application/javascript' },
    { 'mjs', 'application/javascript' },
    { 'json', 'application/json' },
    { 'map', 'application/json' },
    { 'json5', 'application/json5' },
    { 'jsonml', 'application/jsonml+json' },
    { 'jsonld', 'application/ld+json' },
    { 'lostxml', 'application/lost+xml' },
    { 'hqx', 'application/mac-binhex40' },
    { 'cpt', 'application/mac-compactpro' },
    { 'mads', 'application/mads+xml' },
    { 'webmanifest', 'application/manifest+json' },
    { 'mrc', 'application/marc' },
    { 'mrcx', 'application/marcxml+xml' },
    { 'ma', 'application/mathematica' },
    { 'nb', 'application/mathematica' },
    { 'mb', 'application/mathematica' },
    { 'mathml', 'application/mathml+xml' },
    { 'mbox', 'application/mbox' },
    { 'mscml', 'application/mediaservercontrol+xml' },
    { 'metalink', 'application/metalink+xml' },
    { 'meta4', 'application/metalink4+xml' },
    { 'mets', 'application/mets+xml' },
    { 'mods', 'application/mods+xml' },
    { 'm21', 'application/mp21' },
    { 'mp21', 'application/mp21' },
    { 'mp4s', 'application/mp4' },
    { 'm4p', 'application/mp4' },
    { 'doc', 'application/msword' },
    { 'docx', 'application/vnd.openxmlformats-officedocument.wordprocessingml.document' },
    { 'dot', 'application/msword' },
    { 'mxf', 'application/mxf' },
    { 'bin', 'application/octet-stream' },
    { 'dms', 'application/octet-stream' },
    { 'lrf', 'application/octet-stream' },
    { 'mar', 'application/octet-stream' },
    { 'so', 'application/octet-stream' },
    { 'dist', 'application/octet-stream' },
    { 'distz', 'application/octet-stream' },
    { 'pkg', 'application/octet-stream' },
    { 'bpk', 'application/octet-stream' },
    { 'dump', 'application/octet-stream' },
    { 'elc', 'application/octet-stream' },
    { 'deploy', 'application/octet-stream' },
    { 'exe', 'application/octet-stream' },
    { 'dll', 'application/octet-stream' },
    { 'deb', 'application/octet-stream' },
    { 'dmg', 'application/octet-stream' },
    { 'iso', 'application/octet-stream' },
    { 'img', 'application/octet-stream' },
    { 'msi', 'application/octet-stream' },
    { 'msp', 'application/octet-stream' },
    { 'msm', 'application/octet-stream' },
    { 'buffer', 'application/octet-stream' },
    { 'oda', 'application/oda' },
    { 'opf', 'application/oebps-package+xml' },
    { 'ogx', 'application/ogg' },
    { 'omdoc', 'application/omdoc+xml' },
    { 'onetoc', 'application/onenote' },
    { 'onetoc2', 'application/onenote' },
    { 'onetmp', 'application/onenote' },
    { 'onepkg', 'application/onenote' },
    { 'oxps', 'application/oxps' },
    { 'xer', 'application/patch-ops-error+xml' },
    { 'pdf', 'application/pdf' },
    { 'pgp', 'application/pgp-encrypted' },
    { 'asc', 'application/pgp-signature' },
    { 'sig', 'application/pgp-signature' },
    { 'prf', 'application/pics-rules' },
    { 'p10', 'application/pkcs10' },
    { 'p7m', 'application/pkcs7-mime' },
    { 'p7c', 'application/pkcs7-mime' },
    { 'p7s', 'application/pkcs7-signature' },
    { 'p8', 'application/pkcs8' },
    { 'ac', 'application/pkix-attr-cert' },
    { 'cer', 'application/pkix-cert' },
    { 'crl', 'application/pkix-crl' },
    { 'pkipath', 'application/pkix-pkipath' },
    { 'pki', 'application/pkixcmp' },
    { 'pls', 'application/pls+xml' },
    { 'ai', 'application/postscript' },
    { 'eps', 'application/postscript' },
    { 'ps', 'application/postscript' },
    { 'pskcxml', 'application/pskc+xml' },
    { 'raml', 'application/raml+yaml' },
    { 'rdf', 'application/rdf+xml' },
    { 'rif', 'application/reginfo+xml' },
    { 'rnc', 'application/relax-ng-compact-syntax' },
    { 'rl', 'application/resource-lists+xml' },
    { 'rld', 'application/resource-lists-diff+xml' },
    { 'rs', 'application/rls-services+xml' },
    { 'gbr', 'application/rpki-ghostbusters' },
    { 'mft', 'application/rpki-manifest' },
    { 'roa', 'application/rpki-roa' },
    { 'rsd', 'application/rsd+xml' },
    { 'rss', 'application/rss+xml' },
    { 'rtf', 'application/rtf' },
    { 'sbml', 'application/sbml+xml' },
    { 'scq', 'application/scvp-cv-request' },
    { 'scs', 'application/scvp-cv-response' },
    { 'spq', 'application/scvp-vp-request' },
    { 'spp', 'application/scvp-vp-response' },
    { 'sdp', 'application/sdp' },
    { 'setpay', 'application/set-payment-initiation' },
    { 'setreg', 'application/set-registration-initiation' },
    { 'shf', 'application/shf+xml' },
    { 'smi', 'application/smil+xml' },
    { 'smil', 'application/smil+xml' },
    { 'rq', 'application/sparql-query' },
    { 'srx', 'application/sparql-results+xml' },
    { 'gram', 'application/srgs' },
    { 'grxml', 'application/srgs+xml' },
    { 'sru', 'application/sru+xml' },
    { 'ssdl', 'application/ssdl+xml' },
    { 'ssml', 'application/ssml+xml' },
    { 'tei', 'application/tei+xml' },
    { 'teicorpus', 'application/tei+xml' },
    { 'tfi', 'application/thraud+xml' },
    { 'tsd', 'application/timestamped-data' },
    { 'vxml', 'application/voicexml+xml' },
    { 'wasm', 'application/wasm' },
    { 'wgt', 'application/widget' },
    { 'hlp', 'application/winhlp' },
    { 'wsdl', 'application/wsdl+xml' },
    { 'wspolicy', 'application/wspolicy+xml' },
    { 'xaml', 'application/xaml+xml' },
    { 'xdf', 'application/xcap-diff+xml' },
    { 'xenc', 'application/xenc+xml' },
    { 'xhtml', 'application/xhtml+xml' },
    { 'xht', 'application/xhtml+xml' },
    { 'xml', 'application/xml' },
    { 'xsl', 'application/xml' },
    { 'xsd', 'application/xml' },
    { 'rng', 'application/xml' },
    { 'dtd', 'application/xml-dtd' },
    { 'xop', 'application/xop+xml' },
    { 'xpl', 'application/xproc+xml' },
    { 'xslt', 'application/xslt+xml' },
    { 'xspf', 'application/xspf+xml' },
    { 'mxml', 'application/xv+xml' },
    { 'xhvml', 'application/xv+xml' },
    { 'xvml', 'application/xv+xml' },
    { 'xvm', 'application/xv+xml' },
    { 'yang', 'application/yang' },
    { 'yin', 'application/yin+xml' },
    { 'zip', 'application/zip' },
    { '*3gpp', 'audio/3gpp' },
    { 'adp', 'audio/adpcm' },
    { 'au', 'audio/basic' },
    { 'snd', 'audio/basic' },
    { 'mid', 'audio/midi' },
    { 'midi', 'audio/midi' },
    { 'kar', 'audio/midi' },
    { 'rmi', 'audio/midi' },
    { '*mp3', 'audio/mp3' },
    { 'm4a', 'audio/mp4' },
    { 'mp4a', 'audio/mp4' },
    { 'mpga', 'audio/mpeg' },
    { 'mp2', 'audio/mpeg' },
    { 'mp2a', 'audio/mpeg' },
    { 'mp3', 'audio/mpeg' },
    { 'm2a', 'audio/mpeg' },
    { 'm3a', 'audio/mpeg' },
    { 'oga', 'audio/ogg' },
    { 'ogg', 'audio/ogg' },
    { 'spx', 'audio/ogg' },
    { 's3m', 'audio/s3m' },
    { 'sil', 'audio/silk' },
    { 'wav', 'audio/wav' },
    { '*wav', 'audio/wave' },
    { 'weba', 'audio/webm' },
    { 'xm', 'audio/xm' },
    { 'ttc', 'font/collection' },
    { 'otf', 'font/otf' },
    { 'ttf', 'font/ttf' },
    { '*woff', 'font/woff' },
    { 'woff2', 'font/woff2' },
    { 'apng', 'image/apng' },
    { 'bmp', 'image/bmp' },
    { 'cgm', 'image/cgm' },
    { 'g3', 'image/g3fax' },
    { 'gif', 'image/gif' },
    { 'ief', 'image/ief' },
    { 'jp2', 'image/jp2' },
    { 'jpg2', 'image/jp2' },
    { 'jpeg', 'image/jpeg' },
    { 'jpg', 'image/jpeg' },
    { 'jpe', 'image/jpeg' },
    { 'jpm', 'image/jpm' },
    { 'jpx', 'image/jpx' },
    { 'jpf', 'image/jpx' },
    { 'ktx', 'image/ktx' },
    { 'png', 'image/png' },
    { 'sgi', 'image/sgi' },
    { 'svg', 'image/svg+xml' },
    { 'svgz', 'image/svg+xml' },
    { 'tiff', 'image/tiff' },
    { 'tif', 'image/tiff' },
    { 'webp', 'image/webp' },
    { 'disposition-notification', 'message/disposition-notification' },
    { 'u8msg', 'message/global' },
    { 'u8dsn', 'message/global-delivery-status' },
    { 'u8mdn', 'message/global-disposition-notification' },
    { 'u8hdr', 'message/global-headers' },
    { 'eml', 'message/rfc822' },
    { 'mime', 'message/rfc822' },
    { 'gltf', 'model/gltf+json' },
    { 'glb', 'model/gltf-binary' },
    { 'igs', 'model/iges' },
    { 'iges', 'model/iges' },
    { 'msh', 'model/mesh' },
    { 'mesh', 'model/mesh' },
    { 'silo', 'model/mesh' },
    { 'wrl', 'model/vrml' },
    { 'vrml', 'model/vrml' },
    { 'x3db', 'model/x3d+binary' },
    { 'x3dbz', 'model/x3d+binary' },
    { 'x3dv', 'model/x3d+vrml' },
    { 'x3dvz', 'model/x3d+vrml' },
    { 'x3d', 'model/x3d+xml' },
    { 'x3dz', 'model/x3d+xml' },
    { 'appcache', 'text/cache-manifest' },
    { 'manifest', 'text/cache-manifest' },
    { 'ics', 'text/calendar' },
    { 'ifb', 'text/calendar' },
    { 'coffee', 'text/coffeescript' },
    { 'litcoffee', 'text/coffeescript' },
    { 'css', 'text/css' },
    { 'csv', 'text/csv' },
    { 'html', 'text/html' },
    { 'htm', 'text/html' },
    { 'shtml', 'text/html' },
    { 'jade', 'text/jade' },
    { 'jsx', 'text/jsx' },
    { 'less', 'text/less' },
    { 'markdown', 'text/markdown' },
    { 'md', 'text/markdown' },
    { 'mml', 'text/mathml' },
    { 'n3', 'text/n3' },
    { 'txt', 'text/plain' },
    { 'text', 'text/plain' },
    { 'conf', 'text/plain' },
    { 'def', 'text/plain' },
    { 'list', 'text/plain' },
    { 'log', 'text/plain' },
    { 'in', 'text/plain' },
    { 'ini', 'text/plain' },
    { 'rtx', 'text/richtext' },
    { '*rtf', 'text/rtf' },
    { 'sgml', 'text/sgml' },
    { 'sgm', 'text/sgml' },
    { 'shex', 'text/shex' },
    { 'slim', 'text/slim' },
    { 'slm', 'text/slim' },
    { 'stylus', 'text/stylus' },
    { 'styl', 'text/stylus' },
    { 'tsv', 'text/tab-separated-values' },
    { 't', 'text/troff' },
    { 'tr', 'text/troff' },
    { 'roff', 'text/troff' },
    { 'man', 'text/troff' },
    { 'me', 'text/troff' },
    { 'ms', 'text/troff' },
    { 'ttl', 'text/turtle' },
    { 'uri', 'text/uri-list' },
    { 'uris', 'text/uri-list' },
    { 'urls', 'text/uri-list' },
    { 'vcard', 'text/vcard' },
    { 'vtt', 'text/vtt' },
    { '*xml', 'text/xml' },
    { 'yaml', 'text/yaml' },
    { 'yml', 'text/yaml' },
    { '3gp', 'video/3gpp' },
    { '3gpp', 'video/3gpp' },
    { '3g2', 'video/3gpp2' },
    { 'h261', 'video/h261' },
    { 'h263', 'video/h263' },
    { 'h264', 'video/h264' },
    { 'jpgv', 'video/jpeg' },
    { '*jpm', 'video/jpm' },
    { 'jpgm', 'video/jpm' },
    { 'mj2', 'video/mj2' },
    { 'mjp2', 'video/mj2' },
    { 'ts', 'video/mp2t' },
    { 'mp4', 'video/mp4' },
    { 'mp4v', 'video/mp4' },
    { 'mpg4', 'video/mp4' },
    { 'mpeg', 'video/mpeg' },
    { 'mpg', 'video/mpeg' },
    { 'mpe', 'video/mpeg' },
    { 'm1v', 'video/mpeg' },
    { 'm2v', 'video/mpeg' },
    { 'ogv', 'video/ogg' },
    { 'qt', 'video/quicktime' },
    { 'mov', 'video/quicktime' },
    { 'webm', 'video/webm' },
    // https://developer.mozilla.org/en-US/docs/Web/HTTP/Basics_of_HTTP/MIME_types/Complete_list_of_MIME_types
    { 'aac', 'audio/aac' },
    { 'abw', 'application/x-abiword' },
    { 'arc', 'application/octet-stream' },
    { 'avi', 'video/x-msvideo' },
    { 'azw', 'application/vnd.amazon.ebook' },
    { 'bz', 'application/x-bzip' },
    { 'bz2', 'application/x-bzip2' },
    { 'csh', 'application/x-csh' },
    { 'eot', 'application/vnd.ms-fontobject' },
    { 'es', 'application/ecmascript' },
    { 'ico', 'image/x-icon' },
    { 'mpkg', 'application/vnd.apple.installer+xml' },
    { 'odp', 'application/vnd.oasis.opendocument.presentation' },
    { 'ods', 'application/vnd.oasis.opendocument.spreadsheet' },
    { 'odt', 'application/vnd.oasis.opendocument.text' },
    { 'ppt', 'application/vnd.ms-powerpoint' },
    { 'pptx', 'application/vnd.openxmlformats-officedocument.presentationml.presentation' },
    { 'rar', 'application/x-rar-compressed' },
    { 'sh', 'application/x-sh' },
    { 'swf', 'application/x-shockwave-flash' },
    { 'tar', 'application/x-tar' },
    { 'vsd', 'application/vnd.visio' },
    { 'xls', 'application/vnd.ms-excel' },
    { 'xlsx', 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet' },
    { 'xul', 'application/vnd.mozilla.xul+xml' },
    { '7z', 'application/x-7z-compressed' }
});
    
    
    {  return qcompress::guessFormat(value.toByteArray());
}
    
      if (op == Operation::DELETE_KEYS) {
    m_operation = QSharedPointer<BulkOperations::AbstractOperation>(
        new BulkOperations::DeleteOperation(connection, dbIndex,
                                            callbackWrapper, keyPattern));
  } else if (op == Operation::TTL) {
    m_operation = QSharedPointer<BulkOperations::AbstractOperation>(
        new BulkOperations::TtlOperation(connection, dbIndex, callbackWrapper,
                                         keyPattern));
  } else if (op == Operation::COPY_KEYS) {
    m_operation = QSharedPointer<BulkOperations::AbstractOperation>(
        new BulkOperations::CopyOperation(connection, dbIndex, callbackWrapper,
                                          keyPattern));
  } else if (op == Operation::IMPORT_RDB_KEYS) {
    m_operation = QSharedPointer<BulkOperations::AbstractOperation>(
        new BulkOperations::RDBImportOperation(
            connection, dbIndex, callbackWrapper, m_python, keyPattern));
  }
    
      virtual void getAffectedKeys(std::function<void(QVariant, QString)> callback);
    
            Then once you running ActionTween on the node, the method updateTweenAction will be invoked.
*/
class CC_DLL ActionTweenDelegate
{
public:
    /**
     * @js NA
     * @lua NA
     */
    virtual ~ActionTweenDelegate() {}
    }
    
    void ClippingRectangleNode::visit(Renderer *renderer, const Mat4 &parentTransform, uint32_t parentFlags)
{
    _beforeVisitCmdScissor.init(_globalZOrder);
    _beforeVisitCmdScissor.func = CC_CALLBACK_0(ClippingRectangleNode::onBeforeVisitScissor, this);
    renderer->addCommand(&_beforeVisitCmdScissor);
    
    Node::visit(renderer, parentTransform, parentFlags);
    
    _afterVisitCmdScissor.init(_globalZOrder);
    _afterVisitCmdScissor.func = CC_CALLBACK_0(ClippingRectangleNode::onAfterVisitScissor, this);
    renderer->addCommand(&_afterVisitCmdScissor);
}
    
    
    {protected:
    ClippingRectangleNode()
    : _clippingEnabled(true)
    {
    }
    
    void onBeforeVisitScissor();
    void onAfterVisitScissor();
    
    Rect _clippingRegion;
    bool _clippingEnabled;
    
    CustomCommand _beforeVisitCmdScissor;
    CustomCommand _afterVisitCmdScissor;
};
    
    NS_CC_BEGIN
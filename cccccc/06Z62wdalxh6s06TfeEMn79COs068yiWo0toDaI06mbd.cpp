
        
        
    {}  // namespace tensorflow
    
    ModelAnalyzer::ModelAnalyzer(const GrapplerItem& item) : item_(item) {}
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {}  // namespace tensorflow
    
    namespace tensorflow {
    }
    
    // Safe containers for an owned TFE_TensorHandle. On destruction, the handle
// will be deleted by TFE_DeleteTensorHandle.
using Safe_TFE_TensorHandlePtr =
    std::unique_ptr<TFE_TensorHandle, detail::TFETensorHandleDeleter>;
Safe_TFE_TensorHandlePtr make_safe(TFE_TensorHandle* handle);
    
      static void OnDoneRecvTrailingMetadataCb(void* user_data, grpc_error* error);
    
    MeasureDouble RpcClientRoundtripLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientRoundtripLatencyMeasureName,
      'Time between first byte of request sent to last byte of response '
      'received, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
    
    {  const protobuf::FileDescriptor* file_desc =
      descriptor_pool_->FindFileContainingSymbol(symbol);
  if (file_desc == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'Symbol not found.');
  }
  std::unordered_set<grpc::string> seen_files;
  FillFileDescriptorResponse(file_desc, response, &seen_files);
  return Status::OK;
}
    
    namespace grpc {
namespace load_reporter {
    }
    }
    
    std::pair<uint64_t, uint64_t> GetCpuStatsImpl() {
  uint64_t busy = 0, total = 0;
  FILETIME idle, kernel, user;
  if (GetSystemTimes(&idle, &kernel, &user) != 0) {
    total = FiletimeToInt(kernel) + FiletimeToInt(user);
    busy = total - FiletimeToInt(idle);
  }
  return std::make_pair(busy, total);
}
    
    ThreadPoolInterface* CreateDefaultThreadPool();
    
      // set up the image data
  if (mode == psModeForm || inType3Char || preload) {
    if (inlineImg) {
      // create an array
      str2 = new FixedLengthEncoder(str, len);
      str2 = new RunLengthEncoder(str2);
      if (useASCIIHex) {
	str2 = new ASCIIHexEncoder(str2);
      } else {
	str2 = new ASCII85Encoder(str2);
      }
      str2->reset();
      col = 0;
      writePS((char *)(useASCIIHex ? '[<' : '[<~'));
      do {
	do {
	  c = str2->getChar();
	} while (c == '\n' || c == '\r');
	if (c == (useASCIIHex ? '>' : '~') || c == EOF) {
	  break;
	}
	if (c == 'z') {
	  writePSChar(c);
	  ++col;
	} else {
	  writePSChar(c);
	  ++col;
	  for (i = 1; i <= (useASCIIHex ? 1 : 4); ++i) {
	    do {
	      c = str2->getChar();
	    } while (c == '\n' || c == '\r');
	    if (c == (useASCIIHex ? '>' : '~') || c == EOF) {
	      break;
	    }
	    writePSChar(c);
	    ++col;
	  }
	}
	// each line is: '<~...data...~><eol>'
	// so max data length = 255 - 6 = 249
	// chunks are 1 or 5 bytes each, so we have to stop at 245
	// but make it 240 just to be safe
	if (col > 240) {
	  writePS((char *)(useASCIIHex ? '>\n<' : '~>\n<~'));
	  col = 0;
	}
      } while (c != (useASCIIHex ? '>' : '~') && c != EOF);
      writePS((char *)(useASCIIHex ? '>\n' : '~>\n'));
      // add an extra entry because the RunLengthDecode filter may
      // read past the end
      writePS('<>]\n');
      writePS('0\n');
      str2->close();
      delete str2;
    } else {
      // make sure the image is setup, it sometimes is not like on bug #17645
      setupImage(ref->getRef(), str);
      // set up to use the array already created by setupImages()
      writePSFmt('ImData_{0:d}_{1:d} 0 0\n', ref->getRefNum(), ref->getRefGen());
    }
  }
    
    // A '1' in this array means the character is white space.  A '1' or
// '2' means the character ends a name or command.
static const char specialChars[256] = {
  1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0,   // 0x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 1x
  1, 0, 0, 0, 0, 2, 0, 0, 2, 2, 0, 0, 0, 0, 0, 2,   // 2x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0,   // 3x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 4x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0,   // 5x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 6x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0,   // 7x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 8x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 9x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // ax
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // bx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // cx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // dx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // ex
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0    // fx
};
    
      // in badly damaged PDF files, we can run off the end of the input
  // stream immediately after the 'stream' token
  if (!lexer->getStream()) {
    return NULL;
  }
  baseStr = lexer->getStream()->getBaseStream();
    
    class PopplerObjectCache
{
  public:
    PopplerObjectCache (int cacheSizeA, XRef *xrefA);
    ~PopplerObjectCache();
    }
    
    #include <config.h>
    
      //
  // Parse media clip data
  //
  if (obj->dictLookup('C', &tmp2)->isDict()) { // media clip
    hasClip = gTrue;
    if (tmp2.dictLookup('S', &tmp)->isName()) {
      if (!strcmp(tmp.getName(), 'MCD')) { // media clip data
        Object obj1, obj2;
	if (tmp2.dictLookup('D', &obj1)->isDict()) {
	  if (obj1.dictLookup('F', &obj2)->isString()) {
	    fileName = obj2.getString()->copy();
	  }
	  obj2.free();
	  if (obj1.dictLookup('EF', &obj2)->isDict()) {
	    Object embedded;
	    if (obj2.dictLookup('F', &embedded)->isStream()) {
	      isEmbedded = gTrue;
	      embeddedStream = embedded.getStream();
	      // 'copy' stream
	      embeddedStream->incRef();
	    }
	    embedded.free();
	  }
	  obj2.free();
    }
    }
    }
    }
    
    GBool StdinPDFDocBuilder::supports(const GooString &uri)
{
  if (uri.cmpN('fd://0', 6) == 0) {
    return gTrue;
  } else {
    return gFalse;
  }
}
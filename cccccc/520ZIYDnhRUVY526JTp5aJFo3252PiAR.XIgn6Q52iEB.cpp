
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/common_runtime/dma_helper.h'
#include 'tensorflow/core/common_runtime/sycl/sycl_device_context.h'
    
      ~SYCLDeviceContext() override {}
    
    
    {}  // namespace tesseract

    
     private:
  void SetBlame(IncorrectResultReason irr, const STRING &msg,
                const WERD_CHOICE *choice, bool debug) {
    incorrect_result_reason_ = irr;
    debug_ = IncorrectReason();
    debug_ += ' to blame: ';
    FillDebugString(msg, choice, &debug_);
    if (debug) tprintf('SetBlame(): %s', debug_.string());
  }
    
    // The number of points to consider at each end.
const int kNumEndPoints = 3;
// The minimum number of points at which to switch to number of points
// for badly fitted lines.
// To ensure a sensible error metric, kMinPointsForErrorCount should be at
// least kMaxRealDistance / (1 - %ile) where %ile is the fractile used in
// ComputeUpperQuartileError.
const int kMinPointsForErrorCount = 16;
// The maximum real distance to use before switching to number of
// mis-fitted points, which will get square-rooted for true distance.
const int kMaxRealDistance = 2.0;
    
    inline float operator *(                    //cross product
                        const FCOORD &op1,  //operands
                        const FCOORD &op2) {
  return op1.xcoord * op2.ycoord - op1.ycoord * op2.xcoord;
}
    
      // Return whether a given text line could be a first paragraph line according
  // to this paragraph model.
  bool ValidBodyLine(int lmargin, int lindent, int rindent, int rmargin) const;
    
    #ifndef STORAGE_LEVELDB_DB_SNAPSHOT_H_
#define STORAGE_LEVELDB_DB_SNAPSHOT_H_
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-NULL, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or NULL if no Table object underlies
  // the returned iterator.  The returned '*tableptr' object is owned by
  // the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options,
                        uint64_t file_number,
                        uint64_t file_size,
                        Table** tableptr = NULL);
    
    class VersionSet;
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
      // Random reads.
  ASSERT_OK(env_->NewRandomAccessFile('/dir/f', &rand_file));
  ASSERT_OK(rand_file->Read(6, 5, &result, scratch)); // Read 'world'.
  ASSERT_EQ(0, result.compare('world'));
  ASSERT_OK(rand_file->Read(0, 5, &result, scratch)); // Read 'hello'.
  ASSERT_EQ(0, result.compare('hello'));
  ASSERT_OK(rand_file->Read(10, 100, &result, scratch)); // Read 'd'.
  ASSERT_EQ(0, result.compare('d'));
    
    #include <algorithm>
#include <assert.h>
#include 'leveldb/comparator.h'
#include 'leveldb/table_builder.h'
#include 'util/coding.h'
    
      switch (data[n]) {
    case kNoCompression:
      if (data != buf) {
        // File implementation gave us pointer to some other data.
        // Use it directly under the assumption that it will be live
        // while the file is open.
        delete[] buf;
        result->data = Slice(data, n);
        result->heap_allocated = false;
        result->cachable = false;  // Do not double-cache
      } else {
        result->data = Slice(buf, n);
        result->heap_allocated = true;
        result->cachable = true;
      }
    }
    
    #include 'jsapi.h'
#include 'jsfriendapi.h'
    
    
    
    
    
    
    {		if (maxImpulse > 40.0f)
		{
			// Flag the body for breaking.
			m_break = true;
		}
	}
    
    	Cantilever()
	{
		b2Body* ground = NULL;
		{
			b2BodyDef bd;
			ground = m_world->CreateBody(&bd);
    }
    }
    
    inline flatbuffers::Offset<Enum> CreateEnum(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<EnumVal>>> values = 0,
    bool is_union = false,
    flatbuffers::Offset<Type> underlying_type = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<KeyValue>>> attributes = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> documentation = 0) {
  EnumBuilder builder_(_fbb);
  builder_.add_documentation(documentation);
  builder_.add_attributes(attributes);
  builder_.add_underlying_type(underlying_type);
  builder_.add_values(values);
  builder_.add_name(name);
  builder_.add_is_union(is_union);
  return builder_.Finish();
}
    
    #include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>
    
    class BaseGenerator {
 public:
  virtual bool generate() = 0;
    }
    
      typedef void (*WarnFn)(const FlatCompiler *flatc, const std::string &warn,
                         bool show_exe_name);
    
    // Get any vector element as a string, regardless of what type it is.
inline std::string GetAnyVectorElemS(const VectorOfAny *vec,
                                     reflection::BaseType elem_type, size_t i) {
  return GetAnyValueS(elem_type, vec->Data() + GetTypeSize(elem_type) * i,
                      nullptr, -1);
}
    
    #endif  // FLATBUFFERS_REGISTRY_H_

    
    using namespace MyGame::Sample;
    
        // Find the value associated with the key.  If it exists, write the
    // value into the stream, otherwise write the key itself into the stream.
    auto iter = value_map_.find(key);
    if (iter != value_map_.end()) {
      const std::string &value = iter->second;
      stream_ << value;
    } else {
      assert(false && 'could not find key');
      stream_ << key;
    }
    
    #include 'flatbuffers/flatbuffers.h'
#include 'grpc++/support/byte_buffer.h'
#include 'grpc/byte_buffer_reader.h'
    
    
    {    // Connect to echo server
    newConnection();
    return uv_run(loop, UV_RUN_DEFAULT);
}
    
    template <bool isServer>
void ExtensionsNegotiator<isServer>::readOffer(std::string offer) {
    if (isServer) {
        ExtensionsParser extensionsParser(offer.data(), offer.length());
        if ((options & PERMESSAGE_DEFLATE) && extensionsParser.perMessageDeflate) {
            if (extensionsParser.clientNoContextTakeover || (options & CLIENT_NO_CONTEXT_TAKEOVER)) {
                options |= CLIENT_NO_CONTEXT_TAKEOVER;
            }
    }
    }
    }
    
    template <const bool isServer>
struct WIN32_EXPORT WebSocket : uS::Socket, WebSocketState<isServer> {
protected:
    std::string fragmentBuffer;
    enum CompressionStatus : char {
        DISABLED,
        ENABLED,
        COMPRESSED_FRAME
    } compressionStatus;
    unsigned char controlTipLength = 0, hasOutstandingPong = false;
    }
    
                        // Warning: changes socket, needs to inform the stack of Poll address change!
                    WebSocket<isServer> *webSocket = new WebSocket<isServer>(false, httpSocket);
                    httpSocket->cancelTimeout();
                    webSocket->setUserData(httpSocket->httpUser);
                    webSocket->template setState<WebSocket<isServer>>();
                    webSocket->change(webSocket->nodeData->loop, webSocket, webSocket->setPoll(UV_READABLE));
                    Group<isServer>::from(webSocket)->addWebSocket(webSocket);
    
    template <bool isServer>
struct WIN32_EXPORT Group : protected uS::NodeData {
protected:
    friend struct Hub;
    friend struct WebSocket<isServer>;
    friend struct HttpSocket<false>;
    friend struct HttpSocket<true>;
    }
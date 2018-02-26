
    {  std::unique_ptr<PartialRunState> partial_run = MakeUnique<PartialRunState>();
  partial_run->cancellation_manager = MakeUnique<CancellationManager>();
  *cancellation_manager = partial_run->cancellation_manager.get();
  step_id_to_partial_run_[step_id] = std::move(partial_run);
  return true;
}
    
    #include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/grappler/costs/cost_estimator.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/core/threadpool.h'
#include 'tensorflow/core/platform/types.h'
    
      double SmoothnessConstant() const final { return gamma; }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Converts a parsed driver version to string form.
string DriverVersionToString(DriverVersion version);
    
    
    {
    {    for (const Edge* e : to_remove) {
      if (e->src_output() == id.second) {
        g->AddEdge(recv_node, 0, e->dst(), e->dst_input());
      } else {
        CHECK_EQ(Graph::kControlSlot, e->src_output());
        g->AddControlEdge(recv_node, e->dst());
      }
      g->RemoveEdge(e);
    }
    out_feed_types->push_back(BaseType(n->output_type(id.second)));
  }
  return Status::OK();
}
    
    namespace xla {
    }
    
      Status ReadLocked(string* key, string* value, bool* produced,
                    bool* at_end) override {
    *key = strings::StrCat(current_work(), ':', offset_);
    Status status = reader_->ReadRecord(&offset_, value);
    if (errors::IsOutOfRange(status)) {
      *at_end = true;
      return Status::OK();
    }
    if (!status.ok()) return status;
    *produced = true;
    return Status::OK();
  }
    
    Value Value::get(char const* key, char const* cend, Value const& defaultValue) const
{
  Value const* found = find(key, cend);
  return !found ? defaultValue : *found;
}
Value Value::get(char const* key, Value const& defaultValue) const
{
  return get(key, key + strlen(key), defaultValue);
}
Value Value::get(std::string const& key, Value const& defaultValue) const
{
  return get(key.data(), key.data() + key.length(), defaultValue);
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
#define GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_MESSAGE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_MESSAGE_FIELD_H__
    
    String TimeStamp::CurrentMicroTime() {
  struct timeval tp;
  gettimeofday(&tp, nullptr);
  char ret[100];
  snprintf(ret, 100, '%.8F %ld', (double)tp.tv_usec / 1000000, tp.tv_sec);
  return String(ret, CopyString);
}
    
    void HHVM_FUNCTION(xhprof_sample_enable) {
  if (RuntimeOption::EnableHotProfiler) {
    s_profiler_factory->start(ProfilerKind::Sample, 0);
  } else {
    raise_warning('The runtime option Stats.EnableHotProfiler must be on to '
                  'use xhprof.');
  }
}
    
    void Vunit::freeScratchBlock(Vlabel l) {
  // This will leak blocks if anything's been added since the corresponding
  // call to makeScratchBlock(), but it's harmless.
  if (l == blocks.size() - 1) blocks.pop_back();
}
    
    struct InvalidMethodException : ServerException {
  explicit InvalidMethodException(const char *msg)
    : ServerException('Invalid method: %s', msg) {
  }
};
    
    
    {}
    
    typedef GRPC_CUSTOM_STRING string;
    
    inline flatbuffers::Offset<KeyValue> CreateKeyValueDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *key = nullptr,
    const char *value = nullptr) {
  return reflection::CreateKeyValue(
      _fbb,
      key ? _fbb.CreateString(key) : 0,
      value ? _fbb.CreateString(value) : 0);
}
    
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* MonsterStorage::Stub::PrepareAsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< flatbuffers::grpc::Message<Stat>>::Create(channel_.get(), cq, rpcmethod_Store_, context, request, false);
}
    
      delete server_instance;
    
    #include <assert.h>
    
      // Clears the current 'written' code.
  void Clear() {
    stream_.str('');
    stream_.clear();
  }
    
      size_t Key(const char *str) { return Key(str, strlen(str)); }
  size_t Key(const std::string &str) { return Key(str.c_str(), str.size()); }
    
    // Set any vector element as a string, regardless of type what it is.
inline void SetAnyVectorElemS(VectorOfAny *vec, reflection::BaseType elem_type,
                              size_t i, const char *val) {
  SetAnyValueS(elem_type, vec->Data() + GetTypeSize(elem_type) * i, val);
}
    
    #include 'monster_generated.h'  // Already includes 'flatbuffers/flatbuffers.h'.
    
    // This is an example of parsing text straight into a buffer and then
// generating flatbuffer (JSON) text from the buffer.
int main(int /*argc*/, const char * /*argv*/ []) {
  // load FlatBuffer schema (.fbs) and JSON from disk
  std::string schemafile;
  std::string jsonfile;
  bool ok = flatbuffers::LoadFile('samples/monster.fbs', false, &schemafile) &&
            flatbuffers::LoadFile('samples/monsterdata.json', false, &jsonfile);
  if (!ok) {
    printf('couldn't load files!\n');
    return 1;
  }
    }
    
    int main(int argc, char *argv[])
{
    // Read arguments
    if (argc != 5) {
        cout << 'Usage: throughput numberOfConnections payloadByteSize(20 only) framesPerSend port' << endl;
        return -1;
    }
    }
    
    
    {
    {
    {
    {                    return webSocket;
                } else {
                    httpSocket->onEnd(httpSocket);
                }
                return httpSocket;
            }
        } else {
            if (!httpSocket->httpBuffer.length()) {
                if (length > MAX_HEADER_BUFFER_SIZE) {
                    httpSocket->onEnd(httpSocket);
                } else {
                    httpSocket->httpBuffer.append(lastCursor, end - lastCursor);
                }
            }
            return httpSocket;
        }
    } while(cursor != end);
    
    
    {    char closePayload[MAX_CLOSE_PAYLOAD + 2];
    int closePayloadLength = (int) WebSocketProtocol<isServer, WebSocket<isServer>>::formatClosePayload(closePayload, code, message, length);
    send(closePayload, closePayloadLength, OpCode::CLOSE, [](WebSocket<isServer> *p, void *data, bool cancelled, void *reserved) {
        if (!cancelled) {
            p->shutdown();
        }
    });
}
    
    
    {    void *getData() {
        return data;
    }
};
    
        for (int i = 0; i < numFdReady; i++) {
        Poll *poll = (Poll *) readyEvents[i].data.ptr;
        int status = -bool(readyEvents[i].events & EPOLLERR);
        callbacks[poll->state.cbIndex](poll, status, readyEvents[i].events);
    }
    
        void start(void (*cb)(Async *)) {
        this->cb = cb;
        Poll::setCb([](Poll *p, int, int) {
            uint64_t val;
            if (::read(((Async *) p)->state.fd, &val, 8) == 8) {
                ((Async *) p)->cb((Async *) p);
            }
        });
        Poll::start(loop, this, UV_READABLE);
    }
    
        Poll(Poll &&other) {
        uv_poll = other.uv_poll;
        cb = other.cb;
        other.uv_poll = nullptr;
    }
    
    template <bool isServer>
class ExtensionsNegotiator {
protected:
    int options;
public:
    ExtensionsNegotiator(int wantedOptions);
    std::string generateOffer();
    void readOffer(std::string offer);
    int getNegotiatedOptions();
};

        
        namespace tensorflow {
namespace grappler {
    }
    }
    
    #ifndef TENSORFLOW_KERNELS_SMOOTH_HINGE_LOSS_H_
#define TENSORFLOW_KERNELS_SMOOTH_HINGE_LOSS_H_
    
    // Rewrite graph by replacing the output tensors specified in
// 'fed_outputs' with special feed nodes for each specified output
// tensor, and removing any nodes that are now disconnected from the
// part of the graph that reaches the sink node.  The set of special
// feed nodes added to the graph are returned in '*feed_nodes'.
//
// Return true on success.  On error, return false and sets *error to
// an appropriate error message (and *g is left in an indeterminate
// state).
static Status FeedInputs(Graph* g, const DeviceAttributes& device_info,
                         const gtl::ArraySlice<string>& fed_outputs,
                         bool use_function_convention,
                         subgraph::NameIndex* name_index,
                         DataTypeVector* out_feed_types) {
  out_feed_types->clear();
  out_feed_types->reserve(fed_outputs.size());
  for (size_t i = 0; i < fed_outputs.size(); ++i) {
    const string& t = fed_outputs[i];
    TensorId id(ParseTensorName(t));
    }
    }
    
    TEST_F(SubgraphTest, FetchOutputs1) {
  ExpectOK(
      'node { name: 'W1' op: 'TestParams' }'
      'node { name: 'W2' op: 'TestParams' }'
      'node { name: 'input' op: 'TestInput' }'
      'node { name: 't1' op: 'TestMul' input: [ 'W1', 'input:1' ] }'
      'node { name: 't2' op: 'TestMul' input: [ 'W2', 't1' ] }'
      'node { name: 't3_a' op: 'TestRelu' input: 't2' }'
      'node { name: 't3_b' op: 'TestRelu' input: 't2' }');
  EXPECT_EQ('OK', Subgraph('', 'W2,input:1,t1,t2', 't2'));
  ExpectNodes(
      'W1,W2,input,t1,t2,_send_W2_0,_send_input_1,_send_t1_0,_send_t2_0');
}
    
    #include 'tensorflow/core/lib/io/record_writer.h'
    
    REGISTER_KERNEL_BUILDER(Name('TextLineReader').Device(DEVICE_CPU),
                        TextLineReaderOp);
REGISTER_KERNEL_BUILDER(Name('TextLineReaderV2').Device(DEVICE_CPU),
                        TextLineReaderOp);
    
      DebuggerClient(ASTContext &C) : Ctx(C) { }
  virtual ~DebuggerClient() = default;
  
  // DebuggerClient is consulted at the beginning of the parsing
  // of various DeclKinds to see whether the decl should be parsed
  // in the global context rather than the current context.
  // This question will only be asked if the decl's current context
  // is a function marked with the LLDBDebuggerFunction attribute.
  virtual bool shouldGlobalize(Identifier Name, DeclKind kind) = 0;
  
  virtual void didGlobalize (Decl *Decl) = 0;
    
      /// Allocate an Objective-C object.
  llvm::Value *emitObjCAllocObjectCall(IRGenFunction &IGF,
                                       llvm::Value *classPtr,
                                       SILType resultType);
    
    static inline void _swift_dispatch_source_set_registration_handler(
    dispatch_source_t source,
    __swift_shims_dispatch_block_t _Nullable block) {
  dispatch_source_set_registration_handler(source, block);
}
    
    // NOTE: this class is NOT meant to be used in threaded contexts.
@interface ObjectBehaviorVerifier : NSObject
@property (readonly) BOOL wasRetained;
@property (readonly) BOOL wasCopied;
@property (readonly) BOOL wasMutableCopied;
    
      Optional<const markup::LocalizationKeyField *>
  getLocalizationKeyField() const {
    return Parts.LocalizationKeyField;
  }
    
    class SoftBreak final : public InlineContent {
  SoftBreak() : InlineContent(ASTNodeKind::SoftBreak) {}
public:
  static SoftBreak *create(MarkupContext &MC);
    }
    
    SILFunction *SILDebugScope::getInlinedFunction() const {
  if (Parent.isNull())
    return nullptr;
    }
    
      /// Suppress all warnings
  bool SuppressWarnings = false;
    
     protected:
  // Helper functions that abstract away the column buffer and gemm arguments.
  // The last argument in forward_cpu_gemm is so that we can skip the im2col if
  // we just called weight_cpu_gemm with the same input.
  void forward_cpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_cpu_bias(Dtype* output, const Dtype* bias);
  void backward_cpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* output);
  void weight_cpu_gemm(const Dtype* input, const Dtype* output, Dtype*
      weights);
  void backward_cpu_bias(Dtype* bias, const Dtype* input);
    
    
    {}  // namespace caffe
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    ArrayTypeTable& globalArrayTypeTable() {
  assert(RuntimeOption::RepoAuthoritative);
  return s_instance;
}
    
    // Cause the proxy to debug the given thread. Other threads will stack
// up in blockUntilOwn() (depending on the thread mode).
bool DebuggerProxy::switchThread(DThreadInfoPtr thread) {
  TRACE(2, 'DebuggerProxy::switchThread\n');
  Lock lock(this);
  if (m_threads.find(thread->m_id) != m_threads.end()) {
    m_newThread = thread;
    return true;
  }
  return false;
}
    
    /*
 * Vasm constant.
 *
 * Either a 1, 4, or 8 byte unsigned value, 8 byte double, or the disp32 part
 * of a thread-local address of an immutable constant that varies by thread.
 * Constants may also represent an undefined value, indicated by the isUndef
 * member.
 *
 * Also contains convenience constructors for various pointer and enum types.
 */
struct Vconst {
  enum Kind { Quad, Long, Byte, Double };
    }
    
      if (offset < 0 || offset > mbfl_strlen(&mbs_haystack)) {
    raise_warning('Offset not contained in string.');
    return false;
  }
  if (mbs_needle.len == 0) {
    raise_warning('Empty delimiter.');
    return false;
  }
    
    void HttpServer::MarkShutdownStat(ShutdownEvent event) {
  if (!RuntimeOption::EvalLogServerRestartStats) return;
  std::lock_guard<folly::MicroSpinLock> lock(StatsLock);
  MemInfo mem;
  Process::GetMemoryInfo(mem);
  auto const rss = Process::GetProcessRSS();
  auto const requests = requestCount();
  if (event == ShutdownEvent::SHUTDOWN_PREPARE) {
    ShutdownStats.clear();
    ShutdownStats.reserve(ShutdownEvent::kNumEvents);
  }
#ifndef NDEBUG
  if (!ShutdownStats.empty()) {
    assert(ShutdownStats.back().event <= event);
  }
#endif
  ShutdownStats.push_back({event, time(nullptr), mem, rss, requests});
}
    
      static bool do_perform(reactor_op* base)
  {
    descriptor_read_op_base* o(static_cast<descriptor_read_op_base*>(base));
    }
    
    #include <boost/asio/detail/config.hpp>
    
      if (shutdown_)
  {
    io_service_.post_immediate_completion(op, false);
    return;
  }
    
    FT_END_HEADER
    
    # if defined(OC_COLLECT_METRICS)
struct oc_mode_metrics{
  double fragw;
  double satd;
  double rate;
  double rmse;
  double satd2;
  double satdrate;
  double rate2;
  double satdrmse;
  double rmse2;
};
    
    # undef l2n
# define l2n(l,c)        (*((c)++)=(unsigned char)(((l)>>24L)&0xff), \
                         *((c)++)=(unsigned char)(((l)>>16L)&0xff), \
                         *((c)++)=(unsigned char)(((l)>> 8L)&0xff), \
                         *((c)++)=(unsigned char)(((l)     )&0xff))
    
    #if defined(__WATCOMC__)
void GetTSC(unsigned long&);
#pragma aux GetTSC = 0x0f 0x31 'mov [edi], eax' parm [edi] modify [edx eax];
#elif defined(__GNUC__)
inline
void GetTSC(unsigned long& tsc)
{
  asm volatile('.byte 15, 49\n\t'
	       : '=eax' (tsc)
	       :
	       : '%edx', '%eax');
}
#elif defined(_MSC_VER)
inline
void GetTSC(unsigned long& tsc)
{
  unsigned long a;
  __asm _emit 0fh
  __asm _emit 31h
  __asm mov a, eax;
  tsc=a;
}
#endif      
    
    #if defined(__WATCOMC__)
void GetTSC(unsigned long&);
#pragma aux GetTSC = 0x0f 0x31 'mov [edi], eax' parm [edi] modify [edx eax];
#elif defined(__GNUC__)
inline
void GetTSC(unsigned long& tsc)
{
  asm volatile('.byte 15, 49\n\t'
	       : '=eax' (tsc)
	       :
	       : '%edx', '%eax');
}
#elif defined(_MSC_VER)
inline
void GetTSC(unsigned long& tsc)
{
  unsigned long a;
  __asm _emit 0fh
  __asm _emit 31h
  __asm mov a, eax;
  tsc=a;
}
#endif      
    
    TEST(MetaInfo, GetSet) {
  xgboost::MetaInfo info;
    }
    
      dmlc::DataIter<xgboost::RowBatch> * row_iter = dmat->RowIterator();
  // Loop over the batches and count the records
  long row_count = 0;
  row_iter->BeforeFirst();
  while (row_iter->Next()) row_count += row_iter->Value().size;
  EXPECT_EQ(row_count, dmat->info().num_row);
  // Test the data read into the first row
  row_iter->BeforeFirst();
  row_iter->Next();
  xgboost::SparseBatch::Inst first_row = row_iter->Value()[0];
  ASSERT_EQ(first_row.length, 3);
  EXPECT_EQ(first_row[2].index, 2);
  EXPECT_EQ(first_row[2].fvalue, 20);
  row_iter = nullptr;
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '(3L,2L,1L)';
  ss >> vals_in;
  EXPECT_EQ(vals_in, vals);
    
    bool SimpleDMatrix::ColBatchIter::Next() {
  if (data_ptr_ >= cpages_.size()) return false;
  data_ptr_ += 1;
  SparsePage* pcol = cpages_[data_ptr_ - 1].get();
  batch_.size = col_index_.size();
  col_data_.resize(col_index_.size(), SparseBatch::Inst(NULL, 0));
  for (size_t i = 0; i < col_data_.size(); ++i) {
    const bst_uint ridx = col_index_[i];
    col_data_[i] = SparseBatch::Inst
        (dmlc::BeginPtr(pcol->data) + pcol->offset[ridx],
         static_cast<bst_uint>(pcol->offset[ridx + 1] - pcol->offset[ridx]));
  }
  batch_.col_index = dmlc::BeginPtr(col_index_);
  batch_.col_data = dmlc::BeginPtr(col_data_);
  return true;
}
    
      std::atomic<Node*> p_ = {new Node()};
    
      /**
   * Create an AsyncIO context capable of holding at most 'capacity' pending
   * requests at the same time.  As requests complete, others can be scheduled,
   * as long as this limit is not exceeded.
   *
   * Note: the maximum number of allowed concurrent requests is controlled
   * by the fs.aio-max-nr sysctl, the default value is usually 64K.
   *
   * If pollMode is POLLABLE, pollFd() will return a file descriptor that
   * can be passed to poll / epoll / select and will become readable when
   * any IOs on this AsyncIO have completed.  If you do this, you must use
   * pollCompleted() instead of wait() -- do not read from the pollFd()
   * file descriptor directly.
   *
   * You may use the same AsyncIO object from multiple threads, as long as
   * there is only one concurrent caller of wait() / pollCompleted() / cancel()
   * (perhaps by always calling it from the same thread, or by providing
   * appropriate mutual exclusion).  In this case, pending() returns a snapshot
   * of the current number of pending requests.
   */
  explicit AsyncIO(size_t capacity, PollMode pollMode = NOT_POLLABLE);
  ~AsyncIO();
    
      int fd = ::open(tempFile.path().c_str(), O_DIRECT | O_RDONLY);
  PCHECK(fd != -1);
  SCOPE_EXIT {
    ::close(fd);
  };
  for (size_t i = 0; i < specs.size(); i++) {
    bufs.push_back(allocateAligned(specs[i].size));
    ops[i].pread(fd, bufs[i].get(), specs[i].size, specs[i].start);
    aioQueue.submit(&ops[i]);
  }
  std::vector<bool> pending(specs.size(), true);
    
    /**
 * FileHandlerFactory is a LogHandlerFactory that constructs log handlers
 * that write to a file.
 *
 * Note that FileHandlerFactory allows opening and appending to arbitrary files
 * based on the handler options.  This may make it unsafe to use
 * FileHandlerFactory in some contexts: for instance, a setuid binary should
 * generally avoid registering the FileHandlerFactory if they allow log
 * handlers to be configured via command line parameters, since otherwise this
 * may allow non-root users to append to files that they otherwise would not
 * have write permissions for.
 */
class FileHandlerFactory : public LogHandlerFactory {
 public:
  StringPiece getType() const override {
    return 'file';
  }
    }
    
      // Then apply the configuration string
  if (!configString.empty()) {
    auto inputConfig = parseLogConfig(configString);
    config.update(inputConfig);
  }
    
      /* Internal methods for use by other parts of the logging library code */
    
    // Return the source of the generated service file.
grpc::string GenerateServiceSource(grpc_generator::File *file,
                                   const grpc_generator::Service *service,
                                   grpc_go_generator::Parameters *parameters);
    
    inline flatbuffers::Offset<Schema> CreateSchemaDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<Object>> *objects = nullptr,
    const std::vector<flatbuffers::Offset<Enum>> *enums = nullptr,
    const char *file_ident = nullptr,
    const char *file_ext = nullptr,
    flatbuffers::Offset<Object> root_table = 0) {
  return reflection::CreateSchema(
      _fbb,
      objects ? _fbb.CreateVector<flatbuffers::Offset<Object>>(*objects) : 0,
      enums ? _fbb.CreateVector<flatbuffers::Offset<Enum>>(*enums) : 0,
      file_ident ? _fbb.CreateString(file_ident) : 0,
      file_ext ? _fbb.CreateString(file_ext) : 0,
      root_table);
}
    
    inline flatbuffers::Offset<Monster> CreateMonsterDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Vec3 *pos = 0,
    int16_t mana = 150,
    int16_t hp = 100,
    const char *name = nullptr,
    const std::vector<uint8_t> *inventory = nullptr,
    Color color = Color_Blue,
    const std::vector<flatbuffers::Offset<Weapon>> *weapons = nullptr,
    Equipment equipped_type = Equipment_NONE,
    flatbuffers::Offset<void> equipped = 0) {
  return MyGame::Sample::CreateMonster(
      _fbb,
      pos,
      mana,
      hp,
      name ? _fbb.CreateString(name) : 0,
      inventory ? _fbb.CreateVector<uint8_t>(*inventory) : 0,
      color,
      weapons ? _fbb.CreateVector<flatbuffers::Offset<Weapon>>(*weapons) : 0,
      equipped_type,
      equipped);
}
    
    
    {    flatbuffers::grpc::Message<Monster> response;
    auto stream = stub->Retrieve(&context, request);
    while (stream->Read(&response)) {
      auto resp = response.GetRoot()->name();
      std::cout << 'RPC Streaming response: ' << resp->str() << std::endl;
    }
  }
    
    // Computes how many bytes you'd have to pad to be able to write an
// 'scalar_size' scalar if the buffer had grown to 'buf_size' (downwards in
// memory).
inline size_t PaddingBytes(size_t buf_size, size_t scalar_size) {
  return ((~buf_size) + 1) & (scalar_size - 1);
}
    
      template<typename F> size_t Map(F f) {
    auto start = StartMap();
    f();
    return EndMap(start);
  }
  template<typename F, typename T> size_t Map(F f, T &state) {
    auto start = StartMap();
    f(state);
    return EndMap(start);
  }
  template<typename F> size_t Map(const char *key, F f) {
    auto start = StartMap(key);
    f();
    return EndMap(start);
  }
  template<typename F, typename T> size_t Map(const char *key, F f, T &state) {
    auto start = StartMap(key);
    f(state);
    return EndMap(start);
  }
  template<typename T> void Map(const std::map<std::string, T> &map) {
    auto start = StartMap();
    for (auto it = map.begin(); it != map.end(); ++it)
      Add(it->first.c_str(), it->second);
    EndMap(start);
  }
    
    inline size_t InlineSize(ElementaryType type, const TypeTable *type_table) {
  switch (type) {
    case ET_UTYPE:
    case ET_BOOL:
    case ET_CHAR:
    case ET_UCHAR: return 1;
    case ET_SHORT:
    case ET_USHORT: return 2;
    case ET_INT:
    case ET_UINT:
    case ET_FLOAT:
    case ET_STRING: return 4;
    case ET_LONG:
    case ET_ULONG:
    case ET_DOUBLE: return 8;
    case ET_SEQUENCE:
      switch (type_table->st) {
        case ST_TABLE:
        case ST_UNION: return 4;
        case ST_STRUCT: return type_table->values[type_table->num_elems];
        default: assert(false); return 1;
      }
    default: assert(false); return 1;
  }
}
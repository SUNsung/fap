Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // A pass which performs constant folding in order to avoid unnecessary
// computation on constants.
class HloConstantFolding : public HloPassInterface {
 public:
  tensorflow::StringPiece name() const override { return 'constant_folding'; }
    }
    
    class Diagnostician {
 public:
  // Logs diagnostic information when CUDA appears to be misconfigured (e.g. is
  // not initializing).
  //
  // Note: if we're running on a machine that has no GPUs, we don't want to
  // produce very much log spew beyond saying, 'looks like there's no CUDA
  // kernel
  // module running'.
  //
  // Note: we use non-Google-File:: API here because we may be called before
  // InitGoogle has completed.
  static void LogDiagnosticInformation();
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        if (!use_function_convention) {
      TF_RETURN_IF_ERROR(
          NodeBuilder(strings::StrCat('_recv_', id.first, '_', id.second),
                      '_Recv')
              .Attr('tensor_type', BaseType(n->output_type(id.second)))
              .Attr('tensor_name', t)
              .Attr('send_device', device_info.name())
              .Attr('recv_device', device_info.name())
              .Attr('send_device_incarnation',
                    static_cast<int64>(device_info.incarnation()))
              .Attr('client_terminated', true)
              .Finalize(g, &recv_node));
    } else {
      // NOTE(mrry): We must include the index as part of the node
      // name, because _Arg is a 'stateful' kernel and therefore
      // its name must uniquely identify a kernel instance across all
      // graphs in the same session.
      TF_RETURN_IF_ERROR(NodeBuilder(strings::StrCat('_arg_', id.first, '_',
                                                     id.second, '_', i),
                                     '_Arg')
                             .Attr('T', BaseType(n->output_type(id.second)))
                             .Attr('index', static_cast<int32>(i))
                             .Finalize(g, &recv_node));
    }
    recv_node->set_assigned_device_name(device_info.name());
    
    // Prefetching support
//
// Defined behavior on some of the uarchs:
// PREFETCH_HINT_T0:
//   prefetch to all levels of the hierarchy (except on p4: prefetch to L2)
// PREFETCH_HINT_NTA:
//   p4: fetch to L2, but limit to 1 way (out of the 8 ways)
//   core: skip L2, go directly to L1
//   k8 rev E and later: skip L2, can go to either of the 2-ways in L1
enum PrefetchHint {
  PREFETCH_HINT_T0 = 3,  // More temporal locality
  PREFETCH_HINT_T1 = 2,
  PREFETCH_HINT_T2 = 1,  // Less temporal locality
  PREFETCH_HINT_NTA = 0  // No temporal locality
};
template <PrefetchHint hint>
void prefetch(const void* x);
    
    void SYCLDeviceContext::CopyDeviceTensorToCPU(const Tensor *device_tensor,
                                              StringPiece edge_name,
                                              Device *device,
                                              Tensor *cpu_tensor,
                                              StatusCallback done) {
  const int64 total_bytes = device_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(device_tensor);
    void *dst_ptr = DMAHelper::base(cpu_tensor);
    switch (device_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    #include 'tensorflow/core/lib/strings/strcat.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace tensorflow {
    }
    
    using namespace swift;
using namespace swift::syntax;
    
        GraphemeClusterBreakProperty GCBForC1 =
        getGraphemeClusterBreakProperty(C[1]);
    if (isExtendedGraphemeClusterBoundary(GCBForC0, GCBForC1) &&
        !graphemeBreakOverride(C[0], C[1]))
      return S.slice(0, C1Offset);
    
    /// Attempt to get a doc comment from the declaration, or other inherited
/// sources, like from base classes or protocols.
Optional<DocComment *> getCascadingDocComment(swift::markup::MarkupContext &MC,
                                             const Decl *D);
    
    SILFunction *SILDebugScope::getParentFunction() const {
  if (InlinedCallSite)
    return InlinedCallSite->getParentFunction();
  if (auto *ParentScope = Parent.dyn_cast<const SILDebugScope *>())
    return ParentScope->getParentFunction();
  return Parent.get<SILFunction *>();
}

    
    using clang::index::SymbolKind;
using clang::index::SymbolLanguage;
using clang::index::SymbolSubKind;
using clang::index::SymbolProperty;
using clang::index::SymbolPropertySet;
using clang::index::SymbolRole;
using clang::index::SymbolRoleSet;
using clang::index::SymbolRelation;
using clang::index::SymbolInfo;
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
      v8::Local<v8::Array> args = v8::Array::New(isolate);
  v8::Handle<v8::Value> element = v8::Null(isolate);
  blink::LocalFrame* core_frame = blink::toWebLocalFrameImpl(frame)->frame();
  if (core_frame->deprecatedLocalOwner()) {
    element = blink::toV8((blink::HTMLElement*)core_frame->deprecatedLocalOwner(),
                            frame->mainWorldScriptContext()->Global(),
                            frame->mainWorldScriptContext()->GetIsolate());
  }
  args->Set(0, element);
  v8::Handle<v8::Value> argv[] = {val, v8_str(ev), args };
    
    
    
    
    {    ui::Clipboard* clipboard_;
    std::string error_;
  };
    
    void leveldb_options_set_create_if_missing(
    leveldb_options_t* opt, unsigned char v) {
  opt->rep.create_if_missing = v;
}
    
      // Return a key suitable for lookup in a MemTable.
  Slice memtable_key() const { return Slice(start_, end_ - start_); }
    
    std::string TempFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'dbtmp');
}
    
    // If filename is a leveldb file, store the type of the file in *type.
// The number encoded in the filename is stored in *number.  If the
// filename was successfully parsed, returns true.  Else return false.
extern bool ParseFileName(const std::string& filename,
                          uint64_t* number,
                          FileType* type);
    
      fname = LogFileName('foo', 192);
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(192, number);
  ASSERT_EQ(kLogFile, type);
    
      for (DeletedFileSet::const_iterator iter = deleted_files_.begin();
       iter != deleted_files_.end();
       ++iter) {
    PutVarint32(dst, kDeletedFile);
    PutVarint32(dst, iter->first);   // level
    PutVarint64(dst, iter->second);  // file number
  }
    
    int main(int argc, char** argv) {
  std::string default_db_path;
  for (int i = 1; i < argc; i++) {
    double d;
    int n;
    char junk;
    if (leveldb::Slice(argv[i]).starts_with('--benchmarks=')) {
      FLAGS_benchmarks = argv[i] + strlen('--benchmarks=');
    } else if (sscanf(argv[i], '--compression_ratio=%lf%c', &d, &junk) == 1) {
      FLAGS_compression_ratio = d;
    } else if (sscanf(argv[i], '--histogram=%d%c', &n, &junk) == 1 &&
               (n == 0 || n == 1)) {
      FLAGS_histogram = n;
    } else if (sscanf(argv[i], '--num=%d%c', &n, &junk) == 1) {
      FLAGS_num = n;
    } else if (sscanf(argv[i], '--reads=%d%c', &n, &junk) == 1) {
      FLAGS_reads = n;
    } else if (sscanf(argv[i], '--value_size=%d%c', &n, &junk) == 1) {
      FLAGS_value_size = n;
    } else if (sscanf(argv[i], '--cache_size=%d%c', &n, &junk) == 1) {
      FLAGS_cache_size = n;
    } else if (sscanf(argv[i], '--page_size=%d%c', &n, &junk) == 1) {
      FLAGS_page_size = n;
    } else if (sscanf(argv[i], '--compression=%d%c', &n, &junk) == 1 &&
               (n == 0 || n == 1)) {
      FLAGS_compression = (n == 1) ? true : false;
    } else if (strncmp(argv[i], '--db=', 5) == 0) {
      FLAGS_db = argv[i] + 5;
    } else {
      fprintf(stderr, 'Invalid flag '%s'\n', argv[i]);
      exit(1);
    }
  }
    }
    
    
    {}  // namespace leveldb
    
      // If *start < limit, changes *start to a short string in [start,limit).
  // Simple comparator implementations may return with *start unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const = 0;
    
    #endif  // STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_

    
      // keys[0,n-1] contains a list of keys (potentially with duplicates)
  // that are ordered according to the user supplied comparator.
  // Append a filter that summarizes keys[0,n-1] to *dst.
  //
  // Warning: do not change the initial contents of *dst.  Instead,
  // append the newly constructed filter to *dst.
  virtual void CreateFilter(const Slice* keys, int n, std::string* dst)
      const = 0;
    
      // Return true iff the length of the referenced data is zero
  bool empty() const { return size_ == 0; }
    
      Status Echo(ServerContext* context, const EchoRequest* request,
              EchoResponse* response) override {
    {
      std::unique_lock<std::mutex> lock(mu_);
      ++request_count_;
    }
    return TestServiceImpl::Echo(context, request, response);
  }
    
    DEFINE_string(rpc_reporter_server_address, '',
              'Server address for rpc reporter to send results to');
    
    #include <stddef.h>
    
    TEST(InlinedVectorTest, PushBackWithMove) {
  InlinedVector<UniquePtr<int>, 1> v;
  UniquePtr<int> i = MakeUnique<int>(3);
  v.push_back(std::move(i));
  EXPECT_EQ(nullptr, i.get());
  EXPECT_EQ(1UL, v.size());
  EXPECT_EQ(3, *v[0]);
}
    
    /* decompress 'input' to 'output' using 'algorithm'.
   On success, appends slices to output and returns 1.
   On failure, output is unchanged, and returns 0. */
int grpc_msg_decompress(grpc_message_compression_algorithm algorithm,
                        grpc_slice_buffer* input, grpc_slice_buffer* output);
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    class GreeterClient {
 public:
  GreeterClient(std::shared_ptr<Channel> channel)
      : stub_(Greeter::NewStub(channel)) {}
    }
    
    using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using helloworld::HelloRequest;
using helloworld::HelloReply;
using helloworld::Greeter;
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list);
    
      bool Generate(const grpc::protobuf::FileDescriptor* file,
                const grpc::string& parameter,
                grpc::protobuf::compiler::GeneratorContext* context,
                grpc::string* error) const;
    
    typedef GRPC_CUSTOM_STRING string;
    
    
    {    // Return an OK status.
    return grpc::Status::OK;
  }
    
    struct TypeBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_base_type(BaseType base_type) {
    fbb_.AddElement<int8_t>(Type::VT_BASE_TYPE, static_cast<int8_t>(base_type), 0);
  }
  void add_element(BaseType element) {
    fbb_.AddElement<int8_t>(Type::VT_ELEMENT, static_cast<int8_t>(element), 0);
  }
  void add_index(int32_t index) {
    fbb_.AddElement<int32_t>(Type::VT_INDEX, index, -1);
  }
  TypeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TypeBuilder &operator=(const TypeBuilder &);
  flatbuffers::Offset<Type> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Type>(end);
    return o;
  }
};
    
      // Ensure that a type is prefixed with its namespace whenever it is used
  // outside of its namespace.
  std::string WrapInNameSpace(const Namespace *ns,
                              const std::string &name) const;
    
    class Map : public Vector {
 public:
  Map(const uint8_t *data, uint8_t byte_width) : Vector(data, byte_width) {}
    }
    
    inline void IterateObject(const uint8_t *obj, const TypeTable *type_table,
                          IterationVisitor *visitor) {
  visitor->StartSequence();
  const uint8_t *prev_val = nullptr;
  size_t set_idx = 0;
  for (size_t i = 0; i < type_table->num_elems; i++) {
    auto type_code = type_table->type_codes[i];
    auto type = static_cast<ElementaryType>(type_code.base_type);
    auto is_vector = type_code.is_vector != 0;
    auto ref_idx = type_code.sequence_ref;
    const TypeTable *ref = nullptr;
    if (ref_idx >= 0) { ref = type_table->type_refs[ref_idx](); }
    auto name = type_table->names ? type_table->names[i] : nullptr;
    const uint8_t *val = nullptr;
    if (type_table->st == ST_TABLE) {
      val = reinterpret_cast<const Table *>(obj)->GetAddressOf(
          FieldIndexToOffset(static_cast<voffset_t>(i)));
    } else {
      val = obj + type_table->values[i];
    }
    visitor->Field(i, set_idx, type, is_vector, ref, name, val);
    if (val) {
      set_idx++;
      if (is_vector) {
        val += ReadScalar<uoffset_t>(val);
        auto vec = reinterpret_cast<const Vector<uint8_t> *>(val);
        visitor->StartVector();
        auto elem_ptr = vec->Data();
        for (size_t j = 0; j < vec->size(); j++) {
          visitor->Element(j, type, ref, elem_ptr);
          IterateValue(type, elem_ptr, ref, prev_val, static_cast<soffset_t>(j),
                       visitor);
          elem_ptr += InlineSize(type, ref);
        }
        visitor->EndVector();
      } else {
        IterateValue(type, val, ref, prev_val, -1, visitor);
      }
    }
    prev_val = val;
  }
  visitor->EndSequence();
}
    
      // parse schema first, so we can use it to parse the data after
  flatbuffers::Parser parser;
  const char *include_directories[] = { 'samples', nullptr };
  ok = parser.Parse(schemafile.c_str(), include_directories) &&
       parser.Parse(jsonfile.c_str(), include_directories);
  assert(ok);
    
      flatbuffers::FlatCompiler::InitParams params;
  params.generators = generators;
  params.num_generators = sizeof(generators) / sizeof(generators[0]);
  params.warn_fn = Warn;
  params.error_fn = Error;

        
        namespace tensorflow {
    }
    
      void Compute(OpKernelContext* context) override LOCKS_EXCLUDED(mu_) {
    mutex_lock l(mu_);
    if (resource_ == nullptr) {
      ResourceMgr* mgr = context->resource_manager();
      OP_REQUIRES_OK(context, cinfo_.Init(mgr, def()));
    }
    }
    
    #ifndef TENSORFLOW_GRAPPLER_COSTS_MEASURING_COST_ESTIMATOR_H_
#define TENSORFLOW_GRAPPLER_COSTS_MEASURING_COST_ESTIMATOR_H_
    
    #endif  // TENSORFLOW_GRAPPLER_OPTIMIZERS_MODEL_PRUNER_H_

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
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
    
    #include 'tensorflow/core/common_runtime/dma_helper.h'
#include 'tensorflow/core/common_runtime/sycl/sycl_device_context.h'
    
    namespace xla {
    }
    
        const Tensor& contents = context->input(0);
    const Tensor& file_format_tensor = context->input(1);
    const Tensor& samples_per_second_tensor = context->input(2);
    const Tensor& bits_per_second_tensor = context->input(3);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    TEST(GrpcChannelTest, SparseHostPorts) {
  GrpcChannelSpec spec;
  TF_EXPECT_OK(
      spec.AddHostPortsJob('mnist', {{0, 'a:1'}, {3, 'd:4'}, {4, 'e:5'}}));
  ChannelCreationFunction channel_func =
      ConvertToChannelCreationFunction(NewHostPortGrpcChannel);
  std::unique_ptr<GrpcChannelCache> cc(NewGrpcChannelCache(spec, channel_func));
    }
    
    TEST(InlinedVectorTest, ConstIndexOperator) {
  const int kNumElements = 10;
  InlinedVector<int, 5> v;
  EXPECT_EQ(0UL, v.size());
  for (int i = 0; i < kNumElements; ++i) {
    v.push_back(i);
    EXPECT_EQ(i + 1UL, v.size());
  }
  auto const_func = [kNumElements](const InlinedVector<int, 5>& v) {
    for (int i = 0; i < kNumElements; ++i) {
      EXPECT_EQ(i, v[i]);
    }
  };
  const_func(v);
}
    
    #include <set>
    
      bool Match(const std::string& prefix) {
    bool eq = db_.substr(current_, prefix.size()) == prefix;
    current_ += prefix.size();
    return eq;
  }
    
    namespace routeguide {
class Feature;
    }
    
    inline grpc::string GetJSServiceFilename(const grpc::string& filename) {
  return grpc_generator::StripProto(filename) + '_grpc_pb.js';
}
    
    std::vector<grpc::string_ref> SecureAuthContext::GetPeerIdentity() const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter = grpc_auth_context_peer_identity(ctx_);
  std::vector<grpc::string_ref> identity;
  const grpc_auth_property* property = nullptr;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    identity.push_back(
        grpc::string_ref(property->value, property->value_length));
  }
  return identity;
}
    
    class CodegenTestMinimal : public ::testing::Test {};
    
    static void sigint_handler(int x) {
  gpr_atm_no_barrier_store(&grpc::testing::interop::g_got_sigint, true);
}
    
      struct Result {
    double wall;
    double user;
    double system;
    unsigned long long total_cpu_time;
    unsigned long long idle_cpu_time;
  };
    
    struct gpr_subprocess;
    
      void AddSecureType(
      const grpc::string& type,
      std::unique_ptr<CredentialTypeProvider> type_provider) override {
    // This clobbers any existing entry for type, except the defaults, which
    // can't be clobbered.
    std::unique_lock<std::mutex> lock(mu_);
    auto it = std::find(added_secure_type_names_.begin(),
                        added_secure_type_names_.end(), type);
    if (it == added_secure_type_names_.end()) {
      added_secure_type_names_.push_back(type);
      added_secure_type_providers_.push_back(std::move(type_provider));
    } else {
      added_secure_type_providers_[it - added_secure_type_names_.begin()] =
          std::move(type_provider);
    }
  }
    
    #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
    void FilterBlockBuilder::StartBlock(uint64_t block_offset) {
  uint64_t filter_index = (block_offset / kFilterBase);
  assert(filter_index >= filter_offsets_.size());
  while (filter_index > filter_offsets_.size()) {
    GenerateFilter();
  }
}
    
    
    {  // Open test file some number above the sum of the two limits to force
  // open-on-read behavior of POSIX Env leveldb::RandomAccessFile.
  const int kNumFiles = kReadOnlyFileLimit + kMMapLimit + 5;
  leveldb::RandomAccessFile* files[kNumFiles] = {0};
  for (int i = 0; i < kNumFiles; i++) {
    ASSERT_OK(env_->NewRandomAccessFile(test_file, &files[i]));
  }
  char scratch;
  Slice read_result;
  for (int i = 0; i < kNumFiles; i++) {
    ASSERT_OK(files[i]->Read(i, 1, &read_result, &scratch));
    ASSERT_EQ(kFileData[i], read_result[0]);
  }
  for (int i = 0; i < kNumFiles; i++) {
    delete files[i];
  }
  ASSERT_OK(env_->DeleteFile(test_file));
}
    
    namespace leveldb {
    }
    
      virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const {
    for (int i = 0; i < n; i++) {
      uint32_t h = Hash(keys[i].data(), keys[i].size(), 1);
      PutFixed32(dst, h);
    }
  }
    
    class DBConstructor: public Constructor {
 public:
  explicit DBConstructor(const Comparator* cmp)
      : Constructor(cmp),
        comparator_(cmp) {
    db_ = NULL;
    NewDB();
  }
  ~DBConstructor() {
    delete db_;
  }
  virtual Status FinishImpl(const Options& options, const KVMap& data) {
    delete db_;
    db_ = NULL;
    NewDB();
    for (KVMap::const_iterator it = data.begin();
         it != data.end();
         ++it) {
      WriteBatch batch;
      batch.Put(it->first, it->second);
      ASSERT_TRUE(db_->Write(WriteOptions(), &batch).ok());
    }
    return Status::OK();
  }
  virtual Iterator* NewIterator() const {
    return db_->NewIterator(ReadOptions());
  }
    }
    
      // ...Code to store on disk or send over a network goes here...
    
    void FlatCompiler::ParseFile(
    flatbuffers::Parser &parser, const std::string &filename,
    const std::string &contents,
    std::vector<const char *> &include_directories) const {
  auto local_include_directory = flatbuffers::StripFileName(filename);
  include_directories.push_back(local_include_directory.c_str());
  include_directories.push_back(nullptr);
  if (!parser.Parse(contents.c_str(), &include_directories[0],
                    filename.c_str()))
    Error(parser.error_, false, false);
  include_directories.pop_back();
  include_directories.pop_back();
}
    
    // Generate text for a struct or table, values separated by commas, indented,
// and bracketed by '{}'
static bool GenStruct(const StructDef &struct_def, const Table *table,
                      int indent, const IDLOptions &opts, std::string *_text) {
  std::string &text = *_text;
  text += '{';
  int fieldout = 0;
  Type *union_type = nullptr;
  for (auto it = struct_def.fields.vec.begin();
       it != struct_def.fields.vec.end(); ++it) {
    FieldDef &fd = **it;
    auto is_present = struct_def.fixed || table->CheckField(fd.value.offset);
    auto output_anyway = opts.output_default_scalars_in_json &&
                         IsScalar(fd.value.type.base_type) && !fd.deprecated;
    if (is_present || output_anyway) {
      if (fieldout++) {
        if (!opts.protobuf_ascii_alike) text += ',';
      }
      text += NewLine(opts);
      text.append(indent + Indent(opts), ' ');
      OutputIdentifier(fd.name, opts, _text);
      if (!opts.protobuf_ascii_alike ||
          (fd.value.type.base_type != BASE_TYPE_STRUCT &&
           fd.value.type.base_type != BASE_TYPE_VECTOR))
        text += ':';
      text += ' ';
      switch (fd.value.type.base_type) {
          // clang-format off
          #define FLATBUFFERS_TD(ENUM, IDLTYPE, \
            CTYPE, JTYPE, GTYPE, NTYPE, PTYPE) \
            case BASE_TYPE_ ## ENUM: \
              if (!GenField<CTYPE>(fd, table, struct_def.fixed, \
                                   opts, indent + Indent(opts), _text)) { \
                return false; \
              } \
              break;
          FLATBUFFERS_GEN_TYPES_SCALAR(FLATBUFFERS_TD)
        #undef FLATBUFFERS_TD
        // Generate drop-thru case statements for all pointer types:
        #define FLATBUFFERS_TD(ENUM, IDLTYPE, \
          CTYPE, JTYPE, GTYPE, NTYPE, PTYPE) \
          case BASE_TYPE_ ## ENUM:
          FLATBUFFERS_GEN_TYPES_POINTER(FLATBUFFERS_TD)
        #undef FLATBUFFERS_TD
            if (!GenFieldOffset(fd, table, struct_def.fixed, indent + Indent(opts),
                                union_type, opts, _text)) {
              return false;
            }
            break;
          // clang-format on
      }
      if (fd.value.type.base_type == BASE_TYPE_UTYPE) {
        auto enum_val = fd.value.type.enum_def->ReverseLookup(
            table->GetField<uint8_t>(fd.value.offset, 0));
        union_type = enum_val ? &enum_val->union_type : nullptr;
      }
    }
  }
  text += NewLine(opts);
  text.append(indent, ' ');
  text += '}';
  return true;
}
    
    const char *const kTypeNames[] = {
// clang-format off
  #define FLATBUFFERS_TD(ENUM, IDLTYPE, \
    CTYPE, JTYPE, GTYPE, NTYPE, PTYPE) \
    IDLTYPE,
    FLATBUFFERS_GEN_TYPES(FLATBUFFERS_TD)
  #undef FLATBUFFERS_TD
  // clang-format on
  nullptr
};
    
    
    {
    {
    {
    {
    {      code += '\n  public static ' + struct_def.name + lang_.optional_suffix;
      code += ' __lookup_by_key(';
      if (lang_.language == IDLOptions::kJava)
        code +=  struct_def.name + ' obj, ';
      code += 'int vectorLocation, ';
      code += GenTypeNameDest(key_field->value.type);
      code += ' key, ByteBuffer bb) {\n';
      if (key_field->value.type.base_type == BASE_TYPE_STRING) {
        code += '    byte[] byteKey = ';
        if (lang_.language == IDLOptions::kJava)
          code += 'key.getBytes(Table.UTF8_CHARSET.get());\n';
        else
          code += 'System.Text.Encoding.UTF8.GetBytes(key);\n';
      }
      code += '    int span = ';
      code += 'bb.' + FunctionStart('G') + 'etInt(vectorLocation - 4);\n';
      code += '    int start = 0;\n';
      code += '    while (span != 0) {\n';
      code += '      int middle = span / 2;\n';
      code += GenLookupKeyGetter(key_field);
      code += '      if (comp > 0) {\n';
      code += '        span = middle;\n';
      code += '      } else if (comp < 0) {\n';
      code += '        middle++;\n';
      code += '        start += middle;\n';
      code += '        span -= middle;\n';
      code += '      } else {\n';
      code += '        return ';
      if (lang_.language == IDLOptions::kJava)
        code += '(obj == null ? new ' + struct_def.name + '() : obj)';
      else
        code += 'new ' + struct_def.name + '()';
      code += '.__assign(tableOffset, bb);\n';
      code += '      }\n    }\n';
      code += '    return null;\n';
      code += '  }\n';
    }
    code += '}';
    // Java does not need the closing semi-colon on class definitions.
    code += (lang_.language != IDLOptions::kJava) ? ';' : '';
    code += '\n\n';
  }
  const LanguageParameters &lang_;
  // This tracks the current namespace used to determine if a type need to be
  // prefixed by its namespace
  const Namespace *cur_name_space_;
};
}  // namespace general
    
    #include <iostream>
#include <memory>
#include <string>
    
    struct KeyValueBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_key(flatbuffers::Offset<flatbuffers::String> key) {
    fbb_.AddOffset(KeyValue::VT_KEY, key);
  }
  void add_value(flatbuffers::Offset<flatbuffers::String> value) {
    fbb_.AddOffset(KeyValue::VT_VALUE, value);
  }
  KeyValueBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  KeyValueBuilder &operator=(const KeyValueBuilder &);
  flatbuffers::Offset<KeyValue> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<KeyValue>(end);
    fbb_.Required(o, KeyValue::VT_KEY);
    return o;
  }
};
    
    #endif  // GRPC_INTERNAL_COMPILER_SCHEMA_INTERFACE_H

    
      // Clears the current 'written' code.
  void Clear() {
    stream_.str('');
    stream_.clear();
  }
    
    
    {    GenerateFn generate;
    const char *generator_opt_short;
    const char *generator_opt_long;
    const char *lang_name;
    bool schema_only;
    GenerateFn generateGRPC;
    flatbuffers::IDLOptions::Language lang;
    const char *generator_help;
    MakeRuleFn make_rule;
  };
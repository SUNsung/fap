
        
        
    {  return cli->Run(5, argv) == 0;
}
    
    #if LANG_CXX11
#include <type_traits>
#endif
    
    #include <sstream>
    
      // For extensions to chain together, the Root gets created even if there
  // are no extensions.
  printer->Print(
      '#pragma mark - $root_class_name$\n'
      '\n'
      '/**\n'
      ' * Exposes the extension registry for this file.\n'
      ' *\n'
      ' * The base class provides:\n'
      ' * @code\n'
      ' *   + (GPBExtensionRegistry *)extensionRegistry;\n'
      ' * @endcode\n'
      ' * which is a @c GPBExtensionRegistry that includes all the extensions defined by\n'
      ' * this file and all files that it depends on.\n'
      ' **/\n'
      '@interface $root_class_name$ : GPBRootObject\n'
      '@end\n'
      '\n',
      'root_class_name', root_class_name_);
    
    OneofGenerator::OneofGenerator(const OneofDescriptor* descriptor)
    : descriptor_(descriptor) {
  variables_['enum_name'] = OneofEnumName(descriptor_);
  variables_['name'] = OneofName(descriptor_);
  variables_['capitalized_name'] = OneofNameCapitalized(descriptor_);
  variables_['raw_index'] = SimpleItoa(descriptor_->index());
  const Descriptor* msg_descriptor = descriptor_->containing_type();
  variables_['owning_message_class'] = ClassName(msg_descriptor);
    }
    
      string error_msg;
  CodeGeneratorResponse response;
    
      // write central directory
  io::CodedOutputStream output(raw_output_);
  for (int i = 0; i < num_entries; ++i) {
    const string &filename = files_[i].name;
    uint16 filename_size = filename.size();
    uint32 crc32 = files_[i].crc32;
    uint32 size = files_[i].size;
    uint32 offset = files_[i].offset;
    }
    
      } else if (started_with_zero && LookingAt<Digit>()) {
    // An octal number (had a leading zero).
    ConsumeZeroOrMore<OctalDigit>();
    if (LookingAt<Digit>()) {
      AddError('Numbers starting with leading zero must be in octal.');
      ConsumeZeroOrMore<Digit>();
    }
    
    
    
        void convert(const Size2D &_size,
                 const u8 * srcBase, ptrdiff_t srcStride,
                 f32 * dstBase, ptrdiff_t dstStride);
    
    void add(const Size2D &size,
         const s32 * src0Base, ptrdiff_t src0Stride,
         const s32 * src1Base, ptrdiff_t src1Stride,
         s32 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
        if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<s32, s64>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<s32, s64>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
    
    {} // namespace CAROTENE_NS

    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0, const typename internal::VecTraits<T>::vec64 & v_src1,
              typename internal::VecTraits<T>::unsign::vec64 & v_dst) const
    {
        v_dst = internal::vcge(v_src0, v_src1);
    }
    
    void rshift(const Size2D &size,
            const s16 * srcBase, ptrdiff_t srcStride,
            u8 * dstBase, ptrdiff_t dstStride,
            u32 shift, CONVERT_POLICY cpolicy)
{
    internal::assertSupportedConfiguration();
    }
    
                    v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t0_16s), kernelBase[2]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t1_16s), kernelBase[1]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t2_16s), kernelBase[0]);
    
    f64 dotProduct(const Size2D &_size,
               const f32 * src0Base, ptrdiff_t src0Stride,
               const f32 * src1Base, ptrdiff_t src1Stride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (src0Stride == src1Stride &&
        src0Stride == (ptrdiff_t)(size.width * sizeof(f32)))
    {
        size.width *= size.height;
        size.height = 1;
    }
    }
    
    template <typename T>
void flip3(const Size2D & size,
           const void * srcBase, ptrdiff_t srcStride,
           void * dstBase, ptrdiff_t dstStride,
           FLIP_MODE flipMode)
{
    using namespace internal;
    }
    
    namespace {
    }
    
      oprot->writeMessageBegin('ping', ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();
    
      _ExtensionManager_getQueryColumns_result__isset __isset;
    
    inline void meta_tables(int nArg, char** azArg) {
  auto tables = osquery::RegistryFactory::get().names('table');
  std::sort(tables.begin(), tables.end());
  for (const auto& table_name : tables) {
    if (nArg == 1 || table_name.find(azArg[1]) == 0) {
      printf('  => %s\n', table_name.c_str());
    }
  }
}
    
          resp = smartctl.getDevInfo(devname, full_type);
      if (resp.err != NOERR) {
        LOG(WARNING) << 'There was an error retrieving drive information with '
                        'hardware driver: '
                     << libsmartctl::errStr(resp.err);
        return;
      }
      // Only consider found if no error was returned.
      found = true;
    
    
    {
    {} // namespace perf_event_open
} // namespace osquery

    
    public:
    int capacity;
    std::list<std::pair<std::string, jobject>> cacheList;
    std::unordered_map<std::string, std::list<std::pair<std::string, jobject>>::iterator> posMap;
    jstring GetString(JNIEnv *env, std::string key);
    void clearRefCache(JNIEnv *env);
    
    
    {    RenderObject *Wson2RenderObject(const char *data, const std::string &pageId);
    std::vector<std::pair<std::string, std::string>> *Wson2Pairs(const char *data);
}
    
      static Garbo garbo;
    
    
    {  return chars;
}
    
      Node* EmitFastNewStrictArguments(Node* context, Node* function);
  Node* EmitFastNewSloppyArguments(Node* context, Node* function);
  Node* EmitFastNewRestParameter(Node* context, Node* function);
    
    
    {  Node* EmitFastNewObject(Node* context, Node* target, Node* new_target,
                          Label* call_runtime);
};
    
    void Builtins::Generate_InterpreterPushArgsThenConstructWithFinalSpread(
    MacroAssembler* masm) {
  return Generate_InterpreterPushArgsThenConstructImpl(
      masm, InterpreterPushArgsMode::kWithFinalSpread);
}
    
    class TestBuiltinsAssembler : public BaseBuiltinsFromDSLAssembler {
 public:
  explicit TestBuiltinsAssembler(compiler::CodeAssemblerState* state)
      : BaseBuiltinsFromDSLAssembler(state) {}
};
    
      grpc::ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  std::cerr << 'Server listening on ' << server_address << std::endl;
    
      // to ensure it is correct, we now generate text back from the binary,
  // and compare the two:
  std::string jsongen;
  if (!GenerateText(parser, parser.builder_.GetBufferPointer(), &jsongen)) {
    printf('Couldn't serialize parsed data to JSON!\n');
    return 1;
  }
    
      grpc::string GetLeadingComments(const grpc::string) const { return ''; }
    
      for (size_t size = struct_def.sortbysize ? sizeof(largest_scalar_t) : 1; size;
       size /= 2) {
    // Go through elements in reverse, since we're building the data backwards.
    for (auto it = field_stack_.rbegin();
         it != field_stack_.rbegin() + fieldn_outer; ++it) {
      auto &field_value = it->first;
      auto field = it->second;
      if (!struct_def.sortbysize ||
          size == SizeOf(field_value.type.base_type)) {
        switch (field_value.type.base_type) {
          // clang-format off
          #define FLATBUFFERS_TD(ENUM, IDLTYPE, \
            CTYPE, JTYPE, GTYPE, NTYPE, PTYPE, RTYPE) \
            case BASE_TYPE_ ## ENUM: \
              builder_.Pad(field->padding); \
              if (struct_def.fixed) { \
                CTYPE val; \
                ECHECK(atot(field_value.constant.c_str(), *this, &val)); \
                builder_.PushElement(val); \
              } else { \
                CTYPE val, valdef; \
                ECHECK(atot(field_value.constant.c_str(), *this, &val)); \
                ECHECK(atot(field->value.constant.c_str(), *this, &valdef)); \
                builder_.AddElement(field_value.offset, val, valdef); \
              } \
              break;
            FLATBUFFERS_GEN_TYPES_SCALAR(FLATBUFFERS_TD);
          #undef FLATBUFFERS_TD
          #define FLATBUFFERS_TD(ENUM, IDLTYPE, \
            CTYPE, JTYPE, GTYPE, NTYPE, PTYPE, RTYPE) \
            case BASE_TYPE_ ## ENUM: \
              builder_.Pad(field->padding); \
              if (IsStruct(field->value.type)) { \
                SerializeStruct(*field->value.type.struct_def, field_value); \
              } else { \
                CTYPE val; \
                ECHECK(atot(field_value.constant.c_str(), *this, &val)); \
                builder_.AddOffset(field_value.offset, val); \
              } \
              break;
            FLATBUFFERS_GEN_TYPES_POINTER(FLATBUFFERS_TD);
          #undef FLATBUFFERS_TD
          // clang-format on
        }
      }
    }
  }
  for (size_t i = 0; i < fieldn_outer; i++) field_stack_.pop_back();
    
    // Get a field's default, if you know it's an integer, and its exact type.
template<typename T> T GetFieldDefaultI(const reflection::Field &field) {
  FLATBUFFERS_ASSERT(sizeof(T) == GetTypeSize(field.type()->base_type()));
  return static_cast<T>(field.default_integer());
}
    
    inline const char *EnumNameEnumInNestedNS(EnumInNestedNS e) {
  if (e < EnumInNestedNS_A || e > EnumInNestedNS_C) return '';
  const size_t index = static_cast<int>(e);
  return EnumNamesEnumInNestedNS()[index];
}
    
    
void printMatrix(vector<vector<int> > &matrix)
{
    for(int i=0; i<matrix.size(); i++){
        printf('{');
        for(int j=0; j< matrix[i].size(); j++) {
            printf('%3d ', matrix[i][j]) ;
        }
        printf('}\n');
    }
    cout << endl;
}
    
    #include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
    
    vector<vector<int> > fourSum(vector<int> &num, int target) {
    vector< vector<int> > result;
    if (num.size()<4) return result;
    sort( num.begin(), num.end() );
    
    for(int i=0; i<num.size()-3; i++) {
        //skip the duplication
        if (i>0 && num[i-1]==num[i]) continue;
        vector<int> n(num.begin()+i+1, num.end());
        vector<vector<int> > ret = threeSum(n, target-num[i]);
        for(int j=0; j<ret.size(); j++){
            ret[j].insert(ret[j].begin(), num[i]);
            result.push_back(ret[j]);
        }
    }
    }
    
        // Adds a word into the data structure.
    void addWord(string word) {
        tree.put(word);
    }
    
    /********************************************************************************** 
 * 
 * Given two strings s and t, write a function to determine if t is an anagram of s. 
 * 
 * For example,
 * s = 'anagram', t = 'nagaram', return true.
 * s = 'rat', t = 'car', return false.
 * 
 * Note:
 * You may assume the string contains only lowercase alphabets.
 *               
 **********************************************************************************/
    
        cout << '\'' << exp << '\' = ' << calculate(exp) << endl;
    
    
    {    int d[] = {1,2,3,4,0,0,5};
    p = createTree(d, sizeof(d)/sizeof(int));
    printTree_level_order(p);
    vv = levelOrder(p);
    printMatrix(vv);
    cout << endl;
    return 0;
}

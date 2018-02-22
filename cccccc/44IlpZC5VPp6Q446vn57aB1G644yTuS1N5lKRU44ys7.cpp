
        
          void SayManyHellos(const std::string &name, int num_greetings,
                     std::function<void(const std::string &)> callback) {
    flatbuffers::grpc::MessageBuilder mb;
    auto name_offset = mb.CreateString(name);
    auto request_offset =
        CreateManyHellosRequest(mb, name_offset, num_greetings);
    mb.Finish(request_offset);
    auto request_msg = mb.ReleaseMessage<ManyHellosRequest>();
    }
    
    class GreeterServiceImpl final : public Greeter::Service {
  virtual grpc::Status SayHello(
      grpc::ServerContext *context,
      const flatbuffers::grpc::Message<HelloRequest> *request_msg,
      flatbuffers::grpc::Message<HelloReply> *response_msg) override {
    // flatbuffers::grpc::MessageBuilder mb_;
    // We call GetRoot to 'parse' the message. Verification is already
    // performed by default. See the notes below for more details.
    const HelloRequest *request = request_msg->GetRoot();
    }
    }
    
    ::grpc::ClientReader< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) {
  return ::grpc::internal::ClientReaderFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), rpcmethod_Retrieve_, context, request);
}
    
    template<typename T> T EndianSwap(T t) {
  #if defined(_MSC_VER)
    #define FLATBUFFERS_BYTESWAP16 _byteswap_ushort
    #define FLATBUFFERS_BYTESWAP32 _byteswap_ulong
    #define FLATBUFFERS_BYTESWAP64 _byteswap_uint64
  #else
    #if defined(__GNUC__) && __GNUC__ * 100 + __GNUC_MINOR__ < 408 && !defined(__clang__)
      // __builtin_bswap16 was missing prior to GCC 4.8.
      #define FLATBUFFERS_BYTESWAP16(x) \
        static_cast<uint16_t>(__builtin_bswap32(static_cast<uint32_t>(x) << 16))
    #else
      #define FLATBUFFERS_BYTESWAP16 __builtin_bswap16
    #endif
    #define FLATBUFFERS_BYTESWAP32 __builtin_bswap32
    #define FLATBUFFERS_BYTESWAP64 __builtin_bswap64
  #endif
  if (sizeof(T) == 1) {   // Compile-time if-then's.
    return t;
  } else if (sizeof(T) == 2) {
    union { T t; uint16_t i; } u;
    u.t = t;
    u.i = FLATBUFFERS_BYTESWAP16(u.i);
    return u.t;
  } else if (sizeof(T) == 4) {
    union { T t; uint32_t i; } u;
    u.t = t;
    u.i = FLATBUFFERS_BYTESWAP32(u.i);
    return u.t;
  } else if (sizeof(T) == 8) {
    union { T t; uint64_t i; } u;
    u.t = t;
    u.i = FLATBUFFERS_BYTESWAP64(u.i);
    return u.t;
  } else {
    assert(0);
  }
}
    
    // For any of the functions below that take `const TypeTable *`, you pass
// `FooTypeTable()` if the type of the root is `Foo`.
    
    // Adds any new data (in the form of a new FlatBuffer) to an existing
// FlatBuffer. This can be used when any of the above methods are not
// sufficient, in particular for adding new tables and new fields.
// This is potentially slightly less efficient than a FlatBuffer constructed
// in one piece, since the new FlatBuffer doesn't share any vtables with the
// existing one.
// The return value can now be set using Vector::MutateOffset or SetFieldT
// below.
const uint8_t *AddFlatBuffer(std::vector<uint8_t> &flatbuf,
                             const uint8_t *newbuf, size_t newlen);
    
      // Returns a human readable error if any of the above functions fail.
  const std::string &GetLastError() { return lasterror_; }
    
    #if defined(_MSC_VER)
#  pragma warning(push)
#  pragma warning(disable : 4127)  // C4127: conditional expression is constant
#endif
    
    
    {
    {    ss << '  ' << full_name.str() << ' ' << name << '    ' << help << '.\n';
  }
  // clang-format off
  ss <<
    '  -o PATH            Prefix PATH to all generated files.\n'
    '  -I PATH            Search for includes in the specified path.\n'
    '  -M                 Print make rules for generated files.\n'
    '  --version          Print the version number of flatc and exit.\n'
    '  --strict-json      Strict JSON: field names must be / will be quoted,\n'
    '                     no trailing commas in tables/vectors.\n'
    '  --allow-non-utf8   Pass non-UTF-8 input through parser and emit nonstandard\n'
    '                     \\x escapes in JSON. (Default is to raise parse error on\n'
    '                     non-UTF-8 input.)\n'
    '  --defaults-json    Output fields whose value is the default when\n'
    '                     writing JSON\n'
    '  --unknown-json     Allow fields in JSON that are not defined in the\n'
    '                     schema. These fields will be discared when generating\n'
    '                     binaries.\n'
    '  --no-prefix        Don\'t prefix enum values with the enum type in C++.\n'
    '  --scoped-enums     Use C++11 style scoped and strongly typed enums.\n'
    '                     also implies --no-prefix.\n'
    '  --gen-includes     (deprecated), this is the default behavior.\n'
    '                     If the original behavior is required (no include\n'
    '                     statements) use --no-includes.\n'
    '  --no-includes      Don\'t generate include statements for included\n'
    '                     schemas the generated file depends on (C++).\n'
    '  --gen-mutable      Generate accessors that can mutate buffers in-place.\n'
    '  --gen-onefile      Generate single output file for C# and Go.\n'
    '  --gen-name-strings Generate type name functions for C++.\n'
    '  --gen-object-api   Generate an additional object-based API.\n'
    '  --cpp-ptr-type T   Set object API pointer type (default std::unique_ptr)\n'
    '  --cpp-str-type T   Set object API string type (default std::string)\n'
    '                     T::c_str() and T::length() must be supported\n'
    '  --gen-nullable     Add Clang _Nullable for C++ pointer. or @Nullable for Java\n'
    '  --object-prefix    Customise class prefix for C++ object-based API.\n'
    '  --object-suffix    Customise class suffix for C++ object-based API.\n'
    '                     Default value is \'T\'\n'
    '  --no-js-exports    Removes Node.js style export lines in JS.\n'
    '  --goog-js-export   Uses goog.exports* for closure compiler exporting in JS.\n'
    '  --go-namespace     Generate the overrided namespace in Golang.\n'
    '  --go-import        Generate the overrided import for flatbuffers in Golang.\n'
    '                     (default is \'github.com/google/flatbuffers/go\')\n'
    '  --raw-binary       Allow binaries without file_indentifier to be read.\n'
    '                     This may crash flatc given a mismatched schema.\n'
    '  --proto            Input is a .proto, translate to .fbs.\n'
    '  --grpc             Generate GRPC interfaces for the specified languages\n'
    '  --schema           Serialize schemas instead of JSON (use with -b)\n'
    '  --bfbs-comments    Add doc comments to the binary schema files.\n'
    '  --conform FILE     Specify a schema the following schemas should be\n'
    '                     an evolution of. Gives errors if not.\n'
    '  --conform-includes Include path for the schema given with --conform\n'
    '    PATH             \n'
    '  --include-prefix   Prefix this path to any generated include statements.\n'
    '    PATH\n'
    '  --keep-prefix      Keep original prefix of schema include statement.\n'
    '  --no-fb-import     Don't include flatbuffers import statement for TypeScript.\n'
    '  --no-ts-reexport   Don't re-export imported dependencies for TypeScript.\n'
    '  --reflect-types    Add minimal type reflection to code generation.\n'
    '  --reflect-names    Add minimal type/name reflection.\n'
    'FILEs may be schemas (must end in .fbs), or JSON files (conforming to preceding\n'
    'schema). FILEs after the -- must be binary flatbuffer format files.\n'
    'Output files are named using the base file name of the input,\n'
    'and written to the current directory or the path given by -o.\n'
    'example: ' << program_name << ' -c -b schema1.fbs schema2.fbs data.json\n';
  // clang-format on
  return ss.str();
}
    
    int main(int argc, const char *argv[]) {
  g_program_name = argv[0];
    }
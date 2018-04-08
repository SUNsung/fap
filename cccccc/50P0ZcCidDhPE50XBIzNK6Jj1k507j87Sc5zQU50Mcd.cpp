
        
        
    {
    {
    {      // Implicitly imported sub-modules get the same depth as their parent.
      if (const clang::Module *CMI = import.second->findUnderlyingClangModule())
        if (CM && CMI->isSubModuleOf(CM))
          next = depth;
      worklist.emplace_back(import.second, next);
    }
  }
}
    
    #include 'llvm/ADT/SetVector.h'
    
    // NOTE: this class is NOT meant to be used in threaded contexts.
@interface ObjectBehaviorVerifier : NSObject
@property (readonly) BOOL wasRetained;
@property (readonly) BOOL wasCopied;
@property (readonly) BOOL wasMutableCopied;
    
    //===----------------------------------------------------------------------===//
// Index data collection and record writing
//===----------------------------------------------------------------------===//
    
    class Text final : public InlineContent {
  StringRef LiteralContent;
  Text(StringRef LiteralContent)
    : InlineContent(ASTNodeKind::Text),
      LiteralContent(LiteralContent) {}
public:
  static Text *create(MarkupContext &MC, StringRef LiteralContent);
  StringRef getLiteralContent() const { return LiteralContent; };
  void setLiteralContent(StringRef LC) {
    LiteralContent = LC;
  }
    }
    
    #endif

    
    public:
  /// The replacement type.
  Type getReplacement() const { return Replacement; }
  
  /// The protocol conformances for the replacement. These appear in the same
  /// order as Archetype->getConformsTo() for the substituted archetype.
  const ArrayRef<ProtocolConformanceRef> getConformances() const {
    return Conformance;
  }
  
  Substitution() {}
  
  Substitution(Type Replacement, ArrayRef<ProtocolConformanceRef> Conformance);
    
    // On Cygwin, std::once_flag can not be used because it is larger than the
// platform word.
typedef uintptr_t swift_once_t;
#else
    
    /// Runs the given function with the given context argument exactly once.
/// The predicate argument must point to a global or static variable of static
/// extent of type swift_once_t.
void swift::swift_once(swift_once_t *predicate, void (*fn)(void *),
                       void *context) {
#if defined(__APPLE__)
  dispatch_once_f(predicate, context, fn);
#elif defined(__CYGWIN__)
  _swift_once_f(predicate, context, fn);
#else
  std::call_once(*predicate, [fn, context]() { fn(context); });
#endif
}

    
    #if defined(OS_WIN)
#include 'base/strings/utf_string_conversions.h'
#include 'base/files/file_path.h'
#include 'base/files/file_util.h'
#include 'base/win/shortcut.h'
#include 'base/path_service.h'
#include 'content/nw/src/common/shell_switches.h'
#endif
    
      base::RunLoop* run_loop_;
    
    
    {} // namespace nwapi

    
    void Menu::Insert(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.insert(begin+pos,menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_insert(GTK_MENU_SHELL(menu_), menu_item->menu_item_, pos);
}
    
        // Finish and check for builder errors
    if (s.ok()) {
      s = builder->Finish();
      if (s.ok()) {
        meta->file_size = builder->FileSize();
        assert(meta->file_size > 0);
      }
    } else {
      builder->Abandon();
    }
    delete builder;
    
    void DBIter::SeekToFirst() {
  direction_ = kForward;
  ClearSavedValue();
  iter_->SeekToFirst();
  if (iter_->Valid()) {
    FindNextUserEntry(false, &saved_key_ /* temporary storage */);
  } else {
    valid_ = false;
  }
}
    
    
// Called on every log record (each one of which is a WriteBatch)
// found in a kLogFile.
static void WriteBatchPrinter(uint64_t pos, Slice record, WritableFile* dst) {
  std::string r = '--- offset ';
  AppendNumberTo(&r, pos);
  r += '; ';
  if (record.size() < 12) {
    r += 'log record length ';
    AppendNumberTo(&r, record.size());
    r += ' is too small\n';
    dst->Append(r);
    return;
  }
  WriteBatch batch;
  WriteBatchInternal::SetContents(&batch, record);
  r += 'sequence ';
  AppendNumberTo(&r, WriteBatchInternal::Sequence(&batch));
  r.push_back('\n');
  dst->Append(r);
  WriteBatchItemPrinter batch_item_printer;
  batch_item_printer.dst_ = dst;
  Status s = batch.Iterate(&batch_item_printer);
  if (!s.ok()) {
    dst->Append('  error: ' + s.ToString() + '\n');
  }
}
    
    std::string DescriptorFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  char buf[100];
  snprintf(buf, sizeof(buf), '/MANIFEST-%06llu',
           static_cast<unsigned long long>(number));
  return dbname + buf;
}
    
    
    {  Table* table = reinterpret_cast<TableAndFile*>(cache_->Value(handle))->table;
  Iterator* result = table->NewIterator(options);
  result->RegisterCleanup(&UnrefEntry, cache_, handle);
  if (tableptr != NULL) {
    *tableptr = table;
  }
  return result;
}
    
    TEST(WriteBatchTest, Append) {
  WriteBatch b1, b2;
  WriteBatchInternal::SetSequence(&b1, 200);
  WriteBatchInternal::SetSequence(&b2, 300);
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('',
            PrintContents(&b1));
  b2.Put('a', 'va');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200',
            PrintContents(&b1));
  b2.Clear();
  b2.Put('b', 'vb');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200'
            'Put(b, vb)@201',
            PrintContents(&b1));
  b2.Delete('foo');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200'
            'Put(b, vb)@202'
            'Put(b, vb)@201'
            'Delete(foo)@203',
            PrintContents(&b1));
}
    
    namespace leveldb {
    }
    
    class Slice {
 public:
  // Create an empty slice.
  Slice() : data_(''), size_(0) { }
    }
    
    template <$for j, [[typename Generator$j]]>
internal::CartesianProductHolder$i<$for j, [[Generator$j]]> Combine(
    $for j, [[const Generator$j& g$j]]) {
  return internal::CartesianProductHolder$i<$for j, [[Generator$j]]>(
      $for j, [[g$j]]);
}
    
      // Returns true iff the given string ends with the given suffix, ignoring
  // case. Any string is considered to end with an empty suffix.
  static bool EndsWithCaseInsensitive(
      const std::string& str, const std::string& suffix);
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
    // A simple parser for the json db file. It requires the db file to have the
// exact form of [{'location': { 'latitude': 123, 'longitude': 456}, 'name':
// 'the name can be empty' }, { ... } ... The spaces will be stripped.
class Parser {
 public:
  explicit Parser(const std::string& db) : db_(db) {
    // Remove all spaces.
    db_.erase(
        std::remove_if(db_.begin(), db_.end(), isspace),
        db_.end());
    if (!Match('[')) {
      SetFailedAndReturnFalse();
    }
  }
    }
    
     private:
  bool PrintPreamble(grpc_generator::Printer* out);
  bool PrintBetaPreamble(grpc_generator::Printer* out);
  bool PrintGAServices(grpc_generator::Printer* out);
  bool PrintBetaServices(grpc_generator::Printer* out);
    
    std::vector<grpc::string_ref> SecureAuthContext::FindPropertyValues(
    const grpc::string& name) const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter =
      grpc_auth_context_find_properties_by_name(ctx_, name.c_str());
  const grpc_auth_property* property = nullptr;
  std::vector<grpc::string_ref> values;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    values.push_back(grpc::string_ref(property->value, property->value_length));
  }
  return values;
}
    
    namespace grpc {
namespace {
    }
    }
    
    #include 'test/cpp/qps/histogram.h'
    
    class QpsGauge {
 public:
  QpsGauge();
    }
    
    grpc::string DescribeServiceList(std::vector<grpc::string> service_list,
                                 grpc::protobuf::DescriptorPool& desc_pool) {
  std::stringstream result;
  for (auto it = service_list.begin(); it != service_list.end(); it++) {
    auto const& service = *it;
    const grpc::protobuf::ServiceDescriptor* service_desc =
        desc_pool.FindServiceByName(service);
    if (service_desc != nullptr) {
      result << DescribeService(service_desc);
    }
  }
  return result.str();
}
    
    ${Storage}::${Storage}(Context* context, std::size_t storage_size)
  : storage(${THStorage}_newWithSize(${state,} storage_size)), context(context) {}
    
    
    {  return scope.Close(Boolean::New(true));
}
    
      // Generate a list of random keys and values
  const int kWordCount = 15;
  std::string words[] = {'sdasd', 'triejf', 'fnjsdfn', 'dfjisdfsf', '342839',
                         'dsuha', 'mabuais', 'sadajsid', 'jf9834hf', '2d9j89',
                         'dj9823jd', 'a', 'dk02ed2dh', '$(jd4h984$(*', 'mabz'};
  const int kKeyCount = 6;
  std::string keys[] = {'dhaiusdhu', 'denidw', 'daisda', 'keykey', 'muki',
                        'shzassdianmd'};
    
    
    {    return cache_->Lookup(key, stats);
  }
    
    extern Slice GetLengthPrefixedSlice(const char* data);
    
        Config const & operator=(Config const &) = delete;
    
    struct Layout
{
    double left;
    double right;
    }
    
        Node(Config * config);
    
        Size(double width, double height)
    : width(width)
    , height(height)
    {
    }
    
    template<typename... ARGS>
inline void log(int level, const char* tag, const char* msg, ARGS... args) noexcept {
  __android_log_print(level, tag, msg, args...);
}
    
    
    {}

    
    DEFINE_BOXED_PRIMITIVE(boolean, Boolean)
DEFINE_BOXED_PRIMITIVE(byte, Byte)
DEFINE_BOXED_PRIMITIVE(char, Character)
DEFINE_BOXED_PRIMITIVE(short, Short)
DEFINE_BOXED_PRIMITIVE(int, Integer)
DEFINE_BOXED_PRIMITIVE(long, Long)
DEFINE_BOXED_PRIMITIVE(float, Float)
DEFINE_BOXED_PRIMITIVE(double, Double)
    
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
    
    void GenerateServerMethod(const grpc_generator::Method *method, grpc_generator::Printer *printer,
                          std::map<grpc::string, grpc::string> vars) {
	vars['Method'] = exportName(method->name());
	vars['Request'] = method->get_input_type_name();
	vars['Response'] = (vars['CustomMethodIO'] == '') ? method->get_output_type_name() : vars['CustomMethodIO'];
	vars['FullMethodName'] = '/' + vars['Package'] + '.' + vars['Service'] + '/' + vars['Method'];
	vars['Handler'] = '_' + vars['Service'] + '_' + vars['Method'] + '_Handler';
	if (method->NoStreaming()) {
		printer->Print(vars, 'func $Handler$(srv interface{}, ctx $context$.Context,\n\tdec func(interface{}) error, interceptor $grpc$.UnaryServerInterceptor) (interface{}, error) {\n');
		printer->Indent();
		printer->Print(vars, 'in := new($Request$)\n');
		printer->Print('if err := dec(in); err != nil { return nil, err }\n');
		printer->Print(vars, 'if interceptor == nil { return srv.($Service$Server).$Method$(ctx, in) }\n');
		printer->Print(vars, 'info := &$grpc$.UnaryServerInfo{\n');
		printer->Indent();
		printer->Print('Server: srv,\n');
		printer->Print(vars, 'FullMethod: \'$FullMethodName$\',\n');
		printer->Outdent();
		printer->Print('}\n\n');
		printer->Print(vars, 'handler := func(ctx $context$.Context, req interface{}) (interface{}, error) {\n');
		printer->Indent();
		printer->Print(vars, 'return srv.($Service$Server).$Method$(ctx, req.(* $Request$))\n');
		printer->Outdent();
		printer->Print('}\n');
		printer->Print('return interceptor(ctx, in, info, handler)\n');
		printer->Outdent();
		printer->Print('}\n\n');
		return;
	}
	vars['StreamType'] = vars['ServiceUnexported'] + vars['Method'] + 'Server';
	printer->Print(vars, 'func $Handler$(srv interface{}, stream $grpc$.ServerStream) error {\n');
	printer->Indent();
	if (ServerOnlyStreaming(method)) {
		printer->Print(vars, 'm := new($Request$)\n');
		printer->Print(vars, 'if err := stream.RecvMsg(m); err != nil { return err }\n');
		printer->Print(vars, 'return srv.($Service$Server).$Method$(m, &$StreamType${stream})\n');
	} else {
		printer->Print(vars, 'return srv.($Service$Server).$Method$(&$StreamType${stream})\n');
	}
	printer->Outdent();
	printer->Print('}\n\n');
    }
    
    namespace flatbuffers {
    }
    
      // Use the `CreateWeapon` shortcut to create Weapons with all fields set.
  auto sword = CreateWeapon(builder, weapon_one_name, weapon_one_damage);
  auto axe = CreateWeapon(builder, weapon_two_name, weapon_two_damage);
    
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
    
    const char *BaseGenerator::FlatBuffersGeneratedWarning() {
  return 'automatically generated by the FlatBuffers compiler,'
         ' do not modify';
}
    
    static std::string TypeName(const FieldDef &field) {
  return GenTypeGet(field.value.type);
}
    
    bool FileExists(const char *name) {
  assert(g_file_exists_function);
  return g_file_exists_function(name);
}
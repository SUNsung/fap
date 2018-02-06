
        
        
    {  /**
   * @brief Populate a property tree with host details.
   *
   * This will use kEnrollHostDetails to select from each table and
   * construct a property tree from the results of the first row of each.
   * The input property tree will have a key set for each table.
   *
   * @param host_details An output property tree containing each table.
   */
  void genHostDetails(boost::property_tree::ptree& host_details);
};
    
     private:
  /*
   * @brief When `get`ing event results, return EventID%s from time indexes.
   *
   * Used by EventSubscriber::get to retrieve EventID, EventTime indexes. This
   * applies the lookup-efficiency checks for time list appropriate bins.
   * If the time range in 24 hours and there is a 24-hour list bin it will
   * be queried using a single backing store `Get` followed by two `Get`s of
   * the most-specific boundary lists.
   *
   * @param index the set of index to scan.
   * @param optimize if true apply optimization checks.
   *
   * @return List of EventID, EventTime%s
   */
  std::vector<EventRecord> getRecords(const std::vector<std::string>& indexes,
                                      bool optimize = true);
    
      /*
   * @brief Print help-style output to stdout for a given flag set.
   *
   * @param shell Only print shell flags.
   * @param external Only print external flags (from extensions).
   */
  static void printFlags(bool shell = false,
                         bool external = false,
                         bool cli = false);
    
    class TLSConfigPlugin : public ConfigPlugin,
                        public std::enable_shared_from_this<TLSConfigPlugin> {
 public:
  Status setUp() override;
  Status genConfig(std::map<std::string, std::string>& config) override;
    }
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root));
    
      bool operator==(const ProgramLocation& other) const {
    // Assumes that the strings are static
    return (m_functionName == other.m_functionName) && (m_fileName == other.m_fileName) && m_lineNumber == other.m_lineNumber;
  }
    
    // Contains all the parameters that are parsed from the command line.
struct Parameters {
  // Puts the service into a namespace
  grpc::string services_namespace;
  // Use system includes (<>) or local includes ('')
  bool use_system_headers;
  // Prefix to any grpc include
  grpc::string grpc_search_path;
  // Generate GMOCK code to facilitate unit testing.
  bool generate_mock_code;
};
    
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
    
    
#ifndef FLATBUFFERS_GENERATED_MONSTER_MYGAME_SAMPLE_H_
#define FLATBUFFERS_GENERATED_MONSTER_MYGAME_SAMPLE_H_
    
      // tracks the current namespace for early exit in WrapInNameSpace
  // c++, java and csharp returns a different namespace from
  // the following default (no early exit, always fully qualify),
  // which works for js and php
  virtual const Namespace *CurrentNameSpace() const { return nullptr; }
    
    // Get the inline-address of a vector element. Useful for Structs (pass Struct
// as template arg), or being able to address a range of scalars in-line.
// Get elem_size from GetTypeSizeInline().
// Note: little-endian data on all platforms, use EndianScalar() instead of
// raw pointer access with scalars).
template<typename T>
T *GetAnyVectorElemAddressOf(const VectorOfAny *vec, size_t i,
                             size_t elem_size) {
  // C-cast to allow const conversion.
  return (T *)(vec->Data() + elem_size * i);
}
    
      // Converts a binary buffer to text using one of the schemas in the registry,
  // use the file_identifier to indicate which.
  // If DetachedBuffer::data() is null then parsing failed.
  DetachedBuffer TextToFlatBuffer(const char *text,
                                  const char *file_identifier) {
    // Load and parse the schema.
    Parser parser;
    if (!LoadSchema(file_identifier, &parser)) return DetachedBuffer();
    // Parse the text.
    if (!parser.Parse(text)) {
      lasterror_ = parser.error_;
      return DetachedBuffer();
    }
    // We have a valid FlatBuffer. Detach it from the builder and return.
    return parser.builder_.ReleaseBufferPointer();
  }

        
        #ifndef GRPC_INTERNAL_COMPILER_GO_GENERATOR_H
#define GRPC_INTERNAL_COMPILER_GO_GENERATOR_H
    
    
    {  return 0;
}

    
    struct TableInFirstNS;
    
      void Reset();
    
      // Appends the given text to the generated code as well as a newline
  // character.  Any text within {{ and }} delimeters is replaced by values
  // previously stored in the CodeWriter by calling SetValue above.  The newline
  // will be suppressed if the text ends with the \\ character.
  void operator+=(std::string text);
    
    class String : public Sized {
 public:
  String(const uint8_t *data, uint8_t byte_width) : Sized(data, byte_width) {}
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

        
        void SILLayout::Profile(llvm::FoldingSetNodeID &id,
                        CanGenericSignature Generics,
                        ArrayRef<SILField> Fields) {
  id.AddPointer(Generics.getPointer());
  for (auto &field : Fields) {
    id.AddPointer(field.getLoweredType().getPointer());
    id.AddBoolean(field.isMutable());
  }
}

    
    
    {    RawText = RawText.drop_front(Pos);
    unsigned NewlineBytes = measureNewline(RawText);
    RawText = RawText.drop_front(NewlineBytes);
  }
    
    bool swift::canBeMemberName(StringRef identifier) {
  return llvm::StringSwitch<bool>(identifier)
    .Case('init', false)
    .Case('Protocol', false)
    .Case('self', false)
    .Case('Type', false)
    .Default(true);
}
    
      IAMAccessorKind accessorKind = IAMAccessorKind::None;
    
    void InputAction::anchor() {}
    
    #include <google/protobuf/compiler/annotation_test_util.h>
    
    bool CodeGenerator::GenerateAll(
    const std::vector<const FileDescriptor*>& files,
    const string& parameter,
    GeneratorContext* generator_context,
    string* error) const {
  // Default implemenation is just to call the per file method, and prefix any
  // error string with the file to provide context.
  bool succeeded = true;
  for (int i = 0; i < files.size(); i++) {
    const FileDescriptor* file = files[i];
    succeeded = Generate(file, parameter, generator_context, error);
    if (!succeeded && error && error->empty()) {
      *error = 'Code generator returned false but provided no error '
               'description.';
    }
    if (error && !error->empty()) {
      *error = file->name() + ': ' + *error;
      break;
    }
    if (!succeeded) {
      break;
    }
  }
  return succeeded;
}
    
    #include <google/protobuf/compiler/java/java_doc_comment.h>
    
    // Get the Java Class style full name of a message.
string ClassNameResolver::GetJavaClassFullName(
    const string& name_without_package,
    const FileDescriptor* file,
    bool immutable) {
  string result;
  if (MultipleJavaFiles(file, immutable)) {
    result = FileJavaPackage(file, immutable);
    if (!result.empty()) result += '.';
  } else {
    result = GetClassName(file, immutable);
    if (!result.empty()) result += '$';
  }
  result += StringReplace(name_without_package, '.', '$', true);
  return result;
}
    
      for (int i = 0; i < dependencies.size(); i++) {
    const string& dependency = dependencies[i].second;
    printer->Print(
        '      $dependency$.getDescriptor(),\n',
        'dependency', dependency);
  }
    
    void OneofGenerator::GenerateClearFunctionImplementation(io::Printer* printer) {
  printer->Print(
      variables_,
      'void $owning_message_class$_Clear$capitalized_name$OneOfCase($owning_message_class$ *message) {\n'
      '  GPBDescriptor *descriptor = [message descriptor];\n'
      '  GPBOneofDescriptor *oneof = [descriptor.oneofs objectAtIndex:$raw_index$];\n'
      '  GPBMaybeClearOneof(message, oneof, $index$, 0);\n'
      '}\n');
}
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
Iterator* NewDBIterator(DBImpl* db,
                        const Comparator* user_key_comparator,
                        Iterator* internal_iter,
                        SequenceNumber sequence,
                        uint32_t seed);
    
     private:
  // We construct a char array of the form:
  //    klength  varint32               <-- start_
  //    userkey  char[klength]          <-- kstart_
  //    tag      uint64
  //                                    <-- end_
  // The array is a suitable MemTable key.
  // The suffix starting with 'userkey' can be used as an InternalKey.
  const char* start_;
  const char* kstart_;
  const char* end_;
  char space_[200];      // Avoid allocation for short keys
    
    #include 'db/dbformat.h'
#include 'db/filename.h'
#include 'db/log_reader.h'
#include 'db/version_edit.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
    
    #endif  // STORAGE_LEVELDB_DB_FILENAME_H_

    
    
    {  // No copying allowed
  Reader(const Reader&);
  void operator=(const Reader&);
};
    
      Status AddRecord(const Slice& slice);
    
    #include <string>
#include 'leveldb/db.h'
#include 'db/dbformat.h'
#include 'db/skiplist.h'
#include 'util/arena.h'
    
      // Our data structure does not allow duplicate insertion
  assert(x == nullptr || !Equal(key, x->key));
    
    class SnapshotList {
 public:
  SnapshotList() : head_(0) {
    head_.prev_ = &head_;
    head_.next_ = &head_;
  }
    }
    
    namespace HPHP { struct UnitEmitter; }
namespace HPHP { namespace HHBBC {
    }
    }
    
    //////////////////////////////////////////////////////////////////////
    
        if (!slash && !semi) {
      raise_warning('rfc2397: invalid meta data');
      return nullptr;
    }
    
      if (need_file) {
    char tmp[] = '/tmp/php-wrap-XXXXXX';
    int tmp_fd = mkstemp(tmp);
    if (tmp_fd == -1) {
      fprintf(stderr, 'Error: unable to open temporary file');
      exit(EXIT_FAILURE);
    }
    if (program == nullptr) {
      // If the program wasn't specified on the command-line, ala' -r,
      // is no command-line parameter, read the PHP file from stdin.
      std::string line;
      while (std::getline(std::cin, line)) {
        write(tmp_fd, line.c_str(), line.length());
        write(tmp_fd, '\n', 1);
      }
    } else {
      // -r omits the braces
      write(tmp_fd, '<?\n', 3);
      write(tmp_fd, program, strlen(program));
    }
    close(tmp_fd);
    }
    
    #include 'hphp/runtime/base/glob-stream-wrapper.h'
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    namespace HPHP {
    }
    
    template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 1, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 1, rate, fillCols);
}
    
    namespace HPHP {
    }
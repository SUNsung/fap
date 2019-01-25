
        
        #if LANG_CXX11
#include <type_traits>
#endif
    
    void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enumDescriptor) {
    WriteDocCommentBody(printer, enumDescriptor);
}
void WriteEnumValueDocComment(io::Printer* printer, const EnumValueDescriptor* value) {
    WriteDocCommentBody(printer, value);
}
    
    void EnumGenerator::Generate(io::Printer* printer) {
  WriteEnumDocComment(printer, descriptor_);
  printer->Print('$access_level$ enum $name$ {\n',
                 'access_level', class_access_level(),
                 'name', descriptor_->name());
  printer->Indent();
  std::set<string> used_names;
  std::set<int> used_number;
  for (int i = 0; i < descriptor_->value_count(); i++) {
      WriteEnumValueDocComment(printer, descriptor_->value(i));
      string original_name = descriptor_->value(i)->name();
      string name = GetEnumValueName(descriptor_->name(), descriptor_->value(i)->name());
      // Make sure we don't get any duplicate names due to prefix removal.
      while (!used_names.insert(name).second) {
        // It's possible we'll end up giving this warning multiple times, but that's better than not at all.
        GOOGLE_LOG(WARNING) << 'Duplicate enum value ' << name << ' (originally ' << original_name
          << ') in ' << descriptor_->name() << '; adding underscore to distinguish';
        name += '_';
      }
      int number = descriptor_->value(i)->number();
      if (!used_number.insert(number).second) {
          printer->Print('[pbr::OriginalName(\'$original_name$\', PreferredAlias = false)] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      } else {
          printer->Print('[pbr::OriginalName(\'$original_name$\')] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      }
  }
  printer->Outdent();
  printer->Print('}\n');
  printer->Print('\n');
}
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    ImmutableExtensionLiteGenerator::~ImmutableExtensionLiteGenerator() {}
    
    // Check whether a given message or its nested types has the given class name.
bool MessageHasConflictingClassName(const Descriptor* message,
                                    const string& classname) {
  if (message->name() == classname) return true;
  for (int i = 0; i < message->nested_type_count(); ++i) {
    if (MessageHasConflictingClassName(message->nested_type(i), classname)) {
      return true;
    }
  }
  for (int i = 0; i < message->enum_type_count(); ++i) {
    if (message->enum_type(i)->name() == classname) {
      return true;
    }
  }
  return false;
}
    
    // Convert the escape sequence parameter to a number of expected hex digits.
static inline int UnicodeLength(char key) {
  if (key == 'u') return 4;
  if (key == 'U') return 8;
  return 0;
}
    
      static bool isInitialized() { return data_.initialized; }
    
    void DHTReplaceNodeTask::sendMessage()
{
  std::shared_ptr<DHTNode> questionableNode = bucket_->getLRUQuestionableNode();
  if (!questionableNode) {
    setFinished(true);
  }
  else {
    getMessageDispatcher()->addMessageToQueue(
        getMessageFactory()->createPingMessage(questionableNode), timeout_,
        make_unique<DHTPingReplyMessageCallback<DHTReplaceNodeTask>>(this));
  }
}
    
      virtual std::unique_ptr<Dict> getResponse() = 0;
    
    
    {} // namespace aria2

    
      size_t getExecutingTaskSize() const { return execTasks_.size(); }
    
    void DHTTaskFactoryImpl::setLocalNode(const std::shared_ptr<DHTNode>& localNode)
{
  localNode_ = localNode;
}
    
      virtual void executeTask() CXX11_OVERRIDE;
    
    
    {} // namespace aria2

    
    struct CompactionIterationStats {
  // Compaction statistics
    }
    
    // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
    // Example structure that describes a compaction task.
struct CompactionTask {
  CompactionTask(
      DB* _db, Compactor* _compactor,
      const std::string& _column_family_name,
      const std::vector<std::string>& _input_file_names,
      const int _output_level,
      const CompactionOptions& _compact_options,
      bool _retry_on_fail)
          : db(_db),
            compactor(_compactor),
            column_family_name(_column_family_name),
            input_file_names(_input_file_names),
            output_level(_output_level),
            compact_options(_compact_options),
            retry_on_fail(_retry_on_fail) {}
  DB* db;
  Compactor* compactor;
  const std::string& column_family_name;
  std::vector<std::string> input_file_names;
  int output_level;
  CompactionOptions compact_options;
  bool retry_on_fail;
};
    
      MyFilter filter;
    
    std::string kDBPath = '/tmp/rocksdb_simple_example';
    
    namespace rocksdb {
struct CompactionJobStats {
  CompactionJobStats() { Reset(); }
  void Reset();
  // Aggregate the CompactionJobStats from another instance with this one
  void Add(const CompactionJobStats& stats);
    }
    }
    
    // Take a default PlainTableOptions 'table_options' in addition to a
// map 'opts_map' of option name to option value to construct the new
// PlainTableOptions 'new_table_options'.
//
// @param table_options the default options of the output 'new_table_options'.
// @param opts_map an option name to value map for specifying how
//     'new_table_options' should be set.
// @param new_table_options the resulting options based on 'table_options'
//     with the change specified in 'opts_map'.
// @param input_strings_escaped when set to true, each escaped characters
//     prefixed by '\' in the values of the opts_map will be further converted
//     back to the raw string before assigning to the associated options.
// @param ignore_unknown_options when set to true, unknown options are ignored
//     instead of resulting in an unknown-option error.
// @return Status::OK() on success.  Otherwise, a non-ok status indicating
//     error will be returned, and 'new_table_options' will be set to
//     'table_options'.
Status GetPlainTableOptionsFromMap(
    const PlainTableOptions& table_options,
    const std::unordered_map<std::string, std::string>& opts_map,
    PlainTableOptions* new_table_options, bool input_strings_escaped = false,
    bool ignore_unknown_options = false);
    
    namespace rocksdb {
namespace experimental {
    }
    }
    
      // Is cache storing uncompressed data ?
  //
  // True if the cache is configured to store uncompressed data else false
  virtual bool IsCompressed() = 0;
    
      // Builds an openable snapshot of RocksDB on the same disk, which
  // accepts an output directory on the same disk, and under the directory
  // (1) hard-linked SST files pointing to existing live SST files
  // SST files will be copied if output directory is on a different filesystem
  // (2) a copied manifest files and other files
  // The directory should not already exist and will be created by this API.
  // The directory will be an absolute path
  // log_size_for_flush: if the total log file size is equal or larger than
  // this value, then a flush is triggered for all the column families. The
  // default value is 0, which means flush is always triggered. If you move
  // away from the default, the checkpoint may not contain up-to-date data
  // if WAL writing is not always enabled.
  // Flush will always trigger if it is 2PC.
  virtual Status CreateCheckpoint(const std::string& checkpoint_dir,
                                  uint64_t log_size_for_flush = 0);
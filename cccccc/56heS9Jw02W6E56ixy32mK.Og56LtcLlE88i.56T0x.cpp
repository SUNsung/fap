
        
          Status status_;
  std::string saved_key_;     // == current key when direction_==kReverse
  std::string saved_value_;   // == current raw value when direction_==kReverse
  Direction direction_;
  bool valid_;
    
    void InternalKeyComparator::FindShortSuccessor(std::string* key) const {
  Slice user_key = ExtractUserKey(*key);
  std::string tmp(user_key.data(), user_key.size());
  user_comparator_->FindShortSuccessor(&tmp);
  if (tmp.size() < user_key.size() &&
      user_comparator_->Compare(user_key, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*key, tmp) < 0);
    key->swap(tmp);
  }
}
    
    bool GuessType(const std::string& fname, FileType* type) {
  size_t pos = fname.rfind('/');
  std::string basename;
  if (pos == std::string::npos) {
    basename = fname;
  } else {
    basename = std::string(fname.data() + pos + 1, fname.size() - pos - 1);
  }
  uint64_t ignored;
  return ParseFileName(basename, &ignored, type);
}
    
    static std::string MakeFileName(const std::string& name, uint64_t number,
                                const char* suffix) {
  char buf[100];
  snprintf(buf, sizeof(buf), '/%06llu.%s',
           static_cast<unsigned long long>(number),
           suffix);
  return name + buf;
}
    
    #endif  // STORAGE_LEVELDB_DB_TABLE_CACHE_H_

    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
    /**
 * @brief Request the extensions API to autoload any appropriate extensions.
 *
 * Extensions may be 'autoloaded' using the `extensions_autoload` command line
 * argument. loadExtensions should be called before any plugin or registry item
 * is used. This allows appropriate extensions to expose plugin requirements.
 *
 * An 'appropriate' extension is one within the `extensions_autoload` search
 * path with file ownership equivalent or greater (root) than the osquery
 * process requesting autoload.
 */
void loadExtensions();
    
      /// Get a PluginResponse key as a property tree.
  static void getResponse(const std::string& key,
                          const PluginResponse& response,
                          boost::property_tree::ptree& tree);
    
    #pragma once
    
    using ModuleHandle = void*;
    
    
    {/// Clear decorations for a source when it updates.
void clearDecorations(const std::string& source);
}

    
        // We should have a property tree of pack content mimicking embedded
    // configuration packs, ready to parse as a string.
    std::ostringstream output;
    pt::write_json(output, multi_pack, false);
    pack = output.str();
    if (pack.empty()) {
      return Status(1, 'Multi-pack content empty');
    }
    
      int num_greetings = 10;
  greeter.SayManyHellos(name, num_greetings, [](const std::string &message) {
    std::cerr << 'Greeter received: ' << message << std::endl;
  });
    
    inline flatbuffers::Offset<Field> CreateField(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<Type> type = 0,
    uint16_t id = 0,
    uint16_t offset = 0,
    int64_t default_integer = 0,
    double default_real = 0.0,
    bool deprecated = false,
    bool required = false,
    bool key = false,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<KeyValue>>> attributes = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> documentation = 0) {
  FieldBuilder builder_(_fbb);
  builder_.add_default_real(default_real);
  builder_.add_default_integer(default_integer);
  builder_.add_documentation(documentation);
  builder_.add_attributes(attributes);
  builder_.add_type(type);
  builder_.add_name(name);
  builder_.add_offset(offset);
  builder_.add_id(id);
  builder_.add_key(key);
  builder_.add_required(required);
  builder_.add_deprecated(deprecated);
  return builder_.Finish();
}
    
      virtual grpc::string name() const = 0;
    
    // Set any scalar field, if you know its exact type.
template<typename T>
bool SetField(Table *table, const reflection::Field &field, T val) {
  reflection::BaseType type = field.type()->base_type();
  if (!IsScalar(type)) { return false; }
  assert(sizeof(T) == GetTypeSize(type));
  T def;
  if (IsInteger(type)) {
    def = GetFieldDefaultI<T>(field);
  } else {
    assert(IsFloat(type));
    def = GetFieldDefaultF<T>(field);
  }
  return table->SetField(field.offset(), val, def);
}
    
      int32_t calculateMinSplitSize() const;
    
      virtual int64_t getCurrentLength() CXX11_OVERRIDE;
    
    void AnnounceList::shuffle()
{
  for (const auto& tier : tiers_) {
    auto& urls = tier->urls;
    std::shuffle(std::begin(urls), std::end(urls),
                 *SimpleRandomizer::getInstance());
  }
}
    
    
    {} // namespace aria2

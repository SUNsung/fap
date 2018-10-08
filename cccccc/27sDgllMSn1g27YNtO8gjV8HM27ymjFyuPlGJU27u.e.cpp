
        
        // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
#include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
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
    
    void Context::InitializeFieldGeneratorInfo(const FileDescriptor* file) {
  for (int i = 0; i < file->message_type_count(); ++i) {
    InitializeFieldGeneratorInfoForMessage(file->message_type(i));
  }
}
    
    string EscapeJavadoc(const string& input) {
  string result;
  result.reserve(input.size() * 2);
    }
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
     public:
  virtual void GenerateCFunctionDeclarations(io::Printer* printer) const;
  virtual void GenerateCFunctionImplementations(io::Printer* printer) const;
  virtual void DetermineForwardDeclarations(std::set<string>* fwd_decls) const;
    
    void ExtensionGenerator::GenerateMembersHeader(io::Printer* printer) {
  std::map<string, string> vars;
  vars['method_name'] = method_name_;
  SourceLocation location;
  if (descriptor_->GetSourceLocation(&location)) {
    vars['comments'] = BuildCommentsString(location, true);
  } else {
    vars['comments'] = '';
  }
  // Unlike normal message fields, check if the file for the extension was
  // deprecated.
  vars['deprecated_attribute'] = GetOptionalDeprecatedAttribute(descriptor_, descriptor_->file());
  printer->Print(vars,
                 '$comments$'
                 '+ (GPBExtensionDescriptor *)$method_name$$deprecated_attribute$;\n');
}
    
    /**
 * @brief Parser plugin for logger configurations.
 */
class LoggerConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {kLoggerKey};
  }
    }
    
    TEST_F(DecoratorsConfigParserPluginTests, test_decorators_run_load_top_level) {
  // Re-enable the decorators, then update the config.
  // The 'load' decorator set should run every time the config is updated.
  FLAGS_disable_decorators = false;
  // enable top level decorations for the test
  FLAGS_decorations_top_level = true;
  Config::get().update(config_data_);
    }
    
    
    {  // This should work.
  ASSERT_TRUE(doc.HasMember('custom_fake'));
  EXPECT_TRUE(doc['custom_fake'].IsNumber());
  EXPECT_EQ(1U, doc['custom_fake'].GetUint());
  EXPECT_FALSE(Flag::getValue('custom_fake').empty());
}
    
      /// Paths to autoload extensions.
  std::vector<std::string> extensions_paths_;
    
    Status Distributed::pullUpdates() {
  auto distributed_plugin = RegistryFactory::get().getActive('distributed');
  if (!RegistryFactory::get().exists('distributed', distributed_plugin)) {
    return Status(1, 'Missing distributed plugin: ' + distributed_plugin);
  }
    }
    
    
    {  for (const auto& category : doc.doc()['exclude_paths'].GetObject()) {
    for (const auto& excl_path : category.value.GetArray()) {
      std::string pattern = excl_path.GetString();
      if (pattern.empty()) {
        continue;
      }
      exclude_paths_.insert(pattern);
    }
  }
}
    
      // In this case we can still add a blank subscription to an existing event
  // type.
  status = EventFactory::addSubscription(basic_publisher_type, subscription);
  EXPECT_TRUE(status.ok());
    
    inline void ColorTransformYCbCrToRGB(uint8_t* pixel) {
  int y  = pixel[0];
  int cb = pixel[1];
  int cr = pixel[2];
  pixel[0] = kRangeLimit[y + kCrToRedTable[cr]];
  pixel[1] = kRangeLimit[y +
                         ((kCrToGreenTable[cr] + kCbToGreenTable[cb]) >> 16)];
  pixel[2] = kRangeLimit[y + kCbToBlueTable[cb]];
}
    
    
    {}  // namespace guetzli
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
    ///////////////////////////////////////////////////////////////////////////////
// Cosine table: C(k) = cos(k.pi/16)/sqrt(2), k = 1..7 using 15 bits signed
const coeff_t kTable04[7] = { 22725, 21407, 19266, 16384, 12873,  8867, 4520 };
// rows #1 and #7 are pre-multiplied by 2.C(1) before the 2nd pass.
// This multiply is merged in the table of constants used during 1st pass:
const coeff_t kTable17[7] = { 31521, 29692, 26722, 22725, 17855, 12299, 6270 };
// rows #2 and #6 are pre-multiplied by 2.C(2):
const coeff_t kTable26[7] = { 29692, 27969, 25172, 21407, 16819, 11585, 5906 };
// rows #3 and #5 are pre-multiplied by 2.C(3):
const coeff_t kTable35[7] = { 26722, 25172, 22654, 19266, 15137, 10426, 5315 };
    
    // An upper estimate of memory usage of Guetzli. The bound is
// max(kLowerMemusaeMB * 1<<20, pixel_count * kBytesPerPixel)
constexpr int kBytesPerPixel = 350;
constexpr int kLowestMemusageMB = 100; // in MB
    
    #endif  // GUETZLI_IDCT_H_

    
    void SaveQuantTables(const int q[3][kDCTBlockSize], JPEGData* jpg) {
  const size_t kTableSize = kDCTBlockSize * sizeof(q[0][0]);
  jpg->quant.clear();
  int num_tables = 0;
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    JPEGComponent* comp = &jpg->components[i];
    // Check if we have this quant table already.
    bool found = false;
    for (int j = 0; j < num_tables; ++j) {
      if (memcmp(&q[i][0], &jpg->quant[j].values[0], kTableSize) == 0) {
        comp->quant_idx = j;
        found = true;
        break;
      }
    }
    if (!found) {
      JPEGQuantTable table;
      memcpy(&table.values[0], &q[i][0], kTableSize);
      table.precision = 0;
      for (int k = 0; k < kDCTBlockSize; ++k) {
        assert(table.values[k] >= 0);
        assert(table.values[k] < (1 << 16));
        if (table.values[k] > 0xff) {
          table.precision = 1;
        }
      }
      table.index = num_tables;
      comp->quant_idx = num_tables;
      jpg->quant.push_back(table);
      ++num_tables;
    }
  }
}
    
    
// Adds APP0 header data.
void AddApp0Data(JPEGData* jpg);
    
    // Output callback function with associated data.
struct JPEGOutput {
  JPEGOutput(JPEGOutputHook cb, void* data) : cb(cb), data(data) {}
  bool Write(const uint8_t* buf, size_t len) const {
    return (len == 0) || (cb(data, buf, len) == len);
  }
 private:
  JPEGOutputHook cb;
  void* data;
};
    
        std::shared_ptr<DHTNode> localNode;
    
    void DHTReplaceNodeTask::startup() { sendMessage(); }
    
    
    {  void deserialize(const std::string& filename);
};
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createReplaceNodeTask(
    const std::shared_ptr<DHTBucket>& bucket,
    const std::shared_ptr<DHTNode>& newNode)
{
  auto task = std::make_shared<DHTReplaceNodeTask>(bucket, newNode);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
      // do nothing; we don't use this message as outgoing message.
  virtual bool send() CXX11_OVERRIDE;
    
    void DNSCache::markBad(const std::string& hostname, const std::string& ipaddr,
                       uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.find(target);
  if (i != entries_.end()) {
    (*i)->markBad(ipaddr);
  }
}
    
        template <typename OutputIterator>
    void getAllGoodAddrs(OutputIterator out) const
    {
      for (auto& elem : addrEntries_) {
        if (elem.good_) {
          *out++ = elem.addr_;
        }
      }
    }
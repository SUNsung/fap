
        
        
    {  DefaultCacheKey CKey(const_cast<void*>(Key), &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    // FIXME: Not thread-safe! It should avoid deleting the value until
    // 'releaseValue is called on it.
    *Value_out = Entry->second;
    return true;
  }
  return false;
}
    
    #ifndef DIRECTIONAL_PREPOSITION
#  define DIRECTIONAL_PREPOSITION(Word) PREPOSITION(Word)
#endif
    
      if (*BufferPtr == '\n')
    return 1;
    
    
    {      ExecutingTasks.push(PidTaskPair(Pid, std::move(T)));
    }
    
    StringRef swift::unicode::extractFirstExtendedGraphemeCluster(StringRef S) {
  // Extended grapheme cluster segmentation algorithm as described in Unicode
  // Standard Annex #29.
  if (S.empty())
    return StringRef();
    }
    
    namespace {
  // Quasi-lexicographic order: string length first, then string data.
  // Since we don't care about the actual length, we can use this, which
  // lets us ignore the string data a larger proportion of the time.
  struct SortByLengthComparator {
    bool operator()(StringRef lhs, StringRef rhs) const {
      return (lhs.size() < rhs.size() ||
              (lhs.size() == rhs.size() && lhs < rhs));
    }
  };
} // end anonymous namespace
    
    extern 'C' {
  PyMODINIT_FUNC INITFUNC() {
#if PY_MAJOR_VERSION >= 3
    PyObject *module = PyModule_Create(&_module);
#else
    PyObject *module = Py_InitModule3(
        const_cast<char*>(kModuleName),
        NULL,
        const_cast<char*>(kModuleDocstring));
#endif
    if (module == NULL) {
      return INITFUNC_ERRORVAL;
    }
    }
    }
    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
    // A CodeGenerator that captures the FileDescriptor it's passed as a
// FileDescriptorProto.
class DescriptorCapturingGenerator : public CodeGenerator {
 public:
  // Does not own file; file must outlive the Generator.
  explicit DescriptorCapturingGenerator(FileDescriptorProto* file)
      : file_(file) {}
    }
    
    
    {  for (int i = 0; i < parts.size(); i++) {
    string::size_type equals_pos = parts[i].find_first_of('=');
    std::pair<string, string> value;
    if (equals_pos == string::npos) {
      value.first = parts[i];
      value.second = '';
    } else {
      value.first = parts[i].substr(0, equals_pos);
      value.second = parts[i].substr(equals_pos + 1);
    }
    output->push_back(value);
  }
}
    
    
    {  // Moving to a message on the arena should lead to a copy.
  *message2_on_arena = std::move(message1);
  EXPECT_NE(nested, &message2_on_arena->optional_nested_message());
  TestUtil::ExpectAllFieldsSet(message1);
  TestUtil::ExpectAllFieldsSet(*message2_on_arena);
}
    
      // Oneofs
  if (descriptor->oneof_decl_count() > 0) {
      std::vector<std::string> oneofs;
      for (int i = 0; i < descriptor->oneof_decl_count(); i++) {
          oneofs.push_back(UnderscoresToCamelCase(descriptor->oneof_decl(i)->name(), true));
      }
      printer->Print('new[]{ \'$oneofs$\' }, ', 'oneofs', JoinStrings(oneofs, '\', \''));
  }
  else {
      printer->Print('null, ');
  }
    
      char prev = '*';
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    
    {
    {
    {
    {
    {
    {
    {  printer->Print(
      '      return YES;\n'
      '    default:\n'
      '      return NO;\n'
      '  }\n'
      '}\n\n');
}
}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {
    {
    {
    {void ExtensionGenerator::GenerateRegistrationSource(io::Printer* printer) {
  printer->Print(
      '[registry addExtension:$root_class_and_method_name$];\n',
      'root_class_and_method_name', root_class_and_method_name_);
}
}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    class ExtensionGenerator {
 public:
  ExtensionGenerator(const string& root_class_name,
                     const FieldDescriptor* descriptor);
  ~ExtensionGenerator();
    }
    
    
<details>
    
    ChannelCredentials::~ChannelCredentials() {}
    
      std::vector<grpc::string_ref> FindPropertyValues(
      const grpc::string& name) const override;
    
    #include <grpc/grpc_security.h>
#include 'src/core/lib/channel/channel_args.h'
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    ProtoServerReflectionPlugin::ProtoServerReflectionPlugin()
    : reflection_service_(new grpc::ProtoServerReflection()) {}
    
    
    { private:
  std::istream &fin_;
};
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    
    {// end of actions group
/// @}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    
    {
    {
    {            setVertex(Vec2(i, j), v);
        }
    }
}
    
    Sequence::~Sequence()
{
    CC_SAFE_RELEASE(_actions[0]);
    CC_SAFE_RELEASE(_actions[1]);
}
    
    /** @class ScaleTo
 @brief Scales a Node object to a zoom factor by modifying it's scale attribute.
 @warning This action doesn't support 'reverse'.
 @warning The physics body contained in Node doesn't support this action.
 */
class CC_DLL ScaleTo : public ActionInterval
{
public:
    /** 
     * Creates the action with the same scale factor for X and Y.
     * @param duration Duration time, in seconds.
     * @param s Scale factor of x and y.
     * @return An autoreleased ScaleTo object.
     */
    static ScaleTo* create(float duration, float s);
    }
    
    #endif // __ACTION_CCPAGETURN3D_ACTION_H__

    
    
    {        for(const auto &value : spritesheets) {
            std::string path = FileUtils::getInstance()->fullPathFromRelativeFile(value.asString(),plist);
            SpriteFrameCache::getInstance()->addSpriteFramesWithFile(path);
        }
    }
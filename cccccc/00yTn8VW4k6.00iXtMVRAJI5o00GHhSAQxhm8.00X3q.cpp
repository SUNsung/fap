
        
        class SILDebuggerClient;
    
    
    {  for (auto &rel : sym.Relations) {
    if (!rel.group.empty())
      return rel.group;
    if (rel.decl)
      return findGroupNameForDecl(rel.decl);
  }
  llvm_unreachable('did not find group name for reference');
}
    
      Optional<const swift::markup::ReturnsField * >getReturnsField() const {
    return Parts.ReturnsField;
  }
    
    #endif

    
    using clang::index::printSymbolProperties;
    
    bool Substitution::operator==(const Substitution &other) const {
  // The archetypes may be missing, but we can compare them directly
  // because archetypes are always canonical.
  return
    Replacement->isEqual(other.Replacement) &&
    Conformance.equals(other.Conformance);
}
    
    public:
  typedef const Value value_type;
  //typedef unsigned int size_t;
  //typedef int difference_type;
  typedef const Value& reference;
  typedef const Value* pointer;
  typedef ValueConstIterator SelfType;
    
    PyDescriptorDatabase::PyDescriptorDatabase(PyObject* py_database)
    : py_database_(py_database) {
  Py_INCREF(py_database_);
}
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    #include <sstream>
    
    // TODO(jonskeet): Refactor repeated field support; all the implementations are *really* similar. We
// should probably have a RepeatedFieldGeneratorBase.
class RepeatedEnumFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedEnumFieldGenerator(const FieldDescriptor* descriptor,
                             int fieldOrdinal,
                             const Options *options);
  ~RepeatedEnumFieldGenerator();
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_field_base.h>
    
    void RepeatedPrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.For$capitalized_type_name$($tag$);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
    // Author: liujisi@google.com (Pherl Liu)
    
            // Device.
        std::string m_device;
    
        const std::string& Model::Domain() const
    {
        return m_modelProto->domain();
    }
    
        REGISTER_OPERATOR_SCHEMA(RNN)
        .Description(R'DOC(
            Computes an one-layer simple RNN. This operator is usually supported
            via some custom implementation such as CuDNN.
    
        // Adds an utterance to the chunk.
    void Add(UtteranceDescription&& utterance)
    {
        if (IsInRam())
        {
            LogicError('Frames already paged into RAM -- too late to add data.');
        }
    }
    
    template <class ElemType>
typename ReaderShim<ElemType>::PrefetchResult ReaderShim<ElemType>::PrefetchMinibatch(size_t currentDataTransferIndex)
{
    PROFILE_SCOPE(profilerEvtPrefetchMinibatch);
    }
    
            ComputationNodeBasePtr toNode = CopyNode(fromNet, fromNodeName,
                                                 toNodeName,
                                                 CopyNodeFlags::copyNodeValue);
    
        void SetName(const std::wstring& name)
    {
        m_name = name;
    }
    const std::wstring& GetName();
    int GetSectionCount() const
    {
        return m_sectionHeader->dataSections;
    }
    size_t GetRecordCount() const
    {
        return m_sectionHeader->elementsPerRecord != 0 ? m_sectionHeader->elementsCount / m_sectionHeader->elementsPerRecord : m_sectionHeader->elementsCount;
    }
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    // Test for issue 178: a manual compaction causes deleted data to reappear.
#include <iostream>
#include <sstream>
#include <cstdlib>
    
    
    {  // Pick up remaining bytes
  switch (limit - data) {
    case 3:
      h += static_cast<unsigned char>(data[2]) << 16;
      FALLTHROUGH_INTENDED;
    case 2:
      h += static_cast<unsigned char>(data[1]) << 8;
      FALLTHROUGH_INTENDED;
    case 1:
      h += static_cast<unsigned char>(data[0]);
      h *= m;
      h ^= (h >> r);
      break;
  }
  return h;
}
    
    
    {  double Median() const;
  double Percentile(double p) const;
  double Average() const;
  double StandardDeviation() const;
};
    
      // When user keys are misordered
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('bar', 99, kTypeValue)));
    
    #include <stdint.h>
#include 'leveldb/env.h'
#include 'util/coding.h'
#include 'util/crc32c.h'
    
    #ifndef STORAGE_LEVELDB_DB_LOG_WRITER_H_
#define STORAGE_LEVELDB_DB_LOG_WRITER_H_
    
      /**
   * @brief Expire indexes and eventually records.
   *
   * @param list_type the string representation of list binning type.
   * @param indexes complete set of 'index.step' indexes for the list_type.
   * @param expirations of the indexes, the set to expire.
   */
  void expireIndexes(const std::string& list_type,
                     const std::vector<std::string>& indexes,
                     const std::vector<std::string>& expirations);
    
      /// This pauses the watchdog process until the watcher thread stops.
  void waitForWatcher() const;
    
    #include 'osquery/core/conversions.h'
    
    // Helper function to determine if thread is running with admin privilege.
bool isUserAdmin() {
  return getuid() == 0;
}
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(unit, value);
    }
};

    
    bool Config::isExperimentalFeatureEnabled(int feature) const
{
    return YGConfigIsExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature));
}

    
        static void destroy(Config * config);
    
        Value getMinWidth(void) const;
    Value getMinHeight(void) const;
    
    #include <cstdarg>
#include <stdio.h>
    
    private:
  void ref() {
    ++m_refcount;
  }
    
      explicit operator bool() const {
    return m_ptr ? true : false;
  }
    
    // This allows storing the assert message before the current process terminates due to a crash
typedef void (*AssertHandler)(const char* message);
void setAssertHandler(AssertHandler assertHandler);
    
    
    {  uint8_t* getDirectBytes() const;
  size_t getDirectSize() const;
};
    
    #include 'FuzzerExtFunctions.def'
    
    void Fuzzer::Loop() {
  system_clock::time_point LastCorpusReload = system_clock::now();
  if (Options.DoCrossOver)
    MD.SetCorpus(&Corpus);
  while (true) {
    auto Now = system_clock::now();
    if (duration_cast<seconds>(Now - LastCorpusReload).count() >=
        Options.ReloadIntervalSec) {
      RereadOutputCorpus(MaxInputLen);
      LastCorpusReload = system_clock::now();
    }
    if (TotalNumberOfRuns >= Options.MaxNumberOfRuns)
      break;
    if (TimedOut()) break;
    // Perform several mutations and runs.
    MutateAndTestOne();
  }
    }
    
    
    {  std::ofstream OF(CFPath, std::ofstream::out | std::ofstream::app);
  for (size_t i = M.FirstNotProcessedFile; i < M.Files.size(); i++) {
    auto U = FileToVector(M.Files[i].Name);
    if (U.size() > MaxInputLen) {
      U.resize(MaxInputLen);
      U.shrink_to_fit();
    }
    std::ostringstream StartedLine;
    // Write the pre-run marker.
    OF << 'STARTED ' << std::dec << i << ' ' << U.size() << '\n';
    OF.flush();  // Flush is important since ExecuteCommand may crash.
    // Run.
    TPC.ResetMaps();
    ExecuteCallback(U.data(), U.size());
    // Collect coverage.
    std::set<size_t> Features;
    TPC.CollectFeatures([&](size_t Feature) -> bool {
      Features.insert(Feature);
      return true;
    });
    // Show stats.
    TotalNumberOfRuns++;
    if (!(TotalNumberOfRuns & (TotalNumberOfRuns - 1)))
      PrintStats('pulse ');
    // Write the post-run marker and the coverage.
    OF << 'DONE ' << i;
    for (size_t F : Features)
      OF << ' ' << std::hex << F;
    OF << '\n';
  }
}
    
    
    {}  // namespace fuzzer

    
      /// Tries to find an ASCII integer in Data, changes it to another ASCII int.
  size_t Mutate_ChangeASCIIInteger(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Change a 1-, 2-, 4-, or 8-byte integer in interesting ways.
  size_t Mutate_ChangeBinaryInteger(uint8_t *Data, size_t Size, size_t MaxSize);
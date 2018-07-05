
        
          SelfType& operator--() {
    decrement();
    return *this;
  }
    
        // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
#include <google/protobuf/testing/file.h>
    
     private:
  const FileDescriptor* file_;
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
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
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #include <google/protobuf/compiler/java/java_generator_factory.h>
    
            NDArrayViewPtr valueData;
        NDShape valueDataShape = fullyDefinedSampleShape.AppendShape({ maxSequenceLength, numSequences });
        if (numSequences == 1)
        {
            if (createNewCopy)
                valueData = sequences[0]->DeepClone();
            else
                valueData = sequences[0];
    }
    
    // understand and execute from the syntactic expression tree
ConfigValuePtr Evaluate(ExpressionPtr);                               // evaluate the expression tree
void Do(ExpressionPtr e);                                             // evaluate e.do
shared_ptr<Object> EvaluateField(ExpressionPtr e, const wstring& id); // for experimental CNTK integration
    
    // ---------------------------------------------------------------------------
// ConfigException -- all errors from processing the config files are reported as ConfigException
// ---------------------------------------------------------------------------
    
        // save a float4 to RAM bypassing the cache ('without polluting the cache')
    void storewithoutcache(float4& r4) const
    {
        // _mm_stream_ps ((float*) &r4, v);
        r4 = v;
    }
    
    TEST(LogTest, BadLength) {
  const int kPayloadSize = kBlockSize - kHeaderSize;
  Write(BigString('bar', kPayloadSize));
  Write('foo');
  // Least significant size byte is stored in header[4].
  IncrementByte(4, 1);
  ASSERT_EQ('foo', Read());
  ASSERT_EQ(kBlockSize, DroppedBytes());
  ASSERT_EQ('OK', MatchError('bad record length'));
}
    
      typedef std::set< std::pair<int, uint64_t> > DeletedFileSet;
    
    BlockBuilder::BlockBuilder(const Options* options)
    : options_(options),
      restarts_(),
      counter_(0),
      finished_(false) {
  assert(options->block_restart_interval >= 1);
  restarts_.push_back(0);       // First restart point is at offset 0
}
    
    // A FilterBlockBuilder is used to construct all of the filters for a
// particular Table.  It generates a single string which is stored as
// a special block in the Table.
//
// The sequence of calls to FilterBlockBuilder must match the regexp:
//      (StartBlock AddKey*)* Finish
class FilterBlockBuilder {
 public:
  explicit FilterBlockBuilder(const FilterPolicy*);
    }
    
      // Check third filter (empty)
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'hello'));
    
     private:
  double min_;
  double max_;
  double num_;
  double sum_;
  double sum_squares_;
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    #include 'db/log_writer.h'
    
    namespace osquery {
    }
    
    FLAG_ALIAS(bool, shell_only_alias, shell_only);
    
      auto nobody = getpwnam('nobody');
  EXPECT_NE(nobody, nullptr);
  {
    auto dropper = DropPrivileges::get();
    EXPECT_TRUE(dropper->dropTo(nobody->pw_uid, nobody->pw_gid));
    EXPECT_EQ(geteuid(), nobody->pw_uid);
    }
    
    TEST_F(ProcessTests, test_constructor) {
  auto p = PlatformProcess(kInvalidPid);
  EXPECT_FALSE(p.isValid());
}
    
      // Mark the database as corrupted
  RocksDBDatabasePlugin::setCorrupted();
  printf('set corrupt\n');
  resetDatabase();
  printf('did reset\n');
    
      BtRequestFactory* getBtRequestFactory() const { return requestFactory_; }
    
    void AbstractOptionHandler::updateFlags(int flag, bool val)
{
  if (val) {
    flags_ |= flag;
  }
  else {
    flags_ &= ~flag;
  }
}
    
      virtual ~AbstractOptionHandler();
    
      const std::shared_ptr<HttpConnection>& getHttpConnection() const
  {
    return httpConnection_;
  }
    
    #include 'AbstractCommand.h'
    
    #endif // D_ACTIVE_PEER_CONNECTION_COMMAND_H

    
    public:
  AdaptiveFileAllocationIterator(BinaryStream* stream, int64_t offset,
                                 int64_t totalLength);
    
    AuthConfig::AuthConfig() {}
    
      const std::string& getUser() const { return user_; }
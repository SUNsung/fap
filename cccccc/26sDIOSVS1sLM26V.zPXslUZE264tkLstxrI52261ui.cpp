
        
        #include <google/protobuf/generated_message_util.h>
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
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
    
      // -----------------------------------------------------------------
  // Invoke internalBuildGeneratedFileFrom() to build the file.
  printer->Print(
    'com.google.protobuf.Descriptors.FileDescriptor\n'
    '  .internalBuildGeneratedFileFrom(descriptorData,\n');
  printer->Print(
    '    new com.google.protobuf.Descriptors.FileDescriptor[] {\n');
    }
    
      desired_output_for_decode = '_AbcdefghIJ';
  expected = string('\xCA\x0', 2);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    void OneofGenerator::GenerateClearFunctionDeclaration(io::Printer* printer) {
  printer->Print(
      variables_,
      '/**\n'
      ' * Clears whatever value was set for the oneof '$name$'.\n'
      ' **/\n'
      'void $owning_message_class$_Clear$capitalized_name$OneOfCase($owning_message_class$ *message);\n');
}
    
    
Status DBImpl::InstallCompactionResults(CompactionState* compact) {
  mutex_.AssertHeld();
  Log(options_.info_log,  'Compacted %d@%d + %d@%d files => %lld bytes',
      compact->compaction->num_input_files(0),
      compact->compaction->level(),
      compact->compaction->num_input_files(1),
      compact->compaction->level() + 1,
      static_cast<long long>(compact->total_bytes));
    }
    
    TEST(DBTest, IterSmallAndLargeMix) {
  ASSERT_OK(Put('a', 'va'));
  ASSERT_OK(Put('b', std::string(100000, 'b')));
  ASSERT_OK(Put('c', 'vc'));
  ASSERT_OK(Put('d', std::string(100000, 'd')));
  ASSERT_OK(Put('e', std::string(100000, 'e')));
    }
    
      // When start user key is prefix of limit user key
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foobar', 200, kTypeValue)));
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
      // Fragment the record if necessary and emit it.  Note that if slice
  // is empty, we still want to iterate once to emit a single
  // zero-length record
  Status s;
  bool begin = true;
  do {
    const int leftover = kBlockSize - block_offset_;
    assert(leftover >= 0);
    if (leftover < kHeaderSize) {
      // Switch to a new block
      if (leftover > 0) {
        // Fill the trailer (literal below relies on kHeaderSize being 7)
        assert(kHeaderSize == 7);
        dest_->Append(Slice('\x00\x00\x00\x00\x00\x00', leftover));
      }
      block_offset_ = 0;
    }
    }
    
    #endif  // STORAGE_LEVELDB_DB_LOG_WRITER_H_

    
    namespace leveldb {
    }
    
     public:
  // Create a new SkipList object that will use 'cmp' for comparing keys,
  // and will allocate memory using '*arena'.  Objects allocated in the arena
  // must remain allocated for the lifetime of the skiplist object.
  explicit SkipList(Comparator cmp, Arena* arena);
    
      SequenceNumber sequence_number() const { return sequence_number_; }
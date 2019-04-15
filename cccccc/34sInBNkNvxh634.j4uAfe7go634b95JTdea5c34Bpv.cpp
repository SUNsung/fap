
        
        #include <memory>
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #include <ostream>
#include <stdio.h>
#include <string>
#include <utility>
    
    // ----
// Author: lar@google.com (Laramie Leavitt)
//
// These tests are really compile time tests.
// If you try to step through this in a debugger
// you will not see any evaluations, merely that
// value is assigned true or false sequentially.
    
        for (int i = 0; i < dataset.payload_size(); i++) {
      message->ParseFromString(dataset.payload(i));
      Proto3DataStripper stripper;
      stripper.StripMessage(message);
      dataset.set_payload(i, message->SerializeAsString());
    }
    
      static void StripMessage(const Descriptor *old_message,
                           DescriptorProto *new_message) {
    for (int i = new_message->mutable_field()->size() - 1; i >= 0; i--) {
      if (old_message->field(i)->type() == FieldDescriptor::TYPE_GROUP ||
          IsMessageSet(old_message->field(i)->message_type())) {
        new_message->mutable_field()->DeleteSubrange(i, 1);
      }
    }
    for (int i = new_message->mutable_extension()->size() - 1; i >= 0; i--) {
      auto field_type_name = new_message->mutable_extension(i)->type_name();
      if (old_message->extension(i)->type() == FieldDescriptor::TYPE_GROUP ||
          IsMessageSet(old_message->extension(i)->containing_type()) ||
          IsMessageSet(old_message->extension(i)->message_type())) {
        new_message->mutable_extension()->DeleteSubrange(i, 1);
      }
    }
    for (int i = 0; i < new_message->mutable_nested_type()->size(); i++) {
      StripMessage(old_message->nested_type(i),
                   new_message->mutable_nested_type(i));
    }
  }
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
    // Print contents of a log file. (*func)() is called on every record.
Status PrintLogContents(Env* env, const std::string& fname,
                        void (*func)(uint64_t, Slice, WritableFile*),
                        WritableFile* dst) {
  SequentialFile* file;
  Status s = env->NewSequentialFile(fname, &file);
  if (!s.ok()) {
    return s;
  }
  CorruptionReporter reporter;
  reporter.dst_ = dst;
  log::Reader reader(file, &reporter, true, 0);
  Slice record;
  std::string scratch;
  while (reader.ReadRecord(&record, &scratch)) {
    (*func)(reader.LastRecordOffset(), record, dst);
  }
  delete file;
  return Status::OK();
}
    
        for (size_t i = 0; i < tables_.size(); i++) {
      // TODO(opt): separate out into multiple levels
      const TableInfo& t = tables_[i];
      edit_.AddFile(0, t.meta.number, t.meta.file_size,
                    t.meta.smallest, t.meta.largest);
    }
    
    class MemTable;
    
      void PrintEnvironment() {
    fprintf(stderr, 'Kyoto Cabinet:    version %s, lib ver %d, lib rev %d\n',
            kyotocabinet::VERSION, kyotocabinet::LIBVER, kyotocabinet::LIBREV);
    }
    
    #include <vector>
#include <memory>
    
    
    {  // Set m_lr accordingly for all 'call' flavors used
  switch (dinfo.opcode_name()) {
    case OpcodeNames::op_bl:
    case OpcodeNames::op_bcctrl:
      m_lr = true;
      break;
    default:
      m_lr = false;
      break;
  }
}
    
      typedef std::pair<const char*, std::string> InfoEntry;
  typedef std::vector<InfoEntry> InfoVec;
    
      explicit OutputFile(const String& filename);
  virtual ~OutputFile();
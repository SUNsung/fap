
        
        // Create a Shell and returns its routing id.
IPC_SYNC_MESSAGE_ROUTED2_1(ShellViewHostMsg_CreateShell,
                           std::string /* url */,
                           base::DictionaryValue /* manifest */,
                           int /* result */)
    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
    #include 'base/memory/weak_ptr.h'
    
    
    {  gtk_widget_show(menu_item_);
  g_object_ref_sink(G_OBJECT(menu_item_));
} 
    
    bool NwClipboardReadAvailableTypesFunction::RunNWSync(base::ListValue* response, std::string* error) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  bool contains_filenames;
  std::vector<base::string16> types;
  clipboard->ReadAvailableTypes(ui::CLIPBOARD_TYPE_COPY_PASTE, &types, &contains_filenames);
  for(std::vector<base::string16>::iterator it = types.begin(); it != types.end(); it++) {
    if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeText)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_TEXT))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeHTML)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_HTML))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeRTF)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_RTF))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypePNG)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_PNG))));
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_JPEG))));
    }
  }
  return true;
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.allocateId', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjAllocateIdFunction);
};
    
    void NwDesktopCaptureMonitor::OnSourceThumbnailChanged(DesktopMediaList* list, int index) {
    std::string base64;
    }
    
    bool AnyMetadata::InternalIs(const Descriptor* descriptor) const {
  const string type_url = type_url_->GetNoArena();
  string full_name;
  if (!ParseAnyTypeUrl(type_url, &full_name)) {
    return false;
  }
  return full_name == descriptor->full_name();
}
    
      virtual bool Generate(const FileDescriptor* file, const string& parameter,
                        GeneratorContext* context, string* error) const {
    file->CopyTo(file_);
    return true;
  }
    
    
    {
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    // Get the name of a service's Java class without package name prefix.
string ClassNameWithoutPackage(const ServiceDescriptor* descriptor,
                               bool immutable) {
  string full_name = StripPackageName(descriptor->full_name(),
                                      descriptor->file());
  // We don't allow nested service definitions.
  GOOGLE_CHECK(full_name.find('.') == string::npos);
  return full_name;
}
    
    
    {  printer->Print(
      variables_,
      'int32_t $owning_message_class$_$capitalized_name$_RawValue($owning_message_class$ *message) {\n'
      '  GPBDescriptor *descriptor = [$owning_message_class$ descriptor];\n'
      '  GPBFieldDescriptor *field = [descriptor fieldWithNumber:$field_number_name$];\n'
      '  return GPBGetMessageInt32Field(message, field);\n'
      '}\n'
      '\n'
      'void Set$owning_message_class$_$capitalized_name$_RawValue($owning_message_class$ *message, int32_t value) {\n'
      '  GPBDescriptor *descriptor = [$owning_message_class$ descriptor];\n'
      '  GPBFieldDescriptor *field = [descriptor fieldWithNumber:$field_number_name$];\n'
      '  GPBSetInt32IvarWithFieldInternal(message, field, value, descriptor.file.syntax);\n'
      '}\n'
      '\n');
}
    
    #include <google/protobuf/stubs/common.h>
    
    
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
      // Recover in the order in which the logs were generated
  std::sort(logs.begin(), logs.end());
  for (size_t i = 0; i < logs.size(); i++) {
    s = RecoverLogFile(logs[i], (i == logs.size() - 1), save_manifest, edit,
                       &max_sequence);
    if (!s.ok()) {
      return s;
    }
    }
    
    namespace leveldb {
    }
    
        db_->ReleaseSnapshot(s1);
    ASSERT_EQ('v2', Get('foo', s2));
    ASSERT_EQ('v4', Get('foo'));
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string TableFileName(const std::string& dbname, uint64_t number);
    
    #include <stdio.h>
#include 'leveldb/dumpfile.h'
#include 'leveldb/env.h'
#include 'leveldb/status.h'
    
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
    
    
    {
    {}  // end namespace internal
}  // end namespace benchmark
    
      BENCHMARK_NORETURN ~CheckHandler() BENCHMARK_NOEXCEPT_OP(false) {
    log_ << std::endl;
    CallAbortHandler();
  }
    
    
    {  fflush(stdout);
  // Restores the text color.
  SetConsoleTextAttribute(stdout_handle, old_color_attrs);
#else
  const char* color_code = GetPlatformColorCode(color);
  if (color_code) out << FormatString('\033[0;3%sm', color_code);
  out << FormatString(fmt, args) << '\033[m';
#endif
}
    
    // Find the coefficient for the high-order term in the running time, by
// minimizing the sum of squares of relative error.
//   - n          : Vector containing the size of the benchmark tests.
//   - time       : Vector containing the times for the benchmark tests.
//   - complexity : If different than oAuto, the fitting curve will stick to
//                  this one. If it is oAuto, it will be calculated the best
//                  fitting curve.
LeastSq MinimalLeastSq(const std::vector<int>& n,
                       const std::vector<double>& time, const BigO complexity) {
  CHECK_EQ(n.size(), time.size());
  CHECK_GE(n.size(), 2);  // Do not compute fitting curve is less than two
                          // benchmark runs are given
  CHECK_NE(complexity, oNone);
    }
    
    void Increment(UserCounters *l, UserCounters const& r) {
  // add counters present in both or just in *l
  for (auto &c : *l) {
    auto it = r.find(c.first);
    if (it != r.end()) {
      c.second.value = c.second + it->second;
    }
  }
  // add counters present in r, but not in *l
  for (auto const &tc : r) {
    auto it = l->find(tc.first);
    if (it == l->end()) {
      (*l)[tc.first] = tc.second;
    }
  }
}
    
    
    {
    {
    {
    {
    {  std::vector<CanFrame> frames;
  int32_t num = 0;
  CanFrame frame;
  // frame.id = 0x60;
  // frame.len = 8;
  // frame.data[0] = 0;
  // frames.push_back(frame);
  // num = 1;
  EXPECT_EQ(hermes_can.Start(), ErrorCode::OK);
  EXPECT_EQ(hermes_can.Receive(&frames, &num), ErrorCode::OK);
}
*/
}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
    #include 'gtest/gtest.h'
    
    TEST(ByteTest, SetBit) {
  unsigned char byte_value = 0xFF;
  Byte value(&byte_value);
  value.set_bit_0(1);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_bit_0(7);
  EXPECT_EQ(0x7D, value.get_byte());
  value.set_bit_1(7);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_value(0x77);
  value.set_bit_1(0);
  EXPECT_EQ(0x77, value.get_byte());
    }
    
    const int32_t CAN_FRAME_SIZE = 8;
const int32_t MAX_CAN_SEND_FRAME_LEN = 1;
const int32_t MAX_CAN_RECV_FRAME_LEN = 10;
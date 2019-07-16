
        
        #include 'tensorflow/core/framework/op.h'
    
    REGISTER_OP('Invalid')
    .Attr('invalid attr: int32')  // invalid since the name has a space.
    .Doc(R'doc(
An op to test that invalid ops do not successfully generate invalid python code.
)doc');
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    namespace stream_executor {
namespace host {
    }
    }
    
    uint64 HostTimer::Nanoseconds() const {
  return duration_cast<std::chrono::nanoseconds>(duration_).count();
}
    
      // Actually starts (rather than enqueues starting) the timer.
  void StartNow();
    
    
    {  // Indicates a preference for equal amounts of L1 cache and shared memory.
  kPreferEqual,
};
    
    
    {  // Cache the options for any kind of descriptor.
  // Descriptor pointers are owned by the DescriptorPool above.
  // Python objects are owned by the map.
  std::unordered_map<const void*, PyObject*>* descriptor_options;
} PyDescriptorPool;
    
    std::string JSOneofIndex(const OneofDescriptor* oneof) {
  int index = -1;
  for (int i = 0; i < oneof->containing_type()->oneof_decl_count(); i++) {
    const OneofDescriptor* o = oneof->containing_type()->oneof_decl(i);
    // If at least one field in this oneof is not JSPB-ignored, count the oneof.
    for (int j = 0; j < o->field_count(); j++) {
      const FieldDescriptor* f = o->field(j);
      if (!IgnoreField(f)) {
        index++;
        break;  // inner loop
      }
    }
    if (o == oneof) {
      break;
    }
  }
  return StrCat(index);
}
    
      // Generate definitions for all message classes and enums in all files,
  // processing the files in dependence order.
  void GenerateFilesInDepOrder(
      const GeneratorOptions& options, io::Printer* printer,
      const std::vector<const FileDescriptor*>& file) const;
  // Helper for above.
  void GenerateFileAndDeps(const GeneratorOptions& options,
                           io::Printer* printer, const FileDescriptor* root,
                           std::set<const FileDescriptor*>* all_files,
                           std::set<const FileDescriptor*>* generated) const;
    
    const char* EpsCopyInputStream::ReadStringFallback(const char* ptr, int size,
                                                   std::string* s) {
  s->clear();
  // TODO(gerbens) assess security. At the moment its parity with
  // CodedInputStream but it allows a payload to reserve large memory.
  if (PROTOBUF_PREDICT_TRUE(size <= buffer_end_ - ptr + limit_)) {
    s->reserve(size);
  }
  return AppendStringFallback(ptr, size, s);
}
    
      std::pair<const char*, bool> DoneFallback(const char* ptr, int d);
  const char* Next(int overrun, int d);
  const char* SkipFallback(const char* ptr, int size);
  const char* AppendStringFallback(const char* ptr, int size, std::string* str);
  const char* ReadStringFallback(const char* ptr, int size, std::string* str);
    
      // Get the number of cleared objects that are currently being kept
  // around for reuse.
  int ClearedCount() const;
  // Add an element to the pool of cleared objects, passing ownership to
  // the RepeatedPtrField.  The element must be cleared prior to calling
  // this method.
  //
  // This method cannot be called when the repeated field is on an arena or when
  // |value| is; both cases will trigger a GOOGLE_DCHECK-failure.
  void AddCleared(Element* value);
  // Remove a single element from the cleared pool and return it, passing
  // ownership to the caller.  The element is guaranteed to be cleared.
  // Requires:  ClearedCount() > 0
  //
  //
  // This method cannot be called when the repeated field is on an arena; doing
  // so will trigger a GOOGLE_DCHECK-failure.
  Element* ReleaseCleared();
    
    TEST(MessageDifferencerTest, TreatRepeatedFieldAsSetWithIgnoredFields) {
  protobuf_unittest::TestDiffMessage msg1;
  protobuf_unittest::TestDiffMessage msg2;
  TextFormat::MergeFromString('rm { a: 11\n b: 12 }', &msg1);
  TextFormat::MergeFromString('rm { a: 11\n b: 13 }', &msg2);
  util::MessageDifferencer differ;
  differ.TreatAsSet(GetFieldDescriptor(msg1, 'rm'));
  differ.AddIgnoreCriteria(new TestIgnorer);
  EXPECT_TRUE(differ.Compare(msg1, msg2));
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
    
    GBool PSTokenizer::getToken(char *buf, int size, int *length) {
  GBool comment, backslash;
  int c;
  int i;
    }
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006 Scott Turner <scotty1024@mac.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
      if (isPage) {
    // cropBox can not be bigger than mediaBox
    if (cropBox.x2 - cropBox.x1 > mediaBox.x2 - mediaBox.x1)
    {
      cropBox.x1 = mediaBox.x1;
      cropBox.x2 = mediaBox.x2;
    }
    if (cropBox.y2 - cropBox.y1 > mediaBox.y2 - mediaBox.y1)
    {
      cropBox.y1 = mediaBox.y1;
      cropBox.y2 = mediaBox.y2;
    }
  }
    
    class PageLabelInfo {
public:
  PageLabelInfo(Object *tree, int numPages);
  ~PageLabelInfo();
  GBool labelToIndex(GooString *label, int *index);
  GBool indexToLabel(int index, GooString *label);
    }
    
    
    {  if (windowParams.type == MediaWindowParameters::windowFloating) {
    Object winDict;
    if (obj->dictLookup('F',&winDict)->isDict()) {
      windowParams.parseFWParams(&winDict);
    }
    winDict.free();
  }
}
    
    
    {  if (!(core = (WinPDFCore *)doc->getGUIData()) ||
      !(password = core->getPassword())) {
    return NULL;
  }
  return new StandardAuthData(password, password->copy());
#else
  return NULL;
#endif
}
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
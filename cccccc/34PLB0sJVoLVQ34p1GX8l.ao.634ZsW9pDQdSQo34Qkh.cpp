
        
          // DesktopMediaListObserver overrides.
  void OnSourceAdded(int index) override;
  void OnSourceRemoved(int index) override;
  void OnSourceMoved(int old_index, int new_index) override;
  void OnSourceNameChanged(int index) override;
  void OnSourceThumbnailChanged(int index) override;
  bool OnRefreshFinished() override;
    
      AcceleratorCallbackMap accelerator_callback_map_;
    
    
    {  content::WebContents* web_contents_;  // weak
  SavePageCallback callback_;
};
    
    
    {}  // namespace atom
    
    #if defined(OS_WIN)
StringType GetWaitEventName(base::ProcessId pid);
    
    MenuModelAdapter::MenuModelAdapter(AtomMenuModel* menu_model)
  : views::MenuModelAdapter(menu_model),
    menu_model_(menu_model) {
}
    
    #ifndef ATOM_BROWSER_UI_VIEWS_NATIVE_FRAME_VIEW_H_
#define ATOM_BROWSER_UI_VIEWS_NATIVE_FRAME_VIEW_H_
    
      /// Access an array element (zero based index ).
  /// If the array contains less than index element, then null value are
  /// inserted
  /// in the array so that its size is index+1.
  /// (You may need to say 'value[0u]' to get your compiler to distinguish
  ///  this from the operator[] which takes a string.)
  Value& operator[](ArrayIndex index);
    
    TEST(AnyTest, TestIs) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  ASSERT_TRUE(any.ParseFromString(any.SerializeAsString()));
  EXPECT_TRUE(any.Is<protobuf_unittest::TestAny>());
  EXPECT_FALSE(any.Is<google::protobuf::Any>());
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Generates Java code for a given .proto file.
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_GENERATOR_FACTORY_H__

    
    void ImmutableLazyMessageFieldGenerator::
GenerateSerializedSizeCode(io::Printer* printer) const {
  printer->Print(variables_,
    'if ($get_has_field_bit_message$) {\n'
    '  size += com.google.protobuf.CodedOutputStream\n'
    '    .computeLazyFieldSize($number$, $name$_);\n'
    '}\n');
}
    
    
    {  if (rv == 0) {
    return FutexResult::AWOKEN;
  } else {
    switch(errno) {
      case ETIMEDOUT:
        assert(timeout != nullptr);
        return FutexResult::TIMEDOUT;
      case EINTR:
        return FutexResult::INTERRUPTED;
      case EWOULDBLOCK:
        return FutexResult::VALUE_CHANGED;
      default:
        assert(false);
        // EINVAL, EACCESS, or EFAULT.  EINVAL means there was an invalid
        // op (should be impossible) or an invalid timeout (should have
        // been sanitized by timeSpecFromTimePoint).  EACCESS or EFAULT
        // means *addr points to invalid memory, which is unlikely because
        // the caller should have segfaulted already.  We can either
        // crash, or return a value that lets the process continue for
        // a bit. We choose the latter. VALUE_CHANGED probably turns the
        // caller into a spin lock.
        return FutexResult::VALUE_CHANGED;
    }
  }
}
    
    #include <folly/Chrono.h>
#include <folly/portability/GTest.h>
#include <folly/portability/Time.h>
    
    
    
      size_t i = nextAlignedIndex(haystack.data());
  for (; i < haystack.size(); i += 16) {
    ret = scanHaystackBlock<true>(haystack, needles, i);
    if (ret != std::string::npos) {
      return ret;
    }
  }
    
    
    {    // An object containing some of these keys:
    //   'key_errors' -- {'key': 'description of error looking up said key'}
    //   'error' -- why did we fail to parse this value?
    //   'value' -- a copy of the input causing the error, and
    //   'nested' -- {'key' or integer for arrays: <another errors_ object>}
    //
    // 'nested' will contain identically structured objects with keys (array
    // indices) identifying the origin of the errors.  Of course, 'input'
    // would no longer refer to the whole input, but to a part.
    folly::dynamic errors_;
    // We only materialize errors_ sub-objects when needed. This stores keys
    // for unmaterialized errors, from outermost to innermost.
    std::vector<const folly::dynamic*> unmaterializedSubErrorKeys_;
    // Materialized errors, from outermost to innermost
    std::vector<folly::dynamic*> subErrors_;  // Point into errors_
  };
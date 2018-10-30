
        
        void AddFile(const string& filename, const string& data) {
  GOOGLE_CHECK_OK(File::SetContents(TestTempDir() + '/' + filename, data,
                             true));
}
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    
    {
    {    printer->Print(' * <pre>\n');
    for (int i = 0; i < lines.size(); i++) {
      // Most lines should start with a space.  Watch out for lines that start
      // with a /, since putting that right after the leading asterisk will
      // close the comment.
      if (!lines[i].empty() && lines[i][0] == '/') {
        printer->Print(' * $line$\n', 'line', lines[i]);
      } else {
        printer->Print(' *$line$\n', 'line', lines[i]);
      }
    }
    printer->Print(
        ' * </pre>\n'
        ' *\n');
  }
}
    
    // Author: kenton@google.com (Kenton Varda)
    
     public:
  virtual void GenerateCFunctionDeclarations(io::Printer* printer) const;
  virtual void GenerateCFunctionImplementations(io::Printer* printer) const;
  virtual void DetermineForwardDeclarations(std::set<string>* fwd_decls) const;
    
    #if GTEST_OS_SYMBIAN
  // These are needed as the Nokia Symbian Compiler cannot decide between
  // const T& and const T* in a function template. The Nokia compiler _can_
  // decide between class template specializations for T and T*, so a
  // tr1::type_traits-like is_pointer works, and we can overload on that.
  template <typename T>
  inline void StreamHelper(internal::true_type /*is_pointer*/, T* pointer) {
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
  }
  template <typename T>
  inline void StreamHelper(internal::false_type /*is_pointer*/,
                           const T& value) {
    // See the comments in Message& operator <<(const T&) above for why
    // we need this using statement.
    using ::operator <<;
    *ss_ << value;
  }
#endif  // GTEST_OS_SYMBIAN
    
    // This helper class is used by {ASSERT|EXPECT}_NO_FATAL_FAILURE to check if a
// statement generates new fatal failures. To do so it registers itself as the
// current test part result reporter. Besides checking if fatal failures were
// reported, it only delegates the reporting to the former result reporter.
// The original result reporter is restored in the destructor.
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
class GTEST_API_ HasNewFatalFailureHelper
    : public TestPartResultReporterInterface {
 public:
  HasNewFatalFailureHelper();
  virtual ~HasNewFatalFailureHelper();
  virtual void ReportTestPartResult(const TestPartResult& result);
  bool has_new_fatal_failure() const { return has_new_fatal_failure_; }
 private:
  bool has_new_fatal_failure_;
  TestPartResultReporterInterface* original_reporter_;
    }
    
      // Creates an ANSI string from the given wide string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the ANSI string, or NULL if the
  // input is NULL.
  //
  // The returned string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static const char* Utf16ToAnsi(LPCWSTR utf16_str);
#endif
    
      tuple(const tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_), f5_(t.f5_), f6_(t.f6_), f7_(t.f7_), f8_(t.f8_), f9_(t.f9_) {}
    
    TEST(ListenersTest, DoesNotLeak) {
  Water* water = new Water;
  delete water;
}
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
    #include <string.h>
    
    
// This sample shows how to write a more complex unit test for a class
// that has multiple member functions.
//
// Usually, it's a good idea to have one test for each method in your
// class.  You don't have to do that exactly, but it helps to keep
// your tests organized.  You may also throw in additional tests as
// needed.
    
    namespace grpc {
    }
    
    MeasureInt64 RpcClientSentMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcClientSentMessagesPerRpcMeasureName,
                             'Number of messages sent per RPC', kCount);
  return measure;
}
    
      // Add the full names of registered services
  void SetServiceList(const std::vector<grpc::string>* services);
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetInt(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    #include 'collision_object_bullet.h'
#include 'space_bullet.h'
    
    
    {	_FORCE_INLINE_ btTypedConstraint *get_bt_constraint() { return constraint; }
};
#endif

    
    
    {		virtual btCollisionAlgorithm *CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &ci, const btCollisionObjectWrapper *body0Wrap, const btCollisionObjectWrapper *body1Wrap) {
			void *mem = ci.m_dispatcher1->allocateCollisionAlgorithm(sizeof(GodotRayWorldAlgorithm));
			return new (mem) GodotRayWorldAlgorithm(m_world, ci.m_manifold, ci, body0Wrap, body1Wrap, false);
		}
	};
    
    	virtual PhysicsServer::JointType get_type() const { return PhysicsServer::JOINT_HINGE; }
    
    #ifndef SLIDER_JOINT_BULLET_H
#define SLIDER_JOINT_BULLET_H
    
    #include 'register_types.h'
    
    #include 'image_etc.h'
#include 'texture_loader_pkm.h'

        
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
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__

    
    void RepeatedPrimitiveFieldGenerator::GenerateSerializedSizeCode(io::Printer* printer) {
  printer->Print(
    variables_,
    'size += $name$_.CalculateSize(_repeated_$name$_codec);\n');
}
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message);
void WriteFieldDocComment(io::Printer* printer, const FieldDescriptor* field);
void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enum_);
void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value);
void WriteServiceDocComment(io::Printer* printer,
                            const ServiceDescriptor* service);
void WriteMethodDocComment(io::Printer* printer,
                           const MethodDescriptor* method);
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
        virtual const ParamGeneratorInterface<ParamType>* BaseGenerator() const {
      return base_;
    }
    // Advance should not be called on beyond-of-range iterators
    // so no component iterators must be beyond end of range, either.
    virtual void Advance() {
      assert(!AtEnd());
      ++current$(i)_;
    }
    
    
    {  template <class Tuple>
  static GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(7, Tuple))
  ConstField(const Tuple& t) { return t.f7_; }
};
    
    // Tests factorial of negative numbers.
TEST(FactorialTest, Negative) {
  // This test is named 'Negative', and belongs to the 'FactorialTest'
  // test case.
  EXPECT_EQ(1, Factorial(-5));
  EXPECT_EQ(1, Factorial(-1));
  EXPECT_GT(Factorial(-10), 0);
    }
    
    #include <fb/visibility.h>
    
    TEST_F(YogaTest_HadOverflowTests, spacing_overflow_no_wrap_and_no_flex_children) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 10);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeInsertChild(root, child1, 1);
    }
    
    Config::~Config(void)
{
    YGConfigFree(m_config);
}
    
    
    {
    {}}
    
    namespace facebook {
    }
    
    
    {
    {
    {  static void OnLoad();
 private:
  bool attachedWithThisScope_;
};
}
}

    
    /**
 * A thread-local object is a 'global' object within a thread. This is useful
 * for writing apartment-threaded code, where nothing is actullay shared
 * between different threads (hence no locking) but those variables are not
 * on stack in local scope. To use it, just do something like this,
 *
 *   ThreadLocal<MyClass> static_object;
 *     static_object->data_ = ...;
 *     static_object->doSomething();
 *
 *   ThreadLocal<int> static_number;
 *     int value = *static_number;
 *
 * So, syntax-wise it's similar to pointers. T can be primitive types, and if
 * it's a class, there has to be a default constructor.
 */
template<typename T>
class ThreadLocal {
public:
  /**
   * Constructor that has to be called from a thread-neutral place.
   */
  ThreadLocal() :
    m_key(0),
    m_cleanup(OnThreadExit) {
    initialize();
  }
    }
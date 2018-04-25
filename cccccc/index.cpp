
        
        
    {  DISALLOW_COPY_AND_ASSIGN(GlobalShortcut);
};
    
    #include 'atom/browser/ui/atom_menu_model.h'
#include 'ui/views/controls/menu/menu_model_adapter.h'
    
    #include 'atom/browser/ui/views/frameless_view.h'
    
    class WindowListObserver {
 public:
  // Called immediately after a window is added to the list.
  virtual void OnWindowAdded(NativeWindow* window) {}
    }
    
    
    {}  // namespace mate
    
    
    {  DraggableRegion();
};
    
    // Platform-neutral implementation of a class that keeps track of observers and
// monitors keystrokes. It relays messages to the appropriate observer when a
// global shortcut has been struck by the user.
class GlobalShortcutListener {
 public:
  class Observer {
   public:
    // Called when your global shortcut (|accelerator|) is struck.
    virtual void OnKeyPressed(const ui::Accelerator& accelerator) = 0;
  };
    }
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(PrintingUIWebContentsObserver);
};
    
    namespace service_descriptor {
PyObject* NewServiceMethodsSeq(const ServiceDescriptor* descriptor);
PyObject* NewServiceMethodsByName(const ServiceDescriptor* descriptor);
}  // namespace service_descriptor
    
    void RepeatedPrimitiveFieldGenerator::GenerateCloningCode(io::Printer* printer) {
  printer->Print(variables_,
    '$name$_ = other.$name$_.Clone();\n');
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
    
    {
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
        void Dump(const std::string& _processname);
    const std::vector<std::string>& StackList() const;
    
    using folly::ByteRange;
using folly::format;
using folly::IOBuf;
using folly::StringPiece;
using std::unique_ptr;
using namespace folly::io;
    
      // Use relaxed memory order here.  If we are unlucky and happen to get
  // out-of-date data the compare_exchange_weak() call below will catch
  // it and load new data with memory_order_acq_rel.
  auto flags = storage->prefix.flags.load(std::memory_order_acquire);
  DCHECK_EQ((flags & freeFlags), freeFlags);
    
      /**
   * Check whether the chain is empty (i.e., whether the IOBufs in the
   * chain have a total data length of zero).
   *
   * This method is semantically equivalent to
   *   i->computeChainDataLength()==0
   * but may run faster because it can short-circuit as soon as it
   * encounters a buffer with length()!=0
   */
  bool empty() const;
    
    template <typename C>
struct compare_less : detail::cmp_pred<C, ordering::lt, 0> {
  using detail::cmp_pred<C, ordering::lt, 0>::cmp_pred;
};
    
    /**
 * Get the path to the current executable.
 *
 * Note that this is not reliable and not recommended in general; it may not be
 * implemented on your platform (in which case it will throw), the executable
 * might have been moved or replaced while running, and applications comprising
 * of multiple executables should use some form of configuration system to
 * find the other executables rather than relying on relative paths from one
 * to another.
 *
 * So this should only be used for tests, logging, or other innocuous purposes.
 */
path executable_path();
    
    
    {  FILE* fp = ::fopen(path_.c_str(), 'wb');
  PCHECK(fp != nullptr);
  while (size) {
    size_t n = std::min(size, bufferSize);
    for (size_t i = 0; i < n; ++i) {
      buffer[i] = rnd();
    }
    size_t written = ::fwrite(buffer, sizeof(uint32_t), n, fp);
    PCHECK(written == n);
    size -= written;
  }
  PCHECK(::fclose(fp) == 0);
}
    
        // Enqueue an empty string and wake the I/O thread.
    // The empty string ensures that the I/O thread will break out of its wait
    // loop and increment the ioThreadCounter, even if there is no other work
    // to do.
    data->getCurrentQueue()->emplace_back();
    messageReady_.notify_one();
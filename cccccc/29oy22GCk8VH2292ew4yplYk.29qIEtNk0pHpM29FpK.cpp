
    
    Base::~Base() {
}
    
    class ObjectManager;
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    MenuDelegate::~MenuDelegate() {
}
    
      if (menu_item->submenu_)
    menu_model_->InsertSubMenuAt(pos, menu_item->id(), menu_item->label_,
                                 menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->InsertItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->InsertCheckItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->InsertSeparatorAt(pos, ui::NORMAL_SEPARATOR);
    
    namespace extensions {
class AppWindowRegistry;
class ExtensionService;
    }
    
    
    {} // namespace extensions
#endif

    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.allocateId', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjAllocateIdFunction);
};
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
      // -----------------------------------------------------------------
  // Invoke InternalBuildGeneratedFileFrom() to build the file.
  printer->Print(
      'descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,\n');
  printer->Print('    new pbr::FileDescriptor[] { ');
  for (int i = 0; i < file_->dependency_count(); i++) {
    // descriptor.proto is special: we don't allow access to the generated code, but there's
    // a separately-exposed property to get at the file descriptor, specifically to allow this
    // kind of dependency.
    if (IsDescriptorProto(file_->dependency(i))) {
      printer->Print('pbr::FileDescriptor.DescriptorProtoFileDescriptor, ');
    } else {
      printer->Print(
      '$full_reflection_class_name$.Descriptor, ',
      'full_reflection_class_name',
      GetReflectionClassName(file_->dependency(i)));
    }
  }
  printer->Print('},\n'
      '    new pbr::GeneratedClrTypeInfo(');
  // Specify all the generated code information, recursively.
  if (file_->enum_type_count() > 0) {
      printer->Print('new[] {');
      for (int i = 0; i < file_->enum_type_count(); i++) {
          printer->Print('typeof($type_name$), ', 'type_name', GetClassName(file_->enum_type(i)));
      }
      printer->Print('}, ');
  }
  else {
      printer->Print('null, ');
  }
  if (file_->message_type_count() > 0) {
      printer->Print('new pbr::GeneratedClrTypeInfo[] {\n');
      printer->Indent();
      printer->Indent();
      printer->Indent();
      for (int i = 0; i < file_->message_type_count(); i++) {
          WriteGeneratedCodeInfo(file_->message_type(i), printer, i == file_->message_type_count() - 1);
      }
      printer->Outdent();
      printer->Print('\n}));\n');
      printer->Outdent();
      printer->Outdent();
  }
  else {
      printer->Print('null));\n');
  }
    
    // Strip package name from a descriptor's full name.
// For example:
//   Full name   : foo.Bar.Baz
//   Package name: foo
//   After strip : Bar.Baz
string StripPackageName(const string& full_name,
                        const FileDescriptor* file) {
  if (file->package().empty()) {
    return full_name;
  } else {
    // Strip package name
    return full_name.substr(file->package().size() + 1);
  }
}
    
    void OneofGenerator::GenerateClearFunctionDeclaration(io::Printer* printer) {
  printer->Print(
      variables_,
      '/**\n'
      ' * Clears whatever value was set for the oneof '$name$'.\n'
      ' **/\n'
      'void $owning_message_class$_Clear$capitalized_name$OneOfCase($owning_message_class$ *message);\n');
}
    
    static inline int internalInflateInit2(
    z_stream* zcontext, GzipInputStream::Format format) {
  int windowBitsFormat = 0;
  switch (format) {
    case GzipInputStream::GZIP: windowBitsFormat = 16; break;
    case GzipInputStream::AUTO: windowBitsFormat = 32; break;
    case GzipInputStream::ZLIB: windowBitsFormat = 0; break;
  }
  return inflateInit2(zcontext, /* windowBits */15 | windowBitsFormat);
}
    
    #include <cstdio>
#include <cstring>
#include <limits>
#include <string>
    
      Type type_;
    
    BENCHMARK(skip_overhead, iter) {
  auto prev = FLAGS_minloglevel;
  FLAGS_minloglevel = 2;
    }
    
    namespace folly {
    }
    
    template <
    class Iterator = const char*,
    class Base = folly::Range<boost::u8_to_u32_iterator<Iterator>>>
class UTF8Range : public Base {
 public:
  /* implicit */ UTF8Range(const folly::Range<Iterator> baseRange)
      : Base(
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.begin(),
                baseRange.begin(),
                baseRange.end()),
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.end(),
                baseRange.begin(),
                baseRange.end())) {}
  /* implicit */ UTF8Range(const std::string& baseString)
      : Base(folly::Range<Iterator>(baseString)) {}
};
    
    
    {} // namespace std

    
    /**
 * VirtualExecutor implements a light-weight view onto existing Executor.
 *
 * Multiple VirtualExecutors can be backed by a single Executor.
 *
 * VirtualExecutor's destructor blocks until all tasks scheduled through it are
 * complete. Executor's destructor also blocks until all VirtualExecutors
 * backed by it are released.
 */
class VirtualExecutor : public DefaultKeepAliveExecutor {
  auto wrapFunc(Func f) {
    class FuncAndKeepAlive {
     public:
      FuncAndKeepAlive(Func&& f, VirtualExecutor* executor)
          : keepAlive_(getKeepAliveToken(executor)), f_(std::move(f)) {}
    }
    }
    }
    
    #include <folly/detail/AtFork.h>
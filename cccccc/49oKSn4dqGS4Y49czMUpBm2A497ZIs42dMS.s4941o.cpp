
        
        namespace {
struct DefaultCacheKey {
  void *Key = nullptr;
  CacheImpl::CallBacks *CBs = nullptr;
    }
    }
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
      if (clangDiag.getID() == clang::diag::err_module_not_built &&
      CurrentImport && clangDiag.getArgStdStr(0) == CurrentImport->getName()) {
    SourceLoc loc = DiagLoc;
    if (clangDiag.getLocation().isValid())
      loc = resolveSourceLocation(clangDiag.getSourceManager(),
                                  clangDiag.getLocation());
    }
    
    void InputAction::anchor() {}
    
    #include 'swift/AST/DiagnosticConsumer.h'
#include 'swift/AST/DiagnosticEngine.h'
#include 'swift/Frontend/FrontendOptions.h'
#include 'llvm/ADT/SetVector.h'
#include 'llvm/Option/ArgList.h'
#include <set>
    
      // Given directory = 'dir', base_name = 'test', number = 0,
  // extension = 'xml', returns 'dir/test.xml'. If number is greater
  // than zero (e.g., 12), returns 'dir/test_12.xml'.
  // On Windows platform, uses \ as the separator rather than /.
  static FilePath MakeFileName(const FilePath& directory,
                               const FilePath& base_name,
                               int number,
                               const char* extension);
    
    // We don't want to require the users to write TypesN<...> directly,
// as that would require them to count the length.  Types<...> is much
// easier to write, but generates horrible messages when there is a
// compiler error, as gcc insists on printing out each template
// argument, even if it has the default value (this means Types<int>
// will appear as Types<int, None, None, ..., None> in the compiler
// errors).
//
// Our solution is to combine the best part of the two approaches: a
// user would write Types<T1, ..., TN>, and Google Test will translate
// that to TypesN<T1, ..., TN> internally to make error messages
// readable.  The translation is done by the 'type' member of the
// Types template.
    
    
// This sample shows how to write a more complex unit test for a class
// that has multiple member functions.
//
// Usually, it's a good idea to have one test for each method in your
// class.  You don't have to do that exactly, but it helps to keep
// your tests organized.  You may also throw in additional tests as
// needed.
    
    size_t num_threads = 31;
size_t work_chunk  = 120;
    
    void Assembler::sthx(const Reg64& rt, MemoryRef m) {
  assertx(!m.r.disp);  // doesn't support immediate displacement
  EmitXForm(31, rn(rt), rn(m.r.base), rn(m.r.index), 407);
}
    
    
    {}
    
    
    {  auto entry = m_it.second();
  assertx(entry.isString());
  return HHVM_FN(dirname)(entry.toString());
}
    
    struct FileStreamWrapper final : Stream::Wrapper {
  static req::ptr<MemFile> openFromCache(const String& filename,
                                         const String& mode);
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  int access(const String& path, int mode) override {
    return ::access(File::TranslatePath(path).data(), mode);
  }
  int stat(const String& path, struct stat* buf) override {
    return ::stat(File::TranslatePath(path).data(), buf);
  }
  int lstat(const String& path, struct stat* buf) override {
    return ::lstat(File::TranslatePath(path).data(), buf);
  }
  int unlink(const String& path) override;
  int rename(const String& oldname, const String& newname) override;
  int mkdir(const String& path, int mode, int options) override;
  int rmdir(const String& path, int /*options*/) override {
    ERROR_RAISE_WARNING(::rmdir(File::TranslatePath(path).data()));
    return ret;
  }
  bool isNormalFileStream() const override { return true; }
    }
    
    #include 'hphp/runtime/base/directory.h'
#include 'hphp/runtime/ext/std/ext_std_file.h'
    
    
    {}

    
    /**
 * Wrapper around popen/pclose.
 */
struct Pipe : PlainFile {
  DECLARE_RESOURCE_ALLOCATION(Pipe);
    }
    
    #include 'hphp/runtime/base/http-client.h'
#include 'hphp/runtime/base/mem-file.h'
#include 'hphp/runtime/base/string-buffer.h'
    
        // output element at index 2 (third element)
    std::cout << array.at(2) << '\n';
    
        // print values
    std::cout << object << '\n';
    std::cout << null << '\n';
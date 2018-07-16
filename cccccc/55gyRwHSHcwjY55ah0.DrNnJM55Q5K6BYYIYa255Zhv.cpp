
        
          const llvm::UTF8 *SourceNext = SourceStart;
  llvm::UTF32 C;
  llvm::UTF32 *TargetStart = &C;
    
    #include 'swift/Basic/LLVM.h'
#include 'llvm/ADT/ArrayRef.h'
#include 'llvm/ADT/StringRef.h'
    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
    #include 'llvm/Support/raw_ostream.h'
    
    
    {
    {} // end namespace index
} // end namespace swift
    
    /// An abstract class for working with results.of applies.
class ResultPlan {
public:
  virtual RValue finish(SILGenFunction &SGF, SILLocation loc, CanType substType,
                        ArrayRef<ManagedValue> &directResults) = 0;
  virtual ~ResultPlan() = default;
    }
    
    
    {} // namespace extensions
    
    IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Allocate_Object,
                    int /* object id */,
                    std::string /* type name */,
                    base::DictionaryValue /* option */)
    
    
#include 'content/nw/src/api/event/event.h'
#include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/gfx/screen.h'
    
    MenuItem::~MenuItem() {
  Destroy();
}
    
    
    {  gfx::Image originImage;
  nw::Package* package = nw::InitNWPackage();
  if (nw::GetImage(package, base::FilePath::FromUTF8Unsafe(icon), &originImage)) {
    const gfx::ImageSkia* originImageSkia = originImage.ToImageSkia();
    gfx::ImageSkia resizedImageSkia = gfx::ImageSkiaOperations::CreateResizedImage(*originImageSkia,
                                                                                   skia::ImageOperations::RESIZE_GOOD,
                                                                                   gfx::Size(kIconWidth, kIconHeight));
    icon_ = gfx::Image(resizedImageSkia);
  }
}
    
    #include <vector>
    
        protected:
      ~NwScreenGetScreensFunction() override {}
      DECLARE_EXTENSION_FUNCTION('nw.Screen.getScreens', UNKNOWN)
    
    #pragma once
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.readIfNotEmpty(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
    
    {} // namespace folly

    
      ~IOThreadPoolExecutor() override;
    
    
    {  FreeDigest merge(Range<const double*>) const {
    auto start = std::chrono::steady_clock::now();
    auto finish = start + std::chrono::nanoseconds{FLAGS_digest_merge_time_ns};
    while (std::chrono::steady_clock::now() < finish) {
    }
    return FreeDigest(100);
  }
};
    
    int usleep(unsigned int ms) {
  Sleep((DWORD)(ms / 1000));
  return 0;
}
    
    inline void hazptr_stats::heavy() {
  if (HAZPTR_STATS) {
    /* atomic */ ++heavy_;
  }
}

        
        
    {}  // namespace
    
    class AutoUpdater : public mate::EventEmitter<AutoUpdater>,
                    public auto_updater::Delegate,
                    public WindowListObserver {
 public:
  static mate::Handle<AutoUpdater> Create(v8::Isolate* isolate);
    }
    
    #endif  // ATOM_BROWSER_API_ATOM_API_NET_H_

    
      int32_t weak_map_id_ = 0;
    
    void URLRequestAboutJob::Start() {
  base::ThreadTaskRunnerHandle::Get()->PostTask(
      FROM_HERE, base::BindOnce(&URLRequestAboutJob::StartAsync,
                                weak_ptr_factory_.GetWeakPtr()));
}
    
      base::WeakPtrFactory<URLRequestAboutJob> weak_ptr_factory_;
    
    void OffscreenViewProxy::SetBitmap(const SkBitmap& bitmap) {
  if (view_bounds_.width() == bitmap.width() &&
      view_bounds_.height() == bitmap.height() && observer_) {
    view_bitmap_.reset(new SkBitmap(bitmap));
    observer_->OnProxyViewPaint(view_bounds_);
  }
}
    
    // The argument separating arguments intended for the relauncher process from
// those intended for the relaunched process. '---' is chosen instead of '--'
// because CommandLine interprets '--' as meaning 'end of switches', but
// for many purposes, the relauncher process' CommandLine ought to interpret
// arguments intended for the relaunched process, to get the correct settings
// for such things as logging and the user-data-dir in case it affects crash
// reporting.
extern const CharType* kRelauncherArgSeparator;
    
    namespace atom {
    }
    
    namespace atom {
    }
    
    
    {  ~TemporaryFile() {
    unlink(path.c_str());
  }
};
    
    REGISTER_CUDA_OPERATOR(LC, LocallyConnectedOp<float, CUDAContext>);
REGISTER_CUDA_OPERATOR(
    LCGradient,
    LocallyConnectedGradientOp<float, CUDAContext>);
    
    // Deserializing an array could give back a different ArrayKind than we need,
// so we have to go with the slow case of calling a collection constructor.
NEVER_INLINE
Object createFromSerialized(CollectionType colType, APCHandle* handle) {
  auto const col = Object::attach(collections::alloc(colType));
  auto const arr = handle->toLocal();
  switch (colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    static_cast<BaseVector*>(col.get())->init(arr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    static_cast<BaseSet*>(col.get())->init(arr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    static_cast<BaseMap*>(col.get())->init(arr);
    break;
  case CollectionType::Pair:
    not_reached();
    break;
  }
  return col;
}
    
    
    {private:
  APCHandle m_handle;
  APCHandle* m_arrayHandle;
  CollectionType m_colType;
};
    
    void Config::ParseIniString(const std::string &iniStr, IniSettingMap &ini,
                            const bool constants_only /* = false */ ) {
  Config::SetParsedIni(ini, iniStr, '', constants_only, true);
}
    
    #include <sys/types.h>
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    #include 'hphp/util/perf-event.h'
    
    template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 1, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 1, rate, fillCols);
}
    
    
    {};
    
    
ExtensionManager_getQueryColumns_args::~ExtensionManager_getQueryColumns_args() throw() {
}
    
      bool operator < (const ExtensionManager_getQueryColumns_args & ) const;
    
    #include 'ExtensionManager.h'
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>
    
    namespace osquery {
namespace table_tests {
    }
    }
    
    class kernelExtensions : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};
    
    class KernelModules : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};
    
        // change element at index 1 (second element) to 'second'
    array.at(1) = 'second';
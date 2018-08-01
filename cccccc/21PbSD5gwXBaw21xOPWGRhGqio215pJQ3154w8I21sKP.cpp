
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    namespace nwapi {
    }
    
    void MenuItem::SetIcon(const std::string& icon) {
  if (icon.empty()) {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_), NULL); 
  } else {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                  gtk_image_new_from_file(icon.c_str()));
    gtk_image_menu_item_set_always_show_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                              TRUE);
  }
}
    
    
    {  int menu_id;
  if (option.GetInteger('submenu', &menu_id))
    SetSubmenu(object_manager()->GetApiObject<Menu>(menu_id));
}
    
    bool NwAppGetArgvSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
    }
    
        bool Write(ClipboardData& data) {
      switch(data.type) {
        case TYPE_TEXT:
        return WriteText(data);
        break;
        case TYPE_HTML:
        return WriteHTML(data);
        break;
        case TYPE_RTF:
        return WriteRTF(data);
        break;
        case TYPE_PNG:
        case TYPE_JPEG:
        return WriteImage(data);
        break;
        case TYPE_NONE:
        NOTREACHED();
        return false;
      }
      NOTREACHED();
      return false;
    }
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethodSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodSyncFunction);
};
    
        D3D_FEATURE_LEVEL featureLevels[] =
    {
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0,
    };
    UINT numFeatureLevels = ARRAYSIZE(featureLevels);
    
            struct glob
        {
            static __device__ __forceinline__ int atomicAdd(int* address, int val)
            {
                return ::atomicAdd(address, val);
            }
            static __device__ __forceinline__ unsigned int atomicAdd(unsigned int* address, unsigned int val)
            {
                return ::atomicAdd(address, val);
            }
            static __device__ __forceinline__ float atomicAdd(float* address, float val)
            {
            #if __CUDA_ARCH__ >= 200
                return ::atomicAdd(address, val);
            #else
                int* address_as_i = (int*) address;
                int old = *address_as_i, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_i, assumed,
                        __float_as_int(val + __int_as_float(assumed)));
                } while (assumed != old);
                return __int_as_float(old);
            #endif
            }
            static __device__ __forceinline__ double atomicAdd(double* address, double val)
            {
            #if __CUDA_ARCH__ >= 130
                unsigned long long int* address_as_ull = (unsigned long long int*) address;
                unsigned long long int old = *address_as_ull, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_ull, assumed,
                        __double_as_longlong(val + __longlong_as_double(assumed)));
                } while (assumed != old);
                return __longlong_as_double(old);
            #else
                (void) address;
                (void) val;
                return 0.0;
            #endif
            }
    }
    
    #undef cv_hal_SVD32f
#define cv_hal_SVD32f lapack_SVD32f
#undef cv_hal_SVD64f
#define cv_hal_SVD64f lapack_SVD64f
    
        static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen('libclAmdBlas.so', RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }
    }
    
    
    {        return dlsym(h, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) GetProcAddress(name)
#endif
    
      // Erase an element from the values list by splicing it to the spares list.
  void values_erase(iterator it)
  {
    *it = value_type();
    spares_.splice(spares_.begin(), values_, it);
  }
    
    
    {  return false;
}
    
    #pragma once
    
      BlockingQueueAddResult add(T item) override {
    switch (kBehavior) { // static
      case QueueBehaviorIfFull::THROW:
        if (!queue_.write(std::move(item))) {
          throw QueueFullException('LifoSemMPMCQueue full, can't add item');
        }
        break;
      case QueueBehaviorIfFull::BLOCK:
        queue_.blockingWrite(std::move(item));
        break;
    }
    return sem_.post();
  }
    
     public:
  HazptrSWMRSet() : head_(nullptr) {}
    
    namespace folly {
namespace futures {
    }
    }
    
    
    {// cpplib is an implementation of the standard library, and is the one typically
// used with the msvc compiler
#if _CPPLIB_VER
constexpr auto kCpplibVer = _CPPLIB_VER;
#else
constexpr auto kCpplibVer = 0;
#endif
} // namespace folly
    
    TEST(AlignedSysAllocator, bad_alloc_default) {
  using Alloc = AlignedSysAllocator<float>;
  Alloc const alloc(1024);
  std::vector<float, Alloc> nums(alloc);
  if (!kIsSanitize) {
    EXPECT_THROW(nums.reserve(kTooBig), std::bad_alloc);
  }
}
    
    #include <string>
    
    namespace aria2 {
    }
    
      virtual ~AbstractHttpServerResponseCommand();
    
    void AbstractOptionHandler::setCumulative(bool f)
{
  updateFlags(FLAG_CUMULATIVE, f);
}
    
    public:
  AbstractProxyResponseCommand(
      cuid_t cuid, const std::shared_ptr<Request>& req,
      const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
      const std::shared_ptr<HttpConnection>& httpConnection, DownloadEngine* e,
      const std::shared_ptr<SocketCore>& s);
    
    class AsyncNameResolverMan {
public:
  AsyncNameResolverMan();
  // Destructor does not call disableNameResolverCheck(). Application
  // must call it before the destruction of this object.
  ~AsyncNameResolverMan();
  // Enable IPv4 address lookup. default: true
  void setIPv4(bool ipv4) { ipv4_ = ipv4; }
  // Enable IPv6 address lookup. default: true
  void setIPv6(bool ipv6) { ipv6_ = ipv6; }
  // Returns true if asynchronous name resolution has been started.
  bool started() const;
  // Starts asynchronous name resolution.
  void startAsync(const std::string& hostname, DownloadEngine* e,
                  Command* command);
  // Appends resolved addresses to |res|.
  void getResolvedAddress(std::vector<std::string>& res) const;
  // Adds resolvers to DownloadEngine to check event notification.
  void setNameResolverCheck(DownloadEngine* e, Command* command);
  // Removes resolvers from DownloadEngine.
  void disableNameResolverCheck(DownloadEngine* e, Command* command);
  // Returns true if any of resolvers are added in DownloadEngine.
  bool resolverChecked() const { return resolverCheck_; }
  // Returns status value: 0 for inprogress, 1 for success and -1 for
  // failure.
  int getStatus() const;
  // Returns last error string
  const std::string& getLastError() const;
  // Resets state. Also removes resolvers from DownloadEngine.
  void reset(DownloadEngine* e, Command* command);
    }
    
      // Specify the amount of iterations that should be run by this benchmark.
  // REQUIRES: 'n > 0' and `MinTime` has not been called on this benchmark.
  //
  // NOTE: This function should only be used when *exact* iteration control is
  //   needed and never to control or limit how long a benchmark runs, where
  // `--benchmark_min_time=N` or `MinTime(...)` should be used instead.
  Benchmark* Iterations(size_t n);
    
    // Returns true if stdout appears to be a terminal that supports colored
// output, false otherwise.
bool IsColorTerminal();
    
    void Finish(UserCounters *l, double cpu_time, double num_threads) {
  for (auto &c : *l) {
    c.second.value = Finish(c.second, cpu_time, num_threads);
  }
}
    
      CPUInfo const& info = context.cpu_info;
  out << indent << FormatKV('num_cpus', static_cast<int64_t>(info.num_cpus))
      << ',\n';
  out << indent
      << FormatKV('mhz_per_cpu',
                  RoundDouble(info.cycles_per_second / 1000000.0))
      << ',\n';
  out << indent << FormatKV('cpu_scaling_enabled', info.scaling_enabled)
      << ',\n';

        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get())));
  return v8::Undefined(isolate);
}
    
    
#include 'content/nw/src/api/event/event.h'
#include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/gfx/screen.h'
    
      if (type == 'separator') {
    menu_item_ = gtk_separator_menu_item_new();
  } else {
    if (type == 'checkbox') {
      menu_item_ = gtk_check_menu_item_new();
      bool checked;
      if (option.GetBoolean('checked', &checked))
        SetChecked(checked);
    } else {
      menu_item_ = gtk_image_menu_item_new();
      std::string icon;
      if (option.GetString('icon', &icon))
        SetIcon(icon);
    }
    }
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    NwObjCallObjectMethodFunction::NwObjCallObjectMethodFunction() {
}
    
    	// Set path to vendored ConEmu config file
	PathCombine(cfgPath, exeDir, L'vendor\\conemu-maximus5\\ConEmu.xml');
    
    
    {
    {   private:
    friend class CudaModule;
    /*!
     * \brief constructor
     * \param mod module of this kernel
     * \param mangled_name mangled kernel name
     * \param signature kernel argument signature
     */
    Kernel(const std::shared_ptr<Chunk>& mod,
           const std::string& mangled_name,
           const std::vector<ArgType>& signature);
    /*! \brief mangled kernel name */
    std::string mangled_name_;
    /*! \brief kernel argument signature */
    std::vector<ArgType> signature_;
    /*! \brief module of this kernel */
    std::shared_ptr<Chunk> mod_;
    /*! \brief cached kernel function on each device */
    std::unordered_map<int, CUfunction> func_;
  };
  /*!
   * \brief CudaModule constructor
   * \param source cuda source code.
   * \param exports export symbols before mangling.
   */
  CudaModule(const char* source,
             const std::vector<std::string>& options,
             const std::vector<std::string>& exports)
      : ptr_(std::make_shared<Chunk>(source, options, exports)) {}
  /*!
   * \brief Get cuda kernal from module by name
   * \param name kernel name
   * \param signature kernel signature
   * \return shared pointer to cuda kernel
   */
  std::shared_ptr<Kernel> GetKernel(const std::string& name,
                                    const std::vector<ArgType>& signature);
};
    
    namespace mxnet {
namespace op {
    }
    }
    
    /**
 * \brief The class sets caffe's mode before doing forward/backward
 * \tparam xpu The device that the op will be executed on.
 */
class CaffeMode {
 public:
  template<typename xpu> static void SetMode();
};
    
    
    {
    {    CHECK_EQ(net_param.layer_size(), 1) << 'Protoxt ' << value <<' is more than one layer';
    default_value_ = caffe::LayerParameter(net_param.layer(0));
    has_default_ = true;
    // return self to allow chaining
    return this->self();
  }
};
    
    class CompactionIterator {
 public:
  // A wrapper around Compaction. Has a much smaller interface, only what
  // CompactionIterator uses. Tests can override it.
  class CompactionProxy {
   public:
    explicit CompactionProxy(const Compaction* compaction)
        : compaction_(compaction) {}
    }
    }
    
    Status WriteBatchBase::Delete(ColumnFamilyHandle* column_family,
                              const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return Delete(column_family, key_slice);
}
    
    #include 'rocksdb/env.h'
#include 'util/testharness.h'
    
      // close db
  for (auto handle : handles) {
    delete handle;
  }
  delete db;
    
      // if background compaction is not working, write will stall
  // because of options.level0_stop_writes_trigger
  for (int i = 1000; i < 99999; ++i) {
    db->Put(WriteOptions(), std::to_string(i),
                            std::string(500, 'a' + (i % 26)));
  }
    
    std::string kDBPath = '/tmp/rocksdb_transaction_example';
    
      // Load the options file.
  DBOptions loaded_db_opt;
  std::vector<ColumnFamilyDescriptor> loaded_cf_descs;
  s = LoadLatestOptions(kDBPath, Env::Default(), &loaded_db_opt,
                        &loaded_cf_descs);
  assert(s.ok());
  assert(loaded_db_opt.create_if_missing == db_opt.create_if_missing);
    
      // true if the compaction is a manual compaction
  bool is_manual_compaction;
    
    
    {
    {}  // namespace experimental
}  // namespace rocksdb

    
    
    {
    {}  // end namespace internal
}  // end namespace benchmark
    
    #include 'benchmark/benchmark.h'
    
    #include 'string_util.h'
#include 'timers.h'
#include 'check.h'
    
    namespace benchmark {
    }
    
    template <size_t... Indexes>
int snprintf20Numbers(int i, index_sequence<Indexes...>) {
  static_assert(20 == sizeof...(Indexes), 'Must have exactly 20 indexes');
  return snprintf(
      bigBuf.data(),
      bigBuf.size(),
      '%d %d %d %d %d'
      '%d %d %d %d %d'
      '%d %d %d %d %d'
      '%d %d %d %d %d',
      (i + static_cast<int>(Indexes))...);
}
    
      FunctionRef<int(int, char const*)> variant5 = of;
  EXPECT_EQ(100 + 5 * 19, variant5(19, 'foo'));
  FunctionRef<int(int, char const*)> const cvariant5 = of;
  EXPECT_EQ(100 + 5 * 19, cvariant5(19, 'foo'));
    
      for (unsigned i = 0; i < iter; ++i) {
    FB_LOG_EVERY_MS(INFO, 1000) << 'every 1s';
  }
    
    #include <folly/Benchmark.h>
#include <folly/FileUtil.h>
#include <folly/init/Init.h>
#include <folly/json.h>
    
    template <>
struct equal_to<folly::Uri> {
  bool operator()(const folly::Uri& a, const folly::Uri& b) const {
    return folly::uri_detail::as_tuple(a) == folly::uri_detail::as_tuple(b);
  }
};
    
    #ifdef FOLLY_TLS
/////////////// SequentialThreadId
template struct SequentialThreadId<std::atomic>;
#endif
    
    // basically shared_ptr, but only supports make_counted, and provides
// access to add_ref / release_ref with a count.  Alias not supported.
template <typename T, template <typename> class Atom = std::atomic>
class counted_ptr : public counted_ptr_base<Atom> {
 public:
  T* p_;
  counted_ptr() : p_(nullptr) {}
  counted_ptr(counted_shared_tag, T* p) : p_(p) {
    if (p_) {
      counted_ptr_base<Atom>::getRef(p_)->add_ref();
    }
  }
    }
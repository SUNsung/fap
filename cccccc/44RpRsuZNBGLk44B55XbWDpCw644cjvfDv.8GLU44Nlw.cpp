
        
        class NwCurrentWindowInternalGetZoomFunction : public NWSyncExtensionFunction {
 public:
  NwCurrentWindowInternalGetZoomFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    #include 'ui/base/models/simple_menu_model.h'
    
    aura::Window* Menu::GetActiveNativeView(content::RenderFrameHost* rfh) {
  content::WebContents* web_contents =
    content::WebContents::FromRenderFrameHost(rfh);
  if (!web_contents) {
    LOG(ERROR) << 'Menu: couldn't find WebContents';
    return NULL;
  }
  return web_contents->GetFullscreenRenderWidgetHostView()
             ? web_contents->GetFullscreenRenderWidgetHostView()
                   ->GetNativeView()
             : web_contents->GetNativeView();
}
    
    NwObjCallObjectMethodFunction::NwObjCallObjectMethodFunction() {
}
    
    #ifndef STORAGE_LEVELDB_DB_BUILDER_H_
#define STORAGE_LEVELDB_DB_BUILDER_H_
    
    namespace leveldb {
    }
    
    namespace leveldb {
    }
    
     private:
  Env* const env_;
  const std::string dbname_;
  const Options* options_;
  Cache* cache_;
    
      // Temporary storage for parsing
  int level;
  uint64_t number;
  FileMetaData f;
  Slice str;
  InternalKey key;
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    // Use the db with the following name.
static const char* FLAGS_db = NULL;
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
    class FilterPolicy {
 public:
  virtual ~FilterPolicy();
    }
    
    void ComputeJacobians(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                      const IntrinsicParams& param,  InputArray omc, InputArray Tc,
                      const int& check_cond, const double& thresh_cond, Mat& JJ2_inv, Mat& ex3);
    
      template <typename T>
  static void init_iov_base(T& base, void* addr)
  {
    base = static_cast<T>(addr);
  }
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
typedef null_fenced_block fenced_block;
#elif defined(__MACH__) && defined(__APPLE__)
typedef macos_fenced_block fenced_block;
#elif defined(__sun)
typedef solaris_fenced_block fenced_block;
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
typedef gcc_arm_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
typedef gcc_hppa_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
typedef gcc_x86_fenced_block fenced_block;
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
typedef gcc_sync_fenced_block fenced_block;
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
typedef win_fenced_block fenced_block;
#else
typedef null_fenced_block fenced_block;
#endif
    
    #include <boost/asio/detail/push_options.hpp>
    
    #include <boost/asio/detail/push_options.hpp>
    
      ~winrt_buffer_impl()
  {
  }
    
    template <typename C>
struct compare_not_equal_to : detail::cmp_pred<C, ordering::eq, 1> {
  using detail::cmp_pred<C, ordering::eq, 1>::cmp_pred;
};
    
    memory_resource* get_default_resource();
void set_default_resource(memory_resource*);
memory_resource* new_delete_resource();
    
    AsyncIOQueue::AsyncIOQueue(AsyncIO* asyncIO) : asyncIO_(asyncIO) {}
    
    path canonical_parent(const path& pth, const path& base) {
  return canonical(pth.parent_path(), base) / pth.filename();
}
    
    [[noreturn]] void usage(const char* name) {
  std::cerr << folly::format(
      'Usage: {0}\n'
      '         list all huge page sizes and their mount points\n'
      '       {0} -cp <src_file> <dest_nameprefix>\n'
      '         copy src_file to a huge page file\n',
      name);
  exit(1);
}
    
      auto canceled = aioReader.cancel();
  EXPECT_EQ(canceled.size(), ops.size() - result.size());
  EXPECT_EQ(aioReader.pending(), 0);
  EXPECT_EQ(completed, result.size());
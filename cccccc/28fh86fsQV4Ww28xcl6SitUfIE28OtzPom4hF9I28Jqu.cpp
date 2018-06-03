
        
        namespace content {
class RenderView;
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Clipboard);
};
    
    namespace nw {
    }
    
    class ObjectManager;
    
    void Menu::Insert(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.insert(begin+pos,menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_insert(GTK_MENU_SHELL(menu_), menu_item->menu_item_, pos);
}
    
    #include 'content/nw/src/api/menu/menu.h'
    
    void MenuItem::SetTooltip(const std::string& tooltip) {
  is_modified_ = true;
  tooltip_ = base::UTF8ToUTF16(tooltip);
  if (menu_)
    menu_->UpdateStates();
}
    
    class NwAppQuitFunction : public UIThreadExtensionFunction {
 public:
  NwAppQuitFunction();
    }
    
    namespace extensions {
    }
    
        // Finish and check for builder errors
    if (s.ok()) {
      s = builder->Finish();
      if (s.ok()) {
        meta->file_size = builder->FileSize();
        assert(meta->file_size > 0);
      }
    } else {
      builder->Abandon();
    }
    delete builder;
    
    Status DumpFile(Env* env, const std::string& fname, WritableFile* dst) {
  FileType ftype;
  if (!GuessType(fname, &ftype)) {
    return Status::InvalidArgument(fname + ': unknown file type');
  }
  switch (ftype) {
    case kLogFile:         return DumpLog(env, fname, dst);
    case kDescriptorFile:  return DumpDescriptor(env, fname, dst);
    case kTableFile:       return DumpTable(env, fname, dst);
    default:
      break;
  }
  return Status::InvalidArgument(fname + ': not a dump-able file type');
}
    
    // A utility routine: write 'data' to the named file and Sync() it.
extern Status WriteStringToFileSync(Env* env, const Slice& data,
                                    const std::string& fname);
    
    // Return the name of the descriptor file for the db named by
// 'dbname' and the specified incarnation number.  The result will be
// prefixed with 'dbname'.
extern std::string DescriptorFileName(const std::string& dbname,
                                      uint64_t number);
    
      Cache::Handle* handle = NULL;
  Status s = FindTable(file_number, file_size, &handle);
  if (!s.ok()) {
    return NewErrorIterator(s);
  }
    
      // Choose a location for the test database if none given with --db=<path>
  if (FLAGS_db == NULL) {
      leveldb::Env::Default()->GetTestDirectory(&default_db_path);
      default_db_path += '/dbbench';
      FLAGS_db = default_db_path.c_str();
  }
    
    #endif  // STORAGE_LEVELDB_INCLUDE_COMPARATOR_H_

    
    TEST(VersionEditTest, EncodeDecode) {
  static const uint64_t kBig = 1ull << 50;
    }
    
    #include <stddef.h>
#include <stdint.h>
#include <string>
#include <vector>
#include 'leveldb/slice.h'
#include 'util/hash.h'
    
    double Histogram::Percentile(double p) const {
  double threshold = num_ * (p / 100.0);
  double sum = 0;
  for (int b = 0; b < kNumBuckets; b++) {
    sum += buckets_[b];
    if (sum >= threshold) {
      // Scale linearly within this bucket
      double left_point = (b == 0) ? 0 : kBucketLimit[b-1];
      double right_point = kBucketLimit[b];
      double left_sum = sum - buckets_[b];
      double right_sum = sum;
      double pos = (threshold - left_sum) / (right_sum - left_sum);
      double r = left_point + (right_point - left_point) * pos;
      if (r < min_) r = min_;
      if (r > max_) r = max_;
      return r;
    }
  }
  return max_;
}
    
    static void Usage() {
  fprintf(
      stderr,
      'Usage: leveldbutil command...\n'
      '   dump files...         -- dump contents of specified files\n'
      );
}
    
    // tress
#include '../src/tree/tree_model.cc'
#include '../src/tree/tree_updater.cc'
#include '../src/tree/updater_colmaker.cc'
#include '../src/tree/updater_fast_hist.cc'
#include '../src/tree/updater_prune.cc'
#include '../src/tree/updater_refresh.cc'
#include '../src/tree/updater_sync.cc'
#include '../src/tree/updater_histmaker.cc'
#include '../src/tree/updater_skmaker.cc'
    
      delete metric;
  metric = xgboost::Metric::Create('ndcg@2');
  ASSERT_STREQ(metric->Name(), 'ndcg@2');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.3868f, 0.001f);
    
    
    {}  // namespace xgboost

    
      void PredictLeaf(DMatrix *p_fmat,
                   std::vector<bst_float> *out_preds,
                   unsigned ntree_limit) override {
    LOG(FATAL) << 'gblinear does not support prediction of leaf index';
  }
    
    #include <folly/CPortability.h>
#include <folly/Optional.h>
    
    template <class T>
class UnboundedBlockingQueue : public BlockingQueue<T> {
 public:
  virtual ~UnboundedBlockingQueue() {}
    }
    
      ~AtomicCoreCachedSharedPtr() {
    auto slots = slots_.load(std::memory_order_acquire);
    // Delete of AtomicCoreCachedSharedPtr must be synchronized, no
    // need for stlots->retire().
    if (slots) {
      delete slots;
    }
  }
    
      // Nothrow as long as swap() on the Compare type is nothrow.
  void swap(sorted_vector_set& o) {
    using std::swap;  // Allow ADL for swap(); fall back to std::swap().
    Compare& a = m_;
    Compare& b = o.m_;
    swap(a, b);
    m_.cont_.swap(o.m_.cont_);
  }
    
      EXPECT_TRUE((std::is_same<remove_cvref_t<int volatile const&>, int>::value));
  EXPECT_TRUE(
      (std::is_same<remove_cvref<int volatile const&>::type, int>::value));
    
    #include <folly/futures/Future.h>
#include <folly/Likely.h>
#include <folly/SingletonThreadLocal.h>
#include <folly/futures/ThreadWheelTimekeeper.h>
    
      int res = 0;
  bool ranLoopCallbacks;
  bool blocking = !(flags & EVLOOP_NONBLOCK);
  bool once = (flags & EVLOOP_ONCE);
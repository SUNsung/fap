
        
        #include <xgboost/logging.h>
#include <cctype>
#include <cstdio>
#include <string>
#include './io.h'
    
    /*!
 * \brief Input stream that support additional PeekRead
 *  operation, besides read.
 */
class PeekableInStream : public dmlc::Stream {
 public:
  explicit PeekableInStream(dmlc::Stream* strm)
      : strm_(strm), buffer_ptr_(0) {}
    }
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
     private:
  // try to prune off current leaf
  inline int TryPruneLeaf(RegTree &tree, int nid, int depth, int npruned) { // NOLINT(*)
    if (tree[nid].IsRoot()) return npruned;
    int pid = tree[nid].Parent();
    RegTree::NodeStat &s = tree.Stat(pid);
    ++s.leaf_child_cnt;
    if (s.leaf_child_cnt >= 2 && param_.NeedPrune(s.loss_chg, depth - 1)) {
      // need to be pruned
      tree.ChangeToLeaf(pid, param_.learning_rate * s.base_weight);
      // tail recursion
      return this->TryPruneLeaf(tree, pid, depth - 1, npruned + 2);
    } else {
      return npruned;
    }
  }
  /*! \brief do pruning of a tree */
  inline void DoPrune(RegTree &tree) { // NOLINT(*)
    int npruned = 0;
    // initialize auxiliary statistics
    for (int nid = 0; nid < tree.param.num_nodes; ++nid) {
      tree.Stat(nid).leaf_child_cnt = 0;
    }
    for (int nid = 0; nid < tree.param.num_nodes; ++nid) {
      if (tree[nid].IsLeaf()) {
        npruned = this->TryPruneLeaf(tree, nid, tree.GetDepth(nid), npruned);
      }
    }
    if (!param_.silent) {
      LOG(INFO) << 'tree pruning end, ' << tree.param.num_roots << ' roots, '
                << tree.NumExtraNodes() << ' extra nodes, ' << npruned
                << ' pruned nodes, max_depth=' << tree.MaxDepth();
    }
  }
    
        /** 
     * Called after the action has finished. It will set the 'target' to nil.
     * IMPORTANT: You should never call 'Action::stop()' manually. Instead, use: 'target->stopAction(action);'.
     */
    virtual void stop();
    
    // CatmullRom Spline formula:
Vec2 ccCardinalSplineAt(const Vec2 &p0, const Vec2 &p1, const Vec2 &p2, const Vec2 &p3, float tension, float t)
{
    float t2 = t * t;
    float t3 = t2 * t;
    
    /*
     * Formula: s(-ttt + 2tt - t)P1 + s(-ttt + tt)P2 + (2ttt - 3tt + 1)P2 + s(ttt - 2tt + t)P3 + (-2ttt + 3tt)P3 + s(ttt - tt)P4
     */
    float s = (1 - tension) / 2;
    }
    
        /** 
     * Initializes the action with a duration and an array of points.
     *
     * @param dt In seconds.
     * @param points An PointArray.
     */
    bool initWithDuration(float dt, PointArray* points);
    
    RepeatForever *RepeatForever::create(ActionInterval *action)
{
    RepeatForever *ret = new (std::nothrow) RepeatForever();
    if (ret && ret->initWithAction(action))
    {
        ret->autorelease();
        return ret;
    }
    
    delete ret;
    return nullptr;
}
    
        /** 
     * Creates the action with and X factor and a Y factor.
     * @param duration Duration time, in seconds.
     * @param sx Scale factor of x.
     * @param sy Scale factor of y.
     * @return An autoreleased ScaleBy object.
     */
    static ScaleBy* create(float duration, float sx, float sy);
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    
    {    delete action;
    return nullptr;
}
    
    struct Tile;
/**
@brief ShuffleTiles action.
@details This action make the target node shuffle with many tiles in random order.
        You can create the action by these parameters:
        duration, grid size, the random seed.
*/
class CC_DLL ShuffleTiles : public TiledGrid3DAction
{
public:
    /** 
    * @brief Create the action with grid size, random seed and duration.
    * @param duration Specify the duration of the ShuffleTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the creation success, return a pointer of ShuffleTiles action; otherwise, return nil.
    */
    static ShuffleTiles* create(float duration, const Size& gridSize, unsigned int seed);
    }
    
    
    {    /**
    @brief The callback function when ActionTween is running.
    @param value The new value of the specified key.
    @param key The key of property which should be updated.
    */
    virtual void updateTweenAction(float value, const std::string& key) = 0;
};
    
    /** @brief AtlasNode is a subclass of Node that implements the RGBAProtocol and TextureProtocol protocol.
 * It knows how to render a TextureAtlas object.
 * If you are going to render a TextureAtlas consider subclassing AtlasNode (or a subclass of AtlasNode).
 * All features from Node are valid, plus the following features:
 * - opacity and RGB colors.
 */
class CC_DLL AtlasNode : public Node, public TextureProtocol
{    
public:
	/** creates a AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render.
     *
     * @param filename The path of Atlas file.
     * @param tileWidth The width of the item.
     * @param tileHeight The height of the item.
     * @param itemsToRender The quantity of items to render.
     */
	static AtlasNode * create(const std::string& filename, int tileWidth, int tileHeight, int itemsToRender);
    }
    
      // REQUIRES: timer is running and 'SkipWithError(...)' has not been called
  //           by the current thread.
  // Stop the benchmark timer.  If not called, the timer will be
  // automatically stopped after the last iteration of the benchmark loop.
  //
  // For threaded benchmarks the PauseTiming() function only pauses the timing
  // for the current thread.
  //
  // NOTE: The 'real time' measurement is per-thread. If different threads
  // report different measurements the largest one is reported.
  //
  // NOTE: PauseTiming()/ResumeTiming() are relatively
  // heavyweight, and so their use should generally be avoided
  // within each benchmark iteration, if possible.
  void PauseTiming();
    
      LogType& GetLog() { return log_; }
    
    // Parses 'str' for a double.  If successful, writes the result to *value and
// returns true; otherwise leaves *value unchanged and returns false.
bool ParseDouble(const std::string& src_text, const char* str, double* value) {
  // Parses the environment variable as a decimal integer.
  char* end = nullptr;
  const double double_value = strtod(str, &end);  // NOLINT
    }
    
    namespace benchmark {
// NOTE: only i386 and x86_64 have been well tested.
// PPC, sparc, alpha, and ia64 are based on
//    http://peter.kuscsik.com/wordpress/?p=14
// with modifications by m3b.  See also
//    https://setisvn.ssl.berkeley.edu/svn/lib/fftw-3.0.1/kernel/cycle.h
namespace cycleclock {
// This should return the number of cycles since power-on.  Thread-safe.
inline BENCHMARK_ALWAYS_INLINE int64_t Now() {
#if defined(BENCHMARK_OS_MACOSX)
  // this goes at the top because we need ALL Macs, regardless of
  // architecture, to return the number of 'mach time units' that
  // have passed since startup.  See sysinfo.cc where
  // InitializeSystemInfo() sets the supposed cpu clock frequency of
  // macs to the number of mach time units per second, not actual
  // CPU clock frequency (which can change in the face of CPU
  // frequency scaling).  Also note that when the Mac sleeps, this
  // counter pauses; it does not continue counting, nor does it
  // reset to zero.
  return mach_absolute_time();
#elif defined(BENCHMARK_OS_EMSCRIPTEN)
  // this goes above x86-specific code because old versions of Emscripten
  // define __x86_64__, although they have nothing to do with it.
  return static_cast<int64_t>(emscripten_get_now() * 1e+6);
#elif defined(__i386__)
  int64_t ret;
  __asm__ volatile('rdtsc' : '=A'(ret));
  return ret;
#elif defined(__x86_64__) || defined(__amd64__)
  uint64_t low, high;
  __asm__ volatile('rdtsc' : '=a'(low), '=d'(high));
  return (high << 32) | low;
#elif defined(__powerpc__) || defined(__ppc__)
  // This returns a time-base, which is not always precisely a cycle-count.
  int64_t tbl, tbu0, tbu1;
  asm('mftbu %0' : '=r'(tbu0));
  asm('mftb  %0' : '=r'(tbl));
  asm('mftbu %0' : '=r'(tbu1));
  tbl &= -static_cast<int64_t>(tbu0 == tbu1);
  // high 32 bits in tbu1; low 32 bits in tbl  (tbu0 is garbage)
  return (tbu1 << 32) | tbl;
#elif defined(__sparc__)
  int64_t tick;
  asm('.byte 0x83, 0x41, 0x00, 0x00');
  asm('mov   %%g1, %0' : '=r'(tick));
  return tick;
#elif defined(__ia64__)
  int64_t itc;
  asm('mov %0 = ar.itc' : '=r'(itc));
  return itc;
#elif defined(COMPILER_MSVC) && defined(_M_IX86)
  // Older MSVC compilers (like 7.x) don't seem to support the
  // __rdtsc intrinsic properly, so I prefer to use _asm instead
  // when I know it will work.  Otherwise, I'll use __rdtsc and hope
  // the code is being compiled with a non-ancient compiler.
  _asm rdtsc
#elif defined(COMPILER_MSVC)
  return __rdtsc();
#elif defined(BENCHMARK_OS_NACL)
  // Native Client validator on x86/x86-64 allows RDTSC instructions,
  // and this case is handled above. Native Client validator on ARM
  // rejects MRC instructions (used in the ARM-specific sequence below),
  // so we handle it here. Portable Native Client compiles to
  // architecture-agnostic bytecode, which doesn't provide any
  // cycle counter access mnemonics.
    }
    }
    }
    
    BenchmarkReporter::~BenchmarkReporter() {}
    
    
    {    auto ka2 = ka.copy();
    EXPECT_TRUE(ka);
    EXPECT_TRUE(ka2);
    EXPECT_EQ(&exec, ka2.get());
    EXPECT_EQ(2, exec.refCount);
  }
    
    
    {  FLAGS_minloglevel = prev;
}
    
    template <typename E>
auto exceptionStr(const E& e) -> typename std::
    enable_if<!std::is_base_of<std::exception, E>::value, fbstring>::type {
#ifdef FOLLY_HAS_RTTI
  return demangle(typeid(e));
#else
  (void)e;
  return 'Exception (no RTTI available) ';
#endif
}
    
    struct Options {
  /**
   * ZLIB: default option -- write a zlib wrapper as documented in RFC 1950.
   *
   * GZIP: write a simple gzip header and trailer around the compressed data
   * instead of a zlib wrapper.
   *
   * RAW: deflate will generate raw deflate data with no zlib header or
   * trailer, and will not compute a check value.
   *
   * AUTO: enable automatic header detection for decoding gzip or zlib data.
   * For deflation, ZLIB will be used.
   */
  enum class Format { ZLIB, GZIP, RAW, AUTO };
    }

        
        bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv) {
  const base::CommandLine::StringType dashdash(2, '-');
  bool block_args = false;
  for (int i = 0; i < argc; ++i) {
    if (argv[i] == dashdash)
      break;
    if (block_args) {
      return false;
    } else if (IsUrlArg(argv[i])) {
      block_args = true;
    }
  }
  return true;
}
    
    void BrowserWindow::UpdateDraggableRegions(
    content::RenderFrameHost* rfh,
    const std::vector<DraggableRegion>& regions) {
  if (window_->has_frame())
    return;
  static_cast<NativeWindowViews*>(window_.get())
      ->UpdateDraggableRegions(DraggableRegionsToSkRegion(regions));
}
    
     protected:
  Screen(v8::Isolate* isolate, display::Screen* screen);
  ~Screen() override;
    
    #ifndef ATOM_BROWSER_API_ATOM_API_TRAY_H_
#define ATOM_BROWSER_API_ATOM_API_TRAY_H_
    
     private:
  scoped_refptr<AtomBrowserContext> browser_context_;
    
    #include <string>
    
    
    {}  // namespace atom

    
    
    {}  // namespace atom
    
    // The browser want to open a file.
IPC_MESSAGE_CONTROL1(ShellViewMsg_Open,
                     std::string /* file name */)
    
    #include <string>
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Base);
};
    
    std::string Clipboard::GetText() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  base::string16 text;
  clipboard->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
  return base::UTF16ToUTF8(text);
}
    
    #endif //CONTENT_NW_SRC_API_EVENT_EVENT_H_

    
    MenuItem::~MenuItem() {
  Destroy();
}
    
      std::string icon;
  if (option.GetString('icon', &icon) && !icon.empty())
    SetIcon(icon);
    
    
    {      return true;
    }
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallObjectMethod(render_frame_host(), id, type, method, *arguments);
  return true;
}
    
    
    {  vector<int> y_shape(in[0].dims().begin(), in[0].dims().end());
  CAFFE_ENFORCE_LE(canonical_axis + 1, y_shape.size());
  y_shape.resize(canonical_axis + 1);
  y_shape[canonical_axis] = N;
  out[0] = CreateTensorShape(y_shape, in[0].data_type());
  return out;
}
    
    <summary> <b>Example</b> </summary>
    
    #include 'caffe2/operators/glu_op.h'
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    
struct NULLDeleter {template<typename T> void operator()(T*){}};
    
    #ifdef CHECK_NEXT_TIMING
#define IF_CHECK_TIMING(__t$) __t$
#else
#define IF_CHECK_TIMING(__t$)
#endif
    
    // DO_BIND_DISPATCH comes from static_operator_common.h
Operator *CaffeLossProp::CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
  std::vector<int> out_type, aux_type;
  std::vector<TShape> out_shape, aux_shape;
  out_type.resize(this->ListOutputs().size());
  out_shape.resize(this->ListOutputs().size());
  aux_type.resize(this->ListAuxiliaryStates().size());
  aux_shape.resize(this->ListAuxiliaryStates().size());
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0]);
}
    
    #if defined(__CUDACC__)
    // Sync cpu diff to gpu diff
    for (uint32_t i = 0; i < bot_.size(); ++i)
      bot_[i]->gpu_diff();
    
    TRACE_SET_MOD(asmppc64);
    
    #include 'hphp/runtime/base/apc-object.h'
#include 'hphp/runtime/base/apc-array.h'
#include 'hphp/runtime/base/apc-stats.h'
#include 'hphp/runtime/base/object-data.h'
#include 'hphp/runtime/base/type-object.h'
#include 'hphp/runtime/ext/apc/ext_apc.h'
#include 'hphp/runtime/base/collections.h'
#include 'hphp/runtime/ext/collections/ext_collections-map.h'
#include 'hphp/runtime/ext/collections/ext_collections-set.h'
#include 'hphp/runtime/ext/collections/ext_collections-vector.h'
#include 'hphp/runtime/base/data-walker.h'
    
    //////////////////////////////////////////////////////////////////////
    
    ALWAYS_INLINE
APCLocalArray* APCLocalArray::asApcArray(ArrayData* ad) {
  assertx(ad->kind() == kApcKind);
  return static_cast<APCLocalArray*>(ad);
}
    
    inline Variant ExecutionContext::invokeMethodV(
  ObjectData* obj,
  const Func* meth,
  InvokeArgs args,
  bool dynamic
) {
  // Construct variant without triggering incref.
  return Variant::attach(invokeMethod(obj, meth, args, dynamic));
}
    
    #include 'benchmark/benchmark.h'
    
    namespace benchmark {
enum LogColor {
  COLOR_DEFAULT,
  COLOR_RED,
  COLOR_GREEN,
  COLOR_YELLOW,
  COLOR_BLUE,
  COLOR_MAGENTA,
  COLOR_CYAN,
  COLOR_WHITE
};
    }
    
    // Parses a bool/Int32/string from the environment variable
// corresponding to the given Google Test flag.
bool BoolFromEnv(const char* flag, bool default_val);
int32_t Int32FromEnv(const char* flag, int32_t default_val);
double DoubleFromEnv(const char* flag, double default_val);
const char* StringFromEnv(const char* flag, const char* default_val);
    
    #include 'benchmark/benchmark.h'
    
      if (!items.empty()) {
    printer(Out, COLOR_DEFAULT, ' %*s', 18, items.c_str());
  }
    
    double Finish(Counter const& c, double cpu_time, double num_threads) {
  double v = c.value;
  if (c.flags & Counter::kIsRate) {
    v /= cpu_time;
  }
  if (c.flags & Counter::kAvgThreads) {
    v /= num_threads;
  }
  return v;
}
    
    #include <stdexcept>
    
      // Acquire a keep alive token. Should return false if keep-alive mechanism
  // is not supported.
  virtual bool keepAliveAcquire();
  // Release a keep alive token previously acquired by keepAliveAcquire().
  // Will never be called if keepAliveAcquire() returns false.
  virtual void keepAliveRelease();
    
    template <class UIntType, size_t w, size_t s, size_t r>
struct StateSize<std::subtract_with_carry_engine<UIntType, w, s, r>> {
  // [rand.eng.sub]: r * ceil(w / 32)
  using type = std::integral_constant<size_t, r*((w + 31) / 32)>;
};
    
    inline UriTuple as_tuple(const folly::Uri& k) {
  return UriTuple(
      k.scheme(),
      k.username(),
      k.password(),
      k.host(),
      k.port(),
      k.path(),
      k.query(),
      k.fragment());
}
    
    #include <folly/DefaultKeepAliveExecutor.h>
    
    void* SimpleAllocator::allocateHard() {
  // Allocate a new slab.
  mem_ = static_cast<uint8_t*>(folly::aligned_malloc(allocSize_, allocSize_));
  if (!mem_) {
    throw_exception<std::bad_alloc>();
  }
  end_ = mem_ + allocSize_;
  blocks_.push_back(mem_);
    }
    
      void reset(const std::shared_ptr<T>& p = nullptr) {
    // Allocate each Holder in a different CoreRawAllocator stripe to
    // prevent false sharing. Their control blocks will be adjacent
    // thanks to allocate_shared().
    for (auto slot : folly::enumerate(slots_)) {
      auto alloc = getCoreAllocator<Holder, kNumSlots>(slot.index);
      auto holder = std::allocate_shared<Holder>(alloc, p);
      *slot = std::shared_ptr<T>(holder, p.get());
    }
  }
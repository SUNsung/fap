
        
          // GlobalShortcutListener::Observer implementation.
  void OnKeyPressed(const ui::Accelerator& accelerator) override;
    
    // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(UnresponsiveSuppressor);
};
    
      // Returns whether current process is browser process, currently we detect it
  // by checking whether current has used V8 Lock, but it might be a bad idea.
  static inline bool IsBrowserProcess() { return v8::Locker::IsActive(); }
    
      std::unique_ptr<base::ListValue> preferences_;
    
      // Returns whether shortcut handling is currently suspended.
  bool IsShortcutHandlingSuspended() const;
    
        // Name of the source that should be shown to the user.
    base::string16 name;
    
    #endif  // CHROME_BROWSER_PRINTING_PRINT_VIEW_MANAGER_OBSERVER_H_

    
        state->preFilterType = CV_STEREO_BM_XSOBEL; //CV_STEREO_BM_NORMALIZED_RESPONSE;
    state->preFilterSize = 9;
    state->preFilterCap = 31;
    state->SADWindowSize = 15;
    state->minDisparity = 0;
    state->numberOfDisparities = numberOfDisparities > 0 ? numberOfDisparities : 64;
    state->textureThreshold = 10;
    state->uniquenessRatio = 15;
    state->speckleRange = state->speckleWindowSize = 0;
    state->trySmallerWindows = 0;
    state->roi1 = state->roi2 = cvRect(0,0,0,0);
    state->disp12MaxDiff = -1;
    
        cv::Mat M2_1 = M2(cv::Range(0,27), cv::Range(0,27));
    cv::Mat M2_2 = M2(cv::Range(0,27), cv::Range(27,120));
    cv::Mat M2_3 = M2(cv::Range(27,120), cv::Range(27,120));
    cv::Mat M2_4 = M2(cv::Range(27,120), cv::Range(0,27));
    M2.release();
    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
    #ifndef GLEXT_64_TYPES_DEFINED
    // This code block is duplicated in glxext.h, so must be protected
    #define GLEXT_64_TYPES_DEFINED
    
    #undef cv_hal_LU32f
#define cv_hal_LU32f lapack_LU32f
#undef cv_hal_LU64f
#define cv_hal_LU64f lapack_LU64f
    
      // PAGES
  const long int kPagesObjectNumber = 2;
  offsets_[kPagesObjectNumber] = offsets_.back();  // manipulation #1
  n = snprintf(buf, sizeof(buf),
               '%ld 0 obj\n'
               '<<\n'
               '  /Type /Pages\n'
               '  /Kids [ ', kPagesObjectNumber);
  if (n >= sizeof(buf)) return false;
  AppendString(buf);
  size_t pages_objsize  = strlen(buf);
  for (size_t i = 0; i < pages_.unsigned_size(); i++) {
    n = snprintf(buf, sizeof(buf),
                 '%ld 0 R ', pages_[i]);
    if (n >= sizeof(buf)) return false;
    AppendString(buf);
    pages_objsize += strlen(buf);
  }
  n = snprintf(buf, sizeof(buf),
               ']\n'
               '  /Count %d\n'
               '>>\n'
               'endobj\n', pages_.size());
  if (n >= sizeof(buf)) return false;
  AppendString(buf);
  pages_objsize += strlen(buf);
  offsets_.back() += pages_objsize;    // manipulation #2
    
    // Computes a reshaped copy of the weight matrix w. If there are no
// partial_funcs_, it does nothing.
void IntSimdMatrix::Init(const GENERIC_2D_ARRAY<int8_t>& w) {
  if (partial_funcs_.empty()) return;
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  // The rounded-up sizes of the reshaped weight matrix, excluding biases.
  int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
  int rounded_num_out = RoundOutputs(num_out);
  // Add the bias and compute the required size.
  shaped_w_.resize((rounded_num_in + 1) * rounded_num_out, 0);
  int shaped_index = 0;
  int output = 0;
  // Each number of registers needs a different format! Iterates over the
  // different numbers of registers (each a power of 2).
  for (int num_registers = max_output_registers_; num_registers >= 1;
       num_registers /= 2) {
    // The number of outputs that we will generate with this many registers.
    int num_outputs_per_register_set =
        num_registers * num_outputs_per_register_;
    // Use the max number of registers until we have to go fewer.
    while (output + num_outputs_per_register_set <= rounded_num_out) {
      // Accumulating outputs in registers saves iterating over the inputs, so
      // we only have to do it once per output register set.
      for (int input = 0; input < num_in; input += num_inputs_per_group_) {
        // Iterate over the number of outputs in a register set.
        for (int j = 0; j < num_outputs_per_register_set; ++j) {
          // Inner-most loop corresponds to the number of inputs in an input
          // group.
          for (int i = 0; i < num_inputs_per_group_; ++i) {
            int8_t weight = 0;
            if (output + j < num_out && input + i < num_in)
              weight = w(output + j, input + i);
            shaped_w_[shaped_index++] = weight;
          }
        }
      }
      // Append the bias weights for the register set.
      for (int j = 0; j < num_outputs_per_register_set; ++j) {
        int8_t weight = 0;
        if (output + j < num_out) weight = w(output + j, num_in);
        shaped_w_[shaped_index++] = weight;
      }
      output += num_outputs_per_register_set;
    }
  }
}
    
    struct OSResults {
  OSResults() : unicharset(nullptr) {
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < kMaxNumberOfScripts; ++j)
        scripts_na[i][j] = 0;
      orientations[i] = 0;
    }
  }
  void update_best_orientation();
  // Set the estimate of the orientation to the given id.
  void set_best_orientation(int orientation_id);
  // Update/Compute the best estimate of the script assuming the given
  // orientation id.
  void update_best_script(int orientation_id);
  // Return the index of the script with the highest score for this orientation.
  TESS_API int get_best_script(int orientation_id) const;
  // Accumulate scores with given OSResults instance and update the best script.
  void accumulate(const OSResults& osr);
    }
    
    
    {  GenericVector<int> blob_order;
  CalculateBlobOrder(&blob_order);
  for (int i = 0; i < blob_order.size(); i++) {
    *text += it_->word()->BestUTF8(blob_order[i], false);
  }
  AppendSuffixMarks(text);
}
    
    
    {  low = 0;
  if (fc.y () == 0) {
    if (fc.x () >= 0)
      dir = 0;
    else
      dir = MODULUS / 2;
    return;
  }
  high = MODULUS;
  do {
    current = (high + low) / 2;
    if (dirtab[current] * fc >= 0)
      low = current;
    else
      high = current;
  }
  while (high - low > 1);
  dir = low;
}

    
      // The first paragraph on a page often lacks a first line indent, but should
  // still be modeled by the same model as other body text paragraphs on the
  // page.
  bool is_very_first_or_continuation;
    
    ROW & ROW::operator= (const ROW & source) {
  this->ELIST_LINK::operator= (source);
  kerning = source.kerning;
  spacing = source.spacing;
  xheight = source.xheight;
  bodysize = source.bodysize;
  ascrise = source.ascrise;
  descdrop = source.descdrop;
  if (!words.empty ())
    words.clear ();
  baseline = source.baseline;    //QSPLINES must do =
  bound_box = source.bound_box;
  has_drop_cap_ = source.has_drop_cap_;
  lmargin_ = source.lmargin_;
  rmargin_ = source.rmargin_;
  para_ = source.para_;
  return *this;
}

    
    // Computes the histogram for the given image rectangle, and the given
// single channel. Each channel is always one byte per pixel.
// Histogram is always a kHistogramSize(256) element array to count
// occurrences of each pixel value.
void HistogramRect(Pix* src_pix, int channel,
                   int left, int top, int width, int height,
                   int* histogram) {
  PERF_COUNT_START('HistogramRect')
  int num_channels = pixGetDepth(src_pix) / 8;
  channel = ClipToRange(channel, 0, num_channels - 1);
  int bottom = top + height;
  memset(histogram, 0, sizeof(*histogram) * kHistogramSize);
  int src_wpl = pixGetWpl(src_pix);
  l_uint32* srcdata = pixGetData(src_pix);
  for (int y = top; y < bottom; ++y) {
    const l_uint32* linedata = srcdata + y * src_wpl;
    for (int x = 0; x < width; ++x) {
      int pixel = GET_DATA_BYTE(linedata, (x + left) * num_channels + channel);
      ++histogram[pixel];
    }
  }
  PERF_COUNT_END
}
    
        // ===================================================================
    // SubminibatchHelpers -- helper for sub-minibatch implementation
    // TODO: Can this just exist inside SGD.cpp?
    // ===================================================================
    
    template<> inline
dnnError_t dnnLayoutCreateFromPrimitive<double>(
    dnnLayout_t* pLayout,
    const dnnPrimitive_t primitive,
    dnnResourceType_t type)
{
    return dnnLayoutCreateFromPrimitive_F64(pLayout, primitive, type);
}
    
    
    {    // events
    cudaEventCreateWithFlags(&m_fetchCompleteEvent, flags) || 'cudaEventCreateWithFlags failed';
    cudaEventCreateWithFlags(&m_assignCompleteEvent, flags) || 'cudaEventCreateWithFlags failed';
    cudaEventCreateWithFlags(&m_syncEvent, cudaEventDisableTiming) || 'cudaEventCreateWithFlags failed';
}
    
    template <typename ElemType>
void DoExportToDbn(const ConfigParameters& config)
{
    DEVICEID_TYPE deviceID = DeviceFromConfig(config);
    }
    
    namespace Microsoft { namespace MSR { namespace BS {
    }
    }
    }
    
    
    {    // SaveMapping - save a map into the file
    // saveId - name of the section to save into (section:subsection format)
    // labelMapping - map we are saving to the file
    virtual void SaveMapping(std::wstring saveId, const std::map<LabelIdType, LabelType>& labelMapping);
    virtual bool SupportMultiUtterances() const 
    {
        return false;
    };
};
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    
    {public:
    inline array_ref(_T* ptr, size_t size) throw()
        : data(ptr), n(size)
    {
    }
    inline array_ref() throw()
        : data(NULL), n(0)
    {
    } // in case we have a vector of this
    inline _T& operator[](size_t i) throw()
    {
        check_index(i);
        return data[i];
    }
    inline const _T& operator[](size_t i) const throw()
    {
        check_index(i);
        return data[i];
    }
    inline size_t size() const throw()
    {
        return n;
    }
    inline _T* begin()
    {
        return data;
    }
    inline _T* end()
    {
        return data + n;
    }
    inline void resize(size_t sz)
    {
        sz;
        assert(n == sz);
    } // allow compatibility with some functions
    // construct from other vector types
    template <class _V>
    inline array_ref(_V& v)
        : data(v.size() > 0 ? &v[0] : NULL), n((size_t) v.size())
    {
    }
};
    
    template <typename Stream>
class buffered_write_stream;
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef long atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef std::atomic<long> atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef boost::detail::atomic_count atomic_count;
inline void increment(atomic_count& a, long b) { while (b > 0) ++a, --b; }
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
    INSTANTIATE_TEST_CASE_P(CustomEnv, EnvBasicTestWithParam,
                        ::testing::ValuesIn(GetCustomEnvs()));
    
    
    {
    {  releaseJniEnv(attached_thread);
}
// @lint-ignore TXT4 T25377293 Grandfathered in
}  // namespace rocksdb
    
    SyncPoint::SyncPoint() : 
  impl_(new Data) {
}
    
    #include 'util/sync_point_impl.h'
    
      // Returns a heuristic flush decision
  bool ShouldFlushNow() const;
    
    class CompactionFilterFactoryJniCallback : public JniCallback, public CompactionFilterFactory {
 public:
    CompactionFilterFactoryJniCallback(
        JNIEnv* env, jobject jcompaction_filter_factory);
    virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context);
    virtual const char* Name() const;
    }
    
      virtual ~AbstractBtMessage();
    
    
    {  virtual bool execute() CXX11_OVERRIDE;
};
    
    public:
  AbstractProxyRequestCommand(cuid_t cuid, const std::shared_ptr<Request>& req,
                              const std::shared_ptr<FileEntry>& fileEntry,
                              RequestGroup* requestGroup, DownloadEngine* e,
                              const std::shared_ptr<Request>& proxyRequest,
                              const std::shared_ptr<SocketCore>& s);
    
    void AnnounceList::resetIterator()
{
  currentTier_ = std::begin(tiers_);
  if (currentTier_ != std::end(tiers_) && (*currentTier_)->urls.size()) {
    currentTracker_ = std::begin((*currentTier_)->urls);
    currentTrackerInitialized_ = true;
  }
  else {
    currentTrackerInitialized_ = false;
  }
}
    
    
    {} // namespace aria2
    
    #include <vector>
#include <string>
#include <memory>
    
    #include <fb/lyra.h>
    
    #pragma once
    
    template<typename... ARGS>
inline void log(int level, const char* tag, const char* msg) noexcept {
  __android_log_write(level, tag, msg);
}
    
    
    {  T* operator->() const {
    return m_instance;
  }
private:
  T* m_instance;
};
    
      void reset(T* other = NULL) {
    T* old = (T*)pthread_getspecific(m_key);
    if (old != other) {
      FBASSERT(m_cleanup);
      m_cleanup(old);
      pthread_setspecific(m_key, other);
    }
  }
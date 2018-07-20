
        
        void DragFileItems(const std::vector<base::FilePath>& files,
                   const gfx::Image& icon,
                   gfx::NativeView view);
    
    namespace atom {
    }
    
     private:
  // The following methods are implemented by platform-specific implementations
  // of this class.
  //
  // Start/StopListening are called when transitioning between zero and nonzero
  // registered accelerators. StartListening will be called after
  // RegisterAcceleratorImpl and StopListening will be called after
  // UnregisterAcceleratorImpl.
  //
  // For RegisterAcceleratorImpl, implementations return false if registration
  // did not complete successfully.
  virtual void StartListening() = 0;
  virtual void StopListening() = 0;
  virtual bool RegisterAcceleratorImpl(const ui::Accelerator& accelerator) = 0;
  virtual void UnregisterAcceleratorImpl(
      const ui::Accelerator& accelerator) = 0;
    
    #endif  // CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_

    
    #include <string>
    
    #if defined(OS_MACOSX)
const base::FilePath::CharType kFrameworkName[] =
    FPL(ATOM_PRODUCT_NAME ' Framework.framework');
#endif  // OS_MACOSX
    
    namespace chrome {
    }
    
     protected:
  explicit Net(v8::Isolate* isolate);
  ~Net() override;
    
    void CV_ModelEstimator2_Test::get_test_array_types_and_sizes( int /*test_case_idx*/,
                                                              vector<vector<Size> > &sizes, vector<vector<int> > &types )
{
    RNG &rng = ts->get_rng();
    checkPartialSubsets = (cvtest::randInt(rng) % 2 == 0);
    }
    
    
    {        return dlsym(h, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) GetProcAddress(name)
#endif
    
    using namespace cv::ocl::runtime;
    
    const uchar g_Saturate8u[] =
{
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
     32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,
     48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63,
     64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  79,
     80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  90,  91,  92,  93,  94,  95,
     96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
    112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
    176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255
};
    
    Ptr<LookUpTable> cv::cuda::createLookUpTable(InputArray) { throw_no_cuda(); return Ptr<LookUpTable>(); }
    
    #include 'generic/THTensorLapack.cpp'
#include 'THGenerateFloatTypes.h'
    
      /// Attempts to find a value for the given `key`. If found, returns a
  /// reference to the value. If not, throws an exception.
  T& at(const std::string& key);
  const T& at(const std::string& key) const;
    
    static bool hasContiguousSubspace(TensorList tl) {
  // true if all the non-null tensors are adjacent
  auto isDefined = [](const Tensor & tensor){ return tensor.defined(); };
  auto isNull = [](const Tensor & tensor){ return !tensor.defined(); };
  auto start = std::find_if(tl.begin(), tl.end(), isDefined);
  auto stop = std::find_if(tl.rbegin(), tl.rend(), isDefined);
  auto it = std::find_if(start, stop.base(), isNull);
  return it == stop.base();
}
    
      std::vector<THCStream*> streams;
  Py_ssize_t length = PySequence_Fast_GET_SIZE(seq.get());
  for (Py_ssize_t i = 0; i < length; i++) {
    PyObject *stream = PySequence_Fast_GET_ITEM(seq.get(), i);
    }
    
    
    {  // Try to parse the numbers
  result = THLongStorage_newWithSize(length);
  for (Py_ssize_t i = 0; i < length; ++i) {
    PyObject *arg = PyTuple_GET_ITEM(args, i + ignore_first);
    if (!THPUtils_checkLong(arg)) {
      return false;
    }
    THLongStorage_set(result, i, THPUtils_unpackLong(arg));
  }
  return true;
}
    
      // Populate outputs
  for (int k = 0; k < N; k++) { // For each box, even skipped
    }
    
    
    { private:
  TIndex dense_last_dim_;
  INPUT_TAGS(LENGTHS, INDICES, DENSE);
};
    
    int64_t getWallClockMicros() {
  return RuntimeOption::EvalJitTimer ? HPHP::Timer::GetCurrentTimeMicros() :
         -1;
}
    
      /* Second, try to get a magic file from Common Files */
  if ((home = getenv('COMMONPROGRAMFILES')) != NULL) {
    if (asprintf(&tmppath, '%s%s', home, hmagic) >= 0)
      APPENDPATH();
  }
    
    
    {  return ret;
}
    
      for (auto& c : unit.classes) {
    folly::toAppend(
      indent(2, show(*c)),
      &ret
    );
  }
    
    
    {}
    
      static bool IsVirtualDirectory(const String& filename);
  static bool IsVirtualFile(const String& filename);
  static bool IsPlainFilePath(const String& filename) {
    return filename.find('://') == String::npos;
  }
    
    
    {  HeapImpl& heap_;
  GCBits const mark_version_;
  size_t num_small_{0}, num_big_{0}, num_slabs_{0};
  size_t marked_{0}, pinned_{0}, unknown_{0}; // object counts
  Counter cscanned_roots_, cscanned_; // bytes
  Counter xscanned_roots_, xscanned_; // bytes
  size_t init_ns_, initfree_ns_, roots_ns_{0}, mark_ns_{0}, sweep_ns_;
  size_t max_worklist_{0}; // max size of cwork_ + xwork_
  size_t freed_bytes_{0};
  PtrMap<const HeapObject*> ptrs_;
  MemBlock slabs_range_;
  boost::dynamic_bitset<> slab_map_; // 1 bit per 2M
  type_scan::Scanner type_scanner_;
  std::vector<const HeapObject*> cwork_, xwork_;
  APCGCManager* const apcgc_;
};
    
    #pragma comment(lib, 'Shlwapi.lib')
    
        // change all inputs of this new node to share the old one's inputs
    for (int i = 0; i < oldNode->GetNumInputs(); i++)
    {
        newNode->SetInput(i, oldNode->GetInputs()[i]); // TODO: use AttachInput()?
        //oldNode->SetInput(i, nullptr); // BUGBUG: old node should no longer point into the network
    }
    
    template <typename ElemType>
void DoConvertFromDbn(const ConfigParameters& config)
{
    wstring modelPath = config(L'modelPath');
    wstring dbnModelPath = config(L'dbnModelPath');
    }
    
    #include <memory> // for shared_ptr
    
        // Destroy - cleanup and remove this class
    // NOTE: this destroys the object, and it can't be used past this point
    virtual void Destroy();
    
        ProgressTracing()
        : m_enabled(false), m_tracingFlag(false), m_timestampFlag(false), m_totalNumberOfSteps(0), m_currentStepOffset(0)
    {
    }
    
        virtual VariableSchema GetOutputSchema() const override;
    
    // Returns the next Huffman-coded symbol.
int ReadSymbol(const HuffmanTableEntry* table, BitReaderState* br) {
  int nbits;
  br->FillBitWindow();
  int val = (br->val_ >> (br->bits_left_ - 8)) & 0xff;
  table += val;
  nbits = table->bits - 8;
  if (nbits > 0) {
    br->bits_left_ -= 8;
    table += table->value;
    val = (br->val_ >> (br->bits_left_ - nbits)) & ((1 << nbits) - 1);
    table += val;
  }
  br->bits_left_ -= table->bits;
  return table->value;
}
    
    std::vector<std::vector<float> > RGBToYUV(const std::vector<float>& rgb) {
  std::vector<std::vector<float> > yuv(3, std::vector<float>(rgb.size() / 3));
  for (size_t i = 0, p = 0; p < rgb.size(); ++i, p += 3) {
    const float r = rgb[p + 0];
    const float g = rgb[p + 1];
    const float b = rgb[p + 2];
    yuv[0][i] = RGBToY(r, g, b);
    yuv[1][i] = RGBToU(r, g, b);
    yuv[2][i] = RGBToV(r, g, b);
  }
  return yuv;
}
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
      // Compute YUV444 DCT coefficients.
  int block_ix = 0;
  for (int block_y = 0; block_y < jpg->MCU_rows; ++block_y) {
    for (int block_x = 0; block_x < jpg->MCU_cols; ++block_x) {
      coeff_t block[3 * kDCTBlockSize];
      // RGB->YUV transform.
      for (int iy = 0; iy < 8; ++iy) {
        for (int ix = 0; ix < 8; ++ix) {
          int y = std::min(h - 1, 8 * block_y + iy);
          int x = std::min(w - 1, 8 * block_x + ix);
          int p = y * w + x;
          RGBToYUV16(&rgb[3 * p], &block[8 * iy + ix]);
        }
      }
      // DCT
      for (int i = 0; i < 3; ++i) {
        ComputeBlockDCT(&block[i * kDCTBlockSize]);
      }
      // Quantization
      for (int i = 0; i < 3 * 64; ++i) {
        Quantize(&block[i], iquant[i]);
      }
      // Copy the resulting coefficients to *jpg.
      for (int i = 0; i < 3; ++i) {
        memcpy(&jpg->components[i].coeffs[block_ix * kDCTBlockSize],
               &block[i * kDCTBlockSize], kDCTBlockSize * sizeof(block[0]));
      }
      ++block_ix;
    }
  }
    
    namespace guetzli {
    }
    
    
    {} // namespace folly

    
    #include <folly/synchronization/Hazptr.h>
    
      BlockingQueueAddResult addWithPriority(T item, int8_t priority) override {
    int mid = getNumPriorities() / 2;
    size_t queue = priority < 0
        ? std::max(0, mid + priority)
        : std::min(getNumPriorities() - 1, mid + priority);
    CHECK_LT(queue, queues_.size());
    switch (kBehavior) { // static
      case QueueBehaviorIfFull::THROW:
        if (!queues_[queue].write(std::move(item))) {
          throw QueueFullException('LifoSemMPMCQueue full, can't add item');
        }
        break;
      case QueueBehaviorIfFull::BLOCK:
        queues_[queue].blockingWrite(std::move(item));
        break;
    }
    return sem_.post();
  }
    
    /** hazptr_priv structures
 *  Thread private lists of retired objects that belong to the default domain.
 */
class hazptr_priv {
  std::atomic<hazptr_obj*> head_;
  std::atomic<hazptr_obj*> tail_;
  int rcount_;
  bool active_;
  hazptr_priv* prev_;
  hazptr_priv* next_;
    }
    
    #pragma once
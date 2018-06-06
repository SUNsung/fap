
        
        
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
     protected:
  ~NwClipboardSetListSyncFunction() override;
    
    
    {} // namespace extensions
#endif

    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
    #include 'glog/logging.h'
#include 'google/protobuf/text_format.h'
#include 'stdint.h'
    
    
template <typename Dtype>
class LayerRegisterer {
 public:
  LayerRegisterer(const string& type,
                  shared_ptr<Layer<Dtype> > (*creator)(const LayerParameter&)) {
    // LOG(INFO) << 'Registering layer type: ' << type;
    LayerRegistry<Dtype>::AddCreator(type, creator);
  }
};
    
    #include 'caffe/layers/neuron_layer.hpp'
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
      virtual inline const char* type() const { return 'BNLL'; }
    
    
    {  /// when divided by UINT_MAX, the randomly generated values @f$u\sim U(0,1)@f$
  Blob<unsigned int> rand_vec_;
  /// the probability @f$ p @f$ of dropping any input
  Dtype threshold_;
  /// the scale for undropped inputs at train time @f$ 1 / (1 - p) @f$
  Dtype scale_;
  unsigned int uint_thres_;
};
    
    class MatrixTest : public ::testing::Test {
 protected:
  // Fills src_ with data so it can pretend to be a tensor thus:
  //  dims_=[5, 4, 3, 2]
  //  array_=[0, 1, 2, ....119]
  //  tensor=[[[[0, 1][2, 3][4, 5]]
  //           [[6, 7][8, 9][10, 11]]
  //           [[12, 13][14, 15][16, 17]]
  //           [[18, 19][20, 21][22, 23]]]
  //          [[[24, 25]...
  MatrixTest() {
    src_.Resize(1, kInputSize_, 0);
    for (int i = 0; i < kInputSize_; ++i) {
      src_.put(0, i, i);
    }
    for (int i = 0; i < kNumDims_; ++i) dims_[i] = 5 - i;
  }
  // Number of dimensions in src_.
  static const int kNumDims_ = 4;
  // Number of elements in src_.
  static const int kInputSize_ = 120;
  // Size of each dimension in src_;
  int dims_[kNumDims_];
  // Input array filled with [0,kInputSize).
  GENERIC_2D_ARRAY<int> src_;
};
    
    namespace tesseract {
    }
    
      // A LTRResultIterator goes strictly left-to-right word order.
  LTRResultIterator ltr_it(resit);
  ltr_it.RestartRow();
  if (ltr_it.Empty(RIL_WORD)) return;
  do {
    directions->push_back(ltr_it.WordDirection());
  } while (ltr_it.Next(RIL_WORD) && !ltr_it.IsAtBeginningOf(RIL_TEXTLINE));
    
    
    { private:
  // A name for this document.
  STRING document_name_;
  // A group of pages that corresponds in some loose way to a document.
  PointerVector<ImageData> pages_;
  // Page number of the first index in pages_.
  int pages_offset_;
  // Total number of pages in document (may exceed size of pages_.)
  int total_pages_;
  // Total of all pix sizes in the document.
  int64_t memory_used_;
  // Max memory to use at any time.
  int64_t max_memory_;
  // Saved reader from LoadDocument to allow re-caching.
  FileReader reader_;
  // Mutex that protects pages_ and pages_offset_ against multiple parallel
  // loads, and provides a wait for page.
  SVMutex pages_mutex_;
  // Mutex that protects other data members that callers want to access without
  // waiting for a load operation.
  mutable SVMutex general_mutex_;
};
    
    #else // USE_GCC_FAST_TLS
    
    constexpr int Vframe::Top;
    
    /*
 * Vasm constant.
 *
 * Either a 1, 4, or 8 byte unsigned value, 8 byte double, or the disp32 part
 * of a thread-local address of an immutable constant that varies by thread.
 * Constants may also represent an undefined value, indicated by the isUndef
 * member.
 *
 * Also contains convenience constructors for various pointer and enum types.
 */
struct Vconst {
  enum Kind { Quad, Long, Byte, Double };
    }
    
    #ifdef PHP_WIN32
#include <shlwapi.h>
#endif
    
    void OfflineCode::disasm(FILE* file,
                         TCA fileStartAddr,
                         TCA codeStartAddr,
                         uint64_t codeLen,
                         const PerfEventsMap<TCA>& perfEvents,
                         BCMappingInfo bcMappingInfo,
                         bool printAddr,
                         bool printBinary) {
    }
    
    /*
 * Clean up any /tmp files that we created at process shutdown time.
 */
void embedded_data_cleanup();
    
      typedef std::function<void(pid_t)> LostChildHandler;
  static void SetLostChildHandler(const LostChildHandler& handler);
    
    namespace HPHP {
    }
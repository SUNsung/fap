
        
         protected:
  RemoteCallbackFreer(v8::Isolate* isolate,
                      v8::Local<v8::Object> target,
                      int object_id,
                      content::WebContents* web_conents);
  ~RemoteCallbackFreer() override;
    
    #if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
  // On Linux maximize can be an asynchronous operation. This notification
  // indicates that the window has been maximized. The source is
  // a Source<BrowserWindow> containing the BrowserWindow that was maximized.
  // No details are expected.
  NOTIFICATION_BROWSER_WINDOW_MAXIMIZED,
#endif
    
      // GlobalShortcutListener implementation.
  virtual void StartListening() override;
  virtual void StopListening() override;
  virtual bool RegisterAcceleratorImpl(
      const ui::Accelerator& accelerator) override;
  virtual void UnregisterAcceleratorImpl(
      const ui::Accelerator& accelerator) override;
    
    // DesktopMediaList provides the list of desktop media source (screens, windows,
// tabs), and their thumbnails, to the desktop media picker dialog. It
// transparently updates the list in the background, and notifies the desktop
// media picker when something changes.
class DesktopMediaList {
 public:
  // Struct used to represent each entry in the list.
  struct Source {
    // Id of the source.
    content::DesktopMediaID id;
    }
    }
    
    namespace content {
class BrowserPpapiHost;
}
    
     private:
  PepperIsolatedFileSystemMessageFilter(int render_process_id,
                                        const base::FilePath& profile_directory,
                                        const GURL& document_url,
                                        ppapi::host::PpapiHost* ppapi_host_);
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    #include 'boost/scoped_ptr.hpp'
#include 'glog/logging.h'
#include 'google/protobuf/text_format.h'
#include 'stdint.h'
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    {  Blob<Dtype> col_buffer_;
  Blob<Dtype> bias_multiplier_;
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #endif  // CAFFE_CUDNN_RELU_LAYER_HPP_

    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    template<typename To, typename From>
typename std::enable_if<!std::is_integral<From>::value, bool>::type overflows(From f) {
  using limit = std::numeric_limits<To>;
  if (limit::has_infinity && std::isinf(f)) {
    return false;
  }
  if (!limit::has_quiet_NaN && std::isnan(f)) {
    return true;
  }
  return f < limit::lowest() || f > limit::max();
}
    
    #include 'torch/csrc/Exceptions.h'
#include 'torch/csrc/utils/auto_gil.h'
#include 'torch/csrc/utils/python_scalars.h'
    
    #define THC_GENERIC_FILE 'torch/csrc/generic/Storage.h'
#include <THC/THCGenerateAllTypes.h>
    
    #define THPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THPDoubleStorageClass)
#define THPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THPLongStorageClass)
#define THPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THPIntStorageClass)
#define THPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THPShortStorageClass)
#define THPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THPCharStorageClass)
#define THPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THPByteStorageClass)
    
      THDTensor_(free)(THDTensor_(cloneColumnMajor)(NULL, a));
  THDTensor_(free)(THDTensor_(cloneColumnMajor)(rb, b));
    
    void THDTensor_(random)(THDTensor *self, THDGenerator *_generator) {
  masterCommandChannel->sendMessage(
    packMessage(Functions::tensorRandom, self, _generator),
    THDState::s_current_worker
  );
}
    
    extern THDTensorDescriptor* THDPModule_makeDescriptor(PyObject *obj);
template <typename TensorSrc>
void THDPInsertCopyFunctionFromWorker(
  THPCopyList& copyList,
  void (*copyFunc)(THDTensorDescriptor* x, TensorSrc *z))
{
  auto wrapper = [copyFunc](PyObject* dst_, PyObject* src_) {
    TensorSrc* src = THPTypeInfo<TensorSrc>::cdata(src_);
    }
    }
    
    namespace dmlc {
DMLC_REGISTRY_ENABLE(::xgboost::TreeUpdaterReg);
}  // namespace dmlc
    
    SEXP XGBoosterPredict_R(SEXP handle, SEXP dmat, SEXP option_mask, SEXP ntree_limit) {
  SEXP ret;
  R_API_BEGIN();
  bst_ulong olen;
  const float *res;
  CHECK_CALL(XGBoosterPredict(R_ExternalPtrAddr(handle),
                            R_ExternalPtrAddr(dmat),
                            asInteger(option_mask),
                            asInteger(ntree_limit),
                            &olen, &res));
  ret = PROTECT(allocVector(REALSXP, olen));
  for (size_t i = 0; i < olen; ++i) {
    REAL(ret)[i] = res[i];
  }
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    TEST(Metric, Precision) {
  // When the limit for precision is not given, it takes the limit at
  // std::numeric_limits<unsigned>::max(); hence all values are very small
  // NOTE(AbdealiJK): Maybe this should be fixed to be num_row by default.
  xgboost::Metric * metric = xgboost::Metric::Create('pre');
  ASSERT_STREQ(metric->Name(), 'pre');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-7);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0, 1e-7);
    }
    
      bool is_progressive = false;   // default
  do {
    // Read next marker.
    size_t num_skipped = FindNextMarker(data, len, pos);
    if (num_skipped > 0) {
      // Add a fake marker to indicate arbitrary in-between-markers data.
      jpg->marker_order.push_back(0xff);
      jpg->inter_marker_data.push_back(
          std::string(reinterpret_cast<const char*>(&data[pos]),
                                      num_skipped));
      pos += num_skipped;
    }
    EXPECT_MARKER();
    marker = data[pos + 1];
    pos += 2;
    bool ok = true;
    switch (marker) {
      case 0xc0:
      case 0xc1:
      case 0xc2:
        is_progressive = (marker == 0xc2);
        ok = ProcessSOF(data, len, mode, &pos, jpg);
        found_sof = true;
        break;
      case 0xc4:
        ok = ProcessDHT(data, len, mode, &dc_huff_lut, &ac_huff_lut, &pos, jpg);
        break;
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
        // RST markers do not have any data.
        break;
      case 0xd9:
        // Found end marker.
        break;
      case 0xda:
        if (mode == JPEG_READ_ALL) {
          ok = ProcessScan(data, len, dc_huff_lut, ac_huff_lut,
                           scan_progression, is_progressive, &pos, jpg);
        }
        break;
      case 0xdb:
        ok = ProcessDQT(data, len, &pos, jpg);
        break;
      case 0xdd:
        ok = ProcessDRI(data, len, &pos, jpg);
        break;
      case 0xe0:
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xef:
        if (mode != JPEG_READ_TABLES) {
          ok = ProcessAPP(data, len, &pos, jpg);
        }
        break;
      case 0xfe:
        if (mode != JPEG_READ_TABLES) {
          ok = ProcessCOM(data, len, &pos, jpg);
        }
        break;
      default:
        fprintf(stderr, 'Unsupported marker: %d pos=%d len=%d\n',
                marker, static_cast<int>(pos), static_cast<int>(len));
        jpg->error = JPEG_UNSUPPORTED_MARKER;
        ok = false;
        break;
    }
    if (!ok) {
      return false;
    }
    jpg->marker_order.push_back(marker);
    if (mode == JPEG_READ_HEADER && found_sof) {
      break;
    }
  } while (marker != 0xd9);
    
    bool WriteJpeg(const JPEGData& jpg, bool strip_metadata, JPEGOutput out) {
  static const uint8_t kSOIMarker[2] = { 0xff, 0xd8 };
  static const uint8_t kEOIMarker[2] = { 0xff, 0xd9 };
  std::vector<HuffmanCodeTable> dc_codes;
  std::vector<HuffmanCodeTable> ac_codes;
  return (JPEGWrite(out, kSOIMarker, sizeof(kSOIMarker)) &&
          EncodeMetadata(jpg, strip_metadata, out) &&
          EncodeDQT(jpg.quant, out) &&
          EncodeSOF(jpg, out) &&
          BuildAndEncodeHuffmanCodes(jpg, out, &dc_codes, &ac_codes) &&
          EncodeScan(jpg, dc_codes, ac_codes, out) &&
          JPEGWrite(out, kEOIMarker, sizeof(kEOIMarker)) &&
          (strip_metadata || JPEGWrite(out, jpg.tail_data)));
}
    
    void OutputImage::CopyFromJpegData(const JPEGData& jpg) {
  for (size_t i = 0; i < jpg.components.size(); ++i) {
    const JPEGComponent& comp = jpg.components[i];
    assert(jpg.max_h_samp_factor % comp.h_samp_factor == 0);
    assert(jpg.max_v_samp_factor % comp.v_samp_factor == 0);
    int factor_x = jpg.max_h_samp_factor / comp.h_samp_factor;
    int factor_y = jpg.max_v_samp_factor / comp.v_samp_factor;
    assert(comp.quant_idx < jpg.quant.size());
    components_[i].CopyFromJpegComponent(comp, factor_x, factor_y,
                                         &jpg.quant[comp.quant_idx].values[0]);
  }
}
    
    inline void ColorTransformYCbCrToRGB(uint8_t* pixel) {
  int y  = pixel[0];
  int cb = pixel[1];
  int cr = pixel[2];
  pixel[0] = kRangeLimit[y + kCrToRedTable[cr]];
  pixel[1] = kRangeLimit[y +
                         ((kCrToGreenTable[cr] + kCbToGreenTable[cb]) >> 16)];
  pixel[2] = kRangeLimit[y + kCbToBlueTable[cb]];
}
    
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
    
      // Fills in block[] with the 8x8 coefficient block with block coordinates
  // (block_x, block_y).
  // NOTE: If the component is 2x2 subsampled, this corresponds to the 16x16
  // pixel area with upper-left corner (16 * block_x, 16 * block_y).
  void GetCoeffBlock(int block_x, int block_y,
                     coeff_t block[kDCTBlockSize]) const;
    
    void*         XXH32_init   (unsigned int seed);
XXH_errorcode XXH32_update (void* state, const void* input, int len);
unsigned int  XXH32_digest (void* state);
    
    
    {
    {  releaseJniEnv(attached_thread);
}
// @lint-ignore TXT4 T25377293 Grandfathered in
}  // namespace rocksdb
    
      // Enlarge the buffer size if needed based on key_size.
  // By default, static allocated buffer is used. Once there is a key
  // larger than the static allocated buffer, another buffer is dynamically
  // allocated, until a larger key buffer is requested. In that case, we
  // reallocate buffer and delete the old one.
  void EnlargeBufferIfNeeded(size_t key_size) {
    // If size is smaller than buffer size, continue using current buffer,
    // or the static allocated one, as default
    if (key_size > buf_size_) {
      EnlargeBuffer(key_size);
    }
  }
    
    /**
 * This class acts as a bridge between C++
 * and Java. The methods in this class will be
 * called back from the RocksDB storage engine (C++)
 * we then callback to the appropriate Java method
 * this enables Comparators to be implemented in Java.
 *
 * The design of this Comparator caches the Java Slice
 * objects that are used in the compare and findShortestSeparator
 * method callbacks. Instead of creating new objects for each callback
 * of those functions, by reuse via setHandle we are a lot
 * faster; Unfortunately this means that we have to
 * introduce independent locking in regions of each of those methods
 * via the mutexs mtx_compare and mtx_findShortestSeparator respectively
 */
class BaseComparatorJniCallback : public JniCallback, public Comparator {
 public:
    BaseComparatorJniCallback(
      JNIEnv* env, jobject jComparator,
      const ComparatorJniCallbackOptions* copt);
    virtual const char* Name() const;
    virtual int Compare(const Slice& a, const Slice& b) const;
    virtual void FindShortestSeparator(
      std::string* start, const Slice& limit) const;
    virtual void FindShortSuccessor(std::string* key) const;
    }
    
    
    {
    {   private:
     jmethodID m_jLogMethodId;
     jobject m_jdebug_level;
     jobject m_jinfo_level;
     jobject m_jwarn_level;
     jobject m_jerror_level;
     jobject m_jfatal_level;
     jobject m_jheader_level;
     std::unique_ptr<char[]> format_str(const char* format, va_list ap) const;
  };
}  // namespace rocksdb
    
        if (st.total_length > _rawlen) return LONGLINKPACK_CONTINUE_data;
    
    #include <jni.h>
#include <string>
struct JniMethodInfo;
class AutoBuffer;
    
    
    {  private:
    JNIEnv* env_;
    jstring jstr_;
    const char* char_;
    bool jstr2char_;
};
    
    void AbstractBtMessage::setBtMessageFactory(BtMessageFactory* factory)
{
  messageFactory_ = factory;
}
    
    
    {  bool currentTierAcceptsCompletedEvent() const;
};
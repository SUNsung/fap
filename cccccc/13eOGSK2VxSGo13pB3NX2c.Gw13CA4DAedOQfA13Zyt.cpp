
        
        
    {}  // namespace api
    
    
    {}  // namespace api
    
    namespace api {
    }
    
      gfx::Point GetCursorScreenPoint();
  display::Display GetPrimaryDisplay();
  std::vector<display::Display> GetAllDisplays();
  display::Display GetDisplayNearestPoint(const gfx::Point& point);
  display::Display GetDisplayMatching(const gfx::Rect& match_rect);
    
    class WebRequest : public mate::TrackableObject<WebRequest> {
 public:
  static mate::Handle<WebRequest> Create(v8::Isolate* isolate,
                                         AtomBrowserContext* browser_context);
    }
    
      // Pass the sender and message to be replied.
  void SetSenderAndMessage(content::RenderFrameHost* sender,
                           IPC::Message* message);
    
    bool SavePageHandler::Handle(const base::FilePath& full_path,
                             const content::SavePageType& save_type) {
  auto* download_manager = content::BrowserContext::GetDownloadManager(
      web_contents_->GetBrowserContext());
  download_manager->AddObserver(this);
  // Chromium will create a 'foo_files' directory under the directory of saving
  // page 'foo.html' for holding other resource files of 'foo.html'.
  base::FilePath saved_main_directory_path = full_path.DirName().Append(
      full_path.RemoveExtension().BaseName().value() +
      FILE_PATH_LITERAL('_files'));
  bool result =
      web_contents_->SavePage(full_path, saved_main_directory_path, save_type);
  download_manager->RemoveObserver(this);
  // If initialization fails which means fail to create |DownloadItem|, we need
  // to delete the |SavePageHandler| instance to avoid memory-leak.
  if (!result)
    delete this;
  return result;
}
    
    
    {}  // namespace atom
    
     private:
  void Destroy();
    
    namespace atom {
    }
    
    void AutoUpdater::SetFeedURL(mate::Arguments* args) {}
    
    namespace in_app_purchase {
    }
    
    #define TEGRA_MUL(src1, sz1, src2, sz2, dst, sz, w, h, scale) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    CAROTENE_NS::mul(CAROTENE_NS::Size2D(w, h), \
                     src1, sz1, \
                     src2, sz2, \
                     dst, sz, \
                     scale, \
                     CAROTENE_NS::CONVERT_POLICY_SATURATE), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
    void assertSupportedConfiguration(bool parametersSupported)
{
    if (!isSupportedConfiguration()) {
        std::cerr << 'internal error: attempted to use an unavailable function' << std::endl;
        std::abort();
    }
    }
    
             vline_f32 = vld1q_f32(_src + i + 4);
    
                tnext[0] = x0;
            tnext[1] = x1;
            tnext[2] = x2;
    
    
    {    return 0;
#endif
}
    
                if (mask[0])
                process(src, j, j + 8, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
            if (mask[1])
                process(src, j + 8, j + 16, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
        }
        for ( ; j < roiw8; j += 8)
        {
            uint8x8_t v_src = vld1_u8(src + j);
    
    
    {
    {        for (jd -= 3; j < size.width; ++j, js += 3, jd -= 3)
        {
            dst[jd] = src[js];
            dst[jd + 1] = src[js + 1];
            dst[jd + 2] = src[js + 2];
        }
    }
}
    
    namespace CAROTENE_NS {
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    namespace caffe {
    }
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of DeConvolutionLayer.
 *        Fallback to DeConvolutionLayer for CPU mode.
 *
 * cuDNN accelerates deconvolution through forward kernels for filtering and
 * bias plus backward kernels for the gradient w.r.t. the filters, biases, and
 * inputs. Caffe + cuDNN further speeds up the computation through forward
 * parallelism across groups and backward parallelism across gradients.
*/
template <typename Dtype>
class CuDNNDeconvolutionLayer : public DeconvolutionLayer<Dtype> {
 public:
  explicit CuDNNDeconvolutionLayer(const LayerParameter& param)
    : DeconvolutionLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
                          const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
                       const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNDeconvolutionLayer();
    }
    
    #endif  // CAFFE_CUDNN_LCN_LAYER_HPP_

    
    
    {} // namespace caffe2

    
    namespace caffe2 {
namespace {
REGISTER_CPU_OPERATOR(
    FindDuplicateElements,
    FindDuplicateElementsOp<CPUContext>);
    }
    }
    
    
    {  bool RunOnDevice() override;
};
    
    /**
 * Returns true if the iterator is at the start of an object at the given
 * level. Possible uses include determining if a call to Next(RIL_WORD)
 * moved to the start of a RIL_PARA.
 */
bool PageIterator::IsAtBeginningOf(PageIteratorLevel level) const {
  if (it_->block() == nullptr) return false;  // Already at the end!
  if (it_->word() == nullptr) return true;  // In an image block.
  switch (level) {
    case RIL_BLOCK:
      return blob_index_ == 0 && it_->block() != it_->prev_block();
    case RIL_PARA:
      return blob_index_ == 0 &&
          (it_->block() != it_->prev_block() ||
           it_->row()->row->para() != it_->prev_row()->row->para());
    case RIL_TEXTLINE:
      return blob_index_ == 0 && it_->row() != it_->prev_row();
    case RIL_WORD:
      return blob_index_ == 0;
    case RIL_SYMBOL:
      return true;
  }
  return false;
}
    
      // How many alt choices from each should we try to get?
  const int kAltsPerPiece = 2;
  // When do we start throwing away extra alt choices?
  const int kTooManyAltChoices = 100;
    
    
    {}  // namespace tesseract.
    
      // This and other putatively are the same, so call the (permanent) callback
  // for each blob index where the bounding boxes match.
  // The callback is deleted on completion.
  void ProcessMatchedBlobs(const TWERD& other, TessCallback1<int>* cb) const;
    
    using ::opencensus::stats::MeasureDouble;
using ::opencensus::stats::MeasureInt64;
    
    #undef HEADER_ARG
#undef HEADER_NONE
    
    void Config::SetParsedIni(IniSettingMap &ini, const std::string confStr,
                          const std::string &filename, bool constants_only,
                          bool is_system) {
  // if we are setting constants, we must be setting system settings
  if (constants_only) {
    assertx(is_system);
  }
  auto parsed_ini = IniSetting::FromStringAsMap(confStr, filename);
  for (ArrayIter iter(parsed_ini.toArray()); iter; ++iter) {
    // most likely a string, but just make sure that we are dealing
    // with something that can be converted to a string
    assertx(iter.first().isScalar());
    ini.set(iter.first().toString(), iter.second());
    if (constants_only) {
      IniSetting::FillInConstant(iter.first().toString().toCppString(),
                                 iter.second());
    } else if (is_system) {
      IniSetting::SetSystem(iter.first().toString().toCppString(),
                            iter.second());
    }
  }
}
    
    
    {}
    
    void logAHMSubMapWarning(folly::StringPiece mapName) {
  StackTrace st;
  logPerfWarning(
    'AtomicHashMap overflow',
    [&](StructuredLogEntry& cols) {
      cols.setStr('map_name', mapName);
      cols.setStackTrace('stack', st);
    }
  );
}
    
    #include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/vm/globals-array.h'
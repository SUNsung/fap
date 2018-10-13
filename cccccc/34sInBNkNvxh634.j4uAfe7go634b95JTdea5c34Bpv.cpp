
        
        
    {    result->AppendBoolean(success);
    return;
  } else if (method == 'UnregisterGlobalHotKey') {
    int object_id = -1;
    arguments.GetInteger(0, &object_id);
    Shortcut* shortcut =
        static_cast<Shortcut*>(DispatcherHost::GetApiObject(object_id));
    GlobalShortcutListener::GetInstance()->UnregisterAccelerator(
        shortcut->GetAccelerator(), shortcut);
    return;
  } else if (method == 'SetProxyConfig') {
    std::string proxy_config;
    arguments.GetString(0, &proxy_config);
    SetProxyConfig(GetRenderProcessHost(), proxy_config);
    return;
  } else if (method == 'DoneMenuShow') {
    dispatcher_host->quit_run_loop();
    return;
  }
    
    
    {}  // namespace remote
    
    std::string Clipboard::GetText() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  base::string16 text;
  clipboard->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
  return base::UTF16ToUTF8(text);
}
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    namespace nw {
    }
    
      private:
    bool ReadText(ClipboardData& data) {
      DCHECK(data.type == TYPE_TEXT);
      base::string16 text;
      clipboard_->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
      data.data.reset(new std::string(base::UTF16ToUTF8(text)));
      return true;
    }
    
    class NwClipboardGetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardGetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
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
    
     protected:
  ~NwObjCallObjectMethodSyncFunction() override;
    
    /**
 * @brief Applies common transformations to the input data, such as
 * scaling, mirroring, substracting the image mean...
 */
template <typename Dtype>
class DataTransformer {
 public:
  explicit DataTransformer(const TransformationParameter& param, Phase phase);
  virtual ~DataTransformer() {}
    }
    
    
    {  shared_ptr<boost::thread> thread_;
};
    
    namespace caffe {
    }
    
    namespace caffe {
    }
    
    #endif  // CAFFE_BATCHREINDEX_LAYER_HPP_

    
    /**
 * @brief Computes @f$ y = x + \log(1 + \exp(-x)) @f$ if @f$ x > 0 @f$;
 *        @f$ y = \log(1 + \exp(x)) @f$ otherwise.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$
 *      y = \left\{
 *         \begin{array}{ll}
 *            x + \log(1 + \exp(-x)) & \mbox{if } x > 0 \\
 *            \log(1 + \exp(x)) & \mbox{otherwise}
 *         \end{array} \right.
 *      @f$
 */
template <typename Dtype>
class BNLLLayer : public NeuronLayer<Dtype> {
 public:
  explicit BNLLLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
     private:
  // Recursive copy function.
  void crop_copy(const vector<Blob<Dtype>*>& bottom,
               const vector<Blob<Dtype>*>& top,
               const int* offsets,
               vector<int> indices,
               int cur_dim,
               const Dtype* src_data,
               Dtype* dest_data,
               bool is_forward);
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif  // TESSERACT_ARCH_DOTPRODUCTSSE_H_

    
    int16_t word_blob_quality(WERD_RES *word, ROW *row);
void reject_whole_page(PAGE_RES_IT &page_res_it);
    
    #ifndef TESSERACT_CCMAIN_OSDETECT_H_
#define TESSERACT_CCMAIN_OSDETECT_H_
    
    /**
 * Returns a binary image of the current object at the given level.
 * The position and size match the return from BoundingBoxInternal, and so this
 * could be upscaled with respect to the original input image.
 * Use pixDestroy to delete the image after use.
 * The following methods are used to generate the images:
 * RIL_BLOCK: mask the page image with the block polygon.
 * RIL_TEXTLINE: Clip the rectangle of the line box from the page image.
 * TODO(rays) fix this to generate and use a line polygon.
 * RIL_WORD: Clip the rectangle of the word box from the page image.
 * RIL_SYMBOL: Render the symbol outline to an image for cblobs (prior
 * to recognition) or the bounding box otherwise.
 * A reconstruction of the original image (using xor to check for double
 * representation) should be reasonably accurate,
 * apart from removed noise, at the block level. Below the block level, the
 * reconstruction will be missing images and line separators.
 * At the symbol level, kerned characters will be invade the bounding box
 * if rendered after recognition, making an xor reconstruction inaccurate, but
 * an or construction better. Before recognition, symbol-level reconstruction
 * should be good, even with xor, since the images come from the connected
 * components.
 */
Pix* PageIterator::GetBinaryImage(PageIteratorLevel level) const {
  int left, top, right, bottom;
  if (!BoundingBoxInternal(level, &left, &top, &right, &bottom))
    return nullptr;
  if (level == RIL_SYMBOL && cblob_it_ != nullptr &&
      cblob_it_->data()->area() != 0)
    return cblob_it_->data()->render();
  Box* box = boxCreate(left, top, right - left, bottom - top);
  Pix* pix = pixClipRectangle(tesseract_->pix_binary(), box, nullptr);
  boxDestroy(&box);
  if (level == RIL_BLOCK || level == RIL_PARA) {
    // Clip to the block polygon as well.
    TBOX mask_box;
    Pix* mask = it_->block()->block->render_mask(&mask_box);
    int mask_x = left - mask_box.left();
    int mask_y = top - (tesseract_->ImageHeight() - mask_box.top());
    // AND the mask and pix, putting the result in pix.
    pixRasterop(pix, std::max(0, -mask_x), std::max(0, -mask_y), pixGetWidth(pix),
                pixGetHeight(pix), PIX_SRC & PIX_DST, mask, std::max(0, mask_x),
                std::max(0, mask_y));
    pixDestroy(&mask);
  }
  return pix;
}
    
      /**
   * Returns the polygon outline of the current block. The returned Pta must
   * be ptaDestroy-ed after use. Note that the returned Pta lists the vertices
   * of the polygon, and the last edge is the line segment between the last
   * point and the first point. nullptr will be returned if the iterator is
   * at the end of the document or layout analysis was not used.
   */
  Pta* BlockPolygon() const;
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
      if (bytes_left_ >= num_bytes) {
    bytes_left_ -= num_bytes;
    return 0;
  }
  // The frequency to get time inside DB mutex is less than one per refill
  // interval.
  auto time_now = NowMicrosMonotonic(env);
    
    
    {  std::unique_ptr<RateLimiter> low_pri_rate_limiter_;
};
    
    
    {    std::vector<std::string> input_file_names;
    for (auto level : cf_meta.levels) {
      for (auto file : level.files) {
        if (file.being_compacted) {
          return nullptr;
        }
        input_file_names.push_back(file.name);
      }
    }
    return new CompactionTask(
        db, this, cf_name, input_file_names,
        options_.num_levels - 1, compact_options_, false);
  }
    
      // Initialize pointer options for each column family
  for (size_t i = 0; i < loaded_cf_descs.size(); ++i) {
    auto* loaded_bbt_opt = reinterpret_cast<BlockBasedTableOptions*>(
        loaded_cf_descs[0].options.table_factory->GetOptions());
    // Expect the same as BlockBasedTableOptions will be loaded form file.
    assert(loaded_bbt_opt->block_size == bbt_opts.block_size);
    // However, block_cache needs to be manually initialized as documented
    // in rocksdb/utilities/options_util.h.
    loaded_bbt_opt->block_cache = cache;
  }
  // In addition, as pointer options are initialized with default value,
  // we need to properly initialized all the pointer options if non-defalut
  // values are used before calling DB::Open().
  assert(loaded_cf_descs[0].options.compaction_filter == nullptr);
  loaded_cf_descs[0].options.compaction_filter = compaction_filter.get();
    
      // Write a key OUTSIDE of this transaction.
  // Does not affect txn since this is an unrelated key.  If we wrote key 'abc'
  // here, the transaction would fail to commit.
  s = txn_db->Put(write_options, 'xyz', 'zzz');
    
    #if USE_ESD_CAN
  CANCardParameter can_card_parameter;
  can_card_parameter.set_brand(CANCardParameter::ESD_CAN);
  can_card_parameter.set_type(CANCardParameter::PCI_CARD);
  can_card_parameter.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    
    
    { private:
  bool is_receiving_ = false;
  bool is_sending_finish_ = false;
  CanAgent *other_agent_ = nullptr;
  TestCanParam *param_ptr_ = nullptr;
  std::unique_ptr<std::thread> thread_recv_;
  std::unique_ptr<std::thread> thread_send_;
};
    
    #ifdef NTCAN_ERROR_FORMAT_LONG
  {
    NTCAN_RESULT res;
    char sz_error_text[60];
    }
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
      /**
   * @brief Initialize the fake CAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   * @return If the initialization is successful.
   */
  bool Init(const CANCardParameter &param) override;
    
    // buf size must be 8 bytes, every time, we receive only one frame
ErrorCode SocketCanClientRaw::Receive(std::vector<CanFrame> *const frames,
                                      int32_t *const frame_num) {
  if (!is_started_) {
    AERROR << 'Nvidia can client is not init! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
  }
    }
    
    
    {  receiver.Init(&can_client, &pm, false);
  EXPECT_EQ(receiver.Start(), common::ErrorCode::OK);
  EXPECT_TRUE(receiver.IsRunning());
  receiver.Stop();
  EXPECT_FALSE(receiver.IsRunning());
}
    
    #include 'gtest/gtest.h'
    
      /**
   * @brief Reset the lower 4 bits as the lower 4 bits of a specified one-byte
   *        unsigned integer.
   * @param value The one-byte unsigned integer whose lower 4 bits are used to
   *        set this Byte's lower 4 bits.
   */
  void set_value_low_4_bits(const uint8_t value);
    
    template <typename SensorType>
Status SensorCanbus<SensorType>::Start() {
  // 1. init and start the can card hardware
  if (can_client_->Start() != ErrorCode::OK) {
    return OnError('Failed to start can client');
  }
  AINFO << 'Can client is started.';
    }
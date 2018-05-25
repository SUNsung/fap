
        
        #endif  // ATOM_COMMON_DRAGGABLE_REGION_H_

    
      // Gets the native display ID for the <process_id, render_frame_id> tuple.
  int64_t GetMonitor();
    
     private:
  struct ExecuteOpenParams {
    ExecuteOpenParams(SkColor color, RunState run_state, HWND owner);
    SkColor color;
    RunState run_state;
    HWND owner;
  };
    
    #undef FPL

    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    
    {  RenderView* render_view = RenderView::FromWebView(view);
  return render_view;
}
    
    #include 'base/compiler_specific.h'
#include 'content/nw/src/api/base/base.h'
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    ui::KeyboardCode GetKeycodeFromText(std::string text){
  ui::KeyboardCode retval = ui::VKEY_UNKNOWN;
  if (text.size() != 0){
    std::string upperText = base::ToUpperASCII(text);
    std::string keyName = text;
    bool found = false;
    if (upperText.size() == 1){
      char key = upperText[0];
      if (key>='0' && key<='9'){//handle digital
        keyName = 'Digit' + upperText;
        found = true;
      } else if (key>='A'&&key<='Z'){//handle alphabet
        keyName = 'Key' + upperText;
        found = true;
      }
    }
    }
    }
    
    bool NwClipboardReadAvailableTypesFunction::RunNWSync(base::ListValue* response, std::string* error) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  bool contains_filenames;
  std::vector<base::string16> types;
  clipboard->ReadAvailableTypes(ui::CLIPBOARD_TYPE_COPY_PASTE, &types, &contains_filenames);
  for(std::vector<base::string16>::iterator it = types.begin(); it != types.end(); it++) {
    if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeText)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_TEXT))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeHTML)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_HTML))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypeRTF)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_RTF))));
    } else if (base::EqualsASCII(*it, ui::Clipboard::kMimeTypePNG)) {
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_PNG))));
      response->Append(base::WrapUnique(new base::Value(ToString(TYPE_JPEG))));
    }
  }
  return true;
}
    
      /* rb_ is currently ldb by nrhs; resize it to n by nrhs */
  rb_->size[0] = n;
  if (rb_ != rb)
    THDTensor_(resize2d)(rb, n, nrhs);
    
      // Returns the distance map between the baseline image and the image in the
  // last Compare() call (or the baseline image, if Compare() was not called
  // yet).
  // The dimensions of the distance map are the same as the baseline image.
  // The interpretation of the distance values depend on the comparator used.
  virtual const std::vector<float> distmap() const = 0;
    
    void OutputImageComponent::ToFloatPixels(float* out, int stride) const {
  assert(factor_x_ == 1);
  assert(factor_y_ == 1);
  for (int block_y = 0; block_y < height_in_blocks_; ++block_y) {
    for (int block_x = 0; block_x < width_in_blocks_; ++block_x) {
      coeff_t block[kDCTBlockSize];
      GetCoeffBlock(block_x, block_y, block);
      double blockd[kDCTBlockSize];
      for (int k = 0; k < kDCTBlockSize; ++k) {
        blockd[k] = block[k];
      }
      ComputeBlockIDCTDouble(blockd);
      for (int iy = 0; iy < 8; ++iy) {
        for (int ix = 0; ix < 8; ++ix) {
          int y = block_y * 8 + iy;
          int x = block_x * 8 + ix;
          if (y >= height_ || x >= width_) continue;
          out[(y * width_ + x) * stride] = static_cast<float>(blockd[8 * iy + ix] + 128.0);
        }
      }
    }
  }
}
    
    void TransformBlock(double block[64], Transform1d f) {
  double tmp[64];
  for (int x = 0; x < 8; ++x) {
    f(&block[x], 8, &tmp[x]);
  }
  for (int y = 0; y < 8; ++y) {
    f(&tmp[8 * y], 1, &block[8 * y]);
  }
}
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
        // The nodes are:
    // [0, n): the sorted leaf nodes that we start with.
    // [n]: we add a sentinel here.
    // [n + 1, 2n): new parent nodes are added here, starting from
    //              (n+1). These are naturally in ascending order.
    // [2n]: we add a sentinel at the end as well.
    // There will be (2n+1) elements at the end.
    const HuffmanTree sentinel(~static_cast<uint32_t>(0), -1, -1);
    tree[n] = sentinel;
    tree[n + 1] = sentinel;
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
    #include 'guetzli/jpeg_data.h'
    
    #include 'guetzli/output_image.h'
    
    #include <algorithm>
#include <string.h>
    
    namespace guetzli {
    }
    
    #include <string>
    
    // Functions for writing a JPEGData object into a jpeg byte stream.
    
    
    {}  // namespace guetzli

    
    class Dictionary {
 public:
  static const size_t kMaxDictSize = 1 << 14;
    }
    
    ExternalFunctions::ExternalFunctions() {
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  this->NAME = ::NAME;                                                         \
  CheckFnPtr((void *)::NAME, #NAME, WARN);
    }
    
    
    {  auto TimeOfUnit =
      duration_cast<seconds>(UnitStopTime - UnitStartTime).count();
  if (!(TotalNumberOfRuns & (TotalNumberOfRuns - 1)) &&
      secondsSinceProcessStartUp() >= 2)
    PrintStats('pulse ');
  if (TimeOfUnit > TimeOfLongestUnitInSeconds * 1.1 &&
      TimeOfUnit >= Options.ReportSlowUnits) {
    TimeOfLongestUnitInSeconds = TimeOfUnit;
    Printf('Slowest unit: %zd s:\n', TimeOfLongestUnitInSeconds);
    WriteUnitToFileWithPrefix({Data, Data + Size}, 'slow-unit-');
  }
  return Res;
}
    
    
    {  // Mutate the integer value.
  switch(Rand(5)) {
    case 0: Val++; break;
    case 1: Val--; break;
    case 2: Val /= 2; break;
    case 3: Val *= 2; break;
    case 4: Val = Rand(Val * Val); break;
    default: assert(0);
  }
  // Just replace the bytes with the new ones, don't bother moving bytes.
  for (size_t i = B; i < E; i++) {
    size_t Idx = E + B - i - 1;
    assert(Idx >= B && Idx < E);
    Data[Idx] = (Val % 10) + '0';
    Val /= 10;
  }
  return Size;
}
    
      /// Applies one of the configured mutations.
  /// Returns the new size of data which could be up to MaxSize.
  size_t Mutate(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Applies one of the default mutations. Provided as a service
  /// to mutation authors.
  size_t DefaultMutate(uint8_t *Data, size_t Size, size_t MaxSize);
    
    std::string Hash(const Unit &U);
    
    void PrintASCII(const uint8_t *Data, size_t Size, const char *PrintAfter = '');
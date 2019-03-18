
        
            for (int inputIdx = 0; inputIdx < def_.input_size() / 3; ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * 3));
      input_blob_names.push_back(I(inputIdx * 3 + 2));
      output_blob_names.push_back(GI(inputIdx * 3 + 1));
    }
    input_blob_names.push_back(GO(3));
    
              const TensorShape& X = in[0];
          int N = 0, C = 0, H = 0, W = 0;
          switch (order) {
            case StorageOrder::NCHW:
              N = X.dims(0);
              C = X.dims(1);
              H = X.dims(2);
              W = X.dims(3);
              break;
            case StorageOrder::NHWC:
              N = X.dims(0);
              H = X.dims(1);
              W = X.dims(2);
              C = X.dims(3);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    // Max number of scripts in ICU + 'NULL' + Japanese and Korean + Fraktur
const int kMaxNumberOfScripts = 116 + 1 + 2 + 1;
    
    #ifndef TESSERACT_CCMAIN_PAGEITERATOR_H_
#define TESSERACT_CCMAIN_PAGEITERATOR_H_
    
    
    {  for (std::map<int, ParamContent*>::iterator iter = vcMap.begin();
                                          iter != vcMap.end();
                                          ++iter) {
    ParamContent* cur = iter->second;
    if (!changes_only || cur->HasChanged()) {
      fprintf(fp, '%-25s   %-12s   # %s\n',
              cur->GetName(), cur->GetValue().string(), cur->GetDescription());
    }
  }
  fclose(fp);
}
#endif // GRAPHICS_DISABLED

    
    #ifndef GRAPHICS_DISABLED
    
    #include <cstdio>    // for FILE
#include 'strngs.h'  // for STRING
    
      const STRING& document_name() const {
    SVAutoLock lock(&general_mutex_);
    return document_name_;
  }
  int NumPages() const {
    SVAutoLock lock(&general_mutex_);
    return total_pages_;
  }
  int64_t memory_used() const {
    SVAutoLock lock(&general_mutex_);
    return memory_used_;
  }
  // If the given index is not currently loaded, loads it using a separate
  // thread. Note: there are 4 cases:
  // Document uncached: IsCached() returns false, total_pages_ < 0.
  // Required page is available: IsPageAvailable returns true. In this case,
  // total_pages_ > 0 and
  // pages_offset_ <= index%total_pages_ <= pages_offset_+pages_.size()
  // Pages are loaded, but the required one is not.
  // The requested page is being loaded by LoadPageInBackground. In this case,
  // index == pages_offset_. Once the loading starts, the pages lock is held
  // until it completes, at which point IsPageAvailable will unblock and return
  // true.
  void LoadPageInBackground(int index);
  // Returns a pointer to the page with the given index, modulo the total
  // number of pages. Blocks until the background load is completed.
  const ImageData* GetPage(int index);
  // Returns true if the requested page is available, and provides a pointer,
  // which may be nullptr if the document is empty. May block, even though it
  // doesn't guarantee to return true.
  bool IsPageAvailable(int index, ImageData** page);
  // Takes ownership of the given page index. The page is made nullptr in *this.
  ImageData* TakePage(int index) {
    SVAutoLock lock(&pages_mutex_);
    ImageData* page = pages_[index];
    pages_[index] = nullptr;
    return page;
  }
  // Returns true if the document is currently loaded or in the process of
  // loading.
  bool IsCached() const { return NumPages() >= 0; }
  // Removes all pages from memory and frees the memory, but does not forget
  // the document metadata. Returns the memory saved.
  int64_t UnCache();
  // Shuffles all the pages in the document.
  void Shuffle();
    
    U_NAMESPACE_END
    
    ScientificNumberFormatter *ScientificNumberFormatter::createSuperscriptInstance(
            DecimalFormat *fmtToAdopt, UErrorCode &status) {
    return createInstance(fmtToAdopt, new SuperscriptStyle(), status);
}
    
    U_NAMESPACE_BEGIN
    
    class UnicodeSet;
    
    #include 'unicode/uobject.h'
#include 'unicode/utypes.h'
    
        /**
     * Returns TRUE if this class can format positiveValue using
     * the given range of digit counts.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UBool canFormat(
            int32_t positiveValue, const IntDigitCountRange &range);
    
    U_NAMESPACE_BEGIN
    
                    // Insert any accumulated straight text.
                if (buf.length() > 0) {
                    text.handleReplaceBetween(destLimit, destLimit, buf);
                    destLimit += buf.length();
                    buf.truncate(0);
                }
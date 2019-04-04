
        
          // Now, add all generic parameters from the conforming type.
  if (conformanceSig) {
    for (auto param : conformanceSig->getGenericParams()) {
      auto substParam = Type(param).subst(conformanceToSyntheticTypeFn,
                                          conformanceToSyntheticConformanceFn);
      builder.addGenericParameter(substParam->castTo<GenericTypeParamType>());
    }
  }
    
    namespace llvm {
template<> struct DenseMapInfo<DefaultCacheKey> {
  static inline DefaultCacheKey getEmptyKey() {
    return { DenseMapInfo<void*>::getEmptyKey(), nullptr };
  }
  static inline DefaultCacheKey getTombstoneKey() {
    return { DenseMapInfo<void*>::getTombstoneKey(), nullptr };
  }
  static unsigned getHashValue(const DefaultCacheKey &Val) {
    uintptr_t Hash = Val.CBs->keyHashCB(Val.Key, nullptr);
    return DenseMapInfo<uintptr_t>::getHashValue(Hash);
  }
  static bool isEqual(const DefaultCacheKey &LHS, const DefaultCacheKey &RHS) {
    if (LHS.Key == RHS.Key)
      return true;
    if (LHS.Key == DenseMapInfo<void*>::getEmptyKey() ||
        LHS.Key == DenseMapInfo<void*>::getTombstoneKey() ||
        RHS.Key == DenseMapInfo<void*>::getEmptyKey() ||
        RHS.Key == DenseMapInfo<void*>::getTombstoneKey())
      return false;
    return LHS.CBs->keyIsEqualCB(LHS.Key, RHS.Key, nullptr);
  }
};
} // namespace llvm
    
    
    {  return Begin + oldSize;
}  

    
      bool isConst() const { return IsConst; }
    
      StringRef presumedFile = presumedLoc.getFilename();
  SourceLoc startOfLine = loc.getAdvancedLoc(-presumedLoc.getColumn() + 1);
  bool isNewVirtualFile =
    swiftSrcMgr.openVirtualFile(startOfLine, presumedFile,
                                presumedLoc.getLine() - bufferLineNumber);
  if (isNewVirtualFile) {
    SourceLoc endOfLine = findEndOfLine(swiftSrcMgr, loc, mirrorID);
    swiftSrcMgr.closeVirtualFile(endOfLine);
  }
    
    void Demangler::dump() {
  for (unsigned Idx = 0; Idx < NodeStack.size(); ++Idx) {
    fprintf(stderr, 'NodeStack[%u]:\n', Idx);
    NodeStack[Idx]->dump();
    fprintf(stderr, '\n');
  }
  fprintf(stderr, 'Position = %zd:\n%.*s\n%*s\n', Pos,
          (int)Text.size(), Text.data(), (int)Pos + 1, '^');
}
    
    void VerifyDebugInfoJobAction::anchor() {}
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  /// @copydoc ContrastiveLossLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    /**
 * @brief Takes a Blob and crop it, to the shape specified by the second input
 *  Blob, across all dimensions after the specified axis.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
    
    #include 'caffe/layers/deconv_layer.hpp'
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/sigmoid_layer.hpp'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    class OrientationDetector {
 public:
  OrientationDetector(const GenericVector<int>* allowed_scripts,
                      OSResults* results);
  bool detect_blob(BLOB_CHOICE_LIST* scores);
  int get_orientation();
 private:
  OSResults* osr_;
  const GenericVector<int>* allowed_scripts_;
};
    
    
    {  TBLOB* blob;
  Tesseract* tesseract;
  BLOB_CHOICE_LIST** choices;
};
    
    // Class to hold an array of bounding boxes for an output word and
// the bounding box of the whole word.
class BoxWord {
 public:
  BoxWord();
  explicit BoxWord(const BoxWord& src);
  ~BoxWord() = default;
    }
    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }
    
     private:
  // Simple struct to hold an ICOORD point and a halfwidth representing half
  // the 'width' (supposedly approximately parallel to the direction of the
  // line) of each point, such that distant points can be discarded when they
  // overlap nearer points. (Think i dot and other diacritics or noise.)
  struct PointWidth {
    PointWidth() : pt(ICOORD(0, 0)), halfwidth(0) {}
    PointWidth(const ICOORD& pt0, int halfwidth0)
      : pt(pt0), halfwidth(halfwidth0) {}
    }
    
    
    {}  // namespace tesseract.
    
      // The pointed-to Pair has changed its key value, so the location of pair
  // is reshuffled to maintain the heap invariant.
  // Must be a valid pointer to an element of the heap_!
  // Caution! Since GenericHeap is based on GenericVector, reallocs may occur
  // whenever the vector is extended and elements may get shuffled by any
  // Push or Pop operation. Therefore use this function only if Data in Pair is
  // of type DoublePtr, derived (first) from DoublePtr, or has a DoublePtr as
  // its first element. Reshuffles the heap to maintain the invariant.
  // Time = O(log n).
  void Reshuffle(Pair* pair) {
    int index = pair - &heap_[0];
    Pair hole_pair = heap_[index];
    index = SiftDown(index, hole_pair);
    index = SiftUp(index, hole_pair);
    heap_[index] = hole_pair;
  }
    
    #include 'pch.h'
#include 'DateCalculator.xaml.h'
#include 'CalcViewModel/Common/TraceLogger.h'
#include 'CalcViewModel/Common/CopyPasteManager.h'
#include 'CalcViewModel/Common/LocalizationSettings.h'
#include 'CalcViewModel/DateCalculatorViewModel.h'
    
    
    {        return initializer.viewMode == mode;
    });
    
                void GetCategories(_In_ std::shared_ptr<std::vector<UnitConversionManager::Category>> categoriesList);
            void GetUnits(_In_ std::unordered_map<CalculatorApp::Common::ViewMode, std::vector<CalculatorApp::ViewModel::OrderedUnit>>& unitMap);
            void GetConversionData(_In_ std::unordered_map<CalculatorApp::Common::ViewMode, std::unordered_map<int, double>>& categoryToUnitConversionMap);
            void GetExplicitConversionData(_In_ std::unordered_map<int, std::unordered_map<int, UnitConversionManager::ConversionData>>& unitToUnitConversionList);
    
        private:
        void FromDate_DateChanged(_In_ Windows::UI::Xaml::Controls::CalendarDatePicker^ sender, _In_ Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs^ e);
        void ToDate_DateChanged(_In_ Windows::UI::Xaml::Controls::CalendarDatePicker^ sender, _In_ Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs^ e);
        void AddSubtract_DateChanged(_In_ Windows::UI::Xaml::Controls::CalendarDatePicker^ sender, _In_ Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs^ e);
        void OffsetValue_Changed(_In_ Platform::Object^ sender, _In_ Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
        void OnCopyMenuItemClicked(_In_ Platform::Object^ sender, _In_ Windows::UI::Xaml::RoutedEventArgs^ e);
        void OnLoaded(_In_ Platform::Object^ sender, _In_ Windows::UI::Xaml::RoutedEventArgs^ e);
        void DateCalcOption_Changed(_In_ Platform::Object^ sender, _In_ Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
        void AddSubtractDateGrid_Loaded(_In_ Platform::Object^ sender, _In_ Windows::UI::Xaml::RoutedEventArgs^ e);
        void AddSubtractOption_Checked(_In_ Platform::Object^ sender, _In_ Windows::UI::Xaml::RoutedEventArgs^ e);
        void ReselectCalendarDate(_In_ Windows::UI::Xaml::Controls::CalendarDatePicker^ calendarDatePicker, Windows::Foundation::DateTime dateTime);
        void OffsetDropDownClosed(_In_ Platform::Object^ sender, _In_ Platform::Object^ e);
        void CalendarFlyoutClosed(_In_ Platform::Object^ sender, _In_ Platform::Object^ e);
        void RaiseLiveRegionChangedAutomationEvent(_In_ bool isDateDiffMode);
    
            DEPENDENCY_PROPERTY_OWNER(Memory);
        DEPENDENCY_PROPERTY(Windows::UI::Xaml::GridLength, RowHeight);
    
        // the following call will not add an object, because there is already
    // a value stored at key 'B'
    auto res2 = null.emplace('B', 'c');
    
    
    {  rocksdb::CacheBench bench;
  if (FLAGS_populate_cache) {
    bench.PopulateCache();
  }
  if (bench.Run()) {
    return 0;
  } else {
    return 1;
  }
}
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
      // if background compaction is not working, write will stall
  // because of options.level0_stop_writes_trigger
  for (int i = 1000; i < 99999; ++i) {
    db->Put(WriteOptions(), std::to_string(i),
                            std::string(500, 'a' + (i % 26)));
  }
    
    
    {// Factor method to create a new persistent cache
Status NewPersistentCache(Env* const env, const std::string& path,
                          const uint64_t size,
                          const std::shared_ptr<Logger>& log,
                          const bool optimized_for_nvm,
                          std::shared_ptr<PersistentCache>* cache);
}  // namespace rocksdb

    
    class Cache;
class Comparator;
class Env;
class FilterPolicy;
class Logger;
struct Options;
class Snapshot;
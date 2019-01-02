
    {  // The number of pages we have processed.
  int page_count_;
};
    
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
    
    
/**********************************************************************
 * split_and_recog_word
 *
 * Split the word into 2 smaller pieces at the largest gap.
 * Recognize the pieces and stick the results back together.
 **********************************************************************/
void Tesseract::split_and_recog_word(WERD_RES *word) {
  // Find the biggest blob gap in the chopped_word.
  int bestgap = -INT32_MAX;
  int split_index = 0;
  for (int b = 1; b < word->chopped_word->NumBlobs(); ++b) {
    TBOX prev_box = word->chopped_word->blobs[b - 1]->bounding_box();
    TBOX blob_box = word->chopped_word->blobs[b]->bounding_box();
    int gap = blob_box.left() - prev_box.right();
    if (gap > bestgap) {
      bestgap = gap;
      split_index = b;
    }
  }
  ASSERT_HOST(split_index > 0);
    }
    
    // ReadNextBox factors out the code to interpret a line of a box
// file so that applybox and unicharset_extractor interpret the same way.
// This function returns the next valid box file utf8 string and coords
// and returns true, or false on eof (and closes the file).
// It ignores the utf8 file signature ByteOrderMark (U+FEFF=EF BB BF), checks
// for valid utf-8 and allows space or tab between fields.
// utf8_str is set with the unichar string, and bounding box with the box.
// If there are page numbers in the file, it reads them all.
bool ReadNextBox(int *line_number, FILE* box_file,
                 STRING* utf8_str, TBOX* bounding_box);
// As ReadNextBox above, but get a specific page number. (0-based)
// Use -1 to read any page number. Files without page number all
// read as if they are page 0.
bool ReadNextBox(int target_page, int *line_number, FILE* box_file,
                 STRING* utf8_str, TBOX* bounding_box);
    
      // Clean up the bounding boxes from the polygonal approximation by
  // expanding slightly, then clipping to the blobs from the original_word
  // that overlap. If not null, the block provides the inverse rotation.
  void ClipToOriginalWord(const BLOCK* block, WERD* original_word);
    
    namespace tesseract {
    }
    
    
    
    #include <cstdint>
#include <tuple>
    
    #ifndef incl_HPHP_PPC64_ASM_ASM_PPC64_H_
#define incl_HPHP_PPC64_ASM_ASM_PPC64_H_
    
      static const APCCollection* fromHandle(const APCHandle* handle) {
    assertx(handle->checkInvariants());
    assertx(handle->kind() == APCKind::SharedCollection);
    static_assert(offsetof(APCCollection, m_handle) == 0, '');
    return reinterpret_cast<const APCCollection*>(handle);
  }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    #if !UCONFIG_NO_BREAK_ITERATION
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
#include 'unicode/dtfmtsym.h'
    
        /**
     * Sets minimum significant digits. 0 or negative means no minimum.
     */
    void setMin(int32_t count) {
        fMin = count <= 0 ? 0 : count;
    }
    
    /**
 * Return true if this zone has the same rules and offset as another zone.
 * @param other the TimeZone object to be compared with
 * @return true if the given zone has the same rules and offset as this one
 */
UBool 
SimpleTimeZone::hasSameRules(const TimeZone& other) const
{
    if (this == &other) return TRUE;
    if (typeid(*this) != typeid(other)) return FALSE;
    SimpleTimeZone *that = (SimpleTimeZone*)&other;
    return rawOffset     == that->rawOffset &&
        useDaylight     == that->useDaylight &&
        (!useDaylight
         // Only check rules if using DST
         || (dstSavings     == that->dstSavings &&
             startMode      == that->startMode &&
             startMonth     == that->startMonth &&
             startDay       == that->startDay &&
             startDayOfWeek == that->startDayOfWeek &&
             startTime      == that->startTime &&
             startTimeMode  == that->startTimeMode &&
             endMode        == that->endMode &&
             endMonth       == that->endMonth &&
             endDay         == that->endDay &&
             endDayOfWeek   == that->endDayOfWeek &&
             endTime        == that->endTime &&
             endTimeMode    == that->endTimeMode &&
             startYear      == that->startYear));
}
    
        /**
     * Returns TRUE if this class can format positiveValue using
     * the given range of digit counts.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UBool canFormat(
            int32_t positiveValue, const IntDigitCountRange &range);
    
    #endif  // !UCONFIG_NO_FORMATTING
#endif  // __STANDARDPLURAL_H__

    
    extern uint32_t GetColumnFamilyID(ColumnFamilyHandle* column_family);
    
    Status WriteBatchBase::Delete(const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return Delete(key_slice);
}
    
    
    {  // close DB
  for (auto* handle : handles) {
    delete handle;
  }
  delete db;
}

    
    struct DumpOptions {
  // Database that will be dumped
  std::string db_path;
  // File location that will contain dump output
  std::string dump_location;
  // Don't include db information header in the dump
  bool anonymous = false;
};
    
    // PersistentCache
//
// Persistent cache interface for caching IO pages on a persistent medium. The
// cache interface is specifically designed for persistent read cache.
class PersistentCache {
 public:
  typedef std::vector<std::map<std::string, double>> StatsType;
    }
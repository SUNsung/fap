
        
        PlatformKind swift::targetPlatform(LangOptions &LangOpts) {
  if (LangOpts.Target.isMacOSX()) {
    return (LangOpts.EnableAppExtensionRestrictions
                ? PlatformKind::OSXApplicationExtension
                : PlatformKind::OSX);
  }
    }
    
    void
SyntaxASTMap::recordSyntaxMapping(RC<syntax::SyntaxData> FromNode,
                                  ASTNode ToNode) {
  if (FromNode->getKind() == SyntaxKind::Unknown) {
    return;
  }
    }
    
    void TypeWalker::anchor() {}
    
    bool swift::canBeMemberName(StringRef identifier) {
  return llvm::StringSwitch<bool>(identifier)
    .Case('init', false)
    .Case('Protocol', false)
    .Case('self', false)
    .Case('Type', false)
    .Default(true);
}
    
      while ((!QueuedTasks.empty() && !SubtaskFailed) ||
         !ExecutingTasks.empty()) {
    // Enqueue additional tasks if we have additional tasks, we aren't already
    // at the parallel limit, and no earlier subtasks have failed.
    while (!SubtaskFailed && !QueuedTasks.empty() &&
           ExecutingTasks.size() < MaxNumberOfParallelTasks) {
      std::unique_ptr<DummyTask> T(QueuedTasks.front().release());
      QueuedTasks.pop();
    }
    }
    
    
<details>
    
    
    { private:
  const int kNumTensorsPerInput = 5;
};
    
    #endif // CAFFE2_OPERATORS_FLEXIBLE_TOP_K_H_

    
    **Code**
    
    ButteraugliComparator::ButteraugliComparator(const int width, const int height,
                                             const std::vector<uint8_t>* rgb,
                                             const float target_distance,
                                             ProcessStats* stats)
    : width_(width),
      height_(height),
      target_distance_(target_distance),
      rgb_orig_(*rgb),
      comparator_(LinearRgb(width_, height_, *rgb)),
      distance_(0.0),
      stats_(stats) {}
    
    // We don't really need to round before descaling, since we
// still have 4 bits of precision left as final scaled output.
#define DESCALE(a)  static_cast<coeff_t>((a) >> 16)
    
    namespace guetzli {
    }
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    
    {}  // namespace guetzli
    
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
    
    // Parses the jpeg stream contained in data[*pos ... len) and fills in *jpg with
// the parsed information.
// If mode is JPEG_READ_HEADER, it fills in only the image dimensions in *jpg.
// Returns false if the data is not valid jpeg, or if it contains an unsupported
// jpeg feature.
bool ReadJpeg(const uint8_t* data, const size_t len, JpegReadMode mode,
              JPEGData* jpg);
// string variant
bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg);
    
    
    {}  // namespace
    
        static BOOST_FORCEINLINE storage_type load(storage_type const volatile& storage, memory_order order) BOOST_NOEXCEPT
    {
        storage_type v = BOOST_ATOMIC_DETAIL_ARM_LOAD16(&storage);
        base_type::fence_after_load(order);
        return v;
    }
    
    BOOST_FORCEINLINE void pause() BOOST_NOEXCEPT
{
#if defined(_MSC_VER) && (defined(_M_AMD64) || defined(_M_IX86))
    _mm_pause();
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
    __asm__ __volatile__('pause;');
#endif
}
    
        struct aligned
    {
        type value;
    }
    
    #include <boost/memory_order.hpp>
#include <boost/atomic/capabilities.hpp>
#include <boost/atomic/detail/operations.hpp>
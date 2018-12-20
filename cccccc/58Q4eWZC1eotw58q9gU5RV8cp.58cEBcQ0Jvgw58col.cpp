
        
        class TrayIcon;
    
    
    {  DISALLOW_COPY_AND_ASSIGN(WebRequest);
};
    
    SavePageHandler::~SavePageHandler() {}
    
      // Get the weak_map_id from SupportsUserData.
  static int32_t GetIDFromWrappedClass(base::SupportsUserData* wrapped);
    
    void AtomBrowserMainParts::HandleSIGCHLD() {
  // We need to accept SIGCHLD, even though our handler is a no-op because
  // otherwise we cannot wait on children. (According to POSIX 2001.)
  struct sigaction action;
  memset(&action, 0, sizeof(action));
  action.sa_handler = SIGCHLDHandler;
  CHECK_EQ(sigaction(SIGCHLD, &action, nullptr), 0);
}
    
    namespace api {
class WebContents;
}
    
    namespace atom {
    }
    
    #endif  // ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_

    
    SILLayout::SILLayout(CanGenericSignature Sig,
                     ArrayRef<SILField> Fields)
  : GenericSigAndFlags(Sig, getFlagsValue(anyMutable(Fields))),
    NumFields(Fields.size())
{
#ifndef NDEBUG
  verifyFields(Sig, Fields);
#endif
  auto FieldsMem = getTrailingObjects<SILField>();
  for (unsigned i : indices(Fields)) {
    new (FieldsMem + i) SILField(Fields[i]);
  }
}
    
    private:
  unsigned getNumReplacementTypes() const {
    return genericSig->getGenericParams().size();
  }
    
      assert(capacity % 16 == 0 && 'not allocating multiple of alignment');
    
    enum class ChildKind { Left, Right, Further, Root };
    
    
    {
    {    return index;
  }
}
    
      auto mirrorIter = mirroredBuffers.find(buffer);
  if (mirrorIter != mirroredBuffers.end()) {
    mirrorID = mirrorIter->second;
  } else {
    std::unique_ptr<llvm::MemoryBuffer> mirrorBuffer{
      llvm::MemoryBuffer::getMemBuffer(buffer->getBuffer(),
                                       buffer->getBufferIdentifier(),
                                       /*RequiresNullTerminator=*/true)
    };
    mirrorID = swiftSrcMgr.addNewSourceBuffer(std::move(mirrorBuffer));
    mirroredBuffers[buffer] = mirrorID;
  }
  loc = swiftSrcMgr.getLocForOffset(mirrorID, decomposedLoc.second);
    
    /// Translate the given operator character into its mangled form.
///
/// Current operator characters:   @/=-+*%<>!&|^~ and the special operator '..'
char Mangle::translateOperatorChar(char op) {
  switch (op) {
    case '&': return 'a'; // 'and'
    case '@': return 'c'; // 'commercial at sign'
    case '/': return 'd'; // 'divide'
    case '=': return 'e'; // 'equal'
    case '>': return 'g'; // 'greater'
    case '<': return 'l'; // 'less'
    case '*': return 'm'; // 'multiply'
    case '!': return 'n'; // 'negate'
    case '|': return 'o'; // 'or'
    case '+': return 'p'; // 'plus'
    case '?': return 'q'; // 'question'
    case '%': return 'r'; // 'remainder'
    case '-': return 's'; // 'subtract'
    case '~': return 't'; // 'tilde'
    case '^': return 'x'; // 'xor'
    case '.': return 'z'; // 'zperiod' (the z is silent)
    default:
      return op;
  }
}
    
    IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Call_Static_Method,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
    #if defined(OS_WIN)
#include 'base/strings/utf_string_conversions.h'
#include 'base/files/file_path.h'
#include 'base/files/file_util.h'
#include 'base/win/shortcut.h'
#include 'base/path_service.h'
#include 'content/nw/src/common/shell_switches.h'
#endif
    
    
    {}  // namespace nwapi
    
    namespace nw {
    }
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    class NwAppQuitFunction : public UIThreadExtensionFunction {
 public:
  NwAppQuitFunction();
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.setListSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardSetListSyncFunction);
};
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
      // implement nw.Screen.stopMonitor()
  class NwScreenStopMonitorFunction : public NWSyncExtensionFunction {
  public:
    NwScreenStopMonitorFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
      bool AllDone() const {
    return num_done_ >= num_threads_;
  }
    
      // Input statistics
  // TODO(noetzli): The stats are incomplete. They are lacking everything
  // consumed by MergeHelper.
  uint64_t num_input_records = 0;
  uint64_t num_input_deletion_records = 0;
  uint64_t num_input_corrupt_records = 0;
  uint64_t total_input_raw_key_bytes = 0;
  uint64_t total_input_raw_value_bytes = 0;
    
    #include <string>
    
      // Start a transaction
  Transaction* txn = txn_db->BeginTransaction(write_options);
  assert(txn);
    
    Status GetStringFromCompressionType(std::string* compression_str,
                                    CompressionType compression_type);
    
    struct DumpOptions {
  // Database that will be dumped
  std::string db_path;
  // File location that will contain dump output
  std::string dump_location;
  // Don't include db information header in the dump
  bool anonymous = false;
};
    
    
    {  // time spent in open() and fopen().
  uint64_t open_nanos;
  // time spent in fallocate().
  uint64_t allocate_nanos;
  // time spent in write() and pwrite().
  uint64_t write_nanos;
  // time spent in read() and pread()
  uint64_t read_nanos;
  // time spent in sync_file_range().
  uint64_t range_sync_nanos;
  // time spent in fsync
  uint64_t fsync_nanos;
  // time spent in preparing write (fallocate etc).
  uint64_t prepare_write_nanos;
  // time spent in Logger::Logv().
  uint64_t logger_nanos;
};
    
      // Obtain the name of an operation given its type.
  static const std::string& GetOperationName(OperationType op_type);
    
    void compareBenchmarkResults(const std::string& base, const std::string& test) {
  printResultComparison(resultsFromFile(base), resultsFromFile(test));
}
    
      /**
   * Returns a random uint32_t in [min, max). If min == max, returns 0.
   */
  static uint32_t rand32(uint32_t min, uint32_t max) {
    return rand32(min, max, ThreadLocalPRNG());
  }
    
    #include <string>
    
    
    {  // Test for overflow.
  // Use a custom hours type using time_t as the underlying storage type to
  // guarantee that we can overflow.
  using hours_timet = std::chrono::duration<time_t, std::ratio<3600>>;
  EXPECT_THROW(
      to<struct timespec>(hours_timet(std::numeric_limits<time_t>::max())),
      std::range_error);
}
    
      bool hasImplementation() {
    performLazyInit();
    return static_cast<bool>(increment_);
  }
    
    CacheLocality CacheLocality::readFromSysfsTree(
    const std::function<std::string(std::string)>& mapping) {
  // number of equivalence classes per level
  std::vector<size_t> numCachesByLevel;
    }
    
     private:
  using Holder = std::shared_ptr<T>;
    
    #include <math.h>
    
    
    {  const int components = png_get_channels(png_ptr, info_ptr);
  switch (components) {
    case 1: {
      // GRAYSCALE
      for (int y = 0; y < *ysize; ++y) {
        const uint8_t* row_in = row_pointers[y];
        uint8_t* row_out = &(*rgb)[3 * y * (*xsize)];
        for (int x = 0; x < *xsize; ++x) {
          const uint8_t gray = row_in[x];
          row_out[3 * x + 0] = gray;
          row_out[3 * x + 1] = gray;
          row_out[3 * x + 2] = gray;
        }
      }
      break;
    }
    case 2: {
      // GRAYSCALE + ALPHA
      for (int y = 0; y < *ysize; ++y) {
        const uint8_t* row_in = row_pointers[y];
        uint8_t* row_out = &(*rgb)[3 * y * (*xsize)];
        for (int x = 0; x < *xsize; ++x) {
          const uint8_t gray = BlendOnBlack(row_in[2 * x], row_in[2 * x + 1]);
          row_out[3 * x + 0] = gray;
          row_out[3 * x + 1] = gray;
          row_out[3 * x + 2] = gray;
        }
      }
      break;
    }
    case 3: {
      // RGB
      for (int y = 0; y < *ysize; ++y) {
        const uint8_t* row_in = row_pointers[y];
        uint8_t* row_out = &(*rgb)[3 * y * (*xsize)];
        memcpy(row_out, row_in, 3 * (*xsize));
      }
      break;
    }
    case 4: {
      // RGBA
      for (int y = 0; y < *ysize; ++y) {
        const uint8_t* row_in = row_pointers[y];
        uint8_t* row_out = &(*rgb)[3 * y * (*xsize)];
        for (int x = 0; x < *xsize; ++x) {
          const uint8_t alpha = row_in[4 * x + 3];
          row_out[3 * x + 0] = BlendOnBlack(row_in[4 * x + 0], alpha);
          row_out[3 * x + 1] = BlendOnBlack(row_in[4 * x + 1], alpha);
          row_out[3 * x + 2] = BlendOnBlack(row_in[4 * x + 2], alpha);
        }
      }
      break;
    }
    default:
      png_destroy_read_struct(&png_ptr, &info_ptr, nullptr);
      return false;
  }
  png_destroy_read_struct(&png_ptr, &info_ptr, nullptr);
  return true;
}
    
    #ifndef GUETZLI_JPEG_BIT_WRITER_H_
#define GUETZLI_JPEG_BIT_WRITER_H_
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
      int iquant[3 * kDCTBlockSize];
  int idx = 0;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < kDCTBlockSize; ++j) {
      int v = quant[idx];
      jpg->quant[i].values[j] = v;
      iquant[idx++] = ((1 << kIQuantBits) + 1) / v;
    }
  }
    
    #endif  // GUETZLI_JPEG_DATA_ENCODER_H_

    
    // Updates ac_histogram with the counts of the AC symbols that will be added by
// a sequential jpeg encoder for this block. Every symbol is counted twice so
// that we can add a fake symbol at the end with count 1 to be the last (least
// frequent) symbol with the all 1 code.
void UpdateACHistogramForDCTBlock(const coeff_t* coeffs,
                                  JpegHistogram* ac_histogram) {
  int r = 0;
  for (int k = 1; k < 64; ++k) {
    coeff_t coeff = coeffs[kJPEGNaturalOrder[k]];
    if (coeff == 0) {
      r++;
      continue;
    }
    while (r > 15) {
      ac_histogram->Add(0xf0);
      r -= 16;
    }
    int nbits = Log2FloorNonZero(std::abs(coeff)) + 1;
    int symbol = (r << 4) + nbits;
    ac_histogram->Add(symbol);
    r = 0;
  }
  if (r > 0) {
    ac_histogram->Add(0);
  }
}
    
    #include 'guetzli/jpeg_data.h'
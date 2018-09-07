
        
        #include 'intsimdmatrix.h'
#include 'genericvector.h'      // for GenericVector
#include 'intsimdmatrixavx2.h'  // for IntSimdMatrixAVX2
#include 'intsimdmatrixsse.h'   // for IntSimdMatrixSSE
#include 'matrix.h'             // for GENERIC_2D_ARRAY
#include 'simddetect.h'         // for SIMDDetect
    
    // Base class for a SIMD function to multiply a matrix by a vector, with sources
// of 8-bit signed integer, and result in a double, after appropriate scaling.
// Assumes a specific method of multiplication that can be applied to any size
// and number of SIMD registers as follows:
// int32_t results are computed with num_outputs_per_register_ in each of
// max_output_registers_ result registers, repeatedly until it would make too
// many results, then the number of registers is halved, and so-on down to a
// single result register. The last calculation only outputs the required number
// of results instead of writing beyond the bounds. Eg: matrix has 75 outputs,
//  num_outputs_per_register_ = 4, and max_output_registers_ = 8,
// Step 1: 8x4=32 results are computed,
// Step 2: 8x4=32 again, total 64,
// Step 3: 2x4=8 (since 8x4 is too many, so is 4x4), total 72,
// Step 4: 1x3, total 75.
// Each step above is computed using a PartialFunc, which runs over the input
// vector once. The input is read one registerful of num_inputs_per_register_
// at a time (presumably 4x num_outputs_per_register_ since they are int8_t)
// so the inputs MUST BE PADDED to a multiple of num_inputs_per_register_.
// Since it is slow (on Intel at least) to horizontally add in a register,
// provision is made to process num_inputs_per_group_ inputs at a time, with
// the group being replicated num_input_groups_ times and multiplied by a
// num_inputs_per_group_ by num_input_groups_ rectangle of the weights matrix.
// This is most convenient if num_inputs_per_group_ is 4, and the product
// sign-extends and sums 8x8=16 bit results to 32 bits, adding 4 adjacent
// results in the process, but it doesn't have to be implemented that way.
// The weights are re-ordered by Init() to be used sequentially by the above
// algorithm, followed by the biases, so they can be added at the end.
// The base class computes the base C++ implementation.
// NOTE that, although the subclasses execute on different SIMD hardware, no
// virtual methods are needed, as the constructor sets up everything that
// is required to allow the base class implementation to do all the work.
class IntSimdMatrix {
 public:
  // Constructor should set the data members to indicate the sizes.
  // NOTE: Base constructor public only for test purposes.
  IntSimdMatrix()
      : num_outputs_per_register_(1),
        max_output_registers_(1),
        num_inputs_per_register_(1),
        num_inputs_per_group_(1),
        num_input_groups_(1) {}
    }
    
    
    {}  // namespace tesseract.

    
    IntSimdMatrixSSE::IntSimdMatrixSSE() {
#ifdef __SSE4_1__
  partial_funcs_ = {PartialMatrixDotVector1};
#endif  // __SSE4_1__
}
    
    // Constructor.
// Tests the architecture in a system-dependent way to detect AVX, SSE and
// any other available SIMD equipment.
// __GNUC__ is also defined by compilers that include GNU extensions such as
// clang.
SIMDDetect::SIMDDetect() {
#if defined(X86_BUILD)
#if defined(__GNUC__)
  unsigned int eax, ebx, ecx, edx;
  if (__get_cpuid(1, &eax, &ebx, &ecx, &edx) != 0) {
    // Note that these tests all use hex because the older compilers don't have
    // the newer flags.
    sse_available_ = (ecx & 0x00080000) != 0;
    avx_available_ = (ecx & 0x10000000) != 0;
    if (avx_available_) {
      // There is supposed to be a __get_cpuid_count function, but this is all
      // there is in my cpuid.h. It is a macro for an asm statement and cannot
      // be used inside an if.
      __cpuid_count(7, 0, eax, ebx, ecx, edx);
      avx2_available_ = (ebx & 0x00000020) != 0;
      avx512F_available_ = (ebx & 0x00010000) != 0;
      avx512BW_available_ = (ebx & 0x40000000) != 0;
    }
  }
#elif defined(_WIN32)
  int cpuInfo[4];
  __cpuid(cpuInfo, 0);
  if (cpuInfo[0] >= 1) {
    __cpuid(cpuInfo, 1);
    sse_available_ = (cpuInfo[2] & 0x00080000) != 0;
    avx_available_ = (cpuInfo[2] & 0x10000000) != 0;
  }
#else
#error 'I don't know how to test for SIMD with this compiler'
#endif
#endif  // X86_BUILD
}

    
    PageIterator::PageIterator(PAGE_RES* page_res, Tesseract* tesseract, int scale,
                           int scaled_yres, int rect_left, int rect_top,
                           int rect_width, int rect_height)
    : page_res_(page_res),
      tesseract_(tesseract),
      word_(nullptr),
      word_length_(0),
      blob_index_(0),
      cblob_it_(nullptr),
      include_upper_dots_(false),
      include_lower_dots_(false),
      scale_(scale),
      scaled_yres_(scaled_yres),
      rect_left_(rect_left),
      rect_top_(rect_top),
      rect_width_(rect_width),
      rect_height_(rect_height) {
  it_ = new PAGE_RES_IT(page_res);
  PageIterator::Begin();
}
    
      // go through the list again and this time create the menu structure.
  vc_it.move_to_first();
  for (vc_it.mark_cycle_pt(); !vc_it.cycled_list(); vc_it.forward()) {
    ParamContent* vc = vc_it.data();
    STRING tag;
    STRING tag2;
    STRING tag3;
    GetPrefixes(vc->GetName(), &tag, &tag2, &tag3);
    }
    
      // Gets the first n words (split by _) and puts them in t.
  // For example, tesseract_foo_bar with N=2 will yield tesseract_foo_.
  void GetFirstWords(const char *s,  // source string
                     int n,          // number of words
                     char *t);       // target string
    
    template <typename B, typename D>
struct TypeInherits {
    }
    
    
    {		StreamFile() { f = NULL; }
	};
    
    #include 'io/logger.h'
    
    	int listen_sockfd;
	IP::Type sock_type;
    
    	return drive_count;
}
String DirAccessWindows::get_drive(int p_drive) {
    
    #endif

    
    void TCPServerWinsock::make_default() {
    }
    
    
    {	handle = NULL;
}
    
    
    {	~ThreadWindows();
};
    
    //////////////////////////////////////////////////////////////////////
    
    struct APCCollection {
  static APCHandle::Pair Make(const ObjectData*,
                              APCHandleLevel level,
                              bool unserializeObj);
  static void Delete(APCHandle*);
    }
    
    
    {  static void
  StringInsert(std::vector<std::string>& values, const std::string& /*key*/,
               const std::string& value) {
    values.push_back(value);
  }
  static void
  StringInsert(boost::container::flat_set<std::string>& values,
               const std::string& /*key*/, const std::string& value) {
    values.insert(value);
  }
  static void
  StringInsert(std::set<std::string, stdltistr>& values,
               const std::string& /*key*/, const std::string& value) {
    values.insert(value);
  }
  static void
  StringInsert(std::set<std::string>& values, const std::string& /*key*/,
               const std::string& value) {
    values.insert(value);
  }
  static void StringInsert(std::map<std::string, std::string> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void StringInsert(std::map<std::string, std::string,
                           stdltistr> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void StringInsert(hphp_string_imap<std::string> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void ReplaceIncludesWithIni(const std::string& original_ini_filename,
                                     const std::string& iniStr,
                                     std::string& with_includes);
};
    
      const char* data = filename.data();
  int data_len = filename.length();
  bool base64 = false;
  if (strncmp(data, 'data:', sizeof('data:') - 1)) {
    return nullptr;
  }
  data += sizeof('data:') - 1;
  data_len -= sizeof('data:') - 1;
    
    struct DataStreamWrapper final : Stream::Wrapper {
  DataStreamWrapper() {
    m_isLocal = true;
  }
    }
    
    
    {}

    
    //////////////////////////////////////////////////////////////////////
    
    /*!
 * \brief an iterator that iterates over a configure file and gets the configures
 */
class ConfigIterator: public ConfigStreamReader {
 public:
  /*!
   * \brief constructor
   * \param fname name of configure file
   */
  explicit ConfigIterator(const char *fname) : ConfigStreamReader(fi_) {
    fi_.open(fname);
    if (fi_.fail()) {
      LOG(FATAL) << 'cannot open file ' << fname;
    }
    ConfigReaderBase::Init();
  }
  /*! \brief destructor */
  ~ConfigIterator() {
    fi_.close();
  }
    }
    
    namespace xgboost {
namespace common {
/*!
 * \brief calculate the sigmoid of the input.
 * \param x input parameter
 * \return the transformed value.
 */
XGBOOST_DEVICE inline float Sigmoid(float x) {
  return 1.0f / (1.0f + expf(-x));
}
    }
    }
    
    #include <xgboost/base.h>
#include <xgboost/data.h>
#include <dmlc/threadediter.h>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>
#include '../common/common.h'
#include './sparse_page_writer.h'
    
    
    {
    {  ThreadState(uint32_t index, SharedState* _shared)
      : tid(index), rnd(1000 + index), shared(_shared) {}
};
}  // namespace
    
      if (allow_2pc_) {
    autovector<MemTable*> empty_list;
    auto imm_prep_log =
        imm()->PrecomputeMinLogContainingPrepSection(empty_list);
    auto mem_prep_log = mem()->GetMinLogContainingPrepSection();
    }
    
      virtual bool IgnoreSnapshots() const override { return true; }
    
    
    {
    {  // Get wal file in wal_dir
  if (dbname.compare(options.wal_dir) != 0) {
    if (!env->GetChildren(options.wal_dir, &files).ok()) {
      Error(options.info_log,
          'Error when reading %s dir\n',
          options.wal_dir.c_str());
      return;
    }
    wal_info.clear();
    for (std::string file : files) {
      if (ParseFileName(file, &number, &type)) {
        if (type == kLogFile) {
          env->GetFileSize(options.wal_dir + '/' + file, &file_size);
          char str[16];
          snprintf(str, sizeof(str), '%' PRIu64, file_size);
          wal_info.append(file).append(' size: ').
              append(str).append(' ; ');
        }
      }
    }
  }
  Header(options.info_log, 'Write Ahead Log file in %s: %s\n',
         options.wal_dir.c_str(), wal_info.c_str());
}
}  // namespace rocksdb

    
    namespace rocksdb {
    }
    
          // Truncate to available space if necessary
      if (p >= limit) {
        if (iter == 0) {
          continue;       // Try again with larger buffer
        } else {
          p = limit - 1;
        }
      }
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
      // Returns the distance map between the baseline image and the image in the
  // last Compare() call (or the baseline image, if Compare() was not called
  // yet).
  // The dimensions of the distance map are the same as the baseline image.
  // The interpretation of the distance values depend on the comparator used.
  virtual const std::vector<float> distmap() const = 0;
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    #endif  // GUETZLI_DEBUG_PRINT_H_

    
    inline int Log2Floor(uint32_t n) {
  return n == 0 ? -1 : Log2FloorNonZero(n);
}
    
    #include <cmath>
    
    bool ReadPNG(const std::string& data, int* xsize, int* ysize,
             std::vector<uint8_t>* rgb) {
  png_structp png_ptr =
      png_create_read_struct(PNG_LIBPNG_VER_STRING, nullptr, nullptr, nullptr);
  if (!png_ptr) {
    return false;
  }
    }
    
    #include <stdint.h>
    
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
    
    // Output callback function with associated data.
struct JPEGOutput {
  JPEGOutput(JPEGOutputHook cb, void* data) : cb(cb), data(data) {}
  bool Write(const uint8_t* buf, size_t len) const {
    return (len == 0) || (cb(data, buf, len) == len);
  }
 private:
  JPEGOutputHook cb;
  void* data;
};
    
        static BOOST_FORCEINLINE storage_type fetch_add(storage_type volatile& storage, storage_type v, memory_order) BOOST_NOEXCEPT
    {
        return static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD8(&storage, v));
    }
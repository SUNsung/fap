
        
        namespace atom {
    }
    
    
    {}  // namespace atom

    
      // Returns whether current process is browser process, currently we detect it
  // by checking whether current has used V8 Lock, but it might be a bad idea.
  static inline bool IsBrowserProcess() { return v8::Locker::IsActive(); }
    
      // This message is sent after a window has been opened.  The source is a
  // Source<Browser> containing the affected Browser.  No details are
  // expected.
  NOTIFICATION_BROWSER_OPENED = NOTIFICATION_CHROME_START,
    
    std::string TtsPlatformImpl::error() {
  return error_;
}
    
    
    {}  // namespace api
    
    static PyObject* recursive_to_list(
    char* data, IntList sizes, IntList strides, int64_t dim,
    ScalarType scalarType, int64_t elementSize)
{
  int64_t ndim = sizes.size();
  if (dim == ndim) {
    return torch::utils::load_scalar(data, scalarType);
  }
  auto n = sizes[dim];
  auto list = THPObjectPtr(PyList_New(n));
  if (!list) throw python_error();
  for (int64_t i = 0; i < n; i++) {
    PyObject* obj = recursive_to_list(data, sizes, strides, dim + 1, scalarType, elementSize);
    if (!obj) throw python_error();
    PyList_SET_ITEM(list.get(), i, obj);
    data += strides[dim] * elementSize;
  }
  return list.release();
}
    
    #define THCPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPDoubleStorageClass)
#define THCPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPFloatStorageClass)
#define THCPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPHalfStorageClass)
#define THCPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPLongStorageClass)
#define THCPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPIntStorageClass)
#define THCPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPShortStorageClass)
#define THCPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPCharStorageClass)
#define THCPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPByteStorageClass)
    
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
    
    
    {  THDTensor_(free)(THDTensor_(cloneColumnMajor)(ra, a));
}
    
    
    {    PyThreadState *_save = NULL;
    try {
      Py_UNBLOCK_THREADS;
      copyFunc(LIBRARY_STATE dst, THDPModule_makeDescriptor(src_));
      Py_BLOCK_THREADS;
    } catch (...) {
      if (_save) {
        Py_BLOCK_THREADS;
      }
      throw;
    }
  };
    
    #include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <sys/poll.h>
#include <fcntl.h>
#include <unistd.h>
#include <cstring>
#include <memory>
#include <string>
#include <thread>
#include <algorithm>
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
          jclass batchClass = jenv->GetObjectClass(batch);
      jlongArray joffset = (jlongArray)jenv->GetObjectField(
          batch, jenv->GetFieldID(batchClass, 'rowOffset', '[J'));
      jfloatArray jlabel = (jfloatArray)jenv->GetObjectField(
          batch, jenv->GetFieldID(batchClass, 'label', '[F'));
      jfloatArray jweight = (jfloatArray)jenv->GetObjectField(
          batch, jenv->GetFieldID(batchClass, 'weight', '[F'));
      jintArray jindex = (jintArray)jenv->GetObjectField(
          batch, jenv->GetFieldID(batchClass, 'featureIndex', '[I'));
      jfloatArray jvalue = (jfloatArray)jenv->GetObjectField(
        batch, jenv->GetFieldID(batchClass, 'featureValue', '[F'));
      XGBoostBatchCSR cbatch;
      cbatch.size = jenv->GetArrayLength(joffset) - 1;
      cbatch.offset = reinterpret_cast<jlong *>(
          jenv->GetLongArrayElements(joffset, 0));
      if (jlabel != nullptr) {
        cbatch.label = jenv->GetFloatArrayElements(jlabel, 0);
        CHECK_EQ(jenv->GetArrayLength(jlabel), static_cast<long>(cbatch.size))
            << 'batch.label.length must equal batch.numRows()';
      } else {
        cbatch.label = nullptr;
      }
      if (jweight != nullptr) {
        cbatch.weight = jenv->GetFloatArrayElements(jweight, 0);
        CHECK_EQ(jenv->GetArrayLength(jweight), static_cast<long>(cbatch.size))
            << 'batch.weight.length must equal batch.numRows()';
      } else {
        cbatch.weight = nullptr;
      }
      long max_elem = cbatch.offset[cbatch.size];
      cbatch.index = (int*) jenv->GetIntArrayElements(jindex, 0);
      cbatch.value = jenv->GetFloatArrayElements(jvalue, 0);
    
        while (make_next_col(page.get())) {
      for (size_t i = 0; i < page->Size(); ++i) {
        col_size_[i] += page->offset[i + 1] - page->offset[i];
      }
    }
    
      bool SingleColBlock() const override {
    return false;
  }
    
    
    {
    {XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
.describe('Raw binary data format.')
.set_body([]() {
    return new SparsePageRawFormat();
  });
}  // namespace data
}  // namespace xgboost

    
        bool FreeTypeFont::CalcGlyphInfo(uint32_t codepoint, GlyphInfo &glyph_info, FT_Glyph& ft_glyph, FT_BitmapGlyph& ft_bitmap)
    {
        uint32_t glyph_index = FT_Get_Char_Index(FreetypeFace, codepoint);
        if (glyph_index == 0)
            return false;
        FT_Error error = FT_Load_Glyph(FreetypeFace, glyph_index, FreetypeLoadFlags);
        if (error)
            return false;
    }
    
    void ImGui_ImplGlfw_Shutdown()
{
    for (ImGuiMouseCursor cursor_n = 0; cursor_n < ImGuiMouseCursor_COUNT; cursor_n++)
    {
        glfwDestroyCursor(g_MouseCursors[cursor_n]);
        g_MouseCursors[cursor_n] = NULL;
    }
    g_ClientApi = GlfwClientApi_Unknown;
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    //---- Don't define obsolete functions/enums names. Consider enabling from time to time after updating to avoid using soon-to-be obsolete function/names.
//#define IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    
    // Storage for current popup stack
struct ImGuiPopupRef
{
    ImGuiID             PopupId;        // Set on OpenPopup()
    ImGuiWindow*        Window;         // Resolved on BeginPopup() - may stay unresolved if user never calls OpenPopup()
    ImGuiWindow*        ParentWindow;   // Set on OpenPopup()
    int                 OpenFrameCount; // Set on OpenPopup()
    ImGuiID             OpenParentId;   // Set on OpenPopup(), we need this to differenciate multiple menu sets from each others (e.g. inside menu bar vs loose menu items)
    ImVec2              OpenPopupPos;   // Set on OpenPopup(), preferred popup position (typically == OpenMousePos when using mouse)
    ImVec2              OpenMousePos;   // Set on OpenPopup(), copy of mouse position at the time of opening popup
};
    
      // Returns the combined score of the output image in the last Compare() call
  // (or the baseline image, if Compare() was not called yet), based on output
  // size and the similarity metric.
  virtual double ScoreOutputSize(int size) const = 0;
    
    
    {
    {    int last_dc = 0;
    const coeff_t* src_coeffs = components_[c].coeffs();
    coeff_t* dest_coeffs = &comp->coeffs[0];
    for (int block_y = 0; block_y < comp->height_in_blocks; ++block_y) {
      for (int block_x = 0; block_x < comp->width_in_blocks; ++block_x) {
        if (block_y >= components_[c].height_in_blocks() ||
            block_x >= components_[c].width_in_blocks()) {
          dest_coeffs[0] = last_dc;
          for (int k = 1; k < kDCTBlockSize; ++k) {
            dest_coeffs[k] = 0;
          }
        } else {
          for (int k = 0; k < kDCTBlockSize; ++k) {
            const int quant = q[c][k];
            int coeff = src_coeffs[k];
            assert(coeff % quant == 0);
            dest_coeffs[k] = coeff / quant;
          }
          src_coeffs += kDCTBlockSize;
        }
        last_dc = dest_coeffs[0];
        dest_coeffs += kDCTBlockSize;
      }
    }
  }
  SaveQuantTables(q, jpg);
}
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    namespace guetzli {
    }
    
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
    
    namespace {
    }
    
    #include 'guetzli/jpeg_data.h'
    
    enum JpegReadMode {
  JPEG_READ_HEADER,   // only basic headers
  JPEG_READ_TABLES,   // headers and tables (quant, Huffman, ...)
  JPEG_READ_ALL,      // everything
};
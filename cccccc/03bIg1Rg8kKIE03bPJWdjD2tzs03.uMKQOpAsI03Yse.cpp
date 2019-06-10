
        
        namespace tensorflow {
    }
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    #include 'tensorflow/python/lib/core/py_exception_registry.h'
    
    string TryFindKernelClass(const string& serialized_node_def) {
  tensorflow::NodeDef node_def;
  if (!node_def.ParseFromString(serialized_node_def)) {
    LOG(WARNING) << 'Error parsing node_def';
    return '';
  }
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // This enum represents potential configurations of L1/shared memory when
// running a particular kernel. These values represent user preference, and
// the runtime is not required to respect these choices.
enum class KernelCacheConfig {
  // Indicates no preference for device L1/shared memory configuration.
  kNoPreference,
    }
    
    #define TegraGenOp_Invoker(name, func, src_cnt, dst_cnt, scale_cnt, ...) \
template <typename ST, typename DT> \
class TegraGenOp_##name##_Invoker : public cv::ParallelLoopBody \
{ \
public: \
    TegraGenOp_##name##_Invoker(SRC_ARG##src_cnt \
                                DST_ARG##dst_cnt \
                                int width_, int height_ \
                                SCALE_ARG##scale_cnt) : \
        cv::ParallelLoopBody(), SRC_STORE##src_cnt \
                                DST_STORE##dst_cnt \
                                width(width_), height(height_) \
                                SCALE_STORE##scale_cnt {} \
    virtual void operator()(const cv::Range& range) const \
    { \
        CAROTENE_NS::func(CAROTENE_NS::Size2D(width, range.end-range.start), __VA_ARGS__); \
    } \
private: \
    SRC_VAR##src_cnt \
    DST_VAR##dst_cnt \
    int width, height; \
    SCALE_VAR##scale_cnt \
    const TegraGenOp_##name##_Invoker& operator= (const TegraGenOp_##name##_Invoker&); \
};
    
        /*
        For each point `p` within `size`, do:
        dst[p] = src0[p] & src1[p]
    */
    void bitwiseAnd(const Size2D &size,
                    const u8 *src0Base, ptrdiff_t src0Stride,
                    const u8 *src1Base, ptrdiff_t src1Stride,
                    u8 *dstBase, ptrdiff_t dstStride);
    
        struct Margin {
        Margin() : left(0), right(0), top(0), bottom(0) {}
        Margin(size_t left_, size_t right_, size_t top_, size_t bottom_)
            : left(left_), right(right_), top(top_), bottom(bottom_) {}
    }
    
                int16x4_t v_srclo = vget_low_s16(v_src0), v_srchi = vget_high_s16(v_src0);
            v_dst0 = vcombine_s16(vqmovn_s32(vaddw_s16(vmull_s16(v_srclo, v_srclo), vget_low_s16(v_dst0))),
                                  vqmovn_s32(vaddw_s16(vmull_s16(v_srchi, v_srchi), vget_high_s16(v_dst0))));
    
                int32x4_t va = vaddq_s32(lane0a, lane2a);
            int32x4_t vb = vaddq_s32(lane0b, lane2b);
            int32x4_t vc = vaddq_s32(lane0c, lane2c);
            int32x4_t wa = vaddq_s32(va, lane1a);
            int32x4_t wb = vaddq_s32(vb, lane1b);
            int32x4_t wc = vaddq_s32(vc, lane1c);
    
        // this ugly contruction is needed to avoid:
    // /usr/lib/gcc/arm-linux-gnueabihf/4.8/include/arm_neon.h:3581:59: error: argument must be a constant
    // return (int16x8_t)__builtin_neon_vshl_nv8hi (__a, __b, 1);
    
            if (val == maxVal)
        {
            if (maxLocCount < maxLocCapacity)
            {
                maxLocPtr[maxLocCount] = j;
                maxLocPtr[maxLocCount + 1] = i;
            }
            maxLocCount += 2;
        }
    
    void read_image(std::ifstream* image_file, std::ifstream* label_file,
        uint32_t index, uint32_t rows, uint32_t cols,
        char* pixels, char* label) {
  image_file->seekg(index * rows * cols + 16);
  image_file->read(pixels, rows * cols);
  label_file->seekg(index + 8);
  label_file->read(label, 1);
}
    
     private:
  // The private constructor to avoid duplicate instantiation.
  Caffe();
    
    
    {  shared_ptr<boost::thread> thread_;
};
    
    /**
 * @brief Computes a sum of two input Blobs, with the shape of the latter Blob
 *        'broadcast' to match the shape of the former. Equivalent to tiling
 *        the latter Blob, then computing the elementwise sum.
 *
 * The second input may be omitted, in which case it's learned as a parameter
 * of the layer. Note: in case bias and scaling are desired, both operations can
 * be handled by `ScaleLayer` configured with `bias_term: true`.
 */
template <typename Dtype>
class BiasLayer : public Layer<Dtype> {
 public:
  explicit BiasLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    /**
 * @brief Takes a Blob and crop it, to the shape specified by the second input
 *  Blob, across all dimensions after the specified axis.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
    
    #include 'caffe/layers/conv_layer.hpp'
    
    
    {}  // namespace caffe
    
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
    
      // Return whether a given text line could be a first paragraph line according
  // to this paragraph model.
  bool ValidFirstLine(int lmargin, int lindent, int rindent, int rmargin) const;
    
    const int kHistogramSize = 256;  // The size of a histogram of pixel values.
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(nullptr) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
    }
    
      // Decrement the count for t.
  // Return whether we knew about the given pointer.
  bool Free(T *t) {
    if (t == nullptr) return false;
    mu_.Lock();
    for (int i = 0; i < cache_.size(); i++) {
      if (cache_[i].object == t) {
        --cache_[i].count;
        mu_.Unlock();
        return true;
      }
    }
    mu_.Unlock();
    return false;
  }
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    #include <cstdint>
#include <tuple>
    
    namespace php {
struct Program;
}
struct Index;
    
    int64_t VMTOC::getValue(int64_t index, bool qword) {
  HPHP::Address addr = reinterpret_cast<HPHP::Address>(
      static_cast<intptr_t>(index) + getPtrVector());
  int64_t ret_val = 0;
  int max_elem = qword ? 8 : 4;
  for (int i = max_elem-1; i >= 0; i--) {
    ret_val = addr[i] + (ret_val << 8);
  }
  return ret_val;
}
    
    
    {      dword(dq_formater.instruction);
   }
    
    void Config::ParseConfigFile(const std::string &filename, IniSettingMap &ini,
                             Hdf &hdf, const bool is_system /* = true */) {
  // We don't allow a filename of just '.ini'
  if (boost::ends_with(filename, '.ini') && filename.length() > 4) {
    Config::ParseIniFile(filename, ini, false, is_system);
  } else {
    // For now, assume anything else is an hdf file
    // TODO(#5151773): Have a non-invasive warning if HDF file does not end
    // .hdf
    Config::ParseHdfFile(filename, hdf);
  }
}
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    #endif // HPHP_GLOB_STREAM_WRAPPER_H

    
    #ifndef incl_HPHP_URL_FILE_H_
#define incl_HPHP_URL_FILE_H_
    
        ALLEGRO_LOCKED_REGION *locked_img = al_lock_bitmap(img, al_get_bitmap_format(img), ALLEGRO_LOCK_WRITEONLY);
    if (!locked_img)
    {
        al_destroy_bitmap(img);
        return false;
    }
    memcpy(locked_img->data, pixels, sizeof(int)*width*height);
    al_unlock_bitmap(img);
    
    #ifdef __FREEGLUT_EXT_H__
void ImGui_ImplGLUT_MouseWheelFunc(int button, int dir, int x, int y)
{
    ImGuiIO& io = ImGui::GetIO();
    io.MousePos = ImVec2((float)x, (float)y);
    if (dir > 0)
        io.MouseWheel += 1.0;
    else if (dir < 0)
        io.MouseWheel -= 1.0;
    (void)button; // Unused
}
#endif
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_Marmalade_CreateDeviceObjects();
    
    // InitXXX function with 'install_callbacks=true': install GLFW callbacks. They will call user's previously installed callbacks, if any.
// InitXXX function with 'install_callbacks=false': do not install GLFW callbacks. You will need to call them yourself from your own GLFW callbacks.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyDeviceObjects();

    
        IMGUI_API void          SetCurrentFont(ImFont* font);
    inline ImFont*          GetDefaultFont() { ImGuiContext& g = *GImGui; return g.IO.FontDefault ? g.IO.FontDefault : g.IO.Fonts->Fonts[0]; }
    
            // We don't care for comparison result here; the previous value will be stored into value anyway.
        // Also we don't care for rbx and rcx values, they just have to be equal to rax and rdx before cmpxchg16b.
        __asm__ __volatile__
        (
            'movq %%rbx, %%rax\n\t'
            'movq %%rcx, %%rdx\n\t'
            'lock; cmpxchg16b %[storage]\n\t'
            : '=&A' (value)
            : [storage] 'm' (storage)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
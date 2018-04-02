
        
        #ifdef _MSC_VER
#pragma warning(disable:4244)  // Conversion warnings
#endif
    
    // Backwards compatible constrained fit with a supplied gradient.
// Deprecated. Use ConstrainedFit(const FCOORD& direction) where possible
// to avoid potential difficulties with infinite gradients.
double DetLineFit::ConstrainedFit(double m, float* c) {
  // Do something sensible with no points.
  if (pts_.empty()) {
    *c = 0.0f;
    return 0.0;
  }
  double cos = 1.0 / sqrt(1.0 + m * m);
  FCOORD direction(cos, m * cos);
  ICOORD line_pt;
  double error = ConstrainedFit(direction, -MAX_FLOAT32, MAX_FLOAT32, false,
                                &line_pt);
  *c = line_pt.y() - line_pt.x() * m;
  return error;
}
    
     private:
  struct ReferenceCount {
    STRING id;  // A unique ID to identify the object (think path on disk)
    T *object;  // A copy of the object in memory.  Can be delete'd.
    int count;  // A count of the number of active users of this object.
  };
    
    /*---------------------------------------------------------------------------
          Macros
----------------------------------------------------------------------------*/
/* macros for controlling the display of recognized characters */
#define EnableCharDisplay()   (DisplayCharacters = TRUE)
#define DisableCharDisplay()    (DisplayCharacters = FALSE)
    
    // Feature distance calculator designed to provide a fast distance calculation
// based on set difference between a given feature set and many other feature
// sets in turn.
// Representation of a feature set as an array of bools that are sparsely
// true, and companion arrays that allow fast feature set distance
// calculations with allowance of offsets in position.
// Init is expensive, so for greatest efficiency, to re-initialize for a new
// feature set, use Set(..., false) on the SAME feature set as was used to
// setup with Set(..., true), to return to its initialized state before
// reuse with Set(..., true) on a new feature set.
class IntFeatureDist {
 public:
  IntFeatureDist();
  ~IntFeatureDist();
    }
    
    typedef struct {
  FPOINT Point;
  FLOAT32 Slope;
  unsigned Padding:20;
  BOOL8 Hidden:TRUE;
  BOOL8 ExtremityMark:TRUE;
  DIRECTION Direction:4;
  DIRECTION PreviousDirection:4;
} MFEDGEPT;
    
        FILE *m_pFile;
    bool m_eof_flag, m_error_flag;
    
    static const static_bookblock _resbook_16u_0={
  {
    {0},
    {0,0,&_16u0__p1_0},
    {0,0,&_16u0__p2_0},
    {0,0,&_16u0__p3_0},
    {0,0,&_16u0__p4_0},
    {0,0,&_16u0__p5_0},
    {&_16u0__p6_0,&_16u0__p6_1},
    {&_16u0__p7_0,&_16u0__p7_1,&_16u0__p7_2}
   }
};
static const static_bookblock _resbook_16u_1={
  {
    {0},
    {0,0,&_16u1__p1_0},
    {0,0,&_16u1__p2_0},
    {0,0,&_16u1__p3_0},
    {0,0,&_16u1__p4_0},
    {0,0,&_16u1__p5_0},
    {0,0,&_16u1__p6_0},
    {&_16u1__p7_0,&_16u1__p7_1},
    {&_16u1__p8_0,&_16u1__p8_1},
    {&_16u1__p9_0,&_16u1__p9_1,&_16u1__p9_2}
   }
};
static const static_bookblock _resbook_16u_2={
  {
    {0},
    {0,0,&_16u2_p1_0},
    {0,0,&_16u2_p2_0},
    {0,0,&_16u2_p3_0},
    {0,0,&_16u2_p4_0},
    {&_16u2_p5_0,&_16u2_p5_1},
    {&_16u2_p6_0,&_16u2_p6_1},
    {&_16u2_p7_0,&_16u2_p7_1},
    {&_16u2_p8_0,&_16u2_p8_1},
    {&_16u2_p9_0,&_16u2_p9_1,&_16u2_p9_2}
   }
};
    
    /***** residue backends *********************************************/
    
    
/** 16x32 multiply, followed by a 15-bit shift right and 32-bit add.
    b must fit in 31 bits.
    Result fits in 32 bits. */
#undef MAC16_32_Q15
#define MAC16_32_Q15(c, a, b) ADD32(c, MULT16_32_Q15(a, b))
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    int64_t stride(const Tensor& self, int64_t dim) {
  // false is passed to maybe_wrap_dim so behavior is identical to array access (but with wrapping)
  dim = maybe_wrap_dim(dim, self.dim(), false);
  return self.strides()[dim];
}
    
    #if AT_CUDA_ENABLED()
$extra_cuda_headers
#endif
    
        std::shared_ptr<GlooCache::algorithm_type> algo;
    if (device == DeviceType::CPU) {
      algo = std::make_shared<::gloo::AllgatherRing<T>>(
        context,
        std::initializer_list<const T*>{reinterpret_cast<const T*>(input_buffer.get())},
        reinterpret_cast<T*>(output_buffer.get()),
        count);
    } else {
      throw std::runtime_error('unsupported device in Gloo allGather');
    }
    
    uint64_t CUDAGenerator::seed() {
  return THCRandom_initialSeed(context->thc_state);
}
    
    
    {  // input * weights + bias -> output_features
  Tensor output = self.type().tensor({
    olen,
    input_size[1],
    weight_size[2],
  });
  output.copy_(bias.expand(output.sizes()));
  for (int k = 0; k < kw; k++) {
    int iShift = std::max(0, static_cast<int>(k - real_pad));
    int oShift = std::max(0, static_cast<int>(real_pad - k));
    int t = std::min(ilen + real_pad - k, olen) - oShift;
    // Note: gemm assumes column-major matrices
    // input    is l*m (row-major)
    // weight   is m*r (row-major)
    // output   is l*r (row-major)
    if (t > 0) {
      auto W = weight[k];
      auto I = self.narrow(0, iShift, t).view({t * batchSize, inputPlanes});
      auto O = output.narrow(0, oShift, t).view({t * batchSize, outputPlanes});
      O.addmm_(I, W);
    }
  }
  return output;
}
    
    void DCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * x + u] * in[u * stride];
    }
  }
}
    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
    // Functions for reading a jpeg byte stream into a JPEGData object.
    
    
    {}  // namespace guetzli
    
    enum JPEGReadError {
  JPEG_OK = 0,
  JPEG_SOI_NOT_FOUND,
  JPEG_SOF_NOT_FOUND,
  JPEG_UNEXPECTED_EOF,
  JPEG_MARKER_BYTE_NOT_FOUND,
  JPEG_UNSUPPORTED_MARKER,
  JPEG_WRONG_MARKER_SIZE,
  JPEG_INVALID_PRECISION,
  JPEG_INVALID_WIDTH,
  JPEG_INVALID_HEIGHT,
  JPEG_INVALID_NUMCOMP,
  JPEG_INVALID_SAMP_FACTOR,
  JPEG_INVALID_START_OF_SCAN,
  JPEG_INVALID_END_OF_SCAN,
  JPEG_INVALID_SCAN_BIT_POSITION,
  JPEG_INVALID_COMPS_IN_SCAN,
  JPEG_INVALID_HUFFMAN_INDEX,
  JPEG_INVALID_QUANT_TBL_INDEX,
  JPEG_INVALID_QUANT_VAL,
  JPEG_INVALID_MARKER_LEN,
  JPEG_INVALID_SAMPLING_FACTORS,
  JPEG_INVALID_HUFFMAN_CODE,
  JPEG_INVALID_SYMBOL,
  JPEG_NON_REPRESENTABLE_DC_COEFF,
  JPEG_NON_REPRESENTABLE_AC_COEFF,
  JPEG_INVALID_SCAN,
  JPEG_OVERLAPPING_SCANS,
  JPEG_INVALID_SCAN_ORDER,
  JPEG_EXTRA_ZERO_RUN,
  JPEG_DUPLICATE_DRI,
  JPEG_DUPLICATE_SOF,
  JPEG_WRONG_RESTART_MARKER,
  JPEG_DUPLICATE_COMPONENT_ID,
  JPEG_COMPONENT_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_ERROR,
  JPEG_QUANT_TABLE_NOT_FOUND,
  JPEG_EMPTY_DHT,
  JPEG_EMPTY_DQT,
  JPEG_OUT_OF_BAND_COEFF,
  JPEG_EOB_RUN_TOO_LONG,
  JPEG_IMAGE_TOO_LARGE,
};
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the opengl3_example/ folder**
// See imgui_impl_glfw.cpp for details.
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the opengl3_example/ folder**
// See imgui_impl_glfw.cpp for details.
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        }
    
    int main(int, char**)
{
    // Setup SDL
    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0)
    {
        printf('Error: %s\n', SDL_GetError());
        return -1;
    }
    }
    
        // Load cursors
    // FIXME: GLFW doesn't expose suitable cursors for ResizeAll, ResizeNESW, ResizeNWSE. We revert to arrow cursor for those.
    g_MouseCursors[ImGuiMouseCursor_Arrow] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_TextInput] = glfwCreateStandardCursor(GLFW_IBEAM_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeAll] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeNS] = glfwCreateStandardCursor(GLFW_VRESIZE_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeEW] = glfwCreateStandardCursor(GLFW_HRESIZE_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeNESW] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeNWSE] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);
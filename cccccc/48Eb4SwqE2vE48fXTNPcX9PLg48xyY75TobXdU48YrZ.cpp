
        
        // Sent by the renderer when the draggable regions are updated.
IPC_MESSAGE_ROUTED1(ShellViewHostMsg_UpdateDraggableRegions,
                    std::vector<extensions::DraggableRegion> /* regions */)
    
    void App::SetProxyConfig(content::RenderProcessHost* render_process_host,
                         const std::string& proxy_config) {
  net::ProxyConfig config;
  config.proxy_rules().ParseFromString(proxy_config);
  net::URLRequestContextGetter* context_getter =
    render_process_host->GetBrowserContext()->
    GetRequestContextForRenderProcess(render_process_host->GetID());
    }
    
    #ifndef CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
#define CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
    
                    // sols(:,i) = stmp;
                cv::Mat stmp_mat(3, 1, CV_64F, &stmp);
    
            template<int CTA_SIZE>
        static __forceinline__ __device__ int Ballot(int predicate)
        {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ >= 200)
            return __ballot(predicate);
#else
            __shared__ volatile int cta_buffer[CTA_SIZE];
    }
    
    
    {}
    
        // Extension: 2.0
    extern void (CODEGEN_FUNCPTR *BlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha);
    extern void (CODEGEN_FUNCPTR *DrawBuffers)(GLsizei n, const GLenum *bufs);
    extern void (CODEGEN_FUNCPTR *StencilOpSeparate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
    extern void (CODEGEN_FUNCPTR *StencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask);
    extern void (CODEGEN_FUNCPTR *StencilMaskSeparate)(GLenum face, GLuint mask);
    extern void (CODEGEN_FUNCPTR *AttachShader)(GLuint program, GLuint shader);
    extern void (CODEGEN_FUNCPTR *BindAttribLocation)(GLuint program, GLuint index, const GLchar *name);
    extern void (CODEGEN_FUNCPTR *CompileShader)(GLuint shader);
    extern GLuint (CODEGEN_FUNCPTR *CreateProgram)();
    extern GLuint (CODEGEN_FUNCPTR *CreateShader)(GLenum type);
    extern void (CODEGEN_FUNCPTR *DeleteProgram)(GLuint program);
    extern void (CODEGEN_FUNCPTR *DeleteShader)(GLuint shader);
    extern void (CODEGEN_FUNCPTR *DetachShader)(GLuint program, GLuint shader);
    extern void (CODEGEN_FUNCPTR *DisableVertexAttribArray)(GLuint index);
    extern void (CODEGEN_FUNCPTR *EnableVertexAttribArray)(GLuint index);
    extern void (CODEGEN_FUNCPTR *GetActiveAttrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
    extern void (CODEGEN_FUNCPTR *GetActiveUniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
    extern void (CODEGEN_FUNCPTR *GetAttachedShaders)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj);
    extern GLint (CODEGEN_FUNCPTR *GetAttribLocation)(GLuint program, const GLchar *name);
    extern void (CODEGEN_FUNCPTR *GetProgramiv)(GLuint program, GLenum pname, GLint *params);
    extern void (CODEGEN_FUNCPTR *GetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
    extern void (CODEGEN_FUNCPTR *GetShaderiv)(GLuint shader, GLenum pname, GLint *params);
    extern void (CODEGEN_FUNCPTR *GetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
    extern void (CODEGEN_FUNCPTR *GetShaderSource)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
    extern GLint (CODEGEN_FUNCPTR *GetUniformLocation)(GLuint program, const GLchar *name);
    extern void (CODEGEN_FUNCPTR *GetUniformfv)(GLuint program, GLint location, GLfloat *params);
    extern void (CODEGEN_FUNCPTR *GetUniformiv)(GLuint program, GLint location, GLint *params);
    extern void (CODEGEN_FUNCPTR *GetVertexAttribdv)(GLuint index, GLenum pname, GLdouble *params);
    extern void (CODEGEN_FUNCPTR *GetVertexAttribfv)(GLuint index, GLenum pname, GLfloat *params);
    extern void (CODEGEN_FUNCPTR *GetVertexAttribiv)(GLuint index, GLenum pname, GLint *params);
    extern void (CODEGEN_FUNCPTR *GetVertexAttribPointerv)(GLuint index, GLenum pname, GLvoid* *pointer);
    extern GLboolean (CODEGEN_FUNCPTR *IsProgram)(GLuint program);
    extern GLboolean (CODEGEN_FUNCPTR *IsShader)(GLuint shader);
    extern void (CODEGEN_FUNCPTR *LinkProgram)(GLuint program);
    extern void (CODEGEN_FUNCPTR *ShaderSource)(GLuint shader, GLsizei count, const GLchar* const *string, const GLint *length);
    extern void (CODEGEN_FUNCPTR *UseProgram)(GLuint program);
    extern void (CODEGEN_FUNCPTR *Uniform1f)(GLint location, GLfloat v0);
    extern void (CODEGEN_FUNCPTR *Uniform2f)(GLint location, GLfloat v0, GLfloat v1);
    extern void (CODEGEN_FUNCPTR *Uniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    extern void (CODEGEN_FUNCPTR *Uniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    extern void (CODEGEN_FUNCPTR *Uniform1i)(GLint location, GLint v0);
    extern void (CODEGEN_FUNCPTR *Uniform2i)(GLint location, GLint v0, GLint v1);
    extern void (CODEGEN_FUNCPTR *Uniform3i)(GLint location, GLint v0, GLint v1, GLint v2);
    extern void (CODEGEN_FUNCPTR *Uniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    extern void (CODEGEN_FUNCPTR *Uniform1fv)(GLint location, GLsizei count, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *Uniform2fv)(GLint location, GLsizei count, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *Uniform3fv)(GLint location, GLsizei count, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *Uniform4fv)(GLint location, GLsizei count, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *Uniform1iv)(GLint location, GLsizei count, const GLint *value);
    extern void (CODEGEN_FUNCPTR *Uniform2iv)(GLint location, GLsizei count, const GLint *value);
    extern void (CODEGEN_FUNCPTR *Uniform3iv)(GLint location, GLsizei count, const GLint *value);
    extern void (CODEGEN_FUNCPTR *Uniform4iv)(GLint location, GLsizei count, const GLint *value);
    extern void (CODEGEN_FUNCPTR *UniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *UniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *UniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *ValidateProgram)(GLuint program);
    extern void (CODEGEN_FUNCPTR *VertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
    
    int lapack_LU32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, int* info);
int lapack_LU64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, int* info);
int lapack_Cholesky32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, bool* info);
int lapack_Cholesky64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, bool* info);
int lapack_SVD32f(float* a, size_t a_step, float* w, float* u, size_t u_step, float* vt, size_t v_step, int m, int n, int flags);
int lapack_SVD64f(double* a, size_t a_step, double* w, double* u, size_t u_step, double* vt, size_t v_step, int m, int n, int flags);
int lapack_QR32f(float* src1, size_t src1_step, int m, int n, int k, float* src2, size_t src2_step, float* dst, int* info);
int lapack_QR64f(double* src1, size_t src1_step, int m, int n, int k, double* src2, size_t src2_step, double* dst, int* info);
int lapack_gemm32f(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64f(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm32fc(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64fc(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
    
    static void* openclamdblas_check_fn(int ID)
{
    assert(ID >= 0 && ID < (int)(sizeof(openclamdblas_fn)/sizeof(openclamdblas_fn[0])));
    const struct DynamicFnEntry* e = openclamdblas_fn[ID];
    void* func = CV_CL_GET_PROC_ADDRESS(e->fnName);
    if (!func)
    {
        throw cv::Exception(cv::Error::OpenCLApiCallError,
                cv::format('OpenCL AMD BLAS function is not available: [%s]', e->fnName),
                CV_Func, __FILE__, __LINE__);
    }
    *(e->ppFn) = func;
    return func;
}
    
    #include <boost/asio/detail/config.hpp>
    
    #ifndef BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP
#define BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP
    
    #endif // BOOST_ASIO_DETAIL_EVENT_HPP

    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
typedef null_fenced_block fenced_block;
#elif defined(__MACH__) && defined(__APPLE__)
typedef macos_fenced_block fenced_block;
#elif defined(__sun)
typedef solaris_fenced_block fenced_block;
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
typedef gcc_arm_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
typedef gcc_hppa_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
typedef gcc_x86_fenced_block fenced_block;
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
typedef gcc_sync_fenced_block fenced_block;
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
typedef win_fenced_block fenced_block;
#else
typedef null_fenced_block fenced_block;
#endif
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
# include <boost/asio/detail/socket_types.hpp>
#endif // defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
    
    
    {  // We have checked above that none of the sampling factors are 0, so the max
  // sampling factors can not be 0.
  jpg->MCU_rows = DivCeil(jpg->height, jpg->max_v_samp_factor * 8);
  jpg->MCU_cols = DivCeil(jpg->width, jpg->max_h_samp_factor * 8);
  // Compute the block dimensions for each component.
  if (mode == JPEG_READ_ALL) {
    for (size_t i = 0; i < jpg->components.size(); ++i) {
      JPEGComponent* c = &jpg->components[i];
      if (jpg->max_h_samp_factor % c->h_samp_factor != 0 ||
          jpg->max_v_samp_factor % c->v_samp_factor != 0) {
        fprintf(stderr, 'Non-integral subsampling ratios.\n');
        jpg->error = JPEG_INVALID_SAMPLING_FACTORS;
        return false;
      }
      c->width_in_blocks = jpg->MCU_cols * c->h_samp_factor;
      c->height_in_blocks = jpg->MCU_rows * c->v_samp_factor;
      const uint64_t num_blocks =
          static_cast<uint64_t>(c->width_in_blocks) * c->height_in_blocks;
      if (num_blocks > (1ull << 21)) {
        // Refuse to allocate more than 1 GB of memory for the coefficients,
        // that is 2M blocks x 64 coeffs x 2 bytes per coeff x max 4 components.
        // TODO(user) Add this limit to a GuetzliParams struct.
        fprintf(stderr, 'Image too large.\n');
        jpg->error = JPEG_IMAGE_TOO_LARGE;
        return false;
      }
      c->num_blocks = static_cast<int>(num_blocks);
      c->coeffs.resize(c->num_blocks * kDCTBlockSize);
    }
  }
  VERIFY_MARKER_END();
  return true;
}
    
    std::string OutputImage::FrameTypeStr() const {
  char buf[128];
  int len = snprintf(buf, sizeof(buf), 'f%d%d%d%d%d%d',
                     component(0).factor_x(), component(0).factor_y(),
                     component(1).factor_x(), component(1).factor_y(),
                     component(2).factor_x(), component(2).factor_y());
  return std::string(buf, len);
}
    
    // This function will create a Huffman tree.
//
// The (data,length) contains the population counts.
// The tree_limit is the maximum bit depth of the Huffman codes.
//
// The depth contains the tree, i.e., how many bits are used for
// the symbol.
//
// The actual Huffman tree is constructed in the tree[] array, which has to
// be at least 2 * length + 1 long.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth);
    
    namespace guetzli {
    }
    
    #include <stdint.h>
#include <string.h>
#include <vector>
    
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
    
    
    {}  // namespace guetzli
    
      if (Options.MaxLen == 0) {
    size_t MaxLen = 0;
    for (auto &U : InitialCorpus)
      MaxLen = std::max(U.size(), MaxLen);
    F->SetMaxInputLen(std::min(std::max(kMinDefaultLen, MaxLen), kMaxSaneLen));
  }
    
    #endif

    
    
    {} // namespace fuzzer
    
    
    {  DIR *D = opendir(Dir.c_str());
  if (!D) {
    Printf('No such directory: %s; exiting\n', Dir.c_str());
    exit(1);
  }
  while (auto E = readdir(D)) {
    std::string Path = DirPlusFile(Dir, E->d_name);
    if (E->d_type == DT_REG || E->d_type == DT_LNK)
      V->push_back(Path);
    else if (E->d_type == DT_DIR && *E->d_name != '.')
      ListFilesInDirRecursive(Path, Epoch, V, false);
  }
  closedir(D);
  if (Epoch && TopDir)
    *Epoch = E;
}
    
    // We may need to avoid defining weak hooks to stay compatible with older clang.
#ifndef LLVM_FUZZER_DEFINES_SANITIZER_WEAK_HOOOKS
# define LLVM_FUZZER_DEFINES_SANITIZER_WEAK_HOOOKS 1
#endif
    
          if (sigaction(SIGINT, &IgnoreSignalAction, &OldSigIntAction) == -1) {
        Printf('Failed to ignore SIGINT\n');
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }
      if (sigaction(SIGQUIT, &IgnoreSignalAction, &OldSigQuitAction) == -1) {
        Printf('Failed to ignore SIGQUIT\n');
        // Try our best to restore the signal handlers.
        (void)sigaction(SIGINT, &OldSigIntAction, NULL);
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }
    
    class AbstractAuthResolver : public AuthResolver {
public:
  AbstractAuthResolver();
    }
    
      virtual ssize_t readData(unsigned char* data, size_t len,
                           int64_t offset) CXX11_OVERRIDE;
    
    class AbstractProxyResponseCommand : public AbstractCommand {
private:
  std::shared_ptr<HttpConnection> httpConnection_;
    }
    
    void AnnounceList::resetTier() { resetIterator(); }
    
    AnnounceTier::~AnnounceTier() = default;
    
    #endif // DOWNLOAD_EVENT_LISTENER_H

    
    
    {} // namespace aria2
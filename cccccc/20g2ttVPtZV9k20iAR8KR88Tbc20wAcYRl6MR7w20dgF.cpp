
        
        STATISTIC(NumClassDevirt, 'Number of class_method applies devirtualized');
STATISTIC(NumWitnessDevirt, 'Number of witness_method applies devirtualized');
    
        findAnchorsInTables();
    
    namespace swift {
    }
    
      /// This class provides a non-trivial .cxx_construct or .cxx_destruct
  /// implementation.
  HasCXXStructors      = 0x00004,
    
      /// Read a swiftdeps file from \p buffer and return a SourceFileDepGraph if
  /// successful.
  Optional<SourceFileDepGraph> static loadFromBuffer(llvm::MemoryBuffer &);
    
        UMat tmp(Size(dst_frame1.cols / (1 << src_scale), dst_frame1.rows / (1 << src_scale)), CV_8U);
    randu(tmp, 0, 255);
    resize(tmp, dst_frame1, dst_frame1.size(), 0.0, 0.0, INTER_LINEAR_EXACT);
    resize(tmp, dst_frame2, dst_frame2.size(), 0.0, 0.0, INTER_LINEAR_EXACT);
    
    
    {    bufferNumBits -= numBits;
    return (buffer >> bufferNumBits) & ((1 << numBits) - 1);
}
    
        //
    // Number of bits in our acceleration table. Should match all
    // codes up to TABLE_LOOKUP_BITS in length.
    //
    
    template <>
IMF_EXPORT
void FloatVectorAttribute::readValueFrom
    (OPENEXR_IMF_INTERNAL_NAMESPACE::IStream &, int, int);
    
    // file handling classes
class OutputFile;
class TiledInputFile;
class ScanLineInputFile;
class InputFile;
class TiledOutputFile;
class DeepScanLineInputFile;
class DeepScanLineOutputFile;
class DeepTiledInputFile;
class DeepTiledOutputFile;
class AcesInputFile;
class AcesOutputFile;
class TiledInputPart;
class TiledInputFile;
class TileOffsets;
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
    void GenericInputFile::readMagicNumberAndVersionField(OPENEXR_IMF_INTERNAL_NAMESPACE::IStream& is, int& version)
{
    //
    // Read the magic number and the file format version number.
    // Then check if we can read the rest of this file.
    //
    }
    
        if (parts == 1)
    {
        if (headers[0].type() == TILEDIMAGE)
            version |= TILED_FLAG;
    }
    else
    {
        version |= MULTI_PART_FILE_FLAG;
    }
    
    for (int i = 0; i < parts; i++)
    {
        if (usesLongNames (headers[i]))
            version |= LONG_NAMES_FLAG;
    }
    
    
//
// DECODING
//
    
    
    //--------------------------
    // Access to the file header
    //--------------------------
    
    #endif /* IMFINPUTPARTDATA_H_ */

    
    #endif /* IMFINPUTSTREAMMUTEX_H_ */

    
    // Author: anuraag@google.com (Anuraag Agrawal)
// Author: tibell@google.com (Johan Tibell)
    
    PyObject* MergeFrom(RepeatedCompositeContainer* self, PyObject* other) {
  return Extend(self, other);
}
    
    // Builds a RepeatedScalarContainer object, from a parent message and a
// field descriptor.
extern RepeatedScalarContainer* NewContainer(
    CMessage* parent, const FieldDescriptor* parent_field_descriptor);
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
#include <google/protobuf/arena.h>
    
      // Creates a ZeroCopyOutputStream which will insert code into the given file
  // at the given insertion point.  See plugin.proto (plugin.pb.h) for more
  // information on insertion points.  The default implementation
  // assert-fails -- it exists only for backwards-compatibility.
  //
  // WARNING:  This feature is currently EXPERIMENTAL and is subject to change.
  virtual io::ZeroCopyOutputStream* OpenForInsert(
      const std::string& filename, const std::string& insertion_point);
    
      Context* context_;
  ClassNameResolver* name_resolver_;
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_FILE_H__

    
    U_NAMESPACE_BEGIN
    
    #include 'unicode/scientificnumberformatter.h'
#include 'unicode/dcfmtsym.h'
#include 'unicode/fpositer.h'
#include 'unicode/utf16.h'
#include 'unicode/uniset.h'
#include 'decfmtst.h'
#include 'unicode/decimfmt.h'
    
    int32_t SearchIterator::first(UErrorCode &status)
{
    if (U_FAILURE(status)) {
        return USEARCH_DONE;
    }
    setOffset(0, status);
    return handleNext(0, status);
}
    
    #if !UCONFIG_NO_FORMATTING
    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};
    
    #endif

    
    // Main code
int main(int, char**)
{
    // Setup SDL
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMECONTROLLER) != 0)
    {
        printf('Error: %s\n', SDL_GetError());
        return -1;
    }
    }
    
        // Setup window
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_WindowFlags window_flags = (SDL_WindowFlags)(SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    SDL_Window* window = SDL_CreateWindow('Dear ImGui SDL2+OpenGL example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, window_flags);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_MakeCurrent(window, gl_context);
    SDL_GL_SetSwapInterval(1); // Enable vsync
    
    
    {        g_pSwapChain->Present(1, 0); // Present with vsync
        //g_pSwapChain->Present(0, 0); // Present without vsync
    }
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
        // For the browser using Emscripten, we are going to use WebGL1 with GL ES2. See the Makefile. for requirement details.
    // It is very likely the generated file won't work in many browsers. Firefox is the only sure bet, but I have successfully
    // run this code on Chrome for Android for example.
    const char* glsl_version = '#version 100';
    //const char* glsl_version = '#version 300 es';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
        zend_string *opened_path;
    if (!file_handle.opened_path)
    {
        file_handle.opened_path = zend_string_init(file.c_str(), file.length(), 0);
    }
    opened_path = zend_string_copy(file_handle.opened_path);
    zval dummy;
    
    namespace swoole { namespace coroutine {
//-------------------------------------------------------------------------------
class Channel
{
public:
    enum opcode
    {
        PRODUCER = 1,
        CONSUMER = 2,
    };
    }
    }
    }
    
        for (i = 0; i < MAP_SIZE; i++)
    {
        pkt = (swFdInfo *) malloc(sizeof(swFdInfo));
        pkt->key = i;
        pkt->fd = i * 37;
        swHashMap_add_int(ht, pkt->fd, pkt);
        lists[i] = pkt;
    }
    
            if (pid == 0)
        {
            exit(0);
        }
    
    
int php_do_setsockopt_ipv6_rfc3542(Socket *php_sock, int level, int optname, zval *arg4)
{
#ifdef IPV6_PKTINFO
	struct err_s	err = {0};
#endif
	zend_llist		*allocations = NULL;
	void			*opt_ptr;
	socklen_t		optlen;
	int				retval;
    }
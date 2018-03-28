
        
        #ifndef TENSORFLOW_COMMON_RUNTIME_SESSION_FACTORY_H_
#define TENSORFLOW_COMMON_RUNTIME_SESSION_FACTORY_H_
    
    
    {  ExpectSuccess(Builder().Attr('N', 3).Attr('T', DT_INT32), {},
                {DT_INT32, DT_INT32, DT_INT32}, R'proto(
      op: 'NPolymorphicOutDefault'
      attr { key: 'N' value { i: 3 } }
      attr { key: 'T' value { type: DT_INT32 } } )proto');
}
    
    namespace tensorflow {
namespace port {
    }
    }
    
    
    {
    {    IntType gidy = blockIdx.y * blockDim.y + threadIdx.y;
    for (; gidy < total_rows; gidy += blockDim.y * gridDim.y)
      output[gidy * total_cols + gidx] =
          input_ptr[gidy * segment_width + local_col];
  }
}
    
    
    {
/**
 * @name tess_add_doc_word
 *
 * Add the given word to the document dictionary
 */
void Tesseract::tess_add_doc_word(WERD_CHOICE *word_choice) {
  getDict().add_document_word(*word_choice);
}
}  // namespace tesseract

    
    #include 'ccstruct.h'
    
      // Adds a new point. Takes a copy - the pt doesn't need to stay in scope.
  // Add must be called on points in sequence along the line.
  void Add(const ICOORD& pt);
  // Associates a half-width with the given point if a point overlaps the
  // previous point by more than half the width, and its distance is further
  // than the previous point, then the more distant point is ignored in the
  // distance calculation. Useful for ignoring i dots and other diacritics.
  void Add(const ICOORD& pt, int halfwidth);
    
    // Transforms the given coords forward to normalized space using the
// full transformation sequence defined by the block rotation, the
// predecessors, deepest first, and finally this. If first_norm is not NULL,
// then the first and deepest transformation used is first_norm, ending
// with this, and the block rotation will not be applied.
void DENORM::NormTransform(const DENORM* first_norm, const TPOINT& pt,
                           TPOINT* transformed) const {
  FCOORD src_pt(pt.x, pt.y);
  FCOORD float_result;
  NormTransform(first_norm, src_pt, &float_result);
  transformed->x = IntCastRounded(float_result.x());
  transformed->y = IntCastRounded(float_result.y());
}
void DENORM::NormTransform(const DENORM* first_norm, const FCOORD& pt,
                           FCOORD* transformed) const {
  FCOORD src_pt(pt);
  if (first_norm != this) {
    if (predecessor_ != NULL) {
      predecessor_->NormTransform(first_norm, pt, &src_pt);
    } else if (block_ != NULL) {
      FCOORD fwd_rotation(block_->re_rotation().x(),
                          -block_->re_rotation().y());
      src_pt.rotate(fwd_rotation);
    }
  }
  LocalNormTransform(src_pt, transformed);
}
    
    
/**********************************************************************
 * QLSQ::remove
 *
 * Delete an element from the accumulator.
 **********************************************************************/
    
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
    
    void FindDirectionChanges(MFOUTLINE Outline,
                          FLOAT32 MinSlope,
                          FLOAT32 MaxSlope);
    
    #ifndef BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
#define BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
    
    #include <boost/asio/detail/pop_options.hpp>
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef null_event event;
#elif defined(BOOST_ASIO_WINDOWS)
typedef win_event event;
#elif defined(BOOST_ASIO_HAS_PTHREADS)
typedef posix_event event;
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
typedef std_event event;
#endif
    
    #include <boost/asio/detail/config.hpp>
    
    #define BOOST_ASIO_COMPOSED_CONNECT_HANDLER_CHECK( \
    handler_type, handler, iter_type) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code, iter_type)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::two_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0), \
          static_cast<const iter_type*>(0))) == 1, \
      'ComposedConnectHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>(), \
            boost::asio::detail::lvref<const iter_type>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
    bool non_blocking_write(int d, const buf* bufs, std::size_t count,
    boost::system::error_code& ec, std::size_t& bytes_transferred)
{
  for (;;)
  {
    // Write some data.
    errno = 0;
    signed_size_type bytes = error_wrapper(::writev(
          d, bufs, static_cast<int>(count)), ec);
    }
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    namespace folly {
namespace hazptr {
    }
    }
    
    path remove_prefix(const path& pth, const path& prefix) {
  path::const_iterator it;
  if (!skipPrefix(pth, prefix, it)) {
    throw filesystem_error(
        'Path does not start with prefix',
        pth,
        prefix,
        bsys::errc::make_error_code(bsys::errc::invalid_argument));
  }
    }
    
    
    {StringPiece getGlogLevelName(LogLevel level) {
  if (level < LogLevel::INFO) {
    return 'VERBOSE';
  } else if (level < LogLevel::WARN) {
    return 'INFO';
  } else if (level < LogLevel::ERR) {
    return 'WARNING';
  } else if (level < LogLevel::CRITICAL) {
    return 'ERROR';
  }
  return 'CRITICAL';
}
} // namespace
    
    /**
 * Configuration for a LogCategory
 */
class LogCategoryConfig {
 public:
  explicit LogCategoryConfig(
      LogLevel level = LogLevel::WARNING,
      bool inheritParentLevel = true);
  LogCategoryConfig(
      LogLevel level,
      bool inheritParentLevel,
      std::vector<std::string> handlers);
    }
    
        double mouse_x, mouse_y;
    mouse_x = s3ePointerGetX();
    mouse_y = s3ePointerGetY();
    io.MousePos = ImVec2((float)mouse_x/g_scale.x, (float)mouse_y/g_scale.y);   // Mouse position (set to -FLT_MAX,-FLT_MAX if no mouse / on another screen, etc.)
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
        // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;   // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;    // We can honor io.WantSetMousePos requests (optional, rarely used)
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    #if ENABLE_FBASSERT
#define FBASSERTMSGF(expr, msg, ...) !(expr) ? facebook::assertInternal('Assert (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__) : (void) 0
#else
#define FBASSERTMSGF(expr, msg, ...)
#endif // ENABLE_FBASSERT

        
        #endif  // ATOM_BROWSER_API_ATOM_API_GLOBAL_SHORTCUT_H_

    
    #include 'base/macros.h'
#include 'ui/events/event_rewriter.h'
    
      // Called when a window close is cancelled by beforeunload handler.
  virtual void OnWindowCloseCancelled(NativeWindow* window) {}
    
     private:
  // The following methods are implemented by platform-specific implementations
  // of this class.
  //
  // Start/StopListening are called when transitioning between zero and nonzero
  // registered accelerators. StartListening will be called after
  // RegisterAcceleratorImpl and StopListening will be called after
  // UnregisterAcceleratorImpl.
  //
  // For RegisterAcceleratorImpl, implementations return false if registration
  // did not complete successfully.
  virtual void StartListening() = 0;
  virtual void StopListening() = 0;
  virtual bool RegisterAcceleratorImpl(const ui::Accelerator& accelerator) = 0;
  virtual void UnregisterAcceleratorImpl(
      const ui::Accelerator& accelerator) = 0;
    
      // Sets size to which the thumbnails should be scaled. If called after
  // StartUpdating() then some thumbnails may be still scaled to the old size
  // until they are updated.
  virtual void SetThumbnailSize(const gfx::Size& thumbnail_size) = 0;
    
    #endif  // CHROME_BROWSER_PRINTING_PRINT_VIEW_MANAGER_OBSERVER_H_

    
      /// Cancels one asynchronous operation that is waiting on the timer.
  /**
   * This function forces the completion of one pending asynchronous wait
   * operation against the timer. Handlers are cancelled in FIFO order. The
   * handler for the cancelled operation will be invoked with the
   * boost::asio::error::operation_aborted error code.
   *
   * Cancelling the timer does not change the expiry time.
   *
   * @param ec Set to indicate what error occurred, if any.
   *
   * @return The number of asynchronous operations that were cancelled. That is,
   * either 0 or 1.
   *
   * @note If the timer has already expired when cancel_one() is called, then
   * the handlers for asynchronous wait operations will:
   *
   * @li have already been invoked; or
   *
   * @li have been queued for invocation in the near future.
   *
   * These handlers can no longer be cancelled, and therefore are passed an
   * error code that indicates the successful completion of the wait operation.
   */
  std::size_t cancel_one(boost::system::error_code& ec)
  {
    return this->service.cancel_one(this->implementation, ec);
  }
    
    #ifndef BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
    
    #ifndef BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
    
    #endif // BOOST_ASIO_DETAIL_ARRAY_FWD_HPP

    
    template <typename CompletionCondition>
class base_from_completion_cond
{
protected:
  explicit base_from_completion_cond(CompletionCondition completion_condition)
    : completion_condition_(completion_condition)
  {
  }
    }
    
    
    {    // Make the upcall if required.
    if (owner)
    {
      fenced_block b(fenced_block::half);
      BOOST_ASIO_HANDLER_INVOCATION_BEGIN((handler.arg1_, handler.arg2_));
      boost_asio_handler_invoke_helpers::invoke(handler, handler.handler_);
      BOOST_ASIO_HANDLER_INVOCATION_END;
    }
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #ifndef BOOST_ASIO_DETAIL_FUNCTION_HPP
#define BOOST_ASIO_DETAIL_FUNCTION_HPP
    
    class gcc_arm_fenced_block
  : private noncopyable
{
public:
  enum half_t { half };
  enum full_t { full };
    }
    
    // Newer gcc, clang need special treatment to suppress unused typedef warnings.
#if defined(__clang__)
# if defined(__apple_build_version__)
#  if (__clang_major__ >= 7)
#   define BOOST_ASIO_UNUSED_TYPEDEF __attribute__((__unused__))
#  endif // (__clang_major__ >= 7)
# elif ((__clang_major__ == 3) && (__clang_minor__ >= 6)) \
    || (__clang_major__ > 3)
#  define BOOST_ASIO_UNUSED_TYPEDEF __attribute__((__unused__))
# endif // ((__clang_major__ == 3) && (__clang_minor__ >= 6))
        //   || (__clang_major__ > 3)
#elif defined(__GNUC__)
# if ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)) || (__GNUC__ > 4)
#  define BOOST_ASIO_UNUSED_TYPEDEF __attribute__((__unused__))
# endif // ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)) || (__GNUC__ > 4)
#endif // defined(__GNUC__)
#if !defined(BOOST_ASIO_UNUSED_TYPEDEF)
# define BOOST_ASIO_UNUSED_TYPEDEF
#endif // !defined(BOOST_ASIO_UNUSED_TYPEDEF)
    
      // Remove the descriptor from /dev/poll. Since this function is only called
  // during a fork, we can apply the change immediately.
  ::pollfd ev = { 0, 0, 0 };
  ev.fd = descriptor;
  ev.events = POLLREMOVE;
  ev.revents = 0;
  ::write(dev_poll_fd_, &ev, sizeof(ev));
    
    
    
    
    
    
    
      // Returns the combined score of the output image in the last Compare() call
  // (or the baseline image, if Compare() was not called yet), based on output
  // size and the similarity metric.
  virtual double ScoreOutputSize(int size) const = 0;
    
    void OutputImage::SaveToJpegData(JPEGData* jpg) const {
  assert(components_[0].factor_x() == 1);
  assert(components_[0].factor_y() == 1);
  jpg->width = width_;
  jpg->height = height_;
  jpg->max_h_samp_factor = 1;
  jpg->max_v_samp_factor = 1;
  jpg->MCU_cols = components_[0].width_in_blocks();
  jpg->MCU_rows = components_[0].height_in_blocks();
  int ncomp = components_[1].IsAllZero() && components_[2].IsAllZero() ? 1 : 3;
  for (int i = 1; i < ncomp; ++i) {
    jpg->max_h_samp_factor = std::max(jpg->max_h_samp_factor,
                                      components_[i].factor_x());
    jpg->max_v_samp_factor = std::max(jpg->max_h_samp_factor,
                                      components_[i].factor_y());
    jpg->MCU_cols = std::min(jpg->MCU_cols, components_[i].width_in_blocks());
    jpg->MCU_rows = std::min(jpg->MCU_rows, components_[i].height_in_blocks());
  }
  jpg->components.resize(ncomp);
  int q[3][kDCTBlockSize];
  for (int c = 0; c < 3; ++c) {
    memcpy(&q[c][0], components_[c].quant(), kDCTBlockSize * sizeof(q[0][0]));
  }
  for (int c = 0; c < ncomp; ++c) {
    JPEGComponent* comp = &jpg->components[c];
    assert(jpg->max_h_samp_factor % components_[c].factor_x() == 0);
    assert(jpg->max_v_samp_factor % components_[c].factor_y() == 0);
    comp->id = c;
    comp->h_samp_factor = jpg->max_h_samp_factor / components_[c].factor_x();
    comp->v_samp_factor = jpg->max_v_samp_factor / components_[c].factor_y();
    comp->width_in_blocks = jpg->MCU_cols * comp->h_samp_factor;
    comp->height_in_blocks = jpg->MCU_rows * comp->v_samp_factor;
    comp->num_blocks = comp->width_in_blocks * comp->height_in_blocks;
    comp->coeffs.resize(kDCTBlockSize * comp->num_blocks);
    }
    }
    
    static const int kCbToBlueTable[256] = {
  -227, -225, -223, -222, -220, -218, -216, -214, -213, -211, -209, -207,
  -206, -204, -202, -200, -198, -197, -195, -193, -191, -190, -188, -186,
  -184, -183, -181, -179, -177, -175, -174, -172, -170, -168, -167, -165,
  -163, -161, -159, -158, -156, -154, -152, -151, -149, -147, -145, -144,
  -142, -140, -138, -136, -135, -133, -131, -129, -128, -126, -124, -122,
  -120, -119, -117, -115, -113, -112, -110, -108, -106, -105, -103, -101,
   -99,  -97,  -96,  -94,  -92,  -90,  -89,  -87,  -85,  -83,  -82,  -80,
   -78,  -76,  -74,  -73,  -71,  -69,  -67,  -66,  -64,  -62,  -60,  -58,
   -57,  -55,  -53,  -51,  -50,  -48,  -46,  -44,  -43,  -41,  -39,  -37,
   -35,  -34,  -32,  -30,  -28,  -27,  -25,  -23,  -21,  -19,  -18,  -16,
   -14,  -12,  -11,   -9,   -7,   -5,   -4,   -2,    0,    2,    4,    5,
     7,    9,   11,   12,   14,   16,   18,   19,   21,   23,   25,   27,
    28,   30,   32,   34,   35,   37,   39,   41,   43,   44,   46,   48,
    50,   51,   53,   55,   57,   58,   60,   62,   64,   66,   67,   69,
    71,   73,   74,   76,   78,   80,   82,   83,   85,   87,   89,   90,
    92,   94,   96,   97,   99,  101,  103,  105,  106,  108,  110,  112,
   113,  115,  117,  119,  120,  122,  124,  126,  128,  129,  131,  133,
   135,  136,  138,  140,  142,  144,  145,  147,  149,  151,  152,  154,
   156,  158,  159,  161,  163,  165,  167,  168,  170,  172,  174,  175,
   177,  179,  181,  183,  184,  186,  188,  190,  191,  193,  195,  197,
   198,  200,  202,  204,  206,  207,  209,  211,  213,  214,  216,  218,
   220,  222,  223,  225,
};
    
    namespace guetzli {
    }
    
      // Special case code with only one value.
  if (total_count == 1) {
    code.bits = 0;
    code.value = symbols[0];
    for (key = 0; key < total_size; ++key) {
      table[key] = code;
    }
    return total_size;
  }
    
    // Butteraugli scores that correspond to JPEG quality levels, starting at
// kLowestQuality. They were computed by taking median BA scores of JPEGs
// generated using libjpeg-turbo at given quality from a set of PNGs.
// The scores above quality level 100 are just linearly decreased so that score
// for 110 is 90% of the score for 100.
const double kScoreForQuality[] = {
  2.810761,  // 70
  2.729300,
  2.689687,
  2.636811,
  2.547863,
  2.525400,
  2.473416,
  2.366133,
  2.338078,
  2.318654,
  2.201674,  // 80
  2.145517,
  2.087322,
  2.009328,
  1.945456,
  1.900112,
  1.805701,
  1.750194,
  1.644175,
  1.562165,
  1.473608,  // 90
  1.382021,
  1.294298,
  1.185402,
  1.066781,
  0.971769,  // 95
  0.852901,
  0.724544,
  0.611302,
  0.443185,
  0.211578,  // 100
  0.209462,
  0.207346,
  0.205230,
  0.203114,
  0.200999,  // 105
  0.198883,
  0.196767,
  0.194651,
  0.192535,
  0.190420,  // 110
  0.190420,
};
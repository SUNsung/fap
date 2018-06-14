
        
        struct OSResults {
  OSResults() : unicharset(nullptr) {
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < kMaxNumberOfScripts; ++j)
        scripts_na[i][j] = 0;
      orientations[i] = 0;
    }
  }
  void update_best_orientation();
  // Set the estimate of the orientation to the given id.
  void set_best_orientation(int orientation_id);
  // Update/Compute the best estimate of the script assuming the given
  // orientation id.
  void update_best_script(int orientation_id);
  // Return the index of the script with the highest score for this orientation.
  TESS_API int get_best_script(int orientation_id) const;
  // Accumulate scores with given OSResults instance and update the best script.
  void accumulate(const OSResults& osr);
    }
    
      /**
   * Returns orientation for the block the iterator points to.
   *   orientation, writing_direction, textline_order: see publictypes.h
   *   deskew_angle: after rotating the block so the text orientation is
   *                 upright, how many radians does one have to rotate the
   *                 block anti-clockwise for it to be level?
   *                   -Pi/4 <= deskew_angle <= Pi/4
   */
  void Orientation(tesseract::Orientation *orientation,
                   tesseract::WritingDirection *writing_direction,
                   tesseract::TextlineOrder *textline_order,
                   float *deskew_angle) const;
    
    
    {  STRING output_fname = fname;
  const char *lastdot = strrchr(output_fname.string(), '.');
  if (lastdot != nullptr) output_fname[lastdot - output_fname.string()] = '\0';
  output_fname += '.txt';
  FILE *output_file = open_file(output_fname.string(), 'a+');
  return output_file;
}
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == nullptr) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (int16_t) x, (int16_t) (ysize - y - height),
                         (int16_t) (x + width), (int16_t) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
    #endif  // TESSERACT_CCSTRUCT_DPPOINT_H_

    
    
#endif  // TESSERACT_CCSTRUCT_LINLSQ_H_

    
    // Computes the Otsu threshold(s) for the given histogram.
// Also returns H = total count in histogram, and
// omega0 = count of histogram below threshold.
int OtsuStats(const int* histogram, int* H_out, int* omega0_out) {
  int H = 0;
  double mu_T = 0.0;
  for (int i = 0; i < kHistogramSize; ++i) {
    H += histogram[i];
    mu_T += static_cast<double>(i) * histogram[i];
  }
    }
    
    /// Copies bytes from a source buffer to a target buffer sequence.
/**
 * @param target A modifiable buffer sequence representing the memory regions to
 * which the bytes will be copied.
 *
 * @param source A non-modifiable buffer representing the memory region from
 * which the bytes will be copied.
 *
 * @returns The number of bytes copied.
 *
 * @note The number of bytes copied is the lesser of:
 *
 * @li @c buffer_size(target)
 *
 * @li @c buffer_size(source)
 *
 * This function is implemented in terms of @c memcpy, and consequently it
 * cannot be used to copy between overlapping memory regions.
 */
template <typename MutableBufferSequence>
inline std::size_t buffer_copy(const MutableBufferSequence& target,
    const const_buffers_1& source)
{
  return buffer_copy(target, static_cast<const const_buffer&>(source));
}
    
    template <typename Stream>
class buffered_write_stream;
    
      // Return a pointer to the beginning of the unread data.
  mutable_buffer data()
  {
    return boost::asio::buffer(buffer_) + begin_offset_;
  }
    
    #include <boost/asio/detail/config.hpp>
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    #include <boost/asio/detail/pop_options.hpp>
    
    template <typename Time_Traits>
void dev_poll_reactor::add_timer_queue(timer_queue<Time_Traits>& queue)
{
  do_add_timer_queue(queue);
}
    
          if (events[i].events & (POLLIN | POLLERR | POLLHUP))
        more_reads = op_queue_[read_op].perform_operations(descriptor, ops);
      else
        more_reads = op_queue_[read_op].has_operation(descriptor);
    
    namespace xgboost {
namespace common {
    }
    }
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
          cbw.Write(buffer.data(), input.begin(), input.end());
    
    TEST(Metric, AMS) {
  EXPECT_ANY_THROW(xgboost::Metric::Create('ams'));
  xgboost::Metric * metric = xgboost::Metric::Create('ams@0.5f');
  ASSERT_STREQ(metric->Name(), 'ams@0.5');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0.311f, 0.001f);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.29710f, 0.001f);
    }
    
    DMLC_REGISTER_PARAMETER(MyLogisticParam);
    
          // Base decisions off of real time if requested by this benchmark.
      double seconds = results.cpu_time_used;
      if (b.use_manual_time) {
        seconds = results.manual_time_used;
      } else if (b.use_real_time) {
        seconds = results.real_time_used;
      }
    
    ConsoleReporter::OutputOptions GetOutputOptions(bool force_no_color = false);
    
    // CheckHandler is the class constructed by failing CHECK macros. CheckHandler
// will log information about the failures and abort when it is destructed.
class CheckHandler {
 public:
  CheckHandler(const char* check, const char* file, const char* func, int line)
      : log_(GetErrorLogInstance()) {
    log_ << file << ':' << line << ': ' << func << ': Check `' << check
         << '' failed. ';
  }
    }
    
    #include 'commandlineflags.h'
    
    #include <cstdint>
#include <string>
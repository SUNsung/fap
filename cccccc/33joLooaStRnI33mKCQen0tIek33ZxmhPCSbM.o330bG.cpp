
        
        void cvValidateDisparity( CvArr* _disp, const CvArr* _cost, int minDisparity,
                         int numberOfDisparities, int disp12MaxDiff )
{
    cv::Mat disp = cv::cvarrToMat(_disp), cost = cv::cvarrToMat(_cost);
    cv::validateDisparity( disp, cost, minDisparity, numberOfDisparities, disp12MaxDiff );
}

    
        // deriv of m w.r.t. s2
    //Hs2 = [0 ; s(1)^2 ; s(1) ; 0 ; s(3) ; 2 * s(2) * s(3) ; 3 * s(2)^2 ; ...
    //         0 ; 0 ; 0 ; 1 ; s(3)^2 ; 0 ; 0 ; 2 * s(2) ; 0 ; ...
    //         s(1) * s(3) ; s(1) * 2 * s(2) ; 0 ; 0];
    
    CV_EXPORTS_W void compare(InputArray src1, Scalar src2, OutputArray dst, int cmpop);
    
    #ifndef __OPENCV_CORE_OCL_RUNTIME_COMMON_HPP__
#define __OPENCV_CORE_OCL_RUNTIME_COMMON_HPP__
    
    /* ////////////////////////////////////////////////////////////////////
//
//  CvMat helper tables
//
// */
    
    template<class T, std::size_t N>
class array;
    
      // Consume multiple bytes from the beginning of the buffer.
  void consume(size_type count)
  {
    BOOST_ASIO_ASSERT(begin_offset_ + count <= end_offset_);
    begin_offset_ += count;
    if (empty())
      clear();
  }
    
    #include <boost/asio/detail/push_options.hpp>
    
    int open(const char* path, int flags, boost::system::error_code& ec)
{
  errno = 0;
  int result = error_wrapper(::open(path, flags), ec);
  if (result >= 0)
    ec = boost::system::error_code();
  return result;
}
    
    #include <boost/asio/detail/push_options.hpp>
    
      // We can return immediately if there's no work to do and the reactor is
  // not supposed to block.
  if (!block && op_queue_[read_op].empty() && op_queue_[write_op].empty()
      && op_queue_[except_op].empty() && timer_queues_.all_empty())
    return;
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
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
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    // logistic loss for binary classification task
struct LogisticClassification : public LogisticRegression {
  static const char* DefaultEvalMetric() { return 'error'; }
};
    
    // linear
#include '../src/linear/linear_updater.cc'
#include '../src/linear/updater_coordinate.cc'
#include '../src/linear/updater_shotgun.cc'
    
    /*! \brief High precision gradient statistics pair with integer backed
 * storage. Operators are associative where floating point versions are not
 * associative. */
using GradientPairInteger = detail::GradientPairInternal<int64_t>;
    
    inline void RowSet::PushBack(bst_uint i) {
  if (rows_.size() == 0) {
    if (i == size_) {
      ++size_; return;
    } else {
      rows_.resize(size_);
      for (size_t i = 0; i < size_; ++i) {
        rows_[i] = static_cast<bst_uint>(i);
      }
    }
  }
  rows_.push_back(i);
  ++size_;
}
    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_FDCT_H_
#define GUETZLI_FDCT_H_
    
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
    
    
    {}  // namespace guetzli

    
    #include <stdint.h>
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
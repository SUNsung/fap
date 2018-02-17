// This file defines a C++ DescriptorDatabase, which wraps a Python Database
// and delegate all its operations to Python methods.
    
    #include <memory>
#ifndef _SHARED_PTR_H
#include <google/protobuf/stubs/shared_ptr.h>
#endif
#include <string>
#include <vector>
    
    
    {
    {
    {}  // namespace repeated_scalar_container
}  // namespace python
}  // namespace protobuf
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
    
    namespace google {
namespace protobuf {
  namespace io {
    class Printer;             // printer.h
  }
}
    }
    
    #ifndef BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
      native_buffer_type* buffers()
  {
    return &buffer_;
  }
    
        // Find the next context with the same key.
    Value* next_by_key() const
    {
      context* elem = next_;
      while (elem)
      {
        if (elem->key_ == key_)
          return elem->value_;
        elem = elem->next_;
      }
      return 0;
    }
    
    #if defined(BOOST_ASIO_HAS_STD_FUNCTION)
# include <functional>
#else // defined(BOOST_ASIO_HAS_STD_FUNCTION)
# include <boost/function.hpp>
#endif // defined(BOOST_ASIO_HAS_STD_FUNCTION)
    
    void buffer_sequence_adapter_base::init_native_buffer(
    buffer_sequence_adapter_base::native_buffer_type& buf,
    const boost::asio::const_buffer& buffer)
{
  std::memset(&buf, 0, sizeof(native_buffer_type));
  Microsoft::WRL::ComPtr<IInspectable> insp
    = Microsoft::WRL::Make<winrt_buffer_impl>(buffer);
  Platform::Object^ buf_obj = reinterpret_cast<Platform::Object^>(insp.Get());
  buf = reinterpret_cast<Windows::Storage::Streams::IBuffer^>(insp.Get());
}
    
      // Dispatch the waiting events.
  for (int i = 0; i < num_events; ++i)
  {
    int descriptor = events[i].fd;
    if (descriptor == interrupter_.read_descriptor())
    {
      interrupter_.reset();
    }
    else
    {
      bool more_reads = false;
      bool more_writes = false;
      bool more_except = false;
    }
    }
    
    template <typename Time_Traits>
std::size_t epoll_reactor::cancel_timer(timer_queue<Time_Traits>& queue,
    typename timer_queue<Time_Traits>::per_timer_data& timer,
    std::size_t max_cancelled)
{
  mutex::scoped_lock lock(mutex_);
  op_queue<operation> ops;
  std::size_t n = queue.cancel_timer(timer, ops, max_cancelled);
  lock.unlock();
  io_service_.post_deferred_completions(ops);
  return n;
}
    
      // Returns the combined score of the output image in the last Compare() call
  // (or the baseline image, if Compare() was not called yet), based on output
  // size and the similarity metric.
  virtual double ScoreOutputSize(int size) const = 0;
    
    void OutputImageComponent::SetCoeffBlock(int block_x, int block_y,
                                         const coeff_t block[kDCTBlockSize]) {
  assert(block_x < width_in_blocks_);
  assert(block_y < height_in_blocks_);
  int offset = (block_y * width_in_blocks_ + block_x) * kDCTBlockSize;
  memcpy(&coeffs_[offset], block, kDCTBlockSize * sizeof(coeffs_[0]));
  uint8_t idct[kDCTBlockSize];
  ComputeBlockIDCT(&coeffs_[offset], idct);
  UpdatePixelsForBlock(block_x, block_y, idct);
}
    
    void ComputeBlockDCTDouble(double block[64]) {
  TransformBlock(block, DCT1d);
}
    
    // Functions for reading a jpeg byte stream into a JPEGData object.
    
    static const int kJpegHuffmanRootTableBits = 8;
// Maximum huffman lookup table size.
// According to zlib/examples/enough.c, 758 entries are always enough for
// an alphabet of 257 symbols (256 + 1 special symbol for the all 1s code) and
// max bit length 16 if the root table has 8 bits.
static const int kJpegHuffmanLutSize = 758;
    
      // Requires that comp is not downsampled.
  void CopyFromJpegComponent(const JPEGComponent& comp,
                             int factor_x, int factor_y,
                             const int* quant);
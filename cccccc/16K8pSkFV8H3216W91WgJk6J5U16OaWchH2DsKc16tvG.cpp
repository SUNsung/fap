
        
        
    { private:
  String();  // Not meant to be instantiated.
};  // class String
    
      explicit tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2, GTEST_BY_REF_(T3) f3) : f0_(f0), f1_(f1), f2_(f2),
      f3_(f3) {}
    
      template <GTEST_$(k)_TYPENAMES_(U)>
  tuple& operator=(const GTEST_$(k)_TUPLE_(U)& t) {
    return CopyFrom(t);
  }
    
    
]]
    
    #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
      // Set the count for the number of entries in the batch.
  static void SetCount(WriteBatch* batch, int n);
    
      // compact database
  std::string start_key = Key1(0);
  std::string end_key = Key1(kNumKeys - 1);
  leveldb::Slice least(start_key.data(), start_key.size());
  leveldb::Slice greatest(end_key.data(), end_key.size());
    
    class FilterBlockReader {
 public:
 // REQUIRES: 'contents' and *policy must stay live while *this is live.
  FilterBlockReader(const FilterPolicy* policy, const Slice& contents);
  bool KeyMayMatch(uint64_t block_offset, const Slice& key);
    }
    
      // Check first filter
  ASSERT_TRUE(reader.KeyMayMatch(0, 'foo'));
  ASSERT_TRUE(reader.KeyMayMatch(2000, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'hello'));
    
      memset(buf, 0, sizeof(buf));
  ASSERT_EQ(0x8a9136aa, Value(buf, sizeof(buf)));
    
      // Randomly returns true ~'1/n' of the time, and false otherwise.
  // REQUIRES: n > 0
  bool OneIn(int n) { return (Next() % n) == 0; }
    
    namespace boost {
namespace asio {
    }
    }
    
    #endif // BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP

    
    template <typename Buffer, typename Elem>
class buffer_sequence_adapter<Buffer, std::array<Elem, 2> >
  : buffer_sequence_adapter_base
{
public:
  explicit buffer_sequence_adapter(
      const std::array<Elem, 2>& buffer_sequence)
  {
    init_native_buffer(buffers_[0], Buffer(buffer_sequence[0]));
    init_native_buffer(buffers_[1], Buffer(buffer_sequence[1]));
    total_buffer_size_ = boost::asio::buffer_size(buffer_sequence[0])
      + boost::asio::buffer_size(buffer_sequence[1]);
  }
    }
    
    #endif // BOOST_ASIO_DETAIL_FUNCTION_HPP

    
    #include <boost/asio/detail/push_options.hpp>
    
    
    {} // namespace boost_asio_handler_invoke_helpers
    
    #define BOOST_ASIO_ACCEPT_HANDLER_CHECK( \
    handler_type, handler) \
  typedef int BOOST_ASIO_UNUSED_TYPEDEF
    
    #include <boost/asio/detail/config.hpp>
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #include 'guetzli/output_image.h'
#include 'guetzli/stats.h'
    
    void OutputImageComponent::UpdatePixelsForBlock(
    int block_x, int block_y, const uint8_t idct[kDCTBlockSize]) {
  if (factor_x_ == 1 && factor_y_ == 1) {
    for (int iy = 0; iy < 8; ++iy) {
      for (int ix = 0; ix < 8; ++ix) {
        int x = 8 * block_x + ix;
        int y = 8 * block_y + iy;
        if (x >= width_ || y >= height_) continue;
        int p = y * width_ + x;
        pixels_[p] = idct[8 * iy + ix] << 4;
      }
    }
  } else if (factor_x_ == 2 && factor_y_ == 2) {
    // Fill in the 10x10 pixel area in the subsampled image that will be the
    // basis of the upsampling. This area is enough to hold the 3x3 kernel of
    // the fancy upsampler around each pixel.
    static const int kSubsampledEdgeSize = 10;
    uint16_t subsampled[kSubsampledEdgeSize * kSubsampledEdgeSize];
    for (int j = 0; j < kSubsampledEdgeSize; ++j) {
      // The order we fill in the rows is:
      //   8 rows intersecting the block, row below, row above
      const int y0 = block_y * 16 + (j < 9 ? j * 2 : -2);
      for (int i = 0; i < kSubsampledEdgeSize; ++i) {
        // The order we fill in each row is:
        //   8 pixels within the block, left edge, right edge
        const int ix = ((j < 9 ? (j + 1) * kSubsampledEdgeSize : 0) +
                        (i < 9 ? i + 1 : 0));
        const int x0 = block_x * 16 + (i < 9 ? i * 2 : -2);
        if (x0 < 0) {
          subsampled[ix] = subsampled[ix + 1];
        } else if (y0 < 0) {
          subsampled[ix] = subsampled[ix + kSubsampledEdgeSize];
        } else if (x0 >= width_) {
          subsampled[ix] = subsampled[ix - 1];
        } else if (y0 >= height_) {
          subsampled[ix] = subsampled[ix - kSubsampledEdgeSize];
        } else if (i < 8 && j < 8) {
          subsampled[ix] = idct[j * 8 + i] << 4;
        } else {
          // Reconstruct the subsampled pixels around the edge of the current
          // block by computing the inverse of the fancy upsampler.
          const int y1 = std::max(y0 - 1, 0);
          const int x1 = std::max(x0 - 1, 0);
          subsampled[ix] = (pixels_[y0 * width_ + x0] * 9 +
                            pixels_[y1 * width_ + x1] +
                            pixels_[y0 * width_ + x1] * -3 +
                            pixels_[y1 * width_ + x0] * -3) >> 2;
        }
      }
    }
    }
    }
    
    
    {
    {      // Parameters tuned to avoid sharpening in too bright areas, where the
      // effect makes it worse instead of better.
      if (channel == 2 && g < 0.85 && b < 0.85 && r < 0.9) {
        darkmap[index] = true;
      }
      if (channel == 1 && r < 0.85 && g < 0.85 && b < 0.9) {
        darkmap[index] = true;
      }
    }
  }
    
    // Entropy encoding (Huffman) utilities.
    
    
    {}  // namespace guetzli
    
      int iquant[3 * kDCTBlockSize];
  int idx = 0;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < kDCTBlockSize; ++j) {
      int v = quant[idx];
      jpg->quant[i].values[j] = v;
      iquant[idx++] = ((1 << kIQuantBits) + 1) / v;
    }
  }
    
    int BuildJpegHuffmanTable(const int* count_in, const int* symbols,
                          HuffmanTableEntry* lut) {
  HuffmanTableEntry code;    // current table entry
  HuffmanTableEntry* table;  // next available space in table
  int len;         // current code length
  int idx;         // symbol index
  int key;         // prefix code
  int reps;        // number of replicate key values in current table
  int low;         // low bits for current root entry
  int table_bits;  // key length of current table
  int table_size;  // size of current table
  int total_size;  // sum of root table size and 2nd level table sizes
    }
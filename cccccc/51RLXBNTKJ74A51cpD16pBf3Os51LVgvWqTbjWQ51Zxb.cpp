
        
        
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
    void RepeatedEnumFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.ForEnum($tag$, x => (int) x, x => ($type_name$) x);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
    
    struct Options;
    
      virtual MessageGenerator* NewMessageGenerator(
      const Descriptor* descriptor) const;
    
      LOG(INFO) << 'Writing Training data';
  for (int fileid = 0; fileid < kCIFARTrainBatches; ++fileid) {
    // Open files
    LOG(INFO) << 'Training Batch ' << fileid + 1;
    string batchFileName = input_folder + '/data_batch_'
      + caffe::format_int(fileid+1) + '.bin';
    std::ifstream data_file(batchFileName.c_str(),
        std::ios::in | std::ios::binary);
    CHECK(data_file) << 'Unable to open train file #' << fileid + 1;
    for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
      read_image(&data_file, &label, str_buffer);
      datum.set_label(label);
      datum.set_data(str_buffer, kCIFARImageNBytes);
      string out;
      CHECK(datum.SerializeToString(&out));
      txn->Put(caffe::format_int(fileid * kCIFARBatchSize + itemid, 5), out);
    }
  }
  txn->Commit();
  train_db->Close();
    
     protected:
   /**
   * @brief Generates a random integer from Uniform({0, 1, ..., n-1}).
   *
   * @param n
   *    The upperbound (exclusive) value of the random number.
   * @return
   *    A uniformly random integer value from ({0, 1, ..., n-1}).
   */
  virtual int Rand(int n);
    
    /**
 * @brief Computes @f$ y = |x| @f$
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class AbsValLayer : public NeuronLayer<Dtype> {
 public:
  explicit AbsValLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      /// @brief The spatial dimensions of the input.
  inline int input_shape(int i) {
    return (*bottom_shape_)[channel_axis_ + i];
  }
  // reverse_dimensions should return true iff we are implementing deconv, so
  // that conv helpers know which dimensions are which.
  virtual bool reverse_dimensions() = 0;
  // Compute height_out_ and width_out_ from other parameters.
  virtual void compute_output_shape() = 0;
    
    #include 'caffe/layers/neuron_layer.hpp'
    
    #include 'caffe/layers/pooling_layer.hpp'
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of SigmoidLayer.
 */
template <typename Dtype>
class CuDNNSigmoidLayer : public SigmoidLayer<Dtype> {
 public:
  explicit CuDNNSigmoidLayer(const LayerParameter& param)
      : SigmoidLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSigmoidLayer();
    }
    
    
    {}  // namespace caffe
    
      void finish() {
    markAsFinished();
  }
    
    
    {
    {///////////////////////////////////////////////////////////////////////////////
}}

    
    
    {  AreaIndex area_idx;
  int frame{-1};
  uint64_t weight;
  jit::vector<Vinstr> code;
};
    
    
    {  auto const dest = gen(env,
                        fastPath ? LdSSwitchDestFast
                                 : LdSSwitchDestSlow,
                        data,
                        testVal);
  decRef(env, testVal);
  gen(
    env,
    JmpSSwitchDest,
    IRSPRelOffsetData { spOffBCFromIRSP(env) },
    dest,
    sp(env),
    fp(env)
  );
}
    
    TRACE_SET_MOD(hfsort);
    
    namespace HPHP {
/////////////////////////////////////////////////////////////////////////////
    }
    
    struct CurlShareResource : SweepableResourceData {
  DECLARE_RESOURCE_ALLOCATION(CurlShareResource)
  CLASSNAME_IS('curl_share')
  const String& o_getClassNameHook() const override { return classnameof(); }
  bool isInvalid() const override { return !m_share; }
    }
    
    #include <boost/asio/detail/config.hpp>
#include <cstddef>
#include <boost/asio/basic_io_object.hpp>
#include <boost/asio/detail/handler_type_requirements.hpp>
#include <boost/asio/detail/throw_error.hpp>
#include <boost/asio/error.hpp>
#include <boost/asio/wait_traits.hpp>
#include <boost/asio/waitable_timer_service.hpp>
    
    /// Copies a limited number of bytes from a source buffer to a target buffer.
/**
 * @param target A modifiable buffer representing the memory region to which
 * the bytes will be copied.
 *
 * @param source A non-modifiable buffer representing the memory region from
 * which the bytes will be copied.
 *
 * @param max_bytes_to_copy The maximum number of bytes to be copied.
 *
 * @returns The number of bytes copied.
 *
 * @note The number of bytes copied is the lesser of:
 *
 * @li @c buffer_size(target)
 *
 * @li @c buffer_size(source)
 *
 * @li @c max_bytes_to_copy
 *
 * This function is implemented in terms of @c memcpy, and consequently it
 * cannot be used to copy between overlapping memory regions.
 */
inline std::size_t buffer_copy(const mutable_buffer& target,
    const const_buffer& source, std::size_t max_bytes_to_copy)
{
  return buffer_copy(buffer(target, max_bytes_to_copy), source);
}
    
    #endif // BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP

    
    namespace boost {
namespace asio {
    }
    }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
      static Buffer first(const std::array<Elem, 2>& buffer_sequence)
  {
    return Buffer(boost::asio::buffer_size(buffer_sequence[0]) != 0
        ? buffer_sequence[0] : buffer_sequence[1]);
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #ifndef BOOST_ASIO_DETAIL_CALL_STACK_HPP
#define BOOST_ASIO_DETAIL_CALL_STACK_HPP
    
    
    {private:
  int descriptor_;
  MutableBufferSequence buffers_;
};
    
    #endif // BOOST_ASIO_DETAIL_EVENT_HPP

    
    /**
 * @brief Create an osquery extension 'module'.
 *
 * This helper macro creates a constructor to declare an osquery module is
 * loading. The osquery registry is set up when modules (shared objects) are
 * discovered via search paths and opened. At that phase the registry is locked
 * meaning no additional plugins can be registered. To unlock the registry
 * for modifications a module must call Registry::declareModule. This declares
 * and any plugins added will use the metadata in the declare to determine:
 *  - The name of the module adding the plugin
 *  - The SDK version the module was built with, to determine compatibility
 *  - The minimum SDK the module requires from osquery core
 *
 * The registry is again locked when the module load is complete and a well
 * known module-exported symbol is called.
 */
#define CREATE_MODULE(name, version, min_sdk_version)                          \
  extern 'C' EXPORT_FUNCTION void initModule(void);                            \
  struct osquery_InternalStructCreateModule {                                  \
    osquery_InternalStructCreateModule(void) {                                 \
      Registry::get().declareModule(                                           \
          name, version, min_sdk_version, OSQUERY_SDK_VERSION);                \
    }                                                                          \
  };                                                                           \
  static osquery_InternalStructCreateModule osquery_internal_module_instance_;
    
    TEST_F(ViewsConfigParserPluginTests, test_update_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test2.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  std::string query;
  getDatabaseValue(kQueries, 'config_views.kernel_hashes_new', query);
  EXPECT_EQ(query,
            'select hash.path as binary, version, hash.sha256 as SHA256, '
            'hash.sha1 as SHA1, hash.md5 as MD5 from (select path || '
            ''/Contents/MacOS/' as directory, name, version from '
            'kernel_extensions) join hash using (directory)');
    }
    
        uid_t expected_user = 0U;
    EXPECT_EQ(dropper->to_user_, expected_user);
    
    
    {TEST_F(StatusTests, test_to_string) {
  auto s = Status(0, 'foobar');
  EXPECT_EQ(s.toString(), 'foobar');
}
}

    
    TEST_F(RocksDBDatabasePluginTests, test_corruption) {
  ASSERT_TRUE(pathExists(path_));
  ASSERT_FALSE(pathExists(path_ + '.backup'));
    }
    
     protected:
  /// Path to testing database.
  std::string path_;
    
      // Sets *pos to the next stream position where parsing should continue.
  // Returns false if the stream ended too early.
  bool FinishStream(size_t* pos) {
    // Give back some bytes that we did not use.
    int unused_bytes_left = bits_left_ >> 3;
    while (unused_bytes_left-- > 0) {
      --pos_;
      // If we give back a 0 byte, we need to check if it was a 0xff/0x00 escape
      // sequence, and if yes, we need to give back one more byte.
      if (pos_ < next_marker_pos_ &&
          data_[pos_] == 0 && data_[pos_ - 1] == 0xff) {
        --pos_;
      }
    }
    if (pos_ > next_marker_pos_) {
      // Data ran out before the scan was complete.
      fprintf(stderr, 'Unexpected end of scan.\n');
      return false;
    }
    *pos = pos_;
    return true;
  }
    
    void OutputImageComponent::ToPixels(int xmin, int ymin, int xsize, int ysize,
                                    uint8_t* out, int stride) const {
  assert(xmin >= 0);
  assert(ymin >= 0);
  assert(xmin < width_);
  assert(ymin < height_);
  const int yend1 = ymin + ysize;
  const int yend0 = std::min(yend1, height_);
  int y = ymin;
  for (; y < yend0; ++y) {
    const int xend1 = xmin + xsize;
    const int xend0 = std::min(xend1, width_);
    int x = xmin;
    int px = y * width_ + xmin;
    for (; x < xend0; ++x, ++px, out += stride) {
      *out = static_cast<uint8_t>((pixels_[px] + 8 - (x & 1)) >> 4);
    }
    const int offset = -stride;
    for (; x < xend1; ++x) {
      *out = out[offset];
      out += stride;
    }
  }
  for (; y < yend1; ++y) {
    const int offset = -stride * xsize;
    for (int x = 0; x < xsize; ++x) {
      *out = out[offset];
      out += stride;
    }
  }
}
    
    namespace guetzli {
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
    
    #include 'guetzli/jpeg_data.h'
    
      //write 20 bytes to the buffer chain
  RWPrivateCursor wcursor(iobuf1.get());
  EXPECT_FALSE(wcursor.isAtEnd());
  wcursor.writeBE<uint64_t>(1);
  wcursor.writeBE<uint64_t>(10);
  wcursor.writeBE<uint32_t>(20);
  EXPECT_TRUE(wcursor.isAtEnd());
    
    
    {// TODO:
// // numeric conversions:
// template <std::size_t N>
// constexpr int stoi(const FixedString<N>& str, int base = 10);
// template <std::size_t N>
// constexpr unsigned stou(const FixedString<N>& str, int base = 10);
// template <std::size_t N>
// constexpr long stol(const FixedString<N>& str, int base = 10);
// template <std::size_t N>
// constexpr unsigned long stoul(const FixedString<N>& str, int base = 10;
// template <std::size_t N>
// constexpr long long stoll(const FixedString<N>& str, int base = 10);
// template <std::size_t N>
// constexpr unsigned long long stoull(const FixedString<N>& str,
// int base = 10);
// template <std::size_t N>
// constexpr float stof(const FixedString<N>& str);
// template <std::size_t N>
// constexpr double stod(const FixedString<N>& str);
// template <std::size_t N>
// constexpr long double stold(const FixedString<N>& str);
// template <int val>
// constexpr FixedString</*...*/> to_fixed_string_i() noexcept;
// template <unsigned val>
// constexpr FixedString</*...*/> to_fixed_string_u() noexcept;
// template <long val>
// constexpr FixedString</*...*/> to_fixed_string_l() noexcept;
// template <unsigned long val>
// constexpr FixedString</*...*/> to_fixed_string_ul() noexcept;
// template <long long val>
// constexpr FixedString</*...*/> to_fixed_string_ll() noexcept
// template <unsigned long long val>
// constexpr FixedString</*...*/> to_fixed_string_ull() noexcept;
} // namespace folly

    
      // None of the previous reallocation strategies worked (or we're using
  // an internal buffer).  malloc/copy/free.
  if (newBuffer == nullptr) {
    newAllocatedCapacity = goodExtBufferSize(newCapacity);
    void* p = malloc(newAllocatedCapacity);
    if (UNLIKELY(p == nullptr)) {
      throw std::bad_alloc();
    }
    newBuffer = static_cast<uint8_t*>(p);
    if (length_ > 0) {
      assert(data_ != nullptr);
      memcpy(newBuffer + minHeadroom, data_, length_);
    }
    if (sharedInfo()) {
      freeExtBuffer();
    }
    newHeadroom = minHeadroom;
  }
    
    #include <folly/CPortability.h>
#include <folly/Optional.h>
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.readIfNotEmpty(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
    #include <string>
    
    #pragma once
    
    
    {
    {} // namespace detail
} // namespace folly

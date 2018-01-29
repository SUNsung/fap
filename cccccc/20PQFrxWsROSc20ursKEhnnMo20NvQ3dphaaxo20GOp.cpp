//# ifdef JSON_USE_CPPTL
//   typedef CppTL::AnyEnumerator<const char *> EnumMemberNames;
//   typedef CppTL::AnyEnumerator<const Value &> EnumValues;
//# endif
    
    // Builds a RepeatedCompositeContainer object, from a parent message and a
// field descriptor.
PyObject *NewContainer(
    CMessage* parent,
    const FieldDescriptor* parent_field_descriptor,
    CMessageClass *child_message_class);
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_MESSAGE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_MESSAGE_FIELD_H__
    
    
    {}
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/layers/lrn_layer.hpp'
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/relu_layer.hpp'
    
    Vlabel Vunit::makeScratchBlock() {
  return makeBlock(AreaIndex::Main, 1);
}
    
    /*
 * Block of Vinstrs, managed by Vunit.
 *
 * A Vblock, in addition to containing a Vinstr stream, also specifies where it
 * should be emitted to.
 */
struct Vblock {
  explicit Vblock(AreaIndex area_idx, uint64_t w)
    : area_idx(area_idx)
    , weight(w) {}
    }
    
      /* make encoding list */
  list = nullptr;
  size = 0;
  php_mb_parse_encoding(encoding_list, &list, &size, false);
  if (size > 0 && list != nullptr) {
    elist = list;
  } else {
    elist = MBSTRG(current_detect_order_list);
    size = MBSTRG(current_detect_order_list_size);
  }
    
      explicit ValIter(ArrayData* arr, ssize_t start_pos)
    : m_arr(arr)
    , m_kind(arr->kind())
  {
    assert(isMixed(m_kind) || m_kind == kPackedKind || m_kind == kVecKind);
    if (isMixed(m_kind)) {
      m_iterMixed = asMixed(arr)->data() + start_pos;
      m_stopMixed = asMixed(arr)->data() + asMixed(arr)->m_used;
      assert(m_iterMixed <= m_stopMixed);
    } else {
      m_iterPacked = reinterpret_cast<TypedValue*>(arr + 1) + start_pos;
      m_stopPacked = reinterpret_cast<TypedValue*>(arr + 1) + arr->m_size;
      assert(m_iterPacked <= m_stopPacked);
    }
  }
    
    ThriftBuffer::~ThriftBuffer() {
  free(m_buf);
}
    
    bool EncodeMetadata(const JPEGData& jpg, bool strip_metadata, JPEGOutput out) {
  if (strip_metadata) {
    const uint8_t kApp0Data[] = {
      0xff, 0xe0, 0x00, 0x10,        // APP0
      0x4a, 0x46, 0x49, 0x46, 0x00,  // 'JFIF'
      0x01, 0x01,                    // v1.01
      0x00, 0x00, 0x01, 0x00, 0x01,  // aspect ratio = 1:1
      0x00, 0x00                     // thumbnail width/height
    };
    return JPEGWrite(out, kApp0Data, sizeof(kApp0Data));
  }
  bool ok = true;
  for (size_t i = 0; i < jpg.app_data.size(); ++i) {
    uint8_t data[1] = { 0xff };
    ok = ok && JPEGWrite(out, data, sizeof(data));
    ok = ok && JPEGWrite(out, jpg.app_data[i]);
  }
  for (size_t i = 0; i < jpg.com_data.size(); ++i) {
    uint8_t data[2] = { 0xff, 0xfe };
    ok = ok && JPEGWrite(out, data, sizeof(data));
    ok = ok && JPEGWrite(out, jpg.com_data[i]);
  }
  return ok;
}
    
    // Sort the root nodes, least popular first.
static inline bool SortHuffmanTree(const HuffmanTree& v0,
                                   const HuffmanTree& v1) {
  if (v0.total_count_ != v1.total_count_) {
    return v0.total_count_ < v1.total_count_;
  }
  return v0.index_right_or_value_ > v1.index_right_or_value_;
}
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg) {
  static const int quant[3 * kDCTBlockSize] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  };
  return EncodeRGBToJpeg(rgb, w, h, quant, jpg);
}
    
    
    {}  // namespace guetzli
    
    size_t ClusterHistograms(JpegHistogram* histo, size_t* num, int* histo_indexes,
                         uint8_t* depths);
    
    static const int kJpegHuffmanRootTableBits = 8;
// Maximum huffman lookup table size.
// According to zlib/examples/enough.c, 758 entries are always enough for
// an alphabet of 257 symbols (256 + 1 special symbol for the all 1s code) and
// max bit length 16 if the root table has 8 bits.
static const int kJpegHuffmanLutSize = 758;
    
    #include <stdint.h>
#include <vector>
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
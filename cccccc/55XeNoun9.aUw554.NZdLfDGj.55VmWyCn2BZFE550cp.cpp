
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    namespace tensorflow {
namespace port {
    }
    }
    
    #include 'tensorflow/core/lib/strings/strcat.h'
    
    bool HloReachabilityMap::IsReachable(const HloInstruction* a,
                                     const HloInstruction* b) const {
  return GetBitVector(b).Get(GetIndex(a));
}
    
        NodeDef* const_node3 = graph_def.add_node();
    const_node3->set_name('const_node3');
    const_node3->set_op('Const');
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
REGISTER_COMPLEX(GPU, float, complex64);
REGISTER_COMPLEX(GPU, double, complex128);
#endif
    
    TEST_F(GrpcDebugTest, SendSingleDebugTensorViaGrpcTest) {
  Tensor tensor(DT_FLOAT, TensorShape({1, 1}));
  tensor.flat<float>()(0) = 42.0;
  const DebugNodeKey kDebugNodeKey('/job:localhost/replica:0/task:0/cpu:0',
                                   'foo_tensor', 0, 'DebugIdentity');
  TF_ASSERT_OK(DebugIO::PublishDebugTensor(
      kDebugNodeKey, tensor, Env::Default()->NowMicros(), {server_data_.url}));
  TF_ASSERT_OK(DebugIO::CloseDebugURL(server_data_.url));
    }
    
      // Clear debug data (e.g., Tensors) received so far.
  void ClearReceivedDebugData();
    
    #include <zlib.h>
    
    template<typename T> // unused
struct algorithm_spec<CollectiveType::BARRIER, T> {
  static GlooCache::key_type key(THDGroup group_id) {
    return std::make_tuple(CollectiveType::BARRIER, group_id, UNUSED_DEVICE, UNUSED_STREAM,
                           UNUSED_BYTES, UNUSED_BYTES, UNUSED_OP, UNUSED_RANK);
  }
    }
    
    #define THDPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPDoubleStorageClass)
#define THDPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPFloatStorageClass)
#define THDPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPHalfStorageClass)
#define THDPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPLongStorageClass)
#define THDPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPIntStorageClass)
#define THDPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPShortStorageClass)
#define THDPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPCharStorageClass)
#define THDPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPByteStorageClass)
    
    #undef THHostTensor
#undef THHostTensor_
#undef THHostStorage
#undef THHostStorage_

    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
      WriteOptions write_options;
  ASSERT_OK(db->Put(write_options, '1', 'b'));
  ASSERT_OK(db->Put(write_options, '2', 'c'));
  ASSERT_OK(db->Put(write_options, '3', 'd'));
  ASSERT_OK(db->Put(write_options, '4', 'e'));
  ASSERT_OK(db->Put(write_options, '5', 'f'));
    
    class FilterPolicy;
    
    #include <math.h>
#include <stdio.h>
#include 'port/port.h'
#include 'util/histogram.h'
    
    // A very simple random number generator.  Not especially good at
// generating truly random bits, but good enough for our needs in this
// package.
class Random {
 private:
  uint32_t seed_;
 public:
  explicit Random(uint32_t s) : seed_(s & 0x7fffffffu) {
    // Avoid bad seeds.
    if (seed_ == 0 || seed_ == 2147483647L) {
      seed_ = 1;
    }
  }
  uint32_t Next() {
    static const uint32_t M = 2147483647L;   // 2^31-1
    static const uint64_t A = 16807;  // bits 14, 8, 7, 5, 2, 1, 0
    // We are computing
    //       seed_ = (seed_ * A) % M,    where M = 2^31-1
    //
    // seed_ must not be zero or M, or else all subsequent computed values
    // will be zero or M respectively.  For all other values, seed_ will end
    // up cycling through every number in [1,M-1]
    uint64_t product = seed_ * A;
    }
    }
    
      Status AddRecord(const Slice& slice);
    
    
    {}  // namespace leveldb
    
    // redirect the messages to R's console.
namespace dmlc {
void CustomLogMessage::Log(const std::string& msg) {
  Rprintf('%s\n', msg.c_str());
}
}  // namespace dmlc
    
    /*! \brief training parameters */
struct GBTreeTrainParam : public dmlc::Parameter<GBTreeTrainParam> {
  /*!
   * \brief number of parallel trees constructed each iteration
   *  use this option to support boosted random forest
   */
  int num_parallel_tree;
  /*! \brief tree updater sequence */
  std::string updater_seq;
  /*! \brief type of boosting process to run */
  int process_type;
  // flag to print out detailed breakdown of runtime
  int debug_verbose;
  std::string predictor;
  // declare parameters
  DMLC_DECLARE_PARAMETER(GBTreeTrainParam) {
    DMLC_DECLARE_FIELD(num_parallel_tree)
        .set_default(1)
        .set_lower_bound(1)
        .describe('Number of parallel trees constructed during each iteration.'\
                  ' This option is used to support boosted random forest');
    DMLC_DECLARE_FIELD(updater_seq)
        .set_default('grow_colmaker,prune')
        .describe('Tree updater sequence.');
    DMLC_DECLARE_FIELD(process_type)
        .set_default(kDefault)
        .add_enum('default', kDefault)
        .add_enum('update', kUpdate)
        .describe('Whether to run the normal boosting process that creates new trees,'\
                  ' or to update the trees in an existing model.');
    DMLC_DECLARE_FIELD(debug_verbose)
        .set_lower_bound(0)
        .set_default(0)
        .describe('flag to print out detailed breakdown of runtime');
    // add alias
    DMLC_DECLARE_ALIAS(updater_seq, updater);
    DMLC_DECLARE_FIELD(predictor)
      .set_default('cpu_predictor')
      .describe('Predictor algorithm type');
  }
};
    
    #if DMLC_ENABLE_STD_THREAD
#include '../src/data/sparse_page_source.cc'
#include '../src/data/sparse_page_dmatrix.cc'
#include '../src/data/sparse_page_writer.cc'
#endif
    
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
    
    static const int kCrToGreenTable[256] = {
  5990656,  5943854,  5897052,  5850250,  5803448,  5756646,  5709844,  5663042,
  5616240,  5569438,  5522636,  5475834,  5429032,  5382230,  5335428,  5288626,
  5241824,  5195022,  5148220,  5101418,  5054616,  5007814,  4961012,  4914210,
  4867408,  4820606,  4773804,  4727002,  4680200,  4633398,  4586596,  4539794,
  4492992,  4446190,  4399388,  4352586,  4305784,  4258982,  4212180,  4165378,
  4118576,  4071774,  4024972,  3978170,  3931368,  3884566,  3837764,  3790962,
  3744160,  3697358,  3650556,  3603754,  3556952,  3510150,  3463348,  3416546,
  3369744,  3322942,  3276140,  3229338,  3182536,  3135734,  3088932,  3042130,
  2995328,  2948526,  2901724,  2854922,  2808120,  2761318,  2714516,  2667714,
  2620912,  2574110,  2527308,  2480506,  2433704,  2386902,  2340100,  2293298,
  2246496,  2199694,  2152892,  2106090,  2059288,  2012486,  1965684,  1918882,
  1872080,  1825278,  1778476,  1731674,  1684872,  1638070,  1591268,  1544466,
  1497664,  1450862,  1404060,  1357258,  1310456,  1263654,  1216852,  1170050,
  1123248,  1076446,  1029644,   982842,   936040,   889238,   842436,   795634,
   748832,   702030,   655228,   608426,   561624,   514822,   468020,   421218,
   374416,   327614,   280812,   234010,   187208,   140406,    93604,    46802,
        0,   -46802,   -93604,  -140406,  -187208,  -234010,  -280812,  -327614,
  -374416,  -421218,  -468020,  -514822,  -561624,  -608426,  -655228,  -702030,
  -748832,  -795634,  -842436,  -889238,  -936040,  -982842, -1029644, -1076446,
 -1123248, -1170050, -1216852, -1263654, -1310456, -1357258, -1404060, -1450862,
 -1497664, -1544466, -1591268, -1638070, -1684872, -1731674, -1778476, -1825278,
 -1872080, -1918882, -1965684, -2012486, -2059288, -2106090, -2152892, -2199694,
 -2246496, -2293298, -2340100, -2386902, -2433704, -2480506, -2527308, -2574110,
 -2620912, -2667714, -2714516, -2761318, -2808120, -2854922, -2901724, -2948526,
 -2995328, -3042130, -3088932, -3135734, -3182536, -3229338, -3276140, -3322942,
 -3369744, -3416546, -3463348, -3510150, -3556952, -3603754, -3650556, -3697358,
 -3744160, -3790962, -3837764, -3884566, -3931368, -3978170, -4024972, -4071774,
 -4118576, -4165378, -4212180, -4258982, -4305784, -4352586, -4399388, -4446190,
 -4492992, -4539794, -4586596, -4633398, -4680200, -4727002, -4773804, -4820606,
 -4867408, -4914210, -4961012, -5007814, -5054616, -5101418, -5148220, -5195022,
 -5241824, -5288626, -5335428, -5382230, -5429032, -5475834, -5522636, -5569438,
 -5616240, -5663042, -5709844, -5756646, -5803448, -5850250, -5897052, -5943854,
};
    
    void ComputeBlockDCTDouble(double block[64]) {
  TransformBlock(block, DCT1d);
}
    
          // The sentinel node becomes the parent node.
      size_t j_end = 2 * n - k;
      tree[j_end].total_count_ =
          tree[left].total_count_ + tree[right].total_count_;
      tree[j_end].index_left_ = static_cast<int16_t>(left);
      tree[j_end].index_right_or_value_ = static_cast<int16_t>(right);
    
    namespace guetzli {
    }
    
    #include <stddef.h>
#include <stdint.h>
    
    struct HuffmanTableEntry {
  // Initialize the value to an invalid symbol so that we can recognize it
  // when reading the bit stream using a Huffman code with space > 0.
  HuffmanTableEntry() : bits(0), value(0xffff) {}
    }
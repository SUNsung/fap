
        
        #include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/resource_mgr.h'
#include 'tensorflow/core/framework/tensor_shape.h'
#include 'tensorflow/core/platform/logging.h'
#include 'tensorflow/core/platform/mutex.h'
#include 'tensorflow/core/platform/thread_annotations.h'
#include 'tensorflow/core/platform/types.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      // Runs the optimized version of the graph on the cluster, measure
  // the runtimes of each operation, and annotated the CostGraphDef
  // with the corresponding measurements.
  // Returns the average latency for the whole graph.
  Status PredictCosts(const GraphDef& optimized_graph, CostGraphDef* cost_graph,
                      Costs* overall_cost) const override;
    
    
    {
    {}  // namespace io
}  // namespace tensorflow
    
    
    {}  // end namespace Eigen
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    class TFRecordReader : public ReaderBase {
 public:
  TFRecordReader(const string& node_name, const string& compression_type,
                 Env* env)
      : ReaderBase(strings::StrCat('TFRecordReader '', node_name, ''')),
        env_(env),
        offset_(0),
        compression_type_(compression_type) {}
    }
    
        EXPECT_EQ(a_1_1.get(), a_1_2.get());
    EXPECT_EQ(d_4_1.get(), d_4_2.get());
    EXPECT_EQ(e_5_1.get(), e_5_2.get());
    
        NodeDef* add_node2 = graph_def.add_node();
    add_node2->set_name('add_node2');
    add_node2->set_op('Add');
    add_node2->add_input('const_node1');
    add_node2->add_input('const_node2');
    add_node2->set_device('//device:GPU:1');
    
      ASSERT_FALSE(
      DebugIO::IsDebugNodeGateOpen('foo:1:DebugIdentity', {kGrpcUrl1}));
  ASSERT_FALSE(
      DebugIO::IsDebugNodeGateOpen('foo:1:DebugNumericSummary', {kGrpcUrl1}));
  ASSERT_FALSE(
      DebugIO::IsDebugNodeGateOpen('qux:0:DebugIdentity', {kGrpcUrl1}));
  ASSERT_TRUE(DebugIO::IsDebugNodeGateOpen('foo:0:DebugIdentity', {kGrpcUrl1}));
  ASSERT_TRUE(DebugIO::IsDebugNodeGateOpen('bar:0:DebugIdentity', {kGrpcUrl1}));
    
    // Convert a Python object to a FileDescriptorProto pointer.
// Handles all kinds of Python errors, which are simply logged.
static bool GetFileDescriptorProto(PyObject* py_descriptor,
                                   FileDescriptorProto* output) {
  if (py_descriptor == NULL) {
    if (PyErr_ExceptionMatches(PyExc_KeyError)) {
      // Expected error: item was simply not found.
      PyErr_Clear();
    } else {
      GOOGLE_LOG(ERROR) << 'DescriptorDatabase method raised an error';
      PyErr_Print();
    }
    return false;
  }
  if (py_descriptor == Py_None) {
    return false;
  }
  const Descriptor* filedescriptor_descriptor =
      FileDescriptorProto::default_instance().GetDescriptor();
  CMessage* message = reinterpret_cast<CMessage*>(py_descriptor);
  if (PyObject_TypeCheck(py_descriptor, &CMessage_Type) &&
      message->message->GetDescriptor() == filedescriptor_descriptor) {
    // Fast path: Just use the pointer.
    FileDescriptorProto* file_proto =
        static_cast<FileDescriptorProto*>(message->message);
    *output = *file_proto;
    return true;
  } else {
    // Slow path: serialize the message. This allows to use databases which
    // use a different implementation of FileDescriptorProto.
    ScopedPyObjectPtr serialized_pb(
        PyObject_CallMethod(py_descriptor, 'SerializeToString', NULL));
    if (serialized_pb == NULL) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    char* str;
    Py_ssize_t len;
    if (PyBytes_AsStringAndSize(serialized_pb.get(), &str, &len) < 0) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    FileDescriptorProto file_proto;
    if (!file_proto.ParseFromArray(str, len)) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      return false;
    }
    *output = file_proto;
    return true;
  }
}
    
      // Find the file which defines an extension extending the given message type
  // with the given field number.
  // Containing_type must be a fully-qualified type name.
  // Python objects are not required to implement this method.
  bool FindFileContainingExtension(const string& containing_type,
                                   int field_number,
                                   FileDescriptorProto* output);
    
    void RepeatedEnumFieldGenerator::GenerateSerializationCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.WriteTo(output, _repeated_$name$_codec);\n');
}
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_repeated_primitive_field.h>
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Generates Java code for a given .proto file.
    
    ServiceGenerator* ImmutableGeneratorFactory::NewServiceGenerator(
    const ServiceDescriptor* descriptor) const {
  return new ImmutableServiceGenerator(descriptor, context_);
}
    
    void QLSQ::clear() {  // initialize
  a = 0.0;
  b = 0.0;
  c = 0.0;
  n = 0;                           // No elements.
  sigx = 0.0;                      // Zero accumulators.
  sigy = 0.0;
  sigxx = 0.0;
  sigxy = 0.0;
  sigyy = 0.0;
  sigxxx = 0.0;
  sigxxy = 0.0;
  sigxxxx = 0.0;
}
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'strngs.h'
    
    /* define data structure to hold 2D points or vectors using floating point */
typedef struct
{
  FLOAT32 x, y;
} FPOINT;
typedef FPOINT FVECTOR;
    
    #include 'bbgrid.h'
#include 'blobbox.h'
    
       private:
    // Initializes the indices to the last valid location in the given batch
    // index.
    void InitToLastOfBatch(int batch);
    // Computes and sets t_ from the current indices_.
    void SetTFromIndices();
    
      pProtoList = ProtoList;
  iterate(pProtoList)
  {
    Proto = (PROTOTYPE *) first_node (pProtoList);
    if ((Proto->Significant && KeepSigProtos) ||
        (!Proto->Significant && KeepInsigProtos))
    {
      NewProto = (PROTOTYPE *)Emalloc(sizeof(PROTOTYPE));
    }
    }
    
    #include 'test/core/util/test_config.h'
#include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    static const int WARMUP = 5;
static const int BENCHMARK = 5;
    
    static void sigint_handler(int x) {
  gpr_atm_no_barrier_store(&grpc::testing::interop::g_got_sigint, true);
}
    
    template <class T, class F>
double sum(const T& container, F functor) {
  double r = 0;
  for (auto v = container.begin(); v != container.end(); v++) {
    r += functor(*v);
  }
  return r;
}
    
            // An edge end. It could be input or output edge end of a node.
        // For node's input edge end, it's the source end, as the destination
        // end is the node itself.
        // For node's ouput edge end, it's the destination end, as the source
        // end is the node itself.
        class EdgeEnd
        {
        public:
    }
    
    
    {            auto it = opSchema.m_opSignature.m_typeConstraintMap.find(name);
            assert(it == opSchema.m_opSignature.m_typeConstraintMap.end());
            DataTypeSet d;
            for (const auto& t : types)
            {
                d.insert(Utils::OpUtils::ToType(t));
            }
            opSchema.m_opSignature.m_typeConstraintMap.insert(std::make_pair(name, std::make_pair(d, desc)));
        }
    
            const Status& Status::OK()
        {
            static Status s_ok;
            return s_ok;
        }
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(Affine)
        .Description('Affine takes one input data (Tensor<T>) and produces one output '
            'data (Tensor<T>) where the affine function, f(x)= alpha * x + beta is '
            'applied to the tensor elementwise.')
        .Input('X', 'Input tensor of any shape', 'T')
        .Output('Y', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('alpha', 'Scalar multiplication factor', AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('beta', 'Scalar offset', AttrType::AttributeProto_AttributeType_FLOAT);
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Reshape)
        .Description('Reshape the input tensor similar to numpy.reshape. '
            '                                                                                    '
            'It takes a tensor as input and an argument `shape`. It outputs the reshaped tensor. '
            '                                                                             '
            'At most one dimension of the new shape can be -1. In this case, the value is '
            'inferred from the size of the tensor and the remaining dimensions. A dimensions '
            'could also be 0, in which case the actual dimension value is going to be copied '
            'from the shape argument.')
        .Input('data', 'An input tensor.', 'T')
        .Output('reshaped', 'Reshaped data.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('shape', 'Tensor of shape declarations for the output. Must be compatible with '
            'the input. At most one dimension of the new shape can be -1. In this case, the '
            'value is inferred from the size of the tensor and the remaining dimensions. A '
            'dimension could also be 0, in which case the actual dimension value is going to '
            'be copied from the input tensor.', AttrType::AttributeProto_AttributeType_INTS);
    
        // SaveData - save data in the file/files
    // recordStart - Starting record number
    // matricies - a map of section name (section:subsection) to data pointer. Data sepcifications from config file will be used to determine where and how to save data
    // numRecords - number of records we are saving, can be zero if not applicable
    // datasetSize - Size of the dataset
    // byteVariableSized - for variable sized data, size of current block to be written, zero when not used, or ignored if not variable sized data
    virtual bool SaveData(size_t recordStart, const std::map<std::wstring, void*, nocase_compare>& matrices, size_t numRecords, size_t datasetSize, size_t byteVariableSized = 0);
    
    constexpr ptrdiff_t STORAGE_SIZE = 10;
constexpr size_t VEC_SIZE = 3;
    
      vector<int64_t> sizes = {2, 2};
  tensor2->resize(sizes);
  tensor2->fill(4);
  tensor->add(*tensor2, 1);
  assert(tensor->nDim() == 2);
    
      GlooCache(rank_type rank,
            std::vector<std::shared_ptr<::gloo::transport::Device>> deviceList)
   : _rank(rank)
   , _deviceList(deviceList)
  {}
    
    CUDAGenerator::CUDAGenerator(Context * context_)
  : context(context_)
{
  // there's no reason to call THCRandom_init, because it is called
  // during THCudaInit, which is called before this initializer
  generator = THCRandom_getGenerator(context->thc_state);
}
    
    bool WriteJpeg(const JPEGData& jpg, bool strip_metadata, JPEGOutput out) {
  static const uint8_t kSOIMarker[2] = { 0xff, 0xd8 };
  static const uint8_t kEOIMarker[2] = { 0xff, 0xd9 };
  std::vector<HuffmanCodeTable> dc_codes;
  std::vector<HuffmanCodeTable> ac_codes;
  return (JPEGWrite(out, kSOIMarker, sizeof(kSOIMarker)) &&
          EncodeMetadata(jpg, strip_metadata, out) &&
          EncodeDQT(jpg.quant, out) &&
          EncodeSOF(jpg, out) &&
          BuildAndEncodeHuffmanCodes(jpg, out, &dc_codes, &ac_codes) &&
          EncodeScan(jpg, dc_codes, ac_codes, out) &&
          JPEGWrite(out, kEOIMarker, sizeof(kEOIMarker)) &&
          (strip_metadata || JPEGWrite(out, jpg.tail_data)));
}
    
    // Upsamples img_in with a box-filter, and returns an image with output
// dimensions width x height.
std::vector<float> Upsample2x2(const std::vector<float>& img_in,
                               const int width, const int height) {
  int w = (width + 1) / 2;
  int h = (height + 1) / 2;
  assert(img_in.size() == w * h);
  std::vector<float> img_out(width * height);
  for (int y = 0, p = 0; y < h; ++y) {
    for (int x = 0; x < w; ++x, ++p) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int ix = 0; ix < 2; ++ix) {
          int yy = std::min(height - 1, 2 * y + iy);
          int xx = std::min(width - 1, 2 * x + ix);
          img_out[yy * width + xx] = img_in[p];
        }
      }
    }
  }
  return img_out;
}
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
    #include 'guetzli/jpeg_data.h'
    
    size_t ClusterHistograms(JpegHistogram* histo, size_t* num, int* histo_indexes,
                         uint8_t* depths);
    
      // Fill in root table.
  key = 0;
  idx = 0;
  for (len = 1; len <= kJpegHuffmanRootTableBits; ++len) {
    for (; count[len] > 0; --count[len]) {
      code.bits = len;
      code.value = symbols[idx++];
      reps = 1 << (kJpegHuffmanRootTableBits - len);
      while (reps--) {
        table[key++] = code;
      }
    }
  }
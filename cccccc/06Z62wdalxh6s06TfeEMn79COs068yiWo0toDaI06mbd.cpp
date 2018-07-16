
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Functor used by ReverseOp to do the computations.
template <typename Device, typename T, int Dims>
struct Reverse {
  void operator()(const Device& d, typename TTypes<T, Dims>::ConstTensor input,
                  const Eigen::array<bool, Dims>& reverse_dims,
                  typename TTypes<T, Dims>::Tensor output) {
    output.device(d) = input.reverse(reverse_dims);
  }
};
    
      // Make sure the axis is only either int32 or int64.
  TF_LITE_ENSURE(context,
                 axis->type == kTfLiteInt32 || axis->type == kTfLiteInt64);
  TfLiteTensor* output = GetOutput(context, node, kOutputTensor);
    
    TEST(ArgMinOpTest, GetMinArgMulDimensions) {
  ArgMinOpModel<int32_t> model({1, 1, 2, 4}, TensorType_INT32, TensorType_INT32,
                               TensorType_INT32);
  model.PopulateTensor<int>(model.input(), {1, 2, 7, 8, 1, 9, 7, 3});
  // Currently only support the last dimension.
  model.PopulateTensor<int>(model.axis(), {3});
  model.Invoke();
    }
    
    TEST_F(OperatorTest, BuiltinSparseToDense) {
  SparseToDenseOperator op;
  op.validate_indices = false;
  std::unique_ptr<toco::SparseToDenseOperator> output_toco_op =
      SerializeAndDeserialize(
          GetOperator('SPARSE_TO_DENSE', OperatorType::kSparseToDense), op);
  EXPECT_EQ(op.validate_indices, output_toco_op->validate_indices);
}
    
      double PrimalLossDerivative(const double wx, const double label,
                              const double example_weight) const final {
    if (label * wx >= 1) {
      return 0;
    }
    if (label * wx <= 1 - gamma) {
      return -label;
    }
    return (wx - label) / gamma;
  }
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
    #ifndef TENSORFLOW_PLATFORM_PREFETCH_H_
#define TENSORFLOW_PLATFORM_PREFETCH_H_
    
        GraphDef result;
    TransformFuncContext context;
    context.input_names = {};
    context.output_names = {'mul_node1'};
    TF_ASSERT_OK(RemoveDevice(graph_def, context, &result));
    
    namespace message_descriptor {
PyObject* NewMessageFieldsByName(const Descriptor* descriptor);
PyObject* NewMessageFieldsByCamelcaseName(const Descriptor* descriptor);
PyObject* NewMessageFieldsByNumber(const Descriptor* descriptor);
PyObject* NewMessageFieldsSeq(const Descriptor* descriptor);
    }
    
    
    {  ASSERT_TRUE(message.ParseFromString(data));
  EXPECT_TRUE(message.has_any_value());
  ASSERT_TRUE(message.any_value().UnpackTo(&any));
  ASSERT_TRUE(any.UnpackTo(&submessage));
  EXPECT_EQ(12345, submessage.int32_value());
}
    
    // CodeGenerator implementation which generates a C++ source file and
// header.  If you create your own protocol compiler binary and you want
// it to support C++ output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT CppGenerator : public CodeGenerator {
 public:
  CppGenerator();
  ~CppGenerator();
    }
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
    
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
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    bool StreamPeerSSL::is_available() {
	return available;
}
    
    
    {	StreamPeerSSL();
};
    
    #if defined(MBEDTLS_SSL_PROTO_TLS1) && ( !defined(MBEDTLS_MD5_C) ||     \
    !defined(MBEDTLS_SHA1_C) )
#error 'MBEDTLS_SSL_PROTO_TLS1 defined, but not all prerequisites'
#endif
    
    // Create a few tables that allow us to quickly convert YCbCr to RGB.
void jpeg_decoder::create_look_ups()
{
  for (int i = 0; i <= 255; i++)
  {
    int k = i - 128;
    m_crr[i] = ( FIX(1.40200f)  * k + ONE_HALF) >> SCALEBITS;
    m_cbb[i] = ( FIX(1.77200f)  * k + ONE_HALF) >> SCALEBITS;
    m_crg[i] = (-FIX(0.71414f)) * k;
    m_cbg[i] = (-FIX(0.34414f)) * k + ONE_HALF;
  }
}
    
      enum 
  { 
    JPGD_IN_BUF_SIZE = 8192, JPGD_MAX_BLOCKS_PER_MCU = 10, JPGD_MAX_HUFF_TABLES = 8, JPGD_MAX_QUANT_TABLES = 4, 
    JPGD_MAX_COMPONENTS = 4, JPGD_MAX_COMPS_IN_SCAN = 4, JPGD_MAX_BLOCKS_PER_ROW = 8192, JPGD_MAX_HEIGHT = 16384, JPGD_MAX_WIDTH = 16384 
  };
          
  typedef int16 jpgd_quant_t;
  typedef int16 jpgd_block_t;
    
    # define OC_STATIC_ILOG0(_v) (!!(_v))
# define OC_STATIC_ILOG1(_v) (((_v)&0x2)?2:OC_STATIC_ILOG0(_v))
# define OC_STATIC_ILOG2(_v) \
 (((_v)&0xC)?2+OC_STATIC_ILOG1((_v)>>2):OC_STATIC_ILOG1(_v))
# define OC_STATIC_ILOG3(_v) \
 (((_v)&0xF0)?4+OC_STATIC_ILOG2((_v)>>4):OC_STATIC_ILOG2(_v))
# define OC_STATIC_ILOG4(_v) \
 (((_v)&0xFF00)?8+OC_STATIC_ILOG3((_v)>>8):OC_STATIC_ILOG3(_v))
# define OC_STATIC_ILOG5(_v) \
 (((_v)&0xFFFF0000)?16+OC_STATIC_ILOG4((_v)>>16):OC_STATIC_ILOG4(_v))
# define OC_STATIC_ILOG6(_v) \
 (((_v)&0xFFFFFFFF00000000ULL)?32+OC_STATIC_ILOG5((_v)>>32):OC_STATIC_ILOG5(_v))
/**
 * OC_STATIC_ILOG_32 - The integer logarithm of an (unsigned, 32-bit) constant.
 * @_v: A non-negative 32-bit constant.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * This macro is suitable for evaluation at compile time, but it should not be
 *  used on values that can change at runtime, as it operates via exhaustive
 *  search.
 */
# define OC_STATIC_ILOG_32(_v) (OC_STATIC_ILOG5((ogg_uint32_t)(_v)))
/**
 * OC_STATIC_ILOG_64 - The integer logarithm of an (unsigned, 64-bit) constant.
 * @_v: A non-negative 64-bit constant.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * This macro is suitable for evaluation at compile time, but it should not be
 *  used on values that can change at runtime, as it operates via exhaustive
 *  search.
 */
# define OC_STATIC_ILOG_64(_v) (OC_STATIC_ILOG6((ogg_int64_t)(_v)))
    
    #include 'x86/x86cpu.h'
/* We currently support 5 x86 variants:
 * arch[0] -> non-sse
 * arch[1] -> sse
 * arch[2] -> sse2
 * arch[3] -> sse4.1
 * arch[4] -> avx
 */
#define OPUS_ARCHMASK 7
int opus_select_arch(void);
    
    #if (HAVE_LRINTF)
    
    void SparsePageSource::Create(DMatrix* src,
                              const std::string& cache_info) {
  std::vector<std::string> cache_shards = common::Split(cache_info, ':');
  CHECK_NE(cache_shards.size(), 0U);
  // read in the info files.
  std::string name_info = cache_shards[0];
  std::vector<std::string> name_shards, format_shards;
  for (const std::string& prefix : cache_shards) {
    name_shards.push_back(prefix + '.row.page');
    format_shards.push_back(SparsePageFormat::DecideFormat(prefix).first);
  }
  {
    SparsePageWriter writer(name_shards, format_shards, 6);
    std::shared_ptr<SparsePage> page;
    writer.Alloc(&page); page->Clear();
    }
    }
    
    #include '../common/host_device_vector.h'
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
    /*!
 * \brief string flag for R library, to leave hooks when needed.
 */
#ifndef XGBOOST_STRICT_R_MODE
#define XGBOOST_STRICT_R_MODE 0
#endif
    
    bool js_cocos2dx_studio_ColliderBody_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ColliderBody_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ColliderBody(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
    
    
    
        virtual void DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color);
    
    
    {			b2EdgeShape shape;
			shape.Set(b2Vec2(-40.0f, 0.0f), b2Vec2(40.0f, 0.0f));
			ground->CreateFixture(&shape, 0.0f);
		}
    
    bool ProcessScan(const uint8_t* data, const size_t len,
                 const std::vector<HuffmanTableEntry>& dc_huff_lut,
                 const std::vector<HuffmanTableEntry>& ac_huff_lut,
                 uint16_t scan_progression[kMaxComponents][kDCTBlockSize],
                 bool is_progressive,
                 size_t* pos,
                 JPEGData* jpg) {
  if (!ProcessSOS(data, len, pos, jpg)) {
    return false;
  }
  JPEGScanInfo* scan_info = &jpg->scan_info.back();
  bool is_interleaved = (scan_info->components.size() > 1);
  int MCUs_per_row;
  int MCU_rows;
  if (is_interleaved) {
    MCUs_per_row = jpg->MCU_cols;
    MCU_rows = jpg->MCU_rows;
  } else {
    const JPEGComponent& c = jpg->components[scan_info->components[0].comp_idx];
    MCUs_per_row =
        DivCeil(jpg->width * c.h_samp_factor, 8 * jpg->max_h_samp_factor);
    MCU_rows =
        DivCeil(jpg->height * c.v_samp_factor, 8 * jpg->max_v_samp_factor);
  }
  coeff_t last_dc_coeff[kMaxComponents] = {0};
  BitReaderState br(data, len, *pos);
  int restarts_to_go = jpg->restart_interval;
  int next_restart_marker = 0;
  int eobrun = -1;
  int block_scan_index = 0;
  const int Al = is_progressive ? scan_info->Al : 0;
  const int Ah = is_progressive ? scan_info->Ah : 0;
  const int Ss = is_progressive ? scan_info->Ss : 0;
  const int Se = is_progressive ? scan_info->Se : 63;
  const uint16_t scan_bitmask = Ah == 0 ? (0xffff << Al) : (1u << Al);
  const uint16_t refinement_bitmask = (1 << Al) - 1;
  for (size_t i = 0; i < scan_info->components.size(); ++i) {
    int comp_idx = scan_info->components[i].comp_idx;
    for (int k = Ss; k <= Se; ++k) {
      if (scan_progression[comp_idx][k] & scan_bitmask) {
        fprintf(stderr, 'Overlapping scans: component=%d k=%d prev_mask=%d '
                'cur_mask=%d\n', comp_idx, k, scan_progression[i][k],
                scan_bitmask);
        jpg->error = JPEG_OVERLAPPING_SCANS;
        return false;
      }
      if (scan_progression[comp_idx][k] & refinement_bitmask) {
        fprintf(stderr, 'Invalid scan order, a more refined scan was already '
                'done: component=%d k=%d prev_mask=%d cur_mask=%d\n', comp_idx,
                k, scan_progression[i][k], scan_bitmask);
        jpg->error = JPEG_INVALID_SCAN_ORDER;
        return false;
      }
      scan_progression[comp_idx][k] |= scan_bitmask;
    }
  }
  if (Al > 10) {
    fprintf(stderr, 'Scan parameter Al=%d is not supported in guetzli.\n', Al);
    jpg->error = JPEG_NON_REPRESENTABLE_AC_COEFF;
    return false;
  }
  for (int mcu_y = 0; mcu_y < MCU_rows; ++mcu_y) {
    for (int mcu_x = 0; mcu_x < MCUs_per_row; ++mcu_x) {
      // Handle the restart intervals.
      if (jpg->restart_interval > 0) {
        if (restarts_to_go == 0) {
          if (ProcessRestart(data, len,
                             &next_restart_marker, &br, jpg)) {
            restarts_to_go = jpg->restart_interval;
            memset(last_dc_coeff, 0, sizeof(last_dc_coeff));
            if (eobrun > 0) {
              fprintf(stderr, 'End-of-block run too long.\n');
              jpg->error = JPEG_EOB_RUN_TOO_LONG;
              return false;
            }
            eobrun = -1;   // fresh start
          } else {
            return false;
          }
        }
        --restarts_to_go;
      }
      // Decode one MCU.
      for (size_t i = 0; i < scan_info->components.size(); ++i) {
        JPEGComponentScanInfo* si = &scan_info->components[i];
        JPEGComponent* c = &jpg->components[si->comp_idx];
        const HuffmanTableEntry* dc_lut =
            &dc_huff_lut[si->dc_tbl_idx * kJpegHuffmanLutSize];
        const HuffmanTableEntry* ac_lut =
            &ac_huff_lut[si->ac_tbl_idx * kJpegHuffmanLutSize];
        int nblocks_y = is_interleaved ? c->v_samp_factor : 1;
        int nblocks_x = is_interleaved ? c->h_samp_factor : 1;
        for (int iy = 0; iy < nblocks_y; ++iy) {
          for (int ix = 0; ix < nblocks_x; ++ix) {
            int block_y = mcu_y * nblocks_y + iy;
            int block_x = mcu_x * nblocks_x + ix;
            int block_idx = block_y * c->width_in_blocks + block_x;
            coeff_t* coeffs = &c->coeffs[block_idx * kDCTBlockSize];
            if (Ah == 0) {
              if (!DecodeDCTBlock(dc_lut, ac_lut, Ss, Se, Al, &eobrun, &br, jpg,
                                  &last_dc_coeff[si->comp_idx], coeffs)) {
                return false;
              }
            } else {
              if (!RefineDCTBlock(ac_lut, Ss, Se, Al,
                                  &eobrun, &br, jpg, coeffs)) {
                return false;
              }
            }
            ++block_scan_index;
          }
        }
      }
    }
  }
  if (eobrun > 0) {
    fprintf(stderr, 'End-of-block run too long.\n');
    jpg->error = JPEG_EOB_RUN_TOO_LONG;
    return false;
  }
  if (!br.FinishStream(pos)) {
    jpg->error = JPEG_INVALID_SCAN;
    return false;
  }
  if (*pos > len) {
    fprintf(stderr, 'Unexpected end of file during scan. pos=%d len=%d\n',
            static_cast<int>(*pos), static_cast<int>(len));
    jpg->error = JPEG_UNEXPECTED_EOF;
    return false;
  }
  return true;
}
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_
    
    #include <stddef.h>
#include <stdint.h>
    
    // Preprocesses U and V channel for better results after downsampling.
    
    class AbstractHttpServerResponseCommand : public Command {
private:
  DownloadEngine* e_;
  std::shared_ptr<SocketCore> socket_;
  std::shared_ptr<HttpServer> httpServer_;
  Timer timeoutTimer_;
  bool readCheck_;
  bool writeCheck_;
    }
    
    AbstractOptionHandler::~AbstractOptionHandler() = default;
    
    #include 'AbstractCommand.h'
    
    AnnounceTier::~AnnounceTier() = default;
    
    namespace aria2 {
    }
    
    AuthConfig::~AuthConfig() = default;
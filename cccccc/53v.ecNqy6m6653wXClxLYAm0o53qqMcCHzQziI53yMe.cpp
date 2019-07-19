
        
        static PyObject* FindExtensionByNumber(PyObject* self, PyObject* args) {
  PyObject* message_descriptor;
  int number;
  if (!PyArg_ParseTuple(args, 'Oi', &message_descriptor, &number)) {
    return NULL;
  }
  const Descriptor* descriptor = PyMessageDescriptor_AsDescriptor(
      message_descriptor);
  if (descriptor == NULL) {
    return NULL;
  }
    }
    
        {
      std::unique_ptr<io::ZeroCopyOutputStream> output(
          generator_context->Open(*basename + '.pb.cc'));
      io::Printer printer(output.get(), '$', nullptr);
      printer.Print('\n');
    }
    
    
    {
    {  printer->Annotate('addername', field);
  printer->Print(
      'this, $index$$oneofgroup$, opt_value, $ctor$, opt_index);\n'
      '};\n'
      '\n'
      '\n',
      'index', JSFieldIndex(field), 'oneofgroup',
      (field->containing_oneof() ? (', ' + JSOneofArray(options, field)) : ''),
      'ctor', GetMessagePath(options, field->message_type()));
}
    
      bool ParseFromOptions(
      const std::vector<std::pair<std::string, std::string> >& options,
      std::string* error);
    
      // STL-like iterator support
  typedef internal::RepeatedPtrIterator<Element> iterator;
  typedef internal::RepeatedPtrIterator<const Element> const_iterator;
  typedef Element value_type;
  typedef value_type& reference;
  typedef const value_type& const_reference;
  typedef value_type* pointer;
  typedef const value_type* const_pointer;
  typedef int size_type;
  typedef ptrdiff_t difference_type;
    
      std::string RunWithResult(MessageDifferencer* differencer,
                            const Message& msg1, const Message& msg2,
                            bool result) {
    std::string output;
    {
      // Before we return the 'output' string, we must make sure the
      // StreamReporter is destructored because its destructor will
      // flush the stream.
      io::StringOutputStream output_stream(&output);
      MessageDifferencer::StreamReporter reporter(&output_stream);
      reporter.set_report_modified_aggregates(true);
      differencer->set_report_matches(true);
      differencer->ReportDifferencesTo(&reporter);
      if (result) {
        EXPECT_TRUE(differencer->Compare(msg1, msg2));
      } else {
        EXPECT_FALSE(differencer->Compare(msg1, msg2));
      }
    }
    return output;
  }
    
    
    {  // Moving from a message on the arena should lead to a copy.
  message2 = std::move(*message1_on_arena);
  EXPECT_NE(nested, &message2.optional_nested_message());
  TestUtil::ExpectAllFieldsSet(*message1_on_arena);
  TestUtil::ExpectAllFieldsSet(message2);
}
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
      // Different data, can't transform.
    
    Status::Status(error::Code error_code, StringPiece error_message)
    : error_code_(error_code) {
  if (error_code != error::OK) {
    error_message_ = error_message.ToString();
  }
}
    
    
    {                    // As CalcEngine only supports the first character of the decimal separator,
                    // Only first character of the decimal separator string is supported.
                    m_decimalSeparator = decimalString[0];
                    m_numberGroupSeparator = groupingSymbolString[0];
                    m_numberGrouping = numberGroupingString;
                    m_listSeparator = listSeparatorString;
                    m_currencyTrailingDigits = currencyTrailingDigits;
                    m_currencySymbolPrecedence = currencySymbolPrecedence;
                }
    
            rootFrame->NavigationFailed += ref new Windows::UI::Xaml::Navigation::NavigationFailedEventHandler(this, &App::OnNavigationFailed);
    
        /// <summary>
    /// Helper function that needs to be executed when memory is modified
    /// When memory is modified, destroy the old RAT and put the new RAT in vector
    /// </summary>
    /// <param name='indexOfMemory'>Index of the target memory</param>
    void CalculatorManager::MemorizedNumberChanged(_In_ unsigned int indexOfMemory)
    {
        if (m_currentCalculatorEngine->FInErrorState())
        {
            return;
        }
    }
    
    int32_t rattoi32(_In_ PRAT prat, uint32_t radix, int32_t precision)
{
    if (rat_gt(prat, rat_max_i32, precision) || rat_lt(prat, rat_min_i32, precision))
    {
        // Don't attempt rattoi32 of anything too big or small
        throw(CALC_E_DOMAIN);
    }
    }
    
        static UCM::Category CAT1 = { 1, L'CAT1', false }; // contains Unit1 - Unit3
    static UCM::Category CAT2 = { 2, L'CAT2', false }; // contains Unit4 - Unit6
    static UCM::Category CAT3 = { 3, L'CAT3', false }; // contains Unit7 - Unit9
    
    namespace CalcEngine
{
    Number::Number() noexcept
        : Number(1, 0, { 0 })
    {
    }
    }
    
    //////////////////////////////////////////////////
//
// InitialOneTimeOnlyNumberSetup
//
//////////////////////////////////////////////////
void CCalcEngine::InitialOneTimeOnlySetup(CalculationManager::IResourceProvider& resourceProvider)
{
    LoadEngineStrings(resourceProvider);
    }
    
        // to be changed when pszexp is back
    tokens->GetString(&generatedExpression);
    // Prefixing and suffixing the special Unicode markers to ensure that the expression
    // in the history doesn't get broken for RTL languages
    spHistoryItem->historyItemVector.expression = L'\u202d' + generatedExpression + L'\u202c';
    spHistoryItem->historyItemVector.result = wstring(result);
    addedIndex = AddItem(spHistoryItem);
    
    GBool PSOutputDev::checkPageSlice(Page *page, double /*hDPI*/, double /*vDPI*/,
				  int rotateA, GBool useMediaBox, GBool crop,
				  int sliceX, int sliceY,
				  int sliceW, int sliceH,
				  GBool printing, Catalog *catalog,
				  GBool (*abortCheckCbk)(void *data),
				  void *abortCheckCbkData) {
#if HAVE_SPLASH
  PreScanOutputDev *scan;
  GBool rasterize;
  SplashOutputDev *splashOut;
  SplashColor paperColor;
  PDFRectangle box;
  GfxState *state;
  SplashBitmap *bitmap;
  Stream *str0, *str;
  Object obj;
  Guchar *p;
  Guchar col[4];
  double m0, m1, m2, m3, m4, m5;
  int c, w, h, x, y, comp, i;
  char hexBuf[32*2 + 2];	// 32 values X 2 chars/value + line ending + null
  Guchar digit;
    }
    
      //----- text drawing
  virtual void drawString(GfxState *state, GooString *s);
  virtual void beginTextObject(GfxState *state);
  virtual GBool deviceHasTextClip(GfxState *state) { return haveTextClip && haveCSPattern; }
  virtual void endTextObject(GfxState *state);
    
    #include 'PageTransition.h'
    
      // string
  } else if (buf1.isString() && fileKey) {
    s = buf1.getString();
    s2 = new GooString();
    obj2.initNull();
    decrypt = new DecryptStream(new MemStream(s->getCString(), 0,
					      s->getLength(), &obj2),
				fileKey, encAlgorithm, keyLength,
				objNum, objGen);
    decrypt->reset();
    while ((c = decrypt->getChar()) != EOF) {
      s2->append((char)c);
    }
    delete decrypt;
    obj->initString(s2);
    shift();
    
      // Get stream.
  Stream *getStream() { return lexer->getStream(); }
    
    class PopplerObjectCache
{
  public:
    PopplerObjectCache (int cacheSizeA, XRef *xrefA);
    ~PopplerObjectCache();
    }
    
      // Constructor.
  ProfileData ();
    
    GBool SecurityHandler::checkEncryption(GooString *ownerPassword,
				       GooString *userPassword) {
  void *authData;
  GBool ok;
  int i;
    }
    
    class SecurityHandler {
public:
    }
    
    Sound::Sound(Object *obj, bool readAttrs)
{
  streamObj = new Object();
  streamObj->initNull();
  obj->copy(streamObj);
    }
    
    enum SoundEncoding {
  soundRaw,			// raw encoding
  soundSigned,			// twos-complement values
  soundMuLaw,			// mu-law-encoded samples
  soundALaw			// A-law-encoded samples
};
    
    
/*
 * \brief Remove amp_cast and amp_multicast and replug the fp32 weights
 */
Graph RemoveAmpCast(Graph&& g) {
  DFSVisit(g.outputs, [](const NodePtr& n) {
    for (size_t i = 0; i < n->inputs.size(); ++i) {
      auto e = n->inputs[i];
      if (e.node->op() == Op::Get('amp_cast')) {
        n->inputs[i] = e.node->inputs[0];
      } else if (e.node->op() == Op::Get('amp_multicast')) {
        n->inputs[i] = e.node->inputs[e.index];
      }
    }
  });
  return g;
}
    
    NNVM_REGISTER_OP(amp_multicast)
.describe(R'code(Cast function used by AMP, that casts its inputs to the common widest type.
    
    template<typename xpu>
void AMPCastCompute(const nnvm::NodeAttrs& attrs,
                    const OpContext& ctx,
                    const std::vector<TBlob>& inputs,
                    const std::vector<OpReqType>& req,
                    const std::vector<TBlob>& outputs) {
  using namespace mshadow;
  using namespace mshadow::expr;
  Stream<xpu> *s = ctx.get_stream<xpu>();
  MSHADOW_TYPE_SWITCH(outputs[0].type_flag_, DstDType, {
    Tensor<xpu, 1, DstDType> out = outputs[0].FlatTo1D<xpu, DstDType>(s);
    MSHADOW_TYPE_SWITCH(inputs[0].type_flag_, SrcDType, {
      Tensor<xpu, 1, SrcDType> data = inputs[0].FlatTo1D<xpu, SrcDType>(s);
      if (outputs[0].type_flag_ != inputs[0].type_flag_ ||
          req[0] != kWriteInplace) {
        Assign(out, req[0], tcast<DstDType>(data));
      }
    });
  });
}
    
      std::string shape_attr_key;
  if (ret.attrs.count(attr_key_name) != 0) {
    shape_attr_key = ret.GetAttr<std::string>(attr_key_name);
    // erase the provided arguments
    ret.attrs.erase(attr_key_name);
  }
    
    
    {    if (inputs[0].type_flag_ == mshadow::kUint8 || inputs[0].type_flag_ == mshadow::kInt8) {
      if (param.min_calib_range.has_value() && param.max_calib_range.has_value()) {
        *outputs[1].dptr<float>() = param.min_calib_range.value();
        *outputs[2].dptr<float>() = param.max_calib_range.value();
      } else {
        if (inputs[0].type_flag_ == mshadow::kUint8) {
          *outputs[1].dptr<float>() = 0;
          *outputs[2].dptr<float>() = 255;
        } else {
          *outputs[1].dptr<float>() = -127;
          *outputs[2].dptr<float>() = 127;
        }
      }
      UnaryOp::IdentityCompute<xpu>(attrs_, ctx, {inputs[0]}, req, outputs);
    } else {
      if (param.min_calib_range.has_value() && param.max_calib_range.has_value()) {
        if (out_type == mshadow::kUint8) {
          Kernel<quantize_v2_unsigned, xpu>::Launch(
              s, outputs[0].Size(), outputs[0].dptr<uint8_t>(), outputs[1].dptr<float>(),
              outputs[2].dptr<float>(), inputs[0].dptr<SrcDType>(), param.min_calib_range.value(),
              param.max_calib_range.value(), MinValue<uint8_t>(), MaxValue<uint8_t>());
        } else if (out_type == mshadow::kInt8) {  // zero-centered quantization
          Kernel<quantize_v2_zero_centered, xpu>::Launch(
              s, outputs[0].Size(), outputs[0].dptr<int8_t>(), outputs[1].dptr<float>(),
              outputs[2].dptr<float>(), inputs[0].dptr<SrcDType>(), param.min_calib_range.value(),
              param.max_calib_range.value(), MinAbs(MaxValue<int8_t>(), MinValue<int8_t>()));
        } else {
          LOG(FATAL) << 'quantize op only supports int8 and uint8 as output type';
        }
      } else {  // model is not calibrated
        mxnet::TShape src_shape, dst_shape;
        const size_t actual_float_size = sizeof(float);
        const size_t temp_reduce_size = ConfigReduce<xpu, SrcDType>(
            s, inputs[0].shape_, mxnet::TShape(1, 1), &src_shape, &dst_shape);
        Tensor<xpu, 1, char> temp_space = ctx.requested[0].get_space_typed<xpu, 1, char>(
            Shape1(2 * actual_float_size + temp_reduce_size), s);
        const int dev_id = ctx.run_ctx.ctx.dev_id;
        TBlob in_min_t(reinterpret_cast<SrcDType *>(temp_space.dptr_), Shape1(1), xpu::kDevMask,
                       dev_id);
        TBlob in_max_t(reinterpret_cast<SrcDType *>(temp_space.dptr_) + 1, Shape1(1), xpu::kDevMask,
                       dev_id);
        Tensor<xpu, 1, char> workspace(temp_space.dptr_ + 2 * actual_float_size,
                                       Shape1(temp_reduce_size), s);
        broadcast::Reduce<red::minimum, 2, SrcDType, mshadow::op::identity>(
            s, in_min_t.reshape(dst_shape), kWriteTo, workspace, inputs[0].reshape(src_shape));
        broadcast::Reduce<red::maximum, 2, SrcDType, mshadow::op::identity>(
            s, in_max_t.reshape(dst_shape), kWriteTo, workspace, inputs[0].reshape(src_shape));
        if (out_type == mshadow::kUint8) {
          Kernel<quantize_v2_unsigned, xpu>::Launch(
              s, outputs[0].Size(), outputs[0].dptr<uint8_t>(), outputs[1].dptr<float>(),
              outputs[2].dptr<float>(), inputs[0].dptr<SrcDType>(), in_min_t.dptr<float>(),
              in_max_t.dptr<float>(), MinValue<uint8_t>(), MaxValue<uint8_t>());
        } else if (out_type == mshadow::kInt8) {  // zero-centered quantization
          Kernel<quantize_v2_zero_centered, xpu>::Launch(
              s, outputs[0].Size(), outputs[0].dptr<int8_t>(), outputs[1].dptr<float>(),
              outputs[2].dptr<float>(), inputs[0].dptr<SrcDType>(), in_min_t.dptr<float>(),
              in_max_t.dptr<float>(), MinAbs(MaxValue<int8_t>(), MinValue<int8_t>()));
        } else {
          LOG(FATAL) << 'quantize op only supports int8 and uint8 as output type';
        }
      }
    }
  }
    
    #include <vector>
#include <utility>
#include '../mshadow_op.h'
#include '../tensor/init_op.h'
    
        x = mx.nd.ones((3, 2, 2))
    
        std::unique_ptr<DHTMessageDispatcher> messageDispatcher;
    
    void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
      virtual const std::string& getType() const CXX11_OVERRIDE;
    
    class DHTNode;
class DHTBucket;
class DHTTaskQueue;
class DHTTaskFactory;
class DHTBucketTreeNode;
    
    DHTTaskExecutor::DHTTaskExecutor(int numConcurrent)
    : numConcurrent_(numConcurrent)
{
}
    
    class DownloadContext;
class PeerStorage;
class DHTTask;
class DHTNode;
class DHTBucket;
    
    #include <memory>
    
    namespace apollo {
namespace planning {
namespace scenario {
namespace valet_parking {
    }
    }
    }
    }
    
    #pragma once
    
      const double real_angle = vehicle_params_.max_steer_angle() * angle / 100.0;
    
    namespace apollo {
namespace planning {
namespace scenario {
    }
    }
    }
    
      bool traffic_light_all_done = true;
  for (const auto& traffic_light_overlap_id :
       GetContext()->current_traffic_light_overlap_ids) {
    // get overlap along reference line
    PathOverlap* current_traffic_light_overlap =
        scenario::util::GetOverlapOnReferenceLine(reference_line_info,
                                                  traffic_light_overlap_id,
                                                  ReferenceLineInfo::SIGNAL);
    if (!current_traffic_light_overlap) {
      continue;
    }
    }
    
    /**
 * @file
 **/
#include 'modules/planning/scenarios/park/valet_parking/stage_parking.h'
    
    #include 'cyber/common/file.h'
#include 'cyber/common/log.h'
#include 'modules/planning/common/planning_gflags.h'
    
    #pragma once
    
      PredictionThreadPool::ForEach(real.begin(), real.end(), [](int& input) {
    EXPECT_EQ(1, PredictionThreadPool::s_thread_pool_level);
    std::vector<int> vec = {1, 2, 3, 4};
    PredictionThreadPool::ForEach(vec.begin(), vec.end(), [](int& v) {
      ++v;
      EXPECT_EQ(2, PredictionThreadPool::s_thread_pool_level);
    });
    input = std::accumulate(vec.begin(), vec.end(), input);
  });
    
      if (!GetScenarioConfig()) {
    AERROR << 'fail to get scenario specific config';
    return;
  }
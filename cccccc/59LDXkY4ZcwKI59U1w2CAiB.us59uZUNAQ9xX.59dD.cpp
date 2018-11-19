
        
        void ProtoFromShapeHandle(tensorflow::shape_inference::ShapeHandle s,
                          tensorflow::shape_inference::InferenceContext* c,
                          TensorShapeProto* out) {
  if (c->RankKnown(s)) {
    const int32 rank = c->Rank(s);
    for (int i = 0; i < rank; ++i) {
      shape_inference::DimensionHandle d = c->Dim(s, i);
      auto* out_dim = out->add_dim();
      if (c->ValueKnown(d)) {
        out_dim->set_size(c->Value(d));
      } else {
        out_dim->set_size(-1);
      }
    }
  } else {
    out->set_unknown_rank(true);
  }
}
    
    
    {  // TODO(yaozhang): add a test to make sure that op_perf_analytical_ and
  // op_perf_ cover the same set of nodes.
  op_perf_analytical_ = CostGraphToOpPerformanceData(
      cost_graph_analytical_filtered, item_->graph);
  op_perf_ =
      CostGraphToOpPerformanceData(cost_graph_measured_filtered, item_->graph);
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Converts Python object `obj` representing a rectangular array of
// Python values (a scalar, a sequence of scalars, a sequence of
// sequences, etc.) into a C++ TensorFlow Tensor and stores it in
// *ret.  If dtype is not None it should by a Python integer
// representing the desired dtype of the resulting Tensor.
// This is used only as a hint, *ret may not have that dtype on
// success and may require a cast.
Status PySeqToTensor(PyObject* obj, PyObject* dtype, Tensor* ret);
    
      // Returns whether code in the from context can access memory in the to
  // context via cuDeviceCanAccessPeer.
  // http://docs.nvidia.com/cuda/cuda-driver-api/group__CUDA__PEER__ACCESS.html#group__CUDA__PEER__ACCESS_1g496bdaae1f632ebfb695b99d2c40f19e
  static bool CanEnablePeerAccess(CudaContext* from, CudaContext* to);
    
      if (LangOpts.Target.isTvOS()) {
    return (LangOpts.EnableAppExtensionRestrictions
            ? PlatformKind::tvOSApplicationExtension
            : PlatformKind::tvOS);
  }
    
      // Now, add all generic parameters from the conforming type.
  if (conformanceSig) {
    for (auto param : conformanceSig->getGenericParams()) {
      auto substParam = Type(param).subst(conformanceToSyntheticTypeFn,
                                          conformanceToSyntheticConformanceFn);
      builder.addGenericParameter(substParam->castTo<GenericTypeParamType>());
    }
  }
    
      assert(capacity % 16 == 0 && 'not allocating multiple of alignment');
    
    
    {  OutLines.append(Lines.begin(), Lines.end());
}

    
        /// Returns true if \p loc is inside one of Swift's synthetic buffers.
    static bool isInSwiftBuffers(clang::FullSourceLoc loc) {
      StringRef bufName = StringRef(loc.getManager().getBufferName(loc));
      return bufName == ClangImporter::Implementation::moduleImportBufferName ||
             bufName == ClangImporter::Implementation::bridgingHeaderBufferName;
    }
    
    // SwiftStddef.h defines its own copy of stddef.h types.
MAP_STDLIB_TYPE('__swift_ptrdiff_t', SignedWord, 0, 'Int', false,
                DefineOnly)
MAP_STDLIB_TYPE('__swift_size_t', UnsignedWord, 0, 'Int', false,
                DefineOnly)
MAP_STDLIB_TYPE('__swift_ssize_t', SignedWord, 0, 'Int', false,
                DefineOnly)
    
    /// Translate the given operator character into its mangled form.
///
/// Current operator characters:   @/=-+*%<>!&|^~ and the special operator '..'
char Mangle::translateOperatorChar(char op) {
  switch (op) {
    case '&': return 'a'; // 'and'
    case '@': return 'c'; // 'commercial at sign'
    case '/': return 'd'; // 'divide'
    case '=': return 'e'; // 'equal'
    case '>': return 'g'; // 'greater'
    case '<': return 'l'; // 'less'
    case '*': return 'm'; // 'multiply'
    case '!': return 'n'; // 'negate'
    case '|': return 'o'; // 'or'
    case '+': return 'p'; // 'plus'
    case '?': return 'q'; // 'question'
    case '%': return 'r'; // 'remainder'
    case '-': return 's'; // 'subtract'
    case '~': return 't'; // 'tilde'
    case '^': return 'x'; // 'xor'
    case '.': return 'z'; // 'zperiod' (the z is silent)
    default:
      return op;
  }
}
    
    #include 'base/command_line.h'
#include 'base/logging.h'
#include 'base/message_loop/message_loop.h'
#include 'base/values.h'
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    void MenuItem::Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh) {
  if (method == 'SetLabel') {
    std::string label;
    arguments.GetString(0, &label);
    SetLabel(label);
  } else if (method == 'SetIcon') {
    std::string icon;
    arguments.GetString(0, &icon);
    SetIcon(icon);
  } else if (method == 'SetIconIsTemplate') {
    bool isTemplate;
    arguments.GetBoolean(0, &isTemplate);
    SetIconIsTemplate(isTemplate);
  } else if (method == 'SetTooltip') {
    std::string tooltip;
    arguments.GetString(0, &tooltip);
    SetTooltip(tooltip);
  } else if (method == 'SetEnabled') {
    bool enabled = true;
    arguments.GetBoolean(0, &enabled);
    SetEnabled(enabled);
  } else if (method == 'SetChecked') {
    bool checked = false;
    arguments.GetBoolean(0, &checked);
    SetChecked(checked);
  } else if (method == 'SetSubmenu') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    SetSubmenu(object_manager()->GetApiObject<Menu>(object_id));
#if defined(OS_MACOSX)
  } else if (method == 'SetKey') {
    std::string key;
    arguments.GetString(0, &key);
    SetKey(key);
  } else if (method == 'SetModifiers') {
    std::string mod;
    arguments.GetString(0, &mod);
    SetModifiers(mod);
#endif
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    #include <vector>
    
        protected:
      ~NwScreenInitEventListenersFunction() override {}
      DECLARE_EXTENSION_FUNCTION('nw.Screen.initEventListeners', UNKNOWN)
    
    #ifdef __SSE4_1__
// Computes part of matrix.vector v = Wu. Computes 1 result.
static void PartialMatrixDotVector1(const int8_t* wi, const double* scales,
                                    const int8_t* u, int num_in, int num_out,
                                    double* v) {
  int total = IntDotProductSSE(u, wi, num_in);
  // Add in the bias and correct for integer values.
  *v = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * *scales;
}
#endif  // __SSE4_1__
    
      // Generate the tiff file name for output/debug file.
  void GetOutputTiffName(const char* name, STRING* image_name) const;
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    
    {  svMenuRoot->BuildMenu(sv, false);
}
    
      // How many alt choices from each should we try to get?
  const int kAltsPerPiece = 2;
  // When do we start throwing away extra alt choices?
  const int kTooManyAltChoices = 100;
    
    
//////////////////////////////////////////////////////////////////////////////
// parse JSON from string
//////////////////////////////////////////////////////////////////////////////
    
      // Equivalent to Ranges({{lo1, hi1}, {lo2, hi2}}).
  // NOTE: This is a legacy C++03 interface provided for compatibility only.
  //   New code should use 'Ranges'.
  Benchmark* RangePair(int lo1, int hi1, int lo2, int hi2) {
    std::vector<std::pair<int, int> > ranges;
    ranges.push_back(std::make_pair(lo1, hi1));
    ranges.push_back(std::make_pair(lo2, hi2));
    return Ranges(ranges);
  }
    
          // Determine if this run should be reported; Either it has
      // run for a sufficient amount of time or because an error was reported.
      const bool should_report =  repetition_num > 0
        || has_explicit_iteration_count // An exact iteration count was requested
        || results.has_error_
        || iters >= kMaxIterations
        || seconds >= min_time // the elapsed time is large enough
        // CPU time is specified but the elapsed real time greatly exceeds the
        // minimum time. Note that user provided timers are except from this
        // sanity check.
        || ((results.real_time_used >= 5 * min_time) && !b.use_manual_time);
    
    BENCHMARK_NORETURN inline void CallAbortHandler() {
  GetAbortHandler()();
  std::abort();  // fallback to enforce noreturn
}
    
    std::string FormatString(const char* msg, va_list args) {
  // we might need a second shot at this, so pre-emptivly make a copy
  va_list args_cp;
  va_copy(args_cp, args);
    }
    
    
    {}  // end namespace benchmark
    
        // print the header
    for (auto B = elements.begin(); B != elements.end();) {
      Out << *B++;
      if (B != elements.end()) Out << ',';
    }
    for (auto B = user_counter_names_.begin(); B != user_counter_names_.end();) {
      Out << ',\'' << *B++ << '\'';
    }
    Out << '\n';
    
      // Called by each thread
  bool wait() EXCLUDES(lock_) {
    bool last_thread = false;
    {
      MutexLock ml(lock_);
      last_thread = createBarrier(ml);
    }
    if (last_thread) phase_condition_.notify_all();
    return last_thread;
  }
    
    inline bool Regex::Init(const std::string& spec, std::string* error) {
#ifdef BENCHMARK_HAS_NO_EXCEPTIONS
  ((void)error); // suppress unused warning
#else
  try {
#endif
    re_ = std::regex(spec, std::regex_constants::extended);
    init_ = true;
#ifndef BENCHMARK_HAS_NO_EXCEPTIONS
  } catch (const std::regex_error& e) {
    if (error) {
      *error = e.what();
    }
  }
#endif
  return init_;
}
    
    
    {void SleepForSeconds(double seconds) {
  SleepForMicroseconds(static_cast<int>(seconds * kNumMicrosPerSecond));
}
#endif  // BENCHMARK_OS_WINDOWS
}  // end namespace benchmark

    
      if (!is_started_) {
    AERROR << 'Esd can client has not been initiated! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
  }
  for (size_t i = 0; i < frames.size() && i < MAX_CAN_SEND_FRAME_LEN; ++i) {
    send_frames_[i].id = frames[i].id;
    send_frames_[i].len = frames[i].len;
    std::memcpy(send_frames_[i].data, frames[i].data, frames[i].len);
  }
    
    
    {  EsdCanClient esd_can_client;
  EXPECT_TRUE(esd_can_client.Init(param));
  EXPECT_EQ(esd_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(esd_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(esd_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(esd_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  esd_can_client.Stop();
}
    
      /**
   * @brief Start the fake CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Start() override;
    
    
    {  int32_t frame_num = FRAME_LEN;
  auto ret = send_client_->Send(frames, &frame_num);
  EXPECT_EQ(ret, ErrorCode::OK);
  EXPECT_EQ(send_client_->GetErrorString(0), '');
  send_client_->Stop();
}
    
    
    {  // Synchronous transmission of CAN messages
  int32_t send_num = *frame_num;
  int32_t ret = bcan_send(_dev_handler, _send_frames, send_num);
  if (ret < 0) {
    int ret_send_error = bcan_get_status(_dev_handler);
    AERROR << 'send message failed, error code: ' << ret
           << ', send error: ' << ret_send_error;
    return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
  }
  *frame_num = ret;
  return ErrorCode::OK;
}
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    /**
 * @class Byte
 * @brief The class of one byte, which is 8 bits.
 *        It includes some operations on one byte.
 */
class Byte {
 public:
  /**
   * @brief Constructor which takes a pointer to a one-byte unsigned integer.
   * @param value The pointer to a one-byte unsigned integer for construction.
   */
  explicit Byte(const uint8_t *value);
    }
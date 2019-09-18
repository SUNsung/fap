
        
        Status HostToDeviceCopyThunk::ExecuteOnStream(const ExecuteParams& params) {
  se::DeviceMemoryBase destination_data =
      params.buffer_allocations->GetDeviceAddress(destination_buffer_);
  auto op_profiler =
      params.profiler->MakeScopedInstructionProfiler(hlo_instruction());
  params.stream->ThenMemcpy(&destination_data, source_address_, mem_size_);
  return Status::OK();
}
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
    
    { private:
  void* call_target_;
  std::vector<ShapeTree<BufferAllocation::Slice>> operand_slices_;
  ShapeTree<BufferAllocation::Slice> result_slices_;
  std::string opaque_;
};
    
    #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_GPU_INFEED_THUNK_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_GPU_INFEED_THUNK_H_
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      // TODO(b/125951860): Plumb more datatypes / reduction operators. Initial
  // implementation is simply F32 summation.
  //
  // TODO(b/125951860): Support all-reduces with replica groups, i.e.
  // all-reduces that compute multiple sums across subsets of all replicas.
  NcclAllReduceThunk(int64 replica_count, int64 element_count,
                     const BufferAllocation::Slice& source_buffer,
                     const BufferAllocation::Slice& destination_buffer,
                     const HloInstruction* all_reduce);
  ~NcclAllReduceThunk() override;
    
    Status WhileThunk::ExecuteOnStream(const ExecuteParams& params) {
  auto& profiler = *params.profiler;
  auto& stream = *params.stream;
    }
    
    /**
 * An RAII-style reverse lock. Unlocks on construction and locks on destruction.
 */
template<typename Lock>
class reverse_lock
{
public:
    }
    
        /* Check bad contexts and NULLs for signing */
    ecount = 0;
    CHECK(secp256k1_ecdsa_sign_recoverable(none, &recsig, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(sign, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(vrfy, &recsig, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, NULL, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 3);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, NULL, privkey, NULL, NULL) == 0);
    CHECK(ecount == 4);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, NULL, NULL, NULL) == 0);
    CHECK(ecount == 5);
    /* This will fail or succeed randomly, and in either case will not ARG_CHECK failure */
    secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, recovery_test_nonce_function, NULL);
    CHECK(ecount == 5);
    /* These will all fail, but not in ARG_CHECK way */
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, zero_privkey, NULL, NULL) == 0);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, over_privkey, NULL, NULL) == 0);
    /* This one will succeed. */
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 5);
    
    ; ROTATE_ARGS
; Rotate values of symbols a...h
%macro ROTATE_ARGS 0
%xdefine TMP_ h
%xdefine h g
%xdefine g f
%xdefine f e
%xdefine e d
%xdefine d c
%xdefine c b
%xdefine b a
%xdefine a TMP_
%endm
    
    namespace leveldb {
    }
    
    
// Called on every log record (each one of which is a WriteBatch)
// found in a kLogFile.
static void WriteBatchPrinter(uint64_t pos, Slice record, WritableFile* dst) {
  std::string r = '--- offset ';
  AppendNumberTo(&r, pos);
  r += '; ';
  if (record.size() < 12) {
    r += 'log record length ';
    AppendNumberTo(&r, record.size());
    r += ' is too small\n';
    dst->Append(r);
    return;
  }
  WriteBatch batch;
  WriteBatchInternal::SetContents(&batch, record);
  r += 'sequence ';
  AppendNumberTo(&r, WriteBatchInternal::Sequence(&batch));
  r.push_back('\n');
  dst->Append(r);
  WriteBatchItemPrinter batch_item_printer;
  batch_item_printer.dst_ = dst;
  Status s = batch.Iterate(&batch_item_printer);
  if (!s.ok()) {
    dst->Append('  error: ' + s.ToString() + '\n');
  }
}
    
    static std::string MakeFileName(const std::string& name, uint64_t number,
                                const char* suffix) {
  char buf[100];
  snprintf(buf, sizeof(buf), '/%06llu.%s',
           static_cast<unsigned long long>(number),
           suffix);
  return name + buf;
}
    
    void get_btree_superblock_and_txn_for_backfilling(
        cache_conn_t *cache_conn,
        cache_account_t *backfill_account,
        scoped_ptr_t<real_superblock_t> *got_superblock_out,
        scoped_ptr_t<txn_t> *txn_out);
    
    std::pair<const std::map<region_t, scoped_ptr_t<ql::changefeed::server_t> > *,
          scoped_ptr_t<rwlock_acq_t> > store_t::access_changefeed_servers() {
    return std::make_pair(&changefeed_servers,
                          make_scoped<rwlock_acq_t>(&changefeed_servers_lock,
                                                    access_t::read));
}
    
    TEST_P(FooTest, DoesBlah) {
  // Inside a test, access the test parameter with the GetParam() method
  // of the TestWithParam<T> class:
  EXPECT_TRUE(foo.Blah(GetParam()));
  ...
}
    
     private:
  // Appends the contents of message to message_.
  void AppendMessage(const Message& a_message) {
    if (message_.get() == NULL)
      message_.reset(new ::std::string);
    message_->append(a_message.GetString().c_str());
  }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19>
class ValueArray19 {
 public:
  ValueArray19(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6),
      v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13),
      v14_(v14), v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19) {}
    }
    
    //
// HorizontalNoOverflowStackPanel.xaml.cpp
// Implementation of the HorizontalNoOverflowStackPanel class
//
    
    #include <array>
#include <string>
#include <string_view>
#include <unordered_map>
    
    #define createrat(y)                                                                                                                                           \
    (y) = _createrat();                                                                                                                                        \
    {                                                                                                                                                          \
        std::wstringstream outputString;                                                                                                                       \
        outputString << 'createrat ' << y << ' ' << #y << ' file= ' << __FILE__ << ', line= ' << __LINE__ << '\n';                                             \
        OutputDebugString(outputString.str().c_str());                                                                                                         \
    }
#define destroyrat(x)                                                                                                                                          \
    {                                                                                                                                                          \
        std::wstringstream outputString;                                                                                                                       \
        outputString << 'destroyrat ' << x << ' file= ' << __FILE__ << ', line= ' << __LINE__ << '\n';                                                         \
        OutputDebugString(outputString.str().c_str());                                                                                                         \
    }                                                                                                                                                          \
    _destroyrat(x), (x) = nullptr
#define createnum(y, x)                                                                                                                                        \
    (y) = _createnum(x);                                                                                                                                       \
    {                                                                                                                                                          \
        std::wstringstream outputString;                                                                                                                       \
        outputString << 'createnum ' << y << ' ' << #y << ' file= ' << __FILE__ << ', line= ' << __LINE__ << '\n';                                             \
        OutputDebugString(outputString.str().c_str());                                                                                                         \
    }
#define destroynum(x)                                                                                                                                          \
    {                                                                                                                                                          \
        std::wstringstream outputString;                                                                                                                       \
        outputString << 'destroynum ' << x << ' file= ' << __FILE__ << ', line= ' << __LINE__ << '\n';                                                         \
        OutputDebugString(outputString.str().c_str());                                                                                                         \
    }                                                                                                                                                          \
    _destroynum(x), (x) = nullptr
#else
#define createrat(y) (y) = _createrat()
#define destroyrat(x) _destroyrat(x), (x) = nullptr
#define createnum(y, x) (y) = _createnum(x)
#define destroynum(x) _destroynum(x), (x) = nullptr
#endif
    
    // Adds the given string psz to the globally maintained current equation string at the end.
//  Also returns the 0 based index in the string just added. Can throw out of memory error
int CHistoryCollector::IchAddSzToEquationSz(wstring_view str, int icommandIndex)
{
    if (m_spTokens == nullptr)
    {
        m_spTokens = std::make_shared<CalculatorVector<std::pair<std::wstring, int>>>();
    }
    }
    
    
    {
    {    private:
        bool m_hasExponent;
        bool m_hasDecimal;
        size_t m_decPtIndex;
        wchar_t m_decSymbol;
        CalcNumSec m_base;
        CalcNumSec m_exponent;
    };
}

    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromCSCEx
 * Signature: ([J[J[F)J
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromCSCEx
  (JNIEnv *jenv, jclass jcls, jlongArray jindptr, jintArray jindices, jfloatArray jdata, jint jrow, jlongArray jout) {
  DMatrixHandle result;
  jlong* indptr = jenv->GetLongArrayElements(jindptr, NULL);
  jint* indices = jenv->GetIntArrayElements(jindices, 0);
  jfloat* data = jenv->GetFloatArrayElements(jdata, NULL);
  bst_ulong nindptr = (bst_ulong)jenv->GetArrayLength(jindptr);
  bst_ulong nelem = (bst_ulong)jenv->GetArrayLength(jdata);
    }
    
    /*! \brief collection of rowset */
class RowSetCollection {
 public:
  /*! \brief data structure to store an instance set, a subset of
   *  rows (instances) associated with a particular node in a decision
   *  tree. */
  struct Elem {
    const size_t* begin{nullptr};
    const size_t* end{nullptr};
    int node_id{-1};
      // id of node associated with this instance set; -1 means uninitialized
    Elem()
         = default;
    Elem(const size_t* begin_,
         const size_t* end_,
         int node_id_)
        : begin(begin_), end(end_), node_id(node_id_) {}
    }
    }
    
    void _DMatrixFinalizer(SEXP ext) {
  R_API_BEGIN();
  if (R_ExternalPtrAddr(ext) == NULL) return;
  CHECK_CALL(XGDMatrixFree(R_ExternalPtrAddr(ext)));
  R_ClearExternalPtr(ext);
  R_API_END();
}
    
    /*! \brief Mini batch used in XGBoost Data Iteration */
typedef struct {  // NOLINT(*)
  /*! \brief number of rows in the minibatch */
  size_t size;
  /*! \brief row pointer to the rows in the data */
#ifdef __APPLE__
  /* Necessary as Java on MacOS defines jlong as long int
   * and gcc defines int64_t as long long int. */
  long* offset; // NOLINT(*)
#else
  int64_t* offset;  // NOLINT(*)
#endif  // __APPLE__
  /*! \brief labels of each instance */
  float* label;
  /*! \brief weight of each instance, can be NULL */
  float* weight;
  /*! \brief feature index */
  int* index;
  /*! \brief feature values */
  float* value;
} XGBoostBatchCSR;
    
    namespace xgboost {
namespace obj {
    }
    }
    
    
    {    int nindex = index_.num_chunk();
    int nvalue = value_.num_chunk();
    int ntotal = nindex + nvalue;
    #pragma omp parallel for schedule(dynamic, 1) num_threads(nthread_)
    for (int i = 0; i < ntotal; ++i) {
      if (i < nindex) {
        index_.Decompress(i);
      } else {
        value_.Decompress(i - nindex);
      }
    }
  }
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
    /*! \brief namespace of base64 decoding and encoding table */
namespace base64 {
const char DecodeTable[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  62,  // '+'
  0, 0, 0,
  63,  // '/'
  52, 53, 54, 55, 56, 57, 58, 59, 60, 61,  // '0'-'9'
  0, 0, 0, 0, 0, 0, 0,
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
  13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,  // 'A'-'Z'
  0, 0, 0, 0, 0, 0,
  26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
  39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,  // 'a'-'z'
};
static const char EncodeTable[] =
    'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/';
}  // namespace base64
/*! \brief the stream that reads from base64, note we take from file pointers */
class Base64InStream: public dmlc::Stream {
 public:
  explicit Base64InStream(dmlc::Stream *fs) : reader_(256) {
    reader_.set_stream(fs);
    num_prev = 0; tmp_ch = 0;
  }
  /*!
   * \brief initialize the stream position to beginning of next base64 stream
   * call this function before actually start read
   */
  inline void InitPosition(void) {
    // get a character
    do {
      tmp_ch = reader_.GetChar();
    } while (isspace(tmp_ch));
  }
  /*! \brief whether current position is end of a base64 stream */
  inline bool IsEOF(void) const {
    return num_prev == 0 && (tmp_ch == EOF || isspace(tmp_ch));
  }
  virtual size_t Read(void *ptr, size_t size) {
    using base64::DecodeTable;
    if (size == 0) return 0;
    // use tlen to record left size
    size_t tlen = size;
    unsigned char *cptr = static_cast<unsigned char*>(ptr);
    // if anything left, load from previous buffered result
    if (num_prev != 0) {
      if (num_prev == 2) {
        if (tlen >= 2) {
          *cptr++ = buf_prev[0];
          *cptr++ = buf_prev[1];
          tlen -= 2;
          num_prev = 0;
        } else {
          // assert tlen == 1
          *cptr++ = buf_prev[0]; --tlen;
          buf_prev[0] = buf_prev[1];
          num_prev = 1;
        }
      } else {
        // assert num_prev == 1
        *cptr++ = buf_prev[0]; --tlen; num_prev = 0;
      }
    }
    if (tlen == 0) return size;
    int nvalue;
    // note: everything goes with 4 bytes in Base64
    // so we process 4 bytes a unit
    while (tlen && tmp_ch != EOF && !isspace(tmp_ch)) {
      // first byte
      nvalue = DecodeTable[tmp_ch] << 18;
      {
        // second byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        nvalue |= DecodeTable[tmp_ch] << 12;
        *cptr++ = (nvalue >> 16) & 0xFF; --tlen;
        }
      {
        // third byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        // handle termination
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == '=') << 'invalid base64 format';
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch] << 6;
        if (tlen) {
          *cptr++ = (nvalue >> 8) & 0xFF; --tlen;
        } else {
          buf_prev[num_prev++] = (nvalue >> 8) & 0xFF;
        }
      }
      {
        // fourth byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch))
            << 'invalid base64 format';
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch];
        if (tlen) {
          *cptr++ = nvalue & 0xFF; --tlen;
        } else {
          buf_prev[num_prev ++] = nvalue & 0xFF;
        }
      }
      // get next char
      tmp_ch = reader_.GetChar();
    }
    if (kStrictCheck) {
      CHECK_EQ(tlen, 0) << 'Base64InStream: read incomplete';
    }
    return size - tlen;
  }
  virtual void Write(const void *ptr, size_t size) {
    LOG(FATAL) << 'Base64InStream do not support write';
  }
    }
    
            // Poll and handle inputs
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        s3eKeyboardUpdate();
        s3ePointerUpdate();
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
        // 3. Show another simple window.
    if (show_another_window)
    {
        ImGui::Begin('Another Window', &show_another_window);         // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
        ImGui::Text('Hello from another window!');
        if (ImGui::Button('Close Me'))
            show_another_window = false;
        ImGui::End();
    }
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // Poll and handle messages (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            ::TranslateMessage(&msg);
            ::DispatchMessage(&msg);
            continue;
        }
    }
    
    // Build with, e.g:
//   # cl.exe binary_to_compressed_c.cpp
//   # gcc binary_to_compressed_c.cpp
// You can also find a precompiled Windows binary in the binary/demo package available from https://github.com/ocornut/imgui
    
        // output element with JSON pointer '/number'
    std::cout << j.at('/number'_json_pointer) << '\n';
    // output element with JSON pointer '/string'
    std::cout << j.at('/string'_json_pointer) << '\n';
    // output element with JSON pointer '/array'
    std::cout << j.at('/array'_json_pointer) << '\n';
    // output element with JSON pointer '/array/1'
    std::cout << j.at('/array/1'_json_pointer) << '\n';
    
      // 4. If the end of current passage region not appeared, no rerouting
  const auto& route_end_waypoint = segments.RouteEndWaypoint();
  if (!route_end_waypoint.lane) {
    return true;
  }
  auto point = route_end_waypoint.lane->GetSmoothPoint(route_end_waypoint.s);
  const auto& reference_line = reference_line_info_->reference_line();
  common::SLPoint sl_point;
  if (!reference_line.XYToSL({point.x(), point.y()}, &sl_point)) {
    AERROR << 'Failed to project point: ' << point.ShortDebugString();
    return false;
  }
  if (!reference_line.IsOnLane(sl_point)) {
    return true;
  }
  // 5. If the end of current passage region is further than kPrepareRoutingTime
  // * speed, no rerouting
  double adc_s = reference_line_info_->AdcSlBoundary().end_s();
  const auto vehicle_state = common::VehicleStateProvider::Instance();
  double speed = vehicle_state->linear_velocity();
  const double prepare_rerouting_time =
      config_.rerouting().prepare_rerouting_time();
  const double prepare_distance = speed * prepare_rerouting_time;
  if (sl_point.s() > adc_s + prepare_distance) {
    ADEBUG << 'No need rerouting now because still can drive for time: '
           << prepare_rerouting_time << ' seconds';
    return true;
  }
  // 6. Check if we have done rerouting before
  auto* rerouting = PlanningContext::Instance()
                        ->mutable_planning_status()
                        ->mutable_rerouting();
  if (rerouting == nullptr) {
    AERROR << 'rerouting is nullptr.';
    return false;
  }
  double current_time = Clock::NowInSeconds();
  if (rerouting->has_last_rerouting_time() &&
      (current_time - rerouting->last_rerouting_time() <
       config_.rerouting().cooldown_time())) {
    ADEBUG << 'Skip rerouting and wait for previous rerouting result';
    return true;
  }
  if (!frame_->Rerouting()) {
    AERROR << 'Failed to send rerouting request';
    return false;
  }
    
    
    {    // wait for other agent receiving is ok.
    while (!other_agent()->is_receiving()) {
      std::this_thread::yield();
    }
    int64_t start = AsInt64<micros>(Clock::Now());
    while (true) {
      // param->print();
      if (count >= FLAGS_agent_mutual_send_frames) {
        break;
      }
      for (int32_t i = 0; i < MAX_CAN_SEND_FRAME_LEN; ++i) {
        // frames[i].id = id_count & 0x3FF;
        send_id = id;
        frames[i].id = id;
        frames[i].len = 8;
        frames[i].data[7] = static_cast<uint8_t>(count % 256);
        for (uint8_t j = 0; j < 7; ++j) {
          frames[i].data[j] = j;
        }
        ++count;
        ++id;
        if (id > end_id) {
          id = start_id;
        }
      }
      int32_t frame_num = MAX_CAN_SEND_FRAME_LEN;
      if (client->Send(frames, &frame_num) != ErrorCode::OK) {
        param->send_err_cnt += MAX_CAN_SEND_FRAME_LEN;
        AERROR << 'send_thread send msg failed!, id:' << send_id
               << ', conf:' << param->conf.ShortDebugString();
      } else {
        param->send_cnt += frame_num;
        param->send_lost_cnt += MAX_CAN_SEND_FRAME_LEN - frame_num;
        AINFO << 'send_frames: ' << frame_num << 'send_frame#'
              << frames[0].CanFrameString()
              << ' send lost:' << MAX_CAN_SEND_FRAME_LEN - frame_num
              << ', conf:' << param->conf.ShortDebugString();
      }
    }
    int64_t end = AsInt64<micros>(Clock::Now());
    param->send_time = static_cast<int32_t>(end - start);
    // In case for finish too quick to receiver miss some msg
    sleep(2);
    AINFO << 'Send thread stopping...' << param->conf.ShortDebugString();
    is_sending_finish(true);
    return;
  }
    
    /**
 * @brief Inner product between two 2-D vectors from the common start point,
 *        and end at two other points.
 * @param start_point The common start point of two vectors in 2-D.
 * @param end_point_1 The end point of the first vector.
 * @param end_point_2 The end point of the second vector.
 *
 * @return The inner product result.
 */
double InnerProd(const Vec2d &start_point, const Vec2d &end_point_1,
                 const Vec2d &end_point_2);
    
    
    {
    {}  // namespace control
}  // namespace apollo

    
    static const cv::Scalar kFaceColorMap[] = {
    cv::Scalar(255, 255, 255),  // 0
    cv::Scalar(255, 0, 0),      // 1
    cv::Scalar(0, 255, 0),      // 2
    cv::Scalar(0, 0, 255),      // 3
};
    
    struct TrafficLightUnprotectedRightTurnContext;
    
     private:
  friend Scheduler* Instance();
  SchedulerChoreography();
    
      bool CheckADCStop(const Frame& frame);
    
    namespace apollo {
namespace planning {
namespace scenario {
namespace valet_parking {
    }
    }
    }
    }
    
        int ret2 = (int) (long) swHashMap_find(hm, (char *) SW_STRL('hello2'));
    ASSERT_GT(ret2, 0);
    
        for (long i = 0; i < N; i++)
    {
        ASSERT_EQ(swThreadPool_dispatch(&pool, (void*) &result, sizeof(result)), SW_OK);
    }
    
    using namespace swoole;
    
            int status = -1;
        pid_t pid2 = -1;
    
    int main (int argc, char **argv) {
    }
    
        for (i = 1; i < 20000; i++)
    {
        uint32_t key = i * 37;
        swRbtree_insert(tree, key, (void *) (long) (i * 8));
    }
    
    err_packet::err_packet(const char *data) : server_packet(data)
{
    swMysqlPacketDump(header.length, header.number, data, 'ERR_Packet');
    // ERR Packet = Packet header (4 bytes) + ERR Payload
    data += SW_MYSQL_PACKET_HEADER_SIZE;
    // int<1>   header  [ff] header of the ERR packet
    data += 1;
    // int<2>   error_code  error-code
    code = sw_mysql_uint2korr2korr(data);
    data += 2;
    // string[1]    sql_state_marker    # marker of the SQL State
    data += 1;
    // string[5]    sql_state   SQL State
    memcpy(sql_state, data, 5);
    sql_state[5] = '\0';
    data += 5;
    // string<EOF>  error_message   human readable error message
    msg = std::string(data, header.length - 9);
    swTraceLog(SW_TRACE_MYSQL_CLIENT, 'ERR_Packet, error_code=%u, sql_state=%s, status_msg=[%s]', code, sql_state, msg.c_str());
};
    
    static sw_inline int swoole_futex_wakeup(sw_atomic_t *atomic, int n)
{
    if (sw_atomic_cmp_set(atomic, 0, 1))
    {
        return syscall(SYS_futex, atomic, FUTEX_WAKE, n, NULL, NULL, 0);
    }
    else
    {
        return SW_OK;
    }
}
#endif
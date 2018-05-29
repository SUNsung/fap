
        
        // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
    // A comparator for internal keys that uses a specified comparator for
// the user key portion and breaks ties by decreasing sequence number.
class InternalKeyComparator : public Comparator {
 private:
  const Comparator* user_comparator_;
 public:
  explicit InternalKeyComparator(const Comparator* c) : user_comparator_(c) { }
  virtual const char* Name() const;
  virtual int Compare(const Slice& a, const Slice& b) const;
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const;
  virtual void FindShortSuccessor(std::string* key) const;
    }
    
    std::string SSTTableFileName(const std::string& name, uint64_t number) {
  assert(number > 0);
  return MakeFileName(name, number, 'sst');
}
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
    // Tests that the SSE implementation gets the same result as the vanilla.
TEST_F(IntSimdMatrixTest, SSE) {
  if (SIMDDetect::IsSSEAvailable()) {
    tprintf('SSE found! Continuing...');
  } else {
    tprintf('No SSE found! Not Tested!');
    return;
  }
  std::unique_ptr<IntSimdMatrix> matrix(new IntSimdMatrixSSE());
  ExpectEqualResults(matrix.get());
}
    
    TESS_API void TESS_CALL TessBaseAPIRunAdaptiveClassifier(TessBaseAPI* handle, TBLOB* blob, int num_max_matches,
                                                               int* unichar_ids, float* ratings, int* num_matches_returned)
{
    handle->RunAdaptiveClassifier(blob, num_max_matches, unichar_ids, ratings, num_matches_returned);
}
    
    /**********************************************************************
 * HOcr Text Renderer interface implementation
 **********************************************************************/
TessHOcrRenderer::TessHOcrRenderer(const char *outputbase)
    : TessResultRenderer(outputbase, 'hocr') {
    font_info_ = false;
}
    
    namespace tesseract {
    }
    
    DIR128::DIR128(                 //from fcoord
               const FCOORD fc  //vector to quantize
              ) {
  int high, low, current;        //binary search
    }
    
    
    {  // Now maximize sig_sq_B over t.
  // http://www.ctie.monash.edu.au/hargreave/Cornall_Terry_328.pdf
  int best_t = -1;
  int omega_0, omega_1;
  int best_omega_0 = 0;
  double best_sig_sq_B = 0.0;
  double mu_0, mu_1, mu_t;
  omega_0 = 0;
  mu_t = 0.0;
  for (int t = 0; t < kHistogramSize - 1; ++t) {
    omega_0 += histogram[t];
    mu_t += t * static_cast<double>(histogram[t]);
    if (omega_0 == 0)
      continue;
    omega_1 = H - omega_0;
    if (omega_1 == 0)
      break;
    mu_0 = mu_t / omega_0;
    mu_1 = (mu_T - mu_t) / omega_1;
    double sig_sq_B = mu_1 - mu_0;
    sig_sq_B *= sig_sq_B * omega_0 * omega_1;
    if (best_t < 0 || sig_sq_B > best_sig_sq_B) {
      best_sig_sq_B = sig_sq_B;
      best_t = t;
      best_omega_0 = omega_0;
    }
  }
  if (H_out != nullptr) *H_out = H;
  if (omega0_out != nullptr) *omega0_out = best_omega_0;
  return best_t;
}
    
    #define PRINT_MSG(...)                          \
  switch (m_report) {                           \
    case Log:                                   \
      Logger::Info(__VA_ARGS__);                \
      break;                                    \
    case Stderr:                                \
      fprintf(stderr, __VA_ARGS__);             \
      break;                                    \
    case Trace:                                 \
      Trace::traceRelease(__VA_ARGS__);         \
      break;                                    \
    default: not_reached();                     \
  }
    
    template<typename T>
inline Vptr emitTLSAddr(Vout& v, TLSDatum<T> datum) {
  switch (arch()) {
    case Arch::X64:
      return x64::detail::emitTLSAddr(v, datum);
    case Arch::ARM:
      return arm::detail::emitTLSAddr(v, datum);
    case Arch::PPC64:
      return ppc64::detail::emitTLSAddr(v, datum);
  }
  not_reached();
}
    
      /**
   * Get results of a task. This is blocking until task is finished or times
   * out. The status code is set to -1 in the event of a timeout.
   */
  static String TaskResult(const Resource& task,
                           Array &headers,
                           int &code,
                           int64_t timeout_ms);
    
    #include 'hphp/runtime/base/datatype.h'
    
    const Arc& TargetGraph::incArcWeight(TargetId src, TargetId dst, double w) {
  auto res = arcs.emplace(src, dst, w);
  if (!res.second) {
    res.first->weight += w;
    return *res.first;
  }
  targets[src].succs.push_back(dst);
  targets[dst].preds.push_back(src);
  return *res.first;
}
    
    
float Instruction::ImmFP32() {
  //  ImmFP: abcdefgh (8 bits)
  // Single: aBbb.bbbc.defg.h000.0000.0000.0000.0000 (32 bits)
  // where B is b ^ 1
  uint32_t bits = ImmFP();
  uint32_t bit7 = (bits >> 7) & 0x1;
  uint32_t bit6 = (bits >> 6) & 0x1;
  uint32_t bit5_to_0 = bits & 0x3f;
  uint32_t result = (bit7 << 31) | ((32 - bit6) << 25) | (bit5_to_0 << 19);
    }
    
    // Record error message based on errno, with an optional message.
static void record_err_msg(const char* msg = nullptr) {
  size_t len = 0;
  if (msg) {
    len = strlen(msg);
    if (len > maxErrorMsgLen / 2) {
      len = maxErrorMsgLen / 2;
    }
    memcpy(s_errorMsg, msg, len);
    s_errorMsg[len] = 0;
  } else {
    len = strlen(s_errorMsg);
  }
#ifdef __linux__
#ifdef _GNU_SOURCE
  char* err = strerror_r(errno, s_errorMsg + len, maxErrorMsgLen - len);
  if (len == strlen(s_errorMsg)) {
    size_t appendLen = strlen(err);
    if (appendLen + len >= maxErrorMsgLen) {
      appendLen = maxErrorMsgLen - 1 - len;
    }
    memcpy(s_errorMsg + len, err, appendLen);
    s_errorMsg[len + appendLen] = 0;
  }
#else
  strerror_r(errno, s_errorMsg + len, maxErrorMsgLen - len);
#endif
#endif
}
    
     private:
  StreamBufferReader reader_;
  int tmp_ch;
  int num_prev;
  unsigned char buf_prev[2];
  // whether we need to do strict check
  static const bool kStrictCheck = false;
};
/*! \brief the stream that write to base64, note we take from file pointers */
class Base64OutStream: public dmlc::Stream {
 public:
  explicit Base64OutStream(dmlc::Stream *fp) : fp(fp) {
    buf_top = 0;
  }
  virtual void Write(const void *ptr, size_t size) {
    using base64::EncodeTable;
    size_t tlen = size;
    const unsigned char *cptr = static_cast<const unsigned char*>(ptr);
    while (tlen) {
      while (buf_top < 3  && tlen != 0) {
        buf[++buf_top] = *cptr++; --tlen;
      }
      if (buf_top == 3) {
        // flush 4 bytes out
        PutChar(EncodeTable[buf[1] >> 2]);
        PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
        PutChar(EncodeTable[((buf[2] << 2) | (buf[3] >> 6)) & 0x3F]);
        PutChar(EncodeTable[buf[3] & 0x3F]);
        buf_top = 0;
      }
    }
  }
  virtual size_t Read(void *ptr, size_t size) {
    LOG(FATAL) << 'Base64OutStream do not support read';
    return 0;
  }
  /*!
   * \brief finish writing of all current base64 stream, do some post processing
   * \param endch character to put to end of stream, if it is EOF, then nothing will be done
   */
  inline void Finish(char endch = EOF) {
    using base64::EncodeTable;
    if (buf_top == 1) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[(buf[1] << 4) & 0x3F]);
      PutChar('=');
      PutChar('=');
    }
    if (buf_top == 2) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
      PutChar(EncodeTable[(buf[2] << 2) & 0x3F]);
      PutChar('=');
    }
    buf_top = 0;
    if (endch != EOF) PutChar(endch);
    this->Flush();
  }
    
    #include <gtest/gtest.h>
    
    SEXP XGDMatrixCreateFromCSC_R(SEXP indptr,
                              SEXP indices,
                              SEXP data,
                              SEXP num_row) {
  SEXP ret;
  R_API_BEGIN();
  const int *p_indptr = INTEGER(indptr);
  const int *p_indices = INTEGER(indices);
  const double *p_data = REAL(data);
  size_t nindptr = static_cast<size_t>(length(indptr));
  size_t ndata = static_cast<size_t>(length(data));
  size_t nrow = static_cast<size_t>(INTEGER(num_row)[0]);
  std::vector<size_t> col_ptr_(nindptr);
  std::vector<unsigned> indices_(ndata);
  std::vector<float> data_(ndata);
    }
    
          CompressedIterator<int> ci(buffer.data(), alphabet_size);
      std::vector<int> output(input.size());
      for (int i = 0; i < input.size(); i++) {
        output[i] = ci[i];
      }
    
    
    {  jsize jlen = (jsize) len;
  jfloatArray jarray = jenv->NewFloatArray(jlen);
  jenv->SetFloatArrayRegion(jarray, 0, jlen, (jfloat *) result);
  jenv->SetObjectArrayElement(jout, 0, jarray);
  return ret;
}
    
      void PredictBatch(DMatrix *p_fmat,
                    HostDeviceVector<bst_float> *out_preds,
                    unsigned ntree_limit) override {
    monitor_.Start('PredictBatch');
    CHECK_EQ(ntree_limit, 0U)
        << 'GBLinear::Predict ntrees is only valid for gbtree predictor';
    }
    
        double mouse_x, mouse_y;
    mouse_x = s3ePointerGetX();
    mouse_y = s3ePointerGetY();
    io.MousePos = ImVec2((float)mouse_x/g_scale.x, (float)mouse_y/g_scale.y);   // Mouse position (set to -FLT_MAX,-FLT_MAX if no mouse / on another screen, etc.)
    
    // Copyright (C) 2015 by Giovanni Zito
// This file is part of ImGui
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}

    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    
    {            _state = EXPECTS_CRASH_DUMP_CONTENT;
        } else if (EXPECTS_CRASH_DUMP == _state) {
            continue;
        }
    
    
/*
 * DumpCrashStack.h
 *
 *  Created on: 2012-9-28
 *      Author: yerungui
 */
    
    WakeUpLock::WakeUpLock() {
    object_ = ::wakeupLock_new();
    ASSERT(object_);
    xinfo2('new wakeuplock:%p', object_);
}
    
        LongLinkPack st = {0};
    st.ver = 0x1;
    st.head_length = (unsigned char)sizeof(st);
    st.url_length = url_size;
    st.total_length = (unsigned int)(st.head_length + st.url_length  + _datalen);
    st.sequence = _sequence;
    st.magic = (st.head_length + st.url_length + st.total_length) & 0xFF;
    
    //
//  boost_exception.cpp
//  comm
//
//  Created by yanguoyue on 16/5/20.
//
    
    
Test_Spy_Sample::Test_Spy_Sample()
{
    SPY_ATTACH_CLASS(NULL);
}
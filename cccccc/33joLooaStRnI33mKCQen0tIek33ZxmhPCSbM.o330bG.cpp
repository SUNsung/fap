
        
        REGISTER_OP('Int64Output')
    .Output('out: int64')
    .SetShapeFn(shape_inference::UnknownShape);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    struct TFETensorHandleDeleter {
  void operator()(TFE_TensorHandle* p) const { TFE_DeleteTensorHandle(p); }
};
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #ifndef ATOM_APP_COMMAND_LINE_ARGS_H_
#define ATOM_APP_COMMAND_LINE_ARGS_H_
    
    #endif  // ENABLE_RUN_AS_NODE
    
    // static
void UvTaskRunner::OnTimeout(uv_timer_t* timer) {
  UvTaskRunner* self = static_cast<UvTaskRunner*>(timer->data);
  if (!ContainsKey(self->tasks_, timer))
    return;
    }
    
    namespace atom {
    }
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  auto controller = base::Unretained(TracingController::GetInstance());
  mate::Dictionary dict(context->GetIsolate(), exports);
  dict.SetMethod('getCategories',
                 base::Bind(&TracingController::GetCategories, controller));
  dict.SetMethod('startRecording',
                 base::Bind(&TracingController::StartTracing, controller));
  dict.SetMethod('stopRecording', &StopRecording);
  dict.SetMethod(
      'getTraceBufferUsage',
      base::Bind(&TracingController::GetTraceBufferUsage, controller));
}
    
    DownloadItem::DownloadItem(v8::Isolate* isolate,
                           download::DownloadItem* download_item)
    : download_item_(download_item) {
  download_item_->AddObserver(this);
  Init(isolate);
  AttachAsUserData(download_item);
}
    
    #ifndef BITCOIN_QT_PLATFORMSTYLE_H
#define BITCOIN_QT_PLATFORMSTYLE_H
    
    #ifndef BITCOIN_QT_QVALUECOMBOBOX_H
#define BITCOIN_QT_QVALUECOMBOBOX_H
    
    public:
    explicit TrafficGraphWidget(QWidget *parent = 0);
    void setClientModel(ClientModel *model);
    int getGraphRangeMins() const;
    
    #define Round(a,b,c,d,e,f,g,h,k,w) do { \
    uint32_t t1 = (h) + Sigma1(e) + Ch((e), (f), (g)) + (k) + (w); \
    uint32_t t2 = Sigma0(a) + Maj((a), (b), (c)); \
    (d) += t1; \
    (h) = t1 + t2; \
} while(0)
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    ///////////////////////////////////////////////////////////////////////////////
// Cosine table: C(k) = cos(k.pi/16)/sqrt(2), k = 1..7 using 15 bits signed
const coeff_t kTable04[7] = { 22725, 21407, 19266, 16384, 12873,  8867, 4520 };
// rows #1 and #7 are pre-multiplied by 2.C(1) before the 2nd pass.
// This multiply is merged in the table of constants used during 1st pass:
const coeff_t kTable17[7] = { 31521, 29692, 26722, 22725, 17855, 12299, 6270 };
// rows #2 and #6 are pre-multiplied by 2.C(2):
const coeff_t kTable26[7] = { 29692, 27969, 25172, 21407, 16819, 11585, 5906 };
// rows #3 and #5 are pre-multiplied by 2.C(3):
const coeff_t kTable35[7] = { 26722, 25172, 22654, 19266, 15137, 10426, 5315 };
    
    // Decodes one 8x8 block of DCT coefficients from the bit stream.
bool DecodeDCTBlock(const HuffmanTableEntry* dc_huff,
                    const HuffmanTableEntry* ac_huff,
                    int Ss, int Se, int Al,
                    int* eobrun,
                    BitReaderState* br,
                    JPEGData* jpg,
                    coeff_t* last_dc_coeff,
                    coeff_t* coeffs) {
  int s;
  int r;
  bool eobrun_allowed = Ss > 0;
  if (Ss == 0) {
    s = ReadSymbol(dc_huff, br);
    if (s >= kJpegDCAlphabetSize) {
      fprintf(stderr, 'Invalid Huffman symbol %d for DC coefficient.\n', s);
      jpg->error = JPEG_INVALID_SYMBOL;
      return false;
    }
    if (s > 0) {
      r = br->ReadBits(s);
      s = HuffExtend(r, s);
    }
    s += *last_dc_coeff;
    const int dc_coeff = SignedLeftshift(s, Al);
    coeffs[0] = dc_coeff;
    if (dc_coeff != coeffs[0]) {
      fprintf(stderr, 'Invalid DC coefficient %d\n', dc_coeff);
      jpg->error = JPEG_NON_REPRESENTABLE_DC_COEFF;
      return false;
    }
    *last_dc_coeff = s;
    ++Ss;
  }
  if (Ss > Se) {
    return true;
  }
  if (*eobrun > 0) {
    --(*eobrun);
    return true;
  }
  for (int k = Ss; k <= Se; k++) {
    s = ReadSymbol(ac_huff, br);
    if (s >= kJpegHuffmanAlphabetSize) {
      fprintf(stderr, 'Invalid Huffman symbol %d for AC coefficient %d\n',
              s, k);
      jpg->error = JPEG_INVALID_SYMBOL;
      return false;
    }
    r = s >> 4;
    s &= 15;
    if (s > 0) {
      k += r;
      if (k > Se) {
        fprintf(stderr, 'Out-of-band coefficient %d band was %d-%d\n',
                k, Ss, Se);
        jpg->error = JPEG_OUT_OF_BAND_COEFF;
        return false;
      }
      if (s + Al >= kJpegDCAlphabetSize) {
        fprintf(stderr, 'Out of range AC coefficient value: s=%d Al=%d k=%d\n',
                s, Al, k);
        jpg->error = JPEG_NON_REPRESENTABLE_AC_COEFF;
        return false;
      }
      r = br->ReadBits(s);
      s = HuffExtend(r, s);
      coeffs[kJPEGNaturalOrder[k]] = SignedLeftshift(s, Al);
    } else if (r == 15) {
      k += 15;
    } else {
      *eobrun = 1 << r;
      if (r > 0) {
        if (!eobrun_allowed) {
          fprintf(stderr, 'End-of-block run crossing DC coeff.\n');
          jpg->error = JPEG_EOB_RUN_TOO_LONG;
          return false;
        }
        *eobrun += br->ReadBits(r);
      }
      break;
    }
  }
  --(*eobrun);
  return true;
}
    
    namespace {
    }
    
    #include <iostream>
    
      struct timespec ts;
  if (!std::is_same<decltype(ts.tv_sec), int64_t>::value) {
    LOG(INFO) << 'skipping most overflow tests: time_t is not int64_t';
  } else {
    // Check for overflow converting from uint64_t seconds to time_t
    using sec_u64 = duration<uint64_t>;
    ts = to<struct timespec>(sec_u64(9223372036854775807ULL));
    EXPECT_EQ(ts.tv_sec, 9223372036854775807ULL);
    EXPECT_EQ(ts.tv_nsec, 0);
    }
    
    
    {  /**
   * The strategy parameter is used to tune the compression algorithm.
   * Supported values:
   * - Z_DEFAULT_STRATEGY: normal data
   * - Z_FILTERED: data produced by a filter (or predictor)
   * - Z_HUFFMAN_ONLY: force Huffman encoding only (no string match)
   * - Z_RLE: limit match distances to one
   * - Z_FIXED: prevents the use of dynamic Huffman codes
   *
   * The strategy parameter only affects the compression ratio but not the
   * correctness of the compressed output.
   */
  int strategy;
};
    
        return newptr;
  }
  PackedPtr get_newptr(SharedPtr&& n) const {
    BasePtr* newval;
    unsigned count = 0;
    if (!n) {
      newval = nullptr;
    } else {
      newval = CountedDetail::get_counted_base(n);
      if (n.get() != CountedDetail::template get_shared_ptr<T>(newval)) {
        // This is an aliased sharedptr.  Make an un-aliased one
        // by wrapping in *another* shared_ptr.
        auto data = CountedDetail::template make_ptr<SharedPtr>(std::move(n));
        newval = CountedDetail::get_counted_base(data);
        count = ALIASED_PTR;
        CountedDetail::release_ptr(data);
        add_external(newval, -1);
      } else {
        CountedDetail::release_ptr(n);
        add_external(newval, -1);
      }
    }

        
        void AddPepperFlashFromCommandLine(
    std::vector<content::PepperPluginInfo>* plugins) {
  auto* command_line = base::CommandLine::ForCurrentProcess();
  base::FilePath flash_path =
      command_line->GetSwitchValuePath(switches::kPpapiFlashPath);
  if (flash_path.empty())
    return;
    }
    
        // Setup process.crashReporter.start in child node processes
    auto reporter = mate::Dictionary::CreateEmpty(gin_env.isolate());
    reporter.SetMethod('start', &crash_reporter::CrashReporter::StartInstance);
    process.Set('crashReporter', reporter);
    
    #include 'atom/browser/api/atom_api_view.h'
#include 'native_mate/handle.h'
#include 'ui/views/controls/button/button.h'
    
    #include 'atom/common/node_includes.h'
    
    #include 'atom/common/node_includes.h'
    
        const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    #include <QIcon>
#include <QPixmap>
#include <QString>
    
    Q_SIGNALS:
    void valueChanged();
    
        secp256k1_pubkey_load(ctx, &pt, point);
    secp256k1_scalar_set_b32(&s, scalar, &overflow);
    if (overflow || secp256k1_scalar_is_zero(&s)) {
        ret = 0;
    } else {
        unsigned char x[32];
        unsigned char y[1];
        secp256k1_sha256_t sha;
    }
    
    class CronetChannelCredentialsImpl final : public ChannelCredentials {
 public:
  CronetChannelCredentialsImpl(void* engine) : engine_(engine) {}
    }
    
    // Note: a second call to this will add in front the result of the first call.
// An example is calling this on a copy of ChannelArguments which already has a
// prefix. The user can build up a prefix string by calling this multiple times,
// each with more significant identifier.
void ChannelArguments::SetUserAgentPrefix(
    const grpc::string& user_agent_prefix) {
  if (user_agent_prefix.empty()) {
    return;
  }
  bool replaced = false;
  auto strings_it = strings_.begin();
  for (auto it = args_.begin(); it != args_.end(); ++it) {
    const grpc_arg& arg = *it;
    ++strings_it;
    if (arg.type == GRPC_ARG_STRING) {
      if (grpc::string(arg.key) == GRPC_ARG_PRIMARY_USER_AGENT_STRING) {
        GPR_ASSERT(arg.value.string == strings_it->c_str());
        *(strings_it) = user_agent_prefix + ' ' + arg.value.string;
        it->value.string = const_cast<char*>(strings_it->c_str());
        replaced = true;
        break;
      }
      ++strings_it;
    }
  }
  if (!replaced) {
    SetString(GRPC_ARG_PRIMARY_USER_AGENT_STRING, user_agent_prefix);
  }
}
    
    std::vector<grpc::string_ref> SecureAuthContext::FindPropertyValues(
    const grpc::string& name) const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter =
      grpc_auth_context_find_properties_by_name(ctx_, name.c_str());
  const grpc_auth_property* property = nullptr;
  std::vector<grpc::string_ref> values;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    values.push_back(grpc::string_ref(property->value, property->value_length));
  }
  return values;
}
    
    absl::string_view StatusCodeToString(grpc_status_code code) {
  switch (code) {
    case GRPC_STATUS_OK:
      return 'OK';
    case GRPC_STATUS_CANCELLED:
      return 'CANCELLED';
    case GRPC_STATUS_UNKNOWN:
      return 'UNKNOWN';
    case GRPC_STATUS_INVALID_ARGUMENT:
      return 'INVALID_ARGUMENT';
    case GRPC_STATUS_DEADLINE_EXCEEDED:
      return 'DEADLINE_EXCEEDED';
    case GRPC_STATUS_NOT_FOUND:
      return 'NOT_FOUND';
    case GRPC_STATUS_ALREADY_EXISTS:
      return 'ALREADY_EXISTS';
    case GRPC_STATUS_PERMISSION_DENIED:
      return 'PERMISSION_DENIED';
    case GRPC_STATUS_UNAUTHENTICATED:
      return 'UNAUTHENTICATED';
    case GRPC_STATUS_RESOURCE_EXHAUSTED:
      return 'RESOURCE_EXHAUSTED';
    case GRPC_STATUS_FAILED_PRECONDITION:
      return 'FAILED_PRECONDITION';
    case GRPC_STATUS_ABORTED:
      return 'ABORTED';
    case GRPC_STATUS_OUT_OF_RANGE:
      return 'OUT_OF_RANGE';
    case GRPC_STATUS_UNIMPLEMENTED:
      return 'UNIMPLEMENTED';
    case GRPC_STATUS_INTERNAL:
      return 'INTERNAL';
    case GRPC_STATUS_UNAVAILABLE:
      return 'UNAVAILABLE';
    case GRPC_STATUS_DATA_LOSS:
      return 'DATA_LOSS';
    default:
      // gRPC wants users of this enum to include a default branch so that
      // adding values is not a breaking change.
      return 'UNKNOWN_STATUS';
  }
}
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H
    
    #include <errno.h>
#include <netdb.h>
#include <poll.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <unistd.h>
#ifndef NO_FCNTL
#ifdef __HAIKU__
#include <fcntl.h>
#else
#include <sys/fcntl.h>
#endif
#else
#include <sys/ioctl.h>
#endif
#include <netinet/in.h>
    
    	if (!is_connection_available()) {
		return Ref<StreamPeerTCP>();
	};
    
    	static void make_default();
    
    
    {	if (TryEnterCriticalSection(&mutex))
		return OK;
	else
		return ERR_BUSY;
#endif
}
    
    	ThreadCreateCallback callback;
	void *user;
	ID id;
	HANDLE handle;
    
    /*
 * Call a function that produces a return value for each element of
 * `inputs' in parallel, and collect the results.
 *
 * Requires: the type returned from the function call must be
 * DefaultConstructible, and either MoveAssignable or Assignable.
 *
 * If `func' throws an exception, the results of the output vector
 * will contain some default-constructed values.
 */
template<class Func, class Items>
auto map(Items&& inputs, Func func) -> std::vector<decltype(func(inputs[0]))> {
  std::vector<decltype(func(inputs[0]))> retVec(inputs.size());
  auto const retMem = &retVec[0];
    }
    
    #endif

    
    int64_t VMTOC::allocTOC(int64_t target) {
  folly::MSLGuard g{s_TOC};
  HPHP::Address addr = m_tocvector->frontier();
  m_tocvector->qword(target);
  return addr - (m_tocvector->base() + INT16_MAX + 1);
}
    
    namespace HPHP {
    }
    
    #endif /* incl_HPHP_CONFIG_H_ */

    
    #ifndef incl_HPHP_EXECUTION_CONTEXT_INL_H_
#define incl_HPHP_EXECUTION_CONTEXT_INL_H_
    
        // Explicit template instantiations
    template shared_ptr<Matrix<float>> LearnerBase::GetWritableMatrix<float>(const NDArrayViewPtr& arrayView);
    template shared_ptr<Matrix<double>> LearnerBase::GetWritableMatrix<double>(const NDArrayViewPtr& arrayView);
    
            if (sectionOffset.size() > m_maskShape.Rank())
            LogicError('NDMask::MaskSection: The sectionOffset dimensionality (%d) must be <= rank (%d) of 'this' mask.', (int)sectionOffset.size(), (int)m_maskShape.Rank());
    
                callback(m_samples.second, m_updates.second, m_totalSummaries, m_loss.second, m_metric.second, durationMs);
    
            NDArrayViewPtr deviceValueData;
        if (device == valueData->Device())
        {
            if (readOnly)
                deviceValueData = valueData->Alias(readOnly);
            else
                deviceValueData = valueData;
        }
        else
            deviceValueData = valueData->DeepClone(device, readOnly);
    
            size_t MaskedCount() const override
        {
            if (m_isPacked)
                // Compute the number of masked samples after the data will be unpacked
                return m_packedDataLayout ? ((m_packedDataLayout->GetNumTimeSteps() * m_packedDataLayout->GetNumSequences()) - m_packedDataLayout->GetActualNumSamples()) : 0;
            else
                return Value::MaskedCount();
        }
    
        ParameterInitializer GlorotNormalInitializer(double scale, int outputRank, int filterRank, unsigned long seed)
    {
        return CreateInitializer(Microsoft::MSR::CNTK::GlorotNormalInitializerTypeName, scale, outputRank, filterRank, seed);
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    
    { protected:
  /*! \brief internal base score of the model */
  bst_float base_score_;
  /*! \brief objective function */
  std::unique_ptr<ObjFunction> obj_;
  /*! \brief The gradient booster used by the model*/
  std::unique_ptr<GradientBooster> gbm_;
  /*! \brief The evaluation metrics used to evaluate the model. */
  std::vector<std::unique_ptr<Metric> > metrics_;
};
    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
    
      /*!
   * \brief determines whether updater has enough knowledge about a given dataset
   *        to quickly update prediction cache its training data and performs the
   *        update if possible.
   * \param data: data matrix
   * \param out_preds: prediction cache to be updated
   * \return boolean indicating whether updater has capability to update
   *         the prediction cache. If true, the prediction cache will have been
   *         updated by the time this function returns.
   */
  virtual bool UpdatePredictionCache(const DMatrix* data,
                                     HostDeviceVector<bst_float>* out_preds) {
    return false;
  }
    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
    // Define a customized logistic regression objective in C++.
// Implement the interface.
class MyLogistic : public ObjFunction {
 public:
  void Configure(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
  }
  void GetGradient(HostDeviceVector<bst_float> *preds,
                   const MetaInfo &info,
                   int iter,
                   HostDeviceVector<GradientPair> *out_gpair) override {
    out_gpair->Resize(preds->Size());
    std::vector<bst_float>& preds_h = preds->HostVector();
    std::vector<GradientPair>& out_gpair_h = out_gpair->HostVector();
    for (size_t i = 0; i < preds_h.size(); ++i) {
      bst_float w = info.GetWeight(i);
      // scale the negative examples!
      if (info.labels_[i] == 0.0f) w *= param_.scale_neg_weight;
      // logistic transformation
      bst_float p = 1.0f / (1.0f + std::exp(-preds_h[i]));
      // this is the gradient
      bst_float grad = (p - info.labels_[i]) * w;
      // this is the second order gradient
      bst_float hess = p * (1.0f - p) * w;
      out_gpair_h.at(i) = GradientPair(grad, hess);
    }
  }
  const char* DefaultEvalMetric() const override {
    return 'error';
  }
  void PredTransform(HostDeviceVector<bst_float> *io_preds) override {
    // transform margin value to probability.
    std::vector<bst_float> &preds = io_preds->HostVector();
    for (size_t i = 0; i < preds.size(); ++i) {
      preds[i] = 1.0f / (1.0f + std::exp(-preds[i]));
    }
  }
  bst_float ProbToMargin(bst_float base_score) const override {
    // transform probability to margin value
    return -std::log(1.0f / base_score - 1.0f);
  }
    }
    
    template<typename DType>
inline void CompressArray<DType>::Write(dmlc::Stream* fo) {
  encoded_chunks_.clear();
  encoded_chunks_.push_back(0);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    encoded_chunks_.push_back(encoded_chunks_.back() + out_buffer_[i].length());
  }
  fo->Write(raw_chunks_);
  fo->Write(encoded_chunks_);
  for (const std::string& buf : out_buffer_) {
    fo->Write(dmlc::BeginPtr(buf), buf.length());
  }
}
    
    void CLIDumpModel(const CLIParam& param) {
  FeatureMap fmap;
  if (param.name_fmap != 'NULL') {
    std::unique_ptr<dmlc::Stream> fs(
        dmlc::Stream::Create(param.name_fmap.c_str(), 'r'));
    dmlc::istream is(fs.get());
    fmap.LoadText(is);
  }
  // load model
  CHECK_NE(param.model_in, 'NULL')
      << 'Must specify model_in for dump';
  std::unique_ptr<Learner> learner(Learner::Create({}));
  std::unique_ptr<dmlc::Stream> fi(
      dmlc::Stream::Create(param.model_in.c_str(), 'r'));
  learner->Configure(param.cfg);
  learner->Load(fi.get());
  // dump data
  std::vector<std::string> dump = learner->DumpModel(
      fmap, param.dump_stats, param.dump_format);
  std::unique_ptr<dmlc::Stream> fo(
      dmlc::Stream::Create(param.name_dump.c_str(), 'w'));
  dmlc::ostream os(fo.get());
  if (param.dump_format == 'json') {
    os << '[' << std::endl;
    for (size_t i = 0; i < dump.size(); ++i) {
      if (i != 0) os << ',' << std::endl;
      os << dump[i];  // Dump the previously generated JSON here
    }
    os << std::endl << ']' << std::endl;
  } else {
    for (size_t i = 0; i < dump.size(); ++i) {
      os << 'booster[' << i << ']:\n';
      os << dump[i];
    }
  }
  // force flush before fo destruct.
  os.set_stream(nullptr);
}
    
    /*!
 * \brief global random engine
 */
typedef CustomGlobalRandomEngine GlobalRandomEngine;
    
    // Entropy encoding (Huffman) utilities.
    
    const double* Srgb8ToLinearTable() {
  static const double* const kSrgb8ToLinearTable = NewSrgb8ToLinearTable();
  return kSrgb8ToLinearTable;
}
    
    bool ReadPNG(const std::string& data, int* xsize, int* ysize,
             std::vector<uint8_t>* rgb) {
  png_structp png_ptr =
      png_create_read_struct(PNG_LIBPNG_VER_STRING, nullptr, nullptr, nullptr);
  if (!png_ptr) {
    return false;
  }
    }
    
    // Computes out[x] = sum{kIDCTMatrix[8*x+u]*in[u*stride]; for u in [0..7]}
inline void Compute1dIDCT(const coeff_t* in, const int stride, int out[8]) {
  int tmp0, tmp1, tmp2, tmp3, tmp4;
    }
    
    void SaveQuantTables(const int q[3][kDCTBlockSize], JPEGData* jpg) {
  const size_t kTableSize = kDCTBlockSize * sizeof(q[0][0]);
  jpg->quant.clear();
  int num_tables = 0;
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    JPEGComponent* comp = &jpg->components[i];
    // Check if we have this quant table already.
    bool found = false;
    for (int j = 0; j < num_tables; ++j) {
      if (memcmp(&q[i][0], &jpg->quant[j].values[0], kTableSize) == 0) {
        comp->quant_idx = j;
        found = true;
        break;
      }
    }
    if (!found) {
      JPEGQuantTable table;
      memcpy(&table.values[0], &q[i][0], kTableSize);
      table.precision = 0;
      for (int k = 0; k < kDCTBlockSize; ++k) {
        assert(table.values[k] >= 0);
        assert(table.values[k] < (1 << 16));
        if (table.values[k] > 0xff) {
          table.precision = 1;
        }
      }
      table.index = num_tables;
      comp->quant_idx = num_tables;
      jpg->quant.push_back(table);
      ++num_tables;
    }
  }
}
    
    const int kJPEGNaturalOrder[80] = {
  0,   1,  8, 16,  9,  2,  3, 10,
  17, 24, 32, 25, 18, 11,  4,  5,
  12, 19, 26, 33, 40, 48, 41, 34,
  27, 20, 13,  6,  7, 14, 21, 28,
  35, 42, 49, 56, 57, 50, 43, 36,
  29, 22, 15, 23, 30, 37, 44, 51,
  58, 59, 52, 45, 38, 31, 39, 46,
  53, 60, 61, 54, 47, 55, 62, 63,
  // extra entries for safety in decoder
  63, 63, 63, 63, 63, 63, 63, 63,
  63, 63, 63, 63, 63, 63, 63, 63
};
    
    // Single pixel rgb to 16-bit yuv conversion.
// The returned yuv values are signed integers in the
// range [-128, 127] inclusive.
inline static void RGBToYUV16(const uint8_t* const rgb,
                              coeff_t *out) {
  enum { FRAC = 16, HALF = 1 << (FRAC - 1) };
  const int r = rgb[0];
  const int g = rgb[1];
  const int b = rgb[2];
  out[0] = (19595 * r  + 38469 * g +  7471 * b - (128 << 16) + HALF) >> FRAC;
  out[64] = (-11059 * r - 21709 * g + 32768 * b + HALF - 1) >> FRAC;
  out[128] = (32768 * r  - 27439 * g -  5329 * b + HALF - 1) >> FRAC;
}
    
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
    
    // Functions for writing a JPEGData object into a jpeg byte stream.
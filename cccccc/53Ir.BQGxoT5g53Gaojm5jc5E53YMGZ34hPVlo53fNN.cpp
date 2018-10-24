
        
        struct TemporaryFile {
  std::string path;
    }
    
    
    {  vector<int> y_shape(in[0].dims().begin(), in[0].dims().end());
  CAFFE_ENFORCE_LE(canonical_axis + 1, y_shape.size());
  y_shape.resize(canonical_axis + 1);
  y_shape[canonical_axis] = N;
  out[0] = CreateTensorShape(y_shape, in[0].data_type());
  return out;
}
    
    class GetMergeSingleMapFeatureTensorsGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    vector<string> input_blob_names{};
    vector<string> output_blob_names{};
    }
    }
    
    template <class Context>
class FindDuplicateElementsOp final : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  USE_SIMPLE_CTOR_DTOR(FindDuplicateElementsOp);
  USE_DISPATCH_HELPER;
    }
    
    namespace caffe2 {
namespace {
    }
    }
    
    class GetFloatToHalfGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'HalfToFloat', '', vector<string>{GO(0)}, vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(FloatToHalf, GetFloatToHalfGradient);
    
    using LineNumber = uint32_t;
using ColNumber  = uint32_t;
using LineRange  = std::tuple<LineNumber,LineNumber>;
    
      void EmitXX2Form(const uint8_t op,
                   const RegNumber t,
                   const uint8_t uim,
                   const RegNumber b,
                   const uint16_t xo,
                   const bool bx,
                   const bool tx)  {
    XX2_form_t xx2_formater {{
      tx,
      bx,
      xo,
      static_cast<uint32_t>(b),
      static_cast<uint32_t>(uim & 0x3),
      static_cast<uint32_t>(t),
      op
    }};
    dword(xx2_formater.instruction);
  }
    
    Variant PlainDirectory::read() {
  struct dirent entry;
  struct dirent *result;
  int ret = readdir_r(m_dir, &entry, &result);
  if (ret != 0 || !result) {
    return false;
  }
  return String(entry.d_name, CopyString);
}
    
        template <>
    std::tuple<const void *, const SparseIndexType*, const SparseIndexType*, size_t, size_t, size_t> NDArrayView::SparseBlockColumnDataBuffers<int8_t>() const
    {
        return _SparseBlockColumnDataBuffers<int8_t, char>();
    }
    
        NDMask::NDMask(const NDShape& shape, Matrix<char>* matrix)
        : m_device(AsDeviceDescriptor(matrix->GetDeviceId())), m_maskShape(shape)
    {
        m_matrixView = std::shared_ptr<Matrix<char>>(matrix, [](Matrix<char>* ptr) { delete ptr; });
    }
    
        ProgressWriter::ProgressWriter(size_t trainingUpdateWriteFrequency, size_t trainingFirstUpdatesToWrite,
                                   size_t testUpdateWriteFrequency, size_t testFirstUpdatesToWrite,
                                   size_t distributedSyncUpdateWriteFrequency, size_t distributedSyncFirstUpdatesToWrite)
        : m_training(std::make_unique<Impl>(trainingUpdateWriteFrequency, trainingFirstUpdatesToWrite)),
        m_test(std::make_unique<Impl>(testUpdateWriteFrequency, testFirstUpdatesToWrite)),
        m_distributedSync(std::make_unique<Impl>(distributedSyncUpdateWriteFrequency, distributedSyncFirstUpdatesToWrite))
    {
    }
    
            // The return value is ignored here.
        _wunlink(modelFilePath.c_str());
        _wunlink(trainerStateCheckpointFilePath.c_str());
    
            static FunctionPtr Deserialize(const Dictionary& dictionary,
            const std::unordered_map<std::wstring, Variable>& uidToVariableMap,
            const CNTK::DeviceDescriptor& device);
    
    
    {        memcpy(colStarts.data(), rawColStarts, numOfColsInMatrix * sizeof(SparseIndexType));
        memcpy(nonZeroValues.data(), rawNonZeroValues, numNonZeroValues * sizeof(ElementType));
        memcpy(rowIndices.data(), rawRowIndices, numNonZeroValues * sizeof(SparseIndexType));
    }
    
            bool isSparse = dict[isSparseKey].Value<bool>();
        std::wstring name = L'';
        if (dict.Contains(nameKey))
            name = dict[nameKey].Value<std::wstring>();
        bool needsGradient = dict[needsGradientKey].Value<bool>();
        const auto& shape = dict[shapeKey].Value<NDShape>();
    
    #pragma once
    
    // Rand based on Mersenne Twister.
// We use our own distribution in order to match baselines between different operating systems,
// because uniform_distribution is not guaranteed to provide the same numbers on different platforms.
// TODO: Switching to Boost would eliminate this problem.
static inline size_t RandMT(const size_t begin, const size_t end, std::mt19937_64& rng)
{
    const size_t randomNumber = rng();
    return begin + randomNumber % (end - begin);
}
    
    #include <string>
    
    #include <string>
    
    
    {private:
   // this type is not copyable:
   c_regex_traits(const c_regex_traits&);
   c_regex_traits& operator=(const c_regex_traits&);
};
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_match.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Iterator traits for selecting an iterator type as
  *                an integral constant expression.
  */
    
    typedef enum _match_flags
{
   match_default = 0,
   match_not_bol = 1,                                /* first is not start of line */
   match_not_eol = match_not_bol << 1,               /* last is not end of line */
   match_not_bob = match_not_eol << 1,               /* first is not start of buffer */
   match_not_eob = match_not_bob << 1,               /* last is not end of buffer */
   match_not_bow = match_not_eob << 1,               /* first is not start of word */
   match_not_eow = match_not_bow << 1,               /* last is not end of word */
   match_not_dot_newline = match_not_eow << 1,       /* \n is not matched by '.' */
   match_not_dot_null = match_not_dot_newline << 1,  /* '\0' is not matched by '.' */
   match_prev_avail = match_not_dot_null << 1,       /* *--first is a valid expression */
   match_init = match_prev_avail << 1,               /* internal use */
   match_any = match_init << 1,                      /* don't care what we match */
   match_not_null = match_any << 1,                  /* string can't be null */
   match_continuous = match_not_null << 1,           /* each grep match must continue from */
                                                     /* uninterupted from the previous one */
   match_partial = match_continuous << 1,            /* find partial matches */
   
   match_stop = match_partial << 1,                  /* stop after first match (grep) V3 only */
   match_not_initial_null = match_stop,              /* don't match initial null, V4 only */
   match_all = match_stop << 1,                      /* must find the whole of input even if match_any is set */
   match_perl = match_all << 1,                      /* Use perl matching rules */
   match_posix = match_perl << 1,                    /* Use POSIX matching rules */
   match_nosubs = match_posix << 1,                  /* don't trap marked subs */
   match_extra = match_nosubs << 1,                  /* include full capture information for repeated captures */
   match_single_line = match_extra << 1,             /* treat text as single line and ignor any \n's when matching ^ and $. */
   match_unused1 = match_single_line << 1,           /* unused */
   match_unused2 = match_unused1 << 1,               /* unused */
   match_unused3 = match_unused2 << 1,               /* unused */
   match_max = match_unused3,
    }
    
       const capture_sequence_type& captures(int i)const
   {
      if(m_is_singular)
         raise_logic_error();
      return (*this)[i].captures();
   }
#endif
    
    namespace boost{
namespace BOOST_REGEX_DETAIL_NS{
    }
    }
    
    #endif  // BOOST_REGEX_NO_FWD
    
    #ifndef BOOST_NO_WREGEX
inline bool regex_search(const wchar_t* str, 
                        wcmatch& m, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_search(str, str + wregex::traits_type::length(str), m, e, flags);
}
inline bool regex_search(const wchar_t* first, const wchar_t* last, 
                  const wregex& e, 
                  match_flag_type flags = match_default)
{
   wcmatch m;
   return regex_search(first, last, m, e, flags | regex_constants::match_any);
}
#endif
inline bool regex_search(const std::string& s, 
                        smatch& m,
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   return regex_search(s.begin(), s.end(), m, e, flags);
}
#if !defined(BOOST_NO_WREGEX)
inline bool regex_search(const std::basic_string<wchar_t>& s, 
                        wsmatch& m,
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_search(s.begin(), s.end(), m, e, flags);
}
#endif
    
    namespace boost{
    }
    
    #endif // include
    
    // Benchmark results on my dev server (20-core Intel Xeon E5-2660 v2 @ 2.20GHz)
//
// ============================================================================
// folly/test/FormatBenchmark.cpp                  relative  time/iter  iters/s
// ============================================================================
// octal_snprintf                                              79.30ns   12.61M
// octal_uintToOctal                               3452.19%     2.30ns  435.35M
// ----------------------------------------------------------------------------
// hex_snprintf                                                73.59ns   13.59M
// hex_uintToHex                                   4507.53%     1.63ns  612.49M
// ----------------------------------------------------------------------------
// intAppend_snprintf                                         191.50us    5.22K
// intAppend_to                                     552.46%    34.66us   28.85K
// intAppend_format                                 215.76%    88.76us   11.27K
// ----------------------------------------------------------------------------
// bigFormat_snprintf                                         178.03us    5.62K
// bigFormat_format                                  90.41%   196.91us    5.08K
// ----------------------------------------------------------------------------
// format_nested_strings                                      317.65us    3.15K
// format_nested_fbstrings                           99.89%   318.01us    3.14K
// format_nested_direct                             116.52%   272.62us    3.67K
// ----------------------------------------------------------------------------
// copy_short_string                                           28.33ns   35.30M
// format_short_string_unsafe                        82.51%    34.33ns   29.13M
// format_short_string_safe                          58.92%    48.08ns   20.80M
// sformat_short_string_unsafe                       73.90%    38.33ns   26.09M
// sformat_short_string_safe                         54.97%    51.53ns   19.41M
// ----------------------------------------------------------------------------
// copy_long_string                                            57.56ns   17.37M
// format_long_string_unsafe                         68.79%    83.68ns   11.95M
// format_long_string_safe                           69.44%    82.89ns   12.06M
// sformat_long_string_unsafe                        65.58%    87.77ns   11.39M
// sformat_long_string_safe                          68.14%    84.47ns   11.84M
// ============================================================================
    
    static void align4Bytes(size_t& pos) {
  if (pos % 4 != 0) {
    pos += 4 - pos % 4;
  }
}
    
    template <
    class Iterator = const char*,
    class Base = folly::Range<boost::u8_to_u32_iterator<Iterator>>>
class UTF8Range : public Base {
 public:
  /* implicit */ UTF8Range(const folly::Range<Iterator> baseRange)
      : Base(
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.begin(),
                baseRange.begin(),
                baseRange.end()),
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.end(),
                baseRange.begin(),
                baseRange.end())) {}
  /* implicit */ UTF8Range(const std::string& baseString)
      : Base(folly::Range<Iterator>(baseString)) {}
};
    
    #pragma once
    
    #include <folly/Conv.h>
#include <folly/hash/Hash.h>
    
    
    { private:
  const KeepAlive<> executor_;
};
    
      tv = to<struct timeval>(10us);
  EXPECT_EQ(0, tv.tv_sec);
  EXPECT_EQ(10, tv.tv_usec);
    
    
    {  /**
   * @brief CanFrame string including essential information about the message.
   * @return The info string.
   */
  std::string CanFrameString() const {
    std::stringstream output_stream('');
    output_stream << 'id:0x' << Byte::byte_to_hex(id)
                  << ',len:' << static_cast<int>(len) << ',data:';
    for (uint8_t i = 0; i < len; ++i) {
      output_stream << Byte::byte_to_hex(data[i]);
    }
    output_stream << ',';
    return output_stream.str();
  }
};
    
      const int32_t ret = canRead(dev_handler_, recv_frames_, frame_num, nullptr);
  // rx timeout not log
  if (ret == NTCAN_RX_TIMEOUT) {
    return ErrorCode::OK;
  }
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'receive message failed, error code: ' << ret << ', '
           << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    #include 'modules/drivers/canbus/can_client/esd/esd_can_client.h'
    
      /**
   * @brief Get the error string.
   * @param status The status to get the error string.
   */
  std::string GetErrorString(const int32_t status) override;
    
      if (ret != ErrorCode::OK) {
    AERROR << 'Open device error code: ' << ret
           << ', channel id: ' << _card_port;
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
  AERROR << 'Open device succ code: ' << ret << ', channel id: ' << _card_port;
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                 int32_t *const frame_num) override;
    
    template <typename SensorType>
void CanReceiver<SensorType>::Stop() {
  if (IsRunning()) {
    AINFO << 'Stopping can client receiver ...';
    is_running_ = false;
    if (thread_ != nullptr && thread_->joinable()) {
      thread_->join();
    }
    thread_.reset();
  } else {
    AINFO << 'Can client receiver is not running.';
  }
  AINFO << 'Can client receiver stopped [ok].';
}
    
    #include 'modules/drivers/canbus/can_comm/can_receiver.h'
    
    template <typename SensorType>
template <class T, bool need_check>
void MessageManager<SensorType>::AddRecvProtocolData() {
  recv_protocol_data_.emplace_back(new T());
  auto *dt = recv_protocol_data_.back().get();
  if (dt == nullptr) {
    return;
  }
  protocol_data_map_[T::ID] = dt;
  if (need_check) {
    check_ids_[T::ID].period = dt->GetPeriod();
    check_ids_[T::ID].real_period = 0;
    check_ids_[T::ID].last_time = 0;
    check_ids_[T::ID].error_count = 0;
  }
}
    
    #ifndef MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
#define MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
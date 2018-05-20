
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  return bit_vector != tmp_bit_vector_;
}
    
    #endif  // TENSORFLOW_USE_MPI

    
      // If we have a full slice along dimension 'd'.
  bool IsFullAt(int d) const {
    return lengths_[d] == kFullExtent && starts_[d] == 0;
  }
    
    
    {#undef REGISTER_COMPLEX
}  // namespace tensorflow

    
      ASSERT_FALSE(DebugIO::IsCopyNodeGateOpen(
      {DebugWatchAndURLSpec(kWatch1, kGrpcUrl1, true)}));
  ASSERT_TRUE(DebugIO::IsCopyNodeGateOpen(
      {DebugWatchAndURLSpec(kWatch1, kGrpcUrl1, false)}));
    
    
    {  class EuroText : public QuickTest {
  };
  
  TEST_F(EuroText, FastOCR) {
    OCRTester(TESTING_DIR '/eurotext.tif',
              TESTING_DIR '/eurotext.txt',
              TESSDATA_DIR '_fast', 'script/Latin');
  }
  
}  // namespace

    
    
    {  UnicharCompress compressed_;
  UNICHARSET unicharset_;
  int null_char_;
  // The encoding of the null_char_.
  int encoded_null_char_;
};
    
    TESS_API BOOL TESS_CALL TessBaseAPIPrintVariablesToFile(const TessBaseAPI* handle, const char* filename)
{
    FILE* fp = fopen(filename, 'w');
    if (fp != nullptr)
    {
        handle->PrintVariables(fp);
        fclose(fp);
        return TRUE;
    }
    return FALSE;
}
    
    bool TessUnlvRenderer::AddImageHandler(TessBaseAPI* api) {
  const std::unique_ptr<const char[]> unlv(api->GetUNLVText());
  if (unlv == nullptr) return false;
    }
    
    
    {}  // namespace tesseract
    
    #include 'allheaders.h'
#include 'pageres.h'
#include 'strngs.h'
#include 'tesseractclass.h'
    
    void ResultIterator::AppendSuffixMarks(STRING *text) const {
  if (!it_->word()) return;
  bool reading_direction_is_ltr =
      current_paragraph_is_ltr_ ^ in_minor_direction_;
  // scan forward to see what meta-information the word ordering algorithm
  // left us.
  // If this word is at the  *end* of a minor run, insert the other
  // direction's mark;  else if this was a complex word, insert the
  // current reading order's mark.
  GenericVectorEqEq<int> textline_order;
  CalculateTextlineOrder(current_paragraph_is_ltr_,
                         *this, &textline_order);
  int this_word_index = LTRWordIndex();
  int i = textline_order.get_index(this_word_index);
  if (i < 0) return;
    }
    
      // Calculate the remainder (partial characters) at the edges.
  // This accounts for us having classified the best version of
  // a word as [speaker?'] when it was instead [speaker.^{21}]
  // (that is we accidentally thought the 2 was attached to the period).
  int num_remainder_leading = 0, num_remainder_trailing = 0;
  if (num_leading + num_trailing < num_blobs && unlikely_threshold < 0.0) {
    int super_y_bottom =
        kBlnBaselineOffset + kBlnXHeight * superscript_min_y_bottom;
    int sub_y_top =
        kBlnBaselineOffset + kBlnXHeight * subscript_max_y_top;
    int last_word_char = num_blobs - 1 - num_trailing;
    float last_char_certainty = word->best_choice->certainty(last_word_char);
    if (word->best_choice->unichar_id(last_word_char) != 0 &&
        last_char_certainty <= unlikely_threshold) {
      ScriptPos rpos;
      YOutlierPieces(word, last_word_char, super_y_bottom, sub_y_top,
                     nullptr, nullptr, &rpos, &num_remainder_trailing);
      if (num_trailing > 0 && rpos != sp_trailing) num_remainder_trailing = 0;
      if (num_remainder_trailing > 0 &&
          last_char_certainty < trailing_certainty) {
        trailing_certainty = last_char_certainty;
      }
    }
    bool another_blob_available = (num_remainder_trailing == 0) ||
        num_leading + num_trailing + 1 < num_blobs;
    int first_char_certainty = word->best_choice->certainty(num_leading);
    if (another_blob_available &&
        word->best_choice->unichar_id(num_leading) != 0 &&
        first_char_certainty <= unlikely_threshold) {
      ScriptPos lpos;
      YOutlierPieces(word, num_leading, super_y_bottom, sub_y_top,
                     &lpos, &num_remainder_leading, nullptr, nullptr);
      if (num_leading > 0 && lpos != sp_leading) num_remainder_leading = 0;
      if (num_remainder_leading > 0 &&
          first_char_certainty < leading_certainty) {
        leading_certainty = first_char_certainty;
      }
    }
  }
    
    #include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
      grpc::testing::RunSynchronousUnaryPingPong();
    
    AuthPropertyIterator SecureAuthContext::begin() const {
  if (ctx_) {
    grpc_auth_property_iterator iter =
        grpc_auth_context_property_iterator(ctx_);
    const grpc_auth_property* property =
        grpc_auth_property_iterator_next(&iter);
    return AuthPropertyIterator(property, &iter);
  } else {
    return end();
  }
}
    
    #include <gtest/gtest.h>
    
    #include <iostream>
#include <sstream>
#include <string>
#include <vector>
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {
    {} // namespace asio
} // namespace boost
    
    // Helper class to translate buffers into the native buffer representation.
template <typename Buffer, typename Buffers>
class buffer_sequence_adapter
  : buffer_sequence_adapter_base
{
public:
  explicit buffer_sequence_adapter(const Buffers& buffer_sequence)
    : count_(0), total_buffer_size_(0)
  {
    typename Buffers::const_iterator iter = buffer_sequence.begin();
    typename Buffers::const_iterator end = buffer_sequence.end();
    for (; iter != end && count_ < max_buffers; ++iter, ++count_)
    {
      Buffer buffer(*iter);
      init_native_buffer(buffers_[count_], buffer);
      total_buffer_size_ += boost::asio::buffer_size(buffer);
    }
  }
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
        // The value associated with the context.
    Value* value_;
    
    #define BOOST_ASIO_COMPOSED_CONNECT_HANDLER_CHECK( \
    handler_type, handler, iter_type) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code, iter_type)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::two_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0), \
          static_cast<const iter_type*>(0))) == 1, \
      'ComposedConnectHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>(), \
            boost::asio::detail::lvref<const iter_type>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
    
    {  return KERN_SUCCESS;
}
    
    #pragma once
    
    TEST_F(FlagsTests, test_alias_types) {
  // Test int32 lexical casting both ways.
  EXPECT_EQ(FLAGS_test_int32_alias, 1);
  FLAGS_test_int32_alias = 2;
  EXPECT_EQ(FLAGS_test_int32, 2);
  FLAGS_test_int32 = 3;
  EXPECT_EQ(FLAGS_test_int32_alias, 3);
  EXPECT_TRUE(FLAGS_test_int32_alias > 0);
    }
    
    /// Unlike checkChildProcessStatus, this will block until process exits.
static bool getProcessExitCode(osquery::PlatformProcess& process,
                               int& exitCode) {
  if (!process.isValid()) {
    return false;
  }
    }
    
    TEST_F(StatusTests, test_ok) {
  auto s1 = Status(5, 'message');
  EXPECT_FALSE(s1.ok());
  auto s2 = Status(0, 'message');
  EXPECT_TRUE(s2.ok());
}
    
    #pragma once
    
    Status WmiResultItem::GetLong(const std::string& name, long& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
  if (hr != S_OK) {
    return Status(-1, 'Error retrieving data from WMI query.');
  }
  if (value.vt != VT_I4) {
    VariantClear(&value);
    return Status(-1, 'Invalid data type returned.');
  }
  ret = value.lVal;
  VariantClear(&value);
  return Status(0);
}
    
    #endif // LIBFUZZER_WINDOWS

    
    
    {}  // namespace fuzzer
    
      static const size_t kNumPCs = 1 << 24;
  uintptr_t PCs[kNumPCs];
    
    void PrintPC(const char *SymbolizedFMT, const char *FallbackFMT, uintptr_t PC) {
  if (EF->__sanitizer_symbolize_pc)
    Printf('%s', DescribePC(SymbolizedFMT, PC).c_str());
  else
    Printf(FallbackFMT, PC);
}
    
    size_t GetPeakRSSMb();
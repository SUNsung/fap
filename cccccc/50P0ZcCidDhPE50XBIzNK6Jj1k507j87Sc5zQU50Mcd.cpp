
        
        TEST(MovableMessageTest, MoveToArena) {
  Arena arena;
    }
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
#include <google/protobuf/testing/file.h>
    
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
    
      desired_output_for_decode = 'abcdefghIJ';
  expected = string('\x0A\x0', 2);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    
    {
    {
    {}  // namespace util
}  // namespace protobuf
}  // namespace google

    
    // Author: brianolson@google.com (Brian Olson)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Test program to verify that GzipInputStream is compatible with command line
// gunzip or java.util.zip.GzipInputStream
//
// Reads gzip stream on standard input and writes decompressed data to standard
// output.
    
        std::cerr << 'Generating ' << input_file
        << ' to ' << output_file << std::endl;
    benchmarks::BenchmarkDataset dataset;
    Message* message;
    std::string dataset_payload = ReadFile(input_file);
    GOOGLE_CHECK(dataset.ParseFromString(dataset_payload))
      << 'Can' t parse data file ' << input_file;
    
     private:
  static bool IsMessageSet(const Descriptor *descriptor) {
    if (descriptor != nullptr
        && descriptor->options().message_set_wire_format()) {
      return true;
    }
    return false;
  }
    
    
  if (mode == psModePS || mode == psModePSOrigPageSizes) {
    GooString pageLabel;
    const GBool gotLabel = m_catalog->indexToLabel(pageNum -1, &pageLabel);
    if (gotLabel) {
      // See bug13338 for why we try to avoid parentheses...
      GBool needParens;
      GooString *filteredString = filterPSLabel(&pageLabel, &needParens);
      if (needParens) {
	writePSFmt('%%Page: ({0:t}) {1:d}\n', filteredString, seqPage);
      } else {
	writePSFmt('%%Page: {0:t} {1:d}\n', filteredString, seqPage);
      }
      delete filteredString;
    } else {
      writePSFmt('%%Page: {0:d} {1:d}\n', pageNum, seqPage);
    }
    if (mode != psModePSOrigPageSizes)
      writePS('%%BeginPageSetup\n');
  }
    
    #include <config.h>
    
    void Page::display(OutputDev *out, double hDPI, double vDPI,
		   int rotate, GBool useMediaBox, GBool crop,
		   GBool printing, Catalog *catalog,
		   GBool (*abortCheckCbk)(void *data),
		   void *abortCheckCbkData,
                   GBool (*annotDisplayDecideCbk)(Annot *annot, void *user_data),
                   void *annotDisplayDecideCbkData) {
  displaySlice(out, hDPI, vDPI, rotate, useMediaBox, crop, -1, -1, -1, -1, printing, catalog,
	       abortCheckCbk, abortCheckCbkData,
               annotDisplayDecideCbk, annotDisplayDecideCbkData);
}
    
      // Get duration, the maximum length of time, in seconds,
  // that the page is displayed before the presentation automatically
  // advances to the next page
  double getDuration() { return duration; }
    
      MediaWindowParameters();
  ~MediaWindowParameters();
    
    
    {  if (!ok) {
    return gFalse;
  }
  if (authData) {
    ownerPassword = ((StandardAuthData *)authData)->ownerPassword;
    userPassword = ((StandardAuthData *)authData)->userPassword;
  } else {
    ownerPassword = NULL;
    userPassword = NULL;
  }
  if (!Decrypt::makeFileKey(encVersion, encRevision, fileKeyLength,
			    ownerKey, userKey, permFlags, fileID,
			    ownerPassword, userPassword, fileKey,
			    encryptMetadata, &ownerPasswordOk)) {
    return gFalse;
  }
  return gTrue;
}
    
            Rational& operator<<=(Rational const& rhs);
        Rational& operator>>=(Rational const& rhs);
    
        auto lastDecGrouping = m_decGrouping;
    wstring grpStr = m_resourceProvider->GetCEngineString(L'sGrouping');
    m_decGrouping = DigitGroupingStringToGroupingVector(grpStr.empty() ? DEFAULT_GRP_STR : grpStr);
    
    shared_ptr<HISTORYITEM> const& CalculatorHistory::GetHistoryItem(_In_ unsigned int uIdx)
{
    assert(uIdx >= 0 && uIdx < m_historyItems.size());
    return m_historyItems.at(uIdx);
}
    
        CalcEngine::Rational m_currentVal;                               // Currently displayed number used everywhere.
    CalcEngine::Rational m_lastVal;                                  // Number before operation (left operand).
    std::array<CalcEngine::Rational, MAXPRECDEPTH> m_parenVals;      // Holding array for parenthesis values.
    std::array<CalcEngine::Rational, MAXPRECDEPTH> m_precedenceVals; // Holding array for precedence values.
    bool m_bError;                                                   // Error flag.
    bool m_bInv;                                                     // Inverse on/off flag.
    bool m_bNoPrevEqu;                                               /* Flag for previous equals.          */
    
                virtual bool MoveCurrentToPosition(int index) = Windows::UI::Xaml::Data::ICollectionView::MoveCurrentToPosition
            {
                if (index < 0 || index >= static_cast<int>(m_source->Size))
                {
                    return false;
                }
    }
    
    #pragma once
#include 'INarratorAnnouncementHost.h'
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
    void SparsePage::Push(const SparsePage &batch) {
  auto& data_vec = data.HostVector();
  auto& offset_vec = offset.HostVector();
  const auto& batch_offset_vec = batch.offset.HostVector();
  const auto& batch_data_vec = batch.data.HostVector();
  size_t top = offset_vec.back();
  data_vec.resize(top + batch.data.Size());
  std::memcpy(dmlc::BeginPtr(data_vec) + top,
              dmlc::BeginPtr(batch_data_vec),
              sizeof(Entry) * batch.data.Size());
  size_t begin = offset.Size();
  offset_vec.resize(begin + batch.Size());
  for (size_t i = 0; i < batch.Size(); ++i) {
    offset_vec[i + begin] = top + batch_offset_vec[i + 1];
  }
}
    
    #include <utility>
#include <map>
#include <memory>
#include <string>
#include <vector>
    
      std::vector<unsigned> feature_list(nfeature);
  std::iota(feature_list.begin(), feature_list.end(), 0);
    
        std::unique_ptr<DHTTaskFactory> taskFactory;
    
    namespace aria2 {
    }
    
    #include 'common.h'
    
    namespace aria2 {
    }
    
      template <typename OutputIterator>
  void findAll(OutputIterator out, const std::string& hostname,
               uint16_t port) const
  {
    auto target = std::make_shared<CacheEntry>(hostname, port);
    auto i = entries_.find(target);
    if (i != entries_.end()) {
      (*i)->getAllGoodAddrs(out);
    }
  }
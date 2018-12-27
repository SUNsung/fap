
        
        
    {        if (specialized)
          return ProtocolConformanceRef(specialized);
      }
    
    
    {  /// Profile the substitution map storage, for use with LLVM's FoldingSet.
  static void Profile(llvm::FoldingSetNodeID &id,
                      GenericSignature *genericSig,
                      ArrayRef<Type> replacementTypes,
                      ArrayRef<ProtocolConformanceRef> conformances);
};
    
    using namespace swift;
    
    #undef VERB
#undef DIRECTIONAL_PREPOSITION
#undef PREPOSITION

    
        StringRef Line = RawText.substr(0, Pos);
    Lines.push_back(Line);
    if (!IsFirstLine) {
      size_t NonWhitespacePos = RawText.find_first_not_of(' ');
      if (NonWhitespacePos != StringRef::npos)
        WhitespaceToTrim =
            std::min(WhitespaceToTrim,
                     static_cast<unsigned>(NonWhitespacePos));
    }
    IsFirstLine = false;
    
    /// Determine whether the preposition in a split is 'vacuous', and
/// should be removed.
static bool isVacuousPreposition(StringRef beforePreposition,
                                 StringRef preposition,
                                 StringRef afterPreposition,
                                 const OmissionTypeName &paramType) {
  // Only consider 'with' or 'using' to be potentially vacuous.
  if (!camel_case::sameWordIgnoreFirstCase(preposition, 'with') &&
      !camel_case::sameWordIgnoreFirstCase(preposition, 'using'))
    return false;
    }
    
    static bool isValidUnicodeScalar(uint32_t S) {
  // Also accept the range of 0xD800 - 0xD880, which is used for non-symbol
  // ASCII characters.
  return (S < 0xD880) || (S >= 0xE000 && S <= 0x1FFFFF);
}
    
    
    {    auto newNode = factory.createNode(node->getKind());
    newNode->addChild(newContext, factory);
    for (unsigned i = 1, n = node->getNumChildren(); i != n; ++i)
      newNode->addChild(node->getChild(i), factory);
    return newNode;
  }
      
  case Demangle::Node::Kind::Extension: {
    // Strip generic arguments from the extended type.
    if (node->getNumChildren() < 2)
      return node;
    
    auto newExtended = stripGenericArgsFromContextNode(node->getChild(1),
                                                       factory);
    if (newExtended == node->getChild(1)) return node;
    
    auto newNode = factory.createNode(Node::Kind::Extension);
    newNode->addChild(node->getChild(0), factory);
    newNode->addChild(newExtended, factory);
    if (node->getNumChildren() == 3)
      newNode->addChild(node->getChild(2), factory);
    return newNode;
  }
    
        caffe::TBlob2CaffeBlob<xpu, Dtype>(caffe::Data,
                                      bot_.begin(),
                                      in_data.begin(),
                                      param_.num_data);
    caffe::TBlob2CaffeBlob<xpu, Dtype>(caffe::Data,
                                      top_.begin(),
                                      out_data.begin(),
                                      param_.num_out);
    CaffeOpSetup();
    if (ctx.is_train)
      MXCAFFELAYER(caffeOp_, Dtype)->SetPhase(::caffe::TRAIN);
    else
      MXCAFFELAYER(caffeOp_, Dtype)->SetPhase(::caffe::TEST);
    caffeOp_->Forward(bot_, top_);
    
    /*!
 * Copyright (c) 2015 by Contributors
 */
#ifndef MXNET_ENGINE_THREAD_POOL_H_
#define MXNET_ENGINE_THREAD_POOL_H_
    
    #if MXNET_USE_OPENCV
#include <opencv2/opencv.hpp>
#include <vector>  // NOLINT(*)
#include <utility> // NOLINT(*)
#include <string> // NOLINT(*)
    
    TEST_F(CarverTests, test_compression) {
  auto s = osquery::compress(getTestConfigDirectory() / 'test.config',
                             fs::temp_directory_path() / fs::path('test.zst'));
  EXPECT_TRUE(s.ok());
}
    
      /// A set of performance stats for each query in the schedule.
  std::map<std::string, QueryPerformance> performance_;
    
    
    {  // If the splayed interval was not restored from the database.
  auto splay = splayValue(interval, FLAGS_schedule_splay_percent);
  content = std::to_string(interval) + ':' + std::to_string(splay);
  setDatabaseValue(kPersistentSettings, 'interval.' + name, content);
  return splay;
}
    
    Status FeatureVectorsConfigParserPlugin::update(const std::string& source,
                                                const ParserConfig& config) {
  auto fv = config.find(kFeatureVectorsRootKey);
  if (fv == config.end()) {
    return Status();
  }
    }
    
      Status update(const std::string& source, const ParserConfig& config) override;
    
        if (value.empty() || name.empty()) {
      continue;
    }
    
    BENCHMARK_PARAM(BENCHFUN(insertFront), 16)
BENCHMARK_PARAM(BENCHFUN(insertFront), 128)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024)
BENCHMARK_PARAM(BENCHFUN(insertFront), 10240)
BENCHMARK_PARAM(BENCHFUN(insertFront), 102400)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024000)
    
        KeepAlive(ExecutorT* executor, bool dummy)
        : executorAndDummyFlag_(
              reinterpret_cast<intptr_t>(executor) | (dummy ? kDummyFlag : 0)) {
      assert(executor);
      assert(
          (reinterpret_cast<intptr_t>(executor) & kExecutorMask) ==
          reinterpret_cast<intptr_t>(executor));
    }
    
      template <class T>
  class SecureRNG {
   public:
    using result_type = typename std::enable_if<
        std::is_integral<T>::value && !std::is_same<T, bool>::value,
        T>::type;
    }
    
    #include <string>
    
    enum class CompressionCounterKey {
  BYTES_BEFORE_COMPRESSION = 0,
  BYTES_AFTER_COMPRESSION = 1,
  BYTES_BEFORE_DECOMPRESSION = 2,
  BYTES_AFTER_DECOMPRESSION = 3,
  COMPRESSIONS = 4,
  DECOMPRESSIONS = 5,
  COMPRESSION_MILLISECONDS = 6,
  DECOMPRESSION_MILLISECONDS = 7,
};
    
        if (old.get()) {
      old_ptr = get_shared_ptr(old);
      release_external(old);
    }
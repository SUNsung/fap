
        
          PendingRequestMap pending_requests_;
  int previous_request_id_;
    
    class HttpProtocolHandler : public net::URLRequestJobFactory::ProtocolHandler {
 public:
  explicit HttpProtocolHandler(const std::string&);
  virtual ~HttpProtocolHandler();
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(URLRequestBufferJob);
};
    
    #ifndef ATOM_BROWSER_NET_URL_REQUEST_STRING_JOB_H_
#define ATOM_BROWSER_NET_URL_REQUEST_STRING_JOB_H_
    
      if (!predicate_.Run(process))
    return;
    
    #endif  // ATOM_BROWSER_UI_DRAG_UTIL_H_

    
     private:
  AtomMenuModel* menu_model_;
    
      /// When evaluating an expression in the context of an existing source file,
  /// we may want to prefer declarations from that source file.
  /// The DebuggerClient can return a private-discriminator to tell lookup to
  /// prefer these certain decls.
  virtual Identifier getPreferredPrivateDiscriminator() = 0;
    
        // Hide literals other than the ones that are also keywords if they don't
    // match the expected types.
    if (completion->getKind() == Completion::Literal &&
        completionHasExpectedTypes &&
        completion->getExpectedTypeRelation() < Completion::Convertible &&
        completion->getLiteralKind() !=
            CodeCompletionLiteralKind::BooleanLiteral &&
        completion->getLiteralKind() != CodeCompletionLiteralKind::NilLiteral)
      continue;
    
    #endif

    
      ConvertUTF8toUTF32(&SourceNext, SourceStart + S.size(), &TargetStart, C + 1,
                     llvm::lenientConversion);
  if (TargetStart == C) {
    // The source string contains an ill-formed subsequence at the end.
    return S;
  }
    
    SILFunction *SILDebugScope::getParentFunction() const {
  if (InlinedCallSite)
    return InlinedCallSite->getParentFunction();
  if (auto *ParentScope = Parent.dyn_cast<const SILDebugScope *>())
    return ParentScope->getParentFunction();
  return Parent.get<SILFunction *>();
}

    
    #include 'swift/Syntax/Rewriter.h'
    
    #ifndef SWIFT_AST_SUBSTITUTION_LIST_H
#define SWIFT_AST_SUBSTITUTION_LIST_H
    
    
    {  /// Return a hash code of any components from these options that should
  /// contribute to a Swift Bridging PCH hash.
  llvm::hash_code getPCHHashComponents() const {
    // Nothing here that contributes anything significant when emitting the PCH.
    return llvm::hash_value(0);
  }
};
    
      virtual void handleDiagnostic(SourceManager &SM, SourceLoc Loc,
                                DiagnosticKind Kind,
                                StringRef FormatString,
                                ArrayRef<DiagnosticArgument> FormatArgs,
                                const DiagnosticInfo &Info) override;
    
    bool Substitution::isCanonical() const {
  if (!getReplacement()->isCanonical())
    return false;
  for (auto conf : getConformances()) {
    if (!conf.isCanonical())
      return false;
  }
  return true;
}

    
    namespace tesseract  {
    }
    
      // Delete all Added points.
  void Clear();
    
      // ValidFirstLine() and ValidBodyLine() take arguments describing a text line
  // in a block of text which we are trying to model:
  //   lmargin, lindent:  these add up to the distance from the leftmost ink
  //                      in the text line to the surrounding text block's left
  //                      edge.
  //   rmargin, rindent:  these add up to the distance from the rightmost ink
  //                      in the text line to the surrounding text block's right
  //                      edge.
  // The caller determines the division between 'margin' and 'indent', which
  // only actually affect whether we think the line may be centered.
  //
  // If the amount of whitespace matches the amount of whitespace expected on
  // the relevant side of the line (within tolerance_) we say it matches.
    
    namespace tesseract {
    }
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'host.h'
#include <stdio.h>
#include <math.h>
    
    // Compute the distance between the given feature vector and the last
// Set feature vector.
double IntFeatureDist::DebugFeatureDistance(
    const GenericVector<int>& features) const {
  int num_test_features = features.size();
  double denominator = total_feature_weight_ + num_test_features;
  double misses = denominator;
  for (int i = 0; i < num_test_features; ++i) {
    int index = features[i];
    double weight = 1.0;
    INT_FEATURE_STRUCT f = feature_map_->InverseMapFeature(features[i]);
    tprintf('Testing feature weight %g:', weight);
    f.print();
    if (features_[index]) {
      // A perfect match.
      misses -= 2.0 * weight;
      tprintf('Perfect hit\n');
    } else if (features_delta_one_[index]) {
      misses -= 1.5 * weight;
      tprintf('-1 hit\n');
    } else if (features_delta_two_[index]) {
      // A near miss.
      misses -= 1.0 * weight;
      tprintf('-2 hit\n');
    } else {
      tprintf('Total miss\n');
    }
  }
  tprintf('Features present:');
  for (int i = 0; i < size_; ++i) {
    if (features_[i]) {
      INT_FEATURE_STRUCT f = feature_map_->InverseMapFeature(i);
      f.print();
    }
  }
  tprintf('\nMinus one features:');
  for (int i = 0; i < size_; ++i) {
    if (features_delta_one_[i]) {
      INT_FEATURE_STRUCT f = feature_map_->InverseMapFeature(i);
      f.print();
    }
  }
  tprintf('\nMinus two features:');
  for (int i = 0; i < size_; ++i) {
    if (features_delta_two_[i]) {
      INT_FEATURE_STRUCT f = feature_map_->InverseMapFeature(i);
      f.print();
    }
  }
  tprintf('\n');
  return misses / denominator;
}
    
    // Apply the supplied feature_space/feature_map transform to all samples
// accessed by this iterator.
void SampleIterator::MapSampleFeatures(const IntFeatureMap& feature_map) {
  for (Begin(); !AtEnd(); Next()) {
    TrainingSample* sample = MutableSample();
    sample->MapFeatures(feature_map);
  }
}
    
    bool DeterministicSchedule::tryWait(sem_t* sem) {
  beforeSharedAccess();
  int rv = sem_trywait(sem);
  int e = rv == 0 ? 0 : errno;
  FOLLY_TEST_DSCHED_VLOG('sem_trywait(' << sem << ') = ' << rv
                                        << ' errno=' << e);
  afterSharedAccess();
  if (rv == 0) {
    return true;
  } else {
    assert(e == EAGAIN);
    return false;
  }
}
    
    template <>
Getcpu::Func AccessSpreader<test::DeterministicAtomic>::pickGetcpuFunc();
    
    template <template <typename> class Atom>
void run_basic_tests() {
  Futex<Atom> f(0);
    }
    
      void init() {
    auto ret = new Integer(this);
    cs_.reset(ret);
    int_cache_ = ret;
  }
    
    Through linear inheritance, Poly<Mine> ends up with the public member functions
of both interfaces, Mine and Yours.
    
    TEST(TestDynamicParser, OnErrorThrowError) {
  auto d = dynamic::array(dynamic::object('int', 'fail'));
  DynamicParser p(DynamicParser::OnError::THROW, &d);
  try {
    // Force the exception to bubble up through a couple levels of nesting.
    p.required(0, [&]() { p.optional('int', [&](int64_t) {}); });
    FAIL() << 'Should have thrown';
  } catch (const DynamicParserParseError& ex) {
    auto error = ex.error();
    const auto& message =
      error.at('nested').at('0').at('nested').at('int').at('error');
    EXPECT_PCRE_MATCH('.*Invalid leading.*', message.getString());
    EXPECT_PCRE_MATCH(
      'DynamicParserParseError: .*Invalid leading.*', ex.what()
    );
    EXPECT_EQ(dynamic(dynamic::object
      ('nested', dynamic::object
        ('0', dynamic::object
          ('nested', dynamic::object
            ('int', dynamic::object
              ('error', message)('value', 'fail')))))), error);
    EXPECT_THROW(p.releaseErrors(), DynamicParserLogicError)
      << 'THROW releases the first error eagerly, and throws';
  }
}
    
      Subprocess proc(allArgs, options);
  auto p = proc.communicate();
  EXPECT_EQ(expectedExitCode, proc.wait().exitStatus());
    
    /*
 * insertInternal --
 *
 *   Returns false on failure due to key collision or full.
 *   Also sets ret.index to the index of the key.  If the map is full, sets
 *   ret.index = capacity_.  Also sets ret.second to cell value, thus if insert
 *   successful this will be what we just inserted, if there is a key collision
 *   this will be the previously inserted value, and if the map is full it is
 *   default.
 */
template <
    class KeyT,
    class ValueT,
    class HashFcn,
    class EqualFcn,
    class Allocator,
    class ProbeFcn,
    class KeyConvertFcn>
template <
    typename LookupKeyT,
    typename LookupHashFcn,
    typename LookupEqualFcn,
    typename LookupKeyToKeyFcn,
    typename... ArgTs>
typename AtomicHashArray<KeyT, ValueT, HashFcn, EqualFcn,
                         Allocator, ProbeFcn, KeyConvertFcn>::SimpleRetT
AtomicHashArray<KeyT, ValueT, HashFcn, EqualFcn,
                Allocator, ProbeFcn, KeyConvertFcn>::
insertInternal(LookupKeyT key_in, ArgTs&&... vCtorArgs) {
  const short NO_NEW_INSERTS = 1;
  const short NO_PENDING_INSERTS = 2;
  checkLegalKeyIfKey<LookupKeyT>(key_in);
    }
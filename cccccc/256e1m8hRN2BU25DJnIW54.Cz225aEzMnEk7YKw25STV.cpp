
        
        public:
  /// Form storage for the given generic signature and its replacement
  /// types and conformances.
  static Storage *get(GenericSignature *genericSig,
                      ArrayRef<Type> replacementTypes,
                      ArrayRef<ProtocolConformanceRef> conformances);
    
    
    {  return Begin + oldSize;
}  

    
    
    {    RawText = RawText.drop_front(Pos);
    unsigned NewlineBytes = measureNewline(RawText);
    RawText = RawText.drop_front(NewlineBytes);
  }
    
      if (camel_case::getFirstWord(baseName) == 'set') {
    StringRef newBaseName = ::omitNeedlessWords(
                              baseName,
                              contextType,
                              NameRole::Property,
                              allPropertyNames,
                              scratch);
    if (newBaseName != baseName) {
      baseName = newBaseName;
      anyChanges = true;
    }
  }
    
    from GYBUnicodeDataUtils import GraphemeClusterBreakPropertyTable, get_extended_grapheme_cluster_rules_matrix
    
    
    
    // Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
// https://developers.google.com/protocol-buffers/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
    float SafeDoubleToFloat(double value) {
  if (value > std::numeric_limits<float>::max()) {
    return std::numeric_limits<float>::infinity();
  } else if (value < -std::numeric_limits<float>::max()) {
    return -std::numeric_limits<float>::infinity();
  } else {
    return static_cast<float>(value);
  }
}
    
      // Loop through the string copying characters to 'output' and
  // interpreting escape sequences.  Note that any invalid escape
  // sequences or other errors were already reported while tokenizing.
  // In this case we do not need to produce valid results.
  for (const char* ptr = text.c_str() + 1; *ptr != '\0'; ptr++) {
    if (*ptr == '\\' && ptr[1] != '\0') {
      // An escape sequence.
      ++ptr;
    }
    }
    
                  {
            'prev\n'
                '// trailing comment\n'
                '// line 2\n'
                '\n'
                'next',
    }
    
    <summary> <b>Example</b> </summary>
    
    OPERATOR_SCHEMA(GatherRangesToDense)
    .NumInputs(2, 3)
    .NumOutputs(1, INT_MAX)
    .SetDoc(R'DOC(
Given DATA tensor of rank 1, and RANGES tensor of rank 3, gather values
corresponding to each range into a separate output tensor. If the optional input
KEY tensor is also given, the output will be sorted by KEY for each example.
    
              const TensorShape& X = in[0];
          int N = 0, C = 0, H = 0, W = 0;
          switch (order) {
            case StorageOrder::NCHW:
              N = X.dims(0);
              C = X.dims(1);
              H = X.dims(2);
              W = X.dims(3);
              break;
            case StorageOrder::NHWC:
              N = X.dims(0);
              H = X.dims(1);
              W = X.dims(2);
              C = X.dims(3);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
      // Gets the text streamed to this object so far as an std::string.
  // Each '\0' character in the buffer is replaced with '\\0'.
  //
  // INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
  std::string GetString() const;
    
    inline void PrintTo(const ::std::tr1::tuple<>& t, ::std::ostream* os) {
  PrintTupleTo(t, os);
}
    
      // C'tor.  TestPartResult does NOT have a default constructor.
  // Always use this constructor (with parameters) to create a
  // TestPartResult object.
  TestPartResult(Type a_type,
                 const char* a_file_name,
                 int a_line_number,
                 const char* a_message)
      : type_(a_type),
        file_name_(a_file_name == NULL ? '' : a_file_name),
        line_number_(a_line_number),
        summary_(ExtractSummary(a_message)),
        message_(a_message) {
  }
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_LINKED_PTR_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_LINKED_PTR_H_
    
    #include <stdio.h>
#include <stdlib.h>
    
    // In this example, we test the MyString class (a simple string).
    
        private:
        PackedValue(const NDShape& sampleShape, const std::vector<Axis>& sampleDynamicAxes, const NDArrayViewPtr& packedData, const std::shared_ptr<Microsoft::MSR::CNTK::MBLayout>& packedDataLayout, bool isReadOnly)
            : Value(nullptr), m_isPacked(true), m_sampleShape(sampleShape), m_sampleDynamicAxes(sampleDynamicAxes), m_packedData(packedData), m_packedDataLayout(packedDataLayout), m_isReadOnly(isReadOnly)
        {
            // Determine unpacked shape
            m_unpackedShape = GetUnpackedShape(sampleShape, sampleDynamicAxes, packedDataLayout);
        }
    
        // return the randomized feature bounds for a time range
    std::pair<size_t, size_t> Bounds(size_t ts, size_t te) const
    {
        size_t tbegin = max(ts, randomizationrange / 2) - randomizationrange / 2;
        size_t tend = min(te + randomizationrange / 2, map.size());
        return std::make_pair<size_t, size_t>(std::move(tbegin), move(tend));
    }
    
    class CloneFunctionConfigLambda : public ConfigLambda
{
    // how we treat the parameters in the clone
    enum class ParameterTreatment
    {
        learnable, // parameters are copied and kept trainable
        constant,  // parameters are copied and made immutable (e.g. for use of this as a fixed feature extractor)
        shared     // parameters are shared with where they came from (e.g. for parallel identical paths through a network)
    };
public:
    // -----------------------------------------------------------------------
    // construction
    // -----------------------------------------------------------------------
    }
    
    
    {        // resize the temporaries to their proper size
        size_t cols = Input(0)->Value().GetNumCols();
        m_maxIndexes0->Resize(1, cols);
        m_maxIndexes1->Resize(1, cols);
        m_maxValues->Resize(1, cols);
    }
    
    public:
    EnvironmentInputNode(DEVICEID_TYPE deviceId, const wstring& name, const wstring& propertyName = L'') :
        Base(deviceId, name), m_propertyName(propertyName)
    {
    }
    EnvironmentInputNode(const ScriptableObjects::IConfigRecordPtr configp)
        : EnvironmentInputNode(configp->Get(L'deviceId'), L'<placeholder>', configp->Get(L'propertyName'))
    {
    }
    
        /**
     * Implements {@link Transliterator#handleTransliterate}.
     * @param text          the buffer holding transliterated and
     *                      untransliterated text
     * @param offset        the start and limit of the text, the position
     *                      of the cursor, and the start and limit of transliteration.
     * @param incremental   if true, assume more text may be coming after
     *                      pos.contextLimit. Otherwise, assume the text is complete.
     */
    virtual void handleTransliterate(Replaceable& text, UTransPosition& offset,
                                     UBool isIncremental) const;
    
    
//--------------------------------------------------------------------------
//
//   Copy Constructor        Note:  This is a rather inefficient implementation,
//                                  but it probably doesn't matter.
//
//--------------------------------------------------------------------------
RegexPattern::RegexPattern(const RegexPattern &other) :  UObject(other) {
    init();
    *this = other;
}
    
    int32_t
RuleBasedCollator::internalNextSortKeyPart(UCharIterator *iter, uint32_t state[2],
                                           uint8_t *dest, int32_t count, UErrorCode &errorCode) const {
    if(U_FAILURE(errorCode)) { return 0; }
    if(iter == NULL || state == NULL || count < 0 || (count > 0 && dest == NULL)) {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return 0;
    }
    if(count == 0) { return 0; }
    }
    
    UBool ScriptSet::test(UScriptCode script, UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return FALSE;
    }
    if (script < 0 || script >= (int32_t)sizeof(bits) * 8) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return FALSE;
    }
    uint32_t index = script / 32;
    uint32_t bit   = 1 << (script & 31);
    return ((bits[index] & bit) != 0);
}
    
    SelectFormat&
SelectFormat::operator=(const SelectFormat& other) {
    if (this != &other) {
        msgPattern = other.msgPattern;
    }
    return *this;
}
    
    U_NAMESPACE_END
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
#include 'unicode/dtfmtsym.h'
    
    //----------------------------------------------------------------------
    
    #endif // #if !UCONFIG_NO_FORMATTING

    
    int32_t
CollationKey::hashCode() const
{
    // (Cribbed from UnicodeString)
    // We cache the hashCode; when it becomes invalid, due to any change to the
    // string, we note this by setting it to kInvalidHashCode. [LIU]
    }
    
    StringMatcher::StringMatcher(const UnicodeString& theString,
                             int32_t start,
                             int32_t limit,
                             int32_t segmentNum,
                             const TransliterationRuleData& theData) :
    data(&theData),
    segmentNumber(segmentNum),
    matchStart(-1),
    matchLimit(-1)
{
    theString.extractBetween(start, limit, pattern);
}
    
    #if !UCONFIG_NO_TRANSLITERATION
    
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
    Elem(const size_t* begin,
         const size_t* end,
         int node_id)
        : begin(begin), end(end), node_id(node_id) {}
    }
    }
    
    namespace xgboost {
/*!
 * \brief interface of gradient boosting model.
 */
class GradientBooster {
 public:
  /*! \brief virtual destructor */
  virtual ~GradientBooster() = default;
  /*!
   * \brief set configuration from pair iterators.
   * \param begin The beginning iterator.
   * \param end The end iterator.
   * \tparam PairIter iterator<std::pair<std::string, std::string> >
   */
  template<typename PairIter>
  inline void Configure(PairIter begin, PairIter end);
  /*!
   * \brief Set the configuration of gradient boosting.
   *  User must call configure once before InitModel and Training.
   *
   * \param cfg configurations on both training and model parameters.
   */
  virtual void Configure(const std::vector<std::pair<std::string, std::string> >& cfg) = 0;
  /*!
   * \brief load model from stream
   * \param fi input stream.
   */
  virtual void Load(dmlc::Stream* fi) = 0;
  /*!
   * \brief save model to stream.
   * \param fo output stream
   */
  virtual void Save(dmlc::Stream* fo) const = 0;
  /*!
   * \brief whether the model allow lazy checkpoint
   * return true if model is only updated in DoBoost
   * after all Allreduce calls
   */
  virtual bool AllowLazyCheckPoint() const {
    return false;
  }
  /*!
   * \brief perform update to the model(boosting)
   * \param p_fmat feature matrix that provide access to features
   * \param in_gpair address of the gradient pair statistics of the data
   * \param obj The objective function, optional, can be nullptr when use customized version
   * the booster may change content of gpair
   */
  virtual void DoBoost(DMatrix* p_fmat,
                       HostDeviceVector<GradientPair>* in_gpair,
                       ObjFunction* obj = nullptr) = 0;
    }
    }
    
    
    {  /*!
   * \brief transform prediction values, this is only called when Eval is called,
   *  usually it redirect to PredTransform
   * \param io_preds prediction values, saves to this vector as well
   */
  virtual void EvalTransform(HostDeviceVector<bst_float> *io_preds) {
    this->PredTransform(io_preds);
  }
  /*!
   * \brief transform probability value back to margin
   * this is used to transform user-set base_score back to margin
   * used by gradient boosting
   * \return transformed value
   */
  virtual bst_float ProbToMargin(bst_float base_score) const {
    return base_score;
  }
  /*!
   * \brief Create an objective function according to name.
   * \param name Name of the objective.
   */
  static ObjFunction* Create(const std::string& name);
};
    
    DMLC_REGISTER_PARAMETER(MyLogisticParam);
    
      std::vector<std::shared_ptr<DHTNode>> nodes_;
    
    #include 'common.h'
    
    namespace aria2 {
    }
    
    DHTTaskFactoryImpl::DHTTaskFactoryImpl()
    : routingTable_(nullptr),
      dispatcher_(nullptr),
      factory_(nullptr),
      taskQueue_(nullptr),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
      virtual void addPeriodicTask2(const std::shared_ptr<DHTTask>& task) = 0;
    
    namespace {
const size_t NUM_CONCURRENT_TASK = 15;
} // namespace
    
        CacheEntry(const std::string& hostname, uint16_t port);
    CacheEntry(const CacheEntry& c);
    ~CacheEntry();
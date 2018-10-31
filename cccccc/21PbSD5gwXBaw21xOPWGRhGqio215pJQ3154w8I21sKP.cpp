
        
        
    {    buf = buf.substr(info.bytes);
  }
    
    
    {  for (auto Entry : DCache.Entries) {
    DCache.CBs.keyDestroyCB(Entry.first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry.second, nullptr);
  }
  DCache.Entries.clear();
}
    
      if (UnsupportedOS || UnsupportedArch)
    return { UnsupportedOS, UnsupportedArch };
    
        // Special case: if the word in the name ends in 's', and we have
    // a collection element type, see if this is a plural.
    if (!typeName.CollectionElement.empty() && nameWord.size() > 2 &&
        nameWord.back() == 's' && role != NameRole::BaseNameSelf) {
      // Check <element name>s.
      auto shortenedNameWord
        = name.substr(0, nameWordRevIter.base().getPosition()-1);
      auto newShortenedNameWord
        = omitNeedlessWords(shortenedNameWord, typeName.CollectionElement,
                            NameRole::Partial, allPropertyNames, scratch);
      if (shortenedNameWord == newShortenedNameWord &&
          shortenedNameWord.back() == 'e') {
        (void)shortenedNameWord.drop_back();
        newShortenedNameWord =
          omitNeedlessWords(shortenedNameWord, typeName.CollectionElement,
                            NameRole::Partial, allPropertyNames, scratch);
      }
    }
    
    
    {    return name;
  }
    
    
    {        if (uniqueParameters.size() != parameters.size())
            InvalidArgument('Learner's parameters list must not contain duplicates.');
    }
    
        protected:
    
    namespace CNTK
{
    static Matrix<char>* AllocateMatrix(const NDShape& viewShape, const DeviceDescriptor& device)
    {
        auto matrixDims = GetMatrixDimensions(viewShape);
        return new Matrix<char>(matrixDims.first, matrixDims.second, AsCNTKImplDeviceId(device));
    }
    }
    
    namespace
{
    const std::wstring versionPropertyName = L'Version';
    const std::wstring learnersPropertyName = L'Learners';
    const std::wstring externalStatePropertyName = L'ExternalState';
    const std::wstring distributedStatePropertyName = L'DistributedState';
    }
    
            VariableFields(const NDShape& shape, VariableKind varType, ::CNTK::DataType type, const std::weak_ptr<Function>& ownerFunction, const NDArrayViewPtr& value, bool needsGradient, const std::vector<Axis>& dynamicAxes, bool isSparse, const std::wstring& name, const std::wstring& uid)
            : m_shape(shape), m_varKind(varType), m_dataType(type), m_ownerFunction(ownerFunction), m_value(value), m_needsGradient(needsGradient), m_dynamicAxes(dynamicAxes), m_isSparse(isSparse), m_name(name), m_uid(uid), m_valueTimeStamp(0)
        {
            if (value && (type != value->GetDataType()))
                InvalidArgument('The DataType of the Parameter/Constant Variable '%S' does not match the DataType of the associated Value', AsString().c_str());
    }
    
    
    {/*!
 * \brief define compatible keywords in g++
 *  Used to support g++-4.6 and g++4.7
 */
#if DMLC_USE_CXX11 && defined(__GNUC__) && !defined(__clang_version__)
#if __GNUC__ == 4 && __GNUC_MINOR__ < 8
#define override
#define final
#endif
#endif
}  // namespace xgboost
#endif  // XGBOOST_BASE_H_

    
    
    {#define XGBOOST_REGISTER_PREDICTOR(UniqueId, Name)      \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::PredictorReg& \
      __make_##PredictorReg##_##UniqueId##__ =          \
          ::dmlc::Registry<::xgboost::PredictorReg>::Get()->__REGISTER__(Name)
}  // namespace xgboost

    
    /*!
 * \brief an iterator that iterates over a configure file and gets the configures
 */
class ConfigIterator: public ConfigStreamReader {
 public:
  /*!
   * \brief constructor
   * \param fname name of configure file
   */
  explicit ConfigIterator(const char *fname) : ConfigStreamReader(fi_) {
    fi_.open(fname);
    if (fi_.fail()) {
      LOG(FATAL) << 'cannot open file ' << fname;
    }
    ConfigReaderBase::Init();
  }
  /*! \brief destructor */
  ~ConfigIterator() {
    fi_.close();
  }
    }
    
        const size_t* begin = dmlc::BeginPtr(row_indices_);
    const size_t* end = dmlc::BeginPtr(row_indices_) + row_indices_.size();
    elem_of_each_node_.emplace_back(Elem(begin, end, 0));
  }
  // split rowset into two
  inline void AddSplit(unsigned node_id,
                       const std::vector<Split>& row_split_tloc,
                       unsigned left_node_id,
                       unsigned right_node_id) {
    const Elem e = elem_of_each_node_[node_id];
    const auto nthread = static_cast<bst_omp_uint>(row_split_tloc.size());
    CHECK(e.begin != nullptr);
    size_t* all_begin = dmlc::BeginPtr(row_indices_);
    size_t* begin = all_begin + (e.begin - all_begin);
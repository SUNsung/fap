
        
        // A small event handler class to process incoming events to
// this window.
class PGEventHandler : public SVEventHandler {
  public:
   PGEventHandler(tesseract::Tesseract* tess) : tess_(tess) {
   }
   void Notify(const SVEvent* sve);
  private:
    tesseract::Tesseract* tess_;
};
    
      // Backwards compatible fit returning a gradient and constant.
  // Deprecated. Prefer Fit(ICOORD*, ICOORD*) where possible, but use this
  // function in preference to the LMS class.
  double Fit(float* m, float* c);
    
    // Transforms the given coords all the way back to source image space using
// the full transformation sequence defined by this and its predecessors
// recursively, shallowest first, and finally any block re_rotation.
// If last_denorm is not NULL, then the last transformation used will
// be last_denorm, and the block re_rotation will never be executed.
void DENORM::DenormTransform(const DENORM* last_denorm, const TPOINT& pt,
                             TPOINT* original) const {
  FCOORD src_pt(pt.x, pt.y);
  FCOORD float_result;
  DenormTransform(last_denorm, src_pt, &float_result);
  original->x = IntCastRounded(float_result.x());
  original->y = IntCastRounded(float_result.y());
}
void DENORM::DenormTransform(const DENORM* last_denorm, const FCOORD& pt,
                             FCOORD* original) const {
  LocalDenormTransform(pt, original);
  if (last_denorm != this) {
    if (predecessor_ != NULL) {
      predecessor_->DenormTransform(last_denorm, *original, original);
    } else if (block_ != NULL) {
      original->rotate(block_->re_rotation());
    }
  }
}
    
      int operator==(const KDPtrPair<Key, Data>& other) const {
    return key_ == other.key_;
  }
    
      // Accumulates counts for junk. Counts only whether the junk was correctly
  // rejected or not.
  bool AccumulateJunk(bool debug, const GenericVector<UnicharRating>& results,
                      TrainingSample* sample);
    
    MFEDGEPT *NewEdgePoint();
    
    TrainingSample* SampleIterator::MutableSample() const {
  if (shape_table_ != NULL) {
    const UnicharAndFonts* shape_entry = GetShapeEntry();
    int char_id = shape_entry->unichar_id;
    int font_id = shape_entry->font_ids[shape_font_index_];
    return sample_set_->MutableSample(font_id, char_id, sample_index_);
  } else {
    return sample_set_->mutable_sample(shape_index_);
  }
}
    
        // create a section from config parameters
    Section* CreateSection(const ConfigParameters& config, Section* parentSection, size_t p_records, size_t p_windowSize = 0);
    Section* CreateSection(const ScriptableObjects::IConfigRecord& config, Section* parentSection, size_t p_records, size_t p_windowSize = 0);
    
    void GranularGPUDataTransferer::WaitForSyncPointOnAssignStreamAsync()
{
    PrepareDevice(m_deviceId);
    cudaStreamWaitEvent(GetAssignStream(), m_syncEvent, 0 /*flags 'must be 0'*/) || 'cudaStreamWaitEvent failed';
}
    
            // inject additional items into the source code
        // We support two ways of specifying the network in BrainScript:
        //  - BrainScriptNetworkBuilder = ( any BS expression that evaluates to a ComputationNetwork )
        //  - BrainScriptNetworkBuilder = { constructor parameters for a ComputationNetwork }
        // For back-compat, [ ] is allowed and means the same as { }
        if (sourceOfNetwork[0] == '{' || sourceOfNetwork[0] == '[') // if { } form then we turn it into ComputationNetwork by constructing a ComputationNetwork from it
            sourceOfNetwork = L'new ComputationNetwork ' + sourceOfNetwork;
        let sourceOfBS = msra::strfun::wstrprintf(L'include \'cntk.core.bs\'\n' // include our core lib. Note: Using lowercase here to match the Linux name of the CNTK exe.
            L'deviceId = %d\n'            // deviceId as passed in
            L'traceLevel = %d\n'
            L'precision = '%ls'\n'        // 'float' or 'double'
            L'network = %ls',             // source code of expression that evaluates to a ComputationNetwork
            (int)deviceId, traceLevel, ElemTypeName<ElemType>(), sourceOfNetwork.c_str());
        let expr = BS::ParseConfigDictFromString(sourceOfBS, L'BrainScriptNetworkBuilder', move(includePaths));
    }
    
    template <typename ElemType>
void DoConvertFromDbn(const ConfigParameters& config)
{
    wstring modelPath = config(L'modelPath');
    wstring dbnModelPath = config(L'dbnModelPath');
    }
    
    // EqualInsensitive - check to see if two nodes are equal up to the length of the first string (must be at least half as long as actual node name)
// string1 - [in,out] string to compare, if comparision is equal insensitive but not sensitive, will replace with sensitive version
// string2 - second string to compare
// alternate - alternate naming of the string
// return - true if strings are equal insensitive and modifies string1 to sensitive version if different
bool EqualInsensitive(std::string& string1, const char* string2, const char* alternate = NULL);
    
    // Data Writer class
// interface for clients of the Data Writer
// mirrors the IDataWriter interface, except the Init method is private (use the constructor)
class DataWriter : public IDataWriter, protected Plugin
{
    IDataWriter* m_dataWriter; // writer
    }
    
    // not in the cache yet: create it (or not if no such member)
void /*CustomConfigRecord::*/ ComputationNodeBase::LazyCreateConfigMember(const wstring& id) const /*override*/
{
    if (id == L'name') // node name
    {
        InsertConfigMember(id, ConfigValuePtr(make_shared<String>(NodeName()), [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'operation') // type ('operation' parameter to ComputationNode BS constructor)
    {
        InsertConfigMember(id, ConfigValuePtr(make_shared<String>(OperationName()), [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'dim') // scalar dimension (#elements) per sample
    {
        // Note: When freshly creating models, dimensions may not have been inferred yet.
        size_t dim = GetSampleLayout().GetNumElements();
        if (dim == 0)
            InvalidArgument('%ls.dim: The node's dimensions are not known yet.', NodeName().c_str());
        InsertConfigMember(id, MakePrimitiveConfigValuePtr((double) dim, [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'dims') // tensor dimension vector
    {
        NOT_IMPLEMENTED;
    }
    // TODO: Think through what tags mean. Do we allow user-named tags? Is it a set or a single string? If set, then how to compare?
    //else if (id == L'tag')
    //{
    //}
    else if (id == L'inputs' || id == OperationName() + L'Args') // e.g. node.PlusArg[0] = alternative for node.inputs[0] that shows a user that this is a Plus node
    {
        std::vector<ConfigValuePtr> inputsAsValues;
        for (let& input : GetInputs())
            inputsAsValues.push_back(ConfigValuePtr(input, [](const std::wstring &) { LogicError('should not get here'); }, L''));
        let& arr = make_shared<ScriptableObjects::ConfigArray>(0, move(inputsAsValues));
        InsertConfigMember(id, ConfigValuePtr(arr, [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    // any other id does not exist, don't create any entry for it
}
    
    
    { protected:
  std::ostringstream log_stream_;
};
    
    template<typename DType>
inline void CompressArray<DType>::InitCompressChunks(size_t chunk_size, size_t max_nchunk) {
  raw_chunks_.clear();
  raw_chunks_.push_back(0);
  size_t min_chunk_size = data.size() / max_nchunk;
  chunk_size = std::max(min_chunk_size, chunk_size);
  size_t nstep = data.size() / chunk_size;
  for (size_t i = 0; i < nstep; ++i) {
    raw_chunks_.push_back(raw_chunks_.back() + chunk_size);
    CHECK_LE(raw_chunks_.back(), data.size());
  }
  if (nstep == 0) raw_chunks_.push_back(0);
  raw_chunks_.back() = data.size();
  CHECK_GE(raw_chunks_.size(), 2);
  out_buffer_.resize(raw_chunks_.size() - 1);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    out_buffer_[i].resize(raw_chunks_[i + 1] - raw_chunks_[i]);
  }
}
    
     protected:
  /*!
   * \brief to be implemented by subclass,
   * get next token, return EOF if end of file
   */
  virtual char GetChar(void) = 0;
  /*! \brief to be implemented by child, check if end of stream */
  virtual bool IsEnd(void) = 0;
    
    TEST(Param, SplitEntry) {
  xgboost::tree::SplitEntry se1;
  EXPECT_FALSE(se1.NeedReplace(-1, 100));
    }
    
    [[noreturn]] void usage(const char* name) {
  std::cerr << folly::format(
      'Usage: {0}\n'
      '         list all huge page sizes and their mount points\n'
      '       {0} -cp <src_file> <dest_nameprefix>\n'
      '         copy src_file to a huge page file\n',
      name);
  exit(1);
}
    
    std::shared_ptr<LogHandler> FileHandlerFactory::createHandler(
    const Options& options) {
  WriterFactory writerFactory;
  return StandardLogHandlerFactory::createHandler(
      getType(), &writerFactory, options);
}
    
      std::shared_ptr<LogHandler> createHandler(const Options& options) override;
    
      /**
   * Get the output file.
   */
  const folly::File& getFile() const {
    return file_;
  }
    
      // Make sure the inherit flag is always off for the root logger.
  if (!parent_) {
    inherit = false;
  }
  auto newValue = static_cast<uint32_t>(level);
  if (inherit) {
    newValue |= FLAG_INHERIT;
  }
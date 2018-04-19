
        
                // Constructor by specifying node arg name and type&shape which is
        // optional. This is called when loading a <Graph> from <GraphProto>
        // normally.
        NodeArg(const std::string& p_name,
            const TypeProto* p_argType);
    
            // Set <m_domainToVersion> and <m_modelProto> to contain related domains
        // with latest version in OpSchemaRegistry.
        // if <p_isONNX> is true, then only onnx domain will be contained.
        // otherwise, ml domain will also be contained.
        void AddImportOpSets(bool p_isONNX);
    
    #define ATTR_SETTER_LIST_IMPL(type, field)                                                \
    OperatorSchemaSetter&                                                                 \
        OperatorSchemaSetter::Attr(const std::string& p_attrName,                         \
            const std::string& p_description,                                             \
            AttrType p_attrType,                                                          \
            const std::vector<type>& p_defaultValue)                                      \
    {                                                                                     \
        AttributeProto a;                                                                 \
        a.set_name(p_attrName);                                                           \
        for (const auto& v : p_defaultValue)                                              \
        {                                                                                 \
            a.add_##field(v);                                                             \
        }                                                                                 \
                                                                                          \
        m_opSchema.m_opSignature.m_attributes.push_back(                                  \
        OpSignature::Attribute(p_attrName,                                                \
            p_attrType,                                                                   \
            p_description,                                                                \
            a));                                                                          \
        return *this;                                                                     \
    }                                                                                     \
    
    
    {            return result;
        }
    
        REGISTER_OPERATOR_SCHEMA(ZipMap)
        .SetDomain(c_mlDomain)
        .Input('X', 'The input values', 'tensor(float)')
        .Output('Y', 'The output map', 'T')
        .Description(R'DOC(
            Makes a map from the input and the attributes.
            Assumes input 0 are the values, and the keys are specified by the attributes.
            Must provide keys in either classlabels_strings or classlabels_int64s (but not both).
            Input 0 may have a batch size larger than 1,
            but each input in the batch must be the size of the keys specified by the attributes.
            The order of the input and attributes determines the key-value mapping.
            )DOC')
        .TypeConstraint('T', { 'map(string, float)', 'map(int64, float)' }, ' allowed types.')
        .Attr('classlabels_strings', 'keys if using string keys', AttrType::AttributeProto_AttributeType_STRINGS)
        .Attr('classlabels_int64s', 'keys if using int keys', AttrType::AttributeProto_AttributeType_INTS);
    
            if (isFinalValidationPass)
            if (!(Input(0)->GetSampleMatrixNumRows() == Input(1)->GetSampleMatrixNumRows() && // match size
                  Input(1)->GetSampleMatrixNumRows() == Input(2)->GetSampleMatrixNumRows() &&
                  Input(0)->HasMBLayout() &&
                  Input(0)->GetMBLayout() == Input(1)->GetMBLayout())) 
            {
                LogicError('The Matrix dimension in the SequenceWithSoftmaxNode operation does not match.');
            }
    
        // Let's wait till the previous memcopy has finished.
    if (m_dataTransferers[currentDataTransferIndex])
        m_dataTransferers[currentDataTransferIndex]->WaitForCopyCPUToGPU();
    
      auto animal = sample::GetAnimal(builder.GetBufferPointer());
    
    // Return the services for generated source file.
grpc::string GetSourceServices(grpc_generator::File *file,
                               const Parameters &params);
    
    
    {    // Return an OK status.
    return grpc::Status::OK;
  }
    
      std::string GetUsageString(const char *program_name) const;
    
      bool HasUnit(const Unit &U) { return Hashes.count(Hash(U)); }
  bool HasUnit(const std::string &H) { return Hashes.count(H); }
  InputInfo &ChooseUnitToMutate(Random &Rand) {
    InputInfo &II = *Inputs[ChooseUnitIdxToMutate(Rand)];
    assert(!II.U.empty());
    return II;
  };
    
    #endif

    
    void CopyFileToErr(const std::string &Path) {
  Printf('%s', FileToString(Path).c_str());
}
    
    
    {  DIR *D = opendir(Dir.c_str());
  if (!D) {
    Printf('No such directory: %s; exiting\n', Dir.c_str());
    exit(1);
  }
  while (auto E = readdir(D)) {
    std::string Path = DirPlusFile(Dir, E->d_name);
    if (E->d_type == DT_REG || E->d_type == DT_LNK)
      V->push_back(Path);
    else if (E->d_type == DT_DIR && *E->d_name != '.')
      ListFilesInDirRecursive(Path, Epoch, V, false);
  }
  closedir(D);
  if (Epoch && TopDir)
    *Epoch = E;
}
    
    
    {  bool Parse(std::istream &IS, bool ParseCoverage);
  bool Parse(const std::string &Str, bool ParseCoverage);
  void ParseOrExit(std::istream &IS, bool ParseCoverage);
  size_t Merge(std::vector<std::string> *NewFiles);
};
    
    
    {	// Append length in the last 8 bytes
	sha1_addUncounted(s, 0); // We're only using 32 bit lengths
	sha1_addUncounted(s, 0); // But SHA-1 supports 64 bit lengths
	sha1_addUncounted(s, 0); // So zero pad the top bits
	sha1_addUncounted(s, s->byteCount >> 29); // Shifting to multiply by 8
	sha1_addUncounted(s, s->byteCount >> 21); // as SHA-1 supports bitstreams as well as
	sha1_addUncounted(s, s->byteCount >> 13); // byte.
	sha1_addUncounted(s, s->byteCount >> 5);
	sha1_addUncounted(s, s->byteCount << 3);
}
    
    bool ExecuteCommandAndReadOutput(const std::string &Command, std::string *Out) {
  FILE *Pipe = OpenProcessPipe(Command.c_str(), 'r');
  if (!Pipe) return false;
  char Buff[1024];
  size_t N;
  while ((N = fread(Buff, 1, sizeof(Buff), Pipe)) > 0)
    Out->append(Buff, N);
  return true;
}
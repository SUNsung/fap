
        
        
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
        IMF_EXPORT
    FastHufDecoder (const char*& table,
                    int numBytes,
                    int minSymbol,
                    int maxSymbol,
                    int rleSymbol);
    
    //-----------------------------------------------------------------------------
//
//	class FloatAttribute
//
//-----------------------------------------------------------------------------
    
    class GenericInputFile
{
    public:
        IMF_EXPORT
        virtual ~GenericInputFile() {}
    }
    
    
    {
    {
    {	    if ((dataWindow.max.y - dataWindow.min.y + 1) %
		    i.channel().ySampling)
	    {
		THROW (IEX_NAMESPACE::ArgExc, 'Number of pixels per column in the '
				    'image's data window is not a multiple '
				    'of the y subsampling factor of '
				    'the \'' << i.name() << '\' channel.');
	    }
	}
    }
}
    
    inline
Header::ConstIterator::ConstIterator
    (const Header::AttributeMap::const_iterator &i): _i (i)
{
    // empty
}
    
        AutoArray <int, HUF_ENCSIZE> hlink;
    AutoArray <Int64 *, HUF_ENCSIZE> fHeap;
    
    
const char *
OStream::fileName () const
{
    return _fileName.c_str();
}
    
    
void
InputPart::rawPixelDataToBuffer (int scanLine, char *pixelData, int &pixelDataSize) const
{
    file->rawPixelDataToBuffer(scanLine, pixelData, pixelDataSize);
}
    
    void first(void) {
  printf('first\n');  // prints
  emscripten_sleep(1);
  longjmp(buf, 1);  // jumps back to where setjmp was called - making setjmp now
                    // return 1
}
    
    class PSTokenizer {
public:
    }
    
      // draw annotations
  annotList = new Annots(xref, catalog, getAnnots(&obj));
  obj.free();
  
  if (annotList->getNumAnnots() > 0) {
    if (globalParams->getPrintCommands()) {
      printf('***** Annotations\n');
    }
    for (i = 0; i < annotList->getNumAnnots(); ++i) {
        Annot *annot = annotList->getAnnot(i);
        if ((annotDisplayDecideCbk &&
             (*annotDisplayDecideCbk)(annot, annotDisplayDecideCbkData)) || 
            !annotDisplayDecideCbk) {
             annotList->getAnnot(i)->draw(gfx, printing);
	}
    }
    out->dump();
  }
  delete annotList;
    
      prev_digit_value = INT_MAX;
  value = 0;
  for (i = 0; buffer[i] != '\0'; i++) {
    switch (buffer[i]) {
    case 'm':
    case 'M':
      digit_value = 1000;
      break;
    case 'd':
    case 'D':
      digit_value = 500;
      break;
    case 'c':
    case 'C':
      digit_value = 100;
      break;
    case 'l':
    case 'L':
      digit_value = 50;
      break;
    case 'x':
    case 'X':
      digit_value = 10;
      break;
    case 'v':
    case 'V':
      digit_value = 5;
      break;
    case 'i':
    case 'I':
      digit_value = 1;
      break;
    default:
      return -1;
    }
    }
    
    // if changed remember to keep in sync with frontend enums
enum PageTransitionType {
  transitionReplace = 0,
  transitionSplit,
  transitionBlinds,
  transitionBox,
  transitionWipe,
  transitionDissolve,
  transitionGlitter,
  transitionFly,
  transitionPush,
  transitionCover,
  transitionUncover,
  transitionFade
};
    
      XRef *xref;			// the xref table for this PDF file
  Lexer *lexer;			// input stream
  GBool allowStreams;		// parse stream objects?
  Object buf1, buf2;		// next two tokens
  int inlineImg;		// set when inline image data is encountered
    
    When the input data is of type float32 and the environment variables MXNET_CUDA_ALLOW_TENSOR_CORE
and MXNET_CUDA_TENSOR_OP_MATH_ALLOW_CONVERSION are set to 1, this operator will try to use
pseudo-float16 precision (float32 math with float16 I/O) precision in order to use
Tensor Cores on suitable NVIDIA GPUs. This can sometimes give significant speedups.
    
    For 2-D deformable convolution, the shapes are
    
        const DType* data_offset_ptr = data_offset + group_index * group_offset_step;
    const index_t data_offset_h_ptr = ((2 * (i * kernel_w + j)) *
      height_col + h_col) * width_col + w_col;
    const index_t data_offset_w_ptr = data_offset_h_ptr + height_col * width_col;
    const DType offset_h = data_offset_ptr[data_offset_h_ptr];
    const DType offset_w = data_offset_ptr[data_offset_w_ptr];
    const DType cur_inv_h_data = h_in + i * dilation_h + offset_h;
    const DType cur_inv_w_data = w_in + j * dilation_w + offset_w;
    
    template<typename DType>
inline DType relu(DType x) {
  return x > 0.0f ? static_cast<float>(x) : 0.0f;
}
    
    nnvm::Graph InferStorageType(nnvm::Graph&& graph,
                             StorageTypeVector&& storage_type_inputs,
                             const std::string& storage_type_attr_key) {
  using dmlc::any;
  if (storage_type_inputs.size() != 0) {
    graph.attrs['storage_type_inputs'] = std::make_shared<any>(std::move(storage_type_inputs));
  }
  if (storage_type_attr_key.length() != 0) {
    graph.attrs['storage_type_attr_key'] = std::make_shared<any>(storage_type_attr_key);
  }
  // initialize unknown values for dispatch modes
  if (graph.attrs.count('dispatch_mode') == 0) {
    DispatchModeVector dispatch_modes(graph.indexed_graph().num_nodes(), DispatchMode::kUndefined);
    graph.attrs['dispatch_mode'] = std::make_shared<any>(std::move(dispatch_modes));
  }
  // initialize the dev_mask vector from the context vector
  if (graph.attrs.count('dev_mask') == 0) {
    CHECK_GT(graph.attrs.count('context'), 0);
    DevMaskVector dev_masks(graph.indexed_graph().num_nodes());
    const ContextVector& vctx = graph.GetAttr<ContextVector>('context');
    for (size_t i = 0; i < vctx.size(); i++) dev_masks[i] = vctx[i].dev_mask();
    graph.attrs['dev_mask'] = std::make_shared<any>(std::move(dev_masks));
  }
    }
    
    
    {
    {   private:
    friend class CudaModule;
    /*!
     * \brief constructor
     * \param mod module of this kernel
     * \param mangled_name mangled kernel name
     * \param signature kernel argument signature
     */
    Kernel(const std::shared_ptr<Chunk>& mod,
           const std::string& mangled_name,
           const std::vector<ArgType>& signature);
    /*! \brief mangled kernel name */
    std::string mangled_name_;
    /*! \brief kernel argument signature */
    std::vector<ArgType> signature_;
    /*! \brief module of this kernel */
    std::shared_ptr<Chunk> mod_;
    /*! \brief cached kernel function on each device */
    std::unordered_map<int, CUfunction> func_;
  };
  /*!
   * \brief CudaModule constructor
   * \param source cuda source code.
   * \param exports export symbols before mangling.
   */
  CudaModule(const char* source,
             const std::vector<std::string>& options,
             const std::vector<std::string>& exports)
      : ptr_(std::make_shared<Chunk>(source, options, exports)) {}
  /*!
   * \brief Get cuda kernal from module by name
   * \param name kernel name
   * \param signature kernel signature
   * \return shared pointer to cuda kernel
   */
  std::shared_ptr<Kernel> GetKernel(const std::string& name,
                                    const std::vector<ArgType>& signature);
};
    
           void LoadParameters(File& f, map<wstring, shared_ptr<Matrix<ElemType>>>& parameters, DEVICEID_TYPE deviceID)
       {
           unsigned int size = 0;
           unsigned int pair = 0;
           f >> size;
           f >> pair;
           if (size != sizeof(ElemType))
           {
               LogicError('Mismatched ElemType in loading BlockMomentumSGD checkpoint. Expecting %s, while loading element size=%d\n',
                   sizeof(ElemType) == 4 ? 'float' : 'double',
                   size
                   );
           }
           parameters.clear();
           for (size_t i = 0; i < pair; i++)
           {
               wstring name;
               f >> name;
               shared_ptr<Matrix<ElemType>> mat = make_shared<Matrix<ElemType>>(deviceID);
               f >> *mat;
               parameters[name] = mat;
           }
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
    
    public:
    ComputationNetworkBuilder(ComputationNetwork& net)
        : net(net)
    {
    }
    
        // the following two are only for legacy testing code; don't use this
    void SetDims1(size_t rows, size_t cols) { SetDims(TensorShape(rows, cols), false); }
    size_t GetNumCols1() const { return GetSampleMatrixNumCols(); } // dummy
    
        class MASGDPerfStats
    {
    private:
        size_t m_numWorkers; 
        size_t m_myRank; 
        size_t m_numSyncPerformedInCurrentEpoch; 
        size_t m_reportFrequency; 
        size_t m_totalSamplesProcessedSinceLastReport; 
        size_t m_localSamplesProcessedSinceLastReport; 
        double m_accumulatedSecondsOnSyncPointInOneEpoch;
        size_t m_syncPointHitCounterInOneEpoch;
        Timer  m_Timer; 
    }
    
    template std::shared_ptr<IDistGradAggregator<double>> GetSimpleDistGradAggregator<double>(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce);
    
              codeLength = 2;
          entity[0] = *p;
          entity[1] = *(p + 1);
          entity[2] = '\0';
        } else if (c < 0xf0) {
          if (avail < 3 || !utf8_trail(*(p + 1)) || !utf8_trail(*(p + 2))) {
            UTF8_ERROR_IF_LEN(avail < 2 || utf8_lead(*(p + 1)), 1);
            UTF8_ERROR_IF_LEN(avail < 3 || utf8_lead(*(p + 2)), 2);
            UTF8_ERROR_IF_LEN(true, 3);
          }
    
    RangeState::RangeState(uintptr_t lowAddr, uintptr_t highAddr)
  : RangeState(lowAddr, highAddr, Reserved{}) {
  reserve();
}
    
    // remap_2m() is simiar to mmap_2m(), except that it is used to replace an
// existing memory range [addr, addr + size2m) using hugetlb pages.  All data in
// that range will be erased.
void* remap_2m(void* addr, int node);
    
    #ifndef incl_HPHP_SYNCHRONIZABLE_H_
#define incl_HPHP_SYNCHRONIZABLE_H_
    
      static ReflectionFileHandle* Get(ObjectData* obj) {
    return Native::data<ReflectionFileHandle>(obj);
  }
    
    
    {  v << srem{dividend, divisor, d};
}
    
    
    {  struct stat st;
  auto w = Stream::getWrapperFromURI(StrNR(cleanPath));
  if (w && !dynamic_cast<FileStreamWrapper*>(w)) {
    if (w->stat(cleanPath.c_str(), &st)) {
      return;
    }
    if (S_ISDIR(st.st_mode)) {
      return;
    }
    const auto f = w->open(StrNR(cleanPath), 'r', 0, nullptr);
    if (!f) return;
    auto str = f->read();
    HackCFactsExtractor::parse_file_impl(cleanPath, allowHipHopSyntax,
                                         str.slice(), res, state);
  } else {
    // It would be nice to have an atomic stat + open operation here but this
    // doesn't seem to be possible with STL in a portable way.
    if (stat(cleanPath.c_str(), &st)) {
      return;
    }
    if (S_ISDIR(st.st_mode)) {
      return;
    }
    HackCFactsExtractor::parse_file_impl(cleanPath, allowHipHopSyntax,
                                         folly::StringPiece{''}, res, state);
  }
}
    
    
    {  return true;
}
    
      // Similar to EncodePath() except assumes the basename in the path hasn't been
  // created yet.
  std::pair<Status, std::string> EncodePathWithNewBasename(
      const std::string& path) {
    if (path.empty() || path[0] != '/') {
      return {Status::InvalidArgument(path, 'Not an absolute path'), ''};
    }
    // Basename may be followed by trailing slashes
    size_t final_idx = path.find_last_not_of('/');
    if (final_idx == std::string::npos) {
      // It's only slashes so no basename to extract
      return EncodePath(path);
    }
    }
    
    /*
 * Class:     org_rocksdb_CompactionJobInfo
 * Method:    disposeInternal
 * Signature: (J)V
 */
void Java_org_rocksdb_CompactionJobInfo_disposeInternal(
    JNIEnv*, jobject, jlong jhandle) {
  auto* compact_job_info =
      reinterpret_cast<rocksdb::CompactionJobInfo*>(jhandle);
  delete compact_job_info;
}
    
    /*
 * Class:     org_rocksdb_CompactionOptions
 * Method:    outputFileSizeLimit
 * Signature: (J)J
 */
jlong Java_org_rocksdb_CompactionOptions_outputFileSizeLimit(
    JNIEnv*, jclass, jlong jhandle) {
  auto* compact_opts =
      reinterpret_cast<rocksdb::CompactionOptions*>(jhandle);
  return static_cast<jlong>(
      compact_opts->output_file_size_limit);
}
    
    /*
 * Class:     org_rocksdb_CompactionOptionsUniversal
 * Method:    setSizeRatio
 * Signature: (JI)V
 */
void Java_org_rocksdb_CompactionOptionsUniversal_setSizeRatio(
    JNIEnv*, jobject, jlong jhandle, jint jsize_ratio) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsUniversal*>(jhandle);
  opt->size_ratio = static_cast<unsigned int>(jsize_ratio);
}
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    newIngestExternalFileOptions
 * Signature: (ZZZZ)J
 */
jlong Java_org_rocksdb_IngestExternalFileOptions_newIngestExternalFileOptions__ZZZZ(
    JNIEnv*, jclass, jboolean jmove_files,
    jboolean jsnapshot_consistency, jboolean jallow_global_seqno,
    jboolean jallow_blocking_flush) {
  auto* options = new rocksdb::IngestExternalFileOptions();
  options->move_files = static_cast<bool>(jmove_files);
  options->snapshot_consistency = static_cast<bool>(jsnapshot_consistency);
  options->allow_global_seqno = static_cast<bool>(jallow_global_seqno);
  options->allow_blocking_flush = static_cast<bool>(jallow_blocking_flush);
  return reinterpret_cast<jlong>(options);
}
    
    /*
 * Class:     org_rocksdb_OptimisticTransactionDB
 * Method:    open
 * Signature: (JLjava/lang/String;)J
 */
jlong Java_org_rocksdb_OptimisticTransactionDB_open__JLjava_lang_String_2(
    JNIEnv* env, jclass, jlong joptions_handle, jstring jdb_path) {
  const char* db_path = env->GetStringUTFChars(jdb_path, nullptr);
  if (db_path == nullptr) {
    // exception thrown: OutOfMemoryError
    return 0;
  }
    }
    
      // Column family descriptor
  for (rocksdb::ColumnFamilyDescriptor& cfd : cf_descs) {
    // Construct a ColumnFamilyDescriptor java object
    jobject jcfd = rocksdb::ColumnFamilyDescriptorJni::construct(env, &cfd);
    if (env->ExceptionCheck()) {
      // exception occurred constructing object
      if (jcfd != nullptr) {
        env->DeleteLocalRef(jcfd);
      }
      return;
    }
    }
    
    
    {    env->ReleaseByteArrayElements(jcn_ba, jcf_name, JNI_ABORT);
    env->DeleteLocalRef(jcn);
  }
  env->ReleaseLongArrayElements(jcolumn_options_handles, jco, JNI_ABORT);
    
      const jsize len_cols = env->GetArrayLength(jcolumn_names);
  jlong* jco = env->GetLongArrayElements(jcolumn_options, nullptr);
  if (jco == nullptr) {
    // exception thrown: OutOfMemoryError
    env->ReleaseStringUTFChars(jdb_path, db_path);
    return nullptr;
  }
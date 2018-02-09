
        
         protected:
  // content::ContentMainDelegate:
  bool BasicStartupComplete(int* exit_code) override;
  void PreSandboxStartup() override;
  content::ContentBrowserClient* CreateContentBrowserClient() override;
  content::ContentRendererClient* CreateContentRendererClient() override;
  content::ContentUtilityClient* CreateContentUtilityClient() override;
  int RunProcess(
      const std::string& process_type,
      const content::MainFunctionParams& main_function_params) override;
#if defined(OS_MACOSX)
  bool ShouldSendMachPort(const std::string& process_type) override;
  bool DelaySandboxInitialization(const std::string& process_type) override;
#endif
    
    #ifndef ATOM_BROWSER_API_ATOM_API_RENDER_PROCESS_PREFERENCES_H_
#define ATOM_BROWSER_API_ATOM_API_RENDER_PROCESS_PREFERENCES_H_
    
      // C++ can not distinguish overloaded member function.
  template<AtomNetworkDelegate::SimpleEvent type>
  void SetSimpleListener(mate::Arguments* args);
  template<AtomNetworkDelegate::ResponseEvent type>
  void SetResponseListener(mate::Arguments* args);
  template<typename Listener, typename Method, typename Event>
  void SetListener(Method method, Event type, mate::Arguments* args);
    
    void SavePageHandler::OnDownloadUpdated(content::DownloadItem* item) {
  if (item->IsDone()) {
    v8::Isolate* isolate = v8::Isolate::GetCurrent();
    v8::Locker locker(isolate);
    v8::HandleScope handle_scope(isolate);
    if (item->GetState() == content::DownloadItem::COMPLETE) {
      callback_.Run(v8::Null(isolate));
    } else {
      v8::Local<v8::String> error_message = v8::String::NewFromUtf8(
          isolate, 'Fail to save page');
      callback_.Run(v8::Exception::Error(error_message));
    }
    Destroy(item);
  }
}
    
    namespace base {
class FilePath;
}
    
    #include 'content/public/browser/quota_permission_context.h'
    
    
    { private:
  std::string scheme_;
};
    
    // relauncher implements main browser application relaunches across platforms.
// When a browser wants to relaunch itself, it can't simply fork off a new
// process and exec a new browser from within. That leaves open a window
// during which two browser applications might be running concurrently. If
// that happens, each will wind up with a distinct Dock icon, which is
// especially bad if the user expected the Dock icon to be persistent by
// choosing Keep in Dock from the icon's contextual menu.
//
// relauncher approaches this problem by introducing an intermediate
// process (the 'relauncher') in between the original browser ('parent') and
// replacement browser ('relaunched'). The helper executable is used for the
// relauncher process; because it's an LSUIElement, it doesn't get a Dock
// icon and isn't visible as a running application at all. The parent will
// start a relauncher process, giving it the 'writer' side of a pipe that it
// retains the 'reader' end of. When the relauncher starts up, it will
// establish a kqueue to wait for the parent to exit, and will then write to
// the pipe. The parent, upon reading from the pipe, is free to exit. When the
// relauncher is notified via its kqueue that the parent has exited, it
// proceeds, launching the relaunched process. The handshake to synchronize
// the parent with the relauncher is necessary to avoid races: the relauncher
// needs to be sure that it's monitoring the parent and not some other process
// in light of PID reuse, so the parent must remain alive long enough for the
// relauncher to set up its kqueue.
    
    
    {  // Wait the SIGUSR2 signal to happen.
  struct signalfd_siginfo si;
  HANDLE_EINTR(read(usr2_fd, &si, sizeof(si)));
}
    
        private:
        void EnumerateStatefulNodesForRoot(ComputationNetwork& net, ComputationNodeBasePtr root, std::map<wstring, shared_ptr<IStatefulNode>>& statefulNodes)
        {
            for (const auto& node : net.GetAllNodesForRoot(root))
            {
                const auto& name = node->GetName();
                if (statefulNodes.find(name) != statefulNodes.end())
                    continue; // already in the list  --TODO: use insert()
                shared_ptr<IStatefulNode> pNode = dynamic_pointer_cast<IStatefulNode>(node);
                if (pNode) // if it is an IStatefulNode then report it
                    statefulNodes[name] = pNode;
            }
        }
    
        // relink the input of those nodes whose child is oldNode to point to the new one instead
    for (auto nodeIter = m_nameToNodeMap.begin(); nodeIter != m_nameToNodeMap.end(); nodeIter++)
    {
        ComputationNodeBasePtr node = nodeIter->second;
        for (int i = 0; i < node->GetNumInputs(); i++)
            if (node->GetInputs()[i] == oldNode)
                node->SetInput(i, newNode);
    }
    
        mAsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    mBsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    Matrix<float>::ScaleAndAdd(alpha, mAsparse, mBsparse);
    
    
    {    auto code = cudaStreamDestroy(m_stream);
    if (code != cudaSuccess)
    {
        std::cerr << 'cudaStreamDestroy failed (PrefetchGPUDataTransferer dtor): '
            << cudaGetErrorString(code) << ' (cuda error ' <<  code << ')'<< std::endl;
    }
}
    
    template <class ElemType>
void PostComputingActions<ElemType>::BatchNormalizationStatistics(IDataReader * dataReader, const vector<wstring>& evalNodeNames, 
    const wstring newModelPath, const size_t mbSize, const int iters)
{
    // since the mean and variance of bn will be modified in statistics,
    // training mode will make it work. And there is no back prop, other parameters
    // are fixed during computing.
    ScopedNetworkOperationMode modeGuard(m_net, NetworkOperationMode::training);
    }
    
        int traceLevel = config(L'traceLevel', 0);
    if (config.Exists(L'createNetwork'))
    {
        createNetworkFn = GetCreateNetworkFn(config); // (we need a separate function needed due to template code)
        return true;
    }
    else if (config.Exists(L'SimpleNetworkBuilder'))
    {
        const ConfigRecordType& simpleNetworkBuilderConfig(config(L'SimpleNetworkBuilder'));
        auto netBuilder = make_shared<SimpleNetworkBuilder<ElemType>>(simpleNetworkBuilderConfig); // parses the configuration and stores it in the SimpleNetworkBuilder object
        createNetworkFn = [netBuilder, traceLevel](DEVICEID_TYPE deviceId)
        {
            auto net = shared_ptr<ComputationNetwork>(netBuilder->BuildNetworkFromDescription()); // this operates based on the configuration saved above
            net->SetTraceLevel(traceLevel);
            return net;
        };
        return true;
    }
    // legacy NDL
    else if (config.Exists(L'NDLNetworkBuilder'))
    {
        const ConfigRecordType& ndlNetworkBuilderConfig(config(L'NDLNetworkBuilder'));
        shared_ptr<NDLBuilder<ElemType>> netBuilder = make_shared<NDLBuilder<ElemType>>(ndlNetworkBuilderConfig);
        createNetworkFn = [netBuilder, traceLevel](DEVICEID_TYPE deviceId)
        {
            auto net = shared_ptr<ComputationNetwork>(netBuilder->BuildNetworkFromDescription());
            net->SetTraceLevel(traceLevel);
            return net;
        };
        return true;
    }
    // legacy test mode for BrainScript. Will go away once we fully integrate with BS.
    else if (config.Exists(L'BrainScriptNetworkBuilder') || config.Exists(L'ExperimentalNetworkBuilder' /*legacy name*/))
    {
        // We interface with outer old CNTK config by taking the inner part, which we get as a string, as BrainScript.
        // We prepend a few standard definitions, and also definition of deviceId and precision, which all objects will pull out again when they are being constructed.
        // BUGBUG: We are not getting TextLocations right in this way! Do we need to inject location markers into the source? Moot once we fully switch to BS
        wstring sourceOfNetwork = config.Exists(L'BrainScriptNetworkBuilder') ? config(L'BrainScriptNetworkBuilder') : config(L'ExperimentalNetworkBuilder');
        if (sourceOfNetwork.find_first_of(L'([{') != 0)
            InvalidArgument('BrainScript network description must be either a BS expression in ( ) or a config record in { }');
    }
    }
    
    // LoadConfigFile - load a configuration file, and add to config parameters
// filePath - filePath to the file to read
void ConfigParser::LoadConfigFile(const std::wstring& filePath)
{
    // read and then parse
    FileParse(ReadConfigFile(filePath));
}
    
        bool empty() const
    {
#ifndef NONUMLATTICEMMI // TODO:set NUM lattice to null so as to save memory
        if (numlattices.empty() ^ denlattices.empty())
            RuntimeError('latticesource: numerator and denominator lattices must be either both empty or both not empty');
#endif
        return denlattices.empty();
    }
    
    namespace msra { namespace math {
    }
    }
    
    
    {  m_bits_left = 16;
  get_bits_no_markers(16);
  get_bits_no_markers(16);
}
    
    /*Note that we do not provide a macro for abs(), because it is provided as a
   library function, which we assume is translated into an intrinsic to avoid
   the function call overhead and then implemented in the smartest way for the
   target platform.
  With modern gcc (4.x), this is true: it uses cmov instructions if the
   architecture supports it and branchless bit-twiddling if it does not (the
   speed difference between the two approaches is not measurable).
  Interestingly, the bit-twiddling method was patented in 2000 (US 6,073,150)
   by Sun Microsystems, despite prior art dating back to at least 1996:
   http://web.archive.org/web/19961201174141/www.x86.org/ftp/articles/pentopt/PENTOPT.TXT
  On gcc 3.x, however, our assumption is not true, as abs() is translated to a
   conditional jump, which is horrible on deeply piplined architectures (e.g.,
   all consumer architectures for the past decade or more).
  Also be warned that -C*abs(x) where C is a constant is mis-optimized as
   abs(C*x) on every gcc release before 4.2.3.
  See bug http://gcc.gnu.org/bugzilla/show_bug.cgi?id=34130 */
    
         60,30,500,   1,18.,  128
  },
  /* 5: 128 x 17 */
  {
    6,{0,1,1,2,3,3},{2,3,3,3},{0,1,2,2},{-1,0,1,2},
    {{3},{4,5},{-1,6,7,8},{-1,9,10,11}},
    2,{0,128,  12,46,  4,8,16,  23,33,70,  2,6,10,  14,19,28,  39,58,90},
    
    static const vorbis_mapping_template _mapres_template_8_uncoupled[2]={
  { _map_nominal_u, _res_8u_0 }, /* 0 */
  { _map_nominal_u, _res_8u_1 }, /* 1 */
};

    
    /* 20log10(x) */
#define VORBIS_IEEE_FLOAT32 1
#ifdef VORBIS_IEEE_FLOAT32
    
    #if defined(__WATCOMC__)
void GetTSC(unsigned long&);
#pragma aux GetTSC = 0x0f 0x31 'mov [edi], eax' parm [edi] modify [edx eax];
#elif defined(__GNUC__)
inline
void GetTSC(unsigned long& tsc)
{
  asm volatile('.byte 15, 49\n\t'
	       : '=eax' (tsc)
	       :
	       : '%edx', '%eax');
}
#elif defined(_MSC_VER)
inline
void GetTSC(unsigned long& tsc)
{
  unsigned long a;
  __asm _emit 0fh
  __asm _emit 31h
  __asm mov a, eax;
  tsc=a;
}
#endif      
    
    FilterBlockReader::FilterBlockReader(const FilterPolicy* policy,
                                     const Slice& contents)
    : policy_(policy),
      data_(NULL),
      offset_(NULL),
      num_(0),
      base_lg_(0) {
  size_t n = contents.size();
  if (n < 5) return;  // 1 byte for base_lg_ and 4 for start of offset array
  base_lg_ = contents[n-1];
  uint32_t last_word = DecodeFixed32(contents.data() + n - 5);
  if (last_word > n - 5) return;
  data_ = contents.data();
  offset_ = data_ + last_word;
  num_ = (n - 5 - last_word) / 4;
}
    
    
    {  // Optionally crash if this thread does not hold this mutex.
  // The implementation must be fast, especially if NDEBUG is
  // defined.  The implementation is allowed to skip all checks.
  void AssertHeld();
};
    
          case kNextFileNumber:
        if (GetVarint64(&input, &next_file_number_)) {
          has_next_file_number_ = true;
        } else {
          msg = 'next file number';
        }
        break;
    
    // WriteBatchInternal provides static methods for manipulating a
// WriteBatch that we don't want in the public WriteBatch interface.
class WriteBatchInternal {
 public:
  // Return the number of entries in the batch.
  static int Count(const WriteBatch* batch);
    }
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
    void Mutex::Lock() { PthreadCall('lock', pthread_mutex_lock(&mu_)); }
    
    namespace leveldb {
    }
    
    
    { private:
  const FilterPolicy* policy_;
  const char* data_;    // Pointer to filter data (at block-start)
  const char* offset_;  // Pointer to beginning of offset array (at block-end)
  size_t num_;          // Number of entries in offset array
  size_t base_lg_;      // Encoding parameter (see kFilterBaseLg in .cc file)
};
    
        c.type = type_[fid];
    const size_t block_offset = boundary_[fid].index_begin / packing_factor_;
    const size_t elem_offset = boundary_[fid].index_begin % packing_factor_;
    c.index = reinterpret_cast<const T*>(&index_[block_offset]) + elem_offset;
    c.index_base = index_base_[fid];
    c.row_ind = &row_ind_[boundary_[fid].row_ind_begin];
    c.len = boundary_[fid].index_end - boundary_[fid].index_begin;
    
    #include '../helpers.h'
    
    ExternalFunctions::ExternalFunctions() {
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  this->NAME = GetFnPtr<decltype(ExternalFunctions::NAME)>(#NAME, WARN)
    }
    
    ExternalFunctions::ExternalFunctions() {
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  this->NAME = ::NAME;                                                         \
  CheckFnPtr((void *)::NAME, #NAME, WARN);
    }
    
    #include 'FuzzerExtFunctions.def'
    
    void ReadDirToVectorOfUnits(const char *Path, std::vector<Unit> *V,
                            long *Epoch, size_t MaxSize, bool ExitOnError) {
  long E = Epoch ? *Epoch : 0;
  std::vector<std::string> Files;
  ListFilesInDirRecursive(Path, Epoch, &Files, /*TopDir*/true);
  size_t NumLoaded = 0;
  for (size_t i = 0; i < Files.size(); i++) {
    auto &X = Files[i];
    if (Epoch && GetEpoch(X) < E) continue;
    NumLoaded++;
    if ((NumLoaded & (NumLoaded - 1)) == 0 && NumLoaded >= 1024)
      Printf('Loaded %zd/%zd files from %s\n', NumLoaded, Files.size(), Path);
    auto S = FileToVector(X, MaxSize, ExitOnError);
    if (!S.empty())
      V->push_back(S);
  }
}
    
    std::string DirName(const std::string &FileName) {
  char *Tmp = new char[FileName.size() + 1];
  memcpy(Tmp, FileName.c_str(), FileName.size() + 1);
  std::string Res = dirname(Tmp);
  delete [] Tmp;
  return Res;
}
    
      if (!LocationLen) { // Relative path.
    if (!DirLen)
      return '.';
    return std::string('.\\').append(FileName, 0, DirLen);
  }
    
      /// Applies one of the configured mutations.
  /// Returns the new size of data which could be up to MaxSize.
  size_t Mutate(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Applies one of the default mutations. Provided as a service
  /// to mutation authors.
  size_t DefaultMutate(uint8_t *Data, size_t Size, size_t MaxSize);
    
    #endif  // LLVM_FUZZER_OPTIONS_H

    
    
    {} // namespace fuzzer
    
    void AbstractOptionHandler::addTag(uint32_t tag) { tags_ |= (1 << tag); }
    
    AnnounceTier::AnnounceTier(std::deque<std::string> urls)
    : event(STARTED), urls(std::move(urls))
{
}
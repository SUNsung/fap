
        
        INSTANTIATE_TEST_CASE_P(InstantiationName,
                        FooTest,
                        Values('meeny', 'miny', 'moe'));
    
    # define REGISTER_TYPED_TEST_CASE_P(CaseName, ...) \
  namespace GTEST_CASE_NAMESPACE_(CaseName) { \
  typedef ::testing::internal::Templates<__VA_ARGS__>::type gtest_AllTests_; \
  } \
  static const char* const GTEST_REGISTERED_TEST_NAMES_(CaseName) = \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName).VerifyRegisteredTestNames(\
          __FILE__, __LINE__, #__VA_ARGS__)
    
      // Reinterprets a bit pattern as a floating-point number.
  //
  // This function is needed to test the AlmostEquals() method.
  static RawType ReinterpretBits(const Bits bits) {
    FloatingPoint fp(0);
    fp.u_.bits_ = bits;
    return fp.u_.value_;
  }
    
    
template <typename T1, typename T2, typename T3, typename T4>
class CartesianProductGenerator4
    : public ParamGeneratorInterface< ::std::tr1::tuple<T1, T2, T3, T4> > {
 public:
  typedef ::std::tr1::tuple<T1, T2, T3, T4> ParamType;
    }
    
      // Creates an ANSI string from the given wide string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the ANSI string, or NULL if the
  // input is NULL.
  //
  // The returned string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static const char* Utf16ToAnsi(LPCWSTR utf16_str);
#endif
    
    
    {  EXPECT_FALSE(IsPrime(-1));
  EXPECT_FALSE(IsPrime(-2));
  EXPECT_FALSE(IsPrime(INT_MIN));
}
    
    
    {  bool rword_indicates_list_item;
  bool rword_likely_starts_idea;
  bool rword_likely_ends_idea;
};
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(inT64 cost, inT32 steps, const DPPoint* prev,
                             inT32 n, inT32 sig_x, inT64 sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
    // Refreshes the words in the block_list by using blobs in the
// new_blobs list.
// Block list must have word segmentation in it.
// It consumes the blobs provided in the new_blobs list. The blobs leftover in
// the new_blobs list after the call weren't matched to any blobs of the words
// in block list.
// The output not_found_blobs is a list of blobs from the original segmentation
// in the block_list for which no corresponding new blobs were found.
void RefreshWordBlobsFromNewBlobs(BLOCK_LIST* block_list,
                                  C_BLOB_LIST* new_blobs,
                                  C_BLOB_LIST* not_found_blobs);
    
    // store the position and size of a view
struct ViewPosition
{
    void* view;
    size_t filePosition;
    size_t size;
    int refCount;
    ViewPosition()
        : view(NULL), filePosition(0), size(0), refCount(0)
    {
    }
    ViewPosition(void* view, size_t filePosition, size_t size)
        : view(view), filePosition(filePosition), size(size), refCount(0)
    {
    }
};
    
        Matrix<float> mBdense(c_deviceIdZero);
    mBdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim2, dim1, c_deviceIdZero, -5.0f, 0.4f, IncrementCounter()), 0);
    Matrix<float> mBsparse(mBdense.DeepClone());
    mBsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    
    #pragma warning(disable : 4267) // conversion from 'size_t' to 'unsigned int'; happens in CUDA <<<a,b>>> syntax if a and b are size_t
#pragma warning(disable : 4127) // conditional expression is constant; 'if (sizeof(ElemType)==sizeof(float))' triggers this
#pragma warning(disable : 4702) // unreachable code; triggered for unknown reasons
    
    // Data Writer class
// interface for clients of the Data Writer
// mirrors the IDataWriter interface, except the Init method is private (use the constructor)
class DataWriter : public IDataWriter, protected Plugin
{
    IDataWriter* m_dataWriter; // writer
    }
    
        template<unsigned int N>
    static const char* Timestamp(char(&buf)[N])
    {
        std::time_t tt = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        if (!std::strftime(buf, _countof(buf), '%m/%d/%Y %H:%M:%S', std::localtime(&tt)))
            LogicError('Timestamp: Buffer too small.');
        return buf;
    }
    
    vector<wstring> /*IConfigRecord::*/ ComputationNodeBase::GetMemberIds() const
{
    return vector<wstring>{ L'name', L'operation', L'dim', L'dims', /*L'tag', */L'inputs', OperationName() + L'Args' };
}
    
    #endif

    
    
    
    static const vorbis_mapping_template _mapres_template_44_51[]={
  { _map_nominal_51, _res_44p51_n1 }, /* -1 */
  { _map_nominal_51, _res_44p51_0 }, /* 0 */
  { _map_nominal_51, _res_44p51_1 }, /* 1 */
  { _map_nominal_51, _res_44p51_2 }, /* 2 */
  { _map_nominal_51, _res_44p51_3 }, /* 3 */
  { _map_nominal_51, _res_44p51_4 }, /* 4 */
  { _map_nominal_51u, _res_44p51_5 }, /* 5 */
  { _map_nominal_51u, _res_44p51_6 }, /* 6 */
  { _map_nominal_51u, _res_44p51_7 }, /* 7 */
  { _map_nominal_51u, _res_44p51_8 }, /* 8 */
  { _map_nominal_51u, _res_44p51_9 }, /* 9 */
};

    
    /*
**      The C99 prototypes for lrint and lrintf are as follows:
**
**              long int lrintf (float x) ;
**              long int lrint  (double x) ;
*/
    
      We can insert an explicit MOVD or MOVQ using _mm_cvtsi32_si128() or
  _mm_loadl_epi64(), which should have the same semantics as an m32 or m64
  reference in the PMOVSXWD instruction itself, but gcc is not smart enough to
  optimize this out when optimizations ARE enabled.
    
        ret = ((limit1) > (limit2) ? ((a) > (limit1) ? (limit1) : ((a) < (limit2) ? (limit2) : (a))) \
        : ((a) > (limit2) ? (limit2) : ((a) < (limit1) ? (limit1) : (a))));
    
      // Partial implementation of the Env interface.
  virtual Status NewSequentialFile(const std::string& fname,
                                   SequentialFile** result) {
    MutexLock lock(&mutex_);
    if (file_map_.find(fname) == file_map_.end()) {
      *result = NULL;
      return Status::IOError(fname, 'File not found');
    }
    }
    
    namespace leveldb {
    }
    
    std::string Key1(int i) {
  char buf[100];
  snprintf(buf, sizeof(buf), 'my_key_%d', i);
  return buf;
}
    
      // Check second filter
  ASSERT_TRUE(reader.KeyMayMatch(3100, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(3100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(3100, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(3100, 'hello'));
    
      switch (data[n]) {
    case kNoCompression:
      if (data != buf) {
        // File implementation gave us pointer to some other data.
        // Use it directly under the assumption that it will be live
        // while the file is open.
        delete[] buf;
        result->data = Slice(data, n);
        result->heap_allocated = false;
        result->cachable = false;  // Do not double-cache
      } else {
        result->data = Slice(buf, n);
        result->heap_allocated = true;
        result->cachable = true;
      }
    }
    
    #endif  // GRPC_INTERNAL_COMPILER_GO_GENERATOR_H

    
    std::unique_ptr< MonsterStorage::Stub> MonsterStorage::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< MonsterStorage::Stub> stub(new MonsterStorage::Stub(channel));
  return stub;
}
    
      // Get a test an element from the `inventory` FlatBuffer's `vector`.
  auto inv = monster->inventory();
  assert(inv);
  assert(inv->Get(9) == 9);
  (void)inv;
    
    // Ensure that a type is prefixed with its namespace whenever it is used
// outside of its namespace.
std::string BaseGenerator::WrapInNameSpace(const Namespace *ns,
                                           const std::string &name) const {
  if (CurrentNameSpace() == ns) return name;
  std::string qualified_name = qualifying_start_;
  for (auto it = ns->components.begin(); it != ns->components.end(); ++it)
    qualified_name += *it + qualifying_separator_;
  return qualified_name + name;
}
    
        for (size_t i = 0; i < params_.num_generators; ++i) {
      parser->opts.lang = params_.generators[i].lang;
      if (generator_enabled[i]) {
        if (!print_make_rules) {
          flatbuffers::EnsureDirExists(output_path);
          if ((!params_.generators[i].schema_only || is_schema) &&
              !params_.generators[i].generate(*parser.get(), output_path,
                                              filebase)) {
            Error(std::string('Unable to generate ') +
                  params_.generators[i].lang_name + ' for ' + filebase);
          }
        } else {
          std::string make_rule = params_.generators[i].make_rule(
              *parser.get(), output_path, filename);
          if (!make_rule.empty())
            printf('%s\n',
                   flatbuffers::WordWrap(make_rule, 80, ' ', ' \\').c_str());
        }
        if (grpc_enabled) {
          if (params_.generators[i].generateGRPC != nullptr) {
            if (!params_.generators[i].generateGRPC(*parser.get(), output_path,
                                                    filebase)) {
              Error(std::string('Unable to generate GRPC interface for') +
                    params_.generators[i].lang_name);
            }
          } else {
            Warn(std::string('GRPC interface generator not implemented for ') +
                 params_.generators[i].lang_name);
          }
        }
      }
    }
    
    
    {  std::ofstream OF(CFPath, std::ofstream::out | std::ofstream::app);
  for (size_t i = M.FirstNotProcessedFile; i < M.Files.size(); i++) {
    auto U = FileToVector(M.Files[i].Name);
    if (U.size() > MaxInputLen) {
      U.resize(MaxInputLen);
      U.shrink_to_fit();
    }
    std::ostringstream StartedLine;
    // Write the pre-run marker.
    OF << 'STARTED ' << std::dec << i << ' ' << U.size() << '\n';
    OF.flush();  // Flush is important since ExecuteCommand may crash.
    // Run.
    TPC.ResetMaps();
    ExecuteCallback(U.data(), U.size());
    // Collect coverage.
    std::set<size_t> Features;
    TPC.CollectFeatures([&](size_t Feature) -> bool {
      Features.insert(Feature);
      return true;
    });
    // Show stats.
    TotalNumberOfRuns++;
    if (!(TotalNumberOfRuns & (TotalNumberOfRuns - 1)))
      PrintStats('pulse ');
    // Write the post-run marker and the coverage.
    OF << 'DONE ' << i;
    for (size_t F : Features)
      OF << ' ' << std::hex << F;
    OF << '\n';
  }
}
    
    // Overwrites part of To[0,ToSize) with a part of From[0,FromSize).
// Returns ToSize.
size_t MutationDispatcher::CopyPartOf(const uint8_t *From, size_t FromSize,
                                      uint8_t *To, size_t ToSize) {
  // Copy From[FromBeg, FromBeg + CopySize) into To[ToBeg, ToBeg + CopySize).
  size_t ToBeg = Rand(ToSize);
  size_t CopySize = Rand(ToSize - ToBeg) + 1;
  assert(ToBeg + CopySize <= ToSize);
  CopySize = std::min(CopySize, FromSize);
  size_t FromBeg = Rand(FromSize - CopySize + 1);
  assert(FromBeg + CopySize <= FromSize);
  memmove(To + ToBeg, From + FromBeg, CopySize);
  return ToSize;
}
    
    /* This code is public-domain - it is based on libcrypt
 * placed in the public domain by Wei Dai and other contributors.
 */
    
      pid_t Pid;
  char **Environ = environ; // Read from global
  const char *CommandCStr = Command.c_str();
  const char *Argv[] = {'sh', '-c', CommandCStr, NULL};
  int ErrorCode = 0, ProcessStatus = 0;
  // FIXME: We probably shouldn't hardcode the shell path.
  ErrorCode = posix_spawn(&Pid, '/bin/sh', NULL, &SpawnAttributes,
                          (char *const *)Argv, Environ);
  (void)posix_spawnattr_destroy(&SpawnAttributes);
  if (!ErrorCode) {
    pid_t SavedPid = Pid;
    do {
      // Repeat until call completes uninterrupted.
      Pid = waitpid(SavedPid, &ProcessStatus, /*options=*/0);
    } while (Pid == -1 && errno == EINTR);
    if (Pid == -1) {
      // Fail for some other reason.
      ProcessStatus = -1;
    }
  } else if (ErrorCode == ENOMEM || ErrorCode == EAGAIN) {
    // Fork failure.
    ProcessStatus = -1;
  } else {
    // Shell execution failure.
    ProcessStatus = W_EXITCODE(127, 0);
  }
    
      virtual ~AbstractAuthResolver();
    
      virtual void onChokingEvent(const BtChokingEvent& event) CXX11_OVERRIDE {}
    
      bool enableMmap_;
  unsigned char* mapaddr_;
  int64_t maplen_;
    
    void AbstractOptionHandler::setEraseAfterParse(bool f)
{
  updateFlags(FLAG_ERASE_AFTER_PARSE, f);
}
    
      const std::shared_ptr<Request>& getProxyRequest() const
  {
    return proxyRequest_;
  }
    
      size_t countTier() const;
    
    AnnounceTier::~AnnounceTier() = default;
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
      CFRef<CFArrayRef> items;
  CFArrayRef raw_items = nullptr;
  OSStatus rv = SecPKCS12Import(data, options.get(), &raw_items);
  if (rv != errSecSuccess) {
    A2_LOG_DEBUG(
        fmt('Failed to parse PKCS12 data: %s', errToString(rv).c_str()));
    return false;
  }
  items.reset(raw_items);
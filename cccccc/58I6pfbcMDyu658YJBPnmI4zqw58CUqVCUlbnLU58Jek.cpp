
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Support dtype(bfloat16)
  if (PyDict_SetItemString(PyBfloat16_Type.tp_dict, 'dtype',
                           reinterpret_cast<PyObject*>(&NPyBfloat16_Descr)) <
      0) {
    return false;
  }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Indicates a set of options for a device's usage, which generally must be
// provided at StreamExecutor device-initialization time.
//
// These are intended to be useful-but-not-mandatorily-supported options for
// using devices on the underlying platform. Presently, if the option requested
// is not available on the target platform, a warning will be emitted.
struct DeviceOptions {
 public:
  // When it is observed that more memory has to be allocated for thread stacks,
  // this flag prevents it from ever being deallocated. Potentially saves
  // thrashing the thread stack memory allocation, but at the potential cost of
  // some memory space.
  static const unsigned kDoNotReclaimStackAllocation = 0x1;
    }
    
      // Computes real-to-complex FFT in forward direction.
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<float> &input,
                     DeviceMemory<std::complex<float>> *output) = 0;
  virtual bool DoFft(Stream *stream, Plan *plan,
                     const DeviceMemory<double> &input,
                     DeviceMemory<std::complex<double>> *output) = 0;
    
    #include 'tensorflow/stream_executor/host/host_platform_id.h'
    
    #endif  // TENSORFLOW_STREAM_EXECUTOR_HOST_HOST_PLATFORM_ID_H_

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace stream_executor {
    }
    
    #if PY_MAJOR_VERSION >= 3
  #define PyString_FromStringAndSize PyUnicode_FromStringAndSize
  #if PY_VERSION_HEX < 0x03030000
    #error 'Python 3.0 - 3.2 are not supported.'
  #endif
#define PyString_AsStringAndSize(ob, charpp, sizep)                           \
  (PyUnicode_Check(ob) ? ((*(charpp) = const_cast<char*>(                     \
                               PyUnicode_AsUTF8AndSize(ob, (sizep)))) == NULL \
                              ? -1                                            \
                              : 0)                                            \
                       : PyBytes_AsStringAndSize(ob, (charpp), (sizep)))
#endif
    
      // Largest of two values.
  // Works correctly for special floating point values.
  // Note: 0.0 and -0.0 are not differentiated by Max (Max(0.0, -0.0) is -0.0),
  // which should be OK because, although they (can) have different
  // bit representation, they are observably the same when examined
  // with arithmetic and (in)equality operators.
  template<typename T>
  static T Max(const T x, const T y) {
    return MathLimits<T>::IsNaN(x) || x > y ? x : y;
  }
    
    
    {  // Moving messages on two different arenas should lead to a copy.
  *message2_on_arena = std::move(*message1_on_arena);
  EXPECT_NE(nested, &message2_on_arena->optional_nested_message());
  TestUtil::ExpectAllFieldsSet(*message1_on_arena);
  TestUtil::ExpectAllFieldsSet(*message2_on_arena);
}
    
    string Status::ToString() const {
  if (error_code_ == error::OK) {
    return 'OK';
  } else {
    if (error_message_.empty()) {
      return error::CodeEnumToString(error_code_);
    } else {
      return error::CodeEnumToString(error_code_) + ':' +
          error_message_;
    }
  }
}
    
    // ----
// Author: lar@google.com (Laramie Leavitt)
//
// Template metaprogramming utility functions.
//
// This code is compiled directly on many platforms, including client
// platforms like Windows, Mac, and embedded systems.  Before making
// any changes here, make sure that you're not breaking any platforms.
//
//
// The names chosen here reflect those used in tr1 and the boost::mpl
// library, there are similar operations used in the Loki library as
// well.  I prefer the boost names for 2 reasons:
// 1.  I think that portions of the Boost libraries are more likely to
// be included in the c++ standard.
// 2.  It is not impossible that some of the boost libraries will be
// included in our own build in the future.
// Both of these outcomes means that we may be able to directly replace
// some of these with boost equivalents.
//
#ifndef GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_
#define GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_
    
    
    {  return CreateHashes(base::FilePath(FILE_PATH_LITERAL('payload.json')),
                      base::FilePath(FILE_PATH_LITERAL('.'))) ? 1 : 0;
}

    
    // static
void App::Call(Shell* shell,
               const std::string& method,
               const base::ListValue& arguments,
               base::ListValue* result,
               DispatcherHost* dispatcher_host) {
  if (method == 'GetDataPath') {
    ShellBrowserContext* browser_context =
      static_cast<ShellBrowserContext*>(shell->web_contents()->GetBrowserContext());
    result->AppendString(browser_context->GetPath().value());
    return;
  }else if (method == 'GetArgv') {
    nw::Package* package = shell->GetPackage();
    CommandLine* command_line = CommandLine::ForCurrentProcess();
    CommandLine::StringVector args = command_line->GetArgs();
    CommandLine::StringVector argv = command_line->original_argv();
    }
    }
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    namespace nwapi {
    }
    
     protected:
  ~NwAppSetProxyConfigFunction() override;
    
    NwObjCallObjectMethodFunction::NwObjCallObjectMethodFunction() {
}
    
    #define FAIL_ON_ERROR(x) { DWORD ec; if ((ec = (x)) != ERROR_SUCCESS) { ShowErrorAndExit(ec, __WFUNCTION__, __LINE__); } }
    
        size_t* begin = const_cast<size_t*>(e.begin);
    size_t* split_pt = begin + iLeft;
    
      template <typename ParamT>
  XGBOOST_DEVICE inline double CalcSplitGain(const ParamT &param, int constraint,
                              GradStats left, GradStats right) const {
    const double negative_infinity = -std::numeric_limits<double>::infinity();
    double wleft = CalcWeight(param, left);
    double wright = CalcWeight(param, right);
    double gain =
        CalcGainGivenWeight<ParamT, float>(param, left.sum_grad, left.sum_hess, wleft) +
        CalcGainGivenWeight<ParamT, float>(param, right.sum_grad, right.sum_hess, wright);
    if (constraint == 0) {
      return gain;
    } else if (constraint > 0) {
      return wleft <= wright ? gain : negative_infinity;
    } else {
      return wleft >= wright ? gain : negative_infinity;
    }
  }
    
      std::string Quantitive(RegTree const& tree, int32_t nid, uint32_t depth) override {
    static std::string const kQuantitiveTemplate =
        '{tabs}{nid}:[{fname}<{cond}] yes={left},no={right},missing={missing}';
    auto cond = tree[nid].SplitCond();
    return SplitNodeImpl(tree, nid, kQuantitiveTemplate, SuperT::ToStr(cond), depth);
  }
    
      loss_chg = 50.0;
  sum_hess = 10.0;
  base_weight = 30.0;
  leaf_child_cnt = 0;
  fo->Write(&loss_chg, sizeof(float));
  fo->Write(&sum_hess, sizeof(float));
  fo->Write(&base_weight, sizeof(float));
  fo->Write(&leaf_child_cnt, sizeof(int));
  fo.reset();
  std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(tmp_file.c_str(), 'r'));
    
      GpuIdType const n_available_devices = n_devices_visible - gpu_id;
    
    TEST(ConfigParser, NormalizeConfigEOL) {
  // Test whether strings with NL are loaded correctly.
  dmlc::TemporaryDirectory tempdir;
  const std::string tmp_file = tempdir.path + '/my.conf';
  /* Old Mac OS uses \r for line ending */
  {
    std::string const input = 'foo\rbar\rdog\r';
    std::string const output = 'foo\nbar\ndog\n';
    {
      std::ofstream fp(
          tmp_file,
          std::ios_base::out | std::ios_base::trunc | std::ios_base::binary);
      fp << input;
    }
    {
      ConfigParser parser(tmp_file);
      auto content = parser.LoadConfigFile(tmp_file);
      content = parser.NormalizeConfigEOL(content);
      ASSERT_EQ(content, output);
    }
  }
  /* Windows uses \r\n for line ending */
  {
    std::string const input = 'foo\r\nbar\r\ndog\r\n';
    std::string const output = 'foo\n\nbar\n\ndog\n\n';
    {
      std::ofstream fp(tmp_file,
                       std::ios_base::out | std::ios_base::trunc | std::ios_base::binary);
      fp << input;
    }
    {
      ConfigParser parser(tmp_file);
      auto content = parser.LoadConfigFile(tmp_file);
      content = parser.NormalizeConfigEOL(content);
      ASSERT_EQ(content, output);
    }
  }
}
    
    #define TRANSFORM_GPU_RANGE GPUSet::Range(0, 1)
#define TRANSFORM_GPU_DIST GPUDistribution::Block(GPUSet::Range(0, 1))
    
      devices = GPUSet::Range(1, 0);
  EXPECT_EQ(devices.Size(), 0);
  EXPECT_TRUE(devices.IsEmpty());
    
      /*!
   * \brief get maximum depth
   */
  int MaxDepth() {
    int maxd = 0;
    for (int i = 0; i < param.num_roots; ++i) {
      maxd = std::max(maxd, MaxDepth(i));
    }
    return maxd;
  }
    
        /**
     * Fills a BatchCommandRequest from a TargetedWriteBatch for this BatchWriteOp.
     */
    BatchedCommandRequest buildBatchRequest(const TargetedWriteBatch& targetedBatch) const;
    
    StatusWith<BSONObj> countCommandAsAggregationCommand(const CountCommand& cmd,
                                                     const NamespaceString& nss) {
    BSONObjBuilder aggregationBuilder;
    aggregationBuilder.append('aggregate', nss.coll());
    }
    
        /**
     * Used when there is a canonical query but no query solution (e.g. idhack queries, queries
     * against a NULL collection, queries using the subplan stage).
     */
    static StatusWith<std::unique_ptr<PlanExecutor, PlanExecutor::Deleter>> make(
        OperationContext* opCtx,
        std::unique_ptr<WorkingSet> ws,
        std::unique_ptr<PlanStage> rt,
        std::unique_ptr<CanonicalQuery> cq,
        const Collection* collection,
        YieldPolicy yieldPolicy);
    
    
    {
    {        StatusWith<BSONObj> fixed = fixDocumentForInsert(_opCtx.getServiceContext(), x);
        ASSERT(fixed.isOK());
        x = fixed.getValue();
        ASSERT(x['_id'].type() == jstOID);
        ASSERT(collection->insertDocument(&_opCtx, InsertStatement(x), nullOpDebug, true).isOK());
        wunit.commit();
    }
};
    
    
    {                if (success) {
                    fp->fInputIdx = inputIterator.getIndex();
                } else {
                    fp = (REStackFrame *)fStack->popFrame(fFrameSize);
                }
            }
            break;
    
        UnicodeString patStr;
    for (UChar32 c = utext_next32From(fPattern, 0); c != U_SENTINEL; c = utext_next32(fPattern)) {
        patStr.append(c);
    }
    printf('Original Pattern:  \'%s\'\n', CStr(patStr)());
    printf('   Min Match Length:  %d\n', fMinMatchLen);
    printf('   Match Start Type:  %s\n', START_OF_MATCH_STR(fStartType));
    if (fStartType == START_STRING) {
        UnicodeString initialString(fLiteralText,fInitialStringIdx, fInitialStringLen);
        printf('   Initial match string: \'%s\'\n', CStr(initialString)());
    } else if (fStartType == START_SET) {
        UnicodeString s;
        fInitialChars->toPattern(s, TRUE);
        printf('    Match First Chars: %s\n', CStr(s)());
    }
    
    ScientificNumberFormatter *ScientificNumberFormatter::createSuperscriptInstance(
            DecimalFormat *fmtToAdopt, UErrorCode &status) {
    return createInstance(fmtToAdopt, new SuperscriptStyle(), status);
}
    
           // helper function to save/load map<wstring, shared_ptr<Matrix<ElemType>> structure 
       void SaveParameters(File& f, const map<wstring, shared_ptr<Matrix<ElemType>>>& parameters) const
        {
            // save sizeof(ElemType)
            unsigned int size = sizeof(ElemType);
            f << size;
            // save number of pairs 
            unsigned int numPairs = parameters.size();
            f << numPairs;
            for (auto& x : parameters)
            {
                f << x.first;
                f << *x.second;
            }
            f.Flush();
            return;
        }
    
        ComputationNetworkPtr LoadNetworkFromConfig(const wstring& configFilePaths, bool forceLoad = true)
    {
        if (m_net->GetTotalNumberOfNodes() == 0 || forceLoad) // not built or force load
            LoadFromConfig(configFilePaths);
        else
            m_net->ResetEvalTimeStamps();
        return m_net;
    }
    
    #ifndef let
#define let const auto
#endif
    
    
    {        RedirectStdErr(logpath, config(L'appendLogFile', false));
        LOGPRINTF(stderr, '%ls\n', startupMessage.c_str());
        ::CNTK::Internal::PrintBuiltInfo();
    }
    
    
    {    // model version
    size_t modelVersion = CNTK_MODEL_VERSION_1; // if version info is not there it is version 1
    if (fstream.TryGetMarker(FileMarker::fileMarkerBeginSection, L'BVersion'))
    {
        fstream >> modelVersion;
        fstream.GetMarker(FileMarker::fileMarkerEndSection, L'EVersion');
    }
    if (modelVersion > CURRENT_CNTK_MODEL_VERSION)
        InvalidArgument('Read: The model file has a newer format version (%d) than this CNTK version can handle (%d).', (int)modelVersion, (int)CURRENT_CNTK_MODEL_VERSION);
    
    return modelVersion;
}
    
        size_t i = 0;
    for (auto& inputNode : m_inputNodes)
    {
        // const cast: The matrix class takes this over without copying and could theoretically change the contents,
        // though it doesn't in this case.
        auto& buffer = const_cast<ValueBuffer<ElemType, ValueContainer>&>(inputs[i]);
        auto matrix = dynamic_pointer_cast<Matrix<ElemType>>(inputNode->ValuePtr());
        auto type = matrix->GetMatrixType();
        size_t numRows = inputNode->GetSampleLayout().GetNumElements();
    }
    
                    if (m_traceLevel > 3)
                {
                    double time = threadTimer.ElapsedSeconds();
                    fprintf(stderr, '\t\t -- pullAndRequest, GPU -> CPU time %lf \n', time);
                }
    
    BOOST_AUTO_TEST_CASE(EvalScalarTimesDualOutputTest)
{
    std::string modelDefinition =
        'deviceId = -1 \n'
        'precision = \'float\' \n'
        'traceLevel = 1 \n'
        'run=NDLNetworkBuilder \n'
        'NDLNetworkBuilder=[ \n'
        'i1 = Input(1) \n'
        'i2 = Input(1) \n'
        'o1 = Times(Constant(3), i1, tag=\'output\') \n'
        'o2 = Times(Constant(5), i1, tag=\'output\') \n'
        'FeatureNodes = (i1) \n'
        '] \n';
    }

        
        
    {  // Reorder the frequency matrix from
  //    [[F(0, 0),  F(0, -1/4),   F(0, -2/4)],
  //    [F(-1/4, 0), F(-1/4, -1/4), F(-1/4, -2/4)],
  //    [F(-2/4, 0), F(-2/4, -1/4), F(-2/4, -2/4)],
  //    [F(-3/4, 0), F(-3/4, -1/4), F(-3/4, -2/4)]]
  // to
  //    [[F(0, 0),  F(0, 1/4),   F(0, 2/4)],
  //    [F(1/4, 0), F(1/4, 1/4), F(1/4, 2/4)],
  //    [F(2/4, 0), F(2/4, 1/4), F(2/4, 2/4)],
  //    [F(3/4, 0), F(3/4, 1/4), F(3/4, 2/4)]]
  for (int i = 0; i < fft_height; ++i) {
    for (int j = 1; j < fft_width + 2; j += 2) {
      fft_input_output[i][j] = -fft_input_output[i][j];
    }
  }
}
    
    
    {
    {#undef DEFINE_GPU_SPEC
}  // namespace functor
}  // namespace tensorflow
    
    #endif  // TENSORFLOW_CORE_KERNELS_MATRIX_SET_DIAG_OP_H_

    
      // Returns true if the tensor given by index 'i' is an output of the entire
  // subgraph.
  bool IsSubgraphOutput(int i) const { return subgraph_outputs_[i]; }
    
    TEST_F(OpLevelCostEstimatorTest, FusedConv2DBiasActivationNCHW_HWIO) {
  auto cost = PredictCosts(DescribeFusedConv2DBiasActivation(
      16, 19, 19, 48, 48, 5, 5, 19, 19, 256, /* has_side_input = */ true,
      'NCHW', 'HWIO'));
  EXPECT_EQ(Costs::Duration(1416808), cost.memory_time);
  EXPECT_EQ(Costs::Duration(355616770), cost.compute_time);
  EXPECT_EQ(Costs::Duration(357033578), cost.execution_time);
  EXPECT_EQ(1, cost.num_ops_total);
  EXPECT_FALSE(cost.inaccurate);
  EXPECT_EQ(0, cost.num_ops_with_unknown_shapes);
}
    
    #else
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    /**
 * Changelog:
 * - March 2013, Diederik Huys:    original version
 * - November 2014, Pieter Wuille: updated to use Peter Dettman's parallel multiplication algorithm
 * - December 2014, Pieter Wuille: converted from YASM to GCC inline assembly
 */
    
      // Adds the given pix to the set of pages in the PDF file, with the given
  // caption added to the top.
  void AddPix(const Pix* pix, const char* caption) {
    int depth = pixGetDepth(const_cast<Pix*>(pix));
    int color = depth < 8 ? 1 : (depth > 8 ? 0x00ff0000 : 0x80);
    Pix* pix_debug = pixAddSingleTextblock(
        const_cast<Pix*>(pix), fonts_, caption, color, L_ADD_BELOW, nullptr);
    pixaAddPix(pixa_, pix_debug, L_INSERT);
  }
    
    // A useful base struct to facilitate the common operation of sorting a vector
// of simple or smart-pointer data using a separate key. Similar to STL pair.
template <typename Key, typename Data>
struct KDPair {
  KDPair() = default;
  KDPair(Key k, Data d) : data(d), key(k) {}
    }
    
      // Initialize the bool array to the given size of feature space.
  // The feature_map is just borrowed, and must exist for the entire
  // lifetime of the IntFeatureDist.
  void Init(const IntFeatureMap* feature_map);
    
    void get_btree_superblock_and_txn_for_reading(
        cache_conn_t *cache_conn,
        cache_snapshotted_t snapshotted,
        scoped_ptr_t<real_superblock_t> *got_superblock_out,
        scoped_ptr_t<txn_t> *txn_out);
    
    MUST_USE bool store_t::acquire_sindex_superblock_for_read(
        const sindex_name_t &name,
        const std::string &table_name,
        real_superblock_t *superblock,
        release_superblock_t release_superblock,
        scoped_ptr_t<sindex_superblock_t> *sindex_sb_out,
        std::vector<char> *opaque_definition_out,
        uuid_u *sindex_uuid_out)
    THROWS_ONLY(sindex_not_ready_exc_t) {
    assert_thread();
    rassert(opaque_definition_out != NULL);
    rassert(sindex_uuid_out != NULL);
    }
    
    // The following macros are useful for writing death tests.
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_MESSAGE_H_
#define GTEST_INCLUDE_GTEST_GTEST_MESSAGE_H_
    
      // Returns the TestResult containing information on test failures and
  // properties logged outside of individual test cases.
  const TestResult& ad_hoc_test_result() const;
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_PRED_IMPL_H_

    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27>
struct Templates27 {
  typedef TemplateSel<T1> Head;
  typedef Templates26<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27> Tail;
};
    
    $range i 1..n-1
$for i [[
$range j 1..i
$range k i+1..n
template <$for j, [[typename T$j]]>
struct Types<$for j, [[T$j]]$for k[[, internal::None]]> {
  typedef internal::Types$i<$for j, [[T$j]]> type;
};
    
      // Returns true if no interceptors are run. Returns false otherwise if there
  // are interceptors registered. After the interceptors are done running \a f
  // will be invoked. This is to be used only by BaseAsyncRequest and
  // SyncRequest.
  bool RunInterceptors(std::function<void(void)> f) {
    // This is used only by the server for initial call request
    GPR_CODEGEN_ASSERT(reverse_ == true);
    GPR_CODEGEN_ASSERT(call_->client_rpc_info() == nullptr);
    auto* server_rpc_info = call_->server_rpc_info();
    if (server_rpc_info == nullptr ||
        server_rpc_info->interceptors_.size() == 0) {
      return true;
    }
    callback_ = std::move(f);
    RunServerInterceptors();
    return false;
  }
    
    static grpc_iomgr_platform_vtable vtable = {
    iomgr_platform_init,
    iomgr_platform_flush,
    iomgr_platform_shutdown,
    iomgr_platform_shutdown_background_closure,
    iomgr_platform_is_any_background_poller_thread,
    iomgr_platform_add_closure_to_background_poller};
    
    
    {  joined = gpr_strjoin(parts, 1, &joined_len);
  GPR_ASSERT(0 == strcmp('one', joined));
  gpr_free(joined);
}
    
    int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  int ret = RUN_ALL_TESTS();
  return ret;
}

    
    // Initialize the lock, with an optional workqueue to shift load to when
// necessary
grpc_combiner* grpc_combiner_create(void);
    
    
    {}  // namespace grpc_impl

    
    
    {
    { private:
  std::shared_ptr<grpc::Channel> CreateChannelWithInterceptors(
      const string& target, const grpc::ChannelArguments& args,
      std::vector<
          std::unique_ptr<experimental::ClientInterceptorFactoryInterface>>
          interceptor_creators) override {
    grpc_channel_args channel_args;
    args.SetChannelArgs(&channel_args);
    return CreateChannelInternal(
        '',
        grpc_cronet_secure_channel_create(engine_, target.c_str(),
                                          &channel_args, nullptr),
        std::move(interceptor_creators));
  }
  void* engine_;
};
}  // namespace grpc
namespace grpc_impl {
std::shared_ptr<ChannelCredentials> CronetChannelCredentials(void* engine) {
  return std::shared_ptr<ChannelCredentials>(
      new grpc::CronetChannelCredentialsImpl(engine));
}
}  // namespace grpc_impl

    
    #include <gtest/gtest.h>
    
    TEST_F(HybridEnd2endTest, GenericEchoAsyncRequestStreamResponseStream) {
  typedef EchoTestService::WithAsyncMethod_RequestStream<
      EchoTestService::WithGenericMethod_Echo<
          EchoTestService::WithAsyncMethod_ResponseStream<TestServiceImpl>>>
      SType;
  SType service;
  AsyncGenericService generic_service;
  SetUpServer(&service, nullptr, &generic_service, nullptr);
  ResetStub();
  std::thread generic_handler_thread(HandleGenericCall, &generic_service,
                                     cqs_[0].get());
  std::thread request_stream_handler_thread(HandleClientStreaming<SType>,
                                            &service, cqs_[1].get());
  std::thread response_stream_handler_thread(HandleServerStreaming<SType>,
                                             &service, cqs_[2].get());
  TestAllMethods();
  generic_handler_thread.join();
  request_stream_handler_thread.join();
  response_stream_handler_thread.join();
}
    
    String toString(const Array& arr);
String toStringForDisplay(const Array& arr);
    
        // Using the new protocol, so variables contain only names.  Fetch the value
    // separately.
    CmdVariable cmd;
    cmd.m_frame = frame;
    cmd.m_variables.reset();
    cmd.m_varName = name;
    cmd.m_filter = text;
    cmd.m_formatMaxLen = 200;
    cmd.m_version = 2;
    auto rcmd = client.xend<CmdVariable>(&cmd);
    if (!rcmd->m_variables.empty()) {
      assertx(rcmd->m_variables[name].isString());
      value = rcmd->m_variables[name].toString();
      found = true;
    } else if (text.empty()) {
      // Not missing because filtered out, assume the value is too large.
      value = s_omitted;
      found = true;
    } else if (name.find(text, 0, false) >= 0) {
      // Server should have matched it.  Assume missing because value is too
      // large.
      value = s_omitted;
      found = true;
    } else {
      // The variable was filtered out on the server, using text.  Or it was
      // just too large.  Either way we skip over it.
      continue;
    }
    
          switch (scope->m_scopeType) {
        case ScopeType::Locals:
          success = setLocalVariable(
            session,
            name,
            strValue,
            scope,
            &body
          );
          break;
    }
    
    TypedValue* ActRec::getExtraArg(unsigned ind) const {
  assertx(hasExtraArgs() || hasVarEnv());
  return hasExtraArgs() ? getExtraArgs()->getExtraArg(ind) :
         hasVarEnv()    ? getVarEnv()->getExtraArg(ind) :
         static_cast<TypedValue*>(nullptr);
}
    
    
    {  Init::InitFromSpec(traceSpec, modules.data());
  CompactVector<BumpRelease> result;
  for (int i = 0; i < NumModules; i++) {
    if (modules[i]) {
      result.emplace_back(static_cast<Module>(i), -modules[i]);
    }
  }
  return result;
}
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write at a nonexisting key
        object.at('the fast') = 'il rapido';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    using json = nlohmann::json;
    
    
    {    std::cout << null << '\n';
    std::cout << *res2.first << ' ' << std::boolalpha << res2.second << '\n';
}

    
    /// Prefix used for posix tar archive.
const std::string kTestCarveNamePrefix = 'carve_';
    
    
    {
    {  // If we modify the input interval the splay will change.
  auto splay3 = restoreSplayedValue('pack_test_query_name', 3600 * 10);
  EXPECT_GE(splay3, 3600U * 10 - (360 * 10));
  EXPECT_LE(splay3, 3600U * 10 + (360 * 10));
  EXPECT_NE(splay, splay3);
}
}

    
    Expected<int32_t, DatabaseError> Database::getInt32Or(
    const std::string& domain,
    const std::string& key,
    const int32_t default_value) {
  auto result = getInt32(domain, key);
  if (!result && result.getError() == DatabaseError::KeyNotFound) {
    return default_value;
  }
  return result;
}
    
    void InMemoryDatabase::close() {
  VLOG(1) << 'Closing db... ';
  debug_only::verifyTrue(is_open_, 'database is not open');
  is_open_ = false;
  auto status = destroyDB();
  debug_only::verifyTrue(status.isValue(),
                         'InMemoryDatabase::destroyDB couldn't fail');
}
    
      /** @brief Virtual method which should implement custom logging.
   *
   *  LoggerPlugin::logString should be implemented by a subclass of
   *  LoggerPlugin which needs to log a string in a custom way.
   *
   *  @return an instance of osquery::Status which indicates the success or
   *  failure of the operation.
   */
  virtual Status logString(const std::string& s) = 0;
    
    namespace osquery {
    }
    
    GTEST_TEST(InMemoryDatabaseTest, test_unknown_key) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  ASSERT_FALSE(db->open().isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key', 12).isError());
  auto result = db->getInt32(kPersistentSettings, 'key_');
  EXPECT_FALSE(result);
  EXPECT_EQ(result.takeError(), DatabaseError::KeyNotFound);
}
    
    
    {  m_operation.clear();
  return true;
}
    
      bool multiConnectionOperation() const override { return false; }
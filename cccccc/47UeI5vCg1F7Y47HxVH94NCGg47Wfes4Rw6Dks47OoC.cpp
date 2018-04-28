
        
        namespace HPHP {
    }
    
      bool m_done;
  HeaderMap m_responseHeaders;
  std::string m_response;
  int m_code;
    
    ///////////////////////////////////////////////////////////////////////////////
// extension class methods
static String HHVM_METHOD(GMP, serialize) {
  auto data = Native::data<GMPData>(this_);
    }
    
    #undef DECLARE_VNUM
    
      LdSSwitchData data;
  data.numCases   = numCases;
  data.cases      = &cases[0];
  data.defaultSk  = SrcKey{curSrcKey(env),
                           bcOff(env) + iv.strvec()[iv.size() - 1].dest};
  data.bcSPOff    = spOffBCFromFP(env);
    
    
    {
    {  if (c1headc2head == max) {
    // flip c1
    std::reverse(c1->targets.begin(), c1->targets.end());
  } else if (c1headc2tail == max) {
    // flip c1 c2
    std::reverse(c1->targets.begin(), c1->targets.end());
    std::reverse(c2->targets.begin(), c2->targets.end());
  } else if (c1tailc2tail == max) {
    // flip c2
    std::reverse(c2->targets.begin(), c2->targets.end());
  }
}
}
    
    /*
 * /tmp files created by dlopen_embedded_data().
 */
std::vector<std::string> s_tmp_files;
    
    bool CurlShareResource::isLongOption(long option) {
  switch (option) {
    case CURLSHOPT_SHARE:
    case CURLSHOPT_UNSHARE:
      return true;
    default:
      return false;
  }
}
    
      // Did you forget to specify ControlFlowInfo?
  assertx(!instrIsControlFlow(extra->opcode));
  auto const helper = interpOneEntryPoints[size_t(extra->opcode)];
  auto const args = argGroup(env, inst)
    .ssa(1)
    .addr(sp, cellsToBytes(extra->spOffset.offset))
    .imm(extra->bcOff);
    
     private:
  /// When a service ends, it will remove itself from the dispatcher.
  static void removeService(const InternalRunnable* service);
    
      /*
   * @brief Helper function to POST a carve to the graph endpoint.
   *
   * Once all of the files have been carved and the tgz has been
   * created, we POST the carved file to an endpoint specified by the
   * carver_start_endpoint and carver_continue_endpoint
   */
  Status postCarve(const boost::filesystem::path& path);
    
    TEST_F(CarverTests, test_carve_files_locally) {
  auto guid_ = genGuid();
  auto paths_ = getCarvePaths();
  std::string requestId = '';
  Carver carve(getCarvePaths(), guid_, requestId);
    }
    
    
    {/// Clear decorations for a source when it updates.
void clearDecorations(const std::string& source);
}

    
    std::string stringFromCFString(const CFStringRef& cf_string) {
  // Access, then convert the CFString. CFStringGetCStringPtr is less-safe.
  CFIndex length = CFStringGetLength(cf_string);
  char* buffer = (char*)malloc(length + 1);
  if (buffer == nullptr) {
    return '';
  }
    }
    
      EXPECT_EQ(FLAGS_test_int64_alias, (int64_t)1 << 34);
  FLAGS_test_int64_alias = (int64_t)1 << 35;
  EXPECT_EQ(FLAGS_test_int64, (int64_t)1 << 35);
  FLAGS_test_int64 = (int64_t)1 << 36;
  EXPECT_EQ(FLAGS_test_int64_alias, (int64_t)1 << 36);
  EXPECT_TRUE(FLAGS_test_int64_alias > 0);
    
      ASSERT_EQ(0U, geteuid());
    
    TEST(TypedIOBuf, Simple) {
  auto buf = IOBuf::create(0);
  TypedIOBuf<uint64_t> typed(buf.get());
  const uint64_t n = 10000;
  typed.reserve(0, n);
  EXPECT_LE(n, typed.capacity());
  for (uint64_t i = 0; i < n; i++) {
    *typed.writableTail() = i;
    typed.append(1);
  }
  EXPECT_EQ(n, typed.length());
  for (uint64_t i = 0; i < n; i++) {
    EXPECT_EQ(i, typed.data()[i]);
  }
}
enum BufType {
  CREATE,
  TAKE_OWNERSHIP_MALLOC,
  TAKE_OWNERSHIP_CUSTOM,
  USER_OWNED,
};
    
    template <typename C>
struct compare_greater : detail::cmp_pred<C, ordering::gt, 0> {
  using detail::cmp_pred<C, ordering::gt, 0>::cmp_pred;
};
    
    namespace folly {
namespace fs {
    }
    }
    
    
    {    return fileWriterFactory_.processOption(name, value);
  }
    
    AbstractProxyRequestCommand::~AbstractProxyRequestCommand() = default;
    
    class HttpConnection;
class SocketCore;
    
      void makeNewConnections(int num);
    
    class BinaryStream;
    
    namespace {
class FindCompletedAllowedTier {
public:
  bool operator()(const std::shared_ptr<AnnounceTier>& tier) const
  {
    switch (tier->event) {
    case AnnounceTier::DOWNLOADING:
    case AnnounceTier::COMPLETED:
      return true;
    default:
      return false;
    }
  }
};
} // namespace
    
      /**
   * Moves current tier pointer to the tier to which the 'stopped' event can
   * be sent.
   * 2-stage search operation is made.
   * The first search operation is performed from current pointer position
   * to the end. If no such tier is found, the second search is performed from
   * the first to the current pointer position.
   */
  void moveToStoppedAllowedTier();
  void moveToCompletedAllowedTier();
    
    
    {} // namespace aria2
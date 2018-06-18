
        
        static int set_flags(struct ifaddrs* ifaddr) {
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (fd == -1) {
		return -1;
	}
	ifreq ifr;
	memset(&ifr, 0, sizeof(ifr));
	strncpy(ifr.ifr_name, ifaddr->ifa_name, IFNAMSIZ - 1);
	int rc = ioctl(fd, SIOCGIFFLAGS, &ifr);
	close(fd);
	if (rc == -1) {
		return -1;
	}
	ifaddr->ifa_flags = ifr.ifr_flags;
	return 0;
}
    
    int PowerIphone::get_power_percent_left() {
	if (UpdatePowerInfo()) {
		return percent_left;
	} else {
		return -1;
	}
}
    
    void WebSocketClient::_bind_methods() {
	ClassDB::bind_method(D_METHOD('connect_to_url', 'url', 'protocols', 'gd_mp_api'), &WebSocketClient::connect_to_url, DEFVAL(PoolVector<String>()), DEFVAL(false));
	ClassDB::bind_method(D_METHOD('disconnect_from_host'), &WebSocketClient::disconnect_from_host);
	ClassDB::bind_method(D_METHOD('set_verify_ssl_enabled', 'enabled'), &WebSocketClient::set_verify_ssl_enabled);
	ClassDB::bind_method(D_METHOD('is_verify_ssl_enabled'), &WebSocketClient::is_verify_ssl_enabled);
    }
    
    	template <class N, class M>
	static MethodBind *bind_method(N p_method_name, M p_method, const Variant &p_def1, const Variant &p_def2, const Variant &p_def3, const Variant &p_def4, const Variant &p_def5, const Variant &p_def6) {
    }
    
    struct GodotAllContactResultCallback : public btCollisionWorld::ContactResultCallback {
public:
	const btCollisionObject *m_self_object;
	PhysicsDirectSpaceState::ShapeResult *m_results;
	int m_resultMax;
	int m_count;
	const Set<RID> *m_exclude;
    }
    
      if (get_bits(8) != 8)   /* precision: sorry, only 8-bit precision is supported right now */
    stop_decoding(JPGD_BAD_PRECISION);
    
        bool transposeA = false, transposeB = false;
    float alpha = 0.3f;
    float beta = 0.0f;
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mB, transposeA, mAdense, transposeB, beta, mC);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mB, transposeA, mAsparse, transposeB, beta, mD);
    
    cudaStream_t GPUDataTransferer::GetFetchStream()
{
    return s_fetchStream;
}
    
        // allocate memory for all bnNodes evalOrder
    m_net->AllocateAllMatrices(bnNodes, std::vector<ComputationNodeBasePtr>(), nullptr);
    
            // set the include paths to all paths that configs were read from; no additional configurable include paths are supported by BrainScriptNetworkBuilder
        auto includePaths = ConfigParameters::GetBrainScriptNetworkBuilderIncludePaths();
    
        // FindSymbol - Find matching symbols in the symbol table
    // symbol - symbol to find
    // netNdl - [out] netNdl associated with this symbol
    // returns - nodes this symbol references, might be empty
    vector<ComputationNodeBasePtr> FindSymbols(const std::string& symbol, NetNdl<ElemType>*& netNdl)
    {
        size_t firstStart, firstCount, secondStart, secondCount;
        netNdl = ParseName(symbol, firstStart, firstCount, secondStart, secondCount);
        // take off the prefix
        std::string search;
        if (firstStart == symbol.length())
        {
            // this case is just the model label with nothing else, in that case we want the all nodes
            search = '*';
        }
        else
        {
            search = symbol.substr(firstStart);
        }
    }
    
    // ---------------------------------------------------------------------------
// ProgressTracing -- static helper class for logging a progress indicator
//
// This is for use by the cluster management tools for indicating global progress to the user.
//
// This logs to stdout (not stderr) in a specific format, e.g. understood by the Philly cluster. The format is:
//  PROGRESS xx.xx%
//  EVALERR xx.xx%
//
// Specifically, this class handles a two-level progress computation:
//  - outer level: loop over multiple training phases, each running multiple steps (epochs)
//  - inner level in one training phase: loop over multiple steps, *without* knowledge about the other training phases
//
// In order for the inner level to log correctly in the global context, the outer loop
// must inform this class about the total number of steps and the current offset to apply in the inner level.
// ---------------------------------------------------------------------------
    
    
    {    return std::equal(s1.begin(), s1.end(), s2.begin(), [](const TElement& a, const TElement& b)
    {
        return std::tolower(a) == std::tolower(b);
    });
}
    
    
    {
    {} // namespace exception_tracer
} // namespace folly

    
    TEST(WriteChainAsyncTransportWrapperTest, TestChainedIov) {
  TestWriteChainAsyncTransportWrapper transport;
  auto buf = folly::IOBuf::copyBuffer('hello');
  buf->prependChain(folly::IOBuf::copyBuffer('world'));
    }
    
      // Buffer lengths: 1500 20 1234 900 321
  // Attempting to gather more data than available should fail
  EXPECT_THROW(chainClone->gather(4000), std::overflow_error);
  // Coalesce the first 3 buffers
  chainClone->gather(1521);
  EXPECT_EQ(3, chainClone->countChainElements());
  EXPECT_EQ(0, arrayBufFreeCount);
    
        // If the event loop indicate that there were no more events, and
    // we also didn't have any loop callbacks to run, there is nothing left to
    // do.
    if (res != 0 && !ranLoopCallbacks) {
      // Since Notification Queue is marked 'internal' some events may not have
      // run.  Run them manually if so, and continue looping.
      //
      if (getNotificationQueueSize() > 0) {
        fnRunner_->handlerReady(0);
      } else {
        break;
      }
    }
    
    template <typename DigestT, typename ClockT>
BufferedSlidingWindow<DigestT, ClockT>::BufferedSlidingWindow(
    size_t nBuckets,
    typename ClockT::duration bufferDuration,
    size_t bufferSize,
    size_t digestSize)
    : BufferedStat<DigestT, ClockT>(bufferDuration, bufferSize, digestSize),
      slidingWindow_([=]() { return DigestT(digestSize); }, nBuckets) {}
    
    
    {  size_t count = 0;
  for (const auto& vec : valuesVec) {
    count += vec.size();
  }
  if (count) {
    std::vector<double> values;
    values.reserve(count);
    for (const auto& vec : valuesVec) {
      values.insert(values.end(), vec.begin(), vec.end());
    }
    std::sort(values.begin(), values.end());
    DigestT digest(digestSize_);
    digests.push_back(digest.merge(values));
  }
  return DigestT::merge(digests);
}
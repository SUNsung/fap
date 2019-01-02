BENCHMARK_RELATIVE(bigFormat_format, iters) {
  BenchmarkSuspender suspender;
  char* p;
  auto writeToBuf = [&p](StringPiece sp) mutable {
    memcpy(p, sp.data(), sp.size());
    p += sp.size();
  };
    }
    
    
    {  FunctionRef<int(int, std::vector<int> const&)> variant6const = cof;
  EXPECT_EQ(100 + 6 * 21, variant6const(21, {}));
  FunctionRef<int(int, std::vector<int> const&)> const cvariant6const = cof;
  EXPECT_EQ(100 + 6 * 21, cvariant6const(21, {}));
}
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    #pragma once
    
      bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_weak(
        expected, n, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    auto newptr = get_newptr(n);
    PackedPtr oldptr, expectedptr;
    }
    
        virtual void testCaseStarting( TestCaseInfo const& testInfo ) CATCH_OVERRIDE {
        for( Reporters::const_iterator it = m_reporters.begin(), itEnd = m_reporters.end();
                it != itEnd;
                ++it )
            (*it)->testCaseStarting( testInfo );
    }
    
    #pragma once
    
    
    {
    {    /// <summary> std::make_shared using Napa default allocator. </summary>
    template <typename T, typename... Args>
    std::shared_ptr<T> MakeShared(Args&&... args) {
        return AllocateShared<T>(
            GetDefaultAllocator(), 
            std::forward<Args>(args)...);
    }
}
}
    
            auto functionTemplate = v8::FunctionTemplate::New(isolate, callback);
        auto function = functionTemplate->GetFunction();
        auto functionName = v8::String::NewFromUtf8(isolate, name);
        function->SetName(functionName);
    
        /// <summary> Exports a getter function for retrieves the configured logging provider. </summary>
    NAPA_API LoggingProvider& GetLoggingProvider();
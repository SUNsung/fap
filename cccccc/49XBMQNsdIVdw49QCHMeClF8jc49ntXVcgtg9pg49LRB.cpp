
        
        REGISTER_CPU_OPERATOR(GivenTensorFill, GivenTensorFillOp<float, CPUContext>);
REGISTER_CPU_OPERATOR(
    GivenTensorDoubleFill,
    GivenTensorFillOp<double, CPUContext>);
REGISTER_CPU_OPERATOR(GivenTensorBoolFill, GivenTensorFillOp<bool, CPUContext>);
REGISTER_CPU_OPERATOR(GivenTensorIntFill, GivenTensorFillOp<int, CPUContext>);
REGISTER_CPU_OPERATOR(
    GivenTensorInt64Fill,
    GivenTensorFillOp<int64_t, CPUContext>);
REGISTER_CPU_OPERATOR(
    GivenTensorStringFill,
    GivenTensorFillOp<std::string, CPUContext>);
    
      grpc_error* Init(grpc_call_element* elem,
                   const grpc_call_element_args* args) override;
    
    // These helper functions return the SpanContext and Span, respectively
// associated with the census_context* stored by grpc. The user will need to
// call this for manual propagation of tracing data.
::opencensus::trace::SpanContext SpanContextFromCensusContext(
    const census_context* ctxt);
::opencensus::trace::Span SpanFromCensusContext(const census_context* ctxt);
    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
      ::opencensus::trace::SpanContext ToSpanContext() const {
    return ::opencensus::trace::SpanContext(
        ::opencensus::trace::TraceId(trace_id),
        ::opencensus::trace::SpanId(span_id),
        ::opencensus::trace::TraceOptions(trace_options));
  }
    
    Aggregation BytesDistributionAggregation() {
  return Aggregation::Distribution(BucketBoundaries::Explicit(
      {0, 1024, 2048, 4096, 16384, 65536, 262144, 1048576, 4194304, 16777216,
       67108864, 268435456, 1073741824, 4294967296}));
}
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetInt(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    		// the alpha mix for a 4x4 block of pixels
		enum class SourceAlphaMix
		{
			UNKNOWN,
			//
			OPAQUE,			// all 1.0
			TRANSPARENT,	// all 0.0 or NAN
			TRANSLUCENT		// not all opaque or transparent
		};
    
    #define AF_BLUE_PROPERTY_CJK_TOP    ( 1U << 0 )       /* must have value 1 */
#define AF_BLUE_PROPERTY_CJK_HORIZ  ( 1U << 1 )       /* must have value 2 */
#define AF_BLUE_PROPERTY_CJK_RIGHT  AF_BLUE_PROPERTY_CJK_TOP
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
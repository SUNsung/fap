
        
        #include <grpc/support/port_platform.h>
    
    void FilterTrailingMetadata(grpc_metadata_batch* b, uint64_t* elapsed_time) {
  if (b->idx.named.grpc_server_stats_bin != nullptr) {
    ServerStatsDeserialize(
        reinterpret_cast<const char*>(GRPC_SLICE_START_PTR(
            GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md))),
        GRPC_SLICE_LENGTH(GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md)),
        elapsed_time);
    grpc_metadata_batch_remove(b, b->idx.named.grpc_server_stats_bin);
  }
}
    
    // These helper functions return the SpanContext and Span, respectively
// associated with the census_context* stored by grpc. The user will need to
// call this for manual propagation of tracing data.
::opencensus::trace::SpanContext SpanContextFromCensusContext(
    const census_context* ctxt);
::opencensus::trace::Span SpanFromCensusContext(const census_context* ctxt);
    
    #include <grpc/impl/codegen/port_platform.h>
    
    		/*
		Convert legacy user-profile.cmd to new name user_profile.cmd
		*/
		PathCombine(legacyUserProfilePath, userConfigDirPath, L'user-profile.cmd');
		if (PathFileExists(legacyUserProfilePath))
		{
			PathCombine(userProfilePath, userConfigDirPath, L'user_profile.cmd');
    }
    
        // read-only access
    
    
    {    std::cout << null << '\n';
    std::cout << *res2.first << ' ' << std::boolalpha << res2.second << '\n';
}

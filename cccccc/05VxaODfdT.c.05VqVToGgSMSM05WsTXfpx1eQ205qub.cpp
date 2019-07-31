
        
        
    {
    {
    {
    {      // Add the completed element to the tuple.
      tupleNode->addChild(elt, Dem);
    }
    return tupleNode;
  }
  case MetadataKind::HeapLocalVariable:
  case MetadataKind::HeapGenericLocalVariable:
  case MetadataKind::ErrorObject:
    break;
  case MetadataKind::Opaque:
  default: {
    if (auto builtinType = _buildDemanglerForBuiltinType(type, Dem))
      return builtinType;
    
    // FIXME: Some opaque types do have manglings, but we don't have enough info
    // to figure them out.
    break;
  }
  }
  // Not a type.
  return nullptr;
}
    
      SILFunction *getDynamicallyReplacedFunction() const {
    return ReplacedFunction;
  }
  void setDynamicallyReplacedFunction(SILFunction *f) {
    assert(ReplacedFunction == nullptr && 'already set');
    assert(!hasObjCReplacement());
    }
    
    #endif

    
    
    {  // We do not use %p here for our pointers since the format is implementation
  // defined. This makes it logically impossible to check the output. Forcing
  // hexadecimal solves this issue.
  // If the symbol is not available, we print out <unavailable> + offset
  // from the base address of where the image containing framePC is mapped.
  // This gives enough info to reconstruct identical debugging target after
  // this process terminates.
  if (shortOutput) {
    fprintf(stderr, '%s`%s + %td', libraryName.data(), symbolName.c_str(),
            offset);
  } else {
    constexpr const char *format = '%-4u %-34s 0x%0.16' PRIxPTR ' %s + %td\n';
    fprintf(stderr, format, index, libraryName.data(), symbolAddr,
            symbolName.c_str(), offset);
  }
#else
  if (shortOutput) {
    fprintf(stderr, '<unavailable>');
  } else {
    constexpr const char *format = '%-4u 0x%0.16tx\n';
    fprintf(stderr, format, index, reinterpret_cast<uintptr_t>(framePC));
  }
#endif
}
    
    
    {  const SelfWitnessTableMetadataSource *
  createSelfWitnessTable() {
    return SelfWitnessTableMetadataSource::create(*this);
  }
};
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    
    
    Slice::Slice (PixelType t,
              char *b,
              size_t xst,
              size_t yst,
              int xsm,
              int ysm,
              double fv,
              bool xtc,
              bool ytc)
:
    type (t),
    base (b),
    xStride (xst),
    yStride (yst),
    xSampling (xsm),
    ySampling (ysm),
    fillValue (fv),
    xTileCoords (xtc),
    yTileCoords (ytc)
{
    // empty
}
    
        IMF_EXPORT
    Iterator                    find (const char name[]);
    IMF_EXPORT
    ConstIterator               find (const char name[]) const;
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
        typedef std::map <Name, Attribute *> AttributeMap;
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT

    
    class InputPart
{
    public:
        IMF_EXPORT
        InputPart(MultiPartInputFile& multiPartFile, int partNumber);
    }
    
    #endif /* ERRORS_HPP_ */

    
    
    {        sindex_sbs_out->push_back(
                make_scoped<sindex_access_t>(
                        get_sindex_slice(it->second.id),
                        it->first,
                        it->second,
                        make_scoped<sindex_superblock_t>(std::move(superblock_lock))));
    }
    
    // Next, associate a list of types with the test case, which will be
// repeated for each type in the list.  The typedef is necessary for
// the macro to parse correctly.
typedef testing::Types<char, int, unsigned int> MyTypes;
TYPED_TEST_CASE(FooTest, MyTypes);
    
      // RemoveFileName returns the directory path with the filename removed.
  // Example: FilePath('path/to/file').RemoveFileName() returns 'path/to/'.
  // If the FilePath is 'a_file' or '/a_file', RemoveFileName returns
  // FilePath('./') or, on Windows, FilePath('.\\'). If the filepath does
  // not have a file, like 'just/a/dir/', it returns the FilePath unmodified.
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveFileName() const;
    
    
    {    const ParamGeneratorInterface<ParamType>* const base_;
    // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
    // current[i]_ is the actual traversing iterator.
    const typename ParamGenerator<T1>::iterator begin1_;
    const typename ParamGenerator<T1>::iterator end1_;
    typename ParamGenerator<T1>::iterator current1_;
    const typename ParamGenerator<T2>::iterator begin2_;
    const typename ParamGenerator<T2>::iterator end2_;
    typename ParamGenerator<T2>::iterator current2_;
    const typename ParamGenerator<T3>::iterator begin3_;
    const typename ParamGenerator<T3>::iterator end3_;
    typename ParamGenerator<T3>::iterator current3_;
    const typename ParamGenerator<T4>::iterator begin4_;
    const typename ParamGenerator<T4>::iterator end4_;
    typename ParamGenerator<T4>::iterator current4_;
    ParamType current_value_;
  };  // class CartesianProductGenerator4::Iterator
    
      std::unique_ptr<ChannelInterface> GetInterceptedChannel() override {
    auto* info = call_->client_rpc_info();
    if (info == nullptr) {
      return std::unique_ptr<ChannelInterface>(nullptr);
    }
    // The intercepted channel starts from the interceptor just after the
    // current interceptor
    return std::unique_ptr<ChannelInterface>(new InterceptedChannel(
        info->channel(), current_interceptor_index_ + 1));
  }
    
    extern grpc_tcp_server_vtable grpc_windows_tcp_server_vtable;
extern grpc_tcp_client_vtable grpc_windows_tcp_client_vtable;
extern grpc_timer_vtable grpc_generic_timer_vtable;
extern grpc_pollset_vtable grpc_windows_pollset_vtable;
extern grpc_pollset_set_vtable grpc_windows_pollset_set_vtable;
extern grpc_address_resolver_vtable grpc_windows_resolver_vtable;
    
    void grpc_socket_notify_on_read(grpc_winsocket* socket, grpc_closure* closure) {
  socket_notify_on_iocp(socket, closure, &socket->read_info);
}
    
    #include <grpc/support/port_platform.h>
    
    GPR_GLOBAL_CONFIG_DECLARE_BOOL(bool_var);
    
    #ifndef NDEBUG
#define GRPC_COMBINER_DEBUG_ARGS \
  , const char *file, int line, const char *reason
#define GRPC_COMBINER_REF(combiner, reason) \
  grpc_combiner_ref((combiner), __FILE__, __LINE__, (reason))
#define GRPC_COMBINER_UNREF(combiner, reason) \
  grpc_combiner_unref((combiner), __FILE__, __LINE__, (reason))
#else
#define GRPC_COMBINER_DEBUG_ARGS
#define GRPC_COMBINER_REF(combiner, reason) grpc_combiner_ref((combiner))
#define GRPC_COMBINER_UNREF(combiner, reason) grpc_combiner_unref((combiner))
#endif
    
    
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

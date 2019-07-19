
        
          void visitDestroyValueInst(DestroyValueInst *DVI) {
    SGM.useConformancesFromType(DVI->getOperand()->getType().getASTType());
  }
    
      /// Intersect a bit-vector of the same size into this vector.
  ClusteredBitVector &operator&=(const ClusteredBitVector &other) {
    assert(size() == other.size());
    if (Bits) {
      APInt &v = Bits.getValue();
      v &= other.Bits.getValue();
    }
    return *this;
  }
    
      auto &M = getModule();
  for (auto &BB : *this) {
    for (auto I = BB.begin(), E = BB.end(); I != E;) {
      auto Inst = &*I;
      ++I;
      SILInstruction::destroy(Inst);
      // TODO: It is only safe to directly deallocate an
      // instruction if this BB is being removed in scope
      // of destructing a SILFunction.
      M.deallocateInst(Inst);
    }
    BB.InstList.clearAndLeakNodesUnsafely();
  }
    
    
    {  S.writeToStream(os);
}

    
      // Inline constructor
  auto calleeSource = ([&]() -> SILValue {
    // Handle partial_apply/thin_to_thick -> convert_function:
    // tryDeleteDeadClosure must run before deleting a ConvertFunction that uses
    // the PartialApplyInst or ThinToThickFunctionInst. tryDeleteDeadClosure
    // will delete any uses of the closure, including a
    // convert_escape_to_noescape conversion.
    if (auto *cfi = dyn_cast<ConvertFunctionInst>(calleeValue))
      return stripCopiesAndBorrows(cfi->getOperand());
    }
    
    #endif // SWIFT_REFLECTION_METADATASOURCEBUILDER_H

    
      const CaptureTypeRecord *operator->() const {
    return Cur;
  }
    
    
    {  // Fall back to the raw string.
  return reflectionName;
}
    
    #include <ImfEnvmapAttribute.h>
    
    template <> IMF_EXPORT
void EnvmapAttribute::readValueFrom (OPENEXR_IMF_INTERNAL_NAMESPACE::IStream &,
                                     int,
                                     int);
    
        static const int TABLE_LOOKUP_BITS = 12;
    
    // attributes used in headers are TypedAttributes
class Attribute;
    
        OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, magic);
    OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, version);
    
    
#endif /* IMFGENERICINPUTFILE_H_ */

    
    void
GenericOutputFile::writeMagicNumberAndVersionField (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream& os,
                                                    const Header * headers,
                                                    int parts)
{
    OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::write <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (os, MAGIC);
    }
    
        IMF_EXPORT
    void			insert (const std::string &name,
				        const Attribute &attribute);
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT 

    
    #endif  // CAFFE_CLIP_LAYER_HPP_

    
      while (iter_ < stop_iter) {
    // zero-init the params
    net_->ClearParamDiffs();
    if (param_.test_interval() && iter_ % param_.test_interval() == 0
        && (iter_ > 0 || param_.test_initialization())) {
      if (Caffe::root_solver()) {
        TestAll();
      }
      if (requested_early_exit_) {
        // Break out of the while loop because stop was requested while testing.
        break;
      }
    }
    }
    
      Status* recv_status_ = nullptr;
    
      Status BidiStream(
      ServerContext* context,
      ServerReaderWriter<EchoResponse, EchoRequest>* stream) override;
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
      GPR_ASSERT(WSAConnect(cli_sock, (grpc_sockaddr*)&addr, addr_len, NULL, NULL,
                        NULL, NULL) == 0);
  svr_sock = accept(lst_sock, (grpc_sockaddr*)&addr, &addr_len);
  GPR_ASSERT(svr_sock != INVALID_SOCKET);
    
      sock = WSASocket(AF_INET6, SOCK_STREAM, IPPROTO_TCP, NULL, 0,
                   grpc_get_default_wsa_socket_flags());
  if (sock == INVALID_SOCKET) {
    error = GRPC_WSA_ERROR(WSAGetLastError(), 'WSASocket');
    goto failure;
  }
    
    GPR_GLOBAL_CONFIG_DEFINE_BOOL(bool_var, false, '');
GPR_GLOBAL_CONFIG_DEFINE_INT32(int32_var, 0, '');
GPR_GLOBAL_CONFIG_DEFINE_STRING(string_var, '', '');
    
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
    
    
    {}  // namespace grpc_impl

    
    namespace grpc {
    }
    
        SendHealthCheckRpc('', Status::OK, HealthCheckResponse::NOT_SERVING);
    SendHealthCheckRpc(kHealthyService, Status::OK,
                       HealthCheckResponse::NOT_SERVING);
    SendHealthCheckRpc(kUnhealthyService, Status::OK,
                       HealthCheckResponse::NOT_SERVING);
    SendHealthCheckRpc(kNotRegisteredService,
                       Status(StatusCode::NOT_FOUND, ''));
    
      void TearDown() override {
    server_->Shutdown();
    void* ignored_tag;
    bool ignored_ok;
    cq_->Shutdown();
    while (LoopForTag(&ignored_tag, &ignored_ok))
      ;
    stub_.reset();
    grpc_recycle_unused_port(port_);
  }
    
      // for typevar checking
  void pushTypeScope();
  void popTypeScope();
  void addTypeVar(const std::string &name);
  bool isTypeVar(const std::string &name);
  bool isTypeVarInImmediateScope(const std::string &name);
    
    #include 'hphp/util/copy-ptr.h'
#include 'hphp/util/functional.h'
    
    #ifndef incl_HPHP_MYSQLSTATS_H_
#define incl_HPHP_MYSQLSTATS_H_
    
      iterator find(const StringData* key) { return m_map.find(key); }
  iterator begin()                     { return m_map.begin(); }
  iterator end()                       { return m_map.end(); }
  V        size() const                { return m_list.size(); }
    
    void StackTraceNoHeap::printStackTrace(int fd) const {
  folly::symbolizer::Symbolizer symbolizer;
  folly::symbolizer::SymbolizedFrame frames[kMaxFrame];
  symbolizer.symbolize((uintptr_t*)m_frames, frames, m_frame_count);
  for (int i = 0, fr = 0; i < m_frame_count; i++) {
    auto const& frame = frames[i];
    if (!frame.name ||
        !frame.name[0] ||
        isBlacklisted(frame.name)) {
      continue;
    }
    printFrameHdr(fd, fr);
    demangle(fd, frame.name);
    if (frame.location.hasFileAndLine) {
      char fileBuf[PATH_MAX];
      fileBuf[0] = '\0';
      frame.location.file.toBuffer(fileBuf, sizeof(fileBuf));
      printStr(fd, ' at ');
      write_path(fd, fileBuf);
      printStr(fd, ':');
      printInt(fd, frame.location.line);
    }
    printStr(fd, '\n');
    fr++;
  }
}
    
    
RangeState::RangeState(uintptr_t lowAddr, uintptr_t highAddr, Reserved)
  : low_use(lowAddr)
  , low_map(lowAddr)
  , high_use(highAddr)
  , high_map(highAddr)
  , low_internal(reinterpret_cast<char*>(lowAddr))
  , high_internal(reinterpret_cast<char*>(highAddr)) {
  constexpr size_t size2m = 2u << 20;
  always_assert((lowAddr <= highAddr) &&
                !(lowAddr % size2m) && !(highAddr % size2m));
}
    
    
    {  HTTPException ex(HTTPException::Direction::INGRESS_AND_EGRESS,
                   'Stream aborted, streamID');
  ex.setProxygenError(proxygen::kErrorStreamAbort);
  ex.setCodecStatusCode(proxygen::ErrorCode::CANCEL);
  pushTxn.onError(ex);
  pushHandler->detachTransaction();
  m_transport->pushResourceBody(id, nullptr, 0, true);
  m_server.deliverMessages();
  sendResponse('12345');
}
    
    //////////////////////////////////////////////////////////////////////
    
    bool js_cocos2dx_TransitionZoomFlipY_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_TransitionZoomFlipY_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_TransitionZoomFlipY(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_TransitionZoomFlipY_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_TransitionZoomFlipY_TransitionZoomFlipY(JSContext *cx, uint32_t argc, jsval *vp);
    
    string FileUtilsAndroid::getWritablePath() const
{
    // Fix for Nexus 10 (Android 4.2 multi-user environment)
    // the path is retrieved through Java Context.getCacheDir() method
    string dir('');
    string tmp = JniHelper::callStaticStringMethod('org.cocos2dx.lib.Cocos2dxHelper', 'getCocos2dxWritablePath');
    }
    
    #endif // __CC_FILEUTILS_ANDROID_H__

    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    NS_CC_EXT_BEGIN
    
    //
// SpritePolygonTestNoCrash
//
SpritePolygonTestNoCrash::SpritePolygonTestNoCrash()
{
    _title = 'SpritePolygon ';
    _subtitle = 'AutoPolygon: should not crash';
}
    
    // UIPageViewTest
UIPageViewChildSizeTest::UIPageViewChildSizeTest()
    : _displayValueLabel(nullptr)
{
    }
    
    #if (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
    
    void Scene::render(Renderer* renderer, const Mat4* eyeTransforms, const Mat4* eyeProjections, unsigned int multiViewCount)
{
    auto director = Director::getInstance();
    Camera* defaultCamera = nullptr;
    const auto& transform = getNodeToParentTransform();
    }
    
      size_t idx = 0;
  while (idx < ioQueue->size()) {
    int numIovecs = 0;
    while (numIovecs < kNumIovecs && idx < ioQueue->size()) {
      const auto& str = (*ioQueue)[idx];
      iovecs[numIovecs].iov_base = const_cast<char*>(str.data());
      iovecs[numIovecs].iov_len = str.size();
      ++numIovecs;
      ++idx;
    }
    }
    
      /**
   * Get the output file.
   */
  const folly::File& getFile() const {
    return file_;
  }
    
      void rehash(std::size_t bucketCapacity) {
    // The standard's rehash() requires understanding the max load factor,
    // which is easy to get wrong.  Since we don't actually allow adjustment
    // of max_load_factor there is no difference.
    reserve(bucketCapacity);
  }
    
        if (preciseAllocInfo) {
      EXPECT_EQ(testAllocatedMemorySize, 0);
      EXPECT_EQ(m.getAllocatedMemorySize(), 0);
    }
    auto emptyMapAllocatedMemorySize = testAllocatedMemorySize;
    auto emptyMapAllocatedBlockCount = testAllocatedBlockCount;
    
      // Empty member optimization: package Alloc with a non-empty member
  // in case Alloc is empty (as it is in the case of SysAllocator).
  struct AllocAndSize : public Alloc {
    explicit AllocAndSize(const Alloc& a, size_t s)
        : Alloc(a), minBlockSize(s) {}
    }
    
      // Insert big chunk, should still fit in one block
  arena.allocate(bigChunkSize);
  bytesUsed += bigChunkSize;
  EXPECT_EQ(arena.bytesUsed(), bytesUsed);
  EXPECT_TRUE(arena.totalSize() >= blockSize);
  EXPECT_TRUE(arena.totalSize() <= 2 * blockSize);
    
     private:
  Func func_;
  Waiter& waiter_;
    
    // Tests that private members can be accessed from a TEST_F declared
// as a friend of the class.
TEST_F(PrivateCodeFixtureTest, CanAccessPrivateMembers) {
  PrivateCode a;
  EXPECT_EQ(0, a.x_);
    }
    
    // This macro defines 100 dummy tests.
#define HUNDRED_TESTS_(test_case_name_prefix) \
  TEN_TESTS_(test_case_name_prefix ## 0) \
  TEN_TESTS_(test_case_name_prefix ## 1) \
  TEN_TESTS_(test_case_name_prefix ## 2) \
  TEN_TESTS_(test_case_name_prefix ## 3) \
  TEN_TESTS_(test_case_name_prefix ## 4) \
  TEN_TESTS_(test_case_name_prefix ## 5) \
  TEN_TESTS_(test_case_name_prefix ## 6) \
  TEN_TESTS_(test_case_name_prefix ## 7) \
  TEN_TESTS_(test_case_name_prefix ## 8) \
  TEN_TESTS_(test_case_name_prefix ## 9)

        
        // Platform detection.
#ifdef __linux__
#define LIBFUZZER_APPLE 0
#define LIBFUZZER_LINUX 1
#define LIBFUZZER_WINDOWS 0
#elif __APPLE__
#define LIBFUZZER_APPLE 1
#define LIBFUZZER_LINUX 0
#define LIBFUZZER_WINDOWS 0
#elif _WIN32
#define LIBFUZZER_APPLE 0
#define LIBFUZZER_LINUX 0
#define LIBFUZZER_WINDOWS 1
#else
#error 'Support for your platform has not been implemented'
#endif
    
    #include 'FuzzerExtFunctions.def'
    
    #ifndef LLVM_FUZZER_IO_H
#define LLVM_FUZZER_IO_H
    
      Random &Rand;
  const FuzzingOptions &Options;
    
    #ifndef SHA_BIG_ENDIAN
	// Swap byte order back
	int i;
	for (i=0; i<5; i++) {
		s->state[i]=
			  (((s->state[i])<<24)& 0xff000000)
			| (((s->state[i])<<8) & 0x00ff0000)
			| (((s->state[i])>>8) & 0x0000ff00)
			| (((s->state[i])>>24)& 0x000000ff);
	}
#endif
    
    std::string Hash(const Unit &U);
    
    size_t TracePC::GetTotalPCCoverage() {
  size_t Res = 0;
  for (size_t i = 1; i < GetNumPCs(); i++)
    if (PCs[i])
      Res++;
  return Res;
}
    
    int TraceState::TryToAddDesiredData(const uint8_t *PresentData,
                                    const uint8_t *DesiredData,
                                    size_t DataSize) {
  if (NumMutations >= kMaxMutations || !WantToHandleOneMoreMutation()) return 0;
  ScopedDoingMyOwnMemmem scoped_doing_my_own_memmem;
  const uint8_t *UnitData;
  auto UnitSize = F->GetCurrentUnitInFuzzingThead(&UnitData);
  int Res = 0;
  const uint8_t *Beg = UnitData;
  const uint8_t *End = Beg + UnitSize;
  for (const uint8_t *Cur = Beg; Cur < End; Cur++) {
    Cur = (uint8_t *)SearchMemory(Cur, End - Cur, PresentData, DataSize);
    if (!Cur)
      break;
    size_t Pos = Cur - Beg;
    assert(Pos < UnitSize);
    AddMutation(Pos, DataSize, DesiredData);
    Res++;
  }
  return Res;
}
    
    #ifndef LLVM_FUZZER_UTIL_H
#define LLVM_FUZZER_UTIL_H
    
      virtual int64_t size() CXX11_OVERRIDE;
    
    class AbstractHttpServerResponseCommand : public Command {
private:
  DownloadEngine* e_;
  std::shared_ptr<SocketCore> socket_;
  std::shared_ptr<HttpServer> httpServer_;
  Timer timeoutTimer_;
  bool readCheck_;
  bool writeCheck_;
    }
    
      virtual bool getInitialOption() const CXX11_OVERRIDE;
    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
    #include 'AbstractCommand.h'
    
    AnnounceTier::AnnounceTier(std::deque<std::string> urls)
    : event(STARTED), urls(std::move(urls))
{
}
    
    #endif // D_ANNOUNCE_TIER_H

    
      TLSVersion getMinTLSVersion() const { return minTLSVer_; }
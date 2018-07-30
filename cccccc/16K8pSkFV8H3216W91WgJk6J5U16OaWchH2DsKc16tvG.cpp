
        
        /// Attempt to get a doc comment from the declaration, or other inherited
/// sources, like from base classes or protocols.
Optional<DocComment *> getCascadingDocComment(swift::markup::MarkupContext &MC,
                                             const Decl *D);
    
    #ifndef SWIFT_SYNTAX_REFERENCES_H
#define SWIFT_SYNTAX_REFERENCES_H
    
    #ifdef __APPLE__
    
    
    {
    {} // end namespace Lowering
} // end namespace swift
    
    /// This represents one part of a #if block.  If the condition field is
/// non-null, then this represents a #if or a #elseif, otherwise it represents
/// an #else block.
struct IfConfigClause {
  /// The location of the #if, #elseif, or #else keyword.
  SourceLoc Loc;
  
  /// The condition guarding this #if or #elseif block.  If this is null, this
  /// is a #else clause.
  Expr *Cond;
  
  /// Elements inside the clause
  ArrayRef<ASTNode> Elements;
    }
    
    #include 'test/cpp/qps/report.h'
    
    #include <set>
    
      bool PrintBetaServicer(const grpc_generator::Service* service,
                         grpc_generator::Printer* out);
  bool PrintBetaServerFactory(
      const grpc::string& package_qualified_service_name,
      const grpc_generator::Service* service, grpc_generator::Printer* out);
  bool PrintBetaStub(const grpc_generator::Service* service,
                     grpc_generator::Printer* out);
  bool PrintBetaStubFactory(const grpc::string& package_qualified_service_name,
                            const grpc_generator::Service* service,
                            grpc_generator::Printer* out);
    
    static void sigint_handler(int x) {
  gpr_atm_no_barrier_store(&grpc::testing::interop::g_got_sigint, true);
}
    
    #include <iostream>
#include <sstream>
#include <string>
#include <vector>
    
    
    {}  // namespace grpc
    
    
    {  return cli.Run(argc, argv);
}

    
    namespace grpc {
    }
    
    void AbstractBtMessage::setPeer(const std::shared_ptr<Peer>& peer)
{
  peer_ = peer;
}
    
      BtMessageFactory* getBtMessageFactory() const { return messageFactory_; }
    
    public:
  AbstractCommand(
      cuid_t cuid, const std::shared_ptr<Request>& req,
      const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
      DownloadEngine* e, const std::shared_ptr<SocketCore>& s = nullptr,
      const std::shared_ptr<SocketRecvBuffer>& socketRecvBuffer = nullptr,
      bool incNumConnection = true);
    
      virtual ~AdaptiveFileAllocationIterator();
    
      AnnounceTier(std::deque<std::string> urls);
    
    
    {} // namespace aria2
    
    #include <string>
#include <memory>
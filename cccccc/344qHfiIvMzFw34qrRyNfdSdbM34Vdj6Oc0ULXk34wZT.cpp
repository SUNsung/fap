
        
          public:
    ObjCMethod(SILDeclRef method, SILType searchType, bool startAtSuper)
      : method(method), searchTypeAndSuper(searchType, startAtSuper)
    {}
    
    SILDeclRef getMethod() const { return method; }
    SILType getSearchType() const { return searchTypeAndSuper.getPointer(); }
    bool shouldStartAtSuper() const { return searchTypeAndSuper.getInt(); }
    
    /// FIXME: Thunk down to a Swift function value?
    llvm::Value *getExplosionValue(IRGenFunction &IGF) const {
      llvm_unreachable('thunking unapplied objc method to swift function '
                       'not yet implemented');
    }
    
    /// Determine the kind of message that should be sent to this
    /// method.
    ObjCMessageKind getMessageKind() const {
      // Determine the kind of message send to perform.
      if (!getSearchType()) return ObjCMessageKind::Normal;
    }
    
          CCOK::Unknown,
    
    /// This class is a higher level interface to the ownership checker meant for
/// use with SILPasses. It uses the actual checker as an internal PImpl detail
/// so types/etc do not leak.
struct OwnershipChecker {
  /// The module that we are in.
  SILModule &Mod;
    }
    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
    #endif

    
      /// Indicates whether to allow diagnostics for \c <unknown> locations if
  /// \c VerifyMode is not \c NoVerify.
  bool VerifyIgnoreUnknown = false;
    
    #endif

    
    class EditorDiagConsumer : public swift::DiagnosticConsumer {
  typedef std::vector<DiagnosticEntryInfo> DiagnosticsTy;
  /// Maps from a BufferID to the diagnostics that were emitted inside that
  /// buffer.
  llvm::DenseMap<unsigned, DiagnosticsTy> BufferDiagnostics;
    }
    
      /// Checks whether the current substitution is canonical.
  bool isCanonical() const;
    
    // Computes all the cross product distances of the points from the line,
// storing the actual (signed) cross products in distances.
// Ignores distances of points that are further away than the previous point,
// and overlaps the previous point by at least half.
void DetLineFit::ComputeDistances(const ICOORD& start, const ICOORD& end) {
  distances_.truncate(0);
  ICOORD line_vector = end;
  line_vector -= start;
  square_length_ = line_vector.sqlength();
  int line_length = IntCastRounded(sqrt(square_length_));
  // Compute the distance of each point from the line.
  int prev_abs_dist = 0;
  int prev_dot = 0;
  for (int i = 0; i < pts_.size(); ++i) {
    ICOORD pt_vector = pts_[i].pt;
    pt_vector -= start;
    int dot = line_vector % pt_vector;
    // Compute |line_vector||pt_vector|sin(angle between)
    int dist = line_vector * pt_vector;
    int abs_dist = dist < 0 ? -dist : dist;
    if (abs_dist > prev_abs_dist && i > 0) {
      // Ignore this point if it overlaps the previous one.
      int separation = abs(dot - prev_dot);
      if (separation < line_length * pts_[i].halfwidth ||
          separation < line_length * pts_[i - 1].halfwidth)
        continue;
    }
    distances_.push_back(DistPointPair(dist, pts_[i].pt));
    prev_abs_dist = abs_dist;
    prev_dot = dot;
  }
}
    
      // Sets up the DENORM to execute a non-linear transformation based on
  // preserving an even distribution of stroke edges. The transformation
  // operates only within the given box, scaling input coords within the box
  // non-linearly to a box of target_width by target_height, with all other
  // coords being clipped to the box edge. As with SetupNormalization above,
  // final_xshift and final_yshift are applied after scaling, and the bottom-
  // left of box is used as a pre-scaling origin.
  // x_coords is a collection of the x-coords of vertical edges for each
  // y-coord starting at box.bottom().
  // y_coords is a collection of the y-coords of horizontal edges for each
  // x-coord starting at box.left().
  // Eg x_coords[0] is a collection of the x-coords of edges at y=bottom.
  // Eg x_coords[1] is a collection of the x-coords of edges at y=bottom + 1.
  // The second-level vectors must all be sorted in ascending order.
  void SetupNonLinear(const DENORM* predecessor, const TBOX& box,
                      float target_width, float target_height,
                      float final_xshift, float final_yshift,
                      const GenericVector<GenericVector<int> >& x_coords,
                      const GenericVector<GenericVector<int> >& y_coords);
    
    // Generate new filter every 2KB of data
static const size_t kFilterBaseLg = 11;
static const size_t kFilterBase = 1 << kFilterBaseLg;
    
      size_t WrittenBytes() const {
    return dest_.contents_.size();
  }
    
    namespace leveldb {
    }
    
    
    {
    {    // Decode next entry
    uint32_t shared, non_shared, value_length;
    p = DecodeEntry(p, limit, &shared, &non_shared, &value_length);
    if (p == NULL || key_.size() < shared) {
      CorruptionError();
      return false;
    } else {
      key_.resize(shared);
      key_.append(p, non_shared);
      value_ = Slice(p + non_shared, value_length);
      while (restart_index_ + 1 < num_restarts_ &&
             GetRestartPoint(restart_index_ + 1) < current_) {
        ++restart_index_;
      }
      return true;
    }
  }
};
    
    void BlockBuilder::Reset() {
  buffer_.clear();
  restarts_.clear();
  restarts_.push_back(0);       // First restart point is at offset 0
  counter_ = 0;
  finished_ = false;
  last_key_.clear();
}
    
      // Read the block contents as well as the type/crc footer.
  // See table_builder.cc for the code that built this structure.
  size_t n = static_cast<size_t>(handle.size());
  char* buf = new char[n + kBlockTrailerSize];
  Slice contents;
  Status s = file->Read(handle.offset(), n + kBlockTrailerSize, &contents, buf);
  if (!s.ok()) {
    delete[] buf;
    return s;
  }
  if (contents.size() != n + kBlockTrailerSize) {
    delete[] buf;
    return Status::Corruption('truncated block read');
  }
    
    namespace {
class EmptyIterator : public Iterator {
 public:
  EmptyIterator(const Status& s) : status_(s) { }
  virtual bool Valid() const { return false; }
  virtual void Seek(const Slice& target) { }
  virtual void SeekToFirst() { }
  virtual void SeekToLast() { }
  virtual void Next() { assert(false); }
  virtual void Prev() { assert(false); }
  Slice key() const { assert(false); return Slice(); }
  Slice value() const { assert(false); return Slice(); }
  virtual Status status() const { return status_; }
 private:
  Status status_;
};
}  // namespace
    
    #include <osquery/core.h>
#include <osquery/system.h>
    
    /// Prefix used for posix tar archive.
const std::string kTestCarveNamePrefix = 'carve_';
    
    class TLSConfigPlugin : public ConfigPlugin,
                        public std::enable_shared_from_this<TLSConfigPlugin> {
 public:
  Status setUp() override;
  Status genConfig(std::map<std::string, std::string>& config) override;
    }
    
      if (count > nelms) {
    return Status(1, 'Failed to strncpy: dst too small');
  }
    
    #endif  // LLVM_FUZZER_DEFS_H

    
    static const FlagDescription FlagDescriptions [] {
#define FUZZER_DEPRECATED_FLAG(Name)                                           \
  {#Name, 'Deprecated; don't use', 0, nullptr, nullptr, nullptr},
#define FUZZER_FLAG_INT(Name, Default, Description)                            \
  {#Name, Description, Default, &Flags.Name, nullptr, nullptr},
#define FUZZER_FLAG_UNSIGNED(Name, Default, Description)                       \
  {#Name,   Description, static_cast<int>(Default),                            \
   nullptr, nullptr, &Flags.Name},
#define FUZZER_FLAG_STRING(Name, Description)                                  \
  {#Name, Description, 0, nullptr, &Flags.Name, nullptr},
#include 'FuzzerFlags.def'
#undef FUZZER_DEPRECATED_FLAG
#undef FUZZER_FLAG_INT
#undef FUZZER_FLAG_UNSIGNED
#undef FUZZER_FLAG_STRING
};
    
    
    {} // namespace fuzzer
    
    #endif // LIBFUZZER_WINDOWS

    
    // Parse the given Ref string from the position Offset, to exactly match the given
// string Patt.
// Returns number of characters considered if successful.
static size_t ParseCustomString(const std::string &Ref, size_t Offset,
                                const char *Patt) {
  size_t Len = strlen(Patt);
  if (Offset + Len > Ref.size())
    return 0;
  return Ref.compare(Offset, Len, Patt) == 0 ? Len : 0;
}
    
    extern 'C' {
    }
    
    void Merger::ParseOrExit(std::istream &IS, bool ParseCoverage) {
  if (!Parse(IS, ParseCoverage)) {
    Printf('MERGE: failed to parse the control file (unexpected error)\n');
    exit(1);
  }
}
    
    const void *SearchMemory(const void *haystack, size_t haystacklen,
                         const void *needle, size_t needlelen);
    
    
    {    unsigned long kbUsage = getKb(pid);
    cout << 'Memory usage: ' << (double(kbUsage) / 1024.0) << ' mb of user space' << std::endl;
    cout << 'Memory performance: ' << 1024.0 * double(connections) / kbUsage << ' connections/mb' << endl;
    return 0;
}
    
        for (thread *t : threads) {
        t->join();
    }
    
    
    {
    {
    {            if (extensionsParser.serverNoContextTakeover) {
                options |= SERVER_NO_CONTEXT_TAKEOVER;
            } else {
                options &= ~SERVER_NO_CONTEXT_TAKEOVER;
            }
        } else {
            options &= ~PERMESSAGE_DEFLATE;
        }
    } else {
        // todo!
    }
}
    
        // Thread safe
    void terminate();
    void ping(const char *message) {send(message, OpCode::PING);}
    void send(const char *message, OpCode opCode = OpCode::TEXT) {send(message, strlen(message), opCode);}
    void send(const char *message, size_t length, OpCode opCode, void(*callback)(WebSocket<isServer> *webSocket, void *data, bool cancelled, void *reserved) = nullptr, void *callbackData = nullptr);
    static PreparedMessage *prepareMessage(char *data, size_t length, OpCode opCode, bool compressed, void(*callback)(WebSocket<isServer> *webSocket, void *data, bool cancelled, void *reserved) = nullptr);
    static PreparedMessage *prepareMessageBatch(std::vector<std::string> &messages, std::vector<int> &excludedMessages,
                                                OpCode opCode, bool compressed, void(*callback)(WebSocket<isServer> *webSocket, void *data, bool cancelled, void *reserved) = nullptr);
    
    #ifdef UWS_THREADSAFE
    std::lock_guard<std::recursive_mutex> lockGuard(*asyncMutex);
#endif
    
    
    {    if (error) {
        httpSocket->onEnd(httpSocket);
    } else {
        httpSocket->setState<HttpSocket<CLIENT>>();
        httpSocket->change(httpSocket->nodeData->loop, httpSocket, httpSocket->setPoll(UV_READABLE));
        httpSocket->setNoDelay(true);
        httpSocket->upgrade(nullptr, nullptr, 0, nullptr, 0, nullptr);
    }
}
    
        bool isClosed() {
        return uv_is_closing((uv_handle_t *) uv_poll);
    }
    
    #ifdef __APPLE__
#include <libkern/OSByteOrder.h>
#define htobe64(x) OSSwapHostToBigInt64(x)
#define be64toh(x) OSSwapBigToHostInt64(x)
#endif
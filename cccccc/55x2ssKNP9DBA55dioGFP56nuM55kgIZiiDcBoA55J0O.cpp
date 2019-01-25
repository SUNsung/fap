
        
        namespace mate {
    }
    
    
    {}  // namespace api
    
      // Downloadable Content Information
  bool downloadable = false;
    
    
    {  DefaultCacheKey CKey(const_cast<void*>(Key), &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    // FIXME: Not thread-safe! It should avoid deleting the value until
    // 'releaseValue is called on it.
    *Value_out = Entry->second;
    return true;
  }
  return false;
}
    
      if (!wasInline) delete[] oldBegin;
    
    void PrefixMapKeyPrinter<unsigned char>::print(raw_ostream &out,
                                               ArrayRef<unsigned char> key) {
  out << '\'';
  for (auto byte : key) {
    if (byte < 16) out << '0';
    out.write_hex(byte);
  }
  out << '\'';
}

    
    #include 'swift/Basic/PrimitiveParsing.h'
#include 'llvm/ADT/SmallVector.h'
    
    break_table = GraphemeClusterBreakPropertyTable(unicodeGraphemeBreakPropertyFile)
    
    
    {  return forInvalid();
}
    
      bool isRecord() const {
    assert(isValid());
    return !Decl.isNull() && Decl.is<const clang::RecordDecl *>();
  }
  const clang::RecordDecl *getRecord() const {
    assert(isRecord());
    return Decl.get<const clang::RecordDecl *>();
  }
    
    enum class IAMAccessorKind : uint8_t { None, Getter, Setter };
    
    /// Translate the given operator character into its mangled form.
///
/// Current operator characters:   @/=-+*%<>!&|^~ and the special operator '..'
char Mangle::translateOperatorChar(char op) {
  switch (op) {
    case '&': return 'a'; // 'and'
    case '@': return 'c'; // 'commercial at sign'
    case '/': return 'd'; // 'divide'
    case '=': return 'e'; // 'equal'
    case '>': return 'g'; // 'greater'
    case '<': return 'l'; // 'less'
    case '*': return 'm'; // 'multiply'
    case '!': return 'n'; // 'negate'
    case '|': return 'o'; // 'or'
    case '+': return 'p'; // 'plus'
    case '?': return 'q'; // 'question'
    case '%': return 'r'; // 'remainder'
    case '-': return 's'; // 'subtract'
    case '~': return 't'; // 'tilde'
    case '^': return 'x'; // 'xor'
    case '.': return 'z'; // 'zperiod' (the z is silent)
    default:
      return op;
  }
}
    
    static void printNode(DemanglerPrinter &Out, const Node *node, unsigned depth) {
  // Indent two spaces per depth.
  for (unsigned i = 0; i < depth * 2; ++i) {
    Out << ' ';
  }
  if (!node) {
    Out << '<<NULL>>';
    return;
  }
  Out << 'kind=' << getNodeKindString(node->getKind());
  if (node->hasText()) {
    Out << ', text=\'' << node->getText() << '\'';
  }
  if (node->hasIndex()) {
    Out << ', index=' << node->getIndex();
  }
  Out << '\n';
  for (auto &child : *node) {
    printNode(Out, child, depth + 1);
  }
}
    
    # if !GTEST_OS_WINDOWS
// Tests that an exit code describes an exit due to termination by a
// given signal.
class GTEST_API_ KilledBySignal {
 public:
  explicit KilledBySignal(int signum);
  bool operator()(int exit_status) const;
 private:
  const int signum_;
};
# endif  // !GTEST_OS_WINDOWS
    
    #if GTEST_HAS_STD_WSTRING
template <>
class UniversalTersePrinter<const wchar_t*> {
 public:
  static void Print(const wchar_t* str, ::std::ostream* os) {
    if (str == NULL) {
      *os << 'NULL';
    } else {
      UniversalPrint(::std::wstring(str), os);
    }
  }
};
#endif
    
      const std::string& file() const { return file_; }
  int line() const { return line_; }
  int index() const { return index_; }
  int write_fd() const { return write_fd_; }
    
    #include 'gtest/internal/gtest-string.h'
    
    
    { private:
  mutable linked_ptr_internal const* next_;
};
    
    // This provides interface PrimeTable that determines whether a number is a
// prime and determines a next prime number. This interface is used
// in Google Test samples demonstrating use of parameterized tests.
    
    //  16384 * sqrt(2) * sin(kPi/9) * 2 / 3
static const tran_high_t sinpi_1_9 = 5283;
static const tran_high_t sinpi_2_9 = 9929;
static const tran_high_t sinpi_3_9 = 13377;
static const tran_high_t sinpi_4_9 = 15212;
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    /* silk_min() versions with typecast in the function call */
static OPUS_INLINE opus_int silk_min_int(opus_int a, opus_int b)
{
    return (((a) < (b)) ? (a) : (b));
}
static OPUS_INLINE opus_int16 silk_min_16(opus_int16 a, opus_int16 b)
{
    return (((a) < (b)) ? (a) : (b));
}
static OPUS_INLINE opus_int32 silk_min_32(opus_int32 a, opus_int32 b)
{
    return (((a) < (b)) ? (a) : (b));
}
static OPUS_INLINE opus_int64 silk_min_64(opus_int64 a, opus_int64 b)
{
    return (((a) < (b)) ? (a) : (b));
}
    
      void onReceived(const DHTPingReplyMessage* message);
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
      virtual const std::string& getType() const CXX11_OVERRIDE;
    
      void moveBucketTail(const std::shared_ptr<DHTNode>& node);
    
    void DHTRoutingTableSerializer::setLocalNode(
    const std::shared_ptr<DHTNode>& localNode)
{
  localNode_ = localNode;
}
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
      virtual std::shared_ptr<DHTTask> createBucketRefreshTask() = 0;
    
    void DHTTaskFactoryImpl::setRoutingTable(DHTRoutingTable* routingTable)
{
  routingTable_ = routingTable;
}
    
      std::chrono::seconds timeout_;
    
        bool contains(const std::string& addr) const;
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    
    {    return false;
}
    
    #ifndef __CCINSTANT_ACTION_H__
#define __CCINSTANT_ACTION_H__
    
    
    {    return false;
}
    
    BENCHMARK(copy_long_string, iters) {
  BenchmarkSuspender suspender;
  auto const& longString = getLongString();
  while (iters--) {
    fbstring out;
    suspender.dismissing([&] { out = longString; });
  }
}
    
    
    {} // namespace folly

    
      // Test with unusual durations where neither the numerator nor denominator
  // are 1.
  using five_sevenths = std::chrono::duration<int64_t, std::ratio<5, 7>>;
  ts.tv_sec = 1;
  ts.tv_nsec = 0;
  EXPECT_EQ(1, to<five_sevenths>(ts).count());
  ts.tv_sec = 1;
  ts.tv_nsec = 428571500;
  EXPECT_EQ(2, to<five_sevenths>(ts).count());
    
    /**
 * Get a codec with the given options and compression level.
 *
 * If the windowSize is 15 and the format is Format::ZLIB or Format::GZIP, then
 * the type of the codec will be CodecType::ZLIB or CodecType::GZIP
 * respectively. Otherwise, the type will be CodecType::USER_DEFINED.
 *
 * Automatic uncompression is not supported with USER_DEFINED codecs.
 *
 * Levels supported: 0 = no compression, 1 = fast, ..., 9 = best; default = 6
 */
std::unique_ptr<Codec> getCodec(
    Options options = Options(),
    int level = COMPRESSION_LEVEL_DEFAULT);
std::unique_ptr<StreamCodec> getStreamCodec(
    Options options = Options(),
    int level = COMPRESSION_LEVEL_DEFAULT);
    
      counted_ptr(const counted_ptr& o) : p_(o.p_) {
    if (p_) {
      counted_ptr_base<Atom>::getRef(p_)->add_ref();
    }
  }
  counted_ptr& operator=(const counted_ptr& o) {
    if (p_ && counted_ptr_base<Atom>::getRef(p_)->release_ref() == 1) {
      p_->~T();
      free(counted_ptr_base<Atom>::getRef(p_));
    }
    p_ = o.p_;
    if (p_) {
      counted_ptr_base<Atom>::getRef(p_)->add_ref();
    }
    return *this;
  }
  explicit counted_ptr(T* p) : p_(p) {
    CHECK(!p);
  }
  ~counted_ptr() {
    if (p_ && counted_ptr_base<Atom>::getRef(p_)->release_ref() == 1) {
      p_->~T();
      free(counted_ptr_base<Atom>::getRef(p_));
    }
  }
  typename std::add_lvalue_reference<T>::type operator*() const {
    return *p_;
  }
    
    TEST_F(SparseByteSetTest, each_random) {
  mt19937 rng;
  uniform_int_distribution<uint16_t> dist{lims::min(), lims::max()};
  set<uint8_t> added;
  while (added.size() <= lims::max()) {
    auto c = uint8_t(dist(rng));
    EXPECT_EQ(added.count(c), s.contains(c));
    EXPECT_EQ(!added.count(c), s.add(c));
    added.insert(c);
    EXPECT_TRUE(added.count(c)); // sanity
    EXPECT_TRUE(s.contains(c));
  }
}


        
        SILLayout::SILLayout(CanGenericSignature Sig,
                     ArrayRef<SILField> Fields)
  : GenericSigAndFlags(Sig, getFlagsValue(anyMutable(Fields))),
    NumFields(Fields.size())
{
#ifndef NDEBUG
  verifyFields(Sig, Fields);
#endif
  auto FieldsMem = getTrailingObjects<SILField>();
  for (unsigned i : indices(Fields)) {
    new (FieldsMem + i) SILField(Fields[i]);
  }
}
    
    
    {    buf = buf.substr(info.bytes);
  }
    
    
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
    
      Begin = new char[capacity];
  EndOfAllocation = Begin + capacity;
  End = Begin + oldSize + needed;
  std::memcpy(Begin, oldBegin, oldSize);
    
    DIRECTIONAL_PREPOSITION(above)
DIRECTIONAL_PREPOSITION(after)
DIRECTIONAL_PREPOSITION(along)
DIRECTIONAL_PREPOSITION(alongside)
DIRECTIONAL_PREPOSITION(as)
DIRECTIONAL_PREPOSITION(at)
DIRECTIONAL_PREPOSITION(before)
DIRECTIONAL_PREPOSITION(below)
DIRECTIONAL_PREPOSITION(by)
DIRECTIONAL_PREPOSITION(following)
DIRECTIONAL_PREPOSITION(for)
DIRECTIONAL_PREPOSITION(from)
DIRECTIONAL_PREPOSITION(given)
DIRECTIONAL_PREPOSITION(in)
DIRECTIONAL_PREPOSITION(including)
DIRECTIONAL_PREPOSITION(inside)
DIRECTIONAL_PREPOSITION(into)
DIRECTIONAL_PREPOSITION(matching)
DIRECTIONAL_PREPOSITION(of)
DIRECTIONAL_PREPOSITION(on)
DIRECTIONAL_PREPOSITION(passing)
DIRECTIONAL_PREPOSITION(preceding)
DIRECTIONAL_PREPOSITION(since)
DIRECTIONAL_PREPOSITION(to)
DIRECTIONAL_PREPOSITION(until)
DIRECTIONAL_PREPOSITION(using)
DIRECTIONAL_PREPOSITION(via)
DIRECTIONAL_PREPOSITION(when)
PREPOSITION(with)
DIRECTIONAL_PREPOSITION(within)
    
    
    {  OutLines.append(Lines.begin(), Lines.end());
}

    
    
    {  return '';
}

    
    bool Punycode::decodePunycode(StringRef InputPunycode,
                              std::vector<uint32_t> &OutCodePoints) {
  OutCodePoints.clear();
  OutCodePoints.reserve(InputPunycode.size());
    }
    
    NodePointer Demangle::stripGenericArgsFromContextNode(NodePointer node,
                                                      NodeFactory &factory) {
  switch (node->getKind()) {
  case Demangle::Node::Kind::BoundGenericClass:
  case Demangle::Node::Kind::BoundGenericEnum:
  case Demangle::Node::Kind::BoundGenericStructure:
  case Demangle::Node::Kind::BoundGenericOtherNominalType:
    // Bound generic types have a 'Type' node under them, whose child is
    // the non-generic reference. If we don't see that structure, do nothing.
    if (node->getNumChildren() < 2 ||
        node->getChild(0)->getKind() != Demangle::Node::Kind::Type ||
        node->getChild(0)->getNumChildren() < 1)
      return node;
    }
    }
    
    namespace tesseract {
double DotProductAVX(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductAVX can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
      /**
   * Returns the bounding rectangle of the current object at the given level.
   * See comment on coordinate system above.
   * Returns false if there is no such object at the current position.
   * The returned bounding box is guaranteed to match the size and position
   * of the image returned by GetBinaryImage, but may clip foreground pixels
   * from a grey image. The padding argument to GetImage can be used to expand
   * the image to include more foreground pixels. See GetImage below.
   */
  bool BoundingBox(PageIteratorLevel level,
                   int* left, int* top, int* right, int* bottom) const;
  bool BoundingBox(PageIteratorLevel level, const int padding,
                   int* left, int* top, int* right, int* bottom) const;
  /**
   * Returns the bounding rectangle of the object in a coordinate system of the
   * working image rectangle having its origin at (rect_left_, rect_top_) with
   * respect to the original image and is scaled by a factor scale_.
   */
  bool BoundingBoxInternal(PageIteratorLevel level,
                           int* left, int* top, int* right, int* bottom) const;
    
      /// Returns true if the source image is binary.
  bool IsBinary() const {
    return pix_channels_ == 0;
  }
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
      // Inserts a new box before the given index.
  // Recomputes the bounding box.
  void InsertBox(int index, const TBOX& box);
    
    #include 'gtest/internal/gtest-death-test-internal.h'
    
    // This helper class can be used to mock out Google Test failure reporting
// so that we can test Google Test or code that builds on Google Test.
//
// An object of this class appends a TestPartResult object to the
// TestPartResultArray object given in the constructor whenever a Google Test
// failure is reported. It can either intercept only failures that are
// generated in the same thread that created this object or it can intercept
// all generated failures. The scope of this mock object can be controlled with
// the second argument to the two arguments constructor.
class GTEST_API_ ScopedFakeTestPartResultReporter
    : public TestPartResultReporterInterface {
 public:
  // The two possible mocking modes of this object.
  enum InterceptMode {
    INTERCEPT_ONLY_CURRENT_THREAD,  // Intercepts only thread local failures.
    INTERCEPT_ALL_THREADS           // Intercepts all failures.
  };
    }
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED5.  Don't use
// this in your code.
#define GTEST_PRED5_(pred, v1, v2, v3, v4, v5, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred5Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             #v3, \
                                             #v4, \
                                             #v5, \
                                             pred, \
                                             v1, \
                                             v2, \
                                             v3, \
                                             v4, \
                                             v5), on_failure)
    
      FilePath& operator=(const FilePath& rhs) {
    Set(rhs);
    return *this;
  }
    
      // Returns true iff this is NAN (not a number).
  bool is_nan() const {
    // It's a NAN if the exponent bits are all ones and the fraction
    // bits are not entirely zeros.
    return (exponent_bits() == kExponentBitMask) && (fraction_bits() != 0);
  }
    
    
    {    linked_ptr_internal const* p = ptr;
    while (p->next_ != ptr) p = p->next_;
    p->next_ = this;
    next_ = ptr;
  }
    
    // Type utilities needed for implementing typed and type-parameterized
// tests.  This file is generated by a SCRIPT.  DO NOT EDIT BY HAND!
//
// Currently we support at most 50 types in a list, and at most 50
// type-parameterized tests in one type-parameterized test case.
// Please contact googletestframework@googlegroups.com if you need
// more.
    
    // The template 'selector' struct TemplateSel<Tmpl> is used to
// represent Tmpl, which must be a class template with one type
// parameter, as a type.  TemplateSel<Tmpl>::Bind<T>::type is defined
// as the type Tmpl<T>.  This allows us to actually instantiate the
// template 'selected' by TemplateSel<Tmpl>.
//
// This trick is necessary for simulating typedef for class templates,
// which C++ doesn't support directly.
template <GTEST_TEMPLATE_ Tmpl>
struct TemplateSel {
  template <typename T>
  struct Bind {
    typedef Tmpl<T> type;
  };
};
    
      virtual int GetNextPrime(int p) const {
    for (int n = p + 1; n > 0; n++) {
      if (IsPrime(n)) return n;
    }
    }
    
    #ifndef BULLET_TYPES_CONVERTER_H
#define BULLET_TYPES_CONVERTER_H
    
    #include 'collision_object_bullet.h'
#include 'space_bullet.h'
    
    bool GodotCollisionDispatcher::needsCollision(const btCollisionObject *body0, const btCollisionObject *body1) {
	if (body0->getUserIndex() == CASTED_TYPE_AREA || body1->getUserIndex() == CASTED_TYPE_AREA) {
		// Avoide area narrow phase
		return false;
	}
	return btCollisionDispatcher::needsCollision(body0, body1);
}
    
    public:
	HingeJointBullet(RigidBodyBullet *rbA, RigidBodyBullet *rbB, const Transform &frameA, const Transform &frameB);
	HingeJointBullet(RigidBodyBullet *rbA, RigidBodyBullet *rbB, const Vector3 &pivotInA, const Vector3 &pivotInB, const Vector3 &axisInA, const Vector3 &axisInB);
    
    	ClassDB::bind_method(D_METHOD('set_refuse_new_connections', 'enable'), &NetworkedMultiplayerPeer::set_refuse_new_connections);
	ClassDB::bind_method(D_METHOD('is_refusing_new_connections'), &NetworkedMultiplayerPeer::is_refusing_new_connections);
    
    Thread::~Thread() {
}

    
    void Assembler::extsw(const Reg64& ra, const Reg64& rs, bool rc) {
  EmitXForm(31, rn(rs), rn(ra), rn(0), 986, rc);
}
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/mem-file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include <folly/String.h>
#include <folly/portability/SysStat.h>
#include <folly/portability/Unistd.h>
    
    
    {///////////////////////////////////////////////////////////////////////////////
}

    
    #include 'hphp/util/perf-event.h'
    
    
    {}

    
    void logAHMSubMapWarning(folly::StringPiece mapName) {
  StackTrace st;
  logPerfWarning(
    'AtomicHashMap overflow',
    [&](StructuredLogEntry& cols) {
      cols.setStr('map_name', mapName);
      cols.setStackTrace('stack', st);
    }
  );
}
    
    public:
  static const Data& getData() { return data_; }
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
      virtual const std::string& getType() const CXX11_OVERRIDE;
    
      // number of nodes
  uint32_t numNodes = htonl(nodes_.size());
  WRITE_CHECK(fp, &numNodes, sizeof(uint32_t));
  // 4bytes reserved
  WRITE_CHECK(fp, zero, 4);
    
        receiver->setMessageFactory(factory.get());
    receiver->setRoutingTable(routingTable.get());
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    void DHTTaskFactoryImpl::setTaskQueue(DHTTaskQueue* taskQueue)
{
  taskQueue_ = taskQueue;
}
    
    
    {} // namespace aria2
    
    #include 'util.h'
#include 'bittorrent_helper.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'MessageDigest.h'
#include 'message_digest_helper.h'
#include 'fmt.h'
    
      // TODO handle exception thrown by this function.
  std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port) const;
    
    #include 'DHTMessage.h'
    
    DNSCache::CacheEntry& DNSCache::CacheEntry::operator=(const CacheEntry& c)
{
  if (this != &c) {
    hostname_ = c.hostname_;
    port_ = c.port_;
    addrEntries_ = c.addrEntries_;
  }
  return *this;
}
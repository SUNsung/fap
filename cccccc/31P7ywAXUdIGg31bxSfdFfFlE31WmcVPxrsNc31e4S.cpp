
        
        //
// Alternative Canonical Huffman decoder:
//
// Canonical Huffman decoder based on 'On the Implementation of Minimum
// Redundancy Prefix Codes' by Moffat and Turpin - highly recommended
// reading as a good description of the problem space, as well as 
// a fast decoding algorithm.
//
// The premise is that instead of working directly with the coded 
// symbols, we create a new ordering based on the frequency of symbols.
// Less frequent symbols (and thus longer codes) are ordered earler.
// We're calling the values in this ordering 'Ids', as oppsed to 
// 'Symbols' - which are the short values we eventually want decoded.
//
// With this new ordering, a few small tables can be derived ('base' 
// and 'offset') which drive the decoding. To cut down on the 
// linear scanning of these tables, you can add a small table
// to directly look up short codes (as you might in a traditional
// lookup-table driven decoder). 
//
// The decoder is meant to be compatible with the encoder (and decoder)
// in ImfHuf.cpp, just faster. For ease of implementation, this decoder
// should only be used on compressed bitstreams >= 128 bits long.
//
    
    
const Slice &
FrameBuffer::operator [] (const string &name) const
{
    return this->operator[] (name.c_str());
}
    
    #include 'ImfIO.h'
#include 'ImfHeader.h'
#include 'ImfNamespace.h'
#include 'ImfExport.h'
    
    
    {    protected:
        IMF_EXPORT
        GenericOutputFile() {}
        IMF_EXPORT
        void writeMagicNumberAndVersionField (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream& os, const Header& header);
        IMF_EXPORT
        void writeMagicNumberAndVersionField (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream& os, const Header * headers, int parts);
  
};
    
    
void
Header::setType(const string& type)
{
    if (isSupportedType(type) == false)
    {
        throw IEX_NAMESPACE::ArgExc (type + 'is not a supported image type.' +
                           'The following are supported: ' +
                           SCANLINEIMAGE + ', ' +
                           TILEDIMAGE + ', ' +
                           DEEPSCANLINE + ' or ' +
                           DEEPTILE + '.');
    }
    }
    
    
    {
    {        return true;
    }
};
    
    
    {}  // namespace nwapi
    
    #include 'content/nw/src/api/base/base.h'
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethod')));
    
    namespace nw {
    }
    
    void Menu::Destroy() {
}
    
    #include <string.h>
    
    void MenuItem::SetSubmenu(Menu* sub_menu) {
  submenu_ = sub_menu;
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    sub_menu->UpdateKeys(gtk_accel_group);
  }
  if (sub_menu == NULL)
    gtk_menu_item_remove_submenu(GTK_MENU_ITEM(menu_item_));
  else
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item_), sub_menu->menu_);
}
    
    void MenuItem::SetLabel(const std::string& label) {
  is_modified_ = true;
  label_ = base::UTF8ToUTF16(label);
    }
    
    	PoolVector<uint8_t> data;
	data.resize(len);
	PoolVector<uint8_t>::Write w = data.write();
    
    					set_value(pos.y);
    
    	int tex_flags = 0;
	if (repeat > 0)
		tex_flags |= Texture::FLAG_REPEAT;
	if (repeat == 2)
		tex_flags |= Texture::FLAG_MIRRORED_REPEAT;
	if (filter)
		tex_flags |= Texture::FLAG_FILTER;
	if (mipmaps || compress_mode == COMPRESS_VIDEO_RAM)
		tex_flags |= Texture::FLAG_MIPMAPS;
	if (anisotropic)
		tex_flags |= Texture::FLAG_ANISOTROPIC_FILTER;
	if (srgb == 1)
		tex_flags |= Texture::FLAG_CONVERT_TO_LINEAR;
    
    String ResourceImporterTextureAtlas::get_importer_name() const {
    }
    
    bool EditorInspectorRootMotionPlugin::parse_property(Object *p_object, Variant::Type p_type, const String &p_path, PropertyHint p_hint, const String &p_hint_text, int p_usage) {
    }
    
    const reql_btree_superblock_t *get_reql_btree_superblock(buf_read_t *read) {
    uint16_t sb_size;
    const reql_btree_superblock_t *sb_data
        = static_cast<const reql_btree_superblock_t *>(read->get_data_read(&sb_size));
    guarantee(sb_size == REQL_BTREE_SUPERBLOCK_SIZE);
    return sb_data;
}
    
    // Returns a Boolean value indicating whether the caller is currently
// executing in the context of the death test child process.  Tools such as
// Valgrind heap checkers may need this to modify their behavior in death
// tests.  IMPORTANT: This is an internal utility.  Using it may break the
// implementation of death tests.  User code MUST NOT use it.
GTEST_API_ bool InDeathTestChild();
    
    // Converts a streamable value to an std::string.  A NULL pointer is
// converted to '(null)'.  When the input value is a ::string,
// ::std::string, ::wstring, or ::std::wstring object, each NUL
// character in it is replaced with '\\0'.
template <typename T>
std::string StreamableToString(const T& streamable) {
  return (Message() << streamable).GetString();
}
    
    // A macro for implementing the helper functions needed to implement
// ASSERT_?? and EXPECT_??.  It is here just to avoid copy-and-paste
// of similar code.
//
// For each templatized helper function, we also define an overloaded
// version for BiggestInt in order to reduce code bloat and allow
// anonymous enums to be used with {ASSERT|EXPECT}_?? when compiled
// with gcc 4.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
#define GTEST_IMPL_CMP_HELPER_(op_name, op)\
template <typename T1, typename T2>\
AssertionResult CmpHelper##op_name(const char* expr1, const char* expr2, \
                                   const T1& val1, const T2& val2) {\
  if (val1 op val2) {\
    return AssertionSuccess();\
  } else {\
    return AssertionFailure() \
        << 'Expected: (' << expr1 << ') ' #op ' (' << expr2\
        << '), actual: ' << FormatForComparisonFailureMessage(val1, val2)\
        << ' vs ' << FormatForComparisonFailureMessage(val2, val1);\
  }\
}\
GTEST_API_ AssertionResult CmpHelper##op_name(\
    const char* expr1, const char* expr2, BiggestInt val1, BiggestInt val2)
    
    // Helper function for implementing {EXPECT|ASSERT}_PRED5.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2,
          typename T3,
          typename T4,
          typename T5>
AssertionResult AssertPred5Helper(const char* pred_text,
                                  const char* e1,
                                  const char* e2,
                                  const char* e3,
                                  const char* e4,
                                  const char* e5,
                                  Pred pred,
                                  const T1& v1,
                                  const T2& v2,
                                  const T3& v3,
                                  const T4& v4,
                                  const T5& v5) {
  if (pred(v1, v2, v3, v4, v5)) return AssertionSuccess();
    }
    
      template <GTEST_7_TYPENAMES_(U)>
  tuple& CopyFrom(const GTEST_7_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    f6_ = t.f6_;
    return *this;
  }
    
    template <>
struct Types<$for i, [[internal::None]]> {
  typedef internal::Types0 type;
};
    
        std::unique_ptr<DHTMessageDispatcher> messageDispatcher;
    
    class DHTRoutingTable {
private:
  std::shared_ptr<DHTNode> localNode_;
    }
    
    namespace {
void readBytes(BufferedFile& fp, unsigned char* buf, size_t buflen,
               size_t readlen)
{
  assert(readlen <= buflen);
  READ_CHECK(fp, buf, readlen);
}
} // namespace
    
    #endif // D_DHT_TASK_H

    
    DHTTaskExecutor::DHTTaskExecutor(int numConcurrent)
    : numConcurrent_(numConcurrent)
{
}
    
    #include <vector>
#include <deque>
#include <memory>
    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
    void DHTTokenUpdateCommand::setTokenTracker(DHTTokenTracker* tokenTracker)
{
  tokenTracker_ = tokenTracker;
}
    
        template <typename OutputIterator>
    void getAllGoodAddrs(OutputIterator out) const
    {
      for (auto& elem : addrEntries_) {
        if (elem.good_) {
          *out++ = elem.addr_;
        }
      }
    }
    
      size_t sizeGuess() const {
    size_t total_size = 0;
    for (auto& q : queues_) {
      // MPMCQueue can have a negative size if there are pending readers.
      // Since we don't expose a blocking interface this shouldn't happen,
      // But just in case we put a floor at 0
      total_size += std::max<ssize_t>(0, q.sizeGuess());
    }
    return total_size;
  }
    
      void bulk_reclaim(bool transitive = false) {
    num_bulk_reclaims_.fetch_add(1, std::memory_order_acquire);
    while (true) {
      auto obj = retired_.exchange(nullptr, std::memory_order_acquire);
      /*** Full fence ***/ asymmetricHeavyBarrier(AMBFlags::EXPEDITED);
      auto rec = hazptrs_.load(std::memory_order_acquire);
      /* Part 1 - read hazard pointer values into private search structure */
      std::unordered_set<const void*> hashset; // TOTO: lock-free fixed hash set
      for (; rec; rec = rec->next()) {
        hashset.insert(rec->hazptr());
      }
      /* Part 2 - for each retired object, reclaim if no match */
      if (bulk_lookup_and_reclaim(obj, hashset) || !transitive) {
        break;
      }
    }
    num_bulk_reclaims_.fetch_sub(1, std::memory_order_release);
  }
    
      explicit AsyncLogWriter();
    
    
    {  if (folly::kIsDebug) {
    EXPECT_DEATH(
        { NoCleanUpLogWriter{}; },
        'cleanup\\(\\) is not called before destroying');
  } else {
    { NoCleanUpLogWriter{}; }
    EXPECT_TRUE(flag);
  }
}

    
    
    {
    {
    {
    {  // fall back to the timed locking algorithm
  using Proxy = DistributedMutexStateProxy;
  auto deadline = std::chrono::steady_clock::now() + duration;
  return timedLock(state_, deadline, [](auto... as) { return Proxy{as...}; });
}
} // namespace distributed_mutex
} // namespace detail
} // namespace folly

    
    template <class T>
class MmapAllocator {
 public:
  typedef T value_type;
  typedef T* pointer;
  typedef const T* const_pointer;
  typedef T& reference;
  typedef const T& const_reference;
    }
    
      bool is_lock_free() const noexcept {
    return data_.is_lock_free();
  }
    
    void BENCHFUN(pushBack)(int iters, int initialSize) {
  BenchmarkSuspender braces;
  auto const obj = randomObject<VECTOR::value_type>();
  VECTOR v(initialSize, obj);
  braces.dismissing([&]() {
    FOR_EACH_RANGE (i, 0, iters) { v.push_back(obj); }
  });
}
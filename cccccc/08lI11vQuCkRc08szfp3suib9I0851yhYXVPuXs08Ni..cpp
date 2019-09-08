
        
        
    {
    {    if (bridgedStoredNSError) {
      auto subConformance = SwiftModule->lookupConformance(
          t, bridgedStoredNSError);
      if (subConformance)
        useConformance(*subConformance);
    }
  });
}
    
      if (!CHA)
    return false;
    
        if (auto superclass = exis->getSuperclassConstraint()) {
      // If there is a superclass constraint, we mangle it specially.
      auto result = Dem.createNode(Node::Kind::ProtocolListWithClass);
      auto superclassNode = _swift_buildDemanglingForMetadata(superclass, Dem);
    }
    
        // Functions that may be used externally cannot be removed.
    if (F->isPossiblyUsedExternally())
      return true;
    
    LLVM_ATTRIBUTE_NOINLINE SWIFT_RUNTIME_EXPORT
void _swift_runtime_on_report(uintptr_t flags, const char *message,
                              RuntimeErrorDetails *details) {
  // Do nothing. This function is meant to be used by the debugger.
    }
    
    KNOWN_STDLIB_TYPE_DECL(_MaxBuiltinFloatType, TypeAliasDecl, 0)
    
    #if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
// Avoid defining macro max(), min() which conflict with std::max(), std::min()
#define NOMINMAX
#include <windows.h>
#else
#if !defined(__HAIKU__)
#include <sys/errno.h>
#else
#include <errno.h>
#endif
#include <sys/resource.h>
#include <unistd.h>
#endif
#include <climits>
#include <clocale>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#if defined(__CYGWIN__) || defined(_WIN32) || defined(__HAIKU__)
#include <sstream>
#include <cmath>
#elif defined(__ANDROID__)
#include <locale.h>
    
    /// The number of arguments that will be passed directly to a generic
/// nominal type access function. The remaining arguments (if any) will be
/// passed as an array. That array has enough storage for all of the arguments,
/// but only fills in the elements not passed directly. The callee may
/// mutate the array to fill in the direct arguments.
constexpr unsigned NumDirectGenericTypeMetadataAccessFunctionArgs = 3;
    
      /// Attempt to collect information from the given info chunk.
  ///
  /// \return true if collection was successful.
  template <bool Asserting>
  bool collect(StringRef value) {
#define check(CONDITION, COMMENT)            \
    do {                                     \
      if (!Asserting) {                      \
        if (!(CONDITION)) return false;      \
      } else {                               \
        assert((CONDITION) && COMMENT);      \
      }                                      \
    } while (false)
    }
    
      // Returns the number of sample points that have an error more than threshold.
  int NumberOfMisfittedPoints(double threshold) const;
    
    #include <cstdint>      // for int32_t
#include 'points.h'     // for FCOORD
    
    using tesseract::JUSTIFICATION_LEFT;
using tesseract::JUSTIFICATION_RIGHT;
using tesseract::JUSTIFICATION_CENTER;
using tesseract::JUSTIFICATION_UNKNOWN;
    
      // Functions to navigate the tree. Unlike the original implementation, we
  // store the root at index 0.
  int ParentNode(int index) const {
    return (index + 1) / 2 - 1;
  }
  int LeftChild(int index) const {
    return index * 2 + 1;
  }
    
    class QRSequenceGenerator {
 public:
  // Object is initialized with the size of the output range.
  explicit QRSequenceGenerator(int N) : N_(N), next_num_(0) {
    num_bits_ = static_cast<int>(ceil(log(static_cast<double>(N)) / log(2.0)));
  }
    }
    
    // Returns a vector representing the direction of a feature with the given
// theta direction in an INT_FEATURE_STRUCT.
FCOORD FeatureDirection(uint8_t theta);
    
    
  // Displays classification as the given unichar_id. Creates as many windows
  // as it feels fit, using index as a guide for placement. Adds any created
  // windows to the windows output and returns a new index that may be used
  // by any subsequent classifiers. Caller waits for the user to view and
  // then destroys the windows by clearing the vector.
  virtual int DisplayClassifyAs(const TrainingSample& sample,  Pix* page_pix,
                                UNICHAR_ID unichar_id, int index,
                                PointerVector<ScrollView>* windows);
    
    
    { private:
  ObjectCache<Dawg> dawgs_;
};
    
      test_function<testfunc>(l, [](testfunc f) {
    union { xmmType x; struct { uint64_t t; uint64_t v; }; } a0, a1, r;
    }
    
    
    {private:
  int rn;
};
    
    
    {  if (m_data->m_buffer != nullptr && m_data->m_chunkSize > m_data->m_bufferSize) {
    m_data->m_buffer = (char *)realloc(m_data->m_buffer, m_data->m_chunkSize);
    m_data->m_bufferSize = m_data->m_chunkSize;
  }
}
    
    bool MemFile::open(const String& filename, const String& mode) {
  assertx(m_len == -1);
  // mem files are read-only
  const char* mode_str = mode.c_str();
  if (strchr(mode_str, '+') || strchr(mode_str, 'a') || strchr(mode_str, 'w')) {
    return false;
  }
  int len = INT_MIN;
  bool compressed = false;
  char *data =
    StaticContentCache::TheFileCache->read(filename.c_str(), len, compressed);
  // -1: PHP file; -2: directory
  if (len != INT_MIN && len != -1 && len != -2) {
    assertx(len >= 0);
    if (compressed) {
      assertx(RuntimeOption::EnableOnDemandUncompress);
      data = gzdecode(data, len);
      if (data == nullptr) {
        raise_fatal_error('cannot unzip compressed data');
      }
      m_data = data;
      m_malloced = true;
      m_len = len;
      return true;
    }
    setName(filename.toCppString());
    m_data = data;
    m_len = len;
    return true;
  }
  if (len != INT_MIN) {
    Logger::Error('Cannot open a PHP file or a directory as MemFile: %s',
                  filename.c_str());
  }
  return false;
}
    
    bool OutputFile::flush() {
  if (!isClosed()) {
    g_context->flush();
    return true;
  }
  return false;
}
    
    
    {
    {///////////////////////////////////////////////////////////////////////////////
}}
    
    
    {  uint64_t hash() const {
    // All the bits here are fantastically good.
    return (uint64_t(q[0]) << 32) + q[1];
  }
};
    
    
    {    std::cout << null << '\n';
    std::cout << *res2.first << ' ' << std::boolalpha << res2.second << '\n';
}

    
    using ServiceNameMap = std::unordered_map<std::string, std::string>;
    
    void processLocalGroups(QueryData& results) {
  unsigned long groupInfoLevel = 1;
  unsigned long numGroupsRead = 0;
  unsigned long totalGroups = 0;
  unsigned long resumeHandle = 0;
  unsigned long ret = 0;
  LOCALGROUP_INFO_1* lginfo = nullptr;
    }
    
    #include <set>
#include <string>
    
      /**
   * @brief List of blacklisted queries.
   *
   * A list of queries that are blacklisted from executing due to prior
   * failures. If a query caused a worker to fail it will be recorded during
   * the next execution and saved to the blacklist.
   */
  std::map<std::string, size_t> blacklist_;
    
    void Pack::initialize(const std::string& name,
                      const std::string& source,
                      const rj::Value& obj) {
  name_ = name;
  source_ = source;
  // Check the shard limitation, shards falling below this value are included.
  if (obj.HasMember('shard')) {
    shard_ = JSON::valueToSize(obj['shard']);
  }
    }
    
    TEST_F(PacksTests, test_get_discovery_queries) {
  std::vector<std::string> expected;
    }
    
      virtual Expected<int32_t, DatabaseError> getInt32(const std::string& domain,
                                                    const std::string& key);
  virtual Expected<std::string, DatabaseError> getString(
      const std::string& domain, const std::string& key) = 0;
    
        swHashMap_del(hm, (char *) SW_STRL('willdel'));
    swHashMap_update(hm, (char *) SW_STRL('willupadte'), (void *) (9999 * 5555));
    
        friend
    void RedisQtDelWrite(void * adapter) {
        RedisQtAdapter * a = static_cast<RedisQtAdapter *>(adapter);
        a->delWrite();
    }
    
    public:
    explicit LRUCache(size_t capacity)
    {
        cache_capacity = capacity;
    }
    
        for (i = 1; i < 1024; i++)
    {
        uint32_t key = (rand() % (20000 * 37));
        if (key % 37 == 0)
        {
            continue;
        }
        int ret = (int) (long) swRbtree_find(tree, key);
        ASSERT_EQ(ret, 0);
    }
    
            while (prev)
        {
            zend_uchar *type;
    }
    
    /** hazptr_retire */
template <template <typename> class Atom, typename T, typename D>
FOLLY_ALWAYS_INLINE void hazptr_retire(T* obj, D reclaim) {
  default_hazptr_domain<Atom>().retire(obj, std::move(reclaim));
}
    
      std::thread cobThread;
  {
    auto observer =
        folly::observer::ObserverCreator<Observable, Traits>().getObserver();
    }
    
      for (auto& th : posters) {
    th = std::thread([&] {
      barrier.wait();
      for (auto i = 0ull; i < iters; ++i) {
        if (i % (iters >> 4) == 0) {
          std::this_thread::yield();
        }
        sem.post();
      }
    });
  }
  for (auto& th : waiters) {
    th = std::thread([&] {
      barrier.wait();
      for (auto i = 0ull; i < iters; ++i) {
        sem.wait();
      }
    });
  }
    
    void BENCHFUN(sizeCtor)(int iters, int size) {
  FOR_EACH_RANGE (i, 0, iters) {
    VECTOR v(size);
    doNotOptimizeAway(&v);
  }
}
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 16)
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 128)
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 1024)
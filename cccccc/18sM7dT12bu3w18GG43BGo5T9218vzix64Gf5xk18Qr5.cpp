
        
        
    {
    {SHOULD_NOT_DO_GRADIENT(FindDuplicateElements);
} // namespace
} // namespace caffe2

    
    // Streams a Message to an ostream.
inline std::ostream& operator <<(std::ostream& os, const Message& sb) {
  return os << sb.GetString();
}
    
    
    {  template <typename Tuple>
  static void TersePrintPrefixToStrings(const Tuple& t, Strings* strings) {
    ::std::stringstream ss;
    UniversalTersePrint(::std::tr1::get<0>(t), &ss);
    strings->push_back(ss.str());
  }
};
    
      // C'tor.  TestPartResult does NOT have a default constructor.
  // Always use this constructor (with parameters) to create a
  // TestPartResult object.
  TestPartResult(Type a_type,
                 const char* a_file_name,
                 int a_line_number,
                 const char* a_message)
      : type_(a_type),
        file_name_(a_file_name == NULL ? '' : a_file_name),
        line_number_(a_line_number),
        summary_(ExtractSummary(a_message)),
        message_(a_message) {
  }
    
    // Depending on the platform, different string classes are available.
// On Linux, in addition to ::std::string, Google also makes use of
// class ::string, which has the same interface as ::std::string, but
// has a different implementation.
//
// The user can define GTEST_HAS_GLOBAL_STRING to 1 to indicate that
// ::string is available AND is a distinct type to ::std::string, or
// define it to 0 to indicate otherwise.
//
// If the user's ::std::string and ::string are the same class due to
// aliasing, he should define GTEST_HAS_GLOBAL_STRING to 0.
//
// If the user doesn't define GTEST_HAS_GLOBAL_STRING, it is defined
// heuristically.
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_

    
    // A function to convert T* into linked_ptr<T>
// Doing e.g. make_linked_ptr(new FooBarBaz<type>(arg)) is a shorter notation
// for linked_ptr<FooBarBaz<type> >(new FooBarBaz<type>(arg))
template <typename T>
linked_ptr<T> make_linked_ptr(T* ptr) {
  return linked_ptr<T>(ptr);
}
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
      // Serializes a GrpcTraceContext into the provided buffer. Returns the number
  // of bytes serialized into the buffer. If the buffer is not of sufficient
  // size (it must be at least kGrpcTraceContextSize bytes) it will drop
  // everything and return 0 bytes serialized. Inlined for performance reasons.
  static size_t Encode(const GrpcTraceContext& tc, char* buf, size_t buf_size) {
    if (buf_size < kGrpcTraceContextSize) {
      return kEncodeDecodeFailure;
    }
    buf[kVersionIdOffset] = kVersionId;
    buf[kTraceIdOffset] = kTraceIdField;
    memcpy(&buf[kTraceIdOffset + 1], tc.trace_id,
           opencensus::trace::TraceId::kSize);
    buf[kSpanIdOffset] = kSpanIdField;
    memcpy(&buf[kSpanIdOffset + 1], tc.span_id,
           opencensus::trace::SpanId::kSize);
    buf[kTraceOptionsOffset] = kTraceOptionsField;
    memcpy(&buf[kTraceOptionsOffset + 1], tc.trace_options,
           opencensus::trace::TraceOptions::kSize);
    return kGrpcTraceContextSize;
  }
    
      Status GetFileContainingExtension(
      ServerContext* context,
      const reflection::v1alpha::ExtensionRequest* request,
      reflection::v1alpha::ServerReflectionResponse* response);
    
    void SetCreateThreadPool(CreateThreadPoolFunc func) { g_ctp_impl = func; }
    
    namespace grpc {
namespace load_reporter {
    }
    }
    
    int64_t VMTOC::pushElem(int64_t elem, bool elemMayChange) {
  int64_t offset;
  if (elemMayChange) {
    offset = allocTOC(elem);
  }
  else {
    auto& map_elem = m_map[elem];
    if (map_elem) return map_elem;
    offset = allocTOC(elem);
    map_elem = offset;
  }
    }
    
    #include 'hphp/runtime/base/apc-object.h'
#include 'hphp/runtime/base/apc-array.h'
#include 'hphp/runtime/base/apc-stats.h'
#include 'hphp/runtime/base/object-data.h'
#include 'hphp/runtime/base/type-object.h'
#include 'hphp/runtime/ext/apc/ext_apc.h'
#include 'hphp/runtime/base/collections.h'
#include 'hphp/runtime/ext/collections/ext_collections-map.h'
#include 'hphp/runtime/ext/collections/ext_collections-set.h'
#include 'hphp/runtime/ext/collections/ext_collections-vector.h'
#include 'hphp/runtime/base/data-walker.h'
    
    CachedDirectory::CachedDirectory(const String& path) {
  assertx(File::IsVirtualDirectory(path));
  m_files = StaticContentCache::TheFileCache->readDirectory(path.c_str());
}
    
    
    {  // if the function was called via FCallBuiltin, we'll get a bogus name as
  // the stack frame will be wrong
  ActRec* ar = g_context->getStackFrame();
  const char* fn = (ar != nullptr)
    ? ar->func()->name()->data()
    : 'OPTIMIZED_BUILTIN';
  raise_warning('%s(%s): failed to open stream: '
                'wrapper does not support stream open',
                fn, filename.data());
  return nullptr;
}
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    #include 'hphp/util/perf-event.h'
    
    /*
 * If the given AtomicHashMap has more than one submap allocated, log a perf
 * warning with its name.
 *
 * A single unique done flag should exist for each map being checked, to avoid
 * logging more than once (process, map) pair.
 */
template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done);
    
      explicit UrlFile(const char *method = 'GET', const Array& headers = null_array,
                   const String& postData = null_string,
                   int maxRedirect = HttpClient::defaultMaxRedirect,
                   int timeout = -1, bool ignoreErrors = false);
    
    

    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual Place* reverse() const override;
    virtual Place* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    Place(){}
    virtual ~Place(){}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CCACTIONTWEEN_H__
#define __CCACTIONTWEEN_H__
    
            component->onRemove();
        component->setOwner(nullptr);
        component->release();
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
      for (unsigned i = 0; i < iter; ++i) {
    FB_LOG_EVERY_MS(INFO, -1) << 'every -1ms';
  }
    
    static std::string
getStr(const std::vector<uint8_t>& v, size_t& pos, const size_t len) {
  CHECK_GE(len, 1);
  std::string res;
  res.resize(len - 1);
  for (size_t i = 0; i < len - 1; i++) {
    CHECK_NE(v[pos + i], 0);
    res[i] = char(v[pos + i]);
  }
  CHECK_EQ(0, v[pos + len - 1]);
  pos += len;
  return res;
}
    
    #include <stdexcept>
    
      /**
   * windowSize is the base two logarithm of the window size (the size of the
   * history buffer). It should be in the range 9..15. Larger values of this
   * parameter result in better compression at the expense of memory usage.
   *
   * The default value is 15.
   *
   * NB: when inflating/uncompressing data, the windowSize must be greater than
   * or equal to the size used when deflating/compressing.
   */
  int windowSize;
    
      bool is_lock_free() const noexcept {
    // lock free unless more than EXTERNAL_OFFSET threads are
    // contending and they all get unlucky and scheduled out during
    // load().
    //
    // TODO: Could use a lock-free external map to fix this
    // corner case.
    return true;
  }
    
    
    {  template <typename T>
  static void release_shared(counted_base* base, uint64_t count) {
    if (count == counted_ptr_base<Atom>::getRef(base)->release_ref(count)) {
      ((T*)base)->~T();
      free(counted_ptr_base<Atom>::getRef(base));
    }
  }
};

    
      // create an in6_addr from an uint8_t*
  static inline in6_addr mkAddress6(const uint8_t* src) {
    in6_addr addr;
    std::memset(&addr, 0, 16);
    std::memcpy(addr.s6_addr, src, 16);
    return addr;
  }

        
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
    
    # define REGISTER_TYPED_TEST_CASE_P(CaseName, ...) \
  namespace GTEST_CASE_NAMESPACE_(CaseName) { \
  typedef ::testing::internal::Templates<__VA_ARGS__>::type gtest_AllTests_; \
  } \
  static const char* const GTEST_REGISTERED_TEST_NAMES_(CaseName) = \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName).VerifyRegisteredTestNames(\
          __FILE__, __LINE__, #__VA_ARGS__)
    
    // The following family of struct and struct templates are used to
// represent template lists.  In particular, TemplatesN<T1, T2, ...,
// TN> represents a list of N templates (T1, T2, ..., and TN).  Except
// for Templates0, every struct in the family has two member types:
// Head for the selector of the first template in the list, and Tail
// for the rest of the list.
    
    // Returns true iff n is a prime number.
bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;
    }
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    // Godot TO Bullet
extern void G_TO_B(Vector3 const &inVal, btVector3 &outVal);
extern void INVERT_G_TO_B(Vector3 const &inVal, btVector3 &outVal);
extern void G_TO_B(Basis const &inVal, btMatrix3x3 &outVal);
extern void INVERT_G_TO_B(Basis const &inVal, btMatrix3x3 &outVal);
extern void G_TO_B(Transform const &inVal, btTransform &outVal);
    
    public:
	_FORCE_INLINE_ void set_self(const RID &p_self) { self = p_self; }
	_FORCE_INLINE_ RID get_self() const { return self; }
    
    #include 'csg_gizmos.h'
#include 'csg_shape.h'
    
    MemoryPool::Alloc *MemoryPool::allocs = NULL;
MemoryPool::Alloc *MemoryPool::free_list = NULL;
uint32_t MemoryPool::alloc_count = 0;
uint32_t MemoryPool::allocs_used = 0;
Mutex *MemoryPool::alloc_mutex = NULL;
    
    void FileAccessZip::close() {
    }
    
    
    {	p_dst[0] = ret >> 8;
	p_dst[1] = ret & 0xff;
};
    
      /*
   * @brief a unique ID identifying the 'carve'
   *
   * This unique generated GUID is used to identify the carve session from
   * other carves. It is also used by our backend service to derive a
   * session key for exfiltration.
   */
  std::string carveGuid_;
    
    namespace osquery {
    }
    
    
    {    // Backup the current decorator status.
    decorator_status_ = FLAGS_disable_decorators;
    FLAGS_disable_decorators = true;
  }
    
    #include <osquery/config.h>
#include <osquery/flags.h>
#include <osquery/registry.h>
    
    
    {/**
 * @brief Compute a hash digest from the contents of a buffer.
 *
 * @param hash_type The osquery-supported hash algorithm.
 * @param buffer A caller-controlled buffer (already allocated).
 * @param size The length of buffer in bytes.
 * @return A string (hex) representation of the hash digest.
 */
std::string hashFromBuffer(HashType hash_type, const void* buffer, size_t size);
} // namespace osquery

    
      EXPECT_FALSE(cl3.matches(1001));
  EXPECT_TRUE(cl3.matches(1000));
    
      /// Mutex and lock around extensions access.
  std::unique_lock<Mutex> lock_;
    
    /**
 * @brief Event details for INotifyEventPublisher events.
 */
struct INotifyEventContext : public EventContext {
  /// The inotify_event structure if the EventSubscriber want to interact.
  std::unique_ptr<struct inotify_event> event{nullptr};
    }

        
                bool isGeneralPosition;
        do
        {
            ArrayTest::fill_array(test_case_idx, i, j, arr);
    }
    
    namespace cv
{
CV_EXPORTS_W void add(InputArray src1, Scalar src2, OutputArray dst, InputArray mask=noArray(), int dtype=-1);
    }
    
    namespace cv { namespace ocl { namespace runtime {
    }
    }
    }
    
    const float g_8x32fTab[] =
{
    -128.f, -127.f, -126.f, -125.f, -124.f, -123.f, -122.f, -121.f,
    -120.f, -119.f, -118.f, -117.f, -116.f, -115.f, -114.f, -113.f,
    -112.f, -111.f, -110.f, -109.f, -108.f, -107.f, -106.f, -105.f,
    -104.f, -103.f, -102.f, -101.f, -100.f,  -99.f,  -98.f,  -97.f,
     -96.f,  -95.f,  -94.f,  -93.f,  -92.f,  -91.f,  -90.f,  -89.f,
     -88.f,  -87.f,  -86.f,  -85.f,  -84.f,  -83.f,  -82.f,  -81.f,
     -80.f,  -79.f,  -78.f,  -77.f,  -76.f,  -75.f,  -74.f,  -73.f,
     -72.f,  -71.f,  -70.f,  -69.f,  -68.f,  -67.f,  -66.f,  -65.f,
     -64.f,  -63.f,  -62.f,  -61.f,  -60.f,  -59.f,  -58.f,  -57.f,
     -56.f,  -55.f,  -54.f,  -53.f,  -52.f,  -51.f,  -50.f,  -49.f,
     -48.f,  -47.f,  -46.f,  -45.f,  -44.f,  -43.f,  -42.f,  -41.f,
     -40.f,  -39.f,  -38.f,  -37.f,  -36.f,  -35.f,  -34.f,  -33.f,
     -32.f,  -31.f,  -30.f,  -29.f,  -28.f,  -27.f,  -26.f,  -25.f,
     -24.f,  -23.f,  -22.f,  -21.f,  -20.f,  -19.f,  -18.f,  -17.f,
     -16.f,  -15.f,  -14.f,  -13.f,  -12.f,  -11.f,  -10.f,   -9.f,
      -8.f,   -7.f,   -6.f,   -5.f,   -4.f,   -3.f,   -2.f,   -1.f,
       0.f,    1.f,    2.f,    3.f,    4.f,    5.f,    6.f,    7.f,
       8.f,    9.f,   10.f,   11.f,   12.f,   13.f,   14.f,   15.f,
      16.f,   17.f,   18.f,   19.f,   20.f,   21.f,   22.f,   23.f,
      24.f,   25.f,   26.f,   27.f,   28.f,   29.f,   30.f,   31.f,
      32.f,   33.f,   34.f,   35.f,   36.f,   37.f,   38.f,   39.f,
      40.f,   41.f,   42.f,   43.f,   44.f,   45.f,   46.f,   47.f,
      48.f,   49.f,   50.f,   51.f,   52.f,   53.f,   54.f,   55.f,
      56.f,   57.f,   58.f,   59.f,   60.f,   61.f,   62.f,   63.f,
      64.f,   65.f,   66.f,   67.f,   68.f,   69.f,   70.f,   71.f,
      72.f,   73.f,   74.f,   75.f,   76.f,   77.f,   78.f,   79.f,
      80.f,   81.f,   82.f,   83.f,   84.f,   85.f,   86.f,   87.f,
      88.f,   89.f,   90.f,   91.f,   92.f,   93.f,   94.f,   95.f,
      96.f,   97.f,   98.f,   99.f,  100.f,  101.f,  102.f,  103.f,
     104.f,  105.f,  106.f,  107.f,  108.f,  109.f,  110.f,  111.f,
     112.f,  113.f,  114.f,  115.f,  116.f,  117.f,  118.f,  119.f,
     120.f,  121.f,  122.f,  123.f,  124.f,  125.f,  126.f,  127.f,
     128.f,  129.f,  130.f,  131.f,  132.f,  133.f,  134.f,  135.f,
     136.f,  137.f,  138.f,  139.f,  140.f,  141.f,  142.f,  143.f,
     144.f,  145.f,  146.f,  147.f,  148.f,  149.f,  150.f,  151.f,
     152.f,  153.f,  154.f,  155.f,  156.f,  157.f,  158.f,  159.f,
     160.f,  161.f,  162.f,  163.f,  164.f,  165.f,  166.f,  167.f,
     168.f,  169.f,  170.f,  171.f,  172.f,  173.f,  174.f,  175.f,
     176.f,  177.f,  178.f,  179.f,  180.f,  181.f,  182.f,  183.f,
     184.f,  185.f,  186.f,  187.f,  188.f,  189.f,  190.f,  191.f,
     192.f,  193.f,  194.f,  195.f,  196.f,  197.f,  198.f,  199.f,
     200.f,  201.f,  202.f,  203.f,  204.f,  205.f,  206.f,  207.f,
     208.f,  209.f,  210.f,  211.f,  212.f,  213.f,  214.f,  215.f,
     216.f,  217.f,  218.f,  219.f,  220.f,  221.f,  222.f,  223.f,
     224.f,  225.f,  226.f,  227.f,  228.f,  229.f,  230.f,  231.f,
     232.f,  233.f,  234.f,  235.f,  236.f,  237.f,  238.f,  239.f,
     240.f,  241.f,  242.f,  243.f,  244.f,  245.f,  246.f,  247.f,
     248.f,  249.f,  250.f,  251.f,  252.f,  253.f,  254.f,  255.f
};
    
    TEST_P(DerivedTest, DoesBlah) {
  // GetParam works just the same here as if you inherit from TestWithParam.
  EXPECT_TRUE(foo.Blah(GetParam()));
}
    
    // Implements printing an array type T[N].
template <typename T, size_t N>
class UniversalPrinter<T[N]> {
 public:
  // Prints the given array, omitting some elements when there are too
  // many.
  static void Print(const T (&a)[N], ::std::ostream* os) {
    UniversalPrintArray(a, N, os);
  }
};
    
    namespace internal {
    }
    
    // Returns a newly created InternalRunDeathTestFlag object with fields
// initialized from the GTEST_FLAG(internal_run_death_test) flag if
// the flag is specified; otherwise returns NULL.
InternalRunDeathTestFlag* ParseInternalRunDeathTestFlag();
    
    // A helper class for creating scoped traces in user programs.
class GTEST_API_ ScopedTrace {
 public:
  // The c'tor pushes the given source file location and message onto
  // a trace stack maintained by Google Test.
  ScopedTrace(const char* file, int line, const Message& message);
    }
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_)};
    return ValuesIn(array);
  }
    
    # endif  // GTEST_HAS_COMBINE
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40, GTEST_TEMPLATE_ T41, GTEST_TEMPLATE_ T42,
    GTEST_TEMPLATE_ T43, GTEST_TEMPLATE_ T44, GTEST_TEMPLATE_ T45,
    GTEST_TEMPLATE_ T46, GTEST_TEMPLATE_ T47, GTEST_TEMPLATE_ T48,
    GTEST_TEMPLATE_ T49, GTEST_TEMPLATE_ T50>
struct Templates50 {
  typedef TemplateSel<T1> Head;
  typedef Templates49<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42,
      T43, T44, T45, T46, T47, T48, T49, T50> Tail;
};
    
      // Trivial case 2: even numbers
  if (n % 2 == 0) return n == 2;
    
    
    {
    {    // Adds the leak checker to the end of the test event listener list,
    // after the default text output printer and the default XML report
    // generator.
    //
    // The order is important - it ensures that failures generated in the
    // leak checker's OnTestEnd() method are processed by the text and XML
    // printers *before* their OnTestEnd() methods are called, such that
    // they are attributed to the right test. Remember that a listener
    // receives an OnXyzStart event *after* listeners preceding it in the
    // list received that event, and receives an OnXyzEnd event *before*
    // listeners preceding it.
    //
    // We don't need to worry about deleting the new listener later, as
    // Google Test will do it.
    listeners.Append(new LeakChecker);
  }
  return RUN_ALL_TESTS();
}

    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
      /**
   * \overload
   */
  friend constexpr bool operator==(
      const BasicFixedString& a,
      const Char* b) noexcept {
    return b == a;
  }
    
    int customDeleterCount = 0;
int destructorCount = 0;
struct OwnershipTestClass {
  explicit OwnershipTestClass(int v = 0) : val(v) { }
  ~OwnershipTestClass() {
    ++destructorCount;
  }
  int val;
};
    
    TEST_F(OrderingTest, compare_greater) {
  compare_greater<OddCompare<int>> op;
  EXPECT_TRUE(op(3, 4));
  EXPECT_FALSE(op(3, 3));
  EXPECT_FALSE(op(4, 3));
}
    
      bool pop(T& val) {
    hazptr_local<1, Atom> h;
    hazptr_holder<Atom>& hptr = h[0];
    Node* node;
    while (true) {
      node = hptr.get_protected(head_);
      if (node == nullptr) {
        return false;
      }
      auto next = node->next();
      if (cas_head(node, next)) {
        break;
      }
    }
    hptr.reset();
    val = node->value();
    node->retire();
    return true;
  }
    
      /* Used by readers */
  bool contains(const T& val) const {
    /* Two hazard pointers for hand-over-hand traversal. */
    hazptr_local<2, Atom> hptr;
    hazptr_holder<Atom>* hptr_prev = &hptr[0];
    hazptr_holder<Atom>* hptr_curr = &hptr[1];
    while (true) {
      auto prev = &head_;
      auto curr = prev->load(std::memory_order_acquire);
      while (true) {
        if (!curr) {
          return false;
        }
        if (!hptr_curr->try_protect(curr, *prev)) {
          break;
        }
        auto next = curr->next_.load(std::memory_order_acquire);
        if (prev->load(std::memory_order_acquire) != curr) {
          break;
        }
        if (curr->elem_ == val) {
          return true;
        } else if (!(curr->elem_ < val)) {
          return false; // because the list is sorted
        }
        prev = &(curr->next_);
        curr = next;
        std::swap(hptr_curr, hptr_prev);
      }
    }
  }
    
    TEST_F(ConstexprMathTest, constexpr_abs_unsigned) {
  constexpr auto v = uint32_t(17);
  constexpr auto a = folly::constexpr_abs(v);
  EXPECT_EQ(17, a);
  EXPECT_TRUE((std::is_same<const uint32_t, decltype(a)>::value));
}
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.readIfNotEmpty(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
    namespace folly { namespace futures {
    }
    }
    
      // Move from the registration phase to the 'you can actually instantiate
  // things now' phase.
  folly::SingletonVault::singleton()->registrationComplete();
    
    /*
 * Table of interface function pointers.
 */
struct JNINativeInterface {
    void*       reserved0;
    void*       reserved1;
    void*       reserved2;
    void*       reserved3;
    }
    
    // convert return from local_ref<T>
template <typename T>
struct Convert<local_ref<T>> {
  typedef JniType<T> jniType;
  // No automatic synthesis of local_ref
  static jniType toJniRet(local_ref<jniType> t) {
    return t.release();
  }
  static jniType toCall(local_ref<jniType> t) {
    return t.get();
  }
};
    
    struct Layout
{
    double left;
    double right;
    }
    
        void setBorder(int edge, double border);
    
      void reset(T* other = NULL) {
    T* old = (T*)pthread_getspecific(m_key);
    if (old != other) {
      FBASSERT(m_cleanup);
      m_cleanup(old);
      pthread_setspecific(m_key, other);
    }
  }
    
    extern const std::string NIL;
    
    void AbstractAuthResolver::setDefaultCred(std::string user,
                                          std::string password)
{
  defaultUser_ = std::move(user);
  defaultPassword_ = std::move(password);
}
    
    AbstractHttpServerResponseCommand::~AbstractHttpServerResponseCommand()
{
  if (readCheck_) {
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (writeCheck_) {
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    AbstractOptionHandler::AbstractOptionHandler(PrefPtr pref,
                                             const char* description,
                                             const std::string& defaultValue,
                                             ARG_TYPE argType, char shortName)
    : pref_(pref),
      description_(description),
      defaultValue_(defaultValue),
      argType_(argType),
      shortName_(shortName),
      tags_(0),
      flags_(0)
{
}
    
    class Option;
struct Pref;
    
    namespace aria2 {
    }
    
      virtual int64_t getCurrentLength() CXX11_OVERRIDE;
    
    
    {} // namespace aria2
    
      CFDictionaryRef idAndTrust =
      (CFDictionaryRef)CFArrayGetValueAtIndex(items.get(), 0);
  if (!idAndTrust) {
    A2_LOG_ERROR('Failed to get identity and trust from PKCS12 data');
    return false;
  }
  credentials_ =
      (SecIdentityRef)CFDictionaryGetValue(idAndTrust, kSecImportItemIdentity);
  if (!credentials_) {
    A2_LOG_ERROR('Failed to get credentials PKCS12 data');
    return false;
  }
  CFRetain(credentials_);
  A2_LOG_INFO('Loaded certificate from file');
  return true;
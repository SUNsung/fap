
        
        #ifndef BENCHMARK_HAS_CXX11
#define BENCHMARK_DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&);                         \
  TypeName& operator=(const TypeName&)
#else
#define BENCHMARK_DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&) = delete;                \
  TypeName& operator=(const TypeName&) = delete
#endif
    
      // We need to flush the stream buffers into the console before each
  // SetConsoleTextAttribute call lest it affect the text that is already
  // printed but has not yet reached the console.
  fflush(stdout);
  SetConsoleTextAttribute(stdout_handle,
                          GetPlatformColorCode(color) | FOREGROUND_INTENSITY);
  vprintf(fmt, args);
    
    static void IgnoreColorPrint(std::ostream& out, LogColor, const char* fmt,
                             ...) {
  va_list args;
  va_start(args, fmt);
  out << FormatString(fmt, args);
  va_end(args);
}
    
     private:
  Mutex lock_;
  Condition phase_condition_;
  int running_threads_;
    
    #if defined(HAVE_STD_REGEX)
    
      if (info.scaling_enabled) {
    Out << '***WARNING*** CPU scaling is enabled, the benchmark '
           'real time measurements may be noisy and will incur extra '
           'overhead.\n';
  }
    
    exception_wrapper::VTable const exception_wrapper::SharedPtr::ops_{
    copy_,
    move_,
    delete_,
    throw_,
    type_,
    get_exception_,
    get_exception_ptr_};
    
    namespace uri_detail {
    }
    
    /**
 * Reads sizeof(T) bytes, and returns false if not enough bytes are available.
 * Returns true if the first n bytes are equal to prefix when interpreted as
 * a little endian T.
 */
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, bool>::type
dataStartsWithLE(const IOBuf* data, T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  T value;
  Cursor cursor{data};
  if (!cursor.tryReadLE(value)) {
    return false;
  }
  const T mask = n == sizeof(T) ? T(-1) : (T(1) << (8 * n)) - 1;
  return prefix == (value & mask);
}
    
    template <template <typename> class Atom = std::atomic>
class counted_ptr_internals : public counted_ptr_base<Atom> {
 public:
  template <typename T, typename... Args>
  static counted_ptr<T, Atom> make_ptr(Args&&... args) {
    return make_counted<Atom, T>(std::forward<Args...>(args...));
  }
  template <typename T>
  using CountedPtr = counted_ptr<T, Atom>;
  typedef void counted_base;
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

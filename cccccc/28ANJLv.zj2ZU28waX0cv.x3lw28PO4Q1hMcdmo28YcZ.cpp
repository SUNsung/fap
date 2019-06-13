
        
          auto* message1_on_arena =
      Arena::CreateMessage<protobuf_unittest::TestAllTypes>(&arena1);
  TestUtil::SetAllFields(message1_on_arena);
  const auto* nested = &message1_on_arena->optional_nested_message();
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
namespace {
    }
    }
    }
    }
    }
    
    
    {
    {
    {
    {}  // namespace
}  // namespace internal
}  // namespace protobuf
}  // namespace google

    
    TEST(TemplateUtilTest, TestTemplateTypeEquals) {
  // Check that the TemplateTypeEquals works correctly.
  bool value = false;
    }
    
    
    {    std::ofstream ofs(output_file);
    ofs << dataset.SerializeAsString();
    ofs.close();
  }
    
    
    {
    {    return true;
  }
 private:
  bool CanGenerate(const FileDescriptor* file) const {
    if (GetPool()->FindFileByName(file->name()) != nullptr) {
      return false;
    }
    for (int j = 0; j < file->dependency_count(); j++) {
      if (GetPool()->FindFileByName(file->dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    for (int j = 0; j < file->public_dependency_count(); j++) {
      if (GetPool()->FindFileByName(
          file->public_dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    for (int j = 0; j < file->weak_dependency_count(); j++) {
      if (GetPool()->FindFileByName(
          file->weak_dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    return true;
  }
};
    
    // Functions producing parameter generators.
//
// Google Test uses these generators to produce parameters for value-
// parameterized tests. When a parameterized test case is instantiated
// with a particular generator, Google Test creates and runs tests
// for each element in the sequence produced by the generator.
//
// In the following sample, tests from test case FooTest are instantiated
// each three times with parameter values 3, 5, and 8:
//
// class FooTest : public TestWithParam<int> { ... };
//
// TEST_P(FooTest, TestThis) {
// }
// TEST_P(FooTest, TestThat) {
// }
// INSTANTIATE_TEST_CASE_P(TestSequence, FooTest, Values(3, 5, 8));
//
    
    // Traps C++ exceptions escaping statement and reports them as test
// failures. Note that trapping SEH exceptions is not implemented here.
# if GTEST_HAS_EXCEPTIONS
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  try { \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } catch (const ::std::exception& gtest_exception) { \
    fprintf(\
        stderr, \
        '\n%s: Caught std::exception-derived exception escaping the ' \
        'death test statement. Exception message: %s\n', \
        ::testing::internal::FormatFileLocation(__FILE__, __LINE__).c_str(), \
        gtest_exception.what()); \
    fflush(stderr); \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  } catch (...) { \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  }
    
    // If *pstr starts with the given prefix, modifies *pstr to be right
// past the prefix and returns true; otherwise leaves *pstr unchanged
// and returns false.  None of pstr, *pstr, and prefix can be NULL.
GTEST_API_ bool SkipPrefix(const char* prefix, const char** pstr);
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
  const T18 v18_;
  const T19 v19_;
  const T20 v20_;
  const T21 v21_;
  const T22 v22_;
  const T23 v23_;
  const T24 v24_;
  const T25 v25_;
  const T26 v26_;
  const T27 v27_;
  const T28 v28_;
  const T29 v29_;
};
    
      // Returns true iff the given string ends with the given suffix, ignoring
  // case. Any string is considered to end with an empty suffix.
  static bool EndsWithCaseInsensitive(
      const std::string& str, const std::string& suffix);
    
        for (int i = 2; i*i <= n; i++) {
      // n is divisible by an integer other than 1 and itself.
      if ((n % i) == 0) return false;
    }
    
      // Trivial case 2: even numbers
  if (n % 2 == 0) return n == 2;
    
    // Tests the c'tor that accepts a C string.
TEST(MyString, ConstructorFromCString) {
  const MyString s(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
  EXPECT_EQ(sizeof(kHelloString)/sizeof(kHelloString[0]) - 1,
            s.Length());
}
    
    namespace {
std::exception const* get_std_exception_(std::exception_ptr eptr) noexcept {
  try {
    std::rethrow_exception(eptr);
  } catch (const std::exception& ex) {
    return &ex;
  } catch (...) {
    return nullptr;
  }
}
} // namespace
    
    template <class UIntType, size_t w, size_t s, size_t r>
struct StateSize<std::subtract_with_carry_engine<UIntType, w, s, r>> {
  // [rand.eng.sub]: r * ceil(w / 32)
  using type = std::integral_constant<size_t, r*((w + 31) / 32)>;
};
    
      /**
   * Returns a random uint64_t in [min, max). If min == max, returns 0.
   */
  static uint64_t rand64(uint64_t min, uint64_t max) {
    return rand64(min, max, ThreadLocalPRNG());
  }
    
    template <
    typename T,
    template <typename> class Atom = std::atomic,
    typename CountedDetail = detail::shared_ptr_internals>
class atomic_shared_ptr {
  using SharedPtr = typename CountedDetail::template CountedPtr<T>;
  using BasePtr = typename CountedDetail::counted_base;
  using PackedPtr = folly::PackedSyncPtr<BasePtr>;
    }
    
    /// Returns the best real CacheLocality information available
static CacheLocality getSystemLocalityInfo() {
  if (kIsLinux) {
    try {
      return CacheLocality::readFromSysfs();
    } catch (...) {
      // keep trying
    }
  }
    }
    
    /**
 * This class creates core-local caches for a given shared_ptr, to
 * mitigate contention when acquiring/releasing it.
 *
 * All methods are threadsafe.  Hazard pointers are used to avoid
 * use-after-free for concurrent reset() and get() operations.
 *
 * Concurrent reset()s are sequenced with respect to each other: the
 * sharded shared_ptrs will always all be set to the same value.
 * get()s will never see a newer pointer on one core, and an older
 * pointer on another after a subsequent thread migration.
 */
template <class T, size_t kNumSlots = 64>
class AtomicCoreCachedSharedPtr {
 public:
  explicit AtomicCoreCachedSharedPtr(const std::shared_ptr<T>& p = nullptr) {
    reset(p);
  }
    }
    
        // Constant parameters
    const auto FACE_CCN_DECREASE_FACTOR = 8.f;
    const std::string FACE_PROTOTXT{'face/pose_deploy.prototxt'};
    const std::string FACE_TRAINED_MODEL{'face/pose_iter_116000.caffemodel'};
    
    #endif // OPENPOSE_HAND_HAND_PARAMETERS_HPP

    
    namespace op
{
    struct PersonTrackerEntry
    {
        std::vector<cv::Point2f> keypoints;
        std::vector<cv::Point2f> lastKeypoints;
        std::vector<char> status;
        std::vector<cv::Point2f> getPredicted() const
        {
            std::vector<cv::Point2f> predictedKeypoints(keypoints);
            if (!lastKeypoints.size())
                return predictedKeypoints;
            for (size_t i=0; i<keypoints.size(); i++)
            {
                predictedKeypoints[i] = cv::Point2f{predictedKeypoints[i].x + (keypoints[i].x-lastKeypoints[i].x),
                                                    predictedKeypoints[i].y + (keypoints[i].y-lastKeypoints[i].y)};
            }
            return predictedKeypoints;
        }
    };
    }
    
        template<typename T>
    Point<T>& Point<T>::operator+=(const Point<T>& point)
    {
        try
        {
            x += point.x;
            y += point.y;
            // Return
            return *this;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return *this;
        }
    }
    
        template<typename T>
    Rectangle<T>& Rectangle<T>::operator=(const Rectangle<T>& rectangle)
    {
        try
        {
            x = rectangle.x;
            y = rectangle.y;
            width = rectangle.width;
            height = rectangle.height;
            // Return
            return *this;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return *this;
        }
    }
    
    namespace v8 {
namespace internal {
    }
    }
    
    #ifndef V8_HEAP_STORE_BUFFER_H_
#define V8_HEAP_STORE_BUFFER_H_
    
    #include 'src/base/utils/random-number-generator.h'
#include 'src/heap/heap-inl.h'
#include 'src/heap/spaces.h'
#include 'src/isolate.h'
    
      static int GetSweepSpaceIndex(AllocationSpace space) {
    DCHECK(IsValidSweepingSpace(space));
    return space - FIRST_GROWABLE_PAGED_SPACE;
  }
    
    
// The modes possibly affected by apply must be in kApplyMask.
void RelocInfo::apply(intptr_t delta) {
  DCHECK_EQ(kApplyMask, (RelocInfo::ModeMask(RelocInfo::CODE_TARGET) |
                         RelocInfo::ModeMask(RelocInfo::INTERNAL_REFERENCE) |
                         RelocInfo::ModeMask(RelocInfo::OFF_HEAP_TARGET) |
                         RelocInfo::ModeMask(RelocInfo::RUNTIME_ENTRY)));
  if (IsRuntimeEntry(rmode_) || IsCodeTarget(rmode_) ||
      IsOffHeapTarget(rmode_)) {
    int32_t* p = reinterpret_cast<int32_t*>(pc_);
    *p -= delta;  // Relocate entry.
  } else if (IsInternalReference(rmode_)) {
    // absolute code pointer inside code object moves with the code object.
    int32_t* p = reinterpret_cast<int32_t*>(pc_);
    *p += delta;  // Relocate entry.
  }
}
    
    void CpuFeatures::FlushICache(void* start, size_t size) {
  // No need to flush the instruction cache on Intel. On Intel instruction
  // cache flushing is only necessary when multiple cores running the same
  // code simultaneously. V8 (and JavaScript) is single threaded and when code
  // is patched on an intel CPU the core performing the patching will have its
  // own instruction cache updated automatically.
    }
    
    
// Returns number of bytes used, including *data.
int DisassemblerIA32::JumpConditional(byte* data, const char* comment) {
  DCHECK_EQ(0x0F, *data);
  byte cond = *(data+1) & 0x0F;
  byte* dest = data + *reinterpret_cast<int32_t*>(data+2) + 6;
  const char* mnem = jump_conditional_mnem[cond];
  AppendToBuffer('%s %s', mnem, NameOfAddress(dest));
  if (comment != nullptr) {
    AppendToBuffer(', %s', comment);
  }
  return 6;  // includes 0x0F
}
    
    
    {
    {}  // namespace internal
}  // namespace v8
    
      // Compare the object in a register to a value and jump if they are not equal.
  void JumpIfNotRoot(Register with, RootIndex index, Label* if_not_equal,
                     Label::Distance if_not_equal_distance = Label::kFar) {
    CompareRoot(with, index);
    j(not_equal, if_not_equal, if_not_equal_distance);
  }
    
      // IC dispatcher behavior.
    
      BIND(&call_with_any_feedback);
  {
    var_type_feedback.Bind(SmiConstant(BinaryOperationFeedback::kAny));
    Goto(&call_stub);
  }
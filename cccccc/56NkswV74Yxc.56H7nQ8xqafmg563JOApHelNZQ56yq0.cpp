
        
        // A macro for testing Google Test assertions or code that's expected to
// generate Google Test non-fatal failures.  It asserts that the given
// statement will cause exactly one non-fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_NONFATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// 'statement' is allowed to reference local variables and members of
// the current object.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  If we do that, the code won't compile when the user gives
// EXPECT_NONFATAL_FAILURE() a statement that contains a macro that
// expands to code containing an unprotected comma.  The
// AcceptsMacroThatExpandsToUnprotectedComma test in gtest_unittest.cc
// catches that.
//
// For the same reason, we have to write
//   if (::testing::internal::AlwaysTrue()) { statement; }
// instead of
//   GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement)
// to avoid an MSVC warning on unreachable code.
#define EXPECT_NONFATAL_FAILURE(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    // First, define a fixture class template.  It should be parameterized
// by a type.  Remember to derive it from testing::Test.
template <typename T>
class FooTest : public testing::Test {
 public:
  ...
  typedef std::list<T> List;
  static T shared_;
  T value_;
};
    
      // Given directory = 'dir', base_name = 'test', number = 0,
  // extension = 'xml', returns 'dir/test.xml'. If number is greater
  // than zero (e.g., 12), returns 'dir/test_12.xml'.
  // On Windows platform, uses \ as the separator rather than /.
  static FilePath MakeFileName(const FilePath& directory,
                               const FilePath& base_name,
                               int number,
                               const char* extension);
    
    // This is used internally by all instances of linked_ptr<>.  It needs to be
// a non-template class because different types of linked_ptr<> can refer to
// the same object (linked_ptr<Superclass>(obj) vs linked_ptr<Subclass>(obj)).
// So, it needs to be possible for different types of linked_ptr to participate
// in the same circular linked list, so we need a single class type here.
//
// DO NOT USE THIS CLASS DIRECTLY YOURSELF.  Use linked_ptr<T>.
class linked_ptr_internal {
 public:
  // Create a new circle that includes only this instance.
  void join_new() {
    next_ = this;
  }
    }
    
    # if GTEST_HAS_COMBINE
// INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Generates values from the Cartesian product of values produced
// by the argument generators.
//
template <typename T1, typename T2>
class CartesianProductGenerator2
    : public ParamGeneratorInterface< ::std::tr1::tuple<T1, T2> > {
 public:
  typedef ::std::tr1::tuple<T1, T2> ParamType;
    }
    
      // Creates a UTF-16 wide string from the given ANSI string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the wide string, or NULL if the
  // input is NULL.
  //
  // The wide string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static LPCWSTR AnsiToUtf16(const char* c_str);
    
      template <GTEST_6_TYPENAMES_(U)>
  tuple& CopyFrom(const GTEST_6_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    return *this;
  }
    
    TEST(ListenersTest, DoesNotLeak) {
  Water* water = new Water;
  delete water;
}
    
        // Parallel training
    MPIWrapperPtr m_mpi;
    
        // this = A * B where B is passed as its transposed form B'
    void matprod_mmt(const ssematrixbase &A, const ssematrixbase &Bt)
    {
        auto &us = *this;
        assert(us.rows() == A.rows());
        assert(us.cols() == Bt.rows()); // Bt.rows() == B.cols()
        assert(A.cols() == Bt.cols());  // Bt.cols() == B.rows()
        // fprintf (stderr, '0x%x(%d,%d) x 0x%x(%d,%d)' -> 0x%x(%d,%d)\n', A.p, A.rows(), A.cols(), Bt.p, Bt.rows(), Bt.cols(), us.p, us.rows(), us.cols());
    }
    
        // change all inputs of this new node to share the old one's inputs
    for (int i = 0; i < oldNode->GetNumInputs(); i++)
    {
        newNode->SetInput(i, oldNode->GetInputs()[i]); // TODO: use AttachInput()?
        //oldNode->SetInput(i, nullptr); // BUGBUG: old node should no longer point into the network
    }
    
    
    {
    {
    {}}}

    
    template <class ConfigRecordType, typename ElemType>
bool TryGetNetworkFactory(const ConfigRecordType& config, function<ComputationNetworkPtr(DEVICEID_TYPE)>& createNetworkFn)
{
    DEVICEID_TYPE deviceId = DeviceFromConfig(config);
    }
    
    
    {
    {
    {}}} // end namespaces

    
      /// Gets the non-blocking mode of the acceptor.
  /**
   * @returns @c true if the acceptor's synchronous operations will fail with
   * boost::asio::error::would_block if they are unable to perform the requested
   * operation immediately. If @c false, synchronous operations will block
   * until complete.
   *
   * @note The non-blocking mode has no effect on the behaviour of asynchronous
   * operations. Asynchronous operations will never fail with the error
   * boost::asio::error::would_block.
   */
  bool non_blocking() const
  {
    return this->get_service().non_blocking(this->get_implementation());
  }
    
    #endif // BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP

    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    template <typename CompletionCondition>
class base_from_completion_cond
{
protected:
  explicit base_from_completion_cond(CompletionCondition completion_condition)
    : completion_condition_(completion_condition)
  {
  }
    }
    
    #endif // BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP

    
    #endif // BOOST_ASIO_DETAIL_FD_SET_ADAPTER_HPP

    
    #ifndef BOOST_ASIO_DETAIL_FUNCTION_HPP
#define BOOST_ASIO_DETAIL_FUNCTION_HPP
    
    
    {} // namespace boost_asio_handler_alloc_helpers
    
    #include <boost/asio/detail/pop_options.hpp>
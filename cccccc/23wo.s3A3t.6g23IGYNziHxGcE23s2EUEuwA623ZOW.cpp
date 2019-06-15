
        
        TEST(StatusOr, TestPointerCopyCtorStatusOk) {
  const int kI = 0;
  StatusOr<const int*> original(&kI);
  StatusOr<const int*> copy(original);
  EXPECT_EQ(original.status(), copy.status());
  EXPECT_EQ(original.ValueOrDie(), copy.ValueOrDie());
}
    
    #include <google/protobuf/stubs/common.h>
#include <gtest/gtest.h>
    
    
    {
  return 0;
}

    
     private:
  static bool IsMessageSet(const Descriptor *descriptor) {
    if (descriptor != nullptr
        && descriptor->options().message_set_wire_format()) {
      return true;
    }
    return false;
  }
    
        tutorial::Person::PhoneNumber* phone_number = person->add_phones();
    phone_number->set_number(number);
    
    // Iterates though all people in the AddressBook and prints info about them.
void ListPeople(const tutorial::AddressBook& address_book) {
  for (int i = 0; i < address_book.people_size(); i++) {
    const tutorial::Person& person = address_book.people(i);
    }
    }
    
    #include 'gtest/internal/gtest-port.h'
    
    // A copyable object representing the result of a test part (i.e. an
// assertion or an explicit FAIL(), ADD_FAILURE(), or SUCCESS()).
//
// Don't inherit from TestPartResult as its destructor is not virtual.
class GTEST_API_ TestPartResult {
 public:
  // The possible outcomes of a test part (i.e. an assertion or an
  // explicit SUCCEED(), FAIL(), or ADD_FAILURE()).
  enum Type {
    kSuccess,          // Succeeded.
    kNonFatalFailure,  // Failed but the test can continue.
    kFatalFailure      // Failed and the test should be terminated.
  };
    }
    
     private:
  std::string file_;
  int line_;
  int index_;
  int write_fd_;
    
    // This template class represents an IEEE floating-point number
// (either single-precision or double-precision, depending on the
// template parameters).
//
// The purpose of this class is to do more sophisticated number
// comparison.  (Due to round-off error, etc, it's very unlikely that
// two floating-points will be equal exactly.  Hence a naive
// comparison by the == operation often doesn't work.)
//
// Format of IEEE floating-point:
//
//   The most-significant bit being the leftmost, an IEEE
//   floating-point looks like
//
//     sign_bit exponent_bits fraction_bits
//
//   Here, sign_bit is a single bit that designates the sign of the
//   number.
//
//   For float, there are 8 exponent bits and 23 fraction bits.
//
//   For double, there are 11 exponent bits and 52 fraction bits.
//
//   More details can be found at
//   http://en.wikipedia.org/wiki/IEEE_floating-point_standard.
//
// Template parameter:
//
//   RawType: the raw floating-point type (either float or double)
template <typename RawType>
class FloatingPoint {
 public:
  // Defines the unsigned integer type that has the same size as the
  // floating point number.
  typedef typename TypeWithSize<sizeof(RawType)>::UInt Bits;
    }
    
      CartesianProductGenerator3(const ParamGenerator<T1>& g1,
      const ParamGenerator<T2>& g2, const ParamGenerator<T3>& g3)
      : g1_(g1), g2_(g2), g3_(g3) {}
  virtual ~CartesianProductGenerator3() {}
    
      // Compares two C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike strcasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CaseInsensitiveCStringEquals(const char* lhs,
                                           const char* rhs);
    
    
    {    // You can generate a failure in any event handler except
    // OnTestPartResult. Just use an appropriate Google Test assertion to do
    // it.
    EXPECT_LE(difference, 0) << 'Leaked ' << difference << ' unit(s) of Water!';
  }
    
      std::chrono::seconds timeout_;
    
    std::shared_ptr<DHTBucket>
DHTRoutingTable::getBucketFor(const std::shared_ptr<DHTNode>& node) const
{
  return getBucketFor(node->getID());
}
    
    namespace aria2 {
    }
    
    
    {  virtual std::shared_ptr<DHTTask>
  createReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                        const std::shared_ptr<DHTNode>& newNode) = 0;
};
    
    void DHTTaskQueueImpl::addPeriodicTask2(const std::shared_ptr<DHTTask>& task)
{
  periodicTaskQueue2_.addTask(task);
}
    
      DHTTaskExecutor periodicTaskQueue2_;
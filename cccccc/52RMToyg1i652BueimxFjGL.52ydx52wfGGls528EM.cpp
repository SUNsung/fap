
        
        
    {			totalEncodingTime += image.GetEncodingTimeMs();
			}
    
    struct DoublePoint
{
  double X;
  double Y;
  DoublePoint(double x = 0, double y = 0) : X(x), Y(y) {}
  DoublePoint(IntPoint ip) : X((double)ip.X), Y((double)ip.Y) {}
};
//------------------------------------------------------------------------------
    
    typedef float celt_sig;
typedef float celt_norm;
typedef float celt_ener;
    
    #undef USUB32
#define USUB32(a, b) USUB32_(a, b, __FILE__, __LINE__)
static OPUS_INLINE unsigned int USUB32_(opus_uint64 a, opus_uint64 b, char *file, int line)
{
   opus_uint64 res;
   if (!VERIFY_UINT(a) || !VERIFY_UINT(b))
   {
      fprintf (stderr, 'USUB32: inputs are not uint32: %llu %llu in %s: line %d\n', a, b, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   if (a<b)
   {
      fprintf (stderr, 'USUB32: inputs underflow: %llu < %llu in %s: line %d\n', a, b, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = a-b;
   if (!VERIFY_UINT(res))
   {
      fprintf (stderr, 'USUB32: output is not uint32: %llu - %llu = %llu in %s: line %d\n', a, b, res, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips+=2;
   return res;
}
    
    #if !defined(_mfrngcode_H)
# define _mfrngcode_H (1)
# include 'entcode.h'
    
    #define silk_SUB_SAT16(a, b)                (opus_int16)silk_SAT16( silk_SUB32( (opus_int32)(a), (b) ) )
#define silk_SUB_SAT64(a, b)                ((((a)-(b)) & 0x8000000000000000LL) == 0 ?                                               \
                                            (( (a) & ((b)^0x8000000000000000LL) & 0x8000000000000000LL) ? silk_int64_MIN : (a)-(b)) : \
                                            ((((a)^0x8000000000000000LL) & (b)  & 0x8000000000000000LL) ? silk_int64_MAX : (a)-(b)) )
    
    // Prints the given value to the given ostream.  If the value is a
// protocol message, its debug string is printed; if it's an enum or
// of a type implicitly convertible to BiggestInt, it's printed as an
// integer; otherwise the bytes in the value are printed.  This is
// what UniversalPrinter<T>::Print() does when it knows nothing about
// type T and T has neither << operator nor PrintTo().
//
// A user can override this behavior for a class type Foo by defining
// a << operator in the namespace where Foo is defined.
//
// We put this operator in namespace 'internal2' instead of 'internal'
// to simplify the implementation, as much code in 'internal' needs to
// use << in STL, which would conflict with our own << were it defined
// in 'internal'.
//
// Note that this operator<< takes a generic std::basic_ostream<Char,
// CharTraits> type instead of the more restricted std::ostream.  If
// we define it to take an std::ostream instead, we'll get an
// 'ambiguous overloads' compiler error when trying to print a type
// Foo that supports streaming to std::basic_ostream<Char,
// CharTraits>, as the compiler cannot tell whether
// operator<<(std::ostream&, const T&) or
// operator<<(std::basic_stream<Char, CharTraits>, const Foo&) is more
// specific.
template <typename Char, typename CharTraits, typename T>
::std::basic_ostream<Char, CharTraits>& operator<<(
    ::std::basic_ostream<Char, CharTraits>& os, const T& x) {
  TypeWithoutFormatter<T,
      (internal::IsAProtocolMessage<T>::value ? kProtobuf :
       internal::ImplicitlyConvertible<const T&, internal::BiggestInt>::value ?
       kConvertibleToInteger : kOtherType)>::PrintValue(x, &os);
  return os;
}
    
    // This helper class is used by {ASSERT|EXPECT}_NO_FATAL_FAILURE to check if a
// statement generates new fatal failures. To do so it registers itself as the
// current test part result reporter. Besides checking if fatal failures were
// reported, it only delegates the reporting to the former result reporter.
// The original result reporter is restored in the destructor.
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
class GTEST_API_ HasNewFatalFailureHelper
    : public TestPartResultReporterInterface {
 public:
  HasNewFatalFailureHelper();
  virtual ~HasNewFatalFailureHelper();
  virtual void ReportTestPartResult(const TestPartResult& result);
  bool has_new_fatal_failure() const { return has_new_fatal_failure_; }
 private:
  bool has_new_fatal_failure_;
  TestPartResultReporterInterface* original_reporter_;
    }
    
      // Signals that the death test did not die as expected.
  virtual void Abort(AbortReason reason) = 0;
    
      // Constructs a FloatingPoint from a raw floating-point number.
  //
  // On an Intel CPU, passing a non-normalized NAN (Not a Number)
  // around may change its bits, although the new value is guaranteed
  // to be also a NAN.  Therefore, don't expect this constructor to
  // preserve the bits in x when x is a NAN.
  explicit FloatingPoint(const RawType& x) { u_.value_ = x; }
    
      template <GTEST_10_TYPENAMES_(U)>
  tuple& CopyFrom(const GTEST_10_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    f6_ = t.f6_;
    f7_ = t.f7_;
    f8_ = t.f8_;
    f9_ = t.f9_;
    return *this;
  }
    
    int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);
    }
    
    #include 'goo/gtypes.h'
#include 'goo/GooList.h'
#include 'goo/GooString.h'
#include 'Object.h'
    
      // Get direction
  PageTransitionDirection getDirection() { return direction; }
    
      // Destructor.
  virtual ~PreScanOutputDev();
    
    ProfileData::ProfileData() {
	count = 0;
	total = 0.0;
	min = 0.0;
	max = 0.0;
}
    
    void SplashOutputDev::paintTransparencyGroup(GfxState * /*state*/, double * /*bbox*/) {
  SplashBitmap *tBitmap;
  SplashTransparencyGroup *transpGroup;
  GBool isolated;
  int tx, ty;
    }
    
      virtual ~SplashAxialPattern();
    
    
    {};
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-array type
        json str = 'I am a string';
        str.at(0) = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
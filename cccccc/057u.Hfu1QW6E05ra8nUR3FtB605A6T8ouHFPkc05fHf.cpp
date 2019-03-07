
        
        #  define ASSERT_DEBUG_DEATH(statement, regex) \
  ASSERT_DEATH(statement, regex)
    
    // Streams a Message to an ostream.
inline std::ostream& operator <<(std::ostream& os, const Message& sb) {
  return os << sb.GetString();
}
    
    // Range() returns generators providing sequences of values in a range.
//
// Synopsis:
// Range(start, end)
//   - returns a generator producing a sequence of values {start, start+1,
//     start+2, ..., }.
// Range(start, end, step)
//   - returns a generator producing a sequence of values {start, start+step,
//     start+step+step, ..., }.
// Notes:
//   * The generated sequences never include end. For example, Range(1, 5)
//     returns a generator producing a sequence {1, 2, 3, 4}. Range(1, 9, 2)
//     returns a generator producing {1, 3, 5, 7}.
//   * start and end must have the same type. That type may be any integral or
//     floating-point type or a user defined type satisfying these conditions:
//     * It must be assignable (have operator=() defined).
//     * It must have operator+() (operator+(int-compatible type) for
//       two-operand version).
//     * It must have operator<() defined.
//     Elements in the resulting sequences will also have that type.
//   * Condition start < end must be satisfied in order for resulting sequences
//     to contain any elements.
//
template <typename T, typename IncrementT>
internal::ParamGenerator<T> Range(T start, T end, IncrementT step) {
  return internal::ParamGenerator<T>(
      new internal::RangeGenerator<T, IncrementT>(start, end, step));
}
    
    // This overload prints a (const) wchar_t array compactly.
GTEST_API_ void UniversalPrintArray(
    const wchar_t* begin, size_t len, ::std::ostream* os);
    
      // Same as above, but you can choose the interception scope of this object.
  ScopedFakeTestPartResultReporter(InterceptMode intercept_mode,
                                   TestPartResultArray* result);
    
    // Now the tricky part: you need to register all test patterns before
// you can instantiate them.  The first argument of the macro is the
// test case name; the rest are the names of the tests in this test
// case.
REGISTER_TYPED_TEST_CASE_P(FooTest,
                           DoesBlah, HasPropertyA);
    
      // Leave whatever circle we're part of.  Returns true if we were the
  // last member of the circle.  Once this is done, you can join() another.
  bool depart()
      GTEST_LOCK_EXCLUDED_(g_linked_ptr_mutex) {
    MutexLock lock(&g_linked_ptr_mutex);
    }
    
    #include <string.h>
#include <string>
    
    
    {    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
    
// A simple string class.
class MyString {
 private:
  const char* c_string_;
  const MyString& operator=(const MyString& rhs);
    }
    
    
// This sample shows how to write a more complex unit test for a class
// that has multiple member functions.
//
// Usually, it's a good idea to have one test for each method in your
// class.  You don't have to do that exactly, but it helps to keep
// your tests organized.  You may also throw in additional tests as
// needed.
    
        float32* x; //vertex arrays
    float32* y;
    int32 nVertices;
	
	float32 area;
	bool areaIsSet;
	
    b2Polygon(float32* _x, float32* _y, int32 nVert);
    b2Polygon(b2Vec2* v, int32 nVert);
	b2Polygon();
    ~b2Polygon();
	
	float32 GetArea();
	
	void MergeParallelEdges(float32 tolerance);
    b2Vec2* GetVertexVecs();
    b2Polygon(b2Triangle& t);
    void Set(const b2Polygon& p);
    bool IsConvex();
	bool IsCCW();
	bool IsUsable(bool printError);
	bool IsUsable();
    bool IsSimple();
   // void AddTo(b2FixtureDef& pd);
	
    b2Polygon* Add(b2Triangle& t);
    
    #include <string.h>
    
    	class Block4x4EncodingBits
	{
	public:
    }
    
    	// ----------------------------------------------------------------------------------------------------
	// find best initial encoding to ensure block has a valid encoding
	//
	void Block4x4Encoding_ETC1::PerformFirstIteration(void)
	{
		CalculateMostLikelyFlip();
    }
    
    bool PointIsVertex(const IntPoint &Pt, OutPt *pp)
{
  OutPt *pp2 = pp;
  do
  {
    if (pp2->Pt == Pt) return true;
    pp2 = pp2->Next;
  }
  while (pp2 != pp);
  return false;
}
//------------------------------------------------------------------------------
    
    #pragma once
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // 'secure' CRT not available on all platforms  --add this at the top of all CPP files that give 'function or variable may be unsafe' warnings
#endif
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif // NOMINMAX
#pragma comment(lib, 'Dbghelp.lib')
#else
#include <execinfo.h>
#include <cxxabi.h>
#endif
    
        // return the randomized feature bounds for a time range
    std::pair<size_t, size_t> Bounds(size_t ts, size_t te) const
    {
        size_t tbegin = max(ts, randomizationrange / 2) - randomizationrange / 2;
        size_t tend = min(te + randomizationrange / 2, map.size());
        return std::make_pair<size_t, size_t>(std::move(tbegin), move(tend));
    }
    
    template <class ElemType>
void EpochAccumulatorNode<ElemType>::OnEpochStart()
{
    Reset();
}
    
            if (aliasInfo.releaseCount >= aliasInfo.totalCount)
            LogicError('number of alias instances exceeded expectation');
    
    template<class ElemType>
void OptimizedRNNStackNode<ElemType>::Load(File& fstream, size_t modelVersion)
{
    Base::Load(fstream, modelVersion);
    bool isLegacyVersion = modelVersion < CNTK_MODEL_VERSION_14; // (to support an internal legacy version)
    m_legacySwapInputsPending = isLegacyVersion;
    m_rnnAttributes.Read(fstream, /*readAxis=*/ !isLegacyVersion);
}

        
        
    {}  // namespace testing
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_

    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(AssertHelper);
};
    
      FilePath& operator=(const FilePath& rhs) {
    Set(rhs);
    return *this;
  }
    
    // String - an abstract class holding static string utilities.
class GTEST_API_ String {
 public:
  // Static utility methods
    }
    
    template <GTEST_10_TYPENAMES_(T)>
struct TupleElement<true, 3, GTEST_10_TUPLE_(T) > {
  typedef T3 type;
};
    
    // A helper for implementing tuple_element<k, T>.  kIndexValid is true
// iff k < the number of fields in tuple type T.
template <bool kIndexValid, int kIndex, class Tuple>
struct TupleElement;
    
    // We don't want to require the users to write TypesN<...> directly,
// as that would require them to count the length.  Types<...> is much
// easier to write, but generates horrible messages when there is a
// compiler error, as gcc insists on printing out each template
// argument, even if it has the default value (this means Types<int>
// will appear as Types<int, None, None, ..., None> in the compiler
// errors).
//
// Our solution is to combine the best part of the two approaches: a
// user would write Types<T1, ..., TN>, and Google Test will translate
// that to TypesN<T1, ..., TN> internally to make error messages
// readable.  The translation is done by the 'type' member of the
// Types template.
    
    
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

    
    // Tests some trivial cases.
TEST(IsPrimeTest, Trivial) {
  EXPECT_FALSE(IsPrime(0));
  EXPECT_FALSE(IsPrime(1));
  EXPECT_TRUE(IsPrime(2));
  EXPECT_TRUE(IsPrime(3));
}
    
    
    
        cobj = (CocosDenshion::SimpleAudioEngine*)tolua_tousertype(tolua_S,1,0);
    
    #include 'Box2D/Box2D.h'
#include 'cocos2d.h'
    
    
    {		Test::Step(settings);
	}
    
    			b2PolygonShape box;
			box.SetAsBox(2.0f, 0.1f);
    
    			b2Body* prevBody = ground;
			for (int32 i = 0; i < e_count; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position.Set(5.5f + 1.0f * i, 10.0f);
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&fd);
    }
    
    			x += 20.0f;
			shape.Set(b2Vec2(x, 0.0f), b2Vec2(x + 40.0f, 0.0f));
			ground->CreateFixture(&fd);
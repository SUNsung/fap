
        
        void MapLiteTestUtil::ExpectMapFieldsSet(const unittest::TestMapLite& message) {
  MapTestUtilImpl::ExpectMapFieldsSet<unittest::MapEnumLite,
                                      unittest::MAP_ENUM_BAR_LITE,
                                      unittest::MAP_ENUM_BAZ_LITE>(message);
}
    
    TEST(StatusOr, TestPointerCopyCtorStatusOk) {
  const int kI = 0;
  StatusOr<const int*> original(&kI);
  StatusOr<const int*> copy(original);
  EXPECT_EQ(original.status(), copy.status());
  EXPECT_EQ(original.ValueOrDie(), copy.ValueOrDie());
}
    
    template <class T, T v> const T integral_constant<T, v>::value;
    
      const string& name() const { return name_; }
    
    template <typename T1, typename T2, typename T3>
void PrintTo(const ::std::tr1::tuple<T1, T2, T3>& t, ::std::ostream* os) {
  PrintTupleTo(t, os);
}
    
      // Gets the message associated with the test part.
  const char* message() const { return message_.c_str(); }
    
    // If the type list contains only one type, you can write that type
// directly without Types<...>:
//   TYPED_TEST_CASE(FooTest, int);
    
      // An enumeration of possible roles that may be taken when a death
  // test is encountered.  EXECUTE means that the death test logic should
  // be executed immediately.  OVERSEE means that the program should prepare
  // the appropriate environment for a child process to execute the death
  // test, then wait for it to complete.
  enum TestRole { OVERSEE_TEST, EXECUTE_TEST };
    
    #include <string.h>
    
    
#endif  // GTEST_SAMPLES_SAMPLE2_H_

    
      // Removes the head of the queue and returns it.  Returns NULL if
  // the queue is empty.
  E* Dequeue() {
    if (size_ == 0) {
      return NULL;
    }
    }
    
    
    {DMLC_REGISTER_DATA_PARSER(uint32_t, real_t, dense_libsvm,
  data::CreateDenseLibSVMParser<uint32_t __DMLC_COMMA real_t>);
}  // namespace dmlc

    
    // implementing configure.
template<typename PairIter>
inline void GradientBooster::Configure(PairIter begin, PairIter end) {
  std::vector<std::pair<std::string, std::string> > vec(begin, end);
  this->Configure(vec);
}
    
    
    {} // namespace aria2

    
      virtual std::unique_ptr<Dict> getResponse() = 0;
    
    #include 'DHTNode.h'
#include 'DHTBucket.h'
#include 'DHTBucketTree.h'
#include 'DHTTaskQueue.h'
#include 'DHTTaskFactory.h'
#include 'DHTTask.h'
#include 'util.h'
#include 'LogFactory.h'
#include 'Logger.h'
#include 'fmt.h'
    
    namespace aria2 {
    }
    
    class DHTTask;
    
    #include <cstring>
    
    public:
  DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                        std::chrono::seconds interval);
    
    
    {} // namespace aria2

    
      // do nothing; we don't use this message as outgoing message.
  virtual bool send() CXX11_OVERRIDE;
    
        /** Replaces an existing controlPoint at index.
     *
     * @js NA
     * @param controlPoint A control point.
     * @param index Replace the point to array in index.
     */
    void replaceControlPoint(const Vec2& controlPoint, ssize_t index);
    
    NS_CC_END

    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
    NS_CC_BEGIN
    
        /** Adds an animation from a plist file.
     * Make sure that the frames were previously loaded in the SpriteFrameCache.
     * @since v1.1
     * @js addAnimations
     * @lua addAnimations
     * @param plist An animation from a plist file.
     */
    void addAnimationsWithFile(const std::string& plist);
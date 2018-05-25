
        
        #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
    
      // Returns an estimate of the number of bytes the printed code will compile to
  virtual int GenerateNonNestedInitializationCode(io::Printer* printer);
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    GeneratorFactory::GeneratorFactory() {}
GeneratorFactory::~GeneratorFactory() {}
    
    enum : uint16_t {
  kHeapMagic = 0xa5a5,
  // This memory segment contains an IOBuf that is still in use
  kIOBufInUse = 0x01,
  // This memory segment contains buffer data that is still in use
  kDataInUse = 0x02,
};
    
    template <typename C, ordering o, bool ne>
struct cmp_pred : private C {
  using C::C;
    }
    
    TEST_F(OrderingTest, compare_less) {
  compare_less<OddCompare<int>> op;
  EXPECT_FALSE(op(3, 4));
  EXPECT_FALSE(op(3, 3));
  EXPECT_TRUE(op(4, 3));
}
    
      Atom<Node*> head_{nullptr};
    
    
    { private:
  using Holder = std::shared_ptr<T>;
  struct Slots : folly::hazptr_obj_base<Slots> {
    std::array<std::shared_ptr<T>, kNumSlots> slots_;
  };
  std::atomic<Slots*> slots_{nullptr};
};
    
    TEST(Traits, bitAndInit) {
  EXPECT_TRUE (IsTriviallyCopyable<int>::value);
  EXPECT_FALSE(IsTriviallyCopyable<vector<int>>::value);
  EXPECT_TRUE (IsZeroInitializable<int>::value);
  EXPECT_FALSE(IsZeroInitializable<vector<int>>::value);
}
    
    TEST_F(UtilityTest, forward_like) {
  int x = 0;
  // just show that it may be invoked, and that it is purely a cast
  // the real work is done by like_t, in terms of which forward_like is defined
  EXPECT_EQ(&x, std::addressof(folly::forward_like<char&>(x)));
  EXPECT_EQ(&x, std::addressof(folly::forward_like<char const>(x)));
}
    
        while (-1 != __ParseStack(stream, state, strcache, strstack)) {
        if (!_processname.empty() && std::string::npos == strstack.find(processname, 0)) {
            strstack.clear();
            continue;
        }
    }
    
    class CoreServiceBase: public ServiceBase {
  protected:
    CoreServiceBase(const char* _servicename);
    virtual ~CoreServiceBase();
    }
    
    
/*
 * ServiceBase.h
 *
 *  Created on: 2013-6-20
 *      Author: yerungui
 */
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #include <jni.h>
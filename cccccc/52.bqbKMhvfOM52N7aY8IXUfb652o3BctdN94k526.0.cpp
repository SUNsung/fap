
        
        #include 'tensorflow/core/distributed_runtime/partial_run_mgr.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {    EXPECT_NE(a_1_1.get(), d_4_2.get());
    EXPECT_NE(a_1_1.get(), e_5_2.get());
    EXPECT_NE(d_4_1.get(), e_5_2.get());
  }
    
    Status TanGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
    {{'cosx'}, 'Cos', {'x'}},
    {{'secx'}, 'Reciprocal', {'cosx'}},
    {{'secx2'}, 'Square', {'secx'}},
    {{'dx'}, 'Mul', {'dy', 'secx2'}}
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Tan', TanGrad);
    
    TEST_F(GrpcDebugTest, SendSingleDebugTensorViaGrpcTest) {
  Tensor tensor(DT_FLOAT, TensorShape({1, 1}));
  tensor.flat<float>()(0) = 42.0;
  const DebugNodeKey kDebugNodeKey('/job:localhost/replica:0/task:0/cpu:0',
                                   'foo_tensor', 0, 'DebugIdentity');
  TF_ASSERT_OK(DebugIO::PublishDebugTensor(
      kDebugNodeKey, tensor, Env::Default()->NowMicros(), {server_data_.url}));
  TF_ASSERT_OK(DebugIO::CloseDebugURL(server_data_.url));
    }
    
    // Poll a gRPC debug server by sending a small tensor repeatedly till success.
//
// Args:
//   server_url: gRPC URL of the server to poll, e.g., 'grpc://foo:3333'.
//   max_attempts: Maximum number of attempts.
//
// Returns:
//   Whether the polling succeeded within max_attempts.
bool PollTillFirstRequestSucceeds(const string& server_url,
                                  const size_t max_attempts);
    
    
    {
    {    if (SemanticNode.is<Expr *>()) {
      SemanticNode.get<Expr *>()->dump(llvm::errs());
    } else if (SemanticNode.is<Decl *>()) {
      SemanticNode.get<Decl *>()->dump(llvm::errs());
    } else if (SemanticNode.is<Expr *>()) {
      SemanticNode.get<Expr *>()->dump(llvm::errs());
    } else {
      llvm_unreachable('ASTNode has pointer to unknown thing!');
    }
    llvm::errs() << '\n=====================================================\n';
  }
}

    
    #ifdef __APPLE__
    
      ResultPlanBuilder(SILGenFunction &SGF, SILLocation loc,
                    const CalleeTypeInfo &calleeTypeInfo)
      : SGF(SGF), loc(loc), calleeTypeInfo(calleeTypeInfo),
        // We reverse the order so we can pop values off the back.
        allResults(reversed(calleeTypeInfo.substFnType->getResults())) {}
    
      vector<int64_t> sizes = {2, 2};
  tensor2->resize(sizes);
  tensor2->fill(4);
  tensor->add(*tensor2, 1);
  assert(tensor->nDim() == 2);
    
    static PyObject* recursive_to_list(
    char* data, IntList sizes, IntList strides, int64_t dim,
    ScalarType scalarType, int64_t elementSize)
{
  int64_t ndim = sizes.size();
  if (dim == ndim) {
    return torch::utils::load_scalar(data, scalarType);
  }
  auto n = sizes[dim];
  auto list = THPObjectPtr(PyList_New(n));
  if (!list) throw python_error();
  for (int64_t i = 0; i < n; i++) {
    PyObject* obj = recursive_to_list(data, sizes, strides, dim + 1, scalarType, elementSize);
    if (!obj) throw python_error();
    PyList_SET_ITEM(list.get(), i, obj);
    data += strides[dim] * elementSize;
  }
  return list.release();
}
    
    #undef THPTensorStatelessType
#undef THPTensorStateless
#undef THPTensorType
    
    #define THPDoubleStorage_CData(obj)  (obj)->cdata
#define THPFloatStorage_CData(obj)   (obj)->cdata
#define THPHalfStorage_CData(obj)    (obj)->cdata
#define THPLongStorage_CData(obj)    (obj)->cdata
#define THPIntStorage_CData(obj)     (obj)->cdata
#define THPShortStorage_CData(obj)   (obj)->cdata
#define THPCharStorage_CData(obj)    (obj)->cdata
#define THPByteStorage_CData(obj)    (obj)->cdata
    
    ByteArray::~ByteArray() {}
    
    template<typename T>
struct or_trait<T> : T {};
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
    TEST(LogTest, ShortTrailer) {
  const int n = kBlockSize - 2*kHeaderSize + 4;
  Write(BigString('foo', n));
  ASSERT_EQ(kBlockSize - kHeaderSize + 4, WrittenBytes());
  Write('');
  Write('bar');
  ASSERT_EQ(BigString('foo', n), Read());
  ASSERT_EQ('', Read());
  ASSERT_EQ('bar', Read());
  ASSERT_EQ('EOF', Read());
}
    
      const FilterPolicy* policy_;
  std::string keys_;              // Flattened key contents
  std::vector<size_t> start_;     // Starting index in keys_ of each key
  std::string result_;            // Filter data computed so far
  std::vector<Slice> tmp_keys_;   // policy_->CreateFilter() argument
  std::vector<uint32_t> filter_offsets_;
    
      // Check first filter
  ASSERT_TRUE(reader.KeyMayMatch(0, 'foo'));
  ASSERT_TRUE(reader.KeyMayMatch(2000, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'hello'));
    
    TEST(CRC, Mask) {
  uint32_t crc = Value('foo', 3);
  ASSERT_NE(crc, Mask(crc));
  ASSERT_NE(crc, Mask(Mask(crc)));
  ASSERT_EQ(crc, Unmask(Mask(crc)));
  ASSERT_EQ(crc, Unmask(Unmask(Mask(Mask(crc)))));
}
    
    class Histogram {
 public:
  Histogram() { }
  ~Histogram() { }
    }
    
    
    {  // Skewed: pick 'base' uniformly from range [0,max_log] and then
  // return 'base' random bits.  The effect is to pick a number in the
  // range [0,2^max_log-1] with exponential bias towards smaller numbers.
  uint32_t Skewed(int max_log) {
    return Uniform(1 << Uniform(max_log + 1));
  }
};
    
      if (direction_ == kForward) {  // Switch directions?
    // iter_ is pointing at the current entry.  Scan backwards until
    // the key changes so we can use the normal reverse scanning code.
    assert(iter_->Valid());  // Otherwise valid_ would have been false
    SaveKey(ExtractUserKey(iter_->key()), &saved_key_);
    while (true) {
      iter_->Prev();
      if (!iter_->Valid()) {
        valid_ = false;
        saved_key_.clear();
        ClearSavedValue();
        return;
      }
      if (user_comparator_->Compare(ExtractUserKey(iter_->key()),
                                    saved_key_) < 0) {
        break;
      }
    }
    direction_ = kReverse;
  }
    
      // When user keys are misordered
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('bar', 99, kTypeValue)));
    
     private:
  const Options*        options_;
  std::string           buffer_;      // Destination buffer
  std::vector<uint32_t> restarts_;    // Restart points
  int                   counter_;     // Number of entries emitted since restart
  bool                  finished_;    // Has Finish() been called?
  std::string           last_key_;
    
    #include <dlfcn.h>
#include <unwind.h>
    
        double getComputedMargin(int edge) const;
    double getComputedBorder(int edge) const;
    double getComputedPadding(int edge) const;
    
    #pragma once
    
    private:
  void ref() {
    ++m_refcount;
  }
    
    
    {  pthread_key_t m_key;
  CleanupFunction m_cleanup;
};
    
    
#define DEFINE_BOXED_PRIMITIVE(LITTLE, BIG)                          \
  struct J ## BIG : detail::JPrimitive<J ## BIG, j ## LITTLE> {      \
    static auto constexpr kJavaDescriptor = 'Ljava/lang/' #BIG ';';  \
    static auto constexpr kValueMethod = #LITTLE 'Value';            \
    j ## LITTLE LITTLE ## Value() const {                            \
      return value();                                                \
    }                                                                \
  };                                                                 \
  inline local_ref<jobject> autobox(j ## LITTLE val) {               \
    return J ## BIG::valueOf(val);                                   \
  }
    
    // JNI's NIO support has some awkward preconditions and error reporting. This
// class provides much more user-friendly access.
class FBEXPORT JByteBuffer : public JavaClass<JByteBuffer> {
 public:
  static constexpr const char* kJavaDescriptor = 'Ljava/nio/ByteBuffer;';
    }
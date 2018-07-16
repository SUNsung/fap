#ifndef GTEST_INCLUDE_GTEST_GTEST_SPI_H_
#define GTEST_INCLUDE_GTEST_GTEST_SPI_H_
    
     private:
  std::vector<TestPartResult> array_;
    
      // A helper class that aborts a death test when it's deleted.
  class ReturnSentinel {
   public:
    explicit ReturnSentinel(DeathTest* test) : test_(test) { }
    ~ReturnSentinel() { test_->Abort(TEST_ENCOUNTERED_RETURN_STATEMENT); }
   private:
    DeathTest* const test_;
    GTEST_DISALLOW_COPY_AND_ASSIGN_(ReturnSentinel);
  } GTEST_ATTRIBUTE_UNUSED_;
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45,
    typename T46, typename T47, typename T48, typename T49>
class ValueArray49 {
 public:
  ValueArray49(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
      T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33,
      T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41,
      T42 v42, T43 v43, T44 v44, T45 v45, T46 v46, T47 v47, T48 v48,
      T49 v49) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
      v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
      v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
      v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26),
      v27_(v27), v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32),
      v33_(v33), v34_(v34), v35_(v35), v36_(v36), v37_(v37), v38_(v38),
      v39_(v39), v40_(v40), v41_(v41), v42_(v42), v43_(v43), v44_(v44),
      v45_(v45), v46_(v46), v47_(v47), v48_(v48), v49_(v49) {}
    }
    
    typedef struct stat StatStruct;
    
      template <GTEST_1_TYPENAMES_(U)>
  tuple(const GTEST_1_TUPLE_(U)& t) : f0_(t.f0_) {}
    
      // Now, we have that n is odd and n >= 3.
    
    // dims=[5, 4, 3, 2]->[4, 3, 5, 2]
TEST_F(MatrixTest, RotatingTranspose_0_2) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 0, 2, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][24, 25][48, 49][72, 73][96, 97]]
  //                 [[2, 3][26, 27][50, 51][74, 75][98, 99]]
  //                 [[4, 5][28, 29][52, 53][76, 77][100, 101]]]
  //                [[[6, 7]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(24, m(1, 0));
  EXPECT_EQ(25, m(1, 1));
  EXPECT_EQ(96, m(4, 0));
  EXPECT_EQ(97, m(4, 1));
  EXPECT_EQ(2, m(5, 0));
  EXPECT_EQ(6, m(15, 0));
}
    
    #ifndef SWIG
template <class T1, class T2, class R, class P1, class A1, class A2, class A3>
inline typename _ConstTessMemberResultCallback_1_3<true,R,T1,P1,A1,A2,A3>::base*
NewTessCallback( T1* obj, R (T2::*member)(P1,A1,A2,A3) , typename Identity<P1>::type p1) {
  return new _ConstTessMemberResultCallback_1_3<true,R,T1,P1,A1,A2,A3>(obj, member, p1);
}
#endif
    
    // Pseudo-accessors.
int IntFeatureMap::IndexFeature(const INT_FEATURE_STRUCT& f) const {
  return feature_space_.Index(f);
}
int IntFeatureMap::MapFeature(const INT_FEATURE_STRUCT& f) const {
  return feature_map_.SparseToCompact(feature_space_.Index(f));
}
int IntFeatureMap::MapIndexFeature(int index_feature) const {
  return feature_map_.SparseToCompact(index_feature);
}
INT_FEATURE_STRUCT IntFeatureMap::InverseIndexFeature(int index_feature) const {
  return feature_space_.PositionFromIndex(index_feature);
}
INT_FEATURE_STRUCT IntFeatureMap::InverseMapFeature(int map_feature) const {
  int index = feature_map_.CompactToSparse(map_feature);
  return feature_space_.PositionFromIndex(index);
}
void IntFeatureMap::DeleteMapFeature(int map_feature) {
  feature_map_.Merge(-1, map_feature);
  mapping_changed_ = true;
}
bool IntFeatureMap::IsMapFeatureDeleted(int map_feature) const {
  return feature_map_.IsCompactDeleted(map_feature);
}
    
      const UNICHARSET& unicharset() const {
    return samples_.unicharset();
  }
  TrainingSampleSet* GetSamples() {
    return &samples_;
  }
  const ShapeTable& master_shapes() const {
    return master_shapes_;
  }
    
    CCNonTextDetect::~CCNonTextDetect() {
  delete noise_density_;
}
    
    namespace leveldb {
namespace log {
    }
    }
    
    namespace leveldb {
    }
    
    #include <algorithm>
#include <assert.h>
#include 'leveldb/comparator.h'
#include 'leveldb/table_builder.h'
#include 'util/coding.h'
    
      void Build() {
    std::vector<Slice> key_slices;
    for (size_t i = 0; i < keys_.size(); i++) {
      key_slices.push_back(Slice(keys_[i]));
    }
    filter_.clear();
    policy_->CreateFilter(&key_slices[0], static_cast<int>(key_slices.size()),
                          &filter_);
    keys_.clear();
    if (kVerbose >= 2) DumpFilter();
  }
    
    static uint64_t PackSequenceAndType(uint64_t seq, ValueType t) {
  assert(seq <= kMaxSequenceNumber);
  assert(t <= kValueTypeForSeek);
  return (seq << 8) | t;
}
    
    
    {  // Write the header and the payload
  Status s = dest_->Append(Slice(buf, kHeaderSize));
  if (s.ok()) {
    s = dest_->Append(Slice(ptr, n));
    if (s.ok()) {
      s = dest_->Flush();
    }
  }
  block_offset_ += kHeaderSize + n;
  return s;
}
    
    namespace leveldb {
    }
    
      // Reset the contents as if the BlockBuilder was just constructed.
  void Reset();
    
        void SetBooleanArrayRegion(jbooleanArray array, jsize start, jsize len,
        const jboolean* buf)
    { functions->SetBooleanArrayRegion(this, array, start, len, buf); }
    void SetByteArrayRegion(jbyteArray array, jsize start, jsize len,
        const jbyte* buf)
    { functions->SetByteArrayRegion(this, array, start, len, buf); }
    void SetCharArrayRegion(jcharArray array, jsize start, jsize len,
        const jchar* buf)
    { functions->SetCharArrayRegion(this, array, start, len, buf); }
    void SetShortArrayRegion(jshortArray array, jsize start, jsize len,
        const jshort* buf)
    { functions->SetShortArrayRegion(this, array, start, len, buf); }
    void SetIntArrayRegion(jintArray array, jsize start, jsize len,
        const jint* buf)
    { functions->SetIntArrayRegion(this, array, start, len, buf); }
    void SetLongArrayRegion(jlongArray array, jsize start, jsize len,
        const jlong* buf)
    { functions->SetLongArrayRegion(this, array, start, len, buf); }
    void SetFloatArrayRegion(jfloatArray array, jsize start, jsize len,
        const jfloat* buf)
    { functions->SetFloatArrayRegion(this, array, start, len, buf); }
    void SetDoubleArrayRegion(jdoubleArray array, jsize start, jsize len,
        const jdouble* buf)
    { functions->SetDoubleArrayRegion(this, array, start, len, buf); }
    
    /**
 * Populate the vector with the current stack trace
 *
 * Note that this trace needs to be symbolicated to get the library offset even
 * if it is to be symbolicated off-line.
 *
 * Beware of a bug on some platforms, which makes the trace loop until the
 * buffer is full when it reaches a noexpr function. It seems to be fixed in
 * newer versions of gcc. https://gcc.gnu.org/bugzilla/show_bug.cgi?id=56846
 *
 * @param stackTrace The vector that will receive the stack trace. Before
 * filling the vector it will be cleared. The vector will never grow so the
 * number of frames captured is limited by the capacity of it.
 *
 * @param skip The number of frames to skip before capturing the trace
 */
FBEXPORT void getStackTrace(std::vector<InstructionPointer>& stackTrace,
                            size_t skip = 0);
    
    class IosFlagsSaver {
  ios_base& ios_;
  ios_base::fmtflags flags_;
    }
    
    void Config::setPointScaleFactor(float pixelsInPoint)
{
    YGConfigSetPointScaleFactor(m_config, pixelsInPoint);
}
    
    #pragma once
    
    
    {private:
  const char* m_functionName;
  const char* m_fileName;
  int m_lineNumber;
};
    
    /**
 * A thread-local object is a 'global' object within a thread. This is useful
 * for writing apartment-threaded code, where nothing is actullay shared
 * between different threads (hence no locking) but those variables are not
 * on stack in local scope. To use it, just do something like this,
 *
 *   ThreadLocal<MyClass> static_object;
 *     static_object->data_ = ...;
 *     static_object->doSomething();
 *
 *   ThreadLocal<int> static_number;
 *     int value = *static_number;
 *
 * So, syntax-wise it's similar to pointers. T can be primitive types, and if
 * it's a class, there has to be a default constructor.
 */
template<typename T>
class ThreadLocal {
public:
  /**
   * Constructor that has to be called from a thread-neutral place.
   */
  ThreadLocal() :
    m_key(0),
    m_cleanup(OnThreadExit) {
    initialize();
  }
    }
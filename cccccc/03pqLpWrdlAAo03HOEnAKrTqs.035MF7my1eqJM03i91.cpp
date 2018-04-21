
        
          std::string comparator_;
  uint64_t log_number_;
  uint64_t prev_log_number_;
  uint64_t next_file_number_;
  SequenceNumber last_sequence_;
  bool has_comparator_;
  bool has_log_number_;
  bool has_prev_log_number_;
  bool has_next_file_number_;
  bool has_last_sequence_;
    
      // delete second key range
  batch.Clear();
  for (size_t i = 0; i < kNumKeys; i++) {
    batch.Delete(Key2(i));
  }
  ASSERT_OK(db->Write(leveldb::WriteOptions(), &batch));
    
    TEST(CRC, StandardResults) {
  // From rfc3720 section B.4.
  char buf[32];
    }
    
    
    {  // Pick up remaining bytes
  switch (limit - data) {
    case 3:
      h += static_cast<unsigned char>(data[2]) << 16;
      FALLTHROUGH_INTENDED;
    case 2:
      h += static_cast<unsigned char>(data[1]) << 8;
      FALLTHROUGH_INTENDED;
    case 1:
      h += static_cast<unsigned char>(data[0]);
      h *= m;
      h ^= (h >> r);
      break;
  }
  return h;
}
    
    
    {  ASSERT_EQ(Hash(0, 0, 0xbc9f1d34), 0xbc9f1d34);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data1), sizeof(data1), 0xbc9f1d34),
      0xef1345c4);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data2), sizeof(data2), 0xbc9f1d34),
      0x5b663814);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data3), sizeof(data3), 0xbc9f1d34),
      0x323c078f);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data4), sizeof(data4), 0xbc9f1d34),
      0xed21633a);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data5), sizeof(data5), 0x12345678),
      0xf333dabb);
}
    
    // Helper class that locks a mutex on construction and unlocks the mutex when
// the destructor of the MutexLock object is invoked.
//
// Typical usage:
//
//   void MyClass::MyMethod() {
//     MutexLock l(&mu_);       // mu_ is an instance variable
//     ... some complex code, possibly with multiple return paths ...
//   }
    
    
    {    // Compute (product % M) using the fact that ((x << 31) % M) == x.
    seed_ = static_cast<uint32_t>((product >> 31) + (product & M));
    // The first reduction may overflow by 1 bit, so we may need to
    // repeat.  mod == M is not possible; using > allows the faster
    // sign-bit-based test.
    if (seed_ > M) {
      seed_ -= M;
    }
    return seed_;
  }
  // Returns a uniformly distributed value in the range [0..n-1]
  // REQUIRES: n > 0
  uint32_t Uniform(int n) { return Next() % n; }
    
      virtual void Next();
  virtual void Prev();
  virtual void Seek(const Slice& target);
  virtual void SeekToFirst();
  virtual void SeekToLast();
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
        // Invariant: we never leave < kHeaderSize bytes in a block.
    assert(kBlockSize - block_offset_ - kHeaderSize >= 0);
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseEffect'', nullptr);
        return 0;
    }
#endif
    
    
    
    			b2PolygonShape shape;
			shape.SetAsBox(0.5f, 4.0f, b2Vec2(4.0f, 0.0f), 0.5f * b2_pi);
    
    	static Test* Create()
	{
		return new BulletTest;
	}
    
    TEST(Metric, RMSE) {
  xgboost::Metric * metric = xgboost::Metric::Create('rmse');
  ASSERT_STREQ(metric->Name(), 'rmse');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.6403f, 0.001f);
}
    
    
    {  size_t len =  static_cast<size_t>(jenv->GetArrayLength(jdmats));
  // put handle from jhandles to chandles
  jlong* cjdmats = jenv->GetLongArrayElements(jdmats, 0);
  for (size_t i = 0; i < len; ++i) {
    dmats.push_back((DMatrixHandle) cjdmats[i]);
    jstring jevname = (jstring)jenv->GetObjectArrayElement(jevnames, i);
    const char *s =jenv->GetStringUTFChars(jevname, 0);
    evnames.push_back(std::string(s, jenv->GetStringLength(jevname)));
    if (s != nullptr) jenv->ReleaseStringUTFChars(jevname, s);
  }
  jenv->ReleaseLongArrayElements(jdmats, cjdmats, 0);
  for (size_t i = 0; i < len; ++i) {
    evchars.push_back(evnames[i].c_str());
  }
  const char* result;
  int ret = XGBoosterEvalOneIter(handle, jiter,
                                 dmlc::BeginPtr(dmats),
                                 dmlc::BeginPtr(evchars),
                                 len, &result);
  jstring jinfo = nullptr;
  if (result != nullptr) {
    jinfo = jenv->NewStringUTF(result);
  }
  jenv->SetObjectArrayElement(jout, 0, jinfo);
  return ret;
}
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
      XGBOOST_DEVICE GradientPairInternal() : grad_(0), hess_(0) {}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    int SimpleIntUnpack(const void* _rawbuf, size_t _rawlen, size_t& _packlen, AutoBuffer& _data) {
    return SimpleUnpack<unsigned int>(_rawbuf, _rawlen, _packlen, _data);
}
    
    
    
    
    
    //============================================================================
// Name        : has_member.h
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
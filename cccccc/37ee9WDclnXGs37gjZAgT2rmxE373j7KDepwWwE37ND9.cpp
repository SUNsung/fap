
        
        
    {
    {
    {                // assign patch back
                // TODO: do that inside the loop to avoid copying, but one thing at a time
                assignpatch(patch, i0, i1, j0, j1);
            }
        }
    }
    
    
    {
    {
    {// utility function to round an integer up to a multiple of size
size_t RoundUp(size_t value, size_t size);
// HIGH and LOW DWORD functions
DWORD HIDWORD(size_t size);
DWORD LODWORD(size_t size);
} } }

    
        Matrix<float>::MultiplyAndWeightedAdd(alpha, mAdense, transposeA, mBdense, transposeB, beta, mCdense);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mAsparse, transposeA, mBsparse, transposeB, beta, mCsparse);
    mCsparse.SwitchToMatrixType(MatrixType::DENSE, matrixFormatDense, true);
    BOOST_CHECK(mCsparse.IsEqualTo(mCdense, c_epsilonFloatE4));
    
    GPUDataTransferer::GPUDataTransferer(int deviceId, bool useConcurrentStreams) 
{
#pragma warning(disable : 4127)
    if (useConcurrentStreams && (s_fetchStream == NULL))
    {
        cudaStreamCreateWithFlags(&s_fetchStream, cudaStreamNonBlocking) || 'cudaStreamCreateWithFlags failed';
        cudaStreamCreateWithFlags(&s_assignStream, cudaStreamNonBlocking) || 'cudaStreamCreateWithFlags failed';
    }
    }
    
    function<ComputationNetworkPtr(DEVICEID_TYPE)> GetCreateNetworkFn(const ScriptableObjects::IConfigRecord& config)
{
    // createNetwork() is a BrainScript lambda that creates the model
    // We create a C++ wrapper around it, which we then pass to Train().
    auto createNetworkConfigLambda = config[L'createNetwork'].AsPtr<ScriptableObjects::ConfigLambda>();
    return [createNetworkConfigLambda](DEVICEID_TYPE /*deviceId*/)
    {
        // execute the lambda
        vector<ScriptableObjects::ConfigValuePtr> args; // this lambda has no arguments
        ScriptableObjects::ConfigLambda::NamedParams namedArgs;
        let netValue = createNetworkConfigLambda->Apply(move(args), move(namedArgs), L'BuildNetworkFromDescription');
        // typecast the result to the desired type
        return netValue.AsPtr<ComputationNetwork>();
    };
}
    
        static void SetTracingFlag()
    {
        auto& us = GetStaticInstance();
        us.m_tracingFlag = true;
    }
    
    template<class TString>
inline bool AreEqualIgnoreCase(
    const typename TString::value_type* s1pointer,
    const TString& s2)
{
    return AreEqualIgnoreCase(TString(s1pointer), s2);
}
    
    void ShowErrorAndExit(DWORD ec, const wchar_t * func, int line)
{
	wchar_t * buffer;
	if (FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL, ec, 0, (LPWSTR)&buffer, 0, NULL) == 0)
	{
		buffer = L'Unknown error. FormatMessage failed.';
	}
    }
    
    SEXP XGBoosterModelToRaw_R(SEXP handle) {
  SEXP ret;
  R_API_BEGIN();
  bst_ulong olen;
  const char *raw;
  CHECK_CALL(XGBoosterGetModelRaw(R_ExternalPtrAddr(handle), &olen, &raw));
  ret = PROTECT(allocVector(RAWSXP, olen));
  if (olen != 0) {
    memcpy(RAW(ret), raw, olen);
  }
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterDumpModelEx
 * Signature: (JLjava/lang/String;I)[Ljava/lang/String;
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterDumpModelEx
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jstring jfmap, jint jwith_stats, jstring jformat, jobjectArray jout) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  const char *fmap = jenv->GetStringUTFChars(jfmap, 0);
  const char *format = jenv->GetStringUTFChars(jformat, 0);
  bst_ulong len = 0;
  char **result;
    }
    
    // prediction
#include '../src/predictor/predictor.cc'
#include '../src/predictor/cpu_predictor.cc'
    
    TEST(Metric, Precision) {
  // When the limit for precision is not given, it takes the limit at
  // std::numeric_limits<unsigned>::max(); hence all values are very small
  // NOTE(AbdealiJK): Maybe this should be fixed to be num_row by default.
  xgboost::Metric * metric = xgboost::Metric::Create('pre');
  ASSERT_STREQ(metric->Name(), 'pre');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-7);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0, 1e-7);
    }
    
    
    {  std::unique_ptr<FeatureSelector> selector_;
};
    
      XGBOOST_DEVICE GradientPairInternal<T> operator-(
      const GradientPairInternal<T> &rhs) const {
    GradientPairInternal<T> g;
    g.grad_ = grad_ - rhs.grad_;
    g.hess_ = hess_ - rhs.hess_;
    return g;
  }
    
    // This function will create a Huffman tree.
//
// The catch here is that the tree cannot be arbitrarily deep.
// Brotli specifies a maximum depth of 15 bits for 'code trees'
// and 7 bits for 'code length code trees.'
//
// count_limit is the value that is to be faked as the minimum value
// and this minimum value is raised until the tree matches the
// maximum length requirement.
//
// This algorithm is not of excellent performance for very long data blocks,
// especially when population counts are longer than 2**tree_limit, but
// we are not planning to use this with extremely long blocks.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth) {
  // For block sizes below 64 kB, we never need to do a second iteration
  // of this loop. Probably all of our block sizes will be smaller than
  // that, so this loop is mostly of academic interest. If we actually
  // would need this, we would be better off with the Katajainen algorithm.
  for (uint32_t count_limit = 1; ; count_limit *= 2) {
    size_t n = 0;
    for (size_t i = length; i != 0;) {
      --i;
      if (data[i]) {
        const uint32_t count = std::max<uint32_t>(data[i], count_limit);
        tree[n++] = HuffmanTree(count, -1, static_cast<int16_t>(i));
      }
    }
    }
    }
    
    #endif  // GUETZLI_FDCT_H_

    
    
    {}  // namespace guetzli
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg) {
  static const int quant[3 * kDCTBlockSize] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  };
  return EncodeRGBToJpeg(rgb, w, h, quant, jpg);
}
    
    #include <stddef.h>
#include <stdint.h>
    
    class TestWriteChainAsyncTransportWrapper :
  public WriteChainAsyncTransportWrapper<folly::AsyncTransportWrapper> {
 public:
  TestWriteChainAsyncTransportWrapper() :
    WriteChainAsyncTransportWrapper<folly::AsyncTransportWrapper>(nullptr) {}
    }
    
    namespace folly {
    }
    
     private:
  Node* head() {
    return head_.load(std::memory_order_acquire);
  }
    
    /** Set implemented as an ordered singly-linked list.
 *
 *  A single writer thread may add or remove elements. Multiple reader
 *  threads may search the set concurrently with each other and with
 *  the writer's operations.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrSWMRSet {
  template <typename Node>
  struct Reclaimer {
    void operator()(Node* p) {
      delete p;
    }
  };
    }
    
    #include <string>
    
      template <typename K>
  if_is_transparent<K, iterator> upper_bound(const K& key) {
    return upper_bound(*this, key);
  }
    
    
    {// Older versions of libstdc++ do not provide std::is_trivially_copyable
#if defined(__clang__) && !defined(_LIBCPP_VERSION)
template <class T>
struct is_trivially_copyable
    : std::integral_constant<bool, __is_trivially_copyable(T)> {};
#elif defined(__GNUC__) && !defined(__clang__) && __GNUC__ < 5
template <class T>
struct is_trivially_copyable : std::is_trivial<T> {};
#else
template <class T>
using is_trivially_copyable = std::is_trivially_copyable<T>;
#endif
} // namespace traits_detail
    
      EXPECT_TRUE((std::is_same<remove_cvref_t<int&&>, int>::value));
  EXPECT_TRUE((std::is_same<remove_cvref<int&&>::type, int>::value));
    
    
    {// Instantiate the most common Future types to save compile time
template class SemiFuture<Unit>;
template class SemiFuture<bool>;
template class SemiFuture<int>;
template class SemiFuture<int64_t>;
template class SemiFuture<std::string>;
template class SemiFuture<double>;
template class Future<Unit>;
template class Future<bool>;
template class Future<int>;
template class Future<int64_t>;
template class Future<std::string>;
template class Future<double>;
} // namespace folly
    
      // Only allow creation by this factory, to ensure heap allocation.
  static std::shared_ptr<WTCallback> create(EventBase* base) {
    // optimization opportunity: memory pool
    auto cob = std::make_shared<WTCallback>(PrivateConstructorTag{}, base);
    // Capture shared_ptr of cob in lambda so that Core inside Promise will
    // hold a ref count to it. The ref count will be released when Core goes
    // away which happens when both Promise and Future go away
    cob->promise_.setInterruptHandler(
        [cob](exception_wrapper ew) { cob->interruptHandler(std::move(ew)); });
    return cob;
  }
    
      // Sync + corrupt => no change
  ASSERT_OK(writable_file->Fsync());
  ASSERT_OK(dynamic_cast<MockEnv*>(env_)->CorruptBuffer(kFileName));
  result.clear();
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
    
    
    
    {}  // namespace rocksdb
    
      /**
   * @brief flush file,
   * @details initiate an aio write and not wait
   *
   * @return [description]
   */
  Status Flush() {
    librados::AioCompletion *write_completion = librados::Rados::aio_create_completion();
    int r = 0;
    }
    
        {
      PERF_TIMER_GUARD(block_read_time);
      // Actual file read
      status_ = file_->Read(handle_.offset(), block_size_ + kBlockTrailerSize,
                            &slice_, used_buf_);
    }
    PERF_COUNTER_ADD(block_read_count, 1);
    PERF_COUNTER_ADD(block_read_byte, block_size_ + kBlockTrailerSize);
    if (!status_.ok()) {
      return status_;
    }
    
    SyncPoint* SyncPoint::GetInstance() {
  static SyncPoint sync_point;
  return &sync_point;
}
    
    
    {
    {  auto callback_pair = callbacks_.find(point);
  if (callback_pair != callbacks_.end()) {
    num_callbacks_running_++;
    mutex_.unlock();
    callback_pair->second(cb_arg);
    mutex_.lock();
    num_callbacks_running_--;
  }
  cleared_points_.insert(point);
  cv_.notify_all();
}
} // rocksdb
#endif

    
      bool pending_exception =
      AbstractSliceJni::setHandle(env, m_jSliceLimit, &limit, JNI_FALSE);
  if(pending_exception) {
    if(env->ExceptionCheck()) {
      // exception thrown from setHandle or descendant
      env->ExceptionDescribe(); // print out exception to stderr
    }
    if(jsStart != nullptr) {
      env->DeleteLocalRef(jsStart);
    }
    releaseJniEnv(attached_thread);
    return;
  }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #endif

    
        if (_packlen > _rawlen) return SIMPLE_CONTINUE_DATA;
    
      private:
    SpyCore() {}
    ~SpyCore() {}
    
    
bool TSpy::SpyHookLogFunc(XLoggerInfo_t& _info, std::string& _log)
{
    __attribute__((unused)) int i = 0;
    return true;
}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        JNIEnv* GetEnv();
    int Status();
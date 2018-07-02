
        
          bool Register(const ui::Accelerator& accelerator,
                const base::Closure& callback);
  bool IsRegistered(const ui::Accelerator& accelerator);
  void Unregister(const ui::Accelerator& accelerator);
  void UnregisterAll();
    
      // Called immediately after all windows are closed.
  virtual void OnWindowAllClosed() {}
    
    #include 'base/macros.h'
#include 'v8/include/v8.h'
    
      void RunDestructor() override;
    
    
    {  DraggableRegion();
};
    
      static GlobalShortcutListener* GetInstance();
    
     protected:
   /**
   * @brief Generates a random integer from Uniform({0, 1, ..., n-1}).
   *
   * @param n
   *    The upperbound (exclusive) value of the random number.
   * @return
   *    A uniformly random integer value from ({0, 1, ..., n-1}).
   */
  virtual int Rand(int n);
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
    #endif  // CAFFE_CUDNN_LRN_LAYER_HPP_

    
    
    {  bool stable_prod_grad_;
};
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17>
internal::ValueArray17<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7,
    T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15,
    T16 v16, T17 v17) {
  return internal::ValueArray17<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10,
      v11, v12, v13, v14, v15, v16, v17);
}
    
    // This overload prints a (const) wchar_t array compactly.
GTEST_API_ void UniversalPrintArray(
    const wchar_t* begin, size_t len, ::std::ostream* os);
    
      // Returns true iff the test part non-fatally failed.
  bool nonfatally_failed() const { return type_ == kNonFatalFailure; }
    
      // Returns the sign bit of this number.
  Bits sign_bit() const { return kSignBitMask & u_.bits_; }
    
    inline bool IsAlpha(char ch) {
  return isalpha(static_cast<unsigned char>(ch)) != 0;
}
inline bool IsAlNum(char ch) {
  return isalnum(static_cast<unsigned char>(ch)) != 0;
}
inline bool IsDigit(char ch) {
  return isdigit(static_cast<unsigned char>(ch)) != 0;
}
inline bool IsLower(char ch) {
  return islower(static_cast<unsigned char>(ch)) != 0;
}
inline bool IsSpace(char ch) {
  return isspace(static_cast<unsigned char>(ch)) != 0;
}
inline bool IsUpper(char ch) {
  return isupper(static_cast<unsigned char>(ch)) != 0;
}
inline bool IsXDigit(char ch) {
  return isxdigit(static_cast<unsigned char>(ch)) != 0;
}
inline bool IsXDigit(wchar_t ch) {
  const unsigned char low_byte = static_cast<unsigned char>(ch);
  return ch == low_byte && isxdigit(low_byte) != 0;
}
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TUPLE_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TUPLE_H_
    
    
    {
    {    return -1;
  }
};
    
    
    {  return result;
}
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
    ELISTIZE (ROW)
/**********************************************************************
 * ROW::ROW
 *
 * Constructor to build a ROW. Only the stats stuff are given here.
 * The words are added directly.
 **********************************************************************/
ROW::ROW (                       //constructor
int32_t spline_size,               //no of segments
int32_t * xstarts,                 //segment boundaries
double *coeffs,                  //coefficients
float x_height,                  //line height
float ascenders,                 //ascender size
float descenders,                //descender drop
int16_t kern,                      //char gap
int16_t space                      //word gap
)
    : baseline(spline_size, xstarts, coeffs),
      para_(nullptr) {
  kerning = kern;                //just store stuff
  spacing = space;
  xheight = x_height;
  ascrise = ascenders;
  bodysize = 0.0f;
  descdrop = descenders;
  has_drop_cap_ = false;
  lmargin_ = 0;
  rmargin_ = 0;
}
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(nullptr) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
    }
    
    const char *kApostropheLikeUTF8[] = {
  ''',       // ASCII apostrophe
  '`',       // ASCII backtick
  '\u2018',  // opening single quote
  '\u2019',  // closing single quote
  '\u2032',  // mathematical prime mark
  nullptr,      // end of our list.
};
    
    /*
 * Source operands for vcall/vinvoke instructions, packed into a struct for
 * convenience and to keep the instructions compact.
 */
struct VcallArgs {
  VregList args;
  VregList simdArgs;
  VregList stkArgs;
  VregList indRetArgs;
};
    
      ClusterArcSet carcs;
    
    
    {  bool ret;
  if (isLongOption(option)) {
    ret = setLongOption(option, value.toInt64());
  } else {
    raise_warning('curl_share_setopt():'
                  'Invalid curl share configuration option');
    ret = false;
  }
  return ret;
}
    
    struct CurlShareResource : SweepableResourceData {
  DECLARE_RESOURCE_ALLOCATION(CurlShareResource)
  CLASSNAME_IS('curl_share')
  const String& o_getClassNameHook() const override { return classnameof(); }
  bool isInvalid() const override { return !m_share; }
    }
    
        void push(CondVarNode& c, SynchronizableMulti::Priority pri) {
      c.unlink();
      if (pri == Priority::Highest) {
        m_highPriList.push_front(c);
      } else if (pri == Priority::High) {
        m_highPriList.push_back(c);
      } else if (pri == Priority::Normal) {
        m_midLowPriList.push_front(c);
      } else {
        assertx(pri == Priority::Low);
        m_midLowPriList.push_back(c);
      }
    }
    
    
    {
    {  // Save NUMA policy for the current thread.
  void save() {
    needRestore = !get_mempolicy(&oldPolicy, &oldMask, sizeof(oldMask),
                                 nullptr, 0);
  }
  ~SavedNumaPolicy() {
    if (needRestore) {
      set_mempolicy(oldPolicy, &oldMask, sizeof(oldMask));
    }
  }
};
}
#endif
    
    /**
 * Get current exceptions being handled.  front() is the most recent exception.
 * There should be at most one unless rethrowing.
 */
std::vector<ExceptionInfo> getCurrentExceptions();
    
    
    {} // namespace folly

    
    SerialExecutor::SerialExecutor(KeepAlive<Executor> parent)
    : parent_(std::move(parent)) {}
    
      static KeepAlive<SerialExecutor> create(
      KeepAlive<Executor> parent = getKeepAliveToken(getCPUExecutor().get()));
    
      const int kNumQueries = 30;
  for (int q=0; q<kNumQueries; ++q) {
    // Generate a random query (Append or Get) and random parameters
    query_t query = (query_t)randomGen.Uniform((int)NUM_OPS);
    std::string key = keys[randomGen.Uniform((int)kKeyCount)];
    std::string word = words[randomGen.Uniform((int)kWordCount)];
    }
    
    JNIEnv* JniCallback::getJniEnv(jboolean* attached) const {
  return JniUtil::getJniEnv(m_jvm, attached);
}
    
    
    {   private:
     const std::set<uint32_t> m_ignore_histograms;
 };
    
      // Return the result merging iterator.
  InternalIterator* Finish();
    
      m_jCompareMethodId = AbstractComparatorJni::getCompareMethodId(env);
  if(m_jCompareMethodId == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
    
    	jstring tag = (jstring)JNU_GetField(env, _log_info, 'tag', 'Ljava/lang/String;').l;
	jstring filename = (jstring)JNU_GetField(env, _log_info, 'filename', 'Ljava/lang/String;').l;
	jstring funcname = (jstring)JNU_GetField(env, _log_info, 'funcname', 'Ljava/lang/String;').l;
	jint line = JNU_GetField(env, _log_info, 'line', 'I').i;
	jlong pid = JNU_GetField(env, _log_info, 'pid', 'J').i;
	jlong tid = JNU_GetField(env, _log_info, 'tid', 'J').j;
	jlong maintid = JNU_GetField(env, _log_info, 'maintid', 'J').j;
    
    void WakeUpLock::Lock(int64_t _timelock) {
    ::wakeupLock_Lock_Timeout(object_, _timelock);
}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {        return NULL;
    }
    
    int Test_Spy_Sample::__TestFun1(int i)
{
    SPY_HOOK_THIS_API(__TestFun1, i);
    xinfo2(TSF'Test');
    return i+1;
}

    
    #include 'comm/debugger/spy_impl_helper.inl'
#include 'comm/debugger/test_spy_sample.h'
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
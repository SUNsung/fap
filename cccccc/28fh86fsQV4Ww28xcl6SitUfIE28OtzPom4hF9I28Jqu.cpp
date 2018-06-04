
        
        #include <algorithm>
#include <cassert>
#include <chrono>
#include <cmath>
#include <condition_variable>
#include <limits>
#include <memory>
#include <mutex>
#include <vector>
    
      for (auto s: tensor->sizes())
    assert(s == 2);
  for (int i = 0; i < 2; i++)
    assert(reinterpret_cast<float*>(tensor->data())[i] == 5);
    
    #define THC_GENERIC_FILE 'torch/csrc/generic/Storage.h'
#include <THC/THCGenerateAllTypes.h>
    
    #include <cstddef>
#include <string>
    
      EXPECT_THROW({Cursor(iobuf1.get()).pull(buf, 20);},
               std::out_of_range);
    
    TEST_F(OrderingTest, to_ordering) {
  EXPECT_EQ(ordering::lt, to_ordering(int(ordering::lt)));
  EXPECT_EQ(ordering::eq, to_ordering(int(ordering::eq)));
  EXPECT_EQ(ordering::gt, to_ordering(int(ordering::gt)));
    }
    
      size_t size() override {
    return queue_.size();
  }
    
        Node* next() {
      return next_;
    }
    
    TEST_F(UtilityTest, to_signed) {
  {
    constexpr auto actual = folly::to_signed(int32_t(-12));
    EXPECT_TRUE(std::is_signed<decltype(actual)>::value);
    EXPECT_EQ(-12, actual);
  }
  {
    constexpr auto actual = folly::to_signed(uint32_t(-12));
    EXPECT_TRUE(std::is_signed<decltype(actual)>::value);
    EXPECT_EQ(-12, actual);
  }
}
    
    
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
    
    #pragma once
    
    
    {  std::shared_ptr<ManualExecutor> westExecutor;
  std::shared_ptr<ManualExecutor> eastExecutor;
  std::shared_ptr<ManualWaiter> waiter;
  InlineExecutor inlineExecutor;
  std::atomic<bool> done;
  std::thread th;
};
    
    
void DBWrapper::Init(Handle<Object> exports) {
  Local<FunctionTemplate> tpl = FunctionTemplate::New(New);
  tpl->SetClassName(String::NewSymbol('DBWrapper'));
  tpl->InstanceTemplate()->SetInternalFieldCount(8);
  tpl->PrototypeTemplate()->Set(String::NewSymbol('open'),
      FunctionTemplate::New(Open)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('get'),
      FunctionTemplate::New(Get)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('put'),
      FunctionTemplate::New(Put)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('delete'),
      FunctionTemplate::New(Delete)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('dump'),
      FunctionTemplate::New(Dump)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('createColumnFamily'),
      FunctionTemplate::New(CreateColumnFamily)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('writeBatch'),
      FunctionTemplate::New(WriteBatch)->GetFunction());
  tpl->PrototypeTemplate()->Set(String::NewSymbol('compactRange'),
      FunctionTemplate::New(CompactRange)->GetFunction());
    }
    
      // folder with contents returns relative path to test dir
  ASSERT_OK(env_->CreateDirIfMissing(test_dir_ + '/niu'));
  ASSERT_OK(env_->CreateDirIfMissing(test_dir_ + '/you'));
  ASSERT_OK(env_->CreateDirIfMissing(test_dir_ + '/guo'));
  ASSERT_OK(env_->GetChildren(test_dir_, &children));
  ASSERT_OK(env_->GetChildrenFileAttributes(test_dir_, &childAttr));
  ASSERT_EQ(3U, children.size());
  ASSERT_EQ(3U, childAttr.size());
  for (auto each : children) {
    env_->DeleteDir(test_dir_ + '/' + each);
  }  // necessary for default POSIX env
    
    #include 'rocksdb/merge_operator.h'
#include 'rocksdb/slice.h'
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats,
      const std::set<uint32_t> ignore_histograms) : StatisticsImpl(stats, false),
      m_ignore_histograms(ignore_histograms) {
  }
    
      if(m_jSliceB != nullptr) {
    env->DeleteGlobalRef(m_jSliceB);
  }
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    static const char gs_crash_dump_header[] =
    '*** *** *** *** *** *** *** *** *** *** *** *** *** *** *** ***';
    
    #endif /* DUMPCRASHSTACK_H_ */

    
    
    {}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    class ScopeJEnv {
  public:
    ScopeJEnv(JavaVM* jvm, jint _capacity = 16);
    ~ScopeJEnv();
    }
    
        Value(int unit, double value)
    : unit(unit)
    , value(value)
    {
    }
    
    void Config::setExperimentalFeatureEnabled(int feature, bool enabled)
{
    YGConfigSetExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature), enabled);
}
    
    struct Size
{
    double width;
    double height;
    }
    
        method(getOverflow);
    method(getDisplay);
    
    #ifdef __ANDROID__
    
      std::string asFormattedString() const {
    std::stringstream str;
    str << 'Function ' << m_functionName << ' in file ' << m_fileName << ':' << m_lineNumber;
    return str.str();
  }
    
      RefPtr(RefPtr<T>&& ref) :
    m_ptr(nullptr)
  {
    *this = std::move(ref);
  }
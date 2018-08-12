
        
        // redirect the messages to R's console.
namespace dmlc {
void CustomLogMessage::Log(const std::string& msg) {
  Rprintf('%s\n', msg.c_str());
}
}  // namespace dmlc
    
    
    {
    {    // update information
    this->info.num_row_ += batch.size;
    // copy the data over
    for (size_t i = batch.offset[0]; i < batch.offset[batch.size]; ++i) {
      uint32_t index = batch.index[i];
      bst_float fvalue = batch.value == nullptr ? 1.0f : batch.value[i];
      page_.data.emplace_back(index, fvalue);
      this->info.num_col_ = std::max(this->info.num_col_,
                                    static_cast<uint64_t>(index + 1));
    }
    size_t top = page_.offset.size();
    for (size_t i = 0; i < batch.size; ++i) {
      page_.offset.push_back(page_.offset[top - 1] + batch.offset[i + 1] - batch.offset[0]);
    }
  }
  if (last_group_id != default_max) {
    if (group_size > info.group_ptr_.back()) {
      info.group_ptr_.push_back(group_size);
    }
  }
  this->info.num_nonzero_ = static_cast<uint64_t>(page_.data.size());
  // Either every row has query ID or none at all
  CHECK(info.qids_.empty() || info.qids_.size() == info.num_row_);
}
    
    
    {    for (size_t i = 0; i < preds_h.size(); ++i) {
      auto y = info.labels_[i] * 2.0 - 1.0;
      bst_float p = preds_h[i];
      bst_float w = info.GetWeight(i);
      bst_float g, h;
      if (p * y < 1.0) {
        g = -y * w;
        h = w;
      } else {
        g = 0.0;
        h = std::numeric_limits<bst_float>::min();
      }
      gpair[i] = GradientPair(g, h);
    }
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
    
    #include <map>
#include <node.h>
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
      virtual const char* Name() const override;
    
      /// Push / Insert value at beginning/end of the list. Return the length.
  /// May throw RedisListException
  int PushLeft(const std::string& key, const std::string& value);
  int PushRight(const std::string& key, const std::string& value);
    
    #ifndef STORAGE_LEVELDB_PORT_PORT_WIN_H_
#define STORAGE_LEVELDB_PORT_PORT_WIN_H_
    
    uint64_t StatisticsImpl::getTickerCountLocked(uint32_t tickerType) const {
  assert(
    enable_internal_stats_ ?
      tickerType < INTERNAL_TICKER_ENUM_MAX :
      tickerType < TICKER_ENUM_MAX);
  uint64_t res = 0;
  for (size_t core_idx = 0; core_idx < per_core_stats_.Size(); ++core_idx) {
    res += per_core_stats_.AccessAtCore(core_idx)->tickers_[tickerType];
  }
  return res;
}
    
    #include <folly/portability/GTest.h>
    
    template <typename T>
std::shared_ptr<T> SingletonHolder<T>::try_get() {
  if (UNLIKELY(state_.load(std::memory_order_acquire) !=
               SingletonHolderState::Living)) {
    createInstance();
  }
    }
    
    
    { private:
  detail::BufferedSlidingWindow<TDigest, ClockT> bufferedSlidingWindow_;
};
    
    MockClock::time_point MockClock::Now = MockClock::time_point{};
    
      static BoolPromise* promises(ControlBlock* cb) {
    return reinterpret_cast<ControlBlockAndPromise*>(cb)->promises;
  }
    
      static_assert(
      folly::AllocatorHasDefaultObjectConstruct<TestAlloc4<S>, S, S>::value,
      '');
  static_assert(
      folly::AllocatorHasDefaultObjectDestroy<TestAlloc4<S>, S>::value, '');
    
      {
    auto meta = folly::settings::getSettingsMeta('follytest_public_flag_to_a');
    EXPECT_TRUE(meta.hasValue());
    const auto& md = meta.value();
    EXPECT_EQ(md.project, 'follytest');
    EXPECT_EQ(md.name, 'public_flag_to_a');
    EXPECT_EQ(md.typeStr, 'int');
    EXPECT_EQ(md.typeId, typeid(int));
  }
    
    
    {  EXPECT_TRUE(allf.isReady());
  int i = 0;
  for (auto val : allf.value()) {
    EXPECT_EQ(i, val.i);
    i++;
  }
}
    
      auto future = promise.getFuture().then(std::bind(
      [](std::unique_ptr<int>& p) mutable {
        ++*p;
        return std::move(p);
      },
      std::move(int_ptr)));
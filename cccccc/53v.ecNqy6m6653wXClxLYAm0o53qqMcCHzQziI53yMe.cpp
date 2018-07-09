
        
        #ifndef TESSERACT_CCMAIN_PAGEITERATOR_H_
#define TESSERACT_CCMAIN_PAGEITERATOR_H_
    
    const char *kUTF8LineSeparator = '\u2028';  // '\xe2\x80\xa8';
const char *kUTF8ParagraphSeparator = '\u2029';  // '\xe2\x80\xa9';
const char *kLRM = '\u200E';  // Left-to-Right Mark
const char *kRLM = '\u200F';  // Right-to-Left Mark
const char *kRLE = '\u202A';  // Right-to-Left Embedding
const char *kPDF = '\u202C';  // Pop Directional Formatting
    
    namespace tesseract {
    }
    
     private:
  // Displays the blob and block bounding boxes in a window called Blocks.
  void DisplayBlocks(BLOCK_LIST* blocks);
  // Displays the column edges at each grid y coordinate defined by
  // best_columns_.
  void DisplayColumnBounds(PartSetVector* sets);
    
    #pragma once
    
      mPlatformType = PlatformType::TYPE_OSX | PlatformType::TYPE_POSIX;
  EXPECT_TRUE(isPlatform(PlatformType::TYPE_POSIX, mPlatformType));
  EXPECT_TRUE(isPlatform(PlatformType::TYPE_OSX, mPlatformType));
    
      auto file_path = kTestWorkingDirectory + 'permissions-file2';
    
    #ifdef WIN32
TEST_F(ProcessTests, test_constructorWin) {
  HANDLE handle =
      ::OpenProcess(PROCESS_ALL_ACCESS, FALSE, ::GetCurrentProcessId());
  EXPECT_NE(handle, reinterpret_cast<HANDLE>(nullptr));
    }
    
    TEST_F(TablesTests, test_constraint_matching) {
  struct ConstraintList cl;
  // An empty constraint list has expectations.
  EXPECT_FALSE(cl.exists());
  EXPECT_FALSE(cl.exists(GREATER_THAN));
  EXPECT_TRUE(cl.notExistsOrMatches('some'));
    }
    
    Status WmiResultItem::GetBool(const std::string& name, bool& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
    }
    
    #pragma once
    
    /// This is a dispatched service that handles published audit replies.
class OpenBSMConsumerRunner;
    
      // Assume the kernel extension is loaded, initialize the queue.
  // This will open the extension descriptor and synchronize queue data.
  // If any other daemons or osquery processes are using the queue this fails.
  try {
    WriteLock lock(mutex_);
    queue_ = new CQueue(kKernelDevice, kKernelQueueSize);
  } catch (const CQueueException &e) {
    queue_ = nullptr;
    return Status(1, e.what());
  }
    
      ASSERT_TRUE(status.ok());
  // Note: the time-parsing was removed to allow events to auto-assign.
  ASSERT_EQ(0U, ec->time);
  ASSERT_EQ('2016-03-22T21:17:01.701882+00:00', ec->fields.at('datetime'));
  ASSERT_EQ('vagrant-ubuntu-trusty-64', ec->fields.at('host'));
  ASSERT_EQ('6', ec->fields.at('severity'));
  ASSERT_EQ('cron', ec->fields.at('facility'));
  ASSERT_EQ('CRON[16538]', ec->fields.at('tag'));
  ASSERT_EQ('(root) CMD (   cd / && run-parts --report /etc/cron.hourly)',
            ec->fields.at('message'));
    
      // Specify the amount of iterations that should be run by this benchmark.
  // REQUIRES: 'n > 0' and `MinTime` has not been called on this benchmark.
  //
  // NOTE: This function should only be used when *exact* iteration control is
  //   needed and never to control or limit how long a benchmark runs, where
  // `--benchmark_min_time=N` or `MinTime(...)` should be used instead.
  Benchmark* Iterations(size_t n);
    
    Benchmark* Benchmark::Unit(TimeUnit unit) {
  time_unit_ = unit;
  return this;
}
    
    namespace benchmark {
// Parses 'str' for a 32-bit signed integer.  If successful, writes the result
// to *value and returns true; otherwise leaves *value unchanged and returns
// false.
bool ParseInt32(const std::string& src_text, const char* str, int32_t* value);
    }
    
    #include 'benchmark/benchmark.h'
#include 'complexity.h'
#include 'counter.h'
    
    double StatisticsMedian(const std::vector<double>& v) {
  if (v.size() < 3) return StatisticsMean(v);
  std::vector<double> partial;
  // we need roundDown(count/2)+1 slots
  partial.resize(1 + (v.size() / 2));
  std::partial_sort_copy(v.begin(), v.end(), partial.begin(), partial.end());
  // did we have odd number of samples?
  // if yes, then the last element of partially-sorted vector is the median
  // it no, then the average of the last two elements is the median
  if(v.size() % 2 == 1)
    return partial.back();
  return (partial[partial.size() - 2] + partial[partial.size() - 1]) / 2.0;
}
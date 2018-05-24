
        
        TESS_API void TESS_CALL TessBaseGetBlockTextOrientations(TessBaseAPI* handle, int** block_orientation, bool** vertical_writing)
{
    handle->GetBlockTextOrientations(block_orientation, vertical_writing);
}
    
    TessTsvRenderer::TessTsvRenderer(const char* outputbase, bool font_info)
    : TessResultRenderer(outputbase, 'tsv') {
  font_info_ = font_info;
}
    
      /**
   * Returns true if the iterator is at the start of an object at the given
   * level.
   *
   * For instance, suppose an iterator it is pointed to the first symbol of the
   * first word of the third line of the second paragraph of the first block in
   * a page, then:
   *   it.IsAtBeginningOf(RIL_BLOCK) = false
   *   it.IsAtBeginningOf(RIL_PARA) = false
   *   it.IsAtBeginningOf(RIL_TEXTLINE) = true
   *   it.IsAtBeginningOf(RIL_WORD) = true
   *   it.IsAtBeginningOf(RIL_SYMBOL) = true
   */
  virtual bool IsAtBeginningOf(PageIteratorLevel level) const;
    
    // Copies the bounding box from page_res_it->word() to the given TBOX.
bool read_t(PAGE_RES_IT *page_res_it, TBOX *tbox) {
  while (page_res_it->block() != nullptr && page_res_it->word() == nullptr)
    page_res_it->forward();
    }
    
      // Now paste the results together into core.
  if (suffix) {
    suffix->SetAllScriptPositions(trailing_pos);
    join_words(core, suffix, bb1);
  }
  if (prefix) {
    prefix->SetAllScriptPositions(leading_pos);
    join_words(prefix, core, bb0);
    core = prefix;
    prefix = nullptr;
  }
    
    double LLSQ::m() const {  // get gradient
  double covar = covariance();
  double x_var = x_variance();
  if (x_var != 0.0)
    return covar / x_var;
  else
    return 0.0;                    // too little
}
    
      /// Sets the non-blocking mode of the acceptor.
  /**
   * @param mode If @c true, the acceptor's synchronous operations will fail
   * with boost::asio::error::would_block if they are unable to perform the
   * requested operation immediately. If @c false, synchronous operations will
   * block until complete.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @note The non-blocking mode has no effect on the behaviour of asynchronous
   * operations. Asynchronous operations will never fail with the error
   * boost::asio::error::would_block.
   */
  void non_blocking(bool mode)
  {
    boost::system::error_code ec;
    this->get_service().non_blocking(this->get_implementation(), mode, ec);
    boost::asio::detail::throw_error(ec, 'non_blocking');
  }
    
    template <typename Key, typename Value>
tss_ptr<typename call_stack<Key, Value>::context>
call_stack<Key, Value>::top_;
    
    #ifndef BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP
#define BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP
    
    #if defined(BOOST_ASIO_HAS_STD_FUNCTION)
using std::function;
#else // defined(BOOST_ASIO_HAS_STD_FUNCTION)
using boost::function;
#endif // defined(BOOST_ASIO_HAS_STD_FUNCTION)
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    template <typename Handler>
inline void* allocate(std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  return ::operator new(s);
#else
  using boost::asio::asio_handler_allocate;
  return asio_handler_allocate(s, boost::asio::detail::addressof(h));
#endif
}
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
      errno = 0;
  int result = error_wrapper(::ioctl(d, cmd, arg), ec);
    
      // Start looping through starting at the first options
  // (so skip the exports)
  for (auto iter = line.begin() + options_index; iter != line.end(); ++iter) {
    if (iter->compare('-ro') == 0 || iter->compare('-o') == 0) {
      readonly = 1;
    }
  }
    
      // Get the hash value for the kernel's .text memory segment
  auto f2 = osquery::readFile(kKernelTextHashPath, content);
  if (f2.ok()) {
    boost::trim(content);
    text_segment_hash = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelTextHashPath;
    return results;
  }
    
    /**
 * @brief A utility class which is used to express the state of operations.
 *
 * @code{.cpp}
 *   osquery::Status foobar() {
 *     auto na = doSomeWork();
 *     if (na->itWorked()) {
 *       return osquery::Status(0, 'OK');
 *     } else {
 *       return osquery::Status(1, na->getErrorString());
 *     }
 *   }
 * @endcode
 */
class Status {
 public:
  /**
   * @brief Default constructor
   *
   * Note that the default constructor initialized an osquery::Status instance
   * to a state such that a successful operation is indicated.
   */
  explicit Status(int c = 0) : code_(c), message_('OK') {}
    }
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    class FilesystemConfigPlugin : public ConfigPlugin {
 public:
  Status genConfig(std::map<std::string, std::string>& config);
  Status genPack(const std::string& name,
                 const std::string& value,
                 std::string& pack);
};
    
        auto process = PlatformProcess::launchWorker(
        kProcessTestExecPath.c_str(),
        static_cast<int>(kExpectedWorkerArgsCount),
        &argv[0]);
    for (size_t i = 0; i < argv.size(); i++) {
      delete[] argv[i];
    }
    
    namespace osquery {
    }
    
    
    {
    {  // Set the time at now to 2.
  TablePlugin::kCacheStep = 2;
  test.testSetCache(TablePlugin::kCacheStep, TablePlugin::kCacheInterval);
  EXPECT_TRUE(test.testIsCached(5));
  // Now 6 is within the freshness of 2 + 5.
  EXPECT_TRUE(test.testIsCached(6));
  EXPECT_FALSE(test.testIsCached(7));
}
}

    
    
    { private:
  FRIEND_TEST(WatcherTests, test_watcher);
};
    
    #include <string>
    
    
    {  return std::string(buffer.data());
}
    
    
    {            _state = EXPECTS_CRASH_DUMP_CONTENT;
        } else if (EXPECTS_CRASH_DUMP == _state) {
            continue;
        }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    class Spy {
  public:
    Spy(void* _this): m_this(_this) {}
    virtual ~Spy() {}
    }
    
    #include 'comm/debugger/test_spy_sample.h'
#include 'comm/xlogger/xlogger.h'
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
/*
 * scop_jenv.h
 *
 *  Created on: 2012-8-21
 *      Author: yanguoyue
 */
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  const int exit_code_;
};
    
    // Finally, you can use INSTANTIATE_TEST_CASE_P to instantiate the test
// case with any set of parameters you want. Google Test defines a number
// of functions for generating test parameters. They return what we call
// (surprise!) parameter generators. Here is a  summary of them, which
// are all in the testing namespace:
//
//
//  Range(begin, end [, step]) - Yields values {begin, begin+step,
//                               begin+step+step, ...}. The values do not
//                               include end. step defaults to 1.
//  Values(v1, v2, ..., vN)    - Yields values {v1, v2, ..., vN}.
//  ValuesIn(container)        - Yields values from a C-style array, an STL
//  ValuesIn(begin,end)          container, or an iterator range [begin, end).
//  Bool()                     - Yields sequence {false, true}.
//  Combine(g1, g2, ..., gN)   - Yields all combinations (the Cartesian product
//                               for the math savvy) of the values generated
//                               by the N generators.
//
// For more details, see comments at the definitions of these functions below
// in this file.
//
// The following statement will instantiate tests from the FooTest test case
// each with parameter values 'meeny', 'miny', and 'moe'.
    
    // Helper function for printing a tuple.  T must be instantiated with
// a tuple type.
template <typename T>
void PrintTupleTo(const T& t, ::std::ostream* os) {
  *os << '(';
  TuplePrefixPrinter< ::std::tr1::tuple_size<T>::value>::
      PrintPrefixTo(t, os);
  *os << ')';
}
    
    // A set of macros for testing Google Test assertions or code that's expected
// to generate Google Test fatal failures.  It verifies that the given
// statement will cause exactly one fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_FATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_FATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - 'statement' cannot reference local non-static variables or
//     non-static members of the current object.
//   - 'statement' cannot return a value.
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  The AcceptsMacroThatExpandsToUnprotectedComma test in
// gtest_unittest.cc will fail to compile if we do that.
#define EXPECT_FATAL_FAILURE(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    #endif  // 0
    
      // Clears the results of all tests in this test case.
  void ClearResult();
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
};
    
    // This provides interface PrimeTable that determines whether a number is a
// prime and determines a next prime number. This interface is used
// in Google Test samples demonstrating use of parameterized tests.
    
    
// This sample shows how to write a more complex unit test for a class
// that has multiple member functions.
//
// Usually, it's a good idea to have one test for each method in your
// class.  You don't have to do that exactly, but it helps to keep
// your tests organized.  You may also throw in additional tests as
// needed.
    
    template <typename E>  // E is the element type.
class Queue {
 public:
  // Creates an empty queue.
  Queue() : head_(NULL), last_(NULL), size_(0) {}
    }
    
    ////////////////////           compressor         ///////////////////////
    
    
    {    // Restore the DX9 state
    d3d9_state_block->Apply();
    d3d9_state_block->Release();
}
    
        io.KeyMap[ImGuiKey_Tab] = s3eKeyTab;                     // Keyboard mapping. ImGui will use those indices to peek into the io.KeysDown[] array.
    io.KeyMap[ImGuiKey_LeftArrow] = s3eKeyLeft;
    io.KeyMap[ImGuiKey_RightArrow] = s3eKeyRight;
    io.KeyMap[ImGuiKey_UpArrow] = s3eKeyUp;
    io.KeyMap[ImGuiKey_DownArrow] = s3eKeyDown;
    io.KeyMap[ImGuiKey_PageUp] = s3eKeyPageUp;
    io.KeyMap[ImGuiKey_PageDown] = s3eKeyPageDown;
    io.KeyMap[ImGuiKey_Home] = s3eKeyHome;
    io.KeyMap[ImGuiKey_End] = s3eKeyEnd;
    io.KeyMap[ImGuiKey_Insert] = s3eKeyInsert;
    io.KeyMap[ImGuiKey_Delete] = s3eKeyDelete;
    io.KeyMap[ImGuiKey_Backspace] = s3eKeyBackspace;
    io.KeyMap[ImGuiKey_Space] = s3eKeySpace;
    io.KeyMap[ImGuiKey_Enter] = s3eKeyEnter;
    io.KeyMap[ImGuiKey_Escape] = s3eKeyEsc;
    io.KeyMap[ImGuiKey_A] = s3eKeyA;
    io.KeyMap[ImGuiKey_C] = s3eKeyC;
    io.KeyMap[ImGuiKey_V] = s3eKeyV;
    io.KeyMap[ImGuiKey_X] = s3eKeyX;
    io.KeyMap[ImGuiKey_Y] = s3eKeyY;
    io.KeyMap[ImGuiKey_Z] = s3eKeyZ;
    
        // Setup back-end capabilities flags
    g_hWnd = (HWND)hwnd;
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;         // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;          // We can honor io.WantSetMousePos requests (optional, rarely used)
    io.BackendPlatformName = 'imgui_impl_win32';
    io.ImeWindowHandle = hwnd;
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
        // Cleanup
    ImGui_ImplOpenGL2_Shutdown();
    ImGui_ImplFreeGLUT_Shutdown();
    ImGui::DestroyContext();
    
    DHTReplaceNodeTask::DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                                       const std::shared_ptr<DHTNode>& newNode)
    : bucket_(bucket),
      newNode_(newNode),
      numRetry_(0),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
    #endif // D_DHT_REPLACE_NODE_TASK_H

    
    const std::string DHTResponseMessage::R('r');
    
    std::shared_ptr<DHTBucket>
DHTRoutingTable::getBucketFor(const unsigned char* nodeID) const
{
  return dht::findBucketFor(root_.get(), nodeID);
}
    
      // localnode
  // 8bytes reserved
  readBytes(fp, buf, buf.size(), 8);
  // localnode ID
  readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
  auto localNode = std::make_shared<DHTNode>(buf);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
    #include 'DHTNode.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'util.h'
#include 'TimeA2.h'
#include 'fmt.h'
#include 'File.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
        dispatcher->setTimeout(std::chrono::seconds(messageTimeout));
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
      virtual std::shared_ptr<DHTTask>
  createPeerAnnounceTask(const unsigned char* infoHash) = 0;
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
      virtual void process() CXX11_OVERRIDE;
    
    const std::string DHTUnknownMessage::UNKNOWN('unknown');
    
    namespace aria2 {
    }
    
    bool DNSCache::CacheEntry::operator==(const CacheEntry& e) const
{
  return hostname_ == e.hostname_ && port_ == e.port_;
}
    
    void Ripple3D::setPosition(const Vec2& position)
{
    _position = position;
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCActionPageTurn3D.h'
#include '2d/CCGrid.h'
#include '2d/CCNodeGrid.h'
    
        /**
    @brief Get the amplitude rate of the effect.
    @return Return the amplitude rate of the effect.
    */
    float getAmplitudeRate() const { return _amplitudeRate; }
    /**
    @brief Set the amplitude rate of the effect.
    @param amplitudeRate The value of amplitude rate will be set.
    */
    void setAmplitudeRate(float amplitudeRate) { _amplitudeRate = amplitudeRate; }
    
        /** array of AnimationFrames. */
    Vector<AnimationFrame*> _frames;
    
    void AtlasNode::setColor(const Color3B& color3)
{
    Color3B tmp = color3;
    _colorUnmodified = color3;
    }
    
        
    // Overrides
    virtual void draw(Renderer *renderer, const Mat4 &transform, uint32_t flags) override;
    virtual Texture2D* getTexture() const override;
    virtual void setTexture(Texture2D *texture) override;
    virtual bool isOpacityModifyRGB() const override;
    virtual void setOpacityModifyRGB(bool isOpacityModifyRGB) override;
    virtual const Color3B& getColor(void) const override;
    virtual void setColor(const Color3B& color) override;
    virtual void setOpacity(GLubyte opacity) override;
    /**
    * @code
    * When this function bound into js or lua,the parameter will be changed
    * In js: var setBlendFunc(var src, var dst)
    * @endcode
    * @lua NA
    */
    virtual void setBlendFunc(const BlendFunc& blendFunc) override;
    /**
    * @lua NA
    */
    virtual const BlendFunc& getBlendFunc() const override;
    
    void PolygonInfo::releaseVertsAndIndices()
{
    if(_isVertsOwner)
    {
        if(nullptr != triangles.verts)
        {
            CC_SAFE_DELETE_ARRAY(triangles.verts);
        }
        
        if(nullptr != triangles.indices)
        {
            CC_SAFE_DELETE_ARRAY(triangles.indices);
        }
    }
}
    
      // Specify if each repetition of the benchmark should be reported separately
  // or if only the final statistics should be reported. If the benchmark
  // is not repeated then the single result is always reported.
  Benchmark* ReportAggregatesOnly(bool value = true);
    
    #endif  // BENCHMARK_ARRAYSIZE_H_

    
      bool term_supports_color = false;
  for (const char* candidate : SUPPORTED_TERM_VALUES) {
    if (term && 0 == strcmp(term, candidate)) {
      term_supports_color = true;
      break;
    }
  }
    
    
    {}  // end namespace benchmark

    
      void removeThread() EXCLUDES(lock_) {
    MutexLock ml(lock_);
    --running_threads_;
    if (entered_ != 0) phase_condition_.notify_all();
  }
    
    BenchmarkReporter::~BenchmarkReporter() {}
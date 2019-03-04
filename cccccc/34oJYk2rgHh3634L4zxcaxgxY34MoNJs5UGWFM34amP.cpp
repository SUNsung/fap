
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {}  // end namespace tensorflow
    
    Safe_TF_TensorPtr make_safe(TF_Tensor* tensor) {
  return Safe_TF_TensorPtr(tensor);
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    port::StatusOr<StreamExecutor*> ExecutorCache::GetOrCreate(
    const StreamExecutorConfig& config,
    const std::function<ExecutorFactory>& factory) {
  // In the fast path case, the cache already has an entry and we can just
  // return after Get() which only takes a shared lock and not a unique lock.
  // If we need to create, we take a unique lock on cache_.
  auto fast_result = Get(config);
  if (fast_result.ok()) {
    return fast_result;
  }
    }
    
    
    {    // Vector of cached {config, executor} pairs.
    std::vector<
        std::pair<StreamExecutorConfig, std::unique_ptr<StreamExecutor>>>
        configurations GUARDED_BY(configurations_mutex);
  };
    
     private:
  // Replaces multiple consecutive separators with a single separator.
  // For example, 'bar///foo' becomes 'bar/foo'. Does not eliminate other
  // redundancies that might be in a pathname involving '.' or '..'.
  //
  // A pathname with multiple consecutive separators may occur either through
  // user error or as a result of some scripts or APIs that generate a pathname
  // with a trailing separator. On other platforms the same API or script
  // may NOT generate a pathname with a trailing '/'. Then elsewhere that
  // pathname may have another '/' and pathname components added to it,
  // without checking for the separator already being there.
  // The script language and operating system may allow paths like 'foo//bar'
  // but some of the functions in FilePath will not handle that correctly. In
  // particular, RemoveTrailingPathSeparator() only removes one separator, and
  // it is called in CreateDirectoriesRecursively() assuming that it will change
  // a pathname from directory syntax (trailing separator) to filename syntax.
  //
  // On Windows this method also replaces the alternate path separator '/' with
  // the primary path separator '\\', so that for example 'bar\\/\\foo' becomes
  // 'bar\\foo'.
    
      // Compares two wide C strings.  Returns true iff they have the same
  // content.
  //
  // Unlike wcscmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool WideCStringEquals(const wchar_t* lhs, const wchar_t* rhs);
    
    // Implementation #2 pre-calculates the primes and stores the result
// in an array.
class PreCalculatedPrimeTable : public PrimeTable {
 public:
  // 'max' specifies the maximum number the prime table holds.
  explicit PreCalculatedPrimeTable(int max)
      : is_prime_size_(max + 1), is_prime_(new bool[max + 1]) {
    CalculatePrimesUpTo(max);
  }
  virtual ~PreCalculatedPrimeTable() { delete[] is_prime_; }
    }
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
        size_t* it = begin;
    for (bst_omp_uint tid = 0; tid < nthread; ++tid) {
      std::copy(row_split_tloc[tid].left.begin(), row_split_tloc[tid].left.end(), it);
      it += row_split_tloc[tid].left.size();
    }
    size_t* split_pt = it;
    for (bst_omp_uint tid = 0; tid < nthread; ++tid) {
      std::copy(row_split_tloc[tid].right.begin(), row_split_tloc[tid].right.end(), it);
      it += row_split_tloc[tid].right.size();
    }
    
    #endif  // DMLC_ENABLE_STD_THREAD

    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    
    {  /*!
   * \brief transform prediction values, this is only called when Eval is called,
   *  usually it redirect to PredTransform
   * \param io_preds prediction values, saves to this vector as well
   */
  virtual void EvalTransform(HostDeviceVector<bst_float> *io_preds) {
    this->PredTransform(io_preds);
  }
  /*!
   * \brief transform probability value back to margin
   * this is used to transform user-set base_score back to margin
   * used by gradient boosting
   * \return transformed value
   */
  virtual bst_float ProbToMargin(bst_float base_score) const {
    return base_score;
  }
  /*!
   * \brief Create an objective function according to name.
   * \param name Name of the objective.
   */
  static ObjFunction* Create(const std::string& name);
};
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    
    {    glutSwapBuffers();
    glutPostRedisplay();
}
    
    void ImGui_ImplFreeGLUT_KeyboardUpFunc(unsigned char c, int x, int y)
{
    //printf('char_up_func %d '%c'\n', c, c);
    ImGuiIO& io = ImGui::GetIO();
    if (c >= 1 && c <= 26)
        io.KeysDown[c] = io.KeysDown[c - 1 + 'a'] = io.KeysDown[c - 1 + 'A'] = false;
    else if (c >= 'a' && c <= 'z')
        io.KeysDown[c] = io.KeysDown[c - 'a' + 'A'] = false;
    else if (c >= 'A' && c <= 'Z')
        io.KeysDown[c] = io.KeysDown[c - 'A' + 'a'] = false;
    else
        io.KeysDown[c] = false;
    ImGui_ImplFreeGLUT_UpdateKeyboardMods();
    (void)x; (void)y; // Unused
}
    
            VkSubmitInfo end_info = {};
        end_info.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
        end_info.commandBufferCount = 1;
        end_info.pCommandBuffers = &command_buffer;
        err = vkEndCommandBuffer(command_buffer);
        check_vk_result(err);
        err = vkQueueSubmit(g_Queue, 1, &end_info, VK_NULL_HANDLE);
        check_vk_result(err);
    
    
    {};
    
    
ExtensionException::~ExtensionException() throw() {
}
    
      for (const auto& iter : line) {
    options_index++;
    if (iter[0] == '/') {
      line_exports.push_back(iter);
    } else {
      break;
    }
  }
    
      /* Parse the input line into tokens.
   */
  while ((zLine[i] != 0) && nArg < ArraySize(azArg)) {
    while (IsSpace(zLine[i])) {
      i++;
    }
    if (zLine[i] == 0) {
      break;
    }
    if (zLine[i] == '\'' || zLine[i] == ''') {
      int delim = zLine[i++];
      azArg[nArg++] = &zLine[i];
      while ((zLine[i] != 0) && zLine[i] != delim) {
        if (zLine[i] == '\\' && delim == ''' && zLine[i + 1] != 0) {
          i++;
        }
        i++;
      }
      if (zLine[i] == delim) {
        zLine[i++] = 0;
      }
      if (delim == ''') {
        resolve_backslashes(azArg[nArg - 1]);
      }
    } else {
      azArg[nArg++] = &zLine[i];
      while ((zLine[i] != 0) && !IsSpace(zLine[i])) {
        i++;
      }
      if (zLine[i] != 0) {
        zLine[i++] = 0;
      }
      resolve_backslashes(azArg[nArg - 1]);
    }
  }
    
      // Join results..
  for (auto& entry : hw_info) {
    bool matched = false;
    for (auto& row : results) {
      auto serial = row.find('serial_number');
      if (serial == row.end()) {
        continue;
      }
    }
    }
    
    #pragma once
    
     private:
  explicit PerfOutput() = default;
  ExpectedSuccess<PerfOutputError> unload();
    
    Expected<int, PosixError> syscall(struct perf_event_attr* attr,
                                  pid_t pid,
                                  int cpu,
                                  int group_fd,
                                  unsigned long const flags);
    
    
    {  // to prevent closing non existing file descriptor
  to_obj.fd_ = -1;
}
    
    #include <osquery/utils/expected/expected.h>
    
    boost::optional<Event> EnterExitJoiner::join(Event in_event) {
  ++counter_;
  if (counter_ > kCounterLimit) {
    drop_stuck_events();
    counter_ = 0;
  }
  auto const inv_key =
      createKey(flipEventType(in_event.type), in_event.pid, in_event.tgid);
    }
    
    constexpr bool isEventTypeEnter(EventType const type) noexcept {
  return 0 < static_cast<std::underlying_type<EventType>::type>(type);
}
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
      uint64_t sleep_debt = 0;
  uint64_t time_since_last_refill = 0;
  if (last_refill_time_ != 0) {
    if (last_refill_time_ > time_now) {
      sleep_debt = last_refill_time_ - time_now;
    } else {
      time_since_last_refill = time_now - last_refill_time_;
      bytes_left_ +=
          static_cast<uint64_t>(static_cast<double>(time_since_last_refill) /
                                kMicrosPerSecond * delayed_write_rate_);
      if (time_since_last_refill >= kRefillInterval &&
          bytes_left_ > num_bytes) {
        // If refill interval already passed and we have enough bytes
        // return without extra sleeping.
        last_refill_time_ = time_now;
        bytes_left_ -= num_bytes;
        return 0;
      }
    }
  }
    
      // open DB with two column families
  std::vector<ColumnFamilyDescriptor> column_families;
  // have to open default column family
  column_families.push_back(ColumnFamilyDescriptor(
      kDefaultColumnFamilyName, ColumnFamilyOptions()));
  // open the new one, too
  column_families.push_back(ColumnFamilyDescriptor(
      'new_cf', ColumnFamilyOptions()));
  std::vector<ColumnFamilyHandle*> handles;
  s = DB::Open(DBOptions(), kDBPath, column_families, &handles, &db);
  assert(s.ok());
    
    // This is an example interface of external-compaction algorithm.
// Compaction algorithm can be implemented outside the core-RocksDB
// code by using the pluggable compaction APIs that RocksDb provides.
class Compactor : public EventListener {
 public:
  // Picks and returns a compaction task given the specified DB
  // and column family.  It is the caller's responsibility to
  // destroy the returned CompactionTask.  Returns 'nullptr'
  // if it cannot find a proper compaction task.
  virtual CompactionTask* PickCompaction(
      DB* db, const std::string& cf_name) = 0;
    }
    
    
    {  // Cleanup
  delete txn_db;
  DestroyDB(kDBPath, options);
  return 0;
}
    
    #include <string>
    
    namespace rocksdb {
namespace experimental {
    }
    }
    
    #include <stdint.h>
#include <memory>
#include <string>
    
    
    {}  // namespace rocksdb

    
    bool Follow::initWithTarget(Node *followedNode, const Rect& rect /*= Rect::ZERO*/){
    
    return initWithTargetAndOffset(followedNode, 0.0, 0.0,rect);
    
}
void Follow::step(float /*dt*/)
{
    if(_boundarySet)
    {
        // whole map fits inside a single screen, no need to modify the position - unless map boundaries are increased
        if(_boundaryFullyCovered)
        {
            return;
        }
    }
    }
    
    protected:
    float _to;
    float _from;
    
     @since v0.99.2
 */
class CC_DLL ActionTween : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes the action with the property name (key), and the from and to parameters.
     * @param duration The duration of the ActionTween. It's a value in seconds.
     * @param key The key of property which should be updated.
     * @param from The value of the specified property when the action begin.
     * @param to The value of the specified property when the action end.
     * @return If the creation success, return a pointer of ActionTween; otherwise, return nil.
     */
    static ActionTween* create(float duration, const std::string& key, float from, float to);
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        /* Creates an animation with an array of AnimationFrame, the delay per units in seconds and how many times it should be executed.
     * @since v2.0
     * @param arrayOfAnimationFrameNames An animation with an array of AnimationFrame.
     * @param delayPerUnit The delay per units in seconds and how many times it should be executed.
     * @param loops The times the animation is going to loop.
     */
    static Animation* create(const Vector<AnimationFrame*>& arrayOfAnimationFrameNames, float delayPerUnit, unsigned int loops = 1);
    
    unsigned int AutoPolygon::getSquareValue(unsigned int x, unsigned int y, const Rect& rect, float threshold)
{
    /*
     checking the 2x2 pixel grid, assigning these values to each pixel, if not transparent
     +---+---+
     | 1 | 2 |
     +---+---+
     | 4 | 8 | <- current pixel (curx,cury)
     +---+---+
     */
    unsigned int sv = 0;
    //NOTE: due to the way we pick points from texture, rect needs to be smaller, otherwise it goes outside 1 pixel
    auto fixedRect = Rect(rect.origin, rect.size-Size(2,2));
    
    Vec2 tl = Vec2(x-1, y-1);
    sv += (fixedRect.containsPoint(tl) && getAlphaByPos(tl) > threshold)? 1 : 0;
    Vec2 tr = Vec2(x, y-1);
    sv += (fixedRect.containsPoint(tr) && getAlphaByPos(tr) > threshold)? 2 : 0;
    Vec2 bl = Vec2(x-1, y);
    sv += (fixedRect.containsPoint(bl) && getAlphaByPos(bl) > threshold)? 4 : 0;
    Vec2 br = Vec2(x, y);
    sv += (fixedRect.containsPoint(br) && getAlphaByPos(br) > threshold)? 8 : 0;
    CCASSERT(sv != 0 && sv != 15, 'square value should not be 0, or 15');
    return sv;
}
    
    protected:
    bool _isVertsOwner;
    Rect _rect;
    std::string _filename;

        
        
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
     private:
  void SetText(std::string& text);
  std::string GetText();
  void Clear();
    
    
    {}
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta);
    
    TEST(FormatTest, InternalKey_EncodeDecode) {
  const char* keys[] = { '', 'k', 'hello', 'longggggggggggggggggggggg' };
  const uint64_t seq[] = {
    1, 2, 3,
    (1ull << 8) - 1, 1ull << 8, (1ull << 8) + 1,
    (1ull << 16) - 1, 1ull << 16, (1ull << 16) + 1,
    (1ull << 32) - 1, 1ull << 32, (1ull << 32) + 1
  };
  for (int k = 0; k < sizeof(keys) / sizeof(keys[0]); k++) {
    for (int s = 0; s < sizeof(seq) / sizeof(seq[0]); s++) {
      TestKey(keys[k], seq[s], kTypeValue);
      TestKey('hello', 1, kTypeDeletion);
    }
  }
}
    
    bool GuessType(const std::string& fname, FileType* type) {
  size_t pos = fname.rfind('/');
  std::string basename;
  if (pos == std::string::npos) {
    basename = fname;
  } else {
    basename = std::string(fname.data() + pos + 1, fname.size() - pos - 1);
  }
  uint64_t ignored;
  return ParseFileName(basename, &ignored, type);
}
    
    std::string LogFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'log');
}
    
    void Reader::ReportDrop(uint64_t bytes, const Status& reason) {
  if (reporter_ != nullptr &&
      end_of_buffer_offset_ - buffer_.size() - bytes >= initial_offset_) {
    reporter_->Corruption(static_cast<size_t>(bytes), reason);
  }
}
    
    size_t MemTable::ApproximateMemoryUsage() { return arena_.MemoryUsage(); }
    
    static void RunConcurrent(int run) {
  const int seed = test::RandomSeed() + (run * 100);
  Random rnd(seed);
  const int N = 1000;
  const int kSize = 1000;
  for (int i = 0; i < N; i++) {
    if ((i % 100) == 0) {
      fprintf(stderr, 'Run %d of %d\n', i, N);
    }
    TestState state(seed + 1);
    Env::Default()->Schedule(ConcurrentReader, &state);
    state.Wait(TestState::RUNNING);
    for (int i = 0; i < kSize; i++) {
      state.t_.WriteStep(&rnd);
    }
    state.quit_flag_.Release_Store(&state);  // Any non-null arg will do
    state.Wait(TestState::DONE);
  }
}
    
    CatmullRomTo* CatmullRomTo::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) CatmullRomTo();
    a->initWithDuration(this->_duration, this->_points->clone());
    a->autorelease();
    return a;
}
    
    
    {    return action;
}
    
    /** @class ToggleVisibility
* @brief Toggles the visibility of a node.
*/
class CC_DLL ToggleVisibility : public ActionInstant
{
public:
    /** Allocates and initializes the action.
     *
     * @return An autoreleased ToggleVisibility object.
     */
    static ToggleVisibility * create();
    }
    
        /**
    @brief Create an action with duration, grid size.
    @param duration Specify the duration of the PageTurn3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @return If the creation success, return a pointer of PageTurn3D action; otherwise, return nil.
    */
    static PageTurn3D* create(float duration, const Size& gridSize);
    
    ShuffleTiles* ShuffleTiles::clone() const
{
    // no copy constructor
    return ShuffleTiles::create(_duration, _gridSize, _seed);
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CCACTIONTWEEN_H__
#define __CCACTIONTWEEN_H__
    
    
    {    /** how many times the animation is going to loop. 0 means animation is not animated. 1, animation is executed one time, ... */
    unsigned int _loops;
    
private:
    CC_DISALLOW_COPY_AND_ASSIGN(Animation);
};
    
    
class Animation;
    
    DEFINE_string(benchmark_color, 'auto',
              'Whether to use colors in the output.  Valid values: '
              ''true'/'yes'/1, 'false'/'no'/0, and 'auto'. 'auto' means to use '
              'colors if the output is being sent to a terminal and the TERM '
              'environment variable is set to a terminal type that supports '
              'colors.');
    
    #define CHECK_FLOAT_EQ(a, b, eps) CHECK(std::fabs((a) - (b)) <  (eps))
#define CHECK_FLOAT_NE(a, b, eps) CHECK(std::fabs((a) - (b)) >= (eps))
#define CHECK_FLOAT_GE(a, b, eps) CHECK((a) - (b) > -(eps))
#define CHECK_FLOAT_LE(a, b, eps) CHECK((b) - (a) > -(eps))
#define CHECK_FLOAT_GT(a, b, eps) CHECK((a) - (b) >  (eps))
#define CHECK_FLOAT_LT(a, b, eps) CHECK((b) - (a) >  (eps))
    
    PlatformColorCode GetPlatformColorCode(LogColor color) {
#ifdef BENCHMARK_OS_WINDOWS
  switch (color) {
    case COLOR_RED:
      return FOREGROUND_RED;
    case COLOR_GREEN:
      return FOREGROUND_GREEN;
    case COLOR_YELLOW:
      return FOREGROUND_RED | FOREGROUND_GREEN;
    case COLOR_BLUE:
      return FOREGROUND_BLUE;
    case COLOR_MAGENTA:
      return FOREGROUND_BLUE | FOREGROUND_RED;
    case COLOR_CYAN:
      return FOREGROUND_BLUE | FOREGROUND_GREEN;
    case COLOR_WHITE:  // fall through to default
    default:
      return 0;
  }
#else
  switch (color) {
    case COLOR_RED:
      return '1';
    case COLOR_GREEN:
      return '2';
    case COLOR_YELLOW:
      return '3';
    case COLOR_BLUE:
      return '4';
    case COLOR_MAGENTA:
      return '5';
    case COLOR_CYAN:
      return '6';
    case COLOR_WHITE:
      return '7';
    default:
      return nullptr;
  };
#endif
}
    
    // Returns true if stdout appears to be a terminal that supports colored
// output, false otherwise.
bool IsColorTerminal();
    
    // Reads and returns the Boolean environment variable corresponding to
// the given flag; if it's not set, returns default_value.
//
// The value is considered true iff it's not '0'.
bool BoolFromEnv(const char* flag, bool default_value) {
  const std::string env_var = FlagToEnvVar(flag);
  const char* const string_value = getenv(env_var.c_str());
  return string_value == nullptr ? default_value
                                 : strcmp(string_value, '0') != 0;
}
    
    #ifndef BENCHMARK_CYCLECLOCK_H_
#define BENCHMARK_CYCLECLOCK_H_
    
    #define RELEASE(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(release_capability(__VA_ARGS__))
    
    #include 'sleep.h'
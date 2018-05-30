
        
        class NwCurrentWindowInternalRequestAttentionInternalFunction : public AsyncExtensionFunction {
 public:
  NwCurrentWindowInternalRequestAttentionInternalFunction(){}
    }
    
    void NwCurrentWindowInternalCapturePageInternalFunction::CopyFromBackingStoreComplete(
    const SkBitmap& bitmap) {
  if (!bitmap.drawsNothing()) {
    OnCaptureSuccess(bitmap);
    return;
  }
  OnCaptureFailure(FAILURE_REASON_UNKNOWN);
}
    
      // Try to close all windows (then will cause whole app to quit).
  static void CloseAllWindows(bool force = false, bool quit = false);
    
    #ifndef CONTENT_NW_SRC_API_BASE_BASE_H_
#define CONTENT_NW_SRC_API_BASE_BASE_H_
    
    
    {}  // namespace remote
    
    #ifndef CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
#define CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
    void Menu::Popup(int x, int y, content::RenderFrameHost* rfh) {
  // Rebuild();
    }
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    namespace sz {
  constexpr int nosize = 0;
  constexpr int byte  = 1;
  constexpr int word  = 2;
  constexpr int dword = 4;
  constexpr int qword = 8;
}
    
    #ifdef _MSC_VER
    
    #ifndef incl_HPHP_UTIL_EMBEDDED_DATA_H_
#define incl_HPHP_UTIL_EMBEDDED_DATA_H_
    
    CURLcode CurlShareResource::attachToCurlHandle(CURL *cp) {
  return curl_easy_setopt(cp, CURLOPT_SHARE, m_share);
}
    
    ///////////////////////////////////////////////////////////////////////////////
    
    class LogTest {
 private:
  class StringDest : public WritableFile {
   public:
    std::string contents_;
    }
    }
    
    #include 'db/version_edit.h'
#include 'util/testharness.h'
    
    namespace {
    }
    
    namespace leveldb {
    }
    
    Slice BlockBuilder::Finish() {
  // Append restart array
  for (size_t i = 0; i < restarts_.size(); i++) {
    PutFixed32(&buffer_, restarts_[i]);
  }
  PutFixed32(&buffer_, restarts_.size());
  finished_ = true;
  return Slice(buffer_);
}
    
    #include <stddef.h>
#include <stdint.h>
#include <string>
#include <vector>
#include 'leveldb/slice.h'
#include 'util/hash.h'
    
    TEST(FilterBlockTest, SingleChunk) {
  FilterBlockBuilder builder(&policy_);
  builder.StartBlock(100);
  builder.AddKey('foo');
  builder.AddKey('bar');
  builder.AddKey('box');
  builder.StartBlock(200);
  builder.AddKey('box');
  builder.StartBlock(300);
  builder.AddKey('hello');
  Slice block = builder.Finish();
  FilterBlockReader reader(&policy_, block);
  ASSERT_TRUE(reader.KeyMayMatch(100, 'foo'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'bar'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'box'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'hello'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(100, 'missing'));
  ASSERT_TRUE(! reader.KeyMayMatch(100, 'other'));
}
    
    TEST(BloomTest, EmptyFilter) {
  ASSERT_TRUE(! Matches('hello'));
  ASSERT_TRUE(! Matches('world'));
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
    
    void DBIter::FindNextUserEntry(bool skipping, std::string* skip) {
  // Loop until we hit an acceptable entry to yield
  assert(iter_->Valid());
  assert(direction_ == kForward);
  do {
    ParsedInternalKey ikey;
    if (ParseKey(&ikey) && ikey.sequence <= sequence_) {
      switch (ikey.type) {
        case kTypeDeletion:
          // Arrange to skip all upcoming entries for this key since
          // they are hidden by this deletion.
          SaveKey(ikey.user_key, skip);
          skipping = true;
          break;
        case kTypeValue:
          if (skipping &&
              user_comparator_->Compare(ikey.user_key, *skip) <= 0) {
            // Entry hidden
          } else {
            valid_ = true;
            saved_key_.clear();
            return;
          }
          break;
      }
    }
    iter_->Next();
  } while (iter_->Valid());
  saved_key_.clear();
  valid_ = false;
}
    
    int main(int argc, char** argv) {
  leveldb::Env* env = leveldb::Env::Default();
  bool ok = true;
  if (argc < 2) {
    Usage();
    ok = false;
  } else {
    std::string command = argv[1];
    if (command == 'dump') {
      ok = leveldb::HandleDumpCommand(env, argv+2, argc-2);
    } else {
      Usage();
      ok = false;
    }
  }
  return (ok ? 0 : 1);
}

    
      // Create a writer that will append data to '*dest'.
  // '*dest' must have initial length 'dest_length'.
  // '*dest' must remain live while this Writer is in use.
  Writer(WritableFile* dest, uint64_t dest_length);
    
    
    {  // Do the actual downsampling (averaging) and forward-DCT.
  if (cfg.u_factor_x != 1 || cfg.u_factor_y != 1) {
    SetDownsampledCoefficients(yuv[1], cfg.u_factor_x, cfg.u_factor_y,
                               &components_[1]);
  }
  if (cfg.v_factor_x != 1 || cfg.v_factor_y != 1) {
    SetDownsampledCoefficients(yuv[2], cfg.v_factor_x, cfg.v_factor_y,
                               &components_[2]);
  }
}
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    namespace {
    }
    
    int BuildJpegHuffmanTable(const int* count_in, const int* symbols,
                          HuffmanTableEntry* lut) {
  HuffmanTableEntry code;    // current table entry
  HuffmanTableEntry* table;  // next available space in table
  int len;         // current code length
  int idx;         // symbol index
  int key;         // prefix code
  int reps;        // number of replicate key values in current table
  int low;         // low bits for current root entry
  int table_bits;  // key length of current table
  int table_size;  // size of current table
  int total_size;  // sum of root table size and 2nd level table sizes
    }
    
    #include 'guetzli/quality.h'
    
    	ScopedJstring log_dir_jstr(env, _log_dir);
	ScopedJstring nameprefix_jstr(env, _nameprefix);
	appender_open_with_cache((TAppenderMode)mode, cache_dir.c_str(), log_dir_jstr.GetChar(), nameprefix_jstr.GetChar(), pubkey);
	xlogger_SetLevel((TLogLevel)level);
    
    struct DNSBreaker {
	DNSBreaker(): isbreak(false), dnsstatus(NULL) {}
	bool isbreak;
	int* dnsstatus;
};
    
    WakeUpLock::~WakeUpLock() {
    ASSERT(object_);
    xinfo2('delete wakeuplock:%p', object_);
    }
    
    
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    //
//  testspy_spy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-13.
//
    
    TEST_F(YogaTest_HadOverflowTests, hadOverflow_gets_reset_if_not_logger_valid) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 10);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeInsertChild(root, child1, 1);
    }
    
        method(setPositionType);
    method(setPosition);
    method(setPositionPercent);
    
    namespace facebook {
namespace alog {
    }
    }
    
    namespace facebook {
    }
    
      const char* functionName() const { return m_functionName; }
  const char* fileName() const { return m_fileName; }
  int lineNumber() const { return m_lineNumber; }
    
    // Class that lets you declare a global but does not add a static constructor
// to the binary. Eventually I'd like to have this auto-initialize in a
// multithreaded environment but for now it's easiest just to use manual
// initialization.
template <typename T>
class StaticInitialized {
public:
  constexpr StaticInitialized() :
    m_instance(nullptr)
  {}
    }
    
    #if ENABLE_FBASSERT
#define FBASSERTMSGF(expr, msg, ...) !(expr) ? facebook::assertInternal('Assert (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__) : (void) 0
#else
#define FBASSERTMSGF(expr, msg, ...)
#endif // ENABLE_FBASSERT
    
    DEFINE_BOXED_PRIMITIVE(boolean, Boolean)
DEFINE_BOXED_PRIMITIVE(byte, Byte)
DEFINE_BOXED_PRIMITIVE(char, Character)
DEFINE_BOXED_PRIMITIVE(short, Short)
DEFINE_BOXED_PRIMITIVE(int, Integer)
DEFINE_BOXED_PRIMITIVE(long, Long)
DEFINE_BOXED_PRIMITIVE(float, Float)
DEFINE_BOXED_PRIMITIVE(double, Double)
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
#include <dlfcn.h>
    
    
    {} // namespace fuzzer
    
    #endif // LIBFUZZER_WINDOWS

    
    
    {  // Restore the signal handlers of the current process when the last thread
  // using this function finishes.
  {
    std::lock_guard<std::mutex> Lock(SignalMutex);
    --ActiveThreadCount;
    if (ActiveThreadCount == 0) {
      bool FailedRestore = false;
      if (sigaction(SIGINT, &OldSigIntAction, NULL) == -1) {
        Printf('Failed to restore SIGINT handling\n');
        FailedRestore = true;
      }
      if (sigaction(SIGQUIT, &OldSigQuitAction, NULL) == -1) {
        Printf('Failed to restore SIGQUIT handling\n');
        FailedRestore = true;
      }
      if (sigprocmask(SIG_BLOCK, &OldBlockedSignalsSet, NULL) == -1) {
        Printf('Failed to unblock SIGCHLD\n');
        FailedRestore = true;
      }
      if (FailedRestore)
        ProcessStatus = -1;
    }
  }
  return ProcessStatus;
}
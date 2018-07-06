
        
        
    
    
    {  RenderView* render_view = RenderView::FromWebView(view);
  return render_view;
}
    
    #include 'base/compiler_specific.h'
#include 'content/nw/src/api/base/base.h'
    
    
    {
    {    // build keyboard code
    ui::DomCode domCode = ui::KeycodeConverter::CodeStringToDomCode(keyName.c_str());
    retval = ui::DomCodeToUsLayoutKeyboardCode(domCode);
  }
  return retval;
}
    
    

    
    bool NwClipboardSetListSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  std::unique_ptr<SetListSync::Params> params(SetListSync::Params::Create(*args_));
  EXTENSION_FUNCTION_VALIDATE(params.get());
  std::unique_ptr<ClipboardWriter> writer(new ClipboardWriter());
    }
    
    namespace extensions {
    }
    
    #include <vector>
    
    // Here's what happens when an ASSERT_DEATH* or EXPECT_DEATH* is
// executed:
//
//   1. It generates a warning if there is more than one active
//   thread.  This is because it's safe to fork() or clone() only
//   when there is a single thread.
//
//   2. The parent process clone()s a sub-process and runs the death
//   test in it; the sub-process exits with code 0 at the end of the
//   death test, if it hasn't exited already.
//
//   3. The parent process waits for the sub-process to terminate.
//
//   4. The parent process checks the exit code and error message of
//   the sub-process.
//
// Examples:
//
//   ASSERT_DEATH(server.SendMessage(56, 'Hello'), 'Invalid port number');
//   for (int i = 0; i < 5; i++) {
//     EXPECT_DEATH(server.ProcessRequest(i),
//                  'Invalid request .* in ProcessRequest()')
//                  << 'Failed to die on request ' << i;
//   }
//
//   ASSERT_EXIT(server.ExitNow(), ::testing::ExitedWithCode(0), 'Exiting');
//
//   bool KilledBySIGHUP(int exit_code) {
//     return WIFSIGNALED(exit_code) && WTERMSIG(exit_code) == SIGHUP;
//   }
//
//   ASSERT_EXIT(client.HangUpServer(), KilledBySIGHUP, 'Hanging up!');
//
// On the regular expressions used in death tests:
//
//   On POSIX-compliant systems (*nix), we use the <regex.h> library,
//   which uses the POSIX extended regex syntax.
//
//   On other platforms (e.g. Windows), we only support a simple regex
//   syntax implemented as part of Google Test.  This limited
//   implementation should be enough most of the time when writing
//   death tests; though it lacks many features you can find in PCRE
//   or POSIX extended regex syntax.  For example, we don't support
//   union ('x|y'), grouping ('(xy)'), brackets ('[xy]'), and
//   repetition count ('x{5,7}'), among others.
//
//   Below is the syntax that we do support.  We chose it to be a
//   subset of both PCRE and POSIX extended regex, so it's easy to
//   learn wherever you come from.  In the following: 'A' denotes a
//   literal character, period (.), or a single \\ escape sequence;
//   'x' and 'y' denote regular expressions; 'm' and 'n' are for
//   natural numbers.
//
//     c     matches any literal character c
//     \\d   matches any decimal digit
//     \\D   matches any character that's not a decimal digit
//     \\f   matches \f
//     \\n   matches \n
//     \\r   matches \r
//     \\s   matches any ASCII whitespace, including \n
//     \\S   matches any character that's not a whitespace
//     \\t   matches \t
//     \\v   matches \v
//     \\w   matches any letter, _, or decimal digit
//     \\W   matches any character that \\w doesn't match
//     \\c   matches any literal character c, which must be a punctuation
//     .     matches any single character except \n
//     A?    matches 0 or 1 occurrences of A
//     A*    matches 0 or many occurrences of A
//     A+    matches 1 or many occurrences of A
//     ^     matches the beginning of a string (not that of each line)
//     $     matches the end of a string (not that of each line)
//     xy    matches x followed by y
//
//   If you accidentally use PCRE or POSIX extended regex features
//   not implemented by us, you will get a run-time failure.  In that
//   case, please try to rewrite your regular expression within the
//   above syntax.
//
//   This implementation is *not* meant to be as highly tuned or robust
//   as a compiled regex library, but should perform well enough for a
//   death test, which already incurs significant overhead by launching
//   a child process.
//
// Known caveats:
//
//   A 'threadsafe' style death test obtains the path to the test
//   program from argv[0] and re-executes it in the sub-process.  For
//   simplicity, the current implementation doesn't search the PATH
//   when launching the sub-process.  This means that the user must
//   invoke the test program via a path that contains at least one
//   path separator (e.g. path/to/foo_test and
//   /absolute/path/to/bar_test are fine, but foo_test is not).  This
//   is rarely a problem as people usually don't put the test binary
//   directory in PATH.
//
// TODO(wan@google.com): make thread-safe death tests search the PATH.
    
    #if GTEST_HAS_STD_WSTRING
template <>
class UniversalTersePrinter<const wchar_t*> {
 public:
  static void Print(const wchar_t* str, ::std::ostream* os) {
    if (str == NULL) {
      *os << 'NULL';
    } else {
      UniversalPrint(::std::wstring(str), os);
    }
  }
};
#endif
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(TestPartResultArray);
};
    
    // Helper function for implementing {EXPECT|ASSERT}_PRED5.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2,
          typename T3,
          typename T4,
          typename T5>
AssertionResult AssertPred5Helper(const char* pred_text,
                                  const char* e1,
                                  const char* e2,
                                  const char* e3,
                                  const char* e4,
                                  const char* e5,
                                  Pred pred,
                                  const T1& v1,
                                  const T2& v2,
                                  const T3& v3,
                                  const T4& v4,
                                  const T5& v5) {
  if (pred(v1, v2, v3, v4, v5)) return AssertionSuccess();
    }
    
    #if GTEST_HAS_DEATH_TEST
    
    #  if !GTEST_HAS_RTTI && GTEST_GCC_VER_ < 40302
// Until version 4.3.2, gcc has a bug that causes <tr1/functional>,
// which is #included by <tr1/tuple>, to not compile when RTTI is
// disabled.  _TR1_FUNCTIONAL is the header guard for
// <tr1/functional>.  Hence the following #define is a hack to prevent
// <tr1/functional> from being included.
#   define _TR1_FUNCTIONAL 1
#   include <tr1/tuple>
#   undef _TR1_FUNCTIONAL  // Allows the user to #include
                        // <tr1/functional> if he chooses to.
#  else
#   include <tr1/tuple>  // NOLINT
#  endif  // !GTEST_HAS_RTTI && GTEST_GCC_VER_ < 40302
    
    // The template 'selector' struct TemplateSel<Tmpl> is used to
// represent Tmpl, which must be a class template with one type
// parameter, as a type.  TemplateSel<Tmpl>::Bind<T>::type is defined
// as the type Tmpl<T>.  This allows us to actually instantiate the
// template 'selected' by TemplateSel<Tmpl>.
//
// This trick is necessary for simulating typedef for class templates,
// which C++ doesn't support directly.
template <GTEST_TEMPLATE_ Tmpl>
struct TemplateSel {
  template <typename T>
  struct Bind {
    typedef Tmpl<T> type;
  };
};
    
      // Step 1: Scan for and mark European Number sequences
  //   [:ET:]*[:EN:]+(([:ES:]|[:CS:])?[:EN:]+)*[:ET:]*
  GenericVector<int> letter_types;
  for (int i = 0; i < word_length_; i++) {
    letter_types.push_back(it_->word()->SymbolDirection(i));
  }
  // Convert a single separtor sandwiched between two EN's into an EN.
  for (int i = 0; i + 2 < word_length_; i++) {
    if (letter_types[i] == U_EURO_NUM && letter_types[i + 2] == U_EURO_NUM &&
        (letter_types[i + 1] == U_EURO_NUM_SEP ||
         letter_types[i + 1] == U_COMMON_NUM_SEP)) {
      letter_types[i + 1] = U_EURO_NUM;
    }
  }
  // Scan for sequences of European Number Terminators around ENs and convert
  // them to ENs.
  for (int i = 0; i < word_length_; i++) {
    if (letter_types[i] == U_EURO_NUM_TERM) {
      int j = i + 1;
      while (j < word_length_ && letter_types[j] == U_EURO_NUM_TERM) { j++; }
      if (j < word_length_ && letter_types[j] == U_EURO_NUM) {
        // The sequence [i..j] should be converted to all European Numbers.
        for (int k = i; k < j; k++) letter_types[k] = U_EURO_NUM;
      }
      j = i - 1;
      while (j > -1 && letter_types[j] == U_EURO_NUM_TERM) { j--; }
      if (j > -1 && letter_types[j] == U_EURO_NUM) {
        // The sequence [j..i] should be converted to all European Numbers.
        for (int k = j; k <= i; k++) letter_types[k] = U_EURO_NUM;
      }
    }
  }
  // Step 2: Convert all remaining types to either L or R.
  // Sequences ([:L:]|[:EN:])+ (([:CS:]|[:ON:])+ ([:L:]|[:EN:])+)* -> L.
  // All other are R.
  for (int i = 0; i < word_length_;) {
    int ti = letter_types[i];
    if (ti == U_LTR || ti == U_EURO_NUM) {
      // Left to right sequence; scan to the end of it.
      int last_good = i;
      for (int j = i + 1; j < word_length_; j++) {
        int tj = letter_types[j];
        if (tj == U_LTR || tj == U_EURO_NUM) {
          last_good = j;
        } else if (tj == U_COMMON_NUM_SEP || tj == U_OTHER_NEUTRAL) {
          // do nothing.
        } else {
          break;
        }
      }
      // [i..last_good] is the L sequence
      for (int k = i; k <= last_good; k++) letter_types[k] = U_LTR;
      i = last_good + 1;
    } else {
      letter_types[i] = U_RTL;
      i++;
    }
  }
    
      /// Threshold the rectangle, taking everything except the src_pix
  /// from the class, using thresholds/hi_values to the output pix.
  /// NOTE that num_channels is the size of the thresholds and hi_values
  // arrays and also the bytes per pixel in src_pix.
  void ThresholdRectToPix(Pix* src_pix, int num_channels,
                          const int* thresholds, const int* hi_values,
                          Pix** pix) const;
    
    #include 'errcode.h'
    
    
    {  if (debugfp == nullptr && strlen(debug_file.string()) > 0) {
    debugfp = fopen(debug_file.string(), 'wb');
  } else if (debugfp != nullptr && strlen(debug_file.string()) == 0) {
    fclose(debugfp);
    debugfp = nullptr;
  }
  if (debugfp != nullptr)
    fprintf(debugfp, '%s', msg);
  else
    fprintf(stderr, '%s', msg);
  tesseract::tprintfMutex.Unlock();
}

    
    // Extent of x,y,theta in the input feature space. [0,255].
const int kIntFeatureExtent = 256;
// Extent of x,y,theta dimensions in the quantized feature space.
const int kBoostXYBuckets = 16;
const int kBoostDirBuckets = 16;
    
      // Writes the trainer to memory, so that the current training state can be
  // restored.  *this must always be the master trainer that retains the only
  // copy of the training data and language model. trainer is the model that is
  // actually serialized.
  bool SaveTrainingDump(SerializeAmount serialize_amount,
                        const LSTMTrainer* trainer,
                        GenericVector<char>* data) const;
    
    
    {  delete tensor;
  delete tensor2;
  cout << 'OK' << endl;
  return 0;
}

    
    PyObject* tensor_to_list(const Tensor& tensor) {
  Tensor data = tensor;
  if (data.type().backend() != kCPU) {
    with_no_gil([&]() {
      data = data.toBackend(kCPU);
    });
  }
  auto& type = data.type();
  return recursive_to_list(
      (char*)data.data_ptr(), data.sizes(), data.strides(), 0,
      type.scalarType(), type.elementSizeInBytes());
}
    
    template<typename...>
struct or_trait : std::false_type {};
    
    /* Opaque object representing a Bidirectional stream creating engine. Created
 * and configured outside of this API to facilitate sharing with other
 * components */
typedef struct stream_engine {
  void* obj;
  void* annotation;
} stream_engine;
    
    namespace grpc {
namespace testing {
    }
    }
    
      // Set up security params
  SecurityParams security;
  security.set_use_test_ca(true);
  security.set_server_host_override('foo.test.google.fr');
  client_config.mutable_security_params()->CopyFrom(security);
  server_config.mutable_security_params()->CopyFrom(security);
    
    void SecureAuthContext::AddProperty(const grpc::string& key,
                                    const grpc::string_ref& value) {
  if (!ctx_) return;
  grpc_auth_context_add_property(ctx_, key.c_str(), value.data(), value.size());
}
    
      grpc::testing::interop::RunServer(
      grpc::testing::CreateInteropServerCredentials());
    
    static void get_resource_usage(double* utime, double* stime) {
#ifdef __linux__
  struct rusage usage;
  getrusage(RUSAGE_SELF, &usage);
  *utime = time_double(&usage.ru_utime);
  *stime = time_double(&usage.ru_stime);
#else
  *utime = 0;
  *stime = 0;
#endif
}
    
    grpc::string DescribeService(const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  if (service->options().deprecated()) {
    result.append('DEPRECATED\n');
  }
  result.append('filename: ' + service->file()->name() + '\n');
    }
    
    size_t HistogramHeaderCost(const JpegHistogram& histo) {
  size_t header_bits = 17 * 8;
  for (int i = 0; i + 1 < JpegHistogram::kSize; ++i) {
    if (histo.counts[i] > 0) {
      header_bits += 8;
    }
  }
  return header_bits;
}
    
    std::vector<uint8_t> OutputImage::ToSRGB(int xmin, int ymin,
                                         int xsize, int ysize) const {
  std::vector<uint8_t> rgb(xsize * ysize * 3);
  for (int c = 0; c < 3; ++c) {
    components_[c].ToPixels(xmin, ymin, xsize, ysize, &rgb[c], 3);
  }
  for (size_t p = 0; p < rgb.size(); p += 3) {
    ColorTransformYCbCrToRGB(&rgb[p]);
  }
  return rgb;
}
    
          float r = y + 1.402f * v;
      float g = y - 0.34414f * u - 0.71414f * v;
      float b = y + 1.772f * u;
    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    
    {}  // namespace guetzli
    
    namespace guetzli {
    }
    
    // Functions for writing a JPEGData object into a jpeg byte stream.
    
    
    {  return scope.Close(Boolean::New(true));
}
    
      // Check that the directory is empty.
  ASSERT_EQ(Status::NotFound(), env_->FileExists(test_dir_ + '/non_existent'));
  ASSERT_TRUE(!env_->GetFileSize(test_dir_ + '/non_existent', &file_size).ok());
  ASSERT_OK(env_->GetChildren(test_dir_, &children));
  ASSERT_EQ(0U, children.size());
    
    using namespace v8;
    
      // Read the next record into *record.  Returns true if read
  // successfully, false if we hit end of the input.  May use
  // '*scratch' as temporary storage.  The contents filled in *record
  // will only be valid until the next mutating operation on this
  // reader or the next mutation to *scratch.
  bool ReadRecord(Slice* record, std::string* scratch,
                  WALRecoveryMode wal_recovery_mode =
                      WALRecoveryMode::kTolerateCorruptedTailRecords);
    
    #pragma once
    
      if(m_jSliceA != nullptr) {
    env->DeleteGlobalRef(m_jSliceA);
  }
    
    
    {      struct flock f;
      memset(&f, 0, sizeof(f));
      f.l_type = (F_WRLCK);
      f.l_whence = SEEK_SET;
      f.l_start = 0;
      f.l_len = 0; // Lock/unlock entire file
      int value = fcntl(fd, F_SETLK, &f);
      if( value == -1 ){
        if( lock_expected ){
          exit_val = EXIT_SUCCESS;
        }
      } else {
        if( ! lock_expected ){
          exit_val = EXIT_SUCCESS;
        }
      }
      close(fd); // lock is released for child process
      exit(exit_val);
    } else if (pid > 0) {
      // parent process
      int status;
      while (-1 == waitpid(pid, &status, 0));
      if (!WIFEXITED(status) || WEXITSTATUS(status) != 0) {
        // child process exited with non success status
        return false;
      } else {
        return true;
      }
    } else {
      fprintf( stderr, 'Fork failed\n' );
      return false;
    }
    return false;
    
      bool checkSocketIsReadable_;
  bool checkSocketIsWritable_;
    
      ssize_t writeDataInternal(const unsigned char* data, size_t len,
                            int64_t offset);
  ssize_t readDataInternal(unsigned char* data, size_t len, int64_t offset);
    
    bool AbstractHttpServerResponseCommand::execute()
{
  if (e_->getRequestGroupMan()->downloadFinished() || e_->isHaltRequested()) {
    return true;
  }
  try {
    ssize_t len = httpServer_->sendResponse();
    if (len > 0) {
      timeoutTimer_ = global::wallclock();
    }
  }
  catch (RecoverableException& e) {
    A2_LOG_INFO_EX(fmt('CUID#%' PRId64
                       ' - Error occurred while transmitting response body.',
                       getCuid()),
                   e);
    return true;
  }
  if (httpServer_->sendBufferIsEmpty()) {
    A2_LOG_INFO(fmt('CUID#%' PRId64 ' - HttpServer: all response transmitted.',
                    getCuid()));
    afterSend(httpServer_, e_);
    return true;
  }
  else {
    if (timeoutTimer_.difference(global::wallclock()) >= 30_s) {
      A2_LOG_INFO(fmt('CUID#%' PRId64
                      ' - HttpServer: Timeout while trasmitting response.',
                      getCuid()));
      return true;
    }
    else {
      updateReadWriteCheck();
      e_->addCommand(std::unique_ptr<Command>(this));
      return false;
    }
  }
}
    
    #include <algorithm>
    
    #include 'AnnounceTier.h'
#include 'ValueBase.h'
    
    #include <string>
#include <deque>
    
    
    {private:
  Session* session_;
  DownloadEventCallback callback_;
  void* userData_;
};
    
    #include 'a2functional.h'
    
        jclass      (*DefineClass)(JNIEnv*, const char*, jobject, const jbyte*,
                        jsize);
    jclass      (*FindClass)(JNIEnv*, const char*);
    
    class FBEXPORT StackTraceElement {
 public:
  StackTraceElement(InstructionPointer absoluteProgramCounter,
                    InstructionPointer libraryBase,
                    InstructionPointer functionAddress, std::string libraryName,
                    std::string functionName)
      : absoluteProgramCounter_{absoluteProgramCounter},
        libraryBase_{libraryBase},
        functionAddress_{functionAddress},
        libraryName_{std::move(libraryName)},
        functionName_{std::move(functionName)} {}
    }
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    NBIND_CLASS(Size)
{
    construct<>();
    construct<double, double>();
}
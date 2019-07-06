
        
          const tensorflow::OpRegistrationData* op_reg_data;
  auto status =
      tensorflow::OpRegistry::Global()->LookUp(node_def.op(), &op_reg_data);
  if (!status.ok()) {
    LOG(WARNING) << 'Op ' << node_def.op() << ' not found: ' << status;
    return '';
  }
  AddDefaultsToNodeDef(op_reg_data->op_def, &node_def);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // static
void CallbackHolderBase::FirstWeakCallback(
    const v8::WeakCallbackInfo<CallbackHolderBase>& data) {
  data.GetParameter()->v8_ref_.Reset();
  data.SetSecondPassCallback(SecondWeakCallback);
}
    
    
    {  return args[0];
}
    
      // Call object._init if we have one.
  v8::Local<v8::Function> init;
  if (Dictionary(isolate, wrapper).Get('_init', &init))
    init->Call(isolate->GetCurrentContext(), wrapper, 0, nullptr).IsEmpty();
    
    template <>
struct Converter<std::string> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const std::string& val);
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     std::string* out);
};
    
      template <typename T>
  bool Set(const base::StringPiece& key, const T& val) {
    v8::Local<v8::Value> v8_value;
    if (!TryConvertToV8(isolate_, val, &v8_value))
      return false;
    v8::Maybe<bool> result = GetHandle()->Set(
        isolate_->GetCurrentContext(), StringToV8(isolate_, key), v8_value);
    return !result.IsNothing() && result.FromJust();
  }
    
      // It's against Google C++ style to return a non-const ref, but we take some
  // poetic license here in order that all calls to Set() can be via the '.'
  // operator and line up nicely.
  template <typename T>
  ObjectTemplateBuilder& SetValue(const base::StringPiece& name, T val) {
    return SetImpl(name, ConvertToV8(isolate_, val));
  }
    
    // Wrappable is a base class for C++ objects that have corresponding v8 wrapper
// objects. To retain a Wrappable object on the stack, use a gin::Handle.
//
// USAGE:
// // my_class.h
// class MyClass : Wrappable<MyClass> {
//  public:
//   ...
// };
//
// Subclasses should also typically have private constructors and expose a
// static Create function that returns a mate::Handle. Forcing creators through
// this static Create function will enforce that clients actually create a
// wrapper for the object. If clients fail to create a wrapper for a wrappable
// object, the object will leak because we use the weak callback from the
// wrapper as the signal to delete the wrapped object.
class WrappableBase {
 public:
  WrappableBase();
  virtual ~WrappableBase();
    }
    
    #if defined(OS_POSIX) && !defined(OS_ANDROID)
  // Exposed for testing.  We use a timeout on Linux, and in tests we want
  // this timeout to be short.
  NotifyResult NotifyOtherProcessWithTimeout(
      const base::CommandLine& command_line,
      int retry_attempts,
      const base::TimeDelta& timeout,
      bool kill_unresponsive);
  NotifyResult NotifyOtherProcessWithTimeoutOrCreate(
      const base::CommandLine& command_line,
      int retry_attempts,
      const base::TimeDelta& timeout);
  void OverrideCurrentPidForTesting(base::ProcessId pid);
  void OverrideKillCallbackForTesting(
      const base::RepeatingCallback<void(int)>& callback);
#endif
    
    
    {          return out;
        })
    .Input(0, 'X', '4-tensor in NCHW or NHWC.')
    .Output(
        0,
        'Y',
        '4-tensor. For NCHW: N x (C x kH x kW) x outH x outW.'
        'For NHWC: N x outH x outW x (kH x kW x C');
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/logging.h'
#include 'caffe2/core/operator.h'
#include 'caffe2/utils/math.h'
    
    #ifndef B2_TRIANGLE_H
#define B2_TRIANGLE_H
    
    
    {}

    
    //use_lines: Enables line clipping. Adds a very minor cost to performance.
#define use_lines
  
//use_deprecated: Enables temporary support for the obsolete functions
//#define use_deprecated  
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    /** 16x32 multiplication, followed by a 16-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q16
static OPUS_INLINE opus_val32 MULT16_32_Q16_armv5e(opus_val16 a, opus_val32 b)
{
  int res;
  __asm__(
      '#MULT16_32_Q16\n\t'
      'smulwb %0, %1, %2\n\t'
      : '=r'(res)
      : 'r'(b),'r'(a)
  );
  return res;
}
#define MULT16_32_Q16(a, b) (MULT16_32_Q16_armv5e(a, b))
    
    /* (a32 * (b32 >> 16)) >> 16 */
#undef silk_SMULWT
static OPUS_INLINE opus_int32 silk_SMULWT_armv5e(opus_int32 a, opus_int32 b)
{
  int res;
  __asm__(
      '#silk_SMULWT\n\t'
      'smulwt %0, %1, %2\n\t'
      : '=r'(res)
      : 'r'(a), 'r'(b)
  );
  return res;
}
#define silk_SMULWT(a, b) (silk_SMULWT_armv5e(a, b))
    
    // Implements printing a reference type T&.
template <typename T>
class UniversalPrinter<T&> {
 public:
  // MSVC warns about adding const to a function type, so we want to
  // disable the warning.
#ifdef _MSC_VER
# pragma warning(push)          // Saves the current warning state.
# pragma warning(disable:4180)  // Temporarily disables warning 4180.
#endif  // _MSC_VER
    }
    
      // Gets the number of all test parts.  This is the sum of the number
  // of successful test parts and the number of failed test parts.
  int total_part_count() const;
    
      // Returns true if pathname describes a directory in the file-system
  // that exists.
  bool DirectoryExists() const;
    
    // The text used in failure messages to indicate the start of the
// stack trace.
GTEST_API_ extern const char kStackTraceMarker[];
    
    // This is used internally by all instances of linked_ptr<>.  It needs to be
// a non-template class because different types of linked_ptr<> can refer to
// the same object (linked_ptr<Superclass>(obj) vs linked_ptr<Subclass>(obj)).
// So, it needs to be possible for different types of linked_ptr to participate
// in the same circular linked list, so we need a single class type here.
//
// DO NOT USE THIS CLASS DIRECTLY YOURSELF.  Use linked_ptr<T>.
class linked_ptr_internal {
 public:
  // Create a new circle that includes only this instance.
  void join_new() {
    next_ = this;
  }
    }
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15>
struct Templates15 {
  typedef TemplateSel<T1> Head;
  typedef Templates14<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15> Tail;
};
    
    $range i 1..n
template <$for i, [[GTEST_TEMPLATE_ T$i = NoneT]]>
struct Templates {
  typedef Templates$n<$for i, [[T$i]]> type;
};
    
    #include 'gtest/gtest.h'
    
    #include <stddef.h>
#include <stdint.h>
    
      void Corrupt(FileType filetype, int offset, int bytes_to_corrupt) {
    // Pick file to corrupt
    std::vector<std::string> filenames;
    ASSERT_OK(env_.target()->GetChildren(dbname_, &filenames));
    uint64_t number;
    FileType type;
    std::string fname;
    int picked_number = -1;
    for (size_t i = 0; i < filenames.size(); i++) {
      if (ParseFileName(filenames[i], &number, &type) && type == filetype &&
          int(number) > picked_number) {  // Pick latest file
        fname = dbname_ + '/' + filenames[i];
        picked_number = number;
      }
    }
    ASSERT_TRUE(!fname.empty()) << filetype;
    }
    
      // Return the earliest node that comes at or after key.
  // Return nullptr if there is no such node.
  //
  // If prev is non-null, fills prev[level] with pointer to previous
  // node at 'level' for every level in [0..max_height_-1].
  Node* FindGreaterOrEqual(const Key& key, Node** prev) const;
    
      Iterator* NewConcatenatingIterator(const ReadOptions&, int level) const;
    
    TEST(MemEnvTest, Locks) {
  FileLock* lock;
    }
    
    
    {}  // namespace leveldb
    
    static const int kBlockSize = 4096;
    
    namespace CalcEngine
{
    class CalcNumSec
    {
    public:
        CalcNumSec()
            : value()
            , m_isNegative(false)
        {
        }
    }
    }
    
    
    {                Windows::UI::Xaml::Interop::IBindableObservableVector ^ observable =
                    dynamic_cast<Windows::UI::Xaml::Interop::IBindableObservableVector ^>(source);
                if (observable)
                {
                    observable->VectorChanged += ref new Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler(
                        this, &AlwaysSelectedCollectionView::OnSourceBindableVectorChanged);
                }
            }
    
    #include <osquery/flags.h>
#include <osquery/logger.h>
#include <osquery/tables.h>
#include <osquery/utils/conversions/join.h>
#include <osquery/utils/info/platform_type.h>
#include <osquery/utils/json/json.h>
    
      /**
   * @brief The schedule will check and record previously executing queries.
   *
   * If a query is found on initialization, the name will be recorded, it is
   * possible to skip previously failed queries.
   */
  std::string failed_query_;
    
      // Initialize a discovery cache at time 0.
  discovery_cache_ = std::make_pair<size_t, bool>(0, false);
  valid_ = true;
    
    fs::path getConfDirPathImpl() {
  char const* kEnvVarName = 'TEST_CONF_FILES_DIR';
  auto const value_opt = osquery::getEnvVar(kEnvVarName);
  EXPECT_TRUE(static_cast<bool>(value_opt))
      << 'Env var ' << boost::io::quoted(kEnvVarName) << ' was not found, '
      << ' looks like cxx_test argument 'env' is not set up.';
  return fs::path(value_opt.get());
}
    
    Expected<int32_t, DatabaseError> RocksdbDatabase::getInt32(
    const std::string& domain, const std::string& key) {
  Expected<std::string, DatabaseError> buffer = getRawBytes(domain, key);
  if (buffer) {
    std::string value = buffer.take();
    if (BOOST_LIKELY(validateInt32StorageBuffer(value))) {
      int32_t result = *(reinterpret_cast<const int32_t*>(value.data()));
      return ntohl(result);
    } else {
      auto type_error = createError(RocksdbError::UnexpectedValueType)
                        << 'Fetching string as integer';
      auto error =
          createError(DatabaseError::KeyNotFound, std::move(type_error));
      assert(false && error.getMessage().c_str());
      LOG(ERROR) << error.getMessage();
      debug_only::fail(error.getMessage().c_str());
      return std::move(error);
    }
  }
  return buffer.takeError();
}
    
    
    {  /**
   * @brief The host identifier at the time when logs are flushed.
   *
   * There is occasionally a delay between logging a status and decorating
   * with the host identifier. In most cases the identifier is static so this
   * does not matter. In some cases the host identifier causes database lookups.
   */
  std::string identifier;
};
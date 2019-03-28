
        
          static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethodSync')));
    
    
    {protected:
  BaseEvent(){}
  virtual ~BaseEvent(){}
};
    
    namespace nw {
    }
    
    void Menu::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    for(auto* item : menu_items_) {
      item->UpdateKeys(focus_manager);
    }
  }
}
    
    #include 'base/command_line.h'
#include 'base/memory/ptr_util.h'
#include 'base/task/post_task.h'
#include 'content/public/browser/browser_task_traits.h'
#include 'chrome/browser/browsing_data/browsing_data_appcache_helper.h'
#include 'chrome/browser/browsing_data/browsing_data_helper.h'
#include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/nw_app.h'
#include 'content/nw/src/nw_base.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_process_host.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/storage_partition.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/app_window/app_window.h'
#include 'extensions/browser/app_window/app_window_registry.h'
#include 'extensions/browser/app_window/native_app_window.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
#include 'net/proxy_resolution/proxy_config.h'
#include 'net/proxy_resolution/proxy_config_service_fixed.h'
#include 'net/proxy_resolution/proxy_resolution_service.h'
#include 'net/url_request/url_request_context.h'
#include 'net/url_request/url_request_context_getter.h'
#include 'net/traffic_annotation/network_traffic_annotation_test_helper.h'
    
        bool WriteHTML(ClipboardData& data) {
      DCHECK(data.type == TYPE_HTML);
      scw_->WriteHTML(base::UTF8ToUTF16(*(data.data)), std::string());
      return true;
    }
    
    
    {} // namespace extensions
#endif

    
    
    {
} // namespace extensions

    
      PyObject* as_pyobject() const { return reinterpret_cast<PyObject*>(ptr_); }
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    void OneofGenerator::GenerateCaseEnum(io::Printer* printer) {
  printer->Print(
      variables_,
      'typedef GPB_ENUM($enum_name$) {\n');
  printer->Indent();
  printer->Print(
      variables_,
      '$enum_name$_GPBUnsetOneOfCase = 0,\n');
  string enum_name = variables_['enum_name'];
  for (int j = 0; j < descriptor_->field_count(); j++) {
    const FieldDescriptor* field = descriptor_->field(j);
    string field_name = FieldNameCapitalized(field);
    printer->Print(
        '$enum_name$_$field_name$ = $field_number$,\n',
        'enum_name', enum_name,
        'field_name', field_name,
        'field_number', SimpleItoa(field->number()));
  }
  printer->Outdent();
  printer->Print(
      '};\n'
      '\n');
}
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
    
    #ifdef _WIN32
#ifndef STDIN_FILENO
#define STDIN_FILENO 0
#endif
#ifndef STDOUT_FILENO
#define STDOUT_FILENO 1
#endif
#endif
    
      EXPECT_EQ(
      1, TimeUtil::TimestampToNanoseconds(TimeUtil::NanosecondsToTimestamp(1)));
  EXPECT_EQ(-1, TimeUtil::TimestampToNanoseconds(
                    TimeUtil::NanosecondsToTimestamp(-1)));
  EXPECT_EQ(1, TimeUtil::TimestampToMicroseconds(
                   TimeUtil::MicrosecondsToTimestamp(1)));
  EXPECT_EQ(-1, TimeUtil::TimestampToMicroseconds(
                    TimeUtil::MicrosecondsToTimestamp(-1)));
  EXPECT_EQ(1, TimeUtil::TimestampToMilliseconds(
                   TimeUtil::MillisecondsToTimestamp(1)));
  EXPECT_EQ(-1, TimeUtil::TimestampToMilliseconds(
                    TimeUtil::MillisecondsToTimestamp(-1)));
  EXPECT_EQ(1, TimeUtil::TimestampToSeconds(TimeUtil::SecondsToTimestamp(1)));
  EXPECT_EQ(-1, TimeUtil::TimestampToSeconds(TimeUtil::SecondsToTimestamp(-1)));
    
    class Proto3DataStripper : public DataStripper {
 private:
  virtual bool ShouldBeClear(const FieldDescriptor *field) {
    return field->type() == FieldDescriptor::TYPE_GROUP ||
           field->is_extension();
  }
};
    
    namespace {
    }
    
    void BENCHFUN(sizeCtor)(int iters, int size) {
  FOR_EACH_RANGE (i, 0, iters) {
    VECTOR v(size);
    doNotOptimizeAway(&v);
  }
}
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 16)
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 128)
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 1024)
    
    namespace folly {
    }
    
    template <class RNG>
struct StateSize<RNG, void_t<decltype(RNG::state_size)>> {
  using type = std::integral_constant<size_t, RNG::state_size>;
};
    
    #include <folly/Conv.h>
#include <folly/hash/Hash.h>
    
      // Install a pointer to ourselves as the allocator.
  *reinterpret_cast<SimpleAllocator**>(mem_) = this;
  static_assert(max_align_v >= sizeof(SimpleAllocator*), 'alignment too small');
  mem_ += std::min(sz_, max_align_v);
    
    
    {  std::array<std::shared_ptr<T>, kNumSlots> slots_;
};
    
      counted_ptr(const counted_ptr& o) : p_(o.p_) {
    if (p_) {
      counted_ptr_base<Atom>::getRef(p_)->add_ref();
    }
  }
  counted_ptr& operator=(const counted_ptr& o) {
    if (p_ && counted_ptr_base<Atom>::getRef(p_)->release_ref() == 1) {
      p_->~T();
      free(counted_ptr_base<Atom>::getRef(p_));
    }
    p_ = o.p_;
    if (p_) {
      counted_ptr_base<Atom>::getRef(p_)->add_ref();
    }
    return *this;
  }
  explicit counted_ptr(T* p) : p_(p) {
    CHECK(!p);
  }
  ~counted_ptr() {
    if (p_ && counted_ptr_base<Atom>::getRef(p_)->release_ref() == 1) {
      p_->~T();
      free(counted_ptr_base<Atom>::getRef(p_));
    }
  }
  typename std::add_lvalue_reference<T>::type operator*() const {
    return *p_;
  }
    
    //
// Write a maximum amount of base-converted character digits, of a
// given base, from an unsigned integral type into a byte buffer of
// sufficient size.
//
// This function does not append null terminators.
//
// Output buffer size must be guaranteed by caller (indirectly
// controlled by DigitCount template parameter).
//
// Having these parameters at compile time allows compiler to
// precompute several of the values, use smaller instructions, and
// better optimize surrounding code.
//
// IntegralType:
//   - Something like uint8_t, uint16_t, etc
//
// DigitCount is the maximum number of digits to be printed
//   - This is tied to IntegralType and Base. For example:
//     - uint8_t in base 10 will print at most 3 digits ('255')
//     - uint16_t in base 16 will print at most 4 hex digits ('FFFF')
//
// Base is the desired output base of the string
//   - Base 10 will print [0-9], base 16 will print [0-9a-f]
//
// PrintAllDigits:
//   - Whether or not leading zeros should be printed
//
template <
    class IntegralType,
    IntegralType DigitCount,
    IntegralType Base = IntegralType(10),
    bool PrintAllDigits = false,
    class = typename std::enable_if<
        std::is_integral<IntegralType>::value &&
            std::is_unsigned<IntegralType>::value,
        bool>::type>
inline void writeIntegerString(IntegralType val, char** buffer) {
  char* buf = *buffer;
    }
    
    
    {
    {size_t qfind_first_byte_of_byteset(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  SparseByteSet s;
  for (auto needle : needles) {
    s.add(uint8_t(needle));
  }
  for (size_t index = 0; index < haystack.size(); ++index) {
    if (s.contains(uint8_t(haystack[index]))) {
      return index;
    }
  }
  return std::string::npos;
}
} // namespace detail
} // namespace folly

    
    #include <Widget/widget.h>
    
      // Trivial case 2: even numbers
  if (n % 2 == 0) return n == 2;
    
    using testing::internal::ShouldUseColor;
    
    
    {  a.set_x(1);
  EXPECT_EQ(1, a.x_);
}
    
    TEST(NoFatalFailureTest, AssertNoFatalFailure) {
  ASSERT_NO_FATAL_FAILURE(;);
  ASSERT_NO_FATAL_FAILURE(SUCCEED());
  ASSERT_NO_FATAL_FAILURE(Subroutine());
  ASSERT_NO_FATAL_FAILURE({ SUCCEED(); });
}
    
    #include 'gtest/gtest_prod.h'
    
    static bool
parsePostMultiSections ( const string& webpage_txt,
                         vector<pair<string, string>>& post_sections_list ) 
{
    // parse the ref section
    static const string& keyword_ref_section_begin('<INPUT size=58 name=\'ref\' value=\'');
    static const string& keyword_ref_section_end('\'');
    const pair<string, size_t>& pair_tmp = fetchStringBetweenKeywords( webpage_txt,
                                                                       keyword_ref_section_begin,
                                                                       keyword_ref_section_end );
    const string& ref_content = pair_tmp.first;
    if (ref_content.empty()) {
        cerr << 'WARNING! parsePostMultiSections() CANNOT find the keyword '
             << '\'' << keyword_ref_section_begin << '\'' << ' and '
             << '\'' << keyword_ref_section_end << '\'' << endl;
        return(false);
    }
    post_sections_list.push_back(make_pair('ref', ref_content));
    const auto keyword_ref_section_end_pos = pair_tmp.second;
    }
    
    #include <string>
#include <vector>
#include '../helper/Webpage.h'
    
    // Compile & run:
// - g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -o 010-TestCase 010-TestCase.cpp && 010-TestCase --success
// - cl -EHsc -I%CATCH_SINGLE_INCLUDE% 010-TestCase.cpp && 010-TestCase --success
    
        inline IContext& getCurrentContext()
    {
        return getCurrentMutableContext();
    }
    
    #include 'catch_debugger.h'
#include 'catch_errno_guard.h'
#include 'catch_stream.h'
#include 'catch_platform.h'
    
    #if !CATCH_ARC_ENABLED
    [pool drain];
#endif
    
    
    {        virtual bool allowThrows() const = 0;
        virtual std::ostream& stream() const = 0;
        virtual std::string name() const = 0;
        virtual bool includeSuccessfulResults() const = 0;
        virtual bool shouldDebugBreak() const = 0;
        virtual bool warnAboutMissingAssertions() const = 0;
        virtual bool warnAboutNoTests() const = 0;
        virtual int abortAfter() const = 0;
        virtual bool showInvisibles() const = 0;
        virtual ShowDurations::OrNot showDurations() const = 0;
        virtual TestSpec const& testSpec() const = 0;
        virtual bool hasTestFilters() const = 0;
        virtual RunTests::InWhatOrder runOrder() const = 0;
        virtual unsigned int rngSeed() const = 0;
        virtual int benchmarkResolutionMultiple() const = 0;
        virtual UseColour::YesOrNo useColour() const = 0;
        virtual std::vector<std::string> const& getSectionsToRun() const = 0;
        virtual Verbosity verbosity() const = 0;
    };
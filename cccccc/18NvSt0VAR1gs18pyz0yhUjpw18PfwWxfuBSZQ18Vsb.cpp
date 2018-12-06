
        
        
    {}  // namespace atom
    
    #endif  // ATOM_BROWSER_API_ATOM_API_AUTO_UPDATER_H_

    
    NODE_BUILTIN_MODULE_CONTEXT_AWARE(atom_browser_in_app_purchase, Initialize)

    
    #ifndef ATOM_BROWSER_API_ATOM_API_NET_H_
#define ATOM_BROWSER_API_ATOM_API_NET_H_
    
    namespace gfx {
class Image;
}
    
    
    {}  // namespace atom
    
    void Event::RenderFrameHostChanged(content::RenderFrameHost* old_rfh,
                                   content::RenderFrameHost* new_rfh) {
  if (sender_ && sender_ == old_rfh)
    sender_ = new_rfh;
}
    
    v8::Local<v8::Object> CreateEventFromFlags(v8::Isolate* isolate, int flags) {
  mate::Dictionary obj = mate::Dictionary::CreateEmpty(isolate);
  obj.Set('shiftKey', static_cast<bool>(flags & ui::EF_SHIFT_DOWN));
  obj.Set('ctrlKey', static_cast<bool>(flags & ui::EF_CONTROL_DOWN));
  obj.Set('altKey', static_cast<bool>(flags & ui::EF_ALT_DOWN));
  obj.Set('metaKey', static_cast<bool>(flags & ui::EF_COMMAND_DOWN));
  return obj.GetHandle();
}
    
    
    {}  // namespace api
    
    // Users should use TrackableObject instead.
class TrackableObjectBase {
 public:
  TrackableObjectBase();
    }
    
    static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    /* The maximum number of bytes we are required to buffer internally between
 * calls to the decoder.  The value is 14: a 5 byte unknown tag plus ten-byte
 * varint, less one because we are buffering an incomplete value.
 *
 * Should only be used by unit tests. */
#define UPB_DECODER_MAX_RESIDUAL_BYTES 14
    
    bool AnyMetadata::InternalIs(const Descriptor* descriptor) const {
  const string type_url = type_url_->GetNoArena();
  string full_name;
  if (!ParseAnyTypeUrl(type_url, &full_name)) {
    return false;
  }
  return full_name == descriptor->full_name();
}
    
    void GeneratorContext::GetCompilerVersion(Version* version) const {
  version->set_major(GOOGLE_PROTOBUF_VERSION / 1000000);
  version->set_minor(GOOGLE_PROTOBUF_VERSION / 1000 % 1000);
  version->set_patch(GOOGLE_PROTOBUF_VERSION % 1000);
  version->set_suffix(GOOGLE_PROTOBUF_VERSION_SUFFIX);
}
    
    #include <google/protobuf/stubs/common.h>
#include <google/protobuf/test_util.h>
#include <google/protobuf/unittest.pb.h>
#include <gtest/gtest.h>
    
    #include <memory>
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    // Author: kenton@google.com (Kenton Varda)
    
    ImmutableExtensionLiteGenerator::ImmutableExtensionLiteGenerator(
    const FieldDescriptor* descriptor, Context* context)
  : descriptor_(descriptor), context_(context),
    name_resolver_(context->GetNameResolver()) {
  if (descriptor_->extension_scope() != NULL) {
    scope_ = name_resolver_->GetImmutableClassName(
        descriptor_->extension_scope());
  } else {
    scope_ = name_resolver_->GetImmutableClassName(descriptor_->file());
  }
}
    
      (*variables)['type'] =
      name_resolver->GetImmutableClassName(descriptor->message_type());
  const FieldDescriptor* key = KeyField(descriptor);
  const FieldDescriptor* value = ValueField(descriptor);
  const JavaType keyJavaType = GetJavaType(key);
  const JavaType valueJavaType = GetJavaType(value);
    
    #include 'collision_object_bullet.h'
    
    /**
	@author AndreaCatania
*/
    
    	if (instance == NULL) {
		instance = memnew(ZipArchive);
	};
    
      // RFC 2397 specifies 'data:' as the prefix,
  // but zend's PHP supports 'data://' as well
  if (data_len >= 2 && data[0] == '/' && data[1] == '/') {
    data_len -= 2;
    data += 2;
  }
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
      CLASSNAME_IS('OutputFile');
  // overriding ResourceData
  const String& o_getClassNameHook() const override { return classnameof(); }
    
    ///////////////////////////////////////////////////////////////////////////////
    
      QueryLogItem item;
  item.epoch = 0L;
  item.counter = 0L;
  getDecorations(item.decorations);
  ASSERT_EQ(item.decorations.size(), 2U);
  EXPECT_EQ(item.decorations.at('internal_60_test'), 'test');
    
     private:
  /// The hashing algorithm which is used to compute the hash
  HashType algorithm_;
    
            auto name = std::string(query_entry.name.GetString());
        auto query = std::string(query_entry.value.GetString());
        if (name.empty() || query.empty()) {
          return Status(1, 'Distributed query is not a string');
        }
    
    
    {bool INotifyEventPublisher::isPathMonitored(const std::string& path) const {
  WriteLock lock(path_mutex_);
  std::string parent_path;
  if (!isDirectory(path).ok()) {
    if (path_descriptors_.find(path) != path_descriptors_.end()) {
      // Path is a file, and is directly monitored.
      return true;
    }
    // Important to add a trailing '/' for inotify.
    parent_path = fs::path(path).parent_path().string() + '/';
  } else {
    parent_path = path;
  }
  // Directory or parent of file monitoring
  auto path_iterator = path_descriptors_.find(parent_path);
  return (path_iterator != path_descriptors_.end());
}
}

    
    
    {  // Finally wait for a signal / interrupt to shutdown.
  runner.waitForShutdown();
  return 0;
}

    
    
    {        state.PauseTiming();
        delete f;
        delete j;
        state.ResumeTiming();
    }
    
    // Support for registering benchmarks for functions.
    
    #include 'benchmark/benchmark.h'
    
    std::string FormatString(const char* msg, ...) {
  va_list args;
  va_start(args, msg);
  auto tmp = FormatString(msg, args);
  va_end(args);
  return tmp;
}
    
    // Parses a string for a Double flag, in the form of
// '--flag=value'.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseDoubleFlag(const char* str, const char* flag, double* value);
    
      // Calculate least square fitting parameter
  for (size_t i = 0; i < n.size(); ++i) {
    double gn_i = fitting_curve(n[i]);
    sigma_gn += gn_i;
    sigma_gn_squared += gn_i * gn_i;
    sigma_time += time[i];
    sigma_time_gn += time[i] * gn_i;
  }
    
    namespace benchmark {
namespace internal {
    }
    }
    
      // Called by each thread
  bool wait() EXCLUDES(lock_) {
    bool last_thread = false;
    {
      MutexLock ml(lock_);
      last_thread = createBarrier(ml);
    }
    if (last_thread) phase_condition_.notify_all();
    return last_thread;
  }
    
    BenchmarkReporter::~BenchmarkReporter() {}
    
    // this test makes sure that the coroutine is destroyed properly
TEST(Expected, CoroutineCleanedUp) {
  int count_dest = 0;
  auto r = [&]() -> Expected<int, Err> {
    SCOPE_EXIT {
      ++count_dest;
    };
    auto x = co_await Expected<int, Err>(makeUnexpected(Err::badder()));
    ADD_FAILURE() << 'Should not be resuming';
    co_return x;
  }();
  EXPECT_FALSE(r.hasValue());
  EXPECT_EQ(1, count_dest);
}
    
    BENCHMARK(BENCHFUN(defaultCtor), iters) {
  FOR_EACH_RANGE (i, 0, iters) {
    VECTOR v;
    doNotOptimizeAway(&v);
  }
}
    
    TEST(FunctionRef, ForEach) {
  std::list<int> s{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    }
    
    
    {} // namespace detail
    
        // Test the upper boundary of conversion to uint32_t hours
    using hours_u32 = std::chrono::duration<uint32_t, std::ratio<3600>>;
    ts.tv_sec = 15461882262000LL;
    ts.tv_nsec = 0;
    EXPECT_EQ(std::numeric_limits<uint32_t>::max(), to<hours_u32>(ts).count());
    ts.tv_sec = 15461882265599LL;
    EXPECT_EQ(std::numeric_limits<uint32_t>::max(), to<hours_u32>(ts).count());
    ts.tv_sec = 15461882265600LL;
    EXPECT_THROW(to<hours_u32>(ts), std::range_error);
    
    // kDCTMatrix[8*u+x] = 0.5*alpha(u)*cos((2*x+1)*u*M_PI/16),
// where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
static const double kDCTMatrix[64] = {
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.4903926402,  0.4157348062,  0.2777851165,  0.0975451610,
 -0.0975451610, -0.2777851165, -0.4157348062, -0.4903926402,
  0.4619397663,  0.1913417162, -0.1913417162, -0.4619397663,
 -0.4619397663, -0.1913417162,  0.1913417162,  0.4619397663,
  0.4157348062, -0.0975451610, -0.4903926402, -0.2777851165,
  0.2777851165,  0.4903926402,  0.0975451610, -0.4157348062,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.2777851165, -0.4903926402,  0.0975451610,  0.4157348062,
 -0.4157348062, -0.0975451610,  0.4903926402, -0.2777851165,
  0.1913417162, -0.4619397663,  0.4619397663, -0.1913417162,
 -0.1913417162,  0.4619397663, -0.4619397663,  0.1913417162,
  0.0975451610, -0.2777851165,  0.4157348062, -0.4903926402,
  0.4903926402, -0.4157348062,  0.2777851165, -0.0975451610,
};
    
    #define GUETZLI_LOG(stats, ...)                                    \
  do {                                                             \
    char debug_string[1024];                                       \
    int res = snprintf(debug_string, sizeof(debug_string),         \
                       __VA_ARGS__);                               \
    assert(res > 0 && 'expected successful printing');             \
    (void)res;                                                     \
    debug_string[sizeof(debug_string) - 1] = '\0';                 \
    ::guetzli::PrintDebug(                      \
         stats, std::string(debug_string));        \
  } while (0)
#define GUETZLI_LOG_QUANT(stats, q)                    \
  for (int y = 0; y < 8; ++y) {                        \
    for (int c = 0; c < 3; ++c) {                      \
      for (int x = 0; x < 8; ++x)                      \
        GUETZLI_LOG(stats, ' %2d', (q)[c][8 * y + x]); \
      GUETZLI_LOG(stats, '   ');                       \
    }                                                  \
    GUETZLI_LOG(stats, '\n');                          \
  }
    
    
    {}  // namespace guetzli
    
    #include 'guetzli/jpeg_data.h'
    
    bool JPEGData::Is444() const {
  return (components.size() == 3 &&
          max_h_samp_factor == 1 &&
          max_v_samp_factor == 1 &&
          components[0].h_samp_factor == 1 &&
          components[0].v_samp_factor == 1 &&
          components[1].h_samp_factor == 1 &&
          components[1].v_samp_factor == 1 &&
          components[2].h_samp_factor == 1 &&
          components[2].v_samp_factor == 1);
}
    
    typedef int16_t coeff_t;
    
    #endif  // GUETZLI_JPEG_DATA_ENCODER_H_

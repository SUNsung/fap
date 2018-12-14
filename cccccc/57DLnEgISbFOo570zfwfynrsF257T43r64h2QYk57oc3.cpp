static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    string EscapeJavadoc(const string& input) {
  string result;
  result.reserve(input.size() * 2);
    }
    
    #include <google/protobuf/compiler/java/java_doc_comment.h>
    
    int ImmutableExtensionLiteGenerator::GenerateNonNestedInitializationCode(
    io::Printer* printer) {
  return 0;
}
    
    // Check whether there is any type defined in the proto file that has
// the given class name.
bool ClassNameResolver::HasConflictingClassName(
    const FileDescriptor* file, const string& classname) {
  for (int i = 0; i < file->enum_type_count(); i++) {
    if (file->enum_type(i)->name() == classname) {
      return true;
    }
  }
  for (int i = 0; i < file->service_count(); i++) {
    if (file->service(i)->name() == classname) {
      return true;
    }
  }
  for (int i = 0; i < file->message_type_count(); i++) {
    if (MessageHasConflictingClassName(file->message_type(i), classname)) {
      return true;
    }
  }
  return false;
}
    
    // Checks if a message contains any enums definitions (on the message or
// a nested message under it).
bool MessageContainsEnums(const Descriptor* message) {
  if (message->enum_type_count() > 0) {
    return true;
  }
  for (int i = 0; i < message->nested_type_count(); i++) {
    if (MessageContainsEnums(message->nested_type(i))) {
      return true;
    }
  }
  return false;
}
    
    #include <string>
#include <utility>
#include <vector>
    
    #define ERROR_RAISE_WARNING(exp)        \
  int ret = (exp);                      \
  if (ret != 0) {                       \
    raise_warning(                      \
      '%s(): %s',                       \
      __FUNCTION__,                     \
      folly::errnoStr(errno).c_str()    \
    );                                  \
  }                                     \
    
    
    {  StructuredLogEntry cols;
  fillCols(cols);
  cols.setStr('event_name', event);
  cols.setInt('priority', priority);
  StructuredLog::log('hhvm_perf_warning', cols);
}
    
        void LearnerNesterov::UpdateHalf(const Parameter& parameter, const NDArrayViewPtr& gradientValue,
        const NDArrayViewPtr& smoothedGradientValue, size_t trainingSampleCount) const
    {
        const auto& compoundMatrix = GetWritableMatrix<float>(smoothedGradientValue);
        const auto& gradientMatrix = GetWritableMatrix<half>(gradientValue);
        auto smoothedGradientMatrix = compoundMatrix->ColumnSlice(0, gradientMatrix->GetNumCols());
        auto tempGradientMatrix = compoundMatrix->ColumnSlice(gradientMatrix->GetNumCols(), gradientMatrix->GetNumCols());
        auto parameterMatrix = compoundMatrix->ColumnSlice(2 * gradientMatrix->GetNumCols(), gradientMatrix->GetNumCols());
    }
    
            static bool IsUDF(const Dictionary& dict);
    
    #ifdef WIN32 // --- Windows version
    
        virtual void /*ComputationNodeNonLooping::*/ ForwardPropNonLooping() override
    {
        // Inputs:
        //      0. gain
        //      1. pred
        //      2. query id
        FrameRange fr(Input(0)->GetMBLayout());
    }
    
      Status s;
  for (const auto& p : paths_) {
    s = carve.carve(fs::path(p));
    EXPECT_TRUE(s.ok());
  }
    
      /**
   * @brief Virtual method which could implement custom query pack retrieval
   *
   * The default config syntax for query packs is like the following:
   *
   * @code
   *   {
   *     'packs': {
   *       'foo': {
   *         'version': '1.5.0',
   *         'platform:' 'any',
   *         'queries': {
   *           // ...
   *         }
   *       }
   *     }
   *   }
   * @endcode
   *
   * Alternatively, you can define packs like the following as well:
   *
   * @code
   *   {
   *     'packs': {
   *       'foo': '/var/osquery/packs/foo.json',
   *       'bar': '/var/osquery/packs/bar.json'
   *     }
   *   }
   * @endcode
   *
   * If you defined the 'value' of your pack as a string instead of an inline
   * data structure, then osquery will pass the responsibility of retrieving
   * the pack to the active config plugin. In the above example, it seems
   * obvious that the value is a local file path. Alternatively, if the
   * filesystem config plugin wasn't being used, the string could be a remote
   * URL, etc.
   *
   * genPack is not a pure virtual, so you don't have to define it if you don't
   * want to use the shortened query pack syntax. The default implementation
   * returns a failed status.
   *
   * @param name is the name of the query pack
   * @param value is the string based value that was provided with the pack
   * @param pack should be populated with the string JSON pack content
   *
   * @return a Status instance indicating the success or failure of the call
   */
  virtual Status genPack(const std::string& name,
                         const std::string& value,
                         std::string& pack);
    
    namespace osquery {
    }
    
    REGISTER_INTERNAL(LoggerConfigParserPlugin, 'config_parser', 'logger');
    
    #include <iostream>
    
      ASSERT_TRUE(data.doc().HasMember('events'));
  ASSERT_TRUE(data.doc()['events'].HasMember('environment_variables'));
  ASSERT_TRUE(data.doc()['events']['environment_variables'].IsArray());
  for (const auto& var :
       data.doc()['events']['environment_variables'].GetArray()) {
    std::string value = var.GetString();
    EXPECT_TRUE(value == 'foo' || value == 'bar');
  }
    
    #include <osquery/config/config.h>
#include <osquery/registry.h>
#include <osquery/system.h>
    
    
    {
    {
    {
    {
    {  std::vector<CanFrame> frames;
  int32_t num = 0;
  CanFrame frame;
  // frame.id = 0x60;
  // frame.len = 8;
  // frame.data[0] = 0;
  // frames.push_back(frame);
  // num = 1;
  EXPECT_EQ(hermes_can.Start(), ErrorCode::OK);
  EXPECT_EQ(hermes_can.Receive(&frames, &num), ErrorCode::OK);
}
*/
}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
      ProtocolData<::apollo::canbus::ChassisDetail> mpd;
  SenderMessage<::apollo::canbus::ChassisDetail> msg(1, &mpd);
  EXPECT_FALSE(sender.NeedSend(msg, 1));
  EXPECT_EQ(msg.message_id(), 1);
  int32_t period = msg.curr_period();
  msg.UpdateCurrPeriod(-50);
  EXPECT_EQ(msg.curr_period(), period + 50);
  EXPECT_EQ(msg.CanFrame().id, 1);
    
    #include 'modules/common/time/time.h'
#include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/radar/conti_radar/protocol/const_vars.h'
    
      x <<= 3;
  x |= t;
    
    
    {
    {
    {}  // namespace msf
}  // namespace localization
}  // namespace apollo

    
    static int get4BytesValue(const std::vector<uint8_t>& v, size_t& pos) {
  pos += 4;
  return folly::Endian::little(folly::loadUnaligned<int>(v.data() + pos - 4));
}
    
    exception_wrapper exception_wrapper::from_exception_ptr(
    std::exception_ptr const& ptr) noexcept {
  if (!ptr) {
    return exception_wrapper();
  }
  try {
    std::rethrow_exception(ptr);
  } catch (std::exception& e) {
    return exception_wrapper(std::current_exception(), e);
  } catch (...) {
    return exception_wrapper(std::current_exception());
  }
}
    
    inline UriTuple as_tuple(const folly::Uri& k) {
  return UriTuple(
      k.scheme(),
      k.username(),
      k.password(),
      k.host(),
      k.port(),
      k.path(),
      k.query(),
      k.fragment());
}
    
      VirtualExecutor(const VirtualExecutor&) = delete;
  VirtualExecutor& operator=(const VirtualExecutor&) = delete;
    
      // All of our boundary conditions below assume time_t is int64_t.
  // This is true on most modern platforms.
  if (!std::is_same<decltype(ts.tv_sec), int64_t>::value) {
    LOG(INFO) << 'skipping most overflow tests: time_t is not int64_t';
  } else {
    // Test the upper boundary of conversion to uint64_t nanoseconds
    using nsec_u64 = std::chrono::duration<uint64_t, std::nano>;
    ts.tv_sec = 18446744073;
    ts.tv_nsec = 709551615;
    EXPECT_EQ(std::numeric_limits<uint64_t>::max(), to<nsec_u64>(ts).count());
    }
    
      void reset(const std::shared_ptr<T>& p = nullptr) {
    auto newslots = folly::make_unique<Slots>();
    // Allocate each Holder in a different CoreRawAllocator stripe to
    // prevent false sharing. Their control blocks will be adjacent
    // thanks to allocate_shared().
    for (auto slot : folly::enumerate(newslots->slots_)) {
      auto alloc = getCoreAllocator<Holder, kNumSlots>(slot.index);
      auto holder = std::allocate_shared<Holder>(alloc, p);
      *slot = std::shared_ptr<T>(holder, p.get());
    }
    }
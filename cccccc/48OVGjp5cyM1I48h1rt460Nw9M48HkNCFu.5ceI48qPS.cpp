
        
        namespace {
    }
    
    
    {}  // namespace atom
    
    #include 'atom/browser/api/event_emitter.h'
#include 'atom/browser/auto_updater.h'
#include 'atom/browser/window_list_observer.h'
#include 'native_mate/arguments.h'
#include 'native_mate/handle.h'
    
    void GlobalShortcut::OnKeyPressed(const ui::Accelerator& accelerator) {
  if (accelerator_callback_map_.find(accelerator) ==
      accelerator_callback_map_.end()) {
    // This should never occur, because if it does, GlobalGlobalShortcutListener
    // notifes us with wrong accelerator.
    NOTREACHED();
    return;
  }
  accelerator_callback_map_[accelerator].Run();
}
    
    class Screen : public mate::EventEmitter<Screen>,
               public display::DisplayObserver {
 public:
  static v8::Local<v8::Value> Create(v8::Isolate* isolate);
    }
    
      // TrayIconObserver:
  void OnClicked(const gfx::Rect& bounds,
                 const gfx::Point& location,
                 int modifiers) override;
  void OnDoubleClicked(const gfx::Rect& bounds, int modifiers) override;
  void OnRightClicked(const gfx::Rect& bounds, int modifiers) override;
  void OnBalloonShow() override;
  void OnBalloonClicked() override;
  void OnBalloonClosed() override;
  void OnDrop() override;
  void OnDropFiles(const std::vector<std::string>& files) override;
  void OnDropText(const std::string& text) override;
  void OnDragEntered() override;
  void OnDragExited() override;
  void OnDragEnded() override;
  void OnMouseEntered(const gfx::Point& location, int modifiers) override;
  void OnMouseExited(const gfx::Point& location, int modifiers) override;
  void OnMouseMoved(const gfx::Point& location, int modifiers) override;
    
    #include 'atom/common/api/api_messages.h'
#include 'atom/common/native_mate_converters/string16_converter.h'
#include 'atom/common/native_mate_converters/value_converter.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/web_contents.h'
#include 'native_mate/object_template_builder.h'
    
    
static void secp256k1_rfc6979_hmac_sha256_initialize(secp256k1_rfc6979_hmac_sha256_t *rng, const unsigned char *key, size_t keylen) {
    secp256k1_hmac_sha256_t hmac;
    static const unsigned char zero[1] = {0x00};
    static const unsigned char one[1] = {0x01};
    }
    
            secp256k1_ecmult_const(&res, &pt, &s);
        secp256k1_ge_set_gej(&pt, &res);
        /* Compute a hash of the point in compressed form
         * Note we cannot use secp256k1_eckey_pubkey_serialize here since it does not
         * expect its output to be secret and has a timing sidechannel. */
        secp256k1_fe_normalize(&pt.x);
        secp256k1_fe_normalize(&pt.y);
        secp256k1_fe_get_b32(x, &pt.x);
        y[0] = 0x02 | secp256k1_fe_is_odd(&pt.y);
    
    // Verify that difficulty is 1.0 for an empty chain.
BOOST_AUTO_TEST_CASE(get_difficulty_for_null_tip)
{
    double difficulty = GetDifficulty(nullptr);
    RejectDifficultyMismatch(difficulty, 1.0);
}
    
        UniValue v3(UniValue::VSTR, 'foo');
    BOOST_CHECK(v3.isStr());
    BOOST_CHECK_EQUAL(v3.getValStr(), 'foo');
    
        // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    const Message* GetCProtoInsidePyProto(PyObject* msg) {
  return GetCProtoInsidePyProtoPtr(msg);
}
Message* MutableCProtoInsidePyProto(PyObject* msg) {
  return MutableCProtoInsidePyProtoPtr(msg);
}
    
    void GeneratorContext::GetCompilerVersion(Version* version) const {
  version->set_major(GOOGLE_PROTOBUF_VERSION / 1000000);
  version->set_minor(GOOGLE_PROTOBUF_VERSION / 1000 % 1000);
  version->set_patch(GOOGLE_PROTOBUF_VERSION % 1000);
  version->set_suffix(GOOGLE_PROTOBUF_VERSION_SUFFIX);
}
    
    TEST(MovableMessageTest, SelfMoveAssignment) {
  // The `self` reference is necessary to defeat -Wself-move.
  protobuf_unittest::TestAllTypes message, &self = message;
  TestUtil::SetAllFields(&message);
  message = std::move(self);
  TestUtil::ExpectAllFieldsSet(message);
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
      static const int kBytesPerLine = 40;  // allow for escaping
  printer->Print(
      '    static const char *valueNames =');
  for (int i = 0; i < text_blob.size(); i += kBytesPerLine) {
    printer->Print(
        '\n        \'$data$\'',
        'data', EscapeTrigraphs(CEscape(text_blob.substr(i, kBytesPerLine))));
  }
  printer->Print(
      ';\n'
      '    static const int32_t values[] = {\n');
  for (int i = 0; i < all_values_.size(); i++) {
    printer->Print('        $name$,\n',  'name', EnumValueName(all_values_[i]));
  }
  printer->Print('    };\n');
    
    EnumFieldGenerator::~EnumFieldGenerator() {}
    
    void ExtensionGenerator::GenerateMembersHeader(io::Printer* printer) {
  std::map<string, string> vars;
  vars['method_name'] = method_name_;
  SourceLocation location;
  if (descriptor_->GetSourceLocation(&location)) {
    vars['comments'] = BuildCommentsString(location, true);
  } else {
    vars['comments'] = '';
  }
  // Unlike normal message fields, check if the file for the extension was
  // deprecated.
  vars['deprecated_attribute'] = GetOptionalDeprecatedAttribute(descriptor_, descriptor_->file());
  printer->Print(vars,
                 '$comments$'
                 '+ (GPBExtensionDescriptor *)$method_name$$deprecated_attribute$;\n');
}
    
      void GenerateMembersHeader(io::Printer* printer);
  void GenerateStaticVariablesInitialization(io::Printer* printer);
  void GenerateRegistrationSource(io::Printer* printer);
    
    CC_CONSTRUCTOR_ACCESS:
    /**
     * @js ctor
     */
    Follow()
    : _followedNode(nullptr)
    , _boundarySet(false)
    , _boundaryFullyCovered(false)
    , _leftBoundary(0.0)
    , _rightBoundary(0.0)
    , _topBoundary(0.0)
    , _bottomBoundary(0.0)
    , _offsetX(0.0)
    , _offsetY(0.0)
    , _worldRect(Rect::ZERO)
    {}
    /**
     * @js NA
     * @lua NA
     */
    virtual ~Follow();
    
    /**
     * Initializes the action with a set boundary or with no boundary.
     *
     * @param followedNode  The node to be followed.
     * @param rect  The boundary. If \p rect is equal to Rect::ZERO, it'll work
     *              with no boundary.
    */
    bool initWithTarget(Node *followedNode, const Rect& rect = Rect::ZERO);
    
    
    /**
     * Initializes the action with a set boundary or with no boundary with offsets.
     *
     * @param followedNode  The node to be followed.
     * @param rect  The boundary. If \p rect is equal to Rect::ZERO, it'll work
     *              with no boundary.
     * @param xOffset The horizontal offset from the center of the screen from which the
     *                node  is to be followed.It can be positive,negative or zero.If
     *                set to zero the node will be horizontally centered followed.
     * @param yOffset The vertical offset from the center of the screen from which the
     *                node is to be followed.It can be positive,negative or zero.
     *                If set to zero the node will be vertically centered followed.
     *   If both xOffset and yOffset are set to zero,then the node will be horizontally and vertically centered followed.
    
    void EaseBezierAction::update(float time)
{
    _inner->update(tweenfunc::bezieratFunction(_p0,_p1,_p2,_p3,time));
}
    
    
    {    return false;
}
    
    NS_CC_END
    
    protected:
    int _randrange;
    bool _once;
    bool _shatterZ;
    
            for (auto& frameName : frameNames)
        {
            SpriteFrame* spriteFrame = frameCache->getSpriteFrameByName(frameName.asString());
    }
    
      void IncDone() {
    num_done_++;
  }
    
      // Input statistics
  // TODO(noetzli): The stats are incomplete. They are lacking everything
  // consumed by MergeHelper.
  uint64_t num_input_records = 0;
  uint64_t num_input_deletion_records = 0;
  uint64_t num_input_corrupt_records = 0;
  uint64_t total_input_raw_key_bytes = 0;
  uint64_t total_input_raw_value_bytes = 0;
    
    
    {
    {  bool IsShuttingDown() {
    // This is a best-effort facility, so memory_order_relaxed is sufficient.
    return shutting_down_ && shutting_down_->load(std::memory_order_relaxed);
  }
};
}  // namespace rocksdb

    
    class DeleteFilterFactory : public CompactionFilterFactory {
 public:
  virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context) override {
    if (context.is_manual_compaction) {
      return std::unique_ptr<CompactionFilter>(new DeleteFilter());
    } else {
      return std::unique_ptr<CompactionFilter>(nullptr);
    }
  }
    }
    
    
    {
    {    if (data.ToString().find('foo567') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('v1.fetdq') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('bar123') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('v2.dfgkjdfghsd') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('dfgk') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
  }
  if (encrypted_env_) {
    ASSERT_EQ(hits, 0);
  } else {
    ASSERT_GE(hits, 4);
  }
}
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
      // Doesn't really sleep, just affects output of GetCurrentTime(), NowMicros()
  // and NowNanos()
  void FakeSleepForMicroseconds(int64_t micros);
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
      // When flush happens, it determines whether to trigger compaction. If
  // triggered_writes_stop is true, it will also set the retry flag of
  // compaction-task to true.
  void OnFlushCompleted(
      DB* db, const FlushJobInfo& info) override {
    CompactionTask* task = PickCompaction(db, info.cf_name);
    if (task != nullptr) {
      if (info.triggered_writes_stop) {
        task->retry_on_fail = true;
      }
      // Schedule compaction in a different thread.
      ScheduleCompaction(task);
    }
  }
    
    #endif  // ROCKSDB_LITE

    
    namespace folly {
    }
    
    BENCHMARK(BENCHFUN(zzInitRNG)) {
  srand(seed);
}
    
    #include <folly/Benchmark.h>
#include <folly/FileUtil.h>
#include <folly/init/Init.h>
#include <folly/json.h>
    
    // Check the return code from a fopen-style function (returns a non-nullptr
// FILE* on success, nullptr on error, sets errno).  Works with fopen, fdopen,
// freopen, tmpfile, etc.
template <class... Args>
void checkFopenError(FILE* fp, Args&&... args) {
  if (UNLIKELY(!fp)) {
    throwSystemError(std::forward<Args>(args)...);
  }
}
    
    // Empirically, this indicates if the runtime supports
// std::exception_ptr, as not all (arm, for instance) do.
#if defined(__GNUC__) && defined(__GCC_ATOMIC_INT_LOCK_FREE) && \
    __GCC_ATOMIC_INT_LOCK_FREE > 1
inline fbstring exceptionStr(std::exception_ptr ep) {
  try {
    std::rethrow_exception(ep);
  } catch (const std::exception& e) {
    return exceptionStr(e);
  } catch (...) {
    return '<unknown exception>';
  }
}
#endif
    
    /*
 * Encode a single unicode code point into a UTF-8 byte sequence.
 *
 * Return value is undefined if `cp' is an invalid code point.
 */
std::string codePointToUtf8(char32_t cp);
    
    #ifndef FOLLY_URI_H_
#error This file may only be included from folly/Uri.h
#endif
    
      // Install a pointer to ourselves as the allocator.
  *reinterpret_cast<SimpleAllocator**>(mem_) = this;
  static_assert(max_align_v >= sizeof(SimpleAllocator*), 'alignment too small');
  mem_ += std::min(sz_, max_align_v);
    
    
    {  std::array<std::shared_ptr<T>, kNumSlots> slots_;
};
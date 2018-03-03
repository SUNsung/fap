
        
        TEST(AnyTest, TestPackAndUnpack) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(submessage);
    }
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
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
    
    template<class SerDe>
void RepoAuthType::Array::serialize(SerDe& sd) const {
  sd(m_tag)
    (m_emptiness)
    (m_id)
    (m_size)
    ;
    }
    
    //////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////
    
    #define PRINT_MSG(...)                          \
  switch (m_report) {                           \
    case Log:                                   \
      Logger::Info(__VA_ARGS__);                \
      break;                                    \
    case Stderr:                                \
      fprintf(stderr, __VA_ARGS__);             \
      break;                                    \
    case Trace:                                 \
      Trace::traceRelease(__VA_ARGS__);         \
      break;                                    \
    default: not_reached();                     \
  }
    
      String getResults(
    Array &headers,
    int &code,
    int64_t timeout_ms
  );
    
      /*
   * Allocate a block of data to hold n objects of type T.
   *
   * Any instructions with VdataPtr members that point inside the buffer
   * returned by allocData() will automatically be fixed up during a relocation
   * pass immediately before final code emission.
   */
  template<typename T>
  T* allocData(size_t n = 1) {
    auto const size = sizeof(T) * n;
    dataBlocks.emplace_back();
    }
    
      Variant ret;
    
      // First, we can easily compute the weight of the non-crititical arcs by
  // looking at its incident blocks.
  for (auto b : m_blocks) {
    auto succSet = succs(m_unit.blocks[b]);
    for (auto s : succSet) {
      auto arcid = arcId(b, s);
      m_arcWgts[arcid] = succSet.size()    == 1 ? weight(b)
                       : m_preds[s].size() == 1 ? weight(s)
                       : kUnknownWeight;
      assertx(m_arcWgts[arcid] >= 0);
      if (m_arcWgts[arcid] != kUnknownWeight) {
        FTRACE(3, '  - arc({} -> {}) [non-critical] => weight = {}  '
               '[|succs(b)| = {} ; |preds(s)| = {}] '
               '[weight(b) = {} ; weight(s) = {}]\n', b, s, m_arcWgts[arcid],
               succSet.size(), m_preds[s].size(), weight(b), weight(s));
      }
    }
  }
    
    /*
 * Assert that Vreg widths match between defs and uses.
 *
 * This should only be run before any zero-extending or truncating copies get
 * reduced to regular copies---so, before simplify() or the various lowering
 * passes.
 */
bool checkWidths(Vunit& unit);
    
      /**
   * Add additional worker threads
   */
  virtual void addWorkers(int numWorkers) = 0;
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    /*The number of extra bits of precision at which to store rate metrics.*/
# define OC_BIT_SCALE  (6)
/*The number of extra bits of precision at which to store RMSE metrics.
  This must be at least half OC_BIT_SCALE (rounded up).*/
# define OC_RMSE_SCALE (5)
/*The number of bins to partition statistics into.*/
# define OC_SAD_BINS   (24)
/*The number of bits of precision to drop from SAD scores to assign them to a
   bin.*/
# define OC_SAD_SHIFT  (9)
    
    static const vorbis_info_residue0 _residue_44_high={
  0,-1, -1, 10,-1,-1,
  /* 0   1   2   3   4   5   6   7   8  */
  {0},
  {-1},
  {  0,  1,  2,  4,  8, 16, 32, 71,157},
  {  0,  1,  2,  3,  4,  8, 16, 71,157},
};
    
    static const vorbis_mapping_template _mapres_template_44_51[]={
  { _map_nominal_51, _res_44p51_n1 }, /* -1 */
  { _map_nominal_51, _res_44p51_0 }, /* 0 */
  { _map_nominal_51, _res_44p51_1 }, /* 1 */
  { _map_nominal_51, _res_44p51_2 }, /* 2 */
  { _map_nominal_51, _res_44p51_3 }, /* 3 */
  { _map_nominal_51, _res_44p51_4 }, /* 4 */
  { _map_nominal_51u, _res_44p51_5 }, /* 5 */
  { _map_nominal_51u, _res_44p51_6 }, /* 6 */
  { _map_nominal_51u, _res_44p51_7 }, /* 7 */
  { _map_nominal_51u, _res_44p51_8 }, /* 8 */
  { _map_nominal_51u, _res_44p51_9 }, /* 9 */
};

    
    
    {  {1,0,32,  &_residue_44_mid_un,
   &_huff_book__44u7__long,&_huff_book__44u7__long,
   &_resbook_44u_7,&_resbook_44u_7}
};
    
    #if (HAVE_LRINTF)
    
    #undef MULT32_32_Q31
static inline int MULT32_32_Q31(int a, int b)
{
    int r;
    asm volatile('MULT $ac1, %0, %1' : : 'r' (a), 'r' (b));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (r): 'i' (31));
    return r;
}
    
    /*gcc appears to emit MOVDQA's to load the argument of an _mm_cvtepi8_epi32()
  or _mm_cvtepi16_epi32() when optimizations are disabled, even though the
  actual PMOVSXWD instruction takes an m32 or m64. Unlike a normal memory
  reference, these require 16-byte alignment and load a full 16 bytes (instead
  of 4 or 8), possibly reading out of bounds.
    
    
    {    in_upper = (opus_int32)silk_RSHIFT64(in, 32);
    if (in_upper == 0) {
        /* Search in the lower 32 bits */
        return 32 + silk_CLZ32( (opus_int32) in );
    } else {
        /* Search in the upper 32 bits */
        return silk_CLZ32( in_upper );
    }
}
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
      StringDest dest_;
  StringSource source_;
  ReportCollector report_;
  bool reading_;
  Writer* writer_;
  Reader* reader_;
    
      for (DeletedFileSet::const_iterator iter = deleted_files_.begin();
       iter != deleted_files_.end();
       ++iter) {
    PutVarint32(dst, kDeletedFile);
    PutVarint32(dst, iter->first);   // level
    PutVarint64(dst, iter->second);  // file number
  }
    
    
    {}  // namespace leveldb
    
    #include <osquery/core.h>
#include <osquery/database.h>
#include <osquery/filesystem.h>
#include <osquery/logger.h>
#include <osquery/tables.h>
    
    #include <osquery/config.h>
#include <osquery/core.h>
#include <osquery/database.h>
#include <osquery/events.h>
#include <osquery/extensions.h>
#include <osquery/filesystem.h>
#include <osquery/flags.h>
#include <osquery/logger.h>
#include <osquery/registry.h>
#include <osquery/sql.h>
#include <osquery/status.h>
#include <osquery/tables.h>
    
    /// Prefix applied to the file carve tar archive.
const std::string kCarveNamePrefix = 'carve_';
    
    /// Prefix used for posix tar archive.
const std::string kTestCarveNamePrefix = 'carve_';
    
    #endif // __cocos2dx_builder_h__

    
    
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_isBackgroundMusicPlaying'', nullptr);
        return 0;
    }
#endif
    
    
    
    #ifndef TEST_H
#define TEST_H
    
    			b2EdgeShape shape;
    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 1.0f;
    
    			b2WeldJointDef jd;
			jd.frequencyHz = 5.0f;
			jd.dampingRatio = 0.7f;
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
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
    
    #endif  // GUETZLI_FDCT_H_

    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_JPEG_DATA_ENCODER_H_
#define GUETZLI_JPEG_DATA_ENCODER_H_
    
    #endif  // GUETZLI_PREPROCESS_DOWNSAMPLE_H_

    
    TEST(AtomicSharedPtr, ConstTest) {
  const auto a(std::make_shared<foo>());
  atomic_shared_ptr<foo> atom;
  atom.store(a);
    }
    
      /** try_dequeue_until */
  template <typename Clock, typename Duration>
  FOLLY_ALWAYS_INLINE bool try_dequeue_until(
      T& elem,
      const std::chrono::time_point<Clock, Duration>& deadline) {
    if (q_.try_dequeue_until(elem, deadline)) {
      addCredit(WeightFn()(elem));
      return true;
    }
    return false;
  }
    
      class Integer {
   public:
    ThreadCachedInts* ints_;
    constexpr Integer(ThreadCachedInts* ints) noexcept
        : ints_(ints), inc_{}, dec_{} {}
    std::atomic<int64_t> inc_[2];
    std::atomic<int64_t> dec_[2];
    ~Integer() noexcept {
      // Increment counts must be set before decrement counts
      ints_->orphan_inc_[0].fetch_add(
          inc_[0].load(std::memory_order_relaxed), std::memory_order_relaxed);
      ints_->orphan_inc_[1].fetch_add(
          inc_[1].load(std::memory_order_relaxed), std::memory_order_relaxed);
      folly::asymmetricLightBarrier(); // B
      ints_->orphan_dec_[0].fetch_add(
          dec_[0].load(std::memory_order_relaxed), std::memory_order_relaxed);
      ints_->orphan_dec_[1].fetch_add(
          dec_[1].load(std::memory_order_relaxed), std::memory_order_relaxed);
      ints_->waiting_.store(0, std::memory_order_release);
      ints_->waiting_.futexWake();
    }
  };
  folly::ThreadLocalPtr<Integer, Tag> cs_;
    
    TEST(CoreAllocator, Basic) {
  CoreAllocator<32> alloc;
  auto a = alloc.get(0);
  auto res = a->allocate(8);
  memset(res, 0, 8);
  a->deallocate(res);
  res = a->allocate(8);
  EXPECT_TRUE((intptr_t)res % 8 == 0); // check alignment
  memset(res, 0, 8);
  a->deallocate(res);
  res = a->allocate(12);
  EXPECT_TRUE((intptr_t)res % 16 == 0); // check alignment
  memset(res, 0, 12);
  a->deallocate(res);
  res = a->allocate(257);
  memset(res, 0, 257);
  a->deallocate(res);
    }
    
    /**
 * ScopeGuard is a general implementation of the 'Initialization is
 * Resource Acquisition' idiom.  Basically, it guarantees that a function
 * is executed upon leaving the currrent scope unless otherwise told.
 *
 * The makeGuard() function is used to create a new ScopeGuard object.
 * It can be instantiated with a lambda function, a std::function<void()>,
 * a functor, or a void(*)() function pointer.
 *
 *
 * Usage example: Add a friend to memory if and only if it is also added
 * to the db.
 *
 * void User::addFriend(User& newFriend) {
 *   // add the friend to memory
 *   friends_.push_back(&newFriend);
 *
 *   // If the db insertion that follows fails, we should
 *   // remove it from memory.
 *   auto guard = makeGuard([&] { friends_.pop_back(); });
 *
 *   // this will throw an exception upon error, which
 *   // makes the ScopeGuard execute UserCont::pop_back()
 *   // once the Guard's destructor is called.
 *   db_->addFriend(GetName(), newFriend.GetName());
 *
 *   // an exception was not thrown, so don't execute
 *   // the Guard.
 *   guard.dismiss();
 * }
 *
 * Examine ScopeGuardTest.cpp for some more sample usage.
 *
 * Stolen from:
 *   Andrei's and Petru Marginean's CUJ article:
 *     http://drdobbs.com/184403758
 *   and the loki library:
 *     http://loki-lib.sourceforge.net/index.php?n=Idioms.ScopeGuardPointer
 *   and triendl.kj article:
 *     http://www.codeproject.com/KB/cpp/scope_guard.aspx
 */
template <typename F>
detail::ScopeGuardImplDecay<F> makeGuard(F&& f) noexcept(
    noexcept(detail::ScopeGuardImplDecay<F>(static_cast<F&&>(f)))) {
  return detail::ScopeGuardImplDecay<F>(static_cast<F&&>(f));
}
    
    namespace {
folly::dynamic& insertAtKey(
    folly::dynamic* d, bool allow_non_string_keys, const folly::dynamic& key) {
  if (key.isString()) {
    return (*d)[key];
  // folly::dynamic allows non-null scalars for keys.
  } else if (key.isNumber() || key.isBool()) {
    return allow_non_string_keys ? (*d)[key] : (*d)[key.asString()];
  }
  // One cause might be oddness like p.optional(dynamic::array(...), ...);
  throw DynamicParserLogicError(
    'Unsupported key type ', key.typeName(), ' of ', detail::toPseudoJson(key)
  );
}
} // namespace
    
      template <typename Fn>
  void parse(const folly::dynamic& key, const folly::dynamic& value, Fn fn);
    
    
    {  info.command(vm, cmdArgs);
}
    
    // Return the services for generated header file.
grpc::string GetHeaderServices(grpc_generator::File *file,
                               const Parameters &params);
    
      void SayManyHellos(const std::string &name, int num_greetings,
                     std::function<void(const std::string &)> callback) {
    flatbuffers::grpc::MessageBuilder mb;
    auto name_offset = mb.CreateString(name);
    auto request_offset =
        CreateManyHellosRequest(mb, name_offset, num_greetings);
    mb.Finish(request_offset);
    auto request_msg = mb.ReleaseMessage<ManyHellosRequest>();
    }
    
    struct Field FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_NAME = 4,
    VT_TYPE = 6,
    VT_ID = 8,
    VT_OFFSET = 10,
    VT_DEFAULT_INTEGER = 12,
    VT_DEFAULT_REAL = 14,
    VT_DEPRECATED = 16,
    VT_REQUIRED = 18,
    VT_KEY = 20,
    VT_ATTRIBUTES = 22,
    VT_DOCUMENTATION = 24
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool KeyCompareLessThan(const Field *o) const {
    return *name() < *o->name();
  }
  int KeyCompareWithValue(const char *val) const {
    return strcmp(name()->c_str(), val);
  }
  const Type *type() const {
    return GetPointer<const Type *>(VT_TYPE);
  }
  uint16_t id() const {
    return GetField<uint16_t>(VT_ID, 0);
  }
  uint16_t offset() const {
    return GetField<uint16_t>(VT_OFFSET, 0);
  }
  int64_t default_integer() const {
    return GetField<int64_t>(VT_DEFAULT_INTEGER, 0);
  }
  double default_real() const {
    return GetField<double>(VT_DEFAULT_REAL, 0.0);
  }
  bool deprecated() const {
    return GetField<uint8_t>(VT_DEPRECATED, 0) != 0;
  }
  bool required() const {
    return GetField<uint8_t>(VT_REQUIRED, 0) != 0;
  }
  bool key() const {
    return GetField<uint8_t>(VT_KEY, 0) != 0;
  }
  const flatbuffers::Vector<flatbuffers::Offset<KeyValue>> *attributes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<KeyValue>> *>(VT_ATTRIBUTES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *documentation() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_DOCUMENTATION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyOffsetRequired(verifier, VT_TYPE) &&
           verifier.VerifyTable(type()) &&
           VerifyField<uint16_t>(verifier, VT_ID) &&
           VerifyField<uint16_t>(verifier, VT_OFFSET) &&
           VerifyField<int64_t>(verifier, VT_DEFAULT_INTEGER) &&
           VerifyField<double>(verifier, VT_DEFAULT_REAL) &&
           VerifyField<uint8_t>(verifier, VT_DEPRECATED) &&
           VerifyField<uint8_t>(verifier, VT_REQUIRED) &&
           VerifyField<uint8_t>(verifier, VT_KEY) &&
           VerifyOffset(verifier, VT_ATTRIBUTES) &&
           verifier.Verify(attributes()) &&
           verifier.VerifyVectorOfTables(attributes()) &&
           VerifyOffset(verifier, VT_DOCUMENTATION) &&
           verifier.Verify(documentation()) &&
           verifier.VerifyVectorOfStrings(documentation()) &&
           verifier.EndTable();
  }
};
    
    MonsterStorage::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel)  , rpcmethod_Store_(MonsterStorage_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Retrieve_(MonsterStorage_method_names[1], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}
  
::grpc::Status MonsterStorage::Stub::Store(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, flatbuffers::grpc::Message<Stat>* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Store_, context, request, response);
}
    
    #include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>
    
    // A common interface for objects having comments in the source.
// Return formatted comments to be inserted in generated code.
struct CommentHolder {
  virtual ~CommentHolder() {}
  virtual grpc::string GetLeadingComments(const grpc::string prefix) const = 0;
  virtual grpc::string GetTrailingComments(const grpc::string prefix) const = 0;
  virtual std::vector<grpc::string> GetAllComments() const = 0;
};
    
        if (status.ok()) {
      auto resp = response.GetRoot()->id();
      std::cout << 'RPC response: ' << resp->str() << std::endl;
    } else {
      std::cout << 'RPC failed' << std::endl;
    }
  }
  {
    grpc::ClientContext context;
    fbb.Clear();
    auto stat_offset = CreateStat(fbb, fbb.CreateString('Fred'));
    fbb.Finish(stat_offset);
    auto request = fbb.ReleaseMessage<Stat>();
    
    
    {
    {    auto end = text.find('}}');
    if (end == std::string::npos || end < begin) { break; }
    
    static void Error(const flatbuffers::FlatCompiler *flatc,
                  const std::string &err, bool usage, bool show_exe_name) {
  if (show_exe_name) { printf('%s: ', g_program_name); }
  printf('error: %s\n', err.c_str());
  if (usage) { printf('%s', flatc->GetUsageString(g_program_name).c_str()); }
  exit(1);
}

        
        
    {}
    
    void Clusterizer::clusterize() {
  struct ArcInfo {
    Vlabel  src;
    Vlabel  dst;
    int64_t wgt;
  };
  jit::vector<ArcInfo> arcInfos;
  for (auto b : m_blocks) {
    for (auto s : succs(m_unit.blocks[b])) {
      arcInfos.push_back({b, s, m_scale.weight(b, s)});
    }
  }
    }
    
    #define DECLARE_VNUM(Vnum, check, prefix)                 \
struct Vnum {                                             \
  Vnum() {}                                               \
  explicit Vnum(size_t n) : n(safe_cast<uint32_t>(n)) {}  \
                                                          \
  /* implicit */ operator size_t() const {                \
    if (check) assertx(n != kInvalidId);                   \
    return n;                                             \
  }                                                       \
                                                          \
  bool isValid() const {                                  \
    return n != kInvalidId;                               \
  }                                                       \
                                                          \
  std::string toString() const {                          \
    if (n == kInvalidId) return prefix '?';               \
    return folly::to<std::string>(prefix, n);             \
  }                                                       \
                                                          \
private:                                                  \
  static constexpr uint32_t kInvalidId = 0xffffffff;      \
  uint32_t n{kInvalidId};                                 \
}
    
      if (type <= TInt) {
    // No special treatment needed
    index = switchVal;
  } else if (type <= TDbl) {
    // switch(Double|String|Obj)Helper do bounds-checking for us, so we need to
    // make sure the default case is in the jump table, and don't emit our own
    // bounds-checking code.
    bounded = false;
    index = gen(env, LdSwitchDblIndex, switchVal, ssabase, ssatargets);
  } else if (type <= TStr) {
    bounded = false;
    index = gen(env, LdSwitchStrIndex, switchVal, ssabase, ssatargets);
  } else if (type <= TObj) {
    // switchObjHelper can throw exceptions and reenter the VM so we use the
    // catch block here.
    bounded = false;
    index = gen(env, LdSwitchObjIndex, switchVal, ssabase, ssatargets);
  } else {
    PUNT(Switch-UnknownType);
  }
    
    /*
 * A NormalizedInstruction contains information about a decoded bytecode
 * instruction, including the unit it lives in, decoded immediates, and a few
 * flags of interest the various parts of the jit.
 */
struct NormalizedInstruction {
  SrcKey source;
  const Func* funcd; // The Func in the topmost AR on the stack. Guaranteed to
                     // be accurate. Don't guess about this. Note that this is
                     // *not* the function whose body the NI belongs to.
                     // Note that for an FPush* may be set to the (statically
                     // known Func* that /this/ instruction is pushing)
  const Unit* m_unit;
    }
    
    #endif
    
    void test_barrier_group(std::shared_ptr<thd::DataChannel> data_channel,
                        THDGroup group, std::vector<thd::rank_type> group_ranks) {
  if (contains(group_ranks, data_channel->getRank())) {
    for (int i = 0; i < group_ranks.size(); ++i) {
      if (data_channel->getRank() == group_ranks[i]) {
        int64_t time_after_barrier = nowInMilliseconds() + BARRIER_WAIT_TIME;
        auto time_tensor = buildTensor<int64_t>({1}, time_after_barrier);
        data_channel->broadcast(*time_tensor, group_ranks[i], group);
        std::this_thread::sleep_for(std::chrono::milliseconds(BARRIER_WAIT_TIME + 10));
        data_channel->barrier(group);
      } else {
        auto time_tensor = buildTensor<int64_t>({1}, -1);
        data_channel->broadcast(*time_tensor, group_ranks[i], group); // get expected time after barrier
        data_channel->barrier(group);
        assert(nowInMilliseconds() >= reinterpret_cast<int64_t*>(time_tensor->data())[0]);
      }
    }
  } else {
    std::this_thread::sleep_for(std::chrono::milliseconds(BARRIER_WAIT_TIME + 100));
    data_channel->barrier(group);
  }
}
    
      tensor->resize({1, 2, 3});
  assert(tensor->nDim() == 3);
  int i = 0;
  for (auto s: tensor->sizes())
    assert(s == ++i);
    
    int64_t stride(const Tensor& self, int64_t dim) {
  // false is passed to maybe_wrap_dim so behavior is identical to array access (but with wrapping)
  dim = maybe_wrap_dim(dim, self.dim(), false);
  return self.strides()[dim];
}
    
    #if ${isCUDA}
static cudaError_t call_deleter(void * ctx, void * data) {
  auto fnptr = (std::function<void(void*)>*) ctx;
  (*fnptr)(data);
  delete fnptr;
  return cudaSuccess;
}
static THCDeviceAllocator storage_deleter = {
  nullptr,
  nullptr,
  call_deleter,
  nullptr,
  nullptr,
};
static cudaError_t wrapped_alloc(void * ctx, void** result, size_t size, cudaStream_t stream) {
  auto ac = static_cast<detail::AllocatorRetainable*>(ctx);
  ac->retain();
  *result = ac->allocate(size);
  return cudaSuccess;
}
static cudaError_t wrapped_free(void * ctx, void * data) {
  auto ac = static_cast<detail::AllocatorRetainable*>(ctx);
  ac->deallocate(data);
  ac->release();
  return cudaSuccess;
}
static THCDeviceAllocator wrapped_allocator = {
  wrapped_alloc,
  nullptr,
  wrapped_free,
  nullptr,
  nullptr,
};
#else
static void call_deleter(void * ctx, void * data) {
  auto fnptr = (std::function<void(void*)>*) ctx;
  (*fnptr)(data);
  delete fnptr;
}
static THAllocator storage_deleter = {
  nullptr,
  nullptr,
  call_deleter,
};
static void* wrapped_alloc(void * ctx, ptrdiff_t size) {
  auto ac = static_cast<detail::AllocatorRetainable*>(ctx);
  ac->retain();
  return ac->allocate(size);
}
static void wrapped_free(void * ctx, void * data) {
  auto ac = static_cast<detail::AllocatorRetainable*>(ctx);
  ac->deallocate(data);
  ac->release();
}
static THAllocator wrapped_allocator = {
  wrapped_alloc,
  nullptr,
  wrapped_free,
};
#endif
    
    
    {}

    
    
    {} // namespace thd
    
    inline PyObject* load_scalar(void* data, at::ScalarType scalarType) {
  switch (scalarType) {
    case at::kByte: return THPUtils_packInt64(*(uint8_t*)data);
    case at::kChar: return THPUtils_packInt64(*(char*)data);
    case at::kShort: return THPUtils_packInt64(*(int16_t*)data);
    case at::kInt: return THPUtils_packInt64(*(int32_t*)data);
    case at::kLong: return THPUtils_packInt64(*(int64_t*)data);
    case at::kHalf: return PyFloat_FromDouble(at::convert<double, at::Half>(*(at::Half*)data));
    case at::kFloat: return PyFloat_FromDouble(*(float*)data);
    case at::kDouble: return PyFloat_FromDouble(*(double*)data);
    default: throw std::runtime_error('invalid type');
  }
}
    
    #include <cstring>
#include <structmember.h>
#include 'torch/csrc/Exceptions.h'
#include 'torch/csrc/utils/object_ptr.h'
#include 'torch/csrc/utils/python_strings.h'
#include 'torch/csrc/utils/tensor_dtypes.h'
#include 'torch/csrc/utils/tensor_types.h'
    
    // Wrap tensor operation outputs as PyObject*
    
        jobject     (*NewGlobalRef)(JNIEnv*, jobject);
    void        (*DeleteGlobalRef)(JNIEnv*, jobject);
    void        (*DeleteLocalRef)(JNIEnv*, jobject);
    jboolean    (*IsSameObject)(JNIEnv*, jobject, jobject);
    
        Value(int unit, double value)
    : unit(unit)
    , value(value)
    {
    }
    
    // convert to alias_ref<T> from T
template <typename T>
struct Convert<alias_ref<T>> {
  typedef JniType<T> jniType;
  static alias_ref<jniType> fromJni(jniType t) {
    return wrap_alias(t);
  }
  static jniType toJniRet(alias_ref<jniType> t) {
    return t.get();
  }
  static jniType toCall(alias_ref<jniType> t) {
    return t.get();
  }
};
    
    
    { private:
  const InstructionPointer absoluteProgramCounter_;
  const InstructionPointer libraryBase_;
  const InstructionPointer functionAddress_;
  const std::string libraryName_;
  const std::string functionName_;
};
    
      YGNodeCalculateLayout(root, 200, 100, YGDirectionLTR);
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
        int getAlignContent(void) const;
    int getAlignItems(void) const;
    int getAlignSelf(void) const;
    int getFlexDirection(void) const;
    int getFlexWrap(void) const;
    int getJustifyContent(void) const;
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
      bool operator==(const ProgramLocation& other) const {
    // Assumes that the strings are static
    return (m_functionName == other.m_functionName) && (m_fileName == other.m_fileName) && m_lineNumber == other.m_lineNumber;
  }
    
    #define FBCRASH(msg, ...) facebook::assertInternal('Fatal error (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__)
#define FBUNREACHABLE() facebook::assertInternal('This code should be unreachable (%s:%d)', __FILE__, __LINE__)
    
      void PrintStats() {
    for (size_t i = 0; i < Inputs.size(); i++) {
      const auto &II = *Inputs[i];
      Printf('  [%zd %s]\tsz: %zd\truns: %zd\tsucc: %zd\n', i,
             Sha1ToString(II.Sha1).c_str(), II.U.size(),
             II.NumExecutedMutations, II.NumSuccessfullMutations);
    }
  }
    
    static const FlagDescription FlagDescriptions [] {
#define FUZZER_DEPRECATED_FLAG(Name)                                           \
  {#Name, 'Deprecated; don't use', 0, nullptr, nullptr, nullptr},
#define FUZZER_FLAG_INT(Name, Default, Description)                            \
  {#Name, Description, Default, &Flags.Name, nullptr, nullptr},
#define FUZZER_FLAG_UNSIGNED(Name, Default, Description)                       \
  {#Name,   Description, static_cast<int>(Default),                            \
   nullptr, nullptr, &Flags.Name},
#define FUZZER_FLAG_STRING(Name, Description)                                  \
  {#Name, Description, 0, nullptr, &Flags.Name, nullptr},
#include 'FuzzerFlags.def'
#undef FUZZER_DEPRECATED_FLAG
#undef FUZZER_FLAG_INT
#undef FUZZER_FLAG_UNSIGNED
#undef FUZZER_FLAG_STRING
};
    
    #include <istream>
#include <set>
    
    typedef struct sha1nfo {
	uint32_t buffer[BLOCK_LENGTH/4];
	uint32_t state[HASH_LENGTH/4];
	uint32_t byteCount;
	uint8_t bufferOffset;
	uint8_t keyBuffer[BLOCK_LENGTH];
	uint8_t innerHash[HASH_LENGTH];
} sha1nfo;
    
    std::string Sha1ToString(const uint8_t Sha1[kSHA1NumBytes]);
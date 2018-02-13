
        
          /// When evaluating an expression in the context of an existing source file,
  /// we may want to prefer declarations from that source file.
  /// The DebuggerClient can return a private-discriminator to tell lookup to
  /// prefer these certain decls.
  virtual Identifier getPreferredPrivateDiscriminator() = 0;
    
    void SyntaxASTMap::clearSyntaxMap() {
  SyntaxMap.shrink_and_clear();
}
    
      /// True if the FuncDecl requires an ObjC method descriptor.
  bool requiresObjCMethodDescriptor(FuncDecl *method);
    
      if (worklist.empty())
    return;
    
    SWIFT_DISPATCH_SOURCE_TYPE(DATA_ADD)
SWIFT_DISPATCH_SOURCE_TYPE(DATA_OR)
SWIFT_DISPATCH_SOURCE_TYPE(DATA_REPLACE)
SWIFT_DISPATCH_SOURCE_TYPE(MACH_SEND)
SWIFT_DISPATCH_SOURCE_TYPE(MACH_RECV)
SWIFT_DISPATCH_SOURCE_TYPE(MEMORYPRESSURE)
SWIFT_DISPATCH_SOURCE_TYPE(PROC)
SWIFT_DISPATCH_SOURCE_TYPE(READ)
SWIFT_DISPATCH_SOURCE_TYPE(SIGNAL)
SWIFT_DISPATCH_SOURCE_TYPE(TIMER)
SWIFT_DISPATCH_SOURCE_TYPE(VNODE)
SWIFT_DISPATCH_SOURCE_TYPE(WRITE)
    
    #pragma mark - NSData verification
    
      llvm::hash_code hashRecord() const { return recordHash; }
    
      // Only allow allocation using the allocator in MarkupContext or by
  // placement new.
  void *operator new(size_t Bytes, swift::markup::MarkupContext &MC,
                     unsigned Alignment = alignof(DocComment));
  void *operator new(size_t Bytes, void *Mem) {
    assert(Mem);
    return Mem;
  }
    
    
    {  bool hasFunctionDocumentation() const {
    return !ParamFields.empty() ||
             ReturnsField.hasValue() ||
             ThrowsField.hasValue();
  }
};
    
      bool isInputBufferID(unsigned BufferID) const {
    return std::binary_search(InputBufIDs.begin(), InputBufIDs.end(), BufferID);
  }
    
    // class PathArgument
// //////////////////////////////////////////////////////////////////
    
    // Find the file that declares the given fully-qualified symbol name.
bool PyDescriptorDatabase::FindFileContainingSymbol(
    const string& symbol_name, FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallMethod(py_database_, 'FindFileContainingSymbol', 's#',
                          symbol_name.c_str(), symbol_name.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    
    {  // Pointer to the parent's descriptor that describes this
  // field.  Used together with the parent's message when making a
  // default message instance mutable.
  // The pointer is owned by the global DescriptorPool.
  const FieldDescriptor* parent_field_descriptor;
} RepeatedScalarContainer;
    
    #include <string>
    
    void RepeatedMessageFieldGenerator::WriteToString(io::Printer* printer) {
  variables_['field_name'] = GetFieldName(descriptor_);
  printer->Print(
    variables_,
    'PrintField(\'$field_name$\', $name$_, writer);\n');
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_field_base.h>
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #include <sstream>
    
    #include <string>
    
     private:
  const FieldDescriptor* descriptor_;
  Context* context_;
  ClassNameResolver* name_resolver_;
  string scope_;
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See data_layer.cpp for an example.
   */
  void Transform(const Datum& datum, Blob<Dtype>* transformed_blob);
    
      virtual inline const char* type() const { return 'BNLL'; }
    
    
    {  /// when divided by UINT_MAX, the randomly generated values @f$u\sim U(0,1)@f$
  Blob<unsigned int> rand_vec_;
  /// the probability @f$ p @f$ of dropping any input
  Dtype threshold_;
  /// the scale for undropped inputs at train time @f$ 1 / (1 - p) @f$
  Dtype scale_;
  unsigned int uint_thres_;
};
    
    /**
 * @brief Compute elementwise operations, such as product and sum,
 *        along multiple input Blobs.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class EltwiseLayer : public Layer<Dtype> {
 public:
  explicit EltwiseLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {}  // namespace
    
    
/**********************************************************************
 * operator-
 *
 * Unary minus of an FCOORD.
 **********************************************************************/
    
    
/**********************************************************************
 * LLSQ::remove
 *
 * Delete an element from the acculuator.
 **********************************************************************/
    
      // To help very high cap/xheight ratio fonts accept the correct x-height,
  // and to allow the large caps in small caps to accept the xheight of the
  // small caps, add kBlnBaselineOffset to chars with a maximum max, and have
  // a top already at a significantly high position.
  if (max_top == kBlnCellHeight - 1 &&
      top > kBlnCellHeight - kBlnBaselineOffset / 2)
    max_top += kBlnBaselineOffset;
  top -= bln_yshift;
  int height = top - kBlnBaselineOffset;
  double min_height = min_top - kBlnBaselineOffset - tolerance;
  double max_height = max_top - kBlnBaselineOffset + tolerance;
    
    namespace tesseract {
    }
    
    template<class SerDe>
typename std::enable_if<!SerDe::deserializing>::type
ArrayTypeTable::serde(SerDe& sd) {
  always_assert(m_arrTypes.size() < std::numeric_limits<uint32_t>::max());
  uint32_t const size = m_arrTypes.size();
  sd(size);
  for (auto i = uint32_t{0}; i < size; ++i) {
    m_arrTypes[i]->serialize(sd);
  }
}
    
      using A = RepoAuthType::Array;
  using T = A::Tag;
  switch (ar.emptiness()) {
  case A::Empty::No:
    ret += 'N(';    // non-empty
    break;
  case A::Empty::Maybe:
    ret += '(';
    break;
  }
    
    
    {  if (flags & XhpTrace) {
    s_profiler_factory->start(ProfilerKind::Trace, flags);
  } else if (flags & Memo) {
    flags = 0;  /* flags are not used by MemoProfiler::MemoProfiler */
    s_profiler_factory->start(ProfilerKind::Memo, flags);
  } else if (flags & External) {
    for (ArrayIter iter(args); iter; ++iter) {
      if (iter.first().toInt32() == 0) {
         flags = iter.second().toInt32();
      }
    }
    s_profiler_factory->start(ProfilerKind::External, flags);
  } else {
    s_profiler_factory->start(ProfilerKind::Hierarchical, flags);
  }
}
    
    SlowTimer::SlowTimer(int64_t msThreshold, const char *location, const char *info)
  : m_timer(Timer::WallTime), m_msThreshold(msThreshold) {
  if (location) m_location = location;
  if (info) m_info = info;
}
    
    struct SlowTimer {
  SlowTimer(int64_t msThreshold, const char *location, const char *info);
  ~SlowTimer();
    }
    
      CmdAuth cmd;
  cmd.setSandboxPath(sandboxPath);
  if (!cmd.onServer(*this)) {
    TRACE_RB(2, 'DebuggerProxy::requestAuthToken: '
             'Failed to send CmdAuth to client\n');
    return '';
  }
    
    namespace jit {
    }
    
    /*
 * Vasm constant.
 *
 * Either a 1, 4, or 8 byte unsigned value, 8 byte double, or the disp32 part
 * of a thread-local address of an immutable constant that varies by thread.
 * Constants may also represent an undefined value, indicated by the isUndef
 * member.
 *
 * Also contains convenience constructors for various pointer and enum types.
 */
struct Vconst {
  enum Kind { Quad, Long, Byte, Double };
    }
    
    /*
 * Make block weights more consistent by enforcing that the weight of each block
 * doesn't exceed the sums of the weights of its predecessors or its successors.
 */
void fixBlockWeights(Vunit& unit);
    
      if (asprintf(&hmagicpath, '%s/.magic.mgc', home) < 0)
    return MAGIC;
  if (stat(hmagicpath, &st) == -1) {
    free(hmagicpath);
  if (asprintf(&hmagicpath, '%s/.magic', home) < 0)
    return MAGIC;
  if (stat(hmagicpath, &st) == -1)
    goto out;
  if (S_ISDIR(st.st_mode)) {
    free(hmagicpath);
    if (asprintf(&hmagicpath, '%s/%s', home, hmagic) < 0)
      return MAGIC;
    if (access(hmagicpath, R_OK) == -1)
      goto out;
  }
  }
    
    #include <folly/String.h>
    
    
    {  if (rv == 0) {
    return FutexResult::AWOKEN;
  } else {
    switch(errno) {
      case ETIMEDOUT:
        assert(timeout != nullptr);
        return FutexResult::TIMEDOUT;
      case EINTR:
        return FutexResult::INTERRUPTED;
      case EWOULDBLOCK:
        return FutexResult::VALUE_CHANGED;
      default:
        assert(false);
        // EINVAL, EACCESS, or EFAULT.  EINVAL means there was an invalid
        // op (should be impossible) or an invalid timeout (should have
        // been sanitized by timeSpecFromTimePoint).  EACCESS or EFAULT
        // means *addr points to invalid memory, which is unlikely because
        // the caller should have segfaulted already.  We can either
        // crash, or return a value that lets the process continue for
        // a bit. We choose the latter. VALUE_CHANGED probably turns the
        // caller into a spin lock.
        return FutexResult::VALUE_CHANGED;
    }
  }
}
    
    template <>
CacheLocality const& CacheLocality::system<test::DeterministicAtomic>() {
  static CacheLocality cache(CacheLocality::uniform(16));
  return cache;
}
    
    template <class... Ts>
struct MakeMembers {
  template <Ts... Vs>
  using Members = PolyMembers<Member<Ts, Vs>...>;
};
    
      static bool initialize() {
    getcpuFunc = pickGetcpuFunc();
    }
    
    namespace detail {
    }
    
    
    {
    {inline size_t qfind_first_byte_of_nosse(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  if (UNLIKELY(needles.empty() || haystack.empty())) {
    return std::string::npos;
  }
  // The thresholds below were empirically determined by benchmarking.
  // This is not an exact science since it depends on the CPU, the size of
  // needles, and the size of haystack.
  if ((needles.size() >= 4 && haystack.size() <= 10) ||
      (needles.size() >= 16 && haystack.size() <= 64) || needles.size() >= 32) {
    return qfind_first_byte_of_byteset(haystack, needles);
  }
  return qfind_first_byte_of_std(haystack, needles);
}
} // namespace detail
} // namespace folly

    
      size_t i = nextAlignedIndex(haystack.data());
  for (; i < haystack.size(); i += 16) {
    ret = scanHaystackBlock<true>(haystack, needles, i);
    if (ret != std::string::npos) {
      return ret;
    }
  }
    
    
    {  auto s = std::allocate_shared<std::string>(
    rebind_allocator<std::string>(alloc), 'HELLO, WORLD'
  );
  ASSERT_NE(nullptr, s.get());
  EXPECT_EQ('HELLO, WORLD', *s);
  s.reset();
  ASSERT_EQ(nullptr, s.get());
}
    
    
    { private:
  template <typename Fn>
  using IsMemFn = typename boost::function_types::template is_member_pointer<
    decltype(&Fn::operator())
  >;
  template <typename Fn>
  constexpr static typename std::enable_if<IsMemFn<Fn>::value, Kind>::type
  test(IsMemFn<Fn>*) { return IdentifyCallable::Kind::MemberFunction; }
  template <typename>
  constexpr static Kind test(...) { return IdentifyCallable::Kind::Function; }
};
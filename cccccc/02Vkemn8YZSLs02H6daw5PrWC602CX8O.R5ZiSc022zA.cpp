
        
        bool Converter<PersistentDictionary>::FromV8(v8::Isolate* isolate,
                                             v8::Local<v8::Value> val,
                                             PersistentDictionary* out) {
  if (!val->IsObject())
    return false;
  *out = PersistentDictionary(isolate, v8::Local<v8::Object>::Cast(val));
  return true;
}
    
    v8::Local<v8::Value> Converter<Promise>::ToV8(v8::Isolate* isolate,
                                              Promise val) {
  return val.GetHandle();
}
    
      template <typename T>
  bool GetNext(T* out) {
    if (next_ >= info_->Length()) {
      insufficient_arguments_ = true;
      return false;
    }
    v8::Local<v8::Value> val = (*info_)[next_];
    bool success = ConvertFromV8(isolate_, val, out);
    if (success)
      next_++;
    return success;
  }
    
    namespace internal {
    }
    
    namespace mate {
    }
    
      // Bind the C++ class to the JS wrapper.
  // This method should only be called by classes using Constructor.
  virtual void InitWith(v8::Isolate* isolate, v8::Local<v8::Object> wrapper);
    
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
    
    void AtomURLRequest::InformDelegateAuthenticationRequired(
    const net::AuthChallengeInfo& auth_info) const {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
  if (delegate_)
    delegate_->OnAuthenticationRequired(auth_info);
}
    
      for (auto i : indices(OldYields)) {
    auto OldYield = OldYields[i];
    auto NewYield = NewYields[i];
    NewYield = castValueToABICompatibleType(&B, Loc, NewYield,
                                            NewYield->getType(),
                                            OldYield->getType());
    OldYield->replaceAllUsesWith(NewYield);
  }
    
      /// Returns true if this function can be inlined into a fragile function
  /// body.
  bool hasValidLinkageForFragileInline() const {
    return (isSerialized() == IsSerialized ||
            isSerialized() == IsSerializable);
  }
    
      SourceLoc getLParenLoc() const { return LParenLoc; }
  SourceLoc getRParenLoc() const { return RParenLoc; }
  
  typedef MutableArrayRef<ParamDecl*>::iterator iterator;
  typedef ArrayRef<ParamDecl*>::iterator const_iterator;
  iterator begin() { return getArray().begin(); }
  iterator end() { return getArray().end(); }
  const_iterator begin() const { return getArray().begin(); }
  const_iterator end() const { return getArray().end(); }
  
  MutableArrayRef<ParamDecl*> getArray() {
    return {getTrailingObjects<ParamDecl*>(), numParameters};
  }
  ArrayRef<ParamDecl*> getArray() const {
    return {getTrailingObjects<ParamDecl*>(), numParameters};
  }
    
        bool shouldSerializeDoc(Decl *D) {
      // When building the stdlib we intend to serialize unusual comments.
      // This situation is represented by GroupContext.isEnable().  In that
      // case, we perform more serialization to keep track of source order.
      if (GroupContext.isEnable())
        return true;
    }
    
      // SIL instructions with one valueref and one typed valueref.
  // (store)
  using SILOneValueOneOperandLayout = BCRecordLayout<
    SIL_ONE_VALUE_ONE_OPERAND,
    SILInstOpCodeField,
    BCFixed<2>,          // Optional attributes
    ValueIDField,
    TypeIDField,
    SILTypeCategoryField,
    ValueIDField
  >;
    
    KNOWN_STDLIB_TYPE_DECL(Optional, EnumDecl, 1)
    
    namespace llvm {
  // FIXME: Belongs in LLVM itself
  template<typename PT1, typename PT2>
  hash_code hash_value(const llvm::PointerUnion<PT1, PT2> &ptr) {
    return hash_value(ptr.getOpaqueValue());
  }
}
    
    /// This class stores a lexical scope as it is represented in the
/// debug info. In contrast to LLVM IR, SILDebugScope also holds all
/// the inlining information. In LLVM IR the inline info is part of
/// DILocation.
class SILDebugScope : public SILAllocated<SILDebugScope> {
public:
  /// The AST node this lexical scope represents.
  SILLocation Loc;
  /// Always points to the parent lexical scope.
  /// For top-level scopes, this is the SILFunction.
  PointerUnion<const SILDebugScope *, SILFunction *> Parent;
  /// An optional chain of inlined call sites.
  ///
  /// If this scope is inlined, this points to a special 'scope' that
  /// holds the location of the call site.
  const SILDebugScope *InlinedCallSite;
    }
    
     private:
  // Simple struct to hold an ICOORD point and a halfwidth representing half
  // the 'width' (supposedly approximately parallel to the direction of the
  // line) of each point, such that distant points can be discarded when they
  // overlap nearer points. (Think i dot and other diacritics or noise.)
  struct PointWidth {
    PointWidth() : pt(ICOORD(0, 0)), halfwidth(0) {}
    PointWidth(const ICOORD& pt0, int halfwidth0)
      : pt(pt0), halfwidth(halfwidth0) {}
    }
    
    
// Returns the median value of the vector, given that the values are
// circular, with the given modulus. Values may be signed or unsigned,
// eg range from -pi to pi (modulus 2pi) or from 0 to 2pi (modulus 2pi).
// NOTE that the array is shuffled, but the time taken is linear.
// An assumption is made that most of the values are spread over no more than
// half the range, but wrap-around is accounted for if the median is near
// the wrap-around point.
// Cannot be a member of GenericVector, as it makes heavy used of LLSQ.
// T must be an integer or float/double type.
template<typename T> T MedianOfCircularValues(T modulus, GenericVector<T>* v) {
  LLSQ stats;
  T halfrange = static_cast<T>(modulus / 2);
  int num_elements = v->size();
  for (int i = 0; i < num_elements; ++i) {
    stats.add((*v)[i], (*v)[i] + halfrange);
  }
  bool offset_needed = stats.y_variance() < stats.x_variance();
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] += halfrange;
    }
  }
  int median_index = v->choose_nth_item(num_elements / 2);
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] -= halfrange;
    }
  }
  return (*v)[median_index];
}
    
      // Removes the MAXIMUM element of the heap. (MIN from a MAX heap.) If entry is
  // not nullptr, the element is copied into *entry, otherwise it is discarded.
  // Time = O(n). Returns false if the heap was already empty.
  bool PopWorst(Pair* entry) {
    int worst_index = IndexOfWorst();
    if (worst_index < 0) return false;  // It cannot be empty!
    // Extract the worst element from the heap, leaving a hole at worst_index.
    if (entry != nullptr)
      *entry = heap_[worst_index];
    int heap_size = heap_.size() - 1;
    if (heap_size > 0) {
      // Sift the hole upwards to match the last element of the heap_
      Pair hole_pair = heap_[heap_size];
      int hole_index = SiftUp(worst_index, hole_pair);
      heap_[hole_index] = hole_pair;
    }
    heap_.truncate(heap_size);
    return true;
  }
    
    class QRSequenceGenerator {
 public:
  // Object is initialized with the size of the output range.
  explicit QRSequenceGenerator(int N) : N_(N), next_num_(0) {
    num_bits_ = static_cast<int>(ceil(log(static_cast<double>(N)) / log(2.0)));
  }
    }
    
      // Accumulates counts for junk. Counts only whether the junk was correctly
  // rejected or not.
  bool AccumulateJunk(bool debug, const GenericVector<UnicharRating>& results,
                      TrainingSample* sample);
    
    // Clear all data.
void IntFeatureDist::Clear() {
  delete [] features_;
  features_ = nullptr;
  delete [] features_delta_one_;
  features_delta_one_ = nullptr;
  delete [] features_delta_two_;
  features_delta_two_ = nullptr;
}
    
          // The refcount is exactly 1; release the value.
      // Avoid 'this' pointer overwriting by reserving it as an argument.
      v << callm{lookupDestructor(v, type, true), arg_regs(1)};
    
    #define V(add)          \
      case Vinstr::add: \
        return analyze_phys_disp(env, state, inst.add##_.d, \
                                 inst.add##_.s1, inst.add##_.s0.l());
      VASM_ADDS
#undef V
#define V(sub)          \
      case Vinstr::sub: \
        return analyze_phys_disp(env, state, inst.sub##_.d, \
                                 inst.sub##_.s1, -inst.sub##_.s0.l());
      VASM_SUBS
#undef V
    
    #define FUSEABLE_INSTRUCTIONS \
  TEST(0x84, 0xFF) \
  TEST(0x85, 0xFF) \
  TEST(0xA8, 0xFF) \
  TEST(0xA9, 0xFF) \
  TEST(0xF6,  0) \
  TEST(0xF6,  1) \
  TEST(0xF7,  0) \
  TEST(0xF7,  1) \
  AND(0x20,  0xFF, true) \
  AND(0x21,  0xFF, true) \
  AND(0x22,  0xFF, false) \
  AND(0x23,  0xFF, false) \
  AND(0x24,  0xFF, false) \
  AND(0x25,  0xFF, false) \
  AND(0x80,   4, true) \
  AND(0x81,   4, true) \
  AND(0x83,   4, true) \
  CMP(0x38,  0xFF) \
  CMP(0x39,  0xFF) \
  CMP(0x3A,  0xFF) \
  CMP(0x3B,  0xFF) \
  CMP(0x3C,  0xFF) \
  CMP(0x3D,  0xFF) \
  CMP(0x80,   7) \
  CMP(0x81,   7) \
  CMP(0x83,   7) \
  ADD(0x00,  0xFF, true) \
  ADD(0x01,  0xFF, true) \
  ADD(0x02,  0xFF, false) \
  ADD(0x03,  0xFF, false) \
  ADD(0x04,  0xFF, false) \
  ADD(0x05,  0xFF, false) \
  ADD(0x80,   0, true) \
  ADD(0x81,   0, true) \
  ADD(0x83,   0, true) \
  SUB(0x28,  0xFF, true) \
  SUB(0x29,  0xFF, true) \
  SUB(0x2A,  0xFF, false) \
  SUB(0x2B,  0xFF, false) \
  SUB(0x2C,  0xFF, false) \
  SUB(0x2D,  0xFF, false) \
  SUB(0x80,   5, true) \
  SUB(0x81,   5, true) \
  SUB(0x83,   5, true) \
  INC(0xFE,   0) \
  INC(0xFF,   0) \
  DEC(0xFE,   1) \
  DEC(0xFF,   1)
    
    inline RIPRelativeRef RegRIP::operator[](intptr_t disp) const {
  return *(*this + disp);
}
    
    bool OutputFile::open(const String& /*filename*/, const String& /*mode*/) {
  raise_fatal_error('cannot open a php://output file ');
}
    
      void initStandard();
  void initErrorFunc();
  void initClassobj();
  void initClosure();
  void initNetwork();
  void initOptions();
  void initGc();
  void initOutput();
  void initString();
  void initVariable();
  void initFunction();
  void initMisc();
  void initFile();
  void initIntrinsics();
  void initMath();
  void initProcess();
    
    int64_t ZipFile::tell() {
  assertx(m_gzFile);
  return getPosition();
}
    
    Scanner::Scanner(const std::string& filename, int type, bool sha1 /* = false */)
    : m_filename(filename), m_stream(nullptr), m_source(nullptr), m_len(0), m_pos(0),
      m_state(Start), m_type(type), m_yyscanner(nullptr), m_token(nullptr),
      m_loc(nullptr), m_lastToken(-1), m_isHHFile(0), m_lookaheadLtDepth(0) {
#ifdef _MSC_VER
  // I really don't know why this doesn't work properly with MSVC,
  // but I know this fixes the problem, so use it instead.
  std::ifstream ifs =
    std::ifstream(m_filename, std::ifstream::in | std::ifstream::binary);
  if (ifs.fail()) {
    throw FileOpenException(m_filename);
  }
    }
    
    TransRec::SavedAnnotation
TransRec::writeAnnotation(const Annotation& annotation, bool compress) {
  static jit::fast_set<std::string> fileWritten;
  SavedAnnotation saved = {
    folly::sformat('{}/tc_annotations.txt{}',
                   RuntimeOption::EvalDumpTCPath,
                   compress ? '.gz' : ''),
    0,
    0
  };
  auto const fileName = saved.fileName.c_str();
    }
    
        // output element at index 2 (third element)
    std::cout << array.at(2) << '\n';
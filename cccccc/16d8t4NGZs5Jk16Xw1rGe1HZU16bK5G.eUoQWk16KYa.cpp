
        
        namespace {
RenderView* GetRenderView(v8::Handle<v8::Context> ctx) {
  WebLocalFrame* frame = WebLocalFrame::frameForContext(ctx);
  if (!frame || !frame->isNodeJS())
    return NULL;
    }
    }
    
     private:
  void SetText(std::string& text);
  std::string GetText();
  void Clear();
    
    Menu::~Menu() {
  Destroy();
}
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
       void ExecuteCommand(int command_id, int event_flags) override;
    
    
    {}  // namespace nwapi

    
      focus_manager_ = NULL;
  window_ = NULL;
    
      // Ignore first non-switch arg if it's not a standalone package.
  bool ignore_arg = !package->self_extract();
  for (unsigned i = 1; i < argv.size(); ++i) {
    if (ignore_arg && args.size() && argv[i] == args[0]) {
      ignore_arg = false;
      continue;
    }
    }
    
    #include 'extensions/browser/extension_function.h'
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    bool NwObjCallObjectMethodFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethodAsync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodAsyncFunction);
};
    
    class MapFieldGenerator : public FieldGeneratorBase {
 public:
  MapFieldGenerator(const FieldDescriptor* descriptor,
                    int fieldOrdinal,
                    const Options* options);
  ~MapFieldGenerator();
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
      // Since the basic IO manipulators are overloaded for both narrow
  // and wide streams, we have to provide this specialized definition
  // of operator <<, even though its body is the same as the
  // templatized version above.  Without this definition, streaming
  // endl or other basic IO manipulators to Message will confuse the
  // compiler.
  Message& operator <<(BasicNarrowIoManip val) {
    *ss_ << val;
    return *this;
  }
    
      // STL-style container methods.
  size_t size() const { return size_; }
  const_iterator begin() const { return array_; }
  const_iterator end() const { return array_ + size_; }
  bool operator==(const NativeArray& rhs) const {
    return size() == rhs.size() &&
        ArrayEq(begin(), size(), rhs.begin());
  }
    
      // Test case base name for display purposes.
  virtual const string& GetTestCaseName() const { return test_case_name_; }
  // Test case id to verify identity.
  virtual TypeId GetTestCaseTypeId() const { return GetTypeId<TestCase>(); }
  // TEST_P macro uses AddTestPattern() to record information
  // about a single test in a LocalTestInfo structure.
  // test_case_name is the base name of the test case (without invocation
  // prefix). test_base_name is the name of an individual test without
  // parameter index. For the test SequenceA/FooTest.DoBar/1 FooTest is
  // test case base name and DoBar is test base name.
  void AddTestPattern(const char* test_case_name,
                      const char* test_base_name,
                      TestMetaFactoryBase<ParamType>* meta_factory) {
    tests_.push_back(linked_ptr<TestInfo>(new TestInfo(test_case_name,
                                                       test_base_name,
                                                       meta_factory)));
  }
  // INSTANTIATE_TEST_CASE_P macro uses AddGenerator() to record information
  // about a generator.
  int AddTestCaseInstantiation(const string& instantiation_name,
                               GeneratorCreationFunc* func,
                               const char* /* file */,
                               int /* line */) {
    instantiations_.push_back(::std::make_pair(instantiation_name, func));
    return 0;  // Return value used only to run this method in namespace scope.
  }
  // UnitTest class invokes this method to register tests in this test case
  // test cases right before running tests in RUN_ALL_TESTS macro.
  // This method should not be called more then once on any single
  // instance of a ParameterizedTestCaseInfoBase derived class.
  // UnitTest has a guard to prevent from calling this method more then once.
  virtual void RegisterTests() {
    for (typename TestInfoContainer::iterator test_it = tests_.begin();
         test_it != tests_.end(); ++test_it) {
      linked_ptr<TestInfo> test_info = *test_it;
      for (typename InstantiationContainer::iterator gen_it =
               instantiations_.begin(); gen_it != instantiations_.end();
               ++gen_it) {
        const string& instantiation_name = gen_it->first;
        ParamGenerator<ParamType> generator((*gen_it->second)());
    }
    }
    }
    
    // On Symbian, BOOST_HAS_TR1_TUPLE causes Boost's TR1 tuple library to
// use STLport's tuple implementation, which unfortunately doesn't
// work as the copy of STLport distributed with Symbian is incomplete.
// By making sure BOOST_HAS_TR1_TUPLE is undefined, we force Boost to
// use its own tuple implementation.
#  ifdef BOOST_HAS_TR1_TUPLE
#   undef BOOST_HAS_TR1_TUPLE
#  endif  // BOOST_HAS_TR1_TUPLE
    
      // Compares two C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike strcasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CaseInsensitiveCStringEquals(const char* lhs,
                                           const char* rhs);
    
    // AddRef<T>::type is T if T is a reference; otherwise it's T&.  This
// is the same as tr1::add_reference<T>::type.
template <typename T>
struct AddRef { typedef T& type; };  // NOLINT
template <typename T>
struct AddRef<T&> { typedef T& type; };  // NOLINT
    
                // Verify that there's indeed a single layout
            for (const auto& iter : inputMatrices)
            {
                assert(iter.second.pMBLayout == pMBLayout);
                // TODO: This must be a runtime check, not an assert().
                UNUSED(iter);
            }
    
    protected:
    // learning rate per sample provided outside
    floatargvector m_learningRatesParam;
    intargvector m_learningRatesSpecifiedForMBSize; // 1 for per sample, m_mbSize[] for per MB
    floatargvector m_momentumParam;
    intargvector m_momentumSpecifiedForMBSize;
    bool m_useNesterovMomentum;
    
        // special function for DBN
    // this = this * scale + M' * V
    // This is based on a code copy of matprod_mtm. See there for comments.
    void scaleandaddmatprod_mtm(const float thisscale, const ssematrixbase &Mt, const ssematrixbase &V)
    {
        scaleandaddmatprod_mtm(thisscale, Mt, 0, Mt.cols(), V);
    }
    
            // now we have the original names from the input symbol, generate the output names
        for (int i = 0; i < fromNodes.size(); i++)
        {
            ComputationNodeBasePtr fromNode = fromNodes[i];
            std::wstring fromNodeName = fromNode->NodeName();
    }
    
    // Data Writer interface
// implemented by some DataWriters
class DATAWRITER_API IDataWriter
{
public:
    typedef std::string LabelType;
    typedef unsigned int LabelIdType;
    }
    
    // ---------------------------------------------------------------------------
// const_array_ref -- same as array_ref for 'const' (read-only) pointers
// ---------------------------------------------------------------------------
    
    size_t ClusterHistograms(JpegHistogram* histo, size_t* num,
                         int* histo_indexes, uint8_t* depth) {
  memset(depth, 0, *num * JpegHistogram::kSize);
  size_t costs[kMaxComponents];
  for (size_t i = 0; i < *num; ++i) {
    histo_indexes[i] = i;
    std::vector<HuffmanTree> tree(2 * JpegHistogram::kSize + 1);
    CreateHuffmanTree(histo[i].counts, JpegHistogram::kSize,
                      kJpegHuffmanMaxBitLength, &tree[0],
                      &depth[i * JpegHistogram::kSize]);
    costs[i] = (HistogramHeaderCost(histo[i]) +
                HistogramEntropyCost(histo[i],
                                     &depth[i * JpegHistogram::kSize]));
  }
  const size_t orig_num = *num;
  while (*num > 1) {
    size_t last = *num - 1;
    size_t second_last = *num - 2;
    JpegHistogram combined(histo[last]);
    combined.AddHistogram(histo[second_last]);
    std::vector<HuffmanTree> tree(2 * JpegHistogram::kSize + 1);
    uint8_t depth_combined[JpegHistogram::kSize] = { 0 };
    CreateHuffmanTree(combined.counts, JpegHistogram::kSize,
                      kJpegHuffmanMaxBitLength, &tree[0], depth_combined);
    size_t cost_combined = (HistogramHeaderCost(combined) +
                            HistogramEntropyCost(combined, depth_combined));
    if (cost_combined < costs[last] + costs[second_last]) {
      histo[second_last] = combined;
      histo[last] = JpegHistogram();
      costs[second_last] = cost_combined;
      memcpy(&depth[second_last * JpegHistogram::kSize], depth_combined,
             sizeof(depth_combined));
      for (size_t i = 0; i < orig_num; ++i) {
        if (histo_indexes[i] == last) {
          histo_indexes[i] = second_last;
        }
      }
      --(*num);
    } else {
      break;
    }
  }
  size_t total_cost = 0;
  for (size_t i = 0; i < *num; ++i) {
    total_cost += costs[i];
  }
  return (total_cost + 7) / 8;
}
    
    void AddApp0Data(JPEGData* jpg) {
  const unsigned char kApp0Data[] = {
      0xe0, 0x00, 0x10,              // APP0
      0x4a, 0x46, 0x49, 0x46, 0x00,  // 'JFIF'
      0x01, 0x01,                    // v1.01
      0x00, 0x00, 0x01, 0x00, 0x01,  // aspect ratio = 1:1
      0x00, 0x00                     // thumbnail width/height
  };
  jpg->app_data.push_back(
      std::string(reinterpret_cast<const char*>(kApp0Data),
                                 sizeof(kApp0Data)));
}
    
    
// Adds APP0 header data.
void AddApp0Data(JPEGData* jpg);
    
    namespace guetzli {
    }
    
      PeerConnection* peerConnection_;
    
      const std::shared_ptr<Option>& getOption() const;
    
    void AbstractHttpServerResponseCommand::updateReadWriteCheck()
{
  if (httpServer_->wantRead()) {
    if (!readCheck_) {
      readCheck_ = true;
      e_->addSocketForReadCheck(socket_, this);
    }
  }
  else if (readCheck_) {
    readCheck_ = false;
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (httpServer_->wantWrite()) {
    if (!writeCheck_) {
      writeCheck_ = true;
      e_->addSocketForWriteCheck(socket_, this);
    }
  }
  else if (writeCheck_) {
    writeCheck_ = false;
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    protected:
  DownloadEngine* getDownloadEngine() { return e_; }
  // Called after content body is completely sent.
  virtual void afterSend(const std::shared_ptr<HttpServer>& httpServer,
                         DownloadEngine* e) = 0;
    
    void AbstractOptionHandler::setInitialOption(bool f)
{
  updateFlags(FLAG_INITIAL_OPTION, f);
}
    
      void setPeerStorage(const std::shared_ptr<PeerStorage>& peerStorage);
    
      /**
   * Removes current announce URL from its group and inserts it before the
   * first element of the group.
   * The internal announce group pointer points to the first element of the
   * first group after this call.
   */
  void announceSuccess();
    
    namespace aria2 {
    }
    
    #include 'Notifier.h'
    
    
Instr Assembler::ImmExtendShift(unsigned left_shift) {
  DCHECK_LE(left_shift, 4);
  return left_shift << ImmExtendShift_offset;
}
    
    
    {  // When popping multiple registers, the load order is chosen such that
  // Pop(a, b) is equivalent to Pop(a) followed by Pop(b).
  switch (count) {
    case 1:
      DCHECK(dst1.IsNone() && dst2.IsNone() && dst3.IsNone());
      ldr(dst0, MemOperand(sp, 1 * size, PostIndex));
      break;
    case 2:
      DCHECK(dst2.IsNone() && dst3.IsNone());
      ldp(dst0, dst1, MemOperand(sp, 2 * size, PostIndex));
      break;
    case 3:
      DCHECK(dst3.IsNone());
      ldr(dst2, MemOperand(sp, 2 * size));
      ldp(dst0, dst1, MemOperand(sp, 3 * size, PostIndex));
      break;
    case 4:
      // Load the higher addresses first, then load the lower addresses and
      // skip the whole block in the second instruction. This allows four W
      // registers to be popped using sp, whilst maintaining 16-byte alignment
      // for sp at all times.
      ldp(dst2, dst3, MemOperand(sp, 2 * size));
      ldp(dst0, dst1, MemOperand(sp, 4 * size, PostIndex));
      break;
    default:
      UNREACHABLE();
  }
}
    
    class TurboAssembler : public Assembler {
 public:
  TurboAssembler(Isolate* isolate, void* buffer, int buffer_size,
                 CodeObjectRequired create_code_object);
  TurboAssembler(IsolateData isolate_data, void* buffer, int buffer_size);
    }
    
    void TurboAssembler::Multu(Register rs, const Operand& rt) {
  if (rt.is_reg()) {
    multu(rs, rt.rm());
  } else {
    // li handles the relocation.
    UseScratchRegisterScope temps(this);
    Register scratch = temps.Acquire();
    DCHECK(rs != scratch);
    li(scratch, rt);
    multu(rs, scratch);
  }
}
    
    void TurboAssembler::LoadConstantPoolPointerRegisterFromCodeTargetAddress(
    Register code_target_address) {
  lwz(kConstantPoolRegister,
      MemOperand(code_target_address,
                 Code::kConstantPoolOffset - Code::kHeaderSize));
  add(kConstantPoolRegister, kConstantPoolRegister, code_target_address);
}
    
      // Jump, Call, and Ret pseudo instructions implementing inter-working.
  void Jump(Register target);
  void Jump(Address target, RelocInfo::Mode rmode, Condition cond = al,
            CRegister cr = cr7);
  void Jump(Handle<Code> code, RelocInfo::Mode rmode, Condition cond = al,
            CRegister cr = cr7);
  void Call(Register target);
  void Call(Address target, RelocInfo::Mode rmode, Condition cond = al);
  int CallSize(Handle<Code> code,
               RelocInfo::Mode rmode = RelocInfo::CODE_TARGET,
               Condition cond = al);
  void Call(Handle<Code> code, RelocInfo::Mode rmode = RelocInfo::CODE_TARGET,
            Condition cond = al);
  void Call(Label* target);
    
    
// Order general registers are pushed by Pushad:
// rax, rcx, rdx, rbx, rsi, rdi, r8, r9, r11, r14, r15.
const int
MacroAssembler::kSafepointPushRegisterIndices[Register::kNumRegisters] = {
    0,
    1,
    2,
    3,
    -1,
    -1,
    4,
    5,
    6,
    7,
    -1,
    8,
    9,
    -1,
    10,
    11
};
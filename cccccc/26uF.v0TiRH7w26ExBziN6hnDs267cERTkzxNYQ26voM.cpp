
        
            // Retrieve the generic environment to use for the mapping.
    auto found = ctx.DelayedPatternContexts.find(this);
    assert(found != ctx.DelayedPatternContexts.end());
    auto dc = found->second;
    
    #include 'swift/AST/PlatformKind.h'
#include 'swift/Basic/LangOptions.h'
#include 'llvm/ADT/StringSwitch.h'
#include 'llvm/Support/ErrorHandling.h'
    
    
    {    return GenericTypeParamType::get(genericParam->getDepth(),
                                     genericParam->getIndex(), ctx);
  };
  auto conformanceToSyntheticConformanceFn =
      MakeAbstractConformanceForGenericType();
    
      bool visitUnboundGenericType(UnboundGenericType *ty) {
    if (auto parent = ty->getParent())
      return doIt(parent);
    return false;
  }
    
      // An AST section consists of one or more AST modules, optionally with
  // headers. Iterate over all AST modules.
  while (!buf.empty()) {
    auto info = serialization::validateSerializedAST(buf);
    }
    
    /// The list of known CF types.  We use 'constexpr' to verify that this is
/// emitted as a constant.  Note that this is expected to be sorted in
/// quasi-lexicographic order.
static constexpr const llvm::StringLiteral KnownCFTypes[] = {
#define CF_TYPE(NAME) #NAME,
#define NON_CF_TYPE(NAME)
#include 'SortedCFDatabase.def'
};
const size_t NumKnownCFTypes = sizeof(KnownCFTypes) / sizeof(*KnownCFTypes);
    
      bool isRecord() const {
    assert(isValid());
    return !Decl.isNull() && Decl.is<const clang::RecordDecl *>();
  }
  const clang::RecordDecl *getRecord() const {
    assert(isRecord());
    return Decl.get<const clang::RecordDecl *>();
  }
    
    
    {  virtual void ReportTestPartResult(const TestPartResult& result) = 0;
};
    
    
    {  // To refer to typedefs in the fixture, add the 'typename
  // TestFixture::' prefix.
  typename TestFixture::List values;
  values.push_back(n);
  ...
}
    
    // DeathTest is a class that hides much of the complexity of the
// GTEST_DEATH_TEST_ macro.  It is abstract; its static Create method
// returns a concrete class that depends on the prevailing death test
// style, as defined by the --gtest_death_test_style and/or
// --gtest_internal_run_death_test flags.
    
    // The following family of struct and struct templates are used to
// represent type lists.  In particular, TypesN<T1, T2, ..., TN>
// represents a type list with N types (T1, T2, ..., and TN) in it.
// Except for Types0, every struct in the family has two member types:
// Head for the first type in the list, and Tail for the rest of the
// list.
    
    
    {    return true;
  }
    
    namespace tesseract {
double DotProductSSE(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductSSE can't be used on Android\n');
  abort();
}
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n) {
  fprintf(stderr, 'IntDotProductSSE can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
    // Computes a reshaped copy of the weight matrix w. If there are no
// partial_funcs_, it does nothing.
void IntSimdMatrix::Init(const GENERIC_2D_ARRAY<int8_t>& w) {
  if (partial_funcs_.empty()) return;
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  // The rounded-up sizes of the reshaped weight matrix, excluding biases.
  int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
  int rounded_num_out = RoundOutputs(num_out);
  // Add the bias and compute the required size.
  shaped_w_.resize((rounded_num_in + 1) * rounded_num_out, 0);
  int shaped_index = 0;
  int output = 0;
  // Each number of registers needs a different format! Iterates over the
  // different numbers of registers (each a power of 2).
  for (int num_registers = max_output_registers_; num_registers >= 1;
       num_registers /= 2) {
    // The number of outputs that we will generate with this many registers.
    int num_outputs_per_register_set =
        num_registers * num_outputs_per_register_;
    // Use the max number of registers until we have to go fewer.
    while (output + num_outputs_per_register_set <= rounded_num_out) {
      // Accumulating outputs in registers saves iterating over the inputs, so
      // we only have to do it once per output register set.
      for (int input = 0; input < num_in; input += num_inputs_per_group_) {
        // Iterate over the number of outputs in a register set.
        for (int j = 0; j < num_outputs_per_register_set; ++j) {
          // Inner-most loop corresponds to the number of inputs in an input
          // group.
          for (int i = 0; i < num_inputs_per_group_; ++i) {
            int8_t weight = 0;
            if (output + j < num_out && input + i < num_in)
              weight = w(output + j, input + i);
            shaped_w_[shaped_index++] = weight;
          }
        }
      }
      // Append the bias weights for the register set.
      for (int j = 0; j < num_outputs_per_register_set; ++j) {
        int8_t weight = 0;
        if (output + j < num_out) weight = w(output + j, num_in);
        shaped_w_[shaped_index++] = weight;
      }
      output += num_outputs_per_register_set;
    }
  }
}
    
    template <class T> class GENERIC_2D_ARRAY;
template <typename T> class GenericVector;
    
    namespace tesseract {
    }
    
      // Returns a pointer to serialized choice lattice.
  // Fills lattice_size with the number of bytes in lattice data.
  const char *WordLattice(int *lattice_size) const;
    
    class MutableIterator : public ResultIterator {
 public:
  // See argument descriptions in ResultIterator()
  MutableIterator(PAGE_RES* page_res, Tesseract* tesseract,
                  int scale, int scaled_yres,
                  int rect_left, int rect_top,
                  int rect_width, int rect_height)
      : ResultIterator(
          LTRResultIterator(page_res, tesseract, scale, scaled_yres, rect_left,
                            rect_top, rect_width, rect_height)) {}
  virtual ~MutableIterator() = default;
    }
    
    class OrientationDetector {
 public:
  OrientationDetector(const GenericVector<int>* allowed_scripts,
                      OSResults* results);
  bool detect_blob(BLOB_CHOICE_LIST* scores);
  int get_orientation();
 private:
  OSResults* osr_;
  const GenericVector<int>* allowed_scripts_;
};
    
    ScrollView* bln_word_window_handle();  //return handle
void build_image_window(int width, int height);
void display_bln_lines(ScrollView window,
                       ScrollView::Color colour,
                       float scale_factor,
                       float y_offset,
                       float minx,
                       float maxx);
                                 //function to call
void pgeditor_msg(  //message display
                  const char *msg);
void pgeditor_show_point(  //display coords
                         SVEvent *event);
                                 //put bln word in       box
void show_point(PAGE_RES* page_res, float x, float y);
    
    #include <grpcpp/security/credentials.h>
#include <grpcpp/support/config.h>
    
    const AuthProperty AuthPropertyIterator::operator*() {
  return std::pair<grpc::string_ref, grpc::string_ref>(
      property_->name,
      grpc::string_ref(property_->value, property_->value_length));
}
    
    // Note: a second call to this will add in front the result of the first call.
// An example is calling this on a copy of ChannelArguments which already has a
// prefix. The user can build up a prefix string by calling this multiple times,
// each with more significant identifier.
void ChannelArguments::SetUserAgentPrefix(
    const grpc::string& user_agent_prefix) {
  if (user_agent_prefix.empty()) {
    return;
  }
  bool replaced = false;
  auto strings_it = strings_.begin();
  for (auto it = args_.begin(); it != args_.end(); ++it) {
    const grpc_arg& arg = *it;
    ++strings_it;
    if (arg.type == GRPC_ARG_STRING) {
      if (grpc::string(arg.key) == GRPC_ARG_PRIMARY_USER_AGENT_STRING) {
        GPR_ASSERT(arg.value.string == strings_it->c_str());
        *(strings_it) = user_agent_prefix + ' ' + arg.value.string;
        it->value.string = const_cast<char*>(strings_it->c_str());
        replaced = true;
        break;
      }
      ++strings_it;
    }
  }
  if (!replaced) {
    SetString(GRPC_ARG_PRIMARY_USER_AGENT_STRING, user_agent_prefix);
  }
}
    
    bool CompletionQueue::CompletionQueueTLSCache::Flush(void** tag, bool* ok) {
  int res = 0;
  void* res_tag;
  flushed_ = true;
  if (grpc_completion_queue_thread_local_cache_flush(cq_->cq_, &res_tag,
                                                     &res)) {
    auto cq_tag = static_cast<internal::CompletionQueueTag*>(res_tag);
    *ok = res == 1;
    if (cq_tag->FinalizeResult(tag, ok)) {
      return true;
    }
  }
  return false;
}
    
    void SecureAuthContext::AddProperty(const grpc::string& key,
                                    const grpc::string_ref& value) {
  if (!ctx_) return;
  grpc_auth_context_add_property(ctx_, key.c_str(), value.data(), value.size());
}
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
        std::shared_ptr<const MatrixBase> NDArrayView::GetMatrixBase(size_t rowColSplitPoint/* = AutoSelectRowColSplitPoint*/) const
    {
        switch (m_dataType)
        {
        case DataType::Float:
            return GetMatrixImpl<float>(GetTensorView<float>(), rowColSplitPoint);
        case DataType::Double:
            return GetMatrixImpl<double>(GetTensorView<double>(), rowColSplitPoint);
        case DataType::Float16:
            return GetMatrixImpl<half>(GetTensorView<half>(), rowColSplitPoint);
        case DataType::Int8:
            return GetMatrixImpl<char>(GetTensorView<char>(), rowColSplitPoint);
        case DataType::Int16:
            return GetMatrixImpl<short>(GetTensorView<short>(), rowColSplitPoint);
        default:
            LogicError('Unknown m_dataType %d', (int)m_dataType);
        }
        return nullptr;
    }
    
            NDShape shape = sectionShape.AppendShape(NDShape(m_maskShape.Rank() - sectionShape.Rank(), NDShape::InferredDimension));
    
            ValidateType<T>(dict, typeValue, currentVersion);
    
            static bool IsUDF(const FunctionPtr& f);
    
        ConfigValuePtr NodeToConfigValuePtr(ComputationNodeBasePtr node)
    {
        assert(node);
        auto valuep = ConfigValuePtr(node, [](const std::wstring& msg) { LogicError('CloneFunction (NodeToConfigValuePtr): Unexpected failure: %ls', msg.c_str()); }, node->NodeName());
        return valuep;
    }
    
    
    {        // TODO: Should this add a tensor dimension?
        SetDims(TensorShape(Input(0)->GetAsMatrixNumRows() * wordsInEachSample), true);
    }
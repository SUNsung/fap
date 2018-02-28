
        
        namespace tensorflow {
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/compiler/xla/service/hlo_module.h'
#include 'tensorflow/compiler/xla/service/hlo_pass_interface.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Status FetchOutputs(Graph* g, const DeviceAttributes& device_info,
                    const gtl::ArraySlice<string>& fetch_outputs,
                    bool use_function_convention, NameIndex* name_index,
                    std::vector<Node*>* out_fetch_nodes,
                    DataTypeVector* out_fetch_types) {
  out_fetch_nodes->clear();
  out_fetch_nodes->reserve(fetch_outputs.size());
  for (size_t i = 0; i < fetch_outputs.size(); ++i) {
    const string& t = fetch_outputs[i];
    }
    }
    
    namespace tensorflow {
namespace port {
    }
    }
    
        // Validate that data[i].shape = indices[i].shape + constant
    OP_REQUIRES_OK(c, c->input_list('data', data_inputs));
    const Tensor& data0 = (*data_inputs)[0];
    const Tensor& indices0 = (*indices_inputs)[0];
    for (int input_num = 0; input_num < indices_inputs->size(); input_num++) {
      const Tensor& indices = (*indices_inputs)[input_num];
      const Tensor& data = (*data_inputs)[input_num];
      OP_REQUIRES(
          c, TensorShapeUtils::StartsWith(data.shape(), indices.shape()),
          errors::InvalidArgument('data[', input_num,
                                  '].shape = ', data.shape().DebugString(),
                                  ' does not start with indices[', input_num,
                                  '].shape = ', indices.shape().DebugString()));
      OP_REQUIRES(
          c, input_num == 0 || SameExtraShape(data0, indices0, data, indices),
          errors::InvalidArgument(
              'Need data[0].shape[', indices0.dims(), ':] = data[', input_num,
              '].shape[', indices.dims(),
              ':], got data[0].shape = ', data0.shape().DebugString(),
              ', data[', input_num, '].shape = ', data.shape().DebugString(),
              ', indices[0].shape = ', indices0.shape().DebugString(),
              ', indices[', input_num,
              '].shape = ', indices.shape().DebugString()));
    }
    
      /// Build an Objective-C method descriptor for the ivar initializer
  /// or destroyer of a class (-.cxx_construct or -.cxx_destruct).
  void emitObjCIVarInitDestroyDescriptor(IRGenModule &IGM,
                                         ConstantArrayBuilder &descriptors,
                                         ClassDecl *cd,
                                         llvm::Function *impl,
                                         bool isDestroyer);
    
      const llvm::UTF8 *SourceStart =
    reinterpret_cast<const llvm::UTF8 *>(S.data());
    
    
    {private:
  llvm::DenseMap<const char *, size_t> USRToSymbol;
  std::vector<Symbol> symbols;
  std::vector<SymbolOccurrence> occurrences;
  bool sorted = false;
  llvm::hash_code recordHash = 0;
};
    
    
    {} // end namespace swift
    
        SpecializedDeclRef(ValueDecl *decl, SubstitutionList substitutions)
      : TheDecl(decl), NumSubstitutions(substitutions.size())
    {
      std::uninitialized_copy(substitutions.begin(), substitutions.end(),
                              getTrailingObjects<Substitution>());
    }
    
    #ifndef GUETZLI_FDCT_H_
#define GUETZLI_FDCT_H_
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    
    {}  // namespace guetzli
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    namespace fuzzer {
    }
    
    // Returns the name of the dir, similar to the 'dirname' utility.
std::string DirName(const std::string &FileName);
    
    bool Merger::Parse(const std::string &Str, bool ParseCoverage) {
  std::istringstream SS(Str);
  return Parse(SS, ParseCoverage);
}
    
    // Mutates Data in place, returns new size.
size_t MutationDispatcher::MutateImpl(uint8_t *Data, size_t Size,
                                      size_t MaxSize,
                                      const std::vector<Mutator> &Mutators) {
  assert(MaxSize > 0);
  if (Size == 0) {
    for (size_t i = 0; i < MaxSize; i++)
      Data[i] = RandCh(Rand);
    if (Options.OnlyASCII)
      ToASCII(Data, MaxSize);
    return MaxSize;
  }
  assert(Size > 0);
  // Some mutations may fail (e.g. can't insert more bytes if Size == MaxSize),
  // in which case they will return 0.
  // Try several times before returning un-mutated data.
  for (int Iter = 0; Iter < 100; Iter++) {
    auto M = Mutators[Rand(Mutators.size())];
    size_t NewSize = (this->*(M.Fn))(Data, Size, MaxSize);
    if (NewSize && NewSize <= MaxSize) {
      if (Options.OnlyASCII)
        ToASCII(Data, NewSize);
      CurrentMutatorSequence.push_back(M);
      return NewSize;
    }
  }
  return std::min(Size, MaxSize);
}
    
    ATTRIBUTE_NO_SANITIZE_MEMORY
void TracePC::AddValueForStrcmp(void *caller_pc, const char *s1, const char *s2,
                              size_t n) {
  if (!n) return;
  size_t Len = std::min(n, (size_t)32);
  const uint8_t *A1 = reinterpret_cast<const uint8_t *>(s1);
  const uint8_t *A2 = reinterpret_cast<const uint8_t *>(s2);
  size_t I = 0;
  for (; I < Len; I++)
    if (A1[I] != A2[I] || A1[I] == 0)
      break;
  size_t PC = reinterpret_cast<size_t>(caller_pc);
  size_t Idx = I;
  // if (I < Len && A1[I])
  //  Idx += __builtin_popcountl((A1[I] ^ A2[I])) - 1;
  TPC.HandleValueProfile((PC & 4095) | (Idx << 12));
}
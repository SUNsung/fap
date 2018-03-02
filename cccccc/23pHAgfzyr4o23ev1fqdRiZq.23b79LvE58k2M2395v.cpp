
        
        class TestFileSystem : public NullFileSystem {
 public:
  Status NewRandomAccessFile(
      const string& fname, std::unique_ptr<RandomAccessFile>* result) override {
    result->reset(new TestRandomAccessFile);
    return Status::OK();
  }
  // Always return size of 10
  Status GetFileSize(const string& fname, uint64* file_size) override {
    *file_size = 10;
    return Status::OK();
  }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace tensorflow {
    }
    
      // Populates the CUDA-platform-specific elements of this object.
  port::Status Init();
    
    // A PluginConfig describes the set of plugins to be used by a StreamExecutor
// instance. Each plugin is defined by an arbitrary identifier, usually best set
// to the address static member in the implementation (to avoid conflicts).
//
// A PluginConfig may be passed to the StreamExecutor constructor - the plugins
// described therein will be used to provide BLAS, DNN, FFT, and RNG
// functionality. Platform-appropriate defaults will be used for any un-set
// libraries. If a platform does not support a specified plugin (ex. cuBLAS on
// an OpenCL executor), then an error will be logged and no plugin operations
// will succeed.
//
// The StreamExecutor BUILD target does not link ANY plugin libraries - even
// common host fallbacks! Any plugins must be explicitly linked by dependent
// targets. See the cuda, opencl and host BUILD files for implemented plugin
// support (search for 'plugin').
class PluginConfig {
 public:
  // Value specifying the platform's default option for that plugin.
  static const PluginId kDefault;
    }
    
    TEST_F(NodeDefBuilderTest, NInPolymorphicTwice) {
  Op(OpDefBuilder('NInPolymorphicTwice')
         .Input('a: N*T')
         .Input('b: N*T')
         .Attr('T: type')
         .Attr('N: int >= 0'));
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {  void CopyDeviceTensorToCPU(const Tensor *device_tensor, StringPiece edge_name,
                             Device *device, Tensor *cpu_tensor,
                             StatusCallback done) override;
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      void Compute(OpKernelContext* c) override {
    OpInputList indices_inputs;
    OpInputList data_inputs;
    int first_dim_size;
    int data_elements_size;
    Tensor* merged = nullptr;
    this->CheckArgsAndAllocateResult(c, &indices_inputs, &data_inputs,
                                     &first_dim_size, &data_elements_size,
                                     &merged);
    if (!c->status().ok()) {
      // Avoid segmentation faults if merged cannot be allocated and an error is
      // passed back in the context.
      return;
    }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    /// Index the given module and store the results to \p indexStorePath.
///
/// \param module The module to index.
///
/// \param indexUnitTokens A list of unique identifiers for the index units to
/// be written. This may either be one unit per source file of \p module, or it
/// may be a single unit, in which case all the index information will be
/// combined into a single unit.
///
/// \param moduleUnitToken A unique identifier for this module unit in the form
/// of a file path. Only used if \p indexUnitTokens are specified for each
/// source file, otherwise the single \p indexUnitTokens value is used instead.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(ModuleDecl *module, ArrayRef<std::string> indexUnitTokens,
                    StringRef moduleUnitToken, StringRef indexStorePath,
                    bool indexSystemModules, bool isDebugCompilation,
                    StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
// FIXME: indexUnitTokens could be StringRef, but that creates an impedance
// mismatch in the caller.
    
    static bool writeRecord(SymbolTracker &record, std::string Filename,
                        std::string indexStorePath, DiagnosticEngine *diags,
                        std::string &outRecordFile) {
  if (record.getOccurrences().empty()) {
    outRecordFile = std::string();
    return false;
  }
    }
    
    class Text final : public InlineContent {
  StringRef LiteralContent;
  Text(StringRef LiteralContent)
    : InlineContent(ASTNodeKind::Text),
      LiteralContent(LiteralContent) {}
public:
  static Text *create(MarkupContext &MC, StringRef LiteralContent);
  StringRef getLiteralContent() const { return LiteralContent; };
  void setLiteralContent(StringRef LC) {
    LiteralContent = LC;
  }
    }
    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
      /// Indicates whether the diagnostics produced during compilation should be
  /// checked against expected diagnostics, indicated by markers in the
  /// input source file.
  enum {
    NoVerify,
    Verify,
    VerifyAndApplyFixes
  } VerifyMode = NoVerify;
    
    class EditorDiagConsumer : public swift::DiagnosticConsumer {
  typedef std::vector<DiagnosticEntryInfo> DiagnosticsTy;
  /// Maps from a BufferID to the diagnostics that were emitted inside that
  /// buffer.
  llvm::DenseMap<unsigned, DiagnosticsTy> BufferDiagnostics;
    }
    
      /// Creates and adds a memory buffer to the \c SourceManager, taking
  /// ownership of the newly created copy.
  ///
  /// \p InputData and \p BufIdentifier are copied, so that this memory can go
  /// away as soon as this function returns.
  unsigned addMemBufferCopy(StringRef InputData, StringRef BufIdentifier = '');
    
      /**
   * @brief Plan the best set of indexes for event record access.
   *
   * @param start an inclusive time to begin searching.
   * @param stop an inclusive time to end searching.
   * @param sort if true the indexes will be sorted.
   *
   * @return List of 'index.step' index strings.
   */
  std::vector<std::string> getIndexes(EventTime start,
                                      EventTime stop,
                                      bool sort = true);
    
    /// External (extensions) SQL implementation of the osquery getQueryColumns API.
Status getQueryColumnsExternal(const std::string& query, TableColumns& columns);
    
    struct FlagInfo {
  std::string type;
  std::string description;
  std::string default_value;
  std::string value;
  FlagDetail detail;
};
    
    /**
 * @brief Prepend a reference number to the log line.
 *
 * A reference number is an external-search helper for somewhat confusing or
 * seeminly-critical log lines.
 */
#define RLOG(n) '[Ref #' #n '] '
    
    #include <gtest/gtest.h>
    
    /**
 * @brief Access the internal storage of the Decorator parser.
 *
 * The decoration set is a map of column name to value. It contains the opaque
 * set of decoration point results.
 *
 * Decorations are applied to log items before they are sent to the downstream
 * logging APIs: logString, logSnapshot, etc.
 *
 * @param results the output parameter to write decorations.
 */
void getDecorations(std::map<std::string, std::string>& results);
    
        std::string arg_timeout('--timeout');
    arguments.push_back(arg_timeout.c_str());
    arguments.push_back(extensions_timeout.c_str());
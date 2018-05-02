
        
        namespace relauncher {
    }
    
    
    {}  // namespace atom
    
    class NativeWindow;
    
    namespace atom {
    }
    
    #ifndef CHROME_BROWSER_EXTENSIONS_GLOBAL_SHORTCUT_LISTENER_H_
#define CHROME_BROWSER_EXTENSIONS_GLOBAL_SHORTCUT_LISTENER_H_
    
    #ifndef CHROME_BROWSER_EXTENSIONS_GLOBAL_SHORTCUT_LISTENER_WIN_H_
#define CHROME_BROWSER_EXTENSIONS_GLOBAL_SHORTCUT_LISTENER_WIN_H_
    
      // Sets size to which the thumbnails should be scaled. If called after
  // StartUpdating() then some thumbnails may be still scaled to the old size
  // until they are updated.
  virtual void SetThumbnailSize(const gfx::Size& thumbnail_size) = 0;
    
    #ifndef CHROME_BROWSER_PRINTING_PRINT_VIEW_MANAGER_OBSERVER_H_
#define CHROME_BROWSER_PRINTING_PRINT_VIEW_MANAGER_OBSERVER_H_
    
      std::unique_ptr<ppapi::host::ResourceHost> CreateResourceHost(
      ppapi::host::PpapiHost* host,
      PP_Resource resource,
      PP_Instance instance,
      const IPC::Message& message) override;
    
    bool TtsPlatformImpl::LoadBuiltInTtsExtension(
    content::BrowserContext* browser_context) {
  return false;
}
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_DATABASE_H__

    
    
    {
    {
    {}  // namespace cpp
}  // namespace compiler
}  // namespace protobuf
    
    class EnumGenerator : public SourceGeneratorBase {
 public:
  EnumGenerator(const EnumDescriptor* descriptor, const Options* options);
  ~EnumGenerator();
    }
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    RepeatedEnumFieldGenerator::~RepeatedEnumFieldGenerator() {
    }
    
    struct Options;
    
    RepeatedPrimitiveFieldGenerator::RepeatedPrimitiveFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
    
        'ensure$capitalized_name$IsMutable();\n'
    '$name$_.add(com.google.protobuf.LazyFieldLite.fromValue(\n'
    '    builderForValue.build()));\n'
    '$on_changed$\n',
    
    // expects clone of tessdata_fast repo in ../../tessdata_fast
    
    SVMutex::SVMutex() {
#ifdef _WIN32
  mutex_ = CreateMutex(0, FALSE, 0);
#else
  pthread_mutex_init(&mutex_, nullptr);
#endif
}
    
    PAGE_RES* TessBaseAPI::RecognitionPass2(BLOCK_LIST* block_list,
                                        PAGE_RES* pass1_result) {
  if (!pass1_result)
    pass1_result = new PAGE_RES(false, block_list,
                                &(tesseract_->prev_word_best_choice_));
  tesseract_->recog_all_words(pass1_result, nullptr, nullptr, nullptr, 2);
  return pass1_result;
}
    
    For simple fonts (PostScript type 1), we use the character code as the
index into an Encoding array (256 elements), each element of which is
a glyph name, so this gives us a glyph name. We then consult the
CharStrings dictionary in the font, that's a complex object which
contains pairs of keys and values, you can use the key to retrieve a
given value. So we have a glyph name, we then use that as the key to
the dictionary and retrieve the associated value. For a type 1 font,
the value is a glyph program that describes how to draw the glyph.
    
    /**********************************************************************
 * Base Renderer interface implementation
 **********************************************************************/
TessResultRenderer::TessResultRenderer(const char *outputbase,
                                       const char* extension)
    : file_extension_(extension),
      title_(''), imagenum_(-1),
      fout_(stdout),
      next_(nullptr),
      happy_(true) {
  if (strcmp(outputbase, '-') && strcmp(outputbase, 'stdout')) {
    STRING outfile = STRING(outputbase) + STRING('.') + STRING(file_extension_);
    fout_ = fopen(outfile.string(), 'wb');
    if (fout_ == nullptr) {
      happy_ = false;
    }
  }
}
    
    // Computes matrix.vector v = Wu.
// u is of size W.dim2() - 1 and the output v is of size W.dim1().
// u is imagined to have an extra element at the end with value 1, to
// implement the bias, but it doesn't actually have it.
void IntSimdMatrix::MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                                    const GenericVector<double>& scales,
                                    const int8_t* u, double* v) const {
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  if (partial_funcs_.empty()) {
    // Base implementation.
    for (int i = 0; i < num_out; ++i) {
      const int8_t* wi = w[i];
      int total = 0;
      for (int j = 0; j < num_in; ++j) total += wi[j] * u[j];
      // Add in the bias and correct for integer values.
      v[i] = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * scales[i];
    }
  } else {
    const int8_t* w_data = shaped_w_.data();
    const double* scales_data = &scales[0];
    // Each call to a partial_func_ produces group_size outputs, except the
    // last one, which can produce less.
    int group_size = num_outputs_per_register_ * max_output_registers_;
    int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
    int rounded_num_out = RoundOutputs(num_out);
    int output = 0;
    for (auto fn : partial_funcs_) {
      // The amount of w_data consumed by each call to fn.
      int w_step = (rounded_num_in + 1) * group_size;
      // Run with this group size, until it would produce too much output, then
      // switch to a smaller size.
      for (; output + group_size <= rounded_num_out; output += group_size) {
        (*fn)(w_data, scales_data, u, rounded_num_in, num_out - output, v);
        w_data += w_step;
        scales_data += group_size;
        v += group_size;
      }
      group_size /= 2;
    }
  }
}
    
    // Applies the box file based on the image name fname, and resegments
// the words in the block_list (page), with:
// blob-mode: one blob per line in the box file, words as input.
// word/line-mode: one blob per space-delimited unit after the #, and one word
// per line in the box file. (See comment above for box file format.)
// If find_segmentation is true, (word/line mode) then the classifier is used
// to re-segment words/lines to match the space-delimited truth string for
// each box. In this case, the input box may be for a word or even a whole
// text line, and the output words will contain multiple blobs corresponding
// to the space-delimited input string.
// With find_segmentation false, no classifier is needed, but the chopper
// can still be used to correctly segment touching characters with the help
// of the input boxes.
// In the returned PAGE_RES, the WERD_RES are setup as they would be returned
// from normal classification, ie. with a word, chopped_word, rebuild_word,
// seam_array, denorm, box_word, and best_state, but NO best_choice or
// raw_choice, as they would require a UNICHARSET, which we aim to avoid.
// Instead, the correct_text member of WERD_RES is set, and this may be later
// converted to a best_choice using CorrectClassifyWords. CorrectClassifyWords
// is not required before calling ApplyBoxTraining.
PAGE_RES* Tesseract::ApplyBoxes(const STRING& fname,
                                bool find_segmentation,
                                BLOCK_LIST *block_list) {
  GenericVector<TBOX> boxes;
  GenericVector<STRING> texts, full_texts;
  if (!ReadAllBoxes(applybox_page, true, fname, &boxes, &texts, &full_texts,
                    nullptr)) {
    return nullptr;  // Can't do it.
  }
    }
    
    /////////////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. The block
 * may be a side exit or a normal IR block, depending on whether or not the
 * offset is in the current RegionDesc.
 */
Block* getBlock(IRGS& env, Offset offset) {
  SrcKey sk(curSrcKey(env), offset);
  // If hasBlock returns true, then IRUnit already has a block for that offset
  // and makeBlock will just return it.  This will be the proper successor
  // block set by setSuccIRBlocks.  Otherwise, the given offset doesn't belong
  // to the region, so we just create an exit block.
  if (!env.irb->hasBlock(sk)) return makeExit(env, offset);
    }
    
    struct Block;
struct SSATmp;
    
    void cgEagerSyncVMRegs(IRLS& env, const IRInstruction* inst) {
  auto const extra = inst->extra<EagerSyncVMRegs>();
  auto const fp = srcLoc(env, inst, 0).reg();
  auto const sp = srcLoc(env, inst, 1).reg();
  auto& v = vmain(env);
    }
    
    #endif

    
    class SubProcess {
 public:
  SubProcess(const std::vector<std::string>& args);
  ~SubProcess();
    }
    
            // Get graph inputs/outputs/valueinfos.
        const std::vector<const NodeArg*>& GetInputs() const;
        const std::vector<const NodeArg*>& GetOutputs() const;
        const std::vector<const NodeArg*>& GetValueInfo() const;
    
                // Flag indicates whether a default value specified.
            // It it's true, the first element of <m_allowedValues> is the
            // default value.
            bool m_hasDefaultValue;
    
        void SetSmoothWeight(double fsSmoothingWeight) { m_fsSmoothingWeight = fsSmoothingWeight; }
    void SetFrameDropThresh(double frameDropThresh) { m_frameDropThreshold = frameDropThresh; }
    void SetReferenceAlign(const bool doreferencealign) { m_doReferenceAlignment = doreferencealign; }
    
        // Get utterance description by its index.
    const UtteranceDescription* GetUtterance(size_t index) const
    {
        return &m_utterances[index];
    }
    
    
    {        // possibly distributed read
        // making several attempts
        msra::util::attempt(5, [&]()
        {
            chunkInfo.RequireData(m_parent->m_featureKind, m_parent->m_ioFeatureDimension, m_parent->m_samplePeriod, m_parent->m_verbosity);
        });
    }
    
    
    {    fprintf(stderr, 'LatticeDeserializer: '%zu' sequences\n', totalNumSequences);
}
    
    
    {    // mapping table case
    const std::map<LabelIdType, LabelType>& GetLabelMapping();
    void SetLabelMapping(const std::map<LabelIdType, LabelType>& labelMapping);
};
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
      std::string comparator_;
  uint64_t log_number_;
  uint64_t prev_log_number_;
  uint64_t next_file_number_;
  SequenceNumber last_sequence_;
  bool has_comparator_;
  bool has_log_number_;
  bool has_prev_log_number_;
  bool has_next_file_number_;
  bool has_last_sequence_;
    
    namespace leveldb {
    }
    
      // Add '<shared><non_shared><value_size>' to buffer_
  PutVarint32(&buffer_, shared);
  PutVarint32(&buffer_, non_shared);
  PutVarint32(&buffer_, value.size());
    
    #endif  // STORAGE_LEVELDB_UTIL_RANDOM_H_

    
    
    {}  // namespace fuzzer
    
    
    {private:
  uint8_t Size = 0;
  uint8_t Data[kMaxSize];
};
    
    ExternalFunctions::ExternalFunctions() {
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  this->NAME = ::NAME;                                                         \
  CheckFnPtr((void *)::NAME, #NAME, WARN);
    }
    
    #endif // LIBFUZZER_WINDOWS

    
    static bool IsFile(const std::string &Path, const DWORD &FileAttributes) {
    }
    
    
    {
    {    if (NewSize + 5 >= OldSize)
      break;
    OldSize = NewSize;
  }
  return Res;
}
    
      /// Mutates data by adding a word from the temporary automatic dictionary.
  size_t Mutate_AddWordFromTemporaryAutoDictionary(uint8_t *Data, size_t Size,
                                                   size_t MaxSize);
    
    #endif  // LLVM_FUZZER_OPTIONS_H

    
    void sha1_pad(sha1nfo *s) {
	// Implement SHA-1 padding (fips180-2 §5.1.1)
    }
    
    // Private copy of SHA1 implementation.
static const int kSHA1NumBytes = 20;
    
      void AddMutation(uint32_t Pos, uint32_t Size, const uint8_t *Data) {
    if (NumMutations >= kMaxMutations) return;
    auto &M = Mutations[NumMutations++];
    M.Pos = Pos;
    M.W.Set(Data, Size);
  }
    
    // This is a reimplementation of Libc's `system()`. On Darwin the Libc
// implementation contains a mutex which prevents it from being used
// concurrently. This implementation **can** be used concurrently. It sets the
// signal handlers when the first thread enters and restores them when the last
// thread finishes execution of the function and ensures this is not racey by
// using a mutex.
int ExecuteCommand(const std::string &Command) {
  posix_spawnattr_t SpawnAttributes;
  if (posix_spawnattr_init(&SpawnAttributes))
    return -1;
  // Block and ignore signals of the current process when the first thread
  // enters.
  {
    std::lock_guard<std::mutex> Lock(SignalMutex);
    if (ActiveThreadCount == 0) {
      static struct sigaction IgnoreSignalAction;
      sigset_t BlockedSignalsSet;
      memset(&IgnoreSignalAction, 0, sizeof(IgnoreSignalAction));
      IgnoreSignalAction.sa_handler = SIG_IGN;
    }
    }
    }

        
        public:
  DeadEndBlocks(const SILFunction *F) : F(F) {}
    
      /// A cache of dead-end basic blocks that we use to determine if we can
  /// ignore 'leaks'.
  DeadEndBlocks &DEBlocks;
    
    namespace index {
    }
    
      void failed(StringRef error) override {
    // FIXME: expose errors?
  }
    
      CodeBlock(StringRef LiteralContent, StringRef Language)
      : MarkupASTNode(ASTNodeKind::CodeBlock),
        LiteralContent(LiteralContent),
        Language(Language) {}
    
    /// \brief Diagnostic consumer that displays diagnostics to standard error.
class PrintingDiagnosticConsumer : public DiagnosticConsumer {
  llvm::raw_ostream &Stream;
  bool ForceColors = false;
  bool DidErrorOccur = false;
public:
  PrintingDiagnosticConsumer(llvm::raw_ostream &stream = llvm::errs()) :
    Stream(stream) { }
    }
    
    #endif
    
    namespace index {
    }
    
    static const int kCbToBlueTable[256] = {
  -227, -225, -223, -222, -220, -218, -216, -214, -213, -211, -209, -207,
  -206, -204, -202, -200, -198, -197, -195, -193, -191, -190, -188, -186,
  -184, -183, -181, -179, -177, -175, -174, -172, -170, -168, -167, -165,
  -163, -161, -159, -158, -156, -154, -152, -151, -149, -147, -145, -144,
  -142, -140, -138, -136, -135, -133, -131, -129, -128, -126, -124, -122,
  -120, -119, -117, -115, -113, -112, -110, -108, -106, -105, -103, -101,
   -99,  -97,  -96,  -94,  -92,  -90,  -89,  -87,  -85,  -83,  -82,  -80,
   -78,  -76,  -74,  -73,  -71,  -69,  -67,  -66,  -64,  -62,  -60,  -58,
   -57,  -55,  -53,  -51,  -50,  -48,  -46,  -44,  -43,  -41,  -39,  -37,
   -35,  -34,  -32,  -30,  -28,  -27,  -25,  -23,  -21,  -19,  -18,  -16,
   -14,  -12,  -11,   -9,   -7,   -5,   -4,   -2,    0,    2,    4,    5,
     7,    9,   11,   12,   14,   16,   18,   19,   21,   23,   25,   27,
    28,   30,   32,   34,   35,   37,   39,   41,   43,   44,   46,   48,
    50,   51,   53,   55,   57,   58,   60,   62,   64,   66,   67,   69,
    71,   73,   74,   76,   78,   80,   82,   83,   85,   87,   89,   90,
    92,   94,   96,   97,   99,  101,  103,  105,  106,  108,  110,  112,
   113,  115,  117,  119,  120,  122,  124,  126,  128,  129,  131,  133,
   135,  136,  138,  140,  142,  144,  145,  147,  149,  151,  152,  154,
   156,  158,  159,  161,  163,  165,  167,  168,  170,  172,  174,  175,
   177,  179,  181,  183,  184,  186,  188,  190,  191,  193,  195,  197,
   198,  200,  202,  204,  206,  207,  209,  211,  213,  214,  216,  218,
   220,  222,  223,  225,
};
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    // Functions for reading a jpeg byte stream into a JPEGData object.
    
    
    {}  // namespace guetzli
    
    struct HuffmanTableEntry {
  // Initialize the value to an invalid symbol so that we can recognize it
  // when reading the bit stream using a Huffman code with space > 0.
  HuffmanTableEntry() : bits(0), value(0xffff) {}
    }
    
      ASSERT_OK(env_->NewWritableFile(test_dir_ + '/f', &writable_file, soptions_));
  ASSERT_OK(writable_file->Append('hello '));
  ASSERT_OK(writable_file->Append('world'));
  ASSERT_OK(writable_file->Close());
  writable_file.reset();
    
    
    
      virtual bool PartialMergeMulti(const Slice& key,
                                 const std::deque<Slice>& operand_list,
                                 std::string* new_value, Logger* logger) const
      override;
    
    
    {  // Check that the rocksdb result string matches the desired string
  assert(res.size() == checker.size());
  ASSERT_EQ(res, checker);
}
    
    JniCallback::~JniCallback() {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  assert(env != nullptr);
    }
    
    class Mutex;
class MemTableIterator;
class MergeContext;
class InternalIterator;
    
      while (!PredecessorsAllCleared(point)) {
    cv_.wait(lock);
    if (DisabledByMarker(point, thread_id)) {
      return;
    }
  }
    
    
    {    memcpy(buf_ + shared_len, non_shared_data, non_shared_len);
    key_ = buf_;
    key_size_ = total_size;
  }
    
      PERF_TIMER_GUARD(block_decompress_time);
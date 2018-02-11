
        
        void StmtBuilder::printLiteralString(StringRef Str, SourceLoc Loc) {
  Expr *PrintFn = buildPrintRefExpr(Loc);
  Expr *PrintStr = new (Context) StringLiteralExpr(Str, Loc);
  addToBody(CallExpr::createImplicit(Context, PrintFn, { PrintStr }, { }));
}
    
    #pragma mark - NSCalendar verification
    
    namespace swift {
class DependencyTracker;
class ModuleDecl;
class SourceFile;
    }
    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
    
    {
    {  bool didErrorOccur() {
    return DidErrorOccur;
  }
};
  
}
    
    class EditorDiagConsumer : public swift::DiagnosticConsumer {
  typedef std::vector<DiagnosticEntryInfo> DiagnosticsTy;
  /// Maps from a BufferID to the diagnostics that were emitted inside that
  /// buffer.
  llvm::DenseMap<unsigned, DiagnosticsTy> BufferDiagnostics;
    }
    
      // These two overloads allow streaming a wide C string to a Message
  // using the UTF-8 encoding.
  Message& operator <<(const wchar_t* wide_c_str);
  Message& operator <<(wchar_t* wide_c_str);
    
    // Implements printing an array type T[N].
template <typename T, size_t N>
class UniversalPrinter<T[N]> {
 public:
  // Prints the given array, omitting some elements when there are too
  // many.
  static void Print(const T (&a)[N], ::std::ostream* os) {
    UniversalPrintArray(a, N, os);
  }
};
    
    // Next, associate a list of types with the test case, which will be
// repeated for each type in the list.  The typedef is necessary for
// the macro to parse correctly.
typedef testing::Types<char, int, unsigned int> MyTypes;
TYPED_TEST_CASE(FooTest, MyTypes);
    
    // This flag enables using colors in terminal output. Available values are
// 'yes' to enable colors, 'no' (disable colors), or 'auto' (the default)
// to let Google Test decide.
GTEST_DECLARE_string_(color);
    
    // A concrete DeathTestFactory implementation for normal use.
class DefaultDeathTestFactory : public DeathTestFactory {
 public:
  virtual bool Create(const char* statement, const RE* regex,
                      const char* file, int line, DeathTest** test);
};
    
    // A helper for implementing tuple_element<k, T>.  kIndexValid is true
// iff k < the number of fields in tuple type T.
template <bool kIndexValid, int kIndex, class Tuple>
struct TupleElement;
    
      // Returns true iff n is a prime number.
  virtual bool IsPrime(int n) const = 0;
    
      // operator new and operator delete help us control water allocation.
  void* operator new(size_t allocation_size) {
    allocated_++;
    return malloc(allocation_size);
  }
    
        // insert the node in the network
    AddNodeToNet(newNode);
    
            // after finished statistics, the mean and variance of the bn node should be freezd.
        bnNode->FreezeParameters();
    
    #pragma once
    
    TEST(LogTest, ReadWrite) {
  Write('foo');
  Write('bar');
  Write('');
  Write('xxxx');
  ASSERT_EQ('foo', Read());
  ASSERT_EQ('bar', Read());
  ASSERT_EQ('', Read());
  ASSERT_EQ('xxxx', Read());
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ('EOF', Read());  // Make sure reads at eof work
}
    
    // Snapshots are kept in a doubly-linked list in the DB.
// Each SnapshotImpl corresponds to a particular sequence number.
class SnapshotImpl : public Snapshot {
 public:
  SequenceNumber number_;  // const after creation
    }
    
      void SetComparatorName(const Slice& name) {
    has_comparator_ = true;
    comparator_ = name.ToString();
  }
  void SetLogNumber(uint64_t num) {
    has_log_number_ = true;
    log_number_ = num;
  }
  void SetPrevLogNumber(uint64_t num) {
    has_prev_log_number_ = true;
    prev_log_number_ = num;
  }
  void SetNextFile(uint64_t num) {
    has_next_file_number_ = true;
    next_file_number_ = num;
  }
  void SetLastSequence(SequenceNumber seq) {
    has_last_sequence_ = true;
    last_sequence_ = seq;
  }
  void SetCompactPointer(int level, const InternalKey& key) {
    compact_pointers_.push_back(std::make_pair(level, key));
  }
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
      virtual Status LockFile(const std::string& fname, FileLock** lock) {
    *lock = new FileLock;
    return Status::OK();
  }
    
    
    {    int nindex = index_.num_chunk();
    int nvalue = value_.num_chunk();
    int ntotal = nindex + nvalue;
    #pragma omp parallel for schedule(dynamic, 1) num_threads(nthread_)
    for (int i = 0; i < ntotal; ++i) {
      if (i < nindex) {
        index_.Decompress(i);
      } else {
        value_.Decompress(i - nindex);
      }
    }
  }
    
      inline void ParseStr(std::string *tok) {
    while ((ch_buf = this->GetChar()) != EOF) {
      switch (ch_buf) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        case '\r':
        case '\n': LOG(FATAL)<< 'ConfigReader: unterminated string';
        default: *tok += ch_buf;
      }
    }
    LOG(FATAL) << 'ConfigReader: unterminated string';
  }
  inline void ParseStrML(std::string *tok) {
    while ((ch_buf = this->GetChar()) != EOF) {
      switch (ch_buf) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        default: *tok += ch_buf;
      }
    }
    LOG(FATAL) << 'unterminated string';
  }
  // return newline
  inline bool GetNextToken(std::string *tok) {
    tok->clear();
    bool new_line = false;
    while (ch_buf != EOF) {
      switch (ch_buf) {
        case '#' : SkipLine(); new_line = true; break;
        case '\'':
          if (tok->length() == 0) {
            ParseStr(tok); ch_buf = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '\'':
          if (tok->length() == 0) {
            ParseStrML(tok); ch_buf = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '=':
          if (tok->length() == 0) {
            ch_buf = this->GetChar();
            *tok = '=';
          }
          return new_line;
        case '\r':
        case '\n':
          if (tok->length() == 0) new_line = true;
        case '\t':
        case ' ' :
          ch_buf = this->GetChar();
          if (tok->length() != 0) return new_line;
          break;
        default:
          *tok += ch_buf;
          ch_buf = this->GetChar();
          break;
      }
    }
    if (tok->length() == 0) {
      return true;
    } else {
      return false;
    }
  }
};
/*!
 * \brief an iterator use stream base, allows use all types of istream
 */
class ConfigStreamReader: public ConfigReaderBase {
 public:
  /*!
   * \brief constructor
   * \param fin istream input stream
   */
  explicit ConfigStreamReader(std::istream &fin) : fin(fin) {}
    
    /*!
 * \brief Input stream that support additional PeekRead
 *  operation, besides read.
 */
class PeekableInStream : public dmlc::Stream {
 public:
  explicit PeekableInStream(dmlc::Stream* strm)
      : strm_(strm), buffer_ptr_(0) {}
    }
    
    /*! \brief pruner that prunes a tree after growing finishes */
class TreePruner: public TreeUpdater {
 public:
  TreePruner() {
    syncher.reset(TreeUpdater::Create('sync'));
  }
  // set training parameter
  void Init(const std::vector<std::pair<std::string, std::string> >& args) override {
    param.InitAllowUnknown(args);
    syncher->Init(args);
  }
  // update the tree, do pruning
  void Update(const std::vector<bst_gpair> &gpair,
              DMatrix *p_fmat,
              const std::vector<RegTree*> &trees) override {
    // rescale learning rate according to size of trees
    float lr = param.learning_rate;
    param.learning_rate = lr / trees.size();
    for (size_t i = 0; i < trees.size(); ++i) {
      this->DoPrune(*trees[i]);
    }
    param.learning_rate = lr;
    syncher->Update(gpair, p_fmat, trees);
  }
    }
    
    /*! \brief a column storage, to be used with ApplySplit. Note that each
    bin id is stored as index[i] + index_base. */
template<typename T>
class Column {
 public:
  ColumnType type;
  const T* index;
  uint32_t index_base;
  const size_t* row_ind;
  size_t len;
};
    
    TEST(SparsePageDMatrix, ColAcess) {
  std::string tmp_file = CreateSimpleTestData();
  xgboost::DMatrix * dmat = xgboost::DMatrix::Load(
    tmp_file + '#' + tmp_file + '.cache', true, false);
  std::remove(tmp_file.c_str());
  EXPECT_FALSE(FileExists(tmp_file + '.cache.col.page'));
    }
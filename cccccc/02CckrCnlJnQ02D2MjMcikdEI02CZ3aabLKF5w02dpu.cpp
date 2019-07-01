
        
        #ifndef NDEBUG
/// Verify that the types of fields are valid within a given generic signature.
static void verifyFields(CanGenericSignature Sig, ArrayRef<SILField> Fields) {
  for (auto &field : Fields) {
    auto ty = field.getLoweredType();
    // Layouts should never refer to archetypes, since they represent an
    // abstract generic type layout.
    assert(!ty->hasArchetype()
           && 'SILLayout field cannot have an archetype type');
    assert(!ty->hasTypeVariable()
           && 'SILLayout cannot contain constraint system type variables');
    if (!ty->hasTypeParameter())
      continue;
    field.getLoweredType().findIf([Sig](Type t) -> bool {
      if (auto gpt = t->getAs<GenericTypeParamType>()) {
        // Check that the generic param exists in the generic signature.
        assert(Sig && 'generic param in nongeneric layout?');
        assert(std::find(Sig.getGenericParams().begin(),
                         Sig.getGenericParams().end(),
                         gpt->getCanonicalType()) != Sig.getGenericParams().end()
               && 'generic param not declared in generic signature?!');
      }
      return false;
    });
  }
}
#endif
    
    CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  llvm::SmallString<32> NameBuf(Name);
  cache_attributes_t Attrs = {
    CACHE_ATTRIBUTES_VERSION_2,
    CBs.keyHashCB,
    CBs.keyIsEqualCB,
    nullptr,
    CBs.keyDestroyCB,
    CBs.valueReleaseCB,
    nullptr,
    nullptr,
    CBs.UserData,
    CBs.valueRetainCB,
  };
    }
    
      Allocated = new char[capacity];
  End = Allocated + capacity;
  Begin = End - oldSize;
  std::memcpy(Begin, oldBegin, oldSize);
    
        if (node->Further || node->Right) {
      IndentScope ms(this, (childKind == ChildKind::Right ||
                            childKind == ChildKind::Further ||
                            childKind == ChildKind::Root) ? '  ' : '| ');
    }
    
    /// The result of out inference system
struct IAMResult {
  // The name to import as
  DeclName name = {};
    }
    
    /// Reencode well-formed UTF-8 as UTF-32.
///
/// This entry point is only called from compiler-internal entry points, so does
/// only minimal validation. In particular, it does *not* check for overlong
/// encodings.
/// If \p mapNonSymbolChars is true, non-symbol ASCII characters (characters
/// except [$_a-zA-Z0-9]) are also encoded like non-ASCII unicode characters.
/// Returns false if \p InputUTF8 contains surrogate code points.
static bool convertUTF8toUTF32(llvm::StringRef InputUTF8,
                               std::vector<uint32_t> &OutUTF32,
                               bool mapNonSymbolChars) {
  auto ptr = InputUTF8.begin();
  auto end = InputUTF8.end();
  while (ptr < end) {
    uint8_t first = *ptr++;
    if (first < 0x80) {
      if (Mangle::isValidSymbolChar(first) || !mapNonSymbolChars) {
        OutUTF32.push_back(first);
      } else {
        OutUTF32.push_back((uint32_t)first + 0xD800);
      }
    } else if (first < 0xC0) {
      // Invalid continuation byte.
      return false;
    } else if (first < 0xE0) {
      // Two-byte sequence.
      if (ptr == end)
        return false;
      uint8_t second = *ptr++;
      if (!isContinuationByte(second))
        return false;
      OutUTF32.push_back(((first & 0x1F) << 6) | (second & 0x3F));
    } else if (first < 0xF0) {
      // Three-byte sequence.
      if (end - ptr < 2)
        return false;
      uint8_t second = *ptr++;
      uint8_t third = *ptr++;
      if (!isContinuationByte(second) || !isContinuationByte(third))
        return false;
      OutUTF32.push_back(((first & 0xF) << 12) | ((second & 0x3F) << 6)
                         | ( third  & 0x3F      ));
    } else if (first < 0xF8) {
      // Four-byte sequence.
      if (end - ptr < 3)
        return false;
      uint8_t second = *ptr++;
      uint8_t third = *ptr++;
      uint8_t fourth = *ptr++;
      if (!isContinuationByte(second) || !isContinuationByte(third)
          || !isContinuationByte(fourth))
        return false;
      OutUTF32.push_back(((first & 0x7) << 18) | ((second & 0x3F) << 12)
                         | ((third  & 0x3F) <<  6)
                         | ( fourth & 0x3F       ));
    } else {
      // Unused sequence length.
      return false;
    }
  }
  return true;
}
    
      llvm::Value *getAddressPointer() const { return Addr.getAddress(); }
  Alignment getAlignment() const { return Addr.getAlignment(); }
  Address getAddress() const { return Addr; }
  llvm::Value *getOwner() const { return Owner; }
    
      /// Whether we've emitted the call for the current callee yet.  This
  /// is just for debugging purposes --- e.g. the destructor asserts
  /// that it's true --- but is otherwise derivable from
  /// RemainingArgsForCallee, at least between calls.
  bool EmittedCall;
    
    void MapLiteTestUtil::SetMapFieldsInitialized(unittest::TestMapLite* message) {
  MapTestUtilImpl::SetMapFieldsInitialized(message);
}
    
    // ----
// Author: lar@google.com (Laramie Leavitt)
//
// Template metaprogramming utility functions.
//
// This code is compiled directly on many platforms, including client
// platforms like Windows, Mac, and embedded systems.  Before making
// any changes here, make sure that you're not breaking any platforms.
//
//
// The names chosen here reflect those used in tr1 and the boost::mpl
// library, there are similar operations used in the Loki library as
// well.  I prefer the boost names for 2 reasons:
// 1.  I think that portions of the Boost libraries are more likely to
// be included in the c++ standard.
// 2.  It is not impossible that some of the boost libraries will be
// included in our own build in the future.
// Both of these outcomes means that we may be able to directly replace
// some of these with boost equivalents.
//
#ifndef GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_
#define GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_
    
    // Author: brianolson@google.com (Brian Olson)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Test program to verify that GzipOutputStream is compatible with command line
// gzip or java.util.zip.GzipOutputStream
//
// Reads data on standard input and writes compressed gzip stream to standard
// output.
    
      bool Generate(const FileDescriptor* file,
                        const string& parameter,
                        GeneratorContext* context,
                        string* error) const {
    FileDescriptorProto new_file;
    file->CopyTo(&new_file);
    SchemaGroupStripper::StripFile(file, &new_file);
    }
    
    std::string tmppath() {
  // TMPFILE is for manual test execution during which the user will specify
  // the full temp file path using the environmental variable TMPFILE
  const char* tmpfile = getenv('TMPFILE');
  if (tmpfile) {
    return std::string(tmpfile);
  }
    }
    
    class GetCol2ImGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Im2Col', '', std::vector<string>{GO(0)}, std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Col2Im, GetCol2ImGradient);
    
    template <typename T, class Context>
class BernoulliJSDGradientOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDGradientOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
      // Set the maximum number of read-only files that will be opened.
  // Must be called before creating an Env.
  static void SetReadOnlyFDLimit(int limit);
    
      // Create a reader that will return log records from '*file'.
  // '*file' must remain live while this Reader is in use.
  //
  // If 'reporter' is non-null, it is notified whenever some data is
  // dropped due to a detected corruption.  '*reporter' must remain
  // live while this Reader is in use.
  //
  // If 'checksum' is true, verify checksums if available.
  //
  // The Reader will start reading at the first record located at physical
  // position >= initial_offset within the file.
  Reader(SequentialFile* file, Reporter* reporter, bool checksum,
         uint64_t initial_offset);
    
     private:
  // Cleanup functions are stored in a single-linked list.
  // The list's head node is inlined in the iterator.
  struct CleanupNode {
    // True if the node is not used. Only head nodes might be unused.
    bool IsEmpty() const { return function == nullptr; }
    // Invokes the cleanup function.
    void Run() {
      assert(function != nullptr);
      (*function)(arg1, arg2);
    }
    }
    
      // Return a string representation of this status suitable for printing.
  // Returns the string 'OK' for success.
  std::string ToString() const;
    
      static Iterator* BlockReader(void*, const ReadOptions&, const Slice&);
    
    class BlockBuilder;
class BlockHandle;
class WritableFile;
    
      ~Block();
    
      // Returns an estimate of the current (uncompressed) size of the block
  // we are building.
  size_t CurrentSizeEstimate() const;
    
    
    {  // Write footer
  if (ok()) {
    Footer footer;
    footer.set_metaindex_handle(metaindex_block_handle);
    footer.set_index_handle(index_block_handle);
    std::string footer_encoding;
    footer.EncodeTo(&footer_encoding);
    r->status = r->file->Append(footer_encoding);
    if (r->status.ok()) {
      r->offset += footer_encoding.size();
    }
  }
  return r->status;
}
    
    
    {}  // namespace leveldb
    
        ASSERT_LE(FilterSize(), static_cast<size_t>((length * 10 / 8) + 40))
        << length;
    
      Insert(100, 102);
  Cache::Handle* h2 = cache_->Lookup(EncodeKey(100));
  ASSERT_EQ(102, DecodeValue(cache_->Value(h2)));
  ASSERT_EQ(0, deleted_keys_.size());
    
    class Histogram {
 public:
  Histogram() {}
  ~Histogram() {}
    }
    
     public:
  /*! \brief virtual destructor */
  virtual ~LinearUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(
      const std::vector<std::pair<std::string, std::string> >& args) = 0;
    
    
    {
    {XGBOOST_REGISTER_PREDICTOR(CPUPredictor, 'cpu_predictor')
    .describe('Make predictions using CPU.')
    .set_body([]() { return new CPUPredictor(); });
}  // namespace predictor
}  // namespace xgboost

    
    namespace xgboost {
    }
    
    /*! \brief pruner that prunes a tree after growing finishes */
class TreePruner: public TreeUpdater {
 public:
  TreePruner() {
    syncher_.reset(TreeUpdater::Create('sync', tparam_));
  }
  // set training parameter
  void Init(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
    syncher_->Init(args);
  }
  // update the tree, do pruning
  void Update(HostDeviceVector<GradientPair> *gpair,
              DMatrix *p_fmat,
              const std::vector<RegTree*> &trees) override {
    // rescale learning rate according to size of trees
    float lr = param_.learning_rate;
    param_.learning_rate = lr / trees.size();
    for (auto tree : trees) {
      this->DoPrune(*tree);
    }
    param_.learning_rate = lr;
    syncher_->Update(gpair, p_fmat, trees);
  }
    }
    
    struct MyParam : dmlc::Parameter<MyParam> {
  Foo foo;
  int bar;
  DMLC_DECLARE_PARAMETER(MyParam) {
    DMLC_DECLARE_FIELD(foo)
      .set_default(Foo::kBar)
      .add_enum('bar', Foo::kBar)
      .add_enum('frog', Foo::kFrog)
      .add_enum('cat', Foo::kCat)
      .add_enum('dog', Foo::kDog);
    DMLC_DECLARE_FIELD(bar)
      .set_default(-1);
  }
};
    
    
    {
    {  }
  {
    auto updater = std::unique_ptr<xgboost::LinearUpdater>(
        xgboost::LinearUpdater::Create('shotgun', &lparam));
    EXPECT_ANY_THROW(updater->Init({{'feature_selector', 'random'}}));
  }
  delete mat;
}
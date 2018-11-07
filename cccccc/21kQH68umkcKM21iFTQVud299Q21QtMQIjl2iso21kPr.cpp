
        
            const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    
    {private Q_SLOTS:
    void handleSelectionChanged(int idx);
};
    
    #ifndef BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
#define BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
    
    
    {        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, y, sizeof(y));
        secp256k1_sha256_write(&sha, x, sizeof(x));
        secp256k1_sha256_finalize(&sha, result);
        ret = 1;
    }
    
    BOOST_AUTO_TEST_CASE(get_difficulty_for_mid_target)
{
    TestDifficulty(0x1df88f6f, 0.004023);
}
    
    // Owns a python object and decrements the reference count on destruction.
// This class is not threadsafe.
template <typename PyObjectStruct>
class ScopedPythonPtr {
 public:
  // Takes the ownership of the specified object to ScopedPythonPtr.
  // The reference count of the specified py_object is not incremented.
  explicit ScopedPythonPtr(PyObjectStruct* py_object = NULL)
      : ptr_(py_object) {}
    }
    
    
    {  // Nested types
  if (descriptor->nested_type_count() > 0) {
      // Need to specify array type explicitly here, as all elements may be null. 
      printer->Print('new pbr::GeneratedClrTypeInfo[] { ');
      for (int i = 0; i < descriptor->nested_type_count(); i++) {
          WriteGeneratedCodeInfo(descriptor->nested_type(i), printer, i == descriptor->nested_type_count() - 1);
      }
      printer->Print('}');
  }
  else {
      printer->Print('null');
  }
  printer->Print(last ? ')' : '),\n');
}
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
      // We start the comment with the main body based on the comments from the
  // .proto file (if present). We then end with the field declaration, e.g.:
  //   optional string foo = 5;
  // If the field is a group, the debug string might end with {.
  printer->Print('/**\n');
  WriteDocCommentBody(printer, field);
  printer->Print(
    ' * <code>$def$</code>\n',
    'def', EscapeJavadoc(FirstLineOf(field->DebugString())));
  printer->Print(' */\n');
}
    
    ImmutableGeneratorFactory::ImmutableGeneratorFactory(
    Context* context) : context_(context) {
}
ImmutableGeneratorFactory::~ImmutableGeneratorFactory() {}
    
    void SetEnumVariables(const FieldDescriptor* descriptor,
                      std::map<string, string>* variables) {
  string type = EnumName(descriptor->enum_type());
  (*variables)['storage_type'] = type;
  // For non repeated fields, if it was defined in a different file, the
  // property decls need to use 'enum NAME' rather than just 'NAME' to support
  // the forward declaration of the enums.
  if (!descriptor->is_repeated() &&
      (descriptor->file() != descriptor->enum_type()->file())) {
    (*variables)['property_type'] = 'enum ' + type;
  }
  (*variables)['enum_verifier'] = type + '_IsValidValue';
  (*variables)['enum_desc_func'] = type + '_EnumDescriptor';
    }
    
    #endif  // ANDROID_BUILD

    
      // Rounds the size up to a multiple of the input register size (in int8_t).
  int RoundInputs(int size) const {
    return Roundup(size, num_inputs_per_register_);
  }
  // Rounds the size up to a multiple of the output register size (in int32_t).
  int RoundOutputs(int size) const {
    return Roundup(size, num_outputs_per_register_);
  }
    
    // Constructor.
// Tests the architecture in a system-dependent way to detect AVX, SSE and
// any other available SIMD equipment.
// __GNUC__ is also defined by compilers that include GNU extensions such as
// clang.
SIMDDetect::SIMDDetect() {
#if defined(X86_BUILD)
#if defined(__GNUC__)
  unsigned int eax, ebx, ecx, edx;
  if (__get_cpuid(1, &eax, &ebx, &ecx, &edx) != 0) {
    // Note that these tests all use hex because the older compilers don't have
    // the newer flags.
    sse_available_ = (ecx & 0x00080000) != 0;
    avx_available_ = (ecx & 0x10000000) != 0;
    if (avx_available_) {
      // There is supposed to be a __get_cpuid_count function, but this is all
      // there is in my cpuid.h. It is a macro for an asm statement and cannot
      // be used inside an if.
      __cpuid_count(7, 0, eax, ebx, ecx, edx);
      avx2_available_ = (ebx & 0x00000020) != 0;
      avx512F_available_ = (ebx & 0x00010000) != 0;
      avx512BW_available_ = (ebx & 0x40000000) != 0;
    }
  }
#elif defined(_WIN32)
  int cpuInfo[4];
  __cpuid(cpuInfo, 0);
  if (cpuInfo[0] >= 1) {
    __cpuid(cpuInfo, 1);
    sse_available_ = (cpuInfo[2] & 0x00080000) != 0;
    avx_available_ = (cpuInfo[2] & 0x10000000) != 0;
  }
#else
#error 'I don't know how to test for SIMD with this compiler'
#endif
#endif  // X86_BUILD
}

    
    #include <cstdint>  // for int16_t
    
    PageIterator::PageIterator(PAGE_RES* page_res, Tesseract* tesseract, int scale,
                           int scaled_yres, int rect_left, int rect_top,
                           int rect_width, int rect_height)
    : page_res_(page_res),
      tesseract_(tesseract),
      word_(nullptr),
      word_length_(0),
      blob_index_(0),
      cblob_it_(nullptr),
      include_upper_dots_(false),
      include_lower_dots_(false),
      scale_(scale),
      scaled_yres_(scaled_yres),
      rect_left_(rect_left),
      rect_top_(rect_top),
      rect_width_(rect_width),
      rect_height_(rect_height) {
  it_ = new PAGE_RES_IT(page_res);
  PageIterator::Begin();
}
    
    // Given a MutableIterator to the start of a block, run DetectParagraphs on
// that block and commit the results to the underlying ROW and BLOCK structs,
// saving the ParagraphModels in models.  Caller owns the models.
// We use unicharset during the function to answer questions such as 'is the
// first letter of this word upper case?'
void DetectParagraphs(int debug_level,
                      bool after_text_recognition,
                      const MutableIterator *block_start,
                      GenericVector<ParagraphModel *> *models);
    
    // Getter for the name.
const char* ParamContent::GetName() const {
  if (param_type_ == VT_INTEGER) { return iIt->name_str(); }
  else if (param_type_ == VT_BOOLEAN) { return bIt->name_str(); }
  else if (param_type_ == VT_DOUBLE) { return dIt->name_str(); }
  else if (param_type_ == VT_STRING) { return sIt->name_str(); }
  else
    return 'ERROR: ParamContent::GetName()';
}
    
    namespace tesseract {
  class BoolParam;
  class DoubleParam;
  class IntParam;
  class StringParam;
  class Tesseract;
}
    
    	if (streqi(opt.c_str(), L'ALL'))
	{
		userOnly = false;
	}
	else if (streqi(opt.c_str(), L'USER'))
	{
		userOnly = true;
	}
	else
	{
		MessageBox(NULL, L'Unrecognized option for /REGISTER or /UNREGISTER. Must be either ALL or USER.', MB_TITLE, MB_OK);
		exit(1);
	}
    
    #endif // __CCACTION_CATMULLROM_H__

    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual ActionInstant* reverse() const override;
    virtual Hide* clone() const override;
    
        //
    // Overrides
    //
    virtual Repeat* clone() const override;
    virtual Repeat* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void stop(void) override;
    /**
     * @param dt In seconds.
     */
    virtual void update(float dt) override;
    virtual bool isDone(void) const override;
    
CC_CONSTRUCTOR_ACCESS:
    Repeat() {}
    virtual ~Repeat();
    
    NS_CC_BEGIN
    
    /**
 @brief This action simulates a page turn from the bottom right hand corner of the screen.
 
 @details It's not much use by itself but is used by the PageTurnTransition.
         Based on an original paper by L Hong et al.
         http://www.parc.com/publication/1638/turning-pages-of-3d-electronic-books.html
  
 @since v0.8.2
 */
class CC_DLL PageTurn3D : public Grid3DAction
{
public:
    /**
     * @js NA 
     */
    virtual GridBase* getGrid() override;
    }
    
    
    {    /**
    @brief The callback function when ActionTween is running.
    @param value The new value of the specified key.
    @param key The key of property which should be updated.
    */
    virtual void updateTweenAction(float value, const std::string& key) = 0;
};
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    
    {  for (int table = 0; table < 4; ++table) {
    for (int i = table * 6; i < 39 + table * 11; ++i) {
      int k = table * 100 + i;
      char key[100];
      snprintf(key, sizeof(key), '%010d', table * 100 + i);
      auto expected = std::to_string(table * 1000 + i);
      std::string val;
      Status s = db_->Get(ReadOptions(), key, &val);
      if (k / 10 % 2 == 0) {
        ASSERT_TRUE(s.IsNotFound());
      } else {
        ASSERT_OK(s);
        ASSERT_EQ(expected, val);
      }
    }
  }
}
    
      using DBImpl::NewIterator;
  virtual Iterator* NewIterator(const ReadOptions&,
                                ColumnFamilyHandle* column_family) override;
    
    // Simple implementation of SlicePart variants of Put().  Child classes
// can override these method with more performant solutions if they choose.
Status WriteBatchBase::Put(ColumnFamilyHandle* column_family,
                           const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
    }
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
      // Reuse an existing file by renaming it and opening it as writable.
  virtual Status ReuseWritableFile(const std::string& fname,
                                   const std::string& old_fname,
                                   unique_ptr<WritableFile>* result,
                                   const EnvOptions& options) override {
    result->reset();
    if (options.use_mmap_writes) {
      return Status::InvalidArgument();
    }
    // Open file using underlying Env implementation
    std::unique_ptr<WritableFile> underlying;
    Status status = EnvWrapper::ReuseWritableFile(fname, old_fname, &underlying, options);
    if (!status.ok()) {
      return status;
    }
    // Initialize & write prefix (if needed)
    AlignedBuffer prefixBuf;
    Slice prefixSlice;
    size_t prefixLength = provider_->GetPrefixLength();
    if (prefixLength > 0) {
      // Initialize prefix 
      prefixBuf.Alignment(underlying->GetRequiredBufferAlignment());
      prefixBuf.AllocateNewBuffer(prefixLength);
      provider_->CreateNewPrefix(fname, prefixBuf.BufferStart(), prefixLength);
      prefixSlice = Slice(prefixBuf.BufferStart(), prefixLength);
      // Write prefix 
      status = underlying->Append(prefixSlice);
      if (!status.ok()) {
        return status;
      }
    }
    // Create cipher stream
    std::unique_ptr<BlockAccessCipherStream> stream;
    status = provider_->CreateCipherStream(fname, options, prefixSlice, &stream);
    if (!status.ok()) {
      return status;
    }
    (*result) = std::unique_ptr<WritableFile>(new EncryptedWritableFile(underlying.release(), stream.release(), prefixLength));
    return Status::OK();
  }
    
    Status PosixWritableFile::InvalidateCache(size_t offset, size_t length) {
  if (use_direct_io()) {
    return Status::OK();
  }
#ifndef OS_LINUX
  (void)offset;
  (void)length;
  return Status::OK();
#else
  // free OS pages
  int ret = Fadvise(fd_, offset, length, POSIX_FADV_DONTNEED);
  if (ret == 0) {
    return Status::OK();
  }
  return IOError('While fadvise NotNeeded', filename_, errno);
#endif
}
    
     public:
  PosixRandomAccessFile(const std::string& fname, int fd,
                        const EnvOptions& options);
  virtual ~PosixRandomAccessFile();
    
      delete txn;
  // Clear snapshot from read options since it is no longer valid
  read_options.snapshot = nullptr;
  snapshot = nullptr;
    
      virtual void SetBackgroundThreads(int /*number*/,
                                    Priority /*pri*/ = LOW) override {}
  virtual int GetBackgroundThreads(Priority /*pri*/ = LOW) override {
    return 0;
  }
  virtual void IncBackgroundThreadsIfNeeded(int /*number*/,
                                            Priority /*pri*/) override {}
  virtual std::string TimeToString(uint64_t /*number*/) override { return ''; }
    
    
    {
    {
    {      // Add back the last sentinel node.
      tree[j_end + 1] = sentinel;
    }
    if (SetDepth(static_cast<int>(2 * n - 1), &tree[0], depth, tree_limit)) {
      /* We need to pack the Huffman tree in tree_limit bits. If this was not
         successful, add fake entities to the lowest values and retry. */
      break;
    }
  }
}
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
    namespace guetzli {
    }
    
    namespace guetzli {
    }
    
    static const int kDCTBlockSize = 64;
static const int kMaxComponents = 4;
static const int kMaxQuantTables = 4;
static const int kMaxHuffmanTables = 4;
static const int kJpegHuffmanMaxBitLength = 16;
static const int kJpegHuffmanAlphabetSize = 256;
static const int kJpegDCAlphabetSize = 12;
static const int kMaxDHTMarkers = 512;
    
    #include <stdint.h>
    
    
    {}  // namespace guetzli
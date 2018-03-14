
        
          /// DebuggerClient is consulted at two times during name
  /// lookup.  This is the first time: after all names in a
  /// source file have been checked but before external
  /// Modules are checked.  The results in the ResultVector will
  /// be consulted first.  Return true if results have been added
  /// to RV.
  /// FIXME: I don't think this ever does anything useful.
  virtual bool lookupOverrides(DeclBaseName Name, DeclContext *DC,
                               SourceLoc Loc, bool IsTypeLookup,
                               ResultVector &RV) = 0;
    
    NS_ASSUME_NONNULL_END

    
    StringRef StdlibGroupsIndexRecordingConsumer::findGroupForSymbol(const IndexSymbol &sym) {
  bool isDeclOrDef = sym.roles & ((SymbolRoleSet)SymbolRole::Declaration | (SymbolRoleSet)SymbolRole::Definition);
  if (isDeclOrDef) {
    if (!sym.group.empty())
      return sym.group;
    return findGroupNameForDecl(sym.decl);
  }
    }
    
    namespace swift {
    }
    
    #endif // SWIFT_SYNTAX_REFERENCES_H

    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
    TEST(FileNameTest, Parse) {
  Slice db;
  FileType type;
  uint64_t number;
    }
    
    
    {
    {      bool known = true;
      bool write_sync = false;
      if (name == Slice('fillseq')) {
        Write(write_sync, SEQUENTIAL, FRESH, num_, FLAGS_value_size, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('fillseqbatch')) {
        Write(write_sync, SEQUENTIAL, FRESH, num_, FLAGS_value_size, 1000);
        WalCheckpoint(db_);
      } else if (name == Slice('fillrandom')) {
        Write(write_sync, RANDOM, FRESH, num_, FLAGS_value_size, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('fillrandbatch')) {
        Write(write_sync, RANDOM, FRESH, num_, FLAGS_value_size, 1000);
        WalCheckpoint(db_);
      } else if (name == Slice('overwrite')) {
        Write(write_sync, RANDOM, EXISTING, num_, FLAGS_value_size, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('overwritebatch')) {
        Write(write_sync, RANDOM, EXISTING, num_, FLAGS_value_size, 1000);
        WalCheckpoint(db_);
      } else if (name == Slice('fillrandsync')) {
        write_sync = true;
        Write(write_sync, RANDOM, FRESH, num_ / 100, FLAGS_value_size, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('fillseqsync')) {
        write_sync = true;
        Write(write_sync, SEQUENTIAL, FRESH, num_ / 100, FLAGS_value_size, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('fillrand100K')) {
        Write(write_sync, RANDOM, FRESH, num_ / 1000, 100 * 1000, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('fillseq100K')) {
        Write(write_sync, SEQUENTIAL, FRESH, num_ / 1000, 100 * 1000, 1);
        WalCheckpoint(db_);
      } else if (name == Slice('readseq')) {
        ReadSequential();
      } else if (name == Slice('readrandom')) {
        Read(RANDOM, 1);
      } else if (name == Slice('readrand100K')) {
        int n = reads_;
        reads_ /= 1000;
        Read(RANDOM, 1);
        reads_ = n;
      } else {
        known = false;
        if (name != Slice()) {  // No error message for empty name
          fprintf(stderr, 'unknown benchmark '%s'\n', name.ToString().c_str());
        }
      }
      if (known) {
        Stop(name);
      }
    }
  }
    
    static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    // Find a file by file name.
bool PyDescriptorDatabase::FindFileByName(const string& filename,
                                          FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(PyObject_CallMethod(
      py_database_, 'FindFileByName', 's#', filename.c_str(), filename.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    // Returns 0 on success, -1 on failure.
int SetOwner(RepeatedCompositeContainer* self,
             const shared_ptr<Message>& new_owner);
    
    namespace repeated_scalar_container {
    }
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* generator_context,
                string* error) const;
    
    class EnumGenerator : public SourceGeneratorBase {
 public:
  EnumGenerator(const EnumDescriptor* descriptor, const Options* options);
  ~EnumGenerator();
    }
    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_repeated_message_field.h>
#include <google/protobuf/compiler/csharp/csharp_message_field.h>
#include <google/protobuf/compiler/csharp/csharp_wrapper_field.h>
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
    
    namespace rabit {
namespace utils {
extern 'C' {
  void (*Printf)(const char *fmt, ...) = Rprintf;
  void (*Assert)(int exp, const char *fmt, ...) = XGBoostAssert_R;
  void (*Check)(int exp, const char *fmt, ...) = XGBoostCheck_R;
  void (*Error)(const char *fmt, ...) = error;
}
}
}
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
    struct EvalError : public EvalEWiseBase<EvalError> {
  explicit EvalError(const char* param) {
    if (param != nullptr) {
      std::ostringstream os;
      os << 'error';
      CHECK_EQ(sscanf(param, '%f', &threshold_), 1)
        << 'unable to parse the threshold value for the error metric';
      if (threshold_ != 0.5f) os << '@' << threshold_;
      name_ = os.str();
    } else {
      threshold_ = 0.5f;
      name_ = 'error';
    }
  }
  const char *Name() const override {
    return name_.c_str();
  }
  inline bst_float EvalRow(bst_float label, bst_float pred) const {
    // assume label is in [0,1]
    return pred > threshold_ ? 1.0f - label : label;
  }
 protected:
  bst_float threshold_;
  std::string name_;
};
    
    int Packer_Unpack(const void* _rawbuf, size_t _rawlen, std::string& _url, unsigned int& _sequence, size_t& _packlen, AutoBuffer& _data) {
    if (_rawlen < sizeof(LongLinkPack)) return LONGLINKPACK_CONTINUE;
    }
    
    
    {  private:
    void* m_this;
    std::map<const std::string, boost::any> m_variablemap;
};
    
    /*
XXH32() :
    Calculate the 32-bits hash of sequence of length 'len' stored at memory address 'input'.
    The memory between input & input+len must be valid (allocated and read-accessible).
    'seed' can be used to alter the result predictably.
    This function successfully passes all SMHasher tests.
    Speed on Core 2 Duo @ 3 GHz (single thread, SMHasher benchmark) : 5.4 GB/s
    Note that 'len' is type 'int', which means it is limited to 2^31-1.
    If your data is larger, use the advanced functions below.
*/
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    allowGlobalSeqNo
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_IngestExternalFileOptions_allowGlobalSeqNo(
    JNIEnv* env, jobject jobj, jlong jhandle) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  return static_cast<jboolean>(options->allow_global_seqno);
}
    
    /**
 * @brief get fid
 * @details [long description]
 *
 * @param fname [description]
 * @param fid [description]
 *
 * @return
 *  Status::OK()
 *  Status::NotFound()
 */
Status EnvLibrados::_GetFid(
  const std::string &fname,
  std::string& fid) {
  std::set<std::string> keys;
  std::map<std::string, librados::bufferlist> kvs;
  keys.insert(fname);
  int r = _db_pool_ioctx.omap_get_vals_by_keys(_db_name, keys, &kvs);
    }
    
      void StopLoggingInternal() {
    mutex_.AssertHeld();
    }
    
      virtual Status CreateColumnFamilies(
      const std::vector<ColumnFamilyDescriptor>& column_families,
      std::vector<ColumnFamilyHandle*>* handles) override {
    return db_->CreateColumnFamilies(column_families, handles);
  }
    
    #endif  // JAVA_ROCKSJNI_COMPACTION_FILTER_FACTORY_JNICALLBACK_H_

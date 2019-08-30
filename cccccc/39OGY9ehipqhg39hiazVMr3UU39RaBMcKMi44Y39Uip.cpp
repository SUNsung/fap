
        
        // Advertises our menu bars to Unity.
//
// GlobalMenuBarX11 is responsible for managing the DbusmenuServer for each
// XID. We need a separate object to own the dbus channel to
// com.canonical.AppMenu.Registrar and to register/unregister the mapping
// between a XID and the DbusmenuServer instance we are offering.
class GlobalMenuBarRegistrarX11 {
 public:
  static GlobalMenuBarRegistrarX11* GetInstance();
    }
    
    template <typename P1, typename P2, typename P3, typename P4, typename P5>
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*(P1, P2, P3, P4, P5)>& callback) {
  typename CallbackParamTraits<P1>::LocalType a1;
  typename CallbackParamTraits<P2>::LocalType a2;
  typename CallbackParamTraits<P3>::LocalType a3;
  typename CallbackParamTraits<P4>::LocalType a4;
  typename CallbackParamTraits<P5>::LocalType a5;
  if (!GetNextArgument(args, 0, true, &a1) ||
      !GetNextArgument(args, 0, false, &a2) ||
      !GetNextArgument(args, 0, false, &a3) ||
      !GetNextArgument(args, 0, false, &a4) ||
      !GetNextArgument(args, 0, false, &a5))
    return nullptr;
  return callback.Run(a1, a2, a3, a4, a5);
}
    
      v8::Local<v8::Object> GetHandle() const override;
    
    
    {  return args[0];
}
    
    bool IsUrlArg(const base::CommandLine::CharType* arg) {
  // the first character must be a letter for this to be a URL
  auto c = *arg;
  if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
    for (auto* p = arg + 1; *p; ++p) {
      c = *p;
    }
    }
    }
    
    #endif  // SHELL_APP_COMMAND_LINE_ARGS_H_

    
    #ifndef SHELL_BROWSER_API_ATOM_API_AUTO_UPDATER_H_
#define SHELL_BROWSER_API_ATOM_API_AUTO_UPDATER_H_
    
      /// Change the DeclContext of any contained parameters to the specified
  /// DeclContext.
  void setDeclContextOfParamDecls(DeclContext *DC);
  
  
  /// Flags used to indicate how ParameterList cloning should operate.
  enum CloneFlags {
    /// The cloned ParamDecls should be marked implicit.
    Implicit = 0x01,
    /// The cloned pattern is for an inherited constructor; mark default
    /// arguments as inherited, and mark unnamed arguments as named.
    Inherited = 0x02,
    /// The cloned pattern will strip type information.
    WithoutTypes = 0x04,
  };
    
    // Crash due to an unowned retain count overflow.
// FIXME: can't pass the object's address from InlineRefCounts without hacks
void swift::swift_abortUnownedRetainOverflow() {
  swift::fatalError(FatalErrorFlags::ReportBacktrace,
                    'Fatal error: Object's unowned reference was retained too many times');
}
    
    #if defined(_WIN32)
template <>
const char *
_swift_stdlib_strtoX_clocale_impl<float>(const char *str, float *result) {
  if (swift_stringIsSignalingNaN(str)) {
    *result = std::numeric_limits<float>::signaling_NaN();
    return str + std::strlen(str);
  }
    }
    
      switch (Action) {
  case ActionType::DumpReflectionSections:
    // Dump everything
    Context.getBuilder().dumpAllSections(OS);
    break;
  case ActionType::DumpTypeLowering: {
    for (std::string Line; std::getline(std::cin, Line);) {
      if (Line.empty())
        continue;
    }
    }
    }
    
      /// Set if the type doesn't come from the default symbol namespace for
  /// its kind and source language.  (Source language can be determined
  /// from the parent context.)
  ///
  /// Some languages (most importantly, C/C++/Objective-C) have different
  /// symbol namespaces in which types can be declared; for example,
  /// `struct A` and `typedef ... A` can be declared in the same scope and
  /// resolve to unrelated types.  When these declarations are imported,
  /// there are several possible ways to distinguish them in Swift, e.g.
  /// by implicitly renaming them; however, the external name used for
  /// mangling and metadata must be stable and so is based on the original
  /// declared name.  Therefore, in these languages, we privilege one
  /// symbol namespace as the default (although which may depend on the
  /// type kind), and declarations from the other(s) must be marked in
  /// order to differentiate them.
  ///
  /// C, C++, and Objective-C
  /// -----------------------
  ///
  /// C, C++, and Objective-C have several different identifier namespaces
  /// that can declare types: the ordinary namespace (`typedef`s and ObjC
  /// `@interface`s), the tag namespace (`struct`s, `enum`s, `union`s, and
  /// C++ `class`es), and the ObjC protocol namespace (ObjC `@protocol`s).
  /// The languages all forbid multiple types from being declared in a given
  /// scope and namespace --- at least, they do within a translation unit,
  /// and for the most part we have to assume in Swift that that applies
  /// across translation units as well.
  //
  /// Swift's default symbol-namespace rules for C/C++/ObjC are as follows:
  /// - Protocols are assumed to come from the ObjC protocol namespace.
  /// - Classes are assumed to come from the ordinary namespace (as an
  ///   Objective-C class would).
  /// - Structs and enums are assumed to come from the tag namespace
  ///   (as a C `struct`, `union`, or `enum` would).
  //;
  /// Note that there are some special mangling rules for types imported
  /// from C tag types in addition to the symbol-namespace rules.
  StringType SymbolNamespace;
    
      ASTMangler(bool DWARFMangling = false)
    : DWARFMangling(DWARFMangling) {}
    
    namespace Ui {
    class OpenURIDialog;
}
    
    
    {    /* Test r/s equal to zero */
    {
        /* (1,1) encoded in DER. */
        unsigned char sigcder[8] = {0x30, 0x06, 0x02, 0x01, 0x01, 0x02, 0x01, 0x01};
        unsigned char sigc64[64] = {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
        };
        secp256k1_pubkey pubkeyc;
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sigc64, 0) == 1);
        CHECK(secp256k1_ecdsa_recover(ctx, &pubkeyc, &rsig, msg32) == 1);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigcder, sizeof(sigcder)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyc) == 1);
        sigcder[4] = 0;
        sigc64[31] = 0;
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sigc64, 0) == 1);
        CHECK(secp256k1_ecdsa_recover(ctx, &pubkeyb, &rsig, msg32) == 0);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigcder, sizeof(sigcder)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyc) == 0);
        sigcder[4] = 1;
        sigcder[7] = 0;
        sigc64[31] = 1;
        sigc64[63] = 0;
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sigc64, 0) == 1);
        CHECK(secp256k1_ecdsa_recover(ctx, &pubkeyb, &rsig, msg32) == 0);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigcder, sizeof(sigcder)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyc) == 0);
    }
}
    
    static std::string ShortSuccessor(const std::string& s) {
  std::string result = s;
  InternalKeyComparator(BytewiseComparator()).FindShortSuccessor(&result);
  return result;
}
    
    void FaultInjectionTestEnv::UntrackFile(const std::string& f) {
  MutexLock l(&mutex_);
  db_file_state_.erase(f);
  new_files_since_last_dir_sync_.erase(f);
}
    
    TEST(FileNameTest, Construction) {
  uint64_t number;
  FileType type;
  std::string fname;
    }
    
    namespace google {
namespace protobuf {
namespace util {
namespace {
    }
    }
    }
    }
    
    #endif  // TESSERACT_CCSTRUCT_DEBUGPIXA_H_

    
    #include <cstdio>
    
      // Accessors.
  const Key& key() const {
    return key_;
  }
  void set_key(const Key& new_key) {
    key_ = new_key;
  }
  const Data* data() const {
    return data_;
  }
  // Sets the data pointer, taking ownership of the data.
  void set_data(Data* new_data) {
    delete data_;
    data_ = new_data;
  }
  // Relinquishes ownership of the data pointer (setting it to nullptr).
  Data* extract_data() {
    Data* result = data_;
    data_ = nullptr;
    return result;
  }
    
      std::string fname = TableFileName(dbname, meta->number);
  if (iter->Valid()) {
    WritableFile* file;
    s = env->NewWritableFile(fname, &file);
    if (!s.ok()) {
      return s;
    }
    }
    
    TEST(RecoveryTest, MultipleMemTables) {
  // Make a large log.
  const int kNum = 1000;
  for (int i = 0; i < kNum; i++) {
    char buf[100];
    snprintf(buf, sizeof(buf), '%050d', i);
    ASSERT_OK(Put(buf, buf));
  }
  ASSERT_EQ(0, NumTables());
  Close();
  ASSERT_EQ(0, NumTables());
  ASSERT_EQ(1, NumLogs());
  uint64_t old_log_file = FirstLogFile();
    }
    
    class SnapshotList;
    
    
    {  struct Rep;
  Rep* rep_;
};
    
    #if defined(_WIN32)
// The leveldb::Env class below contains a DeleteFile method.
// At the same time, <windows.h>, a fairly popular header
// file for Windows applications, defines a DeleteFile macro.
//
// Without any intervention on our part, the result of this
// unfortunate coincidence is that the name of the
// leveldb::Env::DeleteFile method seen by the compiler depends on
// whether <windows.h> was included before or after the LevelDB
// headers.
//
// To avoid headaches, we undefined DeleteFile (if defined) and
// redefine it at the bottom of this file. This way <windows.h>
// can be included before this file (or not at all) and the
// exported method will always be leveldb::Env::DeleteFile.
#if defined(DeleteFile)
#undef DeleteFile
#define LEVELDB_DELETEFILE_UNDEFINED
#endif  // defined(DeleteFile)
#endif  // defined(_WIN32)
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixSetGroup
 * Signature: (J[I)V
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixSetGroup
  (JNIEnv * jenv, jclass jcls, jlong jhandle, jintArray jarray) {
  DMatrixHandle handle = (DMatrixHandle) jhandle;
  jint* array = jenv->GetIntArrayElements(jarray, NULL);
  bst_ulong len = (bst_ulong)jenv->GetArrayLength(jarray);
  int ret = XGDMatrixSetGroup(handle, (unsigned int const *)array, len);
  //release
  jenv->ReleaseIntArrayElements(jarray, array, 0);
  return ret;
}
    
    /*!
 * \brief create a matrix content from CSR format
 * \param indptr pointer to row headers
 * \param indices findex
 * \param data fvalue
 * \param nindptr number of rows in the matrix + 1
 * \param nelem number of nonzero elements in the matrix
 * \param num_col number of columns; when it's set to 0, then guess from data
 * \param out created dmatrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromCSREx(const size_t* indptr,
                                     const unsigned* indices,
                                     const float* data,
                                     size_t nindptr,
                                     size_t nelem,
                                     size_t num_col,
                                     DMatrixHandle* out);
/*!
 * \brief create a matrix content from CSC format
 * \param col_ptr pointer to col headers
 * \param indices findex
 * \param data fvalue
 * \param nindptr number of rows in the matrix + 1
 * \param nelem number of nonzero elements in the matrix
 * \param num_row number of rows; when it's set to 0, then guess from data
 * \param out created dmatrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromCSCEx(const size_t* col_ptr,
                                     const unsigned* indices,
                                     const float* data,
                                     size_t nindptr,
                                     size_t nelem,
                                     size_t num_row,
                                     DMatrixHandle* out);
    
    /*!
 * \brief Find the maximum iterator within the iterators
 * \param begin The begining iterator.
 * \param end The end iterator.
 * \return the iterator point to the maximum value.
 * \tparam Iterator The type of the iterator.
 */
template<typename Iterator>
XGBOOST_DEVICE inline Iterator FindMaxIndex(Iterator begin, Iterator end) {
  Iterator maxit = begin;
  for (Iterator it = begin; it != end; ++it) {
    if (*it > *maxit) maxit = it;
  }
  return maxit;
}
    
    
    { private:
  // the chunk split of the data, by number of elements
  std::vector<bst_uint> raw_chunks_;
  // the encoded chunk, by number of bytes
  std::vector<bst_uint> encoded_chunks_;
  // output buffer of compression.
  std::vector<std::string> out_buffer_;
  // input buffer of data.
  std::string in_buffer_;
};
    
    
    { private:
  /*! \brief number of allocated pages */
  size_t num_free_buffer_;
  /*! \brief clock_pointer */
  size_t clock_ptr_;
  /*! \brief writer threads */
  std::vector<std::unique_ptr<std::thread> > workers_;
  /*! \brief recycler queue */
  dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > qrecycle_;
  /*! \brief worker threads */
  std::vector<dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > > qworkers_;
};
#endif  // DMLC_ENABLE_STD_THREAD
    
      /**
   * \brief Initialise this object before use.
   *
   * \param num_col
   * \param colsample_bynode
   * \param colsample_bylevel
   * \param colsample_bytree
   * \param skip_index_0      (Optional) True to skip index 0.
   */
  void Init(int64_t num_col, float colsample_bynode, float colsample_bylevel,
            float colsample_bytree, bool skip_index_0 = false) {
    colsample_bylevel_ = colsample_bylevel;
    colsample_bytree_ = colsample_bytree;
    colsample_bynode_ = colsample_bynode;
    }
    
    /*! \brief namespace of base64 decoding and encoding table */
namespace base64 {
const char DecodeTable[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  62,  // '+'
  0, 0, 0,
  63,  // '/'
  52, 53, 54, 55, 56, 57, 58, 59, 60, 61,  // '0'-'9'
  0, 0, 0, 0, 0, 0, 0,
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
  13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,  // 'A'-'Z'
  0, 0, 0, 0, 0, 0,
  26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
  39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,  // 'a'-'z'
};
static const char EncodeTable[] =
    'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/';
}  // namespace base64
/*! \brief the stream that reads from base64, note we take from file pointers */
class Base64InStream: public dmlc::Stream {
 public:
  explicit Base64InStream(dmlc::Stream *fs) : reader_(256) {
    reader_.set_stream(fs);
    num_prev = 0; tmp_ch = 0;
  }
  /*!
   * \brief initialize the stream position to beginning of next base64 stream
   * call this function before actually start read
   */
  inline void InitPosition(void) {
    // get a character
    do {
      tmp_ch = reader_.GetChar();
    } while (isspace(tmp_ch));
  }
  /*! \brief whether current position is end of a base64 stream */
  inline bool IsEOF(void) const {
    return num_prev == 0 && (tmp_ch == EOF || isspace(tmp_ch));
  }
  virtual size_t Read(void *ptr, size_t size) {
    using base64::DecodeTable;
    if (size == 0) return 0;
    // use tlen to record left size
    size_t tlen = size;
    unsigned char *cptr = static_cast<unsigned char*>(ptr);
    // if anything left, load from previous buffered result
    if (num_prev != 0) {
      if (num_prev == 2) {
        if (tlen >= 2) {
          *cptr++ = buf_prev[0];
          *cptr++ = buf_prev[1];
          tlen -= 2;
          num_prev = 0;
        } else {
          // assert tlen == 1
          *cptr++ = buf_prev[0]; --tlen;
          buf_prev[0] = buf_prev[1];
          num_prev = 1;
        }
      } else {
        // assert num_prev == 1
        *cptr++ = buf_prev[0]; --tlen; num_prev = 0;
      }
    }
    if (tlen == 0) return size;
    int nvalue;
    // note: everything goes with 4 bytes in Base64
    // so we process 4 bytes a unit
    while (tlen && tmp_ch != EOF && !isspace(tmp_ch)) {
      // first byte
      nvalue = DecodeTable[tmp_ch] << 18;
      {
        // second byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        nvalue |= DecodeTable[tmp_ch] << 12;
        *cptr++ = (nvalue >> 16) & 0xFF; --tlen;
        }
      {
        // third byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        // handle termination
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == '=') << 'invalid base64 format';
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch] << 6;
        if (tlen) {
          *cptr++ = (nvalue >> 8) & 0xFF; --tlen;
        } else {
          buf_prev[num_prev++] = (nvalue >> 8) & 0xFF;
        }
      }
      {
        // fourth byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch))
            << 'invalid base64 format';
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch];
        if (tlen) {
          *cptr++ = nvalue & 0xFF; --tlen;
        } else {
          buf_prev[num_prev ++] = nvalue & 0xFF;
        }
      }
      // get next char
      tmp_ch = reader_.GetChar();
    }
    if (kStrictCheck) {
      CHECK_EQ(tlen, 0) << 'Base64InStream: read incomplete';
    }
    return size - tlen;
  }
  virtual void Write(const void *ptr, size_t size) {
    LOG(FATAL) << 'Base64InStream do not support write';
  }
    }
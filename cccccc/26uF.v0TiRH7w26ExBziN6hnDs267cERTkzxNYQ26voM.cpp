
        
          /// Get the type encoding for an ObjC property.
  void getObjCEncodingForPropertyType(IRGenModule &IGM, VarDecl *property,
                                      std::string &s);
  
  /// Produces extended encoding of ObjC block signature.
  /// \returns the encoded type.
  llvm::Constant *getBlockTypeExtendedEncoding(IRGenModule &IGM,
                                               CanSILFunctionType invokeTy);
  
  /// Produces extended encoding of method type.
  /// \returns the encoded type.
  llvm::Constant *getMethodTypeExtendedEncoding(IRGenModule &IGM,
                                                AbstractFunctionDecl *method);
  
  /// Build an Objective-C method descriptor for the given getter method.
  void emitObjCGetterDescriptor(IRGenModule &IGM,
                                ConstantArrayBuilder &descriptors,
                                AbstractStorageDecl *storage);
    
    #include 'swift/Index/IndexRecord.h'
#include 'swift/AST/ASTContext.h'
#include 'swift/AST/Decl.h'
#include 'swift/AST/Expr.h'
#include 'swift/AST/Module.h'
#include 'swift/AST/ParameterList.h'
#include 'swift/AST/Pattern.h'
#include 'swift/AST/Stmt.h'
#include 'swift/AST/Types.h'
#include 'swift/AST/DiagnosticsFrontend.h'
#include 'swift/AST/ModuleLoader.h'
#include 'swift/ClangImporter/ClangModule.h'
#include 'swift/Index/Index.h'
#include 'swift/Strings.h'
#include 'clang/Basic/FileManager.h'
#include 'clang/Frontend/CompilerInstance.h'
#include 'clang/Index/IndexingAction.h'
#include 'clang/Index/IndexRecordWriter.h'
#include 'clang/Index/IndexUnitWriter.h'
#include 'clang/Lex/Preprocessor.h'
#include 'llvm/Support/Path.h'
    
      swift::markup::CommentParts getParts() const {
    return Parts;
  }
    
    class Code final : public InlineContent {
  StringRef LiteralContent;
    }
    
    using clang::index::SymbolKind;
using clang::index::SymbolLanguage;
using clang::index::SymbolSubKind;
using clang::index::SymbolProperty;
using clang::index::SymbolPropertySet;
using clang::index::SymbolRole;
using clang::index::SymbolRoleSet;
using clang::index::SymbolRelation;
using clang::index::SymbolInfo;
    
      /// Returns the buffer ID for the specified *valid* location.
  ///
  /// Because a valid source location always corresponds to a source buffer,
  /// this routine always returns a valid buffer ID.
  unsigned findBufferContainingLoc(SourceLoc Loc) const;
    
    /// Substitution - A substitution into a generic specialization.
class Substitution {
  Type Replacement;
  ArrayRef<ProtocolConformanceRef> Conformance;
    }
    
    // On other platforms swift_once_t is std::once_flag
typedef std::once_flag swift_once_t;
    
      AutoCompactTest() {
    dbname_ = test::TmpDir() + '/autocompact_test';
    tiny_cache_ = NewLRUCache(100);
    options_.block_cache = tiny_cache_;
    DestroyDB(dbname_, options_);
    options_.create_if_missing = true;
    options_.compression = kNoCompression;
    ASSERT_OK(DB::Open(options_, dbname_, &db_));
  }
    
    struct leveldb_filterpolicy_t : public FilterPolicy {
  void* state_;
  void (*destructor_)(void*);
  const char* (*name_)(void*);
  char* (*create_)(
      void*,
      const char* const* key_array, const size_t* key_length_array,
      int num_keys,
      size_t* filter_length);
  unsigned char (*key_match_)(
      void*,
      const char* key, size_t length,
      const char* filter, size_t filter_length);
    }
    
      DBIter(DBImpl* db, const Comparator* cmp, Iterator* iter, SequenceNumber s,
         uint32_t seed)
      : db_(db),
        user_comparator_(cmp),
        iter_(iter),
        sequence_(s),
        direction_(kForward),
        valid_(false),
        rnd_(seed),
        bytes_counter_(RandomPeriod()) {
  }
  virtual ~DBIter() {
    delete iter_;
  }
  virtual bool Valid() const { return valid_; }
  virtual Slice key() const {
    assert(valid_);
    return (direction_ == kForward) ? ExtractUserKey(iter_->key()) : saved_key_;
  }
  virtual Slice value() const {
    assert(valid_);
    return (direction_ == kForward) ? iter_->value() : saved_value_;
  }
  virtual Status status() const {
    if (status_.ok()) {
      return iter_->status();
    } else {
      return status_;
    }
  }
    
    class DBImpl;
    
    namespace leveldb {
    }
    
    // To write value-parameterized tests, first you should define a fixture
// class. It is usually derived from testing::TestWithParam<T> (see below for
// another inheritance scheme that's sometimes useful in more complicated
// class hierarchies), where the type of your parameter values.
// TestWithParam<T> is itself derived from testing::Test. T can be any
// copyable type. If it's a raw pointer, you are responsible for managing the
// lifespan of the pointed values.
    
    
    {}  // namespace testing_internal
    
    
    {  // The name of the source file where the test part took place, or
  // '' if the source file is unknown.
  std::string file_name_;
  // The line in the source file where the test part took place, or -1
  // if the line number is unknown.
  int line_number_;
  std::string summary_;  // The test failure summary.
  std::string message_;  // The test failure message.
};
    
      // Many linked_ptr operations may change p.link_ for some linked_ptr
  // variable p in the same circle as this object.  Therefore we need
  // to prevent two such operations from occurring concurrently.
  //
  // Note that different types of linked_ptr objects can coexist in a
  // circle (e.g. linked_ptr<Base>, linked_ptr<Derived1>, and
  // linked_ptr<Derived2>).  Therefore we must use a single mutex to
  // protect all linked_ptr objects.  This can create serious
  // contention in production code, but is acceptable in a testing
  // framework.
    
    #include 'test/cpp/qps/report.h'
    
    // Get leading or trailing comments in a string. Comment lines start with '// '.
// Leading detached comments are put in in front of leading comments.
template <typename DescriptorType>
inline grpc::string GetNodeComments(const DescriptorType* desc, bool leading) {
  return grpc_generator::GetPrefixedComments(desc, leading, '//');
}
    
    
    { private:
  GeneratorConfiguration config_;
};
    
    #if TARGET_OS_IPHONE
GRPC_XMACRO_ITEM(isWWAN, IsWWAN)
#endif
GRPC_XMACRO_ITEM(reachable, Reachable)
GRPC_XMACRO_ITEM(transientConnection, TransientConnection)
GRPC_XMACRO_ITEM(connectionRequired, ConnectionRequired)
GRPC_XMACRO_ITEM(connectionOnTraffic, ConnectionOnTraffic)
GRPC_XMACRO_ITEM(interventionRequired, InterventionRequired)
GRPC_XMACRO_ITEM(connectionOnDemand, ConnectionOnDemand)
GRPC_XMACRO_ITEM(isLocalAddress, IsLocalAddress)
GRPC_XMACRO_ITEM(isDirect, IsDirect)

    
    
    {  return 0;
}

    
                // Verify that there's indeed a single layout
            for (const auto& iter : inputMatrices)
            {
                assert(iter.second.pMBLayout == pMBLayout);
                // TODO: This must be a runtime check, not an assert().
                UNUSED(iter);
            }
    
    
    {            specifiedMBSize *= numParallelSequences; // assume 'specifiedMBSize' refers to truncation size
        }
        // end bug post-fix
        // TODO: This ^^ should go away once SGD gets fixed to take the truncation size as a parameter.
    
        Status Model::Save(Model& p_model, int p_fd)
    {
        if (p_fd < 0)
        {
            return Status(ONNX, INVALID_ARGUMENT, '<p_fd> is less than 0.');
        }
    }
    
    #endif // ! ONNXIR_UTILS_H

    
    namespace ONNXIR {
    // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Sigmoid)
        .Description('Sigmoid takes one input data (Tensor<T>) and produces one output data '
            '(Tensor<T>) where the sigmoid function, y = 1 / (1 + exp(-x)), is applied to the '
            'tensor elementwise.')
        .Input('X', 'input tensor', 'T')
        .Output('Y', 'The sigmoid value of the input tensor computed element-wise', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    }
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(Upsample)
        .Description('Scale up spatial dimensions.  Use interpolation to fill in values')
        .Input('input', 'Input tensor of shape [N,C,H,W]', 'T')
        .Output('output', 'Result, has same shape and type as X', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' }, 'Constrain input and '
            'output types to float tensors.')
        .Attr('mode', 'enum {'NEAREST', 'BILINEAR' }, Nearest neighbor or bilinear upsampling.',
            AttrType::AttributeProto_AttributeType_STRING)
        .Attr('width_scale', 'Scale along width dimension', AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('height_scale', 'Scale along height dimension', AttrType::AttributeProto_AttributeType_FLOAT);
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Squeeze)
        .Description('Remove single-dimensional entries from the shape of a tensor. '
            'Takes a  parameter `axes` with a list of axes to squeeze.')
        .Input('data', 'Tensors with at least max(dims) dimensions.', 'T')
        .Output('squeezed', 'Reshaped tensor with same data as input.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('axes',
            'List of positive integers, indicate the dimensions to squeeze.',
            AttrType::AttributeProto_AttributeType_INTS, int64_t(1));
    
    
    {
    {            if (verbosity)
            {
                fprintf(stderr, 'HTKChunkInfo::RequireData: read physical chunk %u (%' PRIu64 ' utterances, %' PRIu64 ' frames, %' PRIu64 ' bytes)\n',
                        m_chunkId,
                        m_utterances.size(),
                        m_totalFrames,
                        sizeof(float) * m_frames.rows() * m_frames.cols());
            }
        }
        catch (...)
        {
            // Releasing all data
            m_frames.resize(0, 0);
            throw;
        }
    }
    
            const size_t colstripewV = cacheablecolsV; // width of col stripe of V
        const size_t rowstripehM = 128;            // height of row stripe of M
        const size_t dotprodstep = cacheablerowsV; // chunk size of dot product
    
    
    {  size_t len = end - tls_stackLimit;
  assert((len & (pageSize() - 1)) == 0);
  if (madvise((void*)tls_stackLimit, len, MADV_DONTNEED) != 0) {
    // It is likely that the stack vma hasn't been fully grown.  In this
    // case madvise will apply dontneed to the present vmas, then return
    // errno of ENOMEM.  We can also get an EAGAIN, theoretically.
    // EINVAL means either an invalid alignment or length, or that some
    // of the pages are locked or shared.  Neither should occur.
    assert(errno == EAGAIN || errno == ENOMEM);
  }
}
    
      T operator^=(T v) noexcept {
    DeterministicSchedule::beforeSharedAccess();
    T rv = (data ^= v);
    FOLLY_TEST_DSCHED_VLOG(this << ' ^= ' << std::hex << v << ' -> ' << std::hex
                                << rv);
    DeterministicSchedule::afterSharedAccess(true);
    return rv;
  }
    
    // A const-qualified function type means the user is trying to disambiguate
// a member function pointer.
template <class Fun> // Fun = R(As...) const
struct Sig {
  template <class T>
  constexpr Fun T::*operator()(Fun T::*t) const /* nolint */ volatile noexcept {
    return t;
  }
  template <class F, class T>
  constexpr F T::*operator()(F T::*t) const /* nolint */ volatile noexcept {
    return t;
  }
};
    
    
    {
    {
    {  return std::string::npos;
}
}
}
#endif

    
      const T* operator->() const {
    return get();
  }
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
    #include <iostream>
#include <map>
    
      uint32_t ValueOffset() const {
    return static_cast<uint32_t>(value_.data() - data_);
  }
    
      // Extend record types with the following special values
  enum {
    kEof = kMaxRecordType + 1,
    // Returned whenever we find an invalid physical record.
    // Currently there are three situations in which this happens:
    // * The record has an invalid CRC (ReadPhysicalRecord reports a drop)
    // * The record is a 0-length record (No drop is reported)
    // * The record is below constructor's initial_offset (No drop is reported)
    kBadRecord = kMaxRecordType + 2,
    // Returned when we fail to read a valid header.
    kBadHeader = kMaxRecordType + 3,
    // Returned when we read an old record from a previous user of the log.
    kOldRecord = kMaxRecordType + 4,
    // Returned when we get a bad record length
    kBadRecordLen = kMaxRecordType + 5,
    // Returned when we get a bad record checksum
    kBadRecordChecksum = kMaxRecordType + 6,
  };
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    newIngestExternalFileOptions
 * Signature: ()J
 */
jlong Java_org_rocksdb_IngestExternalFileOptions_newIngestExternalFileOptions__(
    JNIEnv* env, jclass jclazz) {
  auto* options = new rocksdb::IngestExternalFileOptions();
  return reinterpret_cast<jlong>(options);
}
    
    /**
 * @brief return subfile names of dir.
 * @details
 *  RocksDB has a 2-level structure, so all keys
 *  that have dir as prefix are subfiles of dir.
 *  So we can just return these files' name.
 *
 * @param dir [description]
 * @param result [description]
 *
 * @return [description]
 */
Status EnvLibrados::_GetSubFnames(
  const std::string& dir,
  std::vector<std::string> * result
) {
  std::string start_after(dir);
  std::string filter_prefix(dir);
  std::map<std::string, librados::bufferlist> kvs;
  _db_pool_ioctx.omap_get_vals(_db_name,
                               start_after, filter_prefix,
                               MAX_ITEMS_IN_FS, &kvs);
    }
    
    
    {
    {    // Restore DB name
    dbname_ = test::TmpDir(env_) + '/db_test';
  }
}
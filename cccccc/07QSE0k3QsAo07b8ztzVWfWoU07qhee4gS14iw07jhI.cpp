
        
            QString getURI();
    
    int secp256k1_ecdsa_recover(const secp256k1_context* ctx, secp256k1_pubkey *pubkey, const secp256k1_ecdsa_recoverable_signature *signature, const unsigned char *msg32) {
    secp256k1_ge q;
    secp256k1_scalar r, s;
    secp256k1_scalar m;
    int recid;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(secp256k1_ecmult_context_is_built(&ctx->ecmult_ctx));
    ARG_CHECK(msg32 != NULL);
    ARG_CHECK(signature != NULL);
    ARG_CHECK(pubkey != NULL);
    }
    
        BOOST_CHECK_EQUAL(arr[999].getValStr(), '');
    
    Status DumpFile(Env* env, const std::string& fname, WritableFile* dst) {
  FileType ftype;
  if (!GuessType(fname, &ftype)) {
    return Status::InvalidArgument(fname + ': unknown file type');
  }
  switch (ftype) {
    case kLogFile:         return DumpLog(env, fname, dst);
    case kDescriptorFile:  return DumpDescriptor(env, fname, dst);
    case kTableFile:       return DumpTable(env, fname, dst);
    default:
      break;
  }
  return Status::InvalidArgument(fname + ': not a dump-able file type');
}
    
        IMF_EXPORT
    ~FastHufDecoder ();
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
    
Rational
guessExactFps (const Rational &fps)
{
    const double e = 0.002;
    }
    
        if (isMultipartFile)
    {
        if (!hasName())
        {
            throw IEX_NAMESPACE::ArgExc ('Headers in a multipart file should'
                               ' have name attribute.');
        }
    }
    
    
    
    #include <string>
    
    
    {}  // namespace caffe
    
    template <>
struct NdarrayConverterGenerator::apply<Dtype*> {
  struct type {
    PyObject* operator() (Dtype* data) const {
      // Just store the data pointer, and add the shape information in postcall.
      return PyArray_SimpleNewFromData(0, NULL, NPY_DTYPE, data);
    }
    const PyTypeObject* get_pytype() {
      return &PyArray_Type;
    }
  };
};
    
    void convert_dataset(const string& input_folder, const string& output_folder,
    const string& db_type) {
  scoped_ptr<db::DB> train_db(db::GetDB(db_type));
  train_db->Open(output_folder + '/cifar10_train_' + db_type, db::NEW);
  scoped_ptr<db::Transaction> txn(train_db->NewTransaction());
  // Data buffer
  int label;
  char str_buffer[kCIFARImageNBytes];
  Datum datum;
  datum.set_channels(3);
  datum.set_height(kCIFARSize);
  datum.set_width(kCIFARSize);
    }
    
      gflags::SetUsageMessage('This script converts the MNIST dataset to\n'
        'the lmdb/leveldb format used by Caffe to load data.\n'
        'Usage:\n'
        '    convert_mnist_data [FLAGS] input_image_file input_label_file '
        'output_db_file\n'
        'The MNIST dataset could be downloaded at\n'
        '    http://yann.lecun.com/exdb/mnist/\n'
        'You should gunzip them after downloading,'
        'or directly use data/mnist/get_mnist.sh\n');
  gflags::ParseCommandLineFlags(&argc, &argv, true);
    
    
    {  int kernel_h_, kernel_w_;
  int stride_h_, stride_w_;
  int pad_h_, pad_w_;
  int channels_;
  int height_, width_;
  int pooled_height_, pooled_width_;
  bool global_pooling_;
  PoolingParameter_RoundMode round_mode_;
  Blob<Dtype> rand_idx_;
  Blob<int> max_idx_;
};
    
    // Common functions and classes from std that caffe often uses.
using std::fstream;
using std::ios;
using std::isnan;
using std::isinf;
using std::iterator;
using std::make_pair;
using std::map;
using std::ostringstream;
using std::pair;
using std::set;
using std::string;
using std::stringstream;
using std::vector;
    
        /**
     * Reattaches to the OperationContext and reacquires any storage-engine state.
     *
     * It is only legal to call this in the 'detached' state. On return, the cursor is left in a
     * 'saved' state, so callers must still call restoreState to use this object.
     */
    virtual void reattachToOperationContext(OperationContext* opCtx) = 0;
    
    TEST(TopTest, CollectionDropped) {
    Top().collectionDropped(NamespaceString('test.coll'));
}
    
        pat     = RegexPattern::compile(regex, 0, pe, status);
    matcher = pat->matcher(input, status);
    retVal  = matcher->matches(status);
    
    U_CAPI void U_EXPORT2
uhash_deleteScriptSet(void *obj);
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-array type
        json str = 'I am a string';
        str.at(0) = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // change the string
    j.at('/string'_json_pointer) = 'bar';
    // output the changed string
    std::cout << j['string'] << '\n';
    
        // print values
    std::cout << object << '\n';
    std::cout << null << '\n';
    
      Status ReuseWritableFile(const std::string& fname,
                           const std::string& old_fname,
                           std::unique_ptr<WritableFile>* result,
                           const EnvOptions& options) override {
    PERF_TIMER_GUARD(env_reuse_writable_file_nanos);
    return EnvWrapper::ReuseWritableFile(fname, old_fname, result, options);
  }
    
    // A merge operator that mimics Put semantics
// Since this merge-operator will not be used in production,
// it is implemented as a non-associative merge operator to illustrate the
// new interface and for testing purposes. (That is, we inherit from
// the MergeOperator class rather than the AssociativeMergeOperator
// which would be simpler in this case).
//
// From the client-perspective, semantics are the same.
class PutOperator : public MergeOperator {
 public:
  bool FullMerge(const Slice& /*key*/, const Slice* /*existing_value*/,
                 const std::deque<std::string>& operand_sequence,
                 std::string* new_value, Logger* /*logger*/) const override {
    // Put basically only looks at the current/latest value
    assert(!operand_sequence.empty());
    assert(new_value != nullptr);
    new_value->assign(operand_sequence.back());
    return true;
  }
    }
    
    
    {    // Check if the wait stopped due to timing out.
    if (cv_status == std::cv_status::timeout) {
      s = Status::TimedOut(Status::SubCode::kMutexTimeout);
    }
  }
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
    #include <rocksdb/compaction_filter.h>
#include <rocksdb/db.h>
#include <rocksdb/merge_operator.h>
#include <rocksdb/options.h>
    
      {
    std::string string_val;
    // If it cannot pin the value, it copies the value to its internal buffer.
    // The intenral buffer could be set during construction.
    PinnableSlice pinnable_val(&string_val);
    db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
    assert(pinnable_val == 'value');
    // If the value is not pinned, the internal buffer must have the value.
    assert(pinnable_val.IsPinned() || string_val == 'value');
  }
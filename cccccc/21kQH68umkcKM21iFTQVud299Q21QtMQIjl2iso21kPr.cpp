
        
        /* Map whose keys are pointers, but are compared by their dereferenced values.
 *
 * Differs from a plain std::map<const K*, T, DereferencingComparator<K*> > in
 * that methods that take a key for comparison take a K rather than taking a K*
 * (taking a K* would be confusing, since it's the value rather than the address
 * of the object for comparison that matters due to the dereferencing comparator).
 *
 * Objects pointed to by keys must not be modified in any way that changes the
 * result of DereferencingComparator.
 */
template <class K, class T>
class indirectmap {
private:
    typedef std::map<const K*, T, DereferencingComparator<const K*> > base;
    base m;
public:
    typedef typename base::iterator iterator;
    typedef typename base::const_iterator const_iterator;
    typedef typename base::size_type size_type;
    typedef typename base::value_type value_type;
    }
    
    void leveldb_writebatch_clear(leveldb_writebatch_t* b) {
  b->rep.Clear();
}
    
      ASSERT_TRUE(ParseInternalKey(in, &decoded));
  ASSERT_EQ(key, decoded.user_key.ToString());
  ASSERT_EQ(seq, decoded.sequence);
  ASSERT_EQ(vt, decoded.type);
    
    std::string SSTTableFileName(const std::string& name, uint64_t number) {
  assert(number > 0);
  return MakeFileName(name, number, 'sst');
}
    
    #endif  // STORAGE_LEVELDB_DB_FILENAME_H_

    
      fname = TableFileName('bar', 200);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(200, number);
  ASSERT_EQ(kTableFile, type);
    
    TableCache::TableCache(const std::string& dbname,
                       const Options* options,
                       int entries)
    : env_(options->env),
      dbname_(dbname),
      options_(options),
      cache_(NewLRUCache(entries)) {
}
    
          case kNextFileNumber:
        if (GetVarint64(&input, &next_file_number_)) {
          has_next_file_number_ = true;
        } else {
          msg = 'next file number';
        }
        break;
    
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
    
    TEST(FindFileTest, Empty) {
  ASSERT_EQ(0, Find('foo'));
  ASSERT_TRUE(! Overlaps('a', 'z'));
  ASSERT_TRUE(! Overlaps(NULL, 'z'));
  ASSERT_TRUE(! Overlaps('a', NULL));
  ASSERT_TRUE(! Overlaps(NULL, NULL));
}
    
    // WriteBatch header has an 8-byte sequence number followed by a 4-byte count.
static const size_t kHeader = 12;
    
    TEST(WriteBatchTest, Corruption) {
  WriteBatch batch;
  batch.Put(Slice('foo'), Slice('bar'));
  batch.Delete(Slice('box'));
  WriteBatchInternal::SetSequence(&batch, 200);
  Slice contents = WriteBatchInternal::Contents(&batch);
  WriteBatchInternal::SetContents(&batch,
                                  Slice(contents.data(),contents.size()-1));
  ASSERT_EQ('Put(foo, bar)@200'
            'ParseError()',
            PrintContents(&batch));
}
    
    #endif  // STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_

    
    // A Comparator object provides a total order across slices that are
// used as keys in an sstable or a database.  A Comparator implementation
// must be thread-safe since leveldb may invoke its methods concurrently
// from multiple threads.
class Comparator {
 public:
  virtual ~Comparator();
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
    
    RepeatedEnumFieldGenerator::~RepeatedEnumFieldGenerator() {
    }
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    
    {}
    
    
    {  LOG(INFO) << 'Writing Testing data';
  scoped_ptr<db::DB> test_db(db::GetDB(db_type));
  test_db->Open(output_folder + '/cifar10_test_' + db_type, db::NEW);
  txn.reset(test_db->NewTransaction());
  // Open files
  std::ifstream data_file((input_folder + '/test_batch.bin').c_str(),
      std::ios::in | std::ios::binary);
  CHECK(data_file) << 'Unable to open test file.';
  for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
    read_image(&data_file, &label, str_buffer);
    datum.set_label(label);
    datum.set_data(str_buffer, kCIFARImageNBytes);
    string out;
    CHECK(datum.SerializeToString(&out));
    txn->Put(caffe::format_int(itemid, 5), out);
  }
  txn->Commit();
  test_db->Close();
}
    
    #include 'glog/logging.h'
#include 'google/protobuf/text_format.h'
#include 'stdint.h'
    
      /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const Datum& datum);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const vector<Datum> & datum_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   */
#ifdef USE_OPENCV
  vector<int> InferBlobShape(const vector<cv::Mat> & mat_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   */
  vector<int> InferBlobShape(const cv::Mat& cv_img);
#endif  // USE_OPENCV
    
    
template <typename Dtype>
class LayerRegisterer {
 public:
  LayerRegisterer(const string& type,
                  shared_ptr<Layer<Dtype> > (*creator)(const LayerParameter&)) {
    // LOG(INFO) << 'Registering layer type: ' << type;
    LayerRegistry<Dtype>::AddCreator(type, creator);
  }
};
    
    
    {}  // namespace caffe
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/sigmoid_layer.hpp'
    
    
    {}  // namespace caffe
    
        static void CODEGEN_FUNCPTR Switch_CompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
    {
        CompressedTexImage2D = (PFNCOMPRESSEDTEXIMAGE2DPROC)IntGetProcAddress('glCompressedTexImage2D');
        CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
    }
    
            // Core Extension: ARB_uniform_buffer_object
        UNIFORM_BUFFER                   = 0x8A11,
        UNIFORM_BUFFER_BINDING           = 0x8A28,
        UNIFORM_BUFFER_START             = 0x8A29,
        UNIFORM_BUFFER_SIZE              = 0x8A2A,
        MAX_VERTEX_UNIFORM_BLOCKS        = 0x8A2B,
        MAX_FRAGMENT_UNIFORM_BLOCKS      = 0x8A2D,
        MAX_COMBINED_UNIFORM_BLOCKS      = 0x8A2E,
        MAX_UNIFORM_BUFFER_BINDINGS      = 0x8A2F,
        MAX_UNIFORM_BLOCK_SIZE           = 0x8A30,
        MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = 0x8A31,
        MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = 0x8A33,
        UNIFORM_BUFFER_OFFSET_ALIGNMENT  = 0x8A34,
        ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = 0x8A35,
        ACTIVE_UNIFORM_BLOCKS            = 0x8A36,
        UNIFORM_TYPE                     = 0x8A37,
        UNIFORM_SIZE                     = 0x8A38,
        UNIFORM_NAME_LENGTH              = 0x8A39,
        UNIFORM_BLOCK_INDEX              = 0x8A3A,
        UNIFORM_OFFSET                   = 0x8A3B,
        UNIFORM_ARRAY_STRIDE             = 0x8A3C,
        UNIFORM_MATRIX_STRIDE            = 0x8A3D,
        UNIFORM_IS_ROW_MAJOR             = 0x8A3E,
        UNIFORM_BLOCK_BINDING            = 0x8A3F,
        UNIFORM_BLOCK_DATA_SIZE          = 0x8A40,
        UNIFORM_BLOCK_NAME_LENGTH        = 0x8A41,
        UNIFORM_BLOCK_ACTIVE_UNIFORMS    = 0x8A42,
        UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = 0x8A43,
        UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = 0x8A44,
        UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = 0x8A46,
        INVALID_INDEX                    = 0xFFFFFFFF,
        MAX_GEOMETRY_UNIFORM_BLOCKS      = 0x8A2C,
        MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = 0x8A32,
        UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER = 0x8A45,
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    /**
 * Flushes pending writes. This method should not be called before invocation of
 * on_stream_ready() method of the bidirectional_stream_callback.
 * For each previously called bidirectional_stream_write()
 * a corresponding on_write_completed() callback will be invoked when the buffer
 * is sent.
 */
GRPC_SUPPORT_EXPORT
void bidirectional_stream_flush(bidirectional_stream* stream);
    
      if (server_try_cancel_thd != nullptr) {
    server_try_cancel_thd->join();
    delete server_try_cancel_thd;
    return Status::CANCELLED;
  }
    
    // NOTE: We eventually want to use absl::InlinedVector here.  However,
// there are currently build problems that prevent us from using absl.
// In the interim, we define a custom implementation as a place-holder,
// with the intent to eventually replace this with the absl
// implementation.
//
// This place-holder implementation does not implement the full set of
// functionality from the absl version; it has just the methods that we
// currently happen to need in gRPC.  If additional functionality is
// needed before this gets replaced with the absl version, it can be
// added, with the following proviso:
//
// ANY METHOD ADDED HERE MUST COMPLY WITH THE INTERFACE IN THE absl
// IMPLEMENTATION!
//
// TODO(nnoble, roth): Replace this with absl::InlinedVector once we
// integrate absl into the gRPC build system in a usable way.
template <typename T, size_t N>
class InlinedVector {
 public:
  InlinedVector() { init_data(); }
  ~InlinedVector() { destroy_elements(); }
    }
    
    TEST(InlinedVectorTest, ValuesAreInlined) {
  const int kNumElements = 5;
  InlinedVector<int, 10> v;
  for (int i = 0; i < kNumElements; ++i) {
    v.push_back(i);
  }
  EXPECT_EQ(static_cast<size_t>(kNumElements), v.size());
  for (int i = 0; i < kNumElements; ++i) {
    EXPECT_EQ(i, v[i]);
  }
}
    
    std::shared_ptr<Channel> CreateTestChannel(
    const grpc::string& server, const grpc::string& cred_type,
    const grpc::string& override_hostname, bool use_prod_roots,
    const std::shared_ptr<CallCredentials>& creds,
    const ChannelArguments& args);
    
    #ifndef QPS_WORKER_H
#define QPS_WORKER_H
    
    int main(int argc, char** argv) {
  // Instantiate the client. It requires a channel, out of which the actual RPCs
  // are created. This channel models a connection to an endpoint (in this case,
  // localhost at port 50051). We indicate that the channel isn't authenticated
  // (use of InsecureChannelCredentials()).
  GreeterClient greeter(grpc::CreateChannel(
      'localhost:50051', grpc::InsecureChannelCredentials()));
  std::string user('world');
  std::string reply = greeter.SayHello(user);
  std::cout << 'Greeter received: ' << reply << std::endl;
    }
    
    
    
    #include <pthread.h>
    
    /// Allow users to disable enrollment features.
DECLARE_bool(disable_enrollment);
    
      /**
   * @brief Attempt to drop privileges to that of the parent of a given path.
   *
   * This will return false if privileges could not be dropped or there was
   * an previous, and still active, request for dropped privileges.
   *
   * @return success if privileges were dropped, otherwise false.
   */
  bool dropToParent(const boost::filesystem::path& path);
    
      EXPECT_EQ(carves.size(), 2U);
  s = archive(carves,
              carveFSPath + '/' + kTestCarveNamePrefix + guid_ + '.tar');
  EXPECT_TRUE(s.ok());
    
    DECLARE_bool(tls_secret_always);
DECLARE_string(tls_enroll_override);
DECLARE_bool(tls_node_api);
DECLARE_bool(enroll_always);
    
      if (!CFStringGetCString(
          cf_string, buffer, length + 1, kCFStringEncodingASCII)) {
    free(buffer);
    return '';
  }
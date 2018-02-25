
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {
    {}  // namespace functor
}  // namespace tensorflow
    
    // 1) FYI from m3b@ about fork():
// A danger of calling fork() (as opposed to clone() or vfork()) is that if
// many people have used pthread_atfork() to acquire locks, fork() can deadlock,
// because it's unlikely that the locking order will be correct in a large
// program where different layers are unaware of one another and using
// pthread_atfork() independently.
//
// The danger of not calling fork() is that if libc managed to use
// pthread_atfork() correctly (for example, to lock the environment), you'd
// miss out on that protection.  (But as far as I can see most libc's don't get
// that right; certainly glibc doesn't seem to.)
//
// clone() or vfork() are also frustrating because clone() exists only on Linux,
// and both clone(...CLONE_VM...) and vfork() have interesting issues around
// signals being delivered after the fork and before the exec.  It may be
// possible to work around the latter by blocking all signals before the fork
// and unblocking them afterwards.
//
// Fortunately, most people haven't heard of pthread_atfork().
//
//
// 2) FYI from m3b@ about execv():
// The execv() call implicitly uses the libc global variable environ, which was
// copied by fork(), and that copy could have raced with a setenv() call in
// another thread, since libc implementations are usually not very careful about
// this. (glibc isn't careful, for example.)
//
// If this were inside libc, we could use locks or memory barriers to avoid the
// race, but as it is, I see nothing you can do.  Even if you tried to copy the
// environment before the fork(), the copying could race with other threads
// calling setenv().  The good news is that few people call setenv().
//
// Amusingly, the standard says of fork(): '...to avoid errors, the child
// process may only execute async-signal-safe operations until such time as one
// of the exec functions is called.'  Notice that execve() is listed as
// async-signal-safe, but execv() is not, and the difference is just the
// handling of the environment.
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Sets the appropriate library kind to that passed in.
  PluginConfig& SetBlas(PluginId blas);
  PluginConfig& SetDnn(PluginId dnn);
  PluginConfig& SetFft(PluginId fft);
  PluginConfig& SetRng(PluginId rng);
    
      // Prune the graph to only compute what is needed for the fetch nodes and the
  // target nodes.
  if (!fetch_nodes.empty() || !target_node_names.empty()) {
    TF_RETURN_IF_ERROR(
        PruneForTargets(g, name_index, fetch_nodes, target_node_names));
  }
    
      // Writes all output to the file. Does *not* close the WritableFile.
  //
  // After calling Close(), any further calls to `WriteRecord()` or `Flush()`
  // are invalid.
  Status Close();
    
        // Temporarily copy the first result to temporary storage.
    SmallVector<Item *, 16> firstResults;
    for (unsigned i = 0; i < endNewIndex; ++i) {
      firstResults.push_back(contents[i].release());
    }
    
    // NOTE: this class is NOT meant to be used in threaded contexts.
@interface ObjectBehaviorVerifier : NSObject
@property (readonly) BOOL wasRetained;
@property (readonly) BOOL wasCopied;
@property (readonly) BOOL wasMutableCopied;
    
    #endif // LLVM_SWIFT_AST_COMMENT_H
    
    /// Profile the substitution list for use in a folding set.
void profileSubstitutionList(llvm::FoldingSetNodeID &id, SubstitutionList subs);
    
    /// Options for controlling diagnostics.
class DiagnosticOptions {
public:
  /// Indicates whether textual diagnostics should use color.
  bool UseColor = false;
    }
    
    namespace swift {
    }
    
      reference operator*() const { return deref(); }
    
    namespace enum_descriptor {
PyObject* NewEnumValuesByName(const EnumDescriptor* descriptor);
PyObject* NewEnumValuesByNumber(const EnumDescriptor* descriptor);
PyObject* NewEnumValuesSeq(const EnumDescriptor* descriptor);
}  // namespace enum_descriptor
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
    
    #include <google/protobuf/descriptor_database.h>
    
    TEST(AnyTest, TestIs) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  ASSERT_TRUE(any.ParseFromString(any.SerializeAsString()));
  EXPECT_TRUE(any.Is<protobuf_unittest::TestAny>());
  EXPECT_FALSE(any.Is<google::protobuf::Any>());
    }
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* generator_context,
                string* error) const;
    
    #include <string>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
      // Write any attributes used to decorate generated function members (methods and properties).
  // Should not be used to decorate types.
  void WriteGeneratedCodeAttributes(io::Printer* printer);
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__
    
    /**
 * @brief Compute the index of the @f$ K @f$ max values for each datum across
 *        all dimensions @f$ (C \times H \times W) @f$.
 *
 * Intended for use after a classification layer to produce a prediction.
 * If parameter out_max_val is set to true, output is a vector of pairs
 * (max_ind, max_val) for each image. The axis parameter specifies an axis
 * along which to maximise.
 *
 * NOTE: does not implement Backwards operation.
 */
template <typename Dtype>
class ArgMaxLayer : public Layer<Dtype> {
 public:
  /**
   * @param param provides ArgMaxParameter argmax_param,
   *     with ArgMaxLayer options:
   *   - top_k (\b optional uint, default 1).
   *     the number @f$ K @f$ of maximal items to output.
   *   - out_max_val (\b optional bool, default false).
   *     if set, output a vector of pairs (max_ind, max_val) unless axis is set then
   *     output max_val along the specified axis.
   *   - axis (\b optional int).
   *     if set, maximise along the specified axis else maximise the flattened
   *     trailing dimensions for each index of the first / num dimension.
   */
  explicit ArgMaxLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      int num_kernels_im2col_;
  int num_kernels_col2im_;
  int conv_out_channels_;
  int conv_in_channels_;
  int conv_out_spatial_dim_;
  int kernel_dim_;
  int col_offset_;
  int output_offset_;
    
      virtual inline int ExactNumBottomBlobs() const { return 3; }
  virtual inline const char* type() const { return 'ContrastiveLoss'; }
  /**
   * Unlike most loss layers, in the ContrastiveLossLayer we can backpropagate
   * to the first two inputs.
   */
  virtual inline bool AllowForceBackward(const int bottom_index) const {
    return bottom_index != 2;
  }
    
    #endif  // CAFFE_CUDNN_LCN_LAYER_HPP_

    
    #endif  // CAFFE_CUDNN_SOFTMAX_LAYER_HPP_

    
    
    {}  // namespace caffe
    
    BOOST_FIXTURE_TEST_CASE(MatrixDensePlusSparse, RandomSeedFixture)
{
    std::mt19937 rng(0);
    Matrix<float> mAdense(c_deviceIdZero);
    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -3.0f, 0.1f, IncrementCounter()), 0);
    }
    
    cudaStream_t GPUDataTransferer::GetFetchStream()
{
    return s_fetchStream;
}
    
        // SetOutputNodes - Set the output nodes for the Computational Network
    // NOTE: seems to be specific to NDLBuilderImpl, should be in a derived class for that execution engine
    void SetOutputNodes(NDLScript<ElemType>* script)
    {
        // NOTE: all optional parameter nodes (i.e. tag='feature') have already been processed in ProcessOptionalParameters()
    }
    
    #include <string>
#include <chrono>
#include <algorithm>
#include <vector>
#include <iostream>
#include <queue>
#include <set>
#include <memory>
    
    template void FindConfigNames<ConfigParameters>(const ConfigParameters&, std::string key, std::vector<std::wstring>& names);
template void FindConfigNames<ScriptableObjects::IConfigRecord>(const ScriptableObjects::IConfigRecord&, std::string key, std::vector<std::wstring>& names);
    
    // ---------------------------------------------------------------------------
// ProgressTracing -- static helper class for logging a progress indicator
//
// This is for use by the cluster management tools for indicating global progress to the user.
//
// This logs to stdout (not stderr) in a specific format, e.g. understood by the Philly cluster. The format is:
//  PROGRESS xx.xx%
//  EVALERR xx.xx%
//
// Specifically, this class handles a two-level progress computation:
//  - outer level: loop over multiple training phases, each running multiple steps (epochs)
//  - inner level in one training phase: loop over multiple steps, *without* knowledge about the other training phases
//
// In order for the inner level to log correctly in the global context, the outer loop
// must inform this class about the total number of steps and the current offset to apply in the inner level.
// ---------------------------------------------------------------------------
    
        // save a float to RAM bypassing the cache ('without polluting the cache')
    void storewithoutcache (float & r) const
    {
        _mm_stream_ss (&r, v);
    }
#endif
    
    #include 'ComputationNode.h'
#include 'InputAndParamNodes.h'
#include 'ComputationNetworkBuilder.h' // TODO: We should only pull in NewComputationNodeFromConfig(). Nodes should not know about network at large.
#include 'TensorShape.h'
    
    /* Cancels the stream. Can be called at any time after
 * bidirectional_stream_start(). The on_canceled() method of
 * bidirectional_stream_callback will be invoked when cancelation
 * is complete and no further callback methods will be invoked. If the
 * stream has completed or has not started, calling
 * bidirectional_stream_cancel() has no effect and on_canceled() will not
 * be invoked. At most one callback method may be invoked after
 * bidirectional_stream_cancel() has completed.
 */
GRPC_SUPPORT_EXPORT
void bidirectional_stream_cancel(bidirectional_stream* stream);
    
     private:
  grpc::ClientContext context_;
  BenchmarkService::Stub* stub_;
  CompletionQueue* cq_;
  std::unique_ptr<Alarm> alarm_;
  const RequestType& req_;
  ResponseType response_;
  enum State {
    INVALID,
    STREAM_IDLE,
    WAIT,
    READY_TO_WRITE,
    WRITE_DONE,
  };
  State next_state_;
  std::function<void(grpc::Status, ResponseType*)> callback_;
  std::function<gpr_timespec()> next_issue_;
  std::function<std::unique_ptr<grpc::ClientAsyncWriter<RequestType>>(
      BenchmarkService::Stub*, grpc::ClientContext*, ResponseType*,
      CompletionQueue*)>
      prepare_req_;
  grpc::Status status_;
  double start_;
  std::unique_ptr<grpc::ClientAsyncWriter<RequestType>> stream_;
    
    
    { private:
  bool signal_client_;
  std::mutex mu_;
  std::unique_ptr<grpc::string> host_;
};
    
    class SslCredentialProvider : public testing::CredentialTypeProvider {
 public:
  std::shared_ptr<ChannelCredentials> GetChannelCredentials(
      grpc::ChannelArguments* args) override {
    return SslCredentials(SslCredentialsOptions());
  }
  std::shared_ptr<ServerCredentials> GetServerCredentials() override {
    return nullptr;
  }
};
    
      grpc::testing::RunSynchronousUnaryPingPong();
    
    
    {  // Wait for the server to shutdown. Note that some other thread must be
  // responsible for shutting down the server for this call to ever return.
  server->Wait();
}
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list) {
  feature_list->clear();
  std::string db_content(db);
  db_content.erase(
      std::remove_if(db_content.begin(), db_content.end(), isspace),
      db_content.end());
    }
    
      bool Generate(const grpc::protobuf::FileDescriptor* file,
                const grpc::string& parameter,
                grpc::protobuf::compiler::GeneratorContext* context,
                grpc::string* error) const;
    
    #include <string>
#include <vector>
    
    #endif /* DUMPCRASHSTACK_H_ */

    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // true pass, false limit
bool CommFrequencyLimit::Check() {
    uint64_t now = ::gettickcount();
    if (!touch_times_.empty() && (now<touch_times_.front()) ) { //if user modify the time, amend it
    	xwarn2(TSF'Must be modified time.now=%_', now);
    	size_t size = touch_times_.size();
    	touch_times_.clear();
    	for (size_t i=0; i<size; ++i) {
    		touch_times_.push_back(now-1);
    	}
    }
    }
    
    void Test_Spy_Sample::TestFun0()
{
    SPY_HOOK_THIS_API(TestFun0);
    int i = 0;
    SPY_ATTACH_VARIABLE('TestFun0 i', i);
    i++;
    xinfo2(TSF'Test');
    }
    
        // Helper methods
    static bool HasFamilyNamed(std::string& name, DBWrapper* db);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array, DBWrapper* db_wrapper, std::string cf);
    static Handle<Value> CompactRangeDefault(const v8::Arguments& args);
    static Handle<Value> CompactColumnFamily(const Arguments& args);
    static Handle<Value> CompactOptions(const Arguments& args);
    static Handle<Value> CompactAll(const Arguments& args);
    
    
    {} // namespace rocksdb

    
    
    {} // namespace rocksdb

    
      /// Prints the entire (list: key), for debugging.
  void Print(const std::string& key);
    
      // Read the next record into *record.  Returns true if read
  // successfully, false if we hit end of the input.  May use
  // '*scratch' as temporary storage.  The contents filled in *record
  // will only be valid until the next mutating operation on this
  // reader or the next mutation to *scratch.
  bool ReadRecord(Slice* record, std::string* scratch,
                  WALRecoveryMode wal_recovery_mode =
                      WALRecoveryMode::kTolerateCorruptedTailRecords);
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    newIngestExternalFileOptions
 * Signature: (ZZZZ)J
 */
jlong Java_org_rocksdb_IngestExternalFileOptions_newIngestExternalFileOptions__ZZZZ(
    JNIEnv* env, jclass jcls, jboolean jmove_files,
    jboolean jsnapshot_consistency, jboolean jallow_global_seqno,
    jboolean jallow_blocking_flush) {
  auto* options = new rocksdb::IngestExternalFileOptions();
  options->move_files = static_cast<bool>(jmove_files);
  options->snapshot_consistency = static_cast<bool>(jsnapshot_consistency);
  options->allow_global_seqno = static_cast<bool>(jallow_global_seqno);
  options->allow_blocking_flush = static_cast<bool>(jallow_blocking_flush);
  return reinterpret_cast<jlong>(options);
}
    
    /**
 * @brief add <file path, fid> to metadata object. It may overwrite exist key.
 * @details [long description]
 *
 * @param fname [description]
 * @param fid [description]
 *
 * @return [description]
 */
Status EnvLibrados::_AddFid(
  const std::string& fname,
  const std::string& fid) {
  std::map<std::string, librados::bufferlist> kvs;
  librados::bufferlist value;
  value.append(fid);
  kvs[fname] = value;
  int r = _db_pool_ioctx.omap_set(_db_name, kvs);
  return err_to_status(r);
}
    
      using DB::GetIntProperty;
  virtual bool GetIntProperty(ColumnFamilyHandle* column_family,
                              const Slice& property, uint64_t* value) override {
    return db_->GetIntProperty(column_family, property, value);
  }
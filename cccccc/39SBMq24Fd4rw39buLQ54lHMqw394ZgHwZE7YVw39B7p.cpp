
        
        
    { private:
  BufferAllocation::Slice operand_;
  BufferAllocation::Slice scale_;
  BufferAllocation::Slice mean_;
  BufferAllocation::Slice inv_stddev_;
  BufferAllocation::Slice grad_output_;
  float epsilon_;
  int64 feature_index_;
  BufferAllocation::Slice output_grad_data_;
  BufferAllocation::Slice output_grad_scale_;
  BufferAllocation::Slice output_grad_offset_;
  BufferAllocation::Slice output_tuple_;
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Gets the set of devices that have a NCCL channel open.  This is primarily
  // for testing.
  //
  // (Indeed, because the NCCL channels are a global variable, in the real
  // world, the value returned here is stale as soon as you read it, so it's not
  // clear how you *could* use it for anything other than tests.)
  static absl::flat_hash_set<int> DevicesWithOpenNcclChannels();
    
    
    { private:
  const ShapeTree<BufferAllocation::Slice> outfeed_slices_;
};
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
    
    {  // Stores all the source points in the order they were given and their
  // halfwidths, if any.
  GenericVector<PointWidth> pts_;
  // Stores the computed perpendicular distances of (some of) the pts_ from a
  // given vector (assuming it goes through the origin, making it a line).
  // Since the distances may be a subset of the input points, and get
  // re-ordered by the nth_item function, the original point is stored
  // along side the distance.
  GenericVector<DistPointPair> distances_;  // Distances of points.
  // The squared length of the vector used to compute distances_.
  double square_length_;
};
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
    
    { private:
  // Data members are private to keep deletion of data_ encapsulated.
  Data* data_;
  Key key_;
};
// Specialization of KDPtrPair to provide operator< for sorting in increasing
// order.
template <typename Key, typename Data>
struct KDPtrPairInc : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairInc() : KDPtrPair<Key, Data>() {}
  KDPtrPairInc(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairInc(KDPtrPairInc& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairInc& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPtrPairInc<Key, Data>& other) const {
    return this->key() < other.key();
  }
};
// Specialization of KDPtrPair to provide operator< for sorting in decreasing
// order.
template <typename Key, typename Data>
struct KDPtrPairDec : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairDec() : KDPtrPair<Key, Data>() {}
  KDPtrPairDec(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairDec(KDPtrPairDec& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairDec& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPtrPairDec<Key, Data>& other) const {
    return this->key() > other.key();
  }
};
    
    template <typename Dtype>
void hdf5_save_nd_dataset(
    const hid_t file_id, const string& dataset_name, const Blob<Dtype>& blob,
    bool write_diff = false);
    
    
    { public:
  SolverCallback(bp::object on_start, bp::object on_gradients_ready)
    : on_start_(on_start), on_gradients_ready_(on_gradients_ready) { }
  virtual void on_gradients_ready() {
    on_gradients_ready_();
  }
  virtual void on_start() {
    on_start_();
  }
};
template<typename Dtype>
void Solver_add_callback(Solver<Dtype> * solver, bp::object on_start,
  bp::object on_gradients_ready) {
  solver->add_callback(new SolverCallback<Dtype>(on_start, on_gradients_ready));
}
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See data_layer.cpp for an example.
   */
  void Transform(const Datum& datum, Blob<Dtype>* transformed_blob);
    
      void CheckClientInitialMetadata(
      ServerContext* context, const SimpleRequest* request,
      SimpleResponse* response,
      experimental::ServerCallbackRpcController* controller) override;
    
    ChannelArguments::~ChannelArguments() {
  grpc_core::ExecCtx exec_ctx;
  for (auto it = args_.begin(); it != args_.end(); ++it) {
    if (it->type == GRPC_ARG_POINTER) {
      it->value.pointer.vtable->destroy(it->value.pointer.p);
    }
  }
}
    
    std::vector<string> GetAllCredentialsTypeList() {
  std::vector<grpc::string> credentials_types;
  if (GetCredentialsProvider()->GetChannelCredentials(kInsecureCredentialsType,
                                                      nullptr) != nullptr) {
    credentials_types.push_back(kInsecureCredentialsType);
  }
  auto sec_list = GetCredentialsProvider()->GetSecureCredentialsTypeList();
  for (auto sec = sec_list.begin(); sec != sec_list.end(); sec++) {
    credentials_types.push_back(*sec);
  }
  GPR_ASSERT(!credentials_types.empty());
    }
    
      *endpoint = NULL;
    
    
    {
    { private:
  std::shared_ptr<grpc::Channel> CreateChannelWithInterceptors(
      const string& target, const grpc::ChannelArguments& args,
      std::vector<
          std::unique_ptr<experimental::ClientInterceptorFactoryInterface>>
          interceptor_creators) override {
    grpc_channel_args channel_args;
    args.SetChannelArgs(&channel_args);
    return CreateChannelInternal(
        '',
        grpc_cronet_secure_channel_create(engine_, target.c_str(),
                                          &channel_args, nullptr),
        std::move(interceptor_creators));
  }
  void* engine_;
};
}  // namespace grpc
namespace grpc_impl {
std::shared_ptr<ChannelCredentials> CronetChannelCredentials(void* engine) {
  return std::shared_ptr<ChannelCredentials>(
      new grpc::CronetChannelCredentialsImpl(engine));
}
}  // namespace grpc_impl

    
    #include 'db/dbformat.h'
#include 'leveldb/env.h'
#include 'util/logging.h'
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
LEVELDB_EXPORT Status DumpFile(Env* env, const std::string& fname,
                               WritableFile* dst);
    
    
    {  // 'filter' contains the data appended by a preceding call to
  // CreateFilter() on this class.  This method must return true if
  // the key was in the list of keys passed to CreateFilter().
  // This method may return true or false if the key was not on the
  // list, but it should aim to return false with a high probability.
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const = 0;
};
    
    
    {}  // namespace leveldb

    
    #ifndef STORAGE_LEVELDB_TABLE_ITERATOR_WRAPPER_H_
#define STORAGE_LEVELDB_TABLE_ITERATOR_WRAPPER_H_
    
    class Comparator;
class Iterator;
    
    namespace leveldb {
    }
    
    TEST(Coding, Varint64) {
  // Construct the list of values to check
  std::vector<uint64_t> values;
  // Some special values
  values.push_back(0);
  values.push_back(100);
  values.push_back(~static_cast<uint64_t>(0));
  values.push_back(~static_cast<uint64_t>(0) - 1);
  for (uint32_t k = 0; k < 64; k++) {
    // Test values near powers of two
    const uint64_t power = 1ull << k;
    values.push_back(power);
    values.push_back(power - 1);
    values.push_back(power + 1);
  }
    }
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterPredict
 * Signature: (JJIJ)[F
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterPredict
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jlong jdmat, jint joption_mask, jint jntree_limit, jobjectArray jout) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  DMatrixHandle dmat = (DMatrixHandle) jdmat;
  bst_ulong len;
  float *result;
  int ret = XGBoosterPredict(handle, dmat, joption_mask, (unsigned int) jntree_limit, &len, (const float **) &result);
  if (len) {
    jsize jlen = (jsize) len;
    jfloatArray jarray = jenv->NewFloatArray(jlen);
    jenv->SetFloatArrayRegion(jarray, 0, jlen, (jfloat *) result);
    jenv->SetObjectArrayElement(jout, 0, jarray);
  }
  return ret;
}
    
    
    {    CHECK_LT(ptr, offset.size());
    offset.at(ptr) = beg;
    ptr++;
  }
    
    #include 'simple_csr_source.h'
    
    
    {  if (n_gpus == kAll) {  // Use all devices starting from `gpu_id'.
    CHECK(gpu_id < n_devices_visible)
        << '\ngpu_id should be less than number of visible devices.\ngpu_id: '
        << gpu_id
        << ', number of visible devices: '
        << n_devices_visible;
    GpuIdType n_devices =
        n_available_devices < n_rows ? n_available_devices : n_rows;
    LOG(DEBUG) << 'GPU ID: ' << gpu_id << ', Number of GPUs: ' << n_devices;
    return Range(gpu_id, n_devices);
  } else {  // Use devices in ( gpu_id, gpu_id + n_gpus ).
    CHECK_LE(n_gpus, n_available_devices)
        << 'Starting from gpu id: ' << gpu_id << ', there are only '
        << n_available_devices << ' available devices, while n_gpus is set to: '
        << n_gpus;
    GpuIdType n_devices = n_gpus < n_rows ? n_gpus : n_rows;
    LOG(DEBUG) << 'GPU ID: ' << gpu_id << ', Number of GPUs: ' << n_devices;
    return Range(gpu_id, n_devices);
  }
}
    
    /*!
 * \brief Do inplace softmax transformaton on start to end
 *
 * \tparam Iterator Input iterator type
 *
 * \param start Start iterator of input
 * \param end end iterator of input
 */
template <typename Iterator>
XGBOOST_DEVICE inline void Softmax(Iterator start, Iterator end) {
  static_assert(std::is_same<bst_float,
                typename std::remove_reference<
                  decltype(std::declval<Iterator>().operator*())>::type
                >::value,
                'Values should be of type bst_float');
  bst_float wmax = *start;
  for (Iterator i = start+1; i != end; ++i) {
    wmax = fmaxf(*i, wmax);
  }
  double wsum = 0.0f;
  for (Iterator i = start; i != end; ++i) {
    *i = expf(*i - wmax);
    wsum += *i;
  }
  for (Iterator i = start; i != end; ++i) {
    *i /= static_cast<float>(wsum);
  }
}
    
    /*
 * Class:     org_rocksdb_CompactionJobInfo
 * Method:    baseInputLevel
 * Signature: (J)I
 */
jint Java_org_rocksdb_CompactionJobInfo_baseInputLevel(
    JNIEnv*, jclass, jlong jhandle) {
  auto* compact_job_info =
      reinterpret_cast<rocksdb::CompactionJobInfo*>(jhandle);
  return static_cast<jint>(compact_job_info->base_input_level);
}
    
    /*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    setMaxDictBytes
 * Signature: (JI)V
 */
void Java_org_rocksdb_CompressionOptions_setMaxDictBytes(
    JNIEnv*, jobject, jlong jhandle, jint jmax_dict_bytes) {
  auto* opt = reinterpret_cast<rocksdb::CompressionOptions*>(jhandle);
  opt->max_dict_bytes = static_cast<uint32_t>(jmax_dict_bytes);
}
    
    
    {}

    
    /*
 * Class:     org_rocksdb_SstFileManager
 * Method:    setCompactionBufferSize
 * Signature: (JJ)V
 */
void Java_org_rocksdb_SstFileManager_setCompactionBufferSize(
    JNIEnv* /*env*/, jobject /*jobj*/, jlong jhandle,
    jlong jcompaction_buffer_size) {
  auto* sptr_sst_file_manager =
      reinterpret_cast<std::shared_ptr<rocksdb::SstFileManager>*>(jhandle);
  sptr_sst_file_manager->get()->SetCompactionBufferSize(
      jcompaction_buffer_size);
}
    
    std::function<bool(const rocksdb::TableProperties&)> TableFilterJniCallback::GetTableFilterFunction() {
  return m_table_filter_function;
}
    
      const jsize len_cols = env->GetArrayLength(jcolumn_names);
  if (env->EnsureLocalCapacity(len_cols) != 0) {
    // out of memory
    env->ReleaseStringUTFChars(jdb_path, db_path);
    return nullptr;
  }
    
      auto* opt = reinterpret_cast<rocksdb::Options*>(joptions_handle);
  rocksdb::DBWithTTL* db = nullptr;
  rocksdb::Status s =
      rocksdb::DBWithTTL::Open(*opt, db_path, &db, jttl, jread_only);
  env->ReleaseStringUTFChars(jdb_path, db_path);
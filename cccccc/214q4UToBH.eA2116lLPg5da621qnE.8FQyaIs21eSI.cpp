
        
        
template <>
void
EnvmapAttribute::readValueFrom (OPENEXR_IMF_INTERNAL_NAMESPACE::IStream &is, int size, int version)
{
    unsigned char tmp;
    Xdr::read <StreamIO> (is, tmp);
    _value = Envmap (tmp);
}
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    // preview image
class PreviewImage;
struct PreviewRgba;
    
    //-----------------------------------------------------------------------------
//
//      class Slice
//      class FrameBuffer
//
//-----------------------------------------------------------------------------
    
        //
    // the number of pixels in a row of tiles
    //
    
            IMF_EXPORT
        const char *        fileName () const;
        IMF_EXPORT
        const Header &      header () const;
        IMF_EXPORT
        int                 version () const;
        IMF_EXPORT
        void                setFrameBuffer (const FrameBuffer &frameBuffer);
        IMF_EXPORT
        const FrameBuffer & frameBuffer () const;
        IMF_EXPORT
        bool                isComplete () const;
        IMF_EXPORT
        bool                isOptimizationEnabled () const;
        IMF_EXPORT
        void                readPixels (int scanLine1, int scanLine2);
        IMF_EXPORT
        void                readPixels (int scanLine);
        IMF_EXPORT
        void                rawPixelData (int firstScanLine,
                                          const char *&pixelData,
                                          int &pixelDataSize);
    
    using ILMTHREAD_NAMESPACE::Mutex;
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT 

    
    namespace caffe {
    }
    
     protected:
  HDF5DataLayerTest()
      : filename(NULL),
        blob_top_data_(new Blob<Dtype>()),
        blob_top_label_(new Blob<Dtype>()),
        blob_top_label2_(new Blob<Dtype>()) {}
  virtual void SetUp() {
    blob_top_vec_.push_back(blob_top_data_);
    blob_top_vec_.push_back(blob_top_label_);
    blob_top_vec_.push_back(blob_top_label2_);
    }
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \max(min, \min(max, x))
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #include 'caffe/layer.hpp'
#include 'caffe/layer_factory.hpp'
#include 'caffe/layers/clip_layer.hpp'
#include 'caffe/layers/conv_layer.hpp'
#include 'caffe/layers/deconv_layer.hpp'
#include 'caffe/layers/lrn_layer.hpp'
#include 'caffe/layers/pooling_layer.hpp'
#include 'caffe/layers/relu_layer.hpp'
#include 'caffe/layers/sigmoid_layer.hpp'
#include 'caffe/layers/softmax_layer.hpp'
#include 'caffe/layers/tanh_layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    template <typename Dtype>
const vector<Blob<Dtype>*>& Net<Dtype>::Forward(
    const vector<Blob<Dtype>*> & bottom, Dtype* loss) {
  LOG_EVERY_N(WARNING, 1000) << 'DEPRECATED: Forward(bottom, loss) '
      << 'will be removed in a future version. Use Forward(loss).';
  // Copy bottom to net bottoms
  for (int i = 0; i < bottom.size(); ++i) {
    net_input_blobs_[i]->CopyFrom(*bottom[i]);
  }
  return Forward(loss);
}
    
      LOG(INFO) << 'Writing Training data';
  for (int fileid = 0; fileid < kCIFARTrainBatches; ++fileid) {
    // Open files
    LOG(INFO) << 'Training Batch ' << fileid + 1;
    string batchFileName = input_folder + '/data_batch_'
      + caffe::format_int(fileid+1) + '.bin';
    std::ifstream data_file(batchFileName.c_str(),
        std::ios::in | std::ios::binary);
    CHECK(data_file) << 'Unable to open train file #' << fileid + 1;
    for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
      read_image(&data_file, &label, str_buffer);
      datum.set_label(label);
      datum.set_data(str_buffer, kCIFARImageNBytes);
      string out;
      CHECK(datum.SerializeToString(&out));
      txn->Put(caffe::format_int(fileid * kCIFARBatchSize + itemid, 5), out);
    }
  }
  txn->Commit();
  train_db->Close();
    
    #include <climits>
#include <cmath>
#include <fstream>  // NOLINT(readability/streams)
#include <iostream>  // NOLINT(readability/streams)
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>  // pair
#include <vector>
    
    /**
 * @brief Fills a Blob with values @f$ x \sim U(-a, +a) @f$ where @f$ a @f$ is
 *        set inversely proportional to number of incoming nodes, outgoing
 *        nodes, or their average.
 *
 * A Filler based on the paper [Bengio and Glorot 2010]: Understanding
 * the difficulty of training deep feedforward neuralnetworks.
 *
 * It fills the incoming matrix by randomly sampling uniform data from [-scale,
 * scale] where scale = sqrt(3 / n) where n is the fan_in, fan_out, or their
 * average, depending on the variance_norm option. You should make sure the
 * input blob has shape (num, a, b, c) where a * b * c = fan_in and num * b * c
 * = fan_out. Note that this is currently not the case for inner product layers.
 *
 * TODO(dox): make notation in above comment consistent with rest & use LaTeX.
 */
template <typename Dtype>
class XavierFiller : public Filler<Dtype> {
 public:
  explicit XavierFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    int fan_in = blob->count() / blob->shape(0);
    // Compatibility with ND blobs
    int fan_out = blob->num_axes() > 1 ?
                  blob->count() / blob->shape(1) :
                  blob->count();
    Dtype n = fan_in;  // default to fan_in
    if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_AVERAGE) {
      n = (fan_in + fan_out) / Dtype(2);
    } else if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_FAN_OUT) {
      n = fan_out;
    }
    Dtype scale = sqrt(Dtype(3) / n);
    caffe_rng_uniform<Dtype>(blob->count(), -scale, scale,
        blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    class btree_slice_t : public home_thread_mixin_debug_only_t {
public:
    // Initializes a superblock (presumably, a buf_lock_t constructed with
    // alt_create_t::create) for use with btrees, setting the initial value of the
    // metainfo (with a single key/value pair). Not for use with sindex superblocks.
    static void init_real_superblock(real_superblock_t *superblock,
                                const std::vector<char> &metainfo_key,
                                const binary_blob_t &metainfo_value);
    static void init_sindex_superblock(sindex_superblock_t *superblock);
    }
    
    
    {
    {                rdb_live_deletion_context_t deletion_context;
                rdb_set(key, data, true, store.get_sindex_slice(sindex_uuid),
                    repli_timestamp_t::distant_past,
                    sindex_super_block.get(), &deletion_context, &response,
                    &mod_info, static_cast<profile::trace_t *>(nullptr));
            }
            txn->commit();
        }
    
                store_key_t pk(ql::datum_t(static_cast<double>(i)).print_primary());
            rdb_modification_report_t mod_report(pk);
            rdb_live_deletion_context_t deletion_context;
            rapidjson::Document doc;
            doc.Parse(data.c_str());
            rdb_set(
                pk,
                ql::to_datum(doc, limits, reql_version_t::LATEST),
                false, store->btree.get(), repli_timestamp_t::distant_past,
                superblock.get(), &deletion_context, &response, &mod_report.info,
                static_cast<profile::trace_t *>(NULL));
    
    // Ensures that there is at least one operator<< in the global namespace.
// See Message& operator<<(...) below for why.
void operator<<(const testing::internal::Secret&, int);
    
    
    {}  // namespace testing
    
      // The actual list of listeners.
  internal::TestEventRepeater* repeater_;
  // Listener responsible for the standard result output.
  TestEventListener* default_result_printer_;
  // Listener responsible for the creation of the XML output file.
  TestEventListener* default_xml_generator_;
    
      // RemoveFileName returns the directory path with the filename removed.
  // Example: FilePath('path/to/file').RemoveFileName() returns 'path/to/'.
  // If the FilePath is 'a_file' or '/a_file', RemoveFileName returns
  // FilePath('./') or, on Windows, FilePath('.\\'). If the filepath does
  // not have a file, like 'just/a/dir/', it returns the FilePath unmodified.
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveFileName() const;
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
  const T18 v18_;
  const T19 v19_;
  const T20 v20_;
  const T21 v21_;
  const T22 v22_;
  const T23 v23_;
  const T24 v24_;
  const T25 v25_;
  const T26 v26_;
  const T27 v27_;
  const T28 v28_;
  const T29 v29_;
  const T30 v30_;
  const T31 v31_;
  const T32 v32_;
  const T33 v33_;
  const T34 v34_;
  const T35 v35_;
  const T36 v36_;
  const T37 v37_;
  const T38 v38_;
  const T39 v39_;
  const T40 v40_;
  const T41 v41_;
  const T42 v42_;
  const T43 v43_;
  const T44 v44_;
  const T45 v45_;
  const T46 v46_;
  const T47 v47_;
  const T48 v48_;
  const T49 v49_;
};
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40, GTEST_TEMPLATE_ T41, GTEST_TEMPLATE_ T42,
    GTEST_TEMPLATE_ T43, GTEST_TEMPLATE_ T44, GTEST_TEMPLATE_ T45,
    GTEST_TEMPLATE_ T46, GTEST_TEMPLATE_ T47, GTEST_TEMPLATE_ T48>
struct Templates48 {
  typedef TemplateSel<T1> Head;
  typedef Templates47<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42,
      T43, T44, T45, T46, T47, T48> Tail;
};
    
      const char* const name = typeid(T).name();
#  if GTEST_HAS_CXXABI_H_ || defined(__HP_aCC)
  int status = 0;
  // gcc's implementation of typeid(T).name() mangles the type name,
  // so we have to demangle it.
#   if GTEST_HAS_CXXABI_H_
  using abi::__cxa_demangle;
#   endif  // GTEST_HAS_CXXABI_H_
  char* const readable_name = __cxa_demangle(name, 0, 0, &status);
  const std::string name_str(status == 0 ? readable_name : name);
  free(readable_name);
  return name_str;
#  else
  return name;
#  endif  // GTEST_HAS_CXXABI_H_ || __HP_aCC
    
    // consider change storage as a pure abstract class
class StorageImpl : public Storage {
 public:
  void Alloc(Handle* handle) override;
  void Free(Handle handle) override;
  void DirectFree(Handle handle) override;
  void ReleaseAll(Context ctx) override;
  void SharedIncrementRefCount(Handle handle) override;
  StorageImpl() {}
  virtual ~StorageImpl() = default;
    }
    
    #include <mxnet/operator_util.h>
#include <algorithm>
#include <random>
#include <vector>
#include <cstring>
#ifdef USE_GNU_PARALLEL_SHUFFLE
  #include <unistd.h>
  #include <parallel/algorithm>
#endif
#include '../elemwise_op_common.h'
    
      if (!initialized) {
    if (mode == rnn_enum::kGru) {
      AdjustGruWeightGateOrder(wx, I, H);
      AdjustGruWeightGateOrder(back_wx, I, H);
      AdjustGruWeightGateOrder(wh, H, H);
      AdjustGruWeightGateOrder(back_wh, H, H);
      AdjustGruBiasGateOrder(bx, H);
      AdjustGruBiasGateOrder(back_bx, H);
      AdjustGruBiasGateOrder(bh, H);
      AdjustGruBiasGateOrder(back_bh, H);
    }
    auto src_wx = (*concat_weight_memory)[2 * layer_index];
    auto src_wh = (*concat_weight_memory)[2 * layer_index + 1];
    std::vector<void*> srcs_data1;
    srcs_data1.push_back(wx);
    srcs_data1.push_back(back_wx);
    ConcatData(mkldnn::memory::format::ldgoi, mkldnn::memory::format::ldgoi,
        {weights_layer_r_tz, weights_layer_r_tz}, weights_layer_tz,
        mkldnn_dtype, 1, srcs_data1, src_wx);
    srcs_data1.clear();
    srcs_data1.push_back(wh);
    srcs_data1.push_back(back_wh);
    ConcatData(mkldnn::memory::format::ldgoi, mkldnn::memory::format::ldgoi,
        {weights_iter_r_tz, weights_iter_r_tz}, weights_iter_tz,
         mkldnn_dtype, 1, srcs_data1, src_wh);
    int tmpvalue = 0;
    if (lvalue > 0) {
      tmpvalue = lvalue + 1;
    }
    MKLDNNStream::Get()->RegisterPrim(reorder(src_wx, (*wx_memory)[tmpvalue]));
    MKLDNNStream::Get()->RegisterPrim(reorder(src_wh, (*wh_memory)[tmpvalue]));
    }
    
    
    {  //  copy last state to hy, from(N, H * D) to (D, N, H)
  if (state_outputs) {
    if (D == 1) {
      DType* y_start = y_ptr + (T - 1) * N * H;
      #pragma omp parallel for num_threads(omp_threads)
      for (int i = 0; i < N; i++)
        for (int j = 0; j < H; j++) {
          hy_ptr[i * H + j] = y_start[i * H + j];
        }
    } else {
      DType* y_start = y_ptr + (T - 1) * N * H * D;
      DType* y_back_start = y_ptr + H;
      #pragma omp parallel for num_threads(omp_threads)
      for (int i = 0; i < N; i++)
        for (int j = 0; j < H; j++) {
          hy_ptr[i * H + j] = y_start[i * D * H + j];
          hy_ptr[N * H + i * H + j] = y_back_start[i * D * H + j];
        }
    }
  }
}
    
      // limit inference to part of the graph
  uint32_t node_start = 0, node_end = idx.num_nodes();
  if (ret.attrs.count('node_range')) {
    const auto& range = ret.GetAttr<std::pair<uint32_t, uint32_t> >('node_range');
    node_start = range.first;
    node_end = range.second;
    CHECK_GE(node_start, 0);
    CHECK_LE(node_end, idx.num_nodes());
    ret.attrs.erase('node_range');
  }
  uint32_t entry_start = 0, entry_end = idx.num_node_entries();
  if (ret.attrs.count('entry_range')) {
    const auto& range = ret.GetAttr<std::pair<uint32_t, uint32_t> >('entry_range');
    entry_start = range.first;
    entry_end = range.second;
    CHECK_GE(entry_start, 0);
    CHECK_LE(entry_end, idx.num_node_entries());
    ret.attrs.erase('entry_range');
  }
  // populate the node attribute vector
  if (dispatch_mode_name != nullptr) {
    if (ret.attrs.count(dispatch_mode_name) != 0) {
      dispatch_modes = ret.MoveCopyAttr<NodeAttrVector>(dispatch_mode_name);
    } else {
      LOG(FATAL) << 'Node attribute ' << dispatch_mode_name << ' does not exist in the graph';
    }
  }
    
    TEST(Metric, DeclareUnifiedTest(RMSLE)) {
  auto lparam = xgboost::CreateEmptyGenericParam(0, NGPUS);
  xgboost::Metric * metric = xgboost::Metric::Create('rmsle', &lparam);
  metric->Configure({});
  ASSERT_STREQ(metric->Name(), 'rmsle');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.2f, 0.4f, 0.8f, 1.6f},
                            {1.0f, 1.0f, 1.0f, 1.0f, 1.0f}), 0.40632, 1e-4);
  delete metric;
}
    
      size_t Read(void* dptr, size_t size) override {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer == 0) return strm_->Read(dptr, size);
    if (nbuffer < size) {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, nbuffer);
      buffer_ptr_ += nbuffer;
      return nbuffer + strm_->Read(reinterpret_cast<char*>(dptr) + nbuffer,
                                   size - nbuffer);
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      buffer_ptr_ += size;
      return size;
    }
  }
    
    
    {
    {#ifndef XGBOOST_USE_CUDA
  EXPECT_EQ(GPUSet::AllVisible(), GPUSet::Empty());
#endif
}
}  // namespace xgboost

    
    #ifdef __CUDACC__
  __device__ void AtomicWriteSymbol
    (CompressedByteT* buffer, uint64_t symbol, size_t offset) {
    size_t ibit_start = offset * symbol_bits_;
    size_t ibit_end = (offset + 1) * symbol_bits_ - 1;
    size_t ibyte_start = ibit_start / 8, ibyte_end = ibit_end / 8;
    }
    
    template <typename T>
T* HostDeviceVector<T>::DevicePointer(int device) { return nullptr; }
    
    private:
  struct Stats {
    int actions[VERB_COUNT];
  };
  using StatsMap = hphp_string_map<std::shared_ptr<Stats>>;
    
        if (soap_version == SOAP_1_1) {
      tmp = get_node(fault->children, 'faultcode');
      if (tmp != nullptr && tmp->children != nullptr) {
        faultcode = (char*)tmp->children->content;
      }
    }
    
    // Specify the mount point of hugetlbfs with 1G page size.  Returns whether the
// operation succeeded, i.e., the specified path is accessible, and is on a
// hugetlbfs with 1G page size.
bool set_hugetlbfs_path(const char* path);
    
    #include 'hphp/util/mutex.h'
#include <pthread.h>
    
      // Unlike the static case, we can have zero keys here (because of shared
  // caches).
  auto const obj = srcLoc(env, inst, 1).reg();
  auto const slotOff = offsetToMemoSlot(extra->slot, extra->func->cls());
    
      VLOG(4) << 'sendImpl called with data size=' << size << ', code=' << code
          << ', chunked=' << chunked << ', eom=' << eom;
  eom |= !chunked;
  if (!m_sendStarted) {
    if (!chunked) {
      if (!m_response.getHeaders().exists(HTTP_HEADER_CONTENT_LENGTH)) {
        m_response.getHeaders().add(HTTP_HEADER_CONTENT_LENGTH,
                                    folly::to<std::string>(size));
      }
    } else {
      // Explicitly add Transfer-Encoding: chunked here.  libproxygen will only
      // add it for keep-alive connections
      m_response.getHeaders().set(HTTP_HEADER_TRANSFER_ENCODING, 'chunked');
    }
    m_response.setStatusCode(code);
    auto const& reasonStr = getResponseInfo();
    const char* reason = reasonStr.empty() ?
      HTTPMessage::getDefaultReason(code) : reasonStr.c_str();
    m_response.setStatusMessage(reason);
    m_response.setHTTPVersion(1, 1);
    m_response.setIsChunked(chunked);
    m_response.dumpMessage(4);
    m_server->putResponseMessage(
      ResponseMessage(shared_from_this(),
                      ResponseMessage::Type::HEADERS, 0,
                      chunked, data, size, eom));
    m_sendStarted = true;
  } else {
    m_server->putResponseMessage(
      ResponseMessage(shared_from_this(),
                      ResponseMessage::Type::BODY, 0,
                      chunked, data, size, eom));
  }
    
    ArrayData* castObjToVec(ObjectData* obj) {
  return castObjToHackArrImpl(
    obj,
    Array::CreateVec,
    [](const Array& arr) { return arr.toVec(); },
    [](Array& arr, ArrayIter& iter) { arr.append(iter.second()); },
    'Non-iterable object to vec conversion'
  );
}
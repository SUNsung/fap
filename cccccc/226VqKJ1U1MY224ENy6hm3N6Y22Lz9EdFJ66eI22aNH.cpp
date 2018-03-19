
        
        // Prune a model to make it more efficient:
// * Remove unnecessary operations.
// * Optimize gradient computations.
class ModelPruner : public GraphOptimizer {
 public:
  ModelPruner() {}
  ~ModelPruner() override {}
    }
    
    // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
    
    {
    {
    {}  // namespace cuda
}  // namespace gputools
}  // namespace perftools
    
      // Sets the appropriate library kind to that passed in.
  PluginConfig& SetBlas(PluginId blas);
  PluginConfig& SetDnn(PluginId dnn);
  PluginConfig& SetFft(PluginId fft);
  PluginConfig& SetRng(PluginId rng);
    
      ExpectSuccess(Builder().Input(FakeInput(2, DT_BOOL)), {DT_BOOL, DT_BOOL}, {},
                R'proto(
      op: 'NPolymorphicRestrictIn' input: ['a', 'a:1']
      attr { key: 'N' value { i: 2 } }
      attr { key: 'T' value { type: DT_BOOL } } )proto');
    
    namespace internal {
template <typename Scalar>
struct functor_traits<scalar_clip_op<Scalar> > {
  enum {
    Cost = NumTraits<Scalar>::AddCost * 3,
    PacketAccess = packet_traits<Scalar>::HasMax &&
                   packet_traits<Scalar>::HasMin &&
                   packet_traits<Scalar>::HasNegate
  };
};
}  // namespace internal
    
    #include <memory>
#include 'tensorflow/core/framework/reader_base.h'
#include 'tensorflow/core/framework/reader_op_kernel.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/io/record_reader.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/env.h'
    
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
    
    #include 'glog/logging.h'
#include 'google/protobuf/text_format.h'
#include 'stdint.h'
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times ...) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (M) @f$
   *      the inputs @f$ x_2 @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (M \times ...) @f$:
   *      the reindexed array @f$
   *        y = x_1[x_2]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
    
    {}  // namespace caffe
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace caffe {
    }
    
    #endif  // CAFFE_FILTER_LAYER_HPP_

    
    // Given a MutableIterator to the start of a block, run DetectParagraphs on
// that block and commit the results to the underlying ROW and BLOCK structs,
// saving the ParagraphModels in models.  Caller owns the models.
// We use unicharset during the function to answer questions such as 'is the
// first letter of this word upper case?'
void DetectParagraphs(int debug_level,
                      bool after_text_recognition,
                      const MutableIterator *block_start,
                      GenericVector<ParagraphModel *> *models);
    
    
    {
/**
 * @name tess_add_doc_word
 *
 * Add the given word to the document dictionary
 */
void Tesseract::tess_add_doc_word(WERD_CHOICE *word_choice) {
  getDict().add_document_word(*word_choice);
}
}  // namespace tesseract

    
      // Fills in the x-height range accepted by the given unichar_id in blob
  // coordinates, given its bounding box in the usual baseline-normalized
  // coordinates, with some initial crude x-height estimate (such as word
  // size) and this denoting the transformation that was used.
  // Also returns the amount the character must have shifted up or down.
  void XHeightRange(int unichar_id, const UNICHARSET& unicharset,
                    const TBOX& bbox,
                    float* min_xht,
                    float* max_xht,
                    float* yshift) const;
    
    
    {}  // namespace tesseract.
    
    
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
    
    
    { protected:
  // Outputs the integer formed by reversing the bits of the input integer. Only
  // the lowest num_bits_ bits of the input integer are reversed.
  int GetBinaryReversedInteger(int in_val) const {
    int bit_pos = num_bits_;
    int out_val = 0;
    while(bit_pos--) {
      // Set the value of the last bit.
      out_val |= (in_val & 0x1);
      if (bit_pos > 0) {
        // Left-shift output value to prepare for storing the next bit.
        out_val <<= 1;
      }
      // Right-shift input value to prepare for retrieving the next bit.
      in_val >>= 1;
    }
    return out_val;
  }
  int N_;
  // Next number to be considered for reversal and output.
  int next_num_;
  // number of bits required to represent the numbers of the sequence
  int num_bits_;
};
    
    /**----------------------------------------------------------------------------
          Public Function Prototypes
----------------------------------------------------------------------------**/
namespace tesseract {
// Finds the name of the training font and returns it in fontname, by cutting
// it out based on the expectation that the filename is of the form:
// /path/to/dir/[lang].[fontname].exp[num]
// The [lang], [fontname] and [num] fields should not have '.' characters.
// If the global parameter classify_font_name is set, its value is used instead.
void ExtractFontName(const STRING& filename, STRING* fontname);
    }
    
    // Setup the map for the given indexed_features that have been indexed by
// feature_map.
void IntFeatureDist::Set(const GenericVector<int>& indexed_features,
                          int canonical_count, bool value) {
  total_feature_weight_ = canonical_count;
  for (int i = 0; i < indexed_features.size(); ++i) {
    int f = indexed_features[i];
    features_[f] = value;
    for (int dir = -kNumOffsetMaps; dir <= kNumOffsetMaps; ++dir) {
      if (dir == 0) continue;
      int mapped_f = feature_map_->OffsetFeature(f, dir);
      if (mapped_f >= 0) {
        features_delta_one_[mapped_f] = value;
        for (int dir2 = -kNumOffsetMaps; dir2 <= kNumOffsetMaps; ++dir2) {
          if (dir2 == 0) continue;
          int mapped_f2 = feature_map_->OffsetFeature(mapped_f, dir2);
          if (mapped_f2 >= 0)
            features_delta_two_[mapped_f2] = value;
        }
      }
    }
  }
}
    
    #include <osquery/core.h>
#include <osquery/database.h>
#include <osquery/filesystem.h>
#include <osquery/logger.h>
#include <osquery/tables.h>
    
      /// The database must be opened in a R/W mode (default false).
  static std::atomic<bool> kDBRequireWrite;
    
    /**
 * @brief Call a Plugin exposed by an Extension Registry route.
 *
 * This is mostly a Registry%-internal method used to call an ExtensionHandler
 * call API if a Plugin is requested and had matched an Extension route.
 *
 * @param uuid Route UUID of the matched Extension
 * @param registry The string name for the registry.
 * @param item A string identifier for this registry item.
 * @param request The plugin request input.
 * @param response The plugin response output.
 * @return Success indicates Extension API call success and Extension's
 * Registry::call success.
 */
Status callExtension(const RouteUUID uuid,
                     const std::string& registry,
                     const std::string& item,
                     const PluginRequest& request,
                     PluginResponse& response);
    
    #include <osquery/config.h>
#include <osquery/database.h>
#include <osquery/registry.h>
    
    namespace osquery {
    }
    
        std::string arg_verbose('--verbose');
    if (verbose) {
      arguments.push_back(arg_verbose.c_str());
    }
    
    Status platformStrncpy(char* dst, size_t nelms, const char* src, size_t count) {
  if (dst == nullptr || src == nullptr || nelms == 0) {
    return Status(1, 'Failed to strncpy: invalid arguments');
  }
    }
    
    namespace folly {
    }
    
    // Parse the value of a pagesize mount option
// Format: number, optional K/M/G/T suffix, trailing junk allowed
size_t parsePageSizeValue(StringPiece value) {
  static const boost::regex regex(R'!((\d+)([kmgt])?.*)!', boost::regex::icase);
  boost::cmatch match;
  if (!boost::regex_match(value.begin(), value.end(), match, regex)) {
    throw std::runtime_error('Invalid pagesize option');
  }
  char c = '\0';
  if (match.length(2) != 0) {
    c = char(tolower(value[size_t(match.position(2))]));
  }
  StringPiece numStr(value.data() + match.position(1), size_t(match.length(1)));
  auto const size = to<size_t>(numStr);
  auto const mult = [c] {
    switch (c) {
      case 't':
        return 1ull << 40;
      case 'g':
        return 1ull << 30;
      case 'm':
        return 1ull << 20;
      case 'k':
        return 1ull << 10;
      default:
        return 1ull << 0;
    }
  }();
  return size * mult;
}
    
      std::shared_ptr<LogWriter> createWriter() override {
    // Get the output file to use
    if (path_.empty()) {
      throw std::invalid_argument('no path specified for file handler');
    }
    return fileWriterFactory_.createWriter(
        File{path_, O_WRONLY | O_APPEND | O_CREAT});
  }
    
    bool LogCategoryConfig::operator==(const LogCategoryConfig& other) const {
  return level == other.level &&
      inheritParentLevel == other.inheritParentLevel &&
      handlers == other.handlers;
}
    
    namespace folly {
    }
    
    /**
 * Parse a log configuration string.
 *
 * See the documentation in logging/docs/Config.md for a description of the
 * configuration string syntax.
 *
 * Throws a LogConfigParseError on error.
 */
LogConfig parseLogConfig(StringPiece value);
    
    // Normalizes trivial differences across Envs such that these test cases can
// run on all Envs.
class NormalizingEnvWrapper : public EnvWrapper {
 public:
  explicit NormalizingEnvWrapper(Env* base) : EnvWrapper(base) {}
    }
    
           * Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
       * Redistributions in binary form must reproduce the above
   copyright notice, this list of conditions and the following disclaimer
   in the documentation and/or other materials provided with the
   distribution.
    
     private:
  // A version of PartialMerge that actually performs 'partial merging'.
  // Use this to simulate the exact behaviour of the StringAppendOperator.
  bool _AssocPartialMergeMulti(const Slice& key,
                               const std::deque<Slice>& operand_list,
                               std::string* new_value, Logger* logger) const;
    
     public: // Insert/Update
  /// Insert value before/after pivot in (list: key). Return the length.
  /// May throw RedisListException
  int InsertBefore(const std::string& key, const std::string& pivot,
                   const std::string& value);
  int InsertAfter(const std::string& key, const std::string& pivot,
                  const std::string& value);
    
    #include 'db/dbformat.h'
#include 'db/pinned_iterators_manager.h'
#include 'rocksdb/iterator.h'
#include 'rocksdb/options.h'
#include 'rocksdb/statistics.h'
#include 'table/block_prefix_index.h'
#include 'table/internal_iterator.h'
#include 'util/random.h'
#include 'util/sync_point.h'
#include 'format.h'
    
    namespace rocksdb {
    }
    
    /**
 * @brief create dir if missing
 * @details [long description]
 *
 * @param dirname [description]
 * @return [description]
 */
Status EnvLibrados::CreateDirIfMissing(const std::string& dirname)
{
  LOG_DEBUG('[IN]%s\n', dirname.c_str());
  std::string fid, dir, file;
  split(dirname + '/temp', &dir, &file);
  Status s = Status::OK();
    }
    
      virtual std::string ToString() const override {
    std::string res;
    res.append('SimCache MISSes: ' + std::to_string(get_miss_counter()) + '\n');
    res.append('SimCache HITs:    ' + std::to_string(get_hit_counter()) + '\n');
    char buff[350];
    auto lookups = get_miss_counter() + get_hit_counter();
    snprintf(buff, sizeof(buff), 'SimCache HITRATE: %.2f%%\n',
             (lookups == 0 ? 0 : get_hit_counter() * 100.0f / lookups));
    res.append(buff);
    return res;
  }
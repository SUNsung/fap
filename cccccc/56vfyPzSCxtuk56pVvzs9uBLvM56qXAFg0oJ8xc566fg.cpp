
        
        TEST(Converter, UnknownType) {
  using namespace caffe2::testing;
  caffe2::NetDef net;
  NetMutator(&net)
      .newOp('NeverSeen', {'X'}, {'X'})
      .setDeviceOptionName('device_' + c10::to_string(rand() % 2));
  auto nn = caffe2::convertToNNModule(net);
  auto new_netdef = caffe2::convertToCaffe2Proto(nn);
}
    
    namespace caffe2 {
    }
    
    workspace.RunOperatorOnce(op)
print('indices: \n', workspace.FetchBlob('indices'))
    
    template <typename T, class Context>
class BernoulliJSDGradientOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDGradientOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
    #ifndef TESSERACT_CCUTIL_BOXREAD_H_
#define TESSERACT_CCUTIL_BOXREAD_H_
    
    
    {    ICOORD pt;
    int halfwidth;
  };
  // Type holds the distance of each point from the fitted line and the point
  // itself. Use of double allows integer distances from ICOORDs to be stored
  // exactly, and also the floating point results from ConstrainedFit.
  using DistPointPair = KDPairInc<double, ICOORD>;
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
    #ifndef TESSERACT_CCSTRUCT_LINLSQ_H_
#define TESSERACT_CCSTRUCT_LINLSQ_H_
    
    
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
    
      // Provides access to the ShapeTable that this classifier works with.
  virtual const ShapeTable* GetShapeTable() const = 0;
  // Provides access to the UNICHARSET that this classifier works with.
  // Must be overridden IFF GetShapeTable() returns nullptr.
  virtual const UNICHARSET& GetUnicharset() const;
    
    class DawgCache {
 public:
  Dawg *GetSquishedDawg(const STRING &lang, TessdataType tessdata_dawg_type,
                        int debug_level, TessdataManager *data_file);
    }
    
    void NcclComm::Sync()
{
    cudaStreamSynchronize(m_stream) || 'NcclComm: cudaStreamSynchronize failed';
}
    
    // declare the static variables from the classes
template <>
NDLScript<half> NDLScript<half>::s_global{};
template <>
NDLScript<float> NDLScript<float>::s_global{};
template <>
NDLScript<double> NDLScript<double>::s_global{};
    
        // full parameter Init routine
    void Init(const intargvector& layerSizes, const TrainingCriterion trainCriterion, const EvalCriterion evalCriterion,
              DEVICEID_TYPE deviceId,
              int outputLayerSize = -1,
              const stringargvector nonLinearFunctions = L'Sigmoid',
              const bool addDropoutNodes = false,
              const bool uniformInit = true, const ElemType initValueScale = 1.0f,
              const bool applyMeanVarNorm = false, bool needPrior = false)
    {
        m_deviceId = deviceId;
        m_net = make_shared<ComputationNetwork>(m_deviceId);
    }
    
        if (paralleltrain)
    {
        mpi = MPIWrapper::GetInstance(true /*create*/);
    }  
    
        // dict(name, default) for strings
    ConfigValue operator()(const std::string& name,
                           const char* defaultvalue) const
    {
        ConfigValue value = Find(name, defaultvalue);
        return value;
    }
    
        // rethrow an exception with added node-name information
    // Use this for exceptions we may get e.g. from the Matrix library, such as VerifySize().
    __declspec_noreturn
    void Rethrow(const std::exception & e) const
    {
        string what = msra::strfun::strprintf('%ls: %s', NodeDescription().c_str(), e.what());
        RethrowAs<std::runtime_error>   (e, what);
        RethrowAs<std::logic_error>     (e, what);
        RethrowAs<std::invalid_argument>(e, what);
        //RethrowAs<std::bad_alloc>       (e, what); // can't throw with message
        //RethrowAs<std::exception>       (e, what); // ditto
        throw e;
    }
    
                //----------------------------------------
            // 2. process for each individual node
            //----------------------------------------
            for (auto& pBaseNode : learnableNodes)
            {
                if (!pBaseNode->IsParameterUpdateRequired())
                {
                    continue;
                }
                // 2.1 model averaging
                auto pNode = DownCast(pBaseNode);
                // 2.1.1. average model from individual models 
                Matrix<ElemType> mat(pNode->Value().DeepClone()); // pNode->Value returns lvalue, so a deep copy is invoked here
                // 2.1.2. normalize the weight matrix 
                Matrix<ElemType>::Scale(factor, mat);
                // 2.1.3. send weight matrix over MPI nodes; 
    }
    
        void Train(shared_ptr<ComputationNetwork> net, DEVICEID_TYPE deviceId,
               IDataReader* trainSetDataReader,
               IDataReader* validationSetDataReader, int startEpoch, bool loadNetworkFromCheckpoint);
    void Adapt(wstring origModelFileName, wstring refNodeName,
               IDataReader* trainSetDataReader,
               IDataReader* validationSetDataReader,
               const DEVICEID_TYPE deviceID, const bool makeMode = true);
    
        expected = { 13, 2, 14, 14 };
    
      ~BlobIndexCompactionFilter() override {
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EXPIRED_COUNT, expired_count_);
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EXPIRED_SIZE, expired_size_);
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EVICTED_COUNT, evicted_count_);
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EVICTED_SIZE, evicted_size_);
  }
    
    // Merge operator that picks the maximum operand, Comparison is based on
// Slice::compare
class MaxOperator : public MergeOperator {
 public:
  bool FullMergeV2(const MergeOperationInput& merge_in,
                   MergeOperationOutput* merge_out) const override {
    Slice& max = merge_out->existing_operand;
    if (merge_in.existing_value) {
      max = Slice(merge_in.existing_value->data(),
                  merge_in.existing_value->size());
    } else if (max.data() == nullptr) {
      max = Slice();
    }
    }
    }
    
    #include 'rocksdb/slice.h'
#include 'rocksdb/status.h'
    
      // Do some reads and writes to key 'y'
  // Since the snapshot was advanced, the write done outside of the
  // transaction does not conflict.
  s = txn->GetForUpdate(read_options, 'y', &value);
  txn->Put('y', 'y');
    
    
    {// Factor method to create a new persistent cache
Status NewPersistentCache(Env* const env, const std::string& path,
                          const uint64_t size,
                          const std::shared_ptr<Logger>& log,
                          const bool optimized_for_nvm,
                          std::shared_ptr<PersistentCache>* cache);
}  // namespace rocksdb

    
      if (max_value == min_value) {
    return max_value;
  }
    
      // This function should be used only as optimization
  // This write operation will not use neither sync or WAL, so date lose
  // may happen in case of failure, but opertaion itself is still atomic
  ExpectedSuccess<DatabaseError> putStringsUnsafe(
      const std::string& domain,
      const std::vector<std::pair<std::string, std::string>>& data) override;
    
    TEST_F(RocksdbDatabaseTest, test_domain_error) {
  auto db = std::make_unique<RocksdbDatabase>('test', path_);
  ASSERT_TRUE(db->open());
  auto result = db->putInt32('bad_domain', 'key', 12);
  EXPECT_FALSE(result);
  EXPECT_EQ(result.takeError(), DatabaseError::DomainNotFound);
}
    
    inline void getLegacyFieldsAndDecorations(const JSON& doc, QueryLogItem& item) {
  if (doc.doc().HasMember('decorations')) {
    if (doc.doc()['decorations'].IsObject()) {
      for (const auto& i : doc.doc()['decorations'].GetObject()) {
        item.decorations[i.name.GetString()] = i.value.GetString();
      }
    }
  }
    }
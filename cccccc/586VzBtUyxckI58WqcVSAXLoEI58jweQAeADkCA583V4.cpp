
        
        
    {
    {}  // namespace gpu
}  // namespace xla
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {}  // namespace mate

    
    
    {  return exports;
}
    
    
    {}  // namespace
    
    
    {  // Otherwise do the restart after all windows have been closed.
  WindowList::AddObserver(this);
  WindowList::CloseAllWindows();
}
    
    std::string RegTree::DumpModel(const FeatureMap& fmap,
                               bool with_stats,
                               std::string format) const {
  std::unique_ptr<TreeGenerator> builder {
    TreeGenerator::Create(format, fmap, with_stats)
  };
  for (int32_t i = 0; i < param.num_roots; ++i) {
    builder->BuildTree(*this);
  }
    }
    
    TEST(Tree, DumpJson) {
  auto tree = ConstructTree();
  FeatureMap fmap;
  auto str = tree.DumpModel(fmap, true, 'json');
  size_t n_leaves = 0;
  size_t iter = 0;
  while ((iter = str.find('leaf', iter + 1)) != std::string::npos) {
    n_leaves++;
  }
  ASSERT_EQ(n_leaves, 4);
    }
    
    
    {  ASSERT_TRUE(std::equal(h_sol.begin(), h_sol.end(), res.begin()));
}
    
    
    {
    {#ifndef XGBOOST_USE_CUDA
  EXPECT_EQ(GPUSet::AllVisible(), GPUSet::Empty());
#endif
}
}  // namespace xgboost

    
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
    
    namespace xgboost {
namespace common {
/*!
 * \brief calculate the sigmoid of the input.
 * \param x input parameter
 * \return the transformed value.
 */
XGBOOST_DEVICE inline float Sigmoid(float x) {
  return 1.0f / (1.0f + expf(-x));
}
    }
    }
    
    // Define a customized logistic regression objective in C++.
// Implement the interface.
class MyLogistic : public ObjFunction {
 public:
  void Configure(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
  }
  void GetGradient(const HostDeviceVector<bst_float> &preds,
                   const MetaInfo &info,
                   int iter,
                   HostDeviceVector<GradientPair> *out_gpair) override {
    out_gpair->Resize(preds.Size());
    const std::vector<bst_float>& preds_h = preds.HostVector();
    std::vector<GradientPair>& out_gpair_h = out_gpair->HostVector();
    const std::vector<bst_float>& labels_h = info.labels_.HostVector();
    for (size_t i = 0; i < preds_h.size(); ++i) {
      bst_float w = info.GetWeight(i);
      // scale the negative examples!
      if (labels_h[i] == 0.0f) w *= param_.scale_neg_weight;
      // logistic transformation
      bst_float p = 1.0f / (1.0f + std::exp(-preds_h[i]));
      // this is the gradient
      bst_float grad = (p - labels_h[i]) * w;
      // this is the second order gradient
      bst_float hess = p * (1.0f - p) * w;
      out_gpair_h.at(i) = GradientPair(grad, hess);
    }
  }
  const char* DefaultEvalMetric() const override {
    return 'error';
  }
  void PredTransform(HostDeviceVector<bst_float> *io_preds) override {
    // transform margin value to probability.
    std::vector<bst_float> &preds = io_preds->HostVector();
    for (size_t i = 0; i < preds.size(); ++i) {
      preds[i] = 1.0f / (1.0f + std::exp(-preds[i]));
    }
  }
  bst_float ProbToMargin(bst_float base_score) const override {
    // transform probability to margin value
    return -std::log(1.0f / base_score - 1.0f);
  }
    }
    
    
    {    for (size_t i = 0; i < sorted_index_set.size(); ++i) {
      bst_uint cid = sorted_index_set[i];
      size_t dst_begin = offset_vec[i];
      size_t src_begin = disk_offset_[cid];
      size_t num = disk_offset_[cid + 1] - disk_offset_[cid];
      for (size_t j = 0; j < num; ++j) {
        data_vec[dst_begin + j] = Entry(
            index_.data[src_begin + j] + min_index_, value_.data[src_begin + j]);
      }
    }
    return true;
  }
    
    
    {    symbol <<= 7 - ibit_end % 8;
    for (ptrdiff_t ibyte = ibyte_end; ibyte >= (ptrdiff_t)ibyte_start; --ibyte) {
      dh::AtomicOrByte(reinterpret_cast<unsigned int*>(buffer + detail::kPadding),
                       ibyte, symbol & 0xff);
      symbol >>= 8;
    }
  }
#endif  // __CUDACC__
    
    class ConfigRecord : public Object, public IConfigRecord // all configuration arguments to class construction, resolved into ConfigValuePtrs
{
    function<void(const std::wstring &)> failfn; // function to call in case of failure due to this value
    // change to ContextInsensitiveMap<ConfigValuePtr>
    std::map<std::wstring, ConfigValuePtr> members;
    IConfigRecordPtr parentScope; // we look up the chain
    ConfigRecord()
    {
    } // forbidden (private) to instantiate without a scope
public:
    // --- creation phase
    }
    
    private:
    ComputationNetworkPtr m_computationNetwork;
    NDLNodeEvaluatorImpl<ElemType>* m_nodeEvaluator;
    
    private:
    void PrintMemorySharingStructure(const std::vector<ComputationNodeBasePtr>& nodes);
    void ReleaseMatricesAfterEvalForChildren(ComputationNodeBasePtr n, std::unordered_map<ComputationNodeBasePtr, std::unordered_set<ComputationNodeBasePtr>>& parentsMap);
    
    
    {#ifdef COMING_SOON
    ComputationNodePtr CRF(const ComputationNodePtr label, const ComputationNodePtr postDepScore, const ComputationNodePtr transition_score, const std::wstring nodeName = L'');
#endif
    ComputationNodePtr Abs(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Acos(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Asin(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Asinh(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Atan(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Atanh(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Less(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Equal(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Greater(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr GreaterEqual(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr NotEqual(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr LessEqual(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr ClassCrossEntropyWithSoftmax(const ComputationNodePtr label, const ComputationNodePtr prediction, const ComputationNodePtr input_weight, const ComputationNodePtr cls_log_post_prob, const std::wstring nodeName = L'');
    ComputationNodePtr Clip(const ComputationNodePtr a, const ComputationNodePtr b, const ComputationNodePtr c, const std::wstring nodeName = L'');
    ComputationNodePtr Cos(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr CosDistance(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Cosh(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr CrossEntropy(const ComputationNodePtr label, const ComputationNodePtr prediction, const std::wstring nodeName = L'');
    ComputationNodePtr CrossEntropyWithSoftmax(const ComputationNodePtr label, const ComputationNodePtr prediction, const std::wstring nodeName = L'');
    ComputationNodePtr ForwardBackward(const ComputationNodePtr graph, const ComputationNodePtr features, int blankTokenId, int delayConstraint, const std::wstring nodeName = L'');
    ComputationNodePtr DiagTimes(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Diagonal(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Dropout(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr DummyCriterion(const ComputationNodePtr objectives, const ComputationNodePtr derivatives, const ComputationNodePtr prediction, const std::wstring nodeName = L'');
    ComputationNodePtr EditDistanceError(const ComputationNodePtr a, const ComputationNodePtr b, float subPen, float delPen, float insPen, bool squashInputs, vector<size_t> tokensToIgnore, const std::wstring nodeName = L'');
    ComputationNodePtr StopGradient(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr ElementTimes(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr DynamicAxis(const ComputationNodePtr a, const std::wstring& nodeName = L'');
    ComputationNodePtr ClassificationError(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Exp(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Floor(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr FutureValue(const ComputationNodePtr a, const float initHiddenActivity, const size_t row_size, size_t timeStep, const std::wstring nodeName = L'');
#ifdef COMING_SOON
    ComputationNodePtr GMMLogLikelihood(const ComputationNodePtr unnormedPrior, const ComputationNodePtr mean, const ComputationNodePtr logStddev, const ComputationNodePtr feature, const std::wstring nodeName = L'');
#endif
    ComputationNodePtr Hardmax(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr If(const ComputationNodePtr a, const ComputationNodePtr b, const ComputationNodePtr c, const std::wstring nodeName = L'');
    ComputationNodePtr InvStdDev(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr LambdaRank(const ComputationNodePtr gain, const ComputationNodePtr prediction, const ComputationNodePtr queryId, const std::wstring nodeName = L'');
    ComputationNodePtr NDCG1Eval(const ComputationNodePtr gain, const ComputationNodePtr prediction, const ComputationNodePtr queryId, const std::wstring nodeName = L'');
    ComputationNodePtr KhatriRaoProduct(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Log(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr LogPlus(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr LogSoftmax(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Logistic(const ComputationNodePtr a, const ComputationNodePtr b, const ComputationNodePtr c, const std::wstring nodeName = L'');
    ComputationNodePtr Logistic(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr LookupTable(const ComputationNodePtr dictionary, const ComputationNodePtr input, const std::wstring nodeName = L'');
    ComputationNodePtr MatrixL1Reg(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr MatrixL2Reg(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Mean(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Minus(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Negate(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr NoiseContrastiveEstimation(const ComputationNodePtr label, const ComputationNodePtr prediction, const ComputationNodePtr input_weight, const ComputationNodePtr input_bias, const std::wstring nodeName = L'', NCEEvalMode mode = NCEEvalMode::None);
    ComputationNodePtr Pass(const ComputationNodePtr a, const std::wstring& nodeName = L'');
    ComputationNodePtr LabelsToGraph(const ComputationNodePtr a, const std::wstring& nodeName = L'');
    ComputationNodePtr PastValue(const ComputationNodePtr a, const float initHiddenActivity, const size_t row_size, size_t timeStep, const std::wstring nodeName = L'');
    ComputationNodePtr PerDimMeanVarDeNormalization(const ComputationNodePtr feature, const ComputationNodePtr mean, const ComputationNodePtr InvStdDev, const std::wstring nodeName = L'');
    ComputationNodePtr PerDimMeanVarNormalization(const ComputationNodePtr feature, const ComputationNodePtr mean, const ComputationNodePtr InvStdDev, const std::wstring nodeName = L'');
    ComputationNodePtr Plus(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Reciprocal(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr RandomSample(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr RandomSampleInclusionFrequency(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr RectifiedLinear(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Reshape(const ComputationNodePtr a, const TensorShape& imageLayout, const std::wstring nodeName = L'');
    ComputationNodePtr RowRepeat(const ComputationNodePtr a, const size_t num_repeat, const std::wstring nodeName = L'');
    ComputationNodePtr RowSlice(const ComputationNodePtr a, const size_t start_index, const size_t num_rows, const std::wstring nodeName = L'');
    ComputationNodePtr RowStack(const std::vector<ComputationNodePtr> pinputs, const std::wstring nodeName = L'');
#ifdef COMING_SOON
    ComputationNodePtr SequenceDecoder(const ComputationNodePtr label, const ComputationNodePtr prediction, const ComputationNodePtr pairscore, const std::wstring nodeName = L'');
#endif
    ComputationNodePtr SequenceWithSoftmax(const ComputationNodePtr label, const ComputationNodePtr prediction, const ComputationNodePtr loglikelihood, const std::wstring nodeName = L'');
    ComputationNodePtr LatticeSequenceWithSoftmax(const ComputationNodePtr label, const ComputationNodePtr prediction, const ComputationNodePtr loglikelihood, const ComputationNodePtr lattice, const std::wstring& symListPath, const std::wstring& phonePath, const std::wstring& stateListPath, const std::wstring& transProbPath, const std::wstring& LatticeSequenceWithSoftmax, float hSmoothingWeight, float frameDropThresh, bool doReferenceAlign, bool seqGammarUsesMBR, float seqGammarAMF, float seqGammarLMF, float seqGammarBMMIFactor, float seqGammarWordPen, const std::wstring nodeName = L'');
    ComputationNodePtr Sigmoid(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Sin(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Sinh(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Softmax(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Sqrt(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr SquareError(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr Sum(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Tan(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Tanh(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr StraightThrough(const ComputationNodePtr a, const std::wstring nodeName = L'');
    ComputationNodePtr Times(const ComputationNodePtr a, const ComputationNodePtr b, size_t outputRank = 1, const std::wstring nodeName = L'');
    ComputationNodePtr TransposeDimensions(const ComputationNodePtr matrix, int dim1, int dim2, const std::wstring nodeName = L'');
    ComputationNodePtr TransposeTimes(const ComputationNodePtr a, const ComputationNodePtr b, const std::wstring nodeName = L'');
    ComputationNodePtr QuantizedTimes(const ComputationNodePtr a, const ComputationNodePtr b, size_t bitSmoothingA = 1, size_t bitSmoothingB = 1, size_t outputRank = 1, const std::wstring nodeName = L'');
#if 1 // legacy
    ComputationNodePtr LegacyReshape(const ComputationNodePtr a, const size_t num_rows, const TensorShape& imageLayout, const std::wstring nodeName = L'');
#endif
};
    
    
    {    // call the evaluator
    SimpleOutputWriter<ElemType> eval(this->m_net);
    eval.WriteOutput(*m_writer, outNodeNames);
}
    
                float totalThroughput = secondsSinceLastReport > 0 ? (float)totalSamplesProcessedSinceLastReport / ((float)secondsSinceLastReport * 1000.0f) : 0.0f ; 
            float throughputPerWorker = totalThroughput / m_numWorkers; 
    
        template<class ElemType2 = ElemType>
    void TypedUpdateWeights(Matrix<ElemType2>& functionValues, Matrix<ElemType2>& gradientValues,
                       Matrix<ElemType2>& smoothedGradient, double& smoothedCount,
                       const double learnRatePerSample, const double momentumPerSample,
                       size_t actualMBSize,
                       const double L2RegWeight, const double L1RegWeight,
                       const bool needAveMultiplier,
                       const bool useNesterovMomentum) const;
public:
    // return -1 if nothing exists
    int DetermineStartEpoch(const bool makeMode);
    
    void CmdInfo::PrintHeader(DebuggerClient* client, StringBuffer &sb,
                          const Array& info) {
  if (!info[s_internal].toBoolean()) {
    String file = info[s_file].toString();
    int line1 = info[s_line1].toInt32();
    int line2 = info[s_line2].toInt32();
    if (file.empty() && line1 == 0 && line2 == 0) {
      sb.printf('// (source unknown)\n');
    } else if (line1 == 0 && line2 == 0) {
      sb.printf('// defined in %s\n', file.data());
    } else if (line1 && line2 && line1 != line2) {
      sb.printf('// defined on line %d to %d of %s\n', line1, line2,
                file.data());
      if (client != nullptr) {
        client->setListLocation(file.data(), line1 - 1, false);
      }
    } else {
      int line = line1 ? line1 : line2;
      sb.printf('// defined on line %d of %s\n', line, file.data());
      if (client != nullptr) {
        client->setListLocation(file.data(), line - 1, false);
      }
    }
  }
    }
    
      VSCommand(Debugger* debugger, folly::dynamic message);
    
      if (data &&
      (attr = get_attribute(data->properties,'arrayType')) &&
      attr->children && attr->children->content) {
    xmlNsPtr nsptr;
    string type, ns;
    parse_namespace(attr->children->content, type, ns);
    nsptr = xmlSearchNs(attr->doc, attr->parent, NS_STRING(ns));
    }
    
    #include <sys/types.h>
#include <stdexcept>
    
      VregSet& operator-=(const VregSet& o) {
    if (UNLIKELY(&o == this)) {
      regs.clear();
      return *this;
    }
    if (regs.empty() || o.regs.empty()) return *this;
    }
    
    
    {private:
  struct Initializer;
  static Initializer s_initializer;
};
    
      Inserter findForNewInsert(int32_t* table, size_t mask,
                                hash_t h0) const;
  Inserter findForNewInsertWarn(int32_t* table, size_t mask,
                                    hash_t h0) const;
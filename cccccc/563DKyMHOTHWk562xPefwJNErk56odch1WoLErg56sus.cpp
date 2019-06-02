
        
        
    {    // write one line of each color component
    for (comp = 0; comp < 4; ++comp) {
      for (x = 0; x < width; ++x) {
	digit = lineBuf[4*x + comp] / 16;
	hexBuf[i++] = digit + ((digit >= 10)? 'a'-10: '0');
	digit = lineBuf[4*x + comp] % 16;
	hexBuf[i++] = digit + ((digit >= 10)? 'a'-10: '0');
	if (i >= 64) {
	  hexBuf[i++] = '\n';
	  writePSBuf(hexBuf, i);
	  i = 0;
	}
      }
    }
  }
    
    static void toRoman(int number, GooString *str, GBool uppercase) {
  static const char uppercaseNumerals[] = 'IVXLCDM';
  static const char lowercaseNumerals[] = 'ivxlcdm';
  int divisor;
  int i, j, k;
  const char *wh;
    }
    
      // get alignment
  if (dict->lookup('Dm', &obj)->isName()) {
    const char *dm = obj.getName();
    
    if (strcmp('H', dm) == 0)
      alignment = transitionHorizontal;
    else if (strcmp('V', dm) == 0)
      alignment = transitionVertical;
  }
  obj.free();
    
      // Get type
  PageTransitionType getType() { return type; }
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006, 2009, 201, 2010 Albert Astals Cid <aacid@kde.org>
// Copyright (C) 2006 Krzysztof Kowalczyk <kkowalczyk@gmail.com>
// Copyright (C) 2009 Ilya Gorenbein <igorenbein@finjan.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    #ifdef USE_GCC_PRAGMAS
#pragma interface
#endif
    
    #include 'GooString.h'
#include 'Object.h'
#include 'Sound.h'
#include 'Stream.h'
#include 'FileSpec.h'
    
    
    {  for (i = 0; i < nT3Fonts; ++i) {
    delete t3FontCache[i];
  }
  if (fontEngine) {
    delete fontEngine;
  }
  if (splash) {
    delete splash;
  }
  if (bitmap) {
    delete bitmap;
  }
}
    
        Matrix<char>* NDMask::GetMatrix() const
    {
        return m_matrixView.get();
    }
    
        template <typename ElementType, typename DestType>
    void DirectCopy(const ElementType *source, const size_t elementCount, std::vector<DestType>& dest)
    {
        if (!std::is_same<ElementType, DestType>::value)
            RuntimeError('Copy: Source and destination must be the same data type.');
    }
    
    
    {            if ((m_varKind == VariableKind::Parameter) || (m_varKind == VariableKind::Constant))
            {
                if (m_shape.HasFreeDimension())
                    InvalidArgument('Parameter/Constant '%S' has invalid shape '%S'; it is illegal for a Parameter/Constant to have a FreeDimension.', AsString().c_str(), m_shape.AsString().c_str());
            }
        }
    
    
    {
    {
    {}}}

    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    // ===================================================================
// CloneFunctionConfigLambda -- lambda to produce a clone of a network
//  - creates a BrainScript function that carbon-copies a subsection of an existing network
//  - the copy can be shallow or deep, where a deep copy gets its own copy of LearnableParameters
//     - a shallow copy (parameters='shared') is a copy of all nodes that depend on the specified input(s),
//       while all other nodes are shared from the original network section
//     - a deep copy (parameters='lernable' or 'constant') also copies all reachable LearnableParameters and their dependents
//     - Input() nodes not listed as `inputNodes` are always shared
//  - the source network may be a different network, e.g. loaded with BS.Network.Load()
//  - a deep copy can be read-only (parameters='constant')
//     - Note: multiple uses of the lambda will not share read-only parameters. This is trickier to implement that one might expect.
//  - example use cases:
//     - adaptation (KL): a frozen read-only copy of the starting model is used as a KL-regularizer
//     - adaptation (DLR): an injected input transform is trained while the network is fixed
//     - image: lower layers of ImageNet networks serve as immutable feature extractors for another image task
//     - DSSM: applying the same network subsection to two inputs
// Usage:
//    f = CloneFunction (inputNodes, outputNodes, parameters='lernable' /*|'constant'|'shared'*/)
// Parameters:
//  - inputNodes:  single node or array of nodes that will become parameters of the function.
//                 Commonly, this list will include all Input()s that the outputNode(s) depend on.
//  - outputNodes: single node or dictionary of nodes that the function will emit
// Example:
//    # create a BS function by copying a piece of network
//    net = CloneFunction (network.features, network.logP)
//    # apply the copy to a new input
//    out = net (myFeatures)
//    # This will create a copy of the subsection from network.features to network.logP
//    # where all links to network.features get replaced by links to myFeatures.
// Example with multiple input and output nodes:
//    # create a BS function by copying a piece of network
//    # This specific example converts a network back into a BrainScript function.
//    # It passes two input nodes --> the BS function will have 2 inputs;
//    # and it passes a record of output nodes --> the BS function will return a record with the same member names
//    network = BS.Network.Load ('some.dnn')
//    net = CloneFunction ((network.features:network.labels), [ ce = network.ce ; errs = network.errs ])
//    # create a network from the BS function
//    features = Input (13)
//    labels = Input (42)
//    out = net (features, labels)
//    criterionNodes = (out.ce)
//    evaluationNodes = (out.errs)
// A specific example: Adapting a network, while using the original network as a regularizer (KLD)
//    # load network
//    network = BS.Network.Load ('some.dnn')
//    # create a trainable clone and a read-only reference clone
//    adaptNet = CloneFunction (network.features, [ z = network.z ], readOnly=false)
//    # create a read-only clone
//    refNet = CloneFunction (network.features, [ z = network.z ], readOnly=true)
//    # create the main network
//    features = Input (42)
//    labels = Input (9000)
//    z = adaptNet (features).z
//    zRef = refNet (features).z
//    # training criterion
//    refWeight = 0.9
//    kldLabels = labels * (1-refWeight) + Softmax (zRef) * refWeight  # interpolate with ref output
//    ce = CrossEntropyWithSoftmax (z, kldLabels)
//    errs = ClassificationError (z, labels)
//    criterionNodes = (ce)
//    evaluationNodes = (errs)
// ===================================================================
    
    
    {            // Get the last QueryUrls and add the Url.
            QueryUrls& qub = m_queryUrls.back();
            Url u(i, qub.m_urls.size(), preds(0, i), gains(0, i));
            qub.m_urls.push_back(u);
        }
    
    private:
    // init parameters for deferred initialization (which happens in Validate())
    std::wstring m_initString; // if non-empty then deferred initialization is needed. Gets cleared upon completion of deferred init.
    unsigned long m_randomSeed;
    ElemType m_initValueScale;
    size_t m_initFilterRank;
    int m_initOutputRank;
    bool m_initOnCPUOnly;
    ElemType m_initValue;
    
    
template class OptimizedRNNStackNode<float>;
template class OptimizedRNNStackNode<double>;
template class OptimizedRNNStackNode<half>;
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    // logistic loss for probability regression task
struct LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return common::Sigmoid(x); }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return x >= 0.0f && x <= 1.0f; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
  static T PredTransform(T x) { return common::Sigmoid(x); }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static bst_float ProbToMargin(bst_float base_score) {
    CHECK(base_score > 0.0f && base_score < 1.0f)
      << 'base_score must be in (0,1) for logistic loss';
    return -logf(1.0f / base_score - 1.0f);
  }
  static const char* LabelErrorMsg() {
    return 'label must be in [0,1] for logistic regression';
  }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    
/*! \brief handle to DMatrix */
typedef void *DMatrixHandle;  // NOLINT(*)
/*! \brief handle to Booster */
typedef void *BoosterHandle;  // NOLINT(*)
/*! \brief handle to a data iterator */
typedef void *DataIterHandle;  // NOLINT(*)
/*! \brief handle to a internal data holder. */
typedef void *DataHolderHandle;  // NOLINT(*)
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterGetAttr
 * Signature: (JLjava/lang/String;[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterGetAttr
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jstring jkey, jobjectArray jout) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  const char* key = jenv->GetStringUTFChars(jkey, 0);
  const char* result;
  int success;
  int ret = XGBoosterGetAttr(handle, key, &result, &success);
  //release
  if (key) jenv->ReleaseStringUTFChars(jkey, key);
    }
    
    // Finally register the objective function.
// After it succeeds you can try use xgboost with objective=mylogistic
XGBOOST_REGISTER_OBJECTIVE(MyLogistic, 'mylogistic')
.describe('User defined logistic regression plugin')
.set_body([]() { return new MyLogistic(); });
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    const auto& offset_vec = page.offset.HostVector();
    const auto& data_vec = page.data.HostVector();
    CHECK(page.offset.Size() != 0 && offset_vec[0] == 0);
    CHECK_EQ(offset_vec.back(), page.data.Size());
    fo->Write(offset_vec);
    if (page.data.Size() != 0) {
      fo->Write(dmlc::BeginPtr(data_vec), page.data.Size() * sizeof(Entry));
    }
  }
    
    void SimpleCSRSource::Clear() {
  page_.Clear();
  this->info.Clear();
}
    
    // data
#include '../src/data/data.cc'
#include '../src/data/simple_csr_source.cc'
#include '../src/data/simple_dmatrix.cc'
#include '../src/data/sparse_page_raw_format.cc'
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    
    {  double ret = x * OBJECT_ORIENTATION_ANGEL_RES + OBJECT_ORIENTATION_ANGEL_MIN;
  return ret;
}
    
    Eigen::MatrixXd SplineSegKernel::ThirdOrderDerivativeKernel(
    const uint32_t num_params, const double accumulated_x) {
  if (num_params > reserved_order_ + 1) {
    CalculateThirdOrderDerivative(num_params);
  }
  Eigen::MatrixXd term_matrix;
  IntegratedTermMatrix(num_params, accumulated_x, 'third_order', &term_matrix);
  return (kernel_third_order_derivative_.block(0, 0, num_params, num_params))
      .cwiseProduct(term_matrix);
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // config detail: {'name': 'commanded_value', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 23,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Accelrpt68::commanded_value(const std::uint8_t* bytes,
                                   int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);
    }
    
    void Brakemotorrpt271::Parse(const std::uint8_t* bytes, int32_t length,
                             ChassisDetail* chassis) const {
  chassis->mutable_gem()
      ->mutable_brake_motor_rpt_2_71()
      ->set_encoder_temperature(encoder_temperature(bytes, length));
  chassis->mutable_gem()->mutable_brake_motor_rpt_2_71()->set_motor_temperature(
      motor_temperature(bytes, length));
  chassis->mutable_gem()->mutable_brake_motor_rpt_2_71()->set_angular_speed(
      angular_speed(bytes, length));
}
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
    // config detail: {'name': 'output_value', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 39,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Brakerpt6c::output_value(const std::uint8_t* bytes,
                                int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(0, 8);
    }
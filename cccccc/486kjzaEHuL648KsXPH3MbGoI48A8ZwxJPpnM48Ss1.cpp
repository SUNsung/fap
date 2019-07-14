
        
        float32 b2Polygon::GetArea() {
	// TODO: fix up the areaIsSet caching so that it can be used
	//if (areaIsSet) return area;
	area = 0.0f;
	
	//First do wraparound
	area += x[nVertices-1]*y[0]-x[0]*y[nVertices-1];
	for (int i=0; i<nVertices-1; ++i){
		area += x[i]*y[i+1]-x[i+1]*y[i];
	}
	area *= .5f;
	areaIsSet = true;
	return area;
}
    
    #include 'EtcConfig.h'
#include 'EtcImage.h'
#include 'EtcColor.h'
#include 'EtcErrorMetric.h'
#include <memory>
    
    		// copy source to consecutive memory locations
		// convert from image horizontal scan to block vertical scan
		unsigned int uiPixel = 0;
		for (unsigned int uiBlockPixelH = 0; uiBlockPixelH < Block4x4::COLUMNS; uiBlockPixelH++)
		{
			unsigned int uiSourcePixelH = m_uiSourceH + uiBlockPixelH;
    }
    
    		m_mode = MODE_UNKNOWN;
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
      const InterceptMode intercept_mode_;
  TestPartResultReporterInterface* old_reporter_;
  TestPartResultArray* const result_;
    
    // Next, associate a list of types with the test case, which will be
// repeated for each type in the list.  The typedef is necessary for
// the macro to parse correctly.
typedef testing::Types<char, int, unsigned int> MyTypes;
TYPED_TEST_CASE(FooTest, MyTypes);
    
      // How many ULP's (Units in the Last Place) we want to tolerate when
  // comparing two numbers.  The larger the value, the more error we
  // allow.  A 0 value means that two numbers must be exactly the same
  // to be considered equal.
  //
  // The maximum error of a single floating-point operation is 0.5
  // units in the last place.  On Intel CPU's, all floating-point
  // calculations are done with 80-bit precision, while double has 64
  // bits.  Therefore, 4 should be enough for ordinary use.
  //
  // See the following article for more details on ULP:
  // http://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/
  static const size_t kMaxUlps = 4;
    
    // This is used internally by all instances of linked_ptr<>.  It needs to be
// a non-template class because different types of linked_ptr<> can refer to
// the same object (linked_ptr<Superclass>(obj) vs linked_ptr<Subclass>(obj)).
// So, it needs to be possible for different types of linked_ptr to participate
// in the same circular linked list, so we need a single class type here.
//
// DO NOT USE THIS CLASS DIRECTLY YOURSELF.  Use linked_ptr<T>.
class linked_ptr_internal {
 public:
  // Create a new circle that includes only this instance.
  void join_new() {
    next_ = this;
  }
    }
    
      template <GTEST_4_TYPENAMES_(U)>
  tuple(const GTEST_4_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_) {}
    
    // This event listener monitors how many Water objects are created and
// destroyed by each test, and reports a failure if a test leaks some Water
// objects. It does this by comparing the number of live Water objects at
// the beginning of a test and at the end of a test.
class LeakChecker : public EmptyTestEventListener {
 private:
  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& /* test_info */) {
    initially_allocated_ = Water::allocated();
  }
    }
    
    namespace leveldb {
namespace log {
    }
    }
    
    
    {}  // namespace leveldb
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size / 5 - 1048576);
}
    
    TEST(MemEnvTest, OverwriteOpenFile) {
  const char kWrite1Data[] = 'Write #1 data';
  const size_t kFileDataLen = sizeof(kWrite1Data) - 1;
  const std::string kTestFileName = test::TmpDir() + '/leveldb-TestFile.dat';
    }
    
    class Block {
 public:
  // Initialize the block with the specified contents.
  explicit Block(const BlockContents& contents);
    }
    
      // Write metaindex block
  if (ok()) {
    BlockBuilder meta_index_block(&r->options);
    if (r->filter_block != nullptr) {
      // Add mapping from 'filter.Name' to location of filter data
      std::string key = 'filter.';
      key.append(r->options.filter_policy->Name());
      std::string handle_encoding;
      filter_block_handle.EncodeTo(&handle_encoding);
      meta_index_block.Add(key, handle_encoding);
    }
    }
    
    char* Arena::AllocateAligned(size_t bytes) {
  const int align = (sizeof(void*) > 8) ? sizeof(void*) : 8;
  static_assert((align & (align - 1)) == 0,
                'Pointer size should be a power of 2');
  size_t current_mod = reinterpret_cast<uintptr_t>(alloc_ptr_) & (align - 1);
  size_t slop = (current_mod == 0 ? 0 : align - current_mod);
  size_t needed = bytes + slop;
  char* result;
  if (needed <= alloc_bytes_remaining_) {
    result = alloc_ptr_ + slop;
    alloc_ptr_ += needed;
    alloc_bytes_remaining_ -= needed;
  } else {
    // AllocateFallback always returned aligned memory
    result = AllocateFallback(bytes);
  }
  assert((reinterpret_cast<uintptr_t>(result) & (align - 1)) == 0);
  return result;
}
    
      // Allocate memory with the normal alignment guarantees provided by malloc.
  char* AllocateAligned(size_t bytes);
    
    
    {  Erase(100);
  ASSERT_EQ(-1, Lookup(100));
  ASSERT_EQ(201, Lookup(200));
  ASSERT_EQ(1, deleted_keys_.size());
}
    
                if (operation == IDC_DIV)
            {
                result /= temp;
                if (m_fIntegerMode && (iNumeratorSign * iDenominatorSign) == -1)
                {
                    result = -(Integer(result));
                }
            }
            else
            {
                if (m_fIntegerMode)
                {
                    // Programmer mode, use remrat (remainder after division)
                    result %= temp;
    }
    }
    
    #pragma once
#include 'ExpressionCommandInterface.h'
#include 'Header Files/CalcEngine.h'
#include 'Header Files/Rational.h'
    
        DUPRAT(offset, rat_zero);
    // Scale the number between 1 and e_to_one_half, for the small scale.
    while (rat_gt(*px, e_to_one_half, precision))
    {
        divrat(px, e_to_one_half, precision);
        addrat(&offset, rat_one, precision);
    }
    
    //-----------------------------------------------------------------------------
//  Package Title  ratpak
//  File           itransh.c
//  Copyright      (C) 1995-97 Microsoft
//  Date           01-16-95
//
//
//  Description
//
//    Contains inverse hyperbolic sin, cos, and tan functions.
//
//  Special Information
//
//
//-----------------------------------------------------------------------------
#include 'ratpak.h'
    
    #include <cstddef>
#include <cstdlib>
#include <sstream>
#include <limits>
#include <map>
#include <set>
#include <typeinfo>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
    
    /*!
 * \brief Thread pool.
 */
class ThreadPool {
 public:
  /*! \brief Signal event upon destruction, even for exceptions (RAII) */
  struct SetReadyOnDestroy {
    explicit inline SetReadyOnDestroy(const std::shared_ptr<dmlc::ManualEvent>& event)
      : event_(event) {
    }
    inline ~SetReadyOnDestroy() {
      if (event_) {
        event_->signal();
      }
    }
    std::shared_ptr<dmlc::ManualEvent>  event_;
  };
    }
    
    template<>
void EvalRandom<DEVICE, NegBinomialDistribution>(
    const real_t &k,
    const real_t &p,
    const Resource &resource,
    TBlob *ret,
    RunContext ctx) {
  typedef cpu xpu;  // No support for gpu for this distribution.
  mshadow::Stream<xpu> *s = ctx.get_stream<xpu>();
  switch (ret->type_flag_) {
  case mshadow::kFloat32:
    {
      mshadow::Random<xpu, float> *prnd = resource.get_random<xpu, float>(s);
      mshadow::Tensor<xpu, 2, float> tmp = ret->FlatTo2D<xpu, float>(s);
      prnd->SampleNegativeBinomial(&tmp, float(k), float(p));  // NOLINT(*)
      break;
    }
  case mshadow::kFloat64:
    {
      mshadow::Random<xpu, double> *prnd = resource.get_random<xpu, double>(s);
      mshadow::Tensor<xpu, 2, double> tmp = ret->FlatTo2D<xpu, double>(s);
      prnd->SampleNegativeBinomial(&tmp, double(k), double(p));  // NOLINT(*)
      break;
    }
  default:
    LOG(FATAL) << 'Random only support float32 and float64';
  }
}
    
      // Check all input and output matrices have the same number of rows
  // and the output matrix has the right number of columns
  int nrows = static_cast<int>(out.size(0));
  int ncols = 1;
  for (auto & ts : ts_arr) {
    CHECK_EQ(nrows, static_cast<int>(ts.size(0)))
      << 'All input and output matrices must have the same number of rows.';
    ncols *= ts.size(1);
  }
  CHECK_EQ(ncols, static_cast<int>(out.size(1)));
    
    namespace mxnet {
namespace op {
template<>
Operator *CreateOp<cpu>(NativeOpParam param) {
  return new NativeOp<cpu>(param);
}
    }
    }
    
    
    {
    {NNVM_REGISTER_OP(IdentityAttachKLSparseReg)
.set_attr<nnvm::FSetInputVarAttrOnCompose>('FSetInputVarAttrOnCompose',
    [](const nnvm::NodeAttrs& attrs, nnvm::NodePtr var, const int index) {
      if (var->attrs.dict.find('__init__') != var->attrs.dict.end()) return;
      if (index == 1) {
        var->attrs.dict['__init__'] = '[\'zero\', {}]';
      }
    });
}  // namespace op
}  // namespace mxnet
    
    
    {DMLC_REGISTER_DATA_PARSER(uint32_t, real_t, dense_libsvm,
  data::CreateDenseLibSVMParser<uint32_t __DMLC_COMMA real_t>);
}  // namespace dmlc

    
    /*!
 * \brief Registry entry for Metric factory functions.
 *  The additional parameter const char* param gives the value after @, can be null.
 *  For example, metric map@3, then: param == '3'.
 */
struct MetricReg
    : public dmlc::FunctionRegEntryBase<MetricReg,
                                        std::function<Metric* (const char*)> > {
};
    
      /**
   * \brief Generate batch predictions for a given feature matrix. May use
   * cached predictions if available instead of calculating from scratch.
   *
   * \param [in,out]  dmat        Feature matrix.
   * \param [in,out]  out_preds   The output preds.
   * \param           model       The model to predict from.
   * \param           tree_begin  The tree begin index.
   * \param           ntree_limit (Optional) The ntree limit. 0 means do not
   * limit trees.
   */
    
    struct CoordinateParam : public dmlc::Parameter<CoordinateParam> {
  int top_k;
  DMLC_DECLARE_PARAMETER(CoordinateParam) {
    DMLC_DECLARE_FIELD(top_k)
        .set_lower_bound(0)
        .set_default(0)
        .describe('The number of top features to select in 'thrifty' feature_selector. '
                  'The value of zero means using all the features.');
  }
};
    
      JSON tree;
  s = tree.fromString(carve);
  if (!s.ok()) {
    VLOG(1) << 'Failed to parse carve entries: ' << s.what();
    return;
  }
    
      fs::path const& getWorkingDir() const {
    return working_dir_;
  }
    
    // several restrictions (version, platform, shard)
JSON getRestrictedPack() {
  auto doc = getExamplePacksConfig();
  return JSON::newFromValue(doc.doc()['packs']['restricted_pack']);
}
    
    enum class DatabaseError {
  // Unknown error, currently unused
  Unknown = 1,
  DbIsNotOpen = 2,
  InvalidPath = 3,
  FailToDestroyDB = 4,
  FailToOpenDatabase = 5,
  FailToReadData = 6,
  FailToWriteData = 7,
  KeyNotFound = 8,
  DomainNotFound = 9,
  // Corruption or other unrecoverable error after DB can't be longer used
  // Database should be closed, destroyed and opened again
  // If this error was received during data access, then application
  // is likely to die soon
  // See message and/or underlying error for details
  Panic = 10,
};
    
    namespace osquery {
    }
    
    
    {template <>
std::string lexical_cast<std::string, bool>(const bool& b) {
  std::ostringstream ss;
  ss << std::boolalpha << b;
  return ss.str();
}
}
    
    Status LoggerPlugin::call(const PluginRequest& request,
                          PluginResponse& response) {
  std::vector<StatusLogLine> intermediate_logs;
  if (request.count('string') > 0) {
    return this->logString(request.at('string'));
  } else if (request.count('snapshot') > 0) {
    return this->logSnapshot(request.at('snapshot'));
  } else if (request.count('init') > 0) {
    deserializeIntermediateLog(request, intermediate_logs);
    this->setProcessName(request.at('init'));
    this->init(this->name(), intermediate_logs);
    return Status(0);
  } else if (request.count('status') > 0) {
    deserializeIntermediateLog(request, intermediate_logs);
    return this->logStatus(intermediate_logs);
  } else if (request.count('event') > 0) {
    return this->logEvent(request.at('event'));
  } else if (request.count('action') && request.at('action') == 'features') {
    size_t features = 0;
    features |= (usesLogStatus()) ? LOGGER_FEATURE_LOGSTATUS : 0;
    features |= (usesLogEvent()) ? LOGGER_FEATURE_LOGEVENT : 0;
    return Status(static_cast<int>(features));
  } else {
    return Status(1, 'Unsupported call to logger plugin');
  }
}
    
      /**
   * @brief Attach a table at runtime.
   *
   * The SQL implementation plugin may need to manage how virtual tables are
   * attached at run time. In the case of SQLite where a single DB object is
   * managed, tables are enumerated and attached during initialization.
   */
  virtual Status attach(const std::string& /*name*/) {
    return Status::success();
  }
    
    GTEST_TEST(InMemoryDatabaseTest, test_keys_search) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  ASSERT_FALSE(db->open().isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_1', 1).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_2', 2).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_3', 3).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'kEy_1', 4).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'kEy_2', 5).isError());
  auto result_all = db->getKeys(kPersistentSettings);
  EXPECT_TRUE(result_all);
  EXPECT_EQ((*result_all).size(), 5);
  auto result_some = db->getKeys(kPersistentSettings, 'key');
  EXPECT_TRUE(result_some);
  EXPECT_EQ((*result_some).size(), 3);
}
    
      } else if (type == 'derivative') {
    for (uint32_t r = 1; r < num_params; ++r) {
      for (uint32_t c = 1; c < num_params; ++c) {
        (*term_matrix)(r, c) = x_pow[r + c - 1];
      }
    }
    (*term_matrix).block(0, 0, num_params, 1) =
        Eigen::MatrixXd::Zero(num_params, 1);
    (*term_matrix).block(0, 0, 1, num_params) =
        Eigen::MatrixXd::Zero(1, num_params);
    
    GemMessageManager::GemMessageManager() {
  // Control Messages
  AddSendProtocolData<Accelcmd67, true>();
  AddSendProtocolData<Brakecmd6b, true>();
  AddSendProtocolData<Globalcmd69, true>();
  AddSendProtocolData<Headlightcmd76, true>();
  AddSendProtocolData<Horncmd78, true>();
  AddSendProtocolData<Shiftcmd65, true>();
  AddSendProtocolData<Steeringcmd6d, true>();
  AddSendProtocolData<Turncmd63, true>();
  AddSendProtocolData<Wipercmd90, true>();
    }
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
    
    {  acc.Parse(bytes, length, &chassis_detail);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().manual_input(), 0.258);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().commanded_value(),
                   0.772);
  EXPECT_DOUBLE_EQ(chassis_detail.gem().accel_rpt_68().output_value(), 4.37);
}
    
    using ::apollo::drivers::canbus::Byte;
    
    // config detail: {'name': 'commanded_value', 'enum': {0: 'COMMANDED_VALUE_OFF',
// 1: 'COMMANDED_VALUE_ON'}, 'precision': 1.0, 'len': 8, 'is_signed_var': False,
// 'offset': 0.0, 'physical_range': '[0|1]', 'bit': 15, 'type': 'enum', 'order':
// 'motorola', 'physical_unit': ''}
Horn_rpt_79::Commanded_valueType Hornrpt79::commanded_value(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int32_t x = t0.get_byte(0, 8);
    }
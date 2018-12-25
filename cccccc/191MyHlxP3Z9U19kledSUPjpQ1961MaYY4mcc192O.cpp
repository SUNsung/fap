class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get())));
  return v8::Undefined(isolate);
}
    
    // Call method of an object in browser.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args);
    
    Clipboard::Clipboard(int id,
           const base::WeakPtr<DispatcherHost>& dispatcher_host,
           const base::DictionaryValue& option)
    : Base(id, dispatcher_host, option) {
}
    
       bool HasIcon(int command_id) override;
    
        if (!found) {
      KeyMap::iterator it = keymap.find(upperText);
      if (it != keymap.end()) {
        keyName = it->second;
        found = true;
      }
    }
    
    
    {
    {    std::string error_;
    std::unique_ptr<ui::ScopedClipboardWriter> scw_;
  };
}
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    bool NwObjAllocateIdFunction::RunNWSync(base::ListValue* response, std::string* error) {
  response->AppendInteger(nw::ObjectManager::AllocateId());
  return true;
}
    
      auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = pretransposed_weight
      ? size_from_dim_(canonical_axis_w, GetDimsVector(in[1]))
      : size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    
    {  bool RunOnDevice() override;
};
    
    NO_GRADIENT(GivenTensorFill);
NO_GRADIENT(GivenTensorDoubleFill);
NO_GRADIENT(GivenTensorBoolFill);
NO_GRADIENT(GivenTensorIntFill);
NO_GRADIENT(GivenTensorInt64Fill);
NO_GRADIENT(GivenTensorStringFill);
    
              vector<TensorShape> out(1);
          switch (order) {
            case StorageOrder::NCHW:
              out[0] = CreateTensorShape(
                  vector<int>{N, C * kernel_h * kernel_w, out_h, out_w},
                  TensorProto::FLOAT);
              break;
            case StorageOrder::NHWC:
              out[0] = CreateTensorShape(
                  vector<int>{N, out_h, out_w, kernel_h * kernel_w * C},
                  TensorProto::FLOAT);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    #include <ostream>  // NOLINT
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include 'gtest/internal/gtest-port.h'
#include 'gtest/internal/gtest-internal.h'
    
      // Same as above, but you can choose the interception scope of this object.
  ScopedFakeTestPartResultReporter(InterceptMode intercept_mode,
                                   TestPartResultArray* result);
    
    // Now the tricky part: you need to register all test patterns before
// you can instantiate them.  The first argument of the macro is the
// test case name; the rest are the names of the tests in this test
// case.
REGISTER_TYPED_TEST_CASE_P(FooTest,
                           DoesBlah, HasPropertyA);
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT3.
// Don't use this in your code.
#define GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, v1, v2, v3), \
                on_failure)
    
    // This provides interface PrimeTable that determines whether a number is a
// prime and determines a next prime number. This interface is used
// in Google Test samples demonstrating use of parameterized tests.
    
    
    {  return clone;
}
    
    
// A simple string class.
class MyString {
 private:
  const char* c_string_;
  const MyString& operator=(const MyString& rhs);
    }
    
    #include 'joint_bullet.h'
    
    
    {	ERR_EXPLAINC('There are still MemoryPool allocs in use at exit!');
	ERR_FAIL_COND(allocs_used > 0);
}

    
    class FileAccess;
    
    	virtual Error init() { return OK; }
	virtual void start(){};
	virtual int get_mix_rate() const { return DEFAULT_MIX_RATE; };
	virtual SpeakerMode get_speaker_mode() const { return SPEAKER_MODE_STEREO; };
	virtual void lock(){};
	virtual void unlock(){};
	virtual void finish(){};
    
    UnicodeString &ScriptSet::displayScripts(UnicodeString &dest) const {
    UBool firstTime = TRUE;
    for (int32_t i = nextSetBit(0); i >= 0; i = nextSetBit(i + 1)) {
        if (!firstTime) {
            dest.append((UChar)0x20);
        }
        firstTime = FALSE;
        const char *scriptName = uscript_getShortName((UScriptCode(i)));
        dest.append(UnicodeString(scriptName, -1, US_INV));
    }
    return dest;
}
    
    #endif // __SCRIPTSET_H__

    
    int32_t SearchIterator::previous(UErrorCode &status)
{
    if (U_SUCCESS(status)) {
        int32_t offset;
        if (m_search_->reset) {
            offset                       = m_search_->textLength;
            m_search_->isForwardSearching = FALSE;
            m_search_->reset              = FALSE;
            setOffset(offset, status);
        }
        else {
            offset = getOffset();
        }
        
        int32_t matchindex = m_search_->matchedIndex;
        if (m_search_->isForwardSearching == TRUE) {
            // switching direction. 
            // if matchedIndex == USEARCH_DONE, it means that either a 
            // setOffset has been called or that next ran off the text
            // string. the iterator would have been set to offset textLength if 
            // a match is not found.
            m_search_->isForwardSearching = FALSE;
            if (matchindex != USEARCH_DONE) {
                return matchindex;
            }
        }
        else {
            if (offset == 0 || matchindex == 0) {
                // not enough characters to match
                setMatchNotFound();
                return USEARCH_DONE; 
            }
        }
    }
    }
    
    
SimpleDateFormatStaticSets::~SimpleDateFormatStaticSets() {
    delete fDateIgnorables;  fDateIgnorables = NULL;
    delete fTimeIgnorables;  fTimeIgnorables = NULL;
    delete fOtherIgnorables; fOtherIgnorables = NULL;
}
    
    static const UChar gZero[] = { 0x7A, 0x65, 0x72, 0x6F };
static const UChar gOne[] = { 0x6F, 0x6E, 0x65 };
static const UChar gTwo[] = { 0x74, 0x77, 0x6F };
static const UChar gFew[] = { 0x66, 0x65, 0x77 };
static const UChar gMany[] = { 0x6D, 0x61, 0x6E, 0x79 };
static const UChar gOther[] = { 0x6F, 0x74, 0x68, 0x65, 0x72 };
    
        /**
     * Implement UnicodeMatcher
     * @param text the text to be matched
     * @param offset on input, the index into text at which to begin
     * matching.  On output, the limit of the matched text.  The
     * number of matched characters is the output value of offset
     * minus the input value.  Offset should always point to the
     * HIGH SURROGATE (leading code unit) of a pair of surrogates,
     * both on entry and upon return.
     * @param limit the limit index of text to be matched.  Greater
     * than offset for a forward direction match, less than offset for
     * a backward direction match.  The last character to be
     * considered for matching will be text.charAt(limit-1) in the
     * forward direction or text.charAt(limit+1) in the backward
     * direction.
     * @param incremental  if TRUE, then assume further characters may
     * be inserted at limit and check for partial matching.  Otherwise
     * assume the text as given is complete.
     * @return a match degree value indicating a full match, a partial
     * match, or a mismatch.  If incremental is FALSE then
     * U_PARTIAL_MATCH should never be returned.
     */
    virtual UMatchDegree matches(const Replaceable& text,
                                 int32_t& offset,
                                 int32_t limit,
                                 UBool incremental);
    
    
    {  // Update the DB to reflect that the carve is pending.
  updateCarveValue(carveGuid_, 'status', 'PENDING');
};
    
    void Schedule::removeAll(const std::string& source) {
  auto new_end =
      std::remove_if(packs_.begin(), packs_.end(), [source](const PackRef& p) {
        if (p->getSource() == source) {
          Config::get().removeFiles(source + FLAGS_pack_delimiter +
                                    p->getName());
          return true;
        }
        return false;
      });
  packs_.erase(new_end, packs_.end());
}
    
     public:
  ATCPlugin(const std::string& path,
            const TableColumns& tc_columns,
            const std::string& sqlite_query)
      : tc_columns_(tc_columns), sqlite_query_(sqlite_query), path_(path) {}
    
    Status FeatureVectorsConfigParserPlugin::update(const std::string& source,
                                                const ParserConfig& config) {
  auto fv = config.find(kFeatureVectorsRootKey);
  if (fv == config.end()) {
    return Status();
  }
    }
    
      if (config.count('file_paths_query') > 0) {
    // We know this top-level is an Object.
    const auto& path_query_node = config.at('file_paths_query').doc();
    if (path_query_node.IsObject()) {
      for (const auto& category : path_query_node.GetObject()) {
        if (category.value.IsArray()) {
          std::string name = category.name.GetString();
          for (const auto& query : category.value.GetArray()) {
            auto sql = SQL(query.GetString());
            if (!sql.ok()) {
              LOG(ERROR) << 'Could not add file_paths using file_paths_query ''
                         << query.GetString()
                         << '': ' << sql.getMessageString();
            } else {
              for (const auto& row : sql.rows()) {
                auto pathIt = row.find('path');
                if (pathIt == row.end()) {
                  LOG(ERROR) << 'Cold not find non-empty 'path' column in the '
                                'results of file_paths_query ''
                             << query.GetString();
                } else {
                  std::string path = pathIt->second;
                  replaceGlobWildcards(path);
                  Config::get().addFile(source, name, path);
                }
              }
            }
          }
        }
      }
    }
  }
    
    Status KafkaTopicsConfigParserPlugin::update(const std::string& source,
                                             const ParserConfig& config) {
  auto topics = config.find(kKafkaTopicParserRootKey);
  if (topics != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(topics->second.doc(), obj);
    data_.add(kKafkaTopicParserRootKey, obj);
  }
  return Status();
}
    
    namespace osquery {
    }
    
    
    {} // namespace osquery

    
    #include <set>
    
    Status PrometheusMetricsConfigParserPlugin::update(const std::string& source,
                                                   const ParserConfig& config) {
  auto prometheus_targets = config.find(kPrometheusParserRootKey);
  if (prometheus_targets != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(prometheus_targets->second.doc(), obj);
    data_.add(kPrometheusParserRootKey, obj);
  }
    }
    
    DECLARE_bool(disable_database);
    
        // We should have a property tree of pack content mimicking embedded
    // configuration packs, ready to parse as a string.
    std::ostringstream output;
    pt::write_json(output, multi_pack, false);
    pack = output.str();
    if (pack.empty()) {
      return Status(1, 'Multi-pack content empty');
    }
    
    
#if (!defined(__GNUC__) && !defined(__clang__)) || defined(__pnacl__) || \
    defined(EMSCRIPTN)
# define BENCHMARK_HAS_NO_INLINE_ASSEMBLY
#endif
    
    #include 'internal_macros.h'
    
    bool IsZero(double n);
    
    #define CHECK_EQ(a, b) CHECK((a) == (b))
#define CHECK_NE(a, b) CHECK((a) != (b))
#define CHECK_GE(a, b) CHECK((a) >= (b))
#define CHECK_LE(a, b) CHECK((a) <= (b))
#define CHECK_GT(a, b) CHECK((a) > (b))
#define CHECK_LT(a, b) CHECK((a) < (b))
    
    #ifndef COMPLEXITY_H_
#define COMPLEXITY_H_
    
      // Format items per second
  std::string items;
  if (result.items_per_second > 0) {
    items =
        StrCat(' ', HumanReadableNumber(result.items_per_second), ' items/s');
  }
    
          // regerror returns the number of bytes necessary to null terminate
      // the string, so we move that when assigning to error.
      CHECK_NE(needed, 0);
      error->assign(errbuf, needed - 1);
    
    
    {  EsdCanClient esd_can_client;
  EXPECT_TRUE(esd_can_client.Init(param));
  EXPECT_EQ(esd_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(esd_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(esd_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(esd_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  esd_can_client.Stop();
}
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
      x <<= 3;
  x |= t;
    
    int ObjectQualityInfo60C::object_id(const std::uint8_t* bytes,
                                    int32_t length) const {
  Byte t0(bytes);
  int32_t x = t0.get_byte(0, 8);
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      pnc_map_->adc_waypoint_.s = 100;
  pnc_map_->UpdateNextRoutingWaypointIndex(14);
  EXPECT_EQ(3, pnc_map_->next_routing_waypoint_index_);
    
    void BackupTrajectoryGenerator::GenerateTrajectory1dPairs(
    const State& init_s, const State& init_d) {
  std::vector<std::shared_ptr<Curve1d>> lon_trajectories;
  std::array<double, 5> dds_condidates = {-0.1, -1.0, -2.0, -3.0, -4.0};
  for (const auto dds : dds_condidates) {
    lon_trajectories.emplace_back(
        new ConstantDecelerationTrajectory1d(init_s[0], init_s[1], dds));
  }
    }
    
        TrajectoryPoint trajectory_point;
    trajectory_point.mutable_path_point()->set_x(x);
    trajectory_point.mutable_path_point()->set_y(y);
    trajectory_point.mutable_path_point()->set_s(accumulated_trajectory_s);
    trajectory_point.mutable_path_point()->set_theta(theta);
    trajectory_point.mutable_path_point()->set_kappa(kappa);
    trajectory_point.set_v(v);
    trajectory_point.set_a(a);
    trajectory_point.set_relative_time(t_param + init_relative_time);
    
    
    {  EXPECT_EQ(bd, bd_golden);
}
    
    void Spline1dSeg::SetSplineFunc(const PolynomialXd& spline_func) {
  spline_func_ = spline_func;
  derivative_ = PolynomialXd::DerivedFrom(spline_func_);
  second_order_derivative_ = PolynomialXd::DerivedFrom(derivative_);
  third_order_derivative_ = PolynomialXd::DerivedFrom(second_order_derivative_);
}
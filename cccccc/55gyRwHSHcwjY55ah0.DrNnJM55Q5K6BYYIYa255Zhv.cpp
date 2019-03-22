
        
          static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    namespace nw {
    }
    
    void Menu::Remove(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.erase(begin+pos);
  gtk_container_remove(GTK_CONTAINER(menu_), menu_item->menu_item_);
}
    
    class NwClipboardReadAvailableTypesFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardReadAvailableTypesFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
      NwDesktopCaptureMonitor::NwDesktopCaptureMonitor()
      : started_(false) {
  }
    
    // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google
#endif  // GOOGLE_PROTOBUF_PYTHON_CPP_SCOPED_PYOBJECT_PTR_H__

    
    #endif  // LANG_CXX11
    
      desired_output_for_decode = 'abcdefghIJ';
  expected = string('\x0A\x0', 2);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    TEST(ByteSourceTest, CopyToStringByteSink) {
  StringPiece data('Hello world!');
  MockByteSource source(data, 3);
  string str;
  StringByteSink sink(&str);
  source.CopyTo(&sink, data.size());
  EXPECT_EQ(data, str);
}
    
    #endif  // GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_

    
    namespace c10d {
namespace test {
    }
    }
    
    REGISTER_CPU_OPERATOR(
    MergeMultiMapFeatureTensors,
    MergeMultiMapFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeMultiMapFeatureTensors)
    .SetDoc(
        'Merge given multi-feature tensors with map features into one.' + doc)
    .NumInputs([](int n) { return n >= 5 && n % 5 == 0; })
    .NumOutputs(5)
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_keys', '.keys')
    .Input(2, 'in1_values_lengths', '.values.lengths')
    .Input(3, 'in1_values_keys', '.values.keys')
    .Input(4, 'in1_values_values', '.values.values')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values_lengths', '.values_lengths')
    .Output(3, 'out_values_keys', '.values.keys')
    .Output(4, 'out_values_values', '.values.values');
    
    Example 1:
  DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
  RANGES = [
    [
      [2, 4],
      [0, 2],
    ],
    [
      [0, 0],
      [6, 2],
    ]
  ]
  lengths = [4, 2]
  OUTPUT[0] = [[3, 4, 5, 6], [0, 0, 0, 0]]
  OUTPUT[1] = [[1, 2], [7, 8]]
    
    *Note: Do not set the shape argument and pass in an input at the same time.*
    
    
    {REGISTER_CPU_OPERATOR(Glu, GluOp<float, CPUContext>);
} // namespace caffe2

    
    template <typename T>
internal::ParamGenerator<T> Range(T start, T end) {
  return Range(start, end, 1);
}
    
    #include <ostream>  // NOLINT
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include 'gtest/internal/gtest-port.h'
#include 'gtest/internal/gtest-internal.h'
    
    // This helper class is used by {ASSERT|EXPECT}_NO_FATAL_FAILURE to check if a
// statement generates new fatal failures. To do so it registers itself as the
// current test part result reporter. Besides checking if fatal failures were
// reported, it only delegates the reporting to the former result reporter.
// The original result reporter is restored in the destructor.
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
class GTEST_API_ HasNewFatalFailureHelper
    : public TestPartResultReporterInterface {
 public:
  HasNewFatalFailureHelper();
  virtual ~HasNewFatalFailureHelper();
  virtual void ReportTestPartResult(const TestPartResult& result);
  bool has_new_fatal_failure() const { return has_new_fatal_failure_; }
 private:
  bool has_new_fatal_failure_;
  TestPartResultReporterInterface* original_reporter_;
    }
    
    TYPED_TEST(FooTest, HasPropertyA) { ... }
    
    // Factory interface for death tests.  May be mocked out for testing.
class DeathTestFactory {
 public:
  virtual ~DeathTestFactory() { }
  virtual bool Create(const char* statement, const RE* regex,
                      const char* file, int line, DeathTest** test) = 0;
};
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_

    
      CartesianProductGenerator9(const ParamGenerator<T1>& g1,
      const ParamGenerator<T2>& g2, const ParamGenerator<T3>& g3,
      const ParamGenerator<T4>& g4, const ParamGenerator<T5>& g5,
      const ParamGenerator<T6>& g6, const ParamGenerator<T7>& g7,
      const ParamGenerator<T8>& g8, const ParamGenerator<T9>& g9)
      : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6), g7_(g7), g8_(g8),
          g9_(g9) {}
  virtual ~CartesianProductGenerator9() {}
    
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
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
      // The default c'tor constructs a NULL string.
  MyString() : c_string_(NULL) {}
    
        // Make sure that the dictionary contains all required keys, and if it does, return version value
    // from the dictionary.
    template <typename T>
    inline size_t ValidateDictionary(const Dictionary& dict, const std::vector<std::wstring>& requiredKeys, const std::wstring& typeValue, size_t currentVersion)
    { 
        const auto& version = GetVersion(dict);
    }
    
            std::wstring AsString() const;
        std::shared_ptr<VariableFields> Clone() const;
        FunctionPtr Owner() const;
    
    #include 'CalculatorResource.h'
    
    using namespace CalculatorApp;
using namespace CalculatorApp::Common;
using namespace Platform;
using namespace Platform::Collections;
using namespace std;
using namespace Windows::Foundation::Collections;
    
    DependencyObject^ SupplementaryItemsControl::GetContainerForItemOverride()
{
    return ref new SupplementaryContentPresenter();
}
    
            DEPENDENCY_PROPERTY_OWNER(Calculator);
        DEPENDENCY_PROPERTY_WITH_DEFAULT_AND_CALLBACK(bool, IsStandard, false);
        DEPENDENCY_PROPERTY_WITH_DEFAULT_AND_CALLBACK(bool, IsScientific, false);
        DEPENDENCY_PROPERTY_WITH_DEFAULT_AND_CALLBACK(bool, IsProgrammer, false);
    
        private:
        void OnAngleButtonPressed(_In_ Platform::Object^ commandParameter);
        void FToEButton_Toggled(_In_ Platform::Object^ sender, _In_ Windows::UI::Xaml::RoutedEventArgs^ e);
        void HypButton_Toggled(_In_ Platform::Object^ sender, _In_ Windows::UI::Xaml::RoutedEventArgs^ e);
    
    
    {
    {    private:
        bool m_isErrorVisualState;
    };
}

    
    
    {    // exception out_of_range.401
    try
    {
        // try to write beyond the array limit
        array.at(5) = 'sixth';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    
    // out_of_range.106
    try
    {
        // try to use an array index with leading '0'
        json::reference ref = j.at('/array/01'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // output element with JSON pointer '/number'
    std::cout << j.at('/number'_json_pointer) << '\n';
    // output element with JSON pointer '/string'
    std::cout << j.at('/string'_json_pointer) << '\n';
    // output element with JSON pointer '/array'
    std::cout << j.at('/array'_json_pointer) << '\n';
    // output element with JSON pointer '/array/1'
    std::cout << j.at('/array/1'_json_pointer) << '\n';
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    
    {  int ret = x;
  return ret;
}
    
    void RadarState201::Parse(const std::uint8_t* bytes, int32_t length,
                          ContiRadar* conti_radar) const {
  auto state = conti_radar->mutable_radar_state();
  state->set_max_distance(max_dist(bytes, length));
  state->set_output_type(output_type(bytes, length));
  state->set_rcs_threshold(rcs_threshold(bytes, length));
  state->set_radar_power(radar_power(bytes, length));
  state->set_send_quality(send_quality(bytes, length));
  state->set_send_ext_info(send_ext_info(bytes, length));
}
    
    
    {  EXPECT_EQ(bd, bd_golden);
}
    
    Eigen::MatrixXd SplineSegKernel::SecondOrderDerivativeKernel(
    const uint32_t num_params, const double accumulated_x) {
  if (num_params > reserved_order_ + 1) {
    CalculateSecondOrderDerivative(num_params);
  }
  Eigen::MatrixXd term_matrix;
  IntegratedTermMatrix(num_params, accumulated_x, 'second_order', &term_matrix);
  return kernel_second_order_derivative_.block(0, 0, num_params, num_params)
      .cwiseProduct(term_matrix);
}
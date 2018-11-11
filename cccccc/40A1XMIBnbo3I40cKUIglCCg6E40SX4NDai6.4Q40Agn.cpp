
        
          std::vector<string> output;
  string input_tensors_needed_out;
  tensorflow::Status status = RunCppShapeInferenceImpl(
      graph_def_version, serialized_node_def, input_serialized_shapes,
      input_constant_tensor_values_v, input_constant_tensor_as_shape_values,
      &output, &input_tensors_needed_out);
    
    
    {  total_time_measured_serialized_ = 0;
  total_time_analytical_upper_ = 0;
  total_time_analytical_lower_ = 0;
  for (const auto& op : ops_) {
    total_time_measured_serialized_ += op.time;
    total_time_analytical_upper_ += op.time_upper;
    total_time_analytical_lower_ += op.time_lower;
  }
}
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    #include 'tensorflow/core/framework/numeric_types.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/logging.h'
#include 'tensorflow/python/lib/core/numpy.h'
#include 'tensorflow/python/lib/core/safe_ptr.h'
    
    // Creates a tensor in 'ret' from the input Ndarray.
Status NdarrayToTensor(PyObject* obj, Tensor* ret);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    namespace cuda {
    }
    
    namespace stream_executor {
namespace cuda {
    }
    }
    
    void AutoUpdater::OnError(const std::string& message,
                          const int code,
                          const std::string& domain) {
  v8::Locker locker(isolate());
  v8::HandleScope handle_scope(isolate());
  auto error = v8::Exception::Error(mate::StringToV8(isolate(), message));
  auto errorObject =
      error->ToObject(isolate()->GetCurrentContext()).ToLocalChecked();
    }
    
    #include 'atom/browser/api/event_emitter.h'
#include 'atom/browser/auto_updater.h'
#include 'atom/browser/window_list_observer.h'
#include 'native_mate/arguments.h'
#include 'native_mate/handle.h'
    
    scoped_refptr<TracingController::TraceDataEndpoint> GetTraceDataEndpoint(
    const base::FilePath& path,
    const CompletionCallback& callback) {
  base::FilePath result_file_path = path;
  if (result_file_path.empty() && !base::CreateTemporaryFile(&result_file_path))
    LOG(ERROR) << 'Creating temporary file failed';
    }
    
    
    {}  // namespace api
    
    
    {}  // namespace api
    
    class Tray : public mate::TrackableObject<Tray>, public TrayIconObserver {
 public:
  static mate::WrappableBase* New(mate::Handle<NativeImage> image,
                                  mate::Arguments* args);
    }
    
    #include 'components/download/public/common/download_item.h'
#include 'content/public/browser/download_manager.h'
#include 'content/public/browser/save_page_type.h'
#include 'v8/include/v8.h'
    
    AtomQuotaPermissionContext::AtomQuotaPermissionContext() {}
    
    #ifndef ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
#define ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
    
    namespace caffe2 {
std::vector<TensorShape> FCShapeInference(
    const OperatorDef& def,
    const vector<TensorShape>& in,
    bool pretransposed_weight) {
  vector<TensorShape> out(1);
  ArgumentHelper helper(def);
    }
    }
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / 2; ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * 2 + 1));
      output_blob_names.push_back(GI(inputIdx * 2));
    }
    input_blob_names.push_back(GO(2));
    
    <summary> <b>Example</b> </summary>
    
    
    {  bool RunOnDevice() override;
};
    
    #include 'caffe2/utils/math.h'
    
    Example 2 (with KEY):
DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
KEY   = [0, 1, 3, 2, 1, 0, 1, 0]
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
OUTPUT[0] = [[6, 5, 4, 3], [0, 0, 0, 0]]
OUTPUT[1] = [[1, 2], [8, 7]]
    
    
    {          return out;
        });
OPERATOR_SCHEMA(Float16ConstantFill)
    .NumInputs(0)
    .NumOutputs(1)
    .TensorInferenceFunction(Float16FillerTensorInference)
    .Arg('value', 'The value for the elements of the output tensor.')
    .Arg('shape', 'The shape of the output tensor.')
    .Output(
        0,
        'output',
        'Output tensor of constant values specified by 'value'');
    
    class GetIm2ColGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Col2Im',
        '',
        std::vector<string>{GO(0), I(0)},
        std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Im2Col, GetIm2ColGradient);
    
    
    {    state.SetBytesProcessed(state.iterations() * str.size());
}
BENCHMARK_CAPTURE(ParseString, jeopardy,      'data/jeopardy/jeopardy.json');
BENCHMARK_CAPTURE(ParseString, canada,        'data/nativejson-benchmark/canada.json');
BENCHMARK_CAPTURE(ParseString, citm_catalog,  'data/nativejson-benchmark/citm_catalog.json');
BENCHMARK_CAPTURE(ParseString, twitter,       'data/nativejson-benchmark/twitter.json');
BENCHMARK_CAPTURE(ParseString, floats,        'data/numbers/floats.json');
BENCHMARK_CAPTURE(ParseString, signed_ints,   'data/numbers/signed_ints.json');
BENCHMARK_CAPTURE(ParseString, unsigned_ints, 'data/numbers/unsigned_ints.json');
    
    #ifndef BENCHMARK_HAS_CXX11
#define BENCHMARK_DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&);                         \
  TypeName& operator=(const TypeName&)
#else
#define BENCHMARK_DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&) = delete;                \
  TypeName& operator=(const TypeName&) = delete
#endif
    
    namespace benchmark {
namespace internal {
// The arraysize(arr) macro returns the # of elements in an array arr.
// The expression is a compile-time constant, and therefore can be
// used in defining new arrays, for example.  If you use arraysize on
// a pointer by mistake, you will get a compile-time error.
//
    }
    }
    
    
    {
    {    if (b.use_manual_time) {
      report.real_accumulated_time = results.manual_time_used;
    } else {
      report.real_accumulated_time = results.real_time_used;
    }
    report.cpu_accumulated_time = results.cpu_time_used;
    report.bytes_per_second = bytes_per_second;
    report.items_per_second = items_per_second;
    report.complexity_n = results.complexity_n;
    report.complexity = b.complexity;
    report.complexity_lambda = b.complexity_lambda;
    report.statistics = b.statistics;
    report.counters = results.counters;
    internal::Finish(&report.counters, seconds, b.threads);
  }
  return report;
}
    
    
    {  fflush(stdout);
  // Restores the text color.
  SetConsoleTextAttribute(stdout_handle, old_color_attrs);
#else
  const char* color_code = GetPlatformColorCode(color);
  if (color_code) out << FormatString('\033[0;3%sm', color_code);
  out << FormatString(fmt, args) << '\033[m';
#endif
}
    
    
    {  printer(Out, COLOR_DEFAULT, '\n');
}
    
    double BenchmarkReporter::Run::GetAdjustedCPUTime() const {
  double new_time = cpu_accumulated_time * GetTimeUnitMultiplier(time_unit);
  if (iterations != 0) new_time /= static_cast<double>(iterations);
  return new_time;
}
    
        static BOOST_FORCEINLINE void fence_before_store(memory_order order) BOOST_NOEXCEPT
    {
        BOOST_ATOMIC_DETAIL_COMPILER_BARRIER();
    }
    
    BOOST_FORCEINLINE void pause() BOOST_NOEXCEPT
{
#if defined(_MSC_VER) && (defined(_M_AMD64) || defined(_M_IX86))
    _mm_pause();
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
    __asm__ __volatile__('pause;');
#endif
}

        
        
    {    return SingleGradientDef(
        'MergeMultiListFeatureTensorsGradient',
        '',
        input_blob_names,
        output_blob_names);
  }
    
    - https://github.com/caffe2/caffe2/blob/master/caffe2/operators/find_duplicate_elements_op.h
- https://github.com/caffe2/caffe2/blob/master/caffe2/operators/find_duplicate_elements_op.cc
    
    <summary> <b>Example</b> </summary>
    
    namespace caffe2 {
    }
    
    class GetFloatToHalfGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'HalfToFloat', '', vector<string>{GO(0)}, vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(FloatToHalf, GetFloatToHalfGradient);
    
      // Equivalent to Args({x, y})
  // NOTE: This is a legacy C++03 interface provided for compatibility only.
  //   New code should use 'Args'.
  Benchmark* ArgPair(int x, int y) {
    std::vector<int> args;
    args.push_back(x);
    args.push_back(y);
    return Args(args);
  }
    
    #include 'benchmark/benchmark.h'
#include 'benchmark_api_internal.h'
#include 'internal_macros.h'
    
    // Returns the name of the environment variable corresponding to the
// given flag.  For example, FlagToEnvVar('foo') will return
// 'BENCHMARK_FOO' in the open-source version.
static std::string FlagToEnvVar(const char* flag) {
  const std::string flag_str(flag);
    }
    
    // Parses a bool/Int32/string from the environment variable
// corresponding to the given Google Test flag.
bool BoolFromEnv(const char* flag, bool default_val);
int32_t Int32FromEnv(const char* flag, int32_t default_val);
double DoubleFromEnv(const char* flag, double default_val);
const char* StringFromEnv(const char* flag, const char* default_val);
    
    void CSVReporter::PrintRunData(const Run & run) {
  std::ostream& Out = GetOutputStream();
    }
    
    double BenchmarkReporter::Run::GetAdjustedCPUTime() const {
  double new_time = cpu_accumulated_time * GetTimeUnitMultiplier(time_unit);
  if (iterations != 0) new_time /= static_cast<double>(iterations);
  return new_time;
}
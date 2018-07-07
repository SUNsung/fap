void PartialRunMgr::PartialRunDone(int step_id, StatusCallback done,
                                   const Status& status) {
  Status callback_status;
  {
    mutex_lock l(mu_);
    auto run_it = step_id_to_partial_run_.find(step_id);
    if (run_it == step_id_to_partial_run_.end()) {
      return;
    }
    run_it->second->final_status.Update(status);
    if (!run_it->second->executor_done) {
      // If we found the partial_run, we set the final callback to call only
      // when the executor is completely done.
      run_it->second->final_callback = std::move(done);
      return;
    }
    callback_status = run_it->second->final_status;
  }
  // Otherwise we call the callback immediately.
  done(callback_status);
  mutex_lock l(mu_);
  step_id_to_partial_run_.erase(step_id);
}
    
    #include 'tensorflow/core/framework/register_types.h'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/kernels/cuda_device_array_gpu.h'
#include 'tensorflow/core/util/cuda_kernel_helper.h'
    
    MPIUtils::MPIUtils(const std::string& worker_name) {
  InitMPI();
  // Connect the MPI process IDs to the worker names that are used by TF.
  // Gather the names of all the active processes (name can't be longer than
  // 128 bytes)
  int proc_id = 0, number_of_procs = 1;
  char my_name[max_worker_name_length];
  MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
  MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    }
    
    // Cwise binary ops
//
// TODO(zhifengc): This can be arrange as a function in the standard
// library.
Status GradForBinaryCwise(FunctionDef* g, std::vector<FDH::Node> body) {
  // clang-format off
  std::vector<FDH::Node> nodes = {
    {{'sx'}, 'Shape', {'x'}},
    {{'sy'}, 'Shape', {'y'}},
  };
  nodes.insert(nodes.end(), body.begin(), body.end());
  std::vector<FDH::Node> reshapes = {
    {{'rx', 'ry'}, 'BroadcastGradientArgs', {'sx', 'sy'}},
    {{'sum_gx'}, 'Sum', {'gx', 'rx'}},
    {{'dx'}, 'Reshape', {'sum_gx', 'sx'}},
    {{'sum_gy'}, 'Sum', {'gy', 'ry'}},
    {{'dy'}, 'Reshape', {'sum_gy', 'sy'}},
  };
  nodes.insert(nodes.end(), reshapes.begin(), reshapes.end());
    }
    
    #ifndef TENSORFLOW_LIB_IO_ZLIB_COMPRESSION_OPTIONS_H_
#define TENSORFLOW_LIB_IO_ZLIB_COMPRESSION_OPTIONS_H_
    
    
    {  stats->how_many_false_positives = 0;
  stats->how_many_correct_words = 0;
  stats->how_many_wrong_words = 0;
  std::unordered_set<int64> has_ground_truth_been_matched;
  for (const std::pair<string, int64>& found_word : found_words) {
    const string& found_label = found_word.first;
    const int64 found_time = found_word.second;
    const int64 earliest_time = found_time - time_tolerance_ms;
    const int64 latest_time = found_time + time_tolerance_ms;
    bool has_match_been_found = false;
    for (const std::pair<string, int64>& ground_truth : ground_truth_list) {
      const int64 ground_truth_time = ground_truth.second;
      if ((ground_truth_time > latest_time) ||
          (ground_truth_time > latest_possible_time)) {
        break;
      }
      if (ground_truth_time < earliest_time) {
        continue;
      }
      const string& ground_truth_label = ground_truth.first;
      if ((ground_truth_label == found_label) &&
          (has_ground_truth_been_matched.count(ground_truth_time) == 0)) {
        ++stats->how_many_correct_words;
      } else {
        ++stats->how_many_wrong_words;
      }
      has_ground_truth_been_matched.insert(ground_truth_time);
      has_match_been_found = true;
      break;
    }
    if (!has_match_been_found) {
      ++stats->how_many_false_positives;
    }
  }
  stats->how_many_ground_truth_matched = has_ground_truth_been_matched.size();
}
    
      Tensor indices;
  Tensor scores;
  GetTopLabels(outputs, how_many_labels, &indices, &scores);
  tensorflow::TTypes<float>::Flat scores_flat = scores.flat<float>();
  tensorflow::TTypes<int32>::Flat indices_flat = indices.flat<int32>();
  for (int pos = 0; pos < how_many_labels; ++pos) {
    const int label_index = indices_flat(pos);
    const float score = scores_flat(pos);
    LOG(INFO) << labels_list[label_index] << ' (' << label_index
              << '): ' << score;
  }
    
    // If non-zero, the library uses exceptions to report bad input instead of C
// assertion macros. The default is to use exceptions.
#ifndef JSON_USE_EXCEPTION
#define JSON_USE_EXCEPTION 1
#endif
    
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
    
    #include <string>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    #include <google/protobuf/descriptor.h>
    
    
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
    
    ImmutableGeneratorFactory::ImmutableGeneratorFactory(
    Context* context) : context_(context) {
}
ImmutableGeneratorFactory::~ImmutableGeneratorFactory() {}
    
    // dims=[5, 4, 3, 2]->[5, 3, 2, 4]
TEST_F(MatrixTest, RotatingTranspose_1_3) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 1, 3, &m);
  m.ResizeNoInit(kInputSize_ / 4, 4);
  // Verify that the result is:
  // output tensor=[[[[0, 6, 12, 18][1, 7, 13, 19]]
  //                 [[2, 8, 14, 20][3, 9, 15, 21]]
  //                 [[4, 10, 16, 22][5, 11, 17, 23]]]
  //                [[[24, 30, 36, 42]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(6, m(0, 1));
  EXPECT_EQ(1, m(1, 0));
  EXPECT_EQ(2, m(2, 0));
  EXPECT_EQ(3, m(3, 0));
  EXPECT_EQ(4, m(4, 0));
  EXPECT_EQ(5, m(5, 0));
  EXPECT_EQ(24, m(6, 0));
  EXPECT_EQ(30, m(6, 1));
}
    
    struct Pix;
    
    void set_global_subsubloc_code(int loc_code);
#endif

    
    #include 'validator.h'
    
    /*
 * Determine the next NUMA node according to state maintained in `curr_node`.
 */
int next_numa_node(std::atomic_int& curr_node);
/*
 * The number of numa nodes in the system
 */
inline int num_numa_nodes() {
  return use_numa ? numa_num_nodes : 1;
}
/*
 * Enable numa interleaving for the specified address range
 */
void numa_interleave(void* start, size_t size);
/*
 * Allocate the specified address range on the given node
 */
void numa_bind_to(void* start, size_t size, int node);
/*
 * Return true if node is part of the allowed set of numa nodes
 */
inline bool numa_node_allowed(int node) {
  if (numa_node_set == 0) return true;
  return numa_node_set & (1u << node);
}
    
    using Address          = uint8_t*;
using CodeAddress      = uint8_t*;
using ConstCodeAddress = const uint8_t*;
    
    
    {  bool waitImpl(int id, int q, Priority pri, timespec *ts);
};
    
    
    
    
    
    
    
    
    
    
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,'cc.PhysicsBody',0,&tolua_err)) goto tolua_lerror;
#endif
    
        virtual void DrawSolidPolygon(const b2Vec2* vertices, int vertexCount, const b2Color& color);
    
    			jd.Initialize(m_car, m_wheel1, m_wheel1->GetPosition(), axis);
			jd.motorSpeed = 0.0f;
			jd.maxMotorTorque = 20.0f;
			jd.enableMotor = true;
			jd.frequencyHz = m_hz;
			jd.dampingRatio = m_zeta;
			m_spring1 = (b2WheelJoint*)m_world->CreateJoint(&jd);
    
    
    {
    {}  // end namespace internal
}  // end namespace benchmark
    
    // Information kept per benchmark we may want to run
struct Benchmark::Instance {
  std::string name;
  Benchmark* benchmark;
  ReportMode report_mode;
  std::vector<int> arg;
  TimeUnit time_unit;
  int range_multiplier;
  bool use_real_time;
  bool use_manual_time;
  BigO complexity;
  BigOFunc* complexity_lambda;
  UserCounters counters;
  const std::vector<Statistics>* statistics;
  bool last_benchmark_instance;
  int repetitions;
  double min_time;
  size_t iterations;
  int threads;  // Number of concurrent threads to us
};
    
      if (!result.report_label.empty()) {
    printer(Out, COLOR_DEFAULT, ' %s', result.report_label.c_str());
  }
    
        // print the header
    for (auto B = elements.begin(); B != elements.end();) {
      Out << *B++;
      if (B != elements.end()) Out << ',';
    }
    for (auto B = user_counter_names_.begin(); B != user_counter_names_.end();) {
      Out << ',\'' << *B++ << '\'';
    }
    Out << '\n';
    
    namespace benchmark {
// NOTE: only i386 and x86_64 have been well tested.
// PPC, sparc, alpha, and ia64 are based on
//    http://peter.kuscsik.com/wordpress/?p=14
// with modifications by m3b.  See also
//    https://setisvn.ssl.berkeley.edu/svn/lib/fftw-3.0.1/kernel/cycle.h
namespace cycleclock {
// This should return the number of cycles since power-on.  Thread-safe.
inline BENCHMARK_ALWAYS_INLINE int64_t Now() {
#if defined(BENCHMARK_OS_MACOSX)
  // this goes at the top because we need ALL Macs, regardless of
  // architecture, to return the number of 'mach time units' that
  // have passed since startup.  See sysinfo.cc where
  // InitializeSystemInfo() sets the supposed cpu clock frequency of
  // macs to the number of mach time units per second, not actual
  // CPU clock frequency (which can change in the face of CPU
  // frequency scaling).  Also note that when the Mac sleeps, this
  // counter pauses; it does not continue counting, nor does it
  // reset to zero.
  return mach_absolute_time();
#elif defined(BENCHMARK_OS_EMSCRIPTEN)
  // this goes above x86-specific code because old versions of Emscripten
  // define __x86_64__, although they have nothing to do with it.
  return static_cast<int64_t>(emscripten_get_now() * 1e+6);
#elif defined(__i386__)
  int64_t ret;
  __asm__ volatile('rdtsc' : '=A'(ret));
  return ret;
#elif defined(__x86_64__) || defined(__amd64__)
  uint64_t low, high;
  __asm__ volatile('rdtsc' : '=a'(low), '=d'(high));
  return (high << 32) | low;
#elif defined(__powerpc__) || defined(__ppc__)
  // This returns a time-base, which is not always precisely a cycle-count.
  int64_t tbl, tbu0, tbu1;
  asm('mftbu %0' : '=r'(tbu0));
  asm('mftb  %0' : '=r'(tbl));
  asm('mftbu %0' : '=r'(tbu1));
  tbl &= -static_cast<int64_t>(tbu0 == tbu1);
  // high 32 bits in tbu1; low 32 bits in tbl  (tbu0 is garbage)
  return (tbu1 << 32) | tbl;
#elif defined(__sparc__)
  int64_t tick;
  asm('.byte 0x83, 0x41, 0x00, 0x00');
  asm('mov   %%g1, %0' : '=r'(tick));
  return tick;
#elif defined(__ia64__)
  int64_t itc;
  asm('mov %0 = ar.itc' : '=r'(itc));
  return itc;
#elif defined(COMPILER_MSVC) && defined(_M_IX86)
  // Older MSVC compilers (like 7.x) don't seem to support the
  // __rdtsc intrinsic properly, so I prefer to use _asm instead
  // when I know it will work.  Otherwise, I'll use __rdtsc and hope
  // the code is being compiled with a non-ancient compiler.
  _asm rdtsc
#elif defined(COMPILER_MSVC)
  return __rdtsc();
#elif defined(BENCHMARK_OS_NACL)
  // Native Client validator on x86/x86-64 allows RDTSC instructions,
  // and this case is handled above. Native Client validator on ARM
  // rejects MRC instructions (used in the ARM-specific sequence below),
  // so we handle it here. Portable Native Client compiles to
  // architecture-agnostic bytecode, which doesn't provide any
  // cycle counter access mnemonics.
    }
    }
    }
    
    #include 'benchmark/benchmark.h'
#include 'complexity.h'
    
    // NOTE: Wrappers for std::mutex and std::unique_lock are provided so that
// we can annotate them with thread safety attributes and use the
// -Wthread-safety warning with clang. The standard library types cannot be
// used directly because they do not provided the required annotations.
class CAPABILITY('mutex') Mutex {
 public:
  Mutex() {}
    }
    
      // Accumulators.
  std::vector<double> real_accumulated_time_stat;
  std::vector<double> cpu_accumulated_time_stat;
  std::vector<double> bytes_per_second_stat;
  std::vector<double> items_per_second_stat;